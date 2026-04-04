# RPC Schema Report — Vainglory GameKindred Binary

**Total RPC methods:** 146
**MITM captured:** 20
**Dead (not in traffic):** 126
**Response types identified:** 8

## Response Types

### `playerInfoUpdate` (parser @ `0x100507640`, 41 methods)
_Full player info + inventory update response_

Fields: `returnValue`, `handle`, `skillTier`, `completed`, `wins`, `level`, `completed_non_tutorial`, `last_login`, `wins_aral`, `wins_blitz`, `wins_casual`, `wins_ranked`, `winStreak`, `winsToday`, `wins_season`, `sinisterSevenProgress`, `xp`, `levelMinXP`, `levelMaxXP`, `currency`, `entitlement_coopbots`, `entitlement_practice`, `entitlement_ranked`, `entitlement_5v5_ranked`, `entitlement_casual`, `canUseAllHeroes`, `unlocks`, `freeunlocks`, `isDev`, `karma`, `karmaLevel`, `skillProgressionInfo`, `5v5_pvp_ranked`, `ranked`, `blitz_pvp_ranked`, `karmaProgress`, `karmaSilverBonus`, `guildUUID`, `teamUUID`, `targeting`, `lifetimeSpend`, `lifetimeSpendCount`, `lifetimePoints`, `spenderLevel`, `lastSpendTime`, `cohort`, `spenderProfile`, `accountPenaltyBoxData`, `penalty_qbanPoints`, `trophyCase`, `season`, `trophy_type`, `value`, `trophy_name`, `name`, `tag`, `tutorialState`, `state`, `clientMode`, `playerChests`, `uuid`, `chestType`, `timeLeft`, `playerBuffs`, `startTime`, `refreshTime`, `charges`, `refreshCharges`, `code`, `ttl`, `player_profile`, `skill_tier`

### `simpleCallback` (parser @ `0x1004f11bc`, 22 methods)
_Minimal acknowledgement (used for fire-and-forget operations)_

Fields: `orderid`, `steamid`, `language`, `currency`, `amount`, `product_id`

### `stateUpdateCallback` (parser @ `0x1004edef0`, 18 methods)
_State update with push notification fields (friends, party, quint)_

Fields: `httpStatus`, `quintPartyStateUpdate`, `quintPartyJoinRequest`, `quintPartyPlayerLeft`, `quintPartyMemberKick`, `type`, `states`, `counts`, `friendsListUpdate`, `tag`, `time`, `text`, `code`, `stateUpdate`

### `basicResult` (parser @ `0x1005039ac`, 17 methods)
_Simple success/failure result_

Fields: `code`, `returnValue`, `success`, `reason`

### `sessionBootstrap` (parser @ `0x100505520`, 21 methods)
_Full session data (URLs, SIP/STUN/TURN, player info)_

Fields: `code`, `returnValue`, `supportUrls`, `notifyUrl`, `notifyFallbackUrl`, `bucketIncrementer`, `failoverThreshold`, `platformUrl`, `chatUrl`, `chatPass`, `playerUUID`, `playerInfo`, `guildUUID`, `teamUUID`, `handle`, `enableStateUpdates`, `missedStateUpdateMessagesThreshold`, `pingHostPortInfo`, `host`, `port`, `site`, `region`, `country`, `askRegistrationConsent`, `platformTime`, `pingPostToAnalytics`, `sipPass`, `sipUrl`, `sipRealm`, `sipPort`, `sipTransport`, `turnPass`, `turnUrl`, `turnRealm`, `turnPort`, `turnTransport`, `stunUrl`, `stunPort`, `stunTransport`, `unityAdsGameId`, `ironsourceAppId`

### `eventsData` (parser @ `0x100516908`, 2 methods)
_Leaderboard/live event data with client representations_

