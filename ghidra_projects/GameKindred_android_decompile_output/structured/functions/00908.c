// functions/00908 — 10 functions
#include "libGameKindred.h"




void FUN_00908034(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  char *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00940c28();
  if (*(char *)(lVar3 + 8) == '\0') {
    local_70 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    uVar4 = FUN_00ceadc8(param_2);
    local_78 = "mode";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3e60(lVar3 + 0x28,uVar4);
    local_78 = "hero";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3e60(lVar3 + 0x28,param_1);
    uVar4 = FUN_00a07558();
    puVar5 = (undefined4 *)FUN_00a0766c(uVar4,0);
    uVar1 = *puVar5;
    local_78 = "eloTier5v5";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    uVar4 = FUN_00a07558();
    puVar5 = (undefined4 *)FUN_00a0766c(uVar4,1);
    uVar1 = *puVar5;
    local_78 = "eloTier3v3";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    local_78 = "turn";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3ee0(lVar3 + 0x28,param_3);
    FUN_00ec506c("DraftLobby_Hero_Ban",&local_70);
    FUN_00ec5024("DraftLobby_Hero_Ban",&local_70);
    FUN_0090d2e0(&local_70,local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00908214(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *puVar5;
  char *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_70 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  uVar3 = FUN_00ceadc8();
  local_78 = "mode";
  local_50 = &local_78;
  lVar4 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar4 + 0x28,uVar3);
  uVar3 = FUN_00a07558();
  puVar5 = (undefined4 *)FUN_00a0766c(uVar3,0);
  uVar1 = *puVar5;
  local_78 = "eloTier5v5";
  local_50 = &local_78;
  lVar4 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar4 + 0x28,uVar1);
  uVar3 = FUN_00a07558();
  puVar5 = (undefined4 *)FUN_00a0766c(uVar3,1);
  uVar1 = *puVar5;
  local_78 = "eloTier3v3";
  local_50 = &local_78;
  lVar4 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar4 + 0x28,uVar1);
  local_78 = "turn";
  local_50 = &local_78;
  lVar4 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar4 + 0x28,param_2);
  FUN_00ec506c("DraftLobby_Skipped_Ban",&local_70);
  FUN_00ec5024("DraftLobby_Skipped_Ban",&local_70);
  FUN_0090d2e0(&local_70,local_68);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009083a8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  char *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00940c28();
  if (*(char *)(lVar3 + 8) == '\0') {
    local_70 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    uVar4 = FUN_00ceadc8(param_2);
    local_78 = "mode";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3e60(lVar3 + 0x28,uVar4);
    local_78 = "hero";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3e60(lVar3 + 0x28,param_1);
    uVar4 = FUN_00a07558();
    puVar5 = (undefined4 *)FUN_00a0766c(uVar4,0);
    uVar1 = *puVar5;
    local_78 = "eloTier5v5";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    uVar4 = FUN_00a07558();
    puVar5 = (undefined4 *)FUN_00a0766c(uVar4,1);
    uVar1 = *puVar5;
    local_78 = "eloTier3v3";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    local_78 = "turn";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3ee0(lVar3 + 0x28,param_3);
    FUN_00ec506c("DraftLobby_Hero_Pick",&local_70);
    FUN_00ec5024("DraftLobby_Hero_Pick",&local_70);
    FUN_0090d2e0(&local_70,local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00908588(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
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
  local_60 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  uVar3 = FUN_00ceadc8();
  local_68 = "mode";
  local_40 = &local_68;
  lVar4 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3e60(lVar4 + 0x28,uVar3);
  uVar3 = FUN_00a07558();
  puVar5 = (undefined4 *)FUN_00a0766c(uVar3,0);
  uVar1 = *puVar5;
  local_68 = "eloTier5v5";
  local_40 = &local_68;
  lVar4 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3ee0(lVar4 + 0x28,uVar1);
  uVar3 = FUN_00a07558();
  puVar5 = (undefined4 *)FUN_00a0766c(uVar3,1);
  uVar1 = *puVar5;
  local_68 = "eloTier3v3";
  local_40 = &local_68;
  lVar4 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3ee0(lVar4 + 0x28,uVar1);
  FUN_00ec506c("DraftLobby_Swap_Accepted",&local_60);
  FUN_00ec5024("DraftLobby_Swap_Accepted",&local_60);
  FUN_0090d2e0(&local_60,local_58);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009086dc(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
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
  local_60 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  uVar3 = FUN_00ceadc8();
  local_68 = "mode";
  local_40 = &local_68;
  lVar4 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3e60(lVar4 + 0x28,uVar3);
  uVar3 = FUN_00a07558();
  puVar5 = (undefined4 *)FUN_00a0766c(uVar3,0);
  uVar1 = *puVar5;
  local_68 = "eloTier5v5";
  local_40 = &local_68;
  lVar4 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3ee0(lVar4 + 0x28,uVar1);
  uVar3 = FUN_00a07558();
  puVar5 = (undefined4 *)FUN_00a0766c(uVar3,1);
  uVar1 = *puVar5;
  local_68 = "eloTier3v3";
  local_40 = &local_68;
  lVar4 = FUN_0090d33c(&local_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3ee0(lVar4 + 0x28,uVar1);
  FUN_00ec506c("DraftLobby_Swap_Rejected",&local_60);
  FUN_00ec5024("DraftLobby_Swap_Rejected",&local_60);
  FUN_0090d2e0(&local_60,local_58);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00908830(undefined4 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  char *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_70 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  uVar3 = FUN_00a07558();
  puVar4 = (undefined4 *)FUN_00a0766c(uVar3,0);
  uVar1 = *puVar4;
  local_78 = "eloTier5v5";
  local_50 = &local_78;
  lVar5 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar5 + 0x28,uVar1);
  uVar3 = FUN_00a07558();
  puVar4 = (undefined4 *)FUN_00a0766c(uVar3,1);
  uVar1 = *puVar4;
  local_78 = "eloTier3v3";
  local_50 = &local_78;
  lVar5 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar5 + 0x28,uVar1);
  local_78 = "turn";
  local_50 = &local_78;
  lVar5 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar5 + 0x28,param_1);
  uVar3 = FUN_00ceadc8(param_2);
  local_78 = "mode";
  local_50 = &local_78;
  lVar5 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar5 + 0x28,uVar3);
  FUN_00ec506c("DraftLobby_Dodge_Victimed",&local_70);
  FUN_00ec5024("DraftLobby_Dodge_Victimed",&local_70);
  FUN_0090d2e0(&local_70,local_68);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009089cc(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  char *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_70 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  uVar2 = FUN_00ceadc8();
  local_78 = "mode";
  local_50 = &local_78;
  lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar3 + 0x28,uVar2);
  local_78 = "unmute";
  local_50 = &local_78;
  lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar3 + 0x28,~param_2 & 1);
  FUN_00ec506c("DraftLobby_Muted",&local_70);
  FUN_00ec5024("DraftLobby_Muted",&local_70);
  FUN_0090d2e0(&local_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00908ae0(void)

{
  return;
}




void FUN_00908ae4(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  char *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00940c28();
  if (*(char *)(lVar3 + 8) == '\0') {
    local_70 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    FUN_00ceace8();
    uVar4 = FUN_00ceadc8();
    local_78 = "mode";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3e60(lVar3 + 0x28,uVar4);
    uVar4 = FUN_00ceadbc();
    local_78 = "botDifficulty";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3ef0(uVar4,lVar3 + 0x28);
    uVar4 = FUN_00a07558();
    puVar5 = (undefined4 *)FUN_00a0766c(uVar4,0);
    uVar1 = *puVar5;
    local_78 = "eloTier5v5";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    uVar4 = FUN_00a07558();
    puVar5 = (undefined4 *)FUN_00a0766c(uVar4,1);
    uVar1 = *puVar5;
    local_78 = "eloTier3v3";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3ee0(lVar3 + 0x28,uVar1);
    local_78 = "messageKey";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3e60(lVar3 + 0x28,param_1);
    FUN_00ec506c("Game_HUDQUickMessage",&local_70);
    FUN_00ec5024("Game_HUDQUickMessage",&local_70);
    FUN_0090d2e0(&local_70,local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00908ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,uint param_9,
                 uint param_10,undefined8 param_11,byte *param_12)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  char *local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  char **local_a0;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  puStack_c0 = &local_b8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = "stars";
  local_a0 = &local_c8;
  lVar2 = FUN_0090d33c(&puStack_c0,&local_c8,&DAT_01b9349b,&local_a0,auStack_a8);
  FUN_00ec3ef0((float)param_7,lVar2 + 0x28);
  uVar3 = FUN_00ceadc8(param_8);
  local_c8 = "mode";
  local_a0 = &local_c8;
  lVar2 = FUN_0090d33c(&puStack_c0,&local_c8,&DAT_01b9349b,&local_a0,auStack_a8);
  FUN_00ec3e60(lVar2 + 0x28,uVar3);
  uVar3 = FUN_00ceadbc();
  local_c8 = "botDifficulty";
  local_a0 = &local_c8;
  lVar2 = FUN_0090d33c(&puStack_c0,&local_c8,&DAT_01b9349b,&local_a0,auStack_a8);
  FUN_00ec3ef0(uVar3,lVar2 + 0x28);
  local_c8 = "victory";
  local_a0 = &local_c8;
  lVar2 = FUN_0090d33c(&puStack_c0,&local_c8,&DAT_01b9349b,&local_a0,auStack_a8);
  FUN_00ec3ee0(lVar2 + 0x28,param_9 & 1);
  local_c8 = "surrender";
  local_a0 = &local_c8;
  lVar2 = FUN_0090d33c(&puStack_c0,&local_c8,&DAT_01b9349b,&local_a0,auStack_a8);
  FUN_00ec3ee0(lVar2 + 0x28,param_10 & 1);
  local_c8 = "hero";
  local_a0 = &local_c8;
  lVar2 = FUN_0090d33c(&puStack_c0,&local_c8,&DAT_01b9349b,&local_a0,auStack_a8);
  FUN_00ec3e60(lVar2 + 0x28,param_11);
  local_c8 = "myTeamKillsPct";
  local_a0 = &local_c8;
  lVar2 = FUN_0090d33c(&puStack_c0,&local_c8,&DAT_01b9349b,&local_a0,auStack_a8);
  FUN_00ec3ef0(param_1,lVar2 + 0x28);
  local_c8 = "totalKills";
  local_a0 = &local_c8;
  lVar2 = FUN_0090d33c(&puStack_c0,&local_c8,&DAT_01b9349b,&local_a0,auStack_a8);
  FUN_00ec3ef0(param_2,lVar2 + 0x28);
  local_c8 = "myKDApct";
  local_a0 = &local_c8;
  lVar2 = FUN_0090d33c(&puStack_c0,&local_c8,&DAT_01b9349b,&local_a0,auStack_a8);
  FUN_00ec3ef0(param_3,lVar2 + 0x28);
  local_c8 = "myTotalKDA";
  local_a0 = &local_c8;
  lVar2 = FUN_0090d33c(&puStack_c0,&local_c8,&DAT_01b9349b,&local_a0,auStack_a8);
  FUN_00ec3ef0(param_4,lVar2 + 0x28);
  local_c8 = "myTurrets";
  local_a0 = &local_c8;
  lVar2 = FUN_0090d33c(&puStack_c0,&local_c8,&DAT_01b9349b,&local_a0,auStack_a8);
  FUN_00ec3ef0(param_5,lVar2 + 0x28);
  local_c8 = "theirTurrets";
  local_a0 = &local_c8;
  lVar2 = FUN_0090d33c(&puStack_c0,&local_c8,&DAT_01b9349b,&local_a0,auStack_a8);
  FUN_00ec3ef0(param_6,lVar2 + 0x28);
  pbVar4 = *(byte **)(param_12 + 0x10);
  local_c8 = "matchId";
  if ((*param_12 & 1) == 0) {
    pbVar4 = param_12 + 1;
  }
  local_a0 = &local_c8;
  lVar2 = FUN_0090d33c(&puStack_c0,&local_c8,&DAT_01b9349b,&local_a0,auStack_a8);
  FUN_00ec3e60(lVar2 + 0x28,pbVar4);
  FUN_00ec506c("Quality_Post_Match_Rating",&puStack_c0);
  FUN_00ec5024("Quality_Post_Match_Rating",&puStack_c0);
  FUN_0090d2e0(&puStack_c0,local_b8);
  if (*(long *)(lVar1 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

