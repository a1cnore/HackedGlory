// functions/00c10 — 6 functions
#include "libGameKindred.h"




void FUN_00c10108(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_b0;
  undefined8 local_a8;
  void *local_a0;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  fVar6 = (float)FUN_00f0e700(param_1 + 0x4f8);
  fVar6 = fVar6 * 0.5;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  if ((param_2 & 1) == 0) {
    fVar8 = fVar6 * fVar6 + -2025.0;
    fVar7 = SQRT(fVar8);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar8);
    }
    local_b0 = CONCAT44(fVar6 - fVar7,fVar6 + -60.0);
    FUN_00c11e70(&local_a8,&local_b0);
    fVar10 = fVar6 * fVar6 + -225.0;
    fVar9 = SQRT(fVar10);
    fVar7 = fVar9;
    if (NAN(fVar9)) {
      fVar7 = sqrtf(fVar10);
    }
    local_b0 = CONCAT44(fVar6 - fVar7,fVar6 + -30.0);
    FUN_00c11e70(&local_a8,&local_b0);
    if (NAN(fVar9)) {
      fVar9 = sqrtf(fVar10);
    }
    local_b0 = CONCAT44(fVar6 - fVar9,fVar6);
    FUN_00c11e70(&local_a8,&local_b0);
    fVar7 = SQRT(fVar8);
    fVar9 = fVar6 + 30.0;
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar8);
    }
    fVar6 = fVar6 - fVar7;
  }
  else {
    fVar8 = fVar6 * fVar6 + -3600.0;
    fVar7 = SQRT(fVar8);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar8);
    }
    local_b0 = CONCAT44((fVar6 - fVar7) + -15.0,fVar6 + -75.0);
    FUN_00c11e70(&local_a8,&local_b0);
    fVar10 = fVar6 * fVar6 + -900.0;
    fVar9 = SQRT(fVar10);
    fVar7 = fVar9;
    if (NAN(fVar9)) {
      fVar7 = sqrtf(fVar10);
    }
    local_b0 = CONCAT44((fVar6 - fVar7) + -15.0,fVar6 + -45.0);
    FUN_00c11e70(&local_a8,&local_b0);
    local_b0 = CONCAT44(0xc1700000,fVar6 + -15.0);
    FUN_00c11e70(&local_a8,&local_b0);
    if (NAN(fVar9)) {
      fVar9 = sqrtf(fVar10);
    }
    local_b0 = CONCAT44((fVar6 - fVar9) + -15.0,fVar6 + 15.0);
    FUN_00c11e70(&local_a8,&local_b0);
    fVar7 = SQRT(fVar8);
    fVar9 = fVar6 + 45.0;
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar8);
    }
    fVar6 = (fVar6 - fVar7) + -15.0;
  }
  local_b0 = CONCAT44(fVar6,fVar9);
  FUN_00c11e70(&local_a8,&local_b0);
  if (param_2 - 1 < 3) {
    uVar3 = *(uint *)(&DAT_01bbbb90 + (long)(int)(param_2 - 1) * 4);
  }
  else {
    uVar3 = 0;
    if ((int)param_2 < 1) goto LAB_00c10420;
  }
  lVar4 = (ulong)uVar3 << 3;
  lVar5 = (ulong)(uVar3 + param_2) - (ulong)uVar3;
  do {
    lVar2 = FUN_00a4c67c(param_1 + 0x8f8,1);
    FUN_00f0e548(lVar2,PTR_s_build___InventoryCommon_atlas_02be34e0,"16x16_hero_mastery_star");
    FUN_00f13f08(0x41f00000,0x41f00000,lVar2);
    if ((*(float *)(lVar2 + 0x40) != *(float *)((long)local_a0 + lVar4)) ||
       (*(float *)(lVar2 + 0x44) != *(float *)((long)local_a0 + lVar4 + 4))) {
      *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)((long)local_a0 + lVar4);
      FUN_0091ada4(lVar2);
    }
    local_b0 = lVar2;
    FUN_009d6990(param_1 + 0xc0,&local_b0);
    lVar5 = lVar5 + -1;
    lVar4 = lVar4 + 8;
  } while (lVar5 != 0);
