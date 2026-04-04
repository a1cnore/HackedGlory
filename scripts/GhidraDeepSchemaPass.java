// Deep schema extraction: decompile specific response parsers for
// friends, parties, match/trophy, and the stateUpdate/WebSocket handlers.
// Extracts NESTED field structure by tracing chained FUN_1000e86c0 calls.
//
// Priority targets:
//   - friendListAll parser (FUN_1004edef0 area)
//   - party/quint party handlers
//   - match data (update response, queryPendingMatch)
//   - trophy case parser
//   - stateUpdate/WebSocket message handlers (processMessage, dismissReliableMessage)
//   - the notifyUrl WebSocket client code
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

public class GhidraDeepSchemaPass extends GhidraScript {

    private DecompInterface decomp;
    private FunctionManager fm;
    private ReferenceManager refMgr;
    private AddressFactory af;
    private Memory mem;
    private String outputDir;

    // Known parser/handler addresses from previous analysis
    static final long JSON_KEY_LOOKUP  = 0x1000e86c0L;
    static final long JSON_VAL_EXTRACT = 0x1000e87dcL;
    static final long RPC_DISPATCH     = 0x1004f22f0L;

    // ── Target functions to decompile deeply ──

    // Response parsers (from rpc_schemas.json)
    static final long[] RESPONSE_PARSERS = {
        0x1004edef0L, // stateUpdateCallback — friends, party push, quint events
        0x100507640L, // playerInfoUpdate — full player state (72 fields)
        0x100505520L, // sessionBootstrap — full session with all URLs
        0x1005039acL, // basicResult — simple success/fail
        0x1004f11bcL, // simpleCallback — fire-and-forget ack
        0x100516908L, // eventsData — leaderboard/live events
        0x10050c2bcL, // guildData — guild members/stats
        0x100519118L, // equipmentData — loadout/equipment
    };

    // Specific RPC sender functions for priority methods
    static final String[][] PRIORITY_SENDERS = {
        // {method_name, sender_addr}
        {"friendListAll",          "0x1004f58d8"},
        {"friendRequestIssueByHandle", "0x1004f5b0c"},
        {"friendRequestConfirm",   "0x1004f5c30"},
        {"friendDelete",           "0x1004f5f24"},
        {"friendAddFavorite",      "0x1004f6020"},
        {"friendsListUpdate",      "0x1004edef0"},
        {"createParty",            "0x1004f6f4c"},
        {"partyInviteSend",        "0x1004f7878"},
        {"partyInviteConfirm",     "0x1004f7488"},
        {"partyMemberKick",        "0x1004f7b7c"},
        {"partyMembers",           "0x1004f7d70"},
        {"partyChangeQueueMode",   "0x1004f8014"},
        {"createQuintParty",       "0x1004f6478"},
        {"joinQuintParty",         "0x1004f6574"},
        {"updateQuintPartyState",  "0x1004f6880"},
        {"queryPendingMatch",      "0x1004fd4b4"},
        {"acceptMatch",            "0x1004fd8e0"},
        {"getTrophyCase",          "0x100501448"},
        {"getAscensionDisplayData","0x100501548"},
        {"getHeroMastery",         "0x1004fef50"},
        {"processMessage",         "0x1004fde88"},
        {"dismissReliableMessage", "0x1004fde88"},
        {"notifyGameResults",      "0x100503314"},
        {"recordMatchExperienceMetrics", "0x100503748"},
        {"presenceBroadcast",      "0x1004f8ce0"},
        {"guildGetData",           "0x1004fb5ac"},
    };

    // Strings related to WebSocket/push notification system
    static final String[] WS_STRINGS = {
        "notifyUrl",
        "notifyFallbackUrl",
        "enableStateUpdates",
        "missedStateUpdateMessagesThreshold",
        "processMessage",
        "dismissReliableMessage",
        "stateUpdate",
        "quintPartyStateUpdate",
        "quintPartyJoinRequest",
        "quintPartyPlayerLeft",
        "quintPartyMemberKick",
        "friendsListUpdate",
        "WebSocket",
        "Opening WebSocket connection: %s",
        "WebSocket successful HTTP status: %s",
        "ERROR: Could not parse WebSocket url: %s",
        "ERROR: Got unexpected WebSocket message.",
        "Quality_Client_Switched_LongPoll",
        "Sec-WebSocket-Key",
        "Upgrade: websocket",
        "StateUpdate_Message_Dropped",
        "ws://%",
        "Nuo::Services::ChatClient",
        "chatUrl",
        "chatUser",
        "chatPass",
    };

