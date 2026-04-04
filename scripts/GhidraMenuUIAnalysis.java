// Ghidra headless Java script for Vainglory E.V.I.L. engine Menu UI analysis
// Usage: analyzeHeadless ... -postScript GhidraMenuUIAnalysis.java
//
// Traces UI event dispatch, friends list, leaderboard, and feature flag systems
// by following string cross-references through the decompiler.
//
// @category Analysis

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryAccessException;
import ghidra.program.model.symbol.*;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.data.StringDataType;

import java.io.*;
import java.util.*;

public class GhidraMenuUIAnalysis extends GhidraScript {

    private DecompInterface decomp;
    private String outputDir;

    // ── Target strings per phase ──

    static final String[] PHASE2_EVENT_DISPATCH = {
        "UI::EVENT_MENU_PANEL_CHANGE",
        "UI::EVENT_SCREEN_SHOW",
        "UI::EVENT_MENU_SHOW_ROOT",
        "UI::EVENT_SWITCH_TO_TAB",
        "UI::EVENT_POPUP_OPEN",
        "UI::EVENT_POPUP_CLOSE",
        "UI::EVENT_SCREEN_HIDE",
        "UI::EVENT_MENU_ENTER_LOBBY",
        "UI::EVENT_MENU_LOG_OUT",
        "UI::EVENT_MAIN_HUB_NAV_BAR_ON_NAVIGATE",
        "UI::EVENT_NAVIGATE_TO_LINK",
        "UI::EVENT_MENU_FRIENDS_SELECTED",
        "MAIN_MENU_SOCIAL",
        "MAIN_MENU_HOME",
        "MAIN_MENU_PLAY",
        "MAIN_MENU_HEROES",
        "MAIN_MENU_MARKET",
        "homepanel_overflow_nav_button_leaderboards",
        "secondary_nav_leaderboards",
    };

    static final String[] PHASE3_FRIENDS = {
        "friendListAll",
        "friendRequestIssueByHandle",
        "friendRequestConfirm",
        "friendRequestReject",
        "friendDelete",
        "friendsListUpdate",
        "friendslist_status_circle",
        "EVENT_FRIENDS_LIST_QUERYING_GUILD",
        "EVENT_FRIENDS_LIST_QUERYING_USERTEAM",
        "MENU_FRIENDS_ONLINE_TITLE",
        "MENU_FRIENDS_OFFLINE_TITLE",
        "MENU_FRIENDS_SAD_AND_EMPTY",
        "MENU_PEOPLE_FRIENDS_TAB_HEADER",
        "MENU_PEOPLE_GUILD_TAB_HEADER",
        "MENU_PEOPLE_USER_TEAM_TAB_HEADER",
        "Social_FriendRequest",
        "Social_FriendAccept",
        "Social_PresenceBroadcast",
        "presenceBroadcast",
        "setPresenceInvisibility",
        "Nuo::Services::ChatClient::Username",
        "Nuo::Services::ChatClient::Nickname",
        "chatUrl",
        "chatUser",
        "chatPass",
        "MENU_FRIENDS_STATUS_AVAILABLE",
        "MENU_FRIENDS_STATUS_OFFLINE",
        "addFriend",
        "partyInviteSend",
    };

    static final String[] PHASE4_LEADERBOARD = {
        "getLeaderboardData",
        "leaderboardPanel",
        "leaderboardsPopup",
        "leaderboardId",
        "leaderboardTitle",
        "MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_MY_FRIENDS",
        "MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_MY_GUILD",
        "MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_TOP_100",
        "MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_3V3",
        "MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_5V5",
        "MENU_LEADERBOARDS_POPUP_TITLE",
        "eventLeaderboardProgress",
        "view_leaderboard",
        "filter_leaderboard_id",
    };

    static final String[] PHASE5_FEATURES = {
        "featuresEnabled",
        "visibilityFlags",
        "entitlementFilterMode",
        "entitlementFilterProducts",
        "leaderboards",
        "inGameChat",
        "liveEvents",
        "leaderboardsAlwaysQueryOfflineFriends",
        "hideBattlepassCallout",
        "enableStateUpdates",
    };

