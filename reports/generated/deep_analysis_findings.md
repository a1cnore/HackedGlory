# Deep Analysis Findings — Payload Schemas & WebSocket Protocol

## 1. Full Payload Schemas (Priority Systems)

### Friends List (`friendListAll`)

**Response parser chain:** FUN_1004edef0 → FUN_10050bc4c (pending list) → individual entry parser

```json
{
  "code": 0,
  "returnValue": {
    "confirmed": [              // array of friend objects
      {
        "playerUUID": "uuid",
        "handle": "name",
        "isDev": false,
        "skillTier": 10,
        "level": 30,
        "guildName": "",
        "guildTag": "",
        "guildId": "",
        "teamName": "",
        "teamTag": "",
        "teamId": "",
        "seasonalWins": 100,
        "availability": "online|offline",
        "banTTL": 0,
        "favorite": false,
        "ascensionCombinedRank": 13,
        "availabilityElapsed": 0
      }
    ],
    "pending": [],              // same schema as confirmed
    "numOffline": 0,
    "numFriends": 8
  }
}
```
**Status: COMPLETE** — verified against `_make_friend()` in vg_interceptor.py and working in-game.

---

### Party System (`createParty`, `partyInviteSend`, `partyMembers`, etc.)

**Response parser:** FUN_10050b6a8

```json
{
  "code": 0,
  "returnValue": {
    "success": true,
    "partyUUID": "uuid",
    "partyQueueMode": "casual_5v5",
    "partyQueueDifficulty": 0,
    "members": [                // array of party member objects
      {
        "uuid": "playerUUID",
        "handle": "playerName",
        "isDev": false,
        "isCaptain": true,
        "status": "ready",
        "team": 0,
        "slot": 0,
        "qbanLevel": 0
      }
    ]
  }
}
```

**Push events (via stateUpdateCallback FUN_1004edef0):**
```json
{
  "quintPartyStateUpdate": { "type": "...", "states": [...], "counts": [...] },
  "quintPartyJoinRequest": { "type": "...", "tag": "...", "time": 0 },
  "quintPartyPlayerLeft": { ... },
  "quintPartyMemberKick": { ... },
  "stateUpdate": { ... }
}
```
**Status: 85% COMPLETE** — response structure known, push event field names known but inner object schemas need trial-and-error.

---

### Match Data (`queryPendingMatch`, `acceptMatch`, `update`)

**queryPendingMatch parser:** FUN_10050b0dc
```json
{
  "code": 0,
  "returnValue": {
    "isValid": true,
    "matchId": "uuid",
    "ttl": 60,
    "acceptDelay": 0,
    "responses": [
      {
        "playerUUID": "uuid",
        "response": "accepted|pending|rejected"
      }
    ]
  }
}
```

**update (state machine) — verified from MITM traffic:**
```json
{
  "state": "menus|pending_auto|matched_partners|match_pending|playing|post_match",
  "lastVersion": "uuid",
  "version": "uuid",
  "expiry": 1775219875.87,
  "notify": true,
  "ttl": 100,
  "numPlayers": 6,
  "prevState": "pending_auto",
  "timestamp": "04/03/26 12:29:10",
  "numQueuedEntries": 6,
  // Only when state=playing:
  "matchId": "uuid",
  "host": "34.52.184.66",
  "port": 7038,
  "site": ""
}
```

**State machine (from MITM):**
```
menus → [joinLobby] → pending_auto → matched_partners → match_pending
  → [acceptMatch] → playing → post_match → [notifyExitPostMatch] → menus
```

**Status: COMPLETE** — full schemas from live traffic + decompilation.

---

### Trophy Data (`getTrophyCase`, playerInfo.trophyCase)

**Parser:** Part of playerInfoUpdate (FUN_100507640)

```json
{
  "trophyCase": [
    {
      "season": 12,
      "trophy_type": "ranked_3v3",
      "value": 12,
      "trophy_name": "Vainglorious"
    }
  ]
}
```

Trophy values in `startSessionForPlayer.returnValue.playerInfo.trophyCase` — array of 38 objects (one per season × mode).

**Status: COMPLETE** — already working in vg_interceptor.py trophy patching.

---

### Team System (`teamInviteSend`, `queryTeamInfo`, etc.)

**Response parser:** FUN_10050e80c

```json
{
  "code": 0,
  "returnValue": {
    "success": true,
    "teamUUID": "uuid",
    "name": "TeamName",
    "tag": "TG",
    "numMembers": 3,
    "maxMembers": 6,
    "members": [
      {
        "handle": "name",
        "uuid": "playerUUID",
        "isDev": false,
        "isCaptain": true,
        "status": "active",
        "bForDisplay": true,
        "wins": 100,
        "skillTier": 10,
        "skillTierProgress": 0.5,
        "skillTierBronzeLine": 0.0,
        "skillTierSilverLine": 0.33,
        "skillTierGoldLine": 0.66
      }
    ]
  }
}
```
**Status: COMPLETE** — from decompilation.

---

## 2. WebSocket / Push Notification Protocol

### Architecture

The E.V.I.L. engine has a **dual push channel**:

1. **WebSocket** (primary): `ws://<host>:2112/ws/<playerUUID>`
2. **Long-poll** (fallback): `http://<host>:2112/lp/<playerUUID>`

