# Adding Hidden Heroes to the Vainglory HeroManifest

## Problem

The Vainglory iOS client (v4.13.4, build 147219) contains CFF0 definition files for **67 heroes**, but the `*HeroManifest*` CFF0 file only lists **61 heroes**. The missing heroes have full gameplay data (stats, abilities, per-level scaling) but never appear in the hero selection grid because they were never added to the manifest before the game went into Community Edition.

### Missing heroes (have CFF0 data but absent from manifest)

| Hero | CFF0 exists | In manifest | Notes |
|------|:-----------:|:-----------:|-------|
| Maaya | Yes | No | Unreleased hero, move speed 3.4 (slowest), range 6.4 |
| Hero009 | Yes | No | Codename only |
| Hero010 | Yes | No | Codename only |
| Hero016 | Yes | No | Codename only |
| Hero034 | Yes | No | Codename only |
| Hero049 | Yes | No | Codename only |
| Hero050 | Yes | No | Codename only |
| Hero051 | Yes | No | Codename only |
| Hero052 | Yes | No | Codename only |
| Hero057 | Yes | No | Codename only |
| HeroPLU | Yes | No | Codename only |
| Kraken_RaidBoss | Yes | No | PVE boss, not a playable hero |
| FortressMinion | Yes | No | NPC pet, not a playable hero |

### Heroes already in manifest (61 total)

Amael, Adagio, Alpha, Anka, Ardan, Baptiste, Baron, Blackfeather, Caine, Catherine, Celeste, Churnwalker, Flicker, Fortress, Glaive, Grace, Grumpjaw, Gwen, Idris, Inara, Ishtar, Joule, Karas, Kensei, Kestrel, Kinetic, Koshka, Krul, Lance, Leo, Lorelai, Lyra, Magnus, Malene, Miho, Ozo, Petal, Phinn, Reim, Reza, Ringo, Rona, SAW, Samuel, Sanfeng, Sayoc, Shin, Silvernail, Skaarf, Skye, Taka, Tony, Varya, Viola, Vox, Warhawk, Yates, Ylva + 3 unnamed Hero entries + 1 duplicate Lance entry.

---

## HeroManifest CFF0 Structure

### File location

`Payload/GameKindred.app/Data/C4/C41CC38B5CEADF09048A3750D045E47B`

SYMB name: `*HeroManifest*`

### Layout overview

The CFF0 file contains 2 blocks (standard for all definition files):

| Block | DEF0 type | INST size | PTCH entries | Purpose |
|-------|-----------|-----------|:------------:|---------|
| 0 | 0x0804 | 18,888 bytes | 794 | Client-side struct (hero grid config) |
| 1 | 0x0505 | 23,032 bytes | 794 | Server-side struct (wider layout) |

Both blocks must be modified in sync — they contain the same heroes with different struct layouts.

### Block 0 structure (0x0804)

```
Offset 0x0000 - 0x00F7: Pointer array (62 entries x 4 bytes)
  [0]:  meta-pointer → 0x0004 (points to start of array)
  [1]:  ptr → 0x00FC  (hero entry: Amael)
  [2]:  ptr → 0x021C  (hero entry: Adagio)
  ...
  [61]: ptr → 0x4854  (hero entry: Lance duplicate)

Offset 0x00FC - end:    Hero entry data (61 entries, variable size)
```

### Block 1 structure (0x0505)

Same logical structure, different sizes:
- Pointer array: 62 entries x **8 bytes** (offsets 0x0000 - 0x01E8)
- Hero entries follow at 0x01F8+

### Hero entry format (Block 0)

Each hero entry is **276-348 bytes** with this layout:

```
Offset  Size  Content
+0x00   4     ptr → *HeroName* string (SYMB-style, e.g. "*Ylva*")
+0x04   4     uint32: always 1
+0x08   4     ptr → display name string (e.g. "Ylva")
+0x0C   4     ptr → CHAR_INFO_{NAME}_NAME localization key
+0x10   4     ptr → CHAR_INFO_{NAME}_LORE localization key
+0x14   4     ptr → CHAR_INFO_{NAME}_DESC localization key
+0x18   4     ptr → CHAR_INFO_{NAME}_ROLE localization key
+0x1C   4     ptr → role category string (e.g. "Warrior")
+0x20   4     ptr → shared string (points to Amael block at 0x01E9 in 33 heroes)
+0x24   4     ptr → CHAR_INFO_{NAME}_TAGLINE key
+0x28   4     ptr → CHAR_INFO_{NAME}_PROTIPS key
+0x2C   48    uint32 config values (colors, icon indices, flags)
        ...   Includes RGB color at +0x30 (3x uint32: R, G, B, 0-255)
        ...   Icon atlas indices, sorting order, role type enum
+0x78+  var   Null-terminated strings (pointed to by the pointers above)
```