    // Friends list specific strings
    static final String[] FRIENDS_STRINGS = {
        "confirmed",
        "pending",
        "numOffline",
        "numFriends",
        "availability",
        "playerUUID",
        "handle",
        "isDev",
        "skillTier",
        "level",
        "guildName",
        "guildTag",
        "guildId",
        "teamName",
        "teamTag",
        "teamId",
        "seasonalWins",
        "banTTL",
        "favorite",
        "ascensionCombinedRank",
        "availabilityElapsed",
        "friendInMatchInformation",
    };

    // Party specific strings
    static final String[] PARTY_STRINGS = {
        "partyUUID",
        "partyUuid",
        "partyType",
        "partySize",
        "partyQueueMode",
        "partyQueueDifficulty",
        "partyMembers",
        "partyInvitation",
        "quintPartyStateUpdate",
        "quintPartyJoinRequest",
        "quintPartyPlayerLeft",
        "quintPartyMemberKick",
        "states",
        "counts",
    };

    // Trophy/match specific strings
    static final String[] TROPHY_STRINGS = {
        "trophyCase",
        "trophy_type",
        "trophy_name",
        "season",
        "value",
        "seasonId",
        "seasonGuildTrophy",
        "seasonTeamTrophy",
        "seasonTrophy",
        "matchId",
        "matchResult",
        "eloEarned",
        "eloEarnedDelta",
        "heroId",
        "heroName",
        "heroSkin",
        "kills",
        "deaths",
        "assists",
        "minionKills",
        "goldEarned",
    };

