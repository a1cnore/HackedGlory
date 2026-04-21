// functions/00b16 — 6 functions
#include "libGameKindred.h"




void FUN_00b16058(long param_1)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar9 = 0;
  lVar3 = param_1 + 0xb8;
  fVar12 = *(float *)(param_1 + 0x568) * 5.0 +
           *(float *)(param_1 + 0x56c) + *(float *)(param_1 + 0x56c);
  do {
    if ((*(uint *)(lVar3 + 0x84) & 0x7f80) != 0) {
      *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xffff807f;
      FUN_0091ada4(lVar3);
    }
    lVar1 = DAT_03210d00;
    fVar10 = *(float *)(param_1 + 0x568);
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 == 0xffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
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
      *(undefined ***)puVar4 = &PTR_FUN_027c1a60;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4(fVar10 * (float)(int)lVar9,puVar4);
    lVar1 = DAT_03210d00;
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdd74(puVar5);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efddc4(0x3f800000,puVar5);
    FUN_00efcac4(*(undefined4 *)(param_1 + 0x56c),puVar5);
    FUN_00efcb24(puVar5,FUN_009a7624);
    lVar1 = DAT_03210d00;
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efcad4(puVar6);
      *(undefined ***)puVar6 = &PTR_FUN_027c1a60;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4(*(undefined4 *)(param_1 + 0x570),puVar6);
    lVar1 = DAT_03210d00;
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdd74(puVar7);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efddc4(0,puVar7);
    FUN_00efcac4(*(undefined4 *)(param_1 + 0x56c),puVar7);
    FUN_00efcb24(puVar7,FUN_009a7624);
    lVar1 = DAT_03210d00;
    fVar10 = *(float *)(param_1 + 0x568);
    fVar11 = *(float *)(param_1 + 0x56c);
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efcad4(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_027c1a60;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4((fVar12 - fVar10 * (float)(int)lVar9) - (fVar11 + fVar11),puVar8);
    FUN_00f01980(lVar3);
    FUN_00f02308(lVar3,puVar4,puVar5,puVar6,puVar7,puVar8,0);
    lVar1 = DAT_03210d00;
    lVar9 = lVar9 + 1;
    lVar3 = lVar3 + 0xf0;
  } while (lVar9 != 5);
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
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
    *(undefined ***)puVar4 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(fVar12 + *(float *)(param_1 + 0x574),puVar4);
  lVar3 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_027c27b8;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  *(code **)(puVar5 + 8) = thunk_FUN_00b16058;
  *(long *)(puVar5 + 0x10) = param_1;
  FUN_00f01980(param_1);
  FUN_00f02308(param_1,puVar4,puVar5,0);
  return;
}




void thunk_FUN_00b16058(long param_1)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar9 = 0;
  lVar3 = param_1 + 0xb8;
  fVar12 = *(float *)(param_1 + 0x568) * 5.0 +
           *(float *)(param_1 + 0x56c) + *(float *)(param_1 + 0x56c);
  do {
    if ((*(uint *)(lVar3 + 0x84) & 0x7f80) != 0) {
      *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xffff807f;
      FUN_0091ada4(lVar3);
    }
    lVar1 = DAT_03210d00;
    fVar10 = *(float *)(param_1 + 0x568);
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 == 0xffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
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
      *(undefined ***)puVar4 = &PTR_FUN_027c1a60;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4(fVar10 * (float)(int)lVar9,puVar4);
    lVar1 = DAT_03210d00;
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdd74(puVar5);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efddc4(0x3f800000,puVar5);
    FUN_00efcac4(*(undefined4 *)(param_1 + 0x56c),puVar5);
    FUN_00efcb24(puVar5,FUN_009a7624);
    lVar1 = DAT_03210d00;
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efcad4(puVar6);
      *(undefined ***)puVar6 = &PTR_FUN_027c1a60;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4(*(undefined4 *)(param_1 + 0x570),puVar6);
    lVar1 = DAT_03210d00;
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdd74(puVar7);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efddc4(0,puVar7);
    FUN_00efcac4(*(undefined4 *)(param_1 + 0x56c),puVar7);
    FUN_00efcb24(puVar7,FUN_009a7624);
    lVar1 = DAT_03210d00;
    fVar10 = *(float *)(param_1 + 0x568);
    fVar11 = *(float *)(param_1 + 0x56c);
    uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar2 == 0xffff) {
      puVar8 = (ushort *)0x0;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
      if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar2 = 0xffff;
      }
      else {
        uVar2 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efcad4(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_027c1a60;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4((fVar12 - fVar10 * (float)(int)lVar9) - (fVar11 + fVar11),puVar8);
    FUN_00f01980(lVar3);
    FUN_00f02308(lVar3,puVar4,puVar5,puVar6,puVar7,puVar8,0);
    lVar1 = DAT_03210d00;
    lVar9 = lVar9 + 1;
    lVar3 = lVar3 + 0xf0;
  } while (lVar9 != 5);
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
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
    *(undefined ***)puVar4 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(fVar12 + *(float *)(param_1 + 0x574),puVar4);
  lVar3 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_027c27b8;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  *(code **)(puVar5 + 8) = thunk_FUN_00b16058;
  *(long *)(puVar5 + 0x10) = param_1;
  FUN_00f01980(param_1);
  FUN_00f02308(param_1,puVar4,puVar5,0);
  return;
}




void FUN_00b16600(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    FUN_00f01980(lVar1 + 0xb8);
    if ((*(uint *)(lVar1 + 0x13c) & 0x7f80) != 0) {
      *(uint *)(lVar1 + 0x13c) = *(uint *)(lVar1 + 0x13c) & 0xffff807f;
      FUN_0091ada4(lVar1 + 0xb8);
    }
    lVar2 = lVar2 + 0xf0;
  } while (lVar2 != 0x4b0);
  FUN_00f01980(param_1);
  return;
}




void FUN_00b16664(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5)

{
  *(undefined4 *)(param_5 + 0x568) = param_1;
  *(undefined4 *)(param_5 + 0x56c) = param_2;
  *(undefined4 *)(param_5 + 0x570) = param_3;
  *(undefined4 *)(param_5 + 0x574) = param_4;
  return;
}




void FUN_00b16678(long *param_1)

