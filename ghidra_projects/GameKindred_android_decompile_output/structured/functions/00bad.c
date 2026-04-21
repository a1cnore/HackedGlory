// functions/00bad — 24 functions
#include "libGameKindred.h"




void thunk_FUN_00bad048(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_d0;
  void *pvStack_c8;
  undefined8 auStack_c0 [2];
  undefined8 uStack_b0;
  void *pvStack_a8;
  byte bStack_98;
  void *pvStack_88;
  byte bStack_80;
  void *pvStack_70;
  undefined8 uStack_64;
  undefined4 uStack_5c;
  byte bStack_58;
  void *pvStack_48;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_009580b8();
  if ((*(char *)(lVar3 + 0x568c) == '\0') ||
     ((uVar4 = FUN_00969254(), (uVar4 & 1) != 0 &&
      (lVar3 = FUN_00969248(), 0 < *(int *)(lVar3 + 0x38))))) {
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50) + 0x98);
    lVar3 = FUN_009580b8();
    if (*(uint *)(lVar3 + 0x5450) < uVar1) {
      FUN_00aff894(auStack_c0);
      uVar5 = FUN_00e6ce7c("MENU_MARKET_ICE_PURCHASE_POPUP_TITLE",0);
      thunk_FUN_00e7051c(&uStack_d0,uVar5);
      FUN_00910394(&uStack_b0,&uStack_d0);
      auStack_c0[0] = 0x447a000044c80000;
      uStack_5c = 1;
      FUN_00aff91c(auStack_c0,PTR_s_build___MenuPartsCommon_tga_02be3530,"popup_fill",&DAT_01bb8b00)
      ;
      uStack_64 = 0xffa3781effa4781e;
      uVar5 = FUN_00aa2040(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_02be9d38,auStack_c0);
      FUN_00cbd980(uVar5,1);
      if (pvStack_c8 != (void *)0x0) {
        operator_delete__(pvStack_c8);
        uStack_d0 = 0;
        pvStack_c8 = (void *)0x0;
      }
      if ((bStack_58 & 1) != 0) {
        operator_delete(pvStack_48);
      }
      if ((bStack_80 & 1) != 0) {
        operator_delete(pvStack_70);
      }
      if ((bStack_98 & 1) != 0) {
        operator_delete(pvStack_88);
      }
      if (pvStack_a8 != (void *)0x0) {
        operator_delete__(pvStack_a8);
        uStack_b0 = 0;
        pvStack_a8 = (void *)0x0;
      }
    }
    else {
      FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_GOLD_ACCEPT",0);
      FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_GOLD_REJECT",0);
      FUN_00babf80(param_1);
    }
  }
  else {
    uVar5 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
    uVar6 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TEXT",0);
    uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar5,uVar6,uVar7,0,0);
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bad254(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_TITLE",0);
  uVar2 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_MSG",0);
  uVar3 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_ACCEPT",0);
  FUN_00a9b8b8(uVar1,uVar2,uVar3,param_1,0);
  return;
}




