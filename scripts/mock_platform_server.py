#!/usr/bin/env python3

from __future__ import annotations

import argparse
import json
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path
from urllib.parse import urlparse


MOCK_PLAYER = {
    "playerUUID": "offline-player-0001",
    "playerHandle": "OfflineHero",
    "skillTier": 12,
    "rankProgress": 76,
    "wins_aral": 3,
    "wins_blitz": 11,
    "wins_casual": 27,
    "wins_ranked": 19,
    "winsToday": 2,
    "karmaLevel": 5,
    "karmaProgress": 82,
    "karmaSilverBonus": 15,
    "levelMinXP": 1000,
    "levelMaxXP": 2000,
    "currencies": {
        "glory": 4200,
        "ice": 150,
        "essence": 980
    },
    "ownedCards": [],
    "owned": [],
    "player_global_loadout": {
        "social_ping_pack": "default",
        "charm": "none"
    },
    "trophyCase": [],
    "accountPenaltyBoxData": {
        "penalty_qbanPoints": 0
    }
}

MOCK_SEASON = {
    "currentSeason": 99,
    "seasonId": 99,
    "rank": 7,
    "eloTier3v3": 1600,
    "eloTier5v5": 1725,
    "highestEloTier": 1725,
    "rankModels": [],
    "seasonModels": [],
    "playerAscensionData": {
        "ascensionRank": 8,
        "ascensionTokens": 120,
        "seasonTokenMap": {},
        "seasonRankCollectedMap": {},
        "seasonBattlePassRankCollectedMap": {}
    }
}


def load_contract(path: str) -> dict:
    return json.loads(Path(path).read_text())


def default_bootstrap(base_url: str) -> dict:
    return {
        "sessionToken": "offline-session-token",
        "notifyUrl": f"{base_url}/notify",
        "notifyFallbackUrl": f"{base_url}/notify-fallback",
        "bucketIncrementer": 1,
        "failoverThreshold": 3,
        "platformUrl": base_url,
        "state": "ok",
        "playerInfo": {**MOCK_PLAYER, **MOCK_SEASON},
        "playerUUID": MOCK_PLAYER["playerUUID"],
        "startSessionUrl": f"{base_url}/JSONRpc/startSessionForPlayer",
        "linked": False,
        "linkResult": "offline",
        "supportUrls": {
            "faq": "https://example.invalid/faq"
        },
        "chatUrl": "offline-chat",
        "chatPass": "offline-chat-pass",
        "teamUUID": "offline-team-0001",
        "enableStateUpdates": False,
        "missedStateUpdateMessagesThreshold": 5,
        "pingHostPortInfo": {
            "host": "127.0.0.1",
            "port": 0
        },
        "askRegistrationConsent": False,
        "pingPostToAnalytics": False,
        "sipPass": "offline-sip-pass",
        "sipUrl": "sip.offline.invalid",
        "sipRealm": "offline.invalid",
        "sipPort": 5060,
        "sipTransport": "udp",
        "turnPass": "offline-turn-pass",
        "turnUrl": "turn.offline.invalid",
        "turnRealm": "offline.invalid",
        "turnPort": 3478,
        "turnTransport": "udp",
        "stunUrl": "stun.offline.invalid",
        "stunPort": 3478,
        "stunTransport": "udp"
    }


