// functions/00c30 — 6 functions
#include "libGameKindred.h"




void FUN_00c304a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined8 uVar7;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x1c290;
  uVar7 = FUN_00f13e54(param_1 + 0x1ba20);
  FUN_00f13e54(param_1 + 0x1ba20);
  FUN_00f13f08(uVar7,lVar1);
  if ((*(float *)(param_1 + 0x1c2d8) != 1.0) || (*(float *)(param_1 + 0x1c2dc) != 1.0)) {
    uVar7 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_1 + 0x1c2d8) = uVar7;
    FUN_0091ada4(lVar1);
  }
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcad4(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_027c1a60;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3e99999a,puVar5);
  lVar3 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00a99abc(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_008fa54c(local_60,"Effect_LoadingScreen");
  FUN_00a99b4c(puVar6,lVar1,local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  FUN_00f02308(lVar1,puVar5,puVar6,0);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c306f0(long param_1,uint param_2,int param_3,uint param_4,ulong param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined8 local_90;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  fVar13 = 0.0;
  if ((int)param_4 < *(int *)(param_1 + 0x1c8f0)) {
    fVar13 = *(float *)(param_1 + 0x1c8e0) * (float)(int)(*(int *)(param_1 + 0x1c8f0) + ~param_4);
  }
  bVar4 = (param_5 & 1) == 0;
  uVar2 = param_2;
  if (bVar4) {
    uVar2 = ~param_2 + param_4;
  }
  lVar5 = param_1 + (long)param_3 * 0x2c20;
  fVar14 = -500.0 - fVar13;
  if (bVar4) {
    fVar14 = fVar13 + 500.0;
  }
  fVar13 = (float)(int)param_2 * 0.024 + 0.3 + 0.192;
  if (bVar4) {
    fVar13 = fVar13 + 0.01;
  }
  lVar12 = (long)param_3;
  lVar1 = lVar5 + 0xe0;
  if ((*(float *)(lVar5 + 0x128) != 0.2) || (*(float *)(param_1 + lVar12 * 0x2c20 + 300) != 1.0)) {
    *(undefined8 *)(param_1 + lVar12 * 0x2c20 + 0x128) = 0x3f8000003e4ccccd;
    FUN_0091ada4(lVar1);
  }
  lVar5 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efcad4(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_027c1a60;
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00efcac4((float)(int)uVar2 * 0.024 + 0.3,puVar7);
  lVar5 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efcad4(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_02825220;
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3df5c28f,puVar8);
  lVar5 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efdc08(puVar10);
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  lVar5 = param_1 + lVar12 * 0x2c20;
  local_90 = CONCAT44(*(undefined4 *)(lVar5 + 0x124),fVar14 + *(float *)(lVar5 + 0x120));
  FUN_00efdc50(puVar10,&local_90);
  FUN_00efcac4(0x3df5c28f,puVar10);
  lVar5 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efe530(puVar11);
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  local_90 = NEON_fmov(0x3f800000,4);
  FUN_00efe58c(puVar11,&local_90);
  FUN_00efcac4(0x3df5c28f,puVar11);
  lVar5 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efcd98(puVar9);
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar9,puVar10,puVar8,puVar11,0);
  lVar5 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efcad4(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_027c1a60;
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00efcac4(fVar13,puVar8);
  lVar5 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar10;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efdd74(puVar10);
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00efddc4(0x3e99999a,puVar10);
  FUN_00efcac4(0x3df5c28f,puVar10);
  lVar5 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar11;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
    FUN_00efc8e8(puVar11);
    *(undefined ***)puVar11 = &PTR_FUN_02825148;
    *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar7);
  FUN_00f022a0(lVar1,puVar9);
  lVar5 = param_1 + lVar12 * 0x2c20 + 0x378;
  FUN_00f022a0(lVar5,puVar8);
  FUN_00f022a0(lVar5,puVar10);
  FUN_00f022a0(lVar5,puVar11);
  if (*(long *)(lVar3 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c30dcc(undefined8 param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    lVar1 = DAT_03210d00;
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 != 0xffff) {
      puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar4;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efcad4(puVar4);
      *(undefined ***)puVar4 = &PTR_FUN_02825268;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      goto LAB_00c30f10;
    }
  }
  puVar4 = (ushort *)0x0;
LAB_00c30f10:
  FUN_00efcac4(0x3f733333,puVar4);
  FUN_00efc930(puVar4,puVar3);
  FUN_00f02308(param_1,puVar4,0);
  return;
}




undefined4 FUN_00c30f48(void)

{
  return 0x3fa66666;
}




void FUN_00c30f54(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x1c8e8) = param_2;
  *(undefined4 *)(param_1 + 0x1c8ec) = param_3;
  *(undefined4 *)(param_1 + 0x1c8f0) = param_4;
  return;
}




void FUN_00c30f7c(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  if (param_2 < 10) {
    FUN_00c2e680(param_1 + (long)(int)param_2 * 0x2c20 + 0xe0,param_3,param_4,param_5,param_6,
                 param_7,param_8,param_9);
    return;
  }
  return;
}

