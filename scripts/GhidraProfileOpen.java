import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.io.*;

public class GhidraProfileOpen extends GhidraScript {
    private DecompInterface decomp;

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);

        StringBuilder sb = new StringBuilder();
        sb.append("# Profile Open Gate Analysis\n\n");

        // Functions that reference the profile avatar
        long[] targets = {
            0x1001f3b70L,  // profile avatar string ref 1
            0x1001f50a4L,  // profile avatar string ref 2 (function start)
            0x1002a9490L,  // profile avatar in homepanel
            // The profile open handler — EVENT_MENU_REQUEST_ENTER_PROFILE
            // registered at 0x1001e33c0 which stores hash at DAT_101d23658
            // The menu panel change handler
            0x1001e338cL,  // menu event init (has the event hash)
            // FUN_1002207b8 - opens leaderboard (works) — for comparison
            0x1002207b8L,
            // Find the profile equivalent
            0x1001f4cb0L,  // calls FUN_1002207b8 with leaderboard string
        };

        for (long va : targets) {
            sb.append(decompAt(va));
        }

        // Callers of FUN_1001f50a4
        sb.append("## Callers of FUN_1001f50a4\n\n");
        sb.append(traceCallers(0x1001f50a4L, 5));

        // FUN_1001f3b70 — the other profile avatar ref
        sb.append("## Callers of FUN_1001f3b70 area\n\n");
        sb.append(traceCallers(0x1001f3b6cL, 3));  // actual function near there

        // The key: what function OPENS the profile screen?
        // FUN_1002207b8 opens leaderboard via FUN_1002205b4 + FUN_1001b35e0 + FUN_1001e7f30
        // What is the equivalent for profile?
        sb.append("## FUN_1002205b4 (screen opener)\n\n");
        sb.append(decompAt(0x1002205b4L));
        sb.append("## Callers of FUN_1002205b4\n\n");
        sb.append(traceCallers(0x1002205b4L, 10));

        String path = outputDir + "/profile_open_gate.md";
        new FileWriter(path).write(sb.toString()); 
        // Proper close
        FileWriter fw = new FileWriter(path);
        fw.write(sb.toString());
        fw.close();
        decomp.dispose();
        println("[analysis] Wrote " + path);
    }

    private String decompAt(long va) {
        Address addr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(va));
        FunctionManager fm = currentProgram.getFunctionManager();
        Function func = fm.getFunctionAt(addr);
        if (func == null) func = fm.getFunctionContaining(addr);
        if (func == null) return "### *Not found at 0x" + Long.toHexString(va) + "*\n\n";
        StringBuilder sb = new StringBuilder();
        sb.append("### `").append(func.getName()).append("` @ `0x")
          .append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");
        try {
            DecompileResults r = decomp.decompileFunction(func, 120, monitor);
            if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                String c = r.getDecompiledFunction().getC();
                if (c.length() > 10000) c = c.substring(0, 10000) + "\n// ...truncated...";
                sb.append("```c\n").append(c).append("\n```\n\n");
            }
        } catch (Exception e) {}
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
            sb.append(decompAt(caller.getEntryPoint().getOffset()));
            count++;
        }
        if (count == 0) sb.append("*No callers found*\n\n");
        return sb.toString();
    }
}
