// functions/00b63 — 34 functions
#include "libGameKindred.h"




void FUN_00b63424(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_009606dc(uVar1,1);
  FUN_00b09454(param_1 + 0x10808,1);
  return;
}




void FUN_00b63464(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  
  if (param_3 == 0) {
    return;
  }
  uVar5 = FUN_00f04924(param_2);
  lVar1 = param_1 + 0xb110;
  if ((uVar5 & 1) != 0) {
    if ((param_3 == lVar1) && (*(char *)(param_1 + 0x10374) != '\0')) {
      lVar6 = param_1 + 0xda48;
    }
    else if ((param_3 != param_1 + 0xda48) || (lVar6 = lVar1, *(char *)(param_1 + 0xda3c) == '\0'))
    goto LAB_00b63514;
    FUN_00ac9484(lVar6,0);
  }
LAB_00b63514:
  FUN_00b63574(param_1,uVar5 & 1);
  bVar4 = (uVar5 & 1) == 0;
  uVar2 = 0x3f800000;
  if (bVar4) {
    uVar2 = 0x3f19999a;
  }
  uVar3 = 0x3f800000;
  if (bVar4) {
    uVar3 = 0x3f4ccccd;
  }
  FUN_00aca750(uVar2,uVar3,lVar1);
  FUN_00aca750(uVar2,uVar3,param_1 + 0xda48);
  return;
}




void FUN_00b63574(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
  
  lVar1 = param_1 + 0x10380;
  FUN_00f01980(lVar1);
  lVar2 = param_1 + 0x10470;
  FUN_00f01980(lVar2);
  lVar4 = DAT_03210d00;
  puVar3 = (uint *)(param_1 + 0x10404);
  fVar8 = (float)(*puVar3 >> 7 & 0xff) / 255.0;
  fVar9 = 0.4 - fVar8;
  if ((param_2 & 1) == 0) {
    fVar9 = fVar8;
  }
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  fVar9 = (fVar9 / 0.4) * 0.1;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
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
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efdd74(puVar6);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcac4(fVar9,puVar6);
  fVar8 = 0.4;
  if ((param_2 & 1) == 0) {
    fVar8 = 0.0;
  }
  FUN_00efddc4(fVar8,puVar6);
  FUN_00f022a0(lVar1,puVar6);
  *puVar3 = *puVar3 | 4;
  lVar4 = DAT_03210d00;
  puVar6 = (ushort *)(DAT_03210d00 + 0x20010);
  uVar5 = *puVar6;
  if ((param_2 & 1) != 0) {
    if (uVar5 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar7;
      }
      *puVar6 = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efdd74(puVar7);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efcac4(fVar9,puVar7);
    FUN_00efddc4(fVar8,puVar7);
    FUN_00f022a0(lVar2,puVar7);
    *(uint *)(param_1 + 0x104f4) = *(uint *)(param_1 + 0x104f4) | 4;
    return;
  }
  if (uVar5 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar7;
    }
    *puVar6 = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efc8e8(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_02825148;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar7);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdd74(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(fVar9,puVar6);
  FUN_00efddc4(fVar8,puVar6);
  FUN_00f022a0(lVar2,puVar6);
  *(uint *)(param_1 + 0x104f4) = *(uint *)(param_1 + 0x104f4) | 4;
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar2,puVar6);
  return;
}




void FUN_00b639b4(long param_1)

{
  FUN_00ac9484(param_1 + 0xb110,0);
  FUN_00ac9484(param_1 + 0xda48,0);
  return;
}




void FUN_00b639ec(long param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 == 0) {
    uVar3 = 0xcfa0;
    uVar4 = 0x7e88;
  }
  else if (param_3 == 1) {
    uVar3 = 0xcfa1;
    uVar4 = 0x8988;
  }
  else {
    if (param_3 != 2) goto LAB_00b63a64;
    uVar3 = 0xcfa2;
    uVar4 = 0x7388;
  }
  bVar2 = *(byte *)(param_1 + (ulong)(uVar3 | 0x20000));
  pcVar1 = "arrow_down";
  if (bVar2 != 0) {
    pcVar1 = "arrow_right";
  }
  *(byte *)(param_1 + (ulong)(uVar3 | 0x20000)) = bVar2 ^ 1;
  FUN_00f0e578(param_1 + (ulong)(uVar4 | 0x20000),pcVar1);
LAB_00b63a64:
  FUN_00b5f8cc(param_1);
  return;
}




