// functions/00901 — 14 functions
#include "libGameKindred.h"




void FUN_00901054(undefined4 param_1)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  char *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [4];
  undefined4 local_74;
  ulong local_70 [2];
  void *local_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_70[0] = 0;
  local_70[1] = 0;
  local_60 = (void *)0x0;
  FUN_009481e8(local_70,&local_74,local_78);
  puStack_90 = &local_88;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = "host";
  pvVar1 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar1 = local_60;
  }
  local_50 = &local_98;
  lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar3 + 0x28,pvVar1);
  local_98 = "port";
  local_50 = &local_98;
  lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar3 + 0x28,local_74);
  local_98 = "isProxy";
  local_50 = &local_98;
  lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar3 + 0x28,local_78[0]);
  local_98 = "connectionTimeMS";
  local_50 = &local_98;
  lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar3 + 0x28,param_1);
  FUN_00ec506c("GameServer_ConnectionTime",&puStack_90);
  FUN_00ec5024("GameServer_ConnectionTime",&puStack_90);
  FUN_0090d2e0(&puStack_90,local_88);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00901204(undefined4 param_1)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  char *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [4];
  undefined4 local_74;
  ulong local_70 [2];
  void *local_60;
  undefined1 auStack_58 [8];
  char **local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_70[0] = 0;
  local_70[1] = 0;
  local_60 = (void *)0x0;
  FUN_009481e8(local_70,&local_74,local_78);
  puStack_90 = &local_88;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = "host";
  pvVar1 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar1 = local_60;
  }
  local_50 = &local_98;
  lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar3 + 0x28,pvVar1);
  local_98 = "port";
  local_50 = &local_98;
  lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar3 + 0x28,local_74);
  local_98 = "isProxy";
  local_50 = &local_98;
  lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar3 + 0x28,local_78[0]);
  local_98 = "failureTimeMS";
  local_50 = &local_98;
  lVar3 = FUN_0090d33c(&puStack_90,&local_98,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar3 + 0x28,param_1);
  FUN_00ec506c("GameServer_ConnectionFailure",&puStack_90);
  FUN_00ec5024("GameServer_ConnectionFailure",&puStack_90);
  FUN_0090d2e0(&puStack_90,local_88);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009013b4(void)

{
  if (DAT_02c091b8 != 0) {
    FUN_00e70314(DAT_02c091b8 + 0x40);
    return;
  }
  return;
}




void FUN_009013cc(void)

{
  if (DAT_02c091b8 != 0) {
    FUN_00e70314(DAT_02c091b8 + 0x30);
    return;
  }
  return;
}




