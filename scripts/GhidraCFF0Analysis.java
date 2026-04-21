// Ghidra headless script: Find and analyze the CFF0 definition file parser.
//
// Goal: Identify how INST section data is decrypted/deserialized so we can
// build an offline CFF0 parser to extract hero stats, ability values, and
// item data from the bundled Data/ assets.
//
// Search strategy:
//   1. Find xrefs to the TOK_ATOM / TOK_TYPE debug format strings
//   2. Find functions that compare against CFF0/DEF0/INST/PTCH/SYMB magic bytes
//   3. Find xrefs to "build://Levels/DefinitionManifest.def"
//   4. Search for the DEF0 type hash constant 0xac68e79a
//   5. Look for AES S-Box constants (0x637c777b) or other cipher signatures
//   6. Find the FNV hash function (near "8fnv" string)
//
// Usage: analyzeHeadless ~/ghidra_projects VaingloryRE \
//          -process GameKindred -postScript GhidraCFF0Analysis.java
//
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.data.*;
import ghidra.program.model.scalar.Scalar;

import java.io.*;
import java.util.*;

public class GhidraCFF0Analysis extends GhidraScript {

    private DecompInterface decomp;
    private FunctionManager fm;
    private ReferenceManager refMgr;
    private AddressFactory af;
    private Memory mem;
    private Listing listing;
    private PrintWriter report;
    private String outputDir;

    // ── Target strings for locating the definition system ──

    // Token parser debug strings (inside the deserialization code)
    static final String[] TOKEN_STRINGS = {
        "TOK_ATOM typeinfo=%s field=%s value=%s",
        "TOK_TYPE typeinfo=%s field=%s members=%d symbol=%s",
        "TOK_ARRAY typeinfo=%s field=%s length=%d",
        "TOK_RAW typeinfo=%s field=%s bytes=%d",
        "TOK_ATOM",
        "TOK_TYPE",
        "TOK_ARRAY",
        "TOK_RAW",
    };

    // Definition system strings
    static final String[] DEFINITION_STRINGS = {
        "build://Levels/DefinitionManifest.def",
        "build://Levels/HeroManifest.def",
        "DefinitionManifest",
        "DefinitionEntry",
    };

    // Section magic bytes as ASCII strings that might appear in comparisons
    static final String[] SECTION_MAGICS = {
        "CFF0", "DEF0", "INST", "PTCH", "SYMB",
    };

    // Magic constants as 32-bit LE integers
    static final long CFF0_MAGIC = 0x30464643L; // "CFF0" in LE
    static final long DEF0_MAGIC = 0x30464544L; // "DEF0" in LE
    static final long INST_MAGIC = 0x54534e49L; // "INST" in LE
    static final long PTCH_MAGIC = 0x48435450L; // "PTCH" in LE
    static final long SYMB_MAGIC = 0x424d5953L; // "SYMB" in LE

    // DEF0 type hash that appears in every CFF0 file
    static final long DEF0_TYPE_HASH = 0xac68e79aL;

    // AES S-Box first 4 bytes (for detecting AES implementation)
    static final long AES_SBOX_HEAD = 0x637c777bL;

