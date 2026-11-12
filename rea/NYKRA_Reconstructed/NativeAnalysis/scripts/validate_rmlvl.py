#!/usr/bin/env python3
"""Validador do layout binario dos niveis .rmlvl de NYKRA: Before (Fase 1.2 do plano).

Uso:
    python3 validate_rmlvl.py                 # valida os 183 niveis do repositorio
    python3 validate_rmlvl.py -v              # lista tambem os niveis sem ressalvas
    python3 validate_rmlvl.py --dump NOME     # mostra o conteudo decodificado de um nivel
    python3 validate_rmlvl.py --json saida.json

Layout conferido contra gml_Script_map_save / gml_Script_map_load descompilados de NYKRA.exe
(roteiros em ../decompiled/*.trace.txt; "Lnn" abaixo e a linha do GML original de map_save):

    L37-42  u8 map_n, u8 mw, u8 mh, u8 planet, u8 horizon, 3 x u8 zerados
    L44-46  camada 0: mw*mh celulas u16 (grade `map`), coluna a coluna (x externo, y interno)
    L50-55  6 camadas de tilemap, mesmo formato
    L61-66  lista de assets: u16 quantidade; cada um u16 x, u16 y, string\\0 (nome do sprite)
    L70-75  segunda lista de assets, mesmo formato
    L85     u16 quantidade de objetos; cada um:
    L92-95      s16 xstart, s16 ystart, s16 depth, string\\0 (nome do objeto)
    L97+        dados extras conforme o tipo (ver read_extras)
    o arquivo pode terminar com zeros (buffer salvo com a capacidade inteira)

Ressalvas que o validador aponta:
  - descendentes de parWire gravam ate 20 valores s16, um para cada variavel que EXISTIA na
    instancia no momento do save (variable_instance_exists). Quantos sao nao esta no arquivo;
    aqui a quantidade e deduzida procurando o proximo registro valido.
  - alguns arquivos declaram mais objetos do que contem (map_load le zeros e ignora).
"""
import argparse
import json
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ASSETS = os.path.normpath(os.path.join(HERE, "..", "..", "RecoveredAssets"))
LEVELS = os.path.join(ASSETS, "Included Files", "level_data")
OBJECTS_JSON = os.path.join(ASSETS, "Metadata", "objects-metadata.json")

N_LAYERS = 7
N_ASSET_LISTS = 2
MAX_WIRE_VALUES = 20


class LayoutError(Exception):
    pass


class Objects:
    """Nomes e hierarquia de objetos do jogo (objects-metadata.json)."""

    def __init__(self, path):
        with open(path, encoding="utf-8") as f:
            self.parent = {o["Name"]: o["Parent"] for o in json.load(f)}

    def __contains__(self, name):
        return name in self.parent

    def is_ancestor(self, name, ancestor):
        """Equivalente a object_is_ancestor: falso quando name == ancestor."""
        p = self.parent.get(name)
        while p:
            if p == ancestor:
                return True
            p = self.parent.get(p)
        return False


class Reader:
    def __init__(self, data):
        self.b = data
        self.o = 0

    def _unpack(self, fmt, n):
        if self.o + n > len(self.b):
            raise LayoutError(f"fim do arquivo ao ler {n} byte(s) no offset {self.o}")
        v = struct.unpack_from(fmt, self.b, self.o)[0]
        self.o += n
        return v

    def u8(self):
        return self._unpack("<B", 1)

    def u16(self):
        return self._unpack("<H", 2)

    def s16(self):
        return self._unpack("<h", 2)

    def cells(self, n):
        if self.o + n * 2 > len(self.b):
            raise LayoutError(f"fim do arquivo ao ler camada no offset {self.o}")
        v = list(struct.unpack_from(f"<{n}H", self.b, self.o))
        self.o += n * 2
        return v

    def cstr(self):
        end = self.b.find(b"\0", self.o)
        if end < 0:
            raise LayoutError(f"string sem terminador no offset {self.o}")
        s = self.b[self.o:end].decode("latin-1")
        self.o = end + 1
        return s

    def rest_is_zero(self):
        return not any(self.b[self.o:])


def record_at(data, off, objs):
    """True se em `off` comeca um registro de objeto com nome conhecido."""
    end = data.find(b"\0", off + 6)
    return end > off + 6 and data[off + 6:end].decode("latin-1") in objs