    @Override
    public void run() throws Exception {
        outputDir = System.getenv("VGF_REPORT_DIR");
        if (outputDir == null) outputDir = "/tmp/vgf_ghidra_reports";
        new File(outputDir).mkdirs();

        println("[analysis] Starting Menu UI analysis...");
        println("[analysis] Output dir: " + outputDir);

        // Setup decompiler
        decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        decomp.setOptions(opts);
        decomp.openProgram(currentProgram);

        // Phase 2
        println("\n[analysis] === PHASE 2: UI Event Dispatch ===");
        StringBuilder phase2 = new StringBuilder();
        phase2.append("# UI Event Dispatch System\n\n");
        phase2.append("Analysis of the E.V.I.L. engine's UI event dispatch mechanism.\n\n---\n\n");
        for (String s : PHASE2_EVENT_DISPATCH) {
            println("[analysis] Tracing: " + s);
            phase2.append(traceString(s, 1));
            phase2.append("\n---\n\n");
        }
        writeReport("ui_event_dispatch.md", phase2.toString());

        // Phase 3
        println("\n[analysis] === PHASE 3: Friends List ===");
        StringBuilder phase3 = new StringBuilder();
        phase3.append("# Friends List Data Path Analysis\n\n");
        phase3.append("Complete data path for friends list: RPC, model, UI, presence.\n\n---\n\n");
        for (String s : PHASE3_FRIENDS) {
            println("[analysis] Tracing: " + s);
            phase3.append(traceString(s, 1));
            phase3.append("\n---\n\n");
        }
        writeReport("friends_list_analysis.md", phase3.toString());

        // Phase 4
        println("\n[analysis] === PHASE 4: Leaderboard ===");
        StringBuilder phase4 = new StringBuilder();
        phase4.append("# Leaderboard Data Path Analysis\n\n");
        phase4.append("Complete data path for leaderboards: RPC, model, UI, navigation.\n\n---\n\n");
        for (String s : PHASE4_LEADERBOARD) {
            println("[analysis] Tracing: " + s);
            phase4.append(traceString(s, 1));
            phase4.append("\n---\n\n");
        }
        writeReport("leaderboard_analysis.md", phase4.toString());

        // Phase 5
        println("\n[analysis] === PHASE 5: Feature Flags ===");
        StringBuilder phase5 = new StringBuilder();
        phase5.append("# Feature Flag Gating System\n\n");
        phase5.append("Deep analysis of feature flag gating in the E.V.I.L. engine.\n\n---\n\n");
        for (String s : PHASE5_FEATURES) {
            println("[analysis] Tracing: " + s);
            phase5.append(traceString(s, 2));
            phase5.append("\n---\n\n");
        }

        // Special: feature parser at 0x1001329b0
        phase5.append(analyzeFeatureParser());
        // Special: __DATA pointer region
        phase5.append(analyzeDataPointerRegion());

        writeReport("feature_gating_analysis.md", phase5.toString());

        decomp.dispose();
        println("\n[analysis] === COMPLETE ===");
    }

    // ── Find string addresses ──

