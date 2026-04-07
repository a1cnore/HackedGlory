#!/usr/bin/env python3

from __future__ import annotations

import argparse
import html
import os
import plistlib
import socket
import sys
from http import HTTPStatus
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path
from typing import Any
from urllib.parse import quote
from zipfile import ZipFile


CHUNK_SIZE = 1024 * 1024


def detect_lan_ip() -> str:
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    try:
        sock.connect(("8.8.8.8", 80))
        return sock.getsockname()[0]
    except OSError:
        return "127.0.0.1"
    finally:
        sock.close()


def load_ipa_metadata(ipa_path: Path) -> dict[str, str]:
    with ZipFile(ipa_path) as archive:
        info_name = next(
            (name for name in archive.namelist() if name.startswith("Payload/") and name.endswith(".app/Info.plist")),
            None,
        )
        if info_name is None:
            raise RuntimeError(f"Could not find Info.plist inside {ipa_path}")

        with archive.open(info_name) as handle:
            info: dict[str, Any] = plistlib.load(handle)

    title = str(info.get("CFBundleDisplayName") or info.get("CFBundleName") or ipa_path.stem)
    bundle_id = str(info.get("CFBundleIdentifier") or "unknown.bundle")
    bundle_version = str(info.get("CFBundleVersion") or info.get("CFBundleShortVersionString") or "1")
    short_version = str(info.get("CFBundleShortVersionString") or bundle_version)
    minimum_os = str(info.get("MinimumOSVersion") or "unknown")

    return {
        "title": title,
        "bundle_id": bundle_id,
        "bundle_version": bundle_version,
        "short_version": short_version,
        "minimum_os": minimum_os,
    }


def format_size(size: int) -> str:
    units = ["B", "KB", "MB", "GB", "TB"]
    value = float(size)
    for unit in units:
        if value < 1024 or unit == units[-1]:
            if unit == "B":
                return f"{int(value)} {unit}"
            return f"{value:.1f} {unit}"
        value /= 1024
    return f"{size} B"


def parse_range_header(header: str, size: int) -> tuple[int, int] | None:
    if not header.startswith("bytes="):
        return None

    value = header[6:].strip()
    if "," in value:
        return None

    start_text, _, end_text = value.partition("-")
    if not start_text and not end_text:
        return None

    try:
        if start_text:
            start = int(start_text)
            end = int(end_text) if end_text else size - 1
        else:
            suffix = int(end_text)
            if suffix <= 0:
                return None
            start = max(size - suffix, 0)
            end = size - 1
    except ValueError:
        return None

    if start < 0 or end < start or start >= size:
        return None

    end = min(end, size - 1)
    return start, end


