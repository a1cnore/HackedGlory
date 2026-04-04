// Focused script: find the game server connection by tracing from "host"/"port"
// JSON field parsing in the update/queryPendingMatch response handler.
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

import java.io.*;
import java.util.*;

public class GhidraGameConnect extends GhidraScript {

    private DecompInterface decomp;
    private FunctionManager fm;
    private ReferenceManager refMgr;
    private AddressFactory af;
    private Memory mem;

    // Known JSON key lookup function
    static final long JSON_KEY_LOOKUP = 0x1000e86c0L;

    // The "host" string is at file offset 0x13d9e32, "port" at 0x13d9e37
    // These are near "Game_Match_Start" strings

    @Override
    public void run() throws Exception {
        String outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        new File(outputDir).mkdirs();

        fm = currentProgram.getFunctionManager();
        refMgr = currentProgram.getReferenceManager();
        af = currentProgram.getAddressFactory();
        mem = currentProgram.getMemory();

        decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        decomp.setOptions(opts);
        decomp.openProgram(currentProgram);

        StringBuilder report = new StringBuilder();
        report.append("# Game Server Connection Trace\n\n");

        // ── Step 1: Find "host" string references ──
        // The "host" string near "Game_Match_Start" is at file offset 0x13d9e32
        // In VM space this would be at __TEXT.__cstring
        // Let's find all "host" strings and check which ones are used with JSON key lookup

        println("[game-connect] Searching for 'host' string xrefs...");
        report.append("## Step 1: 'host' String References\n\n");

        // Find all occurrences of "host\0" in the binary
        byte[] hostBytes = "host\0".getBytes("UTF-8");
        Address searchAddr = mem.getMinAddress();
        List<Address> hostAddrs = new ArrayList<>();
        int maxSearch = 50;
        while (searchAddr != null && maxSearch > 0) {
            searchAddr = mem.findBytes(searchAddr, hostBytes, null, true, monitor);
            if (searchAddr != null) {
                hostAddrs.add(searchAddr);
                searchAddr = searchAddr.add(1);
                maxSearch--;
            }
        }

        println("[game-connect] Found " + hostAddrs.size() + " 'host' string locations");

        // For each host string, find functions that reference it
        Set<Long> hostRefFuncs = new LinkedHashSet<>();
        for (Address addr : hostAddrs) {
            ReferenceIterator refs = refMgr.getReferencesTo(addr);
            while (refs.hasNext()) {
                Reference ref = refs.next();
                Function func = fm.getFunctionContaining(ref.getFromAddress());
                if (func != null) {
                    long ep = func.getEntryPoint().getOffset();
                    if (!hostRefFuncs.contains(ep)) {
                        hostRefFuncs.add(ep);
                        report.append("- `" + func.getName() + "` @ `0x" + Long.toHexString(ep) +
                            "` (ref addr: `0x" + Long.toHexString(addr.getOffset()) +
                            "`, from: `0x" + Long.toHexString(ref.getFromAddress().getOffset()) + "`)\n");
                    }
                }
            }
        }
        report.append("\n");

        // ── Step 2: Find functions that read "host" from JSON AND do something network-y ──
        // (Not just the RPC schema functions at 0x1004xxxxx)
        println("[game-connect] Decompiling host-referencing functions...");
        report.append("## Step 2: Functions Reading 'host' from JSON\n\n");

        for (long ep : hostRefFuncs) {
            // Skip known non-game-networking functions
            if (ep >= 0x1004e0000L && ep <= 0x100540000L) continue; // RPC region
            if (ep >= 0x100550000L && ep <= 0x100560000L) continue; // FMOD
            if (ep >= 0x1005d0000L && ep <= 0x1005f0000L) continue; // FMOD
            if (ep >= 0x1010d0000L && ep <= 0x101110000L) continue; // libcurl

            Function func = fm.getFunctionAt(af.getAddress("0x" + Long.toHexString(ep)));
            if (func == null) continue;

            String code = decompFunc(func);
            if (code == null) continue;

            // Check if this function reads "host" as a JSON key
            boolean readsHost = code.contains("\"host\"") || code.contains("host");
            boolean readsPort = code.contains("\"port\"") || code.contains("port");
            boolean hasSocket = code.contains("socket") || code.contains("connect") ||
                                code.contains("send") || code.contains("recv") ||
                                code.contains("0x86") || code.contains("0x0005");

            report.append("### `" + func.getName() + "` @ `0x" + Long.toHexString(ep) + "`\n\n");
            report.append("Reads host: " + readsHost + ", port: " + readsPort +
                ", has network: " + hasSocket + "\n\n");

            String truncCode = code.length() > 8000 ? code.substring(0, 8000) + "\n// ...truncated..." : code;
            report.append("```c\n" + truncCode + "\n```\n\n---\n\n");
        }

        // ── Step 3: Find the function that creates the 136-byte handshake packet ──
        // Search for snprintf/memcpy with size 128 (IP padding) or htons patterns
        println("[game-connect] Searching for handshake construction...");
        report.append("## Step 3: Handshake Construction Search\n\n");

        // Search for functions that use htons() or write big-endian port values
        // Also search for code that pads strings to 128 bytes
        String[] hsStrings = { "192.168", "%s:%d", "%s:%hu" };
        for (String s : hsStrings) {
            byte[] sBytes = s.getBytes("UTF-8");
            searchAddr = mem.getMinAddress();
            while (searchAddr != null) {
                searchAddr = mem.findBytes(searchAddr, sBytes, null, true, monitor);
                if (searchAddr != null) {
                    ReferenceIterator refs = refMgr.getReferencesTo(searchAddr);
                    while (refs.hasNext()) {
                        Reference ref = refs.next();
                        Function func = fm.getFunctionContaining(ref.getFromAddress());
                        if (func != null) {
                            report.append("String `" + s + "` @ `0x" + Long.toHexString(searchAddr.getOffset()) +
                                "` referenced by `" + func.getName() + "` @ `0x" +
                                Long.toHexString(func.getEntryPoint().getOffset()) + "`\n");
                        }
                    }
                    searchAddr = searchAddr.add(1);
                }
            }
        }
        report.append("\n");

        // ── Step 4: Trace from the match state parser ──
        // The update RPC parser at 0x100505520 (sessionBootstrap parser) reads "host" and "port"
        // Trace what happens with those values
        println("[game-connect] Decompiling match state handler chain...");
        report.append("## Step 4: Match State Handler Chain\n\n");

        // These functions handle match lifecycle
        long[] matchFuncs = {
            0x100102ec8L, // Game_Match_Start
            0x100103048L, // Game_Match_Reconnect
            0x1001030fcL, // Game_Match_Finish
            0x100102480L, // Game_Match_Declined
            0x100268944L, // MENU_CONNECTING_TO_GAME
        };

        for (long addr : matchFuncs) {
            Function func = fm.getFunctionAt(af.getAddress("0x" + Long.toHexString(addr)));
            if (func == null) continue;

            // Find callers
            List<Long> callers = new ArrayList<>();
            ReferenceIterator refs = refMgr.getReferencesTo(func.getEntryPoint());
            while (refs.hasNext()) {
                Reference ref = refs.next();
                if (!ref.getReferenceType().isCall()) continue;
                Function caller = fm.getFunctionContaining(ref.getFromAddress());
                if (caller != null) {
                    callers.add(caller.getEntryPoint().getOffset());
                }
            }

            report.append("### `" + func.getName() + "` @ `0x" + Long.toHexString(addr) + "`\n");
            report.append("Called by: ");
            for (long c : callers) {
                Function cf = fm.getFunctionAt(af.getAddress("0x" + Long.toHexString(c)));
                report.append("`" + (cf != null ? cf.getName() : "?") + "` @ `0x" + Long.toHexString(c) + "` ");
            }
            report.append("\n\n");

            // Decompile callers
            for (long c : callers) {
                Function cf = fm.getFunctionAt(af.getAddress("0x" + Long.toHexString(c)));
                if (cf == null) continue;
                String code = decompFunc(cf);
                if (code == null) continue;

                boolean hasHost = code.contains("host") || code.contains("Host");
                boolean hasPort = code.contains("port") || code.contains("Port");
                boolean hasConnect = code.contains("connect") || code.contains("socket") ||
                                     code.contains("send") || code.contains("recv");
                boolean hasBuf = code.contains("memset") || code.contains("memcpy") ||
                                 code.contains("sprintf");

                if (hasHost || hasPort || hasConnect || hasBuf) {
                    report.append("#### Caller: `" + cf.getName() + "` @ `0x" + Long.toHexString(c) + "`\n");
                    report.append("host=" + hasHost + " port=" + hasPort +
                        " connect=" + hasConnect + " buf=" + hasBuf + "\n\n");
                    String truncCode = code.length() > 6000 ? code.substring(0, 6000) + "\n// ...truncated..." : code;
                    report.append("```c\n" + truncCode + "\n```\n\n---\n\n");
                }
            }
        }

        decomp.dispose();

        String filepath = outputDir + "/game_connect_trace.md";
        FileWriter fw = new FileWriter(filepath);
        fw.write(report.toString());
        fw.close();
        println("[game-connect] Wrote " + filepath + " (" + report.length() + " bytes)");
        println("[game-connect] COMPLETE");
    }

    private String decompFunc(Function func) {
        if (func == null) return null;
        try {
            DecompileResults result = decomp.decompileFunction(func, 120, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                return result.getDecompiledFunction().getC();
            }
        } catch (Exception e) {}
        return null;
    }
}
