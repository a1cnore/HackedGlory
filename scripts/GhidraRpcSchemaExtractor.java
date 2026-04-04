// Ghidra headless script: extract RPC method schemas from Vainglory binary.
//
// For each JSON-RPC method string in the binary:
//   1. Find the sender function (calls RPC dispatch FUN_1004f22f0)
//   2. Find the response parser (calls JSON key lookup FUN_1000e86c0)
//   3. Extract request/response field names from decompiled code
//   4. Output rpc_schemas.json + rpc_schema_report.md
//
// Usage: analyzeHeadless <project> GameKindred -postScript GhidraRpcSchemaExtractor.java
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
import java.util.regex.*;

public class GhidraRpcSchemaExtractor extends GhidraScript {

    private DecompInterface decomp;
    private FunctionManager fm;
    private ReferenceManager refMgr;
    private AddressFactory af;
    private Memory mem;
    private String outputDir;

    // ── Known function addresses ──

    static final long RPC_DISPATCH     = 0x1004f22f0L; // FUN_1004f22f0 — central RPC send
    static final long STRING_CTOR      = 0x1000ee4ecL; // FUN_1000ee4ec — std::string ctor
    static final long JSON_KEY_LOOKUP  = 0x1000e86c0L; // FUN_1000e86c0 — dict key lookup
    static final long JSON_VAL_EXTRACT = 0x1000e87dcL; // FUN_1000e87dc — dict typed extract

    // ── RPC code region (all known senders/parsers live here) ──
    static final long RPC_CODE_START = 0x1004e0000L;
    static final long RPC_CODE_END   = 0x100540000L;

    // Parser search radius around sender address
    static final long PARSER_SEARCH_RADIUS = 0x8000L;

    // ── Methods already seen in MITM traffic ──
    static final Set<String> MITM_CAPTURED = new HashSet<>(Arrays.asList(
        "acceptMatch", "createGuestPlayer", "endSession", "exitLobby",
        "friendListAll", "getLeaderboardData", "getLiveEventData",
        "getPlayerForGuestAccount", "getPlayerInfo", "getSkinManifest",
        "getTalentsData", "guildGetData", "joinLobby", "notifyExitPostMatch",
        "notifyPlayerAction", "queryPendingMatch", "rejectMatch",
        "startSessionForPlayer", "update", "updatePlatformPlayerConfig"
    ));

