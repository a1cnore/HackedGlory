# Method Schema Sheet

This is a tighter, method-oriented interpretation of the `JSONRpc` string neighborhood. It is intended for offline mocking and documentation, not live service interaction.

Related files:

- [mock_contract.json](/Users/marvinkleinpass/Developer/vphone/vgf/reports/generated/mock_contract.json)
- [protocol_spec.json](/Users/marvinkleinpass/Developer/vphone/vgf/reports/generated/protocol_spec.json)
- [jsonrpc_cluster_raw.txt](/Users/marvinkleinpass/Developer/vphone/vgf/reports/generated/jsonrpc_cluster_raw.txt)

## Cluster 1: Auth and bootstrap

Likely methods:

- `createAccountForPlayer`
- `createGuestPlayer`
- `getPlayerForGuestAccount`
- `getPlayerFromPlatform`
- `authenticate`
- `link_account`

Likely request fields:

- `gameId`
- `marketplace`
- `languages`
- `hardwareIdName`
- `hardwareName`
- `hardwareIDFA`
- `credentials`
- `executeCommand`

Likely response fields:

- `estimatedWaitTime`
- `sessionToken`
- `platformUrl`
- `playerInfo`
- `playerUUID`
- `startSessionUrl`
- `linked`
- `linkResult`
- `supportUrls`

Interpretation:

- These methods likely establish identity and bootstrap the service-discovery bundle.
- `executeCommand` could be a client-side feature flag or a more generic RPC parameter.

## Cluster 2: Party, guild, and team setup

Likely methods:

- party lifecycle: `createParty`, `leaveParty`, `createQuintParty`, `joinQuintParty`, `leaveQuintParty`, `destroyQuintParty`
- party invites and configuration: `partyInviteConfirm`, `partyInviteReject`, `partyInviteSend`, `partyMemberKick`, `partyMemberMove`, `partyChangeQueueMode`, `partyBalanceTeams`, `queryPartyInfo`, `queryPartyInvites`
- guild lifecycle: `leaveGuild`, `joinGuild`, `guildInviteConfirm`, `guildInviteReject`, `guildInviteSend`, `guildMemberKick`, `changeGuildMotto`, `guildChangeName`, `guildChangeTag`, `guildChangeOfficerStatus`, `guildTransferCaptain`, `changeGuildMembership`, `guildChangeSettings`, `queryGuildInfo`, `queryGuildInvites`, `guildGetData`, `guildRedeemChest`, `guildCollectJoinBonus`, `guildSearch`
- team lifecycle: `leaveTeam`, `teamInviteConfirm`, `teamInviteReject`, `teamInviteSend`, `teamMemberKick`, `queryTeamInfo`, `queryTeamInvites`

Likely request fields:

- `site`
- `current`
- `sites`
- `playerId`
- `partyMembers`
- `lobby`
- `playerHandle`
- `difficulty`
- `primeTimeUtcHour`
- `minimumSkillTier`
- `minNumMembers`
- `maxNumMembers`
- `guildLanguageCode`
- `guildInviteOnly`
- `guildMessage`
- `resourceLabel1`
- `resourceLabel2`
- `resourceLabel3`
- `resourceURL1`
- `resourceURL2`
- `resourceURL3`

Interpretation:

- `guildSearch` likely uses the filter-like fields: `difficulty`, `minimumSkillTier`, member counts, language, invite-only, and the resource labels/URLs.
- `playerHandle` and `playerId` likely appear across invite and lookup flows.

## Cluster 3: Session, presence, lobby, and notify

Likely methods:

- `updatePlatformPlayerConfig`
- `presenceBroadcast`
- `presenceSetReceiveBroadcast`
- `startSessionForPlayer`
- `endSession`
- `joinLobby`
- `exitLobby`
- `acceptMatch`
- `rejectMatch`
- `notifyExitPostMatch`
- `spectateFriend`
- `askInGameFriendToPlay`
- `dismissReliableMessage`
- `setPresenceInvisibility`
- `queryPendingMatch`
- `queryPlayerInboxMessages`
- `getPlayerInfo`
- `getPlayerInfos`
- `setPlayerHandle`
- `processMessage`
- `addDeviceToken`
- `recordMatchExperienceMetrics`
- `reportHonorPlayer`
- `updateMatchInfo`
- `notifyGameResults`
- `spectatorExitMatch`
- `notifyPlayerAction`

Likely request fields:

- `phone`
- `tablet`
- `desktop`
- `playerHandle`

Likely response fields:

- `sessionToken`
- `notifyUrl`
- `notifyFallbackUrl`
- `bucketIncrementer`
- `failoverThreshold`
- `platformUrl`
- `state`
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
- `askRegistrationConsent`
- `pingPostToAnalytics`
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

- `startSessionForPlayer` is the best candidate for the full bootstrap payload.
- `processMessage` and `dismissReliableMessage` likely belong to the notify channel rather than plain RPC.

## Cluster 4: Inventory, ranked, progression, manifests

Likely methods:

- content/manifests: `getSkinManifest`, `getCardBoxManifest`, `refreshCardBoxManifest`, `getForgeManifest`, `getSeasonRewardsManifest`, `getBuffManifest`, `getRewardsManifest`
- player progression: `getInventoryGroups`, `getEquipmentSlotInfo`, `getHeroMastery`, `getPlayerCardInventory`, `setTutorialState`, `forgeCard`, `forgeEssence`
- economy/rewards: `openRewardChest`, `getRewardChestDefinitions`, `openInventoryChest`, `equipToSlot`, `purchaseCardPack`, `purchaseDailyPick`
- ranked/season/quest: `getAscensionDisplayData`, `attemptRedeemAscensionChest`, `attemptRedeemAscensionRankUpChest`, `attemptRedeemAscensionSeasonEndChest`, `attemptRedeemSeasonalAscensionChest`, `buyAscensionSeasonalBundle`, `getQuestDisplayDataForPlayer`, `getQuestDisplayDataForPlayerAndType`, `redeemQuestForPlayer`, `skipQuestForPlayer`, `getLeaderboardData`, `getLiveEventData`, `getProgressiveChestDescriptions`, `collectProgressiveChest`

Likely response fields:

- `unityAdsGameId`
- `ironsourceAppId`
- `ownedCards`
- `cardBoxSku`
- `cardPack`
- `newSkin`
- `owned`
- `currencies`
- `clientMode`
- `skillTier`
- `completed`
- `completed_non_tutorial`
- `last_login`
- `wins_aral`
- `wins_blitz`

Interpretation:

- This cluster likely continues beyond the saved neighborhood; the binary elsewhere exposes stronger ranked fields like `rankModels`, `seasonModels`, `eloTier3v3`, `eloTier5v5`, `currentSeason`, and `playerAscensionData`.
- For a local stub, this cluster is enough to model inventory/profile/reward surfaces before you know every seasonal field.

## Best offline mock priorities

If the goal is to make parts of the client usable again in a fully controlled environment you own:

1. Implement the JSON-RPC envelope.
2. Stub `authenticate` or `startSessionForPlayer` with the bootstrap/session fields.
3. Stub `getPlayerInfo` or `getPlayerInfos` with basic profile, rank, wins, and ownership state.
4. Stub manifest methods such as `getRewardsManifest`, `getSeasonRewardsManifest`, and `getSkinManifest`.
5. Only add notify/WebSocket behavior if the client refuses to progress without it.

## Controlled validation only

If you later validate the "active part," keep it bounded to a test setup you own:

- a local mock endpoint that returns controlled JSON-RPC responses
- a local client harness or repackaged test build you control
- local logging of which stubbed methods the client tries first

I am not providing guidance for live interception, bypassing client protections, or interacting with third-party services.
