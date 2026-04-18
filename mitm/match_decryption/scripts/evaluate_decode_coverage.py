#!/usr/bin/env python3
from __future__ import annotations

import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
if str(ROOT) not in sys.path:
    sys.path.insert(0, str(ROOT))

from vg_match_dashboard import analyze_match
MATCHES_DIR = ROOT / "matches"


def match_dirs() -> list[Path]:
    return sorted(
        d for d in MATCHES_DIR.iterdir() if d.is_dir() and (d / "packets.bin").exists()
    )


def player_score(player) -> tuple[int, bool, bool]:
    score = 0

    has_handle = bool(player.handle)
    has_uuid = bool(player.uuid and "-" in player.uuid)
    has_team = player.team in (1, 2)
    has_entity = player.entity_id != 0xFFFF
    has_hero = bool(player.hero)
    has_hero_type = player.hero_type_id > 0
    has_snapshot_profile = player.snapshot_profile_id > 0
    has_snapshot_active = player.snapshot_active
    has_spawn_pos = player.spawn_pos_x != 0.0 or player.spawn_pos_y != 0.0
    has_spawn_health = player.spawn_health > 0 and player.spawn_health_max > 0
    has_scalar_stats = len(player.scalar_stats) >= 2
    has_extended_props = len(player.extended_props) >= 2
    has_interaction_props = len(player.interaction_props) >= 1
    has_prop_counters = len(player.prop_counters) >= 2
    has_talent_offers = len(player.talent_offer_ids) >= 1
    has_talent_choice = player.talent_choice_id > 0
    has_speed = player.move_speed > 0
    has_pos = player.pos_updates > 0

    score += 8 if has_handle else 0
    score += 8 if has_uuid else 0
    score += 8 if has_team else 0
    score += 8 if has_entity else 0
    score += 14 if has_hero else 0
    score += 10 if has_hero_type else 0
    score += 8 if has_snapshot_profile else 0
    score += 6 if has_snapshot_active else 0
    score += 6 if has_spawn_pos else 0
    score += 6 if has_spawn_health else 0
    score += 8 if has_prop_counters else 0
    score += 6 if has_talent_offers else 0
    score += 8 if has_talent_choice else 0
    score += 8 if has_scalar_stats else 0
    score += 8 if has_extended_props else 0
    score += 8 if has_interaction_props else 0
    score += 6 if has_speed else 0
    score += 8 if has_pos else 0

    fully_populated = all(
        [
            has_handle,
            has_uuid,
            has_team,
            has_entity,
            has_hero_type,
            has_snapshot_profile,
            has_snapshot_active,
            has_prop_counters,
            has_scalar_stats,
            has_extended_props,
            has_pos,
        ]
    )
    return score, fully_populated, has_hero, has_hero_type


def event_kind(event_text: str) -> str:
    text = event_text.lower()
    if "kill" in text:
        return "kill"
    if "reward" in text or "pulse" in text or "bounty" in text:
        return "reward"
    if "talent" in text:
        return "talent"
    if "active" in text or "joined" in text or "spawned" in text:
        return "join"
    if "death" in text or "died" in text:
        return "death"
    if "assist" in text:
        return "assist"
    if "item" in text or "buy" in text or "bought" in text:
        return "item"
    if "objective" in text or "turret" in text or "kraken" in text or "miner" in text:
        return "objective"
    if "cs" in text or "minion" in text:
        return "cs"
    if "ability" in text or "cast" in text:
        return "ability"
    if "hit" in text or "damage" in text:
        return "damage"
    return "other"


def main() -> int:
    if not MATCHES_DIR.exists():
        print("matches directory not found", file=sys.stderr)
        return 1

    matches = match_dirs()
    if not matches:
        print("no packet captures found", file=sys.stderr)
        return 1

    decode_score = 0
    total_players = 0
    full_players = 0
    hero_players = 0
    spawn_players = 0
    profile_players = 0
    active_players = 0
    prop_counter_players = 0
    talent_players = 0
    interaction_players = 0
    scalar_players = 0
    extended_players = 0
    matches_with_mode = 0
    event_kinds: set[str] = set()

    for match_dir in matches:
        state = analyze_match(match_dir)
        if state.game_mode:
            decode_score += 20
            matches_with_mode += 1

        for player in state.players:
            total_players += 1
            score, fully_populated, has_hero, has_hero_type = player_score(player)
            decode_score += score
            if fully_populated:
                full_players += 1
                decode_score += 12
            if has_hero:
                hero_players += 1
            if has_hero_type:
                spawn_players += 1
            if player.snapshot_profile_id > 0:
                profile_players += 1
            if player.snapshot_active:
                active_players += 1
            if len(player.prop_counters) >= 2:
                prop_counter_players += 1
            if player.talent_choice_id > 0:
                talent_players += 1
            if len(player.interaction_props) >= 1:
                interaction_players += 1
            if len(player.scalar_stats) >= 2:
                scalar_players += 1
            if len(player.extended_props) >= 2:
                extended_players += 1

        match_event_kinds = {event_kind(desc) for _, desc in state.events}
        event_kinds.update(match_event_kinds)
        decode_score += 6 * len(match_event_kinds)

    print(f"METRIC decode_score={decode_score}")
    print(f"METRIC full_players={full_players}")
    print(f"METRIC hero_players={hero_players}")
    print(f"METRIC spawn_players={spawn_players}")
    print(f"METRIC profile_players={profile_players}")
    print(f"METRIC active_players={active_players}")
    print(f"METRIC prop_counter_players={prop_counter_players}")
    print(f"METRIC talent_players={talent_players}")
    print(f"METRIC interaction_players={interaction_players}")
    print(f"METRIC scalar_players={scalar_players}")
    print(f"METRIC extended_players={extended_players}")
    print(f"METRIC event_kinds={len(event_kinds)}")
    print(f"METRIC matches_with_mode={matches_with_mode}")
    print(f"METRIC total_players={total_players}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