void thunk_FUN_00bad30c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  byte abStack_40 [16];
  void *pvStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009b8d90();
  lVar3 = *(long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50);
  if ((*(byte *)(lVar3 + 0xd0) & 1) == 0) {
    lVar3 = lVar3 + 0xd1;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0xe0);
  }
  FUN_008fa54c(abStack_40,lVar3);
  FUN_009bb46c(uVar2,abStack_40,&DAT_0320ffa8,0,0);
  if ((abStack_40[0] & 1) != 0) {
    operator_delete(pvStack_30);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bad3bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  byte abStack_40 [16];
  void *pvStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009b8d90();
  lVar3 = *(long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50);
  if ((*(byte *)(lVar3 + 0xa0) & 1) == 0) {
    lVar3 = lVar3 + 0xa1;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0xb0);
  }
  FUN_008fa54c(abStack_40,lVar3);
  FUN_009bb46c(uVar2,abStack_40,&DAT_0320ffa8,0,0);
  if ((abStack_40[0] & 1) != 0) {
    operator_delete(pvStack_30);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bad46c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte abStack_70 [16];
  void *pvStack_60;
  byte abStack_58 [16];
  void *pvStack_48;
  byte abStack_40 [16];
  void *pvStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ec5c9c();
  if ((uVar2 & 1) != 0) {
    FUN_008fcdb8(abStack_40,*(long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50) + 0xb8);
    FUN_008fa54c(abStack_58,"[LOC]");
    FUN_0092ed98(abStack_70);
    FUN_00937db8(abStack_40,abStack_58,abStack_70);
    if ((abStack_70[0] & 1) != 0) {
      operator_delete(pvStack_60);
    }
    if ((abStack_58[0] & 1) != 0) {
      operator_delete(pvStack_48);
    }
    uVar3 = FUN_009b8d90();
    FUN_009ba5d4(uVar3,abStack_40,1,1,2);
    if ((abStack_40[0] & 1) != 0) {
      operator_delete(pvStack_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bad048(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0 [2];
  undefined8 local_b0;
  void *local_a8;
  byte local_98;
  void *local_88;
  byte local_80;
  void *local_70;
  undefined8 local_64;
  undefined4 local_5c;
  byte local_58;
  void *local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_009580b8();
  if ((*(char *)(lVar3 + 0x568c) == '\0') ||
     ((uVar4 = FUN_00969254(), (uVar4 & 1) != 0 &&
      (lVar3 = FUN_00969248(), 0 < *(int *)(lVar3 + 0x38))))) {
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50) + 0x98);
    lVar3 = FUN_009580b8();
    if (*(uint *)(lVar3 + 0x5450) < uVar1) {
      FUN_00aff894(local_c0);
      uVar5 = FUN_00e6ce7c("MENU_MARKET_ICE_PURCHASE_POPUP_TITLE",0);
      thunk_FUN_00e7051c(&local_d0,uVar5);
      FUN_00910394(&local_b0,&local_d0);
      local_c0[0] = 0x447a000044c80000;
      local_5c = 1;
      FUN_00aff91c(local_c0,PTR_s_build___MenuPartsCommon_tga_02be3530,"popup_fill",&DAT_01bb8b00);
      local_64 = 0xffa3781effa4781e;
      uVar5 = FUN_00aa2040(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_02be9d38,local_c0);
      FUN_00cbd980(uVar5,1);
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
        local_d0 = 0;
        local_c8 = (void *)0x0;
      }
      if ((local_58 & 1) != 0) {
        operator_delete(local_48);
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if (local_a8 != (void *)0x0) {
        operator_delete__(local_a8);
        local_b0 = 0;
        local_a8 = (void *)0x0;
      }
    }
    else {
      FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_GOLD_ACCEPT",0);
      FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_GOLD_REJECT",0);
      FUN_00babf80(param_1);
    }
  }
  else {
    uVar5 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
    uVar6 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TEXT",0);
    uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar5,uVar6,uVar7,0,0);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bad254(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_TITLE",0);
  uVar2 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_MSG",0);
  uVar3 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_CONNECTIONDROPPED_ACCEPT",0);
  FUN_00a9b8b8(uVar1,uVar2,uVar3,param_1,0);
  return;
}




void FUN_00bad2c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_2);
  FUN_00bac128(param_1,1,uVar1);
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_menu_button_tap_drill_in.mp3",0,0);
  return;
}




void FUN_00bad30c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009b8d90();
  lVar3 = *(long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50);
  if ((*(byte *)(lVar3 + 0xd0) & 1) == 0) {
    lVar3 = lVar3 + 0xd1;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0xe0);
  }
  FUN_008fa54c(local_40,lVar3);
  FUN_009bb46c(uVar2,local_40,&DAT_0320ffa8,0,0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bad3bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009b8d90();
  lVar3 = *(long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50);
  if ((*(byte *)(lVar3 + 0xa0) & 1) == 0) {
    lVar3 = lVar3 + 0xa1;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0xb0);
  }
  FUN_008fa54c(local_40,lVar3);
  FUN_009bb46c(uVar2,local_40,&DAT_0320ffa8,0,0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bad46c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte local_70 [16];
  void *local_60;
  byte local_58 [16];
  void *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ec5c9c();
  if ((uVar2 & 1) != 0) {
    FUN_008fcdb8(local_40,*(long *)(*(long *)(param_1 + 0x1ffd8) + 0x28f50) + 0xb8);
    FUN_008fa54c(local_58,"[LOC]");
    FUN_0092ed98(local_70);
    FUN_00937db8(local_40,local_58,local_70);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
    uVar3 = FUN_009b8d90();
    FUN_009ba5d4(uVar3,local_40,1,1,2);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bad54c(long param_1)

{
  FUN_00bac128(param_1,0,0xffffffff);
  FUN_00ad6848(param_1 + 0xea98);
  return;
}




void FUN_00bad57c(void *param_1)

{
  FUN_00b79d8c();
  operator_delete(param_1);
  return;
}




void FUN_00bad5a0(long param_1)

{
  FUN_00b79d8c(param_1 + -0x368);
  return;
}




void FUN_00bad5a8(long param_1)

{
  FUN_00b79d8c((void *)(param_1 + -0x368));
  operator_delete((void *)(param_1 + -0x368));
  return;
}




void FUN_00bad5d0(long *param_1,long param_2)

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
  float fVar10;
  ulong uVar11;
  undefined8 uVar12;
  code *local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_88;
  
  lVar9 = tpidr_el0;
  local_88 = *(long *)(lVar9 + 0x28);
  FUN_00b8e630();
  param_1[0x6d] = (long)&PTR___cxa_pure_virtual_027ea198;
  FUN_00aa1a38(param_1 + 0x6e);
  *param_1 = (long)&PTR_FUN_027e9c40;
  param_1[0x6e] = (long)&UNK_027e9df0;
  param_1[0x6d] = (long)&UNK_027e9dd8;
  FUN_00b2ba24(param_1 + 0x74,param_1 + 0x6d);
  plVar1 = param_1 + 0x14e;
  FUN_00f11234(plVar1);
  FUN_00b2f8f0(param_1 + 0x182);
  plVar2 = param_1 + 0x1df;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x1fd;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x21b;
  FUN_00f0bdbc(plVar4,0);
  plVar5 = param_1 + 0x234;
  param_1[0x21b] = (long)&PTR_FUN_027c3260;
  FUN_00aba378(plVar5,0);
  plVar6 = param_1 + 0x6c2;
  FUN_00f13ca4(plVar6);
  plVar7 = param_1 + 0x6d9;
  FUN_00ab6c24(plVar7,0);
  plVar8 = param_1 + 0x991;
  FUN_00f0d160(plVar8);
  *(undefined4 *)(param_1 + 0x9b9) = 0;
  param_1[0x9b8] = 0;
  param_1[0x9b7] = 0;
  *(undefined8 *)((long)param_1 + 0x4dcc) = 0x43c8000044168000;
  param_1[0x9bd] = 0;
  param_1[0x9bc] = 0;
  param_1[0x9bb] = 0;
  param_1[0x9be] = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x182,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  FUN_00f023ec(plVar6,plVar7,1);
  FUN_00f023ec(plVar6,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x74,1);
  FUN_00f112f0(plVar1,1);
  *(uint *)((long)param_1 + 0xaf4) = *(uint *)((long)param_1 + 0xaf4) | 0x10;
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  if ((~*(uint *)((long)param_1 + 0x106c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x106c) = *(uint *)((long)param_1 + 0x106c) | 0x7f80;
    FUN_0091ada4(plVar3);
  }
  FUN_00ab75d0(0x42200000,0x42c80000,0x44228000,plVar5);
  local_90 = DAT_03210c90;
  local_b8 = thunk_FUN_00baef50;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_009693a0(param_1 + 0x235,&local_b8);
  FUN_00b09144(0xbf800000,plVar5);
  FUN_00aba748(plVar5,"ice_icon_small");
  FUN_00f0d378(param_1 + 0x318,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0da30(param_1 + 0x318,1);
  FUN_00ab7638(0x4019999a,plVar5);
  FUN_00ab71fc(plVar5,1);
  *(uint *)((long)param_1 + 0x3694) = *(uint *)((long)param_1 + 0x3694) & 0xfffffffb;
  uVar11 = FUN_0092ea9c();
  uVar12 = FUN_00e6ce7c("MENU_SKINS_HUB_SEASON_CHEST_BUTTON",0);
  FUN_00ab703c(0x42200000,0x42c80000,0x44228000,plVar7,0,uVar12,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_90 = DAT_03210c64;
  local_b8 = FUN_00badb48;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_009693a0(param_1 + 0x6da,&local_b8);
  FUN_00b09144(0xbf800000,plVar7);
  fVar10 = 1.5;
  if ((uVar11 & 1) == 0) {
    fVar10 = 1.0;
  }
  if ((*(float *)(param_1 + 0x6e2) != fVar10) || (*(float *)((long)param_1 + 0x3714) != fVar10)) {
    *(float *)(param_1 + 0x6e2) = fVar10;
    *(float *)((long)param_1 + 0x3714) = fVar10;
    FUN_0091ada4(plVar7);
  }
  FUN_00b0914c(plVar7,1);
  if ((*(float *)(param_1 + 0x6e3) != 0.5) || (*(float *)((long)param_1 + 0x371c) != 0.5)) {
    param_1[0x6e3] = 0x3f0000003f000000;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0d92c(plVar8,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,&DAT_01bee7fa);
  uVar12 = FUN_00e6ce7c("MENU_SKINS_HUB_MYSTERY_CHEST_BUNDLE_LABEL",0);
  FUN_00f0d75c(plVar8,uVar12);
  if ((*(float *)(param_1 + 0x99b) != 0.0) || (*(float *)((long)param_1 + 0x4cdc) != 0.5)) {
    param_1[0x99b] = 0x3f00000000000000;
    FUN_0091ada4(plVar8);
  }
  FUN_00f0dac8(plVar8,3);
  FUN_00f0da30(plVar8,1);
  FUN_00e6ea58(&DAT_02c7eef8,param_1,0x9d2c9b16,FUN_00badb5c,0);
  (**(code **)(*param_1 + 0x150))(param_1);
  if (*(long *)(lVar9 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00badb48(void)

{
  FUN_009b8d90();
  FUN_009bba7c();
  return;
}




void FUN_00badb5c(void)

{
  FUN_00bae6fc();
  return;
}




void FUN_00badb88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e9c40;
  param_1[0x6e] = &UNK_027e9df0;
  param_1[0x6d] = &UNK_027e9dd8;
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0x9d2c9b16);
  FUN_00badf0c(param_1);
  if ((*(byte *)(param_1 + 0x9bb) & 1) != 0) {
    operator_delete((void *)param_1[0x9bd]);
  }
  if ((void *)param_1[0x9b8] != (void *)0x0) {
    operator_delete__((void *)param_1[0x9b8]);
    param_1[0x9b8] = 0;
    param_1[0x9b7] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x991);
  FUN_009c7fa8(param_1 + 0x6d9);
  FUN_00f13d08(param_1 + 0x6c2);
  param_1[0x234] = &PTR_FUN_027d51f0;
  param_1[0x6a3] = &PTR_FUN_028266f0;
  param_1[0x6ba] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6bd);
  FUN_00f13d08(param_1 + 0x6a3);
  param_1[0x685] = &PTR_FUN_028266f0;
  param_1[0x69c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x69f);
  FUN_00f13d08(param_1 + 0x685);
  FUN_00f0d3a4(param_1 + 0x65f);
  param_1[0x641] = &PTR_FUN_028266f0;
  param_1[0x658] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x65b);
  FUN_00f13d08(param_1 + 0x641);
  FUN_00f01868(param_1 + 0x630);
  param_1[0x612] = &PTR_FUN_028266f0;
  param_1[0x629] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x62c);
  FUN_00f13d08(param_1 + 0x612);
  param_1[0x234] = &PTR_FUN_027d5058;
  FUN_00f13d08(param_1 + 0x5db);
  FUN_00f01868(param_1 + 0x5ca);
  FUN_00f13d08(param_1 + 0x596);
  FUN_00f01868(param_1 + 0x585);
  FUN_00f0d3a4(param_1 + 0x55f);
  FUN_00f0d3a4(param_1 + 0x539);
  param_1[0x51b] = &PTR_FUN_028266f0;
  param_1[0x532] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x535);
  FUN_00f13d08(param_1 + 0x51b);
  param_1[0x4fd] = &PTR_FUN_028266f0;
  param_1[0x514] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x517);
  FUN_00f13d08(param_1 + 0x4fd);
  FUN_00f01868(param_1 + 0x4ec);
  FUN_009c7fa8(param_1 + 0x234);
  FUN_00f13d08(param_1 + 0x21b);
  param_1[0x1fd] = &PTR_FUN_028266f0;
  param_1[0x214] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x217);
  FUN_00f13d08(param_1 + 0x1fd);
  param_1[0x1df] = &PTR_FUN_028266f0;
  param_1[0x1f6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1f9);
  FUN_00f13d08(param_1 + 0x1df);
  param_1[0x182] = &PTR_FUN_027e00f8;
  if ((*(byte *)(param_1 + 0x1da) & 1) != 0) {
    operator_delete((void *)param_1[0x1dc]);
  }
  param_1[0x1bc] = &PTR_FUN_028266f0;
  param_1[0x1d3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1d6);
  FUN_00f13d08(param_1 + 0x1bc);
  if ((*(byte *)(param_1 + 0x1b7) & 1) != 0) {
    operator_delete((void *)param_1[0x1b9]);
  }
  param_1[0x199] = &PTR_FUN_028266f0;
  param_1[0x1b0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1b3);
  FUN_00f13d08(param_1 + 0x199);
  FUN_00f13d08(param_1 + 0x182);
  FUN_00f13d08(param_1 + 0x14e);
  param_1[0x74] = &PTR_FUN_027df320;
  if ((void *)param_1[0x14b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x14b]);
    param_1[0x14b] = 0;
    param_1[0x14a] = 0;
  }
  FUN_00ed00e0(param_1 + 0xa3);
  FUN_00f13d08(param_1 + 0x8c);
  FUN_00f13d08(param_1 + 0x74);
  param_1[0x6e] = &PTR_FUN_027d1940;
  if ((*(byte *)(param_1 + 0x71) & 1) != 0) {
    operator_delete((void *)param_1[0x73]);
  }
  FUN_00948d58(param_1 + 0x6e);
  FUN_00b8e790(param_1);
  return;
}




