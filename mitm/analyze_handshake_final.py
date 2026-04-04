#!/usr/bin/env python3
"""
Final comprehensive handshake analysis + key verification tool.

Summary of findings:
1. AUTH_TOKEN: [2B len=72][40B encrypted data][32B = 4x Blowfish(key, 0x00*8)]
   - All 40 auth bytes are variable across matches (different key per match)
   - 40B = 5 Blowfish ECB blocks

2. SERVER_HELLO: [2B len=104][24B encrypted][8B zeros_enc][24B encrypted][40B = 5x zeros_enc][8B encrypted]
   - Structure: 3 data blocks + 1 zero block + 3 data blocks + 5 zero blocks + 1 data block
   - 13 total Blowfish ECB blocks

3. Key is PER-MATCH (different zeros_pattern each time)

4. Key is NOT derived from any obvious combination of:
   - matchId, playerUUID, session_id (raw bytes or ASCII, with or without salt)
   - MD5, SHA1, SHA256, HMAC of the above
   - JWT fields, update RPC fields
   - Any substring of AUTH_TOKEN or SERVER_HELLO

5. The HTTPS layer sends only: host, port, matchId, state, version UUIDs, ttl
   No encryption key field visible.

6. Possible explanations:
   a) The key is derived using a server-side secret we don't have
   b) The key comes through the WebSocket notification channel
   c) The key is in the `update` response but in a field our interceptor strips
   d) The key is generated from a PRNG seeded with data we can observe
   e) The key is embedded in the game binary's handshake code (unlikely given per-match)

This script provides the --force-key flag implementation for vg_game_proxy.py.
"""

import hashlib
import struct
import sys
from pathlib import Path
from Crypto.Cipher import Blowfish

SALT = bytes.fromhex(
    "467c46341a2f5f1ea778c8d74b1ca88b459d33ab9685e0e3f378e7b493322ceb"
    "4036be8b31396d3330ddaa6d7031415efe903f60be8834c53299e3e8877c3a26"
)


def read_packets(bin_path):
    packets = []
    with open(bin_path, "rb") as f:
        while True:
            header = f.read(13)
            if len(header) < 13:
                break
            ts = struct.unpack("!d", header[:8])[0]
            direction = "C->S" if header[8] == 0 else "S->C"
            length = struct.unpack("!I", header[9:13])[0]
            data = f.read(length)
            if len(data) < length:
                break
            packets.append((ts, direction, data))
    return packets


def verify_key(key_hex: str, match_dir: str):
    """Verify a key against a match capture."""
    key = bytes.fromhex(key_hex)
    match_path = Path(match_dir)
    packets = read_packets(match_path / "packets.bin")

    if len(packets) < 5:
        print(f"  Not enough packets in {match_dir}")
        return False

    cipher = Blowfish.new(key, Blowfish.MODE_ECB)

    # Check zeros pattern in AUTH_TOKEN
    auth_data = packets[2][2][2:]  # skip 2B length
    zeros_area = auth_data[40:48]  # first zeros block
    expected_zeros_enc = cipher.encrypt(b'\x00' * 8)

    if zeros_area == expected_zeros_enc:
        print(f"  AUTH_TOKEN zeros: MATCH ({zeros_area.hex()})")
    else:
        print(f"  AUTH_TOKEN zeros: MISMATCH (got {zeros_area.hex()}, expected {expected_zeros_enc.hex()})")
        return False

    # Decrypt first 5 blocks of AUTH_TOKEN
    print(f"  AUTH_TOKEN decrypted plaintext:")
    for i in range(5):
        block = auth_data[i*8:(i+1)*8]
        decrypted = cipher.decrypt(block)
        print(f"    Block {i}: {block.hex()} -> {decrypted.hex()}")

    # Decrypt SERVER_HELLO
    server_data = packets[3][2][2:]
    print(f"  SERVER_HELLO decrypted:")
    for i in range(0, len(server_data), 8):
        block = server_data[i:i+8]
        if len(block) == 8:
            decrypted = cipher.decrypt(block)
            is_zero = decrypted == b'\x00' * 8
            print(f"    [{i:3d}:{i+8:3d}] {block.hex()} -> {decrypted.hex()}{' (ZEROS)' if is_zero else ''}")

    # Decrypt first encrypted message (packet #5, C->S)
    first_msg = packets[4][2]
    msg_len = struct.unpack("!H", first_msg[:2])[0]
    msg_content = first_msg[2:]
    print(f"\n  First encrypted C->S message ({len(msg_content)}B content):")
    if len(msg_content) >= 8:
        decrypted = cipher.decrypt(msg_content[:8])
        opcode = struct.unpack("!H", decrypted[:2])[0]
        print(f"    First 8B: {msg_content[:8].hex()} -> {decrypted.hex()}")
        print(f"    Opcode: 0x{opcode:04x} ({'VALID' if 0x000b <= opcode <= 0x0490 else 'INVALID'})")

    # Decrypt first encrypted S->C message (packet #6)
    first_srv = packets[5][2]
    srv_content = first_srv[2:]
    print(f"\n  First encrypted S->C message ({len(srv_content)}B content):")
    if len(srv_content) >= 8:
        decrypted = cipher.decrypt(srv_content[:8])
        opcode = struct.unpack("!H", decrypted[:2])[0]
        print(f"    First 8B: {srv_content[:8].hex()} -> {decrypted.hex()}")
        print(f"    Opcode: 0x{opcode:04x} ({'VALID' if 0x000b <= opcode <= 0x0490 else 'INVALID'})")

    return True