    // ── Hardcoded 142 known RPC methods from JSONRpc cluster ──
    static final String[] KNOWN_RPC_METHODS = {
        "acceptMatch", "addDeviceToken", "askInGameFriendToPlay",
        "askRegistrationConsent",
        "attemptRedeemAscensionChest", "attemptRedeemAscensionRankUpChest",
        "attemptRedeemAscensionSeasonEndChest", "attemptRedeemSeasonalAscensionChest",
        "authenticate", "buyAscensionSeasonalBundle",
        "changeGuildMembership", "changeGuildMotto",
        "collectHeroChest", "collectProgressiveChest",
        "createAccountForPlayer", "createGuestPlayer",
        "createParty", "createQuintParty",
        "destroyQuintParty", "dismissReliableMessage",
        "endSession", "equipToSlot",
        "equippedEmoji", "equippedHat", "equippedPingPack",
        "exitLobby",
        "forgeCard", "forgeEssence",
        "friendAddFavorite", "friendDelete", "friendDeleteFavorite",
        "friendListAll", "friendNotify", "friendReplyFromInGame",
        "friendRequestConfirm", "friendRequestIssueByHandle", "friendRequestReject",
        "friendsListUpdate",
        "getBuffManifest", "getCardBoxManifest", "getDailyPicker",
        "getForgeManifest", "getHeroMastery",
        "getInventoryGroups", "getLeaderboardData", "getLiveEventData",
        "getPlayerCardInventory", "getPlayerForGuestAccount",
        "getPlayerFromPlatform", "getPlayerInfo", "getPlayerInfos",
        "getPlayerSkinProgress",
        "getProgressiveChestDescriptions",
        "getQuestDisplayDataForPlayer", "getQuestDisplayDataForPlayerAndType",
        "getRewardChestDefinitions", "getRewardsManifest",
        "getSeasonRewardsManifest", "getSkinManifest",
        "getTalentsData", "getTrophyCase",
        "guildChangeName", "guildChangeOfficerStatus",
        "guildChangeSettings", "guildChangeTag",
        "guildCollectJoinBonus", "guildGetData",
        "guildInviteConfirm", "guildInviteOnly",
        "guildInviteReject", "guildInviteSend",
        "guildLanguageCode", "guildMemberKick",
        "guildMessage", "guildRedeemChest",
        "guildSearch", "guildTransferCaptain",
        "isCaptain", "isGovernmentIdVerified",
        "joinGuild", "joinLobby", "joinQuintParty",
        "leaveGuild", "leaveParty", "leaveQuintParty", "leaveTeam",
        "notifyExitPostMatch", "notifyGameResults", "notifyPlayerAction",
        "openInventoryChest", "openRewardChest",
        "partyBalanceTeams", "partyChangeQueueMode",
        "partyInviteConfirm", "partyInviteReject", "partyInviteSend",
        "partyLobbyEnter", "partyLobbyExit",
        "partyMemberKick", "partyMemberMove", "partyMembers",
        "presenceBroadcast", "presenceSetReceiveBroadcast",
        "processMessage",
        "purchaseCardPack", "purchaseDailyPick",
        "queryGuildInvites", "queryPartyInvites",
        "queryPendingMatch", "queryPlayerInboxMessages", "queryTeamInvites",
        "recordMatchExperienceMetrics",
        "redeemQuestForPlayer", "refreshCardBoxManifest",
        "rejectMatch",
        "report", "reportHonorPlayer",
        "setPlayerHandle", "setPresenceInvisibility", "setTutorialState",
        "skipQuestForPlayer",
        "spectateFriend", "spectatorExitMatch",
        "startSessionForPlayer",
        "storeCancelPendingGift", "storePrepareIAP",
        "storeProcessIAP", "storeRecordPendingGift", "storeRequestPurchaseSKU",
        "teamInviteConfirm", "teamInviteReject", "teamInviteSend",
        "teamMemberKick",
        "update", "updatePlatformPlayerConfig", "updateQuintPartyState",
        "verifyGovernmentId", "weaveHeroSkin"
    };

    // ── Method prefixes for discovery (from build_protocol_spec.py) ──
    static final String[] METHOD_PREFIXES = {
        "accept", "add", "ask", "attempt", "authenticate", "buy", "change",
        "collect", "create", "delete", "destroy", "dismiss", "end", "equip",
        "exit", "forge", "friend", "get", "guild", "is", "join", "leave",
        "link", "notify", "open", "party", "presence", "process", "purchase",
        "query", "redeem", "record", "refresh", "reject", "report", "set",
        "skip", "spectate", "spectator", "start", "store", "team", "update",
        "verify", "weave"
    };

    // ── Per-method result ──
    static class MethodInfo {
        String name;
        long stringAddr;
        long senderAddr = -1;
        String senderName;
        long parserAddr = -1;
        String parserName;
        String category;
        boolean seenInMitm;
        int timeoutSec = -1;
        boolean hasFeatureGate;
        List<String> requestFields = new ArrayList<>();
        List<String> responseFields = new ArrayList<>();
        String senderCode;
        String parserCode;
        String status = "ok"; // ok, sender_not_found, parser_not_found
    }

