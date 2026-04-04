# Vainglory Match Protocol Specification

Binary: GameKindred v4.13.4 (arm64, iOS)
Source: Combined Ghidra static analysis + MITM traffic analysis of 3 live matches

## Protocol Overview

Vainglory uses two distinct protocol layers:

| Layer | Transport | Encryption | Purpose |
|-------|-----------|-----------|---------|
| Platform | HTTPS JSON-RPC (port 8000/443) | TLS | Auth, matchmaking, player data, social |
| In-match | Raw TCP (dynamic port ~7000s) | XOR stream cipher | Game state, inputs, entity updates |

This document covers the **in-match TCP protocol**.

## Connection Lifecycle

```
Platform RPC                          Game Server TCP
═══════════════                       ═══════════════

joinLobby ──────────────►
queryPendingMatch ──────► (polling)
acceptMatch ────────────►
update(state=playing) ──► {host, port, matchId}
                                      ┌─ C->S: HANDSHAKE_HELLO (136B, plaintext)
                                      ├─ S->C: HANDSHAKE_ACK (5B, plaintext)
                                      ├─ C->S: AUTH_TOKEN (74B, XOR encrypted)
                                      ├─ S->C: SERVER_HELLO (106B, XOR encrypted)
                                      ├─ S->C: SERVER_SETUP (74B, XOR encrypted)
                                      ├─ S->C: ENTITY_UPDATE_LG × N (initial entities)
                                      │
                                      │  ─── Game loop (~100-143 Hz) ───
                                      ├─ S->C: TICK_HEARTBEAT (18B) × ~100-143/sec
                                      ├─ S->C: ENTITY_UPDATE_SM (26B) × variable
                                      ├─ S->C: ENTITY_UPDATE_LG (42B) × variable
                                      ├─ S->C: SNAPSHOT_2592B × ~0.4/sec
                                      ├─ C->S: INPUT_ACK (10B) × ~0.5/sec
                                      ├─ C->S: INPUT_EXTENDED (18B) × occasional
                                      │
update(state=post_match)              └─ Connection closed
notifyGameResults ──────►
notifyExitPostMatch ────►
```

## Wire Format

### Framing

All messages use a 2-byte big-endian length prefix:

```
┌──────────┬──────────────────────────┐
│ 2B BE    │ Variable                 │
│ content  │ content                  │
│ length   │ (encrypted after handshake) │
└──────────┴──────────────────────────┘
total_size = content_length + 2
```

### Encryption

After the handshake (first 2 messages), all content is XOR-encrypted with a **per-match 8-byte repeating key**.

```python
def xor_encrypt(data: bytes, key: bytes) -> bytes:
    return bytes(data[i] ^ key[i % 8] for i in range(len(data)))
```

The key changes every match:
- Match ff8a37e1: `76 14 a9 b6 d2 1e c6 69`
- Match 8033dd36: `c9 3d 50 0d 71 cc 89 e2`
- Match b98d3255: `8a 5d 03 e7 15 e0 3e c2`

**Key source (CONFIRMED)**: The key is **client-generated** and embedded in the C->S AUTH_TOKEN message (the first encrypted message). The AUTH_TOKEN has 72 bytes of content:
- Bytes 0-39: 40 bytes of auth/session data
- Bytes 40-47: **The 8-byte XOR key**
- Bytes 48-71: Key repeated 3 more times (zero-padding encrypted with the key = key itself)

Since the AUTH_TOKEN is itself XOR-encrypted, and positions 40-71 contain the key repeated, those bytes in the raw (encrypted) stream are: `plaintext_zeros XOR key = key`. The server reads raw bytes 40-47 of the AUTH_TOKEN to obtain the encryption key.

**Key extraction from traffic**: Read raw bytes 42-49 (offset 40-47 of content, after 2-byte length prefix) of the C->S AUTH_TOKEN message (C->S message index 1). Verified 3/3 matches.

## Handshake

### C->S: HANDSHAKE_HELLO (136 bytes total, plaintext)

```
Offset  Size  Field
──────  ────  ─────
0       2     Content length: 0x0086 (134)
2       2     Protocol version: 0x0005
4       128   Client IP address (null-terminated, zero-padded)
132     2     Client port (big-endian) — always 0x0000 in captures
```

### S->C: HANDSHAKE_ACK (5 bytes total, plaintext)

```
Offset  Size  Field
──────  ────  ─────
0       2     Content length: 0x0003
2       2     Response code: 0x0006
4       1     Flags: 0x00
```

### C->S: AUTH_TOKEN (74 bytes total, XOR encrypted)

```
Offset  Size  Field
──────  ────  ─────
0       2     Content length: 0x0048 (72)
2       40    Auth/session data (encrypted)
42      8     XOR encryption key (raw bytes = key, since plaintext is zeros)
50      8     Key repeated (padding)
58      8     Key repeated (padding)
66      8     Key repeated (padding)
```

The XOR key is embedded at content offset 40-47. Since the plaintext at that position
is zeros and the message is XOR-encrypted with the key itself, the raw bytes at
positions 42-49 of the total message ARE the key: `XOR(0x00, key) = key`.

