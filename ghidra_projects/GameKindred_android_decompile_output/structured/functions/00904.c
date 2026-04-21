// functions/00904 — 28 functions
#include "libGameKindred.h"




void FUN_0090436c(void)

{
  return;
}




void FUN_00904370(void)

{
  return;
}




void FUN_00904374(undefined8 param_1,undefined8 param_2)

{
  FUN_00903ec4(1,param_1,param_2);
  return;
}




void FUN_00904384(void)

{
  return;
}




void FUN_00904388(void)

{
  return;
}




void FUN_0090438c(undefined8 param_1,undefined8 param_2)

{
  FUN_00903ec4(0,param_1,param_2);
  return;
}




void FUN_0090439c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  char *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  char **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_60 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = "boxSkuID";
  local_40 = &local_68;
  lVar2 = FUN_0090d33c(&puStack_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_68 = "currency";
  local_40 = &local_68;
  lVar2 = FUN_0090d33c(&puStack_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3e60(lVar2 + 0x28,"ICE");
  FUN_00ec506c("Progression_Cardbox_Peek",&puStack_60);
  FUN_00ec5024("Progression_Cardbox_Peek",&puStack_60);
  FUN_0090d2e0(&puStack_60,local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00904498(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  char *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  char **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_60 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = "boxSkuID";
  local_40 = &local_68;
  lVar2 = FUN_0090d33c(&puStack_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_68 = "currency";
  local_40 = &local_68;
  lVar2 = FUN_0090d33c(&puStack_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3e60(lVar2 + 0x28,"glory");
  FUN_00ec506c("Progression_Cardbox_Peek",&puStack_60);
  FUN_00ec5024("Progression_Cardbox_Peek",&puStack_60);
  FUN_0090d2e0(&puStack_60,local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00904594(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  char *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puStack_70 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = "source";
  local_50 = &local_78;
  lVar3 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar3 + 0x28,"gloryBox");
  local_78 = "boxSkuID";
  local_50 = &local_78;
  lVar3 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar3 + 0x28,param_1);
  uVar4 = *(undefined8 *)(param_2 + 2);
  local_78 = "card";
  local_50 = &local_78;
  lVar3 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar3 + 0x28,uVar4);
  uVar1 = *param_2;
  local_78 = "rarity";
  local_50 = &local_78;
  lVar3 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar3 + 0x28,uVar1);
  FUN_00ec506c("Economy_Convert_GloryToCard",&puStack_70);
  FUN_00ec5024("Economy_Convert_GloryToCard",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090470c(void)

{
  long lVar1;
  
  lVar1 = FUN_00940c28();
  if (*(char *)(lVar1 + 8) != '\0') {
    return;
  }
  FUN_00ec5068("Social_FriendRequest");
  FUN_00ec5020("Social_FriendRequest");
  return;
}




void FUN_00904750(void)

{
  long lVar1;
  
  lVar1 = FUN_00940c28();
  if (*(char *)(lVar1 + 8) != '\0') {
    return;
  }
  FUN_00ec5068("Social_FriendAccept");
  FUN_00ec5020("Social_FriendAccept");
  return;
}




void FUN_00904794(ulong param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  char *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  char **local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puStack_50 = &local_48;
  local_58 = "auto";
  local_30 = &local_58;
  local_48 = 0;
  uStack_40 = 0;
  pcVar1 = "auto";
  if ((param_1 & 1) == 0) {
    pcVar1 = "manual";
  }
  lVar3 = FUN_0090d33c(&puStack_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
  FUN_00ec3e60(lVar3 + 0x28,pcVar1);
  FUN_00ec506c("Social_PresenceBroadcast",&puStack_50);
  FUN_00ec5024("Social_PresenceBroadcast",&puStack_50);
  FUN_0090d2e0(&puStack_50,local_48);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00904858(void)

{
  FUN_00ec5068("Social_CreateGuild");
  FUN_00ec5020("Social_CreateGuild");
  return;
}




void FUN_00904884(undefined4 param_1)

{
  long lVar1;
  long lVar2;
  char *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  char **local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = &local_58;
  puStack_50 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = "numGuildPlayers";
  lVar2 = FUN_0090d33c(&puStack_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
  FUN_00ec3ee0(lVar2 + 0x28,param_1);
  lVar2 = FUN_00940c28();
  if (*(char *)(lVar2 + 8) == '\0') {
    FUN_00ec506c("Social_GuildMatch_Finish",&puStack_50);
    FUN_00ec5024("Social_GuildMatch_Finish",&puStack_50);
  }
  FUN_0090d2e0(&puStack_50,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00904948(void)

{
  FUN_00ec5068("Social_CreateTeam");
  FUN_00ec5020("Social_CreateTeam");
  return;
}




void FUN_00904974(void)

{
  FUN_00ec5068("Social_TeamMatch_Finish");
  FUN_00ec5020("Social_TeamMatch_Finish");
  return;
}




void FUN_009049a0(void)

{
  long lVar1;
  
  lVar1 = FUN_00940c28();
  if (*(char *)(lVar1 + 8) != '\0') {
    return;
  }
  FUN_00ec5068("Social_Guild_Finder_See");
  FUN_00ec5020("Social_Guild_Finder_See");
  return;
}




void FUN_009049e4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  char *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  char **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_80 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = "guildType";
  local_60 = &local_88;
  lVar2 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_88 = "languageCode";
  local_60 = &local_88;
  lVar2 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar2 + 0x28,param_2);
  local_88 = "minSkillTier";
  local_60 = &local_88;
  lVar2 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3ee0(lVar2 + 0x28,param_3);
  local_88 = "primeTimeUTC";
  local_60 = &local_88;
  lVar2 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3ee0(lVar2 + 0x28,param_4);
  FUN_00ec506c("Social_Guild_Finder_ApplyFilter",&local_80);
  FUN_00ec5024("Social_Guild_Finder_ApplyFilter",&local_80);
  FUN_0090d2e0(&local_80,local_78);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00904b64(void)

{
  FUN_00ec5068("Social_Guild_Finder_JoinFromFinder");
  FUN_00ec5020("Social_Guild_Finder_JoinFromFinder");
  return;
}




void FUN_00904b90(void)

{
  FUN_00ec5068("Social_Guild_Finder_JoinFromInvite");
  FUN_00ec5020("Social_Guild_Finder_JoinFromInvite");
  return;
}




void FUN_00904bbc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  char *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  char **local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = &local_58;
  puStack_50 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = "guildUUID";
  lVar2 = FUN_0090d33c(&puStack_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  FUN_00ec506c("Social_Guild_Finder_InfoFromInvite",&puStack_50);
  FUN_00ec5024("Social_Guild_Finder_InfoFromInvite",&puStack_50);
  FUN_0090d2e0(&puStack_50,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00904c74(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  char *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  char **local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = &local_58;
  puStack_50 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = "guildUUID";
  lVar2 = FUN_0090d33c(&puStack_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  FUN_00ec506c("Social_Guild_Finder_InfoFromFinder",&puStack_50);
  FUN_00ec5024("Social_Guild_Finder_InfoFromFinder",&puStack_50);
  FUN_0090d2e0(&puStack_50,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00904d2c(void)

{
  FUN_00ec5068("Social_Guild_JoinFromGuildPage");
  FUN_00ec5020("Social_Guild_JoinFromGuildPage");
  return;
}




void FUN_00904d58(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  char *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  char **local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = &local_58;
  puStack_50 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = "errorName";
  lVar2 = FUN_0090d33c(&puStack_50,&local_58,&DAT_01b9349b,&local_30,auStack_38);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  FUN_00ec506c("Quality_PlatformErrorDialog",&puStack_50);
  FUN_00ec5024("Quality_PlatformErrorDialog",&puStack_50);
  FUN_0090d2e0(&puStack_50,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00904e10(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00940c28();
  if (((*(char *)(lVar2 + 8) == '\0') || (iVar1 = FUN_0092f28c(), iVar1 != 0)) &&
     (lVar2 = DAT_02c091b8, DAT_02c091b8 != 0)) {
    uVar3 = NEON_fmov(0xbf800000,4);
    *(undefined1 *)(DAT_02c091b8 + 1) = 0;
    *(undefined8 *)(lVar2 + 4) = uVar3;
    *(undefined4 *)(lVar2 + 0xc) = 0xbf800000;
    FUN_00e70314(lVar2 + 0x10);
    return;
  }
  return;
}




void FUN_00904e60(ulong param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  timespec local_48;
  long local_38;
  
  lVar4 = DAT_02c091b8;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (DAT_02c091b8 != 0) {
    uVar3 = clock_gettime(1,&local_48);
    param_1 = (ulong)uVar3;
    lVar1 = *(long *)(lVar4 + 0x18);
    lVar5 = local_48.tv_nsec - lVar1;
    lVar4 = local_48.tv_sec - *(long *)(lVar4 + 0x10);
    if (lVar5 < 0) {
      lVar4 = lVar4 + -1;
      lVar5 = (local_48.tv_nsec + 1000000000) - lVar1;
    }
    *(float *)(DAT_02c091b8 + 8) = (float)((double)(lVar5 + lVar4 * 1000000000) * 1e-09);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}




void FUN_00904f0c(ulong param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  timespec local_48;
  long local_38;
  
  lVar4 = DAT_02c091b8;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (DAT_02c091b8 != 0) {
    uVar3 = clock_gettime(1,&local_48);
    param_1 = (ulong)uVar3;
    lVar1 = *(long *)(lVar4 + 0x18);
    lVar5 = local_48.tv_nsec - lVar1;
    lVar4 = local_48.tv_sec - *(long *)(lVar4 + 0x10);
    if (lVar5 < 0) {
      lVar4 = lVar4 + -1;
      lVar5 = (local_48.tv_nsec + 1000000000) - lVar1;
    }
    *(float *)(DAT_02c091b8 + 0xc) = (float)((double)(lVar5 + lVar4 * 1000000000) * 1e-09);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}




void FUN_00904fb8(ulong param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  timespec local_48;
  long local_38;
  
  lVar4 = DAT_02c091b8;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (DAT_02c091b8 != 0) {
    uVar3 = clock_gettime(1,&local_48);
    param_1 = (ulong)uVar3;
    lVar1 = *(long *)(lVar4 + 0x18);
    lVar5 = local_48.tv_nsec - lVar1;
    lVar4 = local_48.tv_sec - *(long *)(lVar4 + 0x10);
    if (lVar5 < 0) {
      lVar4 = lVar4 + -1;
      lVar5 = (local_48.tv_nsec + 1000000000) - lVar1;
    }
    *(float *)(DAT_02c091b8 + 4) = (float)((double)(lVar5 + lVar4 * 1000000000) * 1e-09);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

