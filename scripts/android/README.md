# Android Ghidra Scripts

Scripts for reverse engineering the Android `libGameKindred.so` binary to find the missing `.data.rel.ro` function pointer offsets needed by `vg_unlock_android.c`.

## Scripts

| Script | Finds | Priority |
|--------|-------|----------|
| `GhidraFindNavRefresh.java` | `FPTR_NAV_REFRESH` + CE gate callers (`FPTR_PROFILE_BODY`, `FPTR_PROFILE_LOADER`, `FPTR_SEASON_HANDLER`, `FPTR_DATA_FETCH`, `FPTR_MARKET_TABS`) | **High** — nav refresh controls leaderboard button and triggers sidebar code |
| `GhidraFindSetTabVisible.java` | `FPTR_SET_TAB_VISIBLE` | **High** — controls sidebar panel visibility |
| `GhidraFindTrophyProfile.java` | `FPTR_TROPHY_PANEL`, `FPTR_PROFILE_LAYOUT`, `FPTR_PROFILE_BODY`, `FPTR_PROFILE_LOADER` | Medium |
| `GhidraAndroidRelroScan.java` | Full `.data.rel.ro` scan — catalogs all function pointers | Medium — brute force fallback |

## How to run

1. Open the Android `libGameKindred.so` in Ghidra (import as AARCH64/ELF, let auto-analysis complete)
2. Script Manager → choose script → Run
3. Reports are written to `/tmp/vgf_android_reports/` (or set `VGF_REPORT_DIR` env var)

Headless mode:
```sh
analyzeHeadless /path/to/project ProjectName \
  -import libGameKindred.so \
  -postScript GhidraFindNavRefresh.java \
  -postScript GhidraFindSetTabVisible.java \
  -postScript GhidraFindTrophyProfile.java \
  -postScript GhidraAndroidRelroScan.java
```

## Key reference offsets

These are the confirmed Android offsets (from `vg_unlock_android.c`) that the scripts use for validation and neighborhood scanning:

```
.data.rel.ro region: 0x26b8b20 - 0x2ad1fa8
CE gate function:    0x8480e0

CONFIRMED fptrs:
  0x26bac28 -> 0x83f318  featuresEnabled parser
  0x26bab38 -> 0x83ec48  freeTabVisibility parser
  0x26dc200 -> 0xa0c2f8  profile_data
  0x26d5630 -> 0xa02b60  profile_ranked
  0x26f34c8 -> 0xaf7920  profile_eeb60
  0x26f34a8 -> 0xaf7980  profile_f505c
  0x2720e70 -> 0xd91dec  guest_vtable12
```
