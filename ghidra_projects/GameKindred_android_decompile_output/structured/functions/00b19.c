// functions/00b19 — 8 functions
#include "libGameKindred.h"




void FUN_00b192c0(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if ((float)param_1 < 0.0) {
    param_1 = (ulong)(uint)((float)(*(uint *)(param_3 + 0x1c4) >> 7 & 0xff) / 255.0);
  }
  lVar1 = param_3 + 0x140;
  if (0.0 < (float)param_2) {
    uVar3 = FUN_00eff108(param_2,lVar1,param_4,0,2);
    uVar4 = FUN_00efee28(param_1,param_2,0);
    uVar5 = FUN_00acb4f8();
    FUN_00efcea4(uVar5,uVar3,uVar4,0);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,uVar5);
    lVar1 = param_3 + 0x230;
    uVar3 = FUN_00eff108(param_2,lVar1,param_4,0,2);
    uVar4 = FUN_00efee28(param_1,param_2,0);
    uVar5 = FUN_00acb4f8();
    FUN_00efcea4(uVar5,uVar3,uVar4,0);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,uVar5);
    lVar1 = param_3 + 800;
    uVar3 = FUN_00eff108(param_2,lVar1,param_4,0,2);
    uVar4 = FUN_00efee28(param_1,param_2,0);
    uVar5 = FUN_00acb4f8();
    FUN_00efcea4(uVar5,uVar3,uVar4,0);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,uVar5);
    lVar1 = param_3 + 0x410;
    uVar3 = FUN_00eff108(param_2,lVar1,param_4,0,2);
    uVar4 = FUN_00efee28(param_1,param_2,0);
    uVar5 = FUN_00acb4f8();
    FUN_00efcea4(uVar5,uVar3,uVar4,0);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,uVar5);
    lVar1 = param_3 + 0x500;
    uVar3 = FUN_00eff108(param_2,lVar1,param_4,0,2);
    uVar4 = FUN_00efee28(param_1,param_2,0);
    uVar5 = FUN_00acb4f8();
    FUN_00efcea4(uVar5,uVar3,uVar4,0);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,uVar5);
    lVar1 = param_3 + 0x5f0;
    uVar3 = FUN_00eff108(param_2,lVar1,param_4,0,2);
    uVar4 = FUN_00efee28(param_1,param_2,0);
    uVar5 = FUN_00acb4f8();
    FUN_00efcea4(uVar5,uVar3,uVar4,0);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,uVar5);
    lVar1 = param_3 + 0x6e0;
    uVar3 = FUN_00eff108(param_2,lVar1,param_4,0,2);
    uVar4 = FUN_00efee28(param_1,param_2,0);
    uVar5 = FUN_00acb4f8();
    FUN_00efcea4(uVar5,uVar3,uVar4,0);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,uVar5);
    lVar1 = param_3 + 2000;
    uVar3 = FUN_00eff108(param_2,lVar1,param_4,0,2);
    uVar4 = FUN_00efee28(param_1,param_2,0);
    uVar5 = FUN_00acb4f8();
    FUN_00efcea4(uVar5,uVar3,uVar4,0);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,uVar5);
    param_3 = param_3 + 0x9b0;
    uVar3 = FUN_00eff108(param_2,param_3,param_4,0,2);
    uVar4 = FUN_00efee28(param_1,param_2,0);
    uVar5 = FUN_00acb4f8();
    FUN_00efcea4(uVar5,uVar3,uVar4,0);
    FUN_00f01980(param_3);
    FUN_00f022a0(param_3,uVar5);
    return;
  }
  FUN_00f0e670(lVar1,param_4,2);
  FUN_00f0e670(param_3 + 0x230,param_4,2);
  FUN_00f0e670(param_3 + 800,param_4,2);
  FUN_00f0e670(param_3 + 0x410,param_4,2);
  FUN_00f0e670(param_3 + 0x500,param_4,2);
  FUN_00f0e670(param_3 + 0x5f0,param_4,2);
  FUN_00f0e670(param_3 + 0x6e0,param_4,2);
  FUN_00f0e670(param_3 + 2000,param_4,2);
  FUN_00f0e670(param_3 + 0x8c0,param_4,2);
  FUN_00f0e670(param_3 + 0x9b0,param_4,2);
  uVar2 = *(uint *)(param_3 + 0x1c4);
  uVar6 = (uint)((float)param_1 * 255.0);
  if ((uVar2 >> 7 & 0xff) != uVar6) {
    *(uint *)(param_3 + 0x1c4) = uVar2 & 0xffff8000 | uVar2 & 0x7f | (uVar6 & 0xff) << 7;
    FUN_0091ada4(lVar1);
  }
  uVar2 = *(uint *)(param_3 + 0x2b4);
  if ((uVar2 >> 7 & 0xff) != uVar6) {
    *(uint *)(param_3 + 0x2b4) = uVar2 & 0xffff8000 | uVar2 & 0x7f | (uVar6 & 0xff) << 7;
    FUN_0091ada4(param_3 + 0x230);
  }
  uVar2 = *(uint *)(param_3 + 0x3a4);
  if ((uVar2 >> 7 & 0xff) != uVar6) {
    *(uint *)(param_3 + 0x3a4) = uVar2 & 0xffff8000 | uVar2 & 0x7f | (uVar6 & 0xff) << 7;
    FUN_0091ada4(param_3 + 800);
  }
  uVar2 = *(uint *)(param_3 + 0x494);
  if ((uVar2 >> 7 & 0xff) != uVar6) {
    *(uint *)(param_3 + 0x494) = uVar2 & 0xffff8000 | uVar2 & 0x7f | (uVar6 & 0xff) << 7;
    FUN_0091ada4(param_3 + 0x410);
  }
  uVar2 = *(uint *)(param_3 + 0x584);
  if ((uVar2 >> 7 & 0xff) != uVar6) {
    *(uint *)(param_3 + 0x584) = uVar2 & 0xffff8000 | uVar2 & 0x7f | (uVar6 & 0xff) << 7;
    FUN_0091ada4(param_3 + 0x500);
  }
  uVar2 = *(uint *)(param_3 + 0x674);
  if ((uVar2 >> 7 & 0xff) != uVar6) {
    *(uint *)(param_3 + 0x674) = uVar2 & 0xffff8000 | uVar2 & 0x7f | (uVar6 & 0xff) << 7;
    FUN_0091ada4(param_3 + 0x5f0);
  }
  uVar2 = *(uint *)(param_3 + 0x764);
  if ((uVar2 >> 7 & 0xff) != uVar6) {
    *(uint *)(param_3 + 0x764) = uVar2 & 0xffff8000 | uVar2 & 0x7f | (uVar6 & 0xff) << 7;
    FUN_0091ada4(param_3 + 0x6e0);
  }
  uVar2 = *(uint *)(param_3 + 0x854);
  if ((uVar2 >> 7 & 0xff) != uVar6) {
    *(uint *)(param_3 + 0x854) = uVar2 & 0xffff8000 | uVar2 & 0x7f | (uVar6 & 0xff) << 7;
    FUN_0091ada4(param_3 + 2000);
  }
  uVar2 = *(uint *)(param_3 + 0x944);
  if ((uVar2 >> 7 & 0xff) != uVar6) {
    *(uint *)(param_3 + 0x944) = uVar2 & 0xffff8000 | uVar2 & 0x7f | (uVar6 & 0xff) << 7;
    FUN_0091ada4(param_3 + 0x8c0);
  }
  uVar2 = *(uint *)(param_3 + 0xa34);
  if ((uVar2 >> 7 & 0xff) == uVar6) {
    return;
  }
  *(uint *)(param_3 + 0xa34) = uVar2 & 0xffff8000 | uVar2 & 0x7f | (uVar6 & 0xff) << 7;
  FUN_0091ada4(param_3 + 0x9b0);
  return;
}




