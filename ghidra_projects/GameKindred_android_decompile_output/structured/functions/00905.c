// functions/00905 — 10 functions
#include "libGameKindred.h"




void FUN_00905064(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined2 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  char *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  timespec local_70;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00940c28();
  if ((*(char *)(lVar5 + 8) == '\0') || (iVar4 = FUN_0092f28c(), iVar4 != 0)) {
    puVar3 = DAT_02c091b8;
    local_88 = &local_80;
    local_80 = 0;
    uStack_78 = 0;
    if (DAT_02c091b8 != (undefined2 *)0x0) {
      fVar9 = *(float *)(DAT_02c091b8 + 2);
      clock_gettime(1,&local_70);
      lVar5 = *(long *)(puVar3 + 0xc);
      lVar7 = local_70.tv_nsec - lVar5;
      lVar6 = local_70.tv_sec - *(long *)(puVar3 + 8);
      if (lVar7 < 0) {
        lVar6 = lVar6 + -1;
        lVar7 = (local_70.tv_nsec + 1000000000) - lVar5;
      }
      uVar11 = *(undefined4 *)(DAT_02c091b8 + 4);
      uVar1 = *(undefined1 *)DAT_02c091b8;
      fVar10 = (float)((double)(lVar7 + lVar6 * 1000000000) * 1e-09);
      *(undefined4 *)(DAT_02c091b8 + 6) = uVar11;
      local_90 = "firstLoad";
      local_70.tv_sec = (__time_t)&local_90;
      lVar5 = FUN_0090d33c(&local_88,&local_90,&DAT_01b9349b,&local_70,auStack_60);
      FUN_00ec3ee0(lVar5 + 0x28,uVar1);
      local_90 = "loadingTime";
      local_70.tv_sec = (__time_t)&local_90;
      lVar5 = FUN_0090d33c(&local_88,&local_90,&DAT_01b9349b,&local_70,auStack_60);
      FUN_00ec3ef0(fVar9,lVar5 + 0x28);
      local_90 = "loadingScreenTime";
      local_70.tv_sec = (__time_t)&local_90;
      lVar5 = FUN_0090d33c(&local_88,&local_90,&DAT_01b9349b,&local_70,auStack_60);
      FUN_00ec3ef0(fVar10,lVar5 + 0x28);
      local_90 = "loadingLevelTime";
      local_70.tv_sec = (__time_t)&local_90;
      lVar5 = FUN_0090d33c(&local_88,&local_90,&DAT_01b9349b,&local_70,auStack_60);
      FUN_00ec3ef0(uVar11,lVar5 + 0x28);
      if (0.0 < *(float *)(DAT_02c091b8 + 2)) {
        local_90 = "waitingForOthersTime";
        local_70.tv_sec = (__time_t)&local_90;
        lVar5 = FUN_0090d33c(&local_88,&local_90,&DAT_01b9349b,&local_70,auStack_60);
        FUN_00ec3ef0(fVar10 - fVar9,lVar5 + 0x28);
      }
      puVar3 = DAT_02c091b8;
      uVar8 = NEON_fmov(0xbf800000,4);
      *(undefined4 *)(DAT_02c091b8 + 2) = 0xbf800000;
      *(undefined8 *)(puVar3 + 4) = uVar8;
      *puVar3 = 0;
    }
    FUN_00ec506c("Quality_LoadingScreenFinish",&local_88);
    FUN_00ec5024("Quality_LoadingScreenFinish",&local_88);
    FUN_0090d2e0(&local_88,local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009052d0(void)

{
  return;
}




void FUN_009052d4(void)

{
  return;
}




void FUN_009052d8(void)

{
  FUN_00ec5068("Quality_Client_Switched_LongPoll");
  FUN_00ec5020("Quality_Client_Switched_LongPoll");
  return;
}




void FUN_00905304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined1 *param_5,undefined1 *param_6)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
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
    puStack_90 = &local_88;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = "maxPing";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3ef0(param_1,lVar3 + 0x28);
    local_98 = "numPingSpikes";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3ee0(lVar3 + 0x28,param_4);
    local_98 = "avgPing";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3ef0(param_2,lVar3 + 0x28);
    local_98 = "stdDev";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3ef0(param_3,lVar3 + 0x28);
    puVar1 = &DAT_01e277f2;
    if (param_5 != (undefined1 *)0x0) {
      puVar1 = param_5;
    }
    local_98 = "gameHost";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3e60(lVar3 + 0x28,puVar1);
    puVar1 = &DAT_01e277f2;
    if (param_6 != (undefined1 *)0x0) {
      puVar1 = param_6;
    }
    local_98 = "proxyHost";
    local_70 = &local_98;
    lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_70,auStack_78);
    FUN_00ec3e60(lVar3 + 0x28,puVar1);
    FUN_00ec506c("Quality_MatchEnd_Ping_Report",&puStack_90);
    FUN_00ec5024("Quality_MatchEnd_Ping_Report",&puStack_90);
    FUN_0090d2e0(&puStack_90,local_88);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090551c(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
                 undefined4 param_21,undefined4 param_22,undefined4 param_23,undefined4 param_24)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  char *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  char **local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  puVar1 = &DAT_01e277f2;
  if (param_3 != (undefined1 *)0x0) {
    puVar1 = param_3;
  }
  local_a0 = &local_98;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = "pingHost";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3e60(lVar3 + 0x28,puVar1);
  local_a8 = "pingAvg";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ef0(param_1,lVar3 + 0x28);
  local_a8 = "pingStdDev";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ef0(param_2,lVar3 + 0x28);
  local_a8 = "pingBucket_25";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_4);
  local_a8 = "pingBucket_50";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_5);
  local_a8 = "pingBucket_75";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_6);
  local_a8 = "pingBucket_100";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_7);
  local_a8 = "pingBucket_125";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_8);
  local_a8 = "pingBucket_150";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_9);
  local_a8 = "pingBucket_175";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_10);
  local_a8 = "pingBucket_200";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_11);
  local_a8 = "pingBucket_225";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_12);
  local_a8 = "pingBucket_250";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_13);
  local_a8 = "pingBucket_275";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_14);
  local_a8 = "pingBucket_300";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_15);
  local_a8 = "pingBucket_325";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_16);
  local_a8 = "pingBucket_350";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_17);
  local_a8 = "pingBucket_375";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_18);
  local_a8 = "pingBucket_400";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_19);
  local_a8 = "pingBucket_500";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_20);
  local_a8 = "pingBucket_750";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_21);
  local_a8 = "pingBucket_1000";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_22);
  local_a8 = "pingBucket_2000";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_23);
  local_a8 = "pingBucket_More";
  local_80 = &local_a8;
  lVar3 = FUN_0090d33c(&local_a0,&local_a8,&DAT_01b9349b,&local_80,auStack_88);
  FUN_00ec3ee0(lVar3 + 0x28,param_24);
  FUN_00ec506c("Quality_Ping_Report",&local_a0);
  FUN_00ec5024("Quality_Ping_Report",&local_a0);
  FUN_0090d2e0(&local_a0,local_98);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00905b54(undefined8 param_1)

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
  local_68 = "mode";
  local_40 = &local_68;
  lVar2 = FUN_0090d33c(&puStack_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3e60(lVar2 + 0x28,"practice");
  local_68 = "hero";
  local_40 = &local_68;
  lVar2 = FUN_0090d33c(&puStack_60,&local_68,&DAT_01b9349b,&local_40,auStack_48);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  FUN_00ec506c("Balance_Practice_Hero_Pick",&puStack_60);
  FUN_00ec5024("Balance_Practice_Hero_Pick",&puStack_60);
  FUN_0090d2e0(&puStack_60,local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00905c50(undefined8 param_1,undefined8 param_2)

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
    FUN_00ec506c("Balance_Hero_Pick",&local_70);
    FUN_00ec5024("Balance_Hero_Pick",&local_70);
    FUN_0090d2e0(&local_70,local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00905df8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar3 = FUN_00ceadc8(param_3);
  local_78 = "mode";
  local_50 = &local_78;
  lVar4 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar4 + 0x28,uVar3);
  local_78 = "hero";
  local_50 = &local_78;
  lVar4 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar4 + 0x28,param_2);
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
  local_78 = "matchClock";
  local_50 = &local_78;
  lVar4 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ef0(param_1,lVar4 + 0x28);
  lVar4 = FUN_00940c28();
  if (*(char *)(lVar4 + 8) == '\0') {
    FUN_00ec506c("Balance_Hero_Win",&local_70);
    FUN_00ec5024("Balance_Hero_Win",&local_70);
  }
  FUN_0090d2e0(&local_70,local_68);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00905fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    uVar4 = FUN_00ceadc8(param_3);
    local_78 = "mode";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3e60(lVar3 + 0x28,uVar4);
    local_78 = "hero";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3e60(lVar3 + 0x28,param_2);
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
    local_78 = "matchClock";
    local_50 = &local_78;
    lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
    FUN_00ec3ef0(param_1,lVar3 + 0x28);
    FUN_00ec506c("Balance_Hero_Lose",&local_70);
    FUN_00ec5024("Balance_Hero_Lose",&local_70);
    FUN_0090d2e0(&local_70,local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

