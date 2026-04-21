// functions/00c09 — 2 functions
#include "libGameKindred.h"




void FUN_00c09018(void *param_1)

{
  FUN_00c08980();
  operator_delete(param_1);
  return;
}




void FUN_00c0903c(long *param_1)

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
  byte *pbVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined8 uVar23;
  ulong uVar24;
  char *pcVar25;
  long *plVar26;
  undefined4 local_c8;
  undefined4 uStack_c4;
  code *local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  long local_90;
  
  lVar19 = tpidr_el0;
  local_90 = *(long *)(lVar19 + 0x28);
  plVar26 = param_1 + 0x1a;
  (**(code **)(*param_1 + 0x78))(param_1,plVar26,1);
  plVar1 = param_1 + 0x56;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar6 = param_1 + 0x2bd;
  FUN_00f0ad88(plVar1,plVar6,1);
  plVar2 = param_1 + 0x14d;
  FUN_00f0ad88(plVar1,plVar2,1);
  plVar3 = param_1 + 0x16b;
  FUN_00f0ad88(plVar1,plVar3,1);
  plVar7 = param_1 + 0x201;
  FUN_00f0ad88(plVar1,plVar7,1);
  plVar8 = param_1 + 0x297;
  FUN_00f0ad88(plVar1,plVar8,1);
  plVar9 = param_1 + 0x2510;
  FUN_00f0ad88(plVar1,plVar9,1);
  pbVar10 = (byte *)(param_1 + 0x317f);
  if ((*pbVar10 >> 3 & 1) != 0) {
    FUN_00f0ad88(plVar1,param_1 + 0x27c8,1);
  }
  plVar1 = param_1 + 0x7f;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar11 = param_1 + 0x81a;
  FUN_00f0ad88(plVar1,plVar11,1);
  plVar12 = param_1 + 0xad2;
  FUN_00f0ad88(plVar1,plVar12,1);
  plVar13 = param_1 + 0xd8a;
  FUN_00f0ad88(plVar1,plVar13,1);
  plVar14 = param_1 + 0x1042;
  FUN_00f0ad88(plVar1,plVar14,1);
  if ((*pbVar10 >> 3 & 1) != 0) {
    plVar1 = param_1 + 0xa8;
    (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
    FUN_00f023ec(plVar1,param_1 + 0x15b2,1);
    FUN_00f023ec(plVar1,param_1 + 0x15d0,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xbf,1);
  plVar1 = param_1 + 0x111;
  FUN_00f0ad88(param_1 + 0xbf,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xe8,1);
  plVar4 = param_1 + 0x12f;
  FUN_00f0ad88(param_1 + 0xe8,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x7f3,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x24ff,1);
  FUN_00f023ec(param_1 + 0x24ff,param_1 + 0x2a80,1);
  plVar5 = param_1 + 0x38;
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2e53,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x15f6,1);
  FUN_00f00298(&uStack_c4,&local_c8);
  uVar20 = FUN_0092ea9c();
  uVar21 = FUN_0092ead0(uStack_c4,local_c8);
  uVar16 = 0x449b0000;
  if ((uVar20 & uVar21 & 1) == 0) {
    uVar16 = 0x44870000;
  }
  *(undefined4 *)(param_1 + 0x317a) = uVar16;
  FUN_00f0e548(plVar26,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_store_bkgmiddle");
  FUN_00f0e670(plVar26,&DAT_01bee7f6,2);
  if ((~*(uint *)((long)param_1 + 0x154) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x154) = *(uint *)((long)param_1 + 0x154) | 0x7f80;
    FUN_0091ada4(plVar26);
  }
  plVar26 = param_1 + 0x1b;
  uVar16 = DAT_03210f58;
  local_c0 = FUN_00c0a1fc;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar16;
  FUN_009693a0(plVar26,&local_c0);
  local_c0 = FUN_00c0a1fc;
  uVar17 = DAT_03210f84;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar17;
  FUN_009693a0(plVar26,&local_c0);
  local_c0 = FUN_00c0a1fc;
  local_98 = DAT_03210f5c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(plVar26,&local_c0);
  local_c0 = FUN_00c0a1fc;
  local_98 = DAT_03210f88;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(plVar26,&local_c0);
  local_c0 = FUN_00c0a1fc;
  local_98 = DAT_03210f60;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(plVar26,&local_c0);
  local_c0 = FUN_00c0a1fc;
  local_98 = DAT_03210f8c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(plVar26,&local_c0);
  *(uint *)((long)param_1 + 0x154) = *(uint *)((long)param_1 + 0x154) | 0x10;
  local_c0 = FUN_00c0a21c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar16;
  FUN_009693a0(param_1 + 0xc0,&local_c0);
  local_c0 = FUN_00c0a21c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar17;
  FUN_009693a0(param_1 + 0xc0,&local_c0);
  *(uint *)((long)param_1 + 0x67c) = *(uint *)((long)param_1 + 0x67c) | 0x10;
  local_c0 = FUN_00c0a21c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar16;
  FUN_009693a0(param_1 + 0xe9,&local_c0);
  local_c0 = FUN_00c0a21c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar17;
  FUN_009693a0(param_1 + 0xe9,&local_c0);
  *(uint *)((long)param_1 + 0x7c4) = *(uint *)((long)param_1 + 0x7c4) | 0x10;
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440,"vert_glass_shadow");
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  uVar20 = *(uint *)((long)param_1 + 0x90c);
  if ((uVar20 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x90c) = uVar20 & 0xffff8000 | uVar20 & 0x7f | 0x2600;
    FUN_0091ada4(plVar1);
  }
  *(byte *)(param_1 + 300) = *(byte *)(param_1 + 300) | 2;
  FUN_00f0e548(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440,"vert_glass_shadow");
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  uVar20 = *(uint *)((long)param_1 + 0x9fc);
  if ((uVar20 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x9fc) = uVar20 & 0xffff8000 | uVar20 & 0x7f | 0x2600;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_pingicon_action_swords");
  uVar20 = *(uint *)((long)param_1 + 0xaec);
  if ((uVar20 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xaec) = uVar20 & 0xffff8000 | uVar20 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar2);
  }
  FUN_00c88730(plVar3,&DAT_01bee7fa,&DAT_01bbb8bc);
  FUN_00c88698(plVar3,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  if ((*(float *)(param_1 + 0x174) != 1.4) || (*(float *)((long)param_1 + 0xba4) != 1.4)) {
    param_1[0x174] = 0x3fb333333fb33333;
    FUN_0091ada4(plVar3);
  }
  FUN_00e705c8(&local_c0,"19");
  FUN_00c88770(plVar3,&local_c0);
  if (local_b8 != (long *)0x0) {
    operator_delete__(local_b8);
    local_c0 = (code *)0x0;
    local_b8 = (long *)0x0;
  }
  FUN_00c88730(plVar7,&DAT_01bee7fa,&DAT_01bbb8c8);
  FUN_00c88698(plVar7,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  if ((*(float *)(param_1 + 0x20a) != 1.4) || (*(float *)((long)param_1 + 0x1054) != 1.4)) {
    param_1[0x20a] = 0x3fb333333fb33333;
    FUN_0091ada4(plVar7);
  }
  FUN_00e705c8(&local_c0,"19");
  FUN_00c88770(plVar7,&local_c0);
  if (local_b8 != (long *)0x0) {
    operator_delete__(local_b8);
    local_c0 = (code *)0x0;
    local_b8 = (long *)0x0;
  }
  *(undefined1 *)((long)param_1 + 0x14b4) = 1;
  FUN_00f0d378(plVar8,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00f0d7fc(plVar8,&DAT_01bbb8b8);
  FUN_00e705c8(&local_c0,&DAT_01bb47fe);
  FUN_00f0d75c(plVar8,&local_c0);
  if (local_b8 != (long *)0x0) {
    operator_delete__(local_b8);
    local_c0 = (code *)0x0;
    local_b8 = (long *)0x0;
  }
  FUN_00f0d378(plVar6,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  FUN_00f0d7fc(plVar6,&DAT_01bbb8bc);
  FUN_00e705c8(&local_c0,"Game Over");
  FUN_00f0d75c(plVar6,&local_c0);
  if (local_b8 != (long *)0x0) {
    operator_delete__(local_b8);
    local_c0 = (code *)0x0;
    local_b8 = (long *)0x0;
  }
  *(uint *)((long)param_1 + 0x166c) = *(uint *)((long)param_1 + 0x166c) & 0xfffffffb;
  FUN_00c886f8(param_1 + 0x2e3,"hud_pingicon_action_turret");
  FUN_00c88730(param_1 + 0x2e3,&DAT_01bbb8c4,&DAT_01bbb8c0);
  plVar1 = param_1 + 0x379;
  FUN_00c886f8(plVar1,"hud_store_gold_icon_large");
  FUN_00c88700(0x3f400000,plVar1);
  FUN_00c88730(plVar1,&DAT_01bbb8c4,&DAT_01bbb8c0);
  FUN_00c886f8(param_1 + 0x40f,"hud_pingicon_action_turret");
  FUN_00c88730(param_1 + 0x40f,&DAT_01bbb8d0,&DAT_01bbb8cc);
  plVar1 = param_1 + 0x4a5;
  *(undefined1 *)((long)param_1 + 0x2524) = 1;
  FUN_00c886f8(plVar1,"hud_store_gold_icon_large");
  FUN_00c88700(0x3f400000,plVar1);
  FUN_00c88730(plVar1,&DAT_01bbb8d0,&DAT_01bbb8cc);
  *(undefined1 *)((long)param_1 + 0x29d4) = 1;
  uVar23 = FUN_00e6ce7c("HUD_SCOREBOARD_FIXED_ORDER_BUTTON",0);
  local_c0 = (code *)CONCAT44(local_c0._4_4_,0xff969696);
  FUN_00ab703c(0x42000000,0,0x44160000,param_1 + 0x53b,0,uVar23,&local_c0,&DAT_03218ef8,0);
  uVar18 = DAT_03210c64;
  local_c0 = FUN_00c0a234;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar18;
  FUN_009693a0(param_1 + 0x53c,&local_c0);
  FUN_00b09144(0x3d4ccccd,param_1 + 0x53b);
  uVar23 = FUN_00e6ce7c("HUD_SURRENDER_BUTTON",0);
  FUN_00910394(param_1 + 0x317b,uVar23);
  local_c0 = (code *)CONCAT44(local_c0._4_4_,0xffc0c0c0);
  FUN_00ab703c(0x42000000,0,0x44160000,plVar11,0,param_1 + 0x317b,&local_c0,&DAT_03218ef8,0);
  local_c0 = FUN_00c0a24c;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar18;
  FUN_009693a0(param_1 + 0x81b,&local_c0);
  FUN_00b09144(0x3d4ccccd,plVar11);
  uVar23 = FUN_00e6ce7c("HUD_RATING_BUTTON",0);
  local_c0 = (code *)CONCAT44(local_c0._4_4_,0xffc0c0c0);
  FUN_00ab703c(0x42000000,0,0x44160000,plVar12,0,uVar23,&local_c0,&DAT_03218ef8,0);
  local_c0 = FUN_00c0a264;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar18;
  FUN_009693a0(param_1 + 0xad3,&local_c0);
  FUN_00b09144(0x3d4ccccd,plVar12);
  *(uint *)((long)param_1 + 0x5714) = *(uint *)((long)param_1 + 0x5714) & 0xfffffffb;
  uVar23 = FUN_00e6ce7c("HUD_SCOREBOARD_SOCIAL_TOGLE_BUTTON",0);
  local_c0 = (code *)CONCAT44(local_c0._4_4_,0xffc0c0c0);
  FUN_00ab703c(0x42000000,0,0x44160000,plVar13,0,uVar23,&local_c0,&DAT_03218ef8,0);
  local_c0 = thunk_FUN_00c0bd88;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar18;
  FUN_009693a0(param_1 + 0xd8b,&local_c0);
  FUN_00b09144(0x3d4ccccd,plVar13);
  uVar23 = FUN_00e6ce7c("MENU_INTERSTITIAL_GENERIC_CLOSE",0);
  local_c0 = (code *)CONCAT44(local_c0._4_4_,0xffc0c0c0);
  FUN_00ab703c(0x42000000,0,0x44160000,plVar14,0,uVar23,&local_c0,&DAT_03218ef8,0);
  local_c0 = FUN_00c0a2a0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar18;
  FUN_009693a0(param_1 + 0x1043,&local_c0);
  FUN_00b09144(0x3d4ccccd,plVar14);
  if ((*pbVar10 >> 3 & 1) == 0) goto LAB_00c09ccc;
  FUN_00f0e548(param_1 + 0x15b2,PTR_s_build___HUDPartsFor35_atlas_02be3450,"vainglory_logo_small");
  uVar20 = *(uint *)((long)param_1 + 0xae14);
  if ((uVar20 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xae14) = uVar20 & 0xffff8000 | uVar20 & 0x7f | 0x4c80;
    FUN_0091ada4(param_1 + 0x15b2);
  }
  plVar1 = param_1 + 0x15d0;
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00f0d7fc(plVar1,&DAT_01bbb8b8);
  iVar22 = FUN_0092ec00();
  if (iVar22 == 0xf) {
    uVar24 = FUN_00937f1c();
    if ((uVar24 & 1) == 0) goto LAB_00c09c94;
    pcVar25 = "vg.163.com/download";
  }
  else if (iVar22 == 0xe) {
    pcVar25 = "vainglory.vn";
  }
  else {
LAB_00c09c94:
    pcVar25 = "5v5.vainglorygame.com";
  }
  FUN_00e705c8(&local_c0,pcVar25);
  FUN_00f0d75c(plVar1,&local_c0);
  if (local_b8 != (long *)0x0) {
    operator_delete__(local_b8);
    local_c0 = (code *)0x0;
    local_b8 = (long *)0x0;
  }
  *(uint *)((long)param_1 + 0x5c4) = *(uint *)((long)param_1 + 0x5c4) & 0xfffffffb;
LAB_00c09ccc:
  FUN_00f13f08(0x44898000,0x43fa0000,param_1 + 0x2e53);
  *(uint *)((long)param_1 + 0x1731c) = *(uint *)((long)param_1 + 0x1731c) & 0xfffffffb;
  FUN_00f0e548(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar5,&DAT_01bee7f6,2);
  uVar20 = *(uint *)((long)param_1 + 0x244);
  if ((uVar20 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x244) = uVar20 & 0xffff8000 | uVar20 & 0x7f | 0x3300;
    FUN_0091ada4(plVar5);
  }
  local_c0 = FUN_00c0a2b8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar16;
  FUN_009693a0(param_1 + 0x39,&local_c0);
  local_c0 = FUN_00c0a2b8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar17;
  FUN_009693a0(param_1 + 0x39,&local_c0);
  *(uint *)((long)param_1 + 0x244) = *(uint *)((long)param_1 + 0x244) & 0xfffffffb | 0x10;
  FUN_00ab73d8(0xc1600000,0x42500000,0x42a00000,plVar9,"hud_popup_close_x",&DAT_01bee7fa);
  FUN_00ab7628(0x42a00000,plVar9);
  uVar20 = *(uint *)((long)param_1 + 0x12904);
  if ((uVar20 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x12904) = uVar20 & 0xffff8000 | uVar20 & 0x7f | 0x3300;
    FUN_0091ada4(plVar9);
  }
  FUN_00ab7598(0x3f400000,plVar9,&DAT_01bee7f6);
  local_c0 = FUN_00c0a2a0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  local_98 = uVar18;
  FUN_009693a0(param_1 + 0x2511,&local_c0);
  if ((*pbVar10 >> 3 & 1) != 0) {
    uVar23 = FUN_00e6ce7c("HUD_SCOREBOARD_SHARE_BUTTON",0);
    local_c0 = (code *)CONCAT44(local_c0._4_4_,0xffc0c0c0);
    FUN_00ab703c(0x42000000,0,0x44160000,param_1 + 0x27c8,0,uVar23,&local_c0,&DAT_03218ef8,0);
    FUN_00b09144(0x3d4ccccd,param_1 + 0x27c8);
    local_c0 = FUN_00c0a2dc;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b0 = 0;
    local_b8 = param_1;
    local_98 = uVar18;
    FUN_009693a0(param_1 + 0x27c9,&local_c0);
    *(uint *)((long)param_1 + 0x13ec4) = *(uint *)((long)param_1 + 0x13ec4) & 0xfffffffb;
  }
  local_98 = FUN_00f048a4("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP_FROM_TAP");
  plVar1 = param_1 + 1;
  local_c0 = FUN_00c0a2f4;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_98 = FUN_00f048a4("UI::EVENT_HUD_SHOW_TALENT_TOOLTIP_FROM_TAP");
  local_c0 = FUN_00c0a324;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_98 = FUN_00f048a4("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP_FROM_HOVER");
  local_c0 = FUN_00c0a354;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_98 = FUN_00f048a4("UI::EVENT_HUD_SHOW_TALENT_TOOLTIP_FROM_HOVER");
  local_c0 = FUN_00c0a384;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_98 = FUN_00f048a4("UI::EVENT_HUD_HIDE_ITEM_TOOLTIP");
  local_c0 = FUN_00c0a3b4;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_98 = FUN_00f048a4("UI::EVENT_HUD_HIDE_TALENT_TOOLTIP");
  local_c0 = FUN_00c0a3d4;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_98 = FUN_00f048a4("UI::EVENT_HUD_SHOW_ITEM_TOOLTIP_SIDE");
  local_c0 = FUN_00c0a3f4;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_98 = FUN_00f048a4("EVENT_SELECT_THUMBS_UP");
  local_c0 = FUN_00c0a3fc;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_98 = FUN_00f048a4("EVENT_CLEAR_REPORT");
  local_c0 = FUN_00c0a440;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_98 = FUN_00f048a4("EVENT_SELECT_NEGATIVE_REPORT");
  local_c0 = FUN_00c0a488;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_98 = FUN_00f048a4("EVENT_SELECT_MATCH_RATING");
  local_c0 = FUN_00c0a490;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_98 = FUN_00f048a4("EVENT_SELECT_MATCH_QUALITY");
  local_c0 = FUN_00c0a4d4;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_98 = FUN_00f048a4("EVENT_SELECT_THANK_YOU");
  local_c0 = FUN_00c0a4f0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = 0;
  local_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  FUN_009188a4();
  uVar24 = FUN_0091a5a4();
  puVar15 = (uint *)((long)param_1 + 0x6cd4);
  if ((uVar24 & 1) != 0) {
    *puVar15 = *puVar15 & 0xfffffff3;
    *(uint *)((long)param_1 + 0x4154) = *(uint *)((long)param_1 + 0x4154) & 0xfffffff3;
  }
  uVar20 = FUN_00ceab64();
  *puVar15 = *puVar15 & 0xfffffff8 | *puVar15 & 3 | (~uVar20 & 1) << 2;
  if (*(long *)(lVar19 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

