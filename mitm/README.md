# Vainglory MITM Traffic Interceptor

Intercepts, decrypts, logs, and modifies Vainglory's network traffic from the vphone iOS VM.

## What it captures

| Layer | Protocol | Data |
|---|---|---|
| **JSON-RPC** | HTTPS (port 8000 + 443) | Auth, session, matchmaking, player data, manifests, leaderboards |
| **In-match** | Raw TCP (dynamic port) | Binary game protocol — hero positions, abilities, game state |

## Architecture

```
┌─────────────────────────────────────────────────────────────┐
│  macOS Host                                                 │
│                                                             │
│  Terminal 1: vg_dns.py (port 53)                            │
│    Spoofs VG domains → 192.168.64.1                         │
│                                                             │
│  Terminal 2: mitmdump (port 8000)                           │
│    Reverse proxy → rpc.kindred-live.net:443                 │
│    Runs vg_interceptor.py (log + modify + match proxy)      │
│                                                             │
│  Terminal 3: mitmdump (port 443)                            │
│    Same as above, handles startSession traffic              │
│                                                             │
│  Auto: vg_game_proxy.py (dynamic port per match)            │
│    TCP proxy → real game server, logs binary packets        │
│                                                             │
│  ┌───────────────────────────────────────────────────────┐  │
│  │  iOS VM (bridge102, 192.168.64.7)                     │  │
│  │  DNS: 192.168.64.1                                    │  │
│  │  mitmproxy CA cert trusted                            │  │
│  │  GameKindred + ssl_bypass.dylib (fishhook)            │  │
│  └───────────────────────────────────────────────────────┘  │
└─────────────────────────────────────────────────────────────┘
```

## Quick Start

### One-time setup
```sh
./setup.sh                    # builds ssl_bypass.dylib, injects into GameKindred
```
Then on VM: install patched IPA, trust mitmproxy CA cert, set DNS to 192.168.64.1.

### Each session (3 terminals)

**Terminal 1 — DNS:**
```sh
cd vgf/mitm
sudo python3 vg_dns.py --host-ip 192.168.64.1
```

**Terminal 2 — mitmproxy port 8000:**
```sh
cd vgf/mitm
VG_LOG_DIR=$(pwd) sudo -E mitmdump \
  --mode reverse:https://rpc.kindred-live.net:443/ \
  --listen-host 0.0.0.0 --listen-port 8000 \
  --ssl-insecure --set block_global=false --set keep_host_header=true \
  -s vg_interceptor.py
```

**Terminal 3 — mitmproxy port 443:**
```sh
cd vgf/mitm
VG_LOG_DIR=$(pwd) sudo -E mitmdump \
  --mode reverse:https://rpc.kindred-live.net:443/ \
  --listen-host 0.0.0.0 --listen-port 443 \
  --ssl-insecure --set block_global=false --set keep_host_header=true \
  -s vg_interceptor.py
```

## Output

- `vg_traffic.jsonl` — all JSON-RPC calls with full request/response bodies
- `matches/<timestamp>_<matchid>/` — per-match game server packet captures
  - `packets.bin` — raw binary (timestamp + direction + length + data per packet)
  - `packets.txt` — hex dump
  - `match_meta.json` — match metadata and packet summary

## Response modification

`vg_interceptor.py` patches server responses in real-time:

**Player stats:** level, skillTier, ELO, wins, karma, currency, winStreak, etc.
**Feature flags:** `featuresEnabled.inGameChat`, `leaderboards`, `liveEvents`
**Experiments:** activates disabled A/B test flags
**Match proxy:** rewrites game server host to intercept in-match traffic

Edit `PLAYER_PATCHES`, `CURRENCY_PATCHES` in `vg_interceptor.py` to change values.

## Files

| File | Purpose |
|---|---|
| `vg_interceptor.py` | mitmproxy addon — log, categorize, modify, track matches |
| `vg_game_proxy.py` | TCP proxy for in-match game server traffic |
| `vg_dns.py` | DNS spoofer for VG domains |
| `vg_log_viewer.py` | JSONL log viewer with --follow, --replay, --stats |
| `vg_jsonl_viewer.py` | Browser UI for `vg_traffic.jsonl` with filters and full JSON inspection |
| `ssl_bypass/` | fishhook-based SSL bypass dylib (Secure Transport hooks) |
| `setup.sh` | One-time setup: build dylib, inject, configure |
| `run.sh` | Launch mitmproxy with interceptor |

## Browser viewer

Use the web viewer when you want to inspect nested request/response JSON more comfortably:

```sh
cd vgf/mitm
python3 vg_jsonl_viewer.py --file vg_traffic.jsonl --open
```

Then open `http://127.0.0.1:8765` if you did not pass `--open`.

## Stats from first session

- **195 JSON-RPC calls** captured across 16 unique methods
- **3,257 in-match packets** (1.4MB) from one game
- Full session bootstrap (19.5KB), player data (14KB), skin manifest (160KB), talents (30KB)
- Response modification confirmed working in-game (level, currency, skill tier)