    @Override
    public void run() throws Exception {
        outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        new File(outputDir).mkdirs();

        fm = currentProgram.getFunctionManager();
        refMgr = currentProgram.getReferenceManager();
        af = currentProgram.getAddressFactory();
        mem = currentProgram.getMemory();
        listing = currentProgram.getListing();

        decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        opts.setMaxPayloadMBytes(200);
        decomp.setOptions(opts);
        decomp.openProgram(currentProgram);

        report = new PrintWriter(new FileWriter(outputDir + "/cff0_analysis.txt"));

        try {
            report.println("=== CFF0 Definition System Analysis ===");
            report.println("Binary: " + currentProgram.getName());
            report.println("Date: " + new Date());
            report.println();

            // Phase 1: Find token parser functions via debug strings
            section("PHASE 1: Token Parser Functions (TOK_* strings)");
            Map<String, Set<Address>> tokenStringRefs = new LinkedHashMap<>();
            for (String s : TOKEN_STRINGS) {
                Set<Address> refs = findStringXrefs(s);
                if (!refs.isEmpty()) {
                    tokenStringRefs.put(s, refs);
                }
            }
            for (Map.Entry<String, Set<Address>> e : tokenStringRefs.entrySet()) {
                report.println("  String: \"" + e.getKey() + "\"");
                for (Address addr : e.getValue()) {
                    Function fn = fm.getFunctionContaining(addr);
                    String fnName = fn != null ? fn.getName() + " @ " + fn.getEntryPoint() : "unknown";
                    report.println("    Xref at " + addr + " in " + fnName);
                    if (fn != null) {
                        decompileAndLog(fn, "TOK string ref");
                    }
                }
            }

            // Phase 2: Find definition loading functions
            section("PHASE 2: Definition Loading Functions");
            for (String s : DEFINITION_STRINGS) {
                Set<Address> refs = findStringXrefs(s);
                for (Address addr : refs) {
                    Function fn = fm.getFunctionContaining(addr);
                    String fnName = fn != null ? fn.getName() + " @ " + fn.getEntryPoint() : "unknown";
                    report.println("  String: \"" + s + "\" at " + addr + " in " + fnName);
                    if (fn != null) {
                        decompileAndLog(fn, "definition string ref");
                    }
                }
            }

            // Phase 3: Find functions that use CFF0/DEF0/INST magic constants
            section("PHASE 3: Section Magic Constants");
            findMagicConstantUsers(CFF0_MAGIC, "CFF0");
            findMagicConstantUsers(DEF0_MAGIC, "DEF0");
            findMagicConstantUsers(INST_MAGIC, "INST");
            findMagicConstantUsers(PTCH_MAGIC, "PTCH");
            findMagicConstantUsers(SYMB_MAGIC, "SYMB");

            // Phase 4: Find DEF0 type hash constant
            section("PHASE 4: DEF0 Type Hash (0xac68e79a)");
            findMagicConstantUsers(DEF0_TYPE_HASH, "DEF0_TYPE_HASH");

            // Phase 5: Search for crypto signatures
            section("PHASE 5: Crypto Signatures");

            // AES S-Box detection
            report.println("  Searching for AES S-Box (0x63, 0x7c, 0x77, 0x7b)...");
            findAESSBox();

            // Search for crypto-related strings
            String[] cryptoStrings = {"Aes", "aes_", "AES_", "encrypt", "decrypt"};
            for (String s : cryptoStrings) {
                Set<Address> refs = findStringXrefs(s);
                if (!refs.isEmpty()) {
                    report.println("  Crypto string \"" + s + "\": " + refs.size() + " refs");
                    for (Address addr : refs) {
                        Function fn = fm.getFunctionContaining(addr);
                        if (fn != null) {
                            report.println("    " + addr + " in " + fn.getName() + " @ " + fn.getEntryPoint());
                        }
                    }
                }
            }

            // Phase 6: FNV hash function
            section("PHASE 6: FNV Hash Function");
            Set<Address> fnvRefs = findStringXrefs("fnv");
            for (Address addr : fnvRefs) {
                Function fn = fm.getFunctionContaining(addr);
                if (fn != null) {
                    report.println("  FNV ref at " + addr + " in " + fn.getName() + " @ " + fn.getEntryPoint());
                    decompileAndLog(fn, "FNV hash function");
                }
            }
            // Also search for FNV-1a prime (0x01000193) and offset basis (0x811c9dc5)
            report.println("  Searching for FNV-1a constants...");
            findMagicConstantUsers(0x01000193L, "FNV_PRIME_32");
            findMagicConstantUsers(0x811c9dc5L, "FNV_OFFSET_32");

            // Phase 7: Trace callers of token parser functions
            section("PHASE 7: Token Parser Call Hierarchy");
            Set<Function> tokenFunctions = new LinkedHashSet<>();
            for (Set<Address> addrs : tokenStringRefs.values()) {
                for (Address addr : addrs) {
                    Function fn = fm.getFunctionContaining(addr);
                    if (fn != null) tokenFunctions.add(fn);
                }
            }
            for (Function fn : tokenFunctions) {
                report.println("  Token function: " + fn.getName() + " @ " + fn.getEntryPoint());
                traceCallers(fn, 3, "    ");
            }

            // Phase 8: Deep decompile of the most promising functions
            section("PHASE 8: Deep Decompilation of Key Functions");
            // Collect all unique functions found so far
            Set<Function> keyFunctions = new LinkedHashSet<>(tokenFunctions);
            // Add functions from definition string refs
            for (String s : DEFINITION_STRINGS) {
                for (Address addr : findStringXrefs(s)) {
                    Function fn = fm.getFunctionContaining(addr);
                    if (fn != null) keyFunctions.add(fn);
                }
            }
            report.println("  Key functions identified: " + keyFunctions.size());
            for (Function fn : keyFunctions) {
                deepDecompile(fn);
            }

            report.println();
            report.println("=== Analysis complete ===");
            println("CFF0 analysis written to: " + outputDir + "/cff0_analysis.txt");
        } finally {
            report.close();
            decomp.dispose();
        }
    }

