# Vainglory CE Gate Analysis — Complete Findings & Next Steps

## Summary

The Vainglory Community Edition uses a single master gate function `FUN_100131560` (VA `0x100131560`) that hardcodes `return 1`. This function is called by **164 BL instructions** across **92 unique functions** to disable features throughout the game. When it returns 1 (CE mode), features are hidden or skipped. When 0 (full game), everything is enabled.

## Current Status — What's Working

### Sidebar Tabs (Layer 6)
| Tab | Index | Status | Method |
|-----|-------|--------|--------|
| HOME | 0 | ✅ Always registered | Native |
| BAG (Heroes) | 1 | ✅ Always registered | Native |
| ACADEMY | 2 | ✅ Created + registered at runtime | dylib hook in `hook_refresh` |
| PARTY | 3 | ✅ Registered at runtime | dylib hook in `hook_refresh` |
| SOCIAL | 4 | ✅ Registered at runtime | dylib hook in `hook_refresh` |

### BAG Sub-Tabs (Layer 6)
| Tab | Status | Method |
|-----|--------|--------|
| TROPHIES (Season) | ✅ Created + registered at runtime | dylib hook in `hook_refresh` |

### Progression UI (Layer 8 hooks)
| Feature | Status | Hook |
|---------|--------|------|
| Ranked 5v5 tab in profile | ✅ | `profile_ranked` (g_base+0x14752f8) |
| Ranked 3v3 tab in profile | ✅ | `profile_ranked` |
| Stats tab in profile | ✅ | `profile_ranked` |
| Social panel features | ✅ | `social_feat` (g_base+0x1471108) |
| Skill tier display | ✅ | `skill_tier` (g_base+0x147a1d8) |
| Data fetch (guild/team) | ✅ | `data_fetch` (g_base+0x145c170) |
| Tab init | ✅ | `tab_init` (g_base+0x1469478) |
| Market tabs | ✅ | `market_tabs` (g_base+0x147a120) |

### Other Hooks (Layers 1-5, 7)
| Layer | Feature | Status |
|-------|---------|--------|
| 1 | Feature flags (leaderboards, chat, etc.) | ✅ |
| 2 | Leaderboard button visibility | ✅ |
| 3 | setTabVisible — block all hide calls | ✅ |
| 4 | Trophy panels + profile data | ✅ |
| 5 | Profile avatar → full profile panel | ✅ |
| 7 | Guest gate bypass | ✅ |

---

## The CE Master Gate — `FUN_100131560`

```
VA: 0x100131560
File offset: 0x131560
Instructions: MOV W0, #1; RET  (0x52800020; 0xd65f03c0)
Called by: 164 BL instructions in 92 functions
__DATA fptr: NONE (all callers use direct BL)
```

### Why We Can't Patch It Directly
- **__TEXT patching via vm_protect** crashes the app (code signing enforcement on the VM)
- **No __DATA fptr** exists — it's never called through a function pointer table
- **Binary patch** (`MOV W0,#0`) causes crash — too many code paths activate simultaneously, some depend on missing CE infrastructure

### Hookable Callers (11 of 92 have __DATA fptrs)

| Function | fptr | Calls | Status | Category |
|----------|------|-------|--------|----------|
| `FUN_100222878` | `g_base+0x14752f8` | 3 | ✅ HOOKED | Profile ranked tabs |
| `FUN_10020a500` | `g_base+0x1471108` | 1 | ✅ HOOKED | Social features |
| `FUN_10025129c` | `g_base+0x147a1d8` | 1 | ✅ HOOKED | Skill tier |
| `FUN_100168220` | `g_base+0x145c170` | 2 | ✅ HOOKED | Data fetch |
| `FUN_1001e115c` | `g_base+0x1469478` | 2 | ✅ HOOKED | Tab init |
| `FUN_10024e4a4` | `g_base+0x147a120` | 4 | ✅ HOOKED | Market tabs |
| `FUN_1001e0550` | `g_base+0x1469468` | 1 | Available | Tab controller |
| `FUN_1001f4efc` | `g_base+0x146cfb0` | 2 | Available | Home panel text |
| `FUN_10028c348` | `g_base+0x147f110` | 1 | Available | Party/matchmaking |
| `FUN_1002da05c` | `g_base+0x14890f0` | 1 | ⚠️ SIMD sig | Progression visibility |
| `FUN_1002e76d8` | `g_base+0x148a780` | 1 | ⚠️ SIMD sig | Progression visibility |

The two SIMD-signature functions (`prog_vis1`, `prog_vis2`) crash because their first parameter is passed in SIMD register `s0`/`v0`, which C function hooks clobber.

---

## All 92 Gate Callers by Feature Area

