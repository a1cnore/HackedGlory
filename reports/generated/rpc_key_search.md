# RPC Key Search: XOR Encryption Key Analysis

Generated: 2026-04-04T09:32:26.819198+00:00

## 1. PRIMARY FINDING: Key is in the TCP Handshake, NOT in RPC Traffic

The XOR encryption key is **client-generated** and transmitted in the raw TCP
handshake with the game server. It is NOT present in any HTTPS RPC call.

### Handshake Protocol Structure

The game server connection follows a 5-packet handshake before encrypted gameplay:

| Packet | Dir  | Size  | Contents |
|--------|------|-------|----------|
| #1     | C->S | 136 B | `[2B len][2B version=0x0005][128B IP string, null-padded][2B port]` |
| #2     | S->C | 5 B   | `[2B len][3B: 00 06 00]` -- server ready |
| #3     | C->S | 74 B  | `[2B len][40B auth blob][8B KEY x4 repeats]` -- **KEY IS HERE** |
| #4     | S->C | 106 B | `[2B len][104B XOR-encrypted server auth response]` |
| #5     | C->S | 10 B  | `[2B len][8B XOR-encrypted client ack]` |
| #6+    | S->C | varies| XOR-encrypted gameplay data |

## 2. TCP Handshake Analysis Per Match

### Match `ff8a37e1` (port 7079, key `7614a9b6d21ec669`)

**Packet #1 (C->S, 136 bytes): Handshake init**

- Message length: 134
- IP: `192.168.64.1`
- Port: `7079` (matches RPC port: True)

**Packet #2 (S->C, 5 bytes): Handshake response**

- Raw hex: `0003000600`

**Packet #3 (C->S, 74 bytes): Client auth + KEY**

- Message length: 72
- Key found at byte offset: 42 (0x2a)
- Pre-key auth blob (40 bytes): `b4e9978fd78aa1f8a2268925ae1a5e2428aedc16255564344b5324c46cdd73ae7b8a4f146246e01e`
- Key `7614a9b6d21ec669` repeated 4 times (32 bytes)

**Packet #4 (S->C, 106 bytes): Server auth response (XOR encrypted)**

- Decrypted with key: `b9665bb3dfc54579fbbfde2d632348d472621583a5367cd1000000000000000003b6b2b55605a8af747781fe00841a00e6a8ac3c0fe9b90b00000000000000000000000000000000000000000000000000000000000000000000000000000000a5fdc38ee3eabc60`

**Packet #5 (C->S, 10 bytes): Client ack (XOR encrypted)**

- Decrypted with key: `6dd0117ffec9f592`

### Match `8033dd36` (port 7085, key `c93d500d71cc89e2`)

**Packet #1 (C->S, 136 bytes): Handshake init**

- Message length: 134
- IP: `192.168.64.1`
- Port: `7085` (matches RPC port: True)

**Packet #2 (S->C, 5 bytes): Handshake response**

- Raw hex: `0003000600`

**Packet #3 (C->S, 74 bytes): Client auth + KEY**

- Message length: 72
- Key found at byte offset: 42 (0x2a)
- Pre-key auth blob (40 bytes): `2de1a4e9d0227866ba8cf7413d47e588287390868c55b93422f61f3b6e424f6b6607ffa89dd6c9dd`
- Key `c93d500d71cc89e2` repeated 4 times (32 bytes)

**Packet #4 (S->C, 106 bytes): Server auth response (XOR encrypted)**

- Decrypted with key: `46a666646e76adf68c18e09ca3bd8ef0d379275f5a9fad12000000000000000016d91652ad08de6e57e9e0975fd9daafacbf5368d48aca3600000000000000000000000000000000000000000000000000000000000000000000000000000000df61cefa007550d8`

**Packet #5 (C->S, 10 bytes): Client ack (XOR encrypted)**

- Decrypted with key: `9014347f67345460`

### Match `b98d3255` (port 7054, key `8a5d03e715e03ec2`)

**Packet #1 (C->S, 136 bytes): Handshake init**

- Message length: 134
- IP: `192.168.64.1`
- Port: `7054` (matches RPC port: True)

**Packet #2 (S->C, 5 bytes): Handshake response**

- Raw hex: `0003000600`

