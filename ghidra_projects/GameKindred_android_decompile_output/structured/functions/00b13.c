// functions/00b13 — 24 functions
#include "libGameKindred.h"




void FUN_00b130d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = param_3 + 0x208;
  uVar5 = param_2;
  fVar3 = (float)FUN_00f10374(lVar1,0);
  fVar3 = fVar3 * *(float *)(param_3 + 0x4a8);
  fVar7 = (float)uVar5;
  fVar6 = fVar7 * *(float *)(param_3 + 0x4a8);
  fVar4 = (float)FUN_00f10374(lVar1,8);
  lVar2 = param_3 + 0x358;
  fVar4 = fVar4 * *(float *)(param_3 + 0x4a8);
  fVar7 = fVar7 * *(float *)(param_3 + 0x4a8);
  FUN_00f10644(fVar3,0,fVar4,fVar6,0,fVar7,lVar2);
  FUN_00f10644(fVar3,0,fVar4,fVar6,0,fVar7,param_3 + 0xb8);
  FUN_00f10644(fVar3,0,fVar4,fVar6,0,fVar7,lVar1);
  FUN_00f13f08(param_1,param_2,lVar2);
  FUN_00f13f08(param_1,param_2,param_3 + 0xb8);
  FUN_00f13f08(param_1,param_2,lVar1);
  if ((*(float *)(param_3 + 0x398) == 10.0) && (*(float *)(param_3 + 0x39c) == 12.0)) {
    return;
  }
  *(undefined8 *)(param_3 + 0x398) = 0x4140000041200000;
  FUN_0091ada4(lVar2);
  return;
}




void FUN_00b13234(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  FUN_00f13f08();
  *(undefined4 *)(param_4 + 0x4a8) = param_3;
  return;
}




void FUN_00b13264(undefined8 param_1,uint param_2)

{
  FUN_00b12eb0(param_1,param_2 & 1);
  return;
}




void FUN_00b1326c(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_00f105ec(param_2 + 0x208,param_3,2);
  FUN_00b132a8(param_1,param_2);
  return;
}




void FUN_00b132a8(float param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x28c);
  if ((uVar1 >> 7 & 0xff) == (int)(param_1 * 255.0)) {
    return;
  }
  *(uint *)(param_2 + 0x28c) =
       uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(param_1 * 255.0) & 0xffU) << 7;
  FUN_0091ada4(param_2 + 0x208);
  return;
}




void FUN_00b132e0(long param_1)

{
  FUN_00f10698(param_1 + 0x208);
  return;
}




void FUN_00b132e8(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_00f105ec(param_2 + 0xb8,param_3,2);
  FUN_00b13324(param_1,param_2);
  return;
}




void FUN_00b13324(float param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x13c);
  if ((uVar1 >> 7 & 0xff) == (int)(param_1 * 255.0)) {
    return;
  }
  *(uint *)(param_2 + 0x13c) =
       uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(param_1 * 255.0) & 0xffU) << 7;
  FUN_0091ada4(param_2 + 0xb8);
  return;
}




void FUN_00b1335c(long param_1)

{
  FUN_00f10698(param_1 + 0xb8);
  return;
}




void FUN_00b13364(float param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x3dc);
  if ((uVar1 >> 7 & 0xff) == (int)(param_1 * 255.0)) {
    return;
  }
  *(uint *)(param_2 + 0x3dc) =
       uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(param_1 * 255.0) & 0xffU) << 7;
  FUN_0091ada4(param_2 + 0x358);
  return;
}




void FUN_00b1339c(long param_1,undefined8 param_2)

{
  FUN_00f105ec(param_1 + 0x358,param_2,2);
  return;
}




