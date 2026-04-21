// functions/00a05 — 5 functions
#include "libGameKindred.h"




void FUN_00a051ec(undefined8 param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_218;
  void *local_210;
  undefined8 local_208;
  void *local_200;
  undefined1 auStack_1f8 [16];
  byte local_1e8;
  void *local_1d8;
  undefined8 local_1c4;
  undefined8 local_1b8;
  void *local_1b0;
  undefined8 local_1a8;
  void *local_1a0;
  undefined8 local_198;
  void *local_190;
  byte local_188;
  void *local_178;
  undefined4 local_170;
  char *local_168;
  undefined1 local_159;
  undefined1 auStack_150 [16];
  byte local_140;
  void *local_130;
  undefined8 local_11c;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  byte local_e0;
  void *local_d0;
  undefined4 local_c8;
  char *local_c0;
  undefined1 local_b1;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  void *local_80;
  byte local_77;
  undefined1 local_76;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  FUN_00a02e7c(auStack_a8,param_2,0);
  FUN_00a02b4c(auStack_150,0xf,0,0xffffffff,0xffffffff);
  FUN_00a02b4c(auStack_1f8,0x10,0,0xffffffff,0xffffffff);
  uVar2 = FUN_00e6ce7c("5V5_ALT_TUTORIAL_TITLE_1",0);
  FUN_00910394(&local_110,uVar2);
  uVar2 = FUN_00e6ce7c("5V5_ALT_TUTORIAL_SUB_TITLE",0);
  FUN_00910394(&local_100,uVar2);
  FUN_00e70510(&local_208);
  FUN_00e70e18(&local_208,&DAT_01bb6d43,7);
  FUN_00e705c8(&local_218,"[AMOUNT]");
  FUN_00e71248(&local_100,0,&local_218,&local_208);
  if (local_210 != (void *)0x0) {
    operator_delete__(local_210);
    local_218 = 0;
    local_210 = (void *)0x0;
  }
  local_c0 = "game_mode_setting_tutorial_2";
  local_c8 = 3;
  local_11c = 0x400000001;
  local_b1 = 1;
  FUN_00a02ef0(auStack_a8,auStack_150,0);
  uVar2 = FUN_00e6ce7c("5V5_ALT_TUTORIAL_TITLE_2",0);
  FUN_00910394(&local_1b8,uVar2);
  uVar2 = FUN_00e6ce7c("5V5_ALT_TUTORIAL_SUB_TITLE",0);
  FUN_00910394(&local_1a8,uVar2);
  FUN_00e70e18(&local_208,&DAT_01bb6d43,7);
  FUN_00e705c8(&local_218,"[AMOUNT]");
  FUN_00e71248(&local_1a8,0,&local_218,&local_208);
  if (local_210 != (void *)0x0) {
    operator_delete__(local_210);
    local_218 = 0;
    local_210 = (void *)0x0;
  }
  local_170 = 3;
  local_168 = "game_mode_setting_tutorial_3";
  local_1c4 = 0x500000002;
  local_159 = 1;
  FUN_00a02ef0(auStack_a8,auStack_1f8,0);
  local_76 = 1;
  uVar2 = FUN_00e6ce7c("5V5_TUTORIAL_SUB_TITLE_1",0);
  FUN_00910394(&local_88,uVar2);
  local_77 = param_3 & 1;
  thunk_FUN_00a030fc(param_1,auStack_a8);
  if (local_200 != (void *)0x0) {
    operator_delete__(local_200);
    local_208 = 0;
    local_200 = (void *)0x0;
  }
  if ((local_188 & 1) != 0) {
    operator_delete(local_178);
  }
  if (local_190 != (void *)0x0) {
    operator_delete__(local_190);
    local_198 = 0;
    local_190 = (void *)0x0;
  }
  if (local_1a0 != (void *)0x0) {
    operator_delete__(local_1a0);
    local_1a8 = 0;
    local_1a0 = (void *)0x0;
  }
  if (local_1b0 != (void *)0x0) {
    operator_delete__(local_1b0);
    local_1b8 = 0;
    local_1b0 = (void *)0x0;
  }
  if ((local_1e8 & 1) != 0) {
    operator_delete(local_1d8);
  }
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
    local_f0 = 0;
    local_e8 = (void *)0x0;
  }
  if (local_f8 != (void *)0x0) {
    operator_delete__(local_f8);
    local_100 = 0;
    local_f8 = (void *)0x0;
  }
  if (local_108 != (void *)0x0) {
    operator_delete__(local_108);
    local_110 = 0;
    local_108 = (void *)0x0;
  }
  if ((local_140 & 1) != 0) {
    operator_delete(local_130);
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  FUN_00a036a8(auStack_a0,1);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a0552c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_320 [16];
  byte local_310;
  void *local_300;
  undefined4 local_2ec;
  undefined8 local_2e0;
  void *local_2d8;
  undefined8 local_2d0;
  void *local_2c8;
  undefined8 local_2c0;
  void *local_2b8;
  byte local_2b0;
  void *local_2a0;
  undefined4 local_298;
  char *local_290;
  undefined1 local_281;
  undefined1 auStack_278 [16];
  byte local_268;
  void *local_258;
  undefined4 local_244;
  undefined8 local_238;
  void *local_230;
  undefined8 local_228;
  void *local_220;
  undefined8 local_218;
  void *local_210;
  byte local_208;
  void *local_1f8;
  undefined4 local_1f0;
  char *local_1e8;
  undefined1 local_1d9;
  undefined1 auStack_1d0 [16];
  byte local_1c0;
  void *local_1b0;
  undefined4 local_19c;
  undefined8 local_190;
  void *local_188;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  void *local_168;
  byte local_160;
  void *local_150;
  undefined4 local_148;
  char *local_140;
  undefined1 local_131;
  undefined1 auStack_128 [16];
  byte local_118;
  void *local_108;
  undefined8 local_f4;
  undefined8 local_e8;
  void *local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined8 local_c8;
  void *local_c0;
  byte local_b8;
  void *local_a8;
  undefined4 local_a0;
  char *local_98;
  undefined1 local_89;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 local_60;
  void *local_58;
  undefined1 local_4f;
  undefined1 local_4e;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00a02e7c(auStack_80,param_2,0);
  FUN_00a02b4c(auStack_128,0xb,0,0xffffffff,0xffffffff);
  FUN_00a02b4c(auStack_1d0,0xc,0,0xffffffff,0xffffffff);
  FUN_00a02b4c(auStack_278,0xd,0,0xffffffff,0xffffffff);
  FUN_00a02b4c(auStack_320,0xe,0,0xffffffff,0xffffffff);
  lVar3 = FUN_00940c10();
  iVar1 = *(int *)(lVar3 + 0x24);
  if (iVar1 == 1) {
LAB_00a05654:
    uVar4 = FUN_00e6ce7c("5V5_TUTORIAL_TITLE_2",0);
    FUN_00910394(&local_190,uVar4);
    uVar4 = FUN_00e6ce7c("5V5_TUTORIAL_SUB_TITLE_2",0);
    FUN_00910394(&local_180,uVar4);
    local_148 = 3;
    local_140 = "game_mode_setting_tutorial_2";
    local_19c = 2;
    local_131 = 1;
    FUN_00a02ef0(auStack_80,auStack_1d0,0);
    if (iVar1 != 3) goto LAB_00a056c8;
  }
  else {
    uVar4 = FUN_00e6ce7c("5V5_TUTORIAL_TITLE_1",0);
    FUN_00910394(&local_e8,uVar4);
    uVar4 = FUN_00e6ce7c("5V5_TUTORIAL_SUB_TITLE_1",0);
    FUN_00910394(&local_d8,uVar4);
    local_a0 = 3;
    local_98 = "game_mode_setting_tutorial_1";
    local_f4 = 0x300000001;
    local_89 = 1;
    FUN_00a02ef0(auStack_80,auStack_128,0);
    if (iVar1 != 2) goto LAB_00a05654;
LAB_00a056c8:
    uVar4 = FUN_00e6ce7c("5V5_TUTORIAL_TITLE_3",0);
    FUN_00910394(&local_238,uVar4);
    uVar4 = FUN_00e6ce7c("5V5_TUTORIAL_SUB_TITLE_3",0);
    FUN_00910394(&local_228,uVar4);
    local_1f0 = 3;
    local_1e8 = "game_mode_setting_tutorial_3";
    local_244 = 3;
    local_1d9 = 1;
    FUN_00a02ef0(auStack_80,auStack_278,0);
    if (iVar1 == 4) goto LAB_00a057ac;
  }
  uVar4 = FUN_00e6ce7c("5V5_TUTORIAL_TITLE_4",0);
  FUN_00910394(&local_2e0,uVar4);
  uVar4 = FUN_00e6ce7c("5V5_TUTORIAL_SUB_TITLE_4",0);
  FUN_00910394(&local_2d0,uVar4);
  local_298 = 3;
  local_290 = "game_mode_setting_tutorial_4";
  local_2ec = 4;
  local_281 = 1;
  FUN_00a02ef0(auStack_80,auStack_320,0);
LAB_00a057ac:
  local_4e = 1;
  uVar4 = FUN_00e6ce7c("5V5_TUTORIAL_SUB_TITLE_1",0);
  FUN_00910394(&local_60,uVar4);
  local_4f = 1;
  thunk_FUN_00a030fc(param_1,auStack_80);
  if ((local_2b0 & 1) != 0) {
    operator_delete(local_2a0);
  }
  if (local_2b8 != (void *)0x0) {
    operator_delete__(local_2b8);
    local_2c0 = 0;
    local_2b8 = (void *)0x0;
  }
  if (local_2c8 != (void *)0x0) {
    operator_delete__(local_2c8);
    local_2d0 = 0;
    local_2c8 = (void *)0x0;
  }
  if (local_2d8 != (void *)0x0) {
    operator_delete__(local_2d8);
    local_2e0 = 0;
    local_2d8 = (void *)0x0;
  }
  if ((local_310 & 1) != 0) {
    operator_delete(local_300);
  }
  if ((local_208 & 1) != 0) {
    operator_delete(local_1f8);
  }
  if (local_210 != (void *)0x0) {
    operator_delete__(local_210);
    local_218 = 0;
    local_210 = (void *)0x0;
  }
  if (local_220 != (void *)0x0) {
    operator_delete__(local_220);
    local_228 = 0;
    local_220 = (void *)0x0;
  }
  if (local_230 != (void *)0x0) {
    operator_delete__(local_230);
    local_238 = 0;
    local_230 = (void *)0x0;
  }
  if ((local_268 & 1) != 0) {
    operator_delete(local_258);
  }
  if ((local_160 & 1) != 0) {
    operator_delete(local_150);
  }
  if (local_168 != (void *)0x0) {
    operator_delete__(local_168);
    local_170 = 0;
    local_168 = (void *)0x0;
  }
  if (local_178 != (void *)0x0) {
    operator_delete__(local_178);
    local_180 = 0;
    local_178 = (void *)0x0;
  }
  if (local_188 != (void *)0x0) {
    operator_delete__(local_188);
    local_190 = 0;
    local_188 = (void *)0x0;
  }
  if ((local_1c0 & 1) != 0) {
    operator_delete(local_1b0);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
    local_c0 = (void *)0x0;
    local_c8 = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    local_d0 = (void *)0x0;
    local_d8 = 0;
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
    local_e0 = (void *)0x0;
    local_e8 = 0;
  }
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
    local_60 = 0;
    local_58 = (void *)0x0;
  }
  FUN_00a036a8(auStack_78,1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a05980(undefined8 param_1,undefined8 param_2)

{
  FUN_00a051ec(param_1,param_2,1);
  return;
}




void FUN_00a05988(undefined8 param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_1e0 [16];
  byte local_1d0;
  void *local_1c0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  void *local_198;
  undefined8 local_190;
  void *local_188;
  undefined8 local_180;
  void *local_178;
  byte local_170;
  void *local_160;
  undefined4 local_158;
  char *local_150;
  undefined1 auStack_138 [16];
  byte local_128;
  void *local_118;
  undefined4 local_100;
  undefined8 local_f8;
  void *local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined8 local_d8;
  void *local_d0;
  byte local_c8;
  void *local_b8;
  undefined4 local_b0;
  char *local_a8;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  undefined8 local_70;
  void *local_68;
  undefined2 local_60;
  undefined1 local_5e;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00a02e7c(auStack_90,"areYouNew",0);
  lVar3 = FUN_00940c10();
  pcVar1 = "gameplayMode";
  if (*(int *)(lVar3 + 0x20) != 1) {
    pcVar1 = "tutorialLevel";
  }
  FUN_00a02b4c(auStack_138,0x11,"tutorialLevel",0xffffffff,0xffffffff);
  FUN_00a02b4c(auStack_1e0,0x11,pcVar1,0xffffffff,0xffffffff);
  uVar4 = FUN_00e6ce7c("PLAYMENU_OPTION_I_AM_NEW_TITLE",0);
  FUN_00910394(&local_f8,uVar4);
  uVar4 = FUN_00e6ce7c("PLAYMENU_OPTION_I_AM_EXPERIENCED_TITLE",0);
  FUN_00910394(&local_1a0,uVar4);
  lVar3 = FUN_00940c10();
  if (*(int *)(lVar3 + 0x20) == 1) {
    uVar4 = FUN_00e6ce7c("PLAYMENU_OPTION_I_AM_NEW_SUBTEXT",0);
    FUN_00910394(&local_e8,uVar4);
    uVar4 = FUN_00e6ce7c("PLAYMENU_OPTION_I_AM_EXPERIENCED_SUBTEXT",0);
    FUN_00910394(&local_190,uVar4);
  }
  local_b0 = 3;
  local_158 = 3;
  local_a8 = "game_mode_i_am_new";
  local_150 = "game_mode_i_am_experienced";
  local_100 = 1;
  local_1a8 = 2;
  FUN_00a02ef0(auStack_90,auStack_138,auStack_1e0,0);
  uVar4 = FUN_00e6ce7c("PLAYMENU_TITLE_ARE_YOU_NEW",0);
  FUN_00910394(&local_70,uVar4);
  local_60 = 0x101;
  local_5e = 1;
  thunk_FUN_00a030fc(param_1,auStack_90);
  FUN_00a051ec(param_1,"tutorialLevel",1);
  FUN_00a03834(param_1);
  if ((local_170 & 1) != 0) {
    operator_delete(local_160);
  }
  if (local_178 != (void *)0x0) {
    operator_delete__(local_178);
    local_180 = 0;
    local_178 = (void *)0x0;
  }
  if (local_188 != (void *)0x0) {
    operator_delete__(local_188);
    local_190 = 0;
    local_188 = (void *)0x0;
  }
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
    local_1a0 = 0;
    local_198 = (void *)0x0;
  }
  if ((local_1d0 & 1) != 0) {
    operator_delete(local_1c0);
  }
  if ((local_c8 & 1) != 0) {
    operator_delete(local_b8);
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
  if ((local_128 & 1) != 0) {
    operator_delete(local_118);
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  FUN_00a036a8(auStack_88,1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a05c34(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 local_a8;
  void *local_a0;
  char *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  FUN_00a067d8(param_1,0);
  uVar2 = FUN_00e6ce7c("GENERIC_5V5",0);
  uVar3 = FUN_00e6ce7c("GENERIC_3V3",0);
  uVar4 = FUN_00e6ce7c("PLAYMENU_OPTION_BLITZ_TITLE",0);
  uVar5 = FUN_00e6ce7c("PLAYMENU_OPTION_BLITZ_REVAMP_TITLE",0);
  uVar6 = FUN_00e6ce7c("PLAYMENU_OPTION_ARAL_TITLE",0);
  uVar7 = FUN_00e6ce7c("PLAYMENU_OPTION_ONE_FOR_ALL_TITLE",0);
  uVar8 = FUN_00e6ce7c("PLAYMENU_OPTION_PURE_BLITZ_TITLE",0);
  uVar9 = FUN_00e6ce7c("PLAYMENU_OPTION_RUMBLE_TITLE",0);
  uVar10 = FUN_00e6ce7c("PLAYMENU_OPTION_ARAM_TITLE",0);
  uVar11 = FUN_00e6ce7c("PLAYMENU_OPTION_RANKED_TITLE",0);
  uVar12 = FUN_00e6ce7c("PLAYMENU_OPTION_CASUAL_TITLE",0);
  uVar13 = FUN_00e6ce7c("PLAYMENU_OPTION_SOLOBOTS_TITLE",0);
  uVar14 = FUN_00e6ce7c("PLAYMENU_OPTION_PRACTICE_TITLE",0);
  uStack_b8 = 0x200000005;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_98 = "5v5_pvp_casual";
  thunk_FUN_00e7051c(&local_90,uVar2);
  thunk_FUN_00e7051c(&local_80,uVar12);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  uStack_b8 = 0x200000005;
  local_c0 = 0x100000000;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_98 = "5v5_pvp_ranked";
  thunk_FUN_00e7051c(&local_90,uVar2);
  thunk_FUN_00e7051c(&local_80,uVar11);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  uStack_b8 = 0x200000005;
  local_c0 = 0x500000003;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_98 = "blitz_pvp_ranked";
  thunk_FUN_00e7051c(&local_90,uVar4);
  thunk_FUN_00e7051c(&local_80,uVar12);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  uStack_b8 = 0x200000005;
  local_c0 = 0x500000004;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_98 = "blitz_pvp_revamp";
  thunk_FUN_00e7051c(&local_90,uVar5);
  thunk_FUN_00e7051c(&local_80,uVar12);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  uStack_b8 = 0x200000005;
  local_c0 = 0x500000006;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_98 = "casual_aral";
  thunk_FUN_00e7051c(&local_90,uVar6);
  thunk_FUN_00e7051c(&local_80,uVar12);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  uStack_b8 = 0x200000005;
  local_c0 = 0x500000005;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_98 = "5v5_rumble_casual";
  thunk_FUN_00e7051c(&local_90,uVar2);
  thunk_FUN_00e7051c(&local_80,uVar9);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  uStack_b8 = 0x200000005;
  local_c0 = 0x500000007;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_98 = "5v5_aram_casual";
  thunk_FUN_00e7051c(&local_90,uVar2);
  thunk_FUN_00e7051c(&local_80,uVar10);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  uStack_b8 = 0x200000005;
  local_c0 = 0x500000008;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_98 = "5v5_pvp_oneforall";
  thunk_FUN_00e7051c(&local_90,uVar2);
  thunk_FUN_00e7051c(&local_80,uVar7);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  uStack_b8 = 0x200000005;
  local_c0 = 0x500000009;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_98 = "blitz_pvp_pure";
  thunk_FUN_00e7051c(&local_90,uVar3);
  thunk_FUN_00e7051c(&local_80,uVar8);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  uStack_b8 = 0x200000005;
  local_c0 = 0x500000001;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_98 = "casual";
  thunk_FUN_00e7051c(&local_90,uVar3);
  thunk_FUN_00e7051c(&local_80,uVar12);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  uStack_b8 = 0x200000005;
  local_c0 = 0x500000002;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_98 = "ranked";
  thunk_FUN_00e7051c(&local_90,uVar3);
  thunk_FUN_00e7051c(&local_80,uVar11);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  uStack_b8 = 0x200000005;
  local_c0 = 0x300000000;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_98 = "5v5_bots_solo";
  thunk_FUN_00e7051c(&local_90,uVar2);
  thunk_FUN_00e7051c(&local_80,uVar13);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  uStack_b8 = 0x200000005;
  local_c0 = 0x300000003;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_98 = "blitz_bots_solo";
  thunk_FUN_00e7051c(&local_90,uVar2);
  thunk_FUN_00e7051c(&local_80,uVar13);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  uStack_b8 = 0x200000005;
  local_c0 = 0x300000002;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_98 = "solo_bots";
  thunk_FUN_00e7051c(&local_90,uVar2);
  thunk_FUN_00e7051c(&local_80,uVar13);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  uStack_b8 = 0x200000005;
  local_c0 = 0x50000000a;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  local_98 = "5v5_practice";
  thunk_FUN_00e7051c(&local_90,uVar2);
  thunk_FUN_00e7051c(&local_80,uVar14);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  local_a8 = 0;
  local_a0 = (void *)0x0;
  uStack_b8 = 0x200000005;
  local_c0 = 0x50000000f;
  local_b0 = 0;
  local_98 = "single_player_tutorial_01_joystick";
  thunk_FUN_00e7051c(&local_90,&DAT_03210450);
  thunk_FUN_00e7051c(&local_80,&DAT_03210450);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  local_a8 = 0;
  local_a0 = (void *)0x0;
  uStack_b8 = 0x200000005;
  local_c0 = 0x500000010;
  local_b0 = 0;
  local_98 = "single_player_tutorial_02_joystick";
  thunk_FUN_00e7051c(&local_90,&DAT_03210450);
  thunk_FUN_00e7051c(&local_80,&DAT_03210450);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  local_a8 = 0;
  local_a0 = (void *)0x0;
  uStack_b8 = 0x200000005;
  local_c0 = 0x50000000b;
  local_b0 = 0;
  local_98 = "single_player_tutorial_01";
  thunk_FUN_00e7051c(&local_90,&DAT_03210450);
  thunk_FUN_00e7051c(&local_80,&DAT_03210450);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  local_a8 = 0;
  local_a0 = (void *)0x0;
  uStack_b8 = 0x200000005;
  local_c0 = 0x50000000c;
  local_b0 = 0;
  local_98 = "single_player_tutorial_02";
  thunk_FUN_00e7051c(&local_90,&DAT_03210450);
  thunk_FUN_00e7051c(&local_80,&DAT_03210450);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  local_a8 = 0;
  local_a0 = (void *)0x0;
  uStack_b8 = 0x200000005;
  local_c0 = 0x50000000e;
  local_b0 = 0;
  local_98 = "single_player_tutorial_05_5v5";
  thunk_FUN_00e7051c(&local_90,&DAT_03210450);
  thunk_FUN_00e7051c(&local_80,&DAT_03210450);
  FUN_00a06874(param_1,&local_c0);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

