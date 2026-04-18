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
    has_ability_interactions = len(player.hero_interaction_families) >= 1
    has_farm_interactions = len(player.minion_interaction_families) >= 1
    has_farm_rewards = len(player.farm_reward_types) >= 1
    has_xp_like_gains = player.xp_like_gain_events >= 1
    has_gold_like_gains = player.gold_like_gain_events >= 1
    has_kill_window_gains = player.kill_window_gain_events >= 1
    has_assist_window_gains = player.assist_window_gain_events >= 1
    has_level_like = player.level_like_events >= 1
    has_cooldown_channels = (
        len(player.ability_followup_scalar_types) >= 1
        or len(player.ability_followup_prop_families) >= 1
    )
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
    score += 8 if has_ability_interactions else 0
    score += 8 if has_farm_interactions else 0
    score += 8 if has_farm_rewards else 0
    score += 8 if has_xp_like_gains else 0
    score += 8 if has_gold_like_gains else 0
    score += 6 if has_kill_window_gains else 0
    score += 6 if has_assist_window_gains else 0
    score += 8 if has_level_like else 0
    score += 8 if has_cooldown_channels else 0
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
    if "level-like" in text or "level up" in text or "approx level" in text:
        return "level"
    if "xp-like" in text or " xp " in text:
        return "xp"
    if "gold-like" in text or " gold " in text:
        return "gold"
    if "kill" in text:
        return "kill"
    if "reward" in text or "pulse" in text or "bounty" in text:
        return "reward"
    if "cooldown" in text:
        return "cooldown"
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
    ability_players = 0
    cooldown_players = 0
    farm_players = 0
    farm_reward_players = 0
    xp_gain_players = 0
    gold_gain_players = 0
    kill_gain_players = 0
    assist_gain_players = 0
    level_players = 0
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
            if len(player.hero_interaction_families) >= 1:
                ability_players += 1
            if len(player.minion_interaction_families) >= 1:
                farm_players += 1
            if len(player.farm_reward_types) >= 1:
                farm_reward_players += 1
            if player.xp_like_gain_events >= 1:
                xp_gain_players += 1
            if player.gold_like_gain_events >= 1:
                gold_gain_players += 1
            if player.kill_window_gain_events >= 1:
                kill_gain_players += 1
            if player.assist_window_gain_events >= 1:
                assist_gain_players += 1
            if player.level_like_events >= 1:
                level_players += 1
            if (
                len(player.ability_followup_scalar_types) >= 1
                or len(player.ability_followup_prop_families) >= 1
            ):
                cooldown_players += 1
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
    print(f"METRIC ability_players={ability_players}")
    print(f"METRIC cooldown_players={cooldown_players}")
    print(f"METRIC farm_players={farm_players}")
    print(f"METRIC farm_reward_players={farm_reward_players}")
    print(f"METRIC xp_gain_players={xp_gain_players}")
    print(f"METRIC gold_gain_players={gold_gain_players}")
    print(f"METRIC kill_gain_players={kill_gain_players}")
    print(f"METRIC assist_gain_players={assist_gain_players}")
    print(f"METRIC level_players={level_players}")
    print(f"METRIC interaction_players={interaction_players}")
    print(f"METRIC scalar_players={scalar_players}")
    print(f"METRIC extended_players={extended_players}")
    print(f"METRIC event_kinds={len(event_kinds)}")
    print(f"METRIC matches_with_mode={matches_with_mode}")
    print(f"METRIC total_players={total_players}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
