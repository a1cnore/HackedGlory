// functions/00b27 — 18 functions
#include "libGameKindred.h"




void FUN_00b27024(long *param_1)

{
  *(undefined4 *)(param_1 + 0x2d) = 0;
  (**(code **)(*param_1 + 0x138))();
  FUN_00b26174(param_1 + 0x17);
  FUN_008fce60(param_1 + 0x1b5,&DAT_0320ffa8);
  return;
}




long * FUN_00b27064(long param_1,long param_2)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_008fa54c(local_60,DAT_0313a090);
  FUN_00b25fe0(param_2,local_60);
  plVar4 = operator_new(0x130);
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
  FUN_00f0d25c(plVar4,pvVar1);
  (**(code **)(*plVar4 + 0x138))(plVar4,param_2);
  if (*(int *)(param_2 + 0x28) == 1) {
    uVar2 = *(uint *)((long)plVar4 + 0x84);
    if ((uVar2 & 0x7f80) != 0x5900) {
      *(uint *)((long)plVar4 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5900;
      FUN_0091ada4(plVar4);
    }
    FUN_00f0da28(0x3f4ccccd,plVar4);
  }
  else if ((*(int *)(param_2 + 0x28) == 0) &&
          (uVar2 = *(uint *)((long)plVar4 + 0x84), (uVar2 & 0x7f80) != 0x3300)) {
    *(uint *)((long)plVar4 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x3300;
    FUN_0091ada4(plVar4);
  }
  if (*(char *)(param_1 + 0x150) == '\0') {
    uVar5 = *(undefined4 *)(param_1 + 0x14c);
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x48))(plVar4);
    *(undefined4 *)(param_1 + 0x14c) = uVar5;
  }
  FUN_00f0dad0(uVar5,plVar4,1);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00b271cc(long param_1)

{
  undefined **ppuVar1;
  uint uVar2;
  void *pvVar3;
  
  pvVar3 = operator_new(0xf0);
  FUN_00f0e4a8();
  ppuVar1 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  if (*(char *)(param_1 + 0xdc0) != '\0') {
    ppuVar1 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  }
  FUN_00f0e548(pvVar3,*ppuVar1,"white_background");
  FUN_00f0e670(pvVar3,&DAT_01bee7fa,2);
  uVar2 = *(uint *)((long)pvVar3 + 0x84);
  if ((uVar2 & 0x7f80) != 0xc80) {
    *(uint *)((long)pvVar3 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0xc80;
    FUN_0091ada4(pvVar3);
  }
  FUN_00f13f08(*(undefined4 *)(param_1 + 0x14c),0x40000000,pvVar3);
  return pvVar3;
}




void * FUN_00b27274(long param_1,long param_2)

{
  undefined **ppuVar1;
  void *pvVar2;
  
  pvVar2 = operator_new(0xf0);
  FUN_00f0e4a8();
  ppuVar1 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  if (*(char *)(param_1 + 0xdc0) != '\0') {
    ppuVar1 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  }
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    param_2 = param_2 + 0x11;
  }
  else {
    param_2 = *(long *)(param_2 + 0x20);
  }
  FUN_00f0e548(pvVar2,*ppuVar1,param_2);
  return pvVar2;
}




void FUN_00b272f0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0xd98);
  if (*(uint *)(param_1 + 0xd98) != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0xda0) + lVar4) != 0) {
        uVar2 = FUN_00f02540();
        if ((uVar2 & 1) != 0) {
          FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0xda0) + lVar4),1);
        }
        plVar1 = *(long **)(*(long *)(param_1 + 0xda0) + lVar4);
        if (plVar1 == (long *)0x0) {
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0xda0) + uVar5 * 8);
        }
        else {
          (**(code **)(*plVar1 + 8))();
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0xda0) + lVar4);
        }
        *puVar3 = 0;
        uVar2 = (ulong)*(uint *)(param_1 + 0xd98);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0xda0) != 0) {
    *(undefined4 *)(param_1 + 0xd98) = 0;
  }
  return;
}




