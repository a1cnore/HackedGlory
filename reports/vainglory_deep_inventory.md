# Vainglory Deep Static Inventory

This document extends the first-pass report in [vainglory_static_report.md](vainglory_static_report.md) with a broader inventory, counts, and raw artifact references.

Scope remains passive local analysis only. No live interception, runtime patching, or TLS bypassing was performed.

## Artifact map

Generated raw inventories live under [reports/generated](generated):

- [hosts_and_urls.txt](generated/hosts_and_urls.txt)
- [jsonrpc_cluster_raw.txt](generated/jsonrpc_cluster_raw.txt)
- [method_candidates.txt](generated/method_candidates.txt)
- [session_and_state_fields.txt](generated/session_and_state_fields.txt)
- [ranked_and_season_fields.txt](generated/ranked_and_season_fields.txt)
- [realtime_transport_clues.txt](generated/realtime_transport_clues.txt)
- [sdk_and_runtime_clues.txt](generated/sdk_and_runtime_clues.txt)

Inventory sizes:

- URLs and host strings: 93
- JSON-RPC neighborhood lines: 231
- method candidates: 243
- session/state fields: 60
- ranked/season fields: 31
- realtime transport clues: 18
- SDK/runtime clues: 39

## Network architecture hypothesis

### 1. Bootstrap and environment discovery

The strongest bootstrap strings in the binary are:

- `platform.superevil.net`
- `platform.superevilmegacorp.net`
- `http://preauth.superevil.net/kindred/live/[REVISION]-status-redirect`
- `http://gamefeeds.superevilmegacorp.net/server-status-redirect.[LANG]`

Interpretation:

- `preauth` likely selects a live revision or environment-specific platform target.
- `gamefeeds` likely publishes service status, region, or language-specific feed data.
- `platform.superevil.*` appears to be the main authoritative account/platform endpoint family.

### 2. Main application API

The binary contains these literal strings:

- `JSONRpc`
- `%s/JSONRpc/%s`
- `https://%s/JSONRpc/%s`
- `{"method" : "%s", "params":%s}`

Interpretation:

- The platform API is very likely JSON-RPC over HTTPS.
- Method invocation appears to be string-based rather than generated from a strongly typed RPC schema.

### 3. Realtime/state-update channel

The first-pass report noted state update keys. This pass found direct WebSocket evidence:

- `ws://%[^:/]:%d/%s`
- `ws://%[^:/]/%s`
- `ws://%[^:/]:%d`
- `ws://%[^:/]`
- `Upgrade: websocket`
- `Sec-WebSocket-Version: 13`
- `Opening WebSocket connection: %s`
- `WebSocket successful HTTP status: %s`
- `ERROR: Got unexpected WebSocket message.`

Related state-sync strings:

- `notifyUrl`
- `notifyFallbackUrl`
- `enableStateUpdates`
- `missedStateUpdateMessagesThreshold`
- `processMessage`
- `dismissReliableMessage`
- `Quality_Client_Switched_LongPoll`

Interpretation:

- The client likely has a realtime notify channel that can use WebSocket.
- Long-poll fallback is also likely present.
- Reliable application-layer messaging exists above the transport.

### 4. Voice and chat provisioning

These fields cluster tightly in the same string neighborhood:

- `chatUrl`
- `chatPass`
- `sipUrl`
- `sipPass`
- `sipRealm`
- `sipPort`
- `sipTransport`
- `turnUrl`
- `turnPass`
- `turnRealm`
- `turnPort`
- `turnTransport`
- `stunUrl`
- `stunPort`
- `stunTransport`

Interpretation:

- Chat and voice endpoint details are probably returned by the platform after session startup.
- Voice likely uses SIP plus TURN/STUN.

## JSON-RPC surface

The candidate method list is in [method_candidates.txt](generated/method_candidates.txt). It includes some false positives and SDK methods, but a large useful subset is likely actual game RPC.

High-confidence gameplay/platform method families:

### Auth / identity

- `createAccountForPlayer`
- `createGuestPlayer`
- `getPlayerForGuestAccount`
- `getPlayerFromPlatform`
- `authenticate`
- `link_account`
- `startSessionForPlayer`
- `endSession`
- `setPlayerHandle`
- `addDeviceToken`