Fields: `returnValue`, `events`, `id`, `type`, `name`, `startDate`, `endDate`, `clientRepresentation`, `target`, `panelTitle`, `leaderboardId`, `leaderboardTitle`, `questIds`, `marketSection`, `marketTileIds`, `options`, `optionName`, `enabled`, `description`, `eventLeaderboardProgress`, `score`, `rank`, `cardinality`, `eventArenaChallengeProgress`, `wins`, `maxWins`, `losses`, `maxLosses`, `eventProgressBars`, `minScore`, `maxScore`, `ttl`, `eventsPopup`, `leaderboardsPopup`

### `guildData` (parser @ `0x10050c2bc`, 21 methods)
_Guild info with members, stats, and reward data_

Fields: `code`, `returnValue`, `success`, `members`, `guildUUID`, `guildXp`, `guildXpRequired`, `guildXpMin`, `avgSkillTier`, `avgKarma`, `recentlyActive`, `memberType`, `bForDisplay`, `createdTime`, `nextRewardChestHashedSku`, `uuid`, `handle`, `status`, `timeSinceLastActive`, `availability`, `guildXpEarned`, `rank`, `rankProgress`, `seasonalWins`, `lifetimeWins`, `isDev`, `karma`, `level`, `allowedToInvite`, `isFriend`, `isBoosted`, `activeBuffs`, `name`, `startTime`, `timeLeft`, `nearestGuilds`, `tag`, `trophyCase`, `trophy_type`, `season`, `value`, `reason`

### `equipmentData` (parser @ `0x100519118`, 4 methods)
_Player loadout/equipment data_

Fields: `returnValue`, `player_global_loadout`, `social_ping_pack`, `equipped`, `metadata`, `thumbsUp`, `smile`, `charm`, `owned`, `hat`, `frown`, `toast`

## All Methods

