// functions/00a54 — 5 functions
#include "libGameKindred.h"




void FUN_00a542f8(undefined1 param_1 [16],undefined8 param_2,long param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  bool bVar4;
  uint *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined1 local_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((param_4 & 1) == 0) {
    pcVar9 = "build_talent_chooser_frame_off_bottom_corners";
    pcVar10 = "build_talent_chooser_frame_off_bottom_edge";
    pcVar11 = "build_talent_chooser_frame_off_vertical_edges";
    pcVar6 = "build_talent_chooser_frame_off_top_corners";
    pcVar8 = "build_talent_chooser_frame_off_top_edge";
  }
  else {
    pcVar9 = "build_talent_chooser_frame_on_bottom_corners";
    pcVar10 = "build_talent_chooser_frame_on_bottom_edge";
    pcVar11 = "build_talent_chooser_frame_on_vertical_edges";
    pcVar6 = "build_talent_chooser_frame_on_top_corners";
    pcVar8 = "build_talent_chooser_frame_on_top_edge";
  }
  FUN_00f0ff74(param_3 + 0x3e0,pcVar6,0,0,0,pcVar8,0,0,0,pcVar6,1,0,0,pcVar11,0,0,0,0,0,0,0,pcVar11,
               1,0,0,pcVar9,0,0,0,pcVar10,0,0,0,pcVar9,1,0,0);
  uVar13 = FUN_00f10374(param_3 + 0x3e0,0);
  FUN_00f10644(uVar13,0,uVar13,param_2,0,param_2,param_3 + 0x290);
  if ((param_4 & 1) == 0) {
    uVar12 = 0x3ecccccd;
    puVar7 = &DAT_01bee7f6;
  }
  else {
    puVar5 = (uint *)FUN_00f0e690(param_3 + 0x710);
    uVar1 = *puVar5;
    puVar7 = (undefined4 *)&local_5c;
    uStack_59 = (undefined1)(uVar1 >> 0x18);
    _local_5c = CONCAT12((char)(int)((float)(uVar1 >> 0x10 & 0xff) * 0.25),
                         CONCAT11((char)(int)((float)(uVar1 >> 8 & 0xff) * 0.25),
                                  (char)(int)((float)(uVar1 & 0xff) * 0.25)));
    uVar12 = 0x3f400000;
  }
  FUN_00b132e8(uVar12,param_3 + 0x1d8,puVar7);
  bVar4 = (param_4 & 1) == 0;
  uVar12 = 0x40000000;
  if (bVar4) {
    uVar12 = 0x3fcccccd;
  }
  uVar3 = 0x3f866666;
  if (bVar4) {
    uVar3 = 0x3f800000;
  }
  uVar13 = FUN_00eff63c(uVar12,uVar12,0x3e19999a,FUN_0091aa80);
  FUN_00f01980(param_3 + 0x710);
  FUN_00f022a0(param_3 + 0x710,uVar13);
  uVar13 = FUN_00eff63c(uVar3,uVar3,0x3e19999a,FUN_0091aa80);
  FUN_00f01980(param_3 + 200);
  FUN_00f022a0(param_3 + 200,uVar13);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a545cc(float param_1,undefined4 param_2,long param_3)

{
  FUN_00f13f08();
  *(float *)(param_3 + 0x1628) = param_1 + -20.0;
  *(undefined4 *)(param_3 + 0x162c) = param_2;
  return;
}




void FUN_00a5460c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  ulong uVar7;
  float fVar8;
  undefined8 local_a0;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  fVar6 = *(float *)(param_1 + 0x1628);
  fVar8 = *(float *)(param_1 + 0x162c);
  if ((*(float *)(param_1 + 0x108) != fVar6 * 0.5) || (*(float *)(param_1 + 0x10c) != fVar8 * 0.5))
  {
    *(float *)(param_1 + 0x108) = fVar6 * 0.5;
    *(float *)(param_1 + 0x10c) = fVar8 * 0.5;
    FUN_0091ada4(param_1 + 200);
    fVar6 = *(float *)(param_1 + 0x1628);
    fVar8 = *(float *)(param_1 + 0x162c);
  }
  if ((*(float *)(param_1 + 400) != fVar6 * -0.5) || (*(float *)(param_1 + 0x194) != fVar8 * -0.5))
  {
    *(float *)(param_1 + 400) = fVar6 * -0.5;
    *(float *)(param_1 + 0x194) = fVar8 * -0.5;
    FUN_0091ada4(param_1 + 0x150);
    fVar6 = *(float *)(param_1 + 0x1628);
    fVar8 = *(float *)(param_1 + 0x162c);
  }
  FUN_00f13f08(fVar6 + 80.0,fVar8 + 80.0,param_1 + 0x1d8);
  fVar6 = (float)*(undefined8 *)(param_1 + 0x1628) * 0.5;
  fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x1628) >> 0x20) * 0.5;
  uVar7 = CONCAT44(fVar8,fVar6);
  if ((*(float *)(param_1 + 0x218) != fVar6) || (*(float *)(param_1 + 0x21c) != fVar8)) {
    *(ulong *)(param_1 + 0x218) = uVar7;
    FUN_0091ada4(param_1 + 0x1d8);
    uVar7 = (ulong)(uint)(*(float *)(param_1 + 0x1628) * 0.5);
  }
  if ((*(float *)(param_1 + 0x750) != (float)uVar7) || (*(float *)(param_1 + 0x754) != 0.0)) {
    *(float *)(param_1 + 0x750) = (float)uVar7;
    *(undefined4 *)(param_1 + 0x754) = 0;
    FUN_0091ada4(param_1 + 0x710);
  }
  local_a0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x710) + 0x28))(param_1 + 0x710,&local_a0);
  lVar4 = param_1 + 0x800;
  fVar6 = (float)*(undefined8 *)(param_1 + 0x1628) * 0.5;
  fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x1628) >> 0x20) * 0.2;
  if ((*(float *)(param_1 + 0x840) != fVar6) || (*(float *)(param_1 + 0x844) != fVar8)) {
    *(ulong *)(param_1 + 0x840) = CONCAT44(fVar8,fVar6);
    FUN_0091ada4(lVar4);
  }
  local_a0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x800) + 0x28))(lVar4,&local_a0);
  FUN_00f0d378(lVar4,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  FUN_00f0dac8(lVar4,3);
  FUN_00f0dad0(*(float *)(param_1 + 0x1628) * 0.85,lVar4,1);
  FUN_00f0db2c(0xbe19999a,lVar4);
  lVar4 = param_1 + 0x930;
  fVar6 = (float)*(undefined8 *)(param_1 + 0x1628) * 0.5;
  fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x1628) >> 0x20) * 0.4;
  if ((*(float *)(param_1 + 0x970) != fVar6) || (*(float *)(param_1 + 0x974) != fVar8)) {
    *(ulong *)(param_1 + 0x970) = CONCAT44(fVar8,fVar6);
    FUN_0091ada4(lVar4);
  }
  local_a0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x930) + 0x28))(lVar4,&local_a0);
  FUN_00f0d378(lVar4,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50);
  uVar5 = *(uint *)(param_1 + 0x9b4);
  if ((uVar5 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x9b4) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6600;
    FUN_0091ada4(lVar4);
  }
  FUN_00f0dac8(lVar4,3);
  FUN_00f0dad0(*(float *)(param_1 + 0x1628) * 0.8,lVar4,1);
  lVar4 = 0;
  uVar5 = 0;
  do {
    lVar2 = param_1 + lVar4;
    lVar1 = lVar2 + 0xae8;
    FUN_00f13f08(0x42dc0000,0x42dc0000,lVar1);
    FUN_00f13f08(0x42dc0000,0x42dc0000,param_1 + 0x1088 + lVar4);
    fVar6 = (float)(uVar5 + ((uVar5 & 0xff) / 3) * -3 & 0xff) * 114.0 + 55.0;
    fVar8 = (float)((ulong)(uVar5 & 0xff) / 3) * 114.0 + 55.0;
    if ((*(float *)(lVar2 + 0xb28) != fVar6) || (*(float *)(lVar2 + 0xb2c) != fVar8)) {
      *(float *)(lVar2 + 0xb28) = fVar6;
      *(float *)(lVar2 + 0xb2c) = fVar8;
      FUN_0091ada4(lVar1);
    }
    local_a0 = 0x3f0000003f000000;
    lVar2 = param_1 + lVar4;
    (**(code **)(*(long *)(lVar2 + 0xae8) + 0x28))(lVar1,&local_a0);
    lVar1 = param_1 + 0x1088 + lVar4;
    if ((*(float *)(lVar2 + 0x10c8) != fVar6) || (*(float *)(lVar2 + 0x10cc) != fVar8)) {
      *(float *)(lVar2 + 0x10c8) = fVar6;
      *(float *)(lVar2 + 0x10cc) = fVar8;
      FUN_0091ada4(lVar1);
    }
    local_a0 = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + lVar4 + 0x1088) + 0x28))(lVar1,&local_a0);
    lVar4 = lVar4 + 0xf0;
    uVar5 = uVar5 + 1;
  } while (lVar4 != 0x5a0);
  fVar6 = *(float *)(param_1 + 0x1628) * 0.5 + -169.0;
  fVar8 = *(float *)(param_1 + 0x162c) * 0.6;
  if ((*(float *)(param_1 + 0xaa0) != fVar6) || (*(float *)(param_1 + 0xaa4) != fVar8)) {
    *(float *)(param_1 + 0xaa0) = fVar6;
    *(float *)(param_1 + 0xaa4) = fVar8;
    FUN_0091ada4(param_1 + 0xa60);
  }
  if (*(long *)(lVar3 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a54a78(undefined8 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  FUN_00b89cd8();
  *param_1 = &PTR_FUN_027cb628;
  FUN_00f13ca4(param_1 + 0x19);
  FUN_00f13ca4(param_1 + 0x30);
  FUN_00b89cd8(param_1 + 0x47);
  FUN_00c83504(param_1 + 0x60);
  FUN_00f017e8(param_1 + 0xd1);
  param_1[0xd1] = &PTR_FUN_027c1f80;
  FUN_00f0d160(param_1 + 0xe2);
  FUN_00f11234(param_1 + 0x108);
  FUN_00ecfd6c(param_1 + 0x13c,0);
  FUN_00f0bdbc(param_1 + 0x1e3,0);
  param_1[0x1fd] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1e3] = &PTR_FUN_027c3260;
  FUN_00f017e8(param_1 + 0x1fe);
  param_1[0x1fe] = &PTR_FUN_027c1f80;
  FUN_00f0e4a8(param_1 + 0x20f);
  FUN_00f0e4a8(param_1 + 0x22d);
  FUN_00f0e4a8(param_1 + 0x24b);
  FUN_00f0e4a8(param_1 + 0x269);
  FUN_00f017e8(param_1 + 0x287);
  param_1[0x287] = &PTR_FUN_027c1f80;
  FUN_00f0d160(param_1 + 0x298);
  FUN_00f0d160(param_1 + 0x2be);
  FUN_00ab6c24(param_1 + 0x2e4,1);
  param_1[0x59c] = 0;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x59e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x59d) = uVar1;
  uVar1 = FUN_00e6a474("HUD_RecommendedPathSelector");
  uVar2 = FUN_0091ed5c("HUD_RecommendedPathSelector",uVar1,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar2 & 0xffff) << 0xf;
  FUN_00a54be0(param_1);
  return;
}




