// functions/009c6 — 30 functions
#include "libGameKindred.h"




void FUN_009c6044(undefined8 param_1,long param_2,uint param_3)

{
  FUN_009c50cc(param_2,5,param_3 & 1);
  if ((param_3 & 1) == 0) {
    FUN_00a57284(param_2 + 0x587e0);
  }
  else {
    FUN_00a57204();
  }
  FUN_00b89d24(param_1,param_2 + 0x77750,param_3 & 1,4,1);
  return;
}




undefined4 FUN_009c60b4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x7b024);
}




void FUN_009c60c4(long param_1,uint param_2)

{
  FUN_00b89d24(0x3e4ccccd,param_1 + 0x63ba0,param_2 & 1,4,1);
  FUN_009c50cc(param_1,3,param_2 & 1);
  if ((param_2 & 1) != 0) {
    FUN_00a57204();
    return;
  }
  FUN_00a57284(param_1 + 0x587e0);
  return;
}




void FUN_009c6144(long param_1)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  
  plVar1 = (long *)(param_1 + 0x63b98);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    pvVar3 = operator_new(0x1368);
    FUN_00c7facc(pvVar3,param_1);
    *plVar1 = (long)pvVar3;
    FUN_00f023ec(param_1 + 0x22cd8,pvVar3,1);
    lVar2 = *plVar1;
  }
  FUN_00c80198(lVar2);
  return;
}




void FUN_009c61b0(long param_1)

{
  FUN_00a3ef9c(param_1 + 0x268);
  return;
}




void FUN_009c61b8(long param_1)

{
  FUN_00a3efa4(param_1 + 0x268);
  return;
}




void FUN_009c61c0(long param_1)

{
  FUN_00a3f0cc(param_1 + 0x268);
  return;
}




void FUN_009c61c8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x7b024) = param_2;
  return;
}




void FUN_009c61d8(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x7b024);
  uVar2 = 1 << (ulong)(param_2 & 0x1f);
  if ((uVar1 & uVar2) != 0) {
    return;
  }
  *(uint *)(param_1 + 0x7b024) = uVar1 | uVar2;
  FUN_009c3560(0x3e4ccccd,param_1,1);
  return;
}




void FUN_009c6214(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x7b024);
  uVar2 = 1 << (ulong)(param_2 & 0x1f);
  if ((uVar1 & uVar2) != 0) {
    *(uint *)(param_1 + 0x7b024) = uVar1 ^ uVar2;
    FUN_009c3560(0x3e4ccccd,param_1,1);
    return;
  }
  return;
}




void FUN_009c6250(long param_1,uint param_2)

{
  FUN_00b89d24(0x3f266666,param_1 + 0x570c0,param_2 & 1,4,1);
  return;
}




undefined4 FUN_009c6274(long param_1)

{
  return *(undefined4 *)(param_1 + 0x7b008);
}




void FUN_009c6284(long param_1)

{
  FUN_00a3ed58(param_1 + 0x268,1);
  return;
}




void FUN_009c6290(long param_1)

{
  FUN_00a3efb0(param_1 + 0x268);
  return;
}




void FUN_009c6298(long param_1)

{
  FUN_00a3efb8(param_1 + 0x268);
  return;
}




void FUN_009c62a0(long param_1)

{
  FUN_00a3efc0(param_1 + 0x268);
  return;
}




void FUN_009c62a8(long param_1)

{
  FUN_00a3efc8(param_1 + 0x268);
  return;
}




void FUN_009c62b0(undefined8 param_1)

{
  FUN_009c3ca4(0x3f4ccccd,param_1,1);
  FUN_009c3560(0x3e4ccccd,param_1,0);
  return;
}




void FUN_009c62ec(long param_1,uint param_2)

{
  FUN_00a3f060(param_1 + 0x268,param_2 & 1);
  return;
}




