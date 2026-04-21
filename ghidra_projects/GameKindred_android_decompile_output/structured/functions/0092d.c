// functions/0092d — 19 functions
#include "libGameKindred.h"




void FUN_0092d980(void *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  memset(param_1,0,0x64c);
  lVar1 = 0;
  lVar2 = (long)param_1 + 0x300;
  do {
    lVar3 = 0;
    *(undefined4 *)((long)param_1 + lVar1 * 4) = 0xffffffff;
    *(undefined1 *)((long)param_1 + lVar1 + 0x40) = 0xff;
    do {
      *(undefined4 *)(lVar2 + lVar3) = 0xffff0000;
      lVar3 = lVar3 + 4;
    } while (lVar3 != 0x28);
    lVar1 = lVar1 + 1;
    lVar2 = lVar2 + 0x28;
  } while (lVar1 != 0x10);
  *(undefined2 *)((long)param_1 + 0x62c) = 0xffff;
  return;
}




void FUN_0092da14(void)

{
  FUN_00ec0360();
  FUN_00cb9f2c();
  return;
}




void FUN_0092da2c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}




void FUN_0092da34(void)

{
  return;
}




void FUN_0092da38(void)

{
  return;
}




void FUN_0092da3c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0092da44(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}




void FUN_0092da4c(undefined8 *param_1)

{
  FUN_0091ea60(*param_1);
  return;
}




void FUN_0092da54(void)

{
  return;
}




undefined8 FUN_0092da58(void)

{
  return 0;
}




void FUN_0092da60(void)

{
  if (DAT_02c7bf68 != (void *)0x0) {
    operator_delete(DAT_02c7bf68);
  }
  DAT_02c7bf68 = (void *)0x0;
  return;
}




bool FUN_0092da8c(void)

{
  return DAT_02c7bf68 != 0;
}




void FUN_0092daa0(void)

{
  return;
}




void FUN_0092daa4(undefined8 param_1)

{
  if (DAT_02c7bf68 != (undefined8 *)0x0) {
    *DAT_02c7bf68 = param_1;
  }
  return;
}




void FUN_0092dab8(void)

{
  if (DAT_02c7bf68 != (undefined8 *)0x0) {
    *DAT_02c7bf68 = 0;
  }
  return;
}




void FUN_0092dacc(void)

{
  if (DAT_02c7bf68 != (undefined8 *)0x0) {
    FUN_0091ea60(*DAT_02c7bf68);
    return;
  }
  return;
}




void FUN_0092dae4(undefined2 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined4 *)((long)param_1 + 3) = 0x1010101;
  *(undefined4 *)(param_1 + 4) = 0x1010101;
  *(undefined8 *)(param_1 + 0x16) = 1;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *param_1 = 0x100;
  param_1[6] = 0x100;
  *(undefined4 *)((long)param_1 + 0xf) = 0x1000101;
  *(undefined8 *)(param_1 + 0x1a) = 0x200000000;
  return;
}




void FUN_0092db3c(void)

{
  DAT_02c7bf84 = NEON_fmov(0x3f800000,4);
  DAT_02c7bf73 = 0x1010101;
  DAT_02c7bf78 = 0x1010101;
  DAT_02c7bf70 = 0x100;
  DAT_02c7bf7c = 0x100;
  DAT_02c7bf9c = 1;
  DAT_02c7bf72 = 0;
  DAT_02c7bf77 = 0;
  DAT_02c7bf7f = 0x1000101;
  DAT_02c7bf94 = 0;
  DAT_02c7bf8c = 0;
  DAT_02c7bfa4 = 0x200000000;
  DAT_02c7bfac = 0;
  FUN_0092dba4();
  return;
}