undefined * FUN_00b27394(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  if (*(char *)(param_1 + 0xdc0) != '\0') {
    ppuVar1 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  }
  return *ppuVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b273b8(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  fVar8 = *(float *)(param_3 + 0x134);
  if (*(uint *)(param_3 + 0xd98) != 0) {
    plVar5 = *(long **)(*(long *)(param_3 + 0xda0) + (ulong)*(uint *)(param_3 + 0xd98) * 8 + -8);
    fVar10 = *(float *)((long)plVar5 + 0x44);
    (**(code **)(*plVar5 + 0x50))();
    fVar10 = fVar10 + param_2;
    param_2 = 16.0;
    fVar8 = fVar8 + fVar10 + 16.0;
  }
  uVar2 = *(uint *)(param_3 + 0xe4c);
  plVar5 = (long *)(param_3 + 0xdc8);
  uVar6 = FUN_00f02540(plVar5);
  if ((uVar2 >> 2 & 1) == 0) {
    if ((uVar6 & 1) != 0) {
      FUN_00f01a4c(plVar5,1);
    }
  }
  else {
    if ((uVar6 & 1) == 0) {
      FUN_00f023ec(param_3 + 0xd10,plVar5,1);
    }
    fVar10 = *(float *)(param_3 + 0x14c) * 0.5;
    FUN_00f13e54(plVar5);
    fVar8 = fVar8 + param_2 * 0.5;
    if ((*(float *)(param_3 + 0xe08) != fVar10) || (*(float *)(param_3 + 0xe0c) != fVar8)) {
      *(float *)(param_3 + 0xe08) = fVar10;
      *(float *)(param_3 + 0xe0c) = fVar8;
      FUN_0091ada4(plVar5);
    }
    local_60 = 0x3f0000003f000000;
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_60);
  }
  lVar1 = param_3 + 0x170;
  if (*(char *)(param_3 + 0x167) == '\0') {
    fVar8 = *(float *)(param_3 + 0x14c);
    fVar10 = fVar8 + *(float *)(param_3 + 0x130) + *(float *)(param_3 + 0x130);
    FUN_00f01c54(param_3 + 0xd10,0,0,1,1);
    FUN_00b18344(fVar10,fVar8 + *(float *)(param_3 + 0x134) + *(float *)(param_3 + 0x134),0xbf800000
                 ,lVar1,*(undefined1 *)(param_3 + 0xdc0));
  }
  else {
    fVar8 = *(float *)(param_3 + 0x14c);
    uVar3 = *(undefined4 *)(param_3 + 0x160);
    uVar9 = *(undefined4 *)(param_3 + 0x148);
    fVar10 = fVar8 + *(float *)(param_3 + 0x130) + *(float *)(param_3 + 0x130);
    FUN_00f01c54(param_3 + 0xd10,0,0,1,1);
    FUN_00b16840(uVar9,fVar10,fVar8 + *(float *)(param_3 + 0x134) + *(float *)(param_3 + 0x134),
                 lVar1,uVar3,*(undefined1 *)(param_3 + 0xdc0));
  }
  FUN_00b18a7c(*(undefined4 *)(param_3 + 0x130),*(undefined4 *)(param_3 + 0x134),DAT_03218ef8,
               _DAT_03218efc,lVar1,param_3 + 0xd10);
  uVar7 = FUN_00f01c54(lVar1,0,0,1,1);
  FUN_00f01c54(lVar1,0,0,1,1);
  FUN_00f13f08(uVar7,param_3);
  FUN_00b2760c(param_3);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b2760c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s10;
  float fVar16;
  float unaff_s11;
  float fVar17;
  undefined1 auStack_a0 [4];
  float local_9c;
  float local_98;
  float local_94;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (*(char *)((long)param_3 + 0x166) != '\0') {
    local_80 = (undefined4)param_3[0x20];
    local_88 = param_3[0x1f];
LAB_00b27670:
    FUN_0091ef94(&local_98,&local_88,0);
    param_2 = (float)(int)local_94;
    unaff_s11 = (float)(int)local_98 + *(float *)(param_3 + 0x27);
    unaff_s10 = param_2 + *(float *)((long)param_3 + 0x13c);
    goto LAB_00b2769c;
  }
  if (param_3[0x1e] != 0) {
    FUN_00d55794(param_3[0x1e],&local_88,0);
    goto LAB_00b27670;
  }
  if (param_3[0x1d] == 0) goto LAB_00b2769c;
  lVar4 = FUN_00965ecc();
  fVar14 = *(float *)(lVar4 + 8);
  lVar4 = FUN_00965ecc(param_3[4]);
  fVar8 = *(float *)(lVar4 + 8);
  lVar4 = FUN_00965ecc(param_3[0x1d]);
  fVar15 = *(float *)(lVar4 + 0xc);
  lVar4 = FUN_00965ecc(param_3[4]);
  fVar9 = *(float *)(lVar4 + 0xc);
  FUN_00f0036c(&local_88,(ulong)&local_88 | 4);
  fVar10 = *(float *)((long)param_3 + 0x13c);
  fVar6 = (float)local_88;
  fVar13 = local_88._4_4_;
  fVar16 = *(float *)(param_3 + 0x27);
  lVar4 = FUN_00965ecc(param_3[0x1d]);
  fVar17 = *(float *)(lVar4 + 0x10);
  fVar11 = *(float *)(lVar4 + 0x14);
  fVar7 = (float)local_88;
  fVar12 = local_88._4_4_;
  param_2 = local_88._4_4_;
  if (-1.0 < *(float *)(param_3 + 0x2b)) {
    FUN_00f020b4(param_3 + 0x2e,&local_98,auStack_a0);
    lVar4 = FUN_00965ecc(param_3[0x1d]);
    param_2 = *(float *)(param_3 + 0x2b);
    local_9c = local_9c + (*(float *)(lVar4 + 0xc) - param_2);
    if (0.0 < local_9c) {
      FUN_00f01c54(param_3 + 0x2e,0,0,1,1);
      param_2 = local_9c / param_2;
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      *(float *)(param_3 + 0x29) = *(float *)(param_3 + 0x29) + param_2;
      FUN_00b27b40(param_3);
    }
  }
  if (-1.0 < *(float *)((long)param_3 + 0x15c)) {
    FUN_00f020b4(param_3 + 0x2e,&local_98,auStack_a0);
    lVar4 = FUN_00965ecc(param_3[0x1d]);
    param_2 = *(float *)((long)param_3 + 0x15c);
    local_94 = local_94 + (*(float *)(lVar4 + 0xc) - param_2);
    if (local_94 < 0.0) {
      FUN_00f01c54(param_3 + 0x2e,0,0,1,1);
      param_2 = -local_94 / param_2;
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      *(float *)(param_3 + 0x29) = *(float *)(param_3 + 0x29) - param_2;
      FUN_00b27b40(param_3);
    }
  }
  unaff_s11 = (fVar14 - fVar8) / fVar6 + fVar16;
  unaff_s10 = (fVar15 - fVar9) / fVar13 + fVar10;
  if ((*(char *)((long)param_3 + 0x167) == '\0') || (3 < *(uint *)(param_3 + 0x2c)))
  goto LAB_00b2769c;
  fVar17 = fVar17 / fVar7;
  fVar11 = fVar11 / fVar12;
  switch(*(uint *)(param_3 + 0x2c)) {
  case 0:
    (**(code **)(*(long *)param_3[0x1d] + 0x48))();
    param_2 = -20.0;
    fVar6 = -20.0 - fVar11 * fVar12 * *(float *)(param_3[0x1d] + 0x54);
    break;
  case 1:
    (**(code **)(*(long *)param_3[0x1d] + 0x48))();
    param_2 = 20.0;
    fVar6 = fVar11 * fVar12 * (1.0 - *(float *)(param_3[0x1d] + 0x54)) + 20.0;
    break;
  case 2:
    fVar6 = (float)(**(code **)(*(long *)param_3[0x1d] + 0x48))();
    param_2 = -20.0;
    fVar6 = -20.0 - fVar17 * fVar6 * *(float *)(param_3[0x1d] + 0x50);
    goto LAB_00b27b34;
  case 3:
    fVar6 = (float)(**(code **)(*(long *)param_3[0x1d] + 0x48))();
    param_2 = 20.0;
    fVar6 = fVar17 * fVar6 * (1.0 - *(float *)(param_3[0x1d] + 0x50)) + 20.0;
LAB_00b27b34:
    unaff_s11 = unaff_s11 + fVar6;
    goto LAB_00b2769c;
  }
  unaff_s10 = unaff_s10 + fVar6;
LAB_00b2769c:
  if (*(char *)((long)param_3 + 0x167) == '\0') {
    plVar1 = param_3 + 0x2e;
    fVar6 = (float)FUN_00f13e54(plVar1);
    fVar7 = *(float *)(param_3 + 0x38);
    fVar13 = param_2 * *(float *)((long)param_3 + 0x1c4);
    if ((*(float *)(param_3 + 0x36) != fVar7 * fVar6) ||
       (*(float *)((long)param_3 + 0x1b4) != fVar13)) {
      *(float *)(param_3 + 0x36) = fVar7 * fVar6;
      *(float *)((long)param_3 + 0x1b4) = fVar13;
      FUN_0091ada4(plVar1);
      fVar7 = *(float *)(param_3 + 0x38);
    }
    if ((fVar7 != DAT_03218ef8) || (*(float *)((long)param_3 + 0x1c4) != _DAT_03218efc)) {
      param_3[0x38] = CONCAT44(_DAT_03218efc,DAT_03218ef8);
      FUN_0091ada4(plVar1);
    }
    fVar6 = unaff_s11 - fVar6 * *(float *)(param_3 + 0x28);
    fVar7 = unaff_s10 - param_2 * *(float *)((long)param_3 + 0x144);
    if ((*(float *)(param_3 + 8) != fVar6) || (*(float *)((long)param_3 + 0x44) != fVar7)) {
      *(float *)(param_3 + 8) = fVar6;
      *(float *)((long)param_3 + 0x44) = fVar7;
      FUN_0091ada4(param_3);
    }
    goto switchD_00b276c0_default;
  }
  switch((int)param_3[0x2c]) {
  case 0:
    lVar4 = param_3[0x29];
    if ((*(float *)(param_3 + 8) != unaff_s11) || (*(float *)((long)param_3 + 0x44) != unaff_s10)) {
      *(float *)(param_3 + 8) = unaff_s11;
      *(float *)((long)param_3 + 0x44) = unaff_s10;
      FUN_0091ada4(param_3);
    }
    local_88 = CONCAT44(0x3f800000,(int)lVar4);
    break;
  case 1:
    uVar2 = *(uint *)(param_3 + 0x29);
    if ((*(float *)(param_3 + 8) != unaff_s11) || (*(float *)((long)param_3 + 0x44) != unaff_s10)) {
      *(float *)(param_3 + 8) = unaff_s11;
      *(float *)((long)param_3 + 0x44) = unaff_s10;
      FUN_0091ada4(param_3);
    }
    local_88 = (ulong)uVar2;
    break;
  case 2:
    uVar5 = (undefined4)param_3[0x29];
    if ((*(float *)(param_3 + 8) != unaff_s11) || (*(float *)((long)param_3 + 0x44) != unaff_s10)) {
      *(float *)(param_3 + 8) = unaff_s11;
      *(float *)((long)param_3 + 0x44) = unaff_s10;
      FUN_0091ada4(param_3);
    }
    local_88._0_4_ = 1.0;
    goto LAB_00b27a20;
  case 3:
    uVar5 = (undefined4)param_3[0x29];
    if ((*(float *)(param_3 + 8) != unaff_s11) || (*(float *)((long)param_3 + 0x44) != unaff_s10)) {
      *(float *)(param_3 + 8) = unaff_s11;
      *(float *)((long)param_3 + 0x44) = unaff_s10;
      FUN_0091ada4(param_3);
    }
    local_88._0_4_ = 0.0;
LAB_00b27a20:
    local_88 = CONCAT44(uVar5,(float)local_88);
    break;
  default:
    goto switchD_00b276c0_default;
  }
  (**(code **)(*param_3 + 0x28))(param_3,&local_88);
switchD_00b276c0_default:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b27b40(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_1 + 0x14c);
  uVar1 = *(undefined4 *)(param_1 + 0x160);
  uVar3 = *(undefined4 *)(param_1 + 0x148);
  fVar4 = fVar2 + *(float *)(param_1 + 0x130) + *(float *)(param_1 + 0x130);
  FUN_00f01c54(param_1 + 0xd10,0,0,1,1);
  FUN_00b16840(uVar3,fVar4,fVar2 + *(float *)(param_1 + 0x134) + *(float *)(param_1 + 0x134),
               param_1 + 0x170,uVar1,*(undefined1 *)(param_1 + 0xdc0));
  FUN_00b18a7c(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x134),DAT_03218ef8,
               _DAT_03218efc,param_1 + 0x170,param_1 + 0xd10);
  return;
}