    // ── Helpers ──

    private void section(String title) {
        report.println();
        report.println("════════════════════════════════════════");
        report.println(title);
        report.println("════════════════════════════════════════");
        report.flush();
        println(title);
    }

    /**
     * Find all addresses that reference a given string literal.
     */
    private Set<Address> findStringXrefs(String target) {
        Set<Address> results = new LinkedHashSet<>();
        // Search through all defined strings in the program
        for (Data data : listing.getDefinedData(true)) {
            if (data.getDataType() instanceof StringDataType ||
                data.getDataType() instanceof TerminatedStringDataType ||
                data.getDataType().getName().contains("string")) {
                Object val = data.getValue();
                if (val != null && val.toString().contains(target)) {
                    // Found the string, now find all xrefs TO this address
                    Address strAddr = data.getAddress();
                    for (Reference ref : refMgr.getReferencesTo(strAddr)) {
                        results.add(ref.getFromAddress());
                    }
                }
            }
        }
        // Also search in undefined memory for the string bytes
        byte[] searchBytes = target.getBytes();
        Address searchAddr = currentProgram.getMinAddress();
        while (searchAddr != null) {
            Address found = mem.findBytes(searchAddr, searchBytes, null, true, null);
            if (found == null) break;
            // Check for xrefs to this address and nearby (string may be referenced by ADRP+ADD)
            for (int delta = 0; delta < 4; delta++) {
                Address check = found.add(delta);
                for (Reference ref : refMgr.getReferencesTo(check)) {
                    results.add(ref.getFromAddress());
                }
            }
            searchAddr = found.add(1);
        }
        return results;
    }

    /**
     * Find functions that use a specific 32-bit constant in their instructions.
     * Searches for the constant as an immediate operand in instructions.
     */
    private void findMagicConstantUsers(long constant, String label) {
        report.println("  Searching for constant 0x" + Long.toHexString(constant) + " (" + label + ")...");

        // Search for the constant as 4 raw bytes in data sections
        byte[] constBytes = new byte[4];
        constBytes[0] = (byte)(constant & 0xFF);
        constBytes[1] = (byte)((constant >> 8) & 0xFF);
        constBytes[2] = (byte)((constant >> 16) & 0xFF);
        constBytes[3] = (byte)((constant >> 24) & 0xFF);

        Address searchAddr = currentProgram.getMinAddress();
        int found = 0;
        while (searchAddr != null && found < 20) {
            Address addr = mem.findBytes(searchAddr, constBytes, null, true, null);
            if (addr == null) break;

            // Check if this is referenced by code (ADRP/LDR pattern)
            for (Reference ref : refMgr.getReferencesTo(addr)) {
                Address from = ref.getFromAddress();
                Function fn = fm.getFunctionContaining(from);
                if (fn != null) {
                    report.println("    " + label + " ref at " + from + " in " + fn.getName() + " @ " + fn.getEntryPoint());
                    found++;
                }
            }

            // Also check if the constant appears as an instruction immediate
            Instruction insn = listing.getInstructionAt(addr);
            if (insn != null) {
                Function fn = fm.getFunctionContaining(addr);
                if (fn != null) {
                    report.println("    " + label + " in insn at " + addr + " in " + fn.getName() + " @ " + fn.getEntryPoint());
                    found++;
                }
            }

            searchAddr = addr.add(1);
        }
        if (found == 0) {
            report.println("    No references found");
        }
    }

