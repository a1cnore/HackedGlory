// functions/00cf7 — 48 functions
#include "libGameKindred.h"




void FUN_00cf7058(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_2 + 0x10) = param_3;
  *(undefined8 *)(param_2 + 0x18) = param_4;
  *(undefined4 *)(param_2 + 0x20) = param_1;
  return;
}




void FUN_00cf7064(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  uVar3 = FUN_00ceab48();
  if ((((uVar3 & 1) != 0) && (lVar4 = FUN_00d51778(param_2), lVar4 != 0)) &&
     (iVar1 = FUN_00d51964(param_2), iVar1 != 0)) {
    uVar6 = 0;
    do {
      lVar5 = FUN_00d51954(param_2,uVar6);
      if (lVar5 != 0) {
        FUN_00d5db38(lVar5,lVar4,0);
      }
      uVar6 = uVar6 + 1;
      uVar2 = FUN_00d51964(param_2);
    } while (uVar6 < uVar2);
  }
  return;
}




void FUN_00cf70e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_e0 [24];
  undefined8 auStack_c8 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) == 0) {
    FUN_00cedce4();
    uVar4 = FUN_00d9e390();
    uVar5 = FUN_00d5048c(param_2);
    FUN_00d5e790(uVar4,uVar5);
  }
  else {
    FUN_00d4d54c(auStack_e0);
    uVar2 = FUN_00d9e840(auStack_e0,auStack_c8,0x10,0);
    if (uVar2 != 0) {
      uVar3 = (ulong)uVar2;
      puVar6 = auStack_c8;
      do {
        uVar5 = *puVar6;
        uVar4 = FUN_00d5048c(param_2);
        FUN_00d5e790(uVar5,uVar4);
        uVar3 = uVar3 - 1;
        puVar6 = puVar6 + 1;
      } while (uVar3 != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cf71a8(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280fe48;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}




void FUN_00cf71e0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar2 = FUN_00d5048c(param_2);
  FUN_00d5dc24(uVar2,*(undefined1 *)(param_1 + 0x10));
  return;
}




void FUN_00cf7220(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x10) = param_2 & 1;
  return;
}




void FUN_00cf722c(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280fea8;
  param_1[2] = 0;
  return;
}




void FUN_00cf7260(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float local_6c;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00d5048c(param_2);
    (**(code **)(param_1 + 0x10))(param_2,&local_6c);
    FUN_00d043c0(-local_6c,auStack_68,*(undefined4 *)(lVar3 + 0x260),2,0);
    FUN_00ce20fc(auStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf72f8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cf7300(undefined8 *param_1)

{
  FUN_00cfc438();
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_0280ff08;
  param_1[2] = 0x40000002d;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}




void FUN_00cf734c(undefined4 param_1,long param_2,undefined4 param_3,undefined4 param_4,byte param_5
                 )

{
  *(undefined4 *)(param_2 + 0x10) = param_3;
  *(undefined4 *)(param_2 + 0x14) = param_4;
  *(undefined4 *)(param_2 + 0x18) = param_1;
  *(byte *)(param_2 + 0x28) = param_5 & 1;
  return;
}




void FUN_00cf7360(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,byte param_5
                 )

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  *(byte *)(param_1 + 0x28) = param_5 & 1;
  return;
}




void FUN_00cf7374(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 local_84;
  undefined1 auStack_80 [56];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00d5048c(param_2);
    local_84 = *(undefined4 *)(param_1 + 0x18);
    pcVar5 = *(code **)(param_1 + 0x20);
    if (pcVar5 != (code *)0x0) {
      uVar4 = FUN_00d5048c(param_2);
      (*pcVar5)(param_2,uVar4,&local_84);
    }
    FUN_00d041e4(local_84,auStack_80,*(undefined4 *)(lVar3 + 0x260),*(undefined4 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x28),0xffffffff);
    FUN_00ce20fc(auStack_80);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cf743c(undefined8 *param_1)

{
  FUN_00cfc438();
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *param_1 = &PTR_FUN_0280ff68;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




void FUN_00cf7478(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x2c) = param_1;
  return;
}




void FUN_00cf7480(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_00cf7488(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  float fVar4;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar3 = *(code **)(param_1 + 0x18);
  if ((pcVar3 != (code *)0x0) && (*(char *)(param_1 + 0x28) == '\0')) {
    uVar2 = FUN_00d5048c(param_2);
    (*pcVar3)(param_2,uVar2,param_1 + 0x2c);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  pcVar3 = *(code **)(param_1 + 0x20);
  if (pcVar3 == (code *)0x0) {
    fVar4 = *(float *)(param_1 + 0x2c);
  }
  else {
    FUN_00d5048c(param_2);
    fVar4 = (float)(*pcVar3)();
  }
  local_4c = fVar4;
  local_4c = (float)FUN_00d50df4(param_2);
  local_4c = fVar4 / local_4c;
  if ((*(code **)(param_1 + 0x10) != (code *)0x0) &&
     ((**(code **)(param_1 + 0x10))(param_2,&local_4c), local_4c <= 0.0)) {
    local_4c = 0.0;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cf7570(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00cf7578(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cf7580(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_00cf7588(undefined8 *param_1)

{
  FUN_00cfc438();
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_0280ffc8;
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}




void FUN_00cf75cc(long param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}




bool FUN_00cf75d4(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x38);
  fVar1 = (float)FUN_00cf7488();
  return fVar1 <= fVar2;
}




void FUN_00cf75fc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




undefined4 FUN_00cf7604(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}




float FUN_00cf760c(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x38);
  fVar1 = (float)FUN_00cf7488();
  return fVar2 / fVar1;
}




void FUN_00cf7630(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  float fVar1;
  float fVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
  fVar2 = *(float *)(param_1 + 0x38);
  fVar1 = (float)FUN_00cf7488();
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cf766c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(fVar2 / fVar1,0,0x3f800000,0x3f800000);
    return;
  }
  return;
}




void FUN_00cf767c(float param_1,long param_2)

{
  float fVar1;
  
  param_1 = *(float *)(param_2 + 0x38) + param_1;
  fVar1 = (float)FUN_00cf7488();
  if (fVar1 <= param_1) {
    param_1 = fVar1;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  *(float *)(param_2 + 0x38) = param_1;
  return;
}




float FUN_00cf76c0(long param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00cf7488();
  fVar1 = fVar1 - *(float *)(param_1 + 0x38);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}




void FUN_00cf76f0(undefined8 param_1,long param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(*(long *)(param_2 + 0x38) + 0x138);
  return;
}




void FUN_00cf7700(undefined8 param_1,long param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(*(long *)(param_2 + 0x38) + 0x13c);
  return;
}




void FUN_00cf7710(undefined8 *param_1)

{
  FUN_00cfc438();
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_02810028;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  return;
}




void FUN_00cf7764(long param_1)

{
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}




void FUN_00cf777c(long param_1)

{
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}




void FUN_00cf7794(undefined4 param_1,long param_2,undefined8 param_3)

{
  *(undefined8 *)(param_2 + 0x30) = param_3;
  *(undefined4 *)(param_2 + 0x2c) = param_1;
  return;
}




void FUN_00cf77a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}




undefined1  [16] FUN_00cf77ac(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((*(int *)(param_1 + 0x38) == -1) || (*(char *)(param_1 + 0x3c) != '\0')) {
    FUN_00cf7488(param_1);
    auVar3._4_4_ = extraout_var;
    auVar3._0_4_ = extraout_s0;
    auVar3._8_8_ = extraout_var_01;
    return auVar3;
  }
  lVar1 = FUN_00d5048c(param_2);
  lVar1 = *(long *)(lVar1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00d6c068(lVar1,*(undefined4 *)(param_1 + 0x38));
  if ((uVar2 & 1) != 0) {
    FUN_00d6b9f8(lVar1,*(undefined4 *)(param_1 + 0x38));
    auVar4._4_4_ = extraout_var_00;
    auVar4._0_4_ = extraout_s0_00;
    auVar4._8_8_ = extraout_var_02;
    return auVar4;
  }
  return ZEXT816(0);
}




uint FUN_00cf7850(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x38) != -1) && (uVar1 = 0, *(char *)(param_1 + 0x3c) == '\0')) {
    lVar2 = FUN_00d5048c(param_2);
    lVar2 = *(long *)(lVar2 + 0x18);
    while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar2 = *(long *)(lVar2 + 0x20);
    }
    uVar1 = FUN_00d6c068(lVar2,*(undefined4 *)(param_1 + 0x38));
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}




void FUN_00cf78d4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 local_b0 [2];
  undefined4 local_a8 [2];
  undefined4 local_a0 [22];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x3c) != '\0') {
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  if ((*(int *)(param_1 + 0x38) == -1) &&
     (fVar7 = (float)FUN_00cf7488(param_1,param_2), 0.0 < fVar7)) {
    uVar4 = FUN_00ceab48();
    if ((uVar4 & 1) == 0) {
      thunk_FUN_00d9ff34(local_a0,*(undefined8 *)(param_1 + 0x30));
      lVar5 = FUN_00d5048c(param_2);
      lVar5 = *(long *)(lVar5 + 0x18);
      while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c7bf48))) {
        lVar5 = *(long *)(lVar5 + 0x20);
      }
      FUN_00d9ff84(local_a8,local_a0[0]);
      uVar4 = FUN_00d6bbac(lVar5,local_a8[0],0);
      if ((uVar4 & 1) != 0) {
        FUN_00d9ff84(local_b0,local_a0[0]);
        uVar3 = FUN_00d6b630(lVar5,local_b0[0],0xffffffff);
        *(undefined4 *)(param_1 + 0x38) = uVar3;
      }
    }
    else {
      uVar3 = FUN_00ceb350();
      *(undefined4 *)(param_1 + 0x38) = uVar3;
      *(undefined1 *)(param_1 + 0x3c) = 1;
      lVar5 = FUN_00d5048c(param_2);
      uVar3 = *(undefined4 *)(lVar5 + 0x260);
      lVar5 = FUN_00d5048c(param_2);
      uVar1 = *(undefined4 *)(lVar5 + 0x260);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      uVar8 = FUN_00cf7488(param_1,param_2);
      FUN_00cfe864(uVar8,0,0,local_a0,uVar3,uVar1,uVar6,*(undefined4 *)(param_1 + 0x38),1,0,0);
      FUN_00ce20fc(local_a0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf7a5c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    if (*(int *)(param_1 + 0x38) != -1) {
      lVar3 = FUN_00d5048c(param_2);
      FUN_00d009d0(auStack_60,*(undefined4 *)(lVar3 + 0x260),*(undefined4 *)(param_1 + 0x38));
      FUN_00ce20fc(auStack_60);
      *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf7af0(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_02810088;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xc0;
  return;
}




void FUN_00cf7b2c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfc | param_2 & 3;
  return;
}




void FUN_00cf7b3c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xe3 | (param_2 & 7) << 2;
  return;
}




void FUN_00cf7b54(long param_1)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x20;
  return;
}




void FUN_00cf7b64(undefined1 param_1 [16],undefined8 param_2,float param_3,long param_4,
                 undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_98;
  float local_90;
  float local_88;
  float fStack_84;
  float local_80;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar6 = FUN_00d5048c(param_5);
  fVar12 = (float)param_2;
  if ((*(byte *)(param_4 + 0x10) >> 5 & 1) != 0) {
    lVar9 = *(long *)(lVar6 + 0x18);
    while ((lVar9 != 0 && (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar9 = *(long *)(lVar9 + 0x20);
    }
    iVar4 = FUN_00d5359c(lVar9);
    fVar12 = (float)param_2;
    if (iVar4 != 0) {
      uVar10 = 0;
      do {
        iVar4 = FUN_00d53990(lVar9,uVar10);
        if (iVar4 == 2) {
          lVar7 = FUN_00d53914(lVar9,uVar10);
          lVar8 = FUN_00d5029c(param_5);
          if (lVar7 != lVar8) goto LAB_00cf7e68;
        }
        uVar10 = uVar10 + 1;
        uVar5 = FUN_00d5359c(lVar9);
        fVar12 = (float)param_2;
      } while (uVar10 < uVar5);
    }
  }
  lVar9 = *(long *)(lVar6 + 0x18);
  if (lVar9 != 0) {
    bVar1 = *(byte *)(param_4 + 0x10);
    bVar2 = (bVar1 >> 2 & 7) - 1;
    do {
      if (*(int *)(*(long *)(lVar9 + 8) + 0xa4) == DAT_0314f724) {
        if ((bVar1 & 3) == 0) {
          iVar4 = FUN_00d51a94(param_5);
          if (iVar4 == 2) {
            fVar11 = (float)FUN_00d51820(param_5);
            FUN_00d55794(lVar6,&local_88,0);
            FUN_00d557c4(lVar6,&local_98,&DAT_03218f68);
            local_78._0_4_ = fVar11 - local_88;
            local_78._4_4_ = fVar12 - fStack_84;
            local_70 = param_3 - local_80;
            goto LAB_00cf7d50;
          }
          iVar4 = FUN_00d51964(param_5);
          if (iVar4 == 0) {
            lVar6 = FUN_00d51778(param_5);
            if (lVar6 != 0) {
              lVar6 = FUN_00d51778(param_5);
              goto LAB_00cf7e4c;
            }
          }
          else {
            lVar6 = FUN_00d51954(param_5,0);
            if (lVar6 != 0) {
LAB_00cf7e4c:
              FUN_00d608ac(lVar9,lVar6,bVar2 < 2,1);
            }
          }
          if ((*(byte *)(param_4 + 0x10) & 0x1c) != 8) break;
        }
        else {
          if ((bVar1 & 3) == 2) {
            FUN_00d55794(lVar6,&local_88,0);
            FUN_00d557c4(lVar6,&local_98,&DAT_03218f68);
            iVar4 = FUN_00d51a94(param_5);
            if (iVar4 == 2) {
              local_78._0_4_ = (float)FUN_00d51820(param_5);
            }
            else {
              local_78._0_4_ = (float)FUN_00d51830(param_5);
            }
            local_78._0_4_ = local_88 - (float)local_78;
            local_78._4_4_ = fStack_84 - fVar12;
            local_70 = local_80 - param_3;
LAB_00cf7d50:
            fVar12 = (float)local_78 * (float)local_78 + local_78._4_4_ * local_78._4_4_ +
                     local_70 * local_70;
            if (1e-08 <= fVar12) {
              fVar11 = SQRT(fVar12);
              if (NAN(fVar11)) {
                fVar11 = sqrtf(fVar12);
              }
              local_78 = CONCAT44(local_78._4_4_ / fVar11,(float)local_78 / fVar11);
              local_70 = local_70 / fVar11;
            }
            else {
              local_70 = local_90;
              local_78 = local_98;
            }
            if (bVar2 < 2) {
              FUN_00d60b0c();
            }
            else {
              FUN_00d60670(lVar9,&local_78,1);
            }
            break;
          }
          if ((bVar1 & 3) != 1) break;
        }
        FUN_00d60844(lVar9);
        break;
      }
      lVar9 = *(long *)(lVar9 + 0x20);
    } while (lVar9 != 0);
  }
LAB_00cf7e68:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cf7ea0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d5048c(param_2);
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_00d5b038(uVar1);
    FUN_00d52140(param_2);
    return;
  }
  FUN_00d5af28(uVar1);
  FUN_00d52128(param_2);
  if (*(char *)(param_1 + 0x11) != '\0') {
    return;
  }
  FUN_00d5b0a8(uVar1);
  return;
}




void FUN_00cf7f24(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_028100e8;
  param_1[2] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc;
  return;
}




void FUN_00cf7f64(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  float __x;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c4;
  undefined1 auStack_c0 [88];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar8 = FUN_00ceab48();
  if (((uVar8 & 1) != 0) && (iVar5 = FUN_00d51964(param_2), iVar5 != 0)) {
    uVar11 = 0;
    do {
      lVar9 = FUN_00d51954(param_2,uVar11);
      if ((lVar9 != 0) &&
         ((((*(byte *)(param_1 + 0x18) >> 1 & 1) == 0 ||
           (uVar8 = FUN_00d6a814(lVar9,0x10), (uVar8 & 1) == 0)) &&
          ((*(byte *)(lVar9 + 0x2f6) >> 5 & 1) != 0)))) {
        local_c4 = 0.0;
        FUN_00d55794(lVar9,&local_d0,0);
        local_d8 = local_c8;
        local_e0 = local_d0;
        fStack_dc = fStack_cc;
        (**(code **)(param_1 + 0x10))(param_2,lVar9,&local_c4,&local_e0);
        if (((0.0 < local_c4) &&
            (0.1 < (local_d0 - local_e0) * (local_d0 - local_e0) +
                   (fStack_cc - fStack_dc) * (fStack_cc - fStack_dc) +
                   (local_c8 - local_d8) * (local_c8 - local_d8))) &&
           (FUN_00cb6efc(lVar9,&local_e0,*(byte *)(param_1 + 0x18) >> 1 & 1),
           (*(byte *)(param_1 + 0x18) >> 1 & 1) != 0)) {
          __x = (local_d0 - local_e0) * (local_d0 - local_e0) +
                (fStack_cc - fStack_dc) * (fStack_cc - fStack_dc) +
                (local_c8 - local_d8) * (local_c8 - local_d8);
          fVar12 = SQRT(__x);
          if (NAN(fVar12)) {
            fVar12 = sqrtf(__x);
          }
          fVar12 = fVar12 / local_c4;
          lVar10 = FUN_00d5048c(param_2);
          puVar4 = PTR_s_Buff_DisplacementLock_02beb3f0;
          uVar1 = *(undefined4 *)(lVar10 + 0x260);
          uVar2 = *(undefined4 *)(lVar9 + 0x260);
          uVar6 = FUN_00ceb350();
          FUN_00cfe864(fVar12,0,0,auStack_c0,uVar1,uVar2,puVar4,uVar6,1,0,0);
          FUN_00ce20fc(auStack_c0);
        }
      }
      uVar11 = uVar11 + 1;
      uVar7 = FUN_00d51964(param_2);
    } while (uVar11 < uVar7);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

