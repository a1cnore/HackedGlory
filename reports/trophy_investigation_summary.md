# Trophy & Profile Investigation Summary

## Goal
Make the trophy section and season ranked ELO visible in the Vainglory CE 4.13.4 profile screen.

## What Works
- **Feature flags**: All 4 parser hooks install and fire correctly (`featuresEnabled`, `freeTabVisibility`, `goldenArrow`, `tutorialPopup`)
- **Leaderboard button**: Nav bar refresh hook at `__DATA+0x14829e8` works — button is shown every refresh cycle
- **setTabVisible hook**: At `__DATA+0x1469fb8` — blocks all tab hides, forces visible
- **Profile card opens**: Tapping the avatar opens a simplified profile popup showing name ("Guest"), level 30, WINS 20000

## What Doesn't Work
- **No trophy section** visible in the profile card
- **No ranked ELO/skill tier** visible
- **No `[trophy]` runtime logs** — the 3 trophy hooks (panel, data, layout) install correctly but NEVER fire at runtime
- **No `[profile] avatar tapped!` log** — the overflow vtable[0] hook installs at correct offset but is never called
- **No `[sidebar]` logs** when tapping the avatar — the `setTabVisible` hook doesn't fire on avatar tap

## Architecture Discovered

### Two Profile UIs
1. **Simplified profile card** — what currently opens. Created by `FUN_100220a38` → `FUN_100220abc`. Shows only name/level/wins. This is a popup overlay.
2. **Full profile panel** (`FUN_10025c044`) — has tabs for Overview, Ranked 5v5, Ranked 3v3, plus trophy section. Created during menu init at `FUN_100222054`. Our trophy hooks are on THIS panel's vtable entries — but it's never shown.

### Avatar Tap Chain (broken)
```
User taps avatar
  → Avatar widget fires UI::EVENT_SELECT
  → Callback FUN_1002a97cc is registered on the avatar widget
  → FUN_1002a97cc does: LDR x0,[x0,#0xb8] → LDR vtable → BR vtable[0]
  → vtable[0] was FUN_1001f4c4c (dead market upsell — checks +0x40, returns if 0)
```
**Problem**: Even though we replaced vtable[0] at `__DATA+0x146cb10` with our hook AND the diagnostic confirms it's patched, the callback `FUN_1002a97cc` is never called. The SELECT event listener on the avatar widget either wasn't registered or doesn't fire.

### Profile Opens Through Unknown Path
The profile card IS opening when the avatar is tapped, but NOT through:
- The overflow vtable dispatch (our hook never fires)
- The `setTabVisible` hook (no `[sidebar]` logs on avatar tap)
- `FUN_1001eeb60` or `FUN_1001fa7b0` (the two known profile openers — neither fires)

The profile is opening through an **unidentified code path** that we haven't hooked.

### Overflow Menu Vtable (`__DATA+0x146cb10`)
```
[0] 0x146cb10 → FUN_1001f4c4c  — avatar/profile (dead market upsell) [HOOKED but never called]
[1] 0x146cb18 → FUN_1001f4c68  — market upsell (dead)
[2] 0x146cb20 → FUN_1001f4c84  — news (gated by +0x40)
[3] 0x146cb28 → FUN_1001f4ca4  — settings (works)
[4] 0x146cb30 → FUN_1001f4cb0  — leaderboard (works)
```

### Trophy Rendering Gate
- Trophy renderer `FUN_100265bd4` checks `*(char*)(self + 0x18f21)` — if 0, skips all trophy content
- This flag is ONLY set by `FUN_1002656cc` (trophy populator) which runs in the `getTrophyCase` RPC response path
- `getTrophyCase` is never called by the CE client
- Even if the flag is forced, the trophy DATA arrays at `+0x18ef8` (count) / `+0x18f00` (pointer) are empty — zero entries to render

### Trophy Data Flow
```
getTrophyCase RPC (never called)
  → FUN_10050e80c parses JSON trophyCase array
  → stores into intermediate struct: count at +0xa8, array at +0xb0
  → FUN_1002656cc compares UUID, if match: copies entries + sets +0x18f21=1
  → Without this path, flag stays 0 and arrays stay empty
```

## All Hooks Installed (v9)

| Layer | __DATA Offset | Function | Status |
|-------|--------------|----------|--------|
| 1a | `0x145a8e8` | `featuresEnabled` parser | ✅ Fires |
| 1b | `0x145a7f8` | `freeTabVisibility` parser | ✅ Fires |
| 1c | `0x145a858` | `goldenArrow` parser | ✅ Installs |
| 1d | `0x145a828` | `tutorialPopup` parser | ✅ Installs |
| 2 | `0x14829e8` | Nav bar refresh (leaderboard btn) | ✅ Fires every frame |
| 3 | `0x1469fb8` | `setTabVisible` (block tab hides) | ✅ Fires |
| 4a | `0x147b868` | Trophy sub-panel refresh | ❌ Never fires |
| 4b | `0x147bec8` | Profile data handler | ❌ Never fires |
| 4c | `0x147be00` | Profile layout refresh | ❌ Never fires |
| 5 | `0x146cb10` | Avatar tap vtable[0] | ❌ Never fires |

## What's Needed Next

### Option A: Find the Unknown Profile Open Path
The simplified profile card opens when the avatar is tapped, but NOT through any hooked code path. Need to find what function creates `FUN_100220a38`'s popup when the avatar is tapped. This might be:
- A UIKit touch handler that bypasses the E.V.I.L. event system
- An Objective-C selector on the avatar UIView
- A direct function call from the touch input system

**Approach**: Hook `FUN_100220a38` itself (find its __DATA pointer or hook one of its callees) to detect when the simplified card is created, then inject ranked data.

### Option B: Replace Simplified Card with Full Profile
Hook whatever creates the simplified card and instead call `FUN_1001eeb60` (full profile with ranked data). Requires constructing the right context parameter.

### Option C: Inject Ranked Data into Simplified Card
After the simplified card is created, call:
- `FUN_100220b58(card, mode, skillTier)` — set skill tier display
- `FUN_100220b98(card, modeIndex)` — set ranked mode
- `FUN_100220ba4(card, modeIndex, value)` — set ranked value
These populate the ranked section in the existing card.

### Option D: Force Full Profile via Panel System
Find the pre-created full profile panel (from menu init) and show it with `FUN_1001e7f30(panel, 0, 1, 0, 1)`. Need to find where the panel reference is stored in the menu object hierarchy.

## Key Missing Knowledge
1. **How does the avatar tap reach `FUN_100220a38`?** The event chain is broken at the callback level — something else is opening the profile.
2. **Where is the full profile panel stored?** Created at `FUN_100222054` during menu init, but the parent object reference is lost.
3. **Can we hook `FUN_100220a38`?** It's not in __DATA (called directly via BL). Would need to find a vtable entry or use a different hooking technique.
