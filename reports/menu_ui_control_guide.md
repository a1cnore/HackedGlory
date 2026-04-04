# E.V.I.L. Engine Menu UI — Reverse Engineering Report

## Overview

This report documents the complete architecture of the Vainglory (GameKindred v4.13.4) menu UI system, based on Ghidra decompilation of the 26MB arm64 binary. The goal is to understand how to control the Friends List and Leaderboard screens.

The E.V.I.L. engine uses a **string-addressed, event-driven UI system** with:
- A central **event ID registry** (string → int32 hash)
- A **screen/panel stack** managed by show/hide events
- **Feature flag gating** via a parsed struct from server JSON
- **JSON-RPC over HTTPS** for all data (friends, leaderboards, player info)
- **XMPP** for real-time presence/chat

---

## 1. UI Event System Architecture

### Event ID Registration

All UI events are **string-hashed to int32 IDs** at startup by a single function:

| Function | Address | Role |
|----------|---------|------|
| `FUN_100644a94` | `0x100644a94` | **Event string → ID hash function**. Takes a `const char*` event name, returns `uint32_t` event ID. |
| `FUN_100644aec` | `0x100644aec` | **Event parameter builder**. Wraps an event ID with a parameter value into a 32-byte event struct. |
| `FUN_100644c34` | `0x100644c34` | **Event dispatcher**. Fires an event struct to all registered listeners. |

### Event Registration Functions

Two major initialization functions register all event IDs into global data slots:

**Menu Events** (`FUN_1001e338c` @ `0x1001e338c`):
```
DAT_101d23650 = hash("UI::EVENT_MENU_ENTER_LOBBY")
DAT_101d23654 = hash("UI::EVENT_MENU_LOBBY_FINISHED")
DAT_101d23658 = hash("UI::EVENT_MENU_REQUEST_ENTER_PROFILE")
DAT_101d2365c = hash("UI::EVENT_MENU_REQUEST_PLATFORM_NOTIFICATION")
DAT_101d23660 = hash("UI::EVENT_MENU_REQUEST_CLOSE_PLATFORM_NOTIFICATION")
DAT_101d23664 = hash("UI::EVENT_MENU_OPEN_URL")
DAT_101d23668 = hash("UI::EVENT_MENU_PANEL_CHANGE")
DAT_101d2366c = hash("UI::EVENT_MENU_YOU_ARE_READY")
DAT_101d23670 = hash("UI::EVENT_MENU_PLAYER_NAME_UPDATED")
DAT_101d23674 = hash("UI::EVENT_MENU_SEASON_REWARD_NOTIFICATION")
DAT_101d23678 = hash("UI::EVENT_MENU_SHOW_ROOT")
DAT_101d2367c = hash("UI::EVENT_MENU_LOG_OUT")
DAT_101d23680 = hash("UI::EVENT_MENU_REQUEST_CACHE_URL_IMAGE")
DAT_101d23684 = hash("UI::EVENT_MENU_CHECK_TODAY_IN_VAINGLORY")
DAT_101d23688 = hash("UI::EVENT_USER_INTENT_PLAY_NOPLAT")
```

**Base UI Events** (`FUN_100538e54` @ `0x100538e54`):
```
DAT_101d91890 = hash("UI::EVENT_POPUP_OPEN")
DAT_101d91894 = hash("UI::EVENT_POPUP_CLOSE")
DAT_101d918ac = hash("UI::EVENT_SCREEN_SHOW")
DAT_101d918a8 = hash("UI::EVENT_SCREEN_HIDE")
DAT_101d918b0 = hash("UI::EVENT_SCREEN_HIDDEN")
DAT_101d918c0 = hash("UI::EVENT_DIALOG")
DAT_101d918c4 = hash("UI::EVENT_DIALOG_ACCEPT")
DAT_101d918c8 = hash("UI::EVENT_DIALOG_REJECT")
DAT_101d918cc = hash("UI::EVENT_SELECT")
DAT_101d918d0 = hash("UI::EVENT_DOUBLE_CLICK")
DAT_101d918d4 = hash("UI::EVENT_FOREGROUND")
DAT_101d918d8 = hash("UI::EVENT_BACKGROUND")
```