    /**
     * Search for AES S-Box table in the binary.
     * The S-Box starts with bytes: 63 7c 77 7b f2 6b 6f c5 30 01 67 2b fe d7 ab 76
     */
    private void findAESSBox() {
        byte[] sboxHead = {0x63, 0x7c, 0x77, 0x7b, (byte)0xf2, 0x6b, 0x6f, (byte)0xc5};
        Address searchAddr = currentProgram.getMinAddress();
        int found = 0;
        while (searchAddr != null && found < 5) {
            Address addr = mem.findBytes(searchAddr, sboxHead, null, true, null);
            if (addr == null) break;
            report.println("    AES S-Box candidate at " + addr);
            // Show surrounding context
            try {
                byte[] context = new byte[32];
                mem.getBytes(addr, context);
                StringBuilder sb = new StringBuilder("    Bytes: ");
                for (byte b : context) sb.append(String.format("%02x ", b & 0xFF));
                report.println(sb.toString().trim());
            } catch (Exception e) { /* skip */ }

            // Find xrefs to this address
            for (Reference ref : refMgr.getReferencesTo(addr)) {
                Function fn = fm.getFunctionContaining(ref.getFromAddress());
                if (fn != null) {
                    report.println("    Referenced by " + fn.getName() + " @ " + fn.getEntryPoint());
                }
            }
            found++;
            searchAddr = addr.add(1);
        }
        if (found == 0) {
            report.println("    No AES S-Box found");
        }
    }

    /**
     * Decompile a function and log the output.
     */
    private void decompileAndLog(Function fn, String context) {
        try {
            DecompileResults result = decomp.decompileFunction(fn, 30, null);
            if (result.decompileCompleted()) {
                String code = result.getDecompiledFunction().getC();
                // Truncate very long functions
                if (code.length() > 4000) {
                    code = code.substring(0, 4000) + "\n... (truncated, " + code.length() + " chars total)";
                }
                report.println("    --- Decompiled (" + context + "): " + fn.getName() + " ---");
                report.println(code);
                report.println("    --- End ---");
            } else {
                report.println("    (decompilation failed for " + fn.getName() + ")");
            }
        } catch (Exception e) {
            report.println("    (decompilation error for " + fn.getName() + ": " + e.getMessage() + ")");
        }
    }

    /**
     * Deep decompile: full output with no truncation.
     */
    private void deepDecompile(Function fn) {
        try {
            DecompileResults result = decomp.decompileFunction(fn, 60, null);
            if (result.decompileCompleted()) {
                String code = result.getDecompiledFunction().getC();
                report.println();
                report.println("  ╔══ DEEP DECOMPILE: " + fn.getName() + " @ " + fn.getEntryPoint() + " ══╗");
                report.println(code);
                report.println("  ╚══ END " + fn.getName() + " ══╝");
            }
        } catch (Exception e) {
            report.println("  (deep decompilation error for " + fn.getName() + ")");
        }
    }

    /**
     * Trace callers of a function up to the given depth.
     */
    private void traceCallers(Function fn, int depth, String indent) {
        if (depth <= 0) return;
        Set<Function> callers = fn.getCallingFunctions(null);
        for (Function caller : callers) {
            report.println(indent + "← called by " + caller.getName() + " @ " + caller.getEntryPoint()
                    + " (size=" + caller.getBody().getNumAddresses() + ")");
            if (depth > 1) {
                traceCallers(caller, depth - 1, indent + "  ");
            }
        }
    }
}
