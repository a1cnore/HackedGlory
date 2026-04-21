// functions/00ad5 — 11 functions
#include "libGameKindred.h"




void FUN_00ad501c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d76c0;
  FUN_009c7fa8(param_1 + 0x18d2);
  FUN_009c7fa8(param_1 + 0x161a);
  FUN_00f13d08(param_1 + 0x1601);
  FUN_009c7fa8(param_1 + 0x1349);
  param_1[0x132b] = &PTR_FUN_028266f0;
  param_1[0x1342] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1345);
  FUN_00f13d08(param_1 + 0x132b);
  FUN_009c7fa8(param_1 + 0x1073);
  FUN_00ad4f34(param_1 + 0xff7);
  FUN_00ad4f34(param_1 + 0xf7b);
  FUN_00ad4fa4(param_1 + 0xe85);
  FUN_00ad4f34(param_1 + 0xe09);
  FUN_00f13d08(param_1 + 0xdf0);
  FUN_00ad4f34(param_1 + 0xd74);
  FUN_00ad4f34(param_1 + 0xcf8);
  FUN_00ad4fa4(param_1 + 0xc02);
  FUN_00ad4f34(param_1 + 0xb86);
  FUN_00f13d08(param_1 + 0xb6d);
  param_1[0x891] = &PTR_FUN_027d9188;
  if ((void *)param_1[0xb6b] != (void *)0x0) {
    operator_delete__((void *)param_1[0xb6b]);
    param_1[0xb6b] = 0;
    param_1[0xb6a] = 0;
  }
  if ((*(byte *)(param_1 + 0xb67) & 1) != 0) {
    operator_delete((void *)param_1[0xb69]);
  }
  param_1[0xb49] = &PTR_FUN_028266f0;
  param_1[0xb60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb63);
  FUN_00f13d08(param_1 + 0xb49);
  FUN_009c7fa8(param_1 + 0x891);
  param_1[0x5b5] = &PTR_FUN_027d9188;
  if ((void *)param_1[0x88f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x88f]);
    param_1[0x88f] = 0;
    param_1[0x88e] = 0;
  }
  if ((*(byte *)(param_1 + 0x88b) & 1) != 0) {
    operator_delete((void *)param_1[0x88d]);
  }
  param_1[0x86d] = &PTR_FUN_028266f0;
  param_1[0x884] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x887);
  FUN_00f13d08(param_1 + 0x86d);
  FUN_009c7fa8(param_1 + 0x5b5);
  param_1[0x2d9] = &PTR_FUN_027d9188;
  if ((void *)param_1[0x5b3] != (void *)0x0) {
    operator_delete__((void *)param_1[0x5b3]);
    param_1[0x5b3] = 0;
    param_1[0x5b2] = 0;
  }
  if ((*(byte *)(param_1 + 0x5af) & 1) != 0) {
    operator_delete((void *)param_1[0x5b1]);
  }
  param_1[0x591] = &PTR_FUN_028266f0;
  param_1[0x5a8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5ab);
  FUN_00f13d08(param_1 + 0x591);
  FUN_009c7fa8(param_1 + 0x2d9);
  param_1[0x2b5] = &PTR_FUN_028266f0;
  param_1[0x2cc] = &PTR_FUN_02826850;
  param_1[0x21a] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0x2cf);
  FUN_00f13d08(param_1 + 0x2b5);
  param_1[0x297] = &PTR_FUN_028266f0;
  param_1[0x2ae] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b1);
  FUN_00f13d08(param_1 + 0x297);
  param_1[0x279] = &PTR_FUN_028266f0;
  param_1[0x290] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x293);
  FUN_00f13d08(param_1 + 0x279);
  FUN_00f01868(param_1 + 0x268);
  FUN_009c825c(param_1 + 0x21a);
  FUN_00f0d3a4(param_1 + 500);
  FUN_00f0d3a4(param_1 + 0x1ce);
  param_1[0x10f] = &PTR_FUN_027d5388;
  param_1[0x1aa] = &PTR_FUN_028266f0;
  param_1[0x1c1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1c4);
  FUN_00f13d08(param_1 + 0x1aa);
  param_1[0x18c] = &PTR_FUN_028266f0;
  param_1[0x1a3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a6);
  FUN_00f13d08(param_1 + 0x18c);
  param_1[0x16e] = &PTR_FUN_028266f0;
  param_1[0x185] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x188);
  FUN_00f13d08(param_1 + 0x16e);
  FUN_00f01868(param_1 + 0x15d);
  FUN_009c825c(param_1 + 0x10f);
  FUN_00f0d3a4(param_1 + 0xe9);
  FUN_00f0d3a4(param_1 + 0xc3);
  FUN_00f13d08(param_1 + 0xaa);
  FUN_00f13d08(param_1 + 0x93);
  FUN_00f01868(param_1 + 0x82);
  param_1[100] = &PTR_FUN_028266f0;
  param_1[0x7b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7e);
  FUN_00f13d08(param_1 + 100);
  param_1[0x46] = &PTR_FUN_028266f0;
  param_1[0x5d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x60);
  FUN_00f13d08(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_028266f0;
  param_1[0x3f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ad5438(void *param_1)

{
  FUN_00ad501c();
  operator_delete(param_1);
  return;
}




void FUN_00ad545c(long *param_1)

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
  uint uVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float local_90;
  float fStack_8c;
  long local_88;
  
  lVar11 = tpidr_el0;
  local_88 = *(long *)(lVar11 + 0x28);
  FUN_00b08d84();
  plVar1 = param_1 + 0x4e;
  *param_1 = (long)&PTR_FUN_027d7808;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x74;
  FUN_00b123bc(plVar2);
  plVar3 = param_1 + 0x121;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x13f;
  FUN_00f017e8(plVar4);
  plVar5 = param_1 + 0x150;
  param_1[0x13f] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0x16e;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0x18c;
  FUN_00f0e4a8(plVar7);
  plVar8 = param_1 + 0x1aa;
  FUN_00f0e4a8(plVar8);
  plVar9 = param_1 + 0x1c8;
  FUN_00f0e4a8(plVar9);
  *(undefined4 *)(param_1 + 0x1e6) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0xf34) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar4,plVar6,1);
  FUN_00f023ec(plVar4,plVar7,1);
  FUN_00f023ec(plVar4,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  uVar10 = *(uint *)((long)param_1 + 0x2f4);
  if ((uVar10 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x2f4) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x6600;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0da30(plVar1,1);
  if ((*(float *)(param_1 + 0x58) != 0.5) || (*(float *)((long)param_1 + 0x2c4) != 1.0)) {
    param_1[0x58] = 0x3f8000003f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00b1265c(0x42c80000,0x42c80000,0x40800000,plVar2);
  FUN_00b128a0(0x3f800000,plVar2,&DAT_01bee7fa);
  fVar13 = 96.0;
  FUN_00f13f08(0x42c00000,plVar3);
  if ((*(float *)(param_1 + 299) != 0.5) || (*(float *)((long)param_1 + 0x95c) != 0.5)) {
    param_1[299] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"corner_vignette");
  local_90 = (float)FUN_00f0eac0(plVar3);
  local_90 = local_90 * 1.5;
  fStack_8c = fVar13 * 1.5;
  fVar13 = fStack_8c;
  FUN_00f13f18(plVar5,&local_90);
  FUN_00f0e670(plVar5,&DAT_01bee7f6,2);
  if ((*(float *)(param_1 + 0x15a) != 1.0) || (*(float *)((long)param_1 + 0xad4) != 1.0)) {
    lVar12 = NEON_fmov(0x3f800000,4);
    param_1[0x15a] = lVar12;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"corner_vignette");
  local_90 = (float)FUN_00f0eac0(plVar3);
  local_90 = local_90 * 1.5;
  fStack_8c = fVar13 * 1.5;
  fVar13 = fStack_8c;
  FUN_00f13f18(plVar6,&local_90);
  FUN_00f0e670(plVar6,&DAT_01bee7f6,2);
  if ((*(float *)(param_1 + 0x178) != 0.0) || (*(float *)((long)param_1 + 0xbc4) != 1.0)) {
    param_1[0x178] = 0x3f80000000000000;
    FUN_0091ada4(plVar6);
  }
  *(byte *)(param_1 + 0x189) = *(byte *)(param_1 + 0x189) | 1;
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"corner_vignette");
  local_90 = (float)FUN_00f0eac0(plVar3);
  local_90 = local_90 * 1.5;
  fStack_8c = fVar13 * 1.5;
  fVar13 = fStack_8c;
  FUN_00f13f18(plVar7,&local_90);
  FUN_00f0e670(plVar7,&DAT_01bee7f6,2);
  if ((*(float *)(param_1 + 0x196) != 1.0) || (*(float *)((long)param_1 + 0xcb4) != 0.0)) {
    param_1[0x196] = 0x3f800000;
    FUN_0091ada4(plVar7);
  }
  *(byte *)(param_1 + 0x1a7) = *(byte *)(param_1 + 0x1a7) | 2;
  FUN_00f0e548(plVar8,PTR_s_build___MenuPartsCommon_tga_02be3530,"corner_vignette");
  local_90 = (float)FUN_00f0eac0(plVar3);
  local_90 = local_90 * 1.5;
  fStack_8c = fVar13 * 1.5;
  FUN_00f13f18(plVar8,&local_90);
  FUN_00f0e670(plVar8,&DAT_01bee7f6,2);
  uVar10 = *(uint *)((long)param_1 + 0xa7c);
  *(byte *)(param_1 + 0x1c5) = *(byte *)(param_1 + 0x1c5) | 3;
  if ((uVar10 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0xa7c) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x3300;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar9,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f13f08(0x42c00000,0x42c00000,plVar9);
  if ((*(float *)(param_1 + 0x1d2) != 0.5) || (*(float *)((long)param_1 + 0xe94) != 0.5)) {
    param_1[0x1d2] = 0x3f0000003f000000;
    FUN_0091ada4(plVar9);
  }
  if ((*(uint *)((long)param_1 + 0xec4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0xec4) = *(uint *)((long)param_1 + 0xec4) & 0xffff807f;
    FUN_0091ada4(plVar9);
  }
  FUN_00ad5980(param_1);
  if (*(long *)(lVar11 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad5980(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + 0x3a0;
  fVar4 = *(float *)(param_1 + 0xf30) * 100.0;
  FUN_00b1265c(fVar4,fVar4,0x40800000,lVar1);
  fVar4 = (float)FUN_00f13e54(lVar1);
  fVar5 = *(float *)(param_1 + 0x3e0);
  if (fVar5 != fVar4 * -0.5) {
    *(float *)(param_1 + 0x3e0) = fVar4 * -0.5;
    FUN_0091ada4(lVar1);
  }
  FUN_00f13e54(lVar1);
  if (*(float *)(param_1 + 0x2b4) != fVar5 * -0.5) {
    *(float *)(param_1 + 0x2b4) = fVar5 * -0.5;
    FUN_0091ada4(param_1 + 0x270);
  }
  fVar4 = *(float *)(param_1 + 0xf30);
  lVar2 = param_1 + 0x908;
  if ((*(float *)(param_1 + 0x950) != fVar4) || (*(float *)(param_1 + 0x954) != fVar4)) {
    *(float *)(param_1 + 0x950) = fVar4;
    *(float *)(param_1 + 0x954) = fVar4;
    FUN_0091ada4(lVar2);
    fVar4 = *(float *)(param_1 + 0xf30);
  }
  fVar5 = *(float *)(param_1 + 0xe88);
  if ((fVar5 != fVar4) || (fVar5 = *(float *)(param_1 + 0xe8c), fVar5 != fVar4)) {
    *(float *)(param_1 + 0xe88) = fVar4;
    *(float *)(param_1 + 0xe8c) = fVar4;
    FUN_0091ada4(param_1 + 0xe40);
  }
  local_50 = (float)FUN_00f0eac0(lVar2);
  local_50 = local_50 * 0.5;
  fStack_4c = fVar5 * 0.5;
  fVar4 = fStack_4c;
  FUN_00f13f18(param_1 + 0xa80,&local_50);
  local_50 = (float)FUN_00f0eac0(lVar2);
  local_50 = local_50 * 0.5;
  fStack_4c = fVar4 * 0.5;
  fVar4 = fStack_4c;
  FUN_00f13f18(param_1 + 0xb70,&local_50);
  local_50 = (float)FUN_00f0eac0(lVar2);
  local_50 = local_50 * 0.5;
  fStack_4c = fVar4 * 0.5;
  fVar4 = fStack_4c;
  FUN_00f13f18(param_1 + 0xc60,&local_50);
  local_50 = (float)FUN_00f0eac0(lVar2);
  local_50 = local_50 * 0.5;
  fStack_4c = fVar4 * 0.5;
  fVar4 = fStack_4c;
  FUN_00f13f18(param_1 + 0xd50,&local_50);
  local_50 = (float)FUN_00f13e54(lVar1);
  fStack_4c = fVar4;
  FUN_00f13f18(param_1,&local_50);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ad5b54(long param_1,byte *param_2,byte *param_3,undefined8 param_4)

{
  long lVar1;
  byte *pbVar2;
  
  lVar1 = param_1 + 0x908;
  FUN_00f0e628(lVar1);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  FUN_00f0e540(lVar1,pbVar2);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
  }
  FUN_00f0e578(lVar1,pbVar2);
  FUN_00f0d75c(param_1 + 0x270,param_4);
  return;
}




void FUN_00ad5bd0(long *param_1,byte param_2)

{
  *(byte *)((long)param_1 + 0xf34) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00ad5be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1,~param_2 & 1);
  return;
}




void FUN_00ad5bec(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  
  FUN_00b09454(param_2,0);
  uVar2 = *(uint *)(param_2 + 0x84);
  *(uint *)(param_2 + 0x84) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = uVar2 & 0xffff807f | 4;
    FUN_0091ada4(param_2);
  }
  if ((*(float *)(param_2 + 0x48) != 2.2) || (*(float *)(param_2 + 0x4c) != 2.2)) {
    *(undefined8 *)(param_2 + 0x48) = 0x400ccccd400ccccd;
    FUN_0091ada4(param_2);
  }
  uVar3 = FUN_00efed6c(param_1);
  uVar4 = FUN_00efee28(0x3f800000,0x3e99999a,FUN_009a7608);
  uVar5 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e99999a,FUN_009a7608);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar7);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar7,uVar4,uVar5,0);
  lVar1 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar6 * 0x40);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_027c27b8;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0x12] = 0;
    puVar8[0x13] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(code **)(puVar8 + 8) = FUN_00ad5eb0;
  *(long *)(puVar8 + 0x10) = param_2;
  FUN_00f01980(param_2);
  FUN_00f02308(param_2,uVar3,puVar7,puVar8,0);
  lVar1 = param_2 + 0xe40;
  if ((~*(uint *)(param_2 + 0xec4) & 0x7f80) != 0) {
    *(uint *)(param_2 + 0xec4) = *(uint *)(param_2 + 0xec4) | 0x7f80;
    FUN_0091ada4(lVar1);
  }
  uVar3 = FUN_00efed6c(param_1);
  uVar4 = FUN_00efee28(0,0x3e99999a,FUN_00a53a7c);
  FUN_00f01980(lVar1);
  FUN_00f02308(lVar1,uVar3,uVar4,0);
  return;
}