{
  long *plVar1;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027d6508;
  FUN_00f017e8(plVar1);
  param_1[0x17] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(param_1 + 0x28);
  FUN_00f0e4a8(param_1 + 0x46);
  FUN_00f0e4a8(param_1 + 100);
  FUN_00f0e4a8(param_1 + 0x82);
  FUN_00f0e4a8(param_1 + 0xa0);
  FUN_00f0e4a8(param_1 + 0xbe);
  FUN_00f0e4a8(param_1 + 0xdc);
  FUN_00f0e4a8(param_1 + 0xfa);
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  *(undefined4 *)((long)param_1 + 0xb94) = 0x3f000000;
  *(undefined2 *)(param_1 + 0x173) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x28,1);
  FUN_00f023ec(plVar1,param_1 + 0x46,1);
  FUN_00f023ec(plVar1,param_1 + 100,1);
  FUN_00f023ec(plVar1,param_1 + 0x82,1);
  FUN_00f023ec(plVar1,param_1 + 0xa0,1);
  FUN_00f023ec(plVar1,param_1 + 0xbe,1);
  FUN_00f023ec(plVar1,param_1 + 0xdc,1);
  FUN_00f023ec(plVar1,param_1 + 0xfa,1);
  FUN_00f023ec(plVar1,param_1 + 0x118,1);
  FUN_00f023ec(plVar1,param_1 + 0x136,1);
  FUN_00f023ec(plVar1,param_1 + 0x154,1);
  return;
}