### Tab Switching

Tab switching is done by:

```c
// FUN_10025dacc @ 0x10025dacc
void switchToTab(void *context, uint32_t tabIndex) {
    uint32_t eventId = hash("UI::EVENT_SWITCH_TO_TAB");
    EventStruct evt;
    buildEvent(&evt, eventId, tabIndex);
    dispatchEvent(context, &evt, 1);
}
```

### String Localization

All UI label strings (like `MAIN_MENU_SOCIAL`, `MENU_FRIENDS_ONLINE_TITLE`, etc.) are resolved through:

| Function | Address | Role |
|----------|---------|------|
| `FUN_1004e0150` | `0x1004e0150` | **Localization string resolver**. Takes a string key + fallback, returns localized text. Used by all menu tab labels. |

Tab label getters are trivial wrappers:
```c
// FUN_10020d970 @ 0x10020d970
void getSocialTabLabel() {
    FUN_1004e0150("MAIN_MENU_SOCIAL", 0);
}
```

---

## 2. Friends List Data Path

### RPC Call Chain

| Function | Address | Role | RPC Method |
|----------|---------|------|------------|
| `FUN_1004f58d8` | `0x1004f58d8` | **friendListAll caller** | `friendListAll` |
| `FUN_1004f5b0c` | `0x1004f5b0c` | **friendRequestIssueByHandle caller** | `friendRequestIssueByHandle` |
| `FUN_1004f5c30` | `0x1004f5c30` | **friendRequestConfirm caller** | `friendRequestConfirm` |
| `FUN_1004f5d2c` | `0x1004f5d2c` | **friendRequestReject caller** | `friendRequestReject` |
| `FUN_1004f5f24` | `0x1004f5f24` | **friendDelete caller** | `friendDelete` |

All RPC calls share the same pattern:
1. Check session token validity at `param_1 + 0x70` / `param_1 + 0x7f`
2. Build method name string via `FUN_1000ee4ec` (string constructor)
3. Serialize params via type-specific serializer
4. Call `FUN_1004f22f0` — the **central JSON-RPC dispatch function**
   - Args: `(connection, auth, methodName, params, flags, requestId, timeout, retryPolicy)`
   - `timeout=0x5a` (90 sec) for friendListAll
   - Returns request handle

### Central RPC Dispatcher

`FUN_1004f22f0` @ `0x1004f22f0` is the **single JSON-RPC dispatch point** for all platform calls. It:
- Takes the method name as a string
- Serializes the request as JSON
- Posts to `https://{platformUrl}/JSONRpc/{method}`
- Routes the response to a registered callback

### Response Parsing: friendsListUpdate

`FUN_1004edef0` @ `0x1004edef0` is the **friendListAll response parser**. It:
1. Initializes a FriendList result struct (0x130+ bytes) with zeroed fields
2. Parses JSON response using `FUN_1000e86c0` (JSON key lookup) and `FUN_1000e87dc` (JSON value extraction)
3. Populates:
   - `param_1 + 0x00`: confirmed friends list (array)
   - `param_1 + 0x10`: pending friends list (array)
   - `param_1 + 0x30`: friend count / metadata
   - `param_1 + 0x48`: offline count
   - `param_1 + 0x60`: additional lists
   - `param_1 + 0x108` through `0x130`: guild/team related data

Key JSON parser functions:
| Function | Address | Role |
|----------|---------|------|
| `FUN_1000e86c0` | `0x1000e86c0` | **JSON dict key lookup** — finds a key in a parsed JSON dict, returns iterator |
| `FUN_1000e87dc` | `0x1000e87dc` | **JSON value extraction** — gets the value for a key, with type info at `+0x10` (type tag) and `+0x11` (flags) |

JSON value type tags (at offset `+0x10`):
- `0x102` = boolean `true`
- `0x003` = object/dict
- Other values observed for strings, arrays, numbers

