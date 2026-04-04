// Trace the visibility gating for leaderboard and social panels.
// Key targets:
// - FUN_1002a8eb0: leaderboard nav button callback
// - FUN_1002eb970: suspected visibility setter (called with 0 during init)
// - FUN_1002207b8: references leaderboard button name
// - The secondary nav update function that shows/hides based on feature state
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import java.io.*;
import java.util.*;

public class GhidraVisibilityGates extends GhidraScript {
    private DecompInterface decomp;

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        new File(outputDir).mkdirs();

        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);

        StringBuilder sb = new StringBuilder();
        sb.append("# UI Visibility Gating — Deep Trace\n\n");

        // 1. Decompile the button callbacks
        long[] callbacks = {
            0x1002a8eb0L, // leaderboard secondary nav callback
            0x1002a8e90L, // news nav callback
            0x1002a8ea0L, // settings nav callback
            0x1002a8ec0L, // academy nav callback
            0x1002a8e70L, // ice currency callback
            0x1002a8e80L, // glory currency callback
        };
        sb.append("## 1. Navigation Button Callbacks\n\n");
        for (long addr : callbacks) {
            sb.append(decompileAt(addr));
        }

        // 2. FUN_1002eb970 — suspected visibility setter
        sb.append("## 2. Suspected Visibility Setter (FUN_1002eb970)\n\n");
        sb.append(decompileAt(0x1002eb970L));
        // And its callers
        sb.append("### Callers:\n\n");
        sb.append(traceCallers(0x1002eb970L, 5));

        // 3. FUN_1002207b8 — references leaderboard button
        sb.append("## 3. FUN_1002207b8 (references leaderboard button)\n\n");
        sb.append(decompileAt(0x1002207b8L));
        sb.append("### Callers:\n\n");
        sb.append(traceCallers(0x1002207b8L, 3));

        // 4. Search for functions that reference both leaderboard AND a boolean check
        // Look at FUN_100221ff0 which is the big menu initialization function
        sb.append("## 4. Menu Initialization (FUN_100221ff0 — references SWITCH_TO_TAB)\n\n");
        sb.append(decompileAt(0x100221ff0L));

        // 5. The social panel/friends tab — where does it get shown?
        sb.append("## 5. Social/Friends Panel Controller\n\n");
        sb.append("### FUN_100502e58 (Social panel controller)\n\n");
        sb.append(decompileAt(0x100502e58L));
        sb.append("### Callers:\n\n");
        sb.append(traceCallers(0x100502e58L, 3));

        // 6. FUN_10020df80 — references friends status strings
        sb.append("## 6. Friends Status Handler (FUN_10020df80)\n\n");
        sb.append(decompileAt(0x10020df80L));

        // 7. Decompile the caller of FUN_1002a88f0 (home panel builder) to see who sets up the menu
        sb.append("## 7. Home Panel Builder Callers\n\n");
        sb.append(traceCallers(0x1002a88f0L, 3));

        String filepath = outputDir + "/visibility_gates.md";
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
            } else {
                sb.append("*Decompilation failed*\n\n");
            }
        } catch (Exception e) {
            sb.append("*Error: " + e.getMessage() + "*\n\n");
        }
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
