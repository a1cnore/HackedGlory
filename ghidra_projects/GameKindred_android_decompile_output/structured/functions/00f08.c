// functions/00f08 — 44 functions
#include "libGameKindred.h"




void FUN_00f08030(uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_1 < 9) {
    uVar1 = *(undefined4 *)(&DAT_01bf4320 + (long)(int)param_1 * 4);
    *param_2 = *(undefined4 *)(&DAT_01bf42f0 + (long)(int)param_1 * 4);
    *param_3 = uVar1;
  }
  return;
}




void FUN_00f0805c(uint param_1,undefined4 *param_2)

{
  if (param_1 < 6) {
    *param_2 = *(undefined4 *)(&DAT_01bf4350 + (long)(int)param_1 * 4);
  }
  return;
}




void FUN_00f08078(uint param_1,undefined1 *param_2)

{
  if (param_1 < 6) {
    *param_2 = (char)(0x10000010001 >> (((ulong)param_1 & 7) << 3));
  }
  return;
}




void FUN_00f080a0(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = param_2 - 1;
  uVar5 = 0;
  uVar3 = 0;
  uVar2 = 0;
  if (uVar1 < 8) {
    uVar3 = *(undefined4 *)(&DAT_01bf4370 + (long)(int)uVar1 * 4);
    uVar2 = *(undefined4 *)(&DAT_01bf4390 + (long)(int)uVar1 * 4);
  }
  uVar1 = param_4 - 1;
  uVar4 = 0;
  if (uVar1 < 8) {
    uVar5 = *(undefined4 *)(&DAT_01bf4370 + (long)(int)uVar1 * 4);
    uVar4 = *(undefined4 *)(&DAT_01bf4390 + (long)(int)uVar1 * 4);
  }
  FUN_00f08100(uVar2,uVar3,uVar4,uVar5,param_1,param_3);
  return;
}




void FUN_00f08100(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_1[4] == 0) {
    FUN_00f017ac(&local_90);
  }
  else {
    puVar2 = (undefined8 *)FUN_00965ecc();
    uStack_88 = puVar2[1];
    local_90 = *puVar2;
    uStack_78 = puVar2[3];
    local_80 = puVar2[2];
    local_70 = *(undefined4 *)(puVar2 + 4);
  }
  if (param_2[4] == 0) {
    FUN_00f017ac(&local_c0);
  }
  else {
    puVar2 = (undefined8 *)FUN_00965ecc();
    uStack_b8 = puVar2[1];
    local_c0 = *puVar2;
    uStack_a8 = puVar2[3];
    local_b0 = puVar2[2];
    local_a0 = *(undefined4 *)(puVar2 + 4);
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_2 + 0x50))(param_2);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0826c(undefined8 param_1,float param_2,long *param_3)

{
  float fVar1;
  
  (**(code **)(*param_3 + 0x48))();
  fVar1 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13f08(param_1,(param_2 * (float)param_1) / fVar1,param_3);
  return;
}




void FUN_00f082c0(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x48))();
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13f08((fVar1 * param_1._0_4_) / param_2,param_1._0_8_,param_3);
  return;
}




float FUN_00f08314(long *param_1,long *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x48))();
  fVar2 = (float)(**(code **)(*param_2 + 0x48))(param_2);
  fVar3 = 1.0;
  if (1.1920929e-07 < fVar1) {
    fVar3 = fVar2 / fVar1;
  }
  return fVar3;
}