LAB_00c10420:
  *(undefined1 *)(param_1 + 0x9254) = 1;
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c1047c(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long local_a0;
  undefined8 local_90;
  long local_88;
  
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  iVar4 = *(int *)(param_1 + 0x9234);
  if (*(uint *)(param_1 + 0x9238) != 0) {
    local_a0 = 0x4898;
    uVar12 = 0;
    lVar14 = 0x2bd8;
    lVar15 = 0x3538;
    lVar16 = 0x5478;
    lVar10 = 0x3e98;
    lVar9 = 0x3ee4;
    lVar13 = 0x54fc;
    lVar11 = 0x1f08;
    do {
      FUN_00f13f08(0x42f39ce7,0x42f39ce7,param_1 + lVar11);
      FUN_00f13f08(0x42f39ce7,0x42f39ce7,param_1 + lVar14);
      FUN_00f13f08(0x42f39ce7,0x42f39ce7,param_1 + lVar15);
      FUN_00f13f08(0x42fb642c,0x42fb642c,param_1 + lVar16);
      fVar17 = (float)FUN_00f0eaf4(param_1 + lVar15);
      fVar17 = 121.80645 / fVar17;
      if ((*(float *)(param_1 + lVar9 + -4) != fVar17) || (*(float *)(param_1 + lVar9) != fVar17)) {
        *(float *)(param_1 + lVar9 + -4) = fVar17;
        *(float *)(param_1 + lVar9) = fVar17;
        FUN_0091ada4(param_1 + lVar10);
      }
      local_90 = 0x3f0000003f000000;
      plVar2 = (long *)(param_1 + local_a0);
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_90);
      FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
      lVar3 = param_1 + lVar11;
      FUN_00f07940(0,0,param_1 + lVar10,8,lVar3,8);
      FUN_00f07940(0,0,param_1 + lVar15,8,lVar3,8);
      FUN_00f07940(0,0,plVar2,8,lVar3,8);
      FUN_00f07940(0,0,param_1 + lVar14,8,lVar3,8);
      FUN_00f07940(0,0,param_1 + lVar16,8,lVar3,8);
      *(uint *)(param_1 + lVar13) = *(uint *)(param_1 + lVar13) & 0xffffffbf;
      if (uVar12 != 0) {
        FUN_00f07940(0x43000000,0,lVar3,8,param_1 + (ulong)((int)uVar12 - 1) * 0x148 + 0x1f08,8);
      }
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x148;
      lVar14 = lVar14 + 0xf0;
      lVar15 = lVar15 + 0xf0;
      lVar16 = lVar16 + 0xf0;
      lVar10 = lVar10 + 0x100;
      local_a0 = local_a0 + 0x130;
      lVar9 = lVar9 + 0x100;
      lVar13 = lVar13 + 0xf0;
    } while (uVar12 < *(uint *)(param_1 + 0x9238));
  }
  lVar11 = param_1 + 0x1db0;
  FUN_00f13238(lVar11);
  lVar14 = param_1 + 0x5dd8;
  FUN_00f13f08(0x42b20000,0x42b20000,lVar14);
  lVar15 = param_1 + 0x5f20;
  FUN_00f13f08(0x42b20000,0x42b20000,lVar15);
  FUN_00f13f08(0x42a20000,0x42a20000,param_1 + 0x6010);
  FUN_00f13f08(0x42a20000,0x42a20000,param_1 + 0x6100);
  lVar16 = param_1 + 0x61f0;
  fVar17 = (float)FUN_00f0eaf4(lVar16);
  fVar17 = 81.0 / fVar17;
  if ((*(float *)(param_1 + 0x6238) != fVar17) || (*(float *)(param_1 + 0x623c) != fVar17)) {
    *(float *)(param_1 + 0x6238) = fVar17;
    *(float *)(param_1 + 0x623c) = fVar17;
    FUN_0091ada4(lVar16);
  }
  local_90 = 0x3f0000003f000000;
  lVar10 = param_1 + 0x62f0;
  (**(code **)(*(long *)(param_1 + 0x62f0) + 0x28))(lVar10,&local_90);
  FUN_00f0d378(lVar10,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00f07940(0,0,lVar15,8,lVar14,8);
  FUN_00f07940(0,0,param_1 + 0x6010,8,lVar14,8);
  FUN_00f07940(0,0,param_1 + 0x6100,8,lVar14,8);
  FUN_00f07940(0,0,lVar16,8,lVar14,8);
  FUN_00f07940(0,0,lVar10,8,lVar14,8);
  lVar16 = param_1 + 0x6510;
  if (*(char *)(param_1 + 0x924f) != '\0') {
    FUN_00f13f08(0x42fa0000,0x42fa0000,lVar16);
    FUN_00f0ad74(0x3f000000,0x3f000000,lVar16);
    FUN_00c9ebd0(0x432a745d,0x432a745d,param_1 + 0x6658);
    lVar10 = param_1 + 0x6c68;
    FUN_00f13f08(0x422c0000,0x422c0000,lVar10);
    fVar17 = (float)FUN_00f13e54(lVar16);
    FUN_00f07940(0,0,param_1 + 0x6658,8,lVar16,8);
    fVar18 = 1.0;
    if (iVar4 != 0) {
      fVar18 = -1.0;
    }
    uVar8 = 2;
    if (iVar4 == 0) {
      uVar8 = 3;
    }
    FUN_00f07940(fVar18 * fVar17 * 0.12,-(fVar17 * 0.12),lVar10,8,lVar16,uVar8);
    FUN_00f07940(0,0,param_1 + 0x6d58,8,lVar10,8);
  }
  fVar17 = (float)FUN_00f13e54(lVar11);
  fVar18 = (float)FUN_00f13e54(lVar14);
  fVar19 = (float)FUN_00f13e54(lVar16);
  fVar20 = (float)FUN_00f0e700(param_1 + 0x6420);
  FUN_00f13e54(lVar11);
  FUN_00f13f08(fVar17 + fVar18 + fVar19 + fVar20 + 66.0,param_1 + 0x1cf8);
  pcVar1 = FUN_00c10e04;
  if (iVar4 == 0) {
    uVar6 = 5;
    uVar7 = 5;
  }
  else {
    uVar6 = 7;
    uVar7 = 7;
    pcVar1 = FUN_00c10e80;
  }
  FUN_00f07940(0,0,lVar11,uVar6,param_1 + 0x1cf8,uVar7);
  (*pcVar1)(0x41b00000,0,lVar14,lVar11,5);
  (*pcVar1)(0x41b00000,0,param_1 + 0x6510,lVar15,5);
  (*pcVar1)(0x41b00000,0,param_1 + 0x6420,lVar15,5);
  if (*(long *)(lVar5 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c10ab4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar5 = param_1 + 0x7068;
  fVar7 = (float)FUN_00f0e700(param_1 + 0x7360);
  FUN_00abb218(120.0 / fVar7,(120.0 / fVar7) * 1.5,lVar5);
  local_70 = 0x4240000042400000;
  FUN_00f13f18(param_1 + 0x7540,&local_70);
  lVar4 = param_1 + 0x7660;
  fVar7 = (float)FUN_00f0e700(param_1 + 0x7958);
  FUN_00abb218(120.0 / fVar7,(120.0 / fVar7) * 1.5,lVar4);
  local_70 = 0x4240000042400000;
  FUN_00f13f18(param_1 + 0x7b38,&local_70);
  if (*(float *)(param_1 + 0x7b7c) != 10.0) {
    *(float *)(param_1 + 0x7b7c) = 10.0;
    FUN_0091ada4(param_1 + 0x7b38);
  }
  lVar1 = param_1 + 0x7c58;
  fVar7 = (float)FUN_00f0e700(param_1 + 0x7f50);
  FUN_00abb218(120.0 / fVar7,(120.0 / fVar7) * 1.5,lVar1);
  fVar7 = (float)FUN_00f0e700(param_1 + 0x8130);
  fVar7 = 56.0 / fVar7;
  if ((*(float *)(param_1 + 0x8178) != fVar7) || (*(float *)(param_1 + 0x817c) != fVar7)) {
    *(float *)(param_1 + 0x8178) = fVar7;
    *(float *)(param_1 + 0x817c) = fVar7;
    FUN_0091ada4(param_1 + 0x8130);
  }
  lVar2 = param_1 + 0x8250;
  fVar7 = (float)FUN_00f0e700(param_1 + 0x8548);
  fVar7 = (120.0 / fVar7) * 1.5;
  FUN_00abb218(lVar2);
  FUN_00f07b18(0x41700000,lVar4,3,lVar5,1);
  FUN_00f07b18(0,lVar4,5,lVar5,5);
  FUN_00f07b18(0x41700000,lVar1,3,lVar4,1);
  FUN_00f07b18(0,lVar1,5,lVar4,5);
  FUN_00f07b18(0x41700000,lVar2,3,lVar1,1);
  FUN_00f07b18(0,lVar2,5,lVar1,5);
  lVar5 = *(long *)(param_1 + 0x8938);
  if (lVar5 != 0) {
    uVar8 = FUN_00f13e54(lVar2);
    local_70 = CONCAT44(fVar7,uVar8);
    FUN_00f13f18(lVar5,&local_70);
    plVar6 = *(long **)(param_1 + 0x8938);
    if (*(int *)(param_1 + 0x9234) == 0) {
      lVar4 = *plVar6;
      fVar10 = *(float *)(param_1 + 0x8290);
      lVar5 = 0x8294;
    }
    else {
      lVar4 = *plVar6;
      fVar10 = *(float *)(param_1 + 0x70a8);
      lVar5 = 0x70ac;
    }
    fVar11 = *(float *)(param_1 + lVar5);
    fVar9 = (float)(**(code **)(lVar4 + 0x48))(plVar6);
    fVar10 = fVar10 - fVar9 * 0.5;
    fVar11 = fVar11 - fVar7 * 0.5;
    if ((*(float *)(plVar6 + 8) != fVar10) || (*(float *)((long)plVar6 + 0x44) != fVar11)) {
      *(float *)(plVar6 + 8) = fVar10;
      *(float *)((long)plVar6 + 0x44) = fVar11;
      FUN_0091ada4(plVar6);
    }
  }
  FUN_00f13238(param_1 + 0x6f10);
  FUN_00f13e54(param_1 + 0x9b0);
  FUN_00f0dad0(param_1 + 0x8940,1);
  uVar8 = 5;
  if (*(int *)(param_1 + 0x9234) != 0) {
    uVar8 = 7;
  }
  FUN_00f07940(0,0,param_1 + 0x8940,uVar8,param_1 + 0x6f10,uVar8);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c10e04(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                 )

{
  FUN_00f07b18(-param_1,param_3,1,param_4,3);
  if (param_5 == 6) {
    return;
  }
  FUN_00f07b18(param_2,param_3,param_5,param_4,param_5);
  return;
}




void FUN_00c10e80(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5)

{
  FUN_00f07b18(param_3,3,param_4,1);
  if (param_5 == 6) {
    return;
  }
  FUN_00f07b18(param_2,param_3,param_5,param_4,param_5);
  return;
}




void FUN_00c10ef8(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined4 local_90;
  float fStack_8c;
  float local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  lVar1 = param_3 + 0x8a70;
  fVar10 = (float)FUN_00f01c54(lVar1,0,0,1,1);
  fVar10 = fVar10 + 40.0;
  plVar2 = (long *)(param_3 + 0x8d60);
  FUN_00f13f08(fVar10,param_2 + 0.0,plVar2);
  pfVar3 = (float *)(param_3 + 0x8da0);
  fVar15 = fVar10 * 0.5 + -20.0;
  fVar11 = (param_2 + 0.0) * 0.5;
  if ((*pfVar3 != fVar15) || (*(float *)(param_3 + 0x8da4) != fVar11)) {
    *pfVar3 = fVar15;
    *(float *)(param_3 + 0x8da4) = fVar11;
    FUN_0091ada4(plVar2);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_80);
  uVar5 = *(uint *)(param_3 + 0x9210);
  uVar7 = (ulong)uVar5;
  if (uVar5 != 0) {
    uVar9 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_3 + 0x9218) + uVar9 * 8);
      if (lVar8 != 0) {
        uVar14 = FUN_00f13e54(plVar2);
        FUN_00c0d5c8(uVar14,0x41a00000,lVar8);
        uVar7 = (ulong)*(uint *)(param_3 + 0x9210);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar7);
  }
  if (*(char *)(param_3 + 0x9230) == '\x01') {
    fVar11 = (float)FUN_00f0eac0(param_3 + 0x8c70);
    fVar11 = fVar11 + 15.0;
    *(byte *)(param_3 + 0x8d48) = *(byte *)(param_3 + 0x8d48) | 1;
    fVar12 = (float)FUN_00f0eac0(param_3 + 0x8c70);
    fVar15 = 5.0;
    fVar10 = (fVar10 * -0.5 - fVar12) + 5.0;
  }
  else {
    fVar15 = -5.0;
    fVar11 = 5.0 - fVar10;
    *(byte *)(param_3 + 0x8d48) = *(byte *)(param_3 + 0x8d48) & 0xfe;
    fVar10 = fVar10 * 0.5 + -5.0;
  }
  FUN_00f00298(&uStack_84,&local_88);
  fVar12 = (float)FUN_00c11228(param_3);
  fVar15 = fVar15 + 0.0;
  if ((*(float *)(param_3 + 0x8ab0) != fVar11 + fVar12) || (*(float *)(param_3 + 0x8ab4) != fVar15))
  {
    *(float *)(param_3 + 0x8ab0) = fVar11 + fVar12;
    *(float *)(param_3 + 0x8ab4) = fVar15;
    FUN_0091ada4(lVar1);
  }
  local_90 = FUN_00f13e54(plVar2);
  fStack_8c = fVar15;
  uVar13 = FUN_00f0862c(&local_90,plVar2);
  local_80 = CONCAT44(fVar15,uVar13);
  FUN_00f086f4(&local_80);
  if (local_88 < fVar15) {
    pfVar4 = (float *)(param_3 + 0x8ab4);
    fVar11 = *pfVar4;
    FUN_00f13e54(plVar2);
    fVar11 = fVar11 + fVar15 * -0.8;
    if (*pfVar4 != fVar11) {
      *pfVar4 = fVar11;
      FUN_0091ada4(lVar1);
    }
  }
  if (*(float *)(param_3 + 0x8cb0) != fVar10 + *pfVar3) {
    *(float *)(param_3 + 0x8cb0) = fVar10 + *pfVar3;
    FUN_0091ada4(param_3 + 0x8c70);
  }
  FUN_00f07b18(0,param_3 + 0x8c70,5,param_3 + 0x7660,5);
  FUN_00f13f08(uStack_84,local_88,param_3 + 0x8af8);
  FUN_00f07940(0,0,param_3 + 0x8af8,8,*(undefined8 *)(param_3 + 0x20),8);
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