    // ── Regex patterns for field extraction ──
    static final Pattern KEY_LOOKUP_PAT = Pattern.compile(
        "FUN_1000e86c0\\s*\\([^,]+,\\s*\"([^\"]+)\"\\)");
    static final Pattern VAL_EXTRACT_PAT = Pattern.compile(
        "FUN_1000e87dc\\s*\\([^,]+,\\s*&?\\w+\\)");
    static final Pattern STRING_LITERAL_PAT = Pattern.compile(
        "\"([a-zA-Z_][a-zA-Z0-9_]{2,})\"");
    static final Pattern TIMEOUT_PAT = Pattern.compile(
        "FUN_1004f22f0\\s*\\([^)]*,\\s*(0x[0-9a-f]+|\\d+)\\s*,\\s*\\d+\\s*\\)");
    // Param builder helpers
    static final Pattern PARAM_BUILDER_PAT = Pattern.compile(
        "(FUN_1004f4c20|FUN_1004f59d0|FUN_1004f4e58)");

    // ── Decompilation cache ──
    Map<Long, String> decompCache = new HashMap<>();

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

        println("[rpc-extract] Starting RPC schema extraction...");
        println("[rpc-extract] Output dir: " + outputDir);

        // ── Phase 1: Find all RPC method strings ──
        println("\n[rpc-extract] === Phase 1: Enumerating RPC method strings ===");
        Map<String, Address> methodStrings = findRpcMethodStrings();
        println("[rpc-extract] Found " + methodStrings.size() + " RPC method strings");

        // ── Phase 2-6: Process each method ──
        List<MethodInfo> results = new ArrayList<>();
        int idx = 0;
        for (Map.Entry<String, Address> entry : methodStrings.entrySet()) {
            if (monitor.isCancelled()) break;
            idx++;
            String methodName = entry.getKey();
            Address strAddr = entry.getValue();

            println("[rpc-extract] [" + idx + "/" + methodStrings.size() + "] " + methodName);

            MethodInfo info = new MethodInfo();
            info.name = methodName;
            info.stringAddr = strAddr.getOffset();
            info.seenInMitm = MITM_CAPTURED.contains(methodName);
            info.category = categorize(methodName);

            // Phase 2: Find sender
            Function sender = findSenderFunction(methodName, strAddr);
            if (sender != null) {
                info.senderAddr = sender.getEntryPoint().getOffset();
                info.senderName = sender.getName();

                // Phase 3: Extract request schema
                String senderCode = decompFunc(sender);
                info.senderCode = senderCode;
                if (senderCode != null) {
                    info.requestFields = extractRequestFields(senderCode);
                    info.timeoutSec = extractTimeout(senderCode);
                    info.hasFeatureGate = detectFeatureGate(senderCode);
                }

                // Phase 4: Find response parser
                Function parser = findParserFunction(methodName, sender);
                if (parser != null) {
                    info.parserAddr = parser.getEntryPoint().getOffset();
                    info.parserName = parser.getName();

                    // Phase 5: Extract response schema
                    String parserCode = decompFunc(parser);
                    info.parserCode = parserCode;
                    if (parserCode != null) {
                        info.responseFields = extractResponseFields(parserCode);
                    }
                } else {
                    info.status = "parser_not_found";
                }
            } else {
                info.status = "sender_not_found";
            }

            results.add(info);
        }

        // ── Phase 7: Output ──
        println("\n[rpc-extract] === Phase 7: Writing output ===");
        writeJsonOutput(results);
        writeMarkdownReport(results);

        decomp.dispose();
        println("\n[rpc-extract] === COMPLETE ===");
        println("[rpc-extract] Processed " + results.size() + " methods");

