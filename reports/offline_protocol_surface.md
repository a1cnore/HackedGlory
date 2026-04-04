# Offline Protocol Surface

This report focuses on what can be modeled offline from the extracted client bundle without touching live services.

Supporting machine-readable files:

- [protocol_spec.json](/Users/marvinkleinpass/Developer/vphone/vgf/reports/generated/protocol_spec.json)
- [data_bundle_inventory.json](/Users/marvinkleinpass/Developer/vphone/vgf/reports/generated/data_bundle_inventory.json)
- [jsonrpc_cluster_raw.txt](/Users/marvinkleinpass/Developer/vphone/vgf/reports/generated/jsonrpc_cluster_raw.txt)

## What looks mockable offline

### Platform RPC envelope

The client still strongly points to a plain JSON-RPC style envelope:

```json
{"method":"<name>","params":{...}}
```

The literal URL templates remain:

- `%s/JSONRpc/%s`
- `https://%s/JSONRpc/%s`

For an offline mock, this is the cleanest entry point because the transport shape is simple even if many method schemas are still inferred.

### Session/bootstrap payload

The client exposes a stable bootstrap field cluster that likely arrives very early after auth:

- `sessionToken`
- `platformUrl`
- `startSessionUrl`
- `playerInfo`
- `playerUUID`
- `supportUrls`
- `notifyUrl`
- `notifyFallbackUrl`
- `enableStateUpdates`
- `missedStateUpdateMessagesThreshold`
- `chatUrl`
- `chatPass`
- `sipUrl`
- `sipPass`
- `turnUrl`
- `turnPass`
- `stunUrl`
- `teamUUID`

Interpretation:

- A local offline mock can reasonably model a login/session response object even before exact auth semantics are known.
- The client likely expects service-discovery data, not just a success token.

### Ranked and player-state payloads

The strongest ranked/match-relevant fields we can already model are:

- `rank`
- `eloTier3v3`
- `eloTier5v5`
- `highestEloTier`
- `skillTier`
- `skillProgressionInfo`
- `rankProgress`
- `wins_ranked`
- `wins_casual`
- `wins_blitz`
- `wins_aral`
- `winsToday`
- `currentSeason`
- `seasonId`
- `seasonModels`
- `rankModels`
- `playerAscensionData`
- `ascensionRank`
- `ascensionTokens`
- `seasonTokenMap`
- `seasonRankCollectedMap`
- `seasonBattlePassRankCollectedMap`

Interpretation:

- A local offline stub can model player profile, season, ranked, and reward state before full match simulation is understood.
- If your immediate goal is "show profile / ranked / rewards / match history-ish state," the platform layer looks more tractable than in-match simulation.

### Realtime/notify channel

The client includes both WebSocket and fallback-style clues:

- `ws://%[^:/]:%d/%s`
- `Upgrade: websocket`
- `Sec-WebSocket-Version: 13`
- `Opening WebSocket connection: %s`
- `Quality_Client_Switched_LongPoll`
- `processMessage`
- `dismissReliableMessage`

Interpretation:

- The platform layer is not request/response only.
- Some features likely require a notify channel for state deltas, inbox-like messages, invites, or lobby transitions.
- For an offline mock, returning `enableStateUpdates=false` or serving minimal inert state-update messages may be enough to keep the client moving further.

## High-confidence RPC surface near `JSONRpc`

These came from the direct string neighborhood around the `JSONRpc` anchor and are more trustworthy than a broad whole-binary token sweep.

### Auth / session

- `authenticate`
- `createAccountForPlayer`
- `createGuestPlayer`
- `getPlayerForGuestAccount`
- `getPlayerFromPlatform`
- `addDeviceToken`
- `setPlayerHandle`
- `endSession`
- `askRegistrationConsent`
- `isGovernmentIdVerified`
- `verifyGovernmentId`

### Social / party / guild

- `createParty`
- `createQuintParty`
- `joinLobby`
- `exitLobby`
- `joinGuild`
- `leaveGuild`
- `leaveParty`
- `joinQuintParty`
- `leaveQuintParty`
- `destroyQuintParty`
- `partyInviteSend`
- `partyInviteConfirm`
- `partyInviteReject`
- `partyMemberKick`
- `partyMemberMove`
- `partyBalanceTeams`
- `partyChangeQueueMode`
- `guildInviteSend`
- `guildInviteConfirm`
- `guildInviteReject`
- `guildMemberKick`
- `guildSearch`
- `guildRedeemChest`
- `guildCollectJoinBonus`
- `changeGuildMembership`
- `changeGuildMotto`
- `guildChangeName`
- `guildChangeTag`
- `guildChangeOfficerStatus`
- `guildChangeSettings`
- `guildTransferCaptain`
- `presenceBroadcast`
- `presenceSetReceiveBroadcast`
- `friendListAll`
- `friendRequestIssueByHandle`
- `friendRequestConfirm`
- `friendRequestReject`
- `friendDelete`
- `friendNotify`
- `friendReplyFromInGame`

