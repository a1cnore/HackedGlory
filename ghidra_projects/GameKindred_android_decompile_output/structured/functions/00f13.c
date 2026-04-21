// functions/00f13 — 86 functions
#include "libGameKindred.h"




void thunk_FUN_00f13238(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00f01d54(param_1 + 0xb8,auStack_30,auStack_38,0,0,0,*(undefined1 *)(param_1 + 0x154));
  *(ulong *)(param_1 + 0x148) = CONCAT44(-auStack_30._4_4_,-auStack_30._0_4_);
  *(ulong *)(param_1 + 0x140) =
       CONCAT44(auStack_38._4_4_ - auStack_30._4_4_,auStack_38._0_4_ - auStack_30._0_4_);
  FUN_00f13140(param_1);
  if (*(int *)(param_1 + 0x150) == 1) {
    FUN_00f13318(param_1);
  }
  else if (*(int *)(param_1 + 0x150) == 0) {
    FUN_00f13e5c((float)(uint)(int)*(float *)(param_1 + 0x140),
                 (float)(uint)(int)*(float *)(param_1 + 0x144),param_1,1);
  }
  FUN_00f13f68(param_1,CONCAT44((int)*(float *)(param_1 + 0x144),(int)*(float *)(param_1 + 0x140)));
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00f13d08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028284a0;
  if (param_1[0x11] != 0) {
    FUN_00f13998();
    param_1[0x11] = 0;
  }
  FUN_00f01868(param_1);
  return;
}




void thunk_FUN_00f13d08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028284a0;
  if (param_1[0x11] != 0) {
    FUN_00f13998();
    param_1[0x11] = 0;
  }
  FUN_00f01868(param_1);
  return;
}




void thunk_FUN_00f13d08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028284a0;
  if (param_1[0x11] != 0) {
    FUN_00f13998();
    param_1[0x11] = 0;
  }
  FUN_00f01868(param_1);
  return;
}




void thunk_FUN_00f13d08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028284a0;
  if (param_1[0x11] != 0) {
    FUN_00f13998();
    param_1[0x11] = 0;
  }
  FUN_00f01868(param_1);
  return;
}




void thunk_FUN_00f13d08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028284a0;
  if (param_1[0x11] != 0) {
    FUN_00f13998();
    param_1[0x11] = 0;
  }
  FUN_00f01868(param_1);
  return;
}




void thunk_FUN_00f13f08(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f13f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))(param_1,1);
  return;
}




void FUN_00f13018(undefined8 param_1,long param_2)

{
  if (*(long **)(param_2 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f13028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0xb8) + 0x18))();
    return;
  }
  FUN_00e70570(param_1,&DAT_0320ffa8);
  return;
}




void FUN_00f1303c(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f1304c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x48))();
    return;
  }
  return;
}




void FUN_00f13054(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f13064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x48))();
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f1306c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f017e8(param_1 + 0x17);
  param_1[0x17] = &PTR_FUN_02828118;
  uVar1 = _DAT_03218ef8;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x28] = uVar1;
  param_1[0x29] = uVar1;
  *(undefined1 *)((long)param_1 + 0x154) = 1;
  FUN_00f023ec(param_1,param_1 + 0x17,1);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xffffffbf;
  return;
}




void FUN_00f130f0(long param_1,float *param_2)

{
  if ((*(float *)(param_1 + 0x50) != *param_2) || (*(float *)(param_1 + 0x54) != param_2[1])) {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)param_2;
    FUN_0091ada4(param_1);
  }
  FUN_00f13140(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f13140(long param_1)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x140);
  fVar2 = (float)*(undefined8 *)(param_1 + 0x148) -
          (float)*(undefined8 *)(param_1 + 0x50) * (float)uVar1;
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x148) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20) * (float)(uVar1 >> 0x20);
  if ((*(float *)(param_1 + 0xf8) != fVar2) || (*(float *)(param_1 + 0xfc) != fVar3)) {
    *(ulong *)(param_1 + 0xf8) = CONCAT44(fVar3,fVar2);
    FUN_0091ada4(param_1 + 0xb8);
    uVar1 = (ulong)*(uint *)(param_1 + 0x140);
  }
  if ((ABS((float)uVar1) < 1.1920929e-07) || (ABS(*(float *)(param_1 + 0x144)) < 1.1920929e-07)) {
    if ((*(float *)(param_1 + 0x108) == DAT_03218ef8) &&
       (*(float *)(param_1 + 0x10c) == _DAT_03218efc)) {
      return;
    }
    *(ulong *)(param_1 + 0x108) = CONCAT44(_DAT_03218efc,DAT_03218ef8);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x148) / (float)uVar1;
    fVar3 = *(float *)(param_1 + 0x14c) / *(float *)(param_1 + 0x144);
    if ((*(float *)(param_1 + 0x108) == fVar2) && (*(float *)(param_1 + 0x10c) == fVar3)) {
      return;
    }
    *(float *)(param_1 + 0x108) = fVar2;
    *(float *)(param_1 + 0x10c) = fVar3;
  }
  FUN_0091ada4(param_1 + 0xb8);
  return;
}




