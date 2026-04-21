// functions/00b31 — 2 functions
#include "libGameKindred.h"




void FUN_00b315d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  undefined8 local_a0;
  long local_98;
  
  lVar8 = tpidr_el0;
  local_98 = *(long *)(lVar8 + 0x28);
  FUN_00f00298(&fStack_a4,&local_a8);
  fVar11 = 120.0;
  FUN_00f13f08(0x4491a000,param_1 + 0x1700);
  if ((*(float *)(param_1 + 0x1a10) != 100.0) ||
     (fVar11 = 60.0, *(float *)(param_1 + 0x1a14) != 60.0)) {
    *(undefined8 *)(param_1 + 0x1a10) = 0x4270000042c80000;
    FUN_0091ada4(param_1 + 0x19d0);
  }
  local_a0 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x19d0) + 0x28))(param_1 + 0x19d0,&local_a0);
  lVar1 = param_1 + 0x20f8;
  if (*(float *)(param_1 + 0x213c) != 120.0) {
    *(undefined4 *)(param_1 + 0x213c) = 0x42f00000;
    FUN_0091ada4(lVar1);
  }
  if ((*(byte *)(param_1 + 0x2204) >> 2 & 1) == 0) {
    fVar12 = 30.0;
    goto LAB_00b31740;
  }
  lVar2 = param_1 + 0x2180;
  if (*(float *)(param_1 + 0x21c0) == 100.0) {
    fVar12 = 30.0;
    fVar11 = 30.0;
    if (*(float *)(param_1 + 0x21c4) != 30.0) goto LAB_00b31700;
  }
  else {
LAB_00b31700:
    fVar12 = fVar11;
    *(undefined8 *)(param_1 + 0x21c0) = 0x41f0000042c80000;
    FUN_0091ada4(lVar2);
  }
  FUN_00f0dad0(0x44714000,lVar2,1);
  FUN_00f0d4e0(lVar2);
  fVar11 = 30.0;
  fVar12 = fVar12 + 10.0 + 30.0;