| # | Method | Category | MITM | Response Type | Sender |
|---|--------|----------|------|---------------|--------|
| 1 | `acceptMatch` | match | **YES** | sessionBootstrap | `0x1004fd8e0` |
| 2 | `addDeviceToken` | auth |  | sessionBootstrap | `0x1004ff3b0` |
| 3 | `askInGameFriendToPlay` | social |  | sessionBootstrap | `0x1004fdd34` |
| 4 | `askRegistrationConsent` | other |  | playerInfoUpdate | `0x100505520` |
| 5 | `attemptRedeemAscensionChest` | inventory |  | playerInfoUpdate | `0x100501644` |
| 6 | `attemptRedeemAscensionRankUpChest` | inventory |  | playerInfoUpdate | `0x100501740` |
| 7 | `attemptRedeemAscensionSeasonEndChest` | inventory |  | playerInfoUpdate | `0x100501998` |
| 8 | `attemptRedeemSeasonalAscensionChest` | inventory |  | playerInfoUpdate | `0x100501a94` |
| 9 | `authenticate` | auth |  | stateUpdateCallback | `0x1004f4374` |
| 10 | `buyAscensionSeasonalBundle` | inventory |  | playerInfoUpdate | `0x100501b9c` |
| 11 | `changeGuildMembership` | social |  | guildData | `0x1004fb02c` |
| 12 | `changeGuildMotto` | social |  | guildData | `0x1004fa920` |
| 13 | `collectHeroChest` | inventory |  | stateUpdateCallback | `0x1004f57dc` |
| 14 | `collectProgressiveChest` | inventory |  | playerInfoUpdate | `0x100502b50` |
| 15 | `createAccountForPlayer` | auth |  | stateUpdateCallback | `0x1004f34b0` |
| 16 | `createGuestPlayer` | auth | **YES** | stateUpdateCallback | `0x1004f3738` |
| 17 | `createParty` | social |  | simpleCallback | `0x1004f6f4c` |
| 18 | `createQuintParty` | social |  | simpleCallback | `0x1004f6478` |
| 19 | `destroyQuintParty` | social |  | simpleCallback | `0x1004f7318` |
| 20 | `dismissReliableMessage` | other |  | sessionBootstrap | `0x1004fde88` |
| 21 | `endSession` | auth | **YES** | basicResult | `0x1004fd37c` |
| 22 | `equipToSlot` | inventory |  | equipmentData | `0x100501290` |
| 23 | `equippedEmoji` | inventory |  | equipmentData | `0x1004f8a14` |
| 24 | `equippedHat` | inventory |  | equipmentData | `0x1004f8a14` |
| 25 | `equippedPingPack` | inventory |  | equipmentData | `0x1004f8a14` |
| 26 | `exitLobby` | social | **YES** | sessionBootstrap | `0x1004fd7e4` |
| 27 | `forgeCard` | inventory |  | playerInfoUpdate | `0x1005003f8` |
| 28 | `forgeEssence` | inventory |  | playerInfoUpdate | `0x100500500` |
| 29 | `friendAddFavorite` | social |  | simpleCallback | `0x1004f6020` |
| 30 | `friendDelete` | social |  | simpleCallback | `0x1004f5f24` |
| 31 | `friendDeleteFavorite` | social |  | simpleCallback | `0x1004f611c` |
| 32 | `friendListAll` | social | **YES** | stateUpdateCallback | `0x1004f58d8` |
| 33 | `friendNotify` | social |  | stateUpdateCallback | `0x1004f5e28` |
| 34 | `friendReplyFromInGame` | social |  | simpleCallback | `0x1004f6218` |
| 35 | `friendRequestConfirm` | social |  | stateUpdateCallback | `0x1004f5c30` |
| 36 | `friendRequestIssueByHandle` | auth |  | stateUpdateCallback | `0x1004f5b0c` |
| 37 | `friendRequestReject` | social |  | stateUpdateCallback | `0x1004f5d2c` |
| 38 | `friendsListUpdate` | social |  | simpleCallback | `0x1004edef0` |
| 39 | `getAscensionDisplayData` | match |  | playerInfoUpdate | `0x100501548` |
| 40 | `getBuffManifest` | other |  | playerInfoUpdate | `0x100500a10` |
| 41 | `getCardBoxManifest` | inventory |  | playerInfoUpdate | `0x1004ffdc4` |
| 42 | `getDailyPicker` | inventory |  | stateUpdateCallback | `0x1004f4d68` |
| 43 | `getEquipmentSlotInfo` | inventory |  | sessionBootstrap | `0x1004fec28` |
| 44 | `getForgeManifest` | inventory |  | playerInfoUpdate | `0x100500818` |
| 45 | `getHeroChestData` | inventory |  | stateUpdateCallback | `0x1004f56e0` |
| 46 | `getHeroMastery` | other |  | sessionBootstrap | `0x1004fef50` |
| 47 | `getInventoryGroups` | inventory |  | sessionBootstrap | `0x1004feb30` |
| 48 | `getLeaderboardData` | match | **YES** | eventsData | `0x100502c60` |
| 49 | `getLiveEventData` | match | **YES** | eventsData | `0x100502d5c` |
| 50 | `getPlayerCardInventory` | inventory |  | playerInfoUpdate | `0x1004ffbd8` |
| 51 | `getPlayerEsportsBadgeData` | other |  | stateUpdateCallback | `0x1004f5058` |
| 52 | `getPlayerForGuestAccount` | auth | **YES** | stateUpdateCallback | `0x1004f3b7c` |
| 53 | `getPlayerFromPlatform` | auth |  | stateUpdateCallback | `0x1004f3f7c` |
| 54 | `getPlayerInfo` | other | **YES** | sessionBootstrap | `0x1004fe77c` |
| 55 | `getPlayerInfos` | other |  | sessionBootstrap | `0x1004fe884` |
| 56 | `getPlayerSkinProgress` | inventory |  | stateUpdateCallback | `0x1004f5154` |
| 57 | `getProgressiveChestDescriptions` | inventory |  | playerInfoUpdate | `0x100502a54` |
| 58 | `getQuestDisplayDataForPlayer` | inventory |  | playerInfoUpdate | `0x100501d9c` |
| 59 | `getQuestDisplayDataForPlayerAndType` | inventory |  | playerInfoUpdate | `0x100501ea4` |
| 60 | `getRewardChestDefinitions` | inventory |  | playerInfoUpdate | `0x100500710` |
| 61 | `getRewardsManifest` | inventory |  | playerInfoUpdate | `0x100501ca0` |
| 62 | `getSeasonRewardsManifest` | inventory |  | playerInfoUpdate | `0x100500914` |
| 63 | `getSkinManifest` | inventory | **YES** | playerInfoUpdate | `0x1004ffcc8` |
| 64 | `getTalentsData` | inventory | **YES** | stateUpdateCallback | `0x1004f4f5c` |
| 65 | `getTrophyCase` | match |  | playerInfoUpdate | `0x100500b0c` |
| 66 | `guildChangeName` | social |  | guildData | `0x1004faa2c` |
| 67 | `guildChangeOfficerStatus` | social |  | guildData | `0x1004fae14` |
| 68 | `guildChangeSettings` | social |  | guildData | `0x1004fb28c` |
| 69 | `guildChangeTag` | social |  | guildData | `0x1004fad00` |
| 70 | `guildCollectJoinBonus` | social |  | guildData | `0x1004fb78c` |
| 71 | `guildGetData` | social | **YES** | guildData | `0x1004fb5ac` |
| 72 | `guildInviteConfirm` | social |  | guildData | `0x1004fa434` |
| 73 | `guildInviteOnly` | social |  | guildData | `0x1004f92f4` |
| 74 | `guildInviteReject` | social |  | guildData | `0x1004fa530` |
| 75 | `guildInviteSend` | social |  | guildData | `0x1004fa62c` |
| 76 | `guildLanguageCode` | social |  | guildData | `0x1004f92f4` |
| 77 | `guildMemberKick` | social |  | guildData | `0x1004fa728` |
| 78 | `guildMessage` | social |  | guildData | `0x1004f9650` |
| 79 | `guildRedeemChest` | social |  | guildData | `0x1004fb69c` |
| 80 | `guildSearch` | social |  | guildData | `0x1004fb87c` |
| 81 | `guildTransferCaptain` | social |  | guildData | `0x1004faf20` |
| 82 | `isCaptain` | other |  | playerInfoUpdate | `0x10050b6a8` |
| 83 | `isGovernmentIdVerified` | other |  | playerInfoUpdate | `0x100502670` |
| 84 | `joinGuild` | social |  | guildData | `0x1004fa824` |
| 85 | `joinLobby` | social | **YES** | basicResult | `0x1004fd4ec` |
| 86 | `joinQuintParty` | social |  | simpleCallback | `0x1004f67bc` |
| 87 | `leaveGuild` | social |  | guildData | `0x1004fa344` |
| 88 | `leaveParty` | social |  | simpleCallback | `0x1004f7228` |
| 89 | `leaveQuintParty` | social |  | simpleCallback | `0x1004f75cc` |
| 90 | `leaveTeam` | social |  | basicResult | `0x1004fbabc` |
| 91 | `link_account` | auth |  | stateUpdateCallback | `0x1004f48dc` |
| 92 | `notifyExitPostMatch` | match | **YES** | sessionBootstrap | `0x1004fdaf0` |
| 93 | `notifyGameResults` | other |  | playerInfoUpdate | `0x1005028f8` |
| 94 | `notifyPlayerAction` | other | **YES** | playerInfoUpdate | `0x1005021bc` |
| 95 | `openInventoryChest` | inventory |  | playerInfoUpdate | `0x100500c08` |
| 96 | `openRewardChest` | inventory |  | playerInfoUpdate | `0x100500608` |
| 97 | `partyBalanceTeams` | social |  | simpleCallback | `0x1004f81d8` |
| 98 | `partyChangeQueueMode` | social |  | simpleCallback | `0x1004f7f0c` |
| 99 | `partyInviteConfirm` | social |  | simpleCallback | `0x1004f76cc` |
| 100 | `partyInviteReject` | social |  | simpleCallback | `0x1004f79b8` |
| 101 | `partyInviteSend` | social |  | simpleCallback | `0x1004f7ab4` |
| 102 | `partyLobbyEnter` | social |  | sessionBootstrap | `0x1004f9a98` |
| 103 | `partyLobbyExit` | social |  | sessionBootstrap | `0x1004f9f10` |
| 104 | `partyMemberKick` | social |  | simpleCallback | `0x1004f7bb0` |
| 105 | `partyMemberMove` | social |  | simpleCallback | `0x1004f7cbc` |
| 106 | `partyMembers` | social |  | simpleCallback | `0x1004f8dcc` |
| 107 | `presenceBroadcast` | social |  | basicResult | `0x1004fcc80` |
| 108 | `presenceSetReceiveBroadcast` | social |  | basicResult | `0x1004fcebc` |
| 109 | `processMessage` | other |  | sessionBootstrap | `0x1004ff2bc` |
| 110 | `purchaseCardPack` | inventory |  | playerInfoUpdate | `0x1004fffc8` |
| 111 | `purchaseDailyPick` | inventory |  | stateUpdateCallback | `0x1004f5460` |
| 112 | `queryGuildInvites` | social |  | guildData | `0x1004fb4bc` |
| 113 | `queryPartyInfo` | social |  | simpleCallback | `0x1004f82d4` |
| 114 | `queryPartyInvites` | social |  | simpleCallback | `0x1004f83c4` |
| 115 | `queryPendingMatch` | match | **YES** | sessionBootstrap | `0x1004fe06c` |
| 116 | `queryPlayerInboxMessages` | other |  | sessionBootstrap | `0x1004fe168` |
| 117 | `queryTeamInfo` | social |  | basicResult | `0x1004fbf9c` |
| 118 | `queryTeamInvites` | social |  | basicResult | `0x1004fc0a0` |
| 119 | `recordMatchExperienceMetrics` | match |  | playerInfoUpdate | `0x1004ff718` |
| 120 | `redeemQuestForPlayer` | inventory |  | playerInfoUpdate | `0x100501fac` |
| 121 | `refreshCardBoxManifest` | inventory |  | playerInfoUpdate | `0x1004ffec0` |
| 122 | `rejectMatch` | match | **YES** | sessionBootstrap | `0x1004fd9e8` |
| 123 | `reportHonorPlayer` | match |  | playerInfoUpdate | `0x1004ffa94` |
| 124 | `setPlayerHandle` | auth |  | sessionBootstrap | `0x1004ff048` |
| 125 | `setPresenceInvisibility` | social |  | sessionBootstrap | `0x1004fdf70` |
| 126 | `setTutorialState` | other |  | playerInfoUpdate | `0x1005001d8` |
| 127 | `skipQuestForPlayer` | inventory |  | playerInfoUpdate | `0x1005020b4` |
| 128 | `spectateFriend` | social |  | sessionBootstrap | `0x1004fdbe0` |
| 129 | `spectatorExitMatch` | match |  | playerInfoUpdate | `0x100502990` |
| 130 | `startSessionForPlayer` | auth | **YES** | sessionBootstrap | `0x1004fcfb8` |
| 131 | `startSessionUrl` | auth |  | playerInfoUpdate | `0x100506f44` |
| 132 | `storeCancelPendingGift` | inventory |  | basicResult | `0x1004fc640` |
| 133 | `storePrepareIAP` | inventory |  | basicResult | `0x1004fc29c` |
| 134 | `storeProcessIAP` | inventory |  | basicResult | `0x1004fc404` |
| 135 | `storeRecordPendingGift` | inventory |  | basicResult | `0x1004fc510` |
| 136 | `storeRequestPurchaseSKU` | inventory |  | basicResult | `0x1004fc190` |
| 137 | `teamInviteConfirm` | social |  | basicResult | `0x1004fbbac` |
| 138 | `teamInviteReject` | social |  | basicResult | `0x1004fbca8` |
| 139 | `teamInviteSend` | social |  | basicResult | `0x1004fbda4` |
| 140 | `teamMemberKick` | social |  | basicResult | `0x1004fbea0` |
| 141 | `update` | other | **YES** | playerInfoUpdate | `0x100503228` |
| 142 | `updateMatchInfo` | match |  | playerInfoUpdate | `0x10050283c` |
| 143 | `updatePlatformPlayerConfig` | other | **YES** | basicResult | `0x1004fcb84` |
| 144 | `updateQuintPartyState` | social |  | simpleCallback | `0x1004f6c5c` |
| 145 | `verifyGovernmentId` | other |  | playerInfoUpdate | `0x1005022d4` |
| 146 | `weaveHeroSkin` | inventory |  | playerInfoUpdate | `0x1005000d0` |