### Friends List UI

| Function | Address | Role |
|----------|---------|------|
| `FUN_1002df328` | `0x1002df328` | **Friends list status circle renderer** — uses `friendslist_status_circle` widget |
| `FUN_100266a50` | `0x100266a50` | **Friends list section builder** — references `MENU_FRIENDS_ONLINE_TITLE`, `MENU_FRIENDS_OFFLINE_TITLE`, `MENU_FRIENDS_SAD_AND_EMPTY` |
| `FUN_10019de60` | `0x10019de60` | **Friend status resolver** — maps presence state to `MENU_FRIENDS_STATUS_*` strings |
| `FUN_100511e3c` | `0x100511e3c` | **Friends list update handler** — caller of the friendsListUpdate response parser |
| `FUN_100502e58` | `0x100502e58` | **Social panel controller** — manages the People tab with Friends/Guild/Team sub-tabs |

### Friends Tab Navigation

The Social panel has 3 sub-tabs:
- `MENU_PEOPLE_FRIENDS_TAB_HEADER` — Friends tab
- `MENU_PEOPLE_GUILD_TAB_HEADER` — Guild tab
- `MENU_PEOPLE_USER_TEAM_TAB_HEADER` — User Team tab

These are registered and switched via `UI::EVENT_SWITCH_TO_TAB` with tab indices.

### XMPP Presence System

| String | Role |
|--------|------|
| `chatUrl` | XMPP server URL (e.g., `xmpp://chat-na.superevilmegacorp.net:5222`) |
| `chatUser` | Player UUID used as XMPP JID |
| `chatPass` | XMPP password from session bootstrap |
| `Nuo::Services::ChatClient::Username` | XMPP username field |
| `Nuo::Services::ChatClient::Nickname` | XMPP nickname field |

Presence status mapping:
| String | Status |
|--------|--------|
| `MENU_FRIENDS_STATUS_AVAILABLE` | Online, available |
| `MENU_FRIENDS_STATUS_BUSY` | In menus, busy |
| `MENU_FRIENDS_STATUS_IN_PARTY` | In a party |
| `MENU_FRIENDS_STATUS_MATCHING` | In matchmaking |
| `MENU_FRIENDS_STATUS_OFFLINE` | Offline |
| `MENU_FRIENDS_STATUS_BANNED` | Account banned |

Presence is broadcast via `presenceBroadcast` RPC and received via XMPP stanzas.

---

## 3. Leaderboard Data Path

### RPC Call

| Function | Address | Role |
|----------|---------|------|
| `FUN_100502c60` | `0x100502c60` | **getLeaderboardData caller** |

```c
// Simplified from decompilation
uint8 getLeaderboardData(PlatformClient *client) {
    if (!hasValidSession(client)) return -7;
    if (client->leaderboardEnabled == 0) return -7;  // ← feature gate at +0x2b08
    
    requestId = getNextRequestId(client + 0x2c98);
    methodName = "getLeaderboardData";
    params = serializeLeaderboardParams(client);  // uses session data at +0x2bb8 or +0x2c20
    return dispatchRPC(client, auth, methodName, params, NULL, requestId, 0xb4/*180sec*/, 0);
}
```

**Critical finding:** The leaderboard RPC call has an **additional feature gate** at `param_1 + 0x2b08` that must be non-zero. This is separate from the `featuresEnabled.leaderboards` flag in the feature struct. This field is likely set when the feature parser runs and the leaderboard feature is enabled.

### Response Parsing

`FUN_100516908` @ `0x100516908` is the **getLeaderboardData response parser** (~6KB function). It:
1. Extracts `returnValue` from the JSON response
2. Checks the value type tag is `3` (dict/object)
3. Parses leaderboard entries with:
   - `leaderboardPanel` — panel identifier for the leaderboard
   - `leaderboardsPopup` — popup mode identifier
   - `leaderboardId` — ID for which leaderboard to display
   - `leaderboardTitle` — title text

Called by `FUN_100503314` @ `0x100503314` — the **leaderboard response handler** that dispatches parsed data to the UI.

