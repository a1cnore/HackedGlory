# Vainglory iOS Client Static Report

Scope: passive local analysis only. This report was built from `Info.plist`, `Startup.ini`, the arm64 Mach-O binary `Payload/GameKindred.app/GameKindred`, and light inspection of the bundled `Data/` assets. No live traffic capture, runtime patching, or TLS bypassing was performed.

## App identity

- App name: `Vainglory`
- Bundle id: `com.superevilmegacorp.kindred`
- Version: `4.13.4`
- Build: `147219`
- Binary: arm64 Mach-O iOS executable
- `NSAppTransportSecurity.NSAllowsArbitraryLoads = true`
- `Startup.ini` contains:

```ini
[Platform]
port = 8000
```

## Strong network findings

These are the most relevant service strings found directly in the binary:

- `platform.superevil.net`
- `platform.superevilmegacorp.net`
- `http://preauth.superevil.net/kindred/live/[REVISION]-status-redirect`
- `http://gamefeeds.superevilmegacorp.net/server-status-redirect.[LANG]`
- `%s/JSONRpc/%s`
- `https://%s/JSONRpc/%s`
- `{"method" : "%s", "params":%s}`

Interpretation:

- The client appears to discover or validate live service locations through `preauth` and `gamefeeds` redirect endpoints.
- The main application API strongly appears to be JSON-RPC over HTTPS.
- The request body format is likely close to:

```json
{"method":"<rpcMethod>","params":{...}}
```

## Likely backend roles

- `platform.superevil.net` / `platform.superevilmegacorp.net`
  Likely the main account/platform API host.

- `preauth.superevil.net`
  Likely bootstrap or environment selection for live revision routing.

- `gamefeeds.superevilmegacorp.net`
  Likely service-status or region/gamefeed discovery.

- `chatUrl`, `sipUrl`, `turnUrl`, `stunUrl`
  Strong evidence that chat and voice/realtime comms endpoints are returned dynamically at session/bootstrap time rather than hardcoded as fixed hosts.

## Likely JSON-RPC methods

These names were found as plain strings near the JSON-RPC template and are likely remote method names rather than UI labels:

### Auth / account / session

- `createAccountForPlayer`
- `createGuestPlayer`
- `getPlayerForGuestAccount`
- `getPlayerFromPlatform`
- `authenticate`
- `link_account`
- `startSessionForPlayer`
- `endSession`
- `addDeviceToken`

### Matchmaking / lobby / party

- `joinLobby`
- `exitLobby`
- `acceptMatch`
- `rejectMatch`
- `queryPendingMatch`
- `createParty`
- `leaveParty`
- `createQuintParty`
- `joinQuintParty`
- `leaveQuintParty`
- `destroyQuintParty`
- `updateQuintPartyState`
- `partyInviteSend`
- `partyInviteConfirm`
- `partyInviteReject`
- `partyMemberKick`
- `partyMemberMove`
- `partyChangeQueueMode`
- `partyBalanceTeams`
- `queryPartyInfo`
- `queryPartyInvites`
- `partyLobbyEnter`
- `partyLobbyExit`
- `quintPartyLobbyEnter`

### Social / guild / team

- `friendListAll`
- `friendRequestIssueByHandle`
- `friendRequestConfirm`
- `friendRequestReject`
- `friendNotify`
- `friendDelete`
- `friendAddFavorite`
- `friendDeleteFavorite`
- `friendReplyFromInGame`
- `createGuild`
- `joinGuild`
- `leaveGuild`
- `guildInviteSend`
- `guildInviteConfirm`
- `guildInviteReject`
- `guildMemberKick`
- `guildChangeName`
- `guildChangeTag`
- `guildChangeOfficerStatus`
- `guildTransferCaptain`
- `guildChangeSettings`
- `changeGuildMembership`
- `changeGuildMotto`
- `queryGuildInfo`
- `queryGuildInvites`
- `guildGetData`
- `guildRedeemChest`
- `guildCollectJoinBonus`
- `guildSearch`
- `teamInviteSend`
- `teamInviteConfirm`
- `teamInviteReject`
- `teamMemberKick`
- `queryTeamInfo`
- `queryTeamInvites`
- `leaveTeam`

### Player state / progression / inventory

- `getPlayerInfo`
- `getPlayerInfos`
- `getInventoryGroups`
- `getEquipmentSlotInfo`
- `getHeroMastery`
- `getPlayerCardInventory`
- `getPlayerSkinProgress`
- `getPlayerEsportsBadgeData`
- `getTalentsData`
- `upgradeTalent`
- `forgeCard`
- `forgeEssence`
- `getSkinManifest`
- `getCardBoxManifest`
- `refreshCardBoxManifest`
- `purchaseCardPack`
- `weaveHeroSkin`
- `openRewardChest`
- `getRewardChestDefinitions`
- `openInventoryChest`
- `equipToSlot`
- `setPlayerHandle`
- `setTutorialState`

### Ranked / seasonal / live data

- `getLeaderboardData`
- `getLiveEventData`
- `getSeasonRewardsManifest`
- `getRewardsManifest`
- `getAscensionDisplayData`
- `attemptRedeemAscensionChest`
- `attemptRedeemAscensionRankUpChest`
- `attemptRedeemAscensionSeasonEndChest`
- `attemptRedeemSeasonalAscensionChest`
- `buyAscensionSeasonalBundle`
- `getQuestDisplayDataForPlayer`
- `getQuestDisplayDataForPlayerAndType`
- `redeemQuestForPlayer`
- `skipQuestForPlayer`

### Match reporting / game state