Each entry has exactly **12 PTCH relocations** that wire up the internal pointers:

| PTCH # | Entry offset | Target | Description |
|--------|-------------|--------|-------------|
| 0 | +0x00 | string area | `*HeroName*` string |
| 1 | +0x08 | string area | Display name |
| 2 | +0x0C | string area | `CHAR_INFO_*_NAME` |
| 3 | +0x10 | string area | `CHAR_INFO_*_LORE` |
| 4 | +0x14 | string area | `CHAR_INFO_*_DESC` |
| 5 | +0x18 | string area | `CHAR_INFO_*_ROLE` |
| 6 | +0x1C | string area | Role category |
| 7 | +0x20 | 0x01E9 | Shared tagline ref (33 heroes share this) |
| 8 | +0x24 | string area | `CHAR_INFO_*_TAGLINE` |
| 9 | +0x28 | string area | `CHAR_INFO_*_PROTIPS` |
| 10 | +0xD4 | +0xDC | Internal sub-pointer 1 |
| 11 | +0xDC | +0xE0 | Internal sub-pointer 2 |

### Ylva entry reference (template for Maaya)

```
43b0: 00 00 00 00 01 00 00 00  00 00 00 00 00 00 00 00  (ptrs + flag)
43c0: 00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  (more ptrs)
43d0: 00 00 00 00 00 00 00 00  00 00 00 00 02 00 00 00  (config start)
43e0: 46 00 00 00 14 00 00 00  0a 00 00 00 46 00 00 00  R=70 G=20 B=10
43f0: ff 00 00 00 00 00 00 00  12 00 00 00 ff 00 00 00  (icon/atlas)
4400: ff 00 00 00 00 00 00 00  4e 00 00 00 ff 00 00 00  (more config)
4410: 01 00 00 00 02 00 00 00  00 00 00 00 02 00 00 00  (flags)
4420: 01 00 00 00 00 00 00 00                            (flags)
4428: "*Ylva*\0"
442f: "Ylva\0"
4434: "CHAR_INFO_YLVA_NAME\0"
4448: "CHAR_INFO_YLVA_LORE\0"
445c: "CHAR_INFO_YLVA_DESC\0"
4470: "CHAR_INFO_YLVA_ROLE\0"
4484: "\0\0\0\0..." (sub-ptr area)
4490: "Lane\0"
4495: "CHAR_INFO_YLVA_TAGLINE\0"
44ac: "CHAR_INFO_YLVA_PROTIPS\0"
```

---

## Encryption/Decryption

### Algorithm (from `vgf/scripts/decrypt_cff0.py`)

The INST section uses a Jenkins lookup3 XOR stream cipher:

```python
key_val = KEY_TABLE[key_index]  # key_index from DEF0 byte 9
master_key = jenkins_lookup3(key_val_as_4_bytes, seed=data_length)

state = data_length
for each 4-byte word:
    encrypted = read_u32(word)
    prev_state = state
    state = encrypted
    decrypted = master_key ^ ROL1(prev_state) ^ encrypted
```

### Re-encryption (reverse operation)

```python
state = data_length
for each 4-byte word:
    plaintext = read_u32(word)
    prev_state = state
    encrypted = master_key ^ ROL1(prev_state) ^ plaintext
    state = encrypted  # feedback uses ciphertext, not plaintext
    write_u32(word, encrypted)
```

Key difference: during decryption, `state` tracks the **ciphertext** (input). During encryption, `state` must also track the **ciphertext** (output), not the plaintext.

### Key table

Block 0 (type 0x0804): `key_index = 8` → `KEY_TABLE[8] = 0xccbb8a6d`
Block 1 (type 0x0505): `key_index = 5` → `KEY_TABLE[5] = 0x04f7be6a`

---

## Implementation Tasks

### Task 1: Write `encrypt_inst()` function

Add to `vgf/scripts/decrypt_cff0.py`:

```python
def encrypt_inst(data: bytes, key_index: int, data_len: int) -> bytes:
    """Re-encrypt decrypted INST data for CFF0 repacking."""
```

The encryption is the same XOR operation as decryption but with output-feedback instead of input-feedback on the `state` variable.

**Verification**: decrypt a known file, re-encrypt it, compare to original. Must be byte-identical.

### Task 2: Write `patch_hero_manifest.py` script