float FUN_00f0838c(long *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined1 local_48 [8];
  undefined8 local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x68))(param_1,&local_30,&local_38);
  FUN_00f0025c(&local_40,(ulong)&local_40 | 4);
  FUN_00f0036c(local_48,(ulong)local_48 | 4);
  fVar2 = (float)local_40 * local_48._0_4_;
  fVar3 = (float)((ulong)local_40 >> 0x20) * local_48._4_4_;
  local_40 = CONCAT44(fVar3,fVar2);
  if (local_30 < 0.0) {
    local_30 = 0.0;
  }
  if (local_2c < 0.0) {
    local_2c = 0.0;
  }
  if (fVar2 < local_38) {
    local_38 = fVar2 - local_38;
  }
  if (fVar3 < local_34) {
    local_34 = fVar3 - local_34;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return ABS(local_30 - local_38);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f08470(long *param_1)

{
  long lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  undefined1 local_48 [8];
  undefined8 local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x68))(param_1,&local_30,&local_38);
  FUN_00f0025c(&local_40,(ulong)&local_40 | 4);
  FUN_00f0036c(local_48,(ulong)local_48 | 4);
  bVar2 = false;
  fVar3 = (float)local_40 * local_48._0_4_;
  fVar4 = (float)((ulong)local_40 >> 0x20) * local_48._4_4_;
  local_40 = CONCAT44(fVar4,fVar3);
  if (((DAT_03218ef8 <= local_38) && (bVar2 = false, _DAT_03218efc <= local_34)) &&
     (bVar2 = false, local_30 <= fVar3)) {
    bVar2 = local_2c <= fVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f08540(long *param_1)

{
  long lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  undefined1 local_48 [8];
  undefined8 local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x68))(param_1,&local_30,&local_38);
  FUN_00f0025c(&local_40,(ulong)&local_40 | 4);
  FUN_00f0036c(local_48,(ulong)local_48 | 4);
  bVar2 = false;
  fVar3 = (float)local_40 * local_48._0_4_;
  fVar4 = (float)((ulong)local_40 >> 0x20) * local_48._4_4_;
  local_40 = CONCAT44(fVar4,fVar3);
  if (((DAT_03218ef8 <= local_30) && (bVar2 = false, _DAT_03218efc <= local_2c)) &&
     (bVar2 = false, local_38 <= fVar3)) {
    bVar2 = local_34 <= fVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




float FUN_00f08610(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_2 * param_3;
  if (param_1 / param_2 <= param_3) {
    fVar1 = param_1;
  }
  return fVar1;
}




void FUN_00f0862c(undefined8 param_1,undefined8 param_2)

{
  FUN_00965ecc(param_2);
  return;
}




void FUN_00f08664(undefined8 param_1,undefined8 param_2)

{
  FUN_00965ecc(param_2);
  return;
}




void FUN_00f0869c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00965ecc(param_2);
  FUN_00965ecc(param_3);
  return;
}




void FUN_00f086f4(void)

