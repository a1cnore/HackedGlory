# CFF0 Decryption & Balance Database Extraction

Complete technical writeup of how Vainglory's gameplay balance data was located, decrypted, and extracted from the iOS client (v4.13.4, build 147219).

---

## 1. Where the Data Lives

All gameplay balance data (hero stats, abilities, items, talents, game modes) is stored **client-side** in 942 proprietary binary files inside `Payload/GameKindred.app/Data/`. The data is NOT fetched from the server at runtime and NOT hardcoded in the main Mach-O binary.

The `Data/` directory contains 48,187 files organized by the first 2 hex characters of their content hash (directories `00/` through `FF/`). Files use two proprietary container formats:

| Format | Magic | Count | Purpose |
|--------|-------|-------|---------|
| CFF0 | `0x30464643` | 942 | Definition data (stats, abilities, configs) |
| RSC0 | `0x30435352` | 18,136 | Art assets (shaders, models, textures) |

Other files are audio (MP3/OGG), fonts (TrueType), and raw GPU textures.

### File identification

Each CFF0 file contains a `SYMB` section with a human-readable name wrapped in asterisks (e.g., `*Vox*`, `*Item_Sorrowblade*`). To find a specific entity:

```python
for each file in Data/:
    if file starts with "CFF0":
        find "*Name*" string in SYMB section
```

### Entity categories

| Category | Naming pattern | Count | Example |
|----------|---------------|-------|---------|
| Heroes | `*HeroName*` | ~67 | `*Vox*`, `*Catherine*` |
| Items | `*Item_Name*` | ~88 | `*Item_Sorrowblade*` |
| Talents | `*Talent_Hero_Name*` | ~189 | `*Talent_Vox_DeepDash*` |
| Game modes | `*GameMode_Type_Mode*` | ~59 | `*GameMode_5v5_Ranked*` |
| Item stores | `*ItemStore_Name*` | 5 | `*ItemStore_Standard_5v5*` |
| Manifests | `*KindredManifest*` etc. | ~10 | `*HeroManifest*` |
| Minions/NPCs | Various | ~50 | `*HF_Minion_Melee*` |
| Tutorials | `*Tutorial*`, `*Sidebar_*` | ~100 | `*Tutorial01*` |
| Effects/VFX | `*KindredEffects*` etc. | ~50 | `*KindredHUDEffects*` |

### Key files

| Entity | File path | Size |
|--------|-----------|------|
| Vox | `Data/41/4108595DD5669B9C76076DAAFF708F25` | 107 KB |
| Catherine | `Data/98/98B6FF5C43A2EB13831F4EAD75CD0886` | 137 KB |
| Item_Sorrowblade | `Data/FF/FF43B0229CE335A1C2398566D8E400F7` | 2.2 KB |
| Item_WeaponBlade | `Data/D1/D1A5F3CCB64928EA2B673AC8196ECAFC` | 2.0 KB |
| KindredManifest | `Data/03/03A640B504C2B4D7C8CBF3A04E189223` | — |
| HeroManifest | `Data/C4/C41CC38B5CEADF09048A3750D045E47B` | — |

---

## 2. CFF0 Binary Format

### Overall structure

```
CFF0 Header (64 bytes)
├── Block 1
│   ├── DEF0 (16 bytes) — type/version metadata
│   ├── INST (variable) — encrypted instance data
│   ├── PTCH (variable) — pointer relocation table
│   └── SYMB (32-48 bytes) — symbol name
└── Block 2
    ├── DEF0 (16 bytes)
    ├── INST (variable)
    ├── PTCH (variable)
    └── SYMB (32-48 bytes)
```

Every CFF0 file contains exactly 2 blocks. Both blocks share the same SYMB name. Block 1 uses DEF0 type `0x0804`, block 2 uses `0x0505`. These represent different aspects of the same entity (possibly client vs server, or gameplay vs visual).

### CFF0 header (64 bytes)

```
Offset  Size  Field
  0      4    Magic: "CFF0" (0x30464643 LE)
  4      4    Total file size (u32)
  8      4    Number of blocks (u32, always 2)
 12      4    Type code (u32, 0x0504 for definitions)
 16      4    Reserved (0)
 20      4    Block 1 offset (u32, always 64)
 24      4    Block 2 offset (u32)
 28-63  36    Reserved (zeros)
```

### DEF0 section (16 bytes)

