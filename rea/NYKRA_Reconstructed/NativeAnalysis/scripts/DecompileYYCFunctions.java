// Nomeia as funcoes YYC de NYKRA.exe a partir de yyc-function-table.json e descompila as pedidas.
// Uso (headless): -postScript DecompileYYCFunctions.java <yyc-function-table.json> <pasta_saida> <nome1,nome2,...>
// Cada funcao pedida vira <pasta_saida>/<nome>.c com o pseudocodigo do Ghidra.
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;

import java.io.File;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.util.Arrays;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class DecompileYYCFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 3) {
            throw new IllegalArgumentException("Esperado: <tabela.json> <pasta_saida> <nomes separados por virgula>");
        }
        String json = new String(Files.readAllBytes(new File(args[0]).toPath()), StandardCharsets.UTF_8);
        File outDir = new File(args[1]);
        outDir.mkdirs();
        Set<String> wanted = new HashSet<>(Arrays.asList(args[2].split(",")));

        Map<String, Address> table = new LinkedHashMap<>();
        Matcher m = Pattern.compile("\"name\":\\s*\"([^\"]+)\",\\s*\"va\":\\s*\"0x([0-9a-fA-F]+)\"").matcher(json);
        while (m.find()) {
            table.put(m.group(1), toAddr(Long.parseUnsignedLong(m.group(2), 16)));
        }
        println("Funcoes na tabela: " + table.size());

        int created = 0;
        for (Map.Entry<String, Address> e : table.entrySet()) {
            if (monitor.isCancelled()) {
                return;
            }
            Address a = e.getValue();
            if (getInstructionAt(a) == null) {
                new DisassembleCommand(a, null, true).applyTo(currentProgram, monitor);
            }
            Function f = getFunctionAt(a);
            if (f == null) {
                f = createFunction(a, e.getKey());
                if (f != null) {
                    created++;
                }
            }
            if (f != null && !f.getName().equals(e.getKey())) {
                f.setName(e.getKey(), SourceType.IMPORTED);
            }
        }
        println("Funcoes criadas: " + created);

        DecompInterface dec = new DecompInterface();
        dec.setOptions(new DecompileOptions());
        dec.openProgram(currentProgram);
        for (String name : wanted) {
            Address a = table.get(name);
            if (a == null) {
                println("NAO ENCONTRADA: " + name);
                continue;
            }
            Function f = getFunctionAt(a);
            if (f == null) {
                println("SEM FUNCAO: " + name);
                continue;
            }
            DecompileResults res = dec.decompileFunction(f, 600, monitor);
            if (!res.decompileCompleted()) {
                println("FALHOU: " + name + " -> " + res.getErrorMessage());
                continue;
            }
            String c = res.getDecompiledFunction().getC();
            Files.write(new File(outDir, name + ".c").toPath(), c.getBytes(StandardCharsets.UTF_8));
            println("OK: " + name + " (" + c.length() + " caracteres)");
        }
        dec.dispose();
    }
}
