#!/bin/zsh
set -eo pipefail

SCRIPT_DIR="${0:a:h}"

echo "[+] Starting VG MITM interceptor"
echo "[*] Requires: DNS server running (sudo python3 vg_dns.py --host-ip 192.168.64.1)"
echo "[*] Requires: VM DNS set to 192.168.64.1"
echo "[*] Requires: mitmproxy CA cert trusted on VM"
echo ""

LOG_FILE="$SCRIPT_DIR/vg_traffic.jsonl"
echo "[*] JSONL log: $LOG_FILE"
echo "[*] Ctrl+C to stop"
echo ""

VG_LOG_DIR="$SCRIPT_DIR" sudo -E mitmdump \
    --mode reverse:https://rpc.kindred-live.net:443/ \
    --listen-host 0.0.0.0 \
    --listen-port 8000 \
    --ssl-insecure \
    --set block_global=false \
    --set keep_host_header=true \
    -s "$SCRIPT_DIR/vg_interceptor.py"
