// functions/00906 — 8 functions
#include "libGameKindred.h"




void FUN_009061c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  char *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  char **local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00940c28();
  if (*(char *)(lVar3 + 8) == '\0') {
    local_80 = &local_78;
    local_78 = 0;
    uStack_70 = 0;
    uVar4 = FUN_00ceadc8(param_1);
    local_88 = "mode";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3e60(lVar3 + 0x28,uVar4);
    uVar4 = FUN_00ceadbc();
    local_88 = "botDifficulty";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ef0(uVar4,lVar3 + 0x28);
    local_88 = "hero";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3e60(lVar3 + 0x28,param_2);
    uVar4 = FUN_00a07558();
    puVar5 = (undefined4 *)FUN_00a0766c(uVar4,0);
    uVar1 = *puVar5;
    local_88 = "eloTier5v5";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    uVar4 = FUN_00a07558();
    puVar5 = (undefined4 *)FUN_00a0766c(uVar4,1);
    uVar1 = *puVar5;
    local_88 = "eloTier3v3";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    local_88 = "pathName";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3e60(lVar3 + 0x28,param_3);
    FUN_00ec506c("Balance_RecommendedPath_Selected",&local_80);
    FUN_00ec5024("Balance_RecommendedPath_Selected",&local_80);
    FUN_0090d2e0(&local_80,local_78);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009063e8(ulong param_1,undefined8 param_2,byte *param_3)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  char *local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  char **local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00940c28();
  if (*(char *)(lVar3 + 8) == '\0') {
    puStack_80 = &local_78;
    local_78 = 0;
    uStack_70 = 0;
    pcVar1 = "enemy";
    if ((param_1 & 1) == 0) {
      pcVar1 = "ally";
    }
    local_88 = "team";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3e60(lVar3 + 0x28,pcVar1);
    pbVar5 = *(byte **)(param_3 + 0x10);
    local_88 = "matchId";
    if ((*param_3 & 1) == 0) {
      pbVar5 = param_3 + 1;
    }
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3e60(lVar3 + 0x28,pbVar5);
    uVar4 = FUN_00ceadc8(param_2);
    local_88 = "mode";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3e60(lVar3 + 0x28,uVar4);
    uVar4 = FUN_00ceadbc();
    local_88 = "botDifficulty";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ef0(uVar4,lVar3 + 0x28);
    FUN_00ec506c("Game_Karma_Upvote",&puStack_80);
    FUN_00ec5024("Game_Karma_Upvote",&puStack_80);
    FUN_0090d2e0(&puStack_80,local_78);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009065a8(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  char *local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  char **local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00940c28();
  if (*(char *)(lVar3 + 8) == '\0') {
    puStack_80 = &local_78;
    local_78 = 0;
    uStack_70 = 0;
    pcVar1 = "ally";
    if ((param_2 & 1) == 0) {
      pcVar1 = "enemy";
    }
    local_88 = "team";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3e60(lVar3 + 0x28,pcVar1);
    local_88 = "type";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3e60(lVar3 + 0x28,param_1);
    pbVar5 = *(byte **)(param_4 + 0x10);
    local_88 = "matchId";
    if ((*param_4 & 1) == 0) {
      pbVar5 = param_4 + 1;
    }
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3e60(lVar3 + 0x28,pbVar5);
    uVar4 = FUN_00ceadc8(param_3);
    local_88 = "mode";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3e60(lVar3 + 0x28,uVar4);
    uVar4 = FUN_00ceadbc();
    local_88 = "botDifficulty";
    local_60 = &local_88;
    lVar3 = FUN_0090d33c(&puStack_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ef0(uVar4,lVar3 + 0x28);
    FUN_00ec506c("Game_Karma_Downvote",&puStack_80);
    FUN_00ec5024("Game_Karma_Downvote",&puStack_80);
    FUN_0090d2e0(&puStack_80,local_78);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009067a8(void)

{
  FUN_00ec5068("Game_Karma_BanReceived");
  FUN_00ec5020("Game_Karma_BanReceived");
  return;
}




void FUN_009067d4(void)

{
  FUN_00ec5068("Game_Karma_WarningReceived");
  FUN_00ec5020("Game_Karma_WarningReceived");
  return;
}




void FUN_00906800(void)

{
  FUN_00ec5068("Game_Elo_ForgivenReceived");
  FUN_00ec5020("Game_Elo_ForgivenReceived");
  return;
}




void FUN_0090682c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  long lVar1;
  long lVar2;
  char *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  char **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00940c28();
  if (*(char *)(lVar2 + 8) == '\0') {
    puStack_90 = &local_88;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = "hero";
    local_70 = &local_98;
    lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3e60(lVar2 + 0x28,param_1);
    local_98 = "talent";
    local_70 = &local_98;
    lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3e60(lVar2 + 0x28,param_2);
    local_98 = "rarity";
    local_70 = &local_98;
    lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3ee0(lVar2 + 0x28,param_3);
    local_98 = "newLevel";
    local_70 = &local_98;
    lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3ee0(lVar2 + 0x28,param_4);
    local_98 = "glorySpent";
    local_70 = &local_98;
    lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3ee0(lVar2 + 0x28,param_5);
    FUN_00ec506c("Progression_Talent_Upgrade",&puStack_90);
    FUN_00ec5024("Progression_Talent_Upgrade",&puStack_90);
    FUN_0090d2e0(&puStack_90,local_88);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = "type1";
  puStack_90 = &local_88;
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar2 + 0x28,"talent");
  local_98 = "type2_talent_action";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar2 + 0x28,"upgrading");
  local_98 = "type3_talent_upgrade_hero";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_98 = "type4_talent_upgrade_rarity";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar2 + 0x28,param_3);
  local_98 = "type5_talent_upgrade_talent";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar2 + 0x28,param_2);
  local_98 = "type6_talent_upgrade_level";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar2 + 0x28,param_4);
  local_98 = "amount";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar2 + 0x28,param_5);
  FUN_00ec506c(PTR_s_Economy_Sink_Glory_02be30a0,&puStack_90);
  FUN_00ec5024(PTR_s_Economy_Sink_Glory_02be30a0,&puStack_90);
  FUN_0090d2e0(&puStack_90,local_88);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = "type1";
  puStack_90 = &local_88;
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar2 + 0x28,"talent");
  local_98 = "type2_talent_action";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar2 + 0x28,"upgrading");
  local_98 = "type3_talent_upgrade_hero";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_98 = "type4_talent_upgrade_rarity";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar2 + 0x28,param_3);
  local_98 = "type5_talent_upgrade_talent";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar2 + 0x28,param_2);
  local_98 = "type6_talent_upgrade_level";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar2 + 0x28,param_4);
  local_98 = "amount";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar2 + 0x28,param_6);
  FUN_00ec506c(PTR_s_Economy_Sink_Talent_02be30e8,&puStack_90);
  FUN_00ec5024(PTR_s_Economy_Sink_Talent_02be30e8,&puStack_90);
  FUN_0090d2e0(&puStack_90,local_88);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00906d44(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  long lVar1;
  long lVar2;
  char *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  char **local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = "hero";
  puStack_90 = &local_88;
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_98 = "talent";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar2 + 0x28,param_2);
  local_98 = "rarity";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar2 + 0x28,param_3);
  local_98 = "quantity";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar2 + 0x28,param_4);
  local_98 = "totalGloryPrice";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar2 + 0x28,param_5);
  FUN_00ec506c("Progression_Talent_DailyPick_Purchase",&puStack_90);
  FUN_00ec5024("Progression_Talent_DailyPick_Purchase",&puStack_90);
  FUN_0090d2e0(&puStack_90,local_88);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = "type1";
  puStack_90 = &local_88;
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar2 + 0x28,"talent");
  local_98 = "type2_talent_action";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar2 + 0x28,"buyDailyPick");
  local_98 = "type3_talent_dailyPick_hero";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_98 = "type4_talent_dailyPick_rarity";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar2 + 0x28,param_3);
  local_98 = "type5_talent_dailyPick_talent";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3e60(lVar2 + 0x28,param_2);
  local_98 = "amount";
  local_70 = &local_98;
  lVar2 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
  FUN_00ec3ee0(lVar2 + 0x28,param_5);
  FUN_00ec506c(PTR_s_Economy_Sink_Glory_02be30a0,&puStack_90);
  FUN_00ec5024(PTR_s_Economy_Sink_Glory_02be30a0,&puStack_90);
  FUN_0090d2e0(&puStack_90,local_88);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