void FUN_00f13238(long param_1)

{
  long lVar1;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f01d54(param_1 + 0xb8,local_30,local_38,0,0,0,*(undefined1 *)(param_1 + 0x154));
  *(ulong *)(param_1 + 0x148) = CONCAT44(-local_30._4_4_,-local_30._0_4_);
  *(ulong *)(param_1 + 0x140) =
       CONCAT44(local_38._4_4_ - local_30._4_4_,local_38._0_4_ - local_30._0_4_);
  FUN_00f13140(param_1);
  if (*(int *)(param_1 + 0x150) == 1) {
    FUN_00f13318(param_1);
  }
  else if (*(int *)(param_1 + 0x150) == 0) {
    FUN_00f13e5c((float)(uint)(int)*(float *)(param_1 + 0x140),
                 (float)(uint)(int)*(float *)(param_1 + 0x144),param_1,1);
  }
  FUN_00f13f68(param_1,CONCAT44((int)*(float *)(param_1 + 0x144),(int)*(float *)(param_1 + 0x140)));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f13318(long *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x48))();
  fVar2 = *(float *)(param_1 + 0x28);
  fVar1 = fVar1 / fVar2;
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar2 = fVar2 / *(float *)((long)param_1 + 0x144);
  if (fVar2 <= fVar1) {
    fVar1 = fVar2;
  }
  if ((*(float *)(param_1 + 0x20) == fVar1) && (*(float *)((long)param_1 + 0x104) == fVar1)) {
    return;
  }
  *(float *)(param_1 + 0x20) = fVar1;
  *(float *)((long)param_1 + 0x104) = fVar1;
  FUN_0091ada4(param_1 + 0x17);
  return;
}




void FUN_00f133a4(long *param_1,undefined8 param_2,uint param_3)

