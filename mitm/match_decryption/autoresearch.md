# Autoresearch: full Vainglory match protocol decoding

## Objective
Improve the existing Vainglory in-match protocol decoder until the captured client/server traffic is semantically decoded end-to-end. The target is not just successful Blowfish decryption; it is assigning concrete meaning to decoded values so the captures can explain real match state: roster, heroes, kills, deaths, assists, creep score, items, objectives, ability usage, and any other gameplay-relevant fields.

The current code already derives the Blowfish key, decrypts messages correctly, and identifies a useful subset of opcodes. The main gap is semantic decoding coverage.

## Metrics
- **Primary**: `decode_score` (unitless, higher is better) — weighted utility score across all captured matches based on how many player-facing fields and event categories are decoded with plausible values
- **Secondary**:
  - `full_players` — number of players across all matches with a nearly complete decoded record
  - `hero_players` — number of players with non-empty hero assignments
  - `event_kinds` — number of distinct meaningful event categories surfaced
  - `matches_with_mode` — matches where game mode is decoded
  - `total_players` — total decoded player rows considered

## How to Run
`./autoresearch.sh` — runs a fast syntax check plus the decode coverage evaluator and prints structured `METRIC ...` lines.

## Files in Scope
- `scripts/decode_match_packets.py` — low-level packet parsing, decryption, opcode analysis
- `scripts/vg_match_schema.py` — protocol notes and opcode naming/constants
- `vg_match_dashboard.py` — main semantic match decoder used for CLI analysis
- `vg_dashboard_server.py` — JSON-serving dashboard decoder; useful to keep in sync with semantic improvements
- `scripts/evaluate_decode_coverage.py` — benchmark/evaluator for semantic decoding coverage
- `autoresearch.sh` — autoresearch runner script
- `autoresearch.md` — session state and learnings
- `autoresearch.ideas.md` — backlog for promising but deferred ideas

## Off Limits
- `matches/` packet captures
- `decoded_matches/` historical outputs unless explicitly regenerating for validation
- unrelated repo content outside `mitm/match_decryption`

## Constraints
- Keep changes surgical and focused on decoding coverage
- No speculative framework work
- Prefer deriving semantics from repeatable structure across multiple captures
- Preserve existing successful Blowfish decryption behavior
- Benchmark must stay runnable from this directory with current captures
- Treat the captures as timeline data, not just static end-state snapshots. Prefer decoders that exploit temporal correlation and monotonicity.
- Some captures are incomplete, AFK, or never-started; absence of late-game fields is not itself evidence that a decoder is wrong.
- Mode context matters: ARAL starts heroes at level 4, grants accelerated passive gold, includes initial talent choice (3 offered, 1 selected), and uses the usual 6 item slots / 3 abilities progression constraints.

## What's Been Tried
- Existing decoder already recovers Blowfish key derivation and block endianness correctly
- Existing semantic wins: roster handles/UUIDs/entity IDs, team assignment, game mode fragments, positions, some stat/property streams, hero catalog extraction
- Known gaps from current writeup: per-player hero assignment, kills/deaths/assists, items, creep score, absolute health/mana, objective/minion/structure state, richer C->S input decoding
- Immediate benchmark strategy: score useful decoded semantics across all saved matches so iterative improvements can be kept/discarded objectively
- Added heuristic decoding for opcode `1067`: index-0 state transitions now surface `death state detected` / `respawn state detected` events. This improved event-category coverage, but the exact state semantics are still heuristic.
- Confirmed opcode `1113` reuses the same roster-record layout as `1114` in short/pre-match captures. Parsing it with the snapshot decoder recovered a previously missing six-player roster in the HF Ranked sample.
- Strong lead: opcode `1011` appears exactly 6 times in full matches and shares an 8-byte per-player identifier with opcode `1006` (its first 8 bytes match `1006` bytes `164:172`). This likely helps link setup/spawn messages to roster entries and may be the best route to hero assignment.
- `1011` is now partially decoded as a spawn/setup blob: `0:4` is a stable `hero_type_id` candidate, `8:12` is the entity-id word, `12:16` is team, `18:22` / `22:26` are plausible spawn X/Y, and `138:142` / `142:146` are plausible spawn health values.
- `1052` is a typed per-entity scalar stream. Current stable parse: entity at `2:4`, float value at `8:12`, type byte at `12`. Full-match hero records usually expose at least two scalar slots.
- `1087` is a denser typed per-entity extended-property stream. Earlier parsing overfit to a changing u16 field; current safer interpretation is keyed by `(family=byte[8], target_entity=bytes[6:8])`, with payload bytes `14:16` and `28:32` carrying associated values. This needs continued verification against items / talents / ability-side effects.
- Assumption re-check: `1086` type `0x3e` / `0x4d` remain useful as stable counter families, but the exact gold/XP semantics are not yet proven. Benchmarking should reward typed timeline coverage, not overconfident labels.
- User gameplay context to exploit during decoding: gold / items / health / XP / level / ability upgrades should move in correlated ways over time; ARAL begins at level 4 with faster gold gain; each hero has 6 item slots; talents exist only in ARAL and are selected from 3 offered choices at the start; normal ability progression is capped by 12 distributed upgrade points with 5/5/3 maximums across the 3 abilities. These invariants are useful for labeling timeline fields.