### Match / ranked / progression

- `acceptMatch`
- `rejectMatch`
- `queryPendingMatch`
- `notifyGameResults`
- `notifyExitPostMatch`
- `notifyPlayerAction`
- `recordMatchExperienceMetrics`
- `reportHonorPlayer`
- `getRewardsManifest`
- `getSeasonRewardsManifest`
- `getBuffManifest`
- `getCardBoxManifest`
- `refreshCardBoxManifest`
- `getSkinManifest`
- `getQuestDisplayDataForPlayer`
- `getQuestDisplayDataForPlayerAndType`
- `redeemQuestForPlayer`
- `collectHeroChest`
- `collectProgressiveChest`
- `openRewardChest`
- `openInventoryChest`
- `purchaseCardPack`
- `purchaseDailyPick`
- `forgeCard`
- `forgeEssence`
- `equipToSlot`
- `getInventoryGroups`
- `getHeroMastery`
- `getPlayerCardInventory`
- `getPlayerSkinProgress`
- `getPlayerInfos`
- `getTrophyCase`
- `getProgressiveChestDescriptions`
- `attemptRedeemAscensionChest`
- `attemptRedeemAscensionRankUpChest`
- `attemptRedeemAscensionSeasonEndChest`
- `attemptRedeemSeasonalAscensionChest`
- `buyAscensionSeasonalBundle`

## Practical offline emulation path

If the goal is to recover some visible client functionality without touching real infrastructure, the least-bad order is:

1. Mock session/bootstrap and player profile state.
2. Mock manifests and inventory/progression reads.
3. Mock ranked/season payloads.
4. Add inert notify/WebSocket behavior only if the client hard-requires it.
5. Leave in-match transport for last.

Reasoning:

- Profile, rank, entitlement, and reward screens probably depend on platform RPC first.
- Live match simulation likely depends on additional protocols behind `gameHost`, `proxyHost`, `pingHostPortInfo`, and possibly non-JSON transports that are not fully exposed by string extraction alone.

## What is still missing for a real offline stub

These are the main blockers:

- exact auth parameters and response codes
- exact JSON-RPC path construction rules
- per-method parameter schemas
- whether request/response bodies are wrapped, signed, or version-tagged beyond plain JSON
- whether notify/state updates are mandatory after bootstrap
- exact match transport and packet formats for `gameHost` / `proxyHost`
- compression, encryption, or binary framing for realtime/game channels

## Asset bundle relevance

The `Data/` directory is mostly not server protocol data.

What we now know:

- total files: 48,187
- `RSC0` containers: 18,136
- `CFF0` containers: 942
- many `RSC0` files embed readable asset paths like:
  `/Characters/Hero009/Art/hero009_rock_t3.rock_t3_mat.shadergraph`
  `/Environment/A001/S005/Zones/Zone2/Zone2A.Zone2Crystals_mat.shadergraph`

Interpretation:

- `Data/` is useful for content mapping and maybe client feature gating, but it does not yet look like the primary source of server protocol schemas.
- The platform binary is still the main source for reviving profile/ranked/social surfaces.

## Useful local tooling added

- [scripts/build_protocol_spec.py](/Users/marvinkleinpass/Developer/vphone/vgf/scripts/build_protocol_spec.py)
  Builds a machine-readable protocol extraction from the client binary.

- [scripts/analyze_data_bundle.py](/Users/marvinkleinpass/Developer/vphone/vgf/scripts/analyze_data_bundle.py)
  Inventories `Data/` headers and extracts representative embedded resource paths.

- [scripts/mock_platform_server.py](/Users/marvinkleinpass/Developer/vphone/vgf/scripts/mock_platform_server.py)
  Runs a local offline JSON-RPC mock with canned bootstrap, profile, ranked, and manifest responses.

## Recommended next passive step

The next high-value step is to infer per-method parameter groups from the `JSONRpc` cluster rather than broad token lists. That would produce a tighter "mock contract" for:

- auth/session bootstrap
- player profile / ranked state
- guild / party / inbox
- post-match / honor / rewards

That is the closest useful artifact to an offline stub without moving into live-service impersonation.
