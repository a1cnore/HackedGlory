# CE Gate Analysis — Android libGameKindred.so

## CE Gate Function: `0x8480e0`

Small function that checks if CE (Community Edition) restrictions apply. Returns 1 = hide UI, 0 = show UI.

```asm
8480e0: stp  x29, x30, [sp, #-0x10]!
8480e4: mov  x29, sp
8480e8: bl   0xd812cc          ; first check (is CE?)
8480ec: mov  w8, wzr           ; w8 = 0
8480f0: tbz  w0, #0, 0x8480fc  ; if not CE, skip to return 0
8480f4: bl   0xdc6464          ; second check
8480f8: eor  w8, w0, #1        ; xor result
8480fc: and  w0, w8, #1        ; mask to bool
848100: ldp  x29, x30, [sp], #0x10
848104: ret
```

There's also a trivial "return 0" stub at `0x848108`:
```asm
848108: mov  w0, wzr
84810c: ret
```

## 9 Call Sites

| Call Address | Nearby FPTR(s) in .data.rel.ro | Notes |
|-------------|-------------------------------|-------|
| `0x863b88` | `0x26bbd58 -> 0x863dd4` | ~0x2f8 before gate call |
| `0x8640cc` | (none found nearby) | |
| `0xa6e734` | `0x26e52e8 -> 0xa6e6f4`, `0x26e5260 -> 0xa6e6f0`, `0x26e5238 -> 0xa6e6ec` | 3 fptrs nearby, gate call at +0x40/+0x44/+0x48 |
| `0xad2680` | `0x26ed4f8 -> 0xad240c`, `0x26ed488 -> 0xad23b4`, `0x26ed4f0 -> 0xad2394`, + 5 more | Many fptrs, deep in function |
| `0xad6794` | `0x26ed788 -> 0xad676c`, `0x26ed770 -> 0xad675c`, `0x26ed768 -> 0xad672c`, + 2 more | Multiple fptrs |
| `0xae0920` | `0x26eec18 -> 0xae08f8`, `0x26eec00 -> 0xae089c`, + 3 more | |
| `0xaf783c` | `0x26f34c0 -> 0xaf7808` (CODE_SOCIAL_INNER), + many profile fptrs | Near profile opener area |
| `0xaf79a8` | `0x26f34a8 -> 0xaf7980` (**profile_f505c CONFIRMED**), `0x26f3888 -> 0xaf7950` (**profile_fa7b0 CONFIRMED**) | Already hooked |
| `0xbbe99c` | `0x270b7c0 -> 0xbbe890`, `0x270b798 -> 0xbbe878` | Near open_full_profile area |

## Candidate FPTRs for NEEDS_RE Offsets

These are .data.rel.ro fptrs pointing to functions that call the CE gate. Each is a potential hook site where we could run the original function, then force UI elements visible.

### High priority — close to CE gate call, likely the direct UI hiders:

| FPTR | Target Func | Gate Call Offset | Potential Match |
|------|-------------|-----------------|-----------------|
| `0x26e52e8` | `0xa6e6f4` | +0x40 | Could be FPTR_PROFILE_BODY or FPTR_PROFILE_LOADER |
| `0x26e5260` | `0xa6e6f0` | +0x44 | Same area — one of the profile display fptrs |
| `0x26e5238` | `0xa6e6ec` | +0x48 | Same area |
| `0x26ed788` | `0xad676c` | +0x28 | Could be FPTR_MARKET_TABS or sidebar-related |
| `0x26eec18` | `0xae08f8` | +0x28 | Near bag/inventory area |
| `0x26bbd58` | `0x863dd4` | +0x2f8 | Deep call — may be main menu init |

### Already confirmed (for reference):
| FPTR | Target | Name |
|------|--------|------|
| `0x26f34a8` | `0xaf7980` | profile_f505c |
| `0x26f34c8` | `0xaf7920` | profile_eeb60 |
| `0x26f3888` | `0xaf7950` | profile_fa7b0 |

## Next Steps

1. Decompile each candidate function in Ghidra to understand what UI element it controls
2. Match candidates to the NEEDS_RE slots: `FPTR_NAV_REFRESH`, `FPTR_SET_TAB_VISIBLE`, `FPTR_TROPHY_PANEL`, `FPTR_PROFILE_LAYOUT`, `FPTR_PROFILE_BODY`, `FPTR_PROFILE_LOADER`, `FPTR_SEASON_HANDLER`, `FPTR_DATA_FETCH`, `FPTR_MARKET_TABS`
3. For each matched fptr, write a hook that runs the original function then forces visibility flags
4. **Do NOT patch the CE gate directly** — it will crash the app at this stage