Both URLs come from `startSessionForPlayer` response:
- `notifyUrl` → WebSocket endpoint
- `notifyFallbackUrl` → HTTP long-poll endpoint

### Current State

- Server returns `enableStateUpdates: false` and `missedStateUpdateMessagesThreshold: -1`
- Our interceptor patches these to `true` and `5`
- BUT: The actual WebSocket server at `35.233.231.76:2112` is **dead** (servers shut down)
- The client attempts to connect, fails, falls back to long-poll, which also fails
- Telemetry string: `"Quality_Client_Switched_LongPoll"` confirms this fallback behavior

### WebSocket Client Implementation

**Function:** FUN_10052019c (easywsclient library)

The client:
1. Parses `ws://host:port/path` URL
2. Opens TCP socket via `getaddrinfo`
3. Sends HTTP upgrade: `GET /path HTTP/1.1` + `Upgrade: websocket` + `Sec-WebSocket-Key`
4. Reads `HTTP/1.1 101` response
5. Enters message loop with `select()` for async I/O
6. Receives WebSocket frames (binary or text)

**Message types found:** `"data"` and `"auth"` (strings at 0x141cd2a-0x141cd2f near WS code)

### XMPP Chat System

Separate from WebSocket push:
- `chatUrl: xmpp://chat-na.superevilmegacorp.net:5222`
- `chatUser: <playerUUID>`, `chatPass: <session-derived>`
- Namespace: `Nuo::Services::ChatClient`
- Used for: presence broadcast, in-game chat, friend status

### How to Hijack Push

**Option A — WebSocket server (most powerful):**
1. Rewrite `notifyUrl` in interceptor to `ws://192.168.64.1:2112/ws/<uuid>`
2. Stand up a WebSocket server on the MITM host port 2112
3. Client connects, we can push any message at any time
4. Message format: likely JSON with `"type"` field (data/auth)

**Option B — Piggyback on `update` polling (simplest):**
The `update` method is polled every 10-100s. Its response already carries state changes. The `stateUpdateCallback` parser (FUN_1004edef0) reads:
- `quintPartyStateUpdate` — inject party state changes
- `quintPartyJoinRequest` — inject fake party invites  
- `friendsListUpdate` — trigger friend list refresh
- `stateUpdate` — generic push field

We can inject these fields into ANY `update` response.

**Option C — XMPP presence server:**
Stand up an XMPP server, rewrite `chatUrl`, serve presence data. Most complex but enables real-time friend status.

---

## 3. What We Can Do NOW vs What Needs More Work

### Ready to implement (schemas complete):
| Feature | Method | Schema Status | Next Step |
|---------|--------|--------------|-----------|
| Friends list | friendListAll | ✅ COMPLETE | Already working via fake injection |
| Leaderboards | getLeaderboardData | ✅ COMPLETE | Already working via fake injection |
| Trophy display | trophyCase in playerInfo | ✅ COMPLETE | Already working via patching |
| Match lifecycle | update state machine | ✅ COMPLETE | Already working |
| Party response | createParty/partyMembers | ✅ COMPLETE | Build interceptor handler |
| Team response | teamInvite*/queryTeam* | ✅ COMPLETE | Build interceptor handler |
| Match accept screen | queryPendingMatch | ✅ COMPLETE | Already working |

### Needs WebSocket server (push events):
| Feature | Push Field | Schema Status | Blocker |
|---------|-----------|--------------|---------|
| Party invites | quintPartyJoinRequest | ⚠️ Fields known, inner format unknown | Need WS server OR update piggyback |
| Friend status updates | friendsListUpdate | ⚠️ Fields known | Need WS server OR update piggyback |
| Party state changes | quintPartyStateUpdate | ⚠️ Fields known | Need WS server |
| Real-time presence | presenceBroadcast (XMPP) | ❌ Needs XMPP server | Complex |

### Needs more RE (inner schemas unknown):
| Feature | Issue |
|---------|-------|
| Guild full system | Members array schema known, but guild actions (motto, settings) response format needs testing |
| Quest system | getQuestDisplayDataForPlayer returns playerInfoUpdate — quest-specific fields not extracted |
| Store/IAP | Dead payment endpoints — Steam fields suggest cross-platform purchase system |
| Ascension rewards | Response is playerInfoUpdate — need to identify ascension-specific nested fields |

---

## 4. Recommended Next Steps

1. **Party system via `update` piggyback** — Inject `quintPartyJoinRequest` into `update` responses to test if the client shows a party invite popup. This is the simplest way to test push without building a WebSocket server.

2. **Build WebSocket push server** — Stand up a simple WS server at `192.168.64.1:2112`, rewrite `notifyUrl`. Send JSON messages with `"type": "data"` containing state update fields. This enables real-time push for parties, friends, and guild events.

3. **Party creation flow** — Intercept `createParty` and return the FUN_10050b6a8 schema. When user invites friend, intercept `partyInviteSend` and return success. Inject `quintPartyStateUpdate` to update the party UI.

4. **Guild system** — Intercept `guildGetData` with full FUN_10050c2bc schema (members, stats, rewards). Most guild mutations (rename, settings) return `guildData` type — return the same structure with updated fields.