def compute_forced_key():
    """Compute the key that would result from zeroed auth data."""
    # If we zero out the auth_data (first 40 bytes of AUTH_TOKEN content),
    # the key MIGHT be MD5(salt + zeros_40) -- but we don't know the derivation.
    # If the key is random and NOT derived from auth_data, zeroing it won't help.

    # However, if we can get the game to connect with a known key, we can:
    # 1. Use the MITM proxy to replace AUTH_TOKEN with our own
    # 2. Use a known key to encrypt/decrypt all traffic

    # For now, compute what the zeros pattern would be for a known key
    known_key = hashlib.md5(SALT + b'\x00' * 40).digest()
    cipher = Blowfish.new(known_key, Blowfish.MODE_ECB)
    zeros_enc = cipher.encrypt(b'\x00' * 8)
    print(f"\nForced key (MD5(salt + zeros_40B)): {known_key.hex()}")
    print(f"Blowfish(forced_key, 0x00*8) = {zeros_enc.hex()}")
    return known_key


def main():
    import argparse
    parser = argparse.ArgumentParser(description="Handshake analysis and key verification")
    parser.add_argument("--verify-key", help="Verify a hex key against a match capture")
    parser.add_argument("--match-dir", help="Match directory for --verify-key")
    parser.add_argument("--compute-forced", action="store_true",
                       help="Compute the forced key for zeroed auth data")
    parser.add_argument("--summary", action="store_true",
                       help="Print analysis summary")
    args = parser.parse_args()

    if args.verify_key and args.match_dir:
        verify_key(args.verify_key, args.match_dir)
    elif args.compute_forced:
        compute_forced_key()
    elif args.summary or not any(vars(args).values()):
        print_summary()