LAB_00b31740:
  lVar2 = param_1 + 0x22b0;
  if ((*(float *)(param_1 + 0x22f0) != 100.0) || (*(float *)(param_1 + 0x22f4) != fVar12)) {
    *(undefined4 *)(param_1 + 0x22f0) = 0x42c80000;
    *(float *)(param_1 + 0x22f4) = fVar12;
    FUN_0091ada4(lVar2);
  }
  FUN_00f0dad0(0x44714000,lVar2,1);
  FUN_00f0d4e0(lVar2);
  fVar12 = fVar12 + fVar11 + 64.0;
  lVar2 = param_1 + 0x23e0;
  if ((*(byte *)(param_1 + 0x2464) >> 2 & 1) != 0) {
    if ((*(float *)(param_1 + 0x2420) != 100.0) || (*(float *)(param_1 + 0x2424) != fVar12)) {
      *(undefined4 *)(param_1 + 0x2420) = 0x42c80000;
      *(float *)(param_1 + 0x2424) = fVar12;
      FUN_0091ada4(lVar2);
    }
    fVar11 = -1.0;
    FUN_00abc380(0x44714000,lVar2);
    fVar12 = fVar12 + 180.0;
  }
  if ((*(byte *)(param_1 + 0x415c) >> 2 & 1) != 0) {
    if ((*(float *)(param_1 + 0x4118) != 100.0) || (*(float *)(param_1 + 0x411c) != fVar12)) {
      *(float *)(param_1 + 0x4118) = 100.0;
      *(float *)(param_1 + 0x411c) = fVar12;
      FUN_0091ada4(param_1 + 0x40d8);
    }
    fVar11 = -1.0;
    FUN_00abc380(0x44714000,param_1 + 0x40d8);
    fVar12 = fVar12 + 220.0;
  }
  if ((*(byte *)(param_1 + 0x76ec) >> 2 & 1) != 0) {
    lVar3 = param_1 + 0x7668;
    local_b0 = (float)FUN_00f01fcc(lVar3,0,0,1,1);
    fStack_ac = fVar11 + 20.0;
    if (local_b0 <= 291.25) {
      local_b0 = 291.25;
    }
    FUN_00f13f18(lVar3,&local_b0);
    fVar12 = fVar12 + -10.0;
    if ((*(float *)(param_1 + 0x76a8) != 100.0) || (*(float *)(param_1 + 0x76ac) != fVar12)) {
      *(float *)(param_1 + 0x76a8) = 100.0;
      *(float *)(param_1 + 0x76ac) = fVar12;
      FUN_0091ada4(lVar3);
    }
    pfVar4 = (float *)(param_1 + 0x7760);
    if ((*pfVar4 != 0.0) || (*(float *)(param_1 + 0x7764) != 54.0)) {
      pfVar4[0] = 0.0;
      pfVar4[1] = 54.0;
      FUN_0091ada4(param_1 + 0x7720);
    }
    local_a0 = 0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x7720) + 0x28))(param_1 + 0x7720,&local_a0);
    pfVar5 = (float *)(param_1 + 0x7850);
    lVar3 = param_1 + 0x7810;
    fVar11 = *pfVar4 + 44.0 + 10.0;
    if ((*pfVar5 != fVar11) || (*(float *)(param_1 + 0x7854) != 62.0)) {
      *pfVar5 = fVar11;
      *(float *)(param_1 + 0x7854) = 62.0;
      FUN_0091ada4(lVar3);
    }
    local_a0 = 0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x7810) + 0x28))(lVar3,&local_a0);
    fVar14 = *pfVar5;
    fVar11 = (float)FUN_00f01c20(lVar3);
    fVar10 = 588.5;
    lVar3 = param_1 + 0x7940;
    fVar11 = fVar14 + fVar11 + 20.0;
    if (fVar11 <= 588.5) {
      fVar11 = 588.5;
    }
    local_b0 = (float)FUN_00f01fcc(lVar3,0,0,1,1);
    if (local_b0 <= 291.25) {
      local_b0 = 291.25;
    }
    fStack_ac = fVar10 + 20.0;
    FUN_00f13f18(lVar3,&local_b0);
    if ((*(float *)(param_1 + 0x7980) != fVar11) || (*(float *)(param_1 + 0x7984) != fVar12)) {
      *(float *)(param_1 + 0x7980) = fVar11;
      *(float *)(param_1 + 0x7984) = fVar12;
      FUN_0091ada4(lVar3);
    }
    pfVar4 = (float *)(param_1 + 0x7a38);
    if ((*pfVar4 != 0.0) || (*(float *)(param_1 + 0x7a3c) != 54.0)) {
      pfVar4[0] = 0.0;
      pfVar4[1] = 54.0;
      FUN_0091ada4(param_1 + 0x79f8);
    }
    local_a0 = 0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x79f8) + 0x28))(param_1 + 0x79f8,&local_a0);
    plVar6 = (long *)(param_1 + 0x7ae8);
    fVar11 = *(float *)(param_1 + 0x7b28);
    fVar12 = *pfVar4 + 44.0 + 10.0;
    if ((fVar11 != fVar12) || (fVar11 = *(float *)(param_1 + 0x7b2c), fVar11 != 62.0)) {
      *(float *)(param_1 + 0x7b28) = fVar12;
      *(float *)(param_1 + 0x7b2c) = 62.0;
      FUN_0091ada4(plVar6);
    }
    local_a0 = 0x3f80000000000000;
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_a0);
  }
  iVar7 = *(int *)(param_1 + 0x7c54);
  plVar6 = (long *)(param_1 + 0xb8);
  fVar12 = (float)FUN_00f13e54(plVar6);
  fVar12 = fVar12 * 0.5 + 100.0;
  if (iVar7 == 0) {
    fVar11 = *(float *)(param_1 + 0xf8);
    fVar10 = *(float *)(param_1 + 0x5e14);
    fVar14 = fVar11;
  }
  else {
    fVar13 = *(float *)(param_1 + 0x5e14);
    FUN_00f13e54(param_1 + 0x5dd0);
    fVar10 = fVar11 * 0.5;
    FUN_00f13e54(plVar6);
    fVar14 = *(float *)(param_1 + 0xf8);
    fVar11 = fVar11 * 0.5;
    fVar10 = (fVar13 + fVar10) - fVar11;
  }
  if ((fVar14 != fVar12) || (fVar11 = *(float *)(param_1 + 0xfc), fVar11 != fVar10)) {
    *(float *)(param_1 + 0xf8) = fVar12;
    *(float *)(param_1 + 0xfc) = fVar10;
    FUN_0091ada4(plVar6);
  }
  local_a0 = 0x3f0000003f000000;
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_a0);
  FUN_00f01c54(lVar1,0,0,1,1);
  lVar3 = param_1 + 0x17f0;
  fVar11 = fVar11 + 160.0 + -60.0;
  FUN_00f13f08(0x4491a000,lVar3);
  if (*(float *)(param_1 + 0x1834) != 120.0) {
    *(undefined4 *)(param_1 + 0x1834) = 0x42f00000;
    FUN_0091ada4(lVar3);
  }
  FUN_00f0e700(lVar3);
  if (*(float *)(param_1 + 0x1924) != fVar11 + 120.0) {
    *(float *)(param_1 + 0x1924) = fVar11 + 120.0;
    FUN_0091ada4(param_1 + 0x18e0);
  }
  fVar11 = 60.0;
  FUN_00f13f08(0x4491a000,param_1 + 0x18e0);
  fVar12 = fStack_a4 * 0.5 + -582.5;
  FUN_00f01c54(lVar1,0,0,1,1);
  fVar11 = local_a8 * 0.5 + fVar11 * -0.75;
  if ((*(float *)(param_1 + 0x16b8) != fVar12) || (*(float *)(param_1 + 0x16bc) != fVar11)) {
    *(float *)(param_1 + 0x16b8) = fVar12;
    *(float *)(param_1 + 0x16bc) = fVar11;
    FUN_0091ada4(param_1 + 0x1678);
  }
  local_a0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1678) + 0x28))(param_1 + 0x1678,&local_a0);
  FUN_00f07940(0,0xc2200000,param_1 + 0x1b00,2,lVar2,1);
  uVar9 = FUN_0093dbe8();
  if ((uVar9 & 1) != 0) {
    FUN_00f07940(0xc3480000,0x43dc0000,plVar6,6,lVar2,6);
    FUN_00f07940(0x43480000,0x43dc0000,param_1 + 0x5dd0,6,lVar2,6);
  }
  if (*(long *)(lVar8 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b31dec(long param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0093dbe8();
  if ((uVar3 & 1) == 0) {
    FUN_008fce60(param_1 + 0x7c38,param_2);
    *(int *)(param_1 + 0x7c54) = *param_3;
    lVar1 = param_1 + 0x5dd0;
    if (*param_3 == 0) {
      FUN_00ab74fc(0,0,lVar1);
      *(uint *)(param_1 + 0x7414) = *(uint *)(param_1 + 0x7414) & 0xfffffffb;
    }
    else {
      FUN_00ab74fc(0,0x41f00000,lVar1);
      FUN_00ab7628(0x43133333,lVar1);
      FUN_00e70510(&local_60);
      FUN_00e70e18(&local_60,&DAT_01bb6d43,*param_3);
      lVar1 = param_1 + 0x7448;
      FUN_00f0d75c(lVar1,&local_60);
      fVar4 = (float)FUN_00f0e700(param_1 + 0x7578);
      fVar5 = *(float *)(param_1 + 0x75bc) + -3.0;
      if ((*(float *)(param_1 + 0x7488) != fVar4) || (*(float *)(param_1 + 0x748c) != fVar5)) {
        *(float *)(param_1 + 0x7488) = fVar4;
        *(float *)(param_1 + 0x748c) = fVar5;
        FUN_0091ada4(lVar1);
      }
      local_50 = 0x3f00000000000000;
      (**(code **)(*(long *)(param_1 + 0x7448) + 0x28))(lVar1,&local_50);
      lVar1 = param_1 + 0x7390;
      fVar4 = (float)FUN_00f01c54(lVar1,0,0,1,1);
      FUN_00f01c54(lVar1,0,0,1,1);
      fVar5 = fVar5 * -0.5 + 10.0;
      if ((*(float *)(param_1 + 0x73d0) != fVar4 * -0.5) || (*(float *)(param_1 + 0x73d4) != fVar5))
      {
        *(float *)(param_1 + 0x73d0) = fVar4 * -0.5;
        *(float *)(param_1 + 0x73d4) = fVar5;
        FUN_0091ada4(lVar1);
      }
      local_50 = 0;
      (**(code **)(*(long *)(param_1 + 0x7390) + 0x28))(lVar1,&local_50);
      *(uint *)(param_1 + 0x7414) = *(uint *)(param_1 + 0x7414) | 4;
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
        local_60 = 0;
        local_58 = (void *)0x0;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