### S->C: SERVER_HELLO (106 bytes total, XOR encrypted)

Content (104 bytes after decryption): 24 bytes of session data + 8 bytes zeros + 8 bytes additional data + remaining.
Contains server session establishment response.

### S->C: SERVER_SETUP (74 bytes total, XOR encrypted)

Content (72 bytes after decryption): 40 bytes of setup data + 32 bytes zeros.
Additional server configuration (map, game mode, etc.).

## Message Types (Steady State)

### S->C Messages

| Type | Content Size | Total Size | Frequency | Description |
|------|-------------|------------|-----------|-------------|
| TICK_HEARTBEAT | 16B | 18B | 78-143 Hz | Game tick with 8B data + 8B zeros |
| ENTITY_UPDATE_SM | 24B | 26B | 8-18K/match | Small entity state update |
| ENTITY_UPDATE_LG | 40B | 42B | 2-3.5K/match | Large entity state update (16B data + variable padding) |
| ENTITY_UPDATE_XL | 48B | 50B | 6-43/match | Extended entity update |
| TICK_SMALL | 8B | 10B | 500-1500/match | Small tick/ack |
| INPUT_ACK_REPLY | 128B | 130B | = C->S count | Server acknowledgment of client input |
| SNAPSHOT | 2592B | 2594B | ~230/match | Full world state snapshot |
| SERVER_HELLO | 104B | 106B | 15-25/match | Session/config messages |
| S_MSG_32B | 32B | 34B | 15-210/match | 32-byte data messages |
| S_MSG_224B | 224B | 226B | 12/match | Large data messages |

### C->S Messages

| Type | Content Size | Total Size | Frequency | Description |
|------|-------------|------------|-----------|-------------|
| INPUT_ACK | 8B | 10B | 113-257/match | Player input / heartbeat |
| INPUT_EXTENDED | 16B | 18B | 0-31/match | Extended input (ability with target?) |
| AUTH_TOKEN | 72B | 74B | 1/match | Authentication |
| HANDSHAKE_HELLO | 134B | 136B | 1/match | Connection handshake |

## Traffic Statistics (3 matches)

| Metric | Match 1 | Match 2 | Match 3 |
|--------|---------|---------|---------|
| Duration | 535s | 337s | 243s |
| C->S messages | 285 | 157 | 146 |
| S->C messages | 100,707 | 45,329 | 29,573 |
| C->S bytes | 3,248 | — | — |
| S->C bytes | 2,669,057 | — | — |
| Tick rate | 143 Hz | 98 Hz | 78 Hz |
| Unique entities | 202 | 143 | 133 |
| Top entity updates | 801 | 626 | 1,229 |
| Snapshots | 229 | 233 | 234 |

## Entity System

### From Ghidra Analysis

The game engine uses entity objects with the following known layout:

```c
struct Entity {
    // ...
    float pos_x;           // +0x250
    float pos_y;           // +0x258 (600 decimal)
    float pos_z_offset;    // +0x254
    float pos_z_ground;    // +0x2ec
    uint  entity_type_id;  // +0x268 (index into name table)
    byte  team;            // +0x264 (1=Left, 2+=Right)
    byte  flags;           // +0x2f4
    // ...
};
```

Entity types include heroes (Hero009, Hero010, ...), minions (FortressMinion, Ishtar_Minion), structures (HF_GoldMiner), items, abilities, and buffs.

### Entity Updates in Protocol

ENTITY_UPDATE_LG messages (40B content) contain:
- First 16 bytes: Entity data (entity ID + state)
- Remaining 24 bytes: Variable (mostly zeros for simple updates, non-zero for complex state changes)

6 "top" entities receive 95%+ of updates per match (the hero characters), while 130-200 other entities (minions, projectiles, structures) receive occasional updates.

### Game Stats (200 stat types from binary)

The game supports 200+ stat types including:

| ID Range | Examples |
|----------|----------|
| 0-5 | ATTACK_SPEED, BONUS_ATTACK_SPEED, BONUS_MOVESPEED_* |
| 6-8 | BONUS_ALT_ENERGY, CRYSTAL_POWER, BONUS_WEAPON_POWER |
| 12-17 | SPEED, CRYSTAL_POWER_PER_STACK, WEAPON_POWER_PER_STACK |
| 18-19 | CRIT_CHANCE, LIFESTEAL |
| ... | (200 total stat labels extracted) |

## Platform RPC Surface (for context)

The platform layer has been fully reversed:

- **146 JSON-RPC methods** identified
- **8 response parser types**: playerInfoUpdate, simpleCallback, stateUpdateCallback, basicResult, sessionBootstrap, eventsData, guildData, equipmentData
- **20 methods captured in live traffic**, 126 additional methods found in binary
- Full request/response field schemas extracted via Ghidra decompilation

Key RPC methods for match lifecycle:
- `joinLobby` → enter matchmaking queue
- `queryPendingMatch` → poll for match found
- `acceptMatch` → accept found match
- `update` → returns `{state: "playing", host, port, matchId}` when match starts
- `notifyGameResults` → post-match results
- `notifyExitPostMatch` → leave post-match screen

