# XOR Encryption Key Derivation Analysis

Binary: GameKindred (Vainglory 4.13.4, arm64 Mach-O, 26 MB)

## Known Data

### Per-Match XOR Keys
| Match ID Prefix | XOR Key (8 bytes) |
|---|---|
| `ff8a37e1` | `7614a9b6d21ec669` |
| `8033dd36` | `c93d500d71cc89e2` |
| `b98d3255` | `8a5d03e715e03ec2` |

Full UUID for match 1: `ff8a37e1-8ff1-49f9-b70d-adc311f9aaf3`  
Player UUID: `b64d1fb9-8287-4702-bad4-2f77dd941d9a`  
JWT signature (32 bytes): `de5237b23dd44e61c3beabe3c64ed90edf1580001452ddbd407401b45bbebf3b`

### Protocol Sequence
1. **C->S**: 136 bytes plaintext (client hello: version 5, client IP, port)
2. **S->C**: 5 bytes plaintext (server ack)
3. **C->S**: 74 bytes XOR-encrypted (AUTH_TOKEN: 2B header + 40B auth + 32B zeros)
4. **S->C**: 106 bytes XOR-encrypted (SERVER_HELLO)
5. All subsequent messages: XOR-encrypted with same repeating 8-byte key

The trailing 32 zero bytes in the AUTH_TOKEN confirm the key is exactly 8 bytes repeating.

---

## Binary Analysis: XOR Code Locations

### 1. WebSocket Implementation (0x100520000 - 0x100522000)

