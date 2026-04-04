import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.io.*;

public class GhidraProfileShow extends GhidraScript {
    private DecompInterface decomp;
    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);
        StringBuilder sb = new StringBuilder();
        sb.append("# Panel Show Callers\n\n");
        
        long[] callers = {
            0x1001fea04L,
            0x1001ff410L,
            0x1001ff5a8L,
            0x100220a94L,
        };
        for (long va : callers) {
            sb.append("### Caller containing 0x" + Long.toHexString(va) + "\n\n");
            Address addr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(va));
            Function func = currentProgram.getFunctionManager().getFunctionContaining(addr);
            if (func != null) {
                sb.append("Function: `" + func.getName() + "` @ `0x" + 
                    Long.toHexString(func.getEntryPoint().getOffset()) + "`\n\n");
                try {
                    DecompileResults r = decomp.decompileFunction(func, 120, monitor);
                    if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                        String c = r.getDecompiledFunction().getC();
                        if (c.length() > 12000) c = c.substring(0, 12000) + "\n// truncated";
                        sb.append("```c\n" + c + "\n```\n\n");
                    }
                } catch (Exception e) {}
            } else {
                sb.append("*Function not found*\n\n");
            }
        }
        
        String path = outputDir + "/profile_show_callers.md";
        FileWriter fw = new FileWriter(path);
        fw.write(sb.toString());
        fw.close();
        decomp.dispose();
        println("[analysis] Wrote " + path);
    }
}
