import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.io.*;

public class GhidraAvatarCallback extends GhidraScript {
    private DecompInterface decomp;
    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);
        StringBuilder sb = new StringBuilder();
        sb.append("# Avatar Tap Callbacks\n\n");
        
        long[] callbacks = {
            0x1002a97ccL,  // Avatar tap main callback
            0x1002a97dcL,  // Secondary callback (registered twice)
            0x1002a9828L,  // Third callback (registered twice)
            0x1002a9874L,  // Fourth callback
        };
        
        for (long va : callbacks) {
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
                        if (c.length() > 8000) c = c.substring(0, 8000) + "\n// truncated";
                        sb.append("```c\n" + c + "\n```\n\n");
                    }
                } catch (Exception e) {}
            } else {
                sb.append("## *Not found at 0x" + Long.toHexString(va) + "*\n\n");
            }
        }
        
        String path = outputDir + "/avatar_callbacks.md";
        FileWriter fw = new FileWriter(path);
        fw.write(sb.toString());
        fw.close();
        decomp.dispose();
        println("[analysis] Wrote " + path);
    }
}
