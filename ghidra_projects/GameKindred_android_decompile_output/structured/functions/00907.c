// functions/00907 — 15 functions
#include "libGameKindred.h"




void FUN_00907068(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  char **local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00940c28();
  if (*(char *)(lVar3 + 8) == '\0') {
    uVar4 = FUN_00cdbb18();
    pcVar5 = (char *)FUN_00cdc794(uVar4,param_2);
    pcVar1 = "talent_none";
    if (pcVar5 != (char *)0x0) {
      pcVar1 = pcVar5;
    }
    puStack_90 = &local_88;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = "hero";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3e60(lVar3 + 0x28,param_1);
    local_98 = "talent";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3e60(lVar3 + 0x28,pcVar1);
    local_98 = "rarity";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3ee0(lVar3 + 0x28,param_3);
    local_98 = "level";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3ee0(lVar3 + 0x28,param_4);
    uVar4 = FUN_00ceadc8(param_5);
    local_98 = "mode";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3e60(lVar3 + 0x28,uVar4);
    uVar4 = FUN_00ceadbc();
    local_98 = "botDifficulty";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3ef0(uVar4,lVar3 + 0x28);
    FUN_00ec506c("Balance_Talent_Pick",&puStack_90);
    FUN_00ec5024("Balance_Talent_Pick",&puStack_90);
    FUN_0090d2e0(&puStack_90,local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00907294(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,uint param_6)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  char **local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00940c28();
  if (*(char *)(lVar3 + 8) == '\0') {
    uVar4 = FUN_00cdbb18();
    pcVar5 = (char *)FUN_00cdc794(uVar4,param_2);
    pcVar1 = "talent_none";
    if (pcVar5 != (char *)0x0) {
      pcVar1 = pcVar5;
    }
    puStack_90 = &local_88;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = "hero";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3e60(lVar3 + 0x28,param_1);
    local_98 = "talent";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3e60(lVar3 + 0x28,pcVar1);
    local_98 = "rarity";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3ee0(lVar3 + 0x28,param_3);
    local_98 = "level";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3ee0(lVar3 + 0x28,param_4);
    uVar4 = FUN_00ceadc8(param_5);
    local_98 = "mode";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3e60(lVar3 + 0x28,uVar4);
    uVar4 = FUN_00ceadbc();
    local_98 = "botDifficulty";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3ef0(uVar4,lVar3 + 0x28);
    local_98 = "win";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3ee0(lVar3 + 0x28,param_6 & 1);
    FUN_00ec506c("Balance_Talent_MatchEnd",&puStack_90);
    FUN_00ec5024("Balance_Talent_MatchEnd",&puStack_90);
    FUN_0090d2e0(&puStack_90,local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00907504(void)

{
  long lVar1;
  
  lVar1 = FUN_00940c28();
  if (*(char *)(lVar1 + 8) != '\0') {
    return;
  }
  FUN_00ec5068("Game_Karma_JusticeServedReceived");
  FUN_00ec5020("Game_Karma_JusticeServedReceived");
  return;
}




void FUN_00907548(byte *param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  char *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  char **local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_50 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  pbVar3 = *(byte **)(param_1 + 0x10);
  local_30 = &local_58;
  if ((*param_1 & 1) == 0) {
    pbVar3 = param_1 + 1;
  }
  local_58 = "reason";
  lVar2 = FUN_0090d33c(&local_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
  FUN_00ec3e60(lVar2 + 0x28,pbVar3);
  FUN_00ec506c("Game_Penalty_QbanReceived",&local_50);
  FUN_00ec5024("Game_Penalty_QbanReceived",&local_50);
  FUN_0090d2e0(&local_50,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00907610(void)

{
  long lVar1;
  
  lVar1 = FUN_00940c28();
  if (*(char *)(lVar1 + 8) != '\0') {
    return;
  }
  FUN_00ec5068("Onboarding_Tutorial_Start");
  FUN_00ec5068("tutorial_start");
  FUN_00ec5020("Onboarding_Tutorial_Start");
  FUN_00ec5020("tutorial_start");
  return;
}




void FUN_0090766c(void)

{
  FUN_00ec5068("Onboarding_Tutorial_Finish");
  FUN_00ec5020("Onboarding_Tutorial_Finish");
  FUN_00ec50ac("b32e1n");
  FUN_00ec5068("tutorial_complete");
  FUN_00ec5020("tutorial_complete");
  return;
}




void FUN_009076bc(void)

{
  long lVar1;
  
  lVar1 = FUN_00940c28();
  if (*(char *)(lVar1 + 8) != '\0') {
    return;
  }
  FUN_00ec5068("Onboarding_Tutorial_Exit");
  FUN_00ec5020("Onboarding_Tutorial_Exit");
  return;
}




void FUN_00907700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  char *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00940c28();
  if (*(char *)(lVar2 + 8) == '\0') {
    puStack_70 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = "group";
    local_50 = &local_78;
    lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3e60(lVar2 + 0x28,param_1);
    local_78 = "subgroup";
    local_50 = &local_78;
    lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3e60(lVar2 + 0x28,param_2);
    local_78 = "event";
    local_50 = &local_78;
    lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3e60(lVar2 + 0x28,param_3);
    FUN_00ec506c("Onboarding_Tutorial_Step",&puStack_70);
    FUN_00ec5024("Onboarding_Tutorial_Step",&puStack_70);
    FUN_0090d2e0(&puStack_70,local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00907848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  timespec local_70;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (DAT_02c091b8 != 0) {
    FUN_00e70314(DAT_02c091b8 + 0x20);
  }
  lVar2 = FUN_00940c28();
  if (*(char *)(lVar2 + 8) == '\0') {
    puStack_88 = &local_80;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = "tag1";
    local_70.tv_sec = (__time_t)&local_90;
    lVar2 = FUN_0090d33c(&puStack_88,&local_90,&DAT_01b9349b,&local_70,auStack_60);
    FUN_00ec3e60(lVar2 + 0x28,param_1);
    local_90 = "tag2";
    local_70.tv_sec = (__time_t)&local_90;
    lVar2 = FUN_0090d33c(&puStack_88,&local_90,&DAT_01b9349b,&local_70,auStack_60);
    FUN_00ec3e60(lVar2 + 0x28,param_2);
    local_90 = "tag3";
    local_70.tv_sec = (__time_t)&local_90;
    lVar2 = FUN_0090d33c(&puStack_88,&local_90,&DAT_01b9349b,&local_70,auStack_60);
    FUN_00ec3e60(lVar2 + 0x28,param_3);
    lVar2 = DAT_02c091b8;
    if (DAT_02c091b8 != 0) {
      clock_gettime(1,&local_70);
      lVar3 = *(long *)(lVar2 + 0x28);
      lVar4 = local_70.tv_nsec - lVar3;
      lVar2 = local_70.tv_sec - *(long *)(lVar2 + 0x20);
      if (lVar4 < 0) {
        lVar2 = lVar2 + -1;
        lVar4 = (local_70.tv_nsec + 1000000000) - lVar3;
      }
      local_90 = "timeSinceLastOnboardingFunnel";
      local_70.tv_sec = (__time_t)&local_90;
      lVar3 = FUN_0090d33c(&puStack_88,&local_90,&DAT_01b9349b,&local_70,auStack_60);
      FUN_00ec3ef0((float)((double)(lVar4 + lVar2 * 1000000000) * 1e-09),lVar3 + 0x28);
    }
    FUN_00ec506c("Onboarding_Funnel",&puStack_88);
    FUN_00ec5024("Onboarding_Funnel",&puStack_88);
    FUN_0090d2e0(&puStack_88,local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00907a44(int param_1)

{
  if (param_1 == 2) {
    FUN_00ec50ac("vfr3mn");
    FUN_00ec50bc("Tutorial_1_Complete");
    return;
  }
  if (param_1 != 4) {
    if (param_1 == 6) {
      FUN_00ec50ac("bi9qca");
      FUN_00ec50bc("Tutorial_3_Complete");
      return;
    }
    return;
  }
  FUN_00ec50ac("9vt10s");
  FUN_00ec50bc("Tutorial_2_Complete");
  return;
}




void FUN_00907ac0(void)

{
  FUN_00ec50ac("ta3v4m");
  FUN_00ec50bc("Tutorial_4_Complete");
  FUN_00ec50ac("b32e1n");
  return;
}




void FUN_00907af0(uint param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  char *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  char **local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pcVar1 = "new";
  if ((param_1 & 1) == 0) {
    pcVar1 = "experienced";
  }
  local_60 = &local_58;
  local_68 = "areYouNew";
  local_40 = &local_68;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3e60(lVar3 + 0x28,pcVar1);
  FUN_00ec506c("Onboarding_AreYouNew",&local_60);
  FUN_00ec5024("Onboarding_AreYouNew",&local_60);
  FUN_00ec5084("Onboarding_AreYouNew",param_1 & 1);
  FUN_00ec503c("Onboarding_AreYouNew",param_1 & 1);
  FUN_0090d2e0(&local_60,local_58);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00907be8(uint param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  char *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  char **local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pcVar1 = "joystick";
  if ((param_1 & 1) == 0) {
    pcVar1 = "tap";
  }
  local_60 = &local_58;
  local_68 = "controlScheme";
  local_40 = &local_68;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3e60(lVar3 + 0x28,pcVar1);
  FUN_00ec506c("Onboarding_ChooseControlScheme",&local_60);
  FUN_00ec5024("Onboarding_ChooseControlScheme",&local_60);
  FUN_00ec5084("Onboarding_ChooseControlScheme",param_1 & 1);
  FUN_00ec503c("Onboarding_ChooseControlScheme",param_1 & 1);
  FUN_0090d2e0(&local_60,local_58);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00907ce0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  char *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_00940c28();
  if (*(char *)(lVar4 + 8) == '\0') {
    local_70 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    uVar5 = FUN_00ceadc8(param_1);
    local_78 = "mode";
    local_50 = &local_78;
    lVar4 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3e60(lVar4 + 0x28,uVar5);
    uVar5 = FUN_00ceadbc();
    local_78 = "botDifficulty";
    local_50 = &local_78;
    lVar4 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3ef0(uVar5,lVar4 + 0x28);
    uVar5 = FUN_00a07558();
    puVar6 = (undefined4 *)FUN_00a0766c(uVar5,0);
    uVar1 = *puVar6;
    local_78 = "eloTier5v5";
    local_50 = &local_78;
    lVar4 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3ee0(lVar4 + 0x28,uVar1);
    uVar5 = FUN_00a07558();
    puVar6 = (undefined4 *)FUN_00a0766c(uVar5,1);
    uVar1 = *puVar6;
    local_78 = "eloTier3v3";
    local_50 = &local_78;
    lVar4 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3ee0(lVar4 + 0x28,uVar1);
    lVar4 = FUN_009580b8();
    uVar2 = *(undefined1 *)(lVar4 + 0x568a);
    local_78 = "bInParty";
    local_50 = &local_78;
    lVar4 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3ee0(lVar4 + 0x28,uVar2);
    FUN_00ec506c("Lobby_Created",&local_70);
    FUN_00ec5024("Lobby_Created",&local_70);
    FUN_0090d2e0(&local_70,local_68);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00907ecc(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  char *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  char **local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00940c28();
  if (*(char *)(lVar3 + 8) == '\0') {
    local_60 = &local_58;
    local_58 = 0;
    uStack_50 = 0;
    uVar4 = FUN_00ceadc8(param_1);
    local_68 = "mode";
    local_40 = &local_68;
    lVar3 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
    FUN_00ec3e60(lVar3 + 0x28,uVar4);
    uVar4 = FUN_00a07558();
    puVar5 = (undefined4 *)FUN_00a0766c(uVar4,0);
    uVar1 = *puVar5;
    local_68 = "eloTier5v5";
    local_40 = &local_68;
    lVar3 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    uVar4 = FUN_00a07558();
    puVar5 = (undefined4 *)FUN_00a0766c(uVar4,1);
    uVar1 = *puVar5;
    local_68 = "eloTier3v3";
    local_40 = &local_68;
    lVar3 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    FUN_00ec506c("DraftLobby_Started",&local_60);
    FUN_00ec5024("DraftLobby_Started",&local_60);
    FUN_0090d2e0(&local_60,local_58);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

