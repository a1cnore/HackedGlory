// functions/00b18 — 3 functions
#include "libGameKindred.h"




void FUN_00b18344(float param_1,ulong param_2,undefined1 param_3 [16],long *param_4,byte param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined4 uVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_b0;
  long local_a8;
  
  lVar10 = tpidr_el0;
  local_a8 = *(long *)(lVar10 + 0x28);
  uVar11 = param_3._0_8_;
  uVar16 = param_2;
  FUN_00f13f08();
  if (*(char *)((long)param_4 + 0xb99) == '\0') {
    *(byte *)(param_4 + 0x173) = param_5 & 1;
    ppuVar9 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
    if ((param_5 & 1) == 0) {
      ppuVar9 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
    }
    puVar13 = *ppuVar9;
    FUN_00f0e540(param_4 + 0x28,puVar13);
    FUN_00f0e540(param_4 + 0x46,puVar13);
    FUN_00f0e540(param_4 + 100,puVar13);
    FUN_00f0e540(param_4 + 0x82,puVar13);
    FUN_00f0e540(param_4 + 0xa0,puVar13);
    FUN_00f0e540(param_4 + 0xbe,puVar13);
    FUN_00f0e540(param_4 + 0xdc,puVar13);
    FUN_00f0e540(param_4 + 0xfa,puVar13);
    FUN_00f0e540(param_4 + 0x118,puVar13);
    FUN_00f0e540(param_4 + 0x136,puVar13);
    plVar1 = param_4 + 0x154;
    FUN_00f0e548(plVar1,puVar13,"white_background");
    uVar16 = (ulong)(uint)*(float *)(param_4 + 0x15e);
    if ((*(float *)(param_4 + 0x15e) != 0.5) ||
       (uVar16 = (ulong)(uint)*(float *)((long)param_4 + 0xaf4),
       *(float *)((long)param_4 + 0xaf4) != 0.5)) {
      param_4[0x15e] = 0x3f0000003f000000;
      FUN_0091ada4(plVar1);
    }
    FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
    *(undefined1 *)((long)param_4 + 0xb99) = 1;
  }
  uVar12 = FUN_00f02540(param_4 + 0x136);
  if ((uVar12 & 1) != 0) {
    FUN_00f01a4c(param_4 + 0x136,1);
  }
  uVar12 = FUN_00f02540(param_4 + 0x118);
  if ((uVar12 & 1) != 0) {
    FUN_00f01a4c(param_4 + 0x118,1);
  }
  plVar1 = param_4 + 0x28;
  FUN_00f0e578(plVar1,"arrow_bg_corner");
  if ((*(float *)(param_4 + 0x32) != 0.0) ||
     (uVar16 = 0x3f800000, *(float *)((long)param_4 + 0x194) != 1.0)) {
    param_4[0x32] = 0x3f80000000000000;
    FUN_0091ada4(plVar1);
  }
  plVar2 = param_4 + 0x46;
  *(byte *)(param_4 + 0x43) = *(byte *)(param_4 + 0x43) & 0xfc;
  FUN_00f0e578(plVar2,"arrow_bg_corner");
  if ((*(float *)(param_4 + 0x50) != 0.0) || (*(float *)((long)param_4 + 0x284) != 0.0)) {
    param_4[0x50] = 0;
    FUN_0091ada4(plVar2);
  }
  plVar3 = param_4 + 100;
  *(byte *)(param_4 + 0x61) = *(byte *)(param_4 + 0x61) & 0xfc | 2;
  FUN_00f0e578(plVar3,"arrow_bg_corner");
  if ((*(float *)(param_4 + 0x6e) != 1.0) || (*(float *)((long)param_4 + 0x374) != 0.0)) {
    param_4[0x6e] = 0x3f800000;
    FUN_0091ada4(plVar3);
  }
  plVar4 = param_4 + 0x82;
  *(byte *)(param_4 + 0x7f) = *(byte *)(param_4 + 0x7f) | 3;
  FUN_00f0e578(plVar4,"arrow_bg_corner");
  if ((*(float *)(param_4 + 0x8c) != 1.0) || (*(float *)((long)param_4 + 0x464) != 1.0)) {
    lVar15 = NEON_fmov(0x3f800000,4);
    param_4[0x8c] = lVar15;
    FUN_0091ada4(plVar4);
  }
  plVar5 = param_4 + 0xa0;
  *(byte *)(param_4 + 0x9d) = *(byte *)(param_4 + 0x9d) & 0xfc | 1;
  FUN_00f0e578(plVar5,"arrow_bg_bottom_edge");
  if ((*(float *)(param_4 + 0xaa) != 0.5) || (*(float *)((long)param_4 + 0x554) != 1.0)) {
    param_4[0xaa] = 0x3f8000003f000000;
    FUN_0091ada4(plVar5);
  }
  plVar6 = param_4 + 0xbe;
  *(byte *)(param_4 + 0xbb) = *(byte *)(param_4 + 0xbb) & 0xfc;
  FUN_00f0e578(plVar6,"arrow_bg_left_edge");
  if ((*(float *)(param_4 + 200) != 0.0) || (*(float *)((long)param_4 + 0x644) != 0.5)) {
    param_4[200] = 0x3f00000000000000;
    FUN_0091ada4(plVar6);
  }
  plVar7 = param_4 + 0xdc;
  *(byte *)(param_4 + 0xd9) = *(byte *)(param_4 + 0xd9) & 0xfc;
  FUN_00f0e578(plVar7,"arrow_bg_bottom_edge");
  if ((*(float *)(param_4 + 0xe6) != 0.5) || (*(float *)((long)param_4 + 0x734) != 0.0)) {
    param_4[0xe6] = 0x3f000000;
    FUN_0091ada4(plVar7);
  }
  plVar8 = param_4 + 0xfa;
  *(byte *)(param_4 + 0xf7) = *(byte *)(param_4 + 0xf7) & 0xfc | 2;
  FUN_00f0e578(plVar8,"arrow_bg_left_edge");
  if ((*(float *)(param_4 + 0x104) != 1.0) || (*(float *)((long)param_4 + 0x824) != 0.5)) {
    param_4[0x104] = 0x3f0000003f800000;
    FUN_0091ada4(plVar8);
  }
  *(byte *)(param_4 + 0x115) = *(byte *)(param_4 + 0x115) & 0xfc | 1;
  uVar12 = FUN_00f0e700(plVar1);
  if (0.0 < param_3._0_4_) {
    fVar19 = param_3._0_4_ / (float)uVar12;
    if ((*(float *)(param_4 + 0x31) != fVar19) || (*(float *)((long)param_4 + 0x18c) != fVar19)) {
      *(float *)(param_4 + 0x31) = fVar19;
      *(float *)((long)param_4 + 0x18c) = fVar19;
      FUN_0091ada4(plVar1);
    }
    if ((*(float *)(param_4 + 0x4f) != fVar19) || (*(float *)((long)param_4 + 0x27c) != fVar19)) {
      *(float *)(param_4 + 0x4f) = fVar19;
      *(float *)((long)param_4 + 0x27c) = fVar19;
      FUN_0091ada4(plVar2);
    }
    if ((*(float *)(param_4 + 0x6d) != fVar19) || (*(float *)((long)param_4 + 0x36c) != fVar19)) {
      *(float *)(param_4 + 0x6d) = fVar19;
      *(float *)((long)param_4 + 0x36c) = fVar19;
      FUN_0091ada4(plVar3);
    }
    uVar16 = uVar11;
    uVar12 = uVar11;
    if ((*(float *)(param_4 + 0x8b) != fVar19) || (*(float *)((long)param_4 + 0x45c) != fVar19)) {
      *(float *)(param_4 + 0x8b) = fVar19;
      *(float *)((long)param_4 + 0x45c) = fVar19;
      FUN_0091ada4(plVar4);
    }
  }
  local_b0 = 0x3f000000;
  (**(code **)(*param_4 + 0x28))(param_4,&local_b0);
  fVar18 = (float)uVar12;
  fVar20 = (float)uVar16;
  fVar21 = param_1 - (fVar18 + fVar18);
  fVar17 = (float)param_2;
  fVar19 = fVar17 - (fVar20 + fVar20);
  FUN_00f13f08(param_1 - fVar18,fVar17 - fVar20,param_4 + 0x154);
  FUN_00f13f08(fVar21,uVar16,plVar7);
  FUN_00f13f08(fVar21,uVar16,plVar5);
  FUN_00f13f08(uVar12,plVar6);
  uVar14 = FUN_00f0e700(plVar6);
  local_b0 = CONCAT44(fVar19,uVar14);
  FUN_00f13f18(plVar8,&local_b0);
  fVar19 = param_1 * -0.5;
  if ((*(float *)(param_4 + 0x30) != fVar19) || (*(float *)((long)param_4 + 0x184) != fVar17)) {
    *(float *)(param_4 + 0x30) = fVar19;
    *(float *)((long)param_4 + 0x184) = fVar17;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_4 + 0x4e) != fVar19) || (*(float *)((long)param_4 + 0x274) != 0.0)) {
    *(float *)(param_4 + 0x4e) = fVar19;
    *(undefined4 *)((long)param_4 + 0x274) = 0;
    FUN_0091ada4(plVar2);
  }
  param_1 = param_1 * 0.5;
  if ((*(float *)(param_4 + 0x6c) != param_1) || (*(float *)((long)param_4 + 0x364) != 0.0)) {
    *(float *)(param_4 + 0x6c) = param_1;
    *(undefined4 *)((long)param_4 + 0x364) = 0;
    FUN_0091ada4(plVar3);
  }
  if ((*(float *)(param_4 + 0x8a) != param_1) || (*(float *)((long)param_4 + 0x454) != fVar17)) {
    *(float *)(param_4 + 0x8a) = param_1;
    *(float *)((long)param_4 + 0x454) = fVar17;
    FUN_0091ada4(plVar4);
  }
  if ((*(float *)(param_4 + 0xa8) != 0.0) || (*(float *)((long)param_4 + 0x544) != fVar17)) {
    *(undefined4 *)(param_4 + 0xa8) = 0;
    *(float *)((long)param_4 + 0x544) = fVar17;
    FUN_0091ada4(plVar5);
  }
  fVar17 = fVar17 * 0.5;
  if ((*(float *)(param_4 + 0xc6) != fVar19) || (*(float *)((long)param_4 + 0x634) != fVar17)) {
    *(float *)(param_4 + 0xc6) = fVar19;
    *(float *)((long)param_4 + 0x634) = fVar17;
    FUN_0091ada4(plVar6);
  }
  if ((*(float *)(param_4 + 0x102) != param_1) || (*(float *)((long)param_4 + 0x814) != fVar17)) {
    *(float *)(param_4 + 0x102) = param_1;
    *(float *)((long)param_4 + 0x814) = fVar17;
    FUN_0091ada4(plVar8);
  }
  if ((*(float *)(param_4 + 0xe4) != 0.0) || (*(float *)((long)param_4 + 0x724) != 0.0)) {
    param_4[0xe4] = 0;
    FUN_0091ada4(plVar7);
  }
  if ((*(float *)(param_4 + 0x15c) != 0.0) || (*(float *)((long)param_4 + 0xae4) != fVar17)) {
    *(undefined4 *)(param_4 + 0x15c) = 0;
    *(float *)((long)param_4 + 0xae4) = fVar17;
    FUN_0091ada4(param_4 + 0x154);
  }
  if ((*(float *)(param_4 + 0x1f) != 0.0) || (*(float *)((long)param_4 + 0xfc) != 0.0)) {
    param_4[0x1f] = 0;
    FUN_0091ada4(param_4 + 0x17);
  }
  if (*(long *)(lVar10 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b18a7c(float param_1,float param_2,float param_3,float param_4,long *param_5,long param_6
                 )

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = param_2;
  uVar1 = FUN_00f02540(param_5 + 0x136);
  fVar5 = *(float *)(param_5 + 0x1f);
  if ((uVar1 & 1) == 0) {
    fVar8 = *(float *)((long)param_5 + 0xfc);
  }
  else {
    fVar6 = *(float *)(param_5 + 0x15c);
    fVar2 = (float)FUN_00f0e700(param_5 + 0x154);
    fVar4 = 0.5;
    fVar3 = (float)FUN_00f0e700(param_5 + 0x28);
    fVar8 = *(float *)((long)param_5 + 0xfc);
    fVar7 = *(float *)((long)param_5 + 0xae4);
    fVar5 = fVar5 + ((fVar6 - fVar2 * 0.5) - fVar3);
    FUN_00f0e700(param_5 + 0x154);
    fVar2 = fVar4 * 0.5;
    FUN_00f0e700(param_5 + 0x28);
    fVar8 = fVar8 + ((fVar7 - fVar2) - fVar4);
  }
  fVar2 = (float)(**(code **)(*param_5 + 0x48))(param_5);
  fVar5 = param_1 + fVar5 + param_3 * fVar2;
  fVar4 = param_2 + fVar8 + param_4 * fVar4;
  if ((*(float *)(param_6 + 0x40) == fVar5) && (*(float *)(param_6 + 0x44) == fVar4)) {
    return;
  }
  *(float *)(param_6 + 0x40) = fVar5;
  *(float *)(param_6 + 0x44) = fVar4;
  FUN_0091ada4(param_6);
  return;
}




void FUN_00b18bb0(float param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float local_90;
  float fStack_8c;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  *(float *)((long)param_3 + 0xb94) = param_1;
  fVar4 = (float)(**(code **)(*param_3 + 0x48))();
  (**(code **)(*param_3 + 0x48))(param_3);
  uVar10 = param_2;
  uVar8 = FUN_00f0e700(param_3 + 0x28);
  plVar1 = param_3 + 0x136;
  uVar11 = uVar10;
  FUN_00f0eac0(plVar1);
  fVar7 = (float)uVar11;
  FUN_00f0e700(plVar1);
  if (3 < *(uint *)(param_3 + 0x172)) goto LAB_00b19284;
  fVar12 = *(float *)((long)param_3 + 0xb94);
  fVar6 = (float)uVar10;
  fStack_8c = (float)uVar11 + fVar6 * -0.5;
  fVar5 = (float)param_2;
  fStack_8c = fStack_8c / (fVar5 + fStack_8c);
  local_90 = (fVar7 * (fVar12 + -0.5)) / fVar4;
  fVar7 = (float)uVar8;
  switch(*(uint *)(param_3 + 0x172)) {
  case 0:
    local_90 = fVar12 - local_90;
    fStack_8c = fStack_8c + 1.0;
    (**(code **)(*param_3 + 0x28))(param_3,&local_90);
    plVar2 = param_3 + 0x154;
    fVar12 = (float)FUN_00f0e700(plVar2);
    fVar9 = (float)FUN_00f0e700(plVar1);
    FUN_00f13f08(*(float *)((long)param_3 + 0xb94) * (fVar12 - fVar9),uVar10,param_3 + 0xa0);
    fVar12 = (float)FUN_00f0e700(plVar2);
    fVar9 = (float)FUN_00f0e700(plVar1);
    FUN_00f13f08((fVar12 - fVar9) * (1.0 - *(float *)((long)param_3 + 0xb94)),uVar10,param_3 + 0x118
                );
    fVar12 = fVar7 - fVar4 * 0.5;
    fVar5 = fVar5 * 0.5;
    if ((*(float *)(param_3 + 0xa8) != fVar12) || (*(float *)((long)param_3 + 0x544) != fVar5)) {
      *(float *)(param_3 + 0xa8) = fVar12;
      *(float *)((long)param_3 + 0x544) = fVar5;
      FUN_0091ada4(param_3 + 0xa0);
    }
    fVar7 = fVar4 * 0.5 - fVar7;
    if ((*(float *)(param_3 + 0x120) != fVar7) || (*(float *)((long)param_3 + 0x904) != fVar5)) {
      *(float *)(param_3 + 0x120) = fVar7;
      *(float *)((long)param_3 + 0x904) = fVar5;
      FUN_0091ada4(param_3 + 0x118);
    }
    fVar7 = *(float *)((long)param_3 + 0xb94);
    fVar4 = (float)FUN_00f0e700(plVar2);
    fVar12 = (float)FUN_00f0e700(plVar1);
    fVar9 = *(float *)(param_3 + 0x13e);
    fVar7 = (fVar7 + -0.5) * fVar4 - fVar12 * (*(float *)((long)param_3 + 0xb94) + -0.5);
    if ((fVar9 != fVar7) || (fVar4 = *(float *)((long)param_3 + 0x9f4), fVar4 != fVar5 - fVar6)) {
      *(float *)(param_3 + 0x13e) = fVar7;
      *(float *)((long)param_3 + 0x9f4) = fVar5 - fVar6;
      FUN_0091ada4(plVar1);
      fVar9 = *(float *)(param_3 + 0x13e);
      fVar4 = *(float *)((long)param_3 + 0x9f4);
    }
    fVar7 = -fVar9;
    FUN_00f0e700(plVar1);
    fVar9 = -fVar4 - fVar9;
    if ((*(float *)(param_3 + 0x1f) == fVar7) && (*(float *)((long)param_3 + 0xfc) == fVar9))
    goto LAB_00b19284;
    *(float *)(param_3 + 0x1f) = fVar7;
    break;
  case 1:
    local_90 = fVar12 - local_90;
    fStack_8c = 0.0 - fStack_8c;
    (**(code **)(*param_3 + 0x28))(param_3,&local_90);
    plVar2 = param_3 + 0x154;
    fVar12 = (float)FUN_00f0e700(plVar2);
    fVar9 = (float)FUN_00f0e700(plVar1);
    FUN_00f13f08(*(float *)((long)param_3 + 0xb94) * (fVar12 - fVar9),uVar10,param_3 + 0xa0);
    fVar12 = (float)FUN_00f0e700(plVar2);
    fVar9 = (float)FUN_00f0e700(plVar1);
    FUN_00f13f08((fVar12 - fVar9) * (1.0 - *(float *)((long)param_3 + 0xb94)),uVar10,param_3 + 0x118
                );
    fVar12 = fVar7 - fVar4 * 0.5;
    fVar5 = fVar5 * -0.5;
    if ((*(float *)(param_3 + 0xa8) != fVar12) || (*(float *)((long)param_3 + 0x544) != fVar5)) {
      *(float *)(param_3 + 0xa8) = fVar12;
      *(float *)((long)param_3 + 0x544) = fVar5;
      FUN_0091ada4(param_3 + 0xa0);
    }
    fVar7 = fVar4 * 0.5 - fVar7;
    if ((*(float *)(param_3 + 0x120) != fVar7) || (*(float *)((long)param_3 + 0x904) != fVar5)) {
      *(float *)(param_3 + 0x120) = fVar7;
      *(float *)((long)param_3 + 0x904) = fVar5;
      FUN_0091ada4(param_3 + 0x118);
    }
    fVar7 = *(float *)((long)param_3 + 0xb94);
    fVar4 = (float)FUN_00f0e700(plVar2);
    fVar12 = (float)FUN_00f0e700(plVar1);
    fVar9 = *(float *)(param_3 + 0x13e);
    fVar7 = (fVar7 + -0.5) * fVar4 - fVar12 * (*(float *)((long)param_3 + 0xb94) + -0.5);
    if ((fVar9 != fVar7) || (fVar4 = *(float *)((long)param_3 + 0x9f4), fVar4 != fVar5 + fVar6)) {
      *(float *)(param_3 + 0x13e) = fVar7;
      *(float *)((long)param_3 + 0x9f4) = fVar5 + fVar6;
      FUN_0091ada4(plVar1);
      fVar9 = *(float *)(param_3 + 0x13e);
      fVar4 = *(float *)((long)param_3 + 0x9f4);
    }
    fVar7 = -fVar9;
    FUN_00f0e700(plVar1);
    fVar9 = fVar9 - fVar4;
    if ((*(float *)(param_3 + 0x1f) == fVar7) && (*(float *)((long)param_3 + 0xfc) == fVar9))
    goto LAB_00b19284;
    *(float *)(param_3 + 0x1f) = fVar7;
    break;
  case 2:
    fStack_8c = param_1 - fStack_8c;
    local_90 = local_90 + 1.0;
    fVar12 = local_90;
    (**(code **)(*param_3 + 0x28))(param_3,&local_90);
    plVar2 = param_3 + 0x154;
    FUN_00f0e700(plVar2);
    fVar7 = fVar12;
    FUN_00f0e700(plVar1);
    fVar12 = (fVar12 - fVar7) * (1.0 - *(float *)((long)param_3 + 0xb94));
    FUN_00f13f08(uVar8,fVar12,param_3 + 0xa0);
    FUN_00f0e700(plVar2);
    fVar7 = fVar12;
    FUN_00f0e700(plVar1);
    FUN_00f13f08(uVar8,*(float *)((long)param_3 + 0xb94) * (fVar12 - fVar7),param_3 + 0x118);
    fVar12 = 0.5;
    fVar4 = fVar4 * 0.5;
    fVar7 = fVar5 * 0.5 - fVar6;
    if ((*(float *)(param_3 + 0xa8) != fVar4) ||
       (fVar12 = *(float *)((long)param_3 + 0x544), fVar12 != fVar7)) {
      *(float *)(param_3 + 0xa8) = fVar4;
      *(float *)((long)param_3 + 0x544) = fVar7;
      FUN_0091ada4(param_3 + 0xa0);
    }
    fVar7 = fVar6 - fVar5 * 0.5;
    if ((*(float *)(param_3 + 0x120) != fVar4) ||
       (fVar12 = *(float *)((long)param_3 + 0x904), fVar12 != fVar7)) {
      *(float *)(param_3 + 0x120) = fVar4;
      *(float *)((long)param_3 + 0x904) = fVar7;
      FUN_0091ada4(param_3 + 0x118);
    }
    fVar7 = *(float *)((long)param_3 + 0xb94);
    FUN_00f0e700(plVar2);
    fVar7 = (fVar7 + -0.5) * fVar12;
    FUN_00f0e700(plVar1);
    fVar5 = *(float *)(param_3 + 0x13e);
    fVar7 = fVar7 - fVar12 * (*(float *)((long)param_3 + 0xb94) + -0.5);
    if ((fVar5 != fVar4 - fVar6) || (*(float *)((long)param_3 + 0x9f4) != fVar7)) {
      *(float *)(param_3 + 0x13e) = fVar4 - fVar6;
      *(float *)((long)param_3 + 0x9f4) = fVar7;
      FUN_0091ada4(plVar1);
      fVar5 = *(float *)(param_3 + 0x13e);
    }
    fVar7 = (float)FUN_00f0e700(plVar1);
    fVar4 = *(float *)(param_3 + 0x1f);
    fVar6 = *(float *)((long)param_3 + 0x9f4);
    fVar7 = -fVar5 - fVar7;
    goto LAB_00b190d4;
  case 3:
    fStack_8c = param_1 - fStack_8c;
    local_90 = 0.0 - local_90;
    fVar9 = local_90;
    (**(code **)(*param_3 + 0x28))(param_3,&local_90);
    plVar2 = param_3 + 0x154;
    FUN_00f0e700(plVar2);
    fVar12 = fVar9;
    FUN_00f0e700(plVar1);
    fVar9 = *(float *)((long)param_3 + 0xb94) * (fVar9 - fVar12);
    FUN_00f13f08(uVar8,fVar9,param_3 + 0xa0);
    FUN_00f0e700(plVar2);
    fVar12 = fVar9;
    FUN_00f0e700(plVar1);
    FUN_00f13f08(uVar8,(fVar9 - fVar12) * (1.0 - *(float *)((long)param_3 + 0xb94)),param_3 + 0x118)
    ;
    fVar9 = 0.5;
    fVar4 = fVar4 * -0.5;
    fVar12 = fVar6 - fVar5 * 0.5;
    if ((*(float *)(param_3 + 0xa8) != fVar4) ||
       (fVar9 = *(float *)((long)param_3 + 0x544), fVar9 != fVar12)) {
      *(float *)(param_3 + 0xa8) = fVar4;
      *(float *)((long)param_3 + 0x544) = fVar12;
      FUN_0091ada4(param_3 + 0xa0);
    }
    fVar6 = fVar5 * 0.5 - fVar6;
    if ((*(float *)(param_3 + 0x120) != fVar4) ||
       (fVar9 = *(float *)((long)param_3 + 0x904), fVar9 != fVar6)) {
      *(float *)(param_3 + 0x120) = fVar4;
      *(float *)((long)param_3 + 0x904) = fVar6;
      FUN_0091ada4(param_3 + 0x118);
    }
    fVar6 = *(float *)((long)param_3 + 0xb94);
    FUN_00f0e700(plVar2);
    fVar6 = (fVar6 + -0.5) * fVar9;
    FUN_00f0e700(plVar1);
    fVar12 = *(float *)(param_3 + 0x13e);
    fVar6 = fVar6 - fVar9 * (*(float *)((long)param_3 + 0xb94) + -0.5);
    if ((fVar12 != fVar4 + fVar7) || (*(float *)((long)param_3 + 0x9f4) != fVar6)) {
      *(float *)(param_3 + 0x13e) = fVar4 + fVar7;
      *(float *)((long)param_3 + 0x9f4) = fVar6;
      FUN_0091ada4(plVar1);
      fVar12 = *(float *)(param_3 + 0x13e);
    }
    fVar7 = (float)FUN_00f0e700(plVar1);
    fVar4 = *(float *)(param_3 + 0x1f);
    fVar6 = *(float *)((long)param_3 + 0x9f4);
    fVar7 = fVar7 - fVar12;
LAB_00b190d4:
    if ((fVar4 == fVar7) && (*(float *)((long)param_3 + 0xfc) == -fVar6)) goto LAB_00b19284;
    *(float *)(param_3 + 0x1f) = fVar7;
    *(float *)((long)param_3 + 0xfc) = -fVar6;
    goto LAB_00b19280;
  }
  *(float *)((long)param_3 + 0xfc) = fVar9;
LAB_00b19280:
  FUN_0091ada4(param_3 + 0x17);
LAB_00b19284:
  if (*(long *)(lVar3 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