## Dead Methods by Category (for MITM response injection)

### AUTH (8 dead methods)

- `addDeviceToken` → **sessionBootstrap** @ `0x1004ff3b0`
- `authenticate` → **stateUpdateCallback** @ `0x1004f4374`
- `createAccountForPlayer` → **stateUpdateCallback** @ `0x1004f34b0`
- `friendRequestIssueByHandle` → **stateUpdateCallback** @ `0x1004f5b0c`
- `getPlayerFromPlatform` → **stateUpdateCallback** @ `0x1004f3f7c`
- `link_account` → **stateUpdateCallback** @ `0x1004f48dc`
- `setPlayerHandle` → **sessionBootstrap** @ `0x1004ff048`
- `startSessionUrl` → **playerInfoUpdate** @ `0x100506f44`

### SOCIAL (59 dead methods)

- `askInGameFriendToPlay` → **sessionBootstrap** @ `0x1004fdd34`
- `changeGuildMembership` → **guildData** @ `0x1004fb02c`
- `changeGuildMotto` → **guildData** @ `0x1004fa920`
- `createParty` → **simpleCallback** @ `0x1004f6f4c`
- `createQuintParty` → **simpleCallback** @ `0x1004f6478`
- `destroyQuintParty` → **simpleCallback** @ `0x1004f7318`
- `friendAddFavorite` → **simpleCallback** @ `0x1004f6020`
- `friendDelete` → **simpleCallback** @ `0x1004f5f24`
- `friendDeleteFavorite` → **simpleCallback** @ `0x1004f611c`
- `friendNotify` → **stateUpdateCallback** @ `0x1004f5e28`
- `friendReplyFromInGame` → **simpleCallback** @ `0x1004f6218`
- `friendRequestConfirm` → **stateUpdateCallback** @ `0x1004f5c30`
- `friendRequestReject` → **stateUpdateCallback** @ `0x1004f5d2c`
- `friendsListUpdate` → **simpleCallback** @ `0x1004edef0`
- `guildChangeName` → **guildData** @ `0x1004faa2c`
- `guildChangeOfficerStatus` → **guildData** @ `0x1004fae14`
- `guildChangeSettings` → **guildData** @ `0x1004fb28c`
- `guildChangeTag` → **guildData** @ `0x1004fad00`
- `guildCollectJoinBonus` → **guildData** @ `0x1004fb78c`
- `guildInviteConfirm` → **guildData** @ `0x1004fa434`
- `guildInviteOnly` → **guildData** @ `0x1004f92f4`
- `guildInviteReject` → **guildData** @ `0x1004fa530`
- `guildInviteSend` → **guildData** @ `0x1004fa62c`
- `guildLanguageCode` → **guildData** @ `0x1004f92f4`
- `guildMemberKick` → **guildData** @ `0x1004fa728`
- `guildMessage` → **guildData** @ `0x1004f9650`
- `guildRedeemChest` → **guildData** @ `0x1004fb69c`
- `guildSearch` → **guildData** @ `0x1004fb87c`
- `guildTransferCaptain` → **guildData** @ `0x1004faf20`
- `joinGuild` → **guildData** @ `0x1004fa824`
- `joinQuintParty` → **simpleCallback** @ `0x1004f67bc`
- `leaveGuild` → **guildData** @ `0x1004fa344`
- `leaveParty` → **simpleCallback** @ `0x1004f7228`
- `leaveQuintParty` → **simpleCallback** @ `0x1004f75cc`
- `leaveTeam` → **basicResult** @ `0x1004fbabc`
- `partyBalanceTeams` → **simpleCallback** @ `0x1004f81d8`
- `partyChangeQueueMode` → **simpleCallback** @ `0x1004f7f0c`
- `partyInviteConfirm` → **simpleCallback** @ `0x1004f76cc`
- `partyInviteReject` → **simpleCallback** @ `0x1004f79b8`
- `partyInviteSend` → **simpleCallback** @ `0x1004f7ab4`
- `partyLobbyEnter` → **sessionBootstrap** @ `0x1004f9a98`
- `partyLobbyExit` → **sessionBootstrap** @ `0x1004f9f10`
- `partyMemberKick` → **simpleCallback** @ `0x1004f7bb0`
- `partyMemberMove` → **simpleCallback** @ `0x1004f7cbc`
- `partyMembers` → **simpleCallback** @ `0x1004f8dcc`
- `presenceBroadcast` → **basicResult** @ `0x1004fcc80`
- `presenceSetReceiveBroadcast` → **basicResult** @ `0x1004fcebc`
- `queryGuildInvites` → **guildData** @ `0x1004fb4bc`
- `queryPartyInfo` → **simpleCallback** @ `0x1004f82d4`
- `queryPartyInvites` → **simpleCallback** @ `0x1004f83c4`
- `queryTeamInfo` → **basicResult** @ `0x1004fbf9c`
- `queryTeamInvites` → **basicResult** @ `0x1004fc0a0`
- `setPresenceInvisibility` → **sessionBootstrap** @ `0x1004fdf70`
- `spectateFriend` → **sessionBootstrap** @ `0x1004fdbe0`
- `teamInviteConfirm` → **basicResult** @ `0x1004fbbac`
- `teamInviteReject` → **basicResult** @ `0x1004fbca8`
- `teamInviteSend` → **basicResult** @ `0x1004fbda4`
- `teamMemberKick` → **basicResult** @ `0x1004fbea0`
- `updateQuintPartyState` → **simpleCallback** @ `0x1004f6c5c`