### Leaderboard UI Panels

`FUN_1001f6fec` @ `0x1001f6fec` is the **leaderboard panel builder**. It creates three views:

1. **My Friends** (`reserved_friends`):
   ```c
   panelTitle = localize("MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_MY_FRIENDS");
   boardTitle = localize("MENU_LEADERBOARDS_LEADERBOARD_TITLE_MY_FRIENDS");
   // Creates panel with key "reserved_friends"
   ```

2. **My Guild** (`reserved_guild`):
   ```c
   panelTitle = localize("MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_MY_GUILD");
   boardTitle = localize("MENU_LEADERBOARDS_LEADERBOARD_TITLE_MY_GUILD");
   ```

3. **Top 100** (`reserved_top100`):
   ```c
   panelTitle = localize("MENU_LEADERBOARDS_LEADERBOARD_PANEL_TITLE_TOP_100");
   boardTitle = localize("MENU_LEADERBOARDS_LEADERBOARD_TITLE_TOP_100");
   ```

### Sort Fields

Sort field UI (`FUN_10031bb04`, `FUN_10031a97c`, `FUN_1002b3df8`):
- `MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_3V3`
- `MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_5V5`
- `MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_BLITZ`
- `MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_SCORE`
- `MENU_LEADERBOARDS_LEADERBOARD_SORT_FIELD_WINS`

### Navigation Triggers

Leaderboard is accessed from two UI paths:

1. **Home panel overflow button**: `homepanel_overflow_nav_button_leaderboards`
   - The string is used as a widget identifier for the navigation button in the home panel overflow menu
   - Tapping fires a handler that triggers `UI::EVENT_MENU_PANEL_CHANGE` with the leaderboard panel target

2. **Secondary navigation bar**: `secondary_nav_leaderboards` / `secondary_nav_leaderboards_hit`
   - The secondary nav bar at the bottom of the screen
   - `_hit` variant is the tap target area

Both ultimately lead to showing the leaderboard panel or popup depending on context.

---

## 4. Feature Flag Gating System

### Feature Parser Function

`FUN_1001329b0` @ `0x1001329b0` — The **feature flag parser**:

```c
void parseFeatureFlags(FeatureStruct *output, JsonDict *featuresEnabled) {
    // +0x08: leaderboards
    output->leaderboards = jsonGetBool(featuresEnabled, "leaderboards");
    
    // +0x09: leaderboardsAlwaysQueryOfflineFriends
    output->alwaysQueryOfflineFriends = jsonGetBool(featuresEnabled, "leaderboardsAlwaysQueryOfflineFriends");
    
    // +0x0a: liveEvents
    output->liveEvents = jsonGetBool(featuresEnabled, "liveEvents");
    
    // +0x0b: hideBattlepassCallout
    output->hideBattlepassCallout = jsonGetBool(featuresEnabled, "hideBattlepassCallout");
    
    // +0x0c: inGameChat
    output->inGameChat = jsonGetBool(featuresEnabled, "inGameChat");
}
```

The boolean extraction pattern is:
```c
bool jsonGetBool(JsonDict *dict, const char *key) {
    iter = FUN_1000e86c0(dict, key);        // lookup key
    if (iter == end) return false;           // key not found
    value = FUN_1000e87dc(dict, key);        // get value node
    if (!(value->flags & 0x01)) return false; // not a boolean type
    return (value->type_tag == 0x102);       // 0x102 = true
}
```

### Feature Struct Layout

```
Offset  Size  Field                              Controlled By
------  ----  -----                              -------------
+0x08   1     leaderboards                       featuresEnabled.leaderboards
+0x09   1     leaderboardsAlwaysQueryOfflineFriends  featuresEnabled.leaderboardsAlwaysQueryOfflineFriends
+0x0a   1     liveEvents                         featuresEnabled.liveEvents
+0x0b   1     hideBattlepassCallout               featuresEnabled.hideBattlepassCallout
+0x0c   1     inGameChat                         featuresEnabled.inGameChat
```

