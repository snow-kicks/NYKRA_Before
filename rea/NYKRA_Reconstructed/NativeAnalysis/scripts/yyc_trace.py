#!/usr/bin/env python3
"""Condensa o pseudocodigo Ghidra de uma funcao YYC de NYKRA.exe num roteiro parecido com GML.

Uso:
    python3 yyc_trace.py decompiled/gml_Script_map_save.c > map_save.trace.txt

O que ele resolve, lendo NYKRA.exe diretamente:
  - numero da linha do GML original (o YYC grava a linha atual numa variavel de pilha);
  - nomes de variaveis de instancia (ids >= 100000) e de variaveis embutidas (x, y, depth...);
  - nomes das funcoes embutidas chamadas e, por rastreio simbolico simples, seus argumentos;
  - constantes numericas/strings e indices de objeto (traduzidos para o nome do objeto);
  - leituras/escritas de buffer com o tipo (u8, s16, string...).
A saida mantem a indentacao dos blocos if/while do pseudocodigo. O rastreio e linear (nao
entende desvios), entao um argumento pode aparecer errado depois de um if/else: na duvida,
conferir no .c correspondente.
"""
import json
import os
import re
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.normpath(os.path.join(HERE, "..", ".."))
EXE = os.path.join(ROOT, "RuntimeBaseline", "NYKRA.exe")
OBJECTS_JSON = os.path.join(ROOT, "RecoveredAssets", "Metadata", "objects-metadata.json")

BUFFER_TYPES = {1: "u8", 2: "s8", 3: "u16", 4: "s16", 5: "u32", 6: "s32", 7: "f16", 8: "f32",
                9: "f64", 10: "bool", 11: "string", 12: "u64", 13: "text"}

# Rotinas do runtime YYC identificadas pelo uso.
CALL = "FUN_1416ab210"          # (self, other, &result, argc, id_da_funcao, args)
BUFFER_WRITE = "FUN_1416fbbe0"  # (buffer, tipo, valor)
GETTERS = r"FUN_1416(?:cfc30|cfeb0|cea80|d0010)"   # (instancia, var, indice, &destino, ...)
SETTERS = r"FUN_1416d0(?:720|790)"                 # (instancia, var, indice, &origem)
LOAD_CONST = "FUN_140002730"    # (&destino, endereco_da_constante)
LOAD_STRING = "FUN_1416ab000"   # (&destino, endereco_de_um_char*)
COPY = "FUN_1400019a0"          # (destino, origem)
COMPARE = "FUN_1416d9df0"       # (a, b, epsilon, ...)
TO_REAL = "FUN_1416940c0"
TO_BOOL = "FUN_1416927d0"
NO_INDEX = "0x80000000"


class Exe:
    def __init__(self, path):
        with open(path, "rb") as f:
            self.d = f.read()
        pe = struct.unpack_from("<I", self.d, 0x3C)[0]
        nsec = struct.unpack_from("<H", self.d, pe + 6)[0]
        opt = struct.unpack_from("<H", self.d, pe + 20)[0]
        self.base = struct.unpack_from("<Q", self.d, pe + 48)[0]
        self.secs = []
        for i in range(nsec):
            o = pe + 24 + opt + 40 * i
            name = self.d[o:o + 8].rstrip(b"\0").decode()
            vsize, va, rsize, roff = struct.unpack_from("<IIII", self.d, o + 8)
            self.secs.append((name, self.base + va, min(vsize, rsize), roff))
        self.lo = min(s[1] for s in self.secs)
        self.hi = max(s[1] + s[2] for s in self.secs)

    def off(self, va):
        for _, start, size, roff in self.secs:
            if start <= va < start + size:
                return roff + va - start
        return None

    def cstr(self, va):
        o = self.off(va)
        if o is None:
            return None
        e = self.d.find(b"\0", o, o + 400)
        s = self.d[o:e]
        if e >= o and all(32 <= c < 127 for c in s):
            return s.decode("latin-1")
        return None

    def named_slot(self, va):
        """Nome de uma entrada {char* nome; int id}: o codigo referencia o campo id."""
        o = self.off(va)
        if o is None or o < 8:
            return None
        return self.cstr(struct.unpack_from("<Q", self.d, o - 8)[0])

    def rvalue(self, va):
        """Constante RValue: double (kind 0) ou string (kind 1). None se nao esta no arquivo."""
        o = self.off(va)
        if o is None:
            return None
        kind = struct.unpack_from("<I", self.d, o + 12)[0] & 0xFFFFFF
        if kind == 0:
            return struct.unpack_from("<d", self.d, o)[0]
        ptr = struct.unpack_from("<Q", self.d, o)[0]
        s = self.cstr(ptr)
        if s is None:
            p2 = self.off(ptr)
            s = self.cstr(struct.unpack_from("<Q", self.d, p2)[0]) if p2 is not None else None
        return s

    def variable_names(self):
        names = {}
        for name, start, size, roff in self.secs:
            if name not in (".data", ".rdata"):
                continue
            for o in range(roff, roff + size - 16, 8):
                ptr, val = struct.unpack_from("<Qi", self.d, o)
                if self.lo <= ptr < self.hi and 100000 <= val < 120000:
                    s = self.cstr(ptr)
                    if s and re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", s):
                        names.setdefault(val, s)
        return names


