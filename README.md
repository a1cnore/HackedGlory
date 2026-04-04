# HackedGlory

## Feature Overview

Current status at a glance:

- Socials UI can now be surfaced and inspected.
- Rank-related UI can now be surfaced and inspected.
- Leaderboard UI can now be surfaced and inspected.
- The match protocol is now partially decrypted and documented.

## Summary For Non-Techies

This repository is a research archive for understanding how the final iOS version of **Vainglory** worked under the hood.

In plain English, it contains:

- notes that explain what the game client appears to send to servers
- tools for capturing and inspecting traffic in a controlled test setup
- reverse-engineering scripts used to study the app binary
- sample decoded data and reports showing what has already been figured out

If you are not technical, the most useful takeaway is this: the repo is trying to document how the game's old online systems were structured so the behavior can be studied, archived, and potentially reproduced in controlled environments.

Start with [`reports/protocol_decryption_writeup.md`](reports/protocol_decryption_writeup.md) for the biggest result and [`reports/vainglory_static_report.md`](reports/vainglory_static_report.md) for the broad overview.

## What This Repo Is

`HackedGlory` is a mixed research and tooling repository focused on the Vainglory iOS client (`GameKindred` v4.13.4).

The repo combines four kinds of material:

1. Static reverse-engineering notes from Ghidra-based analysis.
2. Runtime traffic-capture tooling for JSON-RPC and in-match traffic.
3. Decoding and protocol-analysis scripts.
4. Generated reports and sample captures that preserve the investigation results.

This is not a polished product. It is a working archive of findings, helper tooling, and evidence.

## Current Headline Findings

- The client platform layer appears to use HTTPS JSON-RPC for auth, matchmaking, profile, social, and content flows.
- The repo contains a broad inferred RPC surface, including account, party, guild, inventory, ranked, and session methods.
- The in-match protocol has been substantially decoded and documented.
- Sample captured matches and generated summaries are included in the repo.
- The MITM tooling can log, inspect, and modify selected platform responses in a controlled setup.

## Important Note About The Reports

This repo includes the history of the investigation, not just the final conclusion.

Some older documents describe the in-match encryption as an XOR-based scheme. The newer writeup in [`reports/protocol_decryption_writeup.md`](reports/protocol_decryption_writeup.md) documents the later and stronger conclusion: a Blowfish-based design with per-match key derivation and ARM64-specific endianness handling. When documents disagree, treat the newer writeup as the current best explanation and the older documents as useful historical context.

## Repository Layout

### `reports/`

Long-form documentation, findings, generated inventories, and decoded match summaries.

Good starting points:

- [`reports/vainglory_static_report.md`](reports/vainglory_static_report.md): first-pass static overview of the client, hosts, and likely RPC methods
- [`reports/vainglory_deep_inventory.md`](reports/vainglory_deep_inventory.md): expanded artifact inventory and network-architecture hypothesis
- [`reports/method_schema_sheet.md`](reports/method_schema_sheet.md): method-oriented interpretation of the inferred JSON-RPC surface
- [`reports/match_protocol_spec.md`](reports/match_protocol_spec.md): earlier technical spec for the in-match wire protocol
- [`reports/protocol_decryption_writeup.md`](reports/protocol_decryption_writeup.md): deepest protocol result in the repo
- [`reports/menu_ui_control_guide.md`](reports/menu_ui_control_guide.md), [`reports/trophy_investigation_summary.md`](reports/trophy_investigation_summary.md), [`reports/ce_gate_analysis.md`](reports/ce_gate_analysis.md): focused subsystem investigations
- [`reports/generated/`](reports/generated): machine-generated inventories, extracted clues, and protocol JSON
- [`reports/decoded_matches/`](reports/decoded_matches): decoded packet logs and per-match summaries

### `scripts/`

Analysis and helper scripts used during the investigation.

Main categories:

- `Ghidra*.java`: Ghidra automation and decompiler-assisted extraction scripts
- `*.py`: parsers, decoders, inventory builders, and analysis helpers
- `frida_*`: dynamic instrumentation helpers
- [`scripts/mock_platform_server.py`](scripts/mock_platform_server.py): a local mock/stub server for controlled experiments

Examples:

- [`scripts/decode_match_packets.py`](scripts/decode_match_packets.py): decode captured match traffic
- [`scripts/build_protocol_spec.py`](scripts/build_protocol_spec.py): build machine-readable protocol artifacts
- [`scripts/analyze_data_bundle.py`](scripts/analyze_data_bundle.py): inspect bundled game data
- [`scripts/analyze_message_fields.py`](scripts/analyze_message_fields.py): analyze decoded field structure

### `mitm/`

Runtime interception and inspection tooling for a host machine plus test-device setup.

Key files:

- [`mitm/vg_interceptor.py`](mitm/vg_interceptor.py): mitmproxy addon for logging, categorizing, modifying, and match tracking
- [`mitm/vg_game_proxy.py`](mitm/vg_game_proxy.py): TCP proxy for in-match traffic
- [`mitm/vg_dns.py`](mitm/vg_dns.py): DNS spoofer used to redirect the client through the test setup
- [`mitm/vg_jsonl_viewer.py`](mitm/vg_jsonl_viewer.py): browser-based viewer for captured JSONL traffic
- [`mitm/vg_log_viewer.py`](mitm/vg_log_viewer.py): terminal log viewer and replay helper
- [`mitm/ssl_bypass/`](mitm/ssl_bypass): SSL-bypass support code and build scripts
- [`mitm/vg_unlock/`](mitm/vg_unlock): unlock-related support code and build scripts
- [`mitm/matches/`](mitm/matches): captured per-match artifacts

Read [`mitm/README.md`](mitm/README.md) for the runtime interception setup.

## Recommended Reading Order

If you want the fast path:

1. Read [`reports/vainglory_static_report.md`](reports/vainglory_static_report.md).
2. Read [`reports/vainglory_deep_inventory.md`](reports/vainglory_deep_inventory.md).
3. Read [`reports/protocol_decryption_writeup.md`](reports/protocol_decryption_writeup.md).
4. Browse [`mitm/README.md`](mitm/README.md) if you want to understand how traffic was captured.
5. Use the scripts only after you understand which layer you want to inspect.

## How To Use This Repo

### If you just want the findings

Stay in `reports/`. Most of the high-value information is already written up there.

### If you want to inspect captured traffic

Start in `mitm/`.

- `vg_traffic.jsonl` contains captured platform traffic.
- `matches/<timestamp>_<matchid>/` contains per-match packet captures.
- The local viewers make it easier to inspect large JSON and packet logs.

### If you want to reproduce analysis

Start in `scripts/`.

Most of the analysis pipeline is script-driven, with Ghidra automation for static work and Python helpers for transforming extracted data into usable summaries.

### If you want to build on the protocol work

Start with these files:

- [`reports/protocol_decryption_writeup.md`](reports/protocol_decryption_writeup.md)
- [`reports/generated/protocol_spec.json`](reports/generated/protocol_spec.json)
- [`reports/generated/rpc_schemas.json`](reports/generated/rpc_schemas.json)
- [`scripts/decode_match_packets.py`](scripts/decode_match_packets.py)
- [`scripts/vg_match_schema.py`](scripts/vg_match_schema.py)

## Tooling And Environment

The repo appears to assume a macOS-centered workflow with iOS reverse-engineering tooling around it.

Common components referenced in the repo:

- Python 3
- Ghidra
- mitmproxy / `mitmdump`
- Frida
- a controlled iOS test environment or VM

Because this is a research archive, there is no single one-command bootstrap for the whole repository.

## Data Included In The Repo

This repository includes raw and derived artifacts, not just source code.

Examples include:

- captured JSONL traffic
- binary packet captures
- generated inventories
- decoded match summaries
- compiled helper artifacts under some subdirectories

That is why the repository is relatively large for a code-first project.

## Practical Entry Points

If your goal is:

- "I want the broad overview": read [`reports/vainglory_static_report.md`](reports/vainglory_static_report.md)
- "I want the final protocol breakthrough": read [`reports/protocol_decryption_writeup.md`](reports/protocol_decryption_writeup.md)
- "I want to understand the MITM setup": read [`mitm/README.md`](mitm/README.md)
- "I want to see sample outputs": browse [`reports/decoded_matches/`](reports/decoded_matches) and [`mitm/matches/`](mitm/matches)
- "I want machine-readable artifacts": browse [`reports/generated/`](reports/generated)

## License

No license file is currently included. Until one is added, treat the contents as all rights reserved by default.