### INVENTORY (40 dead methods)

- `attemptRedeemAscensionChest` → **playerInfoUpdate** @ `0x100501644`
- `attemptRedeemAscensionRankUpChest` → **playerInfoUpdate** @ `0x100501740`
- `attemptRedeemAscensionSeasonEndChest` → **playerInfoUpdate** @ `0x100501998`
- `attemptRedeemSeasonalAscensionChest` → **playerInfoUpdate** @ `0x100501a94`
- `buyAscensionSeasonalBundle` → **playerInfoUpdate** @ `0x100501b9c`
- `collectHeroChest` → **stateUpdateCallback** @ `0x1004f57dc`
- `collectProgressiveChest` → **playerInfoUpdate** @ `0x100502b50`
- `equipToSlot` → **equipmentData** @ `0x100501290`
- `equippedEmoji` → **equipmentData** @ `0x1004f8a14`
- `equippedHat` → **equipmentData** @ `0x1004f8a14`
- `equippedPingPack` → **equipmentData** @ `0x1004f8a14`
- `forgeCard` → **playerInfoUpdate** @ `0x1005003f8`
- `forgeEssence` → **playerInfoUpdate** @ `0x100500500`
- `getCardBoxManifest` → **playerInfoUpdate** @ `0x1004ffdc4`
- `getDailyPicker` → **stateUpdateCallback** @ `0x1004f4d68`
- `getEquipmentSlotInfo` → **sessionBootstrap** @ `0x1004fec28`
- `getForgeManifest` → **playerInfoUpdate** @ `0x100500818`
- `getHeroChestData` → **stateUpdateCallback** @ `0x1004f56e0`
- `getInventoryGroups` → **sessionBootstrap** @ `0x1004feb30`
- `getPlayerCardInventory` → **playerInfoUpdate** @ `0x1004ffbd8`
- `getPlayerSkinProgress` → **stateUpdateCallback** @ `0x1004f5154`
- `getProgressiveChestDescriptions` → **playerInfoUpdate** @ `0x100502a54`
- `getQuestDisplayDataForPlayer` → **playerInfoUpdate** @ `0x100501d9c`
- `getQuestDisplayDataForPlayerAndType` → **playerInfoUpdate** @ `0x100501ea4`
- `getRewardChestDefinitions` → **playerInfoUpdate** @ `0x100500710`
- `getRewardsManifest` → **playerInfoUpdate** @ `0x100501ca0`
- `getSeasonRewardsManifest` → **playerInfoUpdate** @ `0x100500914`
- `openInventoryChest` → **playerInfoUpdate** @ `0x100500c08`
- `openRewardChest` → **playerInfoUpdate** @ `0x100500608`
- `purchaseCardPack` → **playerInfoUpdate** @ `0x1004fffc8`
- `purchaseDailyPick` → **stateUpdateCallback** @ `0x1004f5460`
- `redeemQuestForPlayer` → **playerInfoUpdate** @ `0x100501fac`
- `refreshCardBoxManifest` → **playerInfoUpdate** @ `0x1004ffec0`
- `skipQuestForPlayer` → **playerInfoUpdate** @ `0x1005020b4`
- `storeCancelPendingGift` → **basicResult** @ `0x1004fc640`
- `storePrepareIAP` → **basicResult** @ `0x1004fc29c`
- `storeProcessIAP` → **basicResult** @ `0x1004fc404`
- `storeRecordPendingGift` → **basicResult** @ `0x1004fc510`
- `storeRequestPurchaseSKU` → **basicResult** @ `0x1004fc190`
- `weaveHeroSkin` → **playerInfoUpdate** @ `0x1005000d0`

