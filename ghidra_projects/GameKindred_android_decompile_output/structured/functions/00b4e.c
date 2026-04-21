// functions/00b4e — 11 functions
#include "libGameKindred.h"




void FUN_00b4e234(undefined8 param_1,float param_2,long param_3,undefined8 param_4,
                 undefined4 param_5,uint param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined **ppuVar5;
  long lVar6;
  bool bVar7;
  float fVar8;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  long local_88;
  
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
  bVar7 = (param_6 & 1) == 0;
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  if (bVar7) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
  }
  fVar8 = 0.66;
  lVar1 = param_3 + 0x88;
  if (bVar7) {
    fVar8 = 1.0;
  }
  FUN_00f0d92c(lVar1,*ppuVar5,&DAT_01bee7fa);
  lVar2 = param_3 + 0x1b8;
  FUN_00f0d92c(lVar2,*ppuVar5,&DAT_01bee7fa);
  lVar3 = param_3 + 0x2e8;
  FUN_00f0d92c(lVar3,*ppuVar5,&DAT_01bee7fa);
  plVar4 = (long *)(param_3 + 0x418);
  FUN_00f0d92c(plVar4,*ppuVar5,&DAT_01bee7fa);
  if ((*(float *)(param_3 + 200) != 0.0) || (*(float *)(param_3 + 0xcc) != 0.0)) {
    *(undefined8 *)(param_3 + 200) = 0;
    FUN_0091ada4(lVar1);
  }
  local_98 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_3 + 0x88) + 0x28))(lVar1,&local_98);
  if ((*(float *)(param_3 + 0x1f8) != fVar8 * 460.0) || (*(float *)(param_3 + 0x1fc) != 0.0)) {
    *(float *)(param_3 + 0x1f8) = fVar8 * 460.0;
    *(undefined4 *)(param_3 + 0x1fc) = 0;
    FUN_0091ada4(lVar2);
  }
  local_98 = 0x3f0000003f800000;
  (**(code **)(*(long *)(param_3 + 0x1b8) + 0x28))(lVar2,&local_98);
  if ((*(float *)(param_3 + 0x328) != fVar8 * 520.0) || (*(float *)(param_3 + 0x32c) != 0.0)) {
    *(float *)(param_3 + 0x328) = fVar8 * 520.0;
    *(undefined4 *)(param_3 + 0x32c) = 0;
    FUN_0091ada4(lVar3);
  }
  local_98 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0x2e8) + 0x28))(lVar3,&local_98);
  if ((*(float *)(param_3 + 0x458) != fVar8 * 580.0) || (*(float *)(param_3 + 0x45c) != 0.0)) {
    *(float *)(param_3 + 0x458) = fVar8 * 580.0;
    *(undefined4 *)(param_3 + 0x45c) = 0;
    FUN_0091ada4(plVar4);
  }
  local_98 = 0x3f00000000000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_98);
  FUN_00e70510(&local_98);
  FUN_00f0d75c(lVar1,param_4);
  FUN_00cb1d0c(param_1,param_5,&local_98,1);
  FUN_00f0d75c(lVar2,&local_98);
  if (param_2 <= 0.0) {
    FUN_00f0d75c(plVar4,&DAT_03210450);
    FUN_00f0d75c(lVar3,&DAT_03210450);
  }
  else {
    FUN_00cb1d0c(param_2 * 11.0 + (float)param_1,param_5,&local_98,1);
    FUN_00f0d75c(plVar4,&local_98);
    FUN_00e705c8(&local_a8,0x1e21c1a);
    FUN_00f0d75c(lVar3,&local_a8);
    if (local_a0 != (void *)0x0) {
      operator_delete__(local_a0);
      local_a8 = 0;
      local_a0 = (void *)0x0;
    }
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (*(long *)(lVar6 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4e530(long *param_1)

{
  (**(code **)(*param_1 + 0xe8))();
  FUN_00b4dbf4(param_1);
  return;
}




void FUN_00b4e55c(long *param_1,byte param_2)

{
  *(byte *)(param_1 + 0x67a) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00b4e570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00b4e574(long *param_1)

{
  long lVar1;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f017e8();
  *param_1 = (long)&PTR_FUN_027e2750;
  FUN_00f0d160(param_1 + 0x11);
  FUN_00f0d160(param_1 + 0x37);
  FUN_00f0d160(param_1 + 0x5d);
  FUN_00f0d160(param_1 + 0x83);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x11,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x37,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5d,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x83,1);
  local_50 = 0x3f00000000000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4e68c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_FUN_027e2608;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x2e88) = &PTR_FUN_027e2750;
    FUN_00f0d3a4((long)param_1 + lVar1 + 0x32a0);
    FUN_00f0d3a4((long)param_1 + lVar1 + 0x3170);
    FUN_00f0d3a4((long)param_1 + lVar1 + 0x3040);
    FUN_00f0d3a4((long)param_1 + lVar1 + 0x2f10);
    FUN_00f01868((long)param_1 + lVar1 + 0x2e88);
    lVar1 = lVar1 + -0x548;
  } while (lVar1 != -0x2a40);
  FUN_00f0d3a4(param_1 + 0x10c);
  FUN_00f0d3a4(param_1 + 0xe6);
  FUN_00f01868(param_1 + 0xd5);
  FUN_00f0d3a4(param_1 + 0xaf);
  FUN_00f0d3a4(param_1 + 0x89);
  FUN_00f0d3a4(param_1 + 99);
  FUN_00f0d3a4(param_1 + 0x3d);
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b4e768(void *param_1)

{
  FUN_00b4e68c();
  operator_delete(param_1);
  return;
}




void FUN_00b4e78c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e2750;
  FUN_00f0d3a4(param_1 + 0x83);
  FUN_00f0d3a4(param_1 + 0x5d);
  FUN_00f0d3a4(param_1 + 0x37);
  FUN_00f0d3a4(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b4e7e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e2750;
  FUN_00f0d3a4(param_1 + 0x83);
  FUN_00f0d3a4(param_1 + 0x5d);
  FUN_00f0d3a4(param_1 + 0x37);
  FUN_00f0d3a4(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b4e83c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027e2850;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f0e4a8(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_circle_outline");
  if ((*(float *)(param_1 + 0x1b) != 0.5) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  fVar4 = 34.0;
  FUN_00f13f08(plVar1);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_circle_filled");
  if ((*(float *)(param_1 + 0x39) != 0.5) || (*(float *)((long)param_1 + 0x1cc) != 0.5)) {
    param_1[0x39] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  local_50 = (float)FUN_00f0e700(plVar1);
  local_50 = local_50 * 0.85;
  fStack_4c = fVar4 * 0.85;
  FUN_00f13f18(plVar2,&local_50);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4e9b4(long param_1,undefined8 param_2)

{
  FUN_00f0e670(param_1 + 0x88,param_2,2);
  FUN_00f0e670(param_1 + 0x178,param_2,2);
  return;
}




void FUN_00b4e9ec(long *param_1)

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
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined **ppuVar20;
  uint uVar21;
  undefined4 uVar22;
  long lVar23;
  uint uVar24;
  undefined8 uVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  code *local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  long local_90;
  
  lVar23 = tpidr_el0;
  local_90 = *(long *)(lVar23 + 0x28);
  FUN_00b89cd8();
  *param_1 = (long)&PTR_FUN_027e2950;
  FUN_00f13ca4(param_1 + 0x19);
  plVar1 = param_1 + 0x30;
  FUN_00f11234(plVar1);
  plVar2 = param_1 + 100;
  FUN_00f0e4a8();
  plVar3 = param_1 + 0x82;
  FUN_00f0e4a8();
  plVar4 = param_1 + 0xa0;
  FUN_00f0e4a8();
  plVar5 = param_1 + 0xbe;
  FUN_00f11234(plVar5);
  plVar6 = param_1 + 0xf2;
  FUN_00ecfd6c(plVar6,0);
  plVar7 = param_1 + 0x199;
  FUN_00f0e4a8();
  plVar8 = param_1 + 0x1b7;
  FUN_00f0d160();
  plVar9 = param_1 + 0x1dd;
  FUN_00abaee8(plVar9,0);
  FUN_00f017e8();
  plVar10 = param_1 + 0x2af;
  param_1[0x29c] = (long)&PTR_FUN_027c1f80;
  param_1[0x2ae] = 0;
  param_1[0x2ad] = 0;
  FUN_00f017e8(plVar10);
  plVar11 = param_1 + 0x2c0;
  param_1[0x2af] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar12 = param_1 + 0x2de;
  FUN_00f0eda4();
  plVar13 = param_1 + 0x2fe;
  FUN_00f0d160();
  plVar14 = param_1 + 0x324;
  FUN_00f0d160(plVar14);
  plVar15 = param_1 + 0x34a;
  FUN_00f0d160();
  plVar16 = param_1 + 0x370;
  FUN_00f0d160(plVar16);
  plVar17 = param_1 + 0x396;
  FUN_00f0d160(plVar17);
  plVar18 = param_1 + 0x3bc;
  FUN_00f0d160();
  plVar19 = param_1 + 0x3e2;
  FUN_00ab6c24(plVar19,0);
  FUN_00e70510();
  param_1[0x69e] = 0;
  param_1[0x69d] = 0;
  param_1[0x69c] = 0;
  FUN_00e70314(param_1 + 0x69f);
  *(undefined4 *)(param_1 + 0x6a1) = 0x44910000;
  param_1[0x6a4] = 0;
  param_1[0x6a3] = -1;
  param_1[0x6a2] = 0;
  *(undefined4 *)(param_1 + 0x6a5) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x19,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar5,plVar6,1);
  FUN_00ed026c(plVar6,plVar14,1);
  FUN_00ed026c(plVar6,plVar8,1);
  FUN_00ed026c(plVar6,plVar9,1);
  FUN_00ed026c(plVar6,param_1 + 0x29c,1);
  FUN_00ed026c(plVar6,plVar10,1);
  FUN_00f023ec(plVar10,plVar11,1);
  FUN_00f023ec(plVar10,plVar12,1);
  FUN_00f023ec(plVar10,plVar7,1);
  FUN_00f023ec(plVar10,plVar13,1);
  FUN_00ed026c(plVar6,plVar15,1);
  FUN_00ed026c(plVar6,plVar16,1);
  FUN_00ed026c(plVar6,plVar17,1);
  FUN_00ed026c(plVar6,plVar18,1);
  FUN_00f023ec(plVar1,plVar19,1);
  uVar24 = FUN_0092ea9c();
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  FUN_00f112f0(plVar1,0);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar21 = *(uint *)((long)param_1 + 0x3a4);
  if ((uVar21 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x3a4) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_brushstroke_vert_l");
  uVar21 = *(uint *)((long)param_1 + 0x584);
  if ((uVar21 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x584) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_brushstroke_vert_r");
  uVar21 = *(uint *)((long)param_1 + 0x494);
  if ((uVar21 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x494) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  FUN_00f112f0(plVar5,1);
  if ((*(float *)(param_1 + 200) != 0.5) || (*(float *)((long)param_1 + 0x644) != 0.0)) {
    param_1[200] = 0x3f000000;
    FUN_0091ada4(plVar5);
  }
  if (*(float *)((long)param_1 + 0x634) != 50.0) {
    *(undefined4 *)((long)param_1 + 0x634) = 0x42480000;
    FUN_0091ada4(plVar5);
  }
  FUN_00ed0680(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,
               PTR_s_scrollbar_button_fill_top_02be3518,PTR_s_scrollbar_button_fill_middle_02be3520,
               PTR_s_scrollbar_button_fill_bottom_02be3528);
  fVar29 = 1.0;
  FUN_00ed0650(0x3e800000,plVar6);
  if ((*(float *)(param_1 + 0xfc) != 0.5) || (*(float *)((long)param_1 + 0x7e4) != 0.0)) {
    param_1[0xfc] = 0x3f000000;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0e548(plVar11,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_deserter_icon_backdrop");
  FUN_00f0e670(plVar11,&DAT_01bee7fa,2);
  uVar21 = *(uint *)((long)param_1 + 0x1684);
  if ((uVar21 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x1684) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x3300;
    FUN_0091ada4(plVar11);
  }
  if ((*(float *)(param_1 + 0x2ca) != 0.5) || (*(float *)((long)param_1 + 0x1654) != 0.5)) {
    param_1[0x2ca] = 0x3f0000003f000000;
    FUN_0091ada4(plVar11);
  }
  FUN_00f0e548(plVar12,PTR_s_build___MenuPartsCommon_tga_02be3530,"icon_achievement_prg_filled");
  FUN_00f0e670(plVar12,&DAT_01bee802,2);
  uVar21 = *(uint *)((long)param_1 + 0x1774);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1774) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_0091ada4(plVar12);
  }
  fVar27 = (float)FUN_00f0e700(plVar11);
  fVar30 = fVar29 * 0.95;
  fVar28 = (float)FUN_00f0e700(plVar12);
  fVar28 = (fVar27 * 0.95) / fVar28;
  fVar30 = fVar30 / fVar29;
  if ((*(float *)(param_1 + 0x2e7) != fVar28) || (*(float *)((long)param_1 + 0x173c) != fVar30)) {
    *(float *)(param_1 + 0x2e7) = fVar28;
    *(float *)((long)param_1 + 0x173c) = fVar30;
    FUN_0091ada4(plVar12);
  }
  if ((*(float *)(param_1 + 0x2e8) != 0.5) || (*(float *)((long)param_1 + 0x1744) != 0.5)) {
    param_1[0x2e8] = 0x3f0000003f000000;
    FUN_0091ada4(plVar12);
  }
  FUN_00f0eea0(plVar12,FUN_00b4f678,param_1);
  FUN_00f0e548(plVar7,PTR_s_build___LowPriorityQueue_tga_02be35c8,"Splash_LowPriorityQueue");
  if ((*(float *)(param_1 + 0x1a2) != 0.8) || (*(float *)((long)param_1 + 0xd14) != 0.8)) {
    param_1[0x1a2] = 0x3f4ccccd3f4ccccd;
    FUN_0091ada4(plVar7);
  }
  if ((*(float *)(param_1 + 0x1a3) != 0.5) || (*(float *)((long)param_1 + 0xd1c) != 0.5)) {
    param_1[0x1a3] = 0x3f0000003f000000;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0d92c(plVar14,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce0,&DAT_01bee7fa);
  uVar25 = FUN_00e6ce7c("MENU_LPQ_NOTIFICATION_TITLE",0);
  FUN_00f0d75c(plVar14,uVar25);
  FUN_00f0d92c(plVar8,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,&DAT_01bee7fa);
  uVar25 = FUN_00e6ce7c("MENU_LPQ_MATCHES_REMAINING_LABEL",0);
  FUN_00f0d75c(plVar8,uVar25);
  FUN_00f0d7fc(plVar8,&DAT_01bee802);
  uVar21 = *(uint *)((long)param_1 + 0xe3c);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0xe3c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_0091ada4(plVar8);
  }
  FUN_00f0e578(param_1 + 0x278,"circle_button_question");
  uVar21 = *(uint *)((long)param_1 + 0xf6c);
  if ((uVar21 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xf6c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar9);
  }
  FUN_00b09144(0xbf800000,plVar9);
  local_a8 = 0;
  uStack_a0 = 0;
  uVar22 = DAT_03210c64;
  local_c0 = thunk_FUN_00b50d64;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar22;
  FUN_009693a0(param_1 + 0x1de,&local_c0);
  uVar26 = FUN_0092ea9c();
  fVar29 = DAT_02be3668 * 0.7;
  if ((uVar26 & 1) == 0) {
    fVar29 = 0.7;
  }
  if ((*(float *)(param_1 + 0x1e6) != fVar29) || (*(float *)((long)param_1 + 0xf34) != fVar29)) {
    *(float *)(param_1 + 0x1e6) = fVar29;
    *(float *)((long)param_1 + 0xf34) = fVar29;
    FUN_0091ada4(plVar9);
  }
  FUN_00b0914c(plVar9,1);
  FUN_00f0d378(plVar13,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0d7fc(plVar13,&DAT_01bee802);
  FUN_00e705c8(&local_c0,0x1e21c16);
  FUN_00f0d75c(plVar13,&local_c0);
  if (local_b8 != (long *)0x0) {
    operator_delete__(local_b8);
    local_c0 = (code *)0x0;
    local_b8 = (long *)0x0;
  }
  uVar21 = *(uint *)((long)param_1 + 0x1874);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1874) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_0091ada4(plVar13);
  }
  uVar25 = FUN_00e6ce7c("MENU_GENERIC_FULL_RES_TIME_STRING",0);
  FUN_00910394(param_1 + 0x69a,uVar25);
  ppuVar20 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if ((uVar24 & 1) == 0) {
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
  }
  FUN_00f0d92c(plVar15,*ppuVar20,&DAT_01bee7fa);
  FUN_00f0dad0(*(float *)(param_1 + 0x6a1) + -40.0,plVar15,1);
  uVar21 = *(uint *)((long)param_1 + 0x1ad4);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1ad4) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_0091ada4(plVar15);
  }
  FUN_00f0dac8(plVar15,3);
  ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar24 & 1) == 0) {
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  FUN_00f0d92c(plVar16,*ppuVar20,&DAT_01bee7fa);
  uVar25 = FUN_00e6ce7c("MENU_LPQ_EXPANDED_EXPLANATION_TOOLTIP_TITLE",0);
  FUN_00f0d75c(plVar16,uVar25);
  FUN_00f0dad0(*(float *)(param_1 + 0x6a1) + -40.0,plVar16,1);
  uVar21 = *(uint *)((long)param_1 + 0x1c04);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1c04) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_0091ada4(plVar16);
  }
  FUN_00f0dac8(plVar16,3);
  ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar24 & 1) == 0) {
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  FUN_00f0d92c(plVar17,*ppuVar20,&DAT_01bee7fa);
  FUN_00f0dad0(*(float *)(param_1 + 0x6a1) + -40.0,plVar17,1);
  uVar21 = *(uint *)((long)param_1 + 0x1d34);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1d34) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_0091ada4(plVar17);
  }
  FUN_00f0dac8(plVar17,3);
  ppuVar20 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if ((uVar24 & 1) == 0) {
    ppuVar20 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
  }
  FUN_00f0d92c(plVar18,*ppuVar20,&DAT_01bee7fa);
  uVar25 = FUN_00e6ce7c("MENU_LPQ_EXPANDED_EXPLANATION_TOOLTIP",0);
  FUN_00f0d75c(plVar18,uVar25);
  FUN_00f0dad0(*(float *)(param_1 + 0x6a1) + -40.0,plVar18,1);
  uVar21 = *(uint *)((long)param_1 + 0x1e64);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1e64) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_0091ada4(plVar18);
  }
  FUN_00f0dac8(plVar18,0);
  fVar29 = 1.2;
  if ((uVar24 & 1) == 0) {
    fVar29 = 1.0;
  }
  if ((*(float *)(param_1 + 0x3eb) != fVar29) || (*(float *)((long)param_1 + 0x1f5c) != fVar29)) {
    *(float *)(param_1 + 0x3eb) = fVar29;
    *(float *)((long)param_1 + 0x1f5c) = fVar29;
    FUN_0091ada4(plVar19);
  }
  if ((*(float *)(param_1 + 0x3ec) != 0.5) || (*(float *)((long)param_1 + 0x1f64) != 0.5)) {
    param_1[0x3ec] = 0x3f0000003f000000;
    FUN_0091ada4(plVar19);
  }
  FUN_00f0dac8(param_1 + 0x4c6,0);
  uVar21 = *(uint *)((long)param_1 + 0x1f94);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1f94) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_0091ada4(plVar19);
  }
  uVar25 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00ab703c(0x42700000,0x42c80000,0x43c80000,plVar19,0,uVar25,&DAT_01bee7fa,&DAT_03218ef8,
               PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  local_c0 = thunk_FUN_00b50d14;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar22;
  FUN_009693a0(param_1 + 0x3e3,&local_c0);
  if (*(long *)(lVar23 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