- `updateMatchInfo`
- `notifyGameResults`
- `notifyExitPostMatch`
- `spectateFriend`
- `spectatorExitMatch`
- `recordMatchExperienceMetrics`
- `reportHonorPlayer`
- `dismissReliableMessage`
- `presenceBroadcast`
- `presenceSetReceiveBroadcast`
- `setPresenceInvisibility`

## Inferred request and response shapes

The binary exposes enough adjacent field names to infer likely payload families.

### Core request envelope

This one is strongly supported by a literal string:

```json
{
  "method": "<rpcMethod>",
  "params": { }
}
```

### Bootstrap / session response

These keys appear together and likely belong to an auth/session bootstrap response:

- `sessionToken`
- `notifyUrl`
- `notifyFallbackUrl`
- `platformUrl`
- `playerInfo`
- `playerUUID`
- `startSessionUrl`
- `linked`
- `linkResult`
- `supportUrls`
- `chatUrl`
- `chatPass`
- `teamUUID`
- `enableStateUpdates`
- `missedStateUpdateMessagesThreshold`
- `pingHostPortInfo`
- `sipPass`
- `sipUrl`
- `sipRealm`
- `sipPort`
- `sipTransport`
- `turnPass`
- `turnUrl`
- `turnRealm`
- `turnPort`
- `turnTransport`
- `stunUrl`
- `stunPort`
- `stunTransport`

Interpretation:

- The client likely receives its realtime/chat/voice endpoints after authentication.
- Voice appears to use SIP plus TURN/STUN credentials delivered by the platform.
- `enableStateUpdates` and `missedStateUpdateMessagesThreshold` suggest a server-driven state sync channel in addition to plain request/response RPC.

### Ranked / progression fields

These keys are good candidates for ranked, season, and reward payloads:

- `rankModels`
- `seasonModels`
- `seasonId`
- `currentSeason`
- `rank`
- `maxPips`
- `tokensPerPip`
- `numClaimableRankUpChests`
- `playerAscensionData`
- `seasonTokenMap`
- `seasonRankCollectedMap`
- `seasonBattlePassRankCollectedMap`
- `ascensionRank`
- `ascensionTokens`
- `eloTier5v5`
- `eloTier3v3`
- `highestEloTier`
- `wins_ranked`
- `skillTier`
- `skillTierProgress`
- `individual_skill_tier`
- `individual_5v5_skill_tier`
- `rankProgress`

### Match / telemetry fields

These are likely emitted in match updates, post-match summaries, or quality telemetry:

- `matchId`
- `matchClock`
- `gameHost`
- `proxyHost`
- `pingHost`
- `pingAvg`
- `pingStdDev`
- `numPingSpikes`
- `avgPing`
- `maxPing`
- `partySize`
- `partyType`
- `retryReason`
- `stateID`
- `pendingStateID`

## Transport observations

- The client contains `NSURLSession` and `NSURLConnection` strings.
- It also contains many libcurl-style TLS error strings.
- JSON parsing is explicit: `NSJSONSerialization`, `JSONObjectWithData`, `dataWithJSONObject`, `Failed to parse json response`.
- I did not find markers for gRPC, protobuf, Thrift, FlatBuffers, or MessagePack.
- Best current inference: JSON-RPC over HTTPS for platform APIs, with additional dynamically provisioned endpoints for chat/voice/state updates.

## TLS / pinning observations

There are strong indicators of SSL pinning support or a pinning-capable library path:

- `sslPinningEnabled`
- `setSslPinningEnabled:`
- `SSL public key does not match pinned public key`

I did not find bundled certificate files under the app bundle at shallow depth:

- no `.cer`
- no `.crt`
- no `.pem`
- no `.der`
- no `.p12`

Interpretation:

- If pinning is active, it is likely public-key based, library-managed, or configured dynamically rather than by shipping an obvious cert file in the bundle root.
- This does not prove pinning is enforced on the gameplay/platform path, only that the app contains pinning-related code.

## Non-core service strings

These are present but likely secondary to gameplay/platform recovery:

- `https://api.amplitude.com/`
- `https://app.adjust.com`
- `https://my.superevilmegacorp.net/passwordResetRequest`
- Various `vainglorygame.com`, `vg.163.com`, and media/support URLs

Interpretation:

- `Amplitude` and `Adjust` are analytics/attribution, not core gameplay APIs.
- Website, academy video, and support links are useful for context but not for server emulation.

## Asset bundle note

`Payload/GameKindred.app/Data/` is mostly opaque hashed assets. A quick `file` sample suggests the directory contains mixed media and custom binary blobs, not obvious plaintext config. It may still contain serialized gameplay definitions, but that needs separate format carving.

## Priority follow-up targets

If you keep this strictly in passive static analysis, the next highest-value areas are:

1. Recover a larger, deduplicated method catalog around the JSON-RPC cluster.
2. Cluster adjacent field names by method to infer per-method parameter shapes.
3. Carve the `Data/` blobs for JSON, plist, sqlite, protobuf, or compressed blocks.
4. Inspect any session/bootstrap parsing code paths around `platformUrl`, `chatUrl`, `turnUrl`, and `enableStateUpdates`.
5. Map ranked-specific methods and fields around `getLeaderboardData`, `eloTier5v5`, `eloTier3v3`, `currentSeason`, and `rankModels`.

## Confidence

- High confidence: JSON-RPC request pattern, main hostnames, session/bootstrap field cluster, ranked field names, social/matchmaking method names.
- Medium confidence: exact ownership of each field by specific RPC methods.
- Low confidence: runtime ordering of bootstrap steps and whether all listed methods remain active in build `4.13.4`.