void FUN_00b27be4(undefined8 param_1)

{
  FUN_00b26c0c(param_1,0);
  return;
}




void FUN_00b27bec(long param_1)

{
  if (*(code **)(param_1 + 0xd8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b27bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 0xd0),0);
    return;
  }
  return;
}




void FUN_00b27c04(long *param_1,byte param_2)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  FUN_00f017e8();
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(byte *)((long)param_1 + 0xe4) = param_2 & 1;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *param_1 = (long)&PTR_FUN_027de960;
  lVar4 = 0;
  do {
    pvVar1 = operator_new(0x2388);
    FUN_00b2624c(pvVar1,param_2 & 1);
    *(void **)((long)param_1 + lVar4 + 0xb8) = pvVar1;
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
    lVar2 = *(long *)((long)param_1 + lVar4 + 0xb8);
    *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xfffffffb;
    plVar3 = *(long **)((long)param_1 + lVar4 + 0xb8);
    *(undefined4 *)(plVar3 + 0x2d) = 0;
    (**(code **)(*plVar3 + 0x138))(plVar3);
    FUN_00b26174(plVar3 + 0x17);
    FUN_008fce60(plVar3 + 0x1b5,&DAT_0320ffa8);
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x28);
  return;
}




void FUN_00b27cec(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = 0;
  *param_1 = &PTR_FUN_027de960;
  do {
    plVar1 = *(long **)((long)param_1 + lVar2 + 0xb8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined8 *)((long)param_1 + lVar2 + 0xb8) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x28);
  FUN_00a02470(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b27d58(void *param_1)

{
  FUN_00b27cec();
  operator_delete(param_1);
  return;
}




void FUN_00b27d7c(float param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  
  uVar5 = 0;
  do {
    lVar4 = *(long *)(param_2 + 0xb8 + uVar5 * 8);
    if (*(int *)(lVar4 + 0x168) == 1) {
      FUN_00b26c0c(lVar4,0);
    }
    else {
      if ((0.0 < *(float *)(lVar4 + 0x154)) &&
         (fVar6 = *(float *)(lVar4 + 0x154) - param_1, *(float *)(lVar4 + 0x154) = fVar6,
         fVar6 <= 0.0)) {
        *(undefined4 *)(lVar4 + 0x168) = 1;
        return;
      }
      if (((*(int *)(lVar4 + 0x168) == 2) && (*(long *)(lVar4 + 0x20) != 0)) &&
         ((*(byte *)(*(long *)(param_2 + 0x20) + 0x84) >> 2 & 1) != 0)) {
        uVar2 = FUN_019807a4();
        if ((((uVar2 & 1) != 0) && (iVar1 = FUN_019807b8(), iVar1 != 0)) &&
           ((*(char *)(lVar4 + 0x164) != '\0' &&
            (pbVar3 = (byte *)FUN_019807cc(0), (*pbVar3 & 1) == 0)))) {
          *(undefined4 *)(lVar4 + 0x168) = 1;
        }
        uVar2 = FUN_019806a4();
        if ((((uVar2 & 1) != 0) && (*(char *)(lVar4 + 0x164) != '\0')) &&
           (uVar2 = FUN_019806f8(0), (uVar2 & 1) != 0)) {
          *(undefined4 *)(lVar4 + 0x168) = 1;
        }
        if (*(char *)(lVar4 + 0x165) != '\0') {
          FUN_00b2760c(lVar4);
        }
      }
    }
    uVar5 = uVar5 + 1;
    if (4 < uVar5) {
      return;
    }
  } while( true );
}




undefined8 FUN_00b27e8c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  uVar2 = 0;
  do {
    lVar1 = *(long *)(param_1 + 0xb8 + lVar3);
    if (*(int *)(lVar1 + 0x168) == 2) {
      FUN_00b26c0c(lVar1,0);
      uVar2 = 1;
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x28);
  return uVar2;
}




void FUN_00b27edc(long param_1,byte *param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  byte *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_40 = param_2 + 1;
  }
  uVar3 = FUN_00b118a0(param_1 + 0x88,&local_40);
  bVar2 = false;
  if ((uVar3 & 1) != 0) {
    local_40 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      local_40 = *(byte **)(param_2 + 0x10);
    }
    piVar4 = (int *)FUN_00b1231c(param_1 + 0x88,&local_40);
    bVar2 = *(int *)(*(long *)(param_1 + (long)*piVar4 * 8 + 0xb8) + 0x168) == 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




void FUN_00b27f98(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  void *__s1;
  long lVar7;
  ulong uVar8;
  
  __n = *(size_t *)(param_2 + 8);
  __s2 = *(byte **)(param_2 + 0x10);
  uVar8 = 0;
  if ((*param_2 & 1) == 0) {
    __s2 = param_2 + 1;
    __n = (ulong)(*param_2 >> 1);
  }
  do {
    lVar7 = *(long *)(param_1 + uVar8 * 8 + 0xb8);
    bVar2 = *(byte *)(lVar7 + 0xda8);
    uVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar1 = *(ulong *)(lVar7 + 0xdb0);
    }
    if (uVar1 == __n) {
      __s1 = *(void **)(lVar7 + 0xdb8);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(lVar7 + 0xda9);
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pbVar4 = (byte *)(lVar7 + 0xda9);
          lVar5 = -(ulong)(bVar2 >> 1);
          pbVar6 = __s2;
          do {
            if (*pbVar4 != *pbVar6) goto LAB_00b28058;
            pbVar4 = pbVar4 + 1;
            lVar5 = lVar5 + 1;
            pbVar6 = pbVar6 + 1;
          } while (lVar5 != 0);
        }
      }
      else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00b28058;
      if (*(int *)(lVar7 + 0x168) == 2) {
        FUN_00b26c0c(lVar7,0);
        return;
      }
    }
LAB_00b28058:
    uVar8 = uVar8 + 1;
    if (4 < uVar8) {
      return;
    }
  } while( true );
}