class IpaRequestHandler(BaseHTTPRequestHandler):
    server_version = "VGFIPAServer/1.0"

    def do_GET(self) -> None:
        self.route_request(include_body=True)

    def do_HEAD(self) -> None:
        self.route_request(include_body=False)

    def route_request(self, *, include_body: bool) -> None:
        if self.path in ("/", "/index.html"):
            self.serve_index(include_body=include_body)
            return

        if self.path == "/manifest.plist":
            self.serve_manifest(include_body=include_body)
            return

        if self.path == f"/files/{self.server.ipa_path.name}":
            self.serve_ipa(include_body=include_body)
            return

        self.send_error(HTTPStatus.NOT_FOUND, "Not found")

    def serve_index(self, *, include_body: bool) -> None:
        host = self.headers.get("Host") or f"{self.server.lan_ip}:{self.server.server_port}"
        ipa_name = self.server.ipa_path.name
        ipa_size = format_size(self.server.ipa_size)
        title = self.server.metadata["title"]
        version = self.server.metadata["short_version"]
        minimum_os = self.server.metadata["minimum_os"]
        escaped_title = html.escape(title)
        escaped_name = html.escape(ipa_name)
        quoted_ipa = quote(ipa_name)
        install_url = f"itms-services://?action=download-manifest&url=http://{host}/manifest.plist"

        body = f"""<!doctype html>
<html lang="en">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <title>{escaped_title} Download</title>
  <style>
    :root {{
      color-scheme: light;
      --bg: #f5f1e8;
      --panel: rgba(255, 252, 247, 0.92);
      --ink: #1e1d1a;
      --muted: #6a655b;
      --accent: #0f766e;
      --accent-2: #b45309;
      --border: rgba(30, 29, 26, 0.12);
    }}
    * {{ box-sizing: border-box; }}
    body {{
      margin: 0;
      min-height: 100vh;
      font-family: "Avenir Next", "Helvetica Neue", sans-serif;
      color: var(--ink);
      background:
        radial-gradient(circle at top left, rgba(15, 118, 110, 0.18), transparent 32%),
        radial-gradient(circle at bottom right, rgba(180, 83, 9, 0.16), transparent 30%),
        linear-gradient(135deg, #efe4d0 0%, var(--bg) 45%, #f8f5ee 100%);
      display: grid;
      place-items: center;
      padding: 24px;
    }}
    main {{
      width: min(720px, 100%);
      background: var(--panel);
      border: 1px solid var(--border);
      border-radius: 28px;
      padding: 28px;
      box-shadow: 0 24px 70px rgba(30, 29, 26, 0.12);
      backdrop-filter: blur(18px);
    }}
    h1 {{
      margin: 0 0 8px;
      font-size: clamp(2rem, 5vw, 3.4rem);
      line-height: 0.98;
      letter-spacing: -0.04em;
    }}
    p {{
      margin: 0;
      color: var(--muted);
      line-height: 1.5;
    }}
    .meta {{
      display: grid;
      grid-template-columns: repeat(auto-fit, minmax(160px, 1fr));
      gap: 12px;
      margin: 24px 0;
    }}
    .card {{
      border: 1px solid var(--border);
      border-radius: 18px;
      padding: 14px 16px;
      background: rgba(255, 255, 255, 0.55);
    }}
    .label {{
      display: block;
      font-size: 0.78rem;
      text-transform: uppercase;
      letter-spacing: 0.08em;
      color: var(--muted);
      margin-bottom: 6px;
    }}
    .value {{
      font-size: 1rem;
      font-weight: 600;
      word-break: break-word;
    }}
    .actions {{
      display: flex;
      flex-wrap: wrap;
      gap: 12px;
      margin-top: 28px;
    }}
    .button {{
      display: inline-flex;
      align-items: center;
      justify-content: center;
      min-height: 52px;
      padding: 0 18px;
      border-radius: 999px;
      border: 1px solid transparent;
      font-weight: 700;
      text-decoration: none;
      transition: transform 120ms ease, box-shadow 120ms ease;
    }}
    .button:hover {{
      transform: translateY(-1px);
      box-shadow: 0 12px 24px rgba(30, 29, 26, 0.12);
    }}
    .primary {{
      background: var(--ink);
      color: white;
    }}
    .secondary {{
      border-color: var(--border);
      color: var(--ink);
      background: rgba(255, 255, 255, 0.7);
    }}
    .notes {{
      margin-top: 24px;
      padding: 18px;
      border-radius: 18px;
      background: rgba(15, 118, 110, 0.08);
      border: 1px solid rgba(15, 118, 110, 0.16);
    }}
    code {{
      font-family: ui-monospace, SFMono-Regular, Menlo, monospace;
      font-size: 0.95em;
    }}
  </style>
</head>
<body>
  <main>
    <h1>{escaped_title}</h1>
    <p>Hosted from your Mac over plain HTTP for devices on the same Wi-Fi network.</p>
    <div class="meta">
      <div class="card"><span class="label">File</span><span class="value">{escaped_name}</span></div>
      <div class="card"><span class="label">Version</span><span class="value">{html.escape(version)}</span></div>
      <div class="card"><span class="label">Size</span><span class="value">{html.escape(ipa_size)}</span></div>
      <div class="card"><span class="label">Minimum iOS</span><span class="value">{html.escape(minimum_os)}</span></div>
    </div>
    <div class="actions">
      <a class="button primary" href="/files/{quoted_ipa}">Download IPA</a>
      <a class="button secondary" href="{html.escape(install_url)}">Try OTA Install</a>
    </div>
    <div class="notes">
      <p>On a jailbroken iPad, the reliable path is usually: download the IPA, open it in Filza or your package installer, then install from there. The OTA link is included, but plain HTTP install manifests are often blocked by normal iOS install rules.</p>
    </div>
  </main>
</body>
</html>
"""
        data = body.encode("utf-8")
        self.send_response(HTTPStatus.OK)
        self.send_header("Content-Type", "text/html; charset=utf-8")
        self.send_header("Content-Length", str(len(data)))
        self.end_headers()
        if include_body:
            self.wfile.write(data)

    def serve_manifest(self, *, include_body: bool) -> None:
        host = self.headers.get("Host") or f"{self.server.lan_ip}:{self.server.server_port}"
        ipa_url = f"http://{host}/files/{quote(self.server.ipa_path.name)}"
        metadata = self.server.metadata

        manifest = {
            "items": [
                {
                    "assets": [
                        {
                            "kind": "software-package",
                            "url": ipa_url,
                        }
                    ],
                    "metadata": {
                        "bundle-identifier": metadata["bundle_id"],
                        "bundle-version": metadata["bundle_version"],
                        "kind": "software",
                        "title": metadata["title"],
                    },
                }
            ]
        }

        data = plistlib.dumps(manifest, fmt=plistlib.FMT_XML)
        self.send_response(HTTPStatus.OK)
        self.send_header("Content-Type", "application/xml")
        self.send_header("Content-Length", str(len(data)))
        self.end_headers()
        if include_body:
            self.wfile.write(data)

    def serve_ipa(self, *, include_body: bool) -> None:
        size = self.server.ipa_size
        range_header = self.headers.get("Range")
        byte_range = parse_range_header(range_header, size) if range_header else None

        if range_header and byte_range is None:
            self.send_response(HTTPStatus.REQUESTED_RANGE_NOT_SATISFIABLE)
            self.send_header("Content-Range", f"bytes */{size}")
            self.end_headers()
            return

        if byte_range is None:
            start, end = 0, size - 1
            status = HTTPStatus.OK
        else:
            start, end = byte_range
            status = HTTPStatus.PARTIAL_CONTENT

        content_length = end - start + 1
        self.send_response(status)
        self.send_header("Content-Type", "application/octet-stream")
        self.send_header("Content-Disposition", f'attachment; filename="{self.server.ipa_path.name}"')
        self.send_header("Accept-Ranges", "bytes")
        self.send_header("Content-Length", str(content_length))
        if status == HTTPStatus.PARTIAL_CONTENT:
            self.send_header("Content-Range", f"bytes {start}-{end}/{size}")
        self.end_headers()

        if not include_body:
            return

        with self.server.ipa_path.open("rb") as handle:
            handle.seek(start)
            remaining = content_length
            while remaining > 0:
                chunk = handle.read(min(CHUNK_SIZE, remaining))
                if not chunk:
                    break
                self.wfile.write(chunk)
                remaining -= len(chunk)

    def log_message(self, format: str, *args: object) -> None:
        sys.stderr.write("%s - - [%s] %s\n" % (self.client_address[0], self.log_date_time_string(), format % args))


