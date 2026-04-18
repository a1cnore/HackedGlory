#!/usr/bin/env python3
from __future__ import annotations

import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
if str(ROOT) not in sys.path:
    sys.path.insert(0, str(ROOT))

from vg_match_dashboard import analyze_match

MATCHES_DIR = ROOT / "matches"
FULL_MATCH_MIN_DURATION_S = 120.0
MIN_ACTIVE_PLAYERS = 6
MIN_RESOURCE_TOTAL = 1000
MIN_RESOURCE_UPDATES = 5


def match_dirs() -> list[Path]:
    return sorted(
        d for d in MATCHES_DIR.iterdir() if d.is_dir() and (d / "packets.bin").exists()
    )


def is_scoreboard_match(state) -> bool:
    active_players = sum(1 for player in state.players if player.snapshot_active)
    return state.duration >= FULL_MATCH_MIN_DURATION_S and active_players >= MIN_ACTIVE_PLAYERS


def player_score(player) -> tuple[int, bool, bool, bool, bool, bool, bool, bool, bool]:
    has_gold_total = (
        player.gold_counter >= MIN_RESOURCE_TOTAL
        and player.gold_updates >= MIN_RESOURCE_UPDATES
    )
    has_xp_total = (
        player.xp_counter >= MIN_RESOURCE_TOTAL
        and player.xp_updates >= MIN_RESOURCE_UPDATES
    )
    has_death_timeline = player.state_updates >= 3
    has_death_count = player.deaths >= 1
    has_kill_count = player.kills >= 1
    has_cs_total = player.cs >= 1
    has_level_total = player.level_like_events >= 1
    replay_ready = (
        has_gold_total
        and has_xp_total
        and has_death_timeline
        and (has_level_total or has_cs_total or has_kill_count)
    )

    score = 0
    if has_gold_total:
        score += 20 + min(player.gold_updates, 20)
    if has_xp_total:
        score += 20 + min(player.xp_updates, 20)
    if has_death_timeline:
        score += 12
    if has_death_count:
        score += 8 + min(player.deaths, 5) * 2
    if has_kill_count:
        score += 14 + min(player.kills, 5) * 3
    if has_cs_total:
        score += 14 + (min(player.cs, 40) // 10) * 2
    if has_level_total:
        score += 16 + min(player.level_like_events, 5) * 2
    if replay_ready:
        score += 20

    return (
        score,
        has_gold_total,
        has_xp_total,
        has_death_timeline,
        has_death_count,
        has_kill_count,
        has_cs_total,
        has_level_total,
        replay_ready,
    )


def main() -> int:
    if not MATCHES_DIR.exists():
        print("matches directory not found", file=sys.stderr)
        return 1

    matches = match_dirs()
    if not matches:
        print("no packet captures found", file=sys.stderr)
        return 1

    scoreboard_score = 0
    scored_matches = 0
    winner_matches = 0
    total_players = 0
    gold_players = 0
    xp_players = 0
    death_timeline_players = 0
    death_players = 0
    kill_players = 0
    cs_players = 0
    level_players = 0
    replay_players = 0
    total_kills = 0
    total_deaths = 0
    total_cs = 0
    total_level_ups = 0

    for match_dir in matches:
        state = analyze_match(match_dir)
        if not is_scoreboard_match(state):
            continue

        scored_matches += 1
        if state.winning_team in (1, 2):
            winner_matches += 1
            scoreboard_score += 40

        for player in state.players:
            if not player.snapshot_active:
                continue

            total_players += 1
            (
                score,
                has_gold_total,
                has_xp_total,
                has_death_timeline,
                has_death_count,
                has_kill_count,
                has_cs_total,
                has_level_total,
                replay_ready,
            ) = player_score(player)
            scoreboard_score += score

            if has_gold_total:
                gold_players += 1
            if has_xp_total:
                xp_players += 1
            if has_death_timeline:
                death_timeline_players += 1
            if has_death_count:
                death_players += 1
            if has_kill_count:
                kill_players += 1
            if has_cs_total:
                cs_players += 1
            if has_level_total:
                level_players += 1
            if replay_ready:
                replay_players += 1

            total_kills += player.kills
            total_deaths += player.deaths
            total_cs += player.cs
            total_level_ups += player.level_like_events

    print(f"METRIC scoreboard_score={scoreboard_score}")
    print(f"METRIC scored_matches={scored_matches}")
    print(f"METRIC winner_matches={winner_matches}")
    print(f"METRIC total_players={total_players}")
    print(f"METRIC gold_players={gold_players}")
    print(f"METRIC xp_players={xp_players}")
    print(f"METRIC death_timeline_players={death_timeline_players}")
    print(f"METRIC death_players={death_players}")
    print(f"METRIC kill_players={kill_players}")
    print(f"METRIC cs_players={cs_players}")
    print(f"METRIC level_players={level_players}")
    print(f"METRIC replay_players={replay_players}")
    print(f"METRIC total_kills={total_kills}")
    print(f"METRIC total_deaths={total_deaths}")
    print(f"METRIC total_cs={total_cs}")
    print(f"METRIC total_level_ups={total_level_ups}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
