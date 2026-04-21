// functions/00b66 — 1 functions
#include "libGameKindred.h"




void FUN_00b660dc(undefined **param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  long lVar29;
  uint uVar30;
  undefined8 uVar31;
  ulong uVar32;
  undefined *puVar33;
  undefined **local_350;
  undefined **local_348;
  undefined **local_340;
  code *local_338;
  void *local_330;
  undefined4 local_328;
  undefined8 local_324;
  undefined1 auStack_318 [16];
  undefined8 local_308;
  void *local_300;
  undefined1 auStack_2f8 [40];
  undefined1 auStack_2d0 [164];
  undefined4 local_22c;
  undefined8 local_1a8;
  undefined1 auStack_108 [16];
  undefined8 local_f8;
  void *local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined4 local_c8;
  uint local_8c;
  long local_80;
  
  lVar29 = tpidr_el0;
  local_80 = *(long *)(lVar29 + 0x28);
  FUN_00b89cd8();
  FUN_00a99760(param_1 + 0x19);
  ppuVar1 = param_1 + 0x1c;
  *param_1 = (undefined *)&PTR_FUN_027e4d70;
  param_1[0x19] = (undefined *)&PTR_FUN_027e4ee0;
  FUN_00f017e8();
  ppuVar2 = param_1 + 0x2d;
  param_1[0x1c] = (undefined *)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  ppuVar3 = param_1 + 0x4b;
  FUN_00f0ac5c();
  ppuVar4 = param_1 + 0x74;
  FUN_00f0d160();
  ppuVar5 = param_1 + 0x9a;
  FUN_00f0d160();
  ppuVar6 = param_1 + 0xc0;
  FUN_00f0d160();
  FUN_00b1a9d4();
  ppuVar7 = param_1 + 0x181;
  FUN_00f0d160();
  FUN_00b1a9d4();
  FUN_00f017e8(param_1 + 0x242);
  param_1[0x242] = (undefined *)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(param_1 + 0x253);
  FUN_00f0d160(param_1 + 0x271);
  ppuVar8 = param_1 + 0x297;
  FUN_00f0d160();
  FUN_00b1a9d4();
  ppuVar9 = param_1 + 0x358;
  FUN_00f1306c();
  ppuVar10 = param_1 + 899;
  FUN_00f0e4a8();
  ppuVar11 = param_1 + 0x3a1;
  FUN_00f0e4a8();
  ppuVar12 = param_1 + 0x3bf;
  FUN_00f0d160();
  ppuVar13 = param_1 + 0x3e5;
  FUN_00f0e4a8();
  ppuVar14 = param_1 + 0x403;
  FUN_00b25254();
  ppuVar15 = param_1 + 0x42f;
  FUN_00f0d160();
  ppuVar16 = param_1 + 0x455;
  FUN_00f11234(ppuVar16);
  ppuVar17 = param_1 + 0x489;
  FUN_00ed37b0(ppuVar17,0);
  ppuVar18 = param_1 + 0x534;
  FUN_00f017e8();
  ppuVar19 = param_1 + 0x549;
  param_1[0x534] = (undefined *)&PTR_FUN_027c1f80;
  param_1[0x548] = (undefined *)0x0;
  param_1[0x547] = (undefined *)0x0;
  param_1[0x546] = (undefined *)0x0;
  param_1[0x545] = (undefined *)0x0;
  FUN_00f0e4a8(ppuVar19);
  ppuVar20 = param_1 + 0x567;
  FUN_00f0e4a8(ppuVar20);
  ppuVar21 = param_1 + 0x585;
  FUN_00b0108c();
  ppuVar22 = param_1 + 0x6c5;
  FUN_00f017e8(ppuVar22);
  ppuVar23 = param_1 + 0x6d6;
  param_1[0x6c5] = (undefined *)&PTR_FUN_027c1f80;
  FUN_00b09580(ppuVar23);
  ppuVar24 = param_1 + 0x939;
  FUN_00f0e4a8();
  ppuVar25 = param_1 + 0x957;
  FUN_00f0e4a8();
  ppuVar26 = param_1 + 0x975;
  FUN_00b15e58(ppuVar26,0);
  ppuVar27 = param_1 + 0xa24;
  FUN_00f017e8(ppuVar27);
  param_1[0xa24] = (undefined *)&PTR_FUN_027c1f80;
  ppuVar28 = param_1 + 0xa35;
  FUN_00b0108c(ppuVar28);
  FUN_00adb418(param_1 + 0xb75,0);
  FUN_00b04a44();
  param_1[0x1cbd] = (undefined *)0x0;
  param_1[0x1cbc] = (undefined *)0x0;
  param_1[0x1cbe] = (undefined *)0x0;
  param_1[0x1cc0] = (undefined *)0xffffffff00000001;
  *(undefined4 *)(param_1 + 0x1cc1) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xe60c) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,ppuVar16,1);
  FUN_00f023ec(ppuVar16,ppuVar19,1);
  FUN_00f023ec(ppuVar16,ppuVar20,1);
  FUN_00f023ec(ppuVar16,ppuVar26,1);
  FUN_00f023ec(ppuVar16,ppuVar18,1);
  FUN_00f023ec(ppuVar18,ppuVar17,1);
  FUN_00ed026c(ppuVar17,ppuVar22,1);
  FUN_00f023ec(ppuVar22,ppuVar25,1);
  FUN_00f023ec(ppuVar22,ppuVar23,1);
  FUN_00f023ec(ppuVar22,ppuVar24,1);
  FUN_00f023ec(ppuVar18,ppuVar21,1);
  FUN_00f023ec(ppuVar16,ppuVar27,1);
  FUN_00f023ec(ppuVar27,ppuVar28,1);
  FUN_00f023ec(ppuVar27,param_1 + 0xb7b,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x156b,1);
  (**(code **)(*param_1 + 0x78))(param_1,ppuVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,ppuVar1,1);
  FUN_00f023ec(ppuVar1,ppuVar3,1);
  FUN_00f0ad88(ppuVar3,ppuVar4,1);
  FUN_00f0ad88(ppuVar3,ppuVar5,1);
  FUN_00f0ad88(ppuVar3,ppuVar6,1);
  FUN_00f0ad88(ppuVar3,param_1 + 0xe6,1);
  FUN_00f0ad88(ppuVar3,ppuVar7,1);
  FUN_00f0ad88(ppuVar3,param_1 + 0x1a7,1);
  FUN_00f0ad88(ppuVar3,ppuVar8,1);
  FUN_00f0ad88(ppuVar3,param_1 + 0x2bd,1);
  FUN_00f023ec(ppuVar1,ppuVar9,1);
  FUN_00f133a4(ppuVar9,ppuVar10,1);
  FUN_00f133a4(ppuVar9,ppuVar11,1);
  FUN_00f133a4(ppuVar9,ppuVar13,1);
  FUN_00f133a4(ppuVar9,ppuVar12,1);
  FUN_00f133a4(ppuVar9,ppuVar14,1);
  FUN_00f133a4(ppuVar9,ppuVar15,1);
  FUN_00f0e548(ppuVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar30 = *(uint *)((long)param_1 + 0x1ec);
  if ((uVar30 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x1ec) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x1980;
    FUN_0091ada4(ppuVar2);
  }
  FUN_00b0b848(0x3fef684c,ppuVar23,"xp_bar_current","xp_bar_new");
  *(undefined2 *)(param_1 + 0x938) = 0;
  *(uint *)((long)param_1 + 0x3734) = *(uint *)((long)param_1 + 0x3734) | 4;
  FUN_00f0d92c(ppuVar4,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98,&DAT_01bb575c);
  uVar31 = FUN_00e6ce7c("MAIN_PROFILE_WINS_LABEL",0);
  FUN_00f0d75c(ppuVar4,uVar31);
  FUN_00f0d92c(ppuVar5,PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20,&DAT_01bb575c);
  FUN_00e705c8(&local_350,"0");
  FUN_00f0d75c(ppuVar5,&local_350);
  if (local_348 != (void *)0x0) {
    operator_delete__(local_348);
    local_350 = (undefined **)0x0;
    local_348 = (void *)0x0;
  }
  FUN_00f0d92c(ppuVar6,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bb575c);
  uVar31 = FUN_00e6ce7c("MAIN_PROFILE_GOLD_LABEL",0);
  FUN_00f0d75c(ppuVar6,uVar31);
  FUN_008fa54c(&local_350,"ice_icon_small");
  FUN_00b1acf0(param_1 + 0xe6,&local_350);
  if (((ulong)local_350 & 1) != 0) {
    operator_delete(local_340);
  }
  FUN_00f0d92c(ppuVar7,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bb575c);
  uVar31 = FUN_00e6ce7c("MAIN_PROFILE_SILVER_LABEL",0);
  FUN_00f0d75c(ppuVar7,uVar31);
  FUN_008fa54c(&local_350,"glory_icon_small");
  FUN_00b1acf0(param_1 + 0x1a7,&local_350);
  if (((ulong)local_350 & 1) != 0) {
    operator_delete(local_340);
  }
  FUN_00f0d92c(ppuVar8,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bb575c);
  uVar31 = FUN_00e6ce7c("MAIN_PROFILE_OPAL_LABEL",0);
  FUN_00f0d75c(ppuVar8,uVar31);
  FUN_008fa54c(&local_350,"opal_icon_small");
  FUN_00b1acf0(param_1 + 0x2bd,&local_350);
  if (((ulong)local_350 & 1) != 0) {
    operator_delete(local_340);
  }
  FUN_00f0e548(ppuVar10,PTR_s_build___MenuPartsCommon_tga_02be3530,"icon_karma_L1");
  if ((*(float *)(param_1 + 0x38c) != 0.8) || (*(float *)((long)param_1 + 0x1c64) != 0.8)) {
    param_1[0x38c] = (undefined *)0x3f4ccccd3f4ccccd;
    FUN_0091ada4(ppuVar10);
  }
  FUN_00f0d92c(ppuVar12,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&DAT_01bee7fa);
  uVar31 = FUN_00e6ce7c("MAIN_PROFILE_KARMA_GOOD",0);
  FUN_00f0d75c(ppuVar12,uVar31);
  if ((*(uint *)((long)param_1 + 0x1e7c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1e7c) = *(uint *)((long)param_1 + 0x1e7c) & 0xffff807f | 0x3f80;
    FUN_0091ada4(ppuVar12);
  }
  FUN_00f0e548(ppuVar11,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  FUN_00f13f08(0x43fa0000,0x42c80000,ppuVar11);
  FUN_00f0d92c(ppuVar14,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&DAT_01bee7fa);
  uVar31 = FUN_00e6ce7c("MAIN_PROFILE_BAN_TIMER",0);
  FUN_00b252ac(ppuVar14,uVar31,0,0);
  uVar30 = *(uint *)((long)param_1 + 0x209c);
  if ((uVar30 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x209c) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x2600;
    FUN_0091ada4(ppuVar14);
    uVar30 = *(uint *)((long)param_1 + 0x209c);
  }
  *(uint *)((long)param_1 + 0x209c) = uVar30 & 0xfffffffb;
  FUN_00f0e548(ppuVar13,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  FUN_00f13f08(0x44960000,0x42c80000,ppuVar13);
  FUN_00f0d92c(ppuVar15,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70,&DAT_01bee7fa);
  uVar31 = FUN_00e6ce7c("MAIN_PROFILE_KARMA_BONUS_LABEL",0);
  FUN_00f0d75c(ppuVar15,uVar31);
  uVar30 = *(uint *)((long)param_1 + 0x21fc);
  if ((uVar30 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x21fc) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x2600;
    FUN_0091ada4(ppuVar15);
    uVar30 = *(uint *)((long)param_1 + 0x21fc);
  }
  *(uint *)((long)param_1 + 0x21fc) = uVar30 & 0xfffffffb;
  *(uint *)((long)param_1 + 0x232c) = *(uint *)((long)param_1 + 0x232c) | 0x10;
  FUN_00ed04d8(ppuVar17,1,0);
  FUN_00f0e548(ppuVar19,PTR_s_build___MenuPartsCommon_tga_02be3530,"account_level_shield_blur");
  if ((*(float *)(param_1 + 0x553) != 0.48) || (*(float *)((long)param_1 + 0x2a9c) != 0.38)) {
    param_1[0x553] = (undefined *)0x3ec28f5c3ef5c28f;
    FUN_0091ada4(ppuVar19);
  }
  if ((*(float *)(param_1 + 0x552) != 6.5) || (*(float *)((long)param_1 + 0x2a94) != 6.5)) {
    puVar33 = (undefined *)NEON_fmov(0x40d00000,4);
    param_1[0x552] = puVar33;
    FUN_0091ada4(ppuVar19);
  }
  uVar30 = *(uint *)((long)param_1 + 0x2acc);
  if ((uVar30 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x2acc) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x1980;
    FUN_0091ada4(ppuVar19);
  }
  uVar30 = FUN_0093dbe8();
  *(uint *)((long)param_1 + 0x2acc) =
       *(uint *)((long)param_1 + 0x2acc) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x2acc) & 3 | (~uVar30 & 1) << 2;
  FUN_00f0e548(ppuVar20,PTR_s_build___MenuPartsCommon_tga_02be3530,"account_level_shield_blur");
  if ((*(float *)(param_1 + 0x571) != 0.48) || (*(float *)((long)param_1 + 0x2b8c) != 0.38)) {
    param_1[0x571] = (undefined *)0x3ec28f5c3ef5c28f;
    FUN_0091ada4(ppuVar20);
  }
  if ((*(float *)(param_1 + 0x570) != 8.5) || (*(float *)((long)param_1 + 0x2b84) != 8.5)) {
    puVar33 = (undefined *)NEON_fmov(0x41080000,4);
    param_1[0x570] = puVar33;
    FUN_0091ada4(ppuVar20);
  }
  if ((*(uint *)((long)param_1 + 0x2bbc) & 0x7f80) != 0x600) {
    *(uint *)((long)param_1 + 0x2bbc) = *(uint *)((long)param_1 + 0x2bbc) & 0xffff807f | 0x600;
    FUN_0091ada4(ppuVar20);
  }
  uVar30 = FUN_0093dbe8();
  *(uint *)((long)param_1 + 0x2bbc) =
       *(uint *)((long)param_1 + 0x2bbc) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x2bbc) & 3 | (~uVar30 & 1) << 2;
  if ((*(float *)(param_1 + 0x97e) != 2.0) || (*(float *)((long)param_1 + 0x4bf4) != 2.0)) {
    param_1[0x97e] = (undefined *)0x4000000040000000;
    FUN_0091ada4(ppuVar26);
  }
  FUN_00b3ee24(0x3f08f5c3,ppuVar21);
  *(uint *)((long)param_1 + 0x2cac) = *(uint *)((long)param_1 + 0x2cac) & 0xfffffffb;
  FUN_00b3ee24(0x3f08f5c3,ppuVar28);
  FUN_009c7330(auStack_108);
  local_8c = local_8c & 0xffff | 0x3200000;
  local_c8 = 0;
  uVar31 = FUN_00e6ce7c("MENU_PROFILE_TUTORIAL_CHEST_TITLE",0);
  thunk_FUN_00e7051c(&local_350,uVar31);
  FUN_008fcdb8(&local_340,&DAT_0320ffa8);
  local_328 = 0;
  local_324 = 0x41200000;
  FUN_009c84f0(auStack_108,&local_350);
  if (((ulong)local_340 & 1) != 0) {
    operator_delete(local_330);
  }
  if (local_348 != (void *)0x0) {
    operator_delete__(local_348);
    local_350 = (undefined **)0x0;
    local_348 = (void *)0x0;
  }
  uVar31 = FUN_00e6ce7c("MENU_PROFILE_TUTORIAL_CHEST_DESCRIPTION",0);
  thunk_FUN_00e7051c(&local_350,uVar31);
  FUN_008fcdb8(&local_340,&DAT_0320ffa8);
  local_328 = 1;
  local_324 = 0x41200000;
  FUN_009c84f0(auStack_108,&local_350);
  if (((ulong)local_340 & 1) != 0) {
    operator_delete(local_330);
  }
  if (local_348 != (void *)0x0) {
    operator_delete__(local_348);
    local_350 = (undefined **)0x0;
    local_348 = (void *)0x0;
  }
  FUN_008fa54c(&local_350,"tutorial_not_complete");
  FUN_00adbc38(param_1 + 0xb75,&local_350,auStack_108);
  if (((ulong)local_350 & 1) != 0) {
    operator_delete(local_340);
  }
  FUN_00f0e548(ppuVar25,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar30 = *(uint *)((long)param_1 + 0x4b3c);
  if ((uVar30 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x4b3c) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x5900;
    FUN_0091ada4(ppuVar25);
  }
  FUN_00f0e548(ppuVar24,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar30 = *(uint *)((long)param_1 + 0x4a4c);
  if ((uVar30 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_1 + 0x4a4c) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x2c80;
    FUN_0091ada4(ppuVar24);
  }
  local_328 = FUN_00f048a4("EVENT_SCROLLING_TO_PAGE");
  ppuVar1 = param_1 + 1;
  local_350 = (undefined **)FUN_00b670bc;
  local_338 = (code *)0x0;
  local_330 = (void *)0x0;
  local_340 = (undefined **)0x0;
  local_348 = param_1;
  FUN_009693a0(ppuVar1,&local_350);
  local_328 = FUN_00f048a4("EVENT_SCROLLING_FINISHED");
  local_350 = (undefined **)FUN_00b670c0;
  local_338 = (code *)0x0;
  local_330 = (void *)0x0;
  local_340 = (undefined **)0x0;
  local_348 = param_1;
  FUN_009693a0(ppuVar1,&local_350);
  local_328 = FUN_00f048a4("UI::EVENT_MENU_OPEN_CHEST");
  local_350 = (undefined **)thunk_FUN_00b6a218;
  local_338 = (code *)0x0;
  local_330 = (void *)0x0;
  local_340 = (undefined **)0x0;
  local_348 = param_1;
  FUN_009693a0(param_1 + 0x586,&local_350);
  thunk_FUN_00f04824(ppuVar21,ppuVar17);
  local_328 = FUN_00f048a4("UI::EVENT_OPEN_GOVERNMENTID");
  local_350 = (undefined **)thunk_FUN_00b6a4cc;
  local_338 = (code *)0x0;
  local_330 = (void *)0x0;
  local_340 = (undefined **)0x0;
  local_348 = param_1;
  FUN_009693a0(ppuVar1,&local_350);
  uVar31 = FUN_00a012b4();
  local_348 = (undefined **)0x0;
  local_338 = thunk_FUN_00b68efc;
  local_350 = param_1;
  local_340 = param_1;
  FUN_009e4694(uVar31,&local_350);
  uVar31 = FUN_00a016d4();
  local_350 = (undefined **)0x0;
  local_338 = FUN_00b6a738;
  local_348 = param_1;
  local_340 = param_1;
  FUN_009e47b4(uVar31,&local_350);
  local_328 = DAT_03133770;
  local_350 = (undefined **)FUN_00b670f4;
  local_338 = (code *)0x0;
  local_330 = (void *)0x0;
  local_340 = (undefined **)0x0;
  local_348 = param_1;
  FUN_009693a0(ppuVar1,&local_350);
  uVar32 = FUN_0093dbe8();
  if ((uVar32 & 1) != 0) {
    *(uint *)((long)param_1 + 0x684) = *(uint *)((long)param_1 + 0x684) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x7b4) = *(uint *)((long)param_1 + 0x7b4) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xdbc) = *(uint *)((long)param_1 + 0xdbc) & 0xfffffffb;
    *(uint *)((long)param_1 + 0xc8c) = *(uint *)((long)param_1 + 0xc8c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x153c) = *(uint *)((long)param_1 + 0x153c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x1c9c) = *(uint *)((long)param_1 + 0x1c9c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x166c) = *(uint *)((long)param_1 + 0x166c) & 0xfffffffb;
    *(uint *)((long)param_1 + 0x1e7c) = *(uint *)((long)param_1 + 0x1e7c) & 0xfffffffb;
    FUN_00e84dac(&local_350);
    local_350 = &PTR_FUN_027bb448;
    memset(&local_328,0,0x58);
    FUN_00964684(auStack_2d0);
    local_1a8 = 0xffffffffffffffff;
    local_22c = 10;
    FUN_00b67100(param_1,&local_350,0);
    local_350 = &PTR_FUN_027bb448;
    FUN_009515b0(auStack_2d0);
    FUN_00951478(auStack_2f8,1);
    if (local_300 != (void *)0x0) {
      operator_delete__(local_300);
      local_308 = 0;
      local_300 = (void *)0x0;
    }
    FUN_0095132c(auStack_318,1);
    FUN_009512b0(&local_328,1);
    FUN_00e84dd8(&local_350);
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    local_d8 = 0;
    local_d0 = (void *)0x0;
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
    local_e8 = 0;
    local_e0 = (void *)0x0;
  }
  if (local_f0 != (void *)0x0) {
    operator_delete__(local_f0);
    local_f8 = 0;
    local_f0 = (void *)0x0;
  }
  FUN_009c86a0(auStack_108,1);
  if (*(long *)(lVar29 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