**Packet #3 (C->S, 74 bytes): Client auth + KEY**

- Message length: 72
- Key found at byte offset: 42 (0x2a)
- Pre-key auth blob (40 bytes): `97c2707daa5cca3032819775b3ce2734c03116ac349ec3e42ebb117ca5f4fb63d7f2c8824cfd9892`
- Key `8a5d03e715e03ec2` repeated 4 times (32 bytes)

**Packet #4 (S->C, 106 bytes): Server auth response (XOR encrypted)**

- Decrypted with key: `3fe8e61ba7ae8bce680603424a8d6275c9c4612a4b4c6eee000000000000000097950adc57b44e9a1c08fddc7353fe0e411f66890acdb2020000000000000000000000000000000000000000000000000000000000000000000000000000000018d497d22f35e322`

**Packet #5 (C->S, 10 bytes): Client ack (XOR encrypted)**

- Decrypted with key: `3bf9c4e6cb32f17b`

## 3. RPC Traffic Analysis (Confirming Key Absence)

Exhaustive search of all RPC calls in the 60-second window around each match
start confirms the XOR key does NOT appear in any RPC request or response.

### Match `ff8a37e1` -- RPC calls around match start

| Line | Method | Timestamp | Key Fields |
|------|--------|-----------|------------|
| 157 | `getPlayerInfo` | 13:06:08 |  |
| 158 | `joinLobby` | 13:06:13 | lobby data |
| 159 | `update` | 13:06:13 | state=pending_auto |
| 160 | `update` | 13:06:14 | state=pending_auto |
| 161 | `update` | 13:06:24 | state=pending_auto |
| 162 | `update` | 13:06:35 | state=pending_auto |
| 163 | `update` | 13:06:45 | state=pending_auto |
| 164 | `update` | 13:06:56 | state=pending_auto |
| 165 | `getLiveEventData` | 13:07:04 |  |
| 166 | `update` | 13:07:06 | state=pending_auto |
| 167 | `update` | 13:07:15 | state=matched_partners, ver=a761ccde... |
| 168 | `queryPendingMatch` | 13:07:16 |  |
| 169 | `acceptMatch` | 13:07:24 | returnValue=True |
| 170 | `rejectMatch` | 13:07:36 |  |
| 171 | `getLiveEventData` | 13:08:05 |  |
| 172 | `endSession` | 13:08:18 |  |
| 173 | `getPlayerForGuestAccount` | 13:08:21 |  |
| 174 | `startSessionForPlayer` | 13:08:22 | chatPass, playerInfo, etc. |
| 175 | `update` | 13:08:23 | state=menus |
| 176 | `getLiveEventData` | 13:08:23 |  |
| 177 | `getLeaderboardData` | 13:08:23 |  |
| 178 | `getPlayerInfo` | 13:08:23 |  |
| 179 | `exitLobby` | 13:08:23 |  |
| 180 | `getTalentsData` | 13:08:23 |  |
| 181 | `update` | 13:08:23 | state=menus |
| 182 | `getSkinManifest` | 13:08:23 |  |
| 183 | `joinLobby` | 13:08:26 | lobby data |
| 184 | `update` | 13:08:27 | state=pending_auto |
| 185 | `update` | 13:08:27 | state=pending_auto |
| 186 | `update` | 13:08:32 | state=matched_partners, ver=35a08359... |
| 187 | `queryPendingMatch` | 13:08:32 | matchId=ff8a37e1-8ff1-49f9-b70d-adc311f9aaf3 [MATCH START] |
| 188 | `acceptMatch` | 13:08:34 | returnValue=True |
| 189 | `update` | 13:08:44 | state=match_pending, ver=7b3a1cd4... |
| 190 | `update` | 13:08:48 | state=playing, matchId=ff8a37e1-8ff..., host=192.168.64.1, port=7079, ver=9ebb8e4b... |
| 191 | `update` | 13:09:08 | state=playing, matchId=ff8a37e1-8ff..., host=192.168.64.1, port=7079, ver=8d0fee6c... |
| 192 | `friendListAll` | 13:09:20 |  |
| 193 | `update` | 13:09:49 | state=playing, matchId=ff8a37e1-8ff..., host=192.168.64.1, port=7079, ver=06d960f7... |
| 194 | `update` | 13:11:31 | state=playing, matchId=ff8a37e1-8ff..., host=192.168.64.1, port=7079, ver=a83eceaa... |
| 195 | `update` | 13:13:13 | state=playing, matchId=ff8a37e1-8ff..., host=192.168.64.1, port=7079, ver=18b44b0c... |
| 196 | `update` | 13:14:52 | state=playing, matchId=ff8a37e1-8ff..., host=192.168.64.1, port=7079, ver=a0f0ee7f... |
| 197 | `update` | 13:16:34 | state=playing, matchId=ff8a37e1-8ff..., host=192.168.64.1, port=7079, ver=b2e5668c... |
| 198 | `update` | 13:17:42 | state=playing, matchId=ff8a37e1-8ff..., host=192.168.64.1, port=7079, ver=09557074... |
| 199 | `update` | 13:17:43 | state=post_match |
| 200 | `getLiveEventData` | 13:17:56 |  |
| 201 | `notifyExitPostMatch` | 13:17:56 |  |
| 202 | `getPlayerInfo` | 13:17:57 |  |
| 203 | `update` | 13:17:57 | state=menus |
| 204 | `getLeaderboardData` | 13:18:14 |  |
| 205 | `getLiveEventData` | 13:18:57 |  |
| 206 | `update` | 13:19:39 | state=menus |
| 207 | `getLiveEventData` | 13:19:58 |  |
| 208 | `getLiveEventData` | 13:20:59 |  |
| 209 | `update` | 13:21:21 | state=menus |
| 210 | `getLiveEventData` | 13:22:00 |  |
| 211 | `endSession` | 13:22:57 |  |
| 212 | `getPlayerForGuestAccount` | 13:23:18 |  |
| 213 | `startSessionForPlayer` | 13:23:19 | chatPass, playerInfo, etc. |
| 214 | `update` | 13:23:19 | state=menus |
| 215 | `getLiveEventData` | 13:23:20 |  |
| 216 | `exitLobby` | 13:23:20 |  |

