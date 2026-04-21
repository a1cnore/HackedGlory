// functions/00b0f — 12 functions
#include "libGameKindred.h"




void thunk_FUN_00b0fd98(void)

{
  long lVar1;
  undefined8 uVar2;
  byte abStack_40 [16];
  void *pvStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(abStack_40,"vainglory://Profile");
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




void FUN_00b0f2bc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  ulong local_d8;
  void *local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  byte local_80 [16];
  void *local_70;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa718(local_80);
  uVar3 = FUN_00b0d010(param_1,local_80);
  if ((uVar3 & 1) == 0) goto LAB_00b0f99c;
  uVar4 = FUN_00e6ce7c("MENU_DIALOG_BUNDLE_PURCHASE_TITLE",0);
  thunk_FUN_00e7051c(&local_90,uVar4);
  uVar4 = FUN_00e6ce7c("MENU_DIALOG_BUNDLE_PURCHASE_BODY",0);
  thunk_FUN_00e7051c(&local_a0,uVar4);
  FUN_00e70510(&local_b0);
  uVar2 = FUN_00b0d110(param_1);
  FUN_00e70e18(&local_b0,&DAT_01bb6d43,uVar2);
  FUN_00e70510(&local_c0);
  uVar2 = FUN_00cabab8(local_80);
  FUN_00e70e18(&local_c0,"%u",uVar2);
  FUN_008fa54c(&local_d8,"gold");
  uVar3 = FUN_00b0cf7c(param_1,&local_d8);
  if ((local_d8 & 1) != 0) {
    operator_delete(local_c8);
  }
  if ((uVar3 & 1) == 0) {
    FUN_008fa54c(&local_d8,"silver");
    uVar3 = FUN_00b0cf7c(param_1,&local_d8);
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    if ((uVar3 & 1) != 0) {
      auVar8 = FUN_009580c4();
      uVar2 = 0;
      if ((auVar8._0_8_ & 1) != 0) {
        lVar5 = FUN_009580b8(auVar8._0_8_,auVar8._8_8_,0);
        uVar2 = *(undefined4 *)(lVar5 + 0x5454);
      }
      FUN_00e70e18(&local_c0,"%u",uVar2);
      FUN_00e705c8(&local_d8,"[BUNDLE_NAME]");
      FUN_00e71248(&local_a0,0,&local_d8,param_2 + 0x18);
      if (local_d0 != (void *)0x0) {
        operator_delete__(local_d0);
        local_d8 = 0;
        local_d0 = (void *)0x0;
      }
      FUN_00e705c8(&local_d8,"[UNLOCK_AMOUNT]");
      FUN_00e71248(&local_a0,0,&local_d8,&local_b0);
      if (local_d0 != (void *)0x0) {
        operator_delete__(local_d0);
        local_d8 = 0;
        local_d0 = (void *)0x0;
      }
      FUN_00e705c8(&local_d8,"[UNLOCK_CURRENCY]");
      uVar4 = FUN_00e6ce7c("MENU_GENERIC_SILVER_NAME",0);
      FUN_00e71248(&local_a0,0,&local_d8,uVar4);
      if (local_d0 != (void *)0x0) {
        operator_delete__(local_d0);
        local_d8 = 0;
        local_d0 = (void *)0x0;
      }
      FUN_00e705c8(&local_d8,"[BALANCE_AMOUNT]");
      FUN_00e71248(&local_a0,0,&local_d8,&local_c0);
      if (local_d0 != (void *)0x0) {
        operator_delete__(local_d0);
        local_d8 = 0;
        local_d0 = (void *)0x0;
      }
      FUN_00e705c8(&local_d8,"[BALANCE_CURRENCY]");
      pcVar6 = "MENU_GENERIC_SILVER_NAME";
      goto LAB_00b0f8d8;
    }
    FUN_008fa54c(&local_d8,"opal");
    uVar3 = FUN_00b0cf7c(param_1,&local_d8);
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    if ((uVar3 & 1) != 0) {
      auVar8 = FUN_009580c4();
      uVar2 = 0;
      if ((auVar8._0_8_ & 1) != 0) {
        lVar5 = FUN_009580b8(auVar8._0_8_,auVar8._8_8_,0);
        uVar2 = *(undefined4 *)(lVar5 + 0x5454);
      }
      FUN_00e70e18(&local_c0,"%u",uVar2);
      FUN_00e705c8(&local_d8,"[BUNDLE_NAME]");
      FUN_00e71248(&local_a0,0,&local_d8,param_2 + 0x18);
      if (local_d0 != (void *)0x0) {
        operator_delete__(local_d0);
        local_d8 = 0;
        local_d0 = (void *)0x0;
      }
      FUN_00e705c8(&local_d8,"[UNLOCK_AMOUNT]");
      FUN_00e71248(&local_a0,0,&local_d8,&local_b0);
      if (local_d0 != (void *)0x0) {
        operator_delete__(local_d0);
        local_d8 = 0;
        local_d0 = (void *)0x0;
      }
      FUN_00e705c8(&local_d8,"[UNLOCK_CURRENCY]");
      uVar4 = FUN_00e6ce7c("MENU_GENERIC_OPALS_NAME",0);
      FUN_00e71248(&local_a0,0,&local_d8,uVar4);
      if (local_d0 != (void *)0x0) {
        operator_delete__(local_d0);
        local_d8 = 0;
        local_d0 = (void *)0x0;
      }
      FUN_00e705c8(&local_d8,"[BALANCE_AMOUNT]");
      FUN_00e71248(&local_a0,0,&local_d8,&local_c0);
      if (local_d0 != (void *)0x0) {
        operator_delete__(local_d0);
        local_d8 = 0;
        local_d0 = (void *)0x0;
      }
      FUN_00e705c8(&local_d8,"[BALANCE_CURRENCY]");
      pcVar6 = "MENU_GENERIC_OPALS_NAME";
      goto LAB_00b0f8d8;
    }
    FUN_008fa54c(&local_d8,"essence");
    uVar3 = FUN_00b0cf7c(param_1,&local_d8);
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    if ((uVar3 & 1) != 0) {
      auVar8 = FUN_009580c4();
      uVar2 = 0;
      if ((auVar8._0_8_ & 1) != 0) {
        lVar5 = FUN_009580b8(auVar8._0_8_,auVar8._8_8_,0);
        uVar2 = *(undefined4 *)(lVar5 + 0x5458);
      }
      FUN_00e70e18(&local_c0,"%u",uVar2);
      FUN_00e705c8(&local_d8,"[BUNDLE_NAME]");
      FUN_00e71248(&local_a0,0,&local_d8,param_2 + 0x18);
      if (local_d0 != (void *)0x0) {
        operator_delete__(local_d0);
        local_d8 = 0;
        local_d0 = (void *)0x0;
      }
      FUN_00e705c8(&local_d8,"[UNLOCK_AMOUNT]");
      FUN_00e71248(&local_a0,0,&local_d8,&local_b0);
      if (local_d0 != (void *)0x0) {
        operator_delete__(local_d0);
        local_d8 = 0;
        local_d0 = (void *)0x0;
      }
      FUN_00e705c8(&local_d8,"[UNLOCK_CURRENCY]");
      uVar4 = FUN_00e6ce7c("MENU_GENERIC_ESSENCE_NAME",0);
      FUN_00e71248(&local_a0,0,&local_d8,uVar4);
      if (local_d0 != (void *)0x0) {
        operator_delete__(local_d0);
        local_d8 = 0;
        local_d0 = (void *)0x0;
      }
      FUN_00e705c8(&local_d8,"[BALANCE_AMOUNT]");
      FUN_00e71248(&local_a0,0,&local_d8,&local_c0);
      if (local_d0 != (void *)0x0) {
        operator_delete__(local_d0);
        local_d8 = 0;
        local_d0 = (void *)0x0;
      }
      FUN_00e705c8(&local_d8,"[BALANCE_CURRENCY]");
      pcVar6 = "MENU_GENERIC_ESSENCE_NAME";
      goto LAB_00b0f8d8;
    }
  }
  else {
    auVar8 = FUN_009580c4();
    uVar2 = 0;
    if ((auVar8._0_8_ & 1) != 0) {
      lVar5 = FUN_009580b8(auVar8._0_8_,auVar8._8_8_,0);
      uVar2 = *(undefined4 *)(lVar5 + 0x5450);
    }
    FUN_00e70e18(&local_c0,"%u",uVar2);
    FUN_00e705c8(&local_d8,"[BUNDLE_NAME]");
    FUN_00e71248(&local_a0,0,&local_d8,param_2 + 0x18);
    if (local_d0 != (void *)0x0) {
      operator_delete__(local_d0);
      local_d8 = 0;
      local_d0 = (void *)0x0;
    }
    FUN_00e705c8(&local_d8,"[UNLOCK_AMOUNT]");
    FUN_00e71248(&local_a0,0,&local_d8,&local_b0);
    if (local_d0 != (void *)0x0) {
      operator_delete__(local_d0);
      local_d8 = 0;
      local_d0 = (void *)0x0;
    }
    FUN_00e705c8(&local_d8,"[UNLOCK_CURRENCY]");
    uVar4 = FUN_00e6ce7c("MENU_GENERIC_GOLD_NAME",0);
    FUN_00e71248(&local_a0,0,&local_d8,uVar4);
    if (local_d0 != (void *)0x0) {
      operator_delete__(local_d0);
      local_d8 = 0;
      local_d0 = (void *)0x0;
    }
    FUN_00e705c8(&local_d8,"[BALANCE_AMOUNT]");
    FUN_00e71248(&local_a0,0,&local_d8,&local_c0);
    if (local_d0 != (void *)0x0) {
      operator_delete__(local_d0);
      local_d8 = 0;
      local_d0 = (void *)0x0;
    }
    FUN_00e705c8(&local_d8,"[BALANCE_CURRENCY]");
    pcVar6 = "MENU_GENERIC_GOLD_NAME";
LAB_00b0f8d8:
    uVar4 = FUN_00e6ce7c(pcVar6,0);
    FUN_00e71248(&local_a0,0,&local_d8,uVar4);
    if (local_d0 != (void *)0x0) {
      operator_delete__(local_d0);
      local_d8 = 0;
      local_d0 = (void *)0x0;
    }
  }
  uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00a9b9f8(&local_90,&local_a0,uVar4,uVar7,&DAT_03210450,param_1,thunk_FUN_00b0fe1c,FUN_00b0fd94
               ,0);
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
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
LAB_00b0f99c:
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b0f9d4(long param_1,byte *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  void *local_138;
  ulong local_130;
  void *local_128;
  void *local_120;
  undefined8 local_118;
  void *local_110;
  undefined8 local_108;
  void *local_100;
  undefined8 local_f8;
  void *local_f0;
  undefined **local_e8;
  undefined1 auStack_e0 [16];
  byte local_d0 [16];
  void *local_c0;
  undefined1 auStack_b8 [48];
  byte local_88;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pbVar6 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar6 = param_2 + 1;
  }
  FUN_00cc7a20(&local_f8,pbVar6,1);
  FUN_00975578(&local_e8);
  uVar2 = FUN_0096bf40(param_1 + 0x24b8,&local_e8);
  if ((uVar2 & 1) == 0) goto LAB_00b0fcf4;
  uVar2 = FUN_00cabb6c(local_d0);
  if ((uVar2 & 1) == 0) {
    FUN_00caf724(local_d0,&local_60);
    goto LAB_00b0fcf4;
  }
  FUN_00e70510(&local_108);
  FUN_00e70510(&local_118);
  FUN_008fa54c(&local_130,"gold");
  uVar2 = FUN_00b0cf7c(param_1,&local_130);
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  if ((uVar2 & 1) == 0) {
    FUN_008fa54c(&local_130,"opal");
    uVar2 = FUN_00b0cf7c(param_1,&local_130);
    if ((local_130 & 1) != 0) {
      operator_delete(local_120);
    }
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_00e6ce7c("MENU_MARKET_DIALOG_UNLOCKSKIN_OPALS_TITLE",0);
      FUN_00910394(&local_108,uVar3);
      pcVar4 = "MENU_MARKET_DIALOG_UNLOCKSKIN_OPALS_MSG";
      goto LAB_00b0fb20;
    }
  }
  else {
    uVar3 = FUN_00e6ce7c("SKINS_HUB_DIALOG_UNLOCKSKIN_GOLD_TITLE",0);
    FUN_00910394(&local_108,uVar3);
    pcVar4 = "SKINS_HUB_DIALOG_UNLOCKSKIN_GOLD_MSG";
LAB_00b0fb20:
    uVar3 = FUN_00e6ce7c(pcVar4,0);
    FUN_00910394(&local_118,uVar3);
  }
  FUN_00cab944(auStack_b8);
  FUN_00cb418c(&local_130);
  FUN_00e70570(&local_140,&local_130);
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  FUN_00cabab8(local_d0);
  FUN_00cb418c(&local_130);
  FUN_00e70570(&local_150,&local_130);
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  FUN_00e705c8(&local_130,"[SKIN_NAME]");
  FUN_00e71248(&local_108,0,&local_130,&local_f8);
  if (local_128 != (void *)0x0) {
    operator_delete__(local_128);
    local_130 = 0;
    local_128 = (void *)0x0;
  }
  FUN_00e705c8(&local_130,"[SKIN_NAME]");
  FUN_00e71248(&local_118,0,&local_130,&local_f8);
  if (local_128 != (void *)0x0) {
    operator_delete__(local_128);
    local_130 = 0;
    local_128 = (void *)0x0;
  }
  FUN_00e705c8(&local_130,"[UNLOCK_AMOUNT]");
  FUN_00e71248(&local_118,0,&local_130,&local_140);
  if (local_128 != (void *)0x0) {
    operator_delete__(local_128);
    local_130 = 0;
    local_128 = (void *)0x0;
  }
  FUN_00e705c8(&local_130,"[BALANCE_AMOUNT]");
  FUN_00e71248(&local_118,0,&local_130,&local_150);
  if (local_128 != (void *)0x0) {
    operator_delete__(local_128);
    local_130 = 0;
    local_128 = (void *)0x0;
  }
  uVar3 = FUN_00e6ce7c("MENU_MARKET_DIALOG_UNLOCK_ACCEPT",0);
  uVar5 = FUN_00e6ce7c("MENU_MARKET_DIALOG_UNLOCK_REJECT",0);
  FUN_00a9b9f8(&local_108,&local_118,uVar3,uVar5,&DAT_03210450,param_1,thunk_FUN_00b0fe1c,0,0);
  if (local_148 != (void *)0x0) {
    operator_delete__(local_148);
    local_150 = 0;
    local_148 = (void *)0x0;
  }
  if (local_138 != (void *)0x0) {
    operator_delete__(local_138);
    local_140 = 0;
    local_138 = (void *)0x0;
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
LAB_00b0fcf4:
  local_e8 = &PTR_FUN_027bca90;
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
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  FUN_00977ea0(auStack_e0,1);
  if (local_f0 != (void *)0x0) {
    operator_delete__(local_f0);
    local_f8 = 0;
    local_f0 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b0fe1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009580b8();
  FUN_008fa54c(abStack_50,&DAT_01e277f2);
  FUN_00961494(uVar2,param_1 + 0x24b8,abStack_50);
  if ((abStack_50[0] & 1) != 0) {
    operator_delete(pvStack_40);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b0fd94(void)

{
  return;
}




void FUN_00b0fd98(void)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009b8d90();
  FUN_008fa54c(local_40,"vainglory://Profile");
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




void FUN_00b0fe1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009580b8();
  FUN_008fa54c(local_50,&DAT_01e277f2);
  FUN_00961494(uVar2,param_1 + 0x24b8,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b0fea8(void)

{
  return;
}




void FUN_00b0feb0(void)

{
  return;
}




void FUN_00b0feb4(void)

{
  return;
}




void FUN_00b0feb8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_00b26174();
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0xb0) != 0) {
      lVar1 = (ulong)*(uint *)(param_1 + 0xb0) * 0xa0;
      puVar2 = *(undefined8 **)(param_1 + 0xb8);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0xa0;
        puVar2 = puVar2 + 0x14;
      } while (lVar1 != 0);
    }
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  FUN_008fce60(param_1 + 200,&DAT_0320ffa8);
  return;
}




void FUN_00b0ff28(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_00b2624c(param_1,0);
  *param_1 = (long)&PTR_FUN_027dc420;
  FUN_00f017e8(param_1 + 0x471);
  plVar1 = param_1 + 0x484;
  param_1[0x483] = 0;
  param_1[0x482] = 0;
  param_1[0x471] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar1);
  FUN_008fcdb8(param_1 + 0x4a2,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x4a5,&DAT_0320ffa8);
  *(undefined4 *)(param_1 + 0x4a8) = 0xffffffff;
  FUN_00f023ec(param_1 + 0x1a2,param_1 + 0x471,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0e540(plVar1,PTR_s_build___BoostBadges_tga_02be3580);
  if ((*(float *)(param_1 + 0x48d) == 1.0) && (*(float *)((long)param_1 + 0x246c) == 1.0)) {
    return;
  }
  lVar2 = NEON_fmov(0x3f800000,4);
  param_1[0x48d] = lVar2;
  FUN_0091ada4(plVar1);
  return;
}