### __DATA Virtual Function Table

The feature parser is part of a **virtual function table pattern** in `__DATA`. Each "config section parser" has a group of 4 function pointers at regular 0x30 intervals:

```
Offset     | Ptr 1 (name getter)  | Ptr 2 (parser)      | Ptr 3 (destructor)   | Ptr 4 (deleter)
-----------|---------------------|---------------------|---------------------|-------------------
0x145a7f0  | FUN_100134504       | FUN_100132444       | FUN_1001318e8        | FUN_100134514
0x145a820  | FUN_100134564       | FUN_1001326e8       | FUN_100131944        | FUN_100134574
0x145a850  | FUN_1001345c4       | FUN_10013279c       | FUN_1001319a0        | FUN_1001345d4
0x145a880  | FUN_100134624       | FUN_100132850       | FUN_1001319fc        | FUN_100134634
0x145a8b0  | FUN_100134684       | FUN_1001328fc       | FUN_100131b48        | FUN_100134694
0x145a8e0  | FUN_1001346e4       | FUN_1001329b0       | FUN_100131aec        | FUN_1001346f4  ← FEATURES
0x145a910  | FUN_100134744       | FUN_100132c54       | FUN_100131a58        | FUN_100134754
0x145a940  | thunk_FUN_1004f0a9c | FUN_1001347e0       | FUN_100133a60        | FUN_100031c48
0x145a970  | FUN_1001356fc       | FUN_100135700       | FUN_100135c08        | -
0x145a9a0  | thunk_FUN_1001361ec | FUN_1001362a8       | FUN_1001369a8        | FUN_100031c48
0x145a9d0  | thunk_FUN_1001e2180 | FUN_100136f9c       | FUN_1001e22c4        | FUN_1001e249c
```

**Each row is a config section vtable entry**:
- Ptr 1: Returns the section name (e.g., `FUN_1001346e4` returns `"featuresEnabled"`)
- Ptr 2: Parses the JSON for that section (e.g., `FUN_1001329b0` is the feature parser)
- Ptr 3: Destructor
- Ptr 4: Deleter

Known section name getters:
| Offset | Name Getter | Returns |
|--------|-------------|---------|
| `0x145a8b0` | `FUN_100134684` | `"telemetryThrottle"` |
| `0x145a8e0` | `FUN_1001346e4` | `"featuresEnabled"` |

The parser at `0x145a8b8` (`FUN_1001328fc`) parses `telemetryThrottle.throttleAmplitude` into a bool at `+0x08`.

### Observer/Listener System

`FUN_100131b48` @ `0x100131b48` (destructor pattern at `0x145a8c0`) reveals a **global observer list**:
```c
// Global observer list for config section updates
DAT_101d23360 = observer count
DAT_101d23368 = observer array pointer
```

When a config section is destroyed, it unregisters itself from this array. This means config sections **notify observers** when they change — the UI subscribes to feature flag changes.

### Additional Gating

#### visibilityFlags

`visibilityFlags` at `0x1013dd478` is referenced by `FUN_10013edfc` which is a **market item parser**. It reads:
- `id` — item identifier
- `discount_label`, `discount_label_interpolator`
- `label`, `label_interpolator`
- `visibilityFlags` — controls visibility of market items

This is **not** a general UI gating mechanism — it's specific to market/store item visibility.

#### entitlementFilterMode / entitlementFilterProducts

Referenced in the same market parsing context. Controls which products are shown based on player entitlements.

#### enableStateUpdates

`enableStateUpdates` controls the WebSocket notify channel. When `false` (as returned by the live server), the client skips setting up the real-time state update connection. The MITM interceptor patches this to `true`.

---

## 5. Complete Address Table

### Core Infrastructure