No key derivation match found from RPC data for `ff8a37e1`.

### Match `8033dd36` -- RPC calls around match start

| Line | Method | Timestamp | Key Fields |
|------|--------|-----------|------------|
| 314 | `getLiveEventData` | 17:21:12 |  |
| 315 | `getLeaderboardData` | 17:21:12 |  |
| 316 | `exitLobby` | 17:21:12 |  |
| 317 | `getPlayerInfo` | 17:21:12 |  |
| 318 | `getTalentsData` | 17:21:12 |  |
| 319 | `getSkinManifest` | 17:21:13 |  |
| 320 | `update` | 17:21:13 | state=menus |
| 321 | `joinLobby` | 17:21:16 | lobby data |
| 322 | `update` | 17:21:17 | state=pending_auto |
| 323 | `update` | 17:21:17 | state=pending_auto |
| 324 | `updatePlatformPlayerConfig` | 17:21:18 |  |
| 325 | `updatePlatformPlayerConfig` | 17:21:19 |  |
| 326 | `update` | 17:21:27 | state=pending_auto |
| 327 | `update` | 17:21:38 | state=pending_auto |
| 328 | `update` | 17:21:48 | state=pending_auto |
| 329 | `update` | 17:21:59 | state=pending_auto |
| 330 | `update` | 17:22:09 | state=pending_auto |
| 331 | `getLiveEventData` | 17:22:13 |  |
| 332 | `update` | 17:22:20 | state=pending_auto |
| 333 | `update` | 17:22:30 | state=pending_auto |
| 334 | `update` | 17:22:41 | state=pending_auto |
| 335 | `update` | 17:22:51 | state=pending_auto |
| 336 | `update` | 17:23:02 | state=pending_auto |
| 337 | `update` | 17:23:12 | state=pending_auto |
| 338 | `getLiveEventData` | 17:23:14 |  |
| 339 | `update` | 17:23:23 | state=pending_auto |
| 340 | `update` | 17:23:33 | state=pending_auto |
| 341 | `update` | 17:23:44 | state=pending_auto |
| 342 | `update` | 17:23:54 | state=pending_auto |
| 343 | `update` | 17:23:56 | state=matched_partners, ver=4f061cc0... |
| 344 | `queryPendingMatch` | 17:23:57 | matchId=8033dd36-dbf2-4740-aff3-e1f0e350cfb4 [MATCH START] |
| 345 | `acceptMatch` | 17:23:59 | returnValue=True |
| 346 | `update` | 17:24:10 | state=match_pending, ver=3ba341b3... |
| 347 | `update` | 17:24:14 | state=playing, matchId=8033dd36-dbf..., host=192.168.64.1, port=7085, ver=54963bd8... |
| 348 | `getLiveEventData` | 17:24:15 |  |
| 349 | `update` | 17:24:34 | state=playing, matchId=8033dd36-dbf..., host=192.168.64.1, port=7085, ver=54963bd8... |
| 350 | `friendListAll` | 17:24:49 |  |
| 351 | `update` | 17:25:15 | state=playing, matchId=8033dd36-dbf..., host=192.168.64.1, port=7085, ver=983e4b01... |
| 352 | `update` | 17:26:57 | state=playing, matchId=8033dd36-dbf..., host=192.168.64.1, port=7085, ver=f63f20cb... |
| 353 | `update` | 17:28:39 | state=playing, matchId=8033dd36-dbf..., host=192.168.64.1, port=7085, ver=cc06055e... |
| 354 | `update` | 17:29:49 | state=playing, matchId=8033dd36-dbf..., host=192.168.64.1, port=7085, ver=e5b21354... |
| 355 | `update` | 17:29:51 | state=post_match |
| 356 | `getLiveEventData` | 17:31:28 |  |
| 357 | `getLeaderboardData` | 17:31:28 |  |
| 358 | `notifyExitPostMatch` | 17:31:28 |  |
| 359 | `getPlayerInfo` | 17:31:28 |  |
| 360 | `update` | 17:31:28 | state=menus |
| 361 | `update` | 17:31:28 | state=menus |
| 362 | `getLiveEventData` | 17:32:29 |  |
| 363 | `endSession` | 17:33:05 |  |
| 364 | `getPlayerForGuestAccount` | 17:40:00 |  |
| 365 | `startSessionForPlayer` | 17:40:01 | chatPass, playerInfo, etc. |
| 366 | `update` | 17:40:01 | state=menus |
| 367 | `getLiveEventData` | 17:40:02 |  |
| 368 | `getPlayerInfo` | 17:40:02 |  |
| 369 | `getLeaderboardData` | 17:40:02 |  |
| 370 | `exitLobby` | 17:40:02 |  |
| 371 | `getTalentsData` | 17:40:02 |  |
| 372 | `update` | 17:40:02 | state=menus |
| 373 | `getPlayerInfo` | 17:40:04 |  |