        int senders = 0, parsers = 0, dead = 0;
        for (MethodInfo m : results) {
            if (m.senderAddr != -1) senders++;
            if (m.parserAddr != -1) parsers++;
            if (!m.seenInMitm) dead++;
        }
        println("[rpc-extract] Senders found: " + senders + "/" + results.size());
        println("[rpc-extract] Parsers found: " + parsers + "/" + results.size());
        println("[rpc-extract] Dead methods (not in MITM): " + dead);
    }

    // ════════════════════════════════════════════════════════════════════
    // Phase 1: Find RPC method strings
    // ════════════════════════════════════════════════════════════════════

    private Map<String, Address> findRpcMethodStrings() {
        // Build the known set for fast lookup
        Set<String> knownSet = new HashSet<>(Arrays.asList(KNOWN_RPC_METHODS));

        // Single pass over all defined string data
        Map<String, Address> found = new LinkedHashMap<>();
        Listing listing = currentProgram.getListing();
        DataIterator dataIter = listing.getDefinedData(true);

        while (dataIter.hasNext() && !monitor.isCancelled()) {
            Data data = dataIter.next();
            if (!data.hasStringValue()) continue;
            Object val = data.getValue();
            if (val == null) continue;
            String s = val.toString();

            // Check if it's a known RPC method
            if (knownSet.contains(s)) {
                found.put(s, data.getAddress());
                continue;
            }

            // Also discover via prefix heuristic (catches anything we missed)
            if (isMethodCandidate(s) && !found.containsKey(s)) {
                // Only include if it has xrefs to functions in the RPC code region
                List<Reference> refs = getXrefsTo(data.getAddress());
                for (Reference ref : refs) {
                    long fromAddr = ref.getFromAddress().getOffset();
                    if (fromAddr >= RPC_CODE_START && fromAddr <= RPC_CODE_END) {
                        found.put(s, data.getAddress());
                        break;
                    }
                }
            }
        }

        // Fallback: ensure all 142 known methods are present (some may need byte search)
        for (String method : KNOWN_RPC_METHODS) {
            if (!found.containsKey(method)) {
                List<Address> addrs = findStringBytes(method);
                if (!addrs.isEmpty()) {
                    found.put(method, addrs.get(0));
                }
            }
        }

        return found;
    }

    private boolean isMethodCandidate(String s) {
        if (s.length() < 4 || s.length() > 60) return false;
        if (!Character.isLowerCase(s.charAt(0))) return false;
        // Must not contain spaces, dots, slashes
        if (s.contains(" ") || s.contains(".") || s.contains("/")) return false;
        for (String prefix : METHOD_PREFIXES) {
            if (s.startsWith(prefix)) return true;
        }
        return false;
    }

    // ════════════════════════════════════════════════════════════════════
    // Phase 2: Find sender functions
    // ════════════════════════════════════════════════════════════════════

    private Function findSenderFunction(String methodName, Address strAddr) {
        List<Reference> refs = getXrefsTo(strAddr);

        // First pass: find a function that both references the string AND calls dispatch
        for (Reference ref : refs) {
            Function func = fm.getFunctionContaining(ref.getFromAddress());
            if (func == null) continue;

            if (functionCallsTarget(func, RPC_DISPATCH)) {
                return func;
            }
        }

        // Second pass: find a function that references the string AND calls STRING_CTOR
        // (the string ctor is always called right before dispatch in sender functions)
        for (Reference ref : refs) {
            Function func = fm.getFunctionContaining(ref.getFromAddress());
            if (func == null) continue;

            if (functionCallsTarget(func, STRING_CTOR)) {
                // This function sets up the method name — it likely calls dispatch
                // through a wrapper. Still a valid sender.
                return func;
            }
        }

        return null;
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
                if (ref.getReferenceType().isCall() || ref.getReferenceType().isJump()) {
                    if (ref.getToAddress().equals(targetAddr)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    // ════════════════════════════════════════════════════════════════════
    // Phase 3: Extract request schema from senders
    // ════════════════════════════════════════════════════════════════════

    private List<String> extractRequestFields(String code) {
        List<String> fields = new ArrayList<>();
        Set<String> seen = new HashSet<>();

        // Find all string literals in the sender code
        Matcher m = STRING_LITERAL_PAT.matcher(code);
        while (m.find()) {
            String lit = m.group(1);
            // Filter: skip the method name itself, function names, common non-fields
            if (lit.startsWith("FUN_") || lit.startsWith("DAT_")) continue;
            if (lit.startsWith("operator")) continue;
            if (lit.equals("returnValue")) continue; // response-side field
            if (isFieldCandidate(lit) && !seen.contains(lit)) {
                seen.add(lit);
                fields.add(lit);
            }
        }
        return fields;
    }

    private boolean isFieldCandidate(String s) {
        if (s.length() < 3 || s.length() > 50) return false;
        // camelCase or snake_case identifiers that look like JSON fields
        return s.matches("[a-zA-Z_][a-zA-Z0-9_]*") && !s.equals(s.toUpperCase());
    }

    private int extractTimeout(String code) {
        // Look for the dispatch call and extract the timeout argument
        // Pattern: FUN_1004f22f0(..., 0x5a, 0)  — 7th arg is timeout
        Matcher m = TIMEOUT_PAT.matcher(code);
        if (m.find()) {
            String val = m.group(1);
            try {
                if (val.startsWith("0x")) {
                    return Integer.parseInt(val.substring(2), 16);
                }
                return Integer.parseInt(val);
            } catch (NumberFormatException e) {
                return -1;
            }
        }
        return -1;
    }

    private boolean detectFeatureGate(String code) {
        // Feature gates are additional checks before the dispatch call
        // e.g., getLeaderboardData checks *(int *)(param_1 + 0x2b08) == 0
        // Look for offset-based checks that aren't the standard session check
        return code.contains("0x2b08") || code.contains("0x2b0c") ||
               code.contains("0x2b10") || code.contains("0x2b14");
    }

    // ════════════════════════════════════════════════════════════════════
    // Phase 4: Find response parsers
    // ════════════════════════════════════════════════════════════════════

    private Function findParserFunction(String methodName, Function sender) {
        long senderAddr = sender.getEntryPoint().getOffset();

        // Strategy: scan functions near the sender that call JSON_KEY_LOOKUP
        long searchStart = Math.max(senderAddr - PARSER_SEARCH_RADIUS, RPC_CODE_START);
        long searchEnd = Math.min(senderAddr + PARSER_SEARCH_RADIUS, RPC_CODE_END);

        Address startAddr = af.getAddress("0x" + Long.toHexString(searchStart));
        FunctionIterator funcIter = fm.getFunctions(startAddr, true);

        Function bestCandidate = null;
        int bestScore = 0;

        while (funcIter.hasNext() && !monitor.isCancelled()) {
            Function func = funcIter.next();
            long ep = func.getEntryPoint().getOffset();
            if (ep > searchEnd) break;
            if (ep == senderAddr) continue; // skip the sender itself

            // Quick check: does this function call JSON_KEY_LOOKUP or JSON_VAL_EXTRACT?
            boolean callsLookup = functionCallsTarget(func, JSON_KEY_LOOKUP);
            boolean callsExtract = functionCallsTarget(func, JSON_VAL_EXTRACT);

            if (!callsLookup && !callsExtract) continue;

            // Score based on how many JSON lookups it makes
            int score = 0;
            if (callsLookup) score += 2;
            if (callsExtract) score += 1;

            // Bonus: decompile and check for "returnValue"
            String code = decompFunc(func);
            if (code != null) {
                if (code.contains("\"returnValue\"")) score += 5;
                // Count key lookup calls
                Matcher km = KEY_LOOKUP_PAT.matcher(code);
                while (km.find()) score += 1;
            }

            // Proximity bonus: closer to sender = more likely related
            long dist = Math.abs(ep - senderAddr);
            if (dist < 0x1000) score += 3;
            else if (dist < 0x2000) score += 2;
            else if (dist < 0x4000) score += 1;

            if (score > bestScore) {
                bestScore = score;
                bestCandidate = func;
            }
        }

        // Only return if we have a reasonably confident match
        return (bestScore >= 5) ? bestCandidate : null;
    }

    // ════════════════════════════════════════════════════════════════════
    // Phase 5: Extract response schema from parsers
    // ════════════════════════════════════════════════════════════════════

    private List<String> extractResponseFields(String code) {
        List<String> fields = new ArrayList<>();
        Set<String> seen = new HashSet<>();

        // Primary: extract key names from FUN_1000e86c0 calls
        Matcher m = KEY_LOOKUP_PAT.matcher(code);
        while (m.find()) {
            String field = m.group(1);
            if (!seen.contains(field)) {
                seen.add(field);
                fields.add(field);
            }
        }

        // Secondary: extract string literals assigned near FUN_1000e87dc calls
        // These are local_var = "fieldName"; ... FUN_1000e87dc(..., &local_var)
        // We find all string literals in the function that look like field names
        Matcher lit = STRING_LITERAL_PAT.matcher(code);
        while (lit.find()) {
            String s = lit.group(1);
            if (s.startsWith("FUN_") || s.startsWith("DAT_")) continue;
            if (s.startsWith("operator") || s.startsWith("WARNING")) continue;
            if (isFieldCandidate(s) && !seen.contains(s)) {
                // Only add if it appears near a FUN_1000e87dc call
                int pos = lit.start();
                int searchWindow = 500;
                int windowStart = Math.max(0, pos - searchWindow);
                int windowEnd = Math.min(code.length(), pos + searchWindow);
                String window = code.substring(windowStart, windowEnd);
                if (window.contains("FUN_1000e87dc") || window.contains("FUN_1000e86c0")) {
                    seen.add(s);
                    fields.add(s);
                }
            }
        }

        return fields;
    }

    // ════════════════════════════════════════════════════════════════════
    // Phase 6: Categorize
    // ════════════════════════════════════════════════════════════════════

    private String categorize(String method) {
        String lower = method.toLowerCase();
        if (contains(lower, "account", "guest", "auth", "session", "playerfromplatform", "handle", "devicetoken"))
            return "auth";
        if (contains(lower, "friend", "guild", "party", "team", "presence", "lobby"))
            return "social";
        if (contains(lower, "inventory", "skin", "card", "forge", "quest", "reward", "chest", "talent", "equip", "purchase", "store", "buy", "weave", "daily"))
            return "inventory";
        if (contains(lower, "match", "leaderboard", "liveevent", "season", "ascension", "spectat", "honor", "elo", "trophy"))
            return "match";
        return "other";
    }

    private boolean contains(String s, String... keywords) {
        for (String k : keywords) {
            if (s.contains(k)) return true;
        }
        return false;
    }

    // ════════════════════════════════════════════════════════════════════
    // Phase 7: Output
    // ════════════════════════════════════════════════════════════════════

    private void writeJsonOutput(List<MethodInfo> results) throws IOException {
        StringBuilder json = new StringBuilder();
        json.append("{\n");
        json.append("  \"binary\": \"GameKindred\",\n");
        json.append("  \"total_methods\": ").append(results.size()).append(",\n");

        int mitmCount = 0;
        for (MethodInfo m : results) { if (m.seenInMitm) mitmCount++; }
        json.append("  \"mitm_captured_count\": ").append(mitmCount).append(",\n");
        json.append("  \"methods\": {\n");

        for (int i = 0; i < results.size(); i++) {
            MethodInfo m = results.get(i);
            json.append("    ").append(jsonStr(m.name)).append(": {\n");
            json.append("      \"string_addr\": \"0x").append(Long.toHexString(m.stringAddr)).append("\",\n");
            json.append("      \"sender_addr\": ").append(m.senderAddr == -1 ? "null" : "\"0x" + Long.toHexString(m.senderAddr) + "\"").append(",\n");
            json.append("      \"sender_func\": ").append(m.senderName == null ? "null" : jsonStr(m.senderName)).append(",\n");
            json.append("      \"parser_addr\": ").append(m.parserAddr == -1 ? "null" : "\"0x" + Long.toHexString(m.parserAddr) + "\"").append(",\n");
            json.append("      \"parser_func\": ").append(m.parserName == null ? "null" : jsonStr(m.parserName)).append(",\n");
            json.append("      \"category\": ").append(jsonStr(m.category)).append(",\n");
            json.append("      \"seen_in_mitm\": ").append(m.seenInMitm).append(",\n");
            json.append("      \"status\": ").append(jsonStr(m.status)).append(",\n");
            json.append("      \"timeout_sec\": ").append(m.timeoutSec).append(",\n");
            json.append("      \"has_feature_gate\": ").append(m.hasFeatureGate).append(",\n");
            json.append("      \"request_fields\": ").append(jsonArray(m.requestFields)).append(",\n");
            json.append("      \"response_fields\": ").append(jsonArray(m.responseFields)).append("\n");
            json.append("    }").append(i < results.size() - 1 ? "," : "").append("\n");
        }

        json.append("  }\n");
        json.append("}\n");

        String filepath = outputDir + "/rpc_schemas.json";
        FileWriter fw = new FileWriter(filepath);
        fw.write(json.toString());
        fw.close();
        println("[rpc-extract] Wrote " + filepath);
    }

    private void writeMarkdownReport(List<MethodInfo> results) throws IOException {
        StringBuilder md = new StringBuilder();
        md.append("# RPC Schema Extraction Report\n\n");
        md.append("Extracted from `GameKindred` binary via Ghidra decompilation.\n");
        md.append("Total methods: ").append(results.size()).append("\n\n");

        // Summary table
        md.append("## Summary\n\n");
        md.append("| # | Method | Category | MITM | Sender | Parser | Req Fields | Resp Fields | Status |\n");
        md.append("|---|--------|----------|------|--------|--------|------------|-------------|--------|\n");

        for (int i = 0; i < results.size(); i++) {
            MethodInfo m = results.get(i);
            md.append("| ").append(i + 1);
            md.append(" | `").append(m.name).append("`");
            md.append(" | ").append(m.category);
            md.append(" | ").append(m.seenInMitm ? "YES" : "no");
            md.append(" | ").append(m.senderAddr == -1 ? "-" : "`0x" + Long.toHexString(m.senderAddr) + "`");
            md.append(" | ").append(m.parserAddr == -1 ? "-" : "`0x" + Long.toHexString(m.parserAddr) + "`");
            md.append(" | ").append(m.requestFields.size());
            md.append(" | ").append(m.responseFields.size());
            md.append(" | ").append(m.status);
            md.append(" |\n");
        }

        // Group by category
        Map<String, List<MethodInfo>> byCategory = new LinkedHashMap<>();
        for (MethodInfo m : results) {
            byCategory.computeIfAbsent(m.category, k -> new ArrayList<>()).add(m);
        }

        md.append("\n---\n\n");

        // Detail sections by category
        for (Map.Entry<String, List<MethodInfo>> entry : byCategory.entrySet()) {
            md.append("## Category: ").append(entry.getKey()).append("\n\n");

            for (MethodInfo m : entry.getValue()) {
                md.append("### `").append(m.name).append("`");
                if (m.seenInMitm) md.append(" (MITM captured)");
                if (!m.seenInMitm) md.append(" (DEAD - not in traffic)");
                md.append("\n\n");

                md.append("- **Status:** ").append(m.status).append("\n");
                md.append("- **String addr:** `0x").append(Long.toHexString(m.stringAddr)).append("`\n");

                if (m.senderAddr != -1) {
                    md.append("- **Sender:** `").append(m.senderName).append("` @ `0x")
                      .append(Long.toHexString(m.senderAddr)).append("`\n");
                }
                if (m.parserAddr != -1) {
                    md.append("- **Parser:** `").append(m.parserName).append("` @ `0x")
                      .append(Long.toHexString(m.parserAddr)).append("`\n");
                }
                if (m.timeoutSec > 0) {
                    md.append("- **Timeout:** ").append(m.timeoutSec).append("s\n");
                }
                if (m.hasFeatureGate) {
                    md.append("- **Feature gate:** yes (additional offset check)\n");
                }
                if (!m.requestFields.isEmpty()) {
                    md.append("- **Request fields:** `").append(String.join("`, `", m.requestFields)).append("`\n");
                }
                if (!m.responseFields.isEmpty()) {
                    md.append("- **Response fields:** `").append(String.join("`, `", m.responseFields)).append("`\n");
                }

                // Sender decompiled code (truncated)
                if (m.senderCode != null) {
                    md.append("\n<details><summary>Sender decompiled</summary>\n\n```c\n");
                    String code = m.senderCode;
                    if (code.length() > 5000) code = code.substring(0, 5000) + "\n// ...truncated...";
                    md.append(code).append("\n```\n\n</details>\n\n");
                }

                // Parser decompiled code (truncated)
                if (m.parserCode != null) {
                    md.append("\n<details><summary>Parser decompiled</summary>\n\n```c\n");
                    String code = m.parserCode;
                    if (code.length() > 8000) code = code.substring(0, 8000) + "\n// ...truncated...";
                    md.append(code).append("\n```\n\n</details>\n\n");
                }

                md.append("---\n\n");
            }
        }

        // Dead methods needing MITM response stubs
        md.append("## Dead Methods Requiring MITM Response Stubs\n\n");
        md.append("These methods are in the binary but never seen in traffic. ");
        md.append("The interceptor needs synthetic responses for them.\n\n");

        for (MethodInfo m : results) {
            if (!m.seenInMitm && !m.responseFields.isEmpty()) {
                md.append("- `").append(m.name).append("` (").append(m.category).append("): ");
                md.append("fields: `").append(String.join("`, `", m.responseFields)).append("`\n");
            }
        }

        String filepath = outputDir + "/rpc_schema_report.md";
        FileWriter fw = new FileWriter(filepath);
        fw.write(md.toString());
        fw.close();
        println("[rpc-extract] Wrote " + filepath + " (" + md.length() + " bytes)");
    }

    // ════════════════════════════════════════════════════════════════════
    // Utilities
    // ════════════════════════════════════════════════════════════════════

    private List<Reference> getXrefsTo(Address addr) {
        List<Reference> result = new ArrayList<>();
        ReferenceIterator iter = refMgr.getReferencesTo(addr);
        while (iter.hasNext()) {
            result.add(iter.next());
        }
        return result;
    }

    private String decompFunc(Function func) {
        if (func == null) return null;
        long ep = func.getEntryPoint().getOffset();

        // Check cache
        if (decompCache.containsKey(ep)) {
            return decompCache.get(ep);
        }

        try {
            DecompileResults result = decomp.decompileFunction(func, 120, monitor);
            if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                String code = result.getDecompiledFunction().getC();
                decompCache.put(ep, code);
                return code;
            }
        } catch (Exception e) {
            println("[rpc-extract] Decompilation failed for " + func.getName() + ": " + e.getMessage());
        }

        decompCache.put(ep, null);
        return null;
    }

    private List<Address> findStringBytes(String target) {
        List<Address> results = new ArrayList<>();
        try {
            byte[] searchBytes = (target + "\0").getBytes("UTF-8");
            Address addr = mem.getMinAddress();
            while (addr != null && !monitor.isCancelled()) {
                addr = mem.findBytes(addr, searchBytes, null, true, monitor);
                if (addr != null) {
                    results.add(addr);
                    addr = addr.add(1);
                }
            }
        } catch (Exception e) {}
        return results;
    }

    private String jsonStr(String s) {
        if (s == null) return "null";
        return "\"" + s.replace("\\", "\\\\").replace("\"", "\\\"") + "\"";
    }

    private String jsonArray(List<String> items) {
        if (items == null || items.isEmpty()) return "[]";
        StringBuilder sb = new StringBuilder("[");
        for (int i = 0; i < items.size(); i++) {
            if (i > 0) sb.append(", ");
            sb.append(jsonStr(items.get(i)));
        }
        sb.append("]");
        return sb.toString();
    }
}