### Profile & Ranked (4 functions, ~8 gate calls)
| Function | Hookable | What it gates |
|----------|----------|---------------|
| `FUN_100222878` | ✅ HOOKED | Ranked 5v5/3v3/stats tab visibility in profile |
| `FUN_100229634` | No | Profile data display |
| `FUN_100212ff8` | No | Previous season ranked data (`prev3v3RankedDataEloBucket`) |
| `FUN_100227610` | No | Profile panel layout sizing |

### Sidebar & Tab Controller (10 functions, ~14 gate calls)
| Function | Hookable | What it gates |
|----------|----------|---------------|
| `FUN_1001e0550` | Available | Tab controller — returns early when gated |
| `FUN_1001e115c` | ✅ HOOKED | Tab init — sets empty string when gated |
| `FUN_1001e03b4` | No | Tab content loading |
| `FUN_1001f2120` | No | Panel sub-component init |
| `FUN_1001f4d08` | No | Home panel feature |
| `FUN_1001f4efc` | Available | Home panel text (shows "TAP TO LOGIN" when gated) |
| `FUN_1001f564c` | No | Heroes/Bag constructor sub-init |
| `FUN_1001f59e8` | No | Heroes/Bag constructor — gates sub-panel creation |
| `FUN_1001f9230` | No | Panel feature at +0x1630 |
| `FUN_1001fbe40` | No | Panel data loading |

### Menu & Main Init (1 function, 4 gate calls)
| Function | What it gates |
|----------|---------------|
| `FUN_1001fd570` | **Main menu constructor**: Academy panel creation, Academy sidebar registration, Social panel mode, Social sidebar registration |

### Market & Shop (7 functions, ~14 gate calls)
| Function | Hookable | What it gates |
|----------|----------|---------------|
| `FUN_10024e4a4` | ✅ HOOKED | Market panel tab configuration |
| `FUN_100248d3c` | No | Market constructor (6 calls!) — most gated single function |
| `FUN_10024bf9c` | No | Market sub-panel visibility |
| `FUN_10024e69c` | No | Market item display |
| `FUN_100255bbc` | No | Market UI layout |
| `FUN_100257ca8` | No | Market element visibility (0xfffffffb pattern) |
| `FUN_10025c064` | No | Market feature |

### Heroes & Skins (7 functions)
| Function | Hookable | What it gates |
|----------|----------|---------------|
| `FUN_10020a500` | ✅ HOOKED | Social/hero feature — calls inner function |
| `FUN_10002f340` | No | Hero card data |
| `FUN_10002f5f4` | No | Hero card data |
| `FUN_10002fa74` | No | Hero card data (2 calls) |
| `FUN_100209f00` | No | Hero panel feature |
| `FUN_100247d2c` | No | Hero/market integration |
| `FUN_1002e6318` | No | Hero skin/card display |

### Data Fetch & Sync (14 functions, ~18 gate calls)
| Function | Hookable | What it gates |
|----------|----------|---------------|
| `FUN_100168220` | ✅ HOOKED | Guild/team data fetch at +0x278 |
| `FUN_10025129c` | ✅ HOOKED | Skill tier data |
| `FUN_100160e54` | No | **13 gate calls** — massive data processing function |
| `FUN_1001630a0` | No | Data sync (2 calls) |
| `FUN_1001633f4` | No | Data init |
| `FUN_10016426c` | No | Achievement/quest check |
| `FUN_100164e98` | No | Data flag |
| `FUN_100165040` | No | Data processing |
| `FUN_100166918` | No | Data event |
| `FUN_100166b08` | No | Data event (3 calls) |
| `FUN_1002268e4` | No | Profile data |
| `FUN_1000493d0` | No | Core data (2 calls) |
| `FUN_100078bd0` | No | Core data fetch |
| `FUN_1003284b4` | No | Spectate/replay data |

### Social & Friends (4 functions)
| Function | What it gates |
|----------|---------------|
| `FUN_100165860` | Social presence feature |
| `FUN_10028b7e0` | Friend list feature |
| `FUN_10022a27c` | Guild panel |
| `FUN_10022a690` | Guild panel |

### Party & Matchmaking (7 functions)
| Function | Hookable | What it gates |
|----------|----------|---------------|
| `FUN_10028c348` | Available | Party/matchmaking feature |
| `FUN_10028bd98` | No | Party feature |
| `FUN_10024e69c` | No | Party UI |
| `FUN_100251990` | No | Party sub-panel (2 calls) |
| `FUN_100252a20` | No | Party feature |
| `FUN_100320e24` | No | Queue/play mode (2 calls) |
| `FUN_1001fd570` | No | Party callback |

### Queue & Play (4 functions)
| Function | What it gates |
|----------|---------------|
| `FUN_10030f984` | Queue mode selection (2 calls) |
| `FUN_100312f24` | Queue init |
| `FUN_100321770` | Play panel layout (4 calls, skill tier threshold <5) |
| `FUN_10032b458` | Play feature (returns early when gated) |