void FUN_009c62f8(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6,byte param_7,byte param_8)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined **local_160;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined8 local_110;
  void *local_108;
  byte local_100;
  void *local_f0;
  undefined8 local_e0;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c4;
  uint local_b8;
  byte local_b4;
  byte local_b3;
  undefined8 local_b0;
  void *local_a8;
  byte local_a0 [16];
  void *local_90;
  undefined4 local_88;
  undefined8 local_84;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  FUN_00b26098(&local_160);
  local_e0 = *param_6;
  local_130 = param_5;
  local_d0 = param_1;
  local_c4 = param_2;
  local_b4 = param_7 & 1;
  local_b3 = param_8 & 1;
  uVar3 = FUN_0092ea9c();
  local_cc = 0x44160000;
  if ((uVar3 & 1) == 0) {
    local_cc = 0x43c80000;
  }
  local_b8 = FUN_009c64a4(uVar3,param_5);
  local_b8 = local_b8 & 1;
  thunk_FUN_00e7051c(&local_b0,param_4);
  FUN_008fcdb8(local_a0,&DAT_0320ffa8);
  local_88 = 1;
  local_84 = 0x41a00000;
  FUN_009c82b4(auStack_158,&local_b0);
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  uVar2 = FUN_00f048a4("EVENT_DISPLAY_TOOLTIP");
  FUN_00f048e0(&local_b0,uVar2,&local_160);
  FUN_00f04760(param_3 + 0xf8,&local_b0,1);
  local_160 = &PTR_FUN_027de7f0;
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  if (local_108 != (void *)0x0) {
    operator_delete__(local_108);
    local_110 = 0;
    local_108 = (void *)0x0;
  }
  FUN_009c8464(auStack_158,1);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c64a4(undefined8 param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 local_48;
  float fStack_44;
  undefined4 local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar3 = DAT_03218f08._4_4_;
  local_48 = FUN_00f08758((undefined4)DAT_03218f08,param_2);
  fStack_44 = fVar3;
  local_40 = FUN_00f0862c(&local_48,*(undefined8 *)(param_2 + 0x20));
  fStack_3c = fVar3;
  FUN_00f086f4(&local_40);
  fVar2 = (float)FUN_00f00280();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3 < fVar2 * 0.3);
}




void FUN_009c653c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,uint param_7,uint param_8)

{
  undefined8 uVar1;
  
  FUN_009c65b4(param_3,param_5);
  uVar1 = FUN_00f00438();
  FUN_009c62f8(param_1,param_2,param_3,param_4,uVar1,param_6,param_7 & 1,param_8 & 1);
  return;
}




