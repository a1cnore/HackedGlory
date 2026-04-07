# Generated Inventory Files

These files are direct extraction artifacts from passive static analysis of `Payload/GameKindred.app/GameKindred`.

Related local tooling:

- [scripts/mock_platform_server.py](../../scripts/mock_platform_server.py)
  Offline JSON-RPC mock server driven by the inferred contract.

- `hosts_and_urls.txt`
  Raw hostnames, URLs, and URL templates found by string extraction.

- `protocol_spec.json`
  Machine-readable protocol-oriented extraction from the client binary, including JSON-RPC-near methods, session fields, ranked fields, and realtime clues.

- `data_bundle_inventory.json`
  Machine-readable inventory of `Payload/GameKindred.app/Data`, including dominant header types and sample embedded resource paths.

- `jsonrpc_cluster_raw.txt`
  Raw string neighborhood around the JSON-RPC format strings. This is the best local source for method and field clustering without disassembly.

- `method_candidates.txt`
  Broad method-like string extraction. Contains likely gameplay RPC mixed with SDK and local helper names.

- `session_and_state_fields.txt`
  Curated field names from the session/bootstrap and player-state cluster.

- `ranked_and_season_fields.txt`
  Curated ranked, season, and ascension field names.

- `realtime_transport_clues.txt`
  Strings indicating WebSocket, long-poll, and state-update message handling.

- `sdk_and_runtime_clues.txt`
  Objective-C runtime metadata lines showing embedded SDKs and networking/runtime helpers.

Caveat:

- These are string-level artifacts, not decompiled control flow.
- Some entries are false positives or belong to third-party SDKs rather than the game backend itself.