void FUN_00a54be0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x47,1);
  FUN_00f023ec(param_1 + 0x47,param_1 + 0x60,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x19,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x30,1);
  plVar1 = param_1 + 0xd1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x108;
  FUN_00f023ec(plVar1,plVar2,1);
  plVar3 = param_1 + 0x13c;
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00ed026c(plVar3,param_1 + 0x1e3,1);
  plVar4 = param_1 + 0x1fe;
  FUN_00f023ec(plVar1,plVar4,1);
  plVar5 = param_1 + 0x20f;
  FUN_00f023ec(plVar4,plVar5,1);
  plVar6 = param_1 + 0x22d;
  FUN_00f023ec(plVar4,plVar6,1);
  plVar7 = param_1 + 0x24b;
  FUN_00f023ec(plVar4,plVar7,1);
  plVar8 = param_1 + 0x269;
  FUN_00f023ec(plVar4,plVar8,1);
  plVar1 = param_1 + 0x287;
  FUN_00f023ec(plVar4,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x298,1);
  FUN_00f023ec(plVar1,param_1 + 0x2be,1);
  FUN_00f023ec(plVar1,param_1 + 0x2e4,1);
  plVar1 = param_1 + 0xe2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  *(uint *)((long)param_1 + 0x204) = *(uint *)((long)param_1 + 0x204) | 0x10;
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce0);
  uVar12 = FUN_00e6ce7c("HUD_CHOOSE_A_BUILD_TITLE",0);
  FUN_00f0d75c(plVar1,uVar12);
  *(uint *)((long)param_1 + 0x794) = *(uint *)((long)param_1 + 0x794) | 0x10;
  FUN_00f112f0(plVar2,1);
  FUN_00ed04d8(plVar3,1,0);
  FUN_00f0e548(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440,"generic_gradient_horizontal");
  *(byte *)(param_1 + 0x22a) = *(byte *)(param_1 + 0x22a) | 1;
  FUN_00f0e670(plVar5,&DAT_01bee7f6,2);
  uVar11 = *(uint *)((long)param_1 + 0x10fc);
  if ((uVar11 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x10fc) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x5900;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(plVar6,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar6,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar7,PTR_s_build___HUDPartsCommon_atlas_02be3440,"generic_gradient_vertical");
  FUN_00f0e548(plVar8,PTR_s_build___HUDPartsCommon_atlas_02be3440,"generic_gradient_vertical");
  *(byte *)(param_1 + 0x266) = *(byte *)(param_1 + 0x266) | 2;
  uVar11 = *(uint *)((long)param_1 + 0x12dc);
  if ((uVar11 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x12dc) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x2600;
    FUN_0091ada4(plVar7);
  }
  uVar11 = *(uint *)((long)param_1 + 0x13cc);
  if ((uVar11 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x13cc) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x2600;
    FUN_0091ada4(plVar8);
  }
  uVar11 = *(uint *)((long)param_1 + 0x1544);
  *(uint *)((long)param_1 + 0x14bc) = *(uint *)((long)param_1 + 0x14bc) & 0xfffffffb;
  if ((uVar11 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1544) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x6600;
    FUN_0091ada4(param_1 + 0x298);
  }
  uVar11 = *(uint *)((long)param_1 + 0x1674);
  if ((uVar11 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1674) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x6600;
    FUN_0091ada4(param_1 + 0x2be);
  }
  uVar12 = FUN_00e6ce7c("HUD_PATH_SELECTOR_SELECT",0);
  FUN_00ab703c(0x42800000,0,0x44480000,param_1 + 0x2e4,0,uVar12,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_70 = DAT_03210c64;
  local_98 = thunk_FUN_00a56280;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x2e5,&local_98);
  uVar10 = FUN_00e6a474("recommended_path_select");
  uVar11 = FUN_0091ed5c("recommended_path_select",uVar10,0x1234);
  *(uint *)((long)param_1 + 0x17a4) =
       *(uint *)((long)param_1 + 0x17a4) & 0x80000000 |
       *(uint *)((long)param_1 + 0x17a4) & 0x7fff | (uVar11 & 0xffff) << 0xf;
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

