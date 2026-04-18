# Vainglory In-Match Protocol: Full Decryption Writeup

## Executive Summary

We fully cracked the Vainglory in-match game protocol through static reverse engineering of the Ghidra-decompiled GameKindred binary (v4.13.4, arm64 iOS). The protocol uses **Blowfish ECB encryption with a little-endian ARM64 word order** and a per-match key derived from `MD5(hardcoded_salt + match_id)`. All three layers of the protocol — framing, encryption, and message semantics — are now decoded, enabling real-time match tracking with a live dashboard.

No runtime instrumentation (Frida) or binary patching was required. The entire solution was derived from static analysis of decompiled code + captured network traffic.

---

## Protocol Architecture

```
┌─────────────────────────────────────────────────────┐
│                   TCP Stream                         │
├──────────┬──────────────────────────────────────────┤
│ 2B BE    │ N bytes encrypted content                │
│ length   │                                          │
├──────────┴──────────────────────────────────────────┤
│        Blowfish ECB Decryption (8B blocks)          │
│        Key = MD5(salt + matchId)                    │
│        LE word order (swap 4B halves)               │
├──────────┬──────────────────────────────────────────┤
│ 2B BE    │ Payload                                  │
│ opcode   │ (variable, opcode-dependent)             │
└──────────┴──────────────────────────────────────────┘
```

### Layer 1: TCP Framing

Every message on the wire is prefixed with a **2-byte big-endian content length**. This length field is **not encrypted** — it's read directly from the TCP stream by the client's packet processing loop (`FUN_10010ccbc` in `named.c`).

```
[2B content_length (BE)] [content_length bytes of encrypted data]
```

### Layer 2: Blowfish ECB Encryption

The content bytes are encrypted with **Blowfish ECB** using 8-byte blocks. The implementation has one critical deviation from standard Blowfish:

**The game reads each 8-byte block as two native ARM64 (little-endian) uint32 values**, while standard Blowfish libraries (PyCryptodome, OpenSSL) use big-endian. To decrypt with a standard library:

```python
def _swap4(block):
    """Swap byte order of each 4-byte half: LE <-> BE."""
    return block[3::-1] + block[7:3:-1]

def decrypt_block(bf, block):
    return _swap4(bf.decrypt(_swap4(block)))
```

This was confirmed by analyzing `FUN_1010d031c` (encrypt) and `FUN_1010d03bc` (decrypt) in `1010d.c`, which both take `uint *param_2, uint *param_3` — native uint32 pointers that read in little-endian on ARM64.

### Layer 3: Message Format

After decryption, each message starts with a **2-byte big-endian opcode** followed by the payload:

```
[2B opcode (BE)] [payload bytes]
```

The opcodes range from 0x000B to 0x0490 (11 to 1168), dispatched by a 171-case switch statement in `FUN_100123fa0` (`10012.c`).

---

## Key Derivation

### Formula

```
blowfish_key = MD5(SALT_64B + match_id_string.encode('utf-8'))
```

### The Salt (64 bytes, hardcoded in binary)

Extracted from `FUN_100346560` (`10034.c:5738-5745`). Stored as 8 little-endian uint64 values on the ARM64 stack:

```
467c46341a2f5f1e a778c8d74b1ca88b
459d33ab9685e0e3 f378e7b493322ceb
4036be8b31396d33 30ddaa6d7031415e
fe903f60be8834c5 3299e3e8877c3a26
```

### The Match ID

The key material is the **game server match ID** as a UUID string (e.g., `"b98d3255-16bd-4026-ad3d-6048142fd870"`). This is the same ID returned in the `update(state=playing)` JSON-RPC response's `matchId` field, and the same ID used in the match capture directory name.

### Key Derivation Code Path (from Ghidra RE)

1. **Game startup**: `FUN_100346524(0, 0)` at `10011.c:4370` creates a Blowfish context with key `MD5(salt)` (no match ID yet)

2. **Match connection**: `FUN_100115588` at `10011.c:4149` fires as a state machine callback when entering the connected state:
   - Reads the match ID string from `connection_object + 0xa0`
   - Calls `FUN_100346650` (`10034.c:5775`) which compares with the cached last key
   - If different, calls `FUN_100346560` to re-derive the Blowfish key