void FUN_00b63a74(long param_1)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ushort uVar8;
  ushort *puVar9;
  
  lVar1 = param_1 + 0x10560;
  FUN_00f01980(lVar1);
  puVar2 = (uint *)(param_1 + 0x105e4);
  uVar7 = *puVar2;
  if ((uVar7 & 0x7f80) != 0) {
    *puVar2 = uVar7 & 0xffff807f;
    FUN_0091ada4(lVar1);
    uVar7 = *puVar2;
  }
  *puVar2 = uVar7 | 4;
  uVar4 = FUN_00efee28(0x3f800000,0x3ecccccd,FUN_0091aa80);
  uVar5 = FUN_00efed6c(0x40000000);
  uVar6 = FUN_00efee28(0,0x3f800000,FUN_009a71a4);
  lVar3 = DAT_03210d00;
  uVar8 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar8;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar9);
    *(undefined ***)puVar9 = &PTR_FUN_02825148;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00f02308(lVar1,uVar4,uVar5,uVar6,puVar9,0);
  return;
}




void FUN_00b63be8(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_00b63c54(undefined8 param_1,float param_2,float param_3,long param_4,int param_5)

{
  long lVar1;
  
  lVar1 = param_4 + (long)param_5 * 0x1328;
  FUN_00ae78e4(*(undefined4 *)(param_4 + 0x2d038),0x42a00000,0,param_1,lVar1 + 0x13660,
               *(undefined1 *)(param_4 + 0x2cf9b));
  if ((*(float *)(lVar1 + 0x136a0) != param_2) || (*(float *)(lVar1 + 0x136a4) != param_3)) {
    *(float *)(lVar1 + 0x136a0) = param_2;
    *(float *)(lVar1 + 0x136a4) = param_3;
    FUN_0091ada4(lVar1 + 0x13660);
  }
  param_4 = param_4 + (long)param_5 * 0x1328;
  *(uint *)(param_4 + 0x136e4) = *(uint *)(param_4 + 0x136e4) | 4;
  return;
}




void FUN_00b63d30(void)

{
  return;
}




char * FUN_00b63d34(void)

{
  return "main_nav_party";
}




void FUN_00b63d40(void)

{
  FUN_00e6ce7c("MAIN_MENU_PARTY",0);
  return;
}




void FUN_00b63d50(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b63d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1,1);
  return;
}




void FUN_00b63d60(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b63d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1,0);
  return;
}




undefined8 FUN_00b63d70(void)

{
  return 0;
}




undefined8 FUN_00b63d78(void)

{
  return 0;
}




void FUN_00b63d80(void)

{
  return;
}




void FUN_00b63d84(void)

{
  return;
}




undefined8 FUN_00b63d88(void)

{
  return 0;
}




undefined8 FUN_00b63d90(void)

{
  return 0;
}




undefined8 FUN_00b63d98(void)

{
  return 0;
}




void FUN_00b63da0(void)

{
  return;
}




void FUN_00b63da4(void)

{
  return;
}




undefined8 FUN_00b63da8(void)

{
  return 0;
}




long FUN_00b63db0(long param_1)

{
  return param_1 + -0x2c58;
}




void FUN_00b63dbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b63dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0x2c58) + 0x148))((long *)(param_1 + -0x2c58),1);
  return;
}




void FUN_00b63dd4(void)

{
  return;
}




void FUN_00b63dd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b63dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -0x2c58) + 0x148))((long *)(param_1 + -0x2c58),0);
  return;
}




void FUN_00b63df0(void)

{
  return;
}




char * FUN_00b63df4(void)

{
  return "main_nav_party";
}




void FUN_00b63e00(void)

{
  FUN_00e6ce7c("MAIN_MENU_PARTY",0);
  return;
}




void FUN_00b63e10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d5388;
  param_1[0x9b] = &PTR_FUN_028266f0;
  param_1[0xb2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb5);
  FUN_00f13d08(param_1 + 0x9b);
  param_1[0x7d] = &PTR_FUN_028266f0;
  param_1[0x94] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x97);
  FUN_00f13d08(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_028266f0;
  param_1[0x76] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x79);
  FUN_00f13d08(param_1 + 0x5f);
  FUN_00f01868(param_1 + 0x4e);
  FUN_009c825c(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b63ec0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00b63f40(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00b63fc0(long param_1)

{
  FUN_00e70510();
  FUN_00e70510(param_1 + 0x10);
  FUN_00e70510(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_00e70510(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_00e70510(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_008fa54c(param_1 + 0xe0,PTR_s_build___MenuPartsCommon_tga_02be3530);
  memset((void *)(param_1 + 0xf8),0,0x9c);
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1ac) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x1b4) = 0x100;
  return;
}