void FUN_00b133a8(long *param_1,byte param_2)

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
  undefined *puVar10;
  long lVar11;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027dca88;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x53;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x71;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x8f;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0xad;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0xcb;
  FUN_00f0e4a8(plVar7);
  plVar8 = param_1 + 0xe9;
  FUN_00f0e4a8(plVar8);
  *(undefined4 *)(param_1 + 0x10a) = 0x3f800000;
  *(byte *)((long)param_1 + 0x854) = param_2 & 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  ppuVar9 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  if (*(char *)((long)param_1 + 0x854) != '\0') {
    ppuVar9 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  }
  puVar10 = *ppuVar9;
  FUN_00f0e540(plVar1,puVar10);
  if ((*(float *)(param_1 + 0x21) != 1.0) || (*(float *)((long)param_1 + 0x10c) != 1.0)) {
    lVar11 = NEON_fmov(0x3f800000,4);
    param_1[0x21] = lVar11;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e540(plVar2,puVar10);
  if ((*(float *)(param_1 + 0x3f) != 0.5) || (*(float *)((long)param_1 + 0x1fc) != 1.0)) {
    param_1[0x3f] = 0x3f8000003f000000;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e540(plVar3,puVar10);
  if ((*(float *)(param_1 + 0x5d) != 0.0) || (*(float *)((long)param_1 + 0x2ec) != 1.0)) {
    param_1[0x5d] = 0x3f80000000000000;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e540(plVar4,puVar10);
  if ((*(float *)(param_1 + 0x7b) != 1.0) || (*(float *)((long)param_1 + 0x3dc) != 0.0)) {
    param_1[0x7b] = 0x3f800000;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e540(plVar5,puVar10);
  if ((*(float *)(param_1 + 0x99) != 0.5) || (*(float *)((long)param_1 + 0x4cc) != 0.0)) {
    param_1[0x99] = 0x3f000000;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e540(plVar6,puVar10);
  if ((*(float *)(param_1 + 0xb7) != 0.0) || (*(float *)((long)param_1 + 0x5bc) != 0.0)) {
    param_1[0xb7] = 0;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0e540(plVar7,puVar10);
  if ((*(float *)(param_1 + 0xd5) != 1.0) || (*(float *)((long)param_1 + 0x6ac) != 0.5)) {
    param_1[0xd5] = 0x3f0000003f800000;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0e540(plVar8,puVar10);
  if ((*(float *)(param_1 + 0xf3) != 0.0) || (*(float *)((long)param_1 + 0x79c) != 0.5)) {
    param_1[0xf3] = 0x3f00000000000000;
    FUN_0091ada4(plVar8);
  }
  FUN_00b13714(param_1,0);
  return;
}




void FUN_00b13714(undefined1 param_1 [16],undefined4 param_2,long *param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  long local_38;
  undefined8 *puVar3;
  
  puVar4 = local_40;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (DAT_03139b68 == '\0') {
    FUN_00b137f4();
  }
  if (*(char *)((long)param_3 + 0x854) == '\0') {
    puVar3 = &DAT_03139ba0;
    local_40[0] = param_4;
  }
  else {
    puVar3 = &DAT_03139b70;
    puVar4 = local_3c;
    local_3c[0] = param_4;
  }
  lVar2 = FUN_00b13828(puVar3,puVar4);
  if (lVar2 != 0) {
    FUN_00b138c4(param_3,lVar2);
  }
  uVar5 = FUN_00f0e700(param_3 + 0x17);
  *(undefined4 *)(param_3 + 0x107) = uVar5;
  *(undefined4 *)((long)param_3 + 0x83c) = param_2;
  uVar5 = FUN_00f0e700(param_3 + 0x35);
  *(undefined4 *)(param_3 + 0x108) = uVar5;
  *(undefined4 *)((long)param_3 + 0x844) = param_2;
  uVar5 = FUN_00f0e700(param_3 + 0xcb);
  *(undefined4 *)(param_3 + 0x109) = uVar5;
  *(undefined4 *)((long)param_3 + 0x84c) = param_2;
  (**(code **)(*param_3 + 0xe8))(param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b137f4(void)

{
  if (DAT_03139b68 == '\0') {
    FUN_00b13f4c();
    FUN_00b144e8();
    DAT_03139b68 = '\x01';
  }
  return;
}




long FUN_00b13828(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = FUN_0091ed5c(0,0,*param_2);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar5 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar4 / uVar2;
    }
    uVar3 = uVar4 - uVar3 * uVar2;
    while ((*(uint *)(lVar5 + (ulong)uVar3 * 8) != uVar4 &&
           (*(int *)(lVar5 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if ((uVar3 != 0xffffffff) &&
       (uVar2 = *(uint *)(lVar5 + (ulong)uVar3 * 8 + 4), uVar2 != 0xffffffff)) {
      return *(long *)(param_1 + 8) + (ulong)uVar2 * 0xc0;
    }
  }
  return 0;
}




void FUN_00b138c4(long param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  FUN_00f0e578(param_1 + 0xb8,pbVar1);
  pbVar1 = param_2 + 0x19;
  if ((param_2[0x18] & 1) != 0) {
    pbVar1 = *(byte **)(param_2 + 0x28);
  }
  FUN_00f0e578(param_1 + 0x1a8,pbVar1);
  pbVar1 = param_2 + 0x31;
  if ((param_2[0x30] & 1) != 0) {
    pbVar1 = *(byte **)(param_2 + 0x40);
  }
  FUN_00f0e578(param_1 + 0x298,pbVar1);
  pbVar1 = param_2 + 0x49;
  if ((param_2[0x48] & 1) != 0) {
    pbVar1 = *(byte **)(param_2 + 0x58);
  }
  FUN_00f0e578(param_1 + 0x388,pbVar1);
  pbVar1 = param_2 + 0x61;
  if ((param_2[0x60] & 1) != 0) {
    pbVar1 = *(byte **)(param_2 + 0x70);
  }
  FUN_00f0e578(param_1 + 0x478,pbVar1);
  pbVar1 = param_2 + 0x79;
  if ((param_2[0x78] & 1) != 0) {
    pbVar1 = *(byte **)(param_2 + 0x88);
  }
  FUN_00f0e578(param_1 + 0x568,pbVar1);
  pbVar1 = param_2 + 0x91;
  if ((param_2[0x90] & 1) != 0) {
    pbVar1 = *(byte **)(param_2 + 0xa0);
  }
  FUN_00f0e578(param_1 + 0x658,pbVar1);
  pbVar1 = param_2 + 0xa9;
  if ((param_2[0xa8] & 1) != 0) {
    pbVar1 = *(byte **)(param_2 + 0xb8);
  }
  FUN_00f0e578(param_1 + 0x748,pbVar1);
  return;
}




void FUN_00b139bc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b139c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}




void FUN_00b139c8(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  FUN_00f13f08();
  *(undefined4 *)(param_4 + 0x850) = param_3;
  return;
}




void FUN_00b139f8(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = (**(code **)(*param_3 + 0x48))();
  (**(code **)(*param_3 + 0x48))(param_3);
  fVar1 = *(float *)(param_3 + 0x10a);
  fVar3 = *(float *)(param_3 + 0x109);
  fVar4 = fVar1 * *(float *)(param_3 + 0x107);
  fVar5 = fVar1 * *(float *)((long)param_3 + 0x83c);
  fVar6 = fVar1 * *(float *)((long)param_3 + 0x844);
  FUN_00f13f08(fVar4,fVar5,param_3 + 0x17);
  FUN_00f13f08(fVar4,fVar5,param_3 + 0x53);
  FUN_00f13f08(fVar4,fVar5,param_3 + 0x71);
  FUN_00f13f08(fVar4,fVar5,param_3 + 0xad);
  FUN_00f13f08(uVar2,fVar6,param_3 + 0x35);
  FUN_00f13f08(uVar2,fVar6,param_3 + 0x8f);
  FUN_00f13f08(fVar1 * fVar3,param_2,param_3 + 0xcb);
  FUN_00f13f08(fVar1 * fVar3,param_2,param_3 + 0xe9);
  fVar1 = (float)uVar2 * -0.5;
  fVar3 = (float)param_2 * -0.5;
  if ((*(float *)(param_3 + 0x1f) != fVar1) || (*(float *)((long)param_3 + 0xfc) != fVar3)) {
    *(float *)(param_3 + 0x1f) = fVar1;
    *(float *)((long)param_3 + 0xfc) = fVar3;
    FUN_0091ada4(param_3 + 0x17);
  }
  fVar4 = (float)uVar2 * 0.5;
  if ((*(float *)(param_3 + 0x5b) != fVar4) || (*(float *)((long)param_3 + 0x2dc) != fVar3)) {
    *(float *)(param_3 + 0x5b) = fVar4;
    *(float *)((long)param_3 + 0x2dc) = fVar3;
    FUN_0091ada4(param_3 + 0x53);
  }
  if ((*(float *)(param_3 + 0x3d) != 0.0) || (*(float *)((long)param_3 + 0x1ec) != fVar3)) {
    *(undefined4 *)(param_3 + 0x3d) = 0;
    *(float *)((long)param_3 + 0x1ec) = fVar3;
    FUN_0091ada4(param_3 + 0x35);
  }
  fVar3 = (float)param_2 * 0.5;
  if ((*(float *)(param_3 + 0x79) != fVar1) || (*(float *)((long)param_3 + 0x3cc) != fVar3)) {
    *(float *)(param_3 + 0x79) = fVar1;
    *(float *)((long)param_3 + 0x3cc) = fVar3;
    FUN_0091ada4(param_3 + 0x71);
  }
  if ((*(float *)(param_3 + 0xb5) != fVar4) || (*(float *)((long)param_3 + 0x5ac) != fVar3)) {
    *(float *)(param_3 + 0xb5) = fVar4;
    *(float *)((long)param_3 + 0x5ac) = fVar3;
    FUN_0091ada4(param_3 + 0xad);
  }
  if ((*(float *)(param_3 + 0x97) != 0.0) || (*(float *)((long)param_3 + 0x4bc) != fVar3)) {
    *(undefined4 *)(param_3 + 0x97) = 0;
    *(float *)((long)param_3 + 0x4bc) = fVar3;
    FUN_0091ada4(param_3 + 0x8f);
  }
  if ((*(float *)(param_3 + 0xd3) != fVar1) || (*(float *)((long)param_3 + 0x69c) != 0.0)) {
    *(float *)(param_3 + 0xd3) = fVar1;
    *(undefined4 *)((long)param_3 + 0x69c) = 0;
    FUN_0091ada4(param_3 + 0xcb);
  }
  if ((*(float *)(param_3 + 0xf1) == fVar4) && (*(float *)((long)param_3 + 0x78c) == 0.0)) {
    return;
  }
  *(float *)(param_3 + 0xf1) = fVar4;
  *(undefined4 *)((long)param_3 + 0x78c) = 0;
  FUN_0091ada4(param_3 + 0xe9);
  return;
}




void FUN_00b13cac(undefined8 param_1,uint param_2)

{
  FUN_00b13714(param_1,param_2 & 1);
  return;
}




void FUN_00b13cb4(float param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  
  FUN_00f0e670(param_2 + 0xb8,param_3,2);
  FUN_00f0e670(param_2 + 0x1a8,param_3,2);
  FUN_00f0e670(param_2 + 0x298,param_3,2);
  FUN_00f0e670(param_2 + 0x388,param_3,2);
  FUN_00f0e670(param_2 + 0x478,param_3,2);
  FUN_00f0e670(param_2 + 0x568,param_3,2);
  FUN_00f0e670(param_2 + 0x658,param_3,2);
  FUN_00f0e670(param_2 + 0x748,param_3,2);
  uVar1 = *(uint *)(param_2 + 0x84);
  if ((uVar1 >> 7 & 0xff) == (int)(param_1 * 255.0)) {
    return;
  }
  *(uint *)(param_2 + 0x84) =
       uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(param_1 * 255.0) & 0xffU) << 7;
  FUN_0091ada4(param_2);
  return;
}




void FUN_00b13d98(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x13c);
  uVar2 = (uint)(param_1 * 255.0);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_2 + 0x13c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_0091ada4(param_2 + 0xb8);
  }
  uVar1 = *(uint *)(param_2 + 0x22c);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_2 + 0x22c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_0091ada4(param_2 + 0x1a8);
  }
  uVar1 = *(uint *)(param_2 + 0x31c);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_2 + 0x31c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_0091ada4(param_2 + 0x298);
  }
  uVar1 = *(uint *)(param_2 + 0x40c);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_2 + 0x40c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_0091ada4(param_2 + 0x388);
  }
  uVar1 = *(uint *)(param_2 + 0x4fc);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_2 + 0x4fc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_0091ada4(param_2 + 0x478);
  }
  uVar1 = *(uint *)(param_2 + 0x5ec);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_2 + 0x5ec) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_0091ada4(param_2 + 0x568);
  }
  uVar1 = *(uint *)(param_2 + 0x6dc);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_2 + 0x6dc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_0091ada4(param_2 + 0x658);
  }
  uVar1 = *(uint *)(param_2 + 0x7cc);
  if ((uVar1 >> 7 & 0xff) == uVar2) {
    return;
  }
  *(uint *)(param_2 + 0x7cc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
  FUN_0091ada4(param_2 + 0x748);
  return;
}




