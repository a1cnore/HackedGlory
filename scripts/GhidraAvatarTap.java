import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.io.*;

public class GhidraAvatarTap extends GhidraScript {
    private DecompInterface decomp;
    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);
        StringBuilder sb = new StringBuilder();
        sb.append("# Avatar Tap Handler Chain\n\n");
        
        // The homepanel builder that creates the avatar button
        // FUN_1002a9254 contains the avatar at 0x1002a9490
        sb.append("## FUN_1002a9254 (homepanel with avatar)\n\n");
        Address addr = currentProgram.getAddressFactory().getAddress("0x1002a9254");
        Function func = currentProgram.getFunctionManager().getFunctionContaining(addr);
        if (func != null) {
            sb.append("Function: `" + func.getName() + "` @ `0x" + 
                Long.toHexString(func.getEntryPoint().getOffset()) + "`\n\n");
            try {
                DecompileResults r = decomp.decompileFunction(func, 180, monitor);
                if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                    String c = r.getDecompiledFunction().getC();
                    // Show full function to find all callback registrations
                    if (c.length() > 25000) c = c.substring(0, 25000) + "\n// truncated";
                    sb.append("```c\n" + c + "\n```\n\n");
                }
            } catch (Exception e) {}
        }
        
        String path = outputDir + "/avatar_tap.md";
        FileWriter fw = new FileWriter(path);
        fw.write(sb.toString());
        fw.close();
        decomp.dispose();
        println("[analysis] Wrote " + path);
    }
}