No key derivation match found from RPC data for `8033dd36`.

### Match `b98d3255` -- RPC calls around match start

| Line | Method | Timestamp | Key Fields |
|------|--------|-----------|------------|
| 649 | `getPlayerInfo` | 19:31:28 |  |
| 650 | `getSkinManifest` | 19:31:28 |  |
| 651 | `update` | 19:31:29 | state=menus |
| 652 | `guildGetData` | 19:31:33 |  |
| 653 | `getLeaderboardData` | 19:31:33 |  |
| 654 | `friendListAll` | 19:31:33 |  |
| 655 | `notifyPlayerAction` | 19:31:33 |  |
| 656 | `update` | 19:33:10 | state=menus |
| 657 | `updatePlatformPlayerConfig` | 19:34:07 |  |
| 658 | `updatePlatformPlayerConfig` | 19:34:07 |  |
| 659 | `getPlayerInfo` | 19:34:09 |  |
| 660 | `friendListAll` | 19:34:23 |  |
| 661 | `notifyPlayerAction` | 19:34:23 |  |
| 662 | `guildGetData` | 19:34:23 |  |
| 663 | `getLeaderboardData` | 19:34:23 |  |
| 664 | `friendListAll` | 19:34:25 |  |
| 665 | `getLeaderboardData` | 19:34:25 |  |
| 666 | `notifyPlayerAction` | 19:34:25 |  |
| 667 | `guildGetData` | 19:34:25 |  |
| 668 | `update` | 19:34:52 | state=menus |
| 669 | `getPlayerInfo` | 19:35:58 |  |
| 670 | `update` | 19:36:34 | state=menus |
| 671 | `joinLobby` | 19:36:52 | lobby data |
| 672 | `update` | 19:36:52 | state=pending_auto |
| 673 | `update` | 19:36:52 | state=pending_auto |
| 674 | `update` | 19:37:03 | state=pending_auto |
| 675 | `update` | 19:37:13 | state=pending_auto |
| 676 | `update` | 19:37:24 | state=pending_auto |
| 677 | `update` | 19:37:34 | state=pending_auto |
| 678 | `update` | 19:37:38 | state=matched_partners, ver=b4268fa3... |
| 679 | `queryPendingMatch` | 19:37:38 | matchId=b98d3255-16bd-4026-ad3d-6048142fd870 [MATCH START] |
| 680 | `acceptMatch` | 19:37:44 | returnValue=True |
| 681 | `update` | 19:37:49 | state=match_pending, ver=bfba0b43... |
| 682 | `update` | 19:37:52 | state=playing, matchId=b98d3255-16b..., host=192.168.64.1, port=7054, ver=66dc6793... |
| 683 | `update` | 19:38:13 | state=playing, matchId=b98d3255-16b..., host=192.168.64.1, port=7054, ver=c5281ced... |
| 684 | `friendListAll` | 19:38:24 |  |
| 685 | `update` | 19:38:54 | state=playing, matchId=b98d3255-16b..., host=192.168.64.1, port=7054, ver=c2c950be... |
| 686 | `update` | 19:40:36 | state=playing, matchId=b98d3255-16b..., host=192.168.64.1, port=7054, ver=be35268f... |
| 687 | `update` | 19:41:54 | state=playing, matchId=b98d3255-16b..., host=192.168.64.1, port=7054, ver=9de4bda0... |
| 688 | `update` | 19:41:56 | state=post_match |
| 689 | `getLiveEventData` | 19:41:58 |  |
| 690 | `notifyExitPostMatch` | 19:41:58 |  |
| 691 | `getPlayerInfo` | 19:41:58 |  |
| 692 | `update` | 19:41:58 | state=menus |
| 693 | `getLeaderboardData` | 19:42:16 |  |
| 694 | `getPlayerInfo` | 19:42:16 |  |
| 695 | `update` | 19:43:40 | state=menus |
| 696 | `update` | 19:45:22 | state=menus |
| 697 | `update` | 19:47:04 | state=menus |
| 698 | `endSession` | 19:47:13 |  |
| 699 | `createGuestPlayer` | 19:50:39 |  |
| 700 | `startSessionForPlayer` | 19:50:40 | chatPass, playerInfo, etc. |
| 701 | `update` | 19:50:41 | state=menus |
| 702 | `getLiveEventData` | 19:50:41 |  |
| 703 | `getLeaderboardData` | 19:50:41 |  |
| 704 | `getPlayerInfo` | 19:50:41 |  |
| 705 | `exitLobby` | 19:50:41 |  |
| 706 | `getTalentsData` | 19:50:41 |  |
| 707 | `getSkinManifest` | 19:50:41 |  |
| 708 | `update` | 19:50:41 | state=menus |

