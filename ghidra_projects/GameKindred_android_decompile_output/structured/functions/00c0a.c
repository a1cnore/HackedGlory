// functions/00c0a — 25 functions
#include "libGameKindred.h"




void FUN_00c0a1fc(long param_1)

{
  FUN_00b89d24(0x3e800000,param_1 + 0x15400,0,4,1);
  return;
}




void FUN_00c0a21c(long param_1)

{
  if (*(long **)(param_1 + 200) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0a22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 200) + 0x10))();
    return;
  }
  return;
}




void FUN_00c0a234(long param_1)

{
  FUN_00c0c110(param_1,(*(byte *)(param_1 + 0x18bf8) & 1) == 0);
  return;
}




void FUN_00c0a24c(long param_1)

{
  if (*(undefined8 **)(param_1 + 200) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0a25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 200))();
    return;
  }
  return;
}




void FUN_00c0a264(long param_1)

{
  FUN_00c883a8(param_1 + 0x17298);
  *(uint *)(param_1 + 0x244) = *(uint *)(param_1 + 0x244) ^ 4;
  return;
}




void FUN_00c0a2a0(long param_1)

{
  if (*(long **)(param_1 + 200) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0a2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 200) + 8))();
    return;
  }
  return;
}




void FUN_00c0a2b8(long param_1)

{
  *(uint *)(param_1 + 0x1731c) = *(uint *)(param_1 + 0x1731c) & 0xfffffffb;
  *(uint *)(param_1 + 0x244) = *(uint *)(param_1 + 0x244) & 0xfffffffb;
  return;
}




void FUN_00c0a2dc(long param_1)

{
  if (*(long **)(param_1 + 200) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0a2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 200) + 0x50))();
    return;
  }
  return;
}




void FUN_00c0a2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_4);
  FUN_00c0c344(param_1,1,uVar1);
  return;
}




void FUN_00c0a324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_4);
  FUN_00c0c44c(param_1,1,uVar1);
  return;
}




void FUN_00c0a354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_4);
  FUN_00c0c344(param_1,0,uVar1);
  return;
}




void FUN_00c0a384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_4);
  FUN_00c0c44c(param_1,0,uVar1);
  return;
}




void FUN_00c0a3b4(long param_1)

{
  FUN_00b89d24(0x3e800000,param_1 + 0x15400,0,4,1);
  return;
}




void FUN_00c0a3d4(long param_1)

{
  FUN_00b89d24(0x3e800000,param_1 + 0x15400,0,4,1);
  return;
}




void FUN_00c0a3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c0c524(param_1,param_4);
  return;
}




