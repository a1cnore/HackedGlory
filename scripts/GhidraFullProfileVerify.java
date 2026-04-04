import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.io.*;

/**
 * Decompile the key functions for the full profile panel fix:
 * - FUN_100221f98: the full profile panel opener (our target)
 * - FUN_100221ff0: the profile panel initializer (creates ranked tabs + trophies)
 * - FUN_100220d08: the simplified popup card (what currently shows)
 * - FUN_1001f3b40: the gated decision function
 * - FUN_10014e20c: the guest/trial gate check
 * - FUN_1001fa7b0: what hook_avatar_tap currently calls
 */
public class GhidraFullProfileVerify extends GhidraScript {
    private DecompInterface decomp;

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);

        StringBuilder sb = new StringBuilder();
        sb.append("# Full Profile Panel Verification\n\n");

        // 1. The full profile opener — our target call
        sb.append("## FUN_100221f98 — Full Profile Panel Opener (TARGET)\n\n");
        sb.append(decompAt(0x100221f98L, 6000));

        // 2. The profile panel initializer
        sb.append("## FUN_100221ff0 — Profile Panel Init (ranked tabs + trophies)\n\n");
        sb.append(decompAt(0x100221ff0L, 15000));

        // 3. The simplified popup card — what currently shows
        sb.append("## FUN_100220d08 — Simplified Popup Card (CURRENT, broken path)\n\n");
        sb.append(decompAt(0x100220d08L, 10000));

        // 4. The gated decision function
        sb.append("## FUN_1001f3b40 — Profile Open Decision (has guest gate)\n\n");
        sb.append(decompAt(0x1001f3b40L, 3000));

        // 5. The guest gate check
        sb.append("## FUN_10014e20c — Guest/Trial Gate Check\n\n");
        sb.append(decompAt(0x10014e20cL, 3000));

        // 6. What hook_avatar_tap currently calls
        sb.append("## FUN_1001fa7b0 — Current Profile Opener (shows simplified card)\n\n");
        sb.append(decompAt(0x1001fa7b0L, 10000));

        // 7. FUN_100220a38 — called by FUN_1001fa7b0
        sb.append("## FUN_100220a38 — Called by 1001fa7b0\n\n");
        sb.append(decompAt(0x100220a38L, 10000));

        // 8. Callers of FUN_100221f98
        sb.append("## Callers of FUN_100221f98\n\n");
        sb.append(traceCallers(0x100221f98L, 5));

        String path = outputDir + "/full_profile_verify.md";
        FileWriter fw = new FileWriter(path);
        fw.write(sb.toString());
        fw.close();
        decomp.dispose();
        println("[analysis] Wrote " + path + " (" + sb.length() + " bytes)");
    }

    private String decompAt(long va, int maxLen) {
        Address addr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(va));
        FunctionManager fm = currentProgram.getFunctionManager();
        Function func = fm.getFunctionAt(addr);
        if (func == null) func = fm.getFunctionContaining(addr);
        if (func == null) return "*Not found at 0x" + Long.toHexString(va) + "*\n\n";
        StringBuilder sb = new StringBuilder();
        sb.append("### `").append(func.getName()).append("` @ `0x")
          .append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");
        try {
            DecompileResults r = decomp.decompileFunction(func, 180, monitor);
            if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                String c = r.getDecompiledFunction().getC();
                if (c.length() > maxLen) c = c.substring(0, maxLen) + "\n// ...truncated...";
                sb.append("```c\n").append(c).append("\n```\n\n");
            } else {
                sb.append("*Decompilation failed*\n\n");
            }
        } catch (Exception e) {
            sb.append("*Error: ").append(e.getMessage()).append("*\n\n");
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
        ghidra.program.model.symbol.ReferenceIterator refs =
            currentProgram.getReferenceManager().getReferencesTo(func.getEntryPoint());
        java.util.Set<Address> seen = new java.util.HashSet<>();
        int count = 0;
        while (refs.hasNext() && count < max) {
            ghidra.program.model.symbol.Reference ref = refs.next();
            Function caller = fm.getFunctionContaining(ref.getFromAddress());
            if (caller == null || seen.contains(caller.getEntryPoint())) continue;
            seen.add(caller.getEntryPoint());
            sb.append("### Caller: `").append(caller.getName()).append("` @ `0x")
              .append(Long.toHexString(caller.getEntryPoint().getOffset())).append("`\n\n");
            sb.append(decompAt(caller.getEntryPoint().getOffset(), 8000));
            count++;
        }
        if (count == 0) sb.append("*No callers found*\n\n");
        return sb.toString();
    }
}
