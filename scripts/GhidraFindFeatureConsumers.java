// Find all functions that consume the feature flags struct to gate UI.
// Specifically: who calls the feature parser, stores the result, and who reads it?
// Also: find the leaderboard gate at PlatformClient+0x2b08 and trace what sets it.
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

public class GhidraFindFeatureConsumers extends GhidraScript {

    private DecompInterface decomp;
    private String outputDir;

    @Override
    public void run() throws Exception {
        outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        new File(outputDir).mkdirs();

        decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        decomp.setOptions(opts);
        decomp.openProgram(currentProgram);

        StringBuilder sb = new StringBuilder();
        sb.append("# Feature Flag Consumers & UI Gating Analysis\n\n");

        // 1. Find who CALLS the feature parser (FUN_1001329b0) — these are the config system entry points
        sb.append("## 1. Callers of Feature Parser (FUN_1001329b0)\n\n");
        sb.append(traceCallersOf(0x1001329b0L, 3));

        // 2. Find the observer registration — who listens for config changes
        // The observer array is at DAT_101d23360 (count) / DAT_101d23368 (array)
        sb.append("## 2. References to Config Observer Array (DAT_101d23360/101d23368)\n\n");
        sb.append(traceRefsToAddress(0x101d23360L));
        sb.append(traceRefsToAddress(0x101d23368L));

        // 3. The leaderboard nav button handlers
        sb.append("## 3. Leaderboard Navigation Button Handlers\n\n");
        String[] lbNavStrings = {
            "homepanel_overflow_nav_button_leaderboards",
            "secondary_nav_leaderboards",
            "secondary_nav_leaderboards_hit",
        };
        for (String s : lbNavStrings) {
            sb.append(traceStringDeep(s, 3));
        }

        // 4. The social/friends button handlers
        sb.append("## 4. Social/Friends Navigation Handlers\n\n");
        String[] socialStrings = {
            "MAIN_MENU_SOCIAL",
            "UI::EVENT_MENU_FRIENDS_SELECTED",
            "FRIENDS.*",
        };
        for (String s : socialStrings) {
            sb.append(traceStringDeep(s, 3));
        }

        // 5. The getLeaderboardData gate (who writes PlatformClient+0x2b08)
        sb.append("## 5. Leaderboard RPC Gate Analysis\n\n");
        sb.append("### getLeaderboardData caller (FUN_100502c60)\n\n");
        sb.append(decompileAt(0x100502c60L));
        sb.append("\n### Callers of getLeaderboardData\n\n");
        sb.append(traceCallersOf(0x100502c60L, 2));

        // 6. The friendListAll gate
        sb.append("## 6. FriendListAll Caller Analysis\n\n");
        sb.append("### friendListAll caller (FUN_1004f58d8)\n\n");
        sb.append(decompileAt(0x1004f58d8L));
        sb.append("\n### Callers of friendListAll\n\n");
        sb.append(traceCallersOf(0x1004f58d8L, 2));

        // 7. Key UI visibility functions — who hides/shows the social panel and leaderboard panel
        sb.append("## 7. Panel Show/Hide Functions\n\n");
        String[] visStrings = {
            "HomePanelVCHighlightPlay",
            "HomePanelVCKeyholeTiV",
            "homepanel_play_button",
            "homepanel_profile_avatar",
        };
        for (String s : visStrings) {
            sb.append(traceStringDeep(s, 2));
        }

        writeReport("feature_consumers_analysis.md", sb.toString());
        decomp.dispose();
        println("[analysis] Done — wrote feature_consumers_analysis.md");
    }

    private String decompileAt(long va) {
        Address addr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(va));
        FunctionManager fm = currentProgram.getFunctionManager();
        Function func = fm.getFunctionAt(addr);
        if (func == null) func = fm.getFunctionContaining(addr);
        if (func == null) return "*Function not found at 0x" + Long.toHexString(va) + "*\n\n";