char * FUN_009c65b4(undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  
  uVar1 = FUN_00a1bcec();
  switch(param_2) {
  case 1:
    pcVar2 = "ability_icon_A";
    pcVar3 = "joystick_ability_icon_A";
    goto LAB_009c668c;
  case 2:
    pcVar2 = "ability_icon_B";
    pcVar3 = "joystick_ability_icon_B";
    goto LAB_009c668c;
  case 3:
    pcVar2 = "ability_icon_C";
    pcVar3 = "joystick_ability_icon_C";
    goto LAB_009c668c;
  case 4:
    pcVar2 = "ability_upgrade_badge_A";
    pcVar3 = "joystick_ability_upgrade_badge_A";
    goto LAB_009c668c;
  case 5:
    pcVar2 = "ability_upgrade_badge_B";
    pcVar3 = "joystick_ability_upgrade_badge_B";
    goto LAB_009c668c;
  case 6:
    pcVar2 = "ability_upgrade_badge_C";
    pcVar3 = "joystick_ability_upgrade_badge_C";
    goto LAB_009c668c;
  case 7:
    pcVar2 = "flask_button";
    pcVar3 = "joystick_flask_button";
    goto LAB_009c668c;
  case 8:
    pcVar2 = "scout_cam_button";
    pcVar3 = "joystick_scout_cam_button";
LAB_009c668c:
    if ((uVar1 & 1) == 0) {
      pcVar3 = pcVar2;
    }
    break;
  case 9:
    pcVar3 = "HUD_Utils_Button_Shop";
    break;
  case 10:
    pcVar3 = "HUD_Utils_Button_Withdraw";
    break;
  case 0xb:
    pcVar3 = "HUD_Utils_Button_Scoreboard";
    break;
  case 0xc:
    pcVar3 = "HUD_Utils_Button_Help";
    break;
  case 0xd:
    pcVar3 = "HUD_Quick_Buy";
    break;
  case 0xe:
    pcVar3 = "recommended_path_select";
    break;
  case 0xf:
    pcVar3 = "HUD_movement_joystick";
    break;
  case 0x10:
    pcVar3 = "HUD_attack_joystick";
    break;
  case 0x11:
    pcVar3 = "HUD_attack_structure_joystick";
    break;
  case 0x12:
    pcVar3 = "recommended_path_tile_0";
    break;
  case 0x13:
    pcVar3 = "hud_store_category_0";
    break;
  case 0x14:
    pcVar3 = "hud_store_category_1";
    break;
  case 0x15:
    pcVar3 = "hud_store_category_2";
    break;
  case 0x16:
    pcVar3 = "hud_store_category_3";
    break;
  case 0x17:
    pcVar3 = "hud_store_category_4";
    break;
  case 0x18:
    pcVar3 = "hud_store_category_5";
    break;
  case 0x19:
    pcVar3 = "hud_store_category_6";
    break;
  default:
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}




void FUN_009c676c(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,byte param_6,byte param_7)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined **local_150;
  undefined1 auStack_148 [48];
  undefined8 local_118;
  undefined8 local_100;
  void *local_f8;
  byte local_f0;
  void *local_e0;
  undefined8 local_d0;
  undefined4 local_bc;
  undefined4 local_b4;
  undefined4 local_a8;
  byte local_a4;
  byte local_a3;
  undefined8 local_a0;
  void *local_98;
  byte local_90 [16];
  void *local_80;
  undefined4 local_78;
  undefined8 local_74;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00b26098(&local_150);
  local_a8 = 0;
  local_d0 = *param_5;
  local_118 = param_4;
  local_b4 = param_1;
  local_a4 = param_6 & 1;
  local_a3 = param_7 & 1;
  uVar3 = FUN_0092ea9c();
  local_bc = 0x44160000;
  if ((uVar3 & 1) == 0) {
    local_bc = 0x43c80000;
  }
  thunk_FUN_00e7051c(&local_a0,param_3);
  FUN_008fcdb8(local_90,&DAT_0320ffa8);
  local_78 = 1;
  local_74 = 0x41a00000;
  FUN_009c82b4(auStack_148,&local_a0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
  uVar2 = FUN_00f048a4("EVENT_DISPLAY_TOOLTIP");
  FUN_00f048e0(&local_a0,uVar2,&local_150);
  FUN_00f04760(param_2 + 0xf8,&local_a0,1);
  local_150 = &PTR_FUN_027de7f0;
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if (local_f8 != (void *)0x0) {
    operator_delete__(local_f8);
    local_100 = 0;
    local_f8 = (void *)0x0;
  }
  FUN_009c8464(auStack_148,1);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c6904(undefined4 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,byte param_6,byte param_7)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined **local_150;
  undefined1 auStack_148 [56];
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  void *local_f8;
  byte local_f0;
  void *local_e0;
  undefined8 local_d0;
  undefined4 local_bc;
  undefined4 local_b4;
  undefined4 local_a8;
  byte local_a4;
  byte local_a3;
  undefined1 local_a2;
  undefined8 local_a0;
  void *local_98;
  byte local_90 [16];
  void *local_80;
  undefined4 local_78;
  undefined8 local_74;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00b26098(&local_150);
  local_108 = *(undefined4 *)(param_4 + 1);
  local_110 = *param_4;
  local_a2 = 1;
  local_a8 = 0;
  local_d0 = *param_5;
  local_b4 = param_1;
  local_a4 = param_6 & 1;
  local_a3 = param_7 & 1;
  uVar3 = FUN_0092ea9c();
  local_bc = 0x44160000;
  if ((uVar3 & 1) == 0) {
    local_bc = 0x43c80000;
  }
  thunk_FUN_00e7051c(&local_a0,param_3);
  FUN_008fcdb8(local_90,&DAT_0320ffa8);
  local_78 = 1;
  local_74 = 0x41a00000;
  FUN_009c82b4(auStack_148,&local_a0);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
  uVar2 = FUN_00f048a4("EVENT_DISPLAY_TOOLTIP");
  FUN_00f048e0(&local_a0,uVar2,&local_150);
  FUN_00f04760(param_2 + 0xf8,&local_a0,1);
  local_150 = &PTR_FUN_027de7f0;
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  if (local_f8 != (void *)0x0) {
    operator_delete__(local_f8);
    local_100 = 0;
    local_f8 = (void *)0x0;
  }
  FUN_009c8464(auStack_148,1);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c6aac(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_HIDE_TOOLTIPS");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1 + 0xf8,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c6b1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 undefined8 *param_5,byte param_6,undefined1 param_7,uint param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  byte local_c0 [16];
  void *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  byte local_6c;
  ushort local_6b;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar1 = param_4 + 0x7a7e0;
  uVar3 = FUN_00f02540(lVar1);
  if ((uVar3 & 1) != 0) {
    FUN_00f01a4c(lVar1,1);
  }
  FUN_00f023ec(param_4 + 0x7a538,lVar1,1);
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = *(undefined4 *)(param_5 + 1);
  local_a8 = *param_5;
  if ((param_8 & 1) == 0) {
    local_80 = 0;
    *(uint *)(*(long *)(param_4 + 0x7b010) + 0x84) =
         *(uint *)(*(long *)(param_4 + 0x7b010) + 0x84) & 0xfffffffb;
  }
  else {
    local_80 = *(undefined8 *)(param_4 + 0x7b010);
  }
  local_6b = CONCAT11(1,param_7) & 0xff01;
  local_9c = param_2;
  uStack_98 = param_3;
  local_70 = param_1;
  local_6c = param_6 & 1;
  FUN_008fa54c(local_c0,&DAT_01b988c6);
  FUN_00acc5b0(lVar1,local_c0,&local_a8,1);
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c6c94(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 undefined8 param_5,byte param_6,undefined1 param_7,uint param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  byte local_c0 [16];
  void *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  byte local_6c;
  ushort local_6b;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar1 = param_4 + 0x7a7e0;
  uVar3 = FUN_00f02540(lVar1);
  if ((uVar3 & 1) != 0) {
    FUN_00f01a4c(lVar1,1);
  }
  FUN_00f023ec(param_4 + 0x7a538,lVar1,1);
  local_90 = 0;
  uStack_78 = 0;
  local_a0 = DAT_03218f38;
  local_a8 = DAT_03218f30;
  if ((param_8 & 1) == 0) {
    local_80 = 0;
    *(uint *)(*(long *)(param_4 + 0x7b010) + 0x84) =
         *(uint *)(*(long *)(param_4 + 0x7b010) + 0x84) & 0xfffffffb;
  }
  else {
    local_80 = *(undefined8 *)(param_4 + 0x7b010);
  }
  local_6b = CONCAT11(1,param_7) & 0xff01;
  local_9c = param_2;
  uStack_98 = param_3;
  uStack_88 = param_5;
  local_70 = param_1;
  local_6c = param_6 & 1;
  FUN_008fa54c(local_c0,&DAT_01b988c6);
  FUN_00acc5b0(lVar1,local_c0,&local_a8,0);
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c6dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6,uint param_7,uint param_8)

{
  uint uVar1;
  undefined8 uVar2;
  
  FUN_009c65b4();
  uVar2 = FUN_00f00438();
  uVar1 = FUN_009c64a4(uVar2,uVar2);
  FUN_009c6e88(param_1,param_2,param_3,param_4,uVar2,param_6 & 1,uVar1 & 1,param_7 & 1,param_8 & 1);
  return;
}




void FUN_009c6e88(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 undefined8 param_5,byte param_6,undefined1 param_7,uint param_8,undefined1 param_9)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  byte local_d0 [16];
  void *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  byte local_7c;
  ushort local_7b;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar1 = param_4 + 0x7a7e0;
  uVar3 = FUN_00f02540(lVar1);
  if ((uVar3 & 1) != 0) {
    FUN_00f01a4c(lVar1,1);
  }
  FUN_00f023ec(param_4 + 0x7a5c0,lVar1,1);
  uStack_88 = 0;
  uStack_98 = 0;
  local_b0 = DAT_03218f38;
  local_b8 = DAT_03218f30;
  if ((param_8 & 1) == 0) {
    local_90 = 0;
    local_7b = CONCAT11(param_9,param_7) & 0x101;
    lVar4 = *(long *)(param_4 + 0x7b010);
    if (lVar4 != 0) {
      *(uint *)(lVar4 + 0x84) = *(uint *)(lVar4 + 0x84) & 0xfffffffb;
    }
  }
  else {
    local_90 = *(undefined8 *)(param_4 + 0x7b010);
    local_7b = CONCAT11(param_9,param_7) & 0x101;
  }
  local_ac = param_2;
  uStack_a8 = param_3;
  local_a0 = param_5;
  local_80 = param_1;
  local_7c = param_6 & 1;
  FUN_008fa54c(local_d0,&DAT_01b988c6);
  FUN_00acc5b0(lVar1,local_d0,&local_b8,0);
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

