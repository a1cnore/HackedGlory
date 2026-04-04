#!/usr/bin/env python3
"""
Browser viewer for Vainglory MITM JSONL traffic logs.

Usage:
    python3 vg_jsonl_viewer.py
    python3 vg_jsonl_viewer.py --file vg_traffic.jsonl --port 8765 --open
"""

from __future__ import annotations

import argparse
import json
import sys
import threading
import webbrowser
from collections import Counter
from datetime import datetime, timezone
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path
from typing import Any
from urllib.parse import urlparse


def json_size(value: Any) -> int:
    try:
        return len(json.dumps(value, ensure_ascii=True, separators=(",", ":")))
    except (TypeError, ValueError):
        return 0


def short_value(value: Any, limit: int = 90) -> str:
    if isinstance(value, (dict, list)):
        text = json.dumps(value, ensure_ascii=True, sort_keys=True)
    else:
        text = str(value)
    if len(text) <= limit:
        return text
    return text[: limit - 3] + "..."


def value_kind(value: Any) -> str:
    if value is None:
        return "none"
    if isinstance(value, bool):
        return "bool"
    if isinstance(value, dict):
        return "object"
    if isinstance(value, list):
        return "array"
    if isinstance(value, str):
        return "string"
    if isinstance(value, (int, float)):
        return "number"
    return type(value).__name__


def format_timestamp(ts: float) -> str:
    return datetime.fromtimestamp(ts, tz=timezone.utc).astimezone().isoformat(timespec="seconds")


def build_summary(entry: dict[str, Any], idx: int) -> dict[str, Any]:
    req = entry.get("req")
    res = entry.get("res")
    extracted = entry.get("extracted")

    params_count = None
    if isinstance(req, dict) and isinstance(req.get("params"), list):
        params_count = len(req["params"])

    response_code = None
    return_kind = "none"
    if isinstance(res, dict):
        response_code = res.get("code")
        return_kind = value_kind(res.get("returnValue"))

    extracted_preview = ""
    if isinstance(extracted, dict) and extracted:
        preview_parts = [f"{key}={short_value(value, 32)}" for key, value in list(extracted.items())[:4]]
        extracted_preview = ", ".join(preview_parts)

    search_text = " ".join(
        str(part)
        for part in [
            entry.get("ts", ""),
            entry.get("method", ""),
            entry.get("category", ""),
            entry.get("host", ""),
            entry.get("url", ""),
            entry.get("status", ""),
            extracted_preview,
        ]
        if part not in (None, "")
    ).lower()

    return {
        "idx": idx,
        "ts": entry.get("ts", ""),
        "method": entry.get("method", ""),
        "category": entry.get("category", "other"),
        "host": entry.get("host", ""),
        "url": entry.get("url", ""),
        "status": entry.get("status"),
        "paramsCount": params_count,
        "responseCode": response_code,
        "returnKind": return_kind,
        "reqBytes": json_size(req),
        "resBytes": json_size(res),
        "extractedPreview": extracted_preview,
        "searchText": search_text,
    }


