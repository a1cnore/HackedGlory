// functions/009c4 — 10 functions
#include "libGameKindred.h"




void FUN_009c4200(undefined8 param_1,long *param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  ulong local_80;
  undefined8 *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_80 = 0;
  local_78 = (undefined8 *)0x0;
  uVar2 = FUN_00e6ce7c("TUTORIAL3_END_MATCH",0);
  thunk_FUN_00e7051c(&local_90,uVar2);
  FUN_00e705c8(&local_a0,&DAT_01bef0f6);
  thunk_FUN_00e7051c(&local_70,&local_90);
  thunk_FUN_00e7051c(&local_60,&local_a0);
  local_50 = 1;
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_98 = (void *)0x0;
  }
  local_a0 = &local_70;
  FUN_009c7f18(&local_80,&local_a0);
  uVar4 = 3;
  if (param_3 != 0) {
    uVar4 = 0;
  }
  uVar5 = 1000;
  if (param_3 != 0) {
    uVar5 = 0;
  }
  FUN_00e70510(&local_a0);
  FUN_00e70e18(&local_a0,&DAT_01bb6d43,uVar5);
  uVar2 = FUN_00e6ce7c("REWARD_SCREEN_TUTORIAL2",0);
  local_b0 = 0;
  local_a8 = (undefined8 *)0x0;
  FUN_009c8760(&local_b0,local_80 & 0xffffffff);
  if ((int)local_80 != 0) {
    lVar8 = (local_80 & 0xffffffff) << 3;
    puVar6 = local_78;
    puVar7 = local_a8;
    do {
      lVar8 = lVar8 + -8;
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (lVar8 != 0);
  }
  local_b0 = CONCAT44(local_b0._4_4_,(int)local_80);
  uVar3 = FUN_00e6ce7c("REWARD_SCREEN_SCORE",0);
  FUN_00a4eed4(param_2,uVar4,uVar2,&local_b0,uVar3,&local_a0);
  if (local_a8 != (undefined8 *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (undefined8 *)0x0;
  }
  (**(code **)(*param_2 + 0x138))(0x3e4ccccd,param_2,1,4,1);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = (undefined8 *)0x0;
    local_98 = (void *)0x0;
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
    local_60 = 0;
    local_58 = (void *)0x0;
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if (local_78 != (undefined8 *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (undefined8 *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c43fc(undefined8 param_1,long *param_2,int param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long lVar11;
  float fVar12;
  undefined8 local_178;
  undefined8 *local_170;
  undefined8 **local_168;
  void *local_160;
  undefined8 local_158;
  void *local_150;
  undefined8 local_148;
  void *local_140;
  undefined8 local_138;
  void *local_130;
  undefined8 local_128;
  void *local_120;
  undefined8 local_118;
  void *local_110;
  undefined8 local_108;
  void *local_100;
  ulong local_f8;
  undefined8 *local_f0;
  undefined8 **local_e8;
  void *local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined1 local_c8;
  undefined8 *local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined1 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_f8 = 0;
  local_f0 = (undefined8 *)0x0;
  uVar3 = FUN_00e6ce7c("TUTORIAL2_END_MATCH_WAVE_1",0);
  thunk_FUN_00e7051c(&local_108,uVar3);
  uVar3 = FUN_00e6ce7c("TUTORIAL2_END_MATCH_WAVE_2",0);
  thunk_FUN_00e7051c(&local_118,uVar3);
  uVar3 = FUN_00e6ce7c("TUTORIAL2_END_MATCH_WAVE_3",0);
  thunk_FUN_00e7051c(&local_128,uVar3);
  FUN_00e70510(&local_138);
  bVar2 = param_3 != 0;
  iVar5 = 100;
  if (bVar2) {
    iVar5 = 0;
  }
  uVar9 = 3;
  iVar6 = 500;
  if (bVar2) {
    iVar6 = 0;
  }
  iVar7 = 1000;
  if (bVar2) {
    iVar7 = 0;
    uVar9 = 0;
  }
  FUN_00e70e18(&local_138,&DAT_01bb6d43,iVar5);
  FUN_00e70510(&local_148);
  FUN_00e70e18(&local_148,&DAT_01bb6d43,iVar6);
  FUN_00e70510(&local_158);
  FUN_00e70e18(&local_158,&DAT_01bb6d43,iVar7);
  thunk_FUN_00e7051c(&local_98,&local_108);
  thunk_FUN_00e7051c(&local_88,&local_138);
  local_78 = 1;
  local_c0 = &local_98;
  FUN_009c7f18(&local_f8,&local_c0);
  thunk_FUN_00e7051c(&local_c0,&local_118);
  thunk_FUN_00e7051c(&local_b0,&local_148);
  local_a0 = 1;
  local_e8 = &local_c0;
  FUN_009c7f18(&local_f8,&local_e8);
  thunk_FUN_00e7051c(&local_e8,&local_128);
  thunk_FUN_00e7051c(&local_d8,&local_158);
  local_c8 = 1;
  local_168 = &local_e8;
  FUN_009c7f18(&local_f8,&local_168);
  fVar12 = (float)(iVar5 + iVar6 + iVar7 + 1000);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  FUN_00e70510(&local_168);
  FUN_00e70e18(&local_168,&DAT_01bb6d43,(int)fVar12);
  uVar3 = FUN_00e6ce7c("5V5_TUTORIAL_VICTORY_3",0);
  local_178 = 0;
  local_170 = (undefined8 *)0x0;
  FUN_009c8760(&local_178,local_f8 & 0xffffffff);
  if ((int)local_f8 != 0) {
    lVar11 = (local_f8 & 0xffffffff) << 3;
    puVar8 = local_f0;
    puVar10 = local_170;
    do {
      lVar11 = lVar11 + -8;
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar11 != 0);
  }
  local_178 = CONCAT44(local_178._4_4_,(int)local_f8);
  uVar4 = FUN_00e6ce7c("REWARD_SCREEN_SCORE",0);
  FUN_00a4eed4(param_2,uVar9,uVar3,&local_178,uVar4,&local_168);
  if (local_170 != (undefined8 *)0x0) {
    operator_delete__(local_170);
    local_178 = 0;
    local_170 = (undefined8 *)0x0;
  }
  (**(code **)(*param_2 + 0x138))(0x3e4ccccd,param_2,1,4,1);
  if (local_160 != (void *)0x0) {
    operator_delete__(local_160);
    local_168 = (undefined8 ***)0x0;
    local_160 = (void *)0x0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    local_d8 = 0;
    local_d0 = (void *)0x0;
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
    local_e8 = (undefined8 **)0x0;
    local_e0 = (void *)0x0;
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = (undefined8 *)0x0;
    local_b8 = (void *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (local_150 != (void *)0x0) {
    operator_delete__(local_150);
    local_158 = 0;
    local_150 = (void *)0x0;
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
    local_148 = 0;
    local_140 = (void *)0x0;
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
    local_138 = 0;
    local_130 = (void *)0x0;
  }
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
    local_128 = 0;
    local_120 = (void *)0x0;
  }
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
    local_118 = 0;
    local_110 = (void *)0x0;
  }
  if (local_100 != (void *)0x0) {
    operator_delete__(local_100);
    local_108 = 0;
    local_100 = (void *)0x0;
  }
  if (local_f0 != (undefined8 *)0x0) {
    operator_delete__(local_f0);
    local_f8 = 0;
    local_f0 = (undefined8 *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009c4790(undefined8 param_1,long *param_2,int param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long lVar11;
  float fVar12;
  undefined8 local_178;
  undefined8 *local_170;
  undefined8 **local_168;
  void *local_160;
  undefined8 local_158;
  void *local_150;
  undefined8 local_148;
  void *local_140;
  undefined8 local_138;
  void *local_130;
  undefined8 local_128;
  void *local_120;
  undefined8 local_118;
  void *local_110;
  undefined8 local_108;
  void *local_100;
  ulong local_f8;
  undefined8 *local_f0;
  undefined8 **local_e8;
  void *local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined1 local_c8;
  undefined8 *local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined1 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_f8 = 0;
  local_f0 = (undefined8 *)0x0;
  uVar3 = FUN_00e6ce7c("TUTORIAL_05_5v5_END_MATCH_WAVE_1",0);
  thunk_FUN_00e7051c(&local_108,uVar3);
  uVar3 = FUN_00e6ce7c("TUTORIAL_05_5v5_END_MATCH_WAVE_2",0);
  thunk_FUN_00e7051c(&local_118,uVar3);
  uVar3 = FUN_00e6ce7c("TUTORIAL_05_5v5_END_MATCH_WAVE_3",0);
  thunk_FUN_00e7051c(&local_128,uVar3);
  FUN_00e70510(&local_138);
  bVar2 = param_3 != 0;
  iVar5 = 100;
  if (bVar2) {
    iVar5 = 0;
  }
  uVar9 = 3;
  iVar6 = 500;
  if (bVar2) {
    iVar6 = 0;
  }
  iVar7 = 1000;
  if (bVar2) {
    iVar7 = 0;
    uVar9 = 0;
  }
  FUN_00e70e18(&local_138,&DAT_01bb6d43,iVar5);
  FUN_00e70510(&local_148);
  FUN_00e70e18(&local_148,&DAT_01bb6d43,iVar6);
  FUN_00e70510(&local_158);
  FUN_00e70e18(&local_158,&DAT_01bb6d43,iVar7);
  thunk_FUN_00e7051c(&local_98,&local_108);
  thunk_FUN_00e7051c(&local_88,&local_138);
  local_78 = 1;
  local_c0 = &local_98;
  FUN_009c7f18(&local_f8,&local_c0);
  thunk_FUN_00e7051c(&local_c0,&local_118);
  thunk_FUN_00e7051c(&local_b0,&local_148);
  local_a0 = 1;
  local_e8 = &local_c0;
  FUN_009c7f18(&local_f8,&local_e8);
  thunk_FUN_00e7051c(&local_e8,&local_128);
  thunk_FUN_00e7051c(&local_d8,&local_158);
  local_c8 = 1;
  local_168 = &local_e8;
  FUN_009c7f18(&local_f8,&local_168);
  fVar12 = (float)(iVar5 + iVar6 + iVar7 + 1000);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  FUN_00e70510(&local_168);
  FUN_00e70e18(&local_168,&DAT_01bb6d43,(int)fVar12);
  uVar3 = FUN_00e6ce7c("REWARD_SCREEN_TUTORIAL_05_5v5",0);
  local_178 = 0;
  local_170 = (undefined8 *)0x0;
  FUN_009c8760(&local_178,local_f8 & 0xffffffff);
  if ((int)local_f8 != 0) {
    lVar11 = (local_f8 & 0xffffffff) << 3;
    puVar8 = local_f0;
    puVar10 = local_170;
    do {
      lVar11 = lVar11 + -8;
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar11 != 0);
  }
  local_178 = CONCAT44(local_178._4_4_,(int)local_f8);
  uVar4 = FUN_00e6ce7c("REWARD_SCREEN_SCORE",0);
  FUN_00a4eed4(param_2,uVar9,uVar3,&local_178,uVar4,&local_168);
  if (local_170 != (undefined8 *)0x0) {
    operator_delete__(local_170);
    local_178 = 0;
    local_170 = (undefined8 *)0x0;
  }
  (**(code **)(*param_2 + 0x138))(0x3e4ccccd,param_2,1,4,1);
  if (local_160 != (void *)0x0) {
    operator_delete__(local_160);
    local_168 = (undefined8 ***)0x0;
    local_160 = (void *)0x0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    local_d8 = 0;
    local_d0 = (void *)0x0;
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
    local_e8 = (undefined8 **)0x0;
    local_e0 = (void *)0x0;
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = (undefined8 *)0x0;
    local_b8 = (void *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (local_150 != (void *)0x0) {
    operator_delete__(local_150);
    local_158 = 0;
    local_150 = (void *)0x0;
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
    local_148 = 0;
    local_140 = (void *)0x0;
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
    local_138 = 0;
    local_130 = (void *)0x0;
  }
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
    local_128 = 0;
    local_120 = (void *)0x0;
  }
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
    local_118 = 0;
    local_110 = (void *)0x0;
  }
  if (local_100 != (void *)0x0) {
    operator_delete__(local_100);
    local_108 = 0;
    local_100 = (void *)0x0;
  }
  if (local_f0 != (undefined8 *)0x0) {
    operator_delete__(local_f0);
    local_f8 = 0;
    local_f0 = (undefined8 *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009c4b24(undefined8 param_1,long *param_2,int param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long lVar11;
  float fVar12;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  void *local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  ulong local_90;
  undefined8 *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_90 = 0;
  local_88 = (undefined8 *)0x0;
  uVar3 = FUN_00e6ce7c("TUTORIAL_05_5v5_END_MATCH_WAVE_1",0);
  thunk_FUN_00e7051c(&local_a0,uVar3);
  uVar3 = FUN_00e6ce7c("TUTORIAL_05_5v5_END_MATCH_WAVE_2",0);
  thunk_FUN_00e7051c(&local_b0,uVar3);
  uVar3 = FUN_00e6ce7c("MAIN_TUTORIAL_TILE_TITLE_3",0);
  thunk_FUN_00e7051c(&local_c0,uVar3);
  FUN_00e70510(&local_d0);
  bVar2 = param_3 != 0;
  iVar5 = 100;
  if (bVar2) {
    iVar5 = 0;
  }
  uVar9 = 3;
  iVar6 = 500;
  if (bVar2) {
    iVar6 = 0;
  }
  iVar7 = 3000;
  if (bVar2) {
    iVar7 = 0;
    uVar9 = 0;
  }
  FUN_00e70e18(&local_d0,&DAT_01bb6d43,iVar5);
  FUN_00e70510(&local_e0);
  FUN_00e70e18(&local_e0,&DAT_01bb6d43,iVar6);
  FUN_00e70510(&local_f0);
  FUN_00e70e18(&local_f0,&DAT_01bb6d43,iVar7);
  thunk_FUN_00e7051c(&local_80,&local_c0);
  thunk_FUN_00e7051c(&local_70,&local_f0);
  local_60 = 1;
  local_100 = &local_80;
  FUN_009c7f18(&local_90,&local_100);
  fVar12 = (float)(iVar5 + iVar6 + iVar7 + 1000);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  FUN_00e70510(&local_100);
  FUN_00e70e18(&local_100,&DAT_01bb6d43,(int)fVar12);
  uVar3 = FUN_00e6ce7c("MAIN_TUTORIAL_TILE_TITLE_4",0);
  local_110 = 0;
  local_108 = (undefined8 *)0x0;
  FUN_009c8760(&local_110,local_90 & 0xffffffff);
  if ((int)local_90 != 0) {
    lVar11 = (local_90 & 0xffffffff) << 3;
    puVar8 = local_88;
    puVar10 = local_108;
    do {
      lVar11 = lVar11 + -8;
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar11 != 0);
  }
  local_110 = CONCAT44(local_110._4_4_,(int)local_90);
  uVar4 = FUN_00e6ce7c("REWARD_SCREEN_SCORE",0);
  FUN_00a4eed4(param_2,uVar9,uVar3,&local_110,uVar4,&local_100);
  if (local_108 != (undefined8 *)0x0) {
    operator_delete__(local_108);
    local_110 = 0;
    local_108 = (undefined8 *)0x0;
  }
  (**(code **)(*param_2 + 0x138))(0x3e4ccccd,param_2,1,4,1);
  if (local_f8 != (void *)0x0) {
    operator_delete__(local_f8);
    local_100 = (undefined8 *)0x0;
    local_f8 = (void *)0x0;
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
    local_f0 = 0;
    local_e8 = (void *)0x0;
  }
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
    local_e0 = 0;
    local_d8 = (void *)0x0;
  }
  if (local_c8 != (void *)0x0) {
    operator_delete__(local_c8);
    local_d0 = 0;
    local_c8 = (void *)0x0;
  }
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = 0;
    local_b8 = (void *)0x0;
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
  if (local_88 != (undefined8 *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (undefined8 *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009c4e08(undefined8 param_1)

{
  FUN_009c3dec(param_1,1);
  FUN_009c3560(0x3e4ccccd,param_1,0);
  return;
}




void FUN_009c4e3c(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab64();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00a3f0dc(param_1 + 0x268,param_2,param_3,param_4,param_5,param_6);
  return;
}




void FUN_009c4eb0(long param_1,undefined4 param_2)

{
  FUN_00a3f14c(param_1 + 0x268);
  FUN_00a3f18c(param_1 + 0x268,param_2);
  return;
}




void FUN_009c4ee0(long param_1)

{
  FUN_00a3f1ac(param_1 + 0x268);
  FUN_00a3f19c(param_1 + 0x268);
  return;
}




void FUN_009c4f08(long param_1)

{
  FUN_00a3ef94(param_1 + 0x268);
  return;
}




void FUN_009c4f10(long param_1,char *param_2)

{
  ushort *puVar1;
  char cVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  FUN_00a3ed90(param_1 + 0x268);
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 == (long *)0x0) {
    lVar5 = 0;
  }
  else if (*(int *)(param_1 + 0x30) == (int)plVar4[1]) {
    lVar5 = (**(code **)(*plVar4 + 0x10))();
  }
  else {
    *(undefined8 *)(param_1 + 0x28) = 0;
    lVar5 = 0;
    *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
  }
  puVar1 = (ushort *)(param_1 + 0x7b028);
  lVar6 = 0;
  *puVar1 = *puVar1 & 0xf800;
  do {
    if (*(int *)(param_2 + lVar6 * 4 + 8) == *(int *)(lVar5 + 0x260)) {
      uVar7 = *(undefined4 *)(param_2 + lVar6 * 4 + 0x58);
LAB_009c5008:
      FUN_00bc0614(uVar7,param_1 + 0x5e128);
    }
    else {
      cVar2 = *param_2;
      cVar3 = FUN_00d55870(lVar5);
      if ((cVar2 == cVar3) && (param_2[lVar6 + 0x48] == '\x03')) {
        uVar7 = 0;
        *puVar1 = *puVar1 & 0xf800 | (short)*(undefined3 *)puVar1 + 1U & 0x7ff;
        goto LAB_009c5008;
      }
    }
    lVar6 = lVar6 + 1;
    if (lVar6 == 0x10) {
      if ((*puVar1 & 0x7ff) != 0) {
        FUN_00bc0634(param_1 + 0x5e128,*puVar1 & 0x7ff);
        return;
      }
      return;
    }
  } while( true );
}