### Friends / presence

- `friendListAll`
- `friendRequestIssueByHandle`
- `friendRequestConfirm`
- `friendRequestReject`
- `friendNotify`
- `friendDelete`
- `friendAddFavorite`
- `friendDeleteFavorite`
- `friendReplyFromInGame`
- `presenceBroadcast`
- `presenceSetReceiveBroadcast`
- `setPresenceInvisibility`

### Party / lobby / matchmaking

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
- `joinLobby`
- `exitLobby`
- `acceptMatch`
- `rejectMatch`
- `queryPendingMatch`

### Guild / team

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

### Inventory / progression / economy

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

### Ranked / live / quests

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

### Match and post-match

- `updateMatchInfo`
- `notifyGameResults`
- `notifyExitPostMatch`
- `recordMatchExperienceMetrics`
- `reportHonorPlayer`
- `spectateFriend`
- `spectatorExitMatch`
- `dismissReliableMessage`
- `processMessage`

## Inferred schema clusters

### Session bootstrap / login result

The strongest inferred bootstrap/session fields are:

- `sessionToken`
- `platformUrl`
- `startSessionUrl`
- `playerInfo`
- `playerUUID`
- `linked`
- `linkResult`
- `supportUrls`
- `chatUrl`
- `chatPass`
- `teamUUID`
- `notifyUrl`
- `notifyFallbackUrl`
- `enableStateUpdates`
- `missedStateUpdateMessagesThreshold`
- `pingHostPortInfo`
- `sipUrl`
- `turnUrl`
- `stunUrl`

Interpretation:

- Login likely returns both account data and a service-discovery bundle.
- Platform RPC and realtime/voice/chat setup probably split after this step.

### Ranked / season / ascension

The extracted ranked field inventory is in [ranked_and_season_fields.txt](generated/ranked_and_season_fields.txt).

Most relevant fields:

- `rankModels`
- `seasonModels`
- `seasonId`
- `currentSeason`
- `rank`
- `eloTier3v3`
- `eloTier5v5`
- `highestEloTier`
- `tokensPerPip`
- `maxPips`
- `skillTier`
- `skillTierProgress`
- `rankProgress`
- `wins_ranked`
- `playerAscensionData`
- `ascensionRank`
- `ascensionTokens`
- `seasonTokenMap`
- `seasonRankCollectedMap`
- `seasonBattlePassRankCollectedMap`
- `numClaimableRankUpChests`
- `rankUpChestHashedSku`
- `battlePassRankUpChestHashedSku`

Interpretation:

- The game tracks separate ELO/tier representations and separate season reward bookkeeping.
- Ranked and ascension systems appear deeply integrated into the main platform payloads.

### Match / quality / state

Relevant fields and telemetry keys:

- `matchId`
- `matchClock`
- `stateID`
- `pendingStateID`
- `gameHost`
- `proxyHost`
- `pingHost`
- `partySize`
- `partyType`
- `avgPing`
- `maxPing`
- `numPingSpikes`
- `pingBucket_*`

Interpretation:

- Match state and connection quality are tracked separately.
- `gameHost` and `proxyHost` suggest the actual match transport may be distinct from the platform RPC host.

### Guild / party / social

Relevant fields:

- `guildUUID`
- `guildId`
- `guildType`
- `guildLanguageCode`
- `guildInviteOnly`
- `guildMessage`
- `guildXp`
- `guildLevel`
- `guildTier`
- `guildSettings`
- `partyUUID`
- `partyQueueMode`
- `partyQueueDifficulty`
- `members`
- `allowedToInvite`

## Embedded SDK and runtime observations

### Networking and serialization

The bundle and binary indicate:

- `cURL` is bundled and licensed.
- `RapidJSON` is licensed in `Settings.bundle`.
- `NSJSONSerialization` is present.
- `NSURLSession` and `NSURLConnection` are present.
- many libcurl-style SSL error strings are present.

Interpretation:

- The app likely mixes native iOS networking with embedded SDK networking.
- JSON is definitely used in at least part of the network stack.

