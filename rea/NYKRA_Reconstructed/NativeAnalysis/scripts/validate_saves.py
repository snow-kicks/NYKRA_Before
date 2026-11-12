#!/usr/bin/env python3
"""Validador do layout dos saves de NYKRA: Before (Fase 1.2 do plano).

Uso:
    python3 validate_saves.py              # valida DATA/CHAPTER_TEMPLATES inteiro
    python3 validate_saves.py -v           # mostra um resumo de cada arquivo
    python3 validate_saves.py --dump CAMINHO_DO_ARQUIVO

Layouts tirados de save_game, save_GENERAL, save_CONTROL, save_CHARACTER, _save_type e
_save_ds_list descompilados de NYKRA.exe (roteiros em ../decompiled/*.trace.txt).

Registro de instancia (o mesmo nos tres tipos de arquivo):
    string  nome do objeto
    f32     xstart, ystart, x, y
    s16     depth, speed, direction, friction, gravity, sprite_index, image_index, image_speed
    f32     image_alpha
    u32     image_blend, visible
    s16     alarm[0..11]
    u16     quantidade de variaveis; cada uma: string nome + valor tipado
Valor tipado (_save_type):
    1 = numero (f32)   2 = string   3 = array (u16 n + n valores tipados)   4 = bool (u8)
    variaveis de outros tipos gravam so o nome, sem valor nenhum

GENERAL    string CURRENT_PLANET, string CURRENTROOM, u32 D_NUMBER, u8, u8
CONTROL    registro de oControl, depois u8 final
CHARACTER  registro de oPlayer + ds_list books + ds_list PLANET_FOUND, depois outros registros
ROOMS/*.SAVE  u8 mw, u8 mh, u8 planet, grade mw*mh u16, registros ate um nome vazio
ds_list (_save_ds_list): u16 tamanho + tamanho x f32
"""
import argparse
import json
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ASSETS = os.path.normpath(os.path.join(HERE, "..", "..", "RecoveredAssets"))
TEMPLATES = os.path.join(ASSETS, "Included Files", "DATA", "CHAPTER_TEMPLATES")
OBJECTS_JSON = os.path.join(ASSETS, "Metadata", "objects-metadata.json")

INSTANCE_FIELDS = [
    ("xstart", "f"), ("ystart", "f"), ("x", "f"), ("y", "f"),
    ("depth", "h"), ("speed", "h"), ("direction", "h"), ("friction", "h"), ("gravity", "h"),
    ("sprite_index", "h"), ("image_index", "h"), ("image_speed", "h"),
    ("image_alpha", "f"), ("image_blend", "I"), ("visible", "I"),
]
TYPE_TAGS = (1, 2, 3, 4)


class LayoutError(Exception):
    pass


class Reader:
    def __init__(self, data):
        self.b = data
        self.o = 0

    def unpack(self, fmt):
        size = struct.calcsize("<" + fmt)
        if self.o + size > len(self.b):
            raise LayoutError(f"fim do arquivo ao ler {size} byte(s) no offset {self.o}")
        v = struct.unpack_from("<" + fmt, self.b, self.o)
        self.o += size
        return v[0] if len(v) == 1 else list(v)

    def cstr(self):
        end = self.b.find(b"\0", self.o)
        if end < 0:
            raise LayoutError(f"string sem terminador no offset {self.o}")
        s = self.b[self.o:end].decode("latin-1")
        self.o = end + 1
        return s

    def peek(self):
        return self.b[self.o] if self.o < len(self.b) else None

    def left(self):
        return len(self.b) - self.o


def read_value(r, stats):
    tag = r.peek()
    if tag not in TYPE_TAGS:
        stats["sem_valor"] += 1
        return {"type": None}
    r.o += 1
    if tag == 1:
        return r.unpack("f")
    if tag == 2:
        return r.cstr()
    if tag == 4:
        return bool(r.unpack("B"))
    return [read_value(r, stats) for _ in range(r.unpack("H"))]


