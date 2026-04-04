import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.io.*;

public class GhidraOverflowVtable extends GhidraScript {
    private DecompInterface decomp;
    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);
        StringBuilder sb = new StringBuilder();
        sb.append("# Overflow Menu Vtable at __DATA+0x146cb10\n\n");
        
        long[] entries = {0x1001f4c4cL, 0x1001f4c68L, 0x1001f4c84L, 0x1001f4ca4L, 0x1001f4cb0L};
        String[] names = {"vtable[0] avatar/profile", "vtable[1]", "vtable[2]", "vtable[3]", "vtable[4] leaderboard"};
        
        for (int i = 0; i < entries.length; i++) {
            Address addr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(entries[i]));
            Function func = currentProgram.getFunctionManager().getFunctionAt(addr);
            if (func == null) func = currentProgram.getFunctionManager().getFunctionContaining(addr);
            if (func != null) {
                sb.append("## " + names[i] + " — `" + func.getName() + "` @ `0x" + 
                    Long.toHexString(func.getEntryPoint().getOffset()) + "`\n\n");
                try {
                    DecompileResults r = decomp.decompileFunction(func, 60, monitor);
                    if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                        sb.append("```c\n" + r.getDecompiledFunction().getC() + "\n```\n\n");
                    }
                } catch (Exception e) {}
            }
        }
        
        String path = outputDir + "/overflow_vtable.md";
        FileWriter fw = new FileWriter(path);
        fw.write(sb.toString());
        fw.close();
        decomp.dispose();
        println("[analysis] Wrote " + path);
    }
}