The game uses **WebSocket (ws://)** for connections. Confirmed by:
- String `ws://%[^:/]:%d/%s` at `0x10141cabc`
- String `Sec-WebSocket-Key: x3JJHMbDL1EzLkh9GBhXDw==` at `0x10141cbd7`
- String `WebSocket-Version: 13` at `0x10141cc05`
- WebSocket frame parsing/construction code

**WebSocket XOR Loops Found:**

#### 4-Byte Frame Masking (Standard RFC 6455)
- **Loop at 0x100520ca4** and **0x100520d88**
- Key: 4 bytes from WebSocket frame header, stored on stack at `sp+56`
- Key index: `AND x10, x9, #3` (UBFM encoding `0xb340052a`)
- Pattern: `LDRB key_byte -> EOR -> STRB`
- This is standard WebSocket client-to-server frame masking

#### 8-Byte Static XOR
- **Loop at 0x10052099c**, **0x1005211e8**, **0x100521b3c** (three identical copies)
- Key source: `ADRP x10, 0x10115c000; ADD x10, x10, #720` -> address `0x10115c2d0`
- Key index: `AND x11, x8, #7` (instruction `0x9240050b`)
- Static data at `0x10115c2d0`: `12 34 56 78 00 00 00 00`
- This is in `__TEXT.__const` (read-only), suggesting a static obfuscation layer
- Guarded by encryption flag at `[x19, #88]`

**Key observation:** The code at `0x100520838` writes bytes `0x12, 0x34, 0x56` into the packet header when encryption is enabled. The static 8-byte key `0x1234567800000000` appears to be a framing/obfuscation marker, NOT the per-match encryption key.

### 2. Hash Function at 0x100015200 (MurmurHash-like)

- Uses constant `0x9e3779b9` (golden ratio, common in hash functions)
- EOR chain with shifts: 13, 8, 13, 12, 16, 5, 3, 10, 15
- Processes input 12 bytes at a time with fallthrough for remainder
- This is a **general-purpose hash** function, not an encryption routine

### 3. Xorshift PRNG at 0x10049a66c

- Three-state (x8, x9, x11) xorshift generator
- Shift constants: 43, 9, 8, 38, 23, 5, 35, 49, 11, 12, 18, 22
- Output in x2; appears twice (loop unrolled)
- Used for game randomness, **not related to encryption key derivation**
- Tested all permutations of UUID/player data as seeds: no matches

### 4. Permutation Table Initializer at 0x10054b9a0

- 256-iteration initialization loop (`CMP x11, #256` at `0x10054ba84`)
- LDRB/STRB with swap pattern
- Resembles S-box initialization but is actually a game engine lookup table

---

## Hash Derivation Testing

Exhaustively tested whether the XOR key is derived from known data via hash:

### Inputs Tested
- Match UUID (binary 16 bytes, string, no-dashes string, uppercase)
- Player UUID (same formats)
- JWT signature (32 bytes)
- Combinations: match+player, player+match, XOR of UUIDs
- Various prefixes/suffixes: `game:`, `match:`, `key:`, `encrypt:`, `vg:`, `semc:`

### Hash Functions Tested
| Algorithm | Result |
|---|---|
| MD5 (first 8 bytes) | No match |
| SHA-1 (all 8-byte windows) | No match |
| SHA-256 (first 8 bytes) | No match |
| HMAC-SHA256 (various keys) | No match |
| MurmurHash3-32 (seeds 0-255) | No match |
| MurmurHash3-32 (two concatenated) | No match |
| MurmurHash3-128 x64 (seeds 0-255) | No match |
| FNV-1a 64-bit | No match |
| xxHash64 (seeds 0-65535) | No match |
| xxHash32 (each half, seeds 0-65535) | No match |
| xxHash3-64 (seeds 0-65535) | No match |
| xxHash3-128 (seeds 0-255) | No match |
| CRC32 | No match |
| Xorshift64 (8 common parameter sets, up to 20 iterations) | No match |
| MurmurHash3 finalizer (mix64) | No match |
| Simple multiplicative hash | No match |

### XOR Relationship Testing
- UUID bytes XOR key: no recognizable pattern
- Key XOR static key (`12345678`): no recognizable pattern
- Key split into two 4-byte halves: no relationship between halves
- XOR of key halves: different across matches, no pattern

---

## Architecture Summary

```
Match Setup RPC (JSON-RPC over HTTPS)
  |
  v
Client receives: gameHost, proxyHost, port, matchId, sessionToken, [key??]
  |
  v
TCP/WebSocket connection to game server
  |
  v
WebSocket upgrade handshake (HTTP) <- possible key exchange here
  |
  v
136-byte plaintext client hello (version, IP, port)
  |
  v  
5-byte plaintext server ack
  |
  v
All subsequent frames: XOR encrypted with 8-byte per-match key
  (XOR applied WITHIN WebSocket binary message frames)
```

---

## Conclusions and Next Steps

### What We Know
1. The encryption is a **simple repeating 8-byte XOR cipher** (confirmed by 32 trailing zeros)
2. The key is **per-match** (different for each game session)
3. The key is established **before the first encrypted message** (client already knows it for AUTH_TOKEN)
4. The game uses **WebSocket** for the game server connection
5. The binary contains **no dedicated XOR encryption function** for the game protocol beyond WebSocket frame masking and the static `12345678` obfuscation
6. The key is **not derived from match UUID, player UUID, or JWT signature** via any standard hash

### Most Likely Key Source

The per-match XOR key is most likely:

1. **Sent in the match setup RPC response** -- The `update` JSON-RPC call that provides `gameHost` and `proxyHost` likely also includes the encryption key as an unlabeled or obfuscated field. The field name was not found as a string in the binary, suggesting it may be accessed by index/position rather than by name.

2. **Derived from the session token** using a non-standard or proprietary algorithm that we have not yet identified. The session token changes per match and is the right size for key material.

3. **Exchanged in the WebSocket upgrade handshake** -- The HTTP headers during the WebSocket upgrade could contain custom headers with key material.

### Recommended Next Steps

1. **Capture the full `update` RPC response** for all three matches and diff the payloads to find the 8-byte key or key material field.

2. **Capture the WebSocket upgrade HTTP handshake** to check for custom headers.

3. **Hook the XOR loop at `0x10052099c`** at runtime (via Frida or similar) to observe:
   - The actual key bytes loaded from `x10` (register at loop entry)
   - The encryption flag at `[x19, #88]`
   - The call stack to trace how the key was set

4. **Hook the 136-byte client hello construction** to see if key bytes are embedded in it.

5. **Monitor writes to the object at `x19` offsets** related to the connection to find when/where the key is stored.

---

## Key Binary Addresses

| Address | Description |
|---|---|
| `0x10052099c` | XOR encryption loop (8-byte key, static) |
| `0x100520ca4` | WebSocket 4-byte frame mask loop |
| `0x100520d88` | WebSocket 4-byte frame mask loop (alt path) |
| `0x10115c2d0` | Static XOR key data in `__TEXT.__const` (`12345678...`) |
| `0x100520980` | Encryption flag check `[x19, #88]` before XOR |
| `0x100520838` | Marker bytes `0x12, 0x34, 0x56` written to packet header |
| `0x100015200` | MurmurHash-like hash function (`0x9e3779b9`) |
| `0x10049a66c` | Xorshift PRNG (game randomness) |
| `0x10141cabc` | WebSocket URL format string `ws://%[^:/]:%d/%s` |
| `0x1013da58e` | String `gameHost` |
| `0x1013da597` | String `proxyHost` |
| `0x10141bdfc` | String `sessionToken` |