### MATCH (6 dead methods)

- `getAscensionDisplayData` → **playerInfoUpdate** @ `0x100501548`
- `getTrophyCase` → **playerInfoUpdate** @ `0x100500b0c`
- `recordMatchExperienceMetrics` → **playerInfoUpdate** @ `0x1004ff718`
- `reportHonorPlayer` → **playerInfoUpdate** @ `0x1004ffa94`
- `spectatorExitMatch` → **playerInfoUpdate** @ `0x100502990`
- `updateMatchInfo` → **playerInfoUpdate** @ `0x10050283c`

### OTHER (13 dead methods)

- `askRegistrationConsent` → **playerInfoUpdate** @ `0x100505520`
- `dismissReliableMessage` → **sessionBootstrap** @ `0x1004fde88`
- `getBuffManifest` → **playerInfoUpdate** @ `0x100500a10`
- `getHeroMastery` → **sessionBootstrap** @ `0x1004fef50`
- `getPlayerEsportsBadgeData` → **stateUpdateCallback** @ `0x1004f5058`
- `getPlayerInfos` → **sessionBootstrap** @ `0x1004fe884`
- `isCaptain` → **playerInfoUpdate** @ `0x10050b6a8`
- `isGovernmentIdVerified` → **playerInfoUpdate** @ `0x100502670`
- `notifyGameResults` → **playerInfoUpdate** @ `0x1005028f8`
- `processMessage` → **sessionBootstrap** @ `0x1004ff2bc`
- `queryPlayerInboxMessages` → **sessionBootstrap** @ `0x1004fe168`
- `setTutorialState` → **playerInfoUpdate** @ `0x1005001d8`
- `verifyGovernmentId` → **playerInfoUpdate** @ `0x1005022d4`