def parse_jsonl(path: Path) -> dict[str, Any]:
    entries: list[dict[str, Any]] = []
    summaries: list[dict[str, Any]] = []
    category_counts: Counter[str] = Counter()
    method_counts: Counter[str] = Counter()
    host_counts: Counter[str] = Counter()
    status_counts: Counter[str] = Counter()
    invalid_lines = 0
    first_ts = None
    last_ts = None

    with path.open("r", encoding="utf-8") as handle:
        for line_number, line in enumerate(handle, start=1):
            raw = line.strip()
            if not raw:
                continue

            try:
                entry = json.loads(raw)
            except json.JSONDecodeError:
                invalid_lines += 1
                continue

            idx = len(entries) + 1
            entries.append(entry)
            summaries.append(build_summary(entry, idx))

            category = str(entry.get("category", "other"))
            method = str(entry.get("method", ""))
            host = str(entry.get("host", ""))
            status = str(entry.get("status", ""))

            category_counts[category] += 1
            method_counts[method] += 1
            host_counts[host] += 1
            status_counts[status] += 1

            ts = entry.get("ts")
            if ts:
                if first_ts is None:
                    first_ts = ts
                last_ts = ts

    stat = path.stat()
    return {
        "entries": entries,
        "summary": {
            "file": {
                "name": path.name,
                "path": str(path.resolve()),
                "sizeBytes": stat.st_size,
                "modifiedAt": format_timestamp(stat.st_mtime),
            },
            "stats": {
                "totalEntries": len(entries),
                "invalidLines": invalid_lines,
                "firstTs": first_ts,
                "lastTs": last_ts,
                "categories": [{"value": key, "count": count} for key, count in sorted(category_counts.items())],
                "methods": [{"value": key, "count": count} for key, count in sorted(method_counts.items())],
                "hosts": [{"value": key, "count": count} for key, count in sorted(host_counts.items())],
                "statuses": [{"value": key, "count": count} for key, count in sorted(status_counts.items())],
            },
            "entries": summaries,
        },
        "cacheKey": (stat.st_mtime_ns, stat.st_size),
    }


class DatasetCache:
    def __init__(self, path: Path) -> None:
        self.path = path
        self.lock = threading.Lock()
        self.cache_key: tuple[int, int] | None = None
        self.data: dict[str, Any] | None = None

    def get(self) -> dict[str, Any]:
        stat = self.path.stat()
        cache_key = (stat.st_mtime_ns, stat.st_size)
        with self.lock:
            if self.data is None or self.cache_key != cache_key:
                self.data = parse_jsonl(self.path)
                self.cache_key = self.data["cacheKey"]
            return self.data