```
Offset  Size  Field
  0      4    Magic: "DEF0" (0x30464544 LE)
  4      4    Section size (u32, always 16)
  8      4    Type code (u32: 0x0804 for block 1, 0x0505 for block 2)
  9      1    Key index (byte) — selects decryption key from key table
 12      4    Hash (u32, always 0xac68e79a)
```

**Critical:** Byte 9 of the DEF0 section (which is the second byte of the type code field) is the key index for INST decryption. For heroes (type `0x0804`), key_index = 8. For items and block 2 (type `0x0505`), key_index = 5.

### INST section (variable size)

```
Offset  Size  Field
  0      4    Magic: "INST" (0x54534e49 LE)
  4      4    Section size including header (u32)
  8      N    Encrypted data (N = section_size - 8)
```

The encrypted data contains the actual gameplay values (stats, ability parameters, etc.) in a packed binary struct format. See section 3 for decryption.

### PTCH section (variable size)

```
Offset  Size  Field
  0      4    Magic: "PTCH" (0x48435450 LE)
  4      4    Section size (u32)
  8      4    Entry count (u32)
 12      4    Reserved (0)
 16      N    Relocation entries (8 bytes each)
```

Each relocation entry is:
```
  0      4    Target offset within decrypted INST (u32) — where to write
  4      4    Value (u32) — packed as (source_offset << 32 | target_offset)
```

After INST decryption, the PTCH relocations fix up internal pointers: `*(decrypted + target_low) = decrypted_base + target_high`. This converts relative offsets into absolute pointers within the in-memory struct.

### SYMB section (32-48 bytes)

```
Offset  Size  Field
  0      4    Magic: "SYMB" (0x424d5953 LE)
  4      4    Section size (u32)
  8      4    Reserved (0)
 12      4    Name hash (u32)
 16      N    Name string, null-terminated (e.g., "*Vox*\0")
```

---

## 3. INST Decryption

### Discovery process

The decryption algorithm was found through Ghidra reverse engineering of the GameKindred arm64 Mach-O binary:

1. **Entry point:** Searched for the string `"TOK_ATOM typeinfo=%s field=%s value=%s"` — a debug format string in the text-based definition parser. Found at VA `0x1010a3334`.

2. **Dispatch function:** Traced callers to `FUN_1010a0d84` which checks if data starts with `DEF0` magic (`0x30464544`):
   ```c
   if (*data == 0x30464544) {
       FUN_1010a2e9c(data, ...);  // Binary CFF0 parser
   } else {
       FUN_1010a31d4(data, ...);  // Text TOK_ parser
   }
   ```

3. **Binary parser (`FUN_1010a2e9c`):** Iterates sections by magic bytes (`INST`, `PTCH`, `SYMB`), allocates memory, copies INST data via `memmove`, then calls the decryption function:
   ```c
   if (def0_byte9 - 1 < 0xf) {
       FUN_1010b8c4c(inst_copy, inst_size, KEY_TABLE[def0_byte9], inst_size);
   }
   ```

4. **Decryption function (`FUN_1010b8c4c`):** A simple XOR stream cipher:
   ```c
   void decrypt(uint32_t *data, uint32_t size, uint32_t key_param, uint64_t initial_state) {
       uint32_t *end = data + (size / 4);
       uint32_t master_key = jenkins_lookup3(&key_param, 4, initial_state);
       for (; data < end; data++) {
           uint32_t prev = (uint32_t)initial_state;
           initial_state = (uint64_t)*data;
           *data = master_key ^ ROL1(prev) ^ *data;
       }
   }
   ```

### Algorithm

**Input:**
- Encrypted INST data (bytes after the 8-byte INST header)
- Key index: byte 9 of the DEF0 section
- Data length: INST section size minus 8

**Steps:**

1. Look up the key value from the hardcoded key table using the key index:
   ```python
   KEY_TABLE = [
       0x6e0da13b, 0x50daa98f, 0x2d5ffa4f, 0x56c6c3eb,
       0xcad31ddd, 0x04f7be6a, 0xd5c4e961, 0x7fe2ef92,
       0xccbb8a6d, 0x19b6875b, 0x433b604c, 0xba7b1ee4,
       0x9dea872e, 0xa8c2e10a, 0xed30a2ff, 0x16a8f9a4,
   ]
   key_val = KEY_TABLE[key_index]
   ```

2. Derive the master XOR key using Jenkins lookup3 hash:
   ```python
   master_key = jenkins_lookup3(key_val_as_4_bytes, seed=data_length)
   ```

