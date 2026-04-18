# Autoresearch: full Vainglory match protocol decoding

## Objective
Improve the existing Vainglory in-match protocol decoder until full matches can be replayed as useful scoreboard state over time. The immediate target is not generic semantic coverage anymore; it is decoding gameplay values that let us reconstruct the scoreboard at any point in the match timeline: **level-ups, kills, deaths, creep score, total gold, total XP, and—when present—a trustworthy winner signal at match end**.

The current code already derives the Blowfish key, decrypts messages correctly, and identifies a useful subset of opcodes. The main gap is turning those state streams into replay-usable scoreboard values instead of broad "interesting event" coverage.

## Metrics
- **Primary**: `scoreboard_score` (unitless, higher is better) — weighted replay utility across full gameplay captures, rewarding per-player decoding of timeline-relevant scoreboard state: total gold, total XP, death timelines, kills, CS, and level-ups
- **Secondary**:
  - `gold_players` — active players in full matches with a plausible total-gold timeline
  - `xp_players` — active players in full matches with a plausible total-XP timeline
  - `death_players` — active players with at least one decoded death
  - `kill_players` — active players with at least one decoded kill attribution
  - `cs_players` — active players with non-zero decoded creep score
  - `level_players` — active players with at least one decoded level-up
  - `replay_players` — active players that have gold + XP + death timeline plus at least one of kills / CS / level-ups
  - `winner_matches` — full gameplay captures where the winner/loser team is decoded from an end-of-match signal
  - `scored_matches` — full gameplay captures included in the benchmark
  - `total_players` — active player rows considered by the benchmark

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
- Keep changes surgical and focused on replay-usable scoreboard state
- No speculative framework work
- Prefer deriving semantics from repeatable structure across multiple captures
- Preserve existing successful Blowfish decryption behavior
- Benchmark must stay runnable from this directory with current captures
- Treat the captures as timeline data, not just static end-state snapshots. Prefer decoders that exploit temporal correlation, monotonicity, and whole-match replay consistency.
- Some captures are incomplete, AFK, or never-started; absence of late-game fields is not itself evidence that a decoder is wrong.
- Mode context matters: ARAL starts heroes at level 4, grants accelerated passive gold, includes initial talent choice (3 offered, 1 selected), and uses the usual 6 item slots / 3 abilities progression constraints.

## What's Been Tried
- Existing decoder already recovers Blowfish key derivation and block endianness correctly
- Existing semantic wins: roster handles/UUIDs/entity IDs, team assignment, game mode fragments, positions, some stat/property streams, hero catalog extraction
- Known gaps from current writeup: per-player hero assignment, kills/deaths/assists, items, creep score, absolute health/mana, objective/minion/structure state, richer C->S input decoding
- Previous benchmark drifted too far toward generic event categories (including "ability-like" / other tentative interaction labels) instead of replay-grade scoreboard state. The restarted session should optimize only level-ups, kills, deaths, CS, total gold, and total XP.
- Added heuristic decoding for opcode `1067`: index-0 state transitions now surface `death state detected` / `respawn state detected` events. This improved event-category coverage, but the exact state semantics are still heuristic.
- Confirmed opcode `1113` reuses the same roster-record layout as `1114` in short/pre-match captures. Parsing it with the snapshot decoder recovered a previously missing six-player roster in the HF Ranked sample.
- Strong lead: opcode `1011` appears exactly 6 times in full matches and shares an 8-byte per-player identifier with opcode `1006` (its first 8 bytes match `1006` bytes `164:172`). This likely helps link setup/spawn messages to roster entries and may be the best route to hero assignment.
- `1011` is now partially decoded as a spawn/setup blob: `0:4` is a stable `hero_type_id` candidate, `8:12` is the entity-id word, `12:16` is team, `18:22` / `22:26` are plausible spawn X/Y, and `138:142` / `142:146` are plausible spawn health values.
- `1052` is a typed per-entity scalar stream. Current stable parse: entity at `2:4`, float value at `8:12`, type byte at `12`. Full-match hero records usually expose at least two scalar slots.
- `1087` is a denser typed per-entity extended-property stream. Earlier parsing overfit to a changing u16 field; current safer interpretation is keyed by `(family=byte[8], target_entity=bytes[6:8])`, with payload bytes `14:16` and `28:32` carrying associated values. This needs continued verification against items / talents / ability-side effects.
- Assumption re-check: `1086` type `0x3e` / `0x4d` remain the strongest total-resource candidates so far, but they must be validated through temporal correlation and plausible replay totals rather than label confidence alone.
- Winner-decoding correction: the late 7-message `1077` burst appears to target a winning-side focus player, not a loser. The earlier loser-side interpretation was contradicted by long-match end positions and user validation (`ff8a37e1`). For now, treat `1077` target team as the best winner signal when the full end burst is present.
- Level-up refinement: `1086` type `0x42` still looks useful as a fallback level signal for players who otherwise show zero level-ups, and its stat-followup window is slightly later / wider than `0x3e`. After validating that broader `0x3e` windows can recover plausible missed milestones, the current best setting is `0x3e -> 0.30s / 80 messages`, `0x42 -> 0.35s / 80 messages`, plus an ARAL cap of 8 detected level-ups so players cannot exceed level 12. This recovered several believable mid/late-game levels (including `ArcLinux`, `JustFvckedMyHoe`, `Jatagan`, `XoXLblCoCytXui`) while preventing the overcap seen on `Polat1071`.
- Kill-attribution correction: reward-window fallbacks were sometimes crediting kills to the dead player's teammate because post-death gold/xp pulses include allied recipients. Restricting candidate killers to the opposing team removed those friendly-fire artifacts and actually improved the benchmark despite lowering `kill_players`, because the redistributed kills produced more replay-ready rows.
- User gameplay context to exploit during decoding: gold / items / health / XP / level / ability upgrades should move in correlated ways over time; ARAL begins at level 4 with faster gold gain; each hero has 6 item slots; talents exist only in ARAL and are selected from 3 offered choices at the start; normal ability progression is capped by 12 distributed upgrade points with 5/5/3 maximums across the 3 abilities. These invariants are useful for labeling timeline fields.