| Address | Name | Role |
|---------|------|------|
| `0x100644a94` | `EventHashRegister` | String → event ID hash |
| `0x100644aec` | `EventParamBuilder` | Build event struct with param |
| `0x100644c34` | `EventDispatcher` | Fire event to listeners |
| `0x1004e0150` | `LocalizeString` | String key → localized text |
| `0x1000e86c0` | `JsonDictLookup` | Find key in parsed JSON dict |
| `0x1000e87dc` | `JsonValueExtract` | Extract typed value from JSON |
| `0x1000ee4ec` | `StringConstructor` | Construct std::string from const char* |
| `0x1004f22f0` | `RPCDispatch` | Central JSON-RPC call dispatcher |

### Menu/Navigation

| Address | Name | Role |
|---------|------|------|
| `0x1001e338c` | `InitMenuEventIDs` | Registers all menu event hashes into DAT_101d23650+ |
| `0x100538e54` | `InitBaseUIEventIDs` | Registers all base UI event hashes into DAT_101d91884+ |
| `0x10025dacc` | `SwitchToTab` | Fires `UI::EVENT_SWITCH_TO_TAB` with tab index |

### Friends List

| Address | Name | Role |
|---------|------|------|
| `0x1004f58d8` | `CallFriendListAll` | Issues `friendListAll` RPC |
| `0x1004f5b0c` | `CallFriendRequestByHandle` | Issues `friendRequestIssueByHandle` RPC |
| `0x1004f5c30` | `CallFriendRequestConfirm` | Issues `friendRequestConfirm` RPC |
| `0x1004f5d2c` | `CallFriendRequestReject` | Issues `friendRequestReject` RPC |
| `0x1004f5f24` | `CallFriendDelete` | Issues `friendDelete` RPC |
| `0x1004edef0` | `ParseFriendListResponse` | Parses `friendListAll` JSON response |
| `0x100511e3c` | `FriendListUpdateHandler` | Handles friend list update event |
| `0x100502e58` | `SocialPanelController` | Manages People panel (friends/guild/team tabs) |
| `0x1002df328` | `FriendStatusCircle` | Renders friend presence indicator |
| `0x100266a50` | `FriendListSectionBuilder` | Builds online/offline/empty friend sections |
| `0x10019de60` | `FriendStatusResolver` | Maps presence → status string |

### Leaderboard

| Address | Name | Role |
|---------|------|------|
| `0x100502c60` | `CallGetLeaderboardData` | Issues `getLeaderboardData` RPC (with feature gate at +0x2b08) |
| `0x100516908` | `ParseLeaderboardResponse` | Parses `getLeaderboardData` JSON response |
| `0x100503314` | `LeaderboardResponseHandler` | Routes parsed leaderboard data to UI |
| `0x1001f6fec` | `BuildLeaderboardPanels` | Creates My Friends / My Guild / Top 100 panels |
| `0x10031bb04` | `LeaderboardSortUI` | Sort field selection (3v3/5v5/blitz/score/wins) |

### Feature Flags

| Address | Name | Role |
|---------|------|------|
| `0x1001329b0` | `ParseFeatureFlags` | Reads `featuresEnabled` JSON → FeatureStruct |
| `0x1001346e4` | `GetFeatureSectionName` | Returns `"featuresEnabled"` |
| `0x10145a8e8` | `FeatureParserVtablePtr` | __DATA pointer to `ParseFeatureFlags` (hookable) |
| `0x10145a8e0` | `FeatureNameGetterVtablePtr` | __DATA pointer to section name getter |

### Global Data

| Address | Name | Contents |
|---------|------|----------|
| `0x101d23650` | `MenuEventIDs` | Array of menu event ID hashes (14 entries) |
| `0x101d91884` | `BaseUIEventIDs` | Array of base UI event ID hashes (~30 entries) |
| `0x101d23360` | `ConfigObserverCount` | Number of registered config section observers |
| `0x101d23368` | `ConfigObserverArray` | Pointer to observer list |
| `0x1018675c8` | `LastRPCError` | Last RPC error code (shared global) |

---

## 6. Data Flow Diagrams

### Friends List: Network → Pixels