INDEX_HTML = """<!doctype html>
<html lang="en">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <title>VG JSONL Viewer</title>
  <style>
    :root {
      --paper: #f5efe4;
      --paper-2: #efe4d2;
      --ink: #182126;
      --muted: #5e6a73;
      --line: rgba(24, 33, 38, 0.12);
      --panel: rgba(255, 252, 246, 0.86);
      --panel-strong: rgba(255, 252, 246, 0.96);
      --accent: #0f766e;
      --accent-soft: rgba(15, 118, 110, 0.14);
      --auth: #0f766e;
      --inventory: #b45309;
      --match: #b91c1c;
      --other: #475569;
      --social: #7c3aed;
      --ok: #15803d;
      --radius: 18px;
      --shadow: 0 18px 40px rgba(24, 33, 38, 0.12);
      color-scheme: light;
      font-family: "Avenir Next", "Segoe UI", sans-serif;
    }

    * { box-sizing: border-box; }

    body {
      margin: 0;
      height: 100vh;
      overflow: hidden;
      color: var(--ink);
      background:
        radial-gradient(circle at top left, rgba(15, 118, 110, 0.16), transparent 28%),
        radial-gradient(circle at right 20%, rgba(217, 119, 6, 0.12), transparent 22%),
        linear-gradient(180deg, var(--paper), #f8f5ee 42%, #efe7da 100%);
    }

    .shell {
      display: grid;
      grid-template-rows: auto auto 1fr;
      gap: 16px;
      height: 100vh;
      overflow: hidden;
      padding: 20px;
    }

    .hero,
    .toolbar,
    .pane,
    .detail-empty {
      border: 1px solid var(--line);
      border-radius: var(--radius);
      background: var(--panel);
      backdrop-filter: blur(12px);
      box-shadow: var(--shadow);
    }

    .hero {
      display: grid;
      grid-template-columns: 1.8fr 1fr;
      gap: 16px;
      padding: 18px 20px;
    }

    .hero h1 {
      margin: 0 0 8px;
      font-size: clamp(1.7rem, 2.5vw, 2.6rem);
      line-height: 1;
      font-family: "Iowan Old Style", "Palatino Linotype", serif;
      letter-spacing: -0.03em;
    }

    .subtitle,
    .meta,
    .row-meta,
    .help,
    .empty-note {
      color: var(--muted);
    }

    .hero-grid {
      display: grid;
      grid-template-columns: repeat(4, minmax(0, 1fr));
      gap: 10px;
      align-content: start;
    }

    .stat {
      padding: 12px 14px;
      border-radius: 14px;
      background: rgba(255, 255, 255, 0.56);
      border: 1px solid rgba(24, 33, 38, 0.08);
    }

    .stat-label {
      display: block;
      margin-bottom: 6px;
      font-size: 0.74rem;
      letter-spacing: 0.08em;
      text-transform: uppercase;
      color: var(--muted);
    }

    .stat-value {
      font-size: 1.45rem;
      font-weight: 700;
    }

    .toolbar {
      display: grid;
      grid-template-columns: repeat(6, minmax(0, 1fr)) auto auto;
      gap: 10px;
      padding: 14px;
      align-items: end;
    }

    label {
      display: grid;
      gap: 6px;
      font-size: 0.84rem;
      color: var(--muted);
    }

    input,
    select,
    button {
      width: 100%;
      border: 1px solid rgba(24, 33, 38, 0.12);
      border-radius: 12px;
      padding: 10px 12px;
      font: inherit;
      color: var(--ink);
      background: rgba(255, 255, 255, 0.88);
    }

    button {
      cursor: pointer;
      font-weight: 600;
      background: linear-gradient(180deg, #fff, #f1f5f4);
    }

    button:hover {
      background: linear-gradient(180deg, #ffffff, #ebf6f4);
    }

    .toggle {
      display: flex;
      align-items: center;
      gap: 8px;
      padding: 10px 12px;
      border: 1px solid rgba(24, 33, 38, 0.12);
      border-radius: 12px;
      background: rgba(255, 255, 255, 0.76);
      color: var(--ink);
      white-space: nowrap;
    }

    .toggle input {
      width: auto;
      margin: 0;
      accent-color: var(--accent);
    }

    .content {
      display: grid;
      grid-template-columns: minmax(360px, 46%) minmax(420px, 1fr);
      gap: 16px;
      min-height: 0;
      overflow: hidden;
    }

    .pane {
      display: grid;
      min-height: 0;
      overflow: hidden;
    }

    .list-head,
    .detail-head {
      display: flex;
      justify-content: space-between;
      align-items: center;
      gap: 10px;
      padding: 14px 16px;
      border-bottom: 1px solid var(--line);
      background: var(--panel-strong);
    }

    .list-head h2,
    .detail-head h2 {
      margin: 0;
      font-size: 1rem;
    }

    .list {
      overflow: auto;
      min-height: 0;
      padding: 8px;
    }

    .row {
      padding: 12px 14px;
      border-radius: 14px;
      border: 1px solid transparent;
      cursor: pointer;
      transition: transform 120ms ease, border-color 120ms ease, background 120ms ease;
    }

    .row:hover {
      transform: translateY(-1px);
      border-color: rgba(24, 33, 38, 0.1);
      background: rgba(255, 255, 255, 0.72);
    }

    .row.active {
      background: linear-gradient(180deg, rgba(15, 118, 110, 0.12), rgba(255, 255, 255, 0.9));
      border-color: rgba(15, 118, 110, 0.22);
    }

    .row-top,
    .chips,
    .tab-row,
    .overview-grid {
      display: flex;
      gap: 8px;
      flex-wrap: wrap;
    }

    .row-top {
      justify-content: space-between;
      align-items: baseline;
      margin-bottom: 6px;
    }

    .method {
      font-weight: 700;
      font-size: 0.96rem;
      word-break: break-word;
    }

    .chip {
      display: inline-flex;
      align-items: center;
      gap: 6px;
      padding: 4px 9px;
      border-radius: 999px;
      font-size: 0.76rem;
      font-weight: 700;
      letter-spacing: 0.02em;
      background: rgba(71, 85, 105, 0.12);
      color: var(--other);
    }

    .chip.status-ok {
      background: rgba(21, 128, 61, 0.12);
      color: var(--ok);
    }

    .chip.auth { background: rgba(15, 118, 110, 0.14); color: var(--auth); }
    .chip.inventory { background: rgba(180, 83, 9, 0.14); color: var(--inventory); }
    .chip.match { background: rgba(185, 28, 28, 0.14); color: var(--match); }
    .chip.other { background: rgba(71, 85, 105, 0.14); color: var(--other); }
    .chip.social { background: rgba(124, 58, 237, 0.14); color: var(--social); }

    .row-preview {
      margin-top: 8px;
      font-size: 0.82rem;
      color: var(--muted);
      word-break: break-word;
    }

    .detail {
      display: grid;
      grid-template-rows: auto auto 1fr;
      min-height: 0;
    }

    .tab-row {
      padding: 12px 16px 0;
    }

    .tab {
      width: auto;
      padding: 8px 12px;
      border-radius: 999px;
      background: rgba(255, 255, 255, 0.78);
    }

    .tab.active {
      background: var(--accent);
      color: white;
      border-color: transparent;
    }

    .detail-body {
      overflow: auto;
      min-height: 0;
      padding: 16px;
    }

    .overview-grid {
      gap: 12px;
      margin-bottom: 16px;
    }

    .overview-card {
      min-width: 150px;
      padding: 12px 14px;
      border-radius: 14px;
      border: 1px solid var(--line);
      background: rgba(255, 255, 255, 0.64);
    }

    .overview-card .label {
      display: block;
      margin-bottom: 6px;
      font-size: 0.76rem;
      text-transform: uppercase;
      letter-spacing: 0.08em;
      color: var(--muted);
    }

    .json-block {
      margin: 0;
      padding: 16px;
      border-radius: 16px;
      border: 1px solid rgba(24, 33, 38, 0.08);
      background: #1d242b;
      color: #e8eef3;
      overflow: auto;
      font-size: 0.84rem;
      line-height: 1.5;
      font-family: "SFMono-Regular", "Menlo", "Consolas", monospace;
    }

    .detail-empty {
      display: grid;
      place-items: center;
      padding: 40px 24px;
      text-align: center;
    }

    .muted-button {
      background: rgba(255, 255, 255, 0.7);
    }

    .error {
      color: #991b1b;
      font-weight: 600;
    }

    @media (max-width: 1180px) {
      .hero,
      .content {
        grid-template-columns: 1fr;
      }

      .toolbar {
        grid-template-columns: repeat(2, minmax(0, 1fr));
      }

      .hero-grid {
        grid-template-columns: repeat(2, minmax(0, 1fr));
      }

      .list-pane,
      .detail {
        max-height: none;
      }
    }

    @media (max-width: 720px) {
      .shell {
        padding: 12px;
      }

      .toolbar,
      .hero-grid {
        grid-template-columns: 1fr;
      }

      .content {
        grid-template-columns: 1fr;
      }
    }
  </style>
</head>
<body>
  <div class="shell">
    <section class="hero">
      <div>
        <div class="subtitle">Vainglory MITM traffic browser</div>
        <h1 id="file-name">Loading...</h1>
        <div class="meta" id="file-meta">Reading JSONL summary...</div>
      </div>
      <div class="hero-grid" id="hero-stats"></div>
    </section>

    <section class="toolbar">
      <label>
        Search
        <input id="search" type="search" placeholder="method, host, URL, extracted fields">
      </label>
      <label>
        Category
        <select id="category-filter"></select>
      </label>
      <label>
        Method
        <select id="method-filter"></select>
      </label>
      <label>
        Host
        <select id="host-filter"></select>
      </label>
      <label>
        Status
        <select id="status-filter"></select>
      </label>
      <label>
        Sort
        <select id="sort-order">
          <option value="newest">Newest first</option>
          <option value="oldest">Oldest first</option>
          <option value="method">Method A-Z</option>
        </select>
      </label>
      <button id="refresh-button" type="button">Refresh</button>
      <label class="toggle">
        <input id="auto-refresh" type="checkbox" checked>
        Auto refresh
      </label>
    </section>

    <section class="content">
      <section class="pane list-pane">
        <div class="list-head">
          <h2 id="list-title">Requests</h2>
          <div class="help" id="list-meta"></div>
        </div>
        <div class="list" id="rows"></div>
      </section>

      <section class="pane detail" id="detail-pane">
        <div class="detail-head">
          <h2 id="detail-title">Select a row</h2>
          <div class="help" id="detail-meta"></div>
        </div>
        <div class="tab-row" id="tabs"></div>
        <div class="detail-body" id="detail-body">
          <div class="detail-empty">
            <div>
              <strong>No entry selected.</strong>
              <div class="empty-note">Choose a request on the left to inspect the full JSON payload.</div>
            </div>
          </div>
        </div>
      </section>
    </section>
  </div>

  <script>
    const state = {
      summary: null,
      detailCache: new Map(),
      selectedIdx: null,
      activeTab: "overview",
      refreshTimer: null,
      loading: false,
      error: "",
    };

    const TABS = [
      { id: "overview", label: "Overview" },
      { id: "request", label: "Request" },
      { id: "response", label: "Response" },
      { id: "full", label: "Full Entry" },
    ];

    const els = {
      fileName: document.getElementById("file-name"),
      fileMeta: document.getElementById("file-meta"),
      heroStats: document.getElementById("hero-stats"),
      rows: document.getElementById("rows"),
      listTitle: document.getElementById("list-title"),
      listMeta: document.getElementById("list-meta"),
      detailTitle: document.getElementById("detail-title"),
      detailMeta: document.getElementById("detail-meta"),
      detailBody: document.getElementById("detail-body"),
      tabs: document.getElementById("tabs"),
      search: document.getElementById("search"),
      category: document.getElementById("category-filter"),
      method: document.getElementById("method-filter"),
      host: document.getElementById("host-filter"),
      status: document.getElementById("status-filter"),
      sortOrder: document.getElementById("sort-order"),
      refreshButton: document.getElementById("refresh-button"),
      autoRefresh: document.getElementById("auto-refresh"),
    };

    function escapeHtml(value) {
      return String(value)
        .replaceAll("&", "&amp;")
        .replaceAll("<", "&lt;")
        .replaceAll(">", "&gt;")
        .replaceAll('"', "&quot;");
    }

    function formatBytes(bytes) {
      if (!bytes) return "0 B";
      const units = ["B", "KB", "MB", "GB"];
      let value = bytes;
      let index = 0;
      while (value >= 1024 && index < units.length - 1) {
        value /= 1024;
        index += 1;
      }
      const rounded = value >= 10 || index === 0 ? value.toFixed(0) : value.toFixed(1);
      return `${rounded} ${units[index]}`;
    }

    function compactTime(ts) {
      if (!ts) return "n/a";
      const date = new Date(ts);
      if (Number.isNaN(date.getTime())) return ts;
      return date.toLocaleString();
    }

    function populateSelect(select, items, currentValue) {
      const options = ['<option value="">All</option>'].concat(
        items.map((item) => `<option value="${escapeHtml(item.value)}">${escapeHtml(item.value)} (${item.count})</option>`)
      );
      select.innerHTML = options.join("");
      select.value = currentValue || "";
    }

    function renderHeader() {
      if (!state.summary) return;
      const { file, stats } = state.summary;
      els.fileName.textContent = file.name;
      els.fileMeta.textContent = `${file.path} | ${formatBytes(file.sizeBytes)} | updated ${file.modifiedAt}`;

      const cards = [
        ["Entries", stats.totalEntries],
        ["Methods", stats.methods.length],
        ["Categories", stats.categories.length],
        ["Window", `${compactTime(stats.firstTs)} -> ${compactTime(stats.lastTs)}`],
      ];

      els.heroStats.innerHTML = cards.map(([label, value]) => `
        <div class="stat">
          <span class="stat-label">${escapeHtml(label)}</span>
          <span class="stat-value">${escapeHtml(value)}</span>
        </div>
      `).join("");

      populateSelect(els.category, stats.categories, els.category.value);
      populateSelect(els.method, stats.methods, els.method.value);
      populateSelect(els.host, stats.hosts, els.host.value);
      populateSelect(els.status, stats.statuses, els.status.value);
    }

    function getFilteredEntries() {
      if (!state.summary) return [];
      const search = els.search.value.trim().toLowerCase();
      const category = els.category.value;
      const method = els.method.value;
      const host = els.host.value;
      const status = els.status.value;

      let items = state.summary.entries.filter((entry) => {
        if (category && entry.category !== category) return false;
        if (method && entry.method !== method) return false;
        if (host && entry.host !== host) return false;
        if (status && String(entry.status) !== status) return false;
        if (search && !entry.searchText.includes(search)) return false;
        return true;
      });

      if (els.sortOrder.value === "oldest") {
        items = items.slice().sort((a, b) => a.idx - b.idx);
      } else if (els.sortOrder.value === "method") {
        items = items.slice().sort((a, b) => a.method.localeCompare(b.method) || b.idx - a.idx);
      } else {
        items = items.slice().sort((a, b) => b.idx - a.idx);
      }

      return items;
    }

    function renderRows() {
      const items = getFilteredEntries();
      els.listTitle.textContent = `Requests (${items.length})`;
      els.listMeta.textContent = state.summary ? `${state.summary.stats.invalidLines} invalid lines skipped` : "";

      if (!items.length) {
        els.rows.innerHTML = `
          <div class="detail-empty">
            <div>
              <strong>No matching entries.</strong>
              <div class="empty-note">Adjust the search or filters.</div>
            </div>
          </div>
        `;
        renderDetail();
        return;
      }

      if (!items.some((item) => item.idx === state.selectedIdx)) {
        state.selectedIdx = items[0].idx;
      }

      els.rows.innerHTML = items.map((entry) => {
        const isActive = entry.idx === state.selectedIdx ? "active" : "";
        const categoryClass = escapeHtml(entry.category || "other");
        const statusClass = entry.status >= 200 && entry.status < 300 ? "status-ok" : "";

        return `
          <article class="row ${isActive}" data-idx="${entry.idx}">
            <div class="row-top">
              <div class="method">${escapeHtml(entry.method || "unknown")}</div>
              <div class="meta">#${entry.idx}</div>
            </div>
            <div class="chips">
              <span class="chip ${categoryClass}">${escapeHtml(entry.category)}</span>
              <span class="chip ${statusClass}">${escapeHtml(entry.status)}</span>
              <span class="chip">${escapeHtml(entry.host || "unknown host")}</span>
              <span class="chip">${escapeHtml(formatBytes(entry.reqBytes))} req</span>
              <span class="chip">${escapeHtml(formatBytes(entry.resBytes))} res</span>
            </div>
            <div class="row-preview">${escapeHtml(entry.ts)}${entry.extractedPreview ? ` | ${escapeHtml(entry.extractedPreview)}` : ""}</div>
          </article>
        `;
      }).join("");

      els.rows.querySelectorAll(".row").forEach((row) => {
        row.addEventListener("click", () => {
          const idx = Number(row.dataset.idx);
          selectEntry(idx);
        });
      });

      renderDetail();
    }

    async function fetchDetail(idx) {
      if (state.detailCache.has(idx)) {
        return state.detailCache.get(idx);
      }

      const response = await fetch(`/api/entry/${idx}`, { cache: "no-store" });
      if (!response.ok) {
        throw new Error(`Failed to load entry ${idx}`);
      }
      const payload = await response.json();
      state.detailCache.set(idx, payload.entry);
      return payload.entry;
    }

    function renderTabs() {
      els.tabs.innerHTML = TABS.map((tab) => `
        <button type="button" class="tab ${tab.id === state.activeTab ? "active" : ""}" data-tab="${tab.id}">
          ${escapeHtml(tab.label)}
        </button>
      `).join("");

      els.tabs.querySelectorAll(".tab").forEach((button) => {
        button.addEventListener("click", () => {
          state.activeTab = button.dataset.tab;
          renderDetail();
        });
      });
    }

    function renderJsonBlock(value) {
      return `<pre class="json-block">${escapeHtml(JSON.stringify(value, null, 2))}</pre>`;
    }

    function renderDetail() {
      renderTabs();

      if (!state.selectedIdx) {
        els.detailTitle.textContent = "Select a row";
        els.detailMeta.textContent = "";
        els.detailBody.innerHTML = `
          <div class="detail-empty">
            <div>
              <strong>No entry selected.</strong>
              <div class="empty-note">Choose a request on the left to inspect the full JSON payload.</div>
            </div>
          </div>
        `;
        return;
      }

      const summary = state.summary.entries.find((entry) => entry.idx === state.selectedIdx);
      if (!summary) {
        els.detailBody.innerHTML = `
          <div class="detail-empty">
            <div>
              <strong>Selected entry is no longer available.</strong>
              <div class="empty-note">Refresh or choose another request.</div>
            </div>
          </div>
        `;
        return;
      }

      els.detailTitle.textContent = `${summary.method || "unknown"} (#${summary.idx})`;
      els.detailMeta.textContent = `${summary.category} | ${summary.host} | ${summary.ts}`;

      const cached = state.detailCache.get(state.selectedIdx);
      if (!cached) {
        els.detailBody.innerHTML = `
          <div class="detail-empty">
            <div>
              <strong>Loading entry ${summary.idx}...</strong>
              <div class="empty-note">Requesting full JSON payload.</div>
            </div>
          </div>
        `;
        fetchDetail(state.selectedIdx)
          .then(() => renderDetail())
          .catch((error) => {
            els.detailBody.innerHTML = `<div class="error">${escapeHtml(error.message)}</div>`;
          });
        return;
      }

      const overview = {
        ts: cached.ts,
        method: cached.method,
        category: cached.category,
        host: cached.host,
        url: cached.url,
        status: cached.status,
        extracted: cached.extracted,
      };

      const cards = [
        ["HTTP status", cached.status ?? "n/a"],
        ["Request size", formatBytes(summary.reqBytes)],
        ["Response size", formatBytes(summary.resBytes)],
        ["Params", summary.paramsCount ?? "n/a"],
        ["RPC code", summary.responseCode ?? "n/a"],
        ["Return kind", summary.returnKind],
      ];

      if (state.activeTab === "overview") {
        els.detailBody.innerHTML = `
          <div class="overview-grid">
            ${cards.map(([label, value]) => `
              <div class="overview-card">
                <span class="label">${escapeHtml(label)}</span>
                <strong>${escapeHtml(value)}</strong>
              </div>
            `).join("")}
          </div>
          ${renderJsonBlock(overview)}
        `;
      } else if (state.activeTab === "request") {
        els.detailBody.innerHTML = renderJsonBlock(cached.req ?? null);
      } else if (state.activeTab === "response") {
        els.detailBody.innerHTML = renderJsonBlock(cached.res ?? null);
      } else {
        els.detailBody.innerHTML = renderJsonBlock(cached);
      }
    }

    async function loadSummary() {
      if (state.loading) return;
      state.loading = true;
      try {
        const response = await fetch("/api/summary", { cache: "no-store" });
        if (!response.ok) {
          throw new Error("Failed to load JSONL summary");
        }
        const payload = await response.json();
        state.summary = payload;
        renderHeader();
        renderRows();
      } catch (error) {
        els.rows.innerHTML = `<div class="detail-empty"><div class="error">${escapeHtml(error.message)}</div></div>`;
        els.detailBody.innerHTML = `<div class="detail-empty"><div class="error">${escapeHtml(error.message)}</div></div>`;
      } finally {
        state.loading = false;
      }
    }

    function selectEntry(idx) {
      state.selectedIdx = idx;
      renderRows();
    }

    function scheduleRefresh() {
      if (state.refreshTimer) {
        clearInterval(state.refreshTimer);
      }
      if (els.autoRefresh.checked) {
        state.refreshTimer = setInterval(loadSummary, 3000);
      }
    }

    [els.search, els.category, els.method, els.host, els.status, els.sortOrder].forEach((element) => {
      element.addEventListener("input", renderRows);
      element.addEventListener("change", renderRows);
    });

    els.refreshButton.addEventListener("click", () => {
      state.detailCache.clear();
      loadSummary();
    });

    els.autoRefresh.addEventListener("change", scheduleRefresh);

    renderTabs();
    scheduleRefresh();
    loadSummary();
  </script>
</body>
</html>
"""