        String code = decompFunc(func);
        StringBuilder sb = new StringBuilder();
        sb.append("#### `").append(func.getName()).append("` @ `0x")
          .append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");
        if (code != null) {
            if (code.length() > 8000) code = code.substring(0, 8000) + "\n// ...truncated...";
            sb.append("```c\n").append(code).append("\n```\n\n");
        }
        return sb.toString();
    }

    private String traceCallersOf(long va, int maxCallers) {
        Address addr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(va));
        FunctionManager fm = currentProgram.getFunctionManager();
        Function func = fm.getFunctionAt(addr);
        if (func == null) func = fm.getFunctionContaining(addr);
        if (func == null) return "*Function not found*\n\n";

        StringBuilder sb = new StringBuilder();
        ReferenceManager refMgr = currentProgram.getReferenceManager();
        ReferenceIterator refs = refMgr.getReferencesTo(func.getEntryPoint());
        int count = 0;
        Set<Address> seen = new HashSet<>();
        while (refs.hasNext() && count < maxCallers) {
            Reference ref = refs.next();
            Function caller = fm.getFunctionContaining(ref.getFromAddress());
            if (caller == null || seen.contains(caller.getEntryPoint())) continue;
            seen.add(caller.getEntryPoint());

            String code = decompFunc(caller);
            sb.append("#### Caller: `").append(caller.getName()).append("` @ `0x")
              .append(Long.toHexString(caller.getEntryPoint().getOffset())).append("`\n\n");
            if (code != null) {
                if (code.length() > 8000) code = code.substring(0, 8000) + "\n// ...truncated...";
                sb.append("```c\n").append(code).append("\n```\n\n");
            }
            count++;
        }
        if (count == 0) sb.append("*No callers found*\n\n");
        return sb.toString();
    }

    private String traceRefsToAddress(long va) {
        Address addr = currentProgram.getAddressFactory().getAddress("0x" + Long.toHexString(va));
        StringBuilder sb = new StringBuilder();
        sb.append("### References to `0x").append(Long.toHexString(va)).append("`\n\n");

        ReferenceManager refMgr = currentProgram.getReferenceManager();
        ReferenceIterator refs = refMgr.getReferencesTo(addr);
        FunctionManager fm = currentProgram.getFunctionManager();
        int count = 0;
        Set<Address> seen = new HashSet<>();
        while (refs.hasNext() && count < 5) {
            Reference ref = refs.next();
            Function func = fm.getFunctionContaining(ref.getFromAddress());
            if (func == null || seen.contains(func.getEntryPoint())) continue;
            seen.add(func.getEntryPoint());

            String code = decompFunc(func);
            sb.append("#### `").append(func.getName()).append("` @ `0x")
              .append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");
            sb.append("Ref from: `0x").append(Long.toHexString(ref.getFromAddress().getOffset())).append("`\n\n");
            if (code != null) {
                if (code.length() > 6000) code = code.substring(0, 6000) + "\n// ...truncated...";
                sb.append("```c\n").append(code).append("\n```\n\n");
            }
            count++;
        }
        if (count == 0) sb.append("*No references found*\n\n");
        return sb.toString();
    }

    private String traceStringDeep(String target, int maxCallerDepth) {
        StringBuilder sb = new StringBuilder();
        sb.append("### `").append(target).append("`\n\n");

        List<Address> addrs = findStr(target);
        if (addrs.isEmpty()) {
            sb.append("*Not found*\n\n");
            return sb.toString();
        }

        FunctionManager fm = currentProgram.getFunctionManager();
        ReferenceManager refMgr = currentProgram.getReferenceManager();
        Set<Address> seen = new HashSet<>();

        for (Address addr : addrs) {
            ReferenceIterator refs = refMgr.getReferencesTo(addr);
            while (refs.hasNext()) {
                Reference ref = refs.next();
                Function func = fm.getFunctionContaining(ref.getFromAddress());
                if (func == null || seen.contains(func.getEntryPoint())) continue;
                seen.add(func.getEntryPoint());

                String code = decompFunc(func);
                sb.append("#### `").append(func.getName()).append("` @ `0x")
                  .append(Long.toHexString(func.getEntryPoint().getOffset())).append("`\n\n");
                if (code != null) {
                    if (code.length() > 6000) code = code.substring(0, 6000) + "\n// ...truncated...";
                    sb.append("```c\n").append(code).append("\n```\n\n");
                }

                // Trace callers
                if (maxCallerDepth > 0) {
                    ReferenceIterator callerRefs = refMgr.getReferencesTo(func.getEntryPoint());
                    int callerCount = 0;
                    while (callerRefs.hasNext() && callerCount < 2) {
                        Reference cRef = callerRefs.next();
                        Function caller = fm.getFunctionContaining(cRef.getFromAddress());
                        if (caller == null || seen.contains(caller.getEntryPoint())) continue;
                        seen.add(caller.getEntryPoint());
                        String callerCode = decompFunc(caller);
                        sb.append("##### Caller: `").append(caller.getName()).append("` @ `0x")
                          .append(Long.toHexString(caller.getEntryPoint().getOffset())).append("`\n\n");
                        if (callerCode != null) {
                            if (callerCode.length() > 4000) callerCode = callerCode.substring(0, 4000) + "\n// ...truncated...";
                            sb.append("```c\n").append(callerCode).append("\n```\n\n");
                        }
                        callerCount++;
                    }
                }
            }
        }
        return sb.toString();
    }

    private List<Address> findStr(String target) {
        List<Address> results = new ArrayList<>();
        Listing listing = currentProgram.getListing();
        DataIterator dataIter = listing.getDefinedData(true);
        while (dataIter.hasNext() && !monitor.isCancelled()) {
            Data data = dataIter.next();
            if (data.hasStringValue()) {
                Object val = data.getValue();
                if (val != null && val.toString().equals(target)) {
                    results.add(data.getAddress());
                }
            }
        }
        if (results.isEmpty()) {
            Memory mem = currentProgram.getMemory();
            try {
                byte[] searchBytes = (target + "\0").getBytes("UTF-8");
                Address addr = mem.getMinAddress();
                while (addr != null && !monitor.isCancelled()) {
                    addr = mem.findBytes(addr, searchBytes, null, true, monitor);
                    if (addr != null) { results.add(addr); addr = addr.add(1); }
                }
            } catch (Exception e) {}
        }
        return results;
    }

    private String decompFunc(Function func) {
        if (func == null) return null;
        try {
            DecompileResults result = decomp.decompileFunction(func, 60, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                return result.getDecompiledFunction().getC();
            }
        } catch (Exception e) {}
        return null;
    }

    private void writeReport(String filename, String content) throws IOException {
        String filepath = outputDir + "/" + filename;
        FileWriter fw = new FileWriter(filepath);
        fw.write(content);
        fw.close();
        println("[analysis] Wrote " + filepath + " (" + content.length() + " bytes)");
    }
}