def read_extras(r, name, objs, notes, is_last):
    """Mesma cadeia de if/else de map_save (linhas 97-162 do GML original)."""
    if name == "PATH":
        return {"n": r.u8(), "rm": r.cstr()}
    if objs.is_ancestor(name, "parLootable"):
        locked, count = r.u16(), r.u16()
        return {"locked": locked, "INV": [[r.u16(), r.u16()] for _ in range(count)]}
    if objs.is_ancestor(name, "parDoor_out"):
        return {"locked": r.u8()}
    if objs.is_ancestor(name, "parDoor_Flat"):
        return {"locked": r.u8(), "n": r.u8(), "rm": r.cstr()}
    if name == "oRoof_angle":
        return {"width": r.u16(), "repeat_t": r.u16(), "material": r.u8(), "dir": r.s16()}
    if objs.is_ancestor(name, "parNote"):
        return {"text": r.cstr(), "page": r.u8()}
    if name == "oBook" or objs.is_ancestor(name, "oBook"):
        return {"book": r.u8(), "book_text": r.u8()}
    if objs.is_ancestor(name, "parWire"):
        # Quantidade de valores depende de quais variaveis a instancia tinha ao salvar.
        for k in range(MAX_WIRE_VALUES + 1):
            pos = r.o + 2 * k
            done = (pos >= len(r.b) or not any(r.b[pos:])) if is_last else record_at(r.b, pos, objs)
            if done:
                if k:
                    notes.add(f"{name} com {k} valor(es) s16 de estado de fio")
                    return {"wire_state": [r.s16() for _ in range(k)]}
                return None
        raise LayoutError(f"{name} no offset {r.o}: nao achei o fim dos valores de fio")
    return None


def parse_level(data, objs):
    notes = set()
    r = Reader(data)
    map_n, w, h, planet, horizon = r.u8(), r.u8(), r.u8(), r.u8(), r.u8()
    reserved = [r.u8(), r.u8(), r.u8()]
    if w == 0 or h == 0:
        raise LayoutError(f"dimensoes invalidas {w}x{h}")
    if any(reserved):
        notes.add(f"bytes reservados do cabecalho nao zerados: {reserved}")
    layers = [r.cells(w * h) for _ in range(N_LAYERS)]

    asset_lists = []
    for _ in range(N_ASSET_LISTS):
        items = []
        for _ in range(r.u16()):
            x, y = r.u16(), r.u16()
            items.append({"x": x, "y": y, "sprite": r.cstr()})
        asset_lists.append(items)

    declared = r.u16()
    objects = []
    for i in range(declared):
        if r.o >= len(data) or r.rest_is_zero():
            notes.add(f"declara {declared} objetos mas contem {len(objects)}")
            break
        start = r.o
        x, y, depth = r.s16(), r.s16(), r.s16()
        name = r.cstr()
        if name not in objs:
            raise LayoutError(f"objeto #{i} no offset {start} com nome desconhecido {name!r}")
        obj = {"x": x, "y": y, "depth": depth, "name": name}
        extra = read_extras(r, name, objs, notes, i == declared - 1)
        if extra:
            obj["extra"] = extra
        objects.append(obj)

    if not r.rest_is_zero():
        raise LayoutError(f"{len(data) - r.o} byte(s) nao explicados a partir do offset {r.o}")
    return {
        "map_n": map_n, "width": w, "height": h, "planet": planet, "horizon": horizon,
        "layers": layers, "asset_lists": asset_lists, "objects": objects,
        "declared_objects": declared, "padding": len(data) - r.o, "notes": sorted(notes),
    }


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--levels", default=LEVELS, help="pasta com os .rmlvl")
    ap.add_argument("--objects", default=OBJECTS_JSON, help="objects-metadata.json")
    ap.add_argument("--dump", metavar="NOME", help="mostra um nivel decodificado (sem as camadas)")
    ap.add_argument("--json", metavar="ARQ", help="grava o resultado completo em JSON")
    ap.add_argument("-v", "--verbose", action="store_true")
    args = ap.parse_args()

    objs = Objects(args.objects)
    files = sorted(n for n in os.listdir(args.levels) if n.endswith(".rmlvl"))
    if not files:
        sys.exit(f"nenhum .rmlvl em {args.levels}")

    if args.dump:
        name = args.dump if args.dump.endswith(".rmlvl") else args.dump + ".rmlvl"
        with open(os.path.join(args.levels, name), "rb") as f:
            lvl = parse_level(f.read(), objs)
        lvl["layers"] = [f"{sum(1 for c in layer if c)} celulas nao-zero" for layer in lvl["layers"]]
        print(json.dumps(lvl, indent=2, ensure_ascii=False))
        return

    ok, noted, failed, out = [], [], [], {}
    for name in files:
        with open(os.path.join(args.levels, name), "rb") as f:
            data = f.read()
        try:
            lvl = parse_level(data, objs)
        except LayoutError as e:
            failed.append((name, str(e)))
            out[name] = {"error": str(e)}
            continue
        out[name] = lvl
        (noted if lvl["notes"] else ok).append(name)
        if args.verbose and not lvl["notes"]:
            print(f"OK        {name}: {lvl['width']}x{lvl['height']}, planeta {lvl['planet']}, "
                  f"{sum(map(len, lvl['asset_lists']))} assets, {len(lvl['objects'])} objetos")

    for name in noted:
        print(f"RESSALVA  {name}: " + "; ".join(out[name]["notes"]))
    for name, err in failed:
        print(f"FALHA     {name}: {err}")
    total_objs = sum(len(v.get("objects", [])) for v in out.values())
    print(f"\n{len(files)} niveis: {len(ok)} OK, {len(noted)} com ressalva, {len(failed)} com falha; "
          f"{total_objs} objetos lidos")

    if args.json:
        with open(args.json, "w", encoding="utf-8") as f:
            json.dump(out, f, ensure_ascii=False)
    sys.exit(1 if failed else 0)


if __name__ == "__main__":
    main()
