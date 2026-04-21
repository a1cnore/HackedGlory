// functions/00c5f — 9 functions
#include "libGameKindred.h"




void FUN_00c5f3dc(long param_1)

{
  FUN_00c5ef8c(param_1 + -0x150);
  return;
}




void FUN_00c5f3e4(void *param_1)

{
  FUN_00c5ef8c();
  operator_delete(param_1);
  return;
}




void FUN_00c5f408(long param_1)

{
  FUN_00c5ef8c((void *)(param_1 + -0x150));
  operator_delete((void *)(param_1 + -0x150));
  return;
}




void FUN_00c5f430(long *param_1,long param_2)

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
  long *plVar10;
  long *plVar11;
  float *pfVar12;
  uint uVar13;
  undefined4 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  code *local_d0;
  long *plStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  long local_a0;
  
  lVar15 = tpidr_el0;
  local_a0 = *(long *)(lVar15 + 0x28);
  plVar1 = param_1 + 0x2d;
  param_1[0x3fcb] = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x3e;
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,param_1 + 0x72,1);
  plVar3 = param_1 + 0xae;
  FUN_00f023ec(plVar2,plVar3,1);
  plVar4 = param_1 + 0x90;
  FUN_00f023ec(plVar2,plVar4,1);
  plVar6 = param_1 + 0x10e5;
  FUN_00f023ec(plVar1,plVar6,1);
  plVar5 = param_1 + 0xcc;
  FUN_00f023ec(plVar1,plVar5,1);
  plVar1 = param_1 + 0x10ce;
  FUN_00f023ec(plVar5,plVar1,1);
  plVar7 = param_1 + 0x111c;
  FUN_00f023ec(plVar1,plVar7,1);
  plVar8 = param_1 + 0x1103;
  FUN_00f023ec(plVar1,plVar8,1);
  FUN_00f023ec(plVar8,param_1 + 0x1142,1);
  plVar9 = param_1 + 0x13fa;
  FUN_00f023ec(plVar8,plVar9,1);
  plVar10 = param_1 + 0x1888;
  FUN_00f023ec(plVar8,plVar10,1);
  plVar8 = param_1 + 0x1d16;
  FUN_00f023ec(plVar1,plVar8,1);
  FUN_00f023ec(plVar8,param_1 + 0x1d27,1);
  FUN_00f023ec(plVar8,param_1 + 0x279e,1);
  FUN_00f023ec(plVar8,param_1 + 0x26df,1);
  plVar8 = param_1 + 0x285d;
  FUN_00f023ec(plVar5,plVar8,1);
  plVar11 = param_1 + 0x2891;
  FUN_00f023ec(plVar8,plVar11,1);
  FUN_00ed026c(plVar11,param_1 + 0x3950,1);
  FUN_00ed026c(plVar11,param_1 + 0x29f7,1);
  FUN_00f023ec(plVar8,param_1 + 0x2938,1);
  plVar1 = param_1 + 0xe3;
  FUN_00f023ec(plVar5,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0xf4,1);
  FUN_00f023ec(plVar1,param_1 + 0xe16,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x3fcf],1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x3fd6],1);
  *(uint *)(param_1[0x3fcf] + 0x84) = *(uint *)(param_1[0x3fcf] + 0x84) & 0xfffffffb;
  *(uint *)(param_1[0x3fd6] + 0x84) = *(uint *)(param_1[0x3fd6] + 0x84) & 0xfffffffb;
  FUN_00be106c(param_1 + 0x3fce,*(undefined8 *)(param_2 + 0x18),0,0);
  FUN_00c557f0(param_1[0x3fcf]);
  FUN_00bf0e30(param_1 + 0x3fd5,*(undefined8 *)(param_2 + 0x18));
  FUN_00c64478(param_1[0x3fd6]);
  FUN_00f112f0(plVar2,1);
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  uVar13 = *(uint *)((long)param_1 + 0x504);
  if ((uVar13 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x504) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6c00;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"corner_vignette");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  *(byte *)(param_1 + 0xc9) = *(byte *)(param_1 + 0xc9) | 1;
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  *(byte *)(param_1 + 0x1100) = *(byte *)(param_1 + 0x1100) | 2;
  FUN_00f0e670(plVar6,&DAT_01bee7f6,2);
  uVar13 = *(uint *)((long)param_1 + 0x87ac);
  if ((uVar13 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x87ac) = uVar13 & 0xffff8000 | uVar13 & 0x7f | 0x6600;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0d92c(plVar7,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  uVar16 = FUN_00e6ce7c("MENU_MARKET_FEATURED_GET_HERO",0);
  FUN_00f0d75c(plVar7,uVar16);
  FUN_00ab75d0(0x42700000,0x41200000,0x447a0000,plVar9);
  FUN_00ab7628(0x42f00000,plVar9);
  uVar14 = DAT_03210c64;
  local_d0 = thunk_FUN_00c620d0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  plStack_c8 = param_1;
  local_a8 = uVar14;
  FUN_009693a0(param_1 + 0x13fb,&local_d0);
  FUN_00b09144(0xbf800000,plVar9);
  FUN_00ab95f4(0,plVar9);
  FUN_00aba748(plVar9,"glory_icon_small");
  FUN_00f0d378(param_1 + 0x14de,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  FUN_00f0da30(param_1 + 0x14de,1);
  FUN_00ab7638(0x40200000,plVar9);
  FUN_00ab71fc(plVar9,1);
  FUN_00ab75d0(0x42700000,0x41200000,0x447a0000,plVar10);
  FUN_00ab7628(0x42f00000,plVar10);
  local_a8 = DAT_03210c90;
  local_d0 = thunk_FUN_00c62538;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  plStack_c8 = param_1;
  FUN_009693a0(param_1 + 0x1889,&local_d0);
  FUN_00b09144(0xbf800000,plVar10);
  FUN_00aba748(plVar10,"ice_icon_small");
  FUN_00f0d378(param_1 + 0x196c,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  FUN_00f0da30(param_1 + 0x196c,1);
  FUN_00ab7638(0x4019999a,plVar10);
  FUN_00ab71fc(plVar10,1);
  uVar16 = FUN_00e6ce7c("MARKET_GOLD_BUNDLE_BUY_UNAVAILABLE",0);
  FUN_00ab703c(0x42700000,0x42c80000,0x447a0000,param_1 + 0x1142,0,uVar16,&DAT_01bee7fa,
               &DAT_03218ef8,0);
  local_d0 = thunk_FUN_00c62738;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  plStack_c8 = param_1;
  local_a8 = uVar14;
  FUN_009693a0(param_1 + 0x1143,&local_d0);
  pfVar12 = (float *)(param_1 + 0x1d30);
  if ((*pfVar12 != 1.33) || (*(float *)((long)param_1 + 0xe984) != 1.33)) {
    pfVar12[0] = 1.33;
    pfVar12[1] = 1.33;
    FUN_0091ada4(param_1 + 0x1d27);
  }
  local_a8 = FUN_00f048a4("UI::EVENT_HERO_ABILITY_SELECT");
  local_d0 = FUN_00c5fe28;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  plStack_c8 = param_1;
  FUN_009693a0(param_1 + 0x1d28,&local_d0);
  FUN_00f0e578(param_1 + 0x2839,"circle_button_lore");
  pfVar12 = (float *)(param_1 + 0x2842);
  if ((*pfVar12 != 1.3) || (*(float *)((long)param_1 + 0x14214) != 1.3)) {
    pfVar12[0] = 1.3;
    pfVar12[1] = 1.3;
    FUN_0091ada4(param_1 + 0x2839);
  }
  local_d0 = thunk_FUN_00c627f0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  plStack_c8 = param_1;
  local_a8 = uVar14;
  FUN_009693a0(param_1 + 0x279f,&local_d0);
  if ((*(float *)(param_1 + 0x27a7) != 1.0) || (*(float *)((long)param_1 + 0x13d3c) != 1.0)) {
    lVar17 = NEON_fmov(0x3f800000,4);
    param_1[0x27a7] = lVar17;
    FUN_0091ada4(param_1 + 0x279e);
  }
  param_1[0x27a9] = -0x3effffff3f000000;
  FUN_00f0e578(param_1 + 0x277a,"circle_button_vgf");
  local_d0 = thunk_FUN_00c62894;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  plStack_c8 = param_1;
  local_a8 = uVar14;
  FUN_009693a0(param_1 + 0x26e0,&local_d0);
  if ((*(float *)(param_1 + 0x26e8) != 1.0) || (*(float *)((long)param_1 + 0x13744) != 1.0)) {
    lVar17 = NEON_fmov(0x3f800000,4);
    param_1[0x26e8] = lVar17;
    FUN_0091ada4(param_1 + 0x26df);
  }
  param_1[0x26ea] = -0x3effffff3f000000;
  *(uint *)((long)param_1 + 0x1503c) = *(uint *)((long)param_1 + 0x1503c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1cb04) = *(uint *)((long)param_1 + 0x1cb04) & 0xfffffffb;
  FUN_00f112f0(plVar8,1);
  FUN_00ed0680(plVar11,PTR_s_build___MenuPartsCommon_tga_02be3530,
               PTR_s_scrollbar_button_fill_top_02be3518,PTR_s_scrollbar_button_fill_middle_02be3520,
               PTR_s_scrollbar_button_fill_bottom_02be3528);
  FUN_00ed04d8(plVar11,0,1);
  FUN_00f0e578(param_1 + 0x29d3,"circle_button_x");
  *(uint *)((long)param_1 + 0x14a44) = *(uint *)((long)param_1 + 0x14a44) & 0xfffffffb;
  local_d0 = FUN_00c5fe38;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  plStack_c8 = param_1;
  local_a8 = uVar14;
  FUN_009693a0(param_1 + 0x2939,&local_d0);
  uVar16 = FUN_00e6ce7c("BUTTON_WATCH_SPOTLIGHT",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x447a0000,param_1 + 0xe16,0,uVar16,&DAT_01bee7fa,&DAT_03218ef8
               ,0);
  local_d0 = thunk_FUN_00c62938;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  plStack_c8 = param_1;
  local_a8 = uVar14;
  FUN_009693a0(param_1 + 0xe17,&local_d0);
  if (*(long *)(lVar15 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c5fe28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c627a8(param_1,param_4);
  return;
}




void FUN_00c5fe38(long param_1)

{
  FUN_00c6160c(param_1,0,0xffffffff);
  FUN_00ad6848(param_1 + 0xe938);
  return;
}




void FUN_00c5fe6c(undefined4 param_1,undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  uStack_2c = param_2;
  FUN_00f13f18(param_3,&local_30);
  (**(code **)(*param_3 + 0x138))(param_3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c5fecc(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00ad67fc(param_1 + 0xe938,1);
    FUN_00c5ff0c(param_1);
    return;
  }
  return;
}




void FUN_00c5ff0c(long param_1)

{
  uint uVar1;
  
  *(undefined1 *)(param_1 + 0x1fe60) = 0;
  *(undefined4 *)(param_1 + 0x1fe64) = 0xffffffff;
  *(uint *)(param_1 + 0x1503c) = *(uint *)(param_1 + 0x1503c) & 0xfffffffb;
  *(uint *)(param_1 + 0x1cb04) = *(uint *)(param_1 + 0x1cb04) & 0xfffffffb;
  FUN_00f01980(param_1 + 0x149c0);
  *(uint *)(param_1 + 0x14a44) = *(uint *)(param_1 + 0x14a44) & 0xfffffffb;
  FUN_00f01980(param_1 + 0x718);
  uVar1 = *(uint *)(param_1 + 0x79c);
  if ((~uVar1 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x79c) = uVar1 | 0x7f80;
    FUN_0091ada4(param_1 + 0x718);
    uVar1 = *(uint *)(param_1 + 0x79c);
  }
  *(uint *)(param_1 + 0x79c) = uVar1 | 4;
  if (*(float *)(param_1 + 0x144cc) != 0.0) {
    *(float *)(param_1 + 0x144cc) = 0.0;
    FUN_0091ada4(param_1 + 0x14488);
  }
  FUN_00ed06a4(param_1 + 0x14488,0);
  if (*(float *)(param_1 + 0x234) != 0.0) {
    *(undefined4 *)(param_1 + 0x234) = 0;
    FUN_0091ada4(param_1 + 0x1f0);
  }
  FUN_00f01980(param_1 + 0x390);
  FUN_00f0e670(param_1 + 0x390,&DAT_01bee7fa,2);
  if ((~*(uint *)(param_1 + 0x824) & 0x7f80) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x824) = *(uint *)(param_1 + 0x824) | 0x7f80;
  FUN_0091ada4(param_1 + 0x7a0);
  return;
}