class MockPlatformHandler(BaseHTTPRequestHandler):
    server_version = "VGFMock/0.1"

    def _json(self, code: int, payload: dict) -> None:
        body = json.dumps(payload).encode("utf-8")
        self.send_response(code)
        self.send_header("Content-Type", "application/json")
        self.send_header("Content-Length", str(len(body)))
        self.end_headers()
        self.wfile.write(body)

    def do_GET(self) -> None:
        parsed = urlparse(self.path)
        if parsed.path in {"/healthz", "/"}:
            self._json(
                200,
                {
                    "ok": True,
                    "service": "vainglory-offline-mock",
                    "path": parsed.path,
                },
            )
            return
        self._json(404, {"error": "not_found"})

    def do_POST(self) -> None:
        parsed = urlparse(self.path)
        if "/JSONRpc/" not in parsed.path:
            self._json(404, {"error": "not_found"})
            return

        length = int(self.headers.get("Content-Length", "0"))
        raw = self.rfile.read(length) if length else b"{}"
        try:
            payload = json.loads(raw.decode("utf-8"))
        except Exception:
            self._json(400, {"error": "invalid_json"})
            return

        method_from_url = parsed.path.rsplit("/", 1)[-1]
        method = payload.get("method") or method_from_url
        params = payload.get("params") or {}
        result = self.server.dispatch(method, params)  # type: ignore[attr-defined]

        self._json(
            200,
            {
                "ok": True,
                "method": method,
                "result": result,
            },
        )

    def log_message(self, format: str, *args) -> None:
        return


class MockPlatformServer(ThreadingHTTPServer):
    def __init__(self, server_address, handler_cls, contract: dict):
        super().__init__(server_address, handler_cls)
        self.contract = contract

    def dispatch(self, method: str, params: dict) -> dict:
        base_url = f"http://{self.server_address[0]}:{self.server_address[1]}"

        if method in {
            "authenticate",
            "createAccountForPlayer",
            "createGuestPlayer",
            "getPlayerForGuestAccount",
            "getPlayerFromPlatform",
            "startSessionForPlayer",
        }:
            data = default_bootstrap(base_url)
            data["requestEcho"] = params
            return data

        if method in {"getPlayerInfo", "getPlayerInfos"}:
            return {
                "playerInfo": {**MOCK_PLAYER, **MOCK_SEASON},
                "playerUUID": MOCK_PLAYER["playerUUID"],
            }

        if method in {"getLeaderboardData", "getAscensionDisplayData"}:
            return {
                "leaderboard": [],
                "rank": MOCK_SEASON["rank"],
                "skillTier": MOCK_PLAYER["skillTier"],
                "currentSeason": MOCK_SEASON["currentSeason"],
                "playerAscensionData": MOCK_SEASON["playerAscensionData"],
            }

        if method in {
            "getRewardsManifest",
            "getSeasonRewardsManifest",
            "getSkinManifest",
            "getCardBoxManifest",
            "getBuffManifest",
            "getForgeManifest",
        }:
            return {
                "manifestVersion": "offline-1",
                "items": [],
            }

        if method in {
            "getInventoryGroups",
            "getEquipmentSlotInfo",
            "getPlayerCardInventory",
            "getTrophyCase",
        }:
            return {
                "ownedCards": MOCK_PLAYER["ownedCards"],
                "currencies": MOCK_PLAYER["currencies"],
                "trophyCase": MOCK_PLAYER["trophyCase"],
            }

        if method in {
            "presenceBroadcast",
            "presenceSetReceiveBroadcast",
            "queryPendingMatch",
            "queryPlayerInboxMessages",
            "dismissReliableMessage",
            "notifyExitPostMatch",
            "notifyPlayerAction",
            "updateMatchInfo",
            "notifyGameResults",
        }:
            return {
                "ack": True,
                "state": "offline",
            }

        return {
            "mocked": True,
            "clusterHints": self.contract.get("clusters", []),
            "requestEcho": params,
        }


def main() -> None:
    parser = argparse.ArgumentParser(description="Run an offline Vainglory platform mock server.")
    parser.add_argument("--host", default="127.0.0.1")
    parser.add_argument("--port", type=int, default=8080)
    parser.add_argument(
        "--contract",
        default="reports/generated/mock_contract.json",
        help="Path to the inferred mock contract JSON.",
    )
    args = parser.parse_args()

    contract = load_contract(args.contract)
    server = MockPlatformServer((args.host, args.port), MockPlatformHandler, contract)
    print(f"offline mock server listening on http://{args.host}:{args.port}")
    try:
        server.serve_forever()
    except KeyboardInterrupt:
        pass
    finally:
        server.server_close()


if __name__ == "__main__":
    main()