def print_summary():
    """Print comprehensive analysis summary."""
    match_dirs = [
        ("ff8a37e1", Path(__file__).parent / "matches" / "20260403_150848_ff8a37e1"),
        ("8033dd36", Path(__file__).parent / "matches" / "20260403_192414_8033dd36"),
        ("b98d3255", Path(__file__).parent / "matches" / "20260403_213752_b98d3255"),
    ]

    print("=" * 80)
    print("VAINGLORY TCP HANDSHAKE ANALYSIS SUMMARY")
    print("=" * 80)

    print("""
PROTOCOL STRUCTURE:
  1. C->S HANDSHAKE_HELLO (136B):
     [2B len=0x0086][2B proto_ver=5][128B client_IP_ascii_nullpad][2B pad=0][2B port]

  2. S->C HANDSHAKE_ACK (5B):
     [2B len=3][2B resp_code=6][1B flags=0]

  3. C->S AUTH_TOKEN (74B):
     [2B len=0x0048][40B encrypted_auth_data][32B = 4x Blowfish_ECB(key, 0x00*8)]
     The 40B auth data = 5 Blowfish ECB blocks of unknown plaintext.

  4. S->C SERVER_HELLO (106B):
     [2B len=0x0068][24B enc_data_A][8B zeros_enc][24B enc_data_B][40B = 5x zeros_enc][8B enc_data_C]
     Structure: [3 blocks data][1 block zeros][3 blocks data][5 blocks zeros][1 block data]

  5. C->S FIRST_ENCRYPTED (10B):
     [2B len=8][8B Blowfish_ECB encrypted content]

  6. S->C FIRST_ENCRYPTED (variable size):
     [2B len][N bytes Blowfish_ECB encrypted content]

  After step 4, all communication is Blowfish ECB encrypted.
  Decrypted content format: [2B BE opcode (0x000b-0x0490)][payload]
""")

    for mid, match_dir in match_dirs:
        packets = read_packets(match_dir / "packets.bin")
        auth_data = packets[2][2][2:][:40]
        server_data = packets[3][2][2:]

        # Extract zeros pattern
        zp = auth_data[40:48] if len(packets[2][2]) >= 50 else packets[2][2][42:50]
        # Actually re-read properly
        full_auth = packets[2][2][2:]  # 72 bytes
        zp = full_auth[40:48]

        # Server sections
        server_A = server_data[0:24]
        server_Z1 = server_data[24:32]
        server_B = server_data[32:56]
        server_Z2_5 = server_data[56:96]
        server_C = server_data[96:104]

        print(f"\n  Match {mid}:")
        print(f"    Zeros pattern (Blowfish(key, 0x00*8)): {zp.hex()}")
        print(f"    AUTH data [0:40]: {auth_data.hex()}")
        print(f"    SERVER A [0:24]:  {server_A.hex()}")
        print(f"    SERVER B [32:56]: {server_B.hex()}")
        print(f"    SERVER C [96:]:   {server_C.hex()}")

    print("""
KEY DERIVATION STATUS:
  TESTED (all failed):
    - MD5/SHA1/SHA256(salt + matchId)         [raw bytes and ASCII, all UUID formats]
    - MD5/SHA1/SHA256(salt + playerUUID)       [correct per-match UUID used]
    - MD5/SHA1/SHA256(salt + sessionId)
    - All combinations of matchId + playerUUID + sessionId [with/without salt]
    - HMAC-MD5/SHA1/SHA256 with salt as key
    - XOR combinations of auth, server data, UUIDs
    - Raw substrings of auth/server as Blowfish key
    - All substrings of AUTH_TOKEN/SERVER_HELLO with MD5(salt + slice)
    - JWT signature bytes, _entropy field
    - chatPass field
    - All unique string values from 2461 HTTPS traffic entries

  CONCLUSION:
    The Blowfish key cannot be derived from data visible in the HTTPS layer
    (matchId, playerUUID, sessionId) or from the TCP handshake data alone.

    The key is likely:
    a) Generated server-side and delivered through a channel not captured
       (e.g., WebSocket notification, or a field in the update RPC that
       the interceptor doesn't log), OR
    b) Derived using a server-side secret not present in the client binary

  NEXT STEPS:
    1. Capture the ORIGINAL (unmodified) update RPC response with state=playing
       to check for additional fields (the interceptor currently rewrites host)
    2. Capture WebSocket traffic on the notify channel
    3. Try the --force-key approach: replace AUTH_TOKEN with known data and
       see if the server rejects the connection or uses our key
""")

    # Print forced key info
    print("  FORCED KEY APPROACH:")
    forced_key = hashlib.md5(SALT + b'\x00' * 40).digest()
    cipher = Blowfish.new(forced_key, Blowfish.MODE_ECB)
    forced_zeros = cipher.encrypt(b'\x00' * 8)
    print(f"    If auth_data is zeroed, MD5(salt + 0x00*40) = {forced_key.hex()}")
    print(f"    Blowfish(forced_key, 0x00*8) = {forced_zeros.hex()}")
    print(f"    A new AUTH_TOKEN would be: 0048 + 00*40 + {forced_zeros.hex()} * 4")


if __name__ == "__main__":
    main()
