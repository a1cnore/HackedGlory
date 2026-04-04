#!/bin/bash
# Setup and run Frida hooks for Vainglory match protocol capture.
#
# Prerequisites:
#   - frida-tools: pip3 install frida-tools
#   - frida-server on the iOS VM (or frida-gadget in the IPA)
#
# Usage:
#   ./frida_setup.sh [vm-ip]          # default: 192.168.64.7
#   ./frida_setup.sh gadget           # if using frida-gadget

set -euo pipefail
cd "$(dirname "$0")/.."

VM_IP="${1:-192.168.64.7}"
SCRIPT="scripts/frida_match_hook.js"
LOG_DIR="mitm/frida_captures"
TIMESTAMP=$(date +%Y%m%d_%H%M%S)
LOG_FILE="$LOG_DIR/${TIMESTAMP}_frida.jsonl"

mkdir -p "$LOG_DIR"

echo "=== Vainglory Frida Match Hook ==="
echo "VM IP:  $VM_IP"
echo "Script: $SCRIPT"
echo "Log:    $LOG_FILE"
echo ""

if [ "$VM_IP" = "gadget" ]; then
    echo "Mode: frida-gadget (attach to Gadget process)"
    echo "Waiting for app launch..."
    frida -H "$VM_IP" -n Gadget -l "$SCRIPT" 2>&1 | tee "$LOG_FILE"
else
    echo "Mode: frida-server (attach to GameKindred)"
    echo ""
    echo "Make sure frida-server is running on the VM:"
    echo "  ssh root@$VM_IP 'frida-server -D &'"
    echo ""
    echo "Attaching..."
    frida -H "$VM_IP" -n GameKindred -l "$SCRIPT" 2>&1 | tee "$LOG_FILE"
fi

echo ""
echo "Capture saved to: $LOG_FILE"
echo "View with: python3 scripts/frida_viewer.py $LOG_FILE"