{
  long lVar1;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f0036c(local_30,(ulong)local_30 | 4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00f08758(float param_1,long *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_2 + 8);
  fVar1 = (float)(**(code **)(*param_2 + 0x50))();
  return fVar2 + fVar1 * (param_1 - *(float *)(param_2 + 10));
}




void FUN_00f087b8(long *param_1)

{
  (**(code **)(*param_1 + 0x50))();
  FUN_00965ecc(param_1[4]);
  return;
}




void FUN_00f08824(undefined1 param_1 [16],float param_2,long *param_3,long *param_4,byte param_5,
                 byte param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)(**(code **)(*param_3 + 0x48))();
  fVar5 = param_2;
  fVar3 = (float)(**(code **)(*param_4 + 0x48))(param_4);
  fVar4 = fVar3 / fVar2;
  if (fVar5 / param_2 <= fVar3 / fVar2) {
    fVar4 = fVar5 / param_2;
  }
  if ((((fVar4 != 1.0 && fVar4 >= 1.0) & param_5) != 0) || ((fVar4 < 1.0 & param_6) != 0)) {
    local_60 = fVar2 * fVar4;
    fStack_5c = param_2 * fVar4;
    FUN_00f13f18(param_3,&local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f088f8(undefined1 param_1 [16],float param_2,long *param_3,long *param_4,byte param_5,
                 byte param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)(**(code **)(*param_3 + 0x48))();
  fVar5 = param_2;
  fVar3 = (float)(**(code **)(*param_4 + 0x48))(param_4);
  fVar4 = fVar3 / fVar2;
  if (fVar3 / fVar2 <= fVar5 / param_2) {
    fVar4 = fVar5 / param_2;
  }
  if ((((fVar4 != 1.0 && fVar4 >= 1.0) & param_5) != 0) || ((fVar4 < 1.0 & param_6) != 0)) {
    local_60 = fVar2 * fVar4;
    fStack_5c = param_2 * fVar4;
    FUN_00f13f18(param_3,&local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f089cc(undefined1 param_1 [16],float param_2,long *param_3,long *param_4,uint param_5,
                 uint param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)(**(code **)(*param_3 + 0x48))();
  fVar4 = param_2;
  fVar3 = (float)(**(code **)(*param_4 + 0x48))(param_4);
  fVar3 = fVar3 / fVar2;
  fVar4 = fVar4 / param_2;
  if (((param_5 & 1) == 0) || ((param_6 & 1) == 0)) {
    if ((param_5 & 1) == 0) {
      if ((param_6 & 1) == 0) goto LAB_00f08a9c;
      if ((float)DAT_03218f00 <= fVar3) {
        fVar3 = (float)DAT_03218f00;
      }
      if (DAT_03218f00._4_4_ <= fVar4) {
        fVar4 = DAT_03218f00._4_4_;
      }
    }
    else {
      if (fVar3 <= (float)DAT_03218f00) {
        fVar3 = (float)DAT_03218f00;
      }
      if (fVar4 <= DAT_03218f00._4_4_) {
        fVar4 = DAT_03218f00._4_4_;
      }
    }
  }
  local_60 = fVar2 * fVar3;
  fStack_5c = param_2 * fVar4;
  FUN_00f13f18(param_3,&local_60);
LAB_00f08a9c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f08acc(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_00e70510(param_1 + 1);
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 9) = 0x20;
  return;
}




void FUN_00f08b08(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  thunk_FUN_00e7051c(param_1 + 1,param_3);
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 9) = 0xa0;
  return;
}




void FUN_00f08b48(long param_1)

{
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}




bool FUN_00f08b84(long param_1,undefined8 param_2)

{
  ulong uVar1;
  byte bVar2;
  
  uVar1 = FUN_00e70b88(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0x48);
  }
  else {
    FUN_00910394(param_1 + 8,param_2);
    bVar2 = *(byte *)(param_1 + 0x48) | 0x80;
    *(byte *)(param_1 + 0x48) = bVar2;
  }
  return (char)bVar2 < '\0';
}




long FUN_00f08be8(long param_1)

{
  return param_1 + 8;
}




void FUN_00f08bf0(long *param_1,long param_2)

{
  if (*param_1 != param_2) {
    *param_1 = param_2;
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x80;
  }
  return;
}




undefined8 FUN_00f08c10(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00f08c18(long param_1,uint param_2)

{
  if ((*(byte *)(param_1 + 0x48) & 7) != param_2) {
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0x78 | (byte)param_2 & 7 | 0x80;
  }
  return;
}




byte FUN_00f08c3c(long param_1)

{
  return *(byte *)(param_1 + 0x48) & 7;
}




void FUN_00f08c48(long param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x48) >> 3 & 1) != (param_2 & 1)) {
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf7 | (param_2 & 1) << 3 | 0x80;
  }
  return;
}




byte FUN_00f08c70(long param_1)

{
  return *(byte *)(param_1 + 0x48) >> 3 & 1;
}




void FUN_00f08c7c(void)

{
  return;
}




void FUN_00f08c80(long param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x48) >> 5 & 1) != (param_2 & 1)) {
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xdf | (param_2 & 1) << 5 | 0x80;
  }
  return;
}




void FUN_00f08ca8(long param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x48) >> 6 & 1) != (param_2 & 1)) {
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0x3f | param_2 << 6 | 0x80;
  }
  return;
}




byte FUN_00f08ccc(long param_1)

{
  return *(byte *)(param_1 + 0x48) >> 6 & 1;
}




void FUN_00f08cd8(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x44) != param_1) {
    *(float *)(param_2 + 0x44) = param_1;
    *(byte *)(param_2 + 0x48) = *(byte *)(param_2 + 0x48) | 0x80;
  }
  return;
}




void FUN_00f08cf8(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x28) != param_1) {
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    *(float *)(param_2 + 0x28) = param_1;
    *(byte *)(param_2 + 0x48) = *(byte *)(param_2 + 0x48) | 0x80;
  }
  return;
}




undefined4 FUN_00f08d20(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




void FUN_00f08d28(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x2c) != param_1) {
    *(float *)(param_2 + 0x2c) = param_1;
    *(byte *)(param_2 + 0x48) = *(byte *)(param_2 + 0x48) | 0x80;
  }
  return;
}




undefined4 FUN_00f08d48(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}




void FUN_00f08d50(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x30) != param_1) {
    *(float *)(param_2 + 0x30) = param_1;
    *(byte *)(param_2 + 0x48) = *(byte *)(param_2 + 0x48) | 0x80;
  }
  return;
}