class ViewerHandler(BaseHTTPRequestHandler):
    dataset: DatasetCache

    def do_GET(self) -> None:  # noqa: N802
        self.handle_request(include_body=True)

    def do_HEAD(self) -> None:  # noqa: N802
        self.handle_request(include_body=False)

    def handle_request(self, include_body: bool) -> None:
        parsed = urlparse(self.path)
        path = parsed.path

        if path == "/":
            self.send_html(INDEX_HTML, include_body=include_body)
            return

        if path == "/api/summary":
            dataset = self.dataset.get()
            self.send_json(dataset["summary"], include_body=include_body)
            return

        if path.startswith("/api/entry/"):
            raw_idx = path.rsplit("/", 1)[-1]
            try:
                idx = int(raw_idx)
            except ValueError:
                self.send_json({"error": "invalid entry index"}, status=400, include_body=include_body)
                return

            dataset = self.dataset.get()
            entries = dataset["entries"]
            if idx < 1 or idx > len(entries):
                self.send_json({"error": "entry not found"}, status=404, include_body=include_body)
                return

            self.send_json({"entry": entries[idx - 1]}, include_body=include_body)
            return

        self.send_json({"error": "not found"}, status=404, include_body=include_body)

    def send_html(self, body: str, status: int = 200, include_body: bool = True) -> None:
        data = body.encode("utf-8")
        self.send_response(status)
        self.send_header("Content-Type", "text/html; charset=utf-8")
        self.send_header("Content-Length", str(len(data)))
        self.send_header("Cache-Control", "no-store")
        self.end_headers()
        if include_body:
            self.wfile.write(data)

    def send_json(self, payload: Any, status: int = 200, include_body: bool = True) -> None:
        data = json.dumps(payload, ensure_ascii=False).encode("utf-8")
        self.send_response(status)
        self.send_header("Content-Type", "application/json; charset=utf-8")
        self.send_header("Content-Length", str(len(data)))
        self.send_header("Cache-Control", "no-store")
        self.end_headers()
        if include_body:
            self.wfile.write(data)

    def log_message(self, fmt: str, *args: Any) -> None:
        sys.stderr.write(
            "[viewer] %s - - [%s] %s\n"
            % (self.address_string(), self.log_date_time_string(), fmt % args)
        )


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description="Serve a browser viewer for a JSONL traffic file")
    parser.add_argument("--file", default="vg_traffic.jsonl", help="JSONL file to inspect")
    parser.add_argument("--host", default="127.0.0.1", help="Bind host")
    parser.add_argument("--port", type=int, default=8765, help="Bind port")
    parser.add_argument("--open", action="store_true", help="Open the viewer in the default browser")
    return parser.parse_args()


def main() -> None:
    args = parse_args()
    path = Path(args.file).expanduser().resolve()
    if not path.exists():
        raise SystemExit(f"File not found: {path}")

    dataset = DatasetCache(path)
    handler = type("BoundViewerHandler", (ViewerHandler,), {"dataset": dataset})
    server = ThreadingHTTPServer((args.host, args.port), handler)
    url = f"http://{args.host}:{args.port}"

    print(f"[viewer] serving {path}")
    print(f"[viewer] open {url}")

    if args.open:
        webbrowser.open(url)

    try:
        server.serve_forever()
    except KeyboardInterrupt:
        print("\n[viewer] shutting down")
    finally:
        server.server_close()


if __name__ == "__main__":
    main()
