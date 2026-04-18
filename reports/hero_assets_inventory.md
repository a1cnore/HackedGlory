# Hero Assets Inventory

## Summary

Hero art (portraits, splash art, ability icons, item icons) is embedded in the game's proprietary **RSC0** binary asset bundles within `Payload/GameKindred.app/Data/`. These cannot be extracted without building a custom RSC0 parser.

## What's Available

### App Bundle Root
- **App icons only** (AppIcon*.png) — game logo, not hero art
- **Assets.car** (198KB) — compiled Asset Catalog containing only 20 assets: app icons, ReplayKit UI buttons, launch image. No hero art.

### Data/ Directory (48,187 files)
- **18,136 RSC0 files** — proprietary resource containers with embedded 3D models, shaders, textures
- **942 CFF0 files** — definition/config data (stats, abilities — already decrypted)
- RSC0 files contain internal paths like `/Characters/Hero009/Art/hero009_rock_t3.shadergraph` but these are shader/material definitions, not extractable images

### Binary References to Image Assets
The GameKindred binary references these image paths, which are compiled into RSC0 bundles:
- `build://HUDPartsHero_%s.png` — per-hero HUD portrait (e.g., HUDPartsHero_Vox.png)
- `build://MenuCharPortraitsHD.png` — HD character portrait sprite sheet
- `build://MenuCharPortraitsHD2.atlas` — portrait atlas mapping
- `build://Splash_%s.png` — hero splash art (e.g., Splash_Vox.png)
- `build://HUDItemsAndBuffs.atlas` — item/buff icon sprite sheet

### Android XAPK
- **APK** (30MB) — only Android system UI PNGs (Material Design resources)
- **OBB** (1.4GB) — main asset bundle, likely contains the same RSC0 files as iOS Data/

### External Sources
- vainglorygame.com — site is up (200) but hero image URLs return 404
- VaingloryFire — unreachable
- No CDN URLs found in the binary

## Recommended Approach for Dashboard

1. **No hero images available for extraction** from the bundled assets without an RSC0 parser
2. **Fallback options:**
   - Use hero initials/colored circles as avatars
   - Use Wayback Machine snapshots of vainglorygame.com or wiki sites
   - Source from community-maintained repositories (GitHub/Discord)
3. **Future:** Build an RSC0 parser to extract textures from the Data/ bundles — this is a separate significant project (RSC0 format analysis needed)
