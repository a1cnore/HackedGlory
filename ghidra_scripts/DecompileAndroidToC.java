// Decompile all functions from Android libGameKindred.so and export as C/C++ with separate header file
//@category Export

import ghidra.app.script.GhidraScript;
import ghidra.app.util.exporter.CppExporter;
import ghidra.app.decompiler.DecompileOptions;
import java.io.File;

public class DecompileAndroidToC extends GhidraScript {
    @Override
    public void run() throws Exception {
        File outputDir = new File("/Users/marvinkleinpass/ghidra_projects/GameKindred_android_decompile_output");
        outputDir.mkdirs();
        File outputFile = new File(outputDir, "libGameKindred.c");

        println("Starting full C/C++ export with header (Android arm64)...");

        CppExporter exporter = new CppExporter(
            new DecompileOptions(),
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
            File hFile = new File(outputDir, "libGameKindred.h");
            if (outputFile.exists()) {
                println("libGameKindred.c size: " + outputFile.length() + " bytes");
            }
            if (hFile.exists()) {
                println("libGameKindred.h size: " + hFile.length() + " bytes");
            }
        } else {
            println("FAILED: Export did not complete successfully");
        }
    }
}