void FUN_0092dba4(void)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *pvVar5;
  byte local_d0 [16];
  void *local_c0;
  undefined8 local_b8;
  float local_b0;
  float local_ac;
  byte local_a8 [16];
  void *local_98;
  ulong local_90 [2];
  void *local_80;
  ulong local_78 [2];
  void *local_68;
  ulong local_60;
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  bVar2 = FUN_00ec5adc("hide_names_above_healthbars",0);
  DAT_02c7bf70._0_1_ = bVar2 & 1;
  bVar2 = FUN_00ec5adc("show_chat_notifications",1);
  DAT_02c7bf70._1_1_ = bVar2 & 1;
  bVar2 = FUN_00ec5adc("show_chat_notifications_from_stars_only",0);
  DAT_02c7bf72 = bVar2 & 1;
  bVar2 = FUN_00ec5adc("enable_text_chat",1);
  DAT_02c7bf73._0_1_ = bVar2 & 1;
  bVar2 = FUN_00ec5adc("show_movement_indicator",1);
  DAT_02c7bf73._1_1_ = bVar2 & 1;
  bVar2 = FUN_00ec5adc("show_on_screen_hints",1);
  DAT_02c7bf73._2_1_ = bVar2 & 1;
  bVar2 = FUN_00ec5adc("tap_and_hold_movement",1);
  DAT_02c7bf73._3_1_ = bVar2 & 1;
  bVar2 = FUN_00ec5adc("open_shop_with_button_only",0);
  DAT_02c7bf77 = bVar2 & 1;
  bVar2 = FUN_00ec5adc("auto_broadcast_presence",1);
  DAT_02c7bf78._0_1_ = bVar2 & 1;
  bVar2 = FUN_00ec5adc("notify_daily_chest",1);
  DAT_02c7bf78._3_1_ = bVar2 & 1;
  bVar2 = FUN_00ec5adc("ability_activation_force_on_down",0);
  DAT_02c7bf7c._0_1_ = bVar2 & 1;
  bVar2 = FUN_00ec5adc("show_turret_warning_rings",1);
  DAT_02c7bf7c._1_1_ = bVar2 & 1;
  bVar2 = FUN_00ec5adc("enable_pretarget_modal",1);
  DAT_02c7bf7e = bVar2 & 1;
  bVar2 = FUN_00ec5adc("receive_presence_broadcasts",1);
  DAT_02c7bf78._1_1_ = bVar2 & 1;
  bVar2 = FUN_00ec5adc("volume_duck_player_music",1);
  DAT_02c7bf78._2_1_ = bVar2 & 1;
  DAT_02c7bf84._0_4_ = (float)FUN_00ec5b6c(0x3f400000,"volume_music");
  DAT_02c7bf84._4_4_ = (float)FUN_00ec5b6c(0x3f400000,"volume_sound");
  bVar2 = FUN_00ec5adc("show_recommended_build_selector",1);
  DAT_02c7bf7f._0_1_ = bVar2 & 1;
  bVar2 = FUN_00ec5adc("activate_abilities_at_any_range",1);
  DAT_02c7bf7f._3_1_ = bVar2 & 1;
  bVar2 = FUN_00ec5adc("vibrate_for_alerts",1);
  DAT_02c7bf7f._1_1_ = bVar2 & 1;
  bVar2 = FUN_00ec5adc("tap_and_hold_scoreboard",0);
  DAT_02c7bf7f._2_1_ = bVar2 & 1;
  local_60 = 0;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_68 = (void *)0x0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (void *)0x0;
  uVar3 = FUN_00e70198(&DAT_0320ffc0,"--lang");
  if ((uVar3 & 1) == 0) {
    FUN_00ec5bc0(local_a8,"language_override",&DAT_0320ffa8);
  }
  else {
    uVar4 = FUN_00e70138(&DAT_0320ffc0,"--lang");
    FUN_008fa54c(local_a8,uVar4);
  }
  FUN_008fce60(&local_60,local_a8);
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  uVar3 = local_60 >> 1 & 0x7f;
  if ((local_60 & 1) != 0) {
    uVar3 = local_58;
  }
  if (uVar3 == 0) {
    pvVar5 = (void *)FUN_00e702d8(&DAT_0320ffc0);
  }
  else {
    pvVar5 = local_50;
    if ((local_60 & 1) == 0) {
      pvVar5 = (void *)((ulong)&local_60 | 1);
    }
  }
  FUN_0092e0c8(pvVar5);
  FUN_00ec5bc0(local_a8,"resolution_quality",&DAT_0320ffa8);
  FUN_008fce60(local_78,local_a8);
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  pvVar5 = (void *)((ulong)local_78 | 1);
  if ((local_78[0] & 1) != 0) {
    pvVar5 = local_68;
  }
  FUN_0092e34c(pvVar5);
  FUN_00ec5bc0(local_a8,"performance",&DAT_0320ffa8);
  FUN_008fce60(local_90,local_a8);
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  pvVar5 = (void *)((ulong)local_90 | 1);
  if ((local_90[0] & 1) != 0) {
    pvVar5 = local_80;
  }
  FUN_0092e3c4(pvVar5);
  FUN_00ec5bc0(local_a8,"hud_layout",&DAT_0320ffa8);
  pvVar5 = (void *)((ulong)local_a8 | 1);
  if ((local_a8[0] & 1) != 0) {
    pvVar5 = local_98;
  }
  FUN_0092e434(pvVar5);
  local_b0 = -1.0;
  local_ac = -1.0;
  local_b8 = 0;
  FUN_00938d48(&local_ac,&local_b0,&local_b8);
  if (0.0 <= local_ac) {
    DAT_02c7bf84._4_4_ = local_ac;
  }
  if (0.0 <= local_b0) {
    DAT_02c7bf84._0_4_ = local_b0;
  }
  DAT_02c7bfa4._0_4_ = 0;
  DAT_02c7bf8c = local_b8;
  FUN_00ec5bc0(local_d0,"ui_size",&DAT_0320ffa8);
  pvVar5 = (void *)((ulong)local_d0 | 1);
  if ((local_d0[0] & 1) != 0) {
    pvVar5 = local_c0;
  }
  FUN_0092e4f8(pvVar5,(undefined4)DAT_02c7bfa4);
  DAT_02c7bfac = 1;
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

