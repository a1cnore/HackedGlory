// Find all functions that write to the trophy enabled flag at offset 0x18f21
// and the trophy data population code.
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class GhidraFindTrophyFlag extends GhidraScript {
    private DecompInterface decomp;

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";

        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);

        StringBuilder sb = new StringBuilder();
        sb.append("# Trophy Flag Setter Analysis\n\n");

        // 1. Decompile functions that build/populate the trophy section
        // FUN_100265bd4 reads the flag — let's trace its parent object chain
        // The caller FUN_10026609c passes param_1 which has the trophies
        // Let's find callers of FUN_10026609c
        sb.append("## 1. Callers of trophy tab switcher (FUN_10026609c)\n\n");
        sb.append(traceCallers(0x10026609cL, 5));

        // 2. FUN_100265438 is also called from FUN_10026609c — probably the other tab
        sb.append("## 2. FUN_100265438 (other tab handler)\n\n");
        sb.append(decompileAt(0x100265438L));

        // 3. The trophy data population — where does +0x18ef8 (count) and +0x18f00 (array) get set?
        // These are on a sub-object at param_1 + 0x17678 in FUN_100265bd4
        // Let's find FUN_1002603e8 which clears the trophy list
        sb.append("## 3. Trophy list clear (FUN_1002603e8)\n\n");
        sb.append(decompileAt(0x1002603e8L));

        // 4. FUN_100260d6c adds entries to the trophy list
        sb.append("## 4. Trophy entry adder (FUN_100260d6c)\n\n");
        sb.append(decompileAt(0x100260d6cL));

        // 5. The profile panel that contains trophies — trace the construction
        // From line 6435: thunk_FUN_10025fd1c(puVar6) — this creates the trophy sub-panel
        sb.append("## 5. Trophy sub-panel constructor (FUN_10025fd1c)\n\n");
        sb.append(decompileAt(0x10025fd1cL));
        sb.append("### Callers:\n\n");
        sb.append(traceCallers(0x10025fd1cL, 3));

        // 6. FUN_10025a800 — trophy page builder referenced in analysis
        sb.append("## 6. Trophy page builder (FUN_10025a800)\n\n");
        sb.append(decompileAt(0x10025a800L));

        // 7. Find FUN_1002604c4 — trophy data population function
        sb.append("## 7. Trophy data population (FUN_1002604c4)\n\n");
        sb.append(decompileAt(0x1002604c4L));
        sb.append("### Callers:\n\n");
        sb.append(traceCallers(0x1002604c4L, 3));

        // 8. The ranked skill tier display — FUN_10025c044
        sb.append("## 8. Ranked skill tier display (FUN_10025c044)\n\n");
        sb.append(decompileAt(0x10025c044L));

        // 9. FUN_10050c2bc — another trophyCase handler
        sb.append("## 9. TrophyCase handler (FUN_10050c2bc)\n\n");
        sb.append(decompileAt(0x10050c2bcL));

        // 10. The main profile data handler that processes startSessionForPlayer
        // and populates trophyCase data — FUN_100503314 (caller of trophy parsers)
        sb.append("## 10. Profile data handler (FUN_100503314)\n\n");
        sb.append(decompileAt(0x100503314L));

        String filepath = outputDir + "/trophy_flag_analysis.md";
        FileWriter fw = new FileWriter(filepath);
        fw.write(sb.toString());
        fw.close();
        decomp.dispose();
        println("[analysis] Wrote " + filepath + " (" + sb.length() + " bytes)");
    }

    private String decompileAt(long va) {
        Address addr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(va));
        FunctionManager fm = currentProgram.getFunctionManager();
        Function func = fm.getFunctionAt(addr);
        if (func == null) func = fm.getFunctionContaining(addr);
        if (func == null) return "*Not found at 0x" + Long.toHexString(va) + "*\n\n";
        StringBuilder sb = new StringBuilder();
        sb.append("#### `").append(func.getName()).append("` @ `0x")
          .append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");
        try {
            DecompileResults result = decomp.decompileFunction(func, 120, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                String code = result.getDecompiledFunction().getC();
                if (code.length() > 12000) code = code.substring(0, 12000) + "\n// ...truncated...";
                sb.append("```c\n").append(code).append("\n```\n\n");
            } else sb.append("*Decompilation failed*\n\n");
        } catch (Exception e) { sb.append("*Error*\n\n"); }
        return sb.toString();
    }

    private String traceCallers(long va, int max) {
        Address addr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(va));
        FunctionManager fm = currentProgram.getFunctionManager();
        Function func = fm.getFunctionAt(addr);
        if (func == null) func = fm.getFunctionContaining(addr);
        if (func == null) return "*Not found*\n\n";
        StringBuilder sb = new StringBuilder();
        ReferenceIterator refs = currentProgram.getReferenceManager().getReferencesTo(func.getEntryPoint());
        Set<Address> seen = new HashSet<>();
        int count = 0;
        while (refs.hasNext() && count < max) {
            Reference ref = refs.next();
            Function caller = fm.getFunctionContaining(ref.getFromAddress());
            if (caller == null || seen.contains(caller.getEntryPoint())) continue;
            seen.add(caller.getEntryPoint());
            sb.append(decompileAt(caller.getEntryPoint().getOffset()));
            count++;
        }
        if (count == 0) sb.append("*No callers found*\n\n");
        return sb.toString();
    }
}