## Tools

| Tool | Purpose |
|------|---------|
| `scripts/decode_match_packets.py` | Decode captured match packets with auto XOR key detection |
| `mitm/vg_game_proxy.py` | TCP proxy for live match capture |
| `mitm/vg_interceptor.py` | MITM for platform RPC (rewrites host to intercept match traffic) |
| `scripts/GhidraMatchProtocol.java` | Ghidra script for match protocol analysis |
| `scripts/GhidraRpcSchemaExtractor.java` | Ghidra script for RPC schema extraction |

## Resolved Questions

1. **XOR key source** — SOLVED: The 8-byte key is client-generated and embedded at content offset 40-47 of the C->S AUTH_TOKEN (raw bytes = key, since plaintext zeros XOR key = key). Verified 3/3 matches.

## Open Questions

1. **Second encryption layer (CONFIRMED: Blowfish ECB)** — After XOR decryption,
   data still has ~7.8 bits/byte entropy. From Ghidra RE of `FUN_10010ccbc`, the
   packet processing loop applies Blowfish ECB decryption (via vtable dispatch at
   `DAT_101e47e20`) when flag `+0x280c` is set. The Blowfish key is derived as:
   `key = MD5(64B_hardcoded_salt + per_session_key_material)` (see `FUN_100346560`).
   
   **The per-session key material** is a string stored at `connection_object + 0xa0`,
   set via `FUN_100346650` when the connection is established. Its source has NOT been
   identified — it's not the matchId, sessionToken, chatPass, playerUUID, or any other
   field from the JSON-RPC traffic. It may be exchanged during the TCP handshake itself
   or derived from a server-provided value not captured by the HTTPS MITM.
   
   **Blowfish details from RE:**
   - Init: `FUN_1010d0460` — standard Blowfish key schedule (P-array 0x243f6a88,
     0x85a308d3..., 4×256 S-boxes from `DAT_1013cc1e8`)
   - Encrypt/decrypt: `FUN_1010d031c` — 16-round Feistel network, 4 S-box lookups
   - Object size: 0x1408 bytes (P-array + 4 S-boxes)
   - Salt (64B): `467c46341a2f5f1e a778c8d74b1ca88b 459d33ab9685e0e3 f378e7b493322ceb
     4036be8b31396d33 30ddaa6d7031415e fe903f60be8834c5 3299e3e8877c3a26`
   
   **After Blowfish decryption, plaintext messages use opcodes 0x000b–0x0490** dispatched
   by `FUN_100123fa0` (171 cases). First 2 bytes = big-endian opcode, rest = payload.

2. **Message type identification** — SOLVED: First 2 bytes of plaintext content = BE
   opcode, dispatched via switch in `FUN_100123fa0`. Opcode range 0x3e9–0x490 (1001–1168).
   Low opcodes 0x0b, 0x0d, 0x0f, 0x10 also exist.

3. **Snapshot internal format** — 2592 bytes = 6 records × 432 bytes. Records 0 and 1
   have the most dynamic fields (~14 varying across match). The remaining 4 records are
   mostly static/zero. Without Blowfish decryption, field semantics cannot be mapped.

4. **TICK_HEARTBEAT semantics** — Still unknown (requires Blowfish decryption).

5. **Auth data format** — AUTH_TOKEN first 40 bytes are session auth (possibly HMAC of
   session token). Bytes 40–71 are the per-match "XOR pattern" repeated — this is
   `Blowfish(key, 0x0000000000000000)`. The SERVER_HELLO echoes this pattern at bytes
   32–39, confirming key agreement.

## Key Extraction (for future work)

To fully decode the game protocol, the Blowfish key must be extracted at runtime:

**Option A: Frida hook** on `FUN_100346650` (offset 0x00346650):
```javascript
Interceptor.attach(base.add(0x00346650), {
    onEnter(args) {
        // args[0] = string pointer (key material)
        const str = args[0].readUtf8String();
        emit("blowfish_key_material", { key: str });
    }
});
```

**Option B: Frida hook** on `FUN_1004ed020` (offset 0x004ed020):
```javascript
Interceptor.attach(base.add(0x004ed020), {
    onEnter(args) {
        // args[1] = 16-byte MD5 key, args[2] = 0x10
        emit("blowfish_key", { key: hexdump(args[1], 16) });
    }
});
```

**Option C: Memory dump** — read 16 bytes at `DAT_101e47e20 + 0x08` (P-array start)
after key init completes, then reconstruct the key schedule offline.

## Next Steps for Server Emulation

1. **Minimal handshake server**: Accept TCP connection, respond to HANDSHAKE_HELLO with ACK, exchange AUTH_TOKEN / SERVER_HELLO
2. **Key negotiation**: Either use a fixed key (for testing) or implement the actual derivation
3. **Tick loop**: Send TICK_HEARTBEAT at 30Hz+ to keep client alive
4. **Entity spawning**: Send ENTITY_UPDATE_LG messages for hero entities
5. **Snapshot broadcasting**: Send periodic SNAPSHOT messages with world state
6. **Input handling**: Accept and ACK client INPUT messages