undefined4 FUN_00f08d70(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void FUN_00f08d78(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  undefined4 *puVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong local_188;
  ulong local_180;
  float local_164;
  float local_154;
  undefined4 local_144;
  uint local_140;
  undefined8 local_13c;
  byte local_134;
  float local_130;
  float fStack_12c;
  uint local_128 [4];
  float local_118;
  float local_114;
  undefined8 local_108 [16];
  int local_88;
  
  lVar6 = tpidr_el0;
  lVar13 = *(long *)(lVar6 + 0x28);
  local_180 = 0xffffffff;
  if (*(int *)*param_3 == 0) {
    bVar7 = ((int *)*param_3)[0x24c] - 1U < 2;
  }
  else {
    bVar7 = true;
  }
  iVar14 = 0;
  if (*(float *)((long)param_3 + 0x44) == 0.0) {
    iVar14 = 4;
  }
  plVar1 = param_3 + 3;
  if (param_3[4] != 0) {
    *(undefined4 *)plVar1 = 0;
  }
  lVar17 = 0;
  do {
    lVar2 = lVar17 + 0x40;
    *(undefined8 *)((long)local_108 + lVar17 + 0x28) = 0xff000000ff000000;
    *(undefined8 *)((long)local_108 + lVar17 + 0x20) = 0xff000000ff000000;
    *(undefined8 *)((long)local_108 + lVar17 + 0x38) = 0xff000000ff000000;
    *(undefined8 *)((long)local_108 + lVar17 + 0x30) = 0xff000000ff000000;
    *(undefined8 *)((long)local_108 + lVar17 + 8) = 0xff000000ff000000;
    *(undefined8 *)((long)local_108 + lVar17) = 0xff000000ff000000;
    *(undefined8 *)((long)local_108 + lVar17 + 0x18) = 0xff000000ff000000;
    *(undefined8 *)((long)local_108 + lVar17 + 0x10) = 0xff000000ff000000;
    lVar17 = lVar2;
  } while (lVar2 != 0x80);
  plVar3 = param_3 + 1;
  local_88 = 0;
  iVar8 = FUN_00e70b14(plVar3);
  if (iVar8 != 0) {
    uVar15 = 0;
    fVar19 = 0.0;
    fVar20 = 0.0;
    local_188 = 0xffff;
    local_164 = 0.0;
    local_154 = 0.0;
    do {
      uVar9 = FUN_00e70b28(plVar3,uVar15);
      uVar9 = uVar9 & 0xffff;
      if (iVar14 == 1) {
        uVar11 = FUN_00f0a97c(uVar9);
        if ((uVar11 & 1) == 0) {
          param_2 = *(float *)((long)param_3 + 0x44);
          iVar14 = 3;
          fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(*param_3 + 0x918));
          fVar19 = param_2 * fVar19;
        }
        else {
          iVar14 = 1;
        }
      }
      else if (iVar14 == 0) {
        uVar11 = FUN_00f0a9a4(uVar9);
        iVar14 = 3;
        if ((uVar11 & 1) != 0) {
          iVar14 = 1;
        }
      }
      uVar11 = FUN_00f0a998(uVar9);
      if ((uVar11 & 1) == 0) {
        if ((*(byte *)(param_3 + 9) & 8) != 0) {
          uVar9 = 0x2a;
        }
        uVar4 = uVar9 + 0x1d7c6;
        if ((uVar9 - 0x30 < 10 & *(byte *)(param_3 + 9) >> 4) == 0) {
          uVar4 = uVar9;
        }
        uVar11 = FUN_00f19dc0(*param_3,uVar4);
        uVar16 = uVar11 >> 0x10 & 0xffff;
        uVar9 = (uint)uVar11;
        if (((uVar9 & 0xffff) == 0xffff) && ((int)uVar16 == 0xffff)) {
          if (((((uVar4 == 0xa0) || (uVar4 == 0x1680)) || (uVar4 == 0x180e)) ||
              ((uVar4 - 0x2000 < 0xc || (uVar4 == 0x202f)))) ||
             ((uVar4 == 0x3000 || (uVar4 == 0x205f)))) {
            uVar11 = FUN_00f19dc0(*param_3,0x20);
            uVar9 = 0xffff;
            iVar8 = 0xffff;
            uVar16 = uVar11 >> 0x10 & 0xffff;
          }
          else {
            uVar16 = uVar11 >> 0x10 & 0xffff;
            iVar8 = (int)uVar16;
            uVar11 = uVar11 & 0xffffffff;
          }
          if ((((uint)uVar11 & 0xffff) == (uVar9 & 0xffff)) && ((int)uVar16 == iVar8)) {
            lVar17 = *param_3;
            uVar10 = FUN_00f0ac54();
            uVar11 = FUN_00f19dc0(lVar17,uVar10);
            uVar9 = 0xffff;
            iVar8 = 0xffff;
            uVar16 = uVar11 >> 0x10 & 0xffff;
          }
          if ((((uint)uVar11 & 0xffff) == (uVar9 & 0xffff)) && ((int)uVar16 == iVar8))
          goto LAB_00f09274;
        }
        else {
          uVar11 = uVar11 & 0xffffffff;
        }
        lVar17 = FUN_00f1a1e4(*param_3);
        local_13c = 0xffffff000000;
        if ((*(byte *)(param_3 + 9) >> 5 & 1) == 0) {
LAB_00f09140:
          if ((bVar7) && ((((uint)local_180 & 0xffff) != 0xffff || ((int)local_188 != 0xffff)))) {
            fVar18 = (float)FUN_00f19f48(*param_3);
            fVar19 = fVar18 + fVar19;
            fVar20 = fVar20 + param_2;
            local_164 = fVar20;
          }
          puVar5 = &DAT_01bee7f2;
          if (local_88 != 0) {
            puVar5 = (undefined4 *)((long)local_108 + (long)(local_88 + -1) * 4);
          }
          local_13c = CONCAT44((uint)uVar11 & 0xffff | (int)uVar16 << 0x10,*puVar5);
          fStack_12c = local_164;
          local_134 = local_134 & 0xfe | local_88 != 0;
          local_140 = uVar4;
          local_130 = fVar19;
          FUN_00f092ec(plVar1,&local_140);
          uVar12 = FUN_00f0a988(uVar4);
          param_2 = fVar19;
          if ((uVar12 & 1) == 0) {
            param_2 = *(float *)(lVar17 + 4) + *(float *)((long)param_3 + 0x2c) + fVar19;
          }
          fVar19 = local_154;
          local_188 = uVar16;
          local_180 = uVar11;
          if (local_154 <= param_2) {
            fVar19 = param_2;
            local_154 = param_2;
          }
        }
        else {
          uVar12 = FUN_00f09380(plVar3,uVar15);
          if ((uVar12 & 1) == 0) {
            uVar12 = FUN_00f093e4(plVar3,uVar15);
            if ((uVar12 & 1) == 0) goto LAB_00f09140;
            uVar11 = FUN_00f0943c(plVar3,uVar15);
            if ((uVar11 & 1) == 0) {
              uVar9 = FUN_00f094b0(plVar3,uVar15,local_128,0x20);
              if (uVar9 != 0xffffffff) {
                local_144 = 0xff000000;
                FUN_00e6a388(&local_144,local_128);
                *(undefined4 *)((long)local_108 + (long)local_88 * 4) = local_144;
                local_88 = local_88 + 1;
                uVar15 = uVar9;
              }
            }
            else {
              if (local_88 != 0) {
                local_88 = local_88 + -1;
              }
              uVar15 = uVar15 + 2;
            }
          }
        }
      }
      else {
        local_128[2] = 0xffffffff;
        local_128[1] = 0xff000000;
        local_128[0] = uVar9;
        local_118 = fVar19;
        local_114 = fVar20;
        FUN_00f092ec(plVar1,local_128);
        iVar14 = 0;
        if (*(float *)((long)param_3 + 0x44) == 0.0) {
          iVar14 = 4;
        }
        if ((*(byte *)(param_3 + 9) >> 6 & 1) == 0) {
          param_2 = *(float *)(*param_3 + 0x924);
          fVar20 = fVar20 + param_2 * (*(float *)(param_3 + 6) + 1.0);
          local_164 = fVar20;
        }
        local_154 = 0.0;
        fVar19 = 0.0;
      }
LAB_00f09274:
      uVar15 = uVar15 + 1;
      uVar9 = FUN_00e70b14(plVar3);
    } while (uVar15 < uVar9);
  }
  FUN_00f0961c(param_3);
  FUN_00f09938(param_3);
  FUN_00f09a70(param_3);
  *(byte *)(param_3 + 9) = *(byte *)(param_3 + 9) & 0x7f;
  if (*(long *)(lVar6 + 0x28) == lVar13) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