    private List<Address> findStringAddresses(String target) {
        List<Address> results = new ArrayList<>();
        Listing listing = currentProgram.getListing();

        // Search defined data for strings
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
            // Fallback: search memory bytes
            Memory mem = currentProgram.getMemory();
            byte[] searchBytes;
            try {
                searchBytes = (target + "\0").getBytes("UTF-8");
            } catch (Exception e) {
                return results;
            }
            Address addr = mem.getMinAddress();
            while (addr != null && !monitor.isCancelled()) {
                addr = mem.findBytes(addr, searchBytes, null, true, monitor);
                if (addr != null) {
                    results.add(addr);
                    addr = addr.add(1);
                }
            }
        }
        return results;
    }

    // ── Get xrefs to an address ──

    private List<Reference> getXrefsTo(Address addr) {
        ReferenceManager refMgr = currentProgram.getReferenceManager();
        List<Reference> result = new ArrayList<>();
        ReferenceIterator iter = refMgr.getReferencesTo(addr);
        while (iter.hasNext()) {
            result.add(iter.next());
        }
        return result;
    }

    // ── Get function containing address ──

    private Function getFuncAt(Address addr) {
        FunctionManager fm = currentProgram.getFunctionManager();
        return fm.getFunctionContaining(addr);
    }

    // ── Decompile a function ──

    private String decompileFunc(Function func) {
        if (func == null) return null;
        try {
            DecompileResults result = decomp.decompileFunction(func, 60, monitor);
            if (result != null && result.decompileCompleted()) {
                if (result.getDecompiledFunction() != null) {
                    return result.getDecompiledFunction().getC();
                }
            }
        } catch (Exception e) {
            return "// Decompilation failed: " + e.getMessage();
        }
        return null;
    }

    // ── Get callers of a function ──

    private Set<Function> getCallers(Function func) {
        Set<Function> callers = new HashSet<>();
        if (func == null) return callers;
        List<Reference> refs = getXrefsTo(func.getEntryPoint());
        for (Reference ref : refs) {
            Function caller = getFuncAt(ref.getFromAddress());
            if (caller != null && !caller.equals(func)) {
                callers.add(caller);
            }
        }
        return callers;
    }

    // ── Get callees of a function ──

    private Set<Function> getCallees(Function func) {
        Set<Function> callees = new HashSet<>();
        if (func == null) return callees;
        ReferenceManager refMgr = currentProgram.getReferenceManager();
        AddressSetView body = func.getBody();
        ghidra.program.model.address.AddressIterator addrIter = body.getAddresses(true);
        while (addrIter.hasNext()) {
            if (monitor.isCancelled()) break;
            Address addr = addrIter.next();
            Reference[] refs = refMgr.getReferencesFrom(addr);
            for (Reference ref : refs) {
                if (ref.getReferenceType().isCall()) {
                    Function callee = getFuncAt(ref.getToAddress());
                    if (callee != null && !callee.equals(func)) {
                        callees.add(callee);
                    }
                }
            }
        }
        return callees;
    }

    // ── Trace a string through xrefs and decompile ──

    private String traceString(String target, int depth) {
        StringBuilder sb = new StringBuilder();
        sb.append("### `").append(target).append("`\n\n");

        List<Address> addrs = findStringAddresses(target);
        if (addrs.isEmpty()) {
            sb.append("**String addresses:** NOT FOUND\n\n");
            return sb.toString();
        }

        sb.append("**String addresses:** ");
        for (int i = 0; i < addrs.size(); i++) {
            if (i > 0) sb.append(", ");
            sb.append("`0x").append(Long.toHexString(addrs.get(i).getOffset())).append("`");
        }
        sb.append("\n\n");

        Set<Address> seenFuncs = new HashSet<>();
        List<Function> refFuncs = new ArrayList<>();

        for (Address addr : addrs) {
            List<Reference> refs = getXrefsTo(addr);
            for (Reference ref : refs) {
                Function func = getFuncAt(ref.getFromAddress());
                if (func == null || seenFuncs.contains(func.getEntryPoint())) continue;
                seenFuncs.add(func.getEntryPoint());
                refFuncs.add(func);

                String funcAddr = "0x" + Long.toHexString(func.getEntryPoint().getOffset());
                sb.append("#### `").append(func.getName()).append("` @ `").append(funcAddr).append("`\n\n");
                sb.append("Referenced from: `0x").append(Long.toHexString(ref.getFromAddress().getOffset())).append("`\n\n");

                // Show callees
                Set<Function> callees = getCallees(func);
                if (!callees.isEmpty()) {
                    sb.append("**Calls:** ");
                    int count = 0;
                    for (Function callee : callees) {
                        if (count > 0) sb.append(", ");
                        if (count >= 15) { sb.append("..."); break; }
                        sb.append("`").append(callee.getName()).append("`");
                        count++;
                    }
                    sb.append("\n\n");
                }

                // Decompile
                String pseudocode = decompileFunc(func);
                if (pseudocode != null) {
                    if (pseudocode.length() > 10000) {
                        pseudocode = pseudocode.substring(0, 10000) + "\n// ... truncated ...";
                    }
                    sb.append("```c\n").append(pseudocode).append("\n```\n\n");
                } else {
                    sb.append("*Decompilation failed*\n\n");
                }
            }
        }

        // Trace callers if depth > 0
        if (depth > 0 && !refFuncs.isEmpty()) {
            sb.append("**Caller functions:**\n\n");
            int callerCount = 0;
            for (Function func : refFuncs) {
                for (Function caller : getCallers(func)) {
                    if (seenFuncs.contains(caller.getEntryPoint())) continue;
                    if (callerCount >= 5) break;
                    seenFuncs.add(caller.getEntryPoint());

                    String callerAddr = "0x" + Long.toHexString(caller.getEntryPoint().getOffset());
                    sb.append("#### Caller: `").append(caller.getName()).append("` @ `").append(callerAddr).append("`\n\n");
                    sb.append("Calls: `").append(func.getName()).append("`\n\n");

                    String pseudocode = decompileFunc(caller);
                    if (pseudocode != null) {
                        if (pseudocode.length() > 6000) {
                            pseudocode = pseudocode.substring(0, 6000) + "\n// ... truncated ...";
                        }
                        sb.append("```c\n").append(pseudocode).append("\n```\n\n");
                    }
                    callerCount++;
                }
            }
        }

        return sb.toString();
    }

    // ── Analyze feature parser at known address ──

    private String analyzeFeatureParser() {
        StringBuilder sb = new StringBuilder();
        sb.append("## Feature Parser Function (0x1001329b0)\n\n");

        Address parserAddr = currentProgram.getAddressFactory().getAddress("0x1001329b0");
        FunctionManager fm = currentProgram.getFunctionManager();
        Function parserFunc = fm.getFunctionAt(parserAddr);
        if (parserFunc == null) {
            parserFunc = fm.getFunctionContaining(parserAddr);
        }

        if (parserFunc == null) {
            sb.append("*Function not found at 0x1001329b0*\n\n");
            return sb.toString();
        }

        String addr = "0x" + Long.toHexString(parserFunc.getEntryPoint().getOffset());
        sb.append("**Function:** `").append(parserFunc.getName()).append("` @ `").append(addr).append("`\n\n");

        String pseudocode = decompileFunc(parserFunc);
        if (pseudocode != null) {
            sb.append("```c\n").append(pseudocode).append("\n```\n\n");
        }

        // Find all callers (consumers of the feature parser)
        Set<Function> callers = getCallers(parserFunc);
        if (!callers.isEmpty()) {
            sb.append("### Consumers of feature parser (" + callers.size() + ")\n\n");
            for (Function caller : callers) {
                String callerAddr = "0x" + Long.toHexString(caller.getEntryPoint().getOffset());
                sb.append("#### `").append(caller.getName()).append("` @ `").append(callerAddr).append("`\n\n");
                String callerCode = decompileFunc(caller);
                if (callerCode != null) {
                    if (callerCode.length() > 8000) {
                        callerCode = callerCode.substring(0, 8000) + "\n// ... truncated ...";
                    }
                    sb.append("```c\n").append(callerCode).append("\n```\n\n");
                }
            }
        }

        return sb.toString();
    }

    // ── Analyze __DATA pointer region ──

    private String analyzeDataPointerRegion() {
        StringBuilder sb = new StringBuilder();
        sb.append("## __DATA Function Pointer Region\n\n");
        sb.append("Memory dump around the feature parser function pointer at `__DATA+0x0145a8e8`:\n\n");
        sb.append("| Offset | VA | Value | Code Ptr? | Target Function |\n");
        sb.append("|--------|-----|-------|-----------|------------------|\n");

        Memory mem = currentProgram.getMemory();
        FunctionManager fm = currentProgram.getFunctionManager();
        long baseOffset = 0x0145a8e8;

        for (int off = -256; off <= 256; off += 8) {
            long absOffset = baseOffset + off;
            Address checkAddr = currentProgram.getAddressFactory().getAddress(
                "0x" + Long.toHexString(0x100000000L + absOffset));
            try {
                long val = mem.getLong(checkAddr);
                boolean isCodePtr = (val >= 0x10000b5e0L && val <= 0x101148000L);
                String targetFunc = "-";
                if (isCodePtr) {
                    Address targetAddr = currentProgram.getAddressFactory().getAddress(
                        "0x" + Long.toHexString(val));
                    Function func = fm.getFunctionAt(targetAddr);
                    if (func == null) func = fm.getFunctionContaining(targetAddr);
                    if (func != null) targetFunc = func.getName();
                }
                sb.append("| 0x").append(Long.toHexString(absOffset));
                sb.append(" | 0x").append(Long.toHexString(checkAddr.getOffset()));
                sb.append(" | 0x").append(Long.toHexString(val));
                sb.append(" | ").append(isCodePtr ? "YES" : "no");
                sb.append(" | ").append(targetFunc);
                sb.append(" |\n");
            } catch (MemoryAccessException e) {
                // skip
            }
        }
        sb.append("\n");

        // Decompile functions found as pointers near the target
        sb.append("### Nearby Function Pointer Targets (decompiled)\n\n");
        Set<String> decompiled = new HashSet<>();
        for (int off = -64; off <= 64; off += 8) {
            long absOffset = baseOffset + off;
            Address checkAddr = currentProgram.getAddressFactory().getAddress(
                "0x" + Long.toHexString(0x100000000L + absOffset));
            try {
                long val = mem.getLong(checkAddr);
                if (val >= 0x10000b5e0L && val <= 0x101148000L) {
                    Address targetAddr = currentProgram.getAddressFactory().getAddress(
                        "0x" + Long.toHexString(val));
                    Function func = fm.getFunctionAt(targetAddr);
                    if (func != null && !decompiled.contains(func.getName())) {
                        decompiled.add(func.getName());
                        String pseudocode = decompileFunc(func);
                        if (pseudocode != null) {
                            sb.append("#### `").append(func.getName()).append("` @ `0x");
                            sb.append(Long.toHexString(func.getEntryPoint().getOffset()));
                            sb.append("` (ptr at offset 0x").append(Long.toHexString(absOffset)).append(")\n\n");
                            if (pseudocode.length() > 5000) {
                                pseudocode = pseudocode.substring(0, 5000) + "\n// ... truncated ...";
                            }
                            sb.append("```c\n").append(pseudocode).append("\n```\n\n");
                        }
                    }
                }
            } catch (MemoryAccessException e) {
                // skip
            }
        }

        return sb.toString();
    }

    // ── Write report file ──

    private void writeReport(String filename, String content) throws IOException {
        String filepath = outputDir + "/" + filename;
        FileWriter fw = new FileWriter(filepath);
        fw.write(content);
        fw.close();
        println("[analysis] Wrote " + filepath + " (" + content.length() + " bytes)");
    }
}