{
  FUN_00f023ec(param_1 + 0x17,param_2,param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00f133d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00f133d8(long *param_1,undefined8 param_2,uint param_3)

{
  FUN_00f023ec(param_1 + 0x17,param_2,param_3 & 1);
                    /* WARNING: Could not recover jumptable at 0x00f13408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00f1340c(long *param_1,byte param_2)

{
  *(byte *)((long)param_1 + 0x154) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00f1341c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




long FUN_00f13420(long param_1)

{
  return param_1 + 0xb8;
}




void FUN_00f13428(long param_1,uint param_2)

{
  FUN_00f13e5c(param_1,param_2 & 1);
  *(undefined4 *)(param_1 + 0x150) = 1;
  FUN_00f13318(param_1);
  return;
}




undefined1  [16] FUN_00f13458(long param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x48))();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT416(DAT_03218ef8);
}




void FUN_00f1348c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00f134c8(void *param_1)

{
  FUN_00f01868();
  operator_delete(param_1);
  return;
}




void FUN_00f134ec(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  DAT_03211030 = operator_new(0x80020);
  *DAT_03211030 = &PTR_FUN_02828218;
  lVar2 = 1;
  puVar1 = DAT_03211030 + 2;
  do {
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 8;
  } while (lVar2 != 0x2000);
  DAT_03211030[0x10002] = 0x1fff0000;
  return;
}




void FUN_00f13548(void)

{
  if (DAT_03211030 != (long *)0x0) {
    (**(code **)(*DAT_03211030 + 8))();
  }
  DAT_03211030 = (long *)0x0;
  return;
}




void FUN_00f1357c(void)

{
  FUN_00f13590();
  return;
}




ushort * FUN_00f13590(void)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_03211030;
  if (DAT_03211030 != 0) {
    uVar2 = *(ushort *)(DAT_03211030 + 0x80010);
    if ((ulong)uVar2 != 0xffff) {
      puVar3 = (ushort *)(DAT_03211030 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03211030 + 0x80012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar3;
      }
      *(ushort *)(DAT_03211030 + 0x80010) = uVar2;
      *(int *)(lVar1 + 0x80014) = *(int *)(lVar1 + 0x80014) + 1;
      goto LAB_00f1360c;
    }
  }
  puVar3 = (ushort *)0x0;
LAB_00f1360c:
  FUN_00f140a8(puVar3);
  return puVar3;
}




void FUN_00f13624(void)

{
  FUN_00f13638();
  return;
}




ushort * FUN_00f13638(void)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_03211030;
  if (DAT_03211030 != 0) {
    uVar2 = *(ushort *)(DAT_03211030 + 0x80010);
    if ((ulong)uVar2 != 0xffff) {
      puVar3 = (ushort *)(DAT_03211030 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03211030 + 0x80012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar3;
      }
      *(ushort *)(DAT_03211030 + 0x80010) = uVar2;
      *(int *)(lVar1 + 0x80014) = *(int *)(lVar1 + 0x80014) + 1;
      goto LAB_00f136b4;
    }
  }
  puVar3 = (ushort *)0x0;
LAB_00f136b4:
  FUN_00f140e8(puVar3,0);
  *(undefined ***)puVar3 = &PTR_FUN_02828238;
  return puVar3;
}




void FUN_00f136e0(void)

{
  FUN_00f136f4();
  return;
}




ushort * FUN_00f136f4(void)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_03211030;
  if (DAT_03211030 != 0) {
    uVar2 = *(ushort *)(DAT_03211030 + 0x80010);
    if ((ulong)uVar2 != 0xffff) {
      puVar3 = (ushort *)(DAT_03211030 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03211030 + 0x80012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar3;
      }
      *(ushort *)(DAT_03211030 + 0x80010) = uVar2;
      *(int *)(lVar1 + 0x80014) = *(int *)(lVar1 + 0x80014) + 1;
      goto LAB_00f13770;
    }
  }
  puVar3 = (ushort *)0x0;
LAB_00f13770:
  FUN_00f140e8(puVar3,1);
  *(undefined ***)puVar3 = &PTR_FUN_02828310;
  return puVar3;
}




void FUN_00f1379c(void)

{
  FUN_00f137b0();
  return;
}




ushort * FUN_00f137b0(void)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_03211030;
  if (DAT_03211030 != 0) {
    uVar2 = *(ushort *)(DAT_03211030 + 0x80010);
    if ((ulong)uVar2 != 0xffff) {
      puVar3 = (ushort *)(DAT_03211030 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03211030 + 0x80012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar3;
      }
      *(ushort *)(DAT_03211030 + 0x80010) = uVar2;
      *(int *)(lVar1 + 0x80014) = *(int *)(lVar1 + 0x80014) + 1;
      goto LAB_00f1382c;
    }
  }
  puVar3 = (ushort *)0x0;
LAB_00f1382c:
  FUN_00f16aa4(puVar3);
  return puVar3;
}




ushort * FUN_00f13844(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_03211030;
  if (DAT_03211030 != 0) {
    uVar2 = *(ushort *)(DAT_03211030 + 0x80010);
    if ((ulong)uVar2 != 0xffff) {
      puVar3 = (ushort *)(DAT_03211030 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03211030 + 0x80012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar3;
      }
      *(ushort *)(DAT_03211030 + 0x80010) = uVar2;
      *(int *)(lVar1 + 0x80014) = *(int *)(lVar1 + 0x80014) + 1;
      goto LAB_00f138cc;
    }
  }
  puVar3 = (ushort *)0x0;
LAB_00f138cc:
  FUN_00f1c3d8(puVar3,param_1,param_2,param_3);
  return puVar3;
}




ushort * FUN_00f138e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,uint param_7)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_03211030;
  if (DAT_03211030 != 0) {
    uVar2 = *(ushort *)(DAT_03211030 + 0x80010);
    if ((ulong)uVar2 != 0xffff) {
      puVar3 = (ushort *)(DAT_03211030 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03211030 + 0x80012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar3;
      }
      *(ushort *)(DAT_03211030 + 0x80010) = uVar2;
      *(int *)(lVar1 + 0x80014) = *(int *)(lVar1 + 0x80014) + 1;
      goto LAB_00f13978;
    }
  }
  puVar3 = (ushort *)0x0;
LAB_00f13978:
  FUN_00f1c53c(puVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7 & 1);
  return puVar3;
}




void FUN_00f13998(undefined8 param_1)

{
  if (DAT_03211030 != 0) {
    FUN_00f139b4(DAT_03211030,param_1);
    return;
  }
  return;
}




void FUN_00f139b4(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  
  (**(code **)*param_2)(param_2);
  iVar4 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x80010) == -1) {
    sVar3 = (short)((uint)((int)param_2 - iVar4) >> 6);
    *(short *)(param_1 + 0x80012) = sVar3;
    *(short *)(param_1 + 0x80010) = sVar3;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x80012);
    uVar2 = (undefined2)((uint)((int)param_2 - iVar4) >> 6);
    *(undefined2 *)(param_1 + 0x80012) = uVar2;
    *(undefined2 *)(param_1 + 0x10 + (ulong)uVar1 * 0x40) = uVar2;
  }
  *(int *)(param_1 + 0x80014) = *(int *)(param_1 + 0x80014) + -1;
  return;
}




void FUN_00f13a50(void)

{
  return;
}




void FUN_00f13a58(void *param_1)

{
  FUN_00f1412c();
  operator_delete(param_1);
  return;
}




undefined8 FUN_00f13a7c(void)

{
  return 0;
}




void FUN_00f13a84(void)

{
  return;
}




void FUN_00f13a88(void *param_1)

{
  FUN_00f1412c();
  operator_delete(param_1);
  return;
}




void FUN_00f13aac(undefined8 *param_1)

{
  FUN_00f1c370(param_1,0,2);
  *param_1 = &PTR_FUN_028283e8;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(byte *)((long)param_1 + 0x22) = *(byte *)((long)param_1 + 0x22) | 1;
  return;
}




void FUN_00f13b00(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_1 + 0x20);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 1;
  return;
}




void FUN_00f13b24(long param_1)

{
  byte *pbVar1;
  
  do {
    if (*(long *)(param_1 + 0x10) == 0) {
      return;
    }
    pbVar1 = (byte *)(param_1 + 0x22);
    param_1 = *(long *)(param_1 + 0x10);
  } while ((*pbVar1 & 1) == 0);
  return;
}




void FUN_00f13b44(long param_1,undefined8 param_2)

{
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xfe;
  return;
}




undefined8 FUN_00f13b68(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(byte *)(param_1 + 0x22) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}




void FUN_00f13b88(long param_1,uint param_2)

{
  *(ulong *)(param_1 + 0x18) =
       CONCAT44(param_2,param_2 & 0xffff | param_2 << 0x10) & 0xffffffffffff |
       (ulong)(param_2 & 0xffff) << 0x30;
  return;
}




void FUN_00f13ba0(long param_1,uint param_2,ulong param_3,int param_4,long param_5)

{
  *(ulong *)(param_1 + 0x18) =
       (ulong)(param_2 & 0xffff | param_4 << 0x10) | (param_3 & 0xffff) << 0x20 | param_5 << 0x30;
  return;
}




void FUN_00f13bb4(long param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  if (param_2 != (uint *)0x0) {
    *param_2 = (uint)*(ushort *)(param_1 + 0x18);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = (uint)*(ushort *)(param_1 + 0x1a);
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = (uint)*(ushort *)(param_1 + 0x1c);
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = (uint)*(ushort *)(param_1 + 0x1e);
  }
  return;
}




void FUN_00f13be8(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x20) = param_2;
  return;
}




undefined2 FUN_00f13bf0(long param_1)

{
  return *(undefined2 *)(param_1 + 0x20);
}




void FUN_00f13bf8(undefined8 *param_1)

{
  *(undefined2 *)((long)param_1 + 0x24) = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(ushort *)(param_1 + 4) = *(ushort *)(param_1 + 4) & 0xfc00 | 0x55;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc;
  return;
}




void FUN_00f13c30(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = param_1;
  param_3[1] = param_2;
  param_3[4] = param_1;
  param_3[5] = param_2;
  *(undefined2 *)(param_3 + 9) = 0;
  *(undefined8 *)(param_3 + 0xc) = 0;
  *(undefined8 *)(param_3 + 0xe) = 0;
  *(undefined8 *)(param_3 + 10) = 0;
  *(undefined8 *)(param_3 + 2) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *(ushort *)(param_3 + 8) = *(ushort *)(param_3 + 8) & 0xfc00 | 0x55;
  *(byte *)(param_3 + 0x10) = *(byte *)(param_3 + 0x10) & 0xfc;
  return;
}




bool FUN_00f13c74(long param_1)

{
  return (*(byte *)(param_1 + 0x20) & 10) != 0;
}




bool FUN_00f13c88(long param_1)

{
  return (*(byte *)(param_1 + 0x20) & 0xa0) != 0;
}




void FUN_00f13c9c(void)

{
  return;
}




void FUN_00f13ca0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf13ca4);
  (*pcVar1)();
}




void FUN_00f13ca4(undefined8 *param_1)

{
  FUN_00f017e8();
  *param_1 = &PTR_FUN_028284a0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  *(byte *)((long)param_1 + 0xb4) = *(byte *)((long)param_1 + 0xb4) & 0xfe;
  *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x16) & 0xfc00 | 0x55;
  param_1[0x14] = 0xffff0000ffff;
  return;
}




void FUN_00f13d08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028284a0;
  if (param_1[0x11] != 0) {
    FUN_00f13998();
    param_1[0x11] = 0;
  }
  FUN_00f01868(param_1);
  return;
}




void FUN_00f13d48(long param_1)

{
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_00f13998();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  return;
}




void FUN_00f13d74(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00f13d98(long param_1)

{
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f13da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x88) + 0x50))();
    return;
  }
  return;
}




void FUN_00f13db0(void)

{
  return;
}




void FUN_00f13db4(long param_1)

{
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x88) + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x00f13e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x88) + 0x28))(0,0,0x42c80000,0x42c80000);
    return;
  }
  return;
}




void FUN_00f13e10(long param_1)

{
  FUN_00f02a60();
  if ((*(long **)(param_1 + 0x20) != (long *)0x0) && ((*(byte *)(param_1 + 0x84) >> 6 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00f13e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0xe8))();
    return;
  }
  return;
}




undefined4 FUN_00f13e54(long param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}




void FUN_00f13e5c(undefined8 param_1,undefined8 param_2,long *param_3,ulong param_4)

{
  if ((ABS(*(float *)(param_3 + 0x12) - (float)param_1) < 0.1) &&
     (ABS(*(float *)((long)param_3 + 0x94) - (float)param_2) < 0.1)) {
    return;
  }
  *(float *)(param_3 + 0x12) = (float)param_1;
  *(float *)((long)param_3 + 0x94) = (float)param_2;
  if (((long *)param_3[0x11] != (long *)0x0) && ((param_4 & 1) != 0)) {
    (**(code **)(*(long *)param_3[0x11] + 0x30))();
  }
  (**(code **)(*param_3 + 0xe8))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00f13f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0xf0))(param_1,param_2,param_3);
  return;
}




void FUN_00f13f08(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f13f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))(param_1,1);
  return;
}




void FUN_00f13f18(long *param_1,undefined4 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00f13f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))(*param_2,param_2[1],param_1,1);
  return;
}




void FUN_00f13f2c(long *param_1,ulong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00f13f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))((float)(param_2 & 0xffffffff),(float)(param_2 >> 0x20),param_1,1);
  return;
}




undefined8 FUN_00f13f48(void)

{
  return 0xffffffff;
}




undefined8 FUN_00f13f50(void)

{
  return 0xffffffff;
}




undefined8 FUN_00f13f58(void)

{
  return 0xffffffff;
}




undefined8 FUN_00f13f60(void)

{
  return 0xffffffff;
}




void FUN_00f13f68(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  return;
}




undefined8 FUN_00f13f70(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f13f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x88) + 0x10))();
    return uVar1;
  }
  return *(undefined8 *)(param_1 + 0xa8);
}




void FUN_00f13f90(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x98) = param_2;
  return;
}




void FUN_00f13f98(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x9c) = param_2;
  return;
}




void FUN_00f13fa0(long param_1,undefined8 param_2)

{
  *(int *)(param_1 + 0x98) = (int)param_2;
  *(int *)(param_1 + 0x9c) = (int)((ulong)param_2 >> 0x20);
  return;
}




undefined8 FUN_00f13fac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}




void FUN_00f13fb4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  return;
}




void FUN_00f13fbc(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa4) = param_2;
  return;
}




void FUN_00f13fc4(long param_1,undefined8 param_2)

{
  *(int *)(param_1 + 0xa0) = (int)param_2;
  *(int *)(param_1 + 0xa4) = (int)((ulong)param_2 >> 0x20);
  return;
}




undefined8 FUN_00f13fd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}




void FUN_00f13fd8(long *param_1,long param_2)

{
  if (param_1[0x11] != 0) {
    FUN_00f13998();
    param_1[0x11] = 0;
  }
  param_1[0x11] = param_2;
  FUN_00f13b00(param_2,param_1);
  if (DAT_03210ce0 != '\0') {
    (**(code **)(*(long *)param_1[0x11] + 0xa0))((long *)param_1[0x11],param_1);
  }
  (**(code **)(*(long *)param_1[0x11] + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x00f14054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}