void FUN_00badf0c(long param_1)

{
  if (*(long *)(param_1 + 0x4dc0) != 0) {
    *(undefined4 *)(param_1 + 0x4db8) = 0;
  }
  FUN_00b2bc5c(param_1 + 0x3a0);
  FUN_00b2f980(param_1 + 0xc10);
  return;
}




void FUN_00badf44(long param_1)

{
  FUN_00badb88(param_1 + -0x370);
  return;
}




void FUN_00badf4c(void *param_1)

{
  FUN_00badb88();
  operator_delete(param_1);
  return;
}




void FUN_00badf70(long param_1)

{
  FUN_00badb88((void *)(param_1 + -0x370));
  operator_delete((void *)(param_1 + -0x370));
  return;
}




void FUN_00badf98(long param_1)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_90 [16];
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  uVar6 = FUN_00f02540();
  if ((uVar6 & 1) != 0) {
    FUN_00b8e860(param_1);
    pfVar1 = (float *)(param_1 + 0x4dc8);
    if (*(float *)(param_1 + 0x44) != *pfVar1) {
      *(float *)(param_1 + 0x44) = *pfVar1;
      FUN_0091ada4(param_1);
    }
    FUN_00f00298(&fStack_7c,&local_80);
    uVar4 = FUN_0092ead0(fStack_7c,local_80);
    uVar5 = FUN_0092ea9c();
    fVar10 = fStack_7c - DAT_031339d4;
    FUN_00f13f08(fVar10,local_80,param_1 + 0xa70);
    fVar7 = local_80 * *(float *)(param_1 + 0xc64);
    if ((*(float *)(param_1 + 0xc50) != fVar10) || (*(float *)(param_1 + 0xc54) != fVar7)) {
      *(float *)(param_1 + 0xc50) = fVar10;
      *(float *)(param_1 + 0xc54) = fVar7;
      FUN_0091ada4(param_1 + 0xc10);
    }
    fVar7 = fVar10 + local_80 / -0.75;
    if ((*(float *)(param_1 + 0xf38) != fVar7) || (*(float *)(param_1 + 0xf3c) != 0.0)) {
      *(float *)(param_1 + 0xf38) = fVar7;
      *(undefined4 *)(param_1 + 0xf3c) = 0;
      FUN_0091ada4(param_1 + 0xef8);
    }
    FUN_00f13f08(0x43af0000,local_80,param_1 + 0xef8);
    FUN_00f13f08(*(undefined4 *)(param_1 + 0xf38),local_80,param_1 + 0xfe8);
    fVar7 = 1.5;
    if ((uVar5 & 1) == 0) {
      fVar7 = 1.0;
    }
    if ((*(float *)(param_1 + 0x11e8) != fVar7) || (*(float *)(param_1 + 0x11ec) != fVar7)) {
      *(float *)(param_1 + 0x11e8) = fVar7;
      *(float *)(param_1 + 0x11ec) = fVar7;
      FUN_0091ada4(param_1 + 0x11a0);
    }
    fVar7 = 120.0;
    if ((uVar5 & 1) == 0) {
      fVar7 = 80.0;
    }
    fVar9 = DAT_02be3668 * 30.0;
    fVar11 = *(float *)(param_1 + 0x2750) + fVar9;
    fVar8 = fVar11 + ((local_80 - (*pfVar1 + *pfVar1)) - fVar7);
    lVar2 = param_1 + 0x10d8;
    if (*(float *)(param_1 + 0x111c) != fVar8) {
      *(float *)(param_1 + 0x111c) = fVar8;
      FUN_0091ada4(lVar2);
    }
    FUN_00f0bc10(fVar10 - fVar9,0x3f800000,0x41600000,auStack_90);
    FUN_00f0c168(lVar2,auStack_90);
    (**(code **)(*(long *)(param_1 + 0x10d8) + 0x90))(lVar2);
    lVar2 = param_1 + 0x3a0;
    if (*(float *)(param_1 + 0x3e4) != 30.0) {
      *(undefined4 *)(param_1 + 0x3e4) = 0x41f00000;
      FUN_0091ada4(lVar2);
    }
    FUN_00f13f08(*(undefined4 *)(param_1 + 0x4dcc),local_80 + -200.0,lVar2);
    fVar9 = *(float *)(param_1 + 1000);
    fVar8 = 1.0;
    if (((uVar4 | uVar5) & 1) == 0) {
      fVar8 = 0.7;
    }
    if ((fVar9 != fVar8) || (fVar9 = *(float *)(param_1 + 0x3ec), fVar9 != fVar8)) {
      *(float *)(param_1 + 1000) = fVar8;
      *(float *)(param_1 + 0x3ec) = fVar8;
      FUN_0091ada4(lVar2);
    }
    FUN_00f13e54(param_1 + 0x36c8);
    fVar8 = fVar9 * -0.5;
    FUN_00f0d4e0(param_1 + 0x4c88);
    fVar8 = fVar8 + fVar9 * -0.5;
    if (*(float *)(param_1 + 0x4ccc) != fVar8) {
      *(float *)(param_1 + 0x4ccc) = fVar8;
      FUN_0091ada4(param_1 + 0x4c88);
    }
    fVar8 = (float)FUN_00f13e54(lVar2);
    fVar9 = (float)FUN_00f13e54(param_1 + 0x36c8);
    fVar10 = (fVar10 + fVar8) * 0.5 - fVar9 * 0.5;
    fVar11 = fVar11 + ((local_80 - (*pfVar1 + *pfVar1)) - fVar7);
    if ((*(float *)(param_1 + 0x3650) != fVar10) || (*(float *)(param_1 + 0x3654) != fVar11)) {
      *(float *)(param_1 + 0x3650) = fVar10;
      *(float *)(param_1 + 0x3654) = fVar11;
      FUN_0091ada4(param_1 + 0x3610);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