```
Server Response (JSON-RPC)
    │
    ▼
FUN_1004f22f0 (RPCDispatch) ─── POST /JSONRpc/friendListAll
    │
    ▼
FUN_1004edef0 (ParseFriendListResponse) ─── extracts confirmed[], pending[], numOffline
    │
    ├─► FriendList struct (0x130 bytes)
    │     +0x00: confirmed friends array
    │     +0x10: pending requests array
    │     +0x30: metadata / counts
    │     +0x48: offline count
    │
    ▼
FUN_100511e3c (FriendListUpdateHandler) ─── "friendsListUpdate" event
    │
    ▼
FUN_100266a50 (FriendListSectionBuilder)
    ├── "MENU_FRIENDS_ONLINE_TITLE" section
    ├── "MENU_FRIENDS_OFFLINE_TITLE" section
    ├── "MENU_FRIENDS_REQUESTS_TITLE" section
    ├── "MENU_FRIENDS_SAD_AND_EMPTY" (if no friends)
    │
    ▼
FUN_1002df328 (FriendStatusCircle) ─── per-friend presence indicator
    └── Uses: friendslist_status_circle widget
    └── Maps: XMPP presence → MENU_FRIENDS_STATUS_* string
```

### Leaderboard: Network → Pixels

```
Server Response (JSON-RPC)
    │
    ▼
FUN_1004f22f0 (RPCDispatch) ─── POST /JSONRpc/getLeaderboardData
    │
    │  ⚠ Gated by: (param_1 + 0x2b08) != 0  (leaderboard feature enabled in client state)
    │
    ▼
FUN_100516908 (ParseLeaderboardResponse) ─── extracts returnValue
    │  reads: leaderboardPanel, leaderboardsPopup, leaderboardId, leaderboardTitle
    │
    ▼
FUN_100503314 (LeaderboardResponseHandler) ─── routes to UI
    │
    ▼
FUN_1001f6fec (BuildLeaderboardPanels) ─── creates 3 tabs:
    ├── "reserved_friends" → MY_FRIENDS panel
    ├── "reserved_guild"   → MY_GUILD panel
    └── "reserved_top100"  → TOP_100 panel
                             │
                             ▼
                     FUN_10031bb04 (Sort UI)
                     ├── SORT_FIELD_3V3
                     ├── SORT_FIELD_5V5
                     ├── SORT_FIELD_BLITZ
                     ├── SORT_FIELD_SCORE
                     └── SORT_FIELD_WINS
```

### Feature Flag: Server → UI Gating

```
startSessionForPlayer Response
    │
    ▼
"constants" → "featuresEnabled" (JSON dict)
    │
    ▼
FUN_1001329b0 (ParseFeatureFlags) ──── via vtable at __DATA+0x145a8e8
    │
    ▼
FeatureStruct (output)
    +0x08: leaderboards ─────────────► leaderboard panel visibility
    +0x09: alwaysQueryOfflineFriends ─► friend list query behavior
    +0x0a: liveEvents ───────────────► live events panel visibility
    +0x0b: hideBattlepassCallout ────► battlepass UI callout
    +0x0c: inGameChat ───────────────► in-game chat enable
    │
    ▼
Config Observer System (DAT_101d23360/23368)
    │
    ▼
UI Components read flags to show/hide elements
```

---

## 7. Control Points for Patching

### Already Working

1. **Feature flag override** (`vg_unlock.dylib`): Replaces `FUN_1001329b0` pointer at `__DATA+0x0145a8e8` with a function that always sets bytes `+0x08` through `+0x0c` to enabled. ✅

2. **MITM response patching** (`vg_interceptor.py`): Patches `featuresEnabled` in `startSessionForPlayer` response to `true`. Also patches player stats, currency. ✅

### To Control Friends List

1. **Populate `friendListAll` response via MITM** — inject synthetic friend entries in `{confirmed: [...], pending: [...], numOffline: N}` format. The parser at `FUN_1004edef0` reads this JSON directly.

2. **XMPP presence** — either:
   - Mock/proxy the XMPP server at `chat-na.superevilmegacorp.net:5222` to inject friend presence stanzas
   - Or patch the presence resolver at `FUN_10019de60` to always return "available"