### UI Layout / Visibility (9 functions)
| Function | Hookable | Pattern |
|----------|----------|---------|
| `FUN_100222878` | ✅ HOOKED | `& 0xfffffffb` on profile offsets |
| `FUN_100227d90` | No | `& 0xfffffffb` — element hide |
| `FUN_10024bf9c` | No | Market visibility |
| `FUN_100252d04` | No | Party UI visibility |
| `FUN_100257708` | No | Market element at +0x3724 |
| `FUN_10025d500` | No | Panel visibility (3 calls) |
| `FUN_1002a1e94` | No | UI element hide |
| `FUN_1002da05c` | ⚠️ SIMD | Reward/chest element at +0x1754 |
| `FUN_1002e76d8` | ⚠️ SIMD | Reward/chest element at +0x1754 |

### Reward / Chest / Forge (6 functions)
| Function | What it gates |
|----------|---------------|
| `FUN_1002d8918` | Reward event registration |
| `FUN_1002d90c8` | Reward enable flag at +0xe09 |
| `FUN_1002da328` | Reward event registration |
| `FUN_1002db064` | Chest/reward display at +0x390 |
| `FUN_1002db580` | Chest/reward + condition at +0x240 |
| `FUN_1002db954` | Chest element visibility (0xfffffffb at +0x5f4) |

### Seasons & Config (6 functions)
| Function | What it gates |
|----------|---------------|
| `FUN_10010da88` | Season data |
| `FUN_10011584c` | Season config init |
| `FUN_100115aa0` | Season config init |
| `FUN_100164bd0` | Season data at +0x108 |
| `FUN_100165cc4` | Season feature |
| `FUN_10016641c` | Achievement tracking (3 calls) |

### Spectate / Replay (3 functions)
| Function | What it gates |
|----------|---------------|
| `FUN_100331584` | Spectate feature |
| `FUN_100341ca8` | Replay system |
| `FUN_100342508` | Replay feature (returns early) |

### Other / Engine (5 functions)
| Function | What it gates |
|----------|---------------|
| `FUN_1000787b8` | Engine core feature |
| `FUN_1000fa70c` | Engine feature (returns early) |
| `FUN_10017a5f4` | Audio/notification |
| `FUN_10017ab0c` | Audio/notification |
| `FUN_1002af074` | Friend/guild sub-feature |

---

## Architecture Learnings

### Hooking Patterns That Work
1. **__DATA fptr replacement** — Replace function pointers in `__DATA.__const` vtables. The game uses virtual dispatch extensively, so most methods are hookable via their vtable slot.
2. **Call-original-then-fix** — Hook a gated function, call the original (which applies the CE restriction), then undo the restriction (e.g., re-set visibility bits).
3. **Runtime panel creation** — Allocate memory with the game's `operator_new`, call the panel constructor, then register with the sidebar controller.
4. **Runtime panel registration** — Call `FUN_1001fc9c4(sidebarCtrl, panelSubObj, index)` to add panels to the sidebar after init.

### Patterns That DON'T Work
1. **vm_protect __TEXT patching** — Crashes due to code signing enforcement even on the VM.
2. **Binary-level master gate flip** — Enabling all 116 gates at once crashes because some code paths depend on CE-missing infrastructure.
3. **SIMD-parameter hooks** — C function hooks clobber ARM64 SIMD registers (`s0`/`v0`/`d0`). Functions with `undefined1 param_1[16]` in Ghidra need inline assembly wrappers to save/restore SIMD state.
4. **Vtable calls without `self`** — C++ virtual methods need the sub-object pointer as the first argument (`self` in x0). Calling `((fn)vtable[n])()` without passing `self` causes the function to read garbage from uninitialized x0. Must use `((fn)vtable[n])(subObj)` instead. Symptom: EXC_ARM_DA_ALIGN at an address that looks like ARM64 instruction bytes (e.g. `0xa9be4ff4...`).

### Object Graph
```
DAT_101dc2920 (global)
  └── Root/Parent object
        ├── +0x80 → Menu object (FUN_1001fd570)
        │     ├── +0x70 → Sidebar controller (FUN_1001fc960)
        │     ├── +0xb0 → HOME panel subobj
        │     ├── +0xb8 → BAG panel subobj
        │     ├── +0xc0 → ACADEMY panel subobj (NULL in CE, created by hook)
        │     ├── +0xc8 → PARTY panel subobj (NULL in CE, set by hook from MARKET+0x2c50)
        │     ├── +0xd0 → SOCIAL panel subobj (NULL in CE, set by hook)
        │     ├── +0xe0 → HOME panel (always created)
        │     ├── +0xe8 → MARKET panel (always created, contains PARTY subobj at +0x2c50)
        │     ├── +0xf0 → Small social panel (created in CE, not registered natively)
        │     ├── +0xf8 → Full social panel (NOT created in CE)
        │     ├── +0x100 → ACADEMY panel (NOT created in CE, created by hook)
        │     └── +0x108 → BAG panel wrapper (always created, 0x60 bytes)
        │           ├── +0x08 → Tab container (0x2c88 bytes via FUN_1002af074)
        │           │     └── +0x2a8 → Tab bar UI (managed by FUN_100198d1c)
        │           └── +0x48 → Tab array {count, capacity, data[]}
        │                 ├── [0..5] → 6 native tabs (always created)
        │                 └── [6]    → TROPHIES tab (CE-gated, created by hook)
        └── ...

DAT_101e43908 (global)
  └── Tab controller singleton (notification banners, NOT sidebar)
```

