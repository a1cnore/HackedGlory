# HackedGlory

HackedGlory is a reverse-engineering archive and tooling workspace for the final iOS release of **Vainglory** (`GameKindred` v4.13.4). The repository combines static analysis, runtime interception, protocol decoding, and targeted unlock work to document how the client behaved and which systems were disabled in the Community Edition build.

Community updates: [EU Discord](https://discord.gg/5Y3q7cTH)

## Table of Contents

- [Project Overview](#project-overview)
- [CE Gate Analysis](#ce-gate-analysis)
- [Current Restored Surfaces](#current-restored-surfaces)
- [Additional Major Findings](#additional-major-findings)
- [Ghidra Reverse Engineering Workflow](#ghidra-reverse-engineering-workflow)
- [Repository Layout](#repository-layout)
- [Tooling and Environment](#tooling-and-environment)
- [Android Port Status](#android-port-status)
- [License](#license)

## Project Overview

This repository exists to preserve and extend technical understanding of the final Vainglory client. It contains:

- Ghidra-based static reverse-engineering notes and automation
- MITM and TCP interception tooling for controlled traffic capture
- protocol decoders, schema extractors, and analysis scripts
- generated reports, inventories, and decoded match artifacts
- unlock libraries for iOS and Android experiments

The repository is best understood as a research archive rather than a polished product. The strongest results currently documented here are:

- the Community Edition gate architecture and its disabled feature surface
- the in-match protocol decryption and message analysis
- the menu/UI event system and hidden panel flows
- the inferred JSON-RPC platform surface used by the client
- the iOS unlock path and the Android offset-verification effort

## CE Gate Analysis

The Community Edition gate is one of the most important findings in this repository.

Static analysis shows that Vainglory CE relies on a single master gate function, `FUN_100131560`, that hardcodes `return 1`. That gate is called by **164 BL instructions across 92 unique functions**, making it the central mechanism used to disable or hide large portions of the original client. The practical result is that CE is not just a content-reduced build; it is a build with broad feature suppression spread across UI registration, data-loading paths, profile views, progression surfaces, and menu visibility logic.

This is significant because it explains why many systems still exist in the binary and can be partially restored with targeted hooks, but cannot be safely re-enabled by naively patching one function globally. Some code paths only need visibility or registration bypasses. Others depend on data-population paths, backend responses, or object layouts that also changed between builds.

### What Appears To Be Gated

- Sidebar and tab registration for Academy, Party, Social, and related panels
- Bag sub-tabs, including trophies and season-related UI
- Profile surfaces, including ranked tabs, stats tabs, and fuller profile layouts
- Leaderboard visibility and associated navigation paths
- Guild, team, and social feature paths
- Progression, reward, chest, market, and season displays
- Party, matchmaking, queue, and play-mode UI flows
- Spectate and replay related paths

### What Can Currently Be Unlocked

- Sidebar panels can be restored for Academy, Party, and Social
- Trophy-related UI can be reintroduced into the bag/sidebar flow
- The full profile card can be re-enabled, including ICE, Glory, Opals, Karma, level shield, and XP bar
- Ranked and stats-related profile surfaces can be exposed
- Leaderboard-related UI visibility can be forced for inspection
- Social and profile-adjacent features can be surfaced far beyond the stock CE presentation

### What Remains Constrained

- A direct patch of the master gate is not a safe universal fix; too many dependent paths activate at once
- Some restored UI still depends on backend data that the CE client never requests
- Some profile and trophy flows require targeted hooks into population or layout functions, not just visibility bypasses
- Android offset work is still mixed between confirmed targets and items that need additional Ghidra verification

For the full function-level breakdown, hook inventory, and next-step analysis, see [`reports/ce_gate_analysis.md`](reports/ce_gate_analysis.md) and [`reports/trophy_investigation_summary.md`](reports/trophy_investigation_summary.md).

## Current Restored Surfaces

The screenshots below show some of the UI that can now be surfaced or inspected through the current unlock work.

<p>
  <img src="images/trophy.png" alt="Trophy UI Screenshot" width="32%">
  <img src="images/leaderboard.png" alt="Leaderboard UI Screenshot" width="32%">
  <img src="images/friendlist.png" alt="Social UI Screenshot" width="32%">
</p>
<p>
  <img src="images/IMG_8323.PNG" alt="Academy Screenshot" width="32%">
  <img src="images/IMG_8324.PNG" alt="Party Screenshot" width="32%">
  <img src="images/IMG_8325.PNG" alt="Profile Screenshot" width="32%">
</p>
<p>
  <img src="images/IMG_8326.PNG" alt="Ranked Screenshot" width="32%">
  <img src="images/IMG_8327.PNG" alt="Stats Screenshot" width="32%">
  <img src="images/IMG_8328.PNG" alt="Sidebar Screenshot" width="32%">
</p>

## Additional Major Findings

### Platform Surface

The client strongly appears to use HTTPS JSON-RPC for authentication, session bootstrap, profile, social, party, guild, inventory, and content flows. The repository includes inferred method surfaces, extracted field clusters, and machine-generated protocol artifacts. A good starting point is [`reports/vainglory_static_report.md`](reports/vainglory_static_report.md).

### In-Match Protocol

The in-match transport has been substantially decoded. The current best explanation, documented in [`reports/protocol_decryption_writeup.md`](reports/protocol_decryption_writeup.md), is:

- 2-byte big-endian framing on the TCP stream
- Blowfish ECB encryption
- per-match key derivation using `MD5(salt + match_id)`
- ARM64 little-endian word-order handling in the client implementation
- a large decoded opcode surface with working packet analysis and match summaries

This result was derived primarily from static reverse engineering, then verified against captured match traffic.

Some older notes in the repository describe earlier hypotheses about the match transport. When protocol documents disagree, treat [`reports/protocol_decryption_writeup.md`](reports/protocol_decryption_writeup.md) as the current best explanation.

### Menu And UI Control

The repository also documents the E.V.I.L. engine menu/UI system: event hashing, panel switching, localization lookups, data-loading paths, and how leaderboard/friends/profile surfaces are wired through the client. See [`reports/menu_ui_control_guide.md`](reports/menu_ui_control_guide.md).

## Ghidra Reverse Engineering Workflow

Ghidra is the main static-analysis backbone for this repository.

The `scripts/` directory contains automation used to inspect the iOS `GameKindred` binary and the Android `libGameKindred.so` port. These scripts were used to map vtables, trace UI flows, identify feature-gate consumers, extract RPC-adjacent schema clues, follow profile/trophy/sidebar control paths, and recover Android RELRO-backed function-pointer offsets.

### What The Ghidra Work Produced

- CE gate mapping from the master gate to 92 gated functions and 164 call sites
- UI event and panel-flow tracing for profile, sidebar, leaderboard, and social screens
- protocol tracing that led to the Blowfish/MD5 match-transport result
- RPC and field extraction reports under [`reports/generated/`](reports/generated/)
- Android offset verification helpers under [`scripts/android/`](scripts/android/)

### Representative Script Categories

- `GhidraMenuUIAnalysis.java`, `GhidraSidebarTrace.java`, `GhidraSidebarGates.java`
- `GhidraProfile*.java`, `GhidraTrophy*.java`, `GhidraVisibilityGates.java`
- `GhidraMatchProtocol.java`, `GhidraGameConnect.java`, `GhidraRpcSchemaExtractor.java`
- Android scripts such as `GhidraFindNavRefresh.java`, `GhidraFindSetTabVisible.java`, and `GhidraAndroidRelroScan.java`

### Static Analysis Versus Runtime Work

The repository separates discovery from activation:

- static Ghidra analysis identifies code paths, structures, gates, and candidate hook points
- runtime tooling in [`mitm/`](mitm/) captures traffic and validates hypotheses
- unlock libraries in [`mitm/vg_unlock/`](mitm/vg_unlock/) and [`mitm/vg_unlock_android/`](mitm/vg_unlock_android/) apply targeted hooks based on those findings

This distinction matters because many of the most valuable results here, including the CE gate map and match-protocol derivation, were first established statically before being exercised in controlled runtime setups.

## Repository Layout

### `reports/`

Long-form findings, subsystem investigations, generated inventories, and decoded protocol artifacts.

High-value entry points:

- [`reports/ce_gate_analysis.md`](reports/ce_gate_analysis.md): comprehensive CE gate mapping, hook inventory, and unlock status
- [`reports/trophy_investigation_summary.md`](reports/trophy_investigation_summary.md): trophy/profile-specific findings and unresolved paths
- [`reports/protocol_decryption_writeup.md`](reports/protocol_decryption_writeup.md): deepest in-match protocol result in the repository
- [`reports/vainglory_static_report.md`](reports/vainglory_static_report.md): broad static overview of hosts, methods, and data shapes
- [`reports/vainglory_deep_inventory.md`](reports/vainglory_deep_inventory.md): expanded artifact inventory and network hypothesis
- [`reports/menu_ui_control_guide.md`](reports/menu_ui_control_guide.md): menu architecture, event system, and screen-control analysis
- [`reports/generated/`](reports/generated): machine-generated inventories and extracted clues
- [`reports/decoded_matches/`](reports/decoded_matches): decoded packet logs and per-match summaries

### `scripts/`

Static-analysis automation, decoders, extractors, and helper tooling.

Main categories:

- `Ghidra*.java`: Ghidra automation and decompiler-assisted extraction
- `*.py`: packet decoders, inventory builders, parsers, and analysis helpers
- `frida_*`: dynamic instrumentation helpers
- [`scripts/mock_platform_server.py`](scripts/mock_platform_server.py): local mock/stub server for controlled JSON-RPC experiments

### `mitm/`

Runtime interception, traffic inspection, and unlock implementations.

Key components:

- [`mitm/vg_interceptor.py`](mitm/vg_interceptor.py): mitmproxy addon for platform traffic logging and response manipulation
- [`mitm/vg_game_proxy.py`](mitm/vg_game_proxy.py): TCP proxy for in-match traffic
- [`mitm/vg_dns.py`](mitm/vg_dns.py): DNS redirection helper for controlled environments
- [`mitm/vg_log_viewer.py`](mitm/vg_log_viewer.py) and [`mitm/vg_jsonl_viewer.py`](mitm/vg_jsonl_viewer.py): inspection utilities for captured logs
- [`mitm/vg_unlock/`](mitm/vg_unlock/): iOS unlock dylib targeting the `GameKindred` Mach-O
- [`mitm/vg_unlock_android/`](mitm/vg_unlock_android/): Android unlock library targeting `libGameKindred.so`
- [`mitm/matches/`](mitm/matches): captured per-match artifacts

Read [`mitm/README.md`](mitm/README.md) for the runtime interception workflow.

## Tooling and Environment

The repository assumes a reverse-engineering workflow centered on macOS and arm64 analysis.

Commonly referenced components:

- Python 3
- Ghidra
- mitmproxy / `mitmdump`
- Frida
- a controlled iOS test device or VM setup
- Android NDK for the Android unlock library

There is no single bootstrap command for the entire repository. Most work is organized by investigation layer: static analysis in `scripts/` and `reports/`, runtime interception in `mitm/`, and targeted unlock experiments in the platform-specific hook libraries.

## Android Port Status

The Android port in [`mitm/vg_unlock_android/`](mitm/vg_unlock_android/) has reached feature parity with the iOS unlock dylib on the primary test device (Honor Magic 6 Pro / BVL-N49, Android 16). The library is loaded through a loader-shim path that replaces `libGameKindred.so` with a small shim, forwards the exported `Java_*` JNI entrypoints, and side-loads `libvg_unlock.so` without touching smali or rewriting `DT_NEEDED`.

### What Is Working On Android

- cold launch reaches the main menu cleanly, with no tombstone and no deadlock on the "connecting" screen
- sidebar restored with **BAG / MARKET / SOCIAL** tabs populated
- top-right nav bar renders the expected icons, with the leaderboard button force-visible and the four unloaded CE buttons (news / tiv / academy / settings) correctly left hidden (no white-square fallbacks)
- home-screen banner surfaces the skill-tier KV writes driven from the parser hook and `open_full_profile` (e.g. `10 5v5 / 10 3v3`)
- full profile panel opens with **RANKED 5V5** and **RANKED 3V3** tabs visible, Vainglorious skill-tier icon, Bronze→Gold progression bar at tier 29, and the region selector
- avatar tap routes through the confirmed `FPTR_PROFILE_F505C` (`0xaf7980`) dispatch, matching the iOS full-profile flow
- profile / season / ranked hook families fire without blocking the render thread

### Android Screenshots

<p>
  <img src="images/android_parity_port.png" alt="Android parity port — main menu and sidebar" width="48%">
  <img src="images/android_full_profile.png" alt="Android full profile panel with ranked tabs" width="48%">
</p>

### How Parity Was Reached

- CE gate call-site patching inside the full-profile panel constructor (`0xbbf978`) unhides the ranked tabs and profile body elements by flipping the `bl` to a `mov w0, wzr`, producing the same bit-2 set that iOS gets via `hook_profile_ranked` writing `|= 0x4`
- `ensure_ranked_kv_written()` is invoked from the parser hook and `open_full_profile` so the skill-tier KV entries land before the profile panel reads them, compensating for the fact that the Android `FPTR_NAV_REFRESH` and several Layer 8 profile function pointers are still MEDIUM-confidence and never fire as hook sites
- the Layer 5 profile redirects for the two adjacent functions around `0xaf7980` were dropped because on Android they are called during main-menu init rather than on avatar tap, and redirecting them deadlocked the render thread
- the force-visible loop over `nav_hide_sites` was removed because the CE build never loads those buttons' textures, so flipping their `setVisible` immediates rendered as four white squares

### Remaining Android RE Blockers

A handful of function pointers and Android field offsets are still unresolved and gate the experimental hook families. These are not required for the parity set above but block deeper feature work:

- `FPTR_NAV_REFRESH`, `FPTR_SET_TAB_VISIBLE`, `FPTR_TROPHY_PANEL`
- `FPTR_PROFILE_LAYOUT`, `FPTR_PROFILE_BODY`, `FPTR_PROFILE_LOADER`
- `FPTR_SEASON_HANDLER`, `FPTR_DATA_FETCH`, `FPTR_MARKET_TABS`
- Android replacements for the iOS field offsets used in trophy and `setTabVisible` hooks

Known confirmed layout differences between iOS and Android so far:

- guest account string: `+0x2bd0` → `+0x2ba0`
- academy alloc: `0x9ca0` → `0x9cc0`
- full profile alloc: `0x28848` → `0x288f0`
- trophy flags at `+0x18f20 / +0x18f21` are not valid on Android
- `setTabVisible` field `+0x2c2c` is not a valid Android match

### Device Notes

- **Honor Magic 6 Pro / BVL-N49 (Android 16)**: primary target, cold launches cleanly under the loader-shim path, parity set verified
- **Xiaomi Pad 6 8GB / Xiaomi 23043RP34G**: the legacy `DT_NEEDED` rewrite path segfaults seconds after launch even with a no-op control build, so the loader-shim path is the only supported injection mode and is the default in `patch_xapk.py`

Build, patch, and injection-mode details live in [`mitm/vg_unlock_android/README.md`](mitm/vg_unlock_android/README.md). Android-specific Ghidra helpers for recovering missing `.data.rel.ro` offsets live under [`scripts/android/`](scripts/android/) and are documented in [`scripts/android/README.md`](scripts/android/README.md).

## License

This project is released under the [MIT License](https://opensource.org/licenses/MIT).

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files, to deal in the software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the software, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
