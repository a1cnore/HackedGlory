// functions/00b68 — 7 functions
#include "libGameKindred.h"




void FUN_00b682c4(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_a8 [2];
  undefined8 local_a0;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  uVar14 = (**(code **)(*param_3 + 0x48))();
  FUN_00f0036c(local_a8,(ulong)local_a8 | 4);
  fVar11 = param_2;
  uVar5 = FUN_0092ead0(uVar14);
  FUN_00f0e700(param_3 + 0x2d);
  param_2 = param_2 - fVar11;
  fVar11 = 4.0;
  if ((uVar5 & 1) == 0) {
    fVar11 = 3.0;
  }
  fVar11 = (float)uVar14 / fVar11;
  plVar10 = param_3 + 0x455;
  if ((*(float *)(param_3 + 0x45d) != 0.0) || (*(float *)((long)param_3 + 0x22ec) != 0.0)) {
    param_3[0x45d] = 0;
    FUN_0091ada4(plVar10);
  }
  local_a0 = 0;
  (**(code **)(param_3[0x455] + 0x28))(plVar10,&local_a0);
  FUN_00f13f08(uVar14,param_2,plVar10);
  lVar6 = FUN_009580b8();
  bVar4 = (uVar5 & 1) == 0;
  fVar21 = 2.0;
  fVar16 = 23.25;
  if (bVar4) {
    fVar21 = 1.5;
  }
  uVar18 = *(undefined4 *)(lVar6 + 0x55e0);
  fVar21 = fVar21 * fVar11;
  if (bVar4) {
    fVar16 = -15.5;
  }
  if ((*(float *)(param_3 + 0x6cd) != fVar21) ||
     (*(float *)((long)param_3 + 0x366c) != param_2 + -10.0)) {
    *(float *)(param_3 + 0x6cd) = fVar21;
    *(float *)((long)param_3 + 0x366c) = param_2 + -10.0;
    FUN_0091ada4(param_3 + 0x6c5);
  }
  fVar19 = (float)NEON_ucvtf(uVar18);
  if ((*(float *)(param_3 + 0x6de) != 0.0) || (*(float *)((long)param_3 + 0x36f4) != fVar16 + -15.5)
     ) {
    *(undefined4 *)(param_3 + 0x6de) = 0;
    *(float *)((long)param_3 + 0x36f4) = fVar16 + -15.5;
    FUN_0091ada4(param_3 + 0x6d6);
  }
  local_a0 = 0;
  (**(code **)(param_3[0x6d6] + 0x28))(param_3 + 0x6d6,&local_a0);
  plVar1 = param_3 + 0x939;
  lVar6 = FUN_009580b8();
  fVar12 = (float)NEON_ucvtf(*(undefined4 *)(lVar6 + 0x55e0));
  FUN_00f13f08(fVar11 * (fVar12 + -1.0) + -2.0,0x41f80000,plVar1);
  if ((*(float *)(param_3 + 0x941) != 0.0) || (*(float *)((long)param_3 + 0x4a0c) != fVar16 + -31.0)
     ) {
    *(float *)(param_3 + 0x941) = 0.0;
    *(float *)((long)param_3 + 0x4a0c) = fVar16 + -31.0;
    FUN_0091ada4(plVar1);
  }
  local_a0 = 0;
  (**(code **)(param_3[0x939] + 0x28))(plVar1,&local_a0);
  lVar6 = FUN_009580b8();
  puVar2 = (uint *)((long)param_3 + 0x4a4c);
  *puVar2 = *puVar2 & 0xfffffff8 | *puVar2 & 3 | (uint)(1 < *(uint *)(lVar6 + 0x55e0)) << 2;
  lVar6 = param_3[0x545];
  lVar7 = FUN_009580b8();
  plVar1 = param_3 + 0x957;
  FUN_00f13f08(fVar11 * (float)(uint)(((int)lVar6 + -1) - *(int *)(lVar7 + 0x55e0)) + -2.0,
               0x40800000,plVar1);
  fVar19 = fVar11 * fVar19 + 4.0;
  if ((*(float *)(param_3 + 0x95f) != fVar19) ||
     (*(float *)((long)param_3 + 0x4afc) != fVar16 + 4.0)) {
    *(float *)(param_3 + 0x95f) = fVar19;
    *(float *)((long)param_3 + 0x4afc) = fVar16 + 4.0;
    FUN_0091ada4(plVar1);
  }
  local_a0 = 0x3f80000000000000;
  (**(code **)(param_3[0x957] + 0x28))(plVar1,&local_a0);
  *(float *)((long)param_3 + 0x297c) = fVar11;
  *(float *)(param_3 + 0x530) = param_2;
  FUN_00f13e54(plVar10);
  fVar17 = fVar19;
  FUN_00f13e54(plVar10);
  fVar12 = 0.525;
  if ((uVar5 & 1) == 0) {
    fVar12 = 0.545;
  }
  uVar5 = FUN_0093dbe8();
  if ((uVar5 & 1) != 0) {
    *(uint *)((long)param_3 + 0x3734) = *(uint *)((long)param_3 + 0x3734) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x36ac) = *(uint *)((long)param_3 + 0x36ac) & 0xfffffffb;
    *puVar2 = *puVar2 & 0xfffffffb;
    *(uint *)((long)param_3 + 0x4b3c) = *(uint *)((long)param_3 + 0x4b3c) & 0xfffffffb;
  }
  uVar9 = (ulong)*(uint *)(param_3 + 0x545);
  fVar12 = fVar12 * fVar17;
  fVar17 = (float)uVar14 * 0.5;
  uVar5 = uVar14;
  if (*(uint *)(param_3 + 0x545) != 0) {
    uVar5 = 0;
    do {
      lVar6 = *(long *)(param_3[0x546] + uVar5 * 8);
      if (lVar6 != 0) {
        fVar22 = fVar17 + fVar11 * (float)(int)uVar5;
        lVar7 = FUN_00965ecc(lVar6);
        fVar20 = 0.0;
        fVar13 = *(float *)(lVar7 + 8) / local_a8[0];
        if ((fVar17 + -500.0 <= fVar13) && (fVar13 <= fVar17 + 500.0)) {
          fVar20 = ABS(fVar13 - fVar17) / -500.0 + 1.0;
        }
        fVar13 = fVar19 * 0.7575 + (fVar12 - fVar19 * 0.7575) * fVar20;
        if ((*(float *)(lVar6 + 0x40) != fVar22) || (*(float *)(lVar6 + 0x44) != fVar13)) {
          *(float *)(lVar6 + 0x40) = fVar22;
          *(float *)(lVar6 + 0x44) = fVar13;
          FUN_0091ada4(lVar6);
        }
        FUN_00b69bc4(fVar20,lVar6);
        uVar9 = (ulong)*(uint *)(param_3 + 0x545);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar9);
    if ((int)uVar9 != 0) {
      uVar5 = uVar14 & 0xffffffff;
      if ((int)param_3[0x547] == 0) goto LAB_00b68868;
      uVar5 = 0;
      do {
        plVar10 = *(long **)(param_3[0x548] + uVar5 * 8);
        if (plVar10 != (long *)0x0) {
          lVar6 = FUN_00965ecc(plVar10);
          fVar13 = *(float *)(lVar6 + 8) / local_a8[0];
          fVar19 = 0.0;
          if ((fVar17 + -500.0 <= fVar13) && (fVar13 <= fVar17 + 500.0)) {
            fVar19 = ABS(fVar13 - fVar17) / -500.0 + 1.0;
          }
          uVar15 = (**(code **)(*plVar10 + 0x48))(plVar10);
          FUN_00f13f08(uVar15,(fVar19 + 1.0) * 31.0,plVar10);
          if (uVar5 == 0) {
            uVar8 = 1;
          }
          else {
            lVar6 = FUN_009580b8();
            uVar8 = (uint)(uVar5 == *(uint *)(lVar6 + 0x55e0));
          }
          fVar19 = (fVar17 + fVar11 * (float)(int)uVar5) - fVar21;
          *(uint *)((long)plVar10 + 0x84) =
               *(uint *)((long)plVar10 + 0x84) & 0xfffffff8 |
               *(uint *)((long)plVar10 + 0x84) & 3 | (uVar8 ^ 1) << 2;
          if ((*(float *)(plVar10 + 8) != fVar19) || (*(float *)((long)plVar10 + 0x44) != fVar16)) {
            *(float *)(plVar10 + 8) = fVar19;
            *(float *)((long)plVar10 + 0x44) = fVar16;
            FUN_0091ada4(plVar10);
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_3 + 0x547));
      uVar9 = (ulong)*(uint *)(param_3 + 0x545);
    }
    uVar5 = uVar14 & 0xffffffff;
  }
LAB_00b68868:
  fVar11 = param_2;
  FUN_00ed02d8((float)uVar5 * (float)uVar9,param_3 + 0x489);
  if ((*(byte *)((long)param_3 + 0x2cac) >> 2 & 1) != 0) {
    FUN_00b01bd0(param_3 + 0x585);
    if ((*(float *)(param_3 + 0x58d) != fVar17) || (*(float *)((long)param_3 + 0x2c6c) != fVar12)) {
      *(float *)(param_3 + 0x58d) = fVar17;
      *(float *)((long)param_3 + 0x2c6c) = fVar12;
      FUN_0091ada4(param_3 + 0x585);
    }
  }
  if ((*(float *)(param_3 + 0x551) != fVar17) || (*(float *)((long)param_3 + 0x2a8c) != fVar12)) {
    *(float *)(param_3 + 0x551) = fVar17;
    *(float *)((long)param_3 + 0x2a8c) = fVar12;
    FUN_0091ada4(param_3 + 0x549);
  }
  if ((*(float *)(param_3 + 0x56f) != fVar17) || (*(float *)((long)param_3 + 0x2b7c) != fVar12)) {
    *(float *)(param_3 + 0x56f) = fVar17;
    *(float *)((long)param_3 + 0x2b7c) = fVar12;
    FUN_0091ada4(param_3 + 0x567);
  }
  plVar10 = param_3 + 0x975;
  fVar21 = (float)FUN_00f01fcc(plVar10,0,0,1,1);
  fVar21 = fVar17 - fVar21 * 0.5;
  FUN_00f01fcc(plVar10,0,0,1,1);
  fVar11 = fVar12 - fVar11 * 0.5;
  if ((*(float *)(param_3 + 0x97d) != fVar21) || (*(float *)((long)param_3 + 0x4bec) != fVar11)) {
    *(float *)(param_3 + 0x97d) = fVar21;
    *(float *)((long)param_3 + 0x4bec) = fVar11;
    FUN_0091ada4(plVar10);
  }
  FUN_00b01bd0(param_3 + 0xa35);
  if ((*(float *)(param_3 + 0xa3d) != fVar17) || (*(float *)((long)param_3 + 0x51ec) != fVar12)) {
    *(float *)(param_3 + 0xa3d) = fVar17;
    *(float *)((long)param_3 + 0x51ec) = fVar12;
    FUN_0091ada4(param_3 + 0xa35);
  }
  fVar11 = -0.5;
  fVar21 = DAT_031339d4 * -0.5;
  FUN_00f01fcc(param_3 + 0xb7b,0,0,1,1);
  if ((*(float *)(param_3 + 0xb83) != fVar21) ||
     (*(float *)((long)param_3 + 0x5c1c) != param_2 - fVar11)) {
    *(float *)(param_3 + 0xb83) = fVar21;
    *(float *)((long)param_3 + 0x5c1c) = param_2 - fVar11;
    FUN_0091ada4(param_3 + 0xb7b);
  }
  lVar6 = FUN_00969248();
  *(uint *)((long)param_3 + 0x2a24) =
       *(uint *)((long)param_3 + 0x2a24) & 0xfffffff8 |
       *(uint *)((long)param_3 + 0x2a24) & 3 | (uint)(*(int *)(lVar6 + 0x38) < 1) << 2;
  if (*(long *)(lVar3 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b68ab0(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  uVar7 = (**(code **)(*param_3 + 0x48))();
  uVar2 = FUN_0092ea9c();
  uVar3 = FUN_0092ead0(uVar7,param_2);
  FUN_00b06464(param_3 + 0x156b);
  FUN_00f07940(0,0,param_3 + 0x156b,4,param_3,4);
  FUN_00f13f08(uVar7,0x43808000,param_3 + 0x2d);
  plVar1 = param_3 + 0x4b;
  FUN_00f13f08(uVar7,0x43808000,plVar1);
  FUN_00f07940(0,0,plVar1,6,param_3,6);
  FUN_00f07940(0,0,param_3 + 0x2d,6,plVar1,6);
  uVar4 = FUN_0093dbe8();
  fVar8 = (float)uVar7;
  if ((uVar4 & 1) == 0) {
    fVar6 = fVar8 * -0.25;
    uVar7 = 6;
    plVar5 = plVar1;
  }
  else {
    uVar7 = 4;
    fVar6 = 0.0;
    plVar5 = param_3;
  }
  FUN_00f07940(fVar6,0,param_3 + 0x74,uVar7,plVar5,8);
  FUN_00f07940(0,0,param_3 + 0x9a,4,param_3 + 0x74,6);
  if ((uVar2 & 1) != 0) {
    FUN_00f0d92c(param_3 + 0x3bf,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
    FUN_00f0d92c(param_3 + 0x403,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  }
  fVar6 = 0.6;
  if ((uVar3 & 1) == 0) {
    fVar6 = 0.8;
  }
  if ((*(float *)(param_3 + 0x38c) != fVar6) || (*(float *)((long)param_3 + 0x1c64) != fVar6)) {
    *(float *)(param_3 + 0x38c) = fVar6;
    *(float *)((long)param_3 + 0x1c64) = fVar6;
    FUN_0091ada4(param_3 + 899);
  }
  plVar5 = param_3 + 0x3bf;
  FUN_00f07940(0,0,plVar5,4,param_3 + 899,6);
  FUN_00f07940(0,0,param_3 + 0x3a1,8,plVar5,8);
  FUN_00f07940(0,0,param_3 + 0x403,4,plVar5,6);
  FUN_00f07940(0,0,param_3 + 0x3e5,8,param_3 + 0x403,6);
  FUN_00f07940(0,0,param_3 + 0x42f,4,plVar5,6);
  FUN_00f13238(param_3 + 0x358);
  FUN_00f07940(fVar8 * -0.125,0,param_3 + 0x358,6,plVar1,6);
  FUN_00f07940(0,0,param_3 + 0xc0,6,plVar1,8);
  FUN_00f07940(0,0,param_3 + 0xe6,4,param_3 + 0xc0,6);
  FUN_00f07940(fVar8 * 0.125,0,param_3 + 0x181,6,plVar1,8);
  FUN_00f07940(0,0,param_3 + 0x1a7,4,param_3 + 0x181,6);
  FUN_00f07940(fVar8 * 0.25,0,param_3 + 0x297,6,plVar1,8);
  FUN_00f07940(0,0,param_3 + 0x2bd,4,param_3 + 0x297,6);
  FUN_00b682c4(param_3);
  return;
}




void FUN_00b68e30(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) == 0) {
    FUN_00b67f8c(param_1,*(undefined4 *)(param_1 + 0xe604));
  }
  else {
    uVar2 = FUN_009b8d90();
    FUN_008fa54c(local_40,"layer_player_profile_prog");
    FUN_009baadc(uVar2,local_40);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b68eb8(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_009580c4();
  if (((uVar1 & 1) != 0) && (lVar2 = FUN_009580b8(), *(char *)(lVar2 + 0x568c) != '\0')) {
    return;
  }
  FUN_00b67cb8(param_1);
  return;
}




void FUN_00b68efc(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00a022b0();
  if ((uVar1 & 1) != 0) {
    FUN_00b67cb8(param_1);
    return;
  }
  FUN_00b68f38(param_1,1);
  return;
}




void FUN_00b68f38(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) == 0) {
    *(uint *)(param_1 + 0x4c2c) = *(uint *)(param_1 + 0x4c2c) & 0xfffffffb;
    FUN_00b16600(param_1 + 0x4ba8);
    lVar3 = 0x4b3c;
    uVar5 = *(uint *)(param_1 + 0x4b3c) | 4;
  }
  else {
    uVar2 = FUN_009580c4();
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_009580b8(), *(char *)(lVar3 + 0x568c) == '\0')) {
      FUN_00b16058(param_1 + 0x4ba8);
      *(uint *)(param_1 + 0x4c2c) = *(uint *)(param_1 + 0x4c2c) | 4;
    }
    *(uint *)(param_1 + 0x4b3c) = *(uint *)(param_1 + 0x4b3c) & 0xfffffffb;
    *(uint *)(param_1 + 0x2cac) = *(uint *)(param_1 + 0x2cac) & 0xfffffffb;
    uVar4 = FUN_009b8d90();
    FUN_008fa54c(local_50,"layer_player_profile_prog");
    FUN_009baadc(uVar4,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    FUN_00b679fc(param_1);
    FUN_008fce60(param_1 + 0xe5e0,&DAT_0320ffa8);
    lVar3 = 0xe604;
    uVar5 = 0xffffffff;
  }
  *(uint *)(param_1 + lVar3) = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b68efc(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00a022b0();
  if ((uVar1 & 1) != 0) {
    FUN_00b67cb8(param_1);
    return;
  }
  FUN_00b68f38(param_1,1);
  return;
}