### Key Addresses
| Purpose | Address | Type |
|---------|---------|------|
| CE master gate | `0x100131560` | `return 1` (MOV W0,#1; RET) |
| Root object global | `g_base + 0x1dc2920` | Pointer |
| Tab controller (banners) | `g_base + 0x1e43908` | Pointer |
| Sidebar register fn | `g_base + 0x1fc9c4` | `FUN_1001fc9c4(ctrl, panel, idx)` |
| operator_new | `g_base + 0x1148d8c` | PLT stub |
| ACADEMY constructor | `g_base + 0x242e6c` | `thunk_FUN_100242e6c` |
| Social gate fn | `g_base + 0x126b6c` | `FUN_100126b6c` |
| PARTY subobj offset | MARKET panel + `0x2c50` | Icon: `main_nav_party`, Label: `MAIN_MENU_PARTY` |
| BAG tab array add fn | `g_base + 0x1f5d50` | `FUN_1001f5d50(array, &subObj)` |
| BAG tab register fn | `g_base + 0x2afb68` | `FUN_1002afb68(container, title, 0, icon, section)` |
| TROPHIES tab ctor | `g_base + 0x21844c` | `FUN_10021844c(mem)` — alloc size 0x50, subobj at +0x28 |

---

## Next Steps — Priority Order

### P0: SIMD Hook Fix (enables 2 more progression UI elements)
The `prog_vis1` (0x14890f0) and `prog_vis2` (0x148a780) hooks need inline assembly to preserve `s0`/`v0` across the hook. Pattern:
```asm
// Save s0, call original C hook, restore s0
stp d0, d1, [sp, #-16]!
bl _hook_impl
ldp d0, d1, [sp], #16
```
This would fix visibility of reward/chest UI elements at `param_3 + 0x1754`.

### P1: Hook remaining 3 available __DATA fptr functions
- `FUN_1001e0550` (g_base+0x1469468) — Tab controller feature
- `FUN_1001f4efc` (g_base+0x146cfb0) — Home panel text (currently shows wrong text for non-guest)
- `FUN_10028c348` (g_base+0x147f110) — Party/matchmaking feature

### P2: Seasons & Trophy Data
The 6 season/config functions (FUN_10010da88, FUN_10011584c, etc.) gate season data processing. These are NOT hookable via __DATA but could be worked around by:
- Injecting season data via the MITM interceptor (already partially done with `endSeasonEpoch` patching)
- Finding and hooking their CALLERS that DO have fptrs

### P3: Rewards / Chests / Forge
6 functions gate the reward/chest/forge systems. Key offsets:
- `+0xe09` — reward enable flag
- `+0x390` — chest display data
- `+0x240` — chest condition
- `+0x5f4` — chest element visibility
These could be force-enabled from `hook_refresh` if we can find the relevant objects.

### P4: Market Full Features
The market constructor `FUN_100248d3c` has **6 gate calls** — the most gated single function. It controls:
- Additional market tabs
- Item filtering modes
- Purchase options
Currently partially worked around via `market_tabs` hook.

### P5: Queue / Play Features
4 functions gate queue and play modes. `FUN_100321770` has a skill tier threshold check (`< 5`) that limits available modes for low-tier players.

### P6: Spectate / Replay
3 functions gate the spectate and replay systems. These would need the game server to support spectating, which may not work in the CE environment.

---

## Technical Debt

1. **Layer 6 ACADEMY creation** duplicates work the native constructor would do if the gate returned 0. If we ever find a safe way to flip the gate for just the menu constructor, Layer 6 can be simplified.

2. **92 functions call the gate** but only 11 are hookable via __DATA. The remaining 81 would need either:
   - Finding hookable callers of THOSE functions
   - Using Substrate/fishhook for runtime BL rewriting
   - Pre-patching the binary with a more selective approach (patch individual `TBNZ`/`CBNZ` instructions that branch on the gate result, rather than the gate function itself)

3. **MITM interceptor** already injects fake data for friends, leaderboards, trophies, and live events. Season data injection could be expanded to cover more progression features.