class IpaServer(ThreadingHTTPServer):
    def __init__(self, server_address: tuple[str, int], ipa_path: Path, metadata: dict[str, str], lan_ip: str):
        super().__init__(server_address, IpaRequestHandler)
        self.ipa_path = ipa_path
        self.ipa_size = ipa_path.stat().st_size
        self.metadata = metadata
        self.lan_ip = lan_ip


def build_parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(description="Serve an IPA over HTTP with a simple install page.")
    parser.add_argument(
        "--ipa",
        default="Vainglory_v140_fullmode_9922.ipa",
        help="Path to the IPA file to serve. Default: %(default)s",
    )
    parser.add_argument(
        "--port",
        type=int,
        default=8080,
        help="Port to listen on. Default: %(default)s",
    )
    parser.add_argument(
        "--bind",
        default="0.0.0.0",
        help="Address to bind. Default: %(default)s",
    )
    return parser


def main() -> int:
    args = build_parser().parse_args()
    ipa_path = Path(args.ipa).expanduser().resolve()
    if not ipa_path.is_file():
        print(f"IPA not found: {ipa_path}", file=sys.stderr)
        return 1

    metadata = load_ipa_metadata(ipa_path)
    lan_ip = detect_lan_ip()
    server = IpaServer((args.bind, args.port), ipa_path=ipa_path, metadata=metadata, lan_ip=lan_ip)

    print(f"Serving: {ipa_path.name}")
    print(f"Title: {metadata['title']}")
    print(f"LAN page: http://{lan_ip}:{args.port}/")
    print(f"Direct IPA: http://{lan_ip}:{args.port}/files/{quote(ipa_path.name)}")
    print("Press Ctrl+C to stop.")

    try:
        server.serve_forever()
    except KeyboardInterrupt:
        print("\nStopping server.")
    finally:
        server.server_close()

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