def split_args(text):
    """Separa argumentos no nivel de parenteses zero."""
    args, depth, cur = [], 0, ""
    for ch in text:
        if ch == "," and depth == 0:
            args.append(cur.strip())
            cur = ""
            continue
        depth += ch in "(["
        depth -= ch in ")]"
        cur += ch
    if cur.strip():
        args.append(cur.strip())
    return args


def call_args(stmt, func):
    """Argumentos da chamada `func(...)` dentro de stmt."""
    start = stmt.index(func + "(") + len(func) + 1
    depth, i = 1, start
    while i < len(stmt) and depth:
        depth += stmt[i] == "("
        depth -= stmt[i] == ")"
        i += 1
    return split_args(stmt[start:i - 1])


def main():
    if len(sys.argv) != 2:
        sys.exit(__doc__)
    exe = Exe(EXE)
    var_names = exe.variable_names()
    with open(OBJECTS_JSON, encoding="utf-8") as f:
        objects = {o["Index"]: o["Name"] for o in json.load(f)}

    src = []
    with open(sys.argv[1], encoding="utf-8") as f:
        for part in f.read().split("\n"):
            # junta instrucoes que o Ghidra quebrou em varias linhas
            if src and src[-1].strip() and not src[-1].rstrip().endswith((";", "{", "}", ":", "*/")):
                src[-1] = src[-1].rstrip() + " " + part.strip()
            else:
                src.append(part)

    # a variavel de pilha que guarda a linha do GML e a que mais recebe inteiros pequenos
    counts = {}
    for raw in src:
        m = re.match(r"\s*(\w+Stack_\w+) = (0x[0-9a-f]{1,3}|\d{1,4});$", raw)
        if m:
            counts[m.group(1)] = counts.get(m.group(1), 0) + 1
    line_var = max(counts, key=counts.get) if counts else ""

    expr = {}   # variavel/slot do Ghidra -> expressao
    ptrs = {}   # offset de pilha de um ponteiro de argumento -> slot apontado
    alias = {}  # variavel que guarda o endereco de um vetor de argumentos -> offset base

    def fmt_const(value):
        if value is None:
            return "0"
        if isinstance(value, str):
            return json.dumps(value)
        if value == value and abs(value) < 1e15 and value == int(value):
            return str(int(value))
        return repr(value)

    def E(token):
        token = token.strip()
        token = re.sub(r"^\((?:longlong|double|ulonglong|undefined8|int|uint)\)", "", token).lstrip("&")
        return expr.get(token, token)

    def inst(token):
        token = token.strip()
        if re.fullmatch(r"0x[0-9a-f]+|\d+", token):
            return objects.get(int(token, 0), token)
        if re.fullmatch(r"(pl|u|pu)Stack_\w+|param_1|plVar\d+", token) and token.lstrip("&") not in expr:
            return "self"
        return E(token)

    def dat_name(m):
        return exe.named_slot(int(m.group(1), 16)) or m.group(0)

    def stack_off(name):
        m = re.fullmatch(r"&?p+\w*Stack_([0-9a-f]+)", name.strip())
        return int(m.group(1), 16) if m else None

    line = None
    out = []
    for raw in src:
        s = raw.strip()
        if not s:
            continue
        m = re.match(r"(\w+) = (0x[0-9a-f]+|\d+);$", s)
        if m and m.group(1) == line_var:
            line = int(m.group(2), 0)
            continue
        indent = "  " * ((len(raw) - len(raw.lstrip())) // 2)
        tag = f"{indent}L{line}: "
        s = re.sub(r"_DAT_([0-9a-f]{9})", dat_name, s)
        s = re.sub(r"0x18[0-9a-f]{3}\b", lambda mm: var_names.get(int(mm.group(0), 16), mm.group(0)), s)
        s = re.sub(r"CONCAT44\(\w+,([A-Za-z_][A-Za-z0-9_]*)\)", r"\1", s)

        # --- atribuicoes simples que so alimentam o rastreio ---
        m = re.match(r"(\w+) = (0x[0-9a-f]{16});$", s)
        if m:
            expr[m.group(1)] = fmt_const(struct.unpack("<d", struct.pack("<Q", int(m.group(2), 16)))[0])
            continue
        m = re.match(r"(p+\w*Stack_[0-9a-f]+) = &(\w+);$", s)
        if m:
            target = m.group(2)
            if re.match(r"p+\w*Stack_", target) and stack_off(target) is not None:
                alias[m.group(1)] = stack_off(target)
            ptrs[stack_off(m.group(1))] = target
            continue
        m = re.match(r"(p+\w*Var\d+) = &(p+\w*Stack_[0-9a-f]+);$", s)
        if m:
            alias[m.group(1)] = stack_off(m.group(2))
            continue
        m = re.match(r"(\w+) = ([A-Za-z_][A-Za-z0-9_]*);$", s)
        if m and not re.match(r"(u|i|c|d|l|b|p+[a-z]*|a[a-z]*)(Var|Stack)|param_|DAT_|_DAT_|FUN_|UNK_|LAB_",
                              m.group(2)):
            expr[m.group(1)] = m.group(2)   # id de funcao/variavel guardado num registrador
            continue
        m = re.match(r"(\w+) = \(\*\*\(code \*\*\)\(\*\w+ \+ (?:8|0x10)\)\)\(\w+,(\w+)\);$", s)
        if m:
            expr[m.group(1)] = m.group(2)   # variavel de self
            continue
        if LOAD_CONST + "(" in s:
            a = call_args(s, LOAD_CONST)
            value = exe.rvalue(int(a[1], 0))
            text = fmt_const(value)
            if isinstance(value, float) and value == value and int(value) in objects and value > 13:
                text += f" /*{objects[int(value)]}*/"
            expr[a[0].lstrip("&")] = text
            continue
        if LOAD_STRING + "(" in s:
            a = call_args(s, LOAD_STRING)
            if re.fullmatch(r"0x[0-9a-f]+", a[1]):
                addr = int(a[1], 16)
                o = exe.off(addr)
                text = exe.cstr(struct.unpack_from("<Q", exe.d, o)[0]) if o is not None else None
                if text is None:
                    text = exe.cstr(addr)
                expr[a[0].lstrip("&")] = json.dumps(text) if text is not None else a[1]
                continue
        m = re.search(r"(\w+) = \(double\)" + TO_REAL + r"\((&?\w+)\);", s)
        if m:
            expr[m.group(1)] = E(m.group(2))
            continue
        m = re.search(GETTERS + r"\(", s)
        if m:
            a = call_args(s, m.group(0)[:-1])
            idx = "" if a[2] == NO_INDEX else f"[{E(a[2])}]"
            owner = inst(a[0])
            expr[a[3].lstrip("&")] = (f"{owner}." if owner != "self" else "") + a[1] + idx
            continue

        # --- instrucoes que aparecem na saida ---
        m = re.search(SETTERS + r"\(", s)
        if m:
            a = call_args(s, m.group(0)[:-1])
            idx = "" if a[2] == NO_INDEX else f"[{E(a[2])}]"
            owner = inst(a[0])
            out.append(f"{tag}{(owner + '.') if owner != 'self' else ''}{a[1]}{idx} = {E(a[3])};")
        elif BUFFER_WRITE + "(" in s:
            a = call_args(s, BUFFER_WRITE)
            t = BUFFER_TYPES.get(int(a[1], 0), a[1]) if re.fullmatch(r"0x[0-9a-f]+|\d+", a[1]) else a[1]
            out.append(f"{tag}buffer_write(buf, buffer_{t}, {E(a[2])});")
        elif CALL + "(" in s:
            a = call_args(s, CALL)
            argc = int(a[3], 0) if re.fullmatch(r"0x[0-9a-f]+|\d+", a[3]) else 0
            base = stack_off(a[5]) if stack_off(a[5]) is not None else alias.get(a[5].lstrip("&"))
            args = []
            for k in range(argc):
                slot = ptrs.get(base - 8 * k) if base is not None else None
                args.append(E(slot) if slot else "?")
            text = f"{E(a[4])}({', '.join(args)})"
            m = re.match(r"(\w+) = ", s)
            if m:
                expr[m.group(1)] = text
            else:
                out.append(f"{tag}{text};")
        elif s.startswith(COPY + "("):
            a = call_args(s, COPY)
            dst, value = a[0], E(a[1])
            if dst.startswith("&"):
                slot = dst[1:]
                if "(" in value:                      # resultado de chamada: vira variavel local
                    out.append(f"{tag}var v_{slot.split('_')[-1]} = {value};")
                    expr[slot] = f"v_{slot.split('_')[-1]}"
                else:
                    expr[slot] = value
            else:
                out.append(f"{tag}{E(dst)} = {value};")
        elif COMPARE + "(" in s:
            a = call_args(s, COMPARE)
            out.append(f"{tag}cmp({E(a[0])}, {E(a[1])})")
        elif TO_BOOL + "(" in s:
            out.append(f"{tag}test({E(call_args(s, TO_BOOL)[0])})")
        elif re.match(r"(if|while|else|do|\} while|\} else|return)\b", s):
            if "0x46U >>" not in s and "& 0xffffff) == 0" not in s and s != "else {":
                out.append(f"{tag}{s}")
        elif "gml_Script_" in s or "gml_Object_" in s:
            out.append(f"{tag}{s}")
    print("\n".join(out))


if __name__ == "__main__":
    main()