void FUN_00ad5eb0(undefined8 param_1)

{
  FUN_00b09454(param_1,1);
  return;
}




void FUN_00ad5eb8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xf30) = param_1;
  FUN_00ad5980();
  return;
}




void FUN_00ad5ec0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  uVar2 = FUN_00eff63c(*(undefined4 *)(param_1 + 0xf30),*(undefined4 *)(param_1 + 0xf30),0x3daaaaab,
                       FUN_0091aa80);
  param_1 = param_1 + 0x908;
  uVar3 = FUN_00eff108(0x3daaaaab,param_1,&DAT_01bee7fa,FUN_0091aa80,2);
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar5);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar5,uVar2,uVar3,0);
  FUN_00f01980(param_1);
  FUN_00f022a0(param_1,puVar5);
  return;
}




void FUN_00ad5ff0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  float fVar7;
  undefined4 local_60 [2];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar7 = *(float *)(param_1 + 0xf30) * 0.9;
  uVar3 = FUN_00eff63c(fVar7,fVar7,0x3daaaaab,FUN_0091aa80);
  param_1 = param_1 + 0x908;
  local_60[0] = 0xffa0a0a0;
  uVar4 = FUN_00eff108(0x3daaaaab,param_1,local_60,FUN_0091aa80,2);
  lVar2 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcd98(puVar6);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar6,uVar3,uVar4,0);
  FUN_00f01980(param_1);
  FUN_00f022a0(param_1,puVar6);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

