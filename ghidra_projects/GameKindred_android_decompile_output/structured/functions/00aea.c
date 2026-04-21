// functions/00aea — 15 functions
#include "libGameKindred.h"




void FUN_00aea1c8(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1230) = param_2 & 1;
  FUN_00ae8fe0();
  return;
}




void FUN_00aea1d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d9088;
  param_1[0x6b] = &PTR_FUN_028266f0;
  param_1[0x82] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x85);
  FUN_00f13d08(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_028266f0;
  param_1[100] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00aea298(undefined8 *param_1)

{
  FUN_00ab6c24(param_1,0);
  *param_1 = &PTR_FUN_027d9188;
  FUN_00f0e4a8(param_1 + 0x2b8);
  param_1[0x2d8] = 0;
  param_1[0x2d7] = 0;
  param_1[0x2d6] = 0;
  FUN_00e70510(param_1 + 0x2d9);
  *(undefined1 *)(param_1 + 0x2db) = 0;
  FUN_00f0e540(param_1 + 0x2b8,PTR_s_build___MenuPartsCommon_tga_02be3530);
  return;
}




void FUN_00aea30c(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_008fce60(param_1 + 0x2d6);
  FUN_00910394(param_1 + 0x2d9,param_2 + 0x18);
  uVar2 = *(uint *)(param_2 + 0x28);
  *(uint *)(param_1 + 0x2db) = uVar2;
  if ((uVar2 & 0xff) != 0) {
    plVar1 = param_1 + 0x2b8;
    uVar4 = FUN_00f02540(plVar1);
    if ((uVar4 & 1) != 0) {
      FUN_00f01a4c(plVar1,1);
    }
    (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
    FUN_00f0e578(plVar1,"generic_external_link");
    if ((*(float *)(param_1 + 0x2c2) != 0.5) || (*(float *)((long)param_1 + 0x1614) != 0.5)) {
      param_1[0x2c2] = 0x3f0000003f000000;
      FUN_0091ada4(plVar1);
    }
    if ((*(uint *)((long)param_1 + 0x1644) & 0x7f80) != 0x3f80) {
      *(uint *)((long)param_1 + 0x1644) = *(uint *)((long)param_1 + 0x1644) & 0xffff807f | 0x3f80;
      FUN_0091ada4(plVar1);
    }
    local_50 = DAT_03210c64;
    local_78 = thunk_FUN_00aea57c;
    local_60 = 0;
    uStack_58 = 0;
    local_68 = 0;
    plStack_70 = param_1;
    FUN_009693a0(param_1 + 1,&local_78);
    FUN_00ab7498(param_1,param_1 + 0x2d9);
    *(uint *)((long)param_1 + 0x1644) = *(uint *)((long)param_1 + 0x1644) | 0x10;
    fVar5 = (float)(**(code **)(*param_1 + 0x30))(param_1);
    fVar6 = (float)FUN_00f0e700(plVar1);
    (**(code **)(*param_1 + 0x30))(param_1);
    (**(code **)(*param_1 + 0x38))(fVar5 + fVar6 * 0.5,param_1);
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00aea57c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_009b8d90();
  FUN_009bb46c(uVar3,param_1 + 0x16b0,&DAT_0320ffa8,*(undefined1 *)(param_1 + 0x16da),0);
  uVar2 = FUN_00f048a4("UI::EVENT_LEAVE_APP");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aea4d4(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  FUN_00ab7d60();
  if (*(char *)(param_1 + 0x16d8) != '\0') {
    fVar3 = *(float *)(param_1 + 0x760);
    fVar1 = (float)FUN_00f01c20(param_1 + 0x720);
    fVar2 = (float)FUN_00f0e700(param_1 + 0x15c0);
    fVar1 = fVar3 + fVar1 * 0.5 + fVar2 * 0.5 + 20.0;
    if ((*(float *)(param_1 + 0x1600) != fVar1) ||
       (*(float *)(param_1 + 0x1604) != *(float *)(param_1 + 0x764))) {
      *(float *)(param_1 + 0x1600) = fVar1;
      *(float *)(param_1 + 0x1604) = *(float *)(param_1 + 0x764);
      FUN_0091ada4(param_1 + 0x15c0);
      return;
    }
  }
  return;
}




void thunk_FUN_00aea57c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_009b8d90();
  FUN_009bb46c(uVar3,param_1 + 0x16b0,&DAT_0320ffa8,*(undefined1 *)(param_1 + 0x16da),0);
  uVar2 = FUN_00f048a4("UI::EVENT_LEAVE_APP");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aea57c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_009b8d90();
  FUN_009bb46c(uVar3,param_1 + 0x16b0,&DAT_0320ffa8,*(undefined1 *)(param_1 + 0x16da),0);
  uVar2 = FUN_00f048a4("UI::EVENT_LEAVE_APP");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aea610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d9188;
  if ((void *)param_1[0x2da] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2da]);
    param_1[0x2da] = 0;
    param_1[0x2d9] = 0;
  }
  if ((*(byte *)(param_1 + 0x2d6) & 1) != 0) {
    operator_delete((void *)param_1[0x2d8]);
  }
  param_1[0x2b8] = &PTR_FUN_028266f0;
  param_1[0x2cf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2d2);
  FUN_00f13d08(param_1 + 0x2b8);
  FUN_009c7fa8(param_1);
  return;
}




void FUN_00aea6a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d9188;
  if ((void *)param_1[0x2da] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2da]);
    param_1[0x2da] = 0;
    param_1[0x2d9] = 0;
  }
  if ((*(byte *)(param_1 + 0x2d6) & 1) != 0) {
    operator_delete((void *)param_1[0x2d8]);
  }
  param_1[0x2b8] = &PTR_FUN_028266f0;
  param_1[0x2cf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2d2);
  FUN_00f13d08(param_1 + 0x2b8);
  FUN_009c7fa8(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00aea738(undefined8 *param_1)

{
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027d9320;
  FUN_00f0e4a8(param_1 + 0x17);
  FUN_00b123bc(param_1 + 0x35);
  FUN_00f0e4a8(param_1 + 0xe2);
  FUN_00f11234(param_1 + 0x100);
  FUN_00f0d160(param_1 + 0x134);
  FUN_00f0e4a8(param_1 + 0x15a);
  FUN_00f0e4a8(param_1 + 0x178);
  FUN_00f0e4a8(param_1 + 0x196);
  FUN_00f0e4a8(param_1 + 0x1b4);
  FUN_00f0e4a8(param_1 + 0x1d2);
  FUN_00f0e4a8(param_1 + 0x1f0);
  *(undefined1 *)(param_1 + 0x20e) = 0;
  FUN_00aea7cc(param_1);
  return;
}




void FUN_00aea7cc(long *param_1)

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
  undefined **ppuVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  undefined8 local_90;
  long local_88;
  
  lVar11 = tpidr_el0;
  local_88 = *(long *)(lVar11 + 0x28);
  plVar1 = param_1 + 0x35;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x17;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  plVar3 = param_1 + 0x178;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  plVar4 = param_1 + 0x1b4;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  plVar5 = param_1 + 0x196;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  plVar6 = param_1 + 0x1d2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  plVar7 = param_1 + 0x100;
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_00f023ec(plVar7,param_1 + 0x134,1);
  plVar8 = param_1 + 0x1f0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  plVar9 = param_1 + 0xe2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  uVar12 = FUN_0092ea9c();
  FUN_00b1265c(0x43480000,0x43480000,0x40800000,plVar1);
  if ((*(float *)(param_1 + 0x3f) != 0.5) || (*(float *)((long)param_1 + 0x1fc) != 0.5)) {
    param_1[0x3f] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  local_90 = 0x4348000043480000;
  FUN_00f13f18(plVar2,&local_90);
  if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 0.5)) {
    param_1[0x21] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  plVar1 = param_1 + 0x15a;
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  uVar13 = *(uint *)((long)param_1 + 0xb54);
  if ((uVar13 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xb54) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6600;
    FUN_0091ada4(plVar1);
  }
  local_90 = 0x4260000043480000;
  FUN_00f13f18(plVar1,&local_90);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  uVar13 = *(uint *)((long)param_1 + 0xc44);
  *(byte *)(param_1 + 0x193) = *(byte *)(param_1 + 0x193) | 2;
  if ((uVar13 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0xc44) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6600;
    FUN_0091ada4(plVar3);
  }
  local_90 = 0x4316000043480000;
  FUN_00f13f18(plVar3,&local_90);
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"corner_vignette");
  FUN_00f13f08(0x43160000,0x43160000,plVar5);
  uVar13 = *(uint *)((long)param_1 + 0xd34) & 0xfffffffb;
  *(uint *)((long)param_1 + 0xd34) = uVar13;
  *(byte *)(param_1 + 0x1b1) = *(byte *)(param_1 + 0x1b1) | 1;
  if ((*(float *)(param_1 + 0x1a0) != 1.0) || (*(float *)((long)param_1 + 0xd04) != 0.0)) {
    param_1[0x1a0] = 0x3f800000;
    FUN_0091ada4(plVar5);
    uVar13 = *(uint *)((long)param_1 + 0xd34);
  }
  if ((~uVar13 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0xd34) = uVar13 | 0x7f80;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"corner_vignette");
  FUN_00f13f08(0x43480000,0x43480000,plVar4);
  *(uint *)((long)param_1 + 0xe24) = *(uint *)((long)param_1 + 0xe24) & 0xfffffffb;
  *(byte *)(param_1 + 0x1cf) = *(byte *)(param_1 + 0x1cf) | 1;
  if ((*(float *)(param_1 + 0x1be) != 1.0) || (*(float *)((long)param_1 + 0xdf4) != 0.0)) {
    param_1[0x1be] = 0x3f800000;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  if ((~*(uint *)((long)param_1 + 0xe24) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0xe24) = *(uint *)((long)param_1 + 0xe24) | 0x7f80;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e540(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530);
  if ((*(float *)(param_1 + 0x1dc) != 1.0) || (*(float *)((long)param_1 + 0xee4) != 0.0)) {
    param_1[0x1dc] = 0x3f800000;
    FUN_0091ada4(plVar6);
  }
  if ((*(float *)(param_1 + 0x1db) != 0.8) || (*(float *)((long)param_1 + 0xedc) != 0.8)) {
    param_1[0x1db] = 0x3f4ccccd3f4ccccd;
    FUN_0091ada4(plVar6);
  }
  FUN_00f13f08(0x43400000,0x42700000,plVar7);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  FUN_00f112f0(plVar7,1);
  ppuVar10 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  if ((uVar12 & 1) == 0) {
    ppuVar10 = &PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70;
  }
  FUN_00f0d92c(param_1 + 0x134,*ppuVar10,&DAT_01bee7fa);
  FUN_00f0e548(plVar8,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_logo_dagger");
  if ((*(float *)(param_1 + 0x1f9) != 0.9) || (*(float *)((long)param_1 + 0xfcc) != 0.9)) {
    param_1[0x1f9] = 0x3f6666663f666666;
    FUN_0091ada4(plVar8);
  }
  uVar12 = *(uint *)((long)param_1 + 0x1004);
  if ((uVar12 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x1004) = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x3300;
    FUN_0091ada4(plVar8);
  }
  if ((*(float *)(param_1 + 0x1fa) != 0.5) || (*(float *)((long)param_1 + 0xfd4) != 0.5)) {
    param_1[0x1fa] = 0x3f0000003f000000;
    FUN_0091ada4(plVar8);
  }
  FUN_00f0e548(plVar9,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_90 = 0x4348000043480000;
  FUN_00f13f18(plVar9,&local_90);
  *(uint *)((long)param_1 + 0x794) = *(uint *)((long)param_1 + 0x794) & 0xfffffffb;
  if ((*(float *)(param_1 + 0xec) != 0.5) || (*(float *)((long)param_1 + 0x764) != 0.5)) {
    param_1[0xec] = 0x3f0000003f000000;
    FUN_0091ada4(plVar9);
  }
  if (*(long *)(lVar11 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aeadc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d9320;
  param_1[0x1f0] = &PTR_FUN_028266f0;
  param_1[0x207] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x20a);
  FUN_00f13d08(param_1 + 0x1f0);
  param_1[0x1d2] = &PTR_FUN_028266f0;
  param_1[0x1e9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1ec);
  FUN_00f13d08(param_1 + 0x1d2);
  param_1[0x1b4] = &PTR_FUN_028266f0;
  param_1[0x1cb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1ce);
  FUN_00f13d08(param_1 + 0x1b4);
  param_1[0x196] = &PTR_FUN_028266f0;
  param_1[0x1ad] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1b0);
  FUN_00f13d08(param_1 + 0x196);
  param_1[0x178] = &PTR_FUN_028266f0;
  param_1[399] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x192);
  FUN_00f13d08(param_1 + 0x178);
  param_1[0x15a] = &PTR_FUN_028266f0;
  param_1[0x171] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x174);
  FUN_00f13d08(param_1 + 0x15a);
  FUN_00f0d3a4(param_1 + 0x134);
  FUN_00f13d08(param_1 + 0x100);
  param_1[0xe2] = &PTR_FUN_028266f0;
  param_1[0xf9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfc);
  FUN_00f13d08(param_1 + 0xe2);
  param_1[0xc4] = &PTR_FUN_028266f0;
  param_1[0xdb] = &PTR_FUN_02826850;
  param_1[0x35] = &PTR_FUN_027dc7d8;
  FUN_00f0a79c(param_1 + 0xde);
  FUN_00f13d08(param_1 + 0xc4);
  param_1[0xa6] = &PTR_FUN_028266f0;
  param_1[0xbd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc0);
  FUN_00f13d08(param_1 + 0xa6);
  param_1[0x88] = &PTR_FUN_028266f0;
  param_1[0x9f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa2);
  FUN_00f13d08(param_1 + 0x88);
  param_1[0x6a] = &PTR_FUN_028266f0;
  param_1[0x81] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x84);
  FUN_00f13d08(param_1 + 0x6a);
  param_1[0x4c] = &PTR_FUN_028266f0;
  param_1[99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x66);
  FUN_00f13d08(param_1 + 0x4c);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00aeafb4(void *param_1)

{
  FUN_00aeadc8();
  operator_delete(param_1);
  return;
}




void FUN_00aeafd8(long param_1)

{
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfffffffb;
  *(uint *)(param_1 + 0xa24) = *(uint *)(param_1 + 0xa24) & 0xfffffffb;
  FUN_00f0d75c(param_1 + 0x9a0,&DAT_03210450);
  FUN_00f0d7fc(param_1 + 0x9a0,&DAT_01bee7fa);
  return;
}

