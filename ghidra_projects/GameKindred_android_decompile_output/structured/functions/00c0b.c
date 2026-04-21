// functions/00c0b — 27 functions
#include "libGameKindred.h"




void thunk_FUN_00c0bd88(long param_1)

{
  byte *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  pbVar1 = (byte *)(param_1 + 0x18bf8);
  pcVar2 = "HUD_SCOREBOARD_SOCIAL_TOGLE_BUTTON";
  if (((*pbVar1 ^ 4) & 4) != 0) {
    pcVar2 = "HUD_SCOREBOARD_GAMEPLAY_TOGGLE_BUTTON";
  }
  *pbVar1 = *pbVar1 ^ 4;
  uVar3 = FUN_00e6ce7c(pcVar2,0);
  FUN_00ab7498(param_1 + 0x6c50,uVar3);
  uVar4 = 0;
  do {
    if (*(long *)(param_1 + 0x4050 + uVar4 * 8) == 0) break;
    if ((*pbVar1 >> 2 & 1) == 0) {
      FUN_00c11a88();
    }
    else {
      FUN_00c11a4c();
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 5);
  uVar4 = 0;
  do {
    if (*(long *)(param_1 + 0x4078 + uVar4 * 8) == 0) {
      return;
    }
    if ((*pbVar1 >> 2 & 1) == 0) {
      FUN_00c11a88();
    }
    else {
      FUN_00c11a4c();
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 5);
  return;
}




void FUN_00c0b1dc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c0b1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00c0b1e8(long *param_1,uint param_2,undefined8 param_3,uint param_4)

{
  FUN_00b89d24(param_1,param_2 & 1,param_3,param_4 & 1);
  if ((param_2 & 1) == 0) {
    FUN_00b89d24(0x3e800000,param_1 + 0x2a80,0,4,1);
    return;
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  if ((*(byte *)(param_1 + 0x317f) & 1) == 0) {
    return;
  }
  FUN_00c0b270(param_1);
  return;
}




void FUN_00c0b270(long *param_1)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    return;
  }
  plVar1 = param_1;
  if (param_1[0x80a] != 0) {
    plVar1 = (long *)FUN_00c0c188(param_1,param_1 + 0x80a,param_1 + 0x814);
  }
  if (param_1[0x80f] != 0) {
    FUN_00c0c188(plVar1,param_1 + 0x80f,param_1 + 0x817);
  }
                    /* WARNING: Could not recover jumptable at 0x00c0b2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00c0b2e4(long *param_1,ulong param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_5c;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e6ce7c("HUD_SCOREBOARD_GAMEOVER_FINISH",0);
  uVar3 = FUN_00ab7498(param_1 + 0x1042,uVar3);
  uVar3 = FUN_00c0b500(uVar3,param_1 + 0x1042);
  plVar1 = param_1 + 0x81a;
  uVar3 = FUN_00c0b500(uVar3,plVar1);
  uVar3 = FUN_00c0b500(uVar3,param_1 + 0xad2);
  FUN_00c0b500(uVar3,param_1 + 0xd8a);
  uVar3 = FUN_00e6ce7c("HUD_SCOREBOARD_GAMEOVER_REPLAY",0);
  FUN_00ab7498(plVar1,uVar3);
  FUN_00b09454(plVar1,1);
  *(uint *)((long)param_1 + 0x5714) = *(uint *)((long)param_1 + 0x5714) | 4;
  *(uint *)((long)param_1 + 0x12904) = *(uint *)((long)param_1 + 0x12904) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x166c) = *(uint *)((long)param_1 + 0x166c) | 4;
  *(uint *)((long)param_1 + 0xaec) = *(uint *)((long)param_1 + 0xaec) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x6cd4) = *(uint *)((long)param_1 + 0x6cd4) | 4;
  plVar1 = param_1 + 0x2bd;
  *(uint *)((long)param_1 + 0x13ec4) = *(uint *)((long)param_1 + 0x13ec4) | 4;
  FUN_00e70510(&local_58);
  if (param_3 == 0) {
    if ((param_2 & 1) != 0) {
      uVar3 = FUN_00e6ce7c("HUD_GAMEOVER_BANNER_VICTORY",0);
      FUN_00910394(&local_58,uVar3);
      FUN_00f0d75c(plVar1,&local_58);
      goto LAB_00c0b468;
    }
    uVar3 = FUN_00e6ce7c("HUD_GAMEOVER_BANNER_DEFEAT",0);
    FUN_00910394(&local_58,uVar3);
    FUN_00f0d75c(plVar1,&local_58);
  }
  else {
    if (param_3 == 2) {
      uVar3 = FUN_00e6ce7c("HUD_GAMEOVER_BANNER_SURRENDER",0);
      FUN_00910394(&local_58,uVar3);
    }
    FUN_00f0d75c(plVar1,&local_58);
    if ((param_2 & 1) != 0) {
LAB_00c0b468:
      local_5c = 0xffbc9c44;
      goto LAB_00c0b4a4;
    }
  }
  local_5c = 0xff2424b3;
LAB_00c0b4a4:
  FUN_00f0d7fc(plVar1,&local_5c);
  (**(code **)(*param_1 + 0x150))(param_1);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c0b500(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  
  uVar1 = *(uint *)(param_2 + 0x84);
  *(uint *)(param_2 + 0x84) = uVar1 & 0xffffffef;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = uVar1 & 0xffff806f;
    FUN_0091ada4(param_2);
  }
  uVar3 = FUN_00efee28(0x3f800000,0x3f800000,0);
  uVar4 = FUN_00efee28(0x3f800000,0x3e4ccccd,0);
  lVar2 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efca2c(puVar6);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efca7c(puVar6,1);
  FUN_00f02308(param_2,uVar3,uVar4,puVar6,0);
  return;
}




void FUN_00c0b638(long param_1,ulong param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + 0xb58;
  if ((*(byte *)(param_1 + 0x18bf8) >> 1 & 1) != 0) {
    pcVar2 = "hud_blitz_coin_enemy";
    pcVar3 = "hud_blitz_coin_friendly";
    if ((param_2 & 1) == 0) {
      pcVar2 = "hud_blitz_coin_friendly";
      pcVar3 = "hud_blitz_coin_enemy";
    }
    FUN_00c886f8(lVar1,pcVar3);
    FUN_00c886f8(param_1 + 0x1008,pcVar2);
  }
  if ((param_2 & 1) == 0) {
    FUN_00c88730(lVar1,&DAT_01bee7fa,&DAT_01bbb8c8);
    FUN_00c88730(param_1 + 0x1008,&DAT_01bee7fa,&DAT_01bbb8bc);
    FUN_00c88730(param_1 + 0x1718,&DAT_01bbb8d0,&DAT_01bbb8cc);
    FUN_00c88730(param_1 + 0x1bc8,&DAT_01bbb8d0,&DAT_01bbb8cc);
    puVar4 = &DAT_01bbb8c4;
    puVar5 = &DAT_01bbb8c0;
  }
  else {
    FUN_00c88730(lVar1,&DAT_01bee7fa,&DAT_01bbb8bc);
    FUN_00c88730(param_1 + 0x1008,&DAT_01bee7fa,&DAT_01bbb8c8);
    FUN_00c88730(param_1 + 0x1718,&DAT_01bbb8c4,&DAT_01bbb8c0);
    FUN_00c88730(param_1 + 0x1bc8,&DAT_01bbb8c4,&DAT_01bbb8c0);
    puVar4 = &DAT_01bbb8d0;
    puVar5 = &DAT_01bbb8cc;
  }
  FUN_00c88730(param_1 + 0x2078,puVar4,puVar5);
  FUN_00c88730(param_1 + 0x2528,puVar4,puVar5);
  return;
}




void FUN_00c0b7e0(long param_1,undefined4 param_2)

{
  FUN_00e70e18(param_1 + 0x18be8,&DAT_01bb6d43,param_2);
  FUN_00c88770(param_1 + 0xb58,param_1 + 0x18be8);
  return;
}




void FUN_00c0b824(long param_1,undefined4 param_2)

{
  FUN_00e70e18(param_1 + 0x18be8,&DAT_01bb6d43,param_2);
  FUN_00c88770(param_1 + 0x1008,param_1 + 0x18be8);
  return;
}




void FUN_00c0b86c(float param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  char *pcVar3;
  float fVar4;
  byte local_78 [16];
  void *local_68;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  fVar4 = 1e+06;
  local_48 = *(long *)(lVar2 + 0x28);
  local_60[0] = 0;
  local_60[1] = 0;
  local_50 = (void *)0x0;
  if (param_1 <= 1e+06) {
    fVar4 = 1000.0;
    if (param_1 <= 1000.0) goto LAB_00c0b8fc;
    pcVar3 = "k";
  }
  else {
    pcVar3 = "M";
  }
  FUN_008fa54c(local_78,pcVar3);
  FUN_008fce60(local_60,local_78);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  param_1 = param_1 / fVar4;
LAB_00c0b8fc:
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
  FUN_00e70e18((double)param_1,param_2 + 0x18be8,"%.1f%s",pvVar1);
  FUN_00c88770(param_2 + 0x1bc8,param_2 + 0x18be8);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c0b980(float param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  char *pcVar3;
  float fVar4;
  byte local_78 [16];
  void *local_68;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  fVar4 = 1e+06;
  local_48 = *(long *)(lVar2 + 0x28);
  local_60[0] = 0;
  local_60[1] = 0;
  local_50 = (void *)0x0;
  if (param_1 <= 1e+06) {
    fVar4 = 1000.0;
    if (param_1 <= 1000.0) goto LAB_00c0ba10;
    pcVar3 = "k";
  }
  else {
    pcVar3 = "M";
  }
  FUN_008fa54c(local_78,pcVar3);
  FUN_008fce60(local_60,local_78);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  param_1 = param_1 / fVar4;
LAB_00c0ba10:
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
  FUN_00e70e18((double)param_1,param_2 + 0x18be8,"%.1f%s",pvVar1);
  FUN_00c88770(param_2 + 0x2528,param_2 + 0x18be8);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c0ba94(long param_1,undefined4 param_2)

{
  FUN_00e70e18(param_1 + 0x18be8,&DAT_01bb6d43,param_2);
  FUN_00c88770(param_1 + 0x1718,param_1 + 0x18be8);
  return;
}




void FUN_00c0badc(long param_1,undefined4 param_2)

{
  FUN_00e70e18(param_1 + 0x18be8,&DAT_01bb6d43,param_2);
  FUN_00c88770(param_1 + 0x2078,param_1 + 0x18be8);
  return;
}




void FUN_00c0bb24(float param_1,long param_2)

{
  FUN_00e70e18(param_2 + 0x18be8,"%d:%02d",(ulong)(uint)(int)param_1 / 0x3c,
               (uint)(int)param_1 % 0x3c);
  FUN_00f0d75c(param_2 + 0x14b8,param_2 + 0x18be8);
  return;
}




void FUN_00c0bb84(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x4154) =
       *(uint *)(param_1 + 0x4154) & 0xfffffff8 |
       *(uint *)(param_1 + 0x4154) & 3 | (param_2 & 1) << 2;
  return;
}




void FUN_00c0bb9c(long param_1,uint param_2)

{
  long lVar1;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((int)param_2 < 1) {
    FUN_00ab7498(param_1 + 0x40d0,param_1 + 0x18bd8);
    FUN_00b09454(param_1 + 0x40d0,1);
  }
  else {
    thunk_FUN_00e7051c(&local_58,param_1 + 0x18bd8);
    FUN_00e70e18(param_1 + 0x18be8,&DAT_01bbbade,(int)((float)(int)param_2 / 60.0),param_2 % 0x3c);
    FUN_00e70c34(&local_58,param_1 + 0x18be8);
    FUN_00ab7498(param_1 + 0x40d0,&local_58);
    FUN_00b09454(param_1 + 0x40d0,0);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c0bcc4(long param_1,byte param_2)

{
  long lVar1;
  
  *(byte *)(param_1 + 0x18bf8) = *(byte *)(param_1 + 0x18bf8) & 0xfd | (param_2 & 1) << 1;
  if ((param_2 & 1) != 0) {
    FUN_00c886f8(param_1 + 0xb58,"hud_blitz_coin_friendly");
    FUN_00c886f8(param_1 + 0x1008,"hud_blitz_coin_enemy");
    return;
  }
  lVar1 = param_1 + 0x2b0;
  FUN_00f0ad88(lVar1,param_1 + 0x1718,1);
  FUN_00f0ad88(lVar1,param_1 + 0x1bc8,1);
  FUN_00f0ad88(lVar1,param_1 + 0x2078,1);
  FUN_00f0ad88(lVar1,param_1 + 0x2528,1);
  return;
}




void FUN_00c0bd7c(long param_1)

{
  FUN_00ab7498(param_1 + 0x40d0);
  return;
}




void FUN_00c0bd88(long param_1)

{
  byte *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  pbVar1 = (byte *)(param_1 + 0x18bf8);
  pcVar2 = "HUD_SCOREBOARD_SOCIAL_TOGLE_BUTTON";
  if (((*pbVar1 ^ 4) & 4) != 0) {
    pcVar2 = "HUD_SCOREBOARD_GAMEPLAY_TOGGLE_BUTTON";
  }
  *pbVar1 = *pbVar1 ^ 4;
  uVar3 = FUN_00e6ce7c(pcVar2,0);
  FUN_00ab7498(param_1 + 0x6c50,uVar3);
  uVar4 = 0;
  do {
    if (*(long *)(param_1 + 0x4050 + uVar4 * 8) == 0) break;
    if ((*pbVar1 >> 2 & 1) == 0) {
      FUN_00c11a88();
    }
    else {
      FUN_00c11a4c();
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 5);
  uVar4 = 0;
  do {
    if (*(long *)(param_1 + 0x4078 + uVar4 * 8) == 0) {
      return;
    }
    if ((*pbVar1 >> 2 & 1) == 0) {
      FUN_00c11a88();
    }
    else {
      FUN_00c11a4c();
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 5);
  return;
}




void FUN_00c0be60(long param_1)

{
  *(byte *)(param_1 + 0x18bf8) = *(byte *)(param_1 + 0x18bf8) & 0xfb;
  FUN_00c0bd88();
  return;
}




void FUN_00c0be78(long param_1)

{
  *(byte *)(param_1 + 0x18bf8) = *(byte *)(param_1 + 0x18bf8) | 4;
  FUN_00c0bd88();
  return;
}




void FUN_00c0be90(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00f00438("root-layer");
  if (lVar1 != 0) {
    uVar2 = FUN_00efee28(0,param_1,FUN_0091aa80);
    FUN_00f022a0(lVar1,uVar2);
    return;
  }
  return;
}




void FUN_00c0bef4(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x18bf8) = *(byte *)(param_1 + 0x18bf8) & 0xf7 | (param_2 & 1) << 3;
  return;
}




void FUN_00c0bf14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  undefined4 auStack_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f02010(param_1 + 0x13e40,auStack_30,auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auStack_30[0]);
}




void FUN_00c0bf84(long param_1)

{
  if ((*(byte *)(param_1 + 0x18bf8) >> 3 & 1) != 0) {
    *(uint *)(param_1 + 0x13ec4) = *(uint *)(param_1 + 0x13ec4) & 0xfffffffb;
    *(uint *)(param_1 + 0x47c) = *(uint *)(param_1 + 0x47c) & 0xfffffffb;
    *(uint *)(param_1 + 0x5c4) = *(uint *)(param_1 + 0x5c4) | 4;
  }
  return;
}




void FUN_00c0bfc4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18bf8) >> 3 & 1) != 0) {
    *(uint *)(param_1 + 0x13ec4) = *(uint *)(param_1 + 0x13ec4) | 4;
    *(uint *)(param_1 + 0x47c) = *(uint *)(param_1 + 0x47c) | 4;
    *(uint *)(param_1 + 0x5c4) = *(uint *)(param_1 + 0x5c4) & 0xfffffffb;
  }
  return;
}




void thunk_FUN_00c0bd88(long param_1)

{
  byte *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  pbVar1 = (byte *)(param_1 + 0x18bf8);
  pcVar2 = "HUD_SCOREBOARD_SOCIAL_TOGLE_BUTTON";
  if (((*pbVar1 ^ 4) & 4) != 0) {
    pcVar2 = "HUD_SCOREBOARD_GAMEPLAY_TOGGLE_BUTTON";
  }
  *pbVar1 = *pbVar1 ^ 4;
  uVar3 = FUN_00e6ce7c(pcVar2,0);
  FUN_00ab7498(param_1 + 0x6c50,uVar3);
  uVar4 = 0;
  do {
    if (*(long *)(param_1 + 0x4050 + uVar4 * 8) == 0) break;
    if ((*pbVar1 >> 2 & 1) == 0) {
      FUN_00c11a88();
    }
    else {
      FUN_00c11a4c();
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 5);
  uVar4 = 0;
  do {
    if (*(long *)(param_1 + 0x4078 + uVar4 * 8) == 0) {
      return;
    }
    if ((*pbVar1 >> 2 & 1) == 0) {
      FUN_00c11a88();
    }
    else {
      FUN_00c11a4c();
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 5);
  return;
}

