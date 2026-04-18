// Targeted deep decompilation of CFF0 binary format functions.
//
// Focuses on:
//   1. FUN_10058690c - references INST magic (likely binary CFF0 parser)
//   2. FUN_1010a14fc - loads definitions from build:// paths
//   3. FUN_1010a15e0 - loads definitions by symbol name
//   4. FUN_1010a0e0c - looks up loaded definitions
//   5. FUN_1010a1520 / FUN_1010a1540 - definition system getters
//   6. FUN_100015208 - hash function (with seed 0x12345678)
//   7. FUN_1010a2aa4 - field setter (called from all TOK_ handlers)
//   8. FUN_1010a2da0 - value setter (stores parsed atom values)
//   9. FUN_1010a2cc0 - array allocator
//  10. FUN_10110672c - AES_ references
//  11. FUN_10011e878 / FUN_10011e798 - definition file iteration
//  12. FUN_10011f468 - per-definition processing
//
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.*;

import java.io.*;

public class GhidraCFF0Deep extends GhidraScript {

    static final long[] TARGETS = {
        0x10058690cL, // INST magic user — likely binary CFF0 parser
        0x1010a14fcL, // load def from build:// path
        0x1010a15e0L, // load def by symbol name
        0x1010a0e0cL, // lookup loaded definition
        0x1010a1520L, // def system getter
        0x1010a1540L, // def system getter 2
        0x100015208L, // hash function (seed 0x12345678)
        0x1010a2aa4L, // field setter
        0x1010a2da0L, // value setter
        0x1010a2cc0L, // array allocator
        0x1010a2e24L, // raw value setter
        0x10110672cL, // AES_ references
        0x10011e878L, // def file open/iterator
        0x10011e798L, // def file read next entry
        0x10011f468L, // per-definition processing
        0x1010a0d84L, // text format loader entry
        0x1010a31d4L, // text format parser wrapper
        0x10054d3fcL, // caller of text format loader
        0x1010a3954L, // type registration
    };

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        new File(outputDir).mkdirs();

        DecompInterface decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        opts.setMaxPayloadMBytes(200);
        decomp.setOptions(opts);
        decomp.openProgram(currentProgram);

        FunctionManager fm = currentProgram.getFunctionManager();
        PrintWriter out = new PrintWriter(new FileWriter(outputDir + "/cff0_deep.txt"));

        try {
            out.println("=== CFF0 Deep Decompilation ===");
            out.println();

            for (long va : TARGETS) {
                Function fn = fm.getFunctionAt(toAddr(va));
                if (fn == null) {
                    out.println("// NO FUNCTION at 0x" + Long.toHexString(va));
                    out.println();
                    continue;
                }

                out.println("// ═══════════════════════════════════════════════════");
                out.println("// " + fn.getName() + " @ 0x" + Long.toHexString(va));
                out.println("// Size: " + fn.getBody().getNumAddresses() + " bytes");
                out.println("// Called by: ");
                for (Function caller : fn.getCallingFunctions(null)) {
                    out.println("//   " + caller.getName() + " @ " + caller.getEntryPoint());
                }
                out.println("// Calls: ");
                for (Function callee : fn.getCalledFunctions(null)) {
                    out.println("//   " + callee.getName() + " @ " + callee.getEntryPoint());
                }
                out.println("// ═══════════════════════════════════════════════════");

                DecompileResults result = decomp.decompileFunction(fn, 120, null);
                if (result.decompileCompleted()) {
                    out.println(result.getDecompiledFunction().getC());
                } else {
                    out.println("// DECOMPILATION FAILED");
                }
                out.println();
                out.flush();
                println("Decompiled: " + fn.getName() + " @ 0x" + Long.toHexString(va));
            }

            out.println("=== Done ===");
            println("Deep decompilation written to: " + outputDir + "/cff0_deep.txt");
        } finally {
            out.close();
            decomp.dispose();
        }
    }
}