### Analytics and attribution

Embedded SDK traces include:

- `Adjust`
- `Amplitude`
- `FMDatabaseQueue`

Examples from runtime metadata:

- `sendNSURLSessionRequest:prefixErrorMessage:suffixErrorMessage:activityPackage:responseDataHandler:`
- `sendNSURLConnectionRequest:prefixErrorMessage:suffixErrorMessage:activityPackage:responseDataHandler:`
- `saveJsonResponse:responseData:`
- `getSchema`
- `getTableSchema:`

Interpretation:

- These schema/database methods appear to belong to SDK-local storage, not the game backend API.
- They are still useful because they confirm embedded SQLite-backed analytics state.

### SSL pinning clue

The strongest pinning signal found was:

- `sslPinningEnabled`
- `setSslPinningEnabled:`
- `SSL public key does not match pinned public key`

Important caveat:

- The strongest explicit `sslPinningEnabled` property surfaced in the `Amplitude` runtime metadata.
- That does not prove only analytics uses pinning, but it does mean at least one embedded SDK has pinning support.

### Firebase / Google services

From `GoogleService-Info.plist`:

- Firebase DB URL: `https://api-project-401141009093.firebaseio.com`
- Google project id: `api-project-401141009093`
- push/sign-in related Google client ids are bundled

Interpretation:

- Firebase is configured for this app build.
- This does not prove gameplay/state traffic uses Firebase.

## Asset container findings

High-level counts for `Payload/GameKindred.app/Data`:

- total files: 48,187
- files beginning with `RSC0`: 18,136
- files matching JSON-like key/value text patterns: 203
- files matching gzip/zip magic by quick scan: 1

Observed file signatures:

- `RSC0` appears to be a dominant proprietary resource container marker.
- one sampled file began with `CFF0`
- many media files are present among the hashed blobs

Concrete sample:

- `Payload/GameKindred.app/Data/35/357AAADD5B60D5F112CE390EDE614BC0` contains:
  `/Characters/Catherine/Art/catherine_ice_RI.ice_RI_mat.shadergraph`
- `Payload/GameKindred.app/Data/51/51FB12A2760F1EB772CD50286A1C0D68` contains:
  `/Characters/Hero014/Art/hero014_queen_t1.queen_t1_mat.shadergraph`

Interpretation:

- `Data/` is not just opaque cache; it includes structured asset bundles with embedded path metadata.
- `RSC0` is probably the game’s internal resource container format or a package wrapper used by the client content pipeline.
- The 203 JSON-like matches are promising passive-analysis targets for future manifest extraction.

## Noise versus core signals

These extracted strings are real, but not central to reviving gameplay services:

- academy video URLs
- website/privacy/terms URLs
- App Store review URLs
- `Adjust` deep link patterns
- `Amplitude` upload endpoints
- Chinese partner/community URLs like `vg.163.com`

These are most likely core:

- `platform.superevil.net`
- `platform.superevilmegacorp.net`
- `preauth.superevil.net`
- `gamefeeds.superevilmegacorp.net`
- JSON-RPC method strings
- session/bootstrap field cluster
- WebSocket and long-poll clues
- `gameHost` / `proxyHost` / `pingHostPortInfo`

## Best next passive-analysis steps

1. Cluster method names with adjacent parameter keys from `jsonrpc_cluster_raw.txt` to build per-method inferred schemas.
2. Carve the 203 JSON-like `Data/` files and classify them as manifest, content, config, or localization.
3. Sample `RSC0` files by subtype to determine header format and whether they are compressed containers or direct asset wrappers.
4. Separate SDK-local methods from likely game RPC using neighborhood distance to the JSON-RPC strings.
5. Build a ranked-only schema sheet from `getLeaderboardData`, `rankModels`, `seasonModels`, and the ascension fields.

## Confidence notes

- High confidence: JSON-RPC usage, platform bootstrap hosts, voice/chat provisioning fields, WebSocket support, long-poll fallback, ranked field presence.
- Medium confidence: which exact RPC method owns each field.
- Lower confidence: precise runtime order of bootstrap calls and whether every candidate method is still active in build `4.13.4`.