void FUN_00c0a3fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 200);
  if (plVar2 != (long *)0x0) {
    uVar1 = FUN_00f04924(param_4);
                    /* WARNING: Could not recover jumptable at 0x00c0a430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar1);
    return;
  }
  return;
}




void FUN_00c0a440(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = FUN_00f04924(param_4);
  plVar2 = *(long **)(param_1 + 200);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0a478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2,uVar1);
    return;
  }
  return;
}




void FUN_00c0a488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c0c6bc(param_1,param_4);
  return;
}




void FUN_00c0a490(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 200);
  if (plVar2 != (long *)0x0) {
    uVar1 = FUN_00f04924(param_4);
                    /* WARNING: Could not recover jumptable at 0x00c0a4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))(plVar2,uVar1);
    return;
  }
  return;
}




void FUN_00c0a4d4(long param_1)

{
  long *plVar1;
  undefined4 in_w4;
  
  plVar1 = *(long **)(param_1 + 200);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0a4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1,in_w4);
    return;
  }
  return;
}




void FUN_00c0a4f0(long param_1)

{
  if (*(long **)(param_1 + 200) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c0a500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 200) + 0x40))();
    return;
  }
  return;
}




void FUN_00c0a508(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_40 [4];
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + (param_3 & 0xffffffff) * 8 + 0x4050) = param_2;
  uVar2 = FUN_00f02540(param_2);
  if ((uVar2 & 1) == 0) {
    FUN_00f023ec(param_1 + 0x3f98,param_2,1);
  }
  FUN_00f00298(&local_3c,auStack_40);
  FUN_00f13f08(local_3c * 0.5,0x43670000,param_2);
  FUN_00c0a5b0(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c0a5b0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = 0;
  plVar1 = param_1 + 0x80a;
  param_1[0x815] = param_1[0x814];
  param_1[0x818] = param_1[0x817];
  do {
    if (*plVar1 == 0) break;
    if ((long *)param_1[0x815] == (long *)param_1[0x816]) {
      FUN_00c0c94c(param_1 + 0x814,plVar1);
    }
    else {
      *(long *)param_1[0x815] = *plVar1;
      param_1[0x815] = param_1[0x815] + 8;
    }
    uVar2 = uVar2 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar2 < 5);
  uVar2 = 0;
  plVar1 = param_1 + 0x80f;
  do {
    if (*plVar1 == 0) break;
    if ((long *)param_1[0x818] == (long *)param_1[0x819]) {
      FUN_00c0c94c(param_1 + 0x817,plVar1);
    }
    else {
      *(long *)param_1[0x818] = *plVar1;
      param_1[0x818] = param_1[0x818] + 8;
    }
    uVar2 = uVar2 + 1;
    plVar1 = plVar1 + 1;
  } while (uVar2 < 5);
                    /* WARNING: Could not recover jumptable at 0x00c0a6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00c0a6b0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_40 [4];
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + (param_3 & 0xffffffff) * 8 + 0x4078) = param_2;
  uVar2 = FUN_00f02540(param_2);
  if ((uVar2 & 1) == 0) {
    FUN_00f023ec(param_1 + 0x3f98,param_2,1);
  }
  FUN_00f00298(&local_3c,auStack_40);
  FUN_00f13f08(local_3c * 0.5,0x43670000,param_2);
  FUN_00c0a5b0(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c0a758(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong uVar18;
  float fVar19;
  undefined8 uVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float local_90;
  float local_8c;
  long local_88;
  
  lVar10 = tpidr_el0;
  local_88 = *(long *)(lVar10 + 0x28);
  uVar11 = FUN_0092ea9c();
  FUN_00f00298(&local_8c,&local_90);
  uVar21 = (ulong)(uint)local_90;
  FUN_00f13f08(local_8c,param_1);
  uVar18 = 0;
  fVar22 = 0.0;
  do {
    plVar16 = *(long **)(param_1 + 0x4050 + uVar18 * 8);
    if (plVar16 == (long *)0x0) break;
    FUN_00c0f7f8(plVar16);
    (**(code **)(*plVar16 + 0x48))(plVar16);
    uVar18 = uVar18 + 1;
    fVar22 = fVar22 + (float)uVar21 + 8.0;
  } while (uVar18 < 5);
  uVar18 = 0;
  fVar23 = 0.0;
  do {
    plVar16 = *(long **)(param_1 + 0x4078 + uVar18 * 8);
    if (plVar16 == (long *)0x0) break;
    FUN_00c0f7f8(plVar16);
    (**(code **)(*plVar16 + 0x48))(plVar16);
    uVar18 = uVar18 + 1;
    fVar23 = fVar23 + (float)uVar21 + 8.0;
  } while (uVar18 < 5);
  lVar4 = param_1 + 0x3f98;
  if (fVar22 <= fVar23) {
    fVar22 = fVar23;
  }
  FUN_00f13f08(local_8c,fVar22,lVar4);
  FUN_00f07940(0,0,lVar4,8,param_1,8);
  puVar15 = *(undefined8 **)(param_1 + 0x40a0);
  if (puVar15 != *(undefined8 **)(param_1 + 0x40a8)) {
    puVar17 = puVar15;
    while( true ) {
      if (puVar17 == puVar15) {
        uVar12 = 1;
        uVar14 = 4;
        lVar13 = lVar4;
        uVar20 = 0x41000000;
      }
      else {
        uVar12 = 4;
        uVar14 = 6;
        lVar13 = puVar17[-1];
        uVar20 = 0x40c00000;
      }
      FUN_00f07940(0,uVar20,*puVar17,uVar12,lVar13,uVar14);
      puVar17 = puVar17 + 1;
      if (puVar17 == *(undefined8 **)(param_1 + 0x40a8)) break;
      puVar15 = *(undefined8 **)(param_1 + 0x40a0);
    }
  }
  puVar15 = *(undefined8 **)(param_1 + 0x40b8);
  if (puVar15 != *(undefined8 **)(param_1 + 0x40c0)) {
    puVar17 = puVar15;
    while( true ) {
      if (puVar17 == puVar15) {
        uVar12 = 4;
        lVar13 = lVar4;
        uVar20 = 0x41000000;
      }
      else {
        uVar12 = 3;
        lVar13 = puVar17[-1];
        uVar20 = 0x40c00000;
      }
      FUN_00f07940(0,uVar20,*puVar17,0,lVar13,uVar12);
      puVar17 = puVar17 + 1;
      if (puVar17 == *(undefined8 **)(param_1 + 0x40c0)) break;
      puVar15 = *(undefined8 **)(param_1 + 0x40b8);
    }
  }
  fVar22 = (local_90 * 0.5 - *(float *)(param_1 + 0x18bd0) * 0.5) + 3.0;
  *(float *)(param_1 + 0x18bd4) = fVar22;
  if ((*(float *)(param_1 + 0x12848) != 0.5) || (*(float *)(param_1 + 0x1284c) != 0.0)) {
    *(undefined8 *)(param_1 + 0x12848) = 0x3f000000;
    FUN_0091ada4(param_1 + 0x127f8);
    fVar22 = *(float *)(param_1 + 0x18bd4);
  }
  if ((*(float *)(param_1 + 0x12838) != local_8c * 0.5) || (*(float *)(param_1 + 0x1283c) != fVar22)
     ) {
    *(float *)(param_1 + 0x12838) = local_8c * 0.5;
    *(float *)(param_1 + 0x1283c) = fVar22;
    FUN_0091ada4(param_1 + 0x127f8);
  }
  lVar13 = param_1 + 0x2b0;
  FUN_00f13f08(local_8c,0x432b0000,lVar13);
  lVar1 = param_1 + 0x3f8;
  FUN_00f13f08(local_8c,0x432b0000,lVar1);
  pbVar5 = (byte *)(param_1 + 0x18bf8);
  if ((*pbVar5 >> 3 & 1) != 0) {
    FUN_00f13f08(local_8c,0x432b0000,param_1 + 0x540);
  }
  FUN_00f07940(0,0,lVar13,6,lVar4,4);
  uVar18 = 0;
  FUN_00f07940(0,0,lVar1,4,lVar4,6);
  if ((*pbVar5 >> 3 & 1) != 0) {
    uVar18 = 0;
    FUN_00f07940(0,0,param_1 + 0x540,4,lVar4,6);
  }
  FUN_00f080a0(lVar13,4,lVar1,6);
  fVar22 = (float)FUN_00f00274();
  lVar4 = param_1 + 0xd0;
  fVar23 = fVar22 - local_8c;
  if ((*pbVar5 >> 4 & 1) != 0) {
    fVar19 = (float)FUN_00c87c04(param_1 + 0xafb0);
    uVar18 = (ulong)(uint)(fVar19 + 300.0);
  }
  FUN_00f13f08(fVar22 + fVar23,uVar18,lVar4);
  uVar12 = 0;
  FUN_00f07940(0,0,lVar4,8,param_1,8);
  FUN_00f080a0(param_1,4,lVar13,4);
  uVar20 = uVar12;
  FUN_00f080a0(lVar1,6,param_1,6);
  lVar2 = param_1 + 0x5f8;
  FUN_00f13f08(local_8c,uVar12,lVar2);
  lVar3 = param_1 + 0x740;
  FUN_00f13f08(local_8c,uVar20,lVar3);
  FUN_00f13f08(local_8c,0x41a80000,param_1 + 0x888);
  FUN_00f13f08(local_8c,0x41a80000,param_1 + 0x978);
  FUN_00f07940(0,0,param_1 + 0x888,6,lVar2,6);
  FUN_00f07940(0,0,param_1 + 0x978,4,lVar3,4);
  FUN_00f07940(0,0,lVar2,6,lVar4,4);
  FUN_00f07940(0,0,lVar3,4,lVar4,6);
  lVar2 = param_1 + 0xa68;
  FUN_00f13f08(0x42940000,0x42940000,lVar2);
  lVar3 = param_1 + 0xb58;
  FUN_00c8861c(lVar3);
  lVar6 = param_1 + 0x1008;
  FUN_00c8861c(lVar6);
  FUN_00c8861c(param_1 + 0x1718);
  lVar7 = param_1 + 0x1bc8;
  FUN_00c8861c(lVar7);
  FUN_00c8861c(param_1 + 0x2078);
  lVar8 = param_1 + 0x2528;
  FUN_00c8861c(lVar8);
  lVar9 = param_1 + 0x15e8;
  FUN_00f07940(0x42ce0000,0,lVar9,7,lVar13,7);
  FUN_00f07940(0,0,lVar2,8,lVar13,8);
  FUN_00f07940(0,0,lVar9,8,lVar2,8);
  FUN_00f07940(0,0x41500000,param_1 + 0x14b8,4,lVar2,6);
  if ((*(uint *)(param_1 + 0x166c) & 4) != 0) {
    lVar2 = lVar9;
  }
  FUN_00f07940(0xc22c0000,0xc0000000,lVar3,5,lVar2,7);
  FUN_00f07940(0x422c0000,0xbf800000,lVar6,7,lVar2,5);
  FUN_00f07940(0xc2880000,0,lVar7,5,lVar3,7);
  FUN_00f07940(0x42880000,0,lVar8,7,lVar6,5);
  FUN_00f07940(0xc3000000,0,param_1 + 0x1718,5,lVar7,7);
  FUN_00f07940(0x43000000,0,param_1 + 0x2078,7,lVar8,5);
  lVar2 = param_1 + 0x12880;
  FUN_00f07940(0xc1f00000,0xc0000000,lVar2,5,lVar13,5);
  if (((uVar11 & 1) != 0) &&
     ((*(float *)(param_1 + 0x128c8) != 1.5 || (*(float *)(param_1 + 0x128cc) != 1.5)))) {
    uVar20 = NEON_fmov(0x3fc00000,4);
    *(undefined8 *)(param_1 + 0x128c8) = uVar20;
    FUN_0091ada4(lVar2);
  }
  if ((*pbVar5 >> 3 & 1) != 0) {
    FUN_00ab7628(0x42f60000,param_1 + 0x13e40);
    FUN_00f07940(0,0,param_1 + 0x13e40,5,lVar2,5);
  }
  lVar13 = param_1 + 0x29d8;
  FUN_00ab7628(0x42dc0000,lVar13);
  FUN_00ab75d0(0x42000000,0x43be0000,0x44160000,lVar13);
  uVar11 = *(uint *)(param_1 + 0x2a5c);
  if ((uVar11 & 0x7f80) != 0x4980) {
    *(uint *)(param_1 + 0x2a5c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x4980;
    FUN_0091ada4(lVar13);
  }
  FUN_00f07b18(0xc1c00000,lVar13,1,lVar2,3);
  FUN_00f07b18(0,lVar13,5,lVar2,5);
  lVar13 = param_1 + 0x40d0;
  FUN_00ab7628(0x42f60000,lVar13);
  lVar2 = param_1 + 0x5690;
  FUN_00ab7628(0x42f60000,lVar2);
  lVar3 = param_1 + 0x8210;
  FUN_00ab7628(0x42f60000,lVar3);
  lVar6 = param_1 + 0x6c50;
  FUN_00ab7628(0x42f60000,lVar6);
  FUN_00ab75d0(0x42000000,0x43f78000,0x44394000,lVar13);
  FUN_00ab75d0(0x42000000,0x43f78000,0x44394000,lVar2);
  FUN_00ab75d0(0x42000000,0x43f78000,0x44394000,lVar3);
  FUN_00ab75d0(0x42000000,0x43f78000,0x44394000,lVar6);
  FUN_00f07940(0x42000000,0,lVar13,7,lVar1,7);
  FUN_00f07940(0x42000000,0,lVar2,7,lVar13,5);
  FUN_00f07940(0xc2000000,0,lVar3,5,lVar1,5);
  if ((*pbVar5 >> 3 & 1) != 0) {
    lVar13 = param_1 + 0x540;
    FUN_00f07940(0,0,param_1 + 0xad90,8,lVar13,8);
    FUN_00f07b18(0,param_1 + 0xae80,5,lVar13,5);
    fVar22 = (float)FUN_00f13e54(lVar13);
    FUN_00f07940(fVar22 * 0.25,0,param_1 + 0xae80,8,param_1 + 0xad90,5);
  }
  FUN_00f07b18(0xc2000000,lVar6,1,lVar3,3);
  FUN_00f07b18(0,lVar6,5,lVar3,5);
  FUN_00f07940(0,0xc2200000,param_1 + 0x17298,6,lVar2,4);
  FUN_00f13f08(local_8c,local_90,param_1 + 0x1c0);
  param_1 = param_1 + 0xafb0;
  FUN_00f13f08(local_8c,local_90,param_1);
  FUN_00f07940(0,0,param_1,8,lVar4,8);
  FUN_00c876b0(param_1);
  if (*(long *)(lVar10 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