3. **`FUN_100346560`** (`10034.c:5721`):
   - Initializes MD5 context (`FUN_1004e07d8` → standard MD5 with init values 0x67452301, 0xefcdab89, 0x98badcfe, 0x10325476)
   - Feeds 64-byte hardcoded salt via `thunk_FUN_1004e0894` (MD5 update)
   - Feeds match ID string via same function
   - Finalizes MD5 via `thunk_FUN_1004e13c8` → 16-byte key
   - Passes key to `FUN_1004ed020` → `FUN_1010d0460` (standard Blowfish key schedule with P-array 0x243f6a88, 0x85a308d3... and 4×256 S-boxes)

4. **Match ID source**: Parsed from `queryPendingMatch` JSON-RPC response at `FUN_10051abec` (`10051.c:5157`), stored at match state object + 0xa8, copied to connection object + 0xa0 when entering the match.

### Verification

The key derivation was verified against all captured matches by checking that `Blowfish_LE(key, 0x0000000000000000)` produces the per-match "zeros pattern" visible in encrypted zero-padded message regions:

| Match ID | Key (hex) | BF(key, zeros) | Verified |
|----------|-----------|----------------|----------|
| ff8a37e1-8ff1-49f9-b70d-adc311f9aaf3 | 55e0887b0133dfc8d7ca2875ea64f511 | 7614a9b6d21ec669 | ✓ 99.5% valid opcodes |
| 8033dd36-dbf2-4740-aff3-e1f0e350cfb4 | 419b643a8f0d93ded3aa4e0bcf03f960 | c93d500d71cc89e2 | ✓ 99.3% valid opcodes |
| b98d3255-16bd-4026-ad3d-6048142fd870 | 303acd37526dd83881debdecdc7a9d4c | 8a5d03e715e03ec2 | ✓ 99.3% valid opcodes |

---

## How We Got Here: Investigation Timeline

### Phase 1: Initial Protocol Identification

