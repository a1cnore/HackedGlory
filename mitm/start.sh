#!/bin/zsh
set -eo pipefail

SCRIPT_DIR="${0:a:h}"
cd "$SCRIPT_DIR"

echo "[+] Starting VG MITM stack"
echo "[*] VM DNS must be set to 192.168.64.1"
echo ""

cleanup() {
    echo ""
    echo "[*] Shutting down..."
    kill $DNS_PID $MITM8000_PID $MITM443_PID 2>/dev/null
    wait $DNS_PID $MITM8000_PID $MITM443_PID 2>/dev/null
    echo "[+] All processes stopped"
}
trap cleanup EXIT INT TERM

# Flush any leftover pfctl rules
sudo pfctl -d 2>/dev/null || true
sudo pfctl -F all 2>/dev/null || true

# DNS spoofer
sudo python3 vg_dns.py --host-ip 192.168.64.1 &
DNS_PID=$!
sleep 1

# mitmproxy port 8000 (game platform RPC)
VG_LOG_DIR="$SCRIPT_DIR" sudo -E mitmdump \
    --mode reverse:https://rpc.kindred-live.net:443/ \
    --listen-host 0.0.0.0 --listen-port 8000 \
    --ssl-insecure --set block_global=false --set keep_host_header=true \
    -s vg_interceptor.py 2>&1 | sed 's/^/[8000] /' &
MITM8000_PID=$!
sleep 1

# mitmproxy port 443 (session/startSession RPC)
VG_LOG_DIR="$SCRIPT_DIR" sudo -E mitmdump \
    --mode reverse:https://rpc.kindred-live.net:443/ \
    --listen-host 0.0.0.0 --listen-port 443 \
    --ssl-insecure --set block_global=false --set keep_host_header=true \
    -s vg_interceptor.py 2>&1 | sed 's/^/[443]  /' &
MITM443_PID=$!

echo "[+] DNS: PID $DNS_PID"
echo "[+] mitmproxy :8000 PID $MITM8000_PID"
echo "[+] mitmproxy :443  PID $MITM443_PID"
echo "[+] JSONL log: $SCRIPT_DIR/vg_traffic.jsonl"
echo "[*] Ctrl+C to stop all"
echo ""

wait