Script that:

1. Reads the HeroManifest CFF0 file
2. Decrypts both blocks
3. For each block:
   a. Clones an existing hero entry (Ylva is a good template — smallest entry, similar to Maaya)
   b. Replaces all `Ylva`/`YLVA` strings with `Maaya`/`MAAYA`
   c. Adjusts the config values (RGB color — Maaya should have a distinct color)
   d. Appends the new entry to the INST data
   e. Adds a new pointer to the pointer array (extends by 4 or 8 bytes)
   f. Generates the 12 new PTCH entries for the cloned entry
   g. Updates the pointer array count
4. Re-encrypts both blocks
5. Rebuilds the CFF0 container (updates headers, section sizes)
6. Writes the patched file

### Task 3: Rebuild CFF0 container

After modifying the INST data, the CFF0 file structure must be updated:

- INST section size header (bytes 4-7 of INST section)
- PTCH entry count (byte 8-11 of PTCH section)
- PTCH section size header
- CFF0 total file size (bytes 4-7 of CFF0 header)
- Block 2 offset in CFF0 header (byte 24-27) — shifts when block 1 grows

### Task 4: Replace in IPA and re-sign

1. Copy the patched CFF0 file to the IPA bundle at `Data/C4/C41CC38B5CEADF09048A3750D045E47B`
2. Update all copies:
   - `vgf/Payload/GameKindred.app/Data/C4/...`
   - `IPAPatch-Vainglory/Temp/Payload/GameKindred.app/Data/C4/...`
   - `vg_server/patched/Payload/GameKindred.app/Data/C4/...`
3. Re-sign the IPA with IPAPatch (the normal build flow handles this)

### Task 5: Handle missing assets (graceful fallback)

Maaya likely has no:
- Hero portrait texture (the HUD icon in hero select)
- Splash art
- 3D model for the hero select screen
- Skin textures

The game engine should show a fallback/placeholder for missing textures. If it crashes instead, we may need to:
- Find which texture paths the hero select screen loads
- Copy an existing hero's textures and rename them for Maaya
- OR: point Maaya's art references to an existing hero's assets in the manifest entry

### Task 6: Server-side talent data (optional)

The `getTalentsData` RPC response doesn't include Maaya talents. To prevent UI issues in talent-based modes (ARAL/Blitz), add to `vg_interceptor.py`:

```python
# In getTalentsData response handler:
if "maaya_rare" not in rv:
    rv["maaya_rare"] = {"level": 1, "xp": 0}
    rv["maaya_epic"] = {"level": 1, "xp": 0}
    rv["maaya_legendary"] = {"level": 1, "xp": 0}
```

This is only needed if the game crashes or hides Maaya when talents are missing.

---

## Risks and Unknowns

1. **Missing art assets**: The hero select grid may crash or show broken visuals if Maaya's textures don't exist. Need to test and potentially provide placeholder textures.

2. **Ability/animation data**: The Maaya CFF0 has ability definitions, but the ability VFX and animations may not exist in the art bundle. The hero might be playable with invisible abilities.

3. **Block 1 sync**: Both CFF0 blocks must be modified consistently. Block 1 has wider struct entries (8-byte pointers vs 4-byte) and different offsets. A bug in block 1 could cause server-side issues.

4. **Hero ID collision**: The game engine assigns internal IDs based on manifest order. Adding a hero changes the order and could affect saved data or match protocols. Appending to the end (after the existing Lance duplicate) is safest.

5. **`*Maaya*` CFF0 must also be loadable**: The manifest references `*Maaya*` by SYMB name. The engine calls `FUN_1010a0e0c("*Maaya*", ...)` to find and load the hero's definition data. This CFF0 file already exists in the Data directory, so it should load automatically.

6. **The codename-only heroes** (Hero009 etc.) likely have incomplete or stub ability data. Maaya is the most complete unreleased hero based on the ability variable analysis. Start with Maaya before attempting others.

---

## File References

| File | Purpose |
|------|---------|
| `vgf/Payload/.../Data/C4/C41CC38B5CEADF09048A3750D045E47B` | HeroManifest CFF0 (modify) |
| `vgf/scripts/decrypt_cff0.py` | CFF0 decryption library (add encrypt_inst) |
| `vgf/scripts/patch_hero_manifest.py` | New script to create |
| `vgf/reports/generated/vainglory_balance_db.json` | Maaya stats reference |
| `vgf/reports/cff0_decryption_and_balance_extraction.md` | CFF0 format documentation |
| `vgf/mitm/vg_interceptor.py` | Talent data injection (optional) |
