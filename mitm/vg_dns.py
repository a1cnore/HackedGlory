#!/usr/bin/env python3
"""
vg_dns — Minimal DNS server that spoofs VG domains to the host IP.
All other queries are forwarded to a real upstream DNS server.

Usage: sudo python3 vg_dns.py [--host-ip 192.168.64.1] [--upstream 8.8.8.8]
"""

from __future__ import annotations

import argparse
import socket
import struct
import sys
import threading

# Domains to redirect to host IP
SPOOF_DOMAINS = {
    "platform.superevil.net",
    "platform.superevilmegacorp.net",
    "preauth.superevil.net",
    "rpc.kindred-live.net",
    "gamefeeds.superevilmegacorp.net",
}

def parse_dns_name(data: bytes, offset: int) -> tuple[str, int]:
    labels = []
    while True:
        if offset >= len(data):
            break
        length = data[offset]
        if length == 0:
            offset += 1
            break
        if (length & 0xC0) == 0xC0:
            pointer = struct.unpack("!H", data[offset:offset+2])[0] & 0x3FFF
            sub_name, _ = parse_dns_name(data, pointer)
            labels.append(sub_name)
            offset += 2
            break
        offset += 1
        labels.append(data[offset:offset+length].decode("ascii", errors="replace"))
        offset += length
    return ".".join(labels), offset


def build_a_response(query: bytes, ip: str) -> bytes:
    # Parse question
    qid = query[:2]
    flags = b'\x81\x80'  # standard response, no error
    qdcount = struct.unpack("!H", query[4:6])[0]
    ancount = struct.pack("!H", qdcount)

    # Copy question section
    offset = 12
    for _ in range(qdcount):
        _, offset = parse_dns_name(query, offset)
        offset += 4  # qtype + qclass

    question = query[12:offset]

    # Build answer (pointer to question name + A record)
    ip_bytes = socket.inet_aton(ip)
    answer = b''
    # Re-parse to build individual answers
    off2 = 12
    for _ in range(qdcount):
        name_start = off2
        _, off2 = parse_dns_name(query, off2)
        qtype = struct.unpack("!H", query[off2:off2+2])[0]
        off2 += 4

        if qtype == 1:  # A record
            answer += b'\xc0\x0c'  # pointer to name in question
            answer += struct.pack("!HHI", 1, 1, 60)  # type A, class IN, TTL 60
            answer += struct.pack("!H", 4) + ip_bytes
        elif qtype == 28:  # AAAA — return empty to force IPv4
            pass

    header = qid + flags + struct.pack("!HH", qdcount, qdcount) + b'\x00\x00\x00\x00'
    # Recount answers
    actual_answers = answer.count(b'\xc0\x0c')
    header = qid + flags + struct.pack("!HHHH", qdcount, actual_answers, 0, 0)

    return header + question + answer


def forward_query(query: bytes, upstream: str) -> bytes | None:
    try:
        sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        sock.settimeout(3)
        sock.sendto(query, (upstream, 53))
        data, _ = sock.recvfrom(4096)
        sock.close()
        return data
    except Exception:
        return None


def should_spoof(name: str) -> bool:
    name = name.rstrip(".")
    if name in SPOOF_DOMAINS:
        return True
    # Also match subdomains
    for domain in SPOOF_DOMAINS:
        if name.endswith("." + domain):
            return True
    return False


def handle_query(data: bytes, addr: tuple, sock: socket.socket, host_ip: str, upstream: str) -> None:
    if len(data) < 12:
        return

    # Parse first question
    name, offset = parse_dns_name(data, 12)
    qtype = struct.unpack("!H", data[offset:offset+2])[0] if offset + 2 <= len(data) else 0

    if should_spoof(name):
        print(f"[dns] SPOOF {name} -> {host_ip}", file=sys.stderr)
        if qtype == 1:  # A record
            resp = build_a_response(data, host_ip)
            sock.sendto(resp, addr)
        elif qtype == 28:  # AAAA — return NXDOMAIN to force IPv4
            # Return empty response with no answers
            resp = data[:2] + b'\x81\x83' + data[4:]  # NXDOMAIN
            sock.sendto(resp, addr)
        else:
            resp = forward_query(data, upstream)
            if resp:
                sock.sendto(resp, addr)
    else:
        resp = forward_query(data, upstream)
        if resp:
            sock.sendto(resp, addr)


def main() -> None:
    parser = argparse.ArgumentParser(description="VG DNS spoofer")
    parser.add_argument("--host-ip", default="192.168.64.1", help="IP to return for VG domains")
    parser.add_argument("--upstream", default="8.8.8.8", help="Upstream DNS server")
    parser.add_argument("--port", type=int, default=53, help="Listen port")
    args = parser.parse_args()

    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    sock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    sock.bind((args.host_ip, args.port))

    print(f"[dns] listening on 0.0.0.0:{args.port}", file=sys.stderr)
    print(f"[dns] spoofing VG domains -> {args.host_ip}", file=sys.stderr)
    print(f"[dns] upstream: {args.upstream}", file=sys.stderr)
    print(f"[dns] domains: {', '.join(sorted(SPOOF_DOMAINS))}", file=sys.stderr)

    while True:
        try:
            data, addr = sock.recvfrom(4096)
            threading.Thread(target=handle_query, args=(data, addr, sock, args.host_ip, args.upstream), daemon=True).start()
        except KeyboardInterrupt:
            break

    sock.close()


if __name__ == "__main__":
    main()