def read_instance(r, objs, stats):
    start = r.o
    name = r.cstr()
    if name not in objs:
        raise LayoutError(f"registro no offset {start} com objeto desconhecido {name!r}")
    inst = {"object": name}
    for field, fmt in INSTANCE_FIELDS:
        inst[field] = r.unpack(fmt)
    inst["alarm"] = r.unpack("12h")
    variables = {}
    for _ in range(r.unpack("H")):
        var = r.cstr()
        if not var or not (var[0].isalpha() or var[0] == "_"):
            raise LayoutError(f"nome de variavel invalido {var!r} perto do offset {r.o} ({name})")
        variables[var] = read_value(r, stats)
    inst["vars"] = variables
    stats["instancias"] += 1
    stats["variaveis"] += len(variables)
    return inst


def read_ds_list(r):
    return [r.unpack("f") for _ in range(r.unpack("H"))]


def parse_general(r, objs, stats):
    return {"CURRENT_PLANET": r.cstr(), "CURRENTROOM": r.cstr(), "D_NUMBER": r.unpack("I"),
            "byte_a": r.unpack("B"), "byte_b": r.unpack("B")}


def parse_control(r, objs, stats):
    out = {"instances": []}
    while r.left() > 1:
        out["instances"].append(read_instance(r, objs, stats))
    out["final_byte"] = r.unpack("B")
    return out


def parse_character(r, objs, stats):
    player = read_instance(r, objs, stats)
    out = {"player": player, "books": read_ds_list(r), "PLANET_FOUND": read_ds_list(r), "others": []}
    while r.left() > 0 and r.peek() != 0:
        out["others"].append(read_instance(r, objs, stats))
    out["tail"] = r.b[r.o:].hex()
    r.o = len(r.b)
    return out


def parse_room(r, objs, stats):
    w, h, planet = r.unpack("B"), r.unpack("B"), r.unpack("B")
    if w == 0 or h == 0:
        raise LayoutError(f"dimensoes invalidas {w}x{h}")
    grid = r.unpack(f"{w * h}H")
    out = {"width": w, "height": h, "planet": planet,
           "grid_nonzero": sum(1 for c in grid if c), "instances": []}
    while r.left() > 0 and r.peek() != 0:
        out["instances"].append(read_instance(r, objs, stats))
    out["final_byte"] = r.unpack("B")
    return out


def parser_for(path):
    base = os.path.basename(path)
    if base.endswith(".SAVE"):
        return parse_room
    return {"GENERAL": parse_general, "CONTROL": parse_control, "CHARACTER": parse_character}.get(base)


def parse_file(path, objs):
    parser = parser_for(path)
    if parser is None:
        raise LayoutError("tipo de arquivo nao reconhecido")
    with open(path, "rb") as f:
        r = Reader(f.read())
    stats = {"instancias": 0, "variaveis": 0, "sem_valor": 0}
    out = parser(r, objs, stats)
    if r.left():
        raise LayoutError(f"{r.left()} byte(s) nao explicados a partir do offset {r.o}")
    out["_stats"] = stats
    return out


def main():
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--root", default=TEMPLATES, help="pasta com os saves")
    ap.add_argument("--objects", default=OBJECTS_JSON)
    ap.add_argument("--dump", metavar="ARQ", help="mostra um arquivo decodificado")
    ap.add_argument("-v", "--verbose", action="store_true")
    args = ap.parse_args()

    with open(args.objects, encoding="utf-8") as f:
        objs = {o["Name"] for o in json.load(f)}

    if args.dump:
        print(json.dumps(parse_file(args.dump, objs), indent=1, ensure_ascii=False))
        return

    files = sorted(os.path.join(d, n) for d, _, names in os.walk(args.root) for n in names
                   if not n.startswith("."))
    ok, failed = 0, []
    for path in files:
        rel = os.path.relpath(path, args.root)
        try:
            out = parse_file(path, objs)
        except LayoutError as e:
            failed.append(rel)
            print(f"FALHA  {rel}: {e}")
            continue
        ok += 1
        if args.verbose:
            s = out["_stats"]
            print(f"OK     {rel}: {s['instancias']} instancias, {s['variaveis']} variaveis, "
                  f"{s['sem_valor']} sem valor")
    print(f"\n{len(files)} arquivos: {ok} OK, {len(failed)} com falha")
    sys.exit(1 if failed else 0)


if __name__ == "__main__":
    main()