3. **Force navigation** — fire `UI::EVENT_MENU_FRIENDS_SELECTED` event, or use `UI::EVENT_SWITCH_TO_TAB` with the social tab index, then `UI::EVENT_SWITCH_TO_TAB` again for the friends sub-tab.

### To Control Leaderboard

1. **Enable the client-side gate** — The `getLeaderboardData` call checks `param_1 + 0x2b08 != 0`. This field must be set when the feature parser runs with `leaderboards=true`. Verify that `vg_unlock.dylib` setting `+0x08` to 1 propagates to this field.

2. **Populate `getLeaderboardData` response via MITM** — inject synthetic leaderboard entries. The parser at `FUN_100516908` reads from `returnValue` which contains the leaderboard data.

3. **Navigation** — leaderboard is accessed via:
   - `homepanel_overflow_nav_button_leaderboards` (home panel overflow menu)
   - `secondary_nav_leaderboards` (bottom nav bar)
   Both trigger `UI::EVENT_MENU_PANEL_CHANGE` to show the leaderboard panel.

### Additional Hookable __DATA Vtable Entries

The vtable at `0x10145a7f0`—`0x10145a9e8` contains parsers for all config sections. Each can be hooked the same way as the feature parser. Known sections include:
- `telemetryThrottle` (at `0x10145a8b0`)
- `featuresEnabled` (at `0x10145a8e0`)
- Other sections (names not yet decoded) at `0x10145a7f0`, `0x10145a820`, `0x10145a850`, `0x10145a880`, `0x10145a910`, `0x10145a940`, `0x10145a970`, `0x10145a9a0`, `0x10145a9d0`

---

## 8. Open Questions

1. **Leaderboard client-side gate propagation**: Does setting `FeatureStruct+0x08` (leaderboards) via `vg_unlock.dylib` actually set the field at `PlatformClient+0x2b08`? These may be different memory locations. Need dynamic testing or deeper trace of how the FeatureStruct propagates.

2. **Config section names**: Most of the vtable entries at `0x10145a7f0`-`0x10145a9d0` have not been decoded yet. Their name getter functions should be decompiled to identify all config sections (likely: `seasonalData`, `rateAppData`, `localNotificationData`, `presentationData`, `marketFeedExperiment`, etc. based on the `startSessionForPlayer` response keys).

3. **XMPP chat integration**: How much of the friend presence system depends on an active XMPP connection vs. data from the `friendListAll` response? Can we fake presence entirely through RPC response modification?

4. **Experiment flags**: The 53 experiment flags from `experimentDetails` are individually read by various subsystems. Some (like `experiment_free_tab_visibility`) may affect menu visibility beyond what `featuresEnabled` controls.

5. **Event listener registration**: How do UI panels register as listeners for events? The observer system at `DAT_101d23360`/`DAT_101d23368` handles config changes, but the UI event system (`FUN_100644c34` dispatch) has its own listener mechanism that needs further analysis.

---

## 9. Recommended Next Steps

1. **Test current setup**: With `vg_unlock.dylib` + MITM interceptor, check if leaderboard and friends panels actually appear. The feature flags should already be enabling them.

2. **Inject test data**: Add fake `friendListAll` and `getLeaderboardData` response data to `vg_interceptor.py` to verify the UI renders correctly.

3. **Decode remaining vtable sections**: Run Ghidra analysis on the name getter functions at each vtable entry to map all config sections.

4. **Dynamic analysis**: Attach a debugger (or use Frida) to trace the actual runtime flow when navigating to friends/leaderboard panels. This will confirm which code paths are active and identify any remaining gates.

---

*Generated from Ghidra 12.0.4 headless analysis of GameKindred arm64 v4.13.4 (26MB Mach-O)*
*Analysis date: 2026-04-03*
*Total decompiled functions: ~150 across 4 analysis phases*
*Report files: ui_event_dispatch.md (92KB), friends_list_analysis.md (291KB), leaderboard_analysis.md (158KB), feature_gating_analysis.md (86KB)*