    @Override
    public void run() throws Exception {
        outputDir = System.getenv("VGF_REPORT_DIR");
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
        report.append("# Deep Schema Pass — Priority Payload Schemas\n\n");
        report.append("Decompiled response parsers and sender functions for:\n");
        report.append("friends, parties, match/trophy, and WebSocket/push handlers.\n\n");

        // ═══════════════════════════════════════════════
        // SECTION 1: All 8 response parser decompilations
        // ═══════════════════════════════════════════════
        report.append("## 1. Response Parser Decompilations\n\n");
        report.append("These are the 8 response handler functions that parse JSON-RPC responses.\n");
        report.append("Field names appear as string arguments to FUN_1000e86c0 (key lookup).\n\n");

        String[] parserNames = {
            "stateUpdateCallback", "playerInfoUpdate", "sessionBootstrap",
            "basicResult", "simpleCallback", "eventsData", "guildData", "equipmentData"
        };
        for (int i = 0; i < RESPONSE_PARSERS.length; i++) {
            report.append("### Parser: ").append(parserNames[i]);
            report.append(" @ `0x").append(Long.toHexString(RESPONSE_PARSERS[i])).append("`\n\n");
            report.append(decompileAt(RESPONSE_PARSERS[i]));

            // Also decompile callees of the parser (sub-parsers)
            Function parserFunc = getFuncAt(RESPONSE_PARSERS[i]);
            if (parserFunc != null) {
                Set<Function> callees = getCallees(parserFunc);
                int subCount = 0;
                for (Function callee : callees) {
                    long ep = callee.getEntryPoint().getOffset();
                    // Only decompile callees that also call JSON_KEY_LOOKUP
                    // (these are sub-parsers that handle nested objects)
                    if (functionCallsTarget(callee, JSON_KEY_LOOKUP) && subCount < 8) {
                        report.append("#### Sub-parser: `").append(callee.getName());
                        report.append("` @ `0x").append(Long.toHexString(ep)).append("`\n\n");
                        report.append(decompileAt(ep));
                        subCount++;
                    }
                }
            }
            report.append("---\n\n");
        }

        // ═══════════════════════════════════════════════
        // SECTION 2: Priority sender decompilations
        // ═══════════════════════════════════════════════
        report.append("## 2. Priority Sender Functions\n\n");
        for (String[] entry : PRIORITY_SENDERS) {
            String methodName = entry[0];
            long addr = Long.parseUnsignedLong(entry[1].substring(2), 16);
            report.append("### Sender: `").append(methodName).append("`");
            report.append(" @ `").append(entry[1]).append("`\n\n");
            report.append(decompileAt(addr));
            report.append("---\n\n");
        }

        // ═══════════════════════════════════════════════
        // SECTION 3: WebSocket/Push notification system
        // ═══════════════════════════════════════════════
        report.append("## 3. WebSocket / Push Notification System\n\n");
        for (String target : WS_STRINGS) {
            report.append(traceString(target, 2));
            report.append("---\n\n");
        }

        // ═══════════════════════════════════════════════
        // SECTION 4: Friends list field references
        // ═══════════════════════════════════════════════
        report.append("## 4. Friends List Field References\n\n");
        for (String target : FRIENDS_STRINGS) {
            report.append(traceString(target, 1));
            report.append("---\n\n");
        }

        // ═══════════════════════════════════════════════
        // SECTION 5: Party system field references
        // ═══════════════════════════════════════════════
        report.append("## 5. Party System Field References\n\n");
        for (String target : PARTY_STRINGS) {
            report.append(traceString(target, 1));
            report.append("---\n\n");
        }

        // ═══════════════════════════════════════════════
        // SECTION 6: Trophy/Match data field references
        // ═══════════════════════════════════════════════
        report.append("## 6. Trophy & Match Data Field References\n\n");
        for (String target : TROPHY_STRINGS) {
            report.append(traceString(target, 1));
            report.append("---\n\n");
        }

        // ═══════════════════════════════════════════════
        // SECTION 7: The `update` response handler
        // (this is the main server→client push channel)
        // ═══════════════════════════════════════════════
        report.append("## 7. The `update` Response Handler\n\n");
        report.append("The update method is polled every ~10-100s and carries state transitions.\n\n");
        report.append(traceString("update", 2));

        // Also trace the state field values
        String[] stateValues = {"menus", "pending_auto", "matched_partners",
                                "match_pending", "playing", "post_match", "idle"};
        for (String sv : stateValues) {
            report.append("### State value: `").append(sv).append("`\n\n");
            List<Address> addrs = findStringAddresses(sv);
            if (addrs.isEmpty()) {
                report.append("*Not found*\n\n");
                continue;
            }
            report.append("String at: ");
            for (Address a : addrs) {
                report.append("`0x").append(Long.toHexString(a.getOffset())).append("` ");
            }
            report.append("\n\n");
            // Find xrefs but just list them (don't decompile — too many)
            for (Address addr : addrs) {
                List<Reference> refs = getXrefsTo(addr);
                for (Reference ref : refs) {
                    Function func = fm.getFunctionContaining(ref.getFromAddress());
                    if (func != null) {
                        report.append("- Referenced by `").append(func.getName());
                        report.append("` @ `0x").append(Long.toHexString(func.getEntryPoint().getOffset()));
                        report.append("` from `0x").append(Long.toHexString(ref.getFromAddress().getOffset())).append("`\n");
                    }
                }
            }
            report.append("\n");
        }

        // Write report
        String filepath = outputDir + "/deep_schema_pass.md";
        FileWriter fw = new FileWriter(filepath);
        fw.write(report.toString());
        fw.close();

        decomp.dispose();
        println("[deep-schema] Wrote " + filepath + " (" + report.length() + " bytes)");
        println("[deep-schema] COMPLETE");
    }

    // ── Decompile function at address ──
    private String decompileAt(long va) {
        Address addr = af.getAddress("0x" + Long.toHexString(va));
        Function func = fm.getFunctionAt(addr);
        if (func == null) func = fm.getFunctionContaining(addr);
        if (func == null) return "*Function not found at 0x" + Long.toHexString(va) + "*\n\n";

        StringBuilder sb = new StringBuilder();
        String code = decompFunc(func);
        if (code != null) {
            if (code.length() > 15000) code = code.substring(0, 15000) + "\n// ...truncated...";
            sb.append("```c\n").append(code).append("\n```\n\n");
        } else {
            sb.append("*Decompilation failed*\n\n");
        }
        return sb.toString();
    }

