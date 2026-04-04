import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import java.io.*;

public class GhidraProfileVtable extends GhidraScript {
    private DecompInterface decomp;
    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        decomp = new DecompInterface();
        decomp.setOptions(new DecompileOptions());
        decomp.openProgram(currentProgram);
        StringBuilder sb = new StringBuilder();
        sb.append("# Profile Popup Vtable Methods\n\n");
        
        long[] fns = {0x100220c94L, 0x100220cccL};
        for (long va : fns) {
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
            }
        }
        
        // Also the content panel init thunk_FUN_1002f10ac
        sb.append("## Content panel init (thunk_FUN_1002f10ac)\n\n");
        Address addr = currentProgram.getAddressFactory().getAddress("0x1002f10ac");
        Function func = currentProgram.getFunctionManager().getFunctionContaining(addr);
        if (func != null) {
            try {
                DecompileResults r = decomp.decompileFunction(func, 120, monitor);
                if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                    String c = r.getDecompiledFunction().getC();
                    if (c.length() > 15000) c = c.substring(0, 15000) + "\n// truncated";
                    sb.append("```c\n" + c + "\n```\n\n");
                }
            } catch (Exception e) {}
        }

        String path = outputDir + "/profile_popup_vtable.md";
        FileWriter fw = new FileWriter(path);
        fw.write(sb.toString());
        fw.close();
        decomp.dispose();
        println("[analysis] Wrote " + path);
    }
}