void FUN_009013e4(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  char *local_88;
  timespec local_80;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  char **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00940c28();
  lVar6 = DAT_02c091b8;
  if (*(char *)(uVar4 + 8) == '\0') {
    if (DAT_02c091b8 == 0) {
      fVar10 = -1.0;
      fVar9 = fVar10;
    }
    else {
      uVar3 = clock_gettime(1,&local_80);
      lVar2 = DAT_02c091b8;
      lVar7 = *(long *)(lVar6 + 0x38);
      lVar8 = local_80.tv_nsec - lVar7;
      lVar6 = local_80.tv_sec - *(long *)(lVar6 + 0x30);
      if (lVar8 < 0) {
        lVar6 = lVar6 + -1;
        lVar8 = (local_80.tv_nsec + 1000000000) - lVar7;
      }
      fVar9 = -1.0;
      fVar10 = fVar9;
      if ((double)(lVar8 + lVar6 * 1000000000) * 1e-09 < 120.0) {
        uVar3 = clock_gettime(1,&local_80);
        lVar6 = *(long *)(lVar2 + 0x38);
        lVar8 = local_80.tv_nsec - lVar6;
        lVar7 = local_80.tv_sec - *(long *)(lVar2 + 0x30);
        if (lVar8 < 0) {
          lVar7 = lVar7 + -1;
          lVar8 = (local_80.tv_nsec + 1000000000) - lVar6;
        }
        fVar10 = (float)((double)(lVar8 + lVar7 * 1000000000) * 1e-09);
      }
      lVar6 = DAT_02c091b8;
      uVar4 = (ulong)uVar3;
      if (DAT_02c091b8 != 0) {
        uVar3 = clock_gettime(1,&local_80);
        lVar2 = DAT_02c091b8;
        uVar4 = (ulong)uVar3;
        lVar7 = *(long *)(lVar6 + 0x48);
        lVar8 = local_80.tv_nsec - lVar7;
        lVar6 = local_80.tv_sec - *(long *)(lVar6 + 0x40);
        if (lVar8 < 0) {
          lVar6 = lVar6 + -1;
          lVar8 = (local_80.tv_nsec + 1000000000) - lVar7;
        }
        if ((double)(lVar8 + lVar6 * 1000000000) * 1e-09 < 120.0) {
          uVar3 = clock_gettime(1,&local_80);
          uVar4 = (ulong)uVar3;
          lVar6 = *(long *)(lVar2 + 0x48);
          lVar8 = local_80.tv_nsec - lVar6;
          lVar7 = local_80.tv_sec - *(long *)(lVar2 + 0x40);
          if (lVar8 < 0) {
            lVar7 = lVar7 + -1;
            lVar8 = (local_80.tv_nsec + 1000000000) - lVar6;
          }
          fVar9 = (float)((double)(lVar8 + lVar7 * 1000000000) * 1e-09);
        }
      }
    }
    local_80.tv_sec = (__time_t)&local_80.tv_nsec;
    local_80.tv_nsec = 0;
    uStack_70 = 0;
    FUN_00ceace8(uVar4);
    uVar5 = FUN_00ceadc8();
    local_88 = "mode";
    local_60 = &local_88;
    lVar6 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3e60(lVar6 + 0x28,uVar5);
    uVar5 = FUN_00ceadbc();
    local_88 = "botDifficulty";
    local_60 = &local_88;
    lVar6 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ef0(uVar5,lVar6 + 0x28);
    local_88 = "timeSinceAllPlayersAccepted";
    local_60 = &local_88;
    lVar6 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ef0(fVar10,lVar6 + 0x28);
    local_88 = "timeSinceStatePlaying";
    local_60 = &local_88;
    lVar6 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
    FUN_00ec3ef0(fVar9,lVar6 + 0x28);
    FUN_00ec506c("Game_Lobby_Start",&local_80);
    FUN_00ec5024("Game_Lobby_Start",&local_80);
    FUN_0090d2e0(&local_80,local_80.tv_nsec);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009016b4(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
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
  uVar3 = FUN_00ceadbc();
  local_78 = "botDifficulty";
  local_50 = &local_78;
  lVar4 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ef0(uVar3,lVar4 + 0x28);
  lVar4 = FUN_00940c28();
  if (*(char *)(lVar4 + 8) == '\0') {
    FUN_00ec506c("Game_Match_Start",&local_70);
    FUN_00ec5024("Game_Match_Start",&local_70);
  }
  uVar5 = FUN_009580c4();
  if (((uVar5 & 1) == 0) || (lVar4 = FUN_009580b8(), *(int *)(lVar4 + 0x55f4) != 0))
  goto switchD_009017d8_caseD_1c;
  iVar1 = *param_1;
  switch(iVar1) {
  case 0x1a:
switchD_009017d8_caseD_1a:
    FUN_00ec50ac("j70zvw");
    pcVar6 = "First_Game_Battle_Royale";
    break;
  case 0x1b:
  case 0x20:
    FUN_00ec50ac("db584g");
    pcVar6 = "First_Game_Blitz";
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    goto switchD_009017d8_caseD_1c;
  case 0x25:
    FUN_00ec50ac("bhv1ps");
    pcVar6 = "First_Game_5V5_Ranked";
    break;
  case 0x26:
  case 0x27:
    FUN_00ec50ac("dwl8fy");
    pcVar6 = "First_Game_5V5";
    break;
  default:
    if (iVar1 == 0xf) goto switchD_009017d8_caseD_1a;
    if (iVar1 != 9) goto switchD_009017d8_caseD_1c;
  case 0x19:
    FUN_00ec50ac(&DAT_01b9209a);
    pcVar6 = "First_Game_3V3";
  }
  FUN_00ec50c0(pcVar6,&local_70);
switchD_009017d8_caseD_1c:
  FUN_0090d2e0(&local_70,local_68);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009018a4(void)

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
  uVar2 = FUN_00ceadbc();
  local_78 = "botDifficulty";
  local_50 = &local_78;
  lVar3 = FUN_0090d33c(&local_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ef0(uVar2,lVar3 + 0x28);
  FUN_00ec506c("Game_Match_Reconnect",&local_70);
  FUN_00ec5024("Game_Match_Reconnect",&local_70);
  FUN_0090d2e0(&local_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009019b4(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  char *local_60;
  undefined1 auStack_58 [8];
  undefined1 *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00a07558();
  puVar4 = (undefined4 *)FUN_00a0766c(uVar3,0);
  uVar1 = *puVar4;
  local_60 = "eloTier5v5";
  local_50 = (undefined1 *)&local_60;
  lVar5 = FUN_0090d33c(param_1,&local_60,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar5 + 0x28,uVar1);
  uVar3 = FUN_00a07558();
  puVar4 = (undefined4 *)FUN_00a0766c(uVar3,1);
  uVar1 = *puVar4;
  local_60 = "eloTier3v3";
  local_50 = (undefined1 *)&local_60;
  lVar5 = FUN_0090d33c(param_1,&local_60,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar5 + 0x28,uVar1);
  uVar3 = FUN_00ceadbc();
  local_60 = "botDifficulty";
  local_50 = (undefined1 *)&local_60;
  lVar5 = FUN_0090d33c(param_1,&local_60,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ef0(uVar3,lVar5 + 0x28);
  FUN_00ec506c("Game_Match_Finish",param_1);
  FUN_00ec5024("Game_Match_Finish",param_1);
  FUN_00ec50ac("evuukx");
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00901b0c(undefined8 param_1,undefined4 param_2,undefined4 param_3,byte *param_4,
                 undefined4 param_5)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
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
  local_88 = "retryReason";
  local_60 = &local_88;
  lVar2 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_88 = "stateID";
  local_60 = &local_88;
  lVar2 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3ee0(lVar2 + 0x28,param_2);
  local_88 = "pendingStateID";
  local_60 = &local_88;
  lVar2 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3ee0(lVar2 + 0x28,param_3);
  pbVar3 = *(byte **)(param_4 + 0x10);
  local_88 = "platformHost";
  if ((*param_4 & 1) == 0) {
    pbVar3 = param_4 + 1;
  }
  local_60 = &local_88;
  lVar2 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar2 + 0x28,pbVar3);
  local_88 = "retryCounter";
  local_60 = &local_88;
  lVar2 = FUN_0090d33c(&local_80,&local_88,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3ee0(lVar2 + 0x28,param_5);
  FUN_00ec506c("Platform_Retry",&local_80);
  FUN_00ec5024("Platform_Retry",&local_80);
  FUN_0090d2e0(&local_80,local_78);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00901cd4(void)

{
  return;
}




void FUN_00901cd8(void)

{
  return;
}




void FUN_00901cdc(undefined8 param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_70 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = "url";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3e60(lVar2 + 0x28,param_1);
  local_78 = "requestType";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar2 + 0x28,param_2);
  local_78 = "status";
  local_50 = &local_78;
  lVar2 = FUN_0090d33c(&puStack_70,&local_78,&DAT_01b9349b,&local_50,auStack_58);
  FUN_00ec3ee0(lVar2 + 0x28,param_3);
  FUN_00ec506c("Platform_ManifestRequestFailure",&puStack_70);
  FUN_00ec5024("Platform_ManifestRequestFailure",&puStack_70);
  FUN_0090d2e0(&puStack_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00901e18(undefined8 param_1,undefined4 param_2,byte *param_3)

{
  ulong uVar1;
  void *pvVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  char *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  void *local_a0;
  ulong local_98 [2];
  void *local_88;
  ulong local_80 [2];
  void *local_70;
  undefined1 auStack_68 [8];
  char **local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_80[0] = 0;
  local_80[1] = 0;
  local_70 = (void *)0x0;
  local_98[1] = 0;
  local_88 = (void *)0x0;
  local_98[0] = 0;
  bVar3 = *param_3;
  uVar8 = *(ulong *)(param_3 + 8);
  uVar9 = (ulong)(bVar3 >> 1);
  uVar1 = uVar9;
  if ((bVar3 & 1) != 0) {
    uVar1 = uVar8;
  }
  if (uVar1 == 4) {
    iVar5 = FUN_0090d610(param_3,0,0xffffffffffffffff,"gold",4);
    if (iVar5 != 0) {
      bVar3 = *param_3;
      uVar8 = *(ulong *)(param_3 + 8);
      uVar9 = (ulong)(bVar3 >> 1);
      goto LAB_00901eb0;
    }
    FUN_008fa54c(&local_b0,"ICE");
    FUN_008fce60(local_80,&local_b0);
    puVar7 = PTR_s_Economy_Sink_ICE_02be3098;
    if (((ulong)local_b0 & 1) != 0) {
      operator_delete(local_a0);
      puVar7 = PTR_s_Economy_Sink_ICE_02be3098;
    }
  }
  else {
LAB_00901eb0:
    if ((bVar3 & 1) != 0) {
      uVar9 = uVar8;
    }
    if ((uVar9 != 6) || (iVar5 = FUN_0090d610(param_3,0,0xffffffffffffffff,"silver",6), iVar5 != 0))
    goto LAB_0090215c;
    FUN_008fa54c(&local_b0,"glory");
    FUN_008fce60(local_80,&local_b0);
    puVar7 = PTR_s_Economy_Sink_Glory_02be30a0;
    if (((ulong)local_b0 & 1) != 0) {
      operator_delete(local_a0);
      puVar7 = PTR_s_Economy_Sink_Glory_02be30a0;
    }
  }
  FUN_008fa54c(&local_b0,puVar7);
  FUN_008fce60(local_98,&local_b0);
  if (((byte)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b8 = "hero";
  local_b0 = &local_a8;
  local_60 = &local_b8;
  lVar6 = FUN_0090d33c(&local_b0,&local_b8,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar6 + 0x28,param_1);
  local_b8 = "currency";
  pvVar2 = (void *)((ulong)local_80 | 1);
  if ((local_80[0] & 1) != 0) {
    pvVar2 = local_70;
  }
  local_60 = &local_b8;
  lVar6 = FUN_0090d33c(&local_b0,&local_b8,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar6 + 0x28,pvVar2);
  local_b8 = "price";
  local_60 = &local_b8;
  lVar6 = FUN_0090d33c(&local_b0,&local_b8,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3ee0(lVar6 + 0x28,param_2);
  FUN_00ec506c("Progression_UnlockHero",&local_b0);
  FUN_00ec5024("Progression_UnlockHero",&local_b0);
  FUN_0090d2e0(&local_b0,local_a8);
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b8 = "type1";
  local_b0 = &local_a8;
  local_60 = &local_b8;
  lVar6 = FUN_0090d33c(&local_b0,&local_b8,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar6 + 0x28,"hero");
  local_b8 = "type2_hero";
  local_60 = &local_b8;
  lVar6 = FUN_0090d33c(&local_b0,&local_b8,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3e60(lVar6 + 0x28,param_1);
  local_b8 = "amount";
  local_60 = &local_b8;
  lVar6 = FUN_0090d33c(&local_b0,&local_b8,&DAT_01b9349b,&local_60,auStack_68);
  FUN_00ec3ee0(lVar6 + 0x28,param_2);
  pvVar2 = (void *)((ulong)local_98 | 1);
  if ((local_98[0] & 1) != 0) {
    pvVar2 = local_88;
  }
  FUN_00ec506c(pvVar2,&local_b0);
  pvVar2 = (void *)((ulong)local_98 | 1);
  if ((local_98[0] & 1) != 0) {
    pvVar2 = local_88;
  }
  FUN_00ec5024(pvVar2,&local_b0);
  FUN_0090d2e0(&local_b0,local_a8);
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
LAB_0090215c:
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_009013b4(void)

{
  if (DAT_02c091b8 != 0) {
    FUN_00e70314(DAT_02c091b8 + 0x40);
    return;
  }
  return;
}