    // ── Trace string through xrefs and decompile referencing functions ──
    private String traceString(String target, int maxFuncs) {
        StringBuilder sb = new StringBuilder();
        sb.append("### `").append(target).append("`\n\n");

        List<Address> addrs = findStringAddresses(target);
        if (addrs.isEmpty()) {
            sb.append("**Not found in binary**\n\n");
            return sb.toString();
        }

        sb.append("**String at:** ");
        for (int i = 0; i < addrs.size() && i < 5; i++) {
            if (i > 0) sb.append(", ");
            sb.append("`0x").append(Long.toHexString(addrs.get(i).getOffset())).append("`");
        }
        sb.append("\n\n");

        Set<Address> seen = new HashSet<>();
        int funcCount = 0;

        for (Address addr : addrs) {
            if (funcCount >= maxFuncs) break;
            List<Reference> refs = getXrefsTo(addr);
            for (Reference ref : refs) {
                if (funcCount >= maxFuncs) break;
                Function func = fm.getFunctionContaining(ref.getFromAddress());
                if (func == null || seen.contains(func.getEntryPoint())) continue;
                seen.add(func.getEntryPoint());

                long ep = func.getEntryPoint().getOffset();
                sb.append("#### `").append(func.getName()).append("` @ `0x");
                sb.append(Long.toHexString(ep)).append("`\n\n");

                String code = decompFunc(func);
                if (code != null) {
                    if (code.length() > 12000) code = code.substring(0, 12000) + "\n// ...truncated...";
                    sb.append("```c\n").append(code).append("\n```\n\n");
                }
                funcCount++;
            }
        }
        return sb.toString();
    }

    // ── Helpers ──

    private Function getFuncAt(long va) {
        Address addr = af.getAddress("0x" + Long.toHexString(va));
        Function func = fm.getFunctionAt(addr);
        if (func == null) func = fm.getFunctionContaining(addr);
        return func;
    }

    private Set<Function> getCallees(Function func) {
        Set<Function> callees = new HashSet<>();
        if (func == null) return callees;
        AddressSetView body = func.getBody();
        ghidra.program.model.address.AddressIterator addrIter = body.getAddresses(true);
        while (addrIter.hasNext()) {
            if (monitor.isCancelled()) break;
            Address addr = addrIter.next();
            Reference[] refs = refMgr.getReferencesFrom(addr);
            for (Reference ref : refs) {
                if (ref.getReferenceType().isCall()) {
                    Function callee = fm.getFunctionAt(ref.getToAddress());
                    if (callee == null) callee = fm.getFunctionContaining(ref.getToAddress());
                    if (callee != null && !callee.equals(func)) {
                        callees.add(callee);
                    }
                }
            }
        }
        return callees;
    }

    private boolean functionCallsTarget(Function func, long targetVA) {
        Address targetAddr = af.getAddress("0x" + Long.toHexString(targetVA));
        AddressSetView body = func.getBody();
        ghidra.program.model.address.AddressIterator addrIter = body.getAddresses(true);
        while (addrIter.hasNext()) {
            if (monitor.isCancelled()) return false;
            Address addr = addrIter.next();
            Reference[] refs = refMgr.getReferencesFrom(addr);
            for (Reference ref : refs) {
                if (ref.getReferenceType().isCall() && ref.getToAddress().equals(targetAddr)) {
                    return true;
                }
            }
        }
        return false;
    }

    private List<Address> findStringAddresses(String target) {
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

    private List<Reference> getXrefsTo(Address addr) {
        List<Reference> result = new ArrayList<>();
        ReferenceIterator iter = refMgr.getReferencesTo(addr);
        while (iter.hasNext()) result.add(iter.next());
        return result;
    }

    private String decompFunc(Function func) {
        if (func == null) return null;
        try {
            DecompileResults result = decomp.decompileFunction(func, 180, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                return result.getDecompiledFunction().getC();
            }
        } catch (Exception e) {}
        return null;
    }
}