From captured match traffic (`vg_game_proxy.py` TCP proxy), we identified:
- 2-byte BE length prefix framing
- A repeating 8-byte pattern in zero-padded message regions (initially misidentified as an "XOR key")
- The pattern changes per match but is consistent within a match
- AUTH_TOKEN (C→S message #2) contains this pattern at bytes 40-71
- SERVER_HELLO (S→C message #2) echoes it at bytes 32-39

### Phase 2: Identifying Blowfish (Ghidra Static Analysis)

Traced the packet receive path in the decompiled binary:
- `FUN_10010ccbc` (`named.c:7202`): The main packet processing loop
- Reads 2B length prefix, then dispatches content through an optional decryption layer
- The decryption calls `FUN_1003467b8` which dispatches via vtable at `DAT_101e47e20 + 0x28`
- Vtable object created by `FUN_1004ecfb4`: allocates 0x1408 bytes (P-array + 4 S-boxes = standard Blowfish state size)
- Key init function `FUN_1010d0460` uses standard Blowfish P-array constants (0x243f6a88, 0x85a308d3)

### Phase 3: Finding the Key Derivation

Traced from `FUN_100346524` (Blowfish context creation):
- Calls `FUN_100346560` with key material
- `FUN_100346560` feeds 64 hardcoded salt bytes + optional key material into MD5
- MD5 output (16 bytes) becomes the Blowfish key
- The MD5 implementation was confirmed by init constants (0x67452301, 0xefcdab89...)

### Phase 4: Identifying the Key Material (The Breakthrough)

This was the hardest part. Three parallel approaches were attempted:

**Approach A — Binary patching**: Built `patch_blowfish_keydump.py` to patch the binary with a trampoline that writes the key to stderr. Ready but not needed.

**Approach B — Deep RE** (the winner): A thorough search through the decompiled code traced the key material to `connection_object + 0xa0`, a `std::string` set from the match ID. The match ID flows from `queryPendingMatch` JSON-RPC → match state object + 0xa8 → connection object + 0xa0 → `FUN_100346650` → `FUN_100346560` → MD5 → Blowfish key.

**Approach C — MITM key exchange**: Built a `--force-key` mode in `vg_game_proxy.py` to replace AUTH_TOKEN with zeros, forcing a known key. Also analyzed handshake structure across all 3 matches.

### Phase 5: The Endianness Fix

Even with the correct key (verified by zeros pattern match), initial decryption attempts produced invalid opcodes. The breakthrough was recognizing that the game's Blowfish implementation reads blocks as **native ARM64 (little-endian) uint32 pairs**, while PyCryptodome uses big-endian. The fix: swap each 4-byte half before and after standard Blowfish decrypt.

This was confirmed by reading `FUN_1010d031c` and `FUN_1010d03bc` which take `uint *` pointers — native-endian uint32 reads on ARM64.

---

## What's Decoded (Working Now)

### Opcode Map (from decoded match data)

| Opcode | Hex | Name | Size | Content |
|--------|-----|------|------|---------|
| 1000 | 0x03E8 | PLAYER_UUID | 72B | Player UUID as ASCII string |
| 1001 | 0x03E9 | GAME_SETUP | 104B | Initial game configuration |
| 1005 | 0x03ED | PLAYER_HANDLE | 80B | Player display name |
| 1006 | 0x03EE | PLAYER_INFO | 224B | Full player info with handle, UUID, entity mapping |
| 1016 | 0x03F8 | ENTITY_FLOAT | 16B | Per-entity float value updates (velocity/distance) |
| 1053 | 0x041D | ENTITY_STAT | 16B | Entity stat: `[2B][2B eid][4B BE float][1B stat_type][...]` |
| 1067 | 0x042B | ENTITY_STATE | 16B | Entity state changes |
| 1070 | 0x042E | POSITION | 16B | Position: `[2B][2B eid][4B BE float X][4B BE float Y][2B]` |
| 1086 | 0x043E | ENTITY_PROP | 24B | Entity property (gold/XP counters) |
| 1087 | 0x043F | ENTITY_DATA | 40B | Extended entity data |
| 1107 | 0x0453 | HERO_CATALOG | 40B | Hero/skin name definition (`*HeroName*`) |
| 1108 | 0x0454 | GAME_MODE | 72B | Game mode config (`*GameMode_Aral_Casual*`) |
| 1114 | 0x045A | SNAPSHOT | 2592B | Full scoreboard: 6 records × 161B |
| 1135 | 0x046F | MODE_NAME | 72B | Game mode display name |

### Snapshot Record Layout (opcode 1114, per-player record = 161 bytes)

```
Offset  Size  Field
──────  ────  ─────
   8      1   Slot index (0-5)
  15      1   Team (1=Blue, 2=Red)
  18      2   Entity ID (BE u16)
  24     32   Player handle (null-padded ASCII)
 104     36   Player UUID (ASCII)
  16      2   Gold snapshot (BE u16)
```

### Entity Stat Types (opcode 1053, byte[8])

| Type | Meaning | Typical Values |
|------|---------|----------------|
| 0 | Attack-related | 0-90 |
| 2 | Secondary stat | 0-25 |
| 3 | Movement speed | 2.5-3.5 base |
| 6 | HP delta | Large negatives = damage taken |
| 8 | Cooldown/attack speed | 0.2-4.8 |

### Position Coordinate System (opcode 1070)

- X range: **-90 to +90** (left to right of ARAL lane)
- Y range: **-10 to +20** (bottom to top)
- Values are **big-endian IEEE 754 floats**
- Update frequency: ~20 Hz per active entity

---

## What's Still Open

### 1. Hero Assignment Decoding

The hero catalog (opcode 1107) sends all 50+ hero names during match setup, but the **mapping of which player received which hero** hasn't been cracked. The assignment is likely encoded numerically in:
- Opcode 1108 (game mode config, 72B) — contains hero IDs
- Opcode 1011 (entity spawn messages)
- The snapshot record might contain a hero index field we haven't mapped

**Impact**: The dashboard shows player handles but not hero names (shows `--` for hero column).

### 2. Kill / Death / Assist Tracking

We detect large HP delta events (opcode 1053, stat_type 6) as "massive hits" in the timeline, but there's no confirmed **kill event opcode**. Possible candidates:
- Opcode 1037 (444 msgs/match, 24B) — unknown purpose, moderate frequency
- Opcode 1052 (561 msgs/match, 24B) — unknown
- An entity state change (opcode 1067) with a specific state value might signal death

**Impact**: No KDA scoreboard yet.

### 3. Item Purchases

No opcode has been identified for item buy events. Items might be encoded in:
- Opcode 1087 (entity data, 40B, 2437/match) — the most frequent large message
- The snapshot's unidentified fields (bytes 56-103 of each player record)

### 4. Ability Usage / Cooldowns

The Ghidra RE identified analytics event offsets for UseAbility (0x34599c), but these are internal logging functions, not network opcodes. The protocol likely encodes ability casts in:
- Opcode 1054 (24B, 1513/match)
- Opcode 1045 (16B, 873/match)

### 5. Health / Mana Current Values

We have HP *deltas* (damage events) from opcode 1053 stat_type 6, but not absolute current health/mana values. These might be in:
- Opcode 1086 (entity property) with an unidentified type byte
- The snapshot's unidentified fields
- Opcode 1087 (40B entity data)

### 6. Game Timer / Tick Counter

Opcode 1016 (2790/match, 16B) contains float values per entity but its exact purpose (game clock, velocity, distance traveled) isn't confirmed.

### 7. Minion / Structure State

Only hero entities (entity IDs 1500-1505) are tracked. Turrets, minions, jungle camps, and objectives (Kraken, Gold Miner) use other entity IDs that haven't been mapped.

### 8. C→S Input Decoding

Client-to-server messages (opcode 0x0000, 8B) contain what appears to be float timestamps and input commands, but the exact format (move commands, ability targets, pings) isn't decoded.

### 9. 5v5 / Ranked Mode Testing

All captures are ARAL (3v3 casual). The protocol likely works identically for 5v5 Sovereign's Rise and ranked modes, but snapshot record counts (6 vs 10 players) and entity ID ranges may differ.

---

## Tools Built

| Tool | Purpose |
|------|---------|
| `vg_dashboard_server.py` | HTTP server with JSON API for real-time match decoding |
| `vg_dashboard.html` | Browser-based live dashboard with 2D map, scoreboard, events |
| `vg_match_dashboard.py` | CLI match analysis dashboard |
| `scripts/decode_match_packets.py` | Packet decoder with auto key derivation (`--bf-key` or auto) |
| `scripts/vg_match_schema.py` | Protocol schema definitions and opcode map |
| `scripts/patch_blowfish_keydump.py` | Binary patcher to extract key via stderr (backup approach) |
| `decoded_matches/*.jsonl` | Pre-decoded match data (all messages as JSON) |

## Decryption Code (Complete, Copy-Paste Ready)

```python
import hashlib, struct
from Crypto.Cipher import Blowfish

SALT = bytes.fromhex(
    "467c46341a2f5f1ea778c8d74b1ca88b459d33ab9685e0e3f378e7b493322ceb"
    "4036be8b31396d3330ddaa6d7031415efe903f60be8834c53299e3e8877c3a26"
)

def make_cipher(match_id: str):
    key = hashlib.md5(SALT + match_id.encode()).digest()
    return Blowfish.new(key, Blowfish.MODE_ECB)

def _swap4(b: bytes) -> bytes:
    return b[3::-1] + b[7:3:-1]

def decrypt_message(bf, ciphertext: bytes) -> bytes:
    out = bytearray()
    for i in range(0, len(ciphertext) - len(ciphertext) % 8, 8):
        out.extend(_swap4(bf.decrypt(_swap4(ciphertext[i:i+8]))))
    return bytes(out)

# Usage:
bf = make_cipher("b98d3255-16bd-4026-ad3d-6048142fd870")
plaintext = decrypt_message(bf, encrypted_content)
opcode = struct.unpack(">H", plaintext[:2])[0]  # 0x03E9 = 1001, etc.
payload = plaintext[2:]
```