3. Decrypt each 32-bit word with XOR stream cipher:
   ```python
   state = data_length
   for each 4-byte word in data:
       encrypted = read_u32(word)
       prev_state = state
       state = encrypted
       decrypted = master_key ^ ROL1(prev_state) ^ encrypted
       write_u32(word, decrypted)
   ```

   Where `ROL1(x) = (x >> 31) | (x << 1)` (rotate left by 1 bit).

**Key index 0 means no encryption** (passthrough). This is used for RSC0 shader resources.

### Jenkins lookup3 hash function

The hash function (`FUN_100015208`) is Bob Jenkins' `hashlittle` / lookup3 with the golden ratio constant `0x9E3779B9`. It takes 3 parameters: `(data, length, seed)`.

In the text-based parser, it's called with seed `0x12345678` for type/field name hashing. For INST decryption, it's called with `seed = data_length`.

Full implementation: see `vgf/scripts/decrypt_cff0.py`.

### Verification

Decryption was verified against in-game screenshots of Vox's hero stats screen:

| Stat | Decrypted L1 | Per-Level | Computed L12 | In-Game L12 |
|------|-------------|-----------|--------------|-------------|
| Health | 667.0 | 126.1 | 2054.1 | **2054** ✓ |
| Energy | 200.0 | 24.0 | 464.0 | **464** ✓ |
| Weapon | 54.0 | 5.0 | 109.0 | **109** ✓ |
| Armor | 25.0 | 4.546 | 75.0 | **75** ✓ |
| Shield | 20.0 | 3.182 | 55.0 | **55** ✓ |
| Range | 5.8 | — | — | **5.8** ✓ |
| Move Speed | 3.8 | — | — | **3.8** ✓ |

### What the server controls vs what's client-side

**Client-side (in CFF0 assets):** All gameplay balance — hero stats, ability values, item stats, per-level scaling, buff/debuff parameters, game mode settings.

**Server-side (via JSON-RPC):** Economy/progression manifests — `getBuffManifest`, `getForgeManifest`, `getSkinManifest`, `getRewardsManifest`, `getTalentsData` (which talents a player has unlocked, not the talent stats themselves).

---

## 4. Decrypted Data Layout

### Hero struct (Block 0, DEF0 type 0x0804)

After decryption, the INST data for heroes is a packed struct. Base stats are at fixed offsets, consistent across all heroes:

```
Offset  Type    Field
  0-123          Internal pointers/metadata (zeros after relocation)
  124    float   health_base
  128    float   health_per_level
  132    float   health_regen
  136    float   health_regen_per_level
  140    float   energy_base
  144    float   energy_per_level
  148    float   energy_regen
  152    float   energy_regen_per_level
  156    float   weapon_base
  160    float   weapon_per_level
  164-168        padding/unused
  172    float   armor_base
  176    float   armor_per_level
  180    float   shield_base
  184    float   shield_per_level
  188-192        padding/unused
  196    float   range
  200    float   atk_speed_ratio (1.0 = 100%)
  204    float   atk_speed_per_level
  208    float   (unknown, usually 1.0)
  212    float   (unknown, usually 0.3)
  220    float   perk_crystal_ratio
  224    float   (unknown, usually 18.0)
  232    float   move_speed
  236+           ability sub-objects (variable layout)
```

**Level 12 computation:** `stat_L12 = stat_base + stat_per_level * 11`

### Item struct (Block 0, DEF0 type 0x0804)

Items use a different struct layout:

```
Offset  Type    Field
  24    uint32  tier (1=T1 basic, 2=T2 mid, 3=T3 final)
  36    uint32  recipe_cost (gold to combine, excluding components)
  40    uint32  sell_value (gold when selling, typically ~50% of total cost)
```

Total cost = sell_value × 2 (approximate). Actual item stat bonuses (weapon power, crystal power, armor, etc.) are in sub-objects referenced by PTCH relocations.

### Ability data structure

Abilities are stored as a tree of sub-objects linked by PTCH-relocated pointers:

```
Hero struct
└── Ability definition (pointed to by PTCH)
    └── Variable array (pointer array of 3-15 entries)
        ├── AbilityVariable[0] (52 bytes)
        ├── AbilityVariable[1] (52 bytes)
        └── ...
```

Each `AbilityVariable` (52 bytes) stores per-level scaling:

```
Offset  Type    Field
  0      ptr    Child data pointer (metadata/sub-values)
  4      float  base_value (Level 1 value)
  8      float  delta (change per level upgrade)
  12     float  overdrive_bonus (extra change at max level)
  16-51          Additional parameters/flags
```

**Per-level formula:**
```
Level N = base + delta × (N - 1)                    for N = 1 to max-1
Level max = base + delta × (max - 1) + overdrive    for N = max
```

Where max = 5 for A/B abilities, 3 for ultimates.

**Variable classification heuristics:**
- `delta < 0` → cooldown (decreases per level)
- `delta > 0 and base > 10` → energy_cost (increases per level)
- `delta > 0 and base ≤ 10` → damage or scaling value
- `delta = 0 and overdrive ≠ 0` → constant with overdrive-only change
- `delta = 0 and overdrive = 0 and base ≤ 1` → ratio (e.g., crystal/weapon ratio)
- `delta = 0 and overdrive = 0` → constant

**Ability group discovery:**

Ability variable arrays are found by searching for "pointer arrays" in the PTCH relocation table — sequences of 3+ consecutive 4-byte-spaced source offsets that each point to a different target. Each such array represents one ability's set of variables.

Verified example (Vox Ability A — Sonic Zoom):

| Variable | Base | Delta | Overdrive | L1 | L2 | L3 | L4 | L5 |
|----------|------|-------|-----------|----|----|----|----|-----|
| Cooldown | 7.0 | -0.5 | -1.0 | 7 | 6.5 | 6 | 5.5 | **4** |
| Energy Cost | 40.0 | 5.0 | 0.0 | 40 | 45 | 50 | 55 | 60 |
| Damage Ratio | 0.5 | 0.1 | 0.1 | 50% | 60% | 70% | 80% | **100%** |

---

## 5. Key Binary Addresses (GameKindred arm64)

| Address | Function | Purpose |
|---------|----------|---------|
| `0x1010a0d84` | Binary/text dispatcher | Checks DEF0 magic, routes to binary or text parser |
| `0x1010a2e9c` | Binary CFF0 parser | Iterates INST/PTCH/SYMB, calls decrypt, applies relocations |
| `0x1010b8c4c` | INST decryption | Jenkins XOR stream cipher |
| `0x100015208` | Jenkins lookup3 hash | Used for type/field hashing and key derivation |
| `0x1010a3208` | Text TOK_ parser | Dispatches TOK_ATOM/TYPE/ARRAY/RAW |
| `0x1010a32f4` | TOK_ATOM handler | Parses atom values (int/float/bool) |
| `0x1010a14fc` | Definition loader | Loads .def files from build:// paths |
| `0x1010a15e0` | Symbol loader | Loads definitions by `*Name*` lookup |
| `0x1010a0e0c` | Definition lookup | Finds loaded definitions in registry |
| `0x1010a3954` | Type registration | Registers types with name, size, alignment |
| `0x101873140` | Key table (data) | 16 × 4-byte decryption key values |
| `0x13cd1e8` | Blowfish P-array (data) | Standard template — used for match traffic only |

---

## 6. Texture Assets

### Texture container format

Non-RSC0, non-CFF0 files in `Data/` with power-of-2 dimensions are texture containers:

```
Offset  Size  Field
  0      4    Total file size (u32)
  4      4    Mipmap count (u32)
  8      4    Reserved (1)
 12      4    Format code (u32)
 16      4    Width (u32, power of 2)
 20      4    Height (u32, power of 2)
 24      4    Reserved (0)
 28      N    Mipmap data (format-dependent)
```

### Texture formats

| Code | Format | Encrypted | Web-ready |
|------|--------|-----------|-----------|
| 7 | PVRTC 4bpp / custom GPU | No | No (needs PVR decoder) |
| 9 | ETC1 / custom GPU | No | No |
| 17 | WebP (lossy, custom header) | No | Yes (extract RIFF chunk) |
| 18 | WebP (lossy, custom header) | No | Yes (extract RIFF chunk) |
| 20 | ASTC 4×4 | No | No |

**Texture counts:** 2,706 total — 998 at 512×512, 581 at 1024×1024, 261 at 2048×2048.

**Textures are NOT encrypted.** They use plain container headers with raw or WebP-compressed pixel data.

### WebP extraction

For format 17/18 textures, the largest mipmap is a standard RIFF/WEBP chunk starting at offset 28+:

```python
riff_offset = data.find(b'RIFF', 28)
riff_size = read_u32(data, riff_offset + 4) + 8
webp_data = data[riff_offset : riff_offset + riff_size]
```

### RSC0 art files

RSC0 files containing character art (shaders, materials) embed a CFF0 container at offset 32 with `SHD0` sections instead of `INST`. These contain compiled Metal GPU shader bytecode. SHD0 sections use key_index=0 (no encryption).

### Key atlas textures

| Content | Resolution | File |
|---------|------------|------|
| Ability icon atlas | 2048×2048 | `Data/C3/C3406D67DA1A...` |
| Item icon atlas | 2048×2048 | `Data/5B/5BA258193786...` |
| Hero splash art | 1024×1024 / 2048×2048 | Various (WebP format 17/18) |
| Hero HUD portraits | 512×512 | Various (PVRTC format 7) |

---

## 7. Tools Created

| Tool | Path | Purpose |
|------|------|---------|
| `decrypt_cff0.py` | `vgf/scripts/` | Core CFF0 decryption library |
| `extract_balance_db.py` | `vgf/scripts/` | Full balance database extraction to JSON |
| `extract_textures.py` | `vgf/scripts/` | Texture extraction (WebP + PVR) |
| `slice_atlas.py` | `vgf/scripts/` | Icon atlas slicer |
| `GhidraCFF0Analysis.java` | `vgf/scripts/` | Ghidra script — initial RE discovery |
| `GhidraCFF0Deep.java` | `vgf/scripts/` | Ghidra script — deep decompilation |

### Output files

| File | Path | Content |
|------|------|---------|
| Balance DB | `vgf/reports/generated/vainglory_balance_db.json` | 576 KB, 30K lines — all heroes, items, talents, game modes |
| Ghidra analysis | `vgf/reports/generated/cff0_analysis.txt` | Initial token parser and definition system analysis |
| Ghidra deep | `vgf/reports/generated/cff0_deep.txt` | Deep decompilation of 19 key functions |
| Binary parser | `vgf/reports/generated/cff0_binary_parser.txt` | Binary CFF0 parser decompilation |
| Decryption code | `vgf/reports/generated/cff0_decrypt.txt` | Decryption function + key table dump |
| Hero assets | `vgf/reports/hero_assets_inventory.md` | Texture asset inventory |

---

## 8. Balance Database Summary

### Extraction results

- **67 heroes** with base stats (health, energy, weapon, armor, shield, range, move speed, attack speed)
- **55 heroes** with full structured ability data (1,761 ability variables total)
- **88 items** with tier, recipe cost, sell value
- **189 talents** with raw float data
- **59 game modes** with configuration data
- **0 errors** across 942 files

### Hero stat ranges (all 67 heroes)

| Stat | Min | Max | Example Min | Example Max |
|------|-----|-----|-------------|-------------|
| Health L1 | 636 | 892 | Petal | Phinn |
| Health L12 | 1983 | 2781 | Petal | Phinn |
| Energy L1 | 0 | 950 | Alpha (uses alt) | Varya |
| Weapon L1 | 0 | 95 | Celeste/mages | Leo/Phinn |
| Armor L1 | 20 | 35 | various | captains |
| Shield L1 | 20 | 25 | most heroes | captains |
| Range | 1.5 | 6.6 | Catherine | SAW |
| Move Speed | 3.4 | 4.1 | Maaya | Catherine/Grace |

---

## 9. Reproducing the Extraction

```bash
# 1. Decrypt a single CFF0 file
python3 vgf/scripts/decrypt_cff0.py --floats Payload/GameKindred.app/Data/41/4108595DD5669B9C76076DAAFF708F25

# 2. Extract full balance database
python3 vgf/scripts/extract_balance_db.py Payload/GameKindred.app/Data reports/generated/vainglory_balance_db.json

# 3. Extract WebP textures (256px+)
python3 vgf/scripts/extract_textures.py Payload/GameKindred.app/Data reports/extracted_assets/textures --webp-only --min-size 256

# 4. Slice icon atlases
python3 vgf/scripts/slice_atlas.py

# 5. Run Ghidra analysis (requires Ghidra project with GameKindred imported)
analyzeHeadless ~/ghidra_projects VaingloryRE \
  -process GameKindred \
  -scriptPath vgf/scripts \
  -postScript GhidraCFF0Analysis.java \
  -noanalysis
```