void FUN_00b13ecc(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      if (*(int *)(*(long *)(param_1 + 2) + lVar3) != -1) {
        FUN_00b154bc(param_1);
        uVar1 = (ulong)*param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar1);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_00b13f4c(void)

{
  long lVar1;
  long lVar2;
  byte local_290 [16];
  void *local_280;
  byte local_278 [16];
  void *local_268;
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  byte local_1d0 [16];
  undefined8 local_1c0;
  byte local_1b8 [16];
  void *local_1a8;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  byte local_110 [16];
  undefined8 local_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  byte local_50 [16];
  long local_40 [2];
  
  lVar1 = tpidr_el0;
  local_40[1] = *(long *)(lVar1 + 0x28);
  if (DAT_03139b68 == '\0') {
    memset(auStack_f8,0,0xc0);
    FUN_008fa54c(local_1b8,"square_button_top_left");
    FUN_008fce60(auStack_f8,local_1b8);
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    FUN_008fa54c(local_1b8,"square_button_top_middle");
    FUN_008fce60(auStack_e0,local_1b8);
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    FUN_008fa54c(local_1b8,"square_button_top_right");
    FUN_008fce60(auStack_c8,local_1b8);
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    FUN_008fa54c(local_1b8,"square_button_bottom_left");
    FUN_008fce60(auStack_b0,local_1b8);
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    FUN_008fa54c(local_1b8,"square_button_bottom_middle");
    FUN_008fce60(auStack_98,local_1b8);
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    FUN_008fa54c(local_1b8,"square_button_bottom_right");
    FUN_008fce60(auStack_80,local_1b8);
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    FUN_008fa54c(local_1b8,"square_button_middle_left");
    FUN_008fce60(auStack_68,local_1b8);
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    FUN_008fa54c(local_1b8,"square_button_middle_right");
    FUN_008fce60(local_50,local_1b8);
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    local_1b8[0] = 0;
    FUN_00b146fc(&DAT_03139ba0,local_1b8,auStack_f8);
    memset(local_1b8,0,0xc0);
    FUN_008fa54c(local_278,"gradient_button_top_left");
    FUN_008fce60(local_1b8,local_278);
    if ((local_278[0] & 1) != 0) {
      operator_delete(local_268);
    }
    FUN_008fa54c(local_278,"gradient_button_top_middle");
    FUN_008fce60(auStack_1a0,local_278);
    if ((local_278[0] & 1) != 0) {
      operator_delete(local_268);
    }
    FUN_008fa54c(local_278,"gradient_button_top_right");
    FUN_008fce60(auStack_188,local_278);
    if ((local_278[0] & 1) != 0) {
      operator_delete(local_268);
    }
    FUN_008fa54c(local_278,"gradient_button_bottom_left");
    FUN_008fce60(auStack_170,local_278);
    if ((local_278[0] & 1) != 0) {
      operator_delete(local_268);
    }
    FUN_008fa54c(local_278,"gradient_button_bottom_middle");
    FUN_008fce60(auStack_158,local_278);
    if ((local_278[0] & 1) != 0) {
      operator_delete(local_268);
    }
    FUN_008fa54c(local_278,"gradient_button_bottom_right");
    FUN_008fce60(auStack_140,local_278);
    if ((local_278[0] & 1) != 0) {
      operator_delete(local_268);
    }
    FUN_008fa54c(local_278,"gradient_button_middle_left");
    FUN_008fce60(auStack_128,local_278);
    if ((local_278[0] & 1) != 0) {
      operator_delete(local_268);
    }
    FUN_008fa54c(local_278,"gradient_button_middle_right");
    FUN_008fce60(local_110,local_278);
    if ((local_278[0] & 1) != 0) {
      operator_delete(local_268);
    }
    local_278[0] = 1;
    FUN_00b146fc(&DAT_03139ba0,local_278,local_1b8);
    memset(local_278,0,0xc0);
    FUN_008fa54c(local_290,"upgrade_glow_top_left");
    FUN_008fce60(local_278,local_290);
    if ((local_290[0] & 1) != 0) {
      operator_delete(local_280);
    }
    FUN_008fa54c(local_290,"upgrade_glow_top_middle");
    FUN_008fce60(auStack_260,local_290);
    if ((local_290[0] & 1) != 0) {
      operator_delete(local_280);
    }
    FUN_008fa54c(local_290,"upgrade_glow_top_right");
    FUN_008fce60(auStack_248,local_290);
    if ((local_290[0] & 1) != 0) {
      operator_delete(local_280);
    }
    FUN_008fa54c(local_290,"upgrade_glow_bottom_left");
    FUN_008fce60(auStack_230,local_290);
    if ((local_290[0] & 1) != 0) {
      operator_delete(local_280);
    }
    FUN_008fa54c(local_290,"upgrade_glow_bottom_middle");
    FUN_008fce60(auStack_218,local_290);
    if ((local_290[0] & 1) != 0) {
      operator_delete(local_280);
    }
    FUN_008fa54c(local_290,"upgrade_glow_bottom_right");
    FUN_008fce60(auStack_200,local_290);
    if ((local_290[0] & 1) != 0) {
      operator_delete(local_280);
    }
    FUN_008fa54c(local_290,"upgrade_glow_middle_left");
    FUN_008fce60(auStack_1e8,local_290);
    if ((local_290[0] & 1) != 0) {
      operator_delete(local_280);
    }
    FUN_008fa54c(local_290,"upgrade_glow_middle_right");
    FUN_008fce60(local_1d0,local_290);
    if ((local_290[0] & 1) != 0) {
      operator_delete(local_280);
    }
    local_290[0] = 2;
    FUN_00b146fc(&DAT_03139ba0,local_290,local_278);
    lVar2 = 0;
    do {
      if ((local_1d0[lVar2] & 1) != 0) {
        operator_delete(*(void **)((long)&local_1c0 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0xc0);
    lVar2 = 0;
    do {
      if ((local_110[lVar2] & 1) != 0) {
        operator_delete(*(void **)((long)&local_100 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0xc0);
    lVar2 = 0;
    do {
      if ((local_50[lVar2] & 1) != 0) {
        operator_delete(*(void **)((long)local_40 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0xc0);
  }
  if (*(long *)(lVar1 + 0x28) == local_40[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