void FUN_00b198f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  lVar1 = param_3 + 0xaa0;
  if (0.0 < (float)param_2) {
    uVar3 = FUN_00eff108(param_2,lVar1,param_4,0,2);
    uVar4 = FUN_00efee28(param_1,param_2,0);
    uVar5 = FUN_00acb4f8();
    FUN_00efcea4(uVar5,uVar3,uVar4,0);
    FUN_00f01980(lVar1);
    FUN_00f022a0(lVar1,uVar5);
    return;
  }
  FUN_00f0e670(lVar1,param_4,2);
  if (0.0 <= (float)param_1) {
    uVar2 = *(uint *)(param_3 + 0xb24);
    uVar6 = (uint)((float)param_1 * 255.0);
    if ((uVar2 >> 7 & 0xff) != uVar6) {
      *(uint *)(param_3 + 0xb24) = uVar2 & 0xffff8000 | uVar2 & 0x7f | (uVar6 & 0xff) << 7;
      FUN_0091ada4(lVar1);
      return;
    }
  }
  return;
}




void FUN_00b199f0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  float fVar8;
  undefined8 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027cb008;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x53;
  FUN_00f0e4a8(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  local_60 = 0x3f0000003f000000;
  (**(code **)(param_1[0x17] + 0x28))(plVar1,&local_60);
  local_60 = 0x3f0000003f000000;
  (**(code **)(param_1[0x35] + 0x28))(plVar2,&local_60);
  local_60 = 0x3f0000003f000000;
  (**(code **)(param_1[0x53] + 0x28))(plVar3,&local_60);
  FUN_00f0e548(plVar1,PTR_s_build___Tutorial_Components_tga_02be3478,"reward_star_glow");
  fVar8 = *(float *)(param_1 + 0x20);
  if ((fVar8 != 3.0) || (fVar8 = *(float *)((long)param_1 + 0x104), fVar8 != 3.0)) {
    lVar7 = NEON_fmov(0x40400000,4);
    param_1[0x20] = lVar7;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e548(plVar2,PTR_s_build___Tutorial_Components_tga_02be3478,"reward_star_outline");
  uVar4 = *(uint *)((long)param_1 + 0x22c);
  if ((uVar4 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x22c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x3300;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar3,PTR_s_build___Tutorial_Components_tga_02be3478,"reward_star_complete");
  uVar6 = FUN_00f0e700(plVar3);
  local_60 = CONCAT44(fVar8,uVar6);
  FUN_00f13f18(param_1,&local_60);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) | 4;
  *(uint *)((long)param_1 + 0x31c) = *(uint *)((long)param_1 + 0x31c) & 0xfffffffb;
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b19bec(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x13c) =
       *(uint *)(param_1 + 0x13c) & 0xfffffff8 | *(uint *)(param_1 + 0x13c) & 3 | (param_2 & 1) << 2
  ;
  *(uint *)(param_1 + 0x22c) =
       *(uint *)(param_1 + 0x22c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x22c) & 3 | (~param_2 & 1) << 2;
  *(uint *)(param_1 + 0x31c) =
       *(uint *)(param_1 + 0x31c) & 0xfffffff8 | *(uint *)(param_1 + 0x31c) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00b19c1c(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = param_1 + 0x17;
  uVar2 = FUN_00f02540(plVar1);
  if ((param_2 & 1) == 0) {
    if ((uVar2 & 1) != 0) {
      FUN_00f01a4c(plVar1,1);
      return;
    }
  }
  else if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b19c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
    return;
  }
  return;
}




void FUN_00b19c98(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027dcff0;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x28;
  param_1[0x17] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x46;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 100;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x82;
  FUN_00f0e4a8(plVar5);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_button_frame");
  if ((*(uint *)((long)param_1 + 0x1c4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1c4) = *(uint *)((long)param_1 + 0x1c4) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_button_fill");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  if ((*(uint *)((long)param_1 + 0x2b4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2b4) = *(uint *)((long)param_1 + 0x2b4) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"season_token_full");
  *(uint *)((long)param_1 + 0x3a4) = *(uint *)((long)param_1 + 0x3a4) & 0xfffffffb;
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"focus_indicator_ring");
  *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xfffffffb;
  FUN_00f13f08(0x42f00000,0x42f00000,param_1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  return;
}




void FUN_00b19e80(long param_1)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 800) + 0x28))(param_1 + 800,&local_40);
  FUN_00f07940(0,0,param_1 + 0x140,8,param_1,8);
  FUN_00f07940(0,0,param_1 + 0x230,8,param_1,8);
  FUN_00f07940(0,0,param_1 + 800,8,param_1,8);
  FUN_00f07940(0,0,param_1 + 0x410,8,param_1,8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b19f5c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (float)(**(code **)(*param_3 + 0x48))();
  local_40 = local_40 + -16.0;
  param_2 = param_2 + -16.0;
  fStack_3c = param_2;
  FUN_00f13f18(param_3 + 0x28,&local_40);
  local_40 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  local_40 = local_40 + -16.0;
  param_2 = param_2 + -16.0;
  fStack_3c = param_2;
  FUN_00f13f18(param_3 + 0x46,&local_40);
  local_40 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  local_40 = local_40 + -16.0;
  param_2 = param_2 + -16.0;
  fStack_3c = param_2;
  FUN_00f13f18(param_3 + 100,&local_40);
  local_40 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fStack_3c = param_2;
  FUN_00f13f18(param_3 + 0x82,&local_40);
  FUN_00b19e80(param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

