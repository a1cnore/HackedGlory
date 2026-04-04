import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.io.*;

public class GhidraProfileTapHandler extends GhidraScript {
    private DecompInterface decomp;
    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);
        StringBuilder sb = new StringBuilder();
        sb.append("# Profile Tap Handler — FUN_1001f4c4c\n\n");
        
        // The actual function called when avatar is tapped
        long[] targets = {
            0x1001f4c4cL,  // vtable[0] = the avatar tap handler
            0x1001f4cb0L,  // FUN_1001f4cb0 (calls FUN_1002207b8 for leaderboard — nearby)
        };
        for (long va : targets) {
            Address addr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(va));
            Function func = currentProgram.getFunctionManager().getFunctionAt(addr);
            if (func == null) func = currentProgram.getFunctionManager().getFunctionContaining(addr);
            if (func != null) {
                sb.append("## `" + func.getName() + "` @ `0x" + 
                    Long.toHexString(func.getEntryPoint().getOffset()) + "`\n\n");
                try {
                    DecompileResults r = decomp.decompileFunction(func, 120, monitor);
                    if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                        String c = r.getDecompiledFunction().getC();
                        if (c.length() > 15000) c = c.substring(0, 15000) + "\n// truncated";
                        sb.append("```c\n" + c + "\n```\n\n");
                    }
                } catch (Exception e) {}
                // Also get callers
                sb.append("### Callers:\n\n");
                ghidra.program.model.symbol.ReferenceIterator refs = 
                    currentProgram.getReferenceManager().getReferencesTo(func.getEntryPoint());
                java.util.Set<Address> seen = new java.util.HashSet<>();
                int count = 0;
                while (refs.hasNext() && count < 5) {
                    ghidra.program.model.symbol.Reference ref = refs.next();
                    Function caller = currentProgram.getFunctionManager().getFunctionContaining(ref.getFromAddress());
                    if (caller == null || seen.contains(caller.getEntryPoint())) continue;
                    seen.add(caller.getEntryPoint());
                    sb.append("- `" + caller.getName() + "` @ `0x" + 
                        Long.toHexString(caller.getEntryPoint().getOffset()) + "`\n");
                    count++;
                }
                sb.append("\n");
            }
        }

        // Also dump the vtable at 0x105c54b10 (runtime addr) — but we need the __DATA offset
        // 0x105c54b10 - base(0x1047e8000 approx) won't work since base varies at runtime
        // The vtable is at a fixed offset from binary base. From logs:
        // base = 0x1047e8000 (from "found GameKindred at image 1: 0x1047dc000" + slide)
        // Wait, base = 0x1047dc000. vtable = 0x105c54b10. offset = 0x105c54b10 - 0x1047dc000 = 0x1478b10
        // That's in __DATA!
        sb.append("## Vtable at __DATA+0x1478b10\n\n");
        ghidra.program.model.mem.Memory mem = currentProgram.getMemory();
        FunctionManager fm = currentProgram.getFunctionManager();
        for (int i = 0; i < 20; i++) {
            long vtAddr = 0x101478b10L + i * 8;
            Address a = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(vtAddr));
            try {
                long val = mem.getLong(a);
                Function f = fm.getFunctionAt(currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(val)));
                String fname = f != null ? f.getName() : "unknown";
                long foff = val - 0x100000000L;
                sb.append("| idx " + i + " | 0x" + Long.toHexString(vtAddr) + " | 0x" + Long.toHexString(val) + " | " + fname + " (0x" + Long.toHexString(foff) + ") |\n");
            } catch (Exception e) {
                sb.append("| idx " + i + " | error |\n");
            }
        }

        String path = outputDir + "/profile_tap_handler.md";
        FileWriter fw = new FileWriter(path);
        fw.write(sb.toString());
        fw.close();
        decomp.dispose();
        println("[analysis] Wrote " + path);
    }
}