void FUN_00b16840(float param_1,undefined8 param_2,undefined1 param_3 [16],long *param_4,
                 undefined4 param_5,byte param_6)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined **ppuVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  float fVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_b0;
  float fStack_ac;
  long local_a8;
  
  fVar23 = param_3._0_4_;
  lVar13 = tpidr_el0;
  local_a8 = *(long *)(lVar13 + 0x28);
  uVar22 = param_3._0_8_;
  *(undefined4 *)(param_4 + 0x172) = param_5;
  FUN_00f13f08(param_2);
  if (*(char *)((long)param_4 + 0xb99) == '\0') {
    *(byte *)(param_4 + 0x173) = param_6 & 1;
    ppuVar12 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
    if ((param_6 & 1) == 0) {
      ppuVar12 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
    }
    puVar15 = *ppuVar12;
    FUN_00f0e540(param_4 + 0x28,puVar15);
    FUN_00f0e540(param_4 + 0x46,puVar15);
    FUN_00f0e540(param_4 + 100,puVar15);
    FUN_00f0e540(param_4 + 0x82,puVar15);
    FUN_00f0e540(param_4 + 0xa0,puVar15);
    FUN_00f0e540(param_4 + 0xbe,puVar15);
    FUN_00f0e540(param_4 + 0xdc,puVar15);
    FUN_00f0e540(param_4 + 0xfa,puVar15);
    FUN_00f0e540(param_4 + 0x118,puVar15);
    FUN_00f0e540(param_4 + 0x136,puVar15);
    plVar1 = param_4 + 0x154;
    FUN_00f0e548(plVar1,puVar15,"white_background");
    uVar22 = (ulong)(uint)*(float *)(param_4 + 0x15e);
    if ((*(float *)(param_4 + 0x15e) != 0.5) ||
       (uVar22 = (ulong)(uint)*(float *)((long)param_4 + 0xaf4),
       *(float *)((long)param_4 + 0xaf4) != 0.5)) {
      param_4[0x15e] = 0x3f0000003f000000;
      FUN_0091ada4(plVar1);
    }
    FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
    *(undefined1 *)((long)param_4 + 0xb99) = 1;
  }
  if (param_1 != -1.0) {
    *(float *)((long)param_4 + 0xb94) = param_1;
  }
  plVar1 = param_4 + 0x136;
  uVar14 = FUN_00f02540(plVar1);
  if ((uVar14 & 1) == 0) {
    FUN_00f023ec(param_4 + 0x17,plVar1,1);
  }
  plVar2 = param_4 + 0x118;
  uVar14 = FUN_00f02540(plVar2);
  if ((uVar14 & 1) == 0) {
    FUN_00f023ec(param_4 + 0x17,plVar2,1);
  }
  fVar24 = (float)param_2;
  switch((int)param_4[0x172]) {
  case 0:
    plVar3 = param_4 + 0x28;
    FUN_00f0e578(plVar3,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x32) != 0.0) ||
       (uVar22 = 0x3f800000, *(float *)((long)param_4 + 0x194) != 1.0)) {
      param_4[0x32] = 0x3f80000000000000;
      FUN_0091ada4(plVar3);
    }
    plVar4 = param_4 + 0x46;
    *(byte *)(param_4 + 0x43) = *(byte *)(param_4 + 0x43) & 0xfc;
    FUN_00f0e578(plVar4,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x50) != 0.0) || (*(float *)((long)param_4 + 0x284) != 0.0)) {
      param_4[0x50] = 0;
      FUN_0091ada4(plVar4);
    }
    plVar5 = param_4 + 100;
    *(byte *)(param_4 + 0x61) = *(byte *)(param_4 + 0x61) & 0xfc | 2;
    FUN_00f0e578(plVar5,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x6e) != 1.0) || (*(float *)((long)param_4 + 0x374) != 0.0)) {
      param_4[0x6e] = 0x3f800000;
      FUN_0091ada4(plVar5);
    }
    plVar6 = param_4 + 0x82;
    *(byte *)(param_4 + 0x7f) = *(byte *)(param_4 + 0x7f) | 3;
    FUN_00f0e578(plVar6,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x8c) != 1.0) || (*(float *)((long)param_4 + 0x464) != 1.0)) {
      lVar17 = NEON_fmov(0x3f800000,4);
      param_4[0x8c] = lVar17;
      FUN_0091ada4(plVar6);
    }
    plVar7 = param_4 + 0xa0;
    *(byte *)(param_4 + 0x9d) = *(byte *)(param_4 + 0x9d) & 0xfc | 1;
    FUN_00f0e578(plVar7,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 0xaa) != 0.0) || (*(float *)((long)param_4 + 0x554) != 1.0)) {
      param_4[0xaa] = 0x3f80000000000000;
      FUN_0091ada4(plVar7);
    }
    plVar8 = param_4 + 0xbe;
    *(byte *)(param_4 + 0xbb) = *(byte *)(param_4 + 0xbb) & 0xfc;
    FUN_00f0e578(plVar8,"arrow_bg_left_edge");
    if ((*(float *)(param_4 + 200) != 0.0) ||
       (uVar22 = 0x3f000000, *(float *)((long)param_4 + 0x644) != 0.5)) {
      param_4[200] = 0x3f00000000000000;
      FUN_0091ada4(plVar8);
    }
    plVar9 = param_4 + 0xdc;
    *(byte *)(param_4 + 0xd9) = *(byte *)(param_4 + 0xd9) & 0xfc;
    FUN_00f0e578(plVar9,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 0xe6) != 0.5) || (*(float *)((long)param_4 + 0x734) != 0.0)) {
      param_4[0xe6] = 0x3f000000;
      FUN_0091ada4(plVar9);
    }
    plVar10 = param_4 + 0xfa;
    *(byte *)(param_4 + 0xf7) = *(byte *)(param_4 + 0xf7) & 0xfc | 2;
    FUN_00f0e578(plVar10,"arrow_bg_left_edge");
    if ((*(float *)(param_4 + 0x104) != 1.0) || (*(float *)((long)param_4 + 0x824) != 0.5)) {
      param_4[0x104] = 0x3f0000003f800000;
      FUN_0091ada4(plVar10);
    }
    *(byte *)(param_4 + 0x115) = *(byte *)(param_4 + 0x115) & 0xfc | 1;
    FUN_00f0e578(plVar2,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 0x122) != 1.0) || (*(float *)((long)param_4 + 0x914) != 1.0)) {
      lVar17 = NEON_fmov(0x3f800000,4);
      param_4[0x122] = lVar17;
      FUN_0091ada4(plVar2);
    }
    *(byte *)(param_4 + 0x133) = *(byte *)(param_4 + 0x133) & 0xfc;
    FUN_00f0e578(plVar1,"arrow_bg_arrow");
    if ((*(float *)(param_4 + 0x140) != 0.5) || (*(float *)((long)param_4 + 0xa04) != 0.0)) {
      param_4[0x140] = 0x3f000000;
      FUN_0091ada4(plVar1);
    }
    *(byte *)(param_4 + 0x151) = *(byte *)(param_4 + 0x151) & 0xfc;
    uVar18 = FUN_00f0e700(plVar3);
    fVar21 = (float)FUN_00f0eac0(plVar1);
    fVar25 = (float)uVar18;
    fVar21 = fVar21 - fVar25 * 0.5;
    fVar16 = fVar21 + fVar24;
    fVar21 = fVar21 / fVar16;
    FUN_00f0e700(plVar1);
    local_b0 = param_1 - fVar21;
    fStack_ac = (fVar16 * (*(float *)((long)param_4 + 0xb94) + -0.5)) / fVar23 + 1.0;
    (**(code **)(*param_4 + 0x28))(param_4,&local_b0);
    plVar11 = param_4 + 0x154;
    fVar20 = (float)uVar22;
    FUN_00f13f08(fVar24 - (fVar25 + fVar25),fVar23 - (fVar20 + fVar20),plVar11);
    uVar19 = FUN_00f0e700(plVar11);
    FUN_00f13f08(uVar19,uVar22,plVar9);
    fVar21 = (float)FUN_00f0e700(plVar11);
    fVar16 = (float)FUN_00f0e700(plVar1);
    FUN_00f13f08(*(float *)((long)param_4 + 0xb94) * (fVar21 - fVar16),uVar22,plVar7);
    fVar21 = (float)FUN_00f0e700(plVar11);
    fVar16 = (float)FUN_00f0e700(plVar1);
    FUN_00f13f08((fVar21 - fVar16) * (1.0 - *(float *)((long)param_4 + 0xb94)),plVar2);
    fVar21 = (float)uVar22;
    FUN_00f0e700(plVar11);
    FUN_00f13f08(uVar18,plVar8);
    local_b0 = (float)FUN_00f0e700(plVar8);
    fStack_ac = fVar21;
    FUN_00f13f18(plVar10,&local_b0);
    fVar16 = fVar24 * -0.5;
    fVar21 = fVar23 * 0.5;
    if ((*(float *)(param_4 + 0x30) != fVar16) || (*(float *)((long)param_4 + 0x184) != fVar21)) {
      *(float *)(param_4 + 0x30) = fVar16;
      *(float *)((long)param_4 + 0x184) = fVar21;
      FUN_0091ada4(plVar3);
    }
    fVar23 = fVar23 * -0.5;
    if ((*(float *)(param_4 + 0x4e) != fVar16) || (*(float *)((long)param_4 + 0x274) != fVar23)) {
      *(float *)(param_4 + 0x4e) = fVar16;
      *(float *)((long)param_4 + 0x274) = fVar23;
      FUN_0091ada4(plVar4);
    }
    fVar24 = fVar24 * 0.5;
    if ((*(float *)(param_4 + 0x6c) != fVar24) || (*(float *)((long)param_4 + 0x364) != fVar23)) {
      *(float *)(param_4 + 0x6c) = fVar24;
      *(float *)((long)param_4 + 0x364) = fVar23;
      FUN_0091ada4(plVar5);
    }
    if ((*(float *)(param_4 + 0x8a) != fVar24) || (*(float *)((long)param_4 + 0x454) != fVar21)) {
      *(float *)(param_4 + 0x8a) = fVar24;
      *(float *)((long)param_4 + 0x454) = fVar21;
      FUN_0091ada4(plVar6);
    }
    if ((*(float *)(param_4 + 0xa8) != fVar16 + fVar25) ||
       (*(float *)((long)param_4 + 0x544) != fVar21)) {
      *(float *)(param_4 + 0xa8) = fVar16 + fVar25;
      *(float *)((long)param_4 + 0x544) = fVar21;
      FUN_0091ada4(plVar7);
    }
    if ((*(float *)(param_4 + 0xc6) != fVar16) || (*(float *)((long)param_4 + 0x634) != 0.0)) {
      *(float *)(param_4 + 0xc6) = fVar16;
      *(undefined4 *)((long)param_4 + 0x634) = 0;
      FUN_0091ada4(plVar8);
    }
    if ((*(float *)(param_4 + 0x102) != fVar24) || (*(float *)((long)param_4 + 0x814) != 0.0)) {
      *(float *)(param_4 + 0x102) = fVar24;
      *(undefined4 *)((long)param_4 + 0x814) = 0;
      FUN_0091ada4(plVar10);
    }
    if ((*(float *)(param_4 + 0xe4) != 0.0) || (*(float *)((long)param_4 + 0x724) != fVar23)) {
      *(undefined4 *)(param_4 + 0xe4) = 0;
      *(float *)((long)param_4 + 0x724) = fVar23;
      FUN_0091ada4(plVar9);
    }
    if ((*(float *)(param_4 + 0x120) != fVar24 - fVar25) ||
       (*(float *)((long)param_4 + 0x904) != fVar21)) {
      *(float *)(param_4 + 0x120) = fVar24 - fVar25;
      *(float *)((long)param_4 + 0x904) = fVar21;
      FUN_0091ada4(plVar2);
    }
    fVar23 = *(float *)((long)param_4 + 0xb94);
    fVar24 = (float)FUN_00f0e700(plVar11);
    fVar16 = (float)FUN_00f0e700(plVar1);
    fVar25 = *(float *)(param_4 + 0x13e);
    fVar23 = (fVar23 + -0.5) * fVar24 - fVar16 * (*(float *)((long)param_4 + 0xb94) + -0.5);
    if ((fVar25 != fVar23) ||
       (fVar24 = *(float *)((long)param_4 + 0x9f4), fVar24 != fVar21 - fVar20)) {
      *(float *)(param_4 + 0x13e) = fVar23;
      *(float *)((long)param_4 + 0x9f4) = fVar21 - fVar20;
      FUN_0091ada4(plVar1);
      fVar25 = *(float *)(param_4 + 0x13e);
      fVar24 = *(float *)((long)param_4 + 0x9f4);
    }
    fVar23 = -fVar25;
    FUN_00f0e700(plVar1);
    fVar25 = -fVar24 - fVar25;
    if ((*(float *)(param_4 + 0x1f) == fVar23) && (*(float *)((long)param_4 + 0xfc) == fVar25))
    goto switchD_00b16a14_default;
    *(float *)(param_4 + 0x1f) = fVar23;
    break;
  case 1:
    plVar3 = param_4 + 0x28;
    FUN_00f0e578(plVar3,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x32) != 1.0) || (*(float *)((long)param_4 + 0x194) != 0.0)) {
      param_4[0x32] = 0x3f800000;
      FUN_0091ada4(plVar3);
    }
    plVar4 = param_4 + 0x46;
    *(byte *)(param_4 + 0x43) = *(byte *)(param_4 + 0x43) | 3;
    FUN_00f0e578(plVar4,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x50) != 1.0) || (*(float *)((long)param_4 + 0x284) != 1.0)) {
      lVar17 = NEON_fmov(0x3f800000,4);
      param_4[0x50] = lVar17;
      FUN_0091ada4(plVar4);
    }
    plVar5 = param_4 + 100;
    *(byte *)(param_4 + 0x61) = *(byte *)(param_4 + 0x61) & 0xfc | 1;
    FUN_00f0e578(plVar5,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x6e) != 0.0) || (*(float *)((long)param_4 + 0x374) != 1.0)) {
      param_4[0x6e] = 0x3f80000000000000;
      FUN_0091ada4(plVar5);
    }
    plVar6 = param_4 + 0x82;
    *(byte *)(param_4 + 0x7f) = *(byte *)(param_4 + 0x7f) & 0xfc;
    FUN_00f0e578(plVar6,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x8c) != 0.0) || (*(float *)((long)param_4 + 0x464) != 0.0)) {
      param_4[0x8c] = 0;
      FUN_0091ada4(plVar6);
    }
    plVar7 = param_4 + 0xa0;
    *(byte *)(param_4 + 0x9d) = *(byte *)(param_4 + 0x9d) & 0xfc | 2;
    FUN_00f0e578(plVar7,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 0xaa) != 0.0) || (*(float *)((long)param_4 + 0x554) != 0.0)) {
      param_4[0xaa] = 0;
      FUN_0091ada4(plVar7);
    }
    plVar8 = param_4 + 0xbe;
    *(byte *)(param_4 + 0xbb) = *(byte *)(param_4 + 0xbb) & 0xfc | 2;
    FUN_00f0e578(plVar8,"arrow_bg_left_edge");
    if ((*(float *)(param_4 + 200) != 0.0) ||
       (uVar22 = 0x3f000000, *(float *)((long)param_4 + 0x644) != 0.5)) {
      param_4[200] = 0x3f00000000000000;
      FUN_0091ada4(plVar8);
    }
    plVar9 = param_4 + 0xdc;
    *(byte *)(param_4 + 0xd9) = *(byte *)(param_4 + 0xd9) & 0xfc;
    FUN_00f0e578(plVar9,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 0xe6) != 0.5) || (*(float *)((long)param_4 + 0x734) != 1.0)) {
      param_4[0xe6] = 0x3f8000003f000000;
      FUN_0091ada4(plVar9);
    }
    plVar10 = param_4 + 0xfa;
    *(byte *)(param_4 + 0xf7) = *(byte *)(param_4 + 0xf7) & 0xfc;
    FUN_00f0e578(plVar10,"arrow_bg_left_edge");
    if ((*(float *)(param_4 + 0x104) != 1.0) || (*(float *)((long)param_4 + 0x824) != 0.5)) {
      param_4[0x104] = 0x3f0000003f800000;
      FUN_0091ada4(plVar10);
    }
    *(byte *)(param_4 + 0x115) = *(byte *)(param_4 + 0x115) & 0xfc | 1;
    FUN_00f0e578(plVar2,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 0x122) != 1.0) || (*(float *)((long)param_4 + 0x914) != 0.0)) {
      param_4[0x122] = 0x3f800000;
      FUN_0091ada4(plVar2);
    }
    *(byte *)(param_4 + 0x133) = *(byte *)(param_4 + 0x133) & 0xfc | 2;
    FUN_00f0e578(plVar1,"arrow_bg_arrow");
    if ((*(float *)(param_4 + 0x140) != 0.5) || (*(float *)((long)param_4 + 0xa04) != 1.0)) {
      param_4[0x140] = 0x3f8000003f000000;
      FUN_0091ada4(plVar1);
    }
    *(byte *)(param_4 + 0x151) = *(byte *)(param_4 + 0x151) & 0xfc | 2;
    uVar18 = FUN_00f0e700(plVar3);
    fVar21 = (float)FUN_00f0eac0(plVar1);
    fVar25 = (float)uVar18;
    fVar21 = fVar21 - fVar25 * 0.5;
    fVar16 = fVar21 + fVar24;
    fVar21 = fVar21 / fVar16;
    FUN_00f0e700(plVar1);
    local_b0 = param_1 - fVar21;
    fStack_ac = 0.0 - (fVar16 * (*(float *)((long)param_4 + 0xb94) + -0.5)) / fVar23;
    (**(code **)(*param_4 + 0x28))(param_4,&local_b0);
    plVar11 = param_4 + 0x154;
    fVar20 = (float)uVar22;
    FUN_00f13f08(fVar24 - (fVar25 + fVar25),fVar23 - (fVar20 + fVar20),plVar11);
    uVar19 = FUN_00f0e700(plVar11);
    FUN_00f13f08(uVar19,uVar22,plVar9);
    fVar21 = (float)FUN_00f0e700(plVar11);
    fVar16 = (float)FUN_00f0e700(plVar1);
    FUN_00f13f08((fVar21 - fVar16) * (1.0 - *(float *)((long)param_4 + 0xb94)),uVar22,plVar2);
    fVar21 = (float)FUN_00f0e700(plVar11);
    fVar16 = (float)FUN_00f0e700(plVar1);
    FUN_00f13f08(*(float *)((long)param_4 + 0xb94) * (fVar21 - fVar16),plVar7);
    fVar21 = (float)uVar22;
    FUN_00f0e700(plVar11);
    FUN_00f13f08(uVar18,plVar8);
    local_b0 = (float)FUN_00f0e700(plVar8);
    fStack_ac = fVar21;
    FUN_00f13f18(plVar10,&local_b0);
    fVar16 = fVar24 * 0.5;
    fVar21 = fVar23 * -0.5;
    if ((*(float *)(param_4 + 0x30) != fVar16) || (*(float *)((long)param_4 + 0x184) != fVar21)) {
      *(float *)(param_4 + 0x30) = fVar16;
      *(float *)((long)param_4 + 0x184) = fVar21;
      FUN_0091ada4(plVar3);
    }
    fVar23 = fVar23 * 0.5;
    if ((*(float *)(param_4 + 0x4e) != fVar16) || (*(float *)((long)param_4 + 0x274) != fVar23)) {
      *(float *)(param_4 + 0x4e) = fVar16;
      *(float *)((long)param_4 + 0x274) = fVar23;
      FUN_0091ada4(plVar4);
    }
    fVar24 = fVar24 * -0.5;
    if ((*(float *)(param_4 + 0x6c) != fVar24) || (*(float *)((long)param_4 + 0x364) != fVar23)) {
      *(float *)(param_4 + 0x6c) = fVar24;
      *(float *)((long)param_4 + 0x364) = fVar23;
      FUN_0091ada4(plVar5);
    }
    if ((*(float *)(param_4 + 0x8a) != fVar24) || (*(float *)((long)param_4 + 0x454) != fVar21)) {
      *(float *)(param_4 + 0x8a) = fVar24;
      *(float *)((long)param_4 + 0x454) = fVar21;
      FUN_0091ada4(plVar6);
    }
    if ((*(float *)(param_4 + 0xa8) != fVar24 + fVar25) ||
       (*(float *)((long)param_4 + 0x544) != fVar21)) {
      *(float *)(param_4 + 0xa8) = fVar24 + fVar25;
      *(float *)((long)param_4 + 0x544) = fVar21;
      FUN_0091ada4(plVar7);
    }
    if ((*(float *)(param_4 + 0xc6) != fVar24) || (*(float *)((long)param_4 + 0x634) != 0.0)) {
      *(float *)(param_4 + 0xc6) = fVar24;
      *(undefined4 *)((long)param_4 + 0x634) = 0;
      FUN_0091ada4(plVar8);
    }
    if ((*(float *)(param_4 + 0xe4) != 0.0) || (*(float *)((long)param_4 + 0x724) != fVar23)) {
      *(undefined4 *)(param_4 + 0xe4) = 0;
      *(float *)((long)param_4 + 0x724) = fVar23;
      FUN_0091ada4(plVar9);
    }
    if ((*(float *)(param_4 + 0x102) != fVar16) || (*(float *)((long)param_4 + 0x814) != 0.0)) {
      *(float *)(param_4 + 0x102) = fVar16;
      *(undefined4 *)((long)param_4 + 0x814) = 0;
      FUN_0091ada4(plVar10);
    }
    if ((*(float *)(param_4 + 0x120) != fVar16 - fVar25) ||
       (*(float *)((long)param_4 + 0x904) != fVar21)) {
      *(float *)(param_4 + 0x120) = fVar16 - fVar25;
      *(float *)((long)param_4 + 0x904) = fVar21;
      FUN_0091ada4(plVar2);
    }
    fVar23 = *(float *)((long)param_4 + 0xb94);
    fVar24 = (float)FUN_00f0e700(plVar11);
    fVar16 = (float)FUN_00f0e700(plVar1);
    fVar25 = *(float *)(param_4 + 0x13e);
    fVar23 = (fVar23 + -0.5) * fVar24 - fVar16 * (*(float *)((long)param_4 + 0xb94) + -0.5);
    if ((fVar25 != fVar23) ||
       (fVar24 = *(float *)((long)param_4 + 0x9f4), fVar24 != fVar21 + fVar20)) {
      *(float *)(param_4 + 0x13e) = fVar23;
      *(float *)((long)param_4 + 0x9f4) = fVar21 + fVar20;
      FUN_0091ada4(plVar1);
      fVar25 = *(float *)(param_4 + 0x13e);
      fVar24 = *(float *)((long)param_4 + 0x9f4);
    }
    fVar23 = -fVar25;
    FUN_00f0e700(plVar1);
    fVar25 = fVar25 - fVar24;
    if ((*(float *)(param_4 + 0x1f) == fVar23) && (*(float *)((long)param_4 + 0xfc) == fVar25))
    goto switchD_00b16a14_default;
    *(float *)(param_4 + 0x1f) = fVar23;
    break;
  case 2:
    plVar3 = param_4 + 0x28;
    FUN_00f0e578(plVar3,"arrow_bg_corner");
    fVar21 = (float)uVar22;
    if ((*(float *)(param_4 + 0x32) != 1.0) || (*(float *)((long)param_4 + 0x194) != 1.0)) {
      lVar17 = NEON_fmov(0x3f800000,4);
      param_4[0x32] = lVar17;
      FUN_0091ada4(plVar3);
    }
    plVar4 = param_4 + 0x46;
    *(byte *)(param_4 + 0x43) = *(byte *)(param_4 + 0x43) & 0xfc | 1;
    FUN_00f0e578(plVar4,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x50) != 0.0) || (*(float *)((long)param_4 + 0x284) != 1.0)) {
      param_4[0x50] = 0x3f80000000000000;
      FUN_0091ada4(plVar4);
    }
    plVar5 = param_4 + 100;
    *(byte *)(param_4 + 0x61) = *(byte *)(param_4 + 0x61) & 0xfc;
    FUN_00f0e578(plVar5,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x6e) != 0.0) || (*(float *)((long)param_4 + 0x374) != 0.0)) {
      param_4[0x6e] = 0;
      FUN_0091ada4(plVar5);
    }
    plVar6 = param_4 + 0x82;
    *(byte *)(param_4 + 0x7f) = *(byte *)(param_4 + 0x7f) & 0xfc | 2;
    FUN_00f0e578(plVar6,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x8c) != 1.0) || (*(float *)((long)param_4 + 0x464) != 0.0)) {
      param_4[0x8c] = 0x3f800000;
      FUN_0091ada4(plVar6);
    }
    plVar7 = param_4 + 0xa0;
    *(byte *)(param_4 + 0x9d) = *(byte *)(param_4 + 0x9d) | 3;
    FUN_00f0e578(plVar7,"arrow_bg_left_edge");
    if ((*(float *)(param_4 + 0xaa) != 1.0) || (*(float *)((long)param_4 + 0x554) != 1.0)) {
      lVar17 = NEON_fmov(0x3f800000,4);
      param_4[0xaa] = lVar17;
      FUN_0091ada4(plVar7);
    }
    plVar8 = param_4 + 0xbe;
    *(byte *)(param_4 + 0xbb) = *(byte *)(param_4 + 0xbb) & 0xfc | 1;
    FUN_00f0e578(plVar8,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 200) != 0.5) || (*(float *)((long)param_4 + 0x644) != 1.0)) {
      param_4[200] = 0x3f8000003f000000;
      FUN_0091ada4(plVar8);
    }
    plVar9 = param_4 + 0xdc;
    *(byte *)(param_4 + 0xd9) = *(byte *)(param_4 + 0xd9) & 0xfc;
    FUN_00f0e578(plVar9,"arrow_bg_left_edge");
    if ((*(float *)(param_4 + 0xe6) != 0.0) || (*(float *)((long)param_4 + 0x734) != 0.5)) {
      param_4[0xe6] = 0x3f00000000000000;
      FUN_0091ada4(plVar9);
    }
    plVar10 = param_4 + 0xfa;
    *(byte *)(param_4 + 0xf7) = *(byte *)(param_4 + 0xf7) & 0xfc;
    FUN_00f0e578(plVar10,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 0x104) != 0.5) || (*(float *)((long)param_4 + 0x824) != 0.0)) {
      param_4[0x104] = 0x3f000000;
      FUN_0091ada4(plVar10);
    }
    *(byte *)(param_4 + 0x115) = *(byte *)(param_4 + 0x115) & 0xfc | 2;
    FUN_00f0e578(plVar2,"arrow_bg_left_edge");
    if ((*(float *)(param_4 + 0x122) != 1.0) || (*(float *)((long)param_4 + 0x914) != 0.0)) {
      param_4[0x122] = 0x3f800000;
      FUN_0091ada4(plVar2);
    }
    *(byte *)(param_4 + 0x133) = *(byte *)(param_4 + 0x133) & 0xfc | 1;
    FUN_00f0e578(plVar1,"arrow_bg_arrow_right");
    if ((*(float *)(param_4 + 0x140) != 0.0) || (*(float *)((long)param_4 + 0xa04) != 0.5)) {
      param_4[0x140] = 0x3f00000000000000;
      FUN_0091ada4(plVar1);
    }
    *(byte *)(param_4 + 0x151) = *(byte *)(param_4 + 0x151) & 0xfc;
    uVar18 = FUN_00f0e700(plVar3);
    fVar16 = (float)FUN_00f0eac0(plVar1);
    fVar25 = (float)uVar18;
    fVar16 = fVar16 - fVar25 * 0.5;
    fVar20 = fVar16 + fVar24;
    fVar16 = fVar16 / fVar20;
    FUN_00f0e700(plVar1);
    local_b0 = fVar16 + 1.0;
    fStack_ac = param_1 - (fVar20 * (*(float *)((long)param_4 + 0xb94) + -0.5)) / fVar23;
    (**(code **)(*param_4 + 0x28))(param_4,&local_b0);
    plVar11 = param_4 + 0x154;
    fVar20 = fVar23 - (fVar21 + fVar21);
    FUN_00f13f08(fVar24 - (fVar25 + fVar25),fVar20,plVar11);
    FUN_00f0e700(plVar11);
    FUN_00f13f08(uVar18,plVar9);
    FUN_00f0e700(plVar11);
    fVar16 = fVar20;
    FUN_00f0e700(plVar1);
    fVar20 = (fVar20 - fVar16) * (1.0 - *(float *)((long)param_4 + 0xb94));
    FUN_00f13f08(uVar18,fVar20,plVar7);
    FUN_00f0e700(plVar11);
    fVar16 = fVar20;
    FUN_00f0e700(plVar1);
    FUN_00f13f08(uVar18,*(float *)((long)param_4 + 0xb94) * (fVar20 - fVar16),plVar2);
    FUN_00f0e700(plVar11);
    fVar16 = fVar21;
    FUN_00f13f08(plVar8);
    local_b0 = (float)FUN_00f0e700(plVar8);
    fStack_ac = fVar16;
    FUN_00f13f18(plVar10,&local_b0);
    fVar20 = fVar24 * 0.5;
    fVar25 = fVar23 * 0.5;
    if ((*(float *)(param_4 + 0x30) != fVar20) || (*(float *)((long)param_4 + 0x184) != fVar25)) {
      *(float *)(param_4 + 0x30) = fVar20;
      *(float *)((long)param_4 + 0x184) = fVar25;
      FUN_0091ada4(plVar3);
    }
    fVar24 = fVar24 * -0.5;
    if ((*(float *)(param_4 + 0x4e) != fVar24) || (*(float *)((long)param_4 + 0x274) != fVar25)) {
      *(float *)(param_4 + 0x4e) = fVar24;
      *(float *)((long)param_4 + 0x274) = fVar25;
      FUN_0091ada4(plVar4);
    }
    fVar23 = fVar23 * -0.5;
    if ((*(float *)(param_4 + 0x6c) != fVar24) || (*(float *)((long)param_4 + 0x364) != fVar23)) {
      *(float *)(param_4 + 0x6c) = fVar24;
      *(float *)((long)param_4 + 0x364) = fVar23;
      FUN_0091ada4(plVar5);
    }
    if ((*(float *)(param_4 + 0x8a) != fVar20) || (*(float *)((long)param_4 + 0x454) != fVar23)) {
      *(float *)(param_4 + 0x8a) = fVar20;
      *(float *)((long)param_4 + 0x454) = fVar23;
      FUN_0091ada4(plVar6);
    }
    if ((*(float *)(param_4 + 0xa8) != fVar20) ||
       (fVar16 = *(float *)((long)param_4 + 0x544), fVar16 != fVar25 - fVar21)) {
      *(float *)(param_4 + 0xa8) = fVar20;
      *(float *)((long)param_4 + 0x544) = fVar25 - fVar21;
      FUN_0091ada4(plVar7);
    }
    if ((*(float *)(param_4 + 0xc6) != 0.0) || (*(float *)((long)param_4 + 0x634) != fVar25)) {
      *(undefined4 *)(param_4 + 0xc6) = 0;
      *(float *)((long)param_4 + 0x634) = fVar25;
      FUN_0091ada4(plVar8);
    }
    if ((*(float *)(param_4 + 0x102) != 0.0) || (*(float *)((long)param_4 + 0x814) != fVar23)) {
      *(undefined4 *)(param_4 + 0x102) = 0;
      *(float *)((long)param_4 + 0x814) = fVar23;
      FUN_0091ada4(plVar10);
    }
    if ((*(float *)(param_4 + 0xe4) != fVar24) || (*(float *)((long)param_4 + 0x724) != 0.0)) {
      *(float *)(param_4 + 0xe4) = fVar24;
      *(undefined4 *)((long)param_4 + 0x724) = 0;
      FUN_0091ada4(plVar9);
    }
    if ((*(float *)(param_4 + 0x120) != fVar20) ||
       (fVar16 = *(float *)((long)param_4 + 0x904), fVar16 != fVar23 + fVar21)) {
      *(float *)(param_4 + 0x120) = fVar20;
      *(float *)((long)param_4 + 0x904) = fVar23 + fVar21;
      FUN_0091ada4(plVar2);
    }
    fVar23 = *(float *)((long)param_4 + 0xb94);
    FUN_00f0e700(plVar11);
    fVar23 = (fVar23 + -0.5) * fVar16;
    FUN_00f0e700(plVar1);
    fVar24 = *(float *)(param_4 + 0x13e);
    fVar23 = fVar23 - fVar16 * (*(float *)((long)param_4 + 0xb94) + -0.5);
    if ((fVar24 != fVar20 - fVar21) || (*(float *)((long)param_4 + 0x9f4) != fVar23)) {
      *(float *)(param_4 + 0x13e) = fVar20 - fVar21;
      *(float *)((long)param_4 + 0x9f4) = fVar23;
      FUN_0091ada4(plVar1);
      fVar24 = *(float *)(param_4 + 0x13e);
    }
    fVar23 = (float)FUN_00f0e700(plVar1);
    fVar21 = *(float *)(param_4 + 0x1f);
    fVar16 = *(float *)((long)param_4 + 0x9f4);
    fVar23 = -fVar24 - fVar23;
    goto LAB_00b17c94;
  case 3:
    plVar3 = param_4 + 0x28;
    FUN_00f0e578(plVar3,"arrow_bg_corner");
    fVar21 = (float)uVar22;
    if ((*(float *)(param_4 + 0x32) != 0.0) || (*(float *)((long)param_4 + 0x194) != 0.0)) {
      param_4[0x32] = 0;
      FUN_0091ada4(plVar3);
    }
    plVar4 = param_4 + 0x46;
    *(byte *)(param_4 + 0x43) = *(byte *)(param_4 + 0x43) & 0xfc | 2;
    FUN_00f0e578(plVar4,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x50) != 1.0) || (*(float *)((long)param_4 + 0x284) != 0.0)) {
      param_4[0x50] = 0x3f800000;
      FUN_0091ada4(plVar4);
    }
    plVar5 = param_4 + 100;
    *(byte *)(param_4 + 0x61) = *(byte *)(param_4 + 0x61) | 3;
    FUN_00f0e578(plVar5,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x6e) != 1.0) || (*(float *)((long)param_4 + 0x374) != 1.0)) {
      lVar17 = NEON_fmov(0x3f800000,4);
      param_4[0x6e] = lVar17;
      FUN_0091ada4(plVar5);
    }
    plVar6 = param_4 + 0x82;
    *(byte *)(param_4 + 0x7f) = *(byte *)(param_4 + 0x7f) & 0xfc | 1;
    FUN_00f0e578(plVar6,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x8c) != 0.0) || (*(float *)((long)param_4 + 0x464) != 1.0)) {
      param_4[0x8c] = 0x3f80000000000000;
      FUN_0091ada4(plVar6);
    }
    plVar7 = param_4 + 0xa0;
    *(byte *)(param_4 + 0x9d) = *(byte *)(param_4 + 0x9d) & 0xfc;
    FUN_00f0e578(plVar7,"arrow_bg_left_edge");
    if ((*(float *)(param_4 + 0xaa) != 0.0) || (*(float *)((long)param_4 + 0x554) != 0.0)) {
      param_4[0xaa] = 0;
      FUN_0091ada4(plVar7);
    }
    plVar8 = param_4 + 0xbe;
    *(byte *)(param_4 + 0xbb) = *(byte *)(param_4 + 0xbb) & 0xfc;
    FUN_00f0e578(plVar8,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 200) != 0.5) || (*(float *)((long)param_4 + 0x644) != 0.0)) {
      param_4[200] = 0x3f000000;
      FUN_0091ada4(plVar8);
    }
    plVar9 = param_4 + 0xdc;
    *(byte *)(param_4 + 0xd9) = *(byte *)(param_4 + 0xd9) & 0xfc | 2;
    FUN_00f0e578(plVar9,"arrow_bg_left_edge");
    if ((*(float *)(param_4 + 0xe6) != 1.0) || (*(float *)((long)param_4 + 0x734) != 0.5)) {
      param_4[0xe6] = 0x3f0000003f800000;
      FUN_0091ada4(plVar9);
    }
    plVar10 = param_4 + 0xfa;
    *(byte *)(param_4 + 0xf7) = *(byte *)(param_4 + 0xf7) & 0xfc | 1;
    FUN_00f0e578(plVar10,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 0x104) != 0.5) || (*(float *)((long)param_4 + 0x824) != 1.0)) {
      param_4[0x104] = 0x3f8000003f000000;
      FUN_0091ada4(plVar10);
    }
    *(byte *)(param_4 + 0x115) = *(byte *)(param_4 + 0x115) & 0xfc;
    FUN_00f0e578(plVar2,"arrow_bg_left_edge");
    if ((*(float *)(param_4 + 0x122) != 0.0) || (*(float *)((long)param_4 + 0x914) != 1.0)) {
      param_4[0x122] = 0x3f80000000000000;
      FUN_0091ada4(plVar2);
    }
    *(byte *)(param_4 + 0x133) = *(byte *)(param_4 + 0x133) & 0xfc;
    FUN_00f0e578(plVar1,"arrow_bg_arrow_right");
    if ((*(float *)(param_4 + 0x140) != 1.0) || (*(float *)((long)param_4 + 0xa04) != 0.5)) {
      param_4[0x140] = 0x3f0000003f800000;
      FUN_0091ada4(plVar1);
    }
    *(byte *)(param_4 + 0x151) = *(byte *)(param_4 + 0x151) & 0xfc | 1;
    uVar18 = FUN_00f0e700(plVar3);
    fVar16 = (float)FUN_00f0eac0(plVar1);
    fVar25 = (float)uVar18;
    fVar16 = fVar16 + fVar25 * -0.5;
    fVar20 = fVar16 + fVar24;
    fVar16 = fVar16 / fVar20;
    FUN_00f0e700(plVar1);
    local_b0 = 0.0 - fVar16;
    fStack_ac = param_1 - (fVar20 * (*(float *)((long)param_4 + 0xb94) + -0.5)) / fVar23;
    (**(code **)(*param_4 + 0x28))(param_4,&local_b0);
    plVar11 = param_4 + 0x154;
    fVar20 = fVar23 - (fVar21 + fVar21);
    FUN_00f13f08(fVar24 - (fVar25 + fVar25),fVar20,plVar11);
    FUN_00f0e700(plVar11);
    FUN_00f13f08(uVar18,plVar9);
    FUN_00f0e700(plVar11);
    fVar16 = fVar20;
    FUN_00f0e700(plVar1);
    fVar20 = (fVar20 - fVar16) * (1.0 - *(float *)((long)param_4 + 0xb94));
    FUN_00f13f08(uVar18,fVar20,plVar2);
    FUN_00f0e700(plVar11);
    fVar16 = fVar20;
    FUN_00f0e700(plVar1);
    FUN_00f13f08(uVar18,*(float *)((long)param_4 + 0xb94) * (fVar20 - fVar16),plVar7);
    FUN_00f0e700(plVar11);
    fVar16 = fVar21;
    FUN_00f13f08(plVar8);
    local_b0 = (float)FUN_00f0e700(plVar8);
    fStack_ac = fVar16;
    FUN_00f13f18(plVar10,&local_b0);
    fVar20 = fVar24 * -0.5;
    fVar26 = fVar23 * -0.5;
    if ((*(float *)(param_4 + 0x30) != fVar20) || (*(float *)((long)param_4 + 0x184) != fVar26)) {
      *(float *)(param_4 + 0x30) = fVar20;
      *(float *)((long)param_4 + 0x184) = fVar26;
      FUN_0091ada4(plVar3);
    }
    fVar24 = fVar24 * 0.5;
    if ((*(float *)(param_4 + 0x4e) != fVar24) || (*(float *)((long)param_4 + 0x274) != fVar26)) {
      *(float *)(param_4 + 0x4e) = fVar24;
      *(float *)((long)param_4 + 0x274) = fVar26;
      FUN_0091ada4(plVar4);
    }
    fVar23 = fVar23 * 0.5;
    if ((*(float *)(param_4 + 0x6c) != fVar24) || (*(float *)((long)param_4 + 0x364) != fVar23)) {
      *(float *)(param_4 + 0x6c) = fVar24;
      *(float *)((long)param_4 + 0x364) = fVar23;
      FUN_0091ada4(plVar5);
    }
    if ((*(float *)(param_4 + 0x8a) != fVar20) || (*(float *)((long)param_4 + 0x454) != fVar23)) {
      *(float *)(param_4 + 0x8a) = fVar20;
      *(float *)((long)param_4 + 0x454) = fVar23;
      FUN_0091ada4(plVar6);
    }
    if ((*(float *)(param_4 + 0xa8) != fVar20) ||
       (fVar16 = *(float *)((long)param_4 + 0x544), fVar16 != fVar26 + fVar21)) {
      *(float *)(param_4 + 0xa8) = fVar20;
      *(float *)((long)param_4 + 0x544) = fVar26 + fVar21;
      FUN_0091ada4(plVar7);
    }
    if ((*(float *)(param_4 + 0xc6) != 0.0) || (*(float *)((long)param_4 + 0x634) != fVar26)) {
      *(undefined4 *)(param_4 + 0xc6) = 0;
      *(float *)((long)param_4 + 0x634) = fVar26;
      FUN_0091ada4(plVar8);
    }
    if ((*(float *)(param_4 + 0x102) != 0.0) || (*(float *)((long)param_4 + 0x814) != fVar23)) {
      *(undefined4 *)(param_4 + 0x102) = 0;
      *(float *)((long)param_4 + 0x814) = fVar23;
      FUN_0091ada4(plVar10);
    }
    if ((*(float *)(param_4 + 0xe4) != fVar24) || (*(float *)((long)param_4 + 0x724) != 0.0)) {
      *(float *)(param_4 + 0xe4) = fVar24;
      *(undefined4 *)((long)param_4 + 0x724) = 0;
      FUN_0091ada4(plVar9);
    }
    if ((*(float *)(param_4 + 0x120) != fVar20) ||
       (fVar16 = *(float *)((long)param_4 + 0x904), fVar16 != fVar23 - fVar21)) {
      *(float *)(param_4 + 0x120) = fVar20;
      *(float *)((long)param_4 + 0x904) = fVar23 - fVar21;
      FUN_0091ada4(plVar2);
    }
    fVar23 = *(float *)((long)param_4 + 0xb94);
    FUN_00f0e700(plVar11);
    fVar23 = (fVar23 + -0.5) * fVar16;
    FUN_00f0e700(plVar1);
    fVar24 = *(float *)(param_4 + 0x13e);
    fVar23 = fVar23 - fVar16 * (*(float *)((long)param_4 + 0xb94) + -0.5);
    if ((fVar24 != fVar20 + fVar25) || (*(float *)((long)param_4 + 0x9f4) != fVar23)) {
      *(float *)(param_4 + 0x13e) = fVar20 + fVar25;
      *(float *)((long)param_4 + 0x9f4) = fVar23;
      FUN_0091ada4(plVar1);
      fVar24 = *(float *)(param_4 + 0x13e);
    }
    fVar23 = (float)FUN_00f0e700(plVar1);
    fVar21 = *(float *)(param_4 + 0x1f);
    fVar16 = *(float *)((long)param_4 + 0x9f4);
    fVar23 = fVar23 - fVar24;
LAB_00b17c94:
    if ((fVar21 == fVar23) && (*(float *)((long)param_4 + 0xfc) == -fVar16))
    goto switchD_00b16a14_default;
    *(float *)(param_4 + 0x1f) = fVar23;
    *(float *)((long)param_4 + 0xfc) = -fVar16;
    goto LAB_00b182fc;
  default:
    goto switchD_00b16a14_default;
  }
  *(float *)((long)param_4 + 0xfc) = fVar25;
LAB_00b182fc:
  FUN_0091ada4(param_4 + 0x17);
switchD_00b16a14_default:
  if (*(long *)(lVar13 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