No key derivation match found from RPC data for `b98d3255`.

## 4. Cross-Match Field Comparison (`state: playing` Updates)

Fields that DIFFER between the 3 matches (potential key sources):

### Varying Fields

| Field | Match ff8a37e1 | Match 8033dd36 | Match b98d3255 |
|-------|---------------|---------------|---------------|
| `expiry` | `1775221847.7970183` | `1775237174.1859994` | `1775245192.3653567` |
| `lastVersion` | `7b3a1cd4-27b2-4267-8987-2` | `6a14436b-6d19-4ccd-bdb8-4` | `bfba0b43-0f2f-4567-ad33-b` |
| `matchId` | `ff8a37e1-8ff1-49f9-b70d-a` | `8033dd36-dbf2-4740-aff3-e` | `b98d3255-16bd-4026-ad3d-6` |
| `notify` | `True` | `False` | `True` |
| `port` | `7079` | `7085` | `7054` |
| `timestamp` | `04/03/26 13:08:47` | `04/03/26 17:24:14` | `04/03/26 19:37:52` |
| `version` | `9ebb8e4b-87e8-49dc-b87f-7` | `54963bd8-4c14-4f6b-b3bc-7` | `66dc6793-6fed-442b-9504-3` |

### Constant Fields

- `host`: `192.168.64.1`
- `numPlayers`: `6`
- `numQueuedEntries`: `6`
- `prevState`: `pending_auto`
- `site`: ``
- `state`: `playing`
- `ttl`: `100`

