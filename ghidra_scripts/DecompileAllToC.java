// Decompile all functions and export as C/C++ with separate header file
//@category Export

import ghidra.app.script.GhidraScript;
import ghidra.app.util.exporter.CppExporter;
import ghidra.app.decompiler.DecompileOptions;
import java.io.File;

public class DecompileAllToC extends GhidraScript {
    @Override
    public void run() throws Exception {
        File outputDir = new File("/Users/marvinkleinpass/ghidra_projects/GameKindred_decompile_output");
        outputDir.mkdirs();
        File outputFile = new File(outputDir, "GameKindred.c");

        println("Starting full C/C++ export with header...");

        // Constructor: (options, createHeader, createC, useCppComments, emitTypes, emitGlobals, tagFilter)
        CppExporter exporter = new CppExporter(
            new DecompileOptions(),  // decompile options
            true,   // CREATE_HEADER_FILE
            true,   // CREATE_C_FILE
            true,   // USE_CPP_STYLE_COMMENTS
            true,   // EMIT_TYPE_DEFINITIONS
            true,   // EMIT_REFERENCED_GLOBALS
            null    // no tag filter
        );

        boolean success = exporter.export(outputFile, currentProgram, null, monitor);
        if (success) {
            println("SUCCESS: Export completed");
            File hFile = new File(outputDir, "GameKindred.h");
            if (outputFile.exists()) {
                println("GameKindred.c size: " + outputFile.length() + " bytes");
            }
            if (hFile.exists()) {
                println("GameKindred.h size: " + hFile.length() + " bytes");
            }
        } else {
            println("FAILED: Export did not complete successfully");
        }
    }
}
