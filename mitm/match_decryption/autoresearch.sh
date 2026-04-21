#!/bin/bash
set -euo pipefail

python3 -m py_compile \
  scripts/decode_match_packets.py \
  scripts/evaluate_decode_coverage.py \
  vg_match_dashboard.py \
  vg_dashboard_server.py

python3 scripts/evaluate_decode_coverage.py