**None of the varying fields contain or derive the XOR key.**
The `version`, `lastVersion`, `matchId`, `expiry`, `timestamp`, and `port` all differ
between matches, but none encode the 8-byte key via direct inclusion, XOR, or
standard hash (MD5, SHA1, SHA256).

## 5. `startSessionForPlayer` Per-Session Data

The `startSessionForPlayer` response contains per-session fields that change:

| Field | Match 1 | Match 2 | Match 3 |
|-------|---------|---------|---------|
| `chatPass` | `d0959225ab82040028` | `5d1c956fce4993d153` | `7158635050c39a0402` |
| `sessionId` | `900d2afb-9c73-4b66` | `68c04c6f-a9c5-40be` | `f9a8ff5f-be56-4479` |
| `playerUUID` | `b64d1fb9-828...` | `dca91f09-7cf...` | `7c7d5f03-0b9...` |
| `version` | `213e239d-0af...` | `f002043b-9ac...` | `f9b82925-eeb...` |
| `platformTime` | `1775221702` | `1775236871` | `1775244687` |

**None of these per-session values match or derive the XOR key.**
The `chatPass` is a 40-char SHA1 hex string (XMPP auth), not related to the game key.

## 6. `acceptMatch` Response Analysis

The `acceptMatch` RPC returns only a boolean `true` with no token or key data:

- Match `ff8a37e1`: `acceptMatch` response = `true`
- Match `8033dd36`: `acceptMatch` response = `true`
- Match `b98d3255`: `acceptMatch` response = `true`

No ticket, token, or key material is returned by `acceptMatch`.

## 7. Conclusions

### Where the Key Lives

The 8-byte XOR key is transmitted in **TCP packet #3** (the client's second message
to the game server) during the handshake. Specifically:

```
Packet #3 layout (74 bytes total):
  Offset 0-1:   Message length (uint16 BE) = 0x0048 = 72
  Offset 2-41:  40-byte auth/identity blob (encrypted or random)
  Offset 42-49: XOR key (8 bytes)
  Offset 50-57: XOR key (8 bytes, repeat)
  Offset 58-65: XOR key (8 bytes, repeat)
  Offset 66-73: XOR key (8 bytes, repeat)
```

### Where the Key Does NOT Live

The key is **absent from all HTTPS RPC traffic**:
- NOT in `queryPendingMatch` response
- NOT in `acceptMatch` response (returns only `true`)
- NOT in `update` responses (state=playing gives matchId/host/port only)
- NOT in `startSessionForPlayer` response
- NOT in `joinLobby` response
- NOT in any JWT session token (payload or signature)
- NOT derivable from matchId, version UUIDs, sessionId, chatPass, or any other
  RPC field via MD5, SHA1, SHA256, or XOR

### Key Generation

The key appears to be **generated by the client** (likely random 8 bytes) and
sent to the server during the TCP handshake. The server then uses the same key
for all subsequent XOR encryption. Evidence:

1. The client sends the key FIRST (packet #3), before the server uses it
2. Server packet #4 is already XOR-encrypted with the client's key
3. The key is not in any prior server response
4. The key appears as 4 repetitions (padding), suggesting it fills a fixed-size field

### Practical Implication for MITM

To decrypt game traffic in real-time, the proxy should:

1. Intercept TCP packet #3 (C->S, 74 bytes)
2. Extract bytes at offset 42-49 as the 8-byte XOR key
3. Use this key to XOR-decrypt all subsequent packets (from offset 2 onward,
   since bytes 0-1 are the unencrypted message length prefix)

```python
# Key extraction from handshake packet #3:
def extract_xor_key(pkt3_data: bytes) -> bytes:
    """Extract the 8-byte XOR key from the client's 2nd message (packet #3)."""
    assert len(pkt3_data) == 74, f'Expected 74 bytes, got {len(pkt3_data)}'
    return pkt3_data[42:50]  # 8-byte key at offset 42
```
