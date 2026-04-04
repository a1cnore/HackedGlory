import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.io.*;

public class GhidraProfilePopulate extends GhidraScript {
    private DecompInterface decomp;
    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);
        StringBuilder sb = new StringBuilder();
        sb.append("# Profile Data Population Functions\n\n");
        
        long[] fns = {
            0x100220b8cL,  // FUN_100220b8c — first data population call
            0x100220b58L,  // FUN_100220b58 — skill tier display
            0x100220b98L,  // FUN_100220b98 — ranked data per mode
            0x100220ba4L,  // FUN_100220ba4 — ranked data value
            0x100220abcL,  // FUN_100220abc — profile panel init
        };
        String[] names = {"populate1 (0b8c)", "skillTier (0b58)", "rankedMode (0b98)", "rankedValue (0ba4)", "panelInit (0abc)"};
        
        for (int i = 0; i < fns.length; i++) {
            Address addr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(fns[i]));
            Function func = currentProgram.getFunctionManager().getFunctionAt(addr);
            if (func == null) func = currentProgram.getFunctionManager().getFunctionContaining(addr);
            if (func != null) {
                sb.append("## " + names[i] + " — `" + func.getName() + "` @ `0x" + 
                    Long.toHexString(func.getEntryPoint().getOffset()) + "`\n\n");
                try {
                    DecompileResults r = decomp.decompileFunction(func, 60, monitor);
                    if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                        String c = r.getDecompiledFunction().getC();
                        if (c.length() > 8000) c = c.substring(0, 8000) + "\n// truncated";
                        sb.append("```c\n" + c + "\n```\n\n");
                    }
                } catch (Exception e) {}
            }
        }
        
        String path = outputDir + "/profile_populate.md";
        FileWriter fw = new FileWriter(path);
        fw.write(sb.toString());
        fw.close();
        decomp.dispose();
        println("[analysis] Wrote " + path);
    }
}
