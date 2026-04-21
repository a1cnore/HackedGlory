// functions/00b0e — 3 functions
#include "libGameKindred.h"




void FUN_00b0e2ec(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *__s2;
  char *pcVar10;
  long lVar11;
  void *pvVar12;
  undefined1 auStack_b0 [32];
  byte local_90 [16];
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)(param_1 + 0x2488);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x2490);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pvVar12 = *(void **)(param_1 + 0x2498);
    if ((bVar2 & 1) == 0) {
      pvVar12 = (void *)(param_1 + 0x2489);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar10 = (char *)(param_1 + 0x2489);
        lVar11 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar10 != *__s2) goto LAB_00b0e3a8;
          pcVar10 = pcVar10 + 1;
          lVar11 = lVar11 + 1;
          __s2 = __s2 + 1;
        } while (lVar11 != 0);
      }
      goto LAB_00b0e4dc;
    }
    if ((__n == 0) || (iVar4 = memcmp(pvVar12,__s2,__n), iVar4 == 0)) goto LAB_00b0e4dc;
  }
LAB_00b0e3a8:
  FUN_0097b388(local_90);
  FUN_00930790((byte *)(param_1 + 0x2488),local_90);
  uVar6 = FUN_00930658(local_90);
  pvVar12 = (void *)((ulong)local_90 | 1);
  if ((local_90[0] & 1) != 0) {
    pvVar12 = local_80;
  }
  FUN_009038d8(pvVar12);
  if ((uVar6 & 1) == 0) {
    uVar7 = FUN_00e6ce7c("MARKET_GOLD_STORE_UNAVAILABLE_TITLE",0);
    uVar8 = FUN_00e6ce7c("MARKET_GOLD_STORE_UNAVAILABLE_BODY",0);
    uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar7,uVar8,uVar9,0,0);
    FUN_00b0cb60(param_1,0,&DAT_03210450);
  }
  else {
    uVar7 = FUN_00e6ce7c("MARKET_GOLD_BUNDLE_BUY_WAITING",0);
    FUN_00b0cb60(param_1,1,uVar7);
    uVar5 = FUN_00f048a4("UI::EVENT_IAP_PROCESSING");
    FUN_00f048e0(auStack_b0,uVar5,0);
    FUN_00f04760(param_1,auStack_b0,1);
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
LAB_00b0e4dc:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b0e504(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 local_188;
  void *local_180;
  ulong local_178;
  void *local_170;
  void *local_168;
  undefined8 local_160;
  void *local_158;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  void *local_128;
  undefined8 local_120;
  void *local_118;
  byte local_110 [8];
  ulong local_108;
  void *local_100;
  undefined **local_f8;
  undefined1 auStack_f0 [16];
  byte local_e0 [16];
  void *local_d0;
  undefined1 auStack_c8 [48];
  byte local_98;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00975578(&local_f8);
  uVar4 = FUN_0096bf40(param_1 + 0x24b8,&local_f8);
  if ((uVar4 & 1) == 0) goto LAB_00b0eb58;
  uVar5 = FUN_00cab978(auStack_c8);
  FUN_008fa54c(local_110,uVar5);
  iVar2 = FUN_00cab944(auStack_c8);
  thunk_FUN_00e7051c(&local_120,&DAT_03210450);
  thunk_FUN_00e7051c(&local_130,&DAT_03210450);
  thunk_FUN_00e7051c(&local_140,&DAT_03210450);
  thunk_FUN_00e7051c(&local_150,&DAT_03210450);
  uVar9 = (ulong)(local_110[0] >> 1);
  uVar4 = uVar9;
  if ((local_110[0] & 1) != 0) {
    uVar4 = local_108;
  }
  if (uVar4 == 6) {
    iVar3 = FUN_0090d610(local_110,0,0xffffffffffffffff,"silver",6);
    if (iVar3 != 0) {
      uVar9 = (ulong)(local_110[0] >> 1);
      goto LAB_00b0e608;
    }
    uVar5 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_TITLE",0);
    FUN_00910394(&local_120,uVar5);
    uVar5 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_MSG",0);
    FUN_00910394(&local_130,uVar5);
    uVar5 = FUN_00e6ce7c("HERO_HUB_DIALOG_LACK_SILVERL_TITLE",0);
    FUN_00910394(&local_140,uVar5);
    pcVar6 = "HERO_HUB_DIALOG_LACK_SILVERL_DESC";
LAB_00b0e834:
    uVar5 = FUN_00e6ce7c(pcVar6,0);
    FUN_00910394(&local_150,uVar5);
  }
  else {
LAB_00b0e608:
    uVar4 = uVar9;
    if ((local_110[0] & 1) != 0) {
      uVar4 = local_108;
    }
    if (uVar4 == 4) {
      iVar3 = FUN_0090d610(local_110,0,0xffffffffffffffff,"gold",4);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_GOLD_TITLE",0);
        FUN_00910394(&local_120,uVar5);
        uVar5 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_GOLD_MSG",0);
        FUN_00910394(&local_130,uVar5);
        uVar5 = FUN_00e6ce7c("HERO_HUB_DIALOG_LACK_GOLD_TITLE",0);
        FUN_00910394(&local_140,uVar5);
        pcVar6 = "HERO_HUB_DIALOG_LACK_GOLD_DESC";
        goto LAB_00b0e834;
      }
      uVar9 = (ulong)(local_110[0] >> 1);
    }
    uVar4 = uVar9;
    if ((local_110[0] & 1) != 0) {
      uVar4 = local_108;
    }
    if (uVar4 == 4) {
      iVar3 = FUN_0090d610(local_110,0,0xffffffffffffffff,"opal",4);
      if (iVar3 == 0) {
        uVar5 = FUN_00e6ce7c("MENU_MARKET_DIALOG_UNLOCKHERO_OPALS_TITLE",0);
        FUN_00910394(&local_120,uVar5);
        uVar5 = FUN_00e6ce7c("MENU_MARKET_DIALOG_UNLOCKHERO_OPALS_MSG",0);
        FUN_00910394(&local_130,uVar5);
        uVar5 = FUN_00e6ce7c("MENU_MARKET_DIALOG_LACK_OPALS_TITLE",0);
        FUN_00910394(&local_140,uVar5);
        pcVar6 = "MENU_MARKET_DIALOG_LACK_OPALS_DESC";
        goto LAB_00b0e834;
      }
      uVar9 = (ulong)(local_110[0] >> 1);
    }
    if ((local_110[0] & 1) != 0) {
      uVar9 = local_108;
    }
    if ((uVar9 == 7) &&
       (iVar3 = FUN_0090d610(local_110,0,0xffffffffffffffff,"essence",7), iVar3 == 0)) {
      uVar5 = FUN_00e6ce7c("MENU_MARKET_DIALOG_UNLOCKHERO_ESSENCE_TITLE",0);
      FUN_00910394(&local_120,uVar5);
      uVar5 = FUN_00e6ce7c("MENU_MARKET_DIALOG_UNLOCKHERO_ESSENCE_MSG",0);
      FUN_00910394(&local_130,uVar5);
      uVar5 = FUN_00e6ce7c("MENU_MARKET_DIALOG_LACK_ESSENCE_TITLE",0);
      FUN_00910394(&local_140,uVar5);
      pcVar6 = "MENU_MARKET_DIALOG_LACK_ESSENCE_DESC";
      goto LAB_00b0e834;
    }
  }
  FUN_00cb418c(&local_178,iVar2);
  FUN_00e70570(&local_160,&local_178);
  if ((local_178 & 1) != 0) {
    operator_delete(local_168);
  }
  FUN_00cabab8(local_e0);
  FUN_00cb418c(&local_178);
  FUN_00e70570(&local_188,&local_178);
  if ((local_178 & 1) != 0) {
    operator_delete(local_168);
  }
  if (iVar2 == 0) {
    FUN_00e705c8(&local_178,"[HERO_NAME]");
    FUN_00e71248(&local_120,0,&local_178,param_2 + 0x18);
    if (local_170 != (void *)0x0) {
      operator_delete__(local_170);
      local_178 = 0;
      local_170 = (void *)0x0;
    }
    FUN_00e705c8(&local_178,"[HERO_NAME]");
    FUN_00e71248(&local_130,0,&local_178,param_2 + 0x18);
    if (local_170 != (void *)0x0) {
      operator_delete__(local_170);
      local_178 = 0;
      local_170 = (void *)0x0;
    }
    FUN_00e705c8(&local_178,"[UNLOCK_AMOUNT]");
    FUN_00e71248(&local_130,0,&local_178,&local_160);
    if (local_170 != (void *)0x0) {
      operator_delete__(local_170);
      local_178 = 0;
      local_170 = (void *)0x0;
    }
    FUN_00e705c8(&local_178,"[BALANCE_AMOUNT]");
    FUN_00e71248(&local_130,0,&local_178,&local_188);
    if (local_170 != (void *)0x0) {
      operator_delete__(local_170);
      local_178 = 0;
      local_170 = (void *)0x0;
    }
    lVar7 = FUN_00969248();
    if (*(int *)(lVar7 + 0x38) < 1) {
      uVar5 = FUN_00e6ce7c("MENU_MARKET_DIALOG_UNLOCK_ACCEPT",0);
      puVar8 = (undefined8 *)FUN_00e6ce7c("MENU_MARKET_DIALOG_UNLOCK_REJECT",0);
    }
    else {
      uVar5 = FUN_009b8d90();
      FUN_009baadc(uVar5,&DAT_0320ffa8);
      uVar5 = FUN_00e6ce7c("MENU_MARKET_DIALOG_UNLOCK_ACCEPT",0);
      puVar8 = &DAT_03210450;
    }
    FUN_00a9b9f8(&local_120,&local_130,uVar5,puVar8,&DAT_03210450,param_1,thunk_FUN_00b0fe1c,0,0);
  }
  else {
    FUN_00e705c8(&local_178,"[HERO_NAME]");
    FUN_00e71248(&local_150,0,&local_178,param_2 + 0x18);
    if (local_170 != (void *)0x0) {
      operator_delete__(local_170);
      local_178 = 0;
      local_170 = (void *)0x0;
    }
    FUN_00e705c8(&local_178,"[UNLOCK_AMOUNT]");
    FUN_00e71248(&local_150,0,&local_178,&local_160);
    if (local_170 != (void *)0x0) {
      operator_delete__(local_170);
      local_178 = 0;
      local_170 = (void *)0x0;
    }
    FUN_00e705c8(&local_178,"[BALANCE_AMOUNT]");
    FUN_00e71248(&local_150,0,&local_178,&local_188);
    if (local_170 != (void *)0x0) {
      operator_delete__(local_170);
      local_178 = 0;
      local_170 = (void *)0x0;
    }
    uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(&local_140,&local_150,uVar5,0,0);
  }
  if (local_180 != (void *)0x0) {
    operator_delete__(local_180);
    local_188 = 0;
    local_180 = (void *)0x0;
  }
  if (local_158 != (void *)0x0) {
    operator_delete__(local_158);
    local_160 = 0;
    local_158 = (void *)0x0;
  }
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
  if (local_128 != (void *)0x0) {
    operator_delete__(local_128);
    local_130 = 0;
    local_128 = (void *)0x0;
  }
  if (local_118 != (void *)0x0) {
    operator_delete__(local_118);
    local_120 = 0;
    local_118 = (void *)0x0;
  }
  if ((local_110[0] & 1) != 0) {
    operator_delete(local_100);
  }
LAB_00b0eb58:
  local_f8 = &PTR_FUN_027bca90;
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
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  FUN_00977ea0(auStack_f0,1);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b0ebe8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  ulong local_90;
  void *local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00e6ce7c("MENU_DIALOG_BOOSTS_PURCHASE_TITLE",0);
  thunk_FUN_00e7051c(&local_48,uVar3);
  uVar3 = FUN_00e6ce7c("MENU_DIALOG_BOOSTS_PURCHASE_BODY",0);
  thunk_FUN_00e7051c(&local_58,uVar3);
  FUN_00e70510(&local_68);
  uVar2 = FUN_00b0d110(param_1);
  FUN_00e70e18(&local_68,&DAT_01bb6d43,uVar2);
  FUN_00e70510(&local_78);
  FUN_008fa54c(&local_90,"gold");
  uVar4 = FUN_00b0cf7c(param_1,&local_90);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if ((uVar4 & 1) == 0) {
    FUN_008fa54c(&local_90,"silver");
    uVar4 = FUN_00b0cf7c(param_1,&local_90);
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((uVar4 & 1) == 0) {
      FUN_008fa54c(&local_90,"opal");
      uVar4 = FUN_00b0cf7c(param_1,&local_90);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if ((uVar4 & 1) == 0) {
        FUN_008fa54c(&local_90,"essence");
        uVar4 = FUN_00b0cf7c(param_1,&local_90);
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
        if ((uVar4 & 1) == 0) goto LAB_00b0f1fc;
        auVar8 = FUN_009580c4();
        uVar2 = 0;
        if ((auVar8._0_8_ & 1) != 0) {
          lVar5 = FUN_009580b8(auVar8._0_8_,auVar8._8_8_,0);
          uVar2 = *(undefined4 *)(lVar5 + 0x5458);
        }
        FUN_00e70e18(&local_78,"%u",uVar2);
        FUN_00e705c8(&local_90,"[BOOST_NAME]");
        FUN_00e71248(&local_58,0,&local_90,param_2 + 0x18);
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
          local_90 = 0;
          local_88 = (void *)0x0;
        }
        FUN_00e705c8(&local_90,"[UNLOCK_AMOUNT]");
        FUN_00e71248(&local_58,0,&local_90,&local_68);
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
          local_90 = 0;
          local_88 = (void *)0x0;
        }
        FUN_00e705c8(&local_90,"[UNLOCK_CURRENCY]");
        uVar3 = FUN_00e6ce7c("MENU_GENERIC_ESSENCE_NAME",0);
        FUN_00e71248(&local_58,0,&local_90,uVar3);
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
          local_90 = 0;
          local_88 = (void *)0x0;
        }
        FUN_00e705c8(&local_90,"[BALANCE_AMOUNT]");
        FUN_00e71248(&local_58,0,&local_90,&local_78);
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
          local_90 = 0;
          local_88 = (void *)0x0;
        }
        FUN_00e705c8(&local_90,"[BALANCE_CURRENCY]");
        pcVar6 = "MENU_GENERIC_ESSENCE_NAME";
      }
      else {
        auVar8 = FUN_009580c4();
        uVar2 = 0;
        if ((auVar8._0_8_ & 1) != 0) {
          lVar5 = FUN_009580b8(auVar8._0_8_,auVar8._8_8_,0);
          uVar2 = *(undefined4 *)(lVar5 + 0x545c);
        }
        FUN_00e70e18(&local_78,"%u",uVar2);
        FUN_00e705c8(&local_90,"[BOOST_NAME]");
        FUN_00e71248(&local_58,0,&local_90,param_2 + 0x18);
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
          local_90 = 0;
          local_88 = (void *)0x0;
        }
        FUN_00e705c8(&local_90,"[UNLOCK_AMOUNT]");
        FUN_00e71248(&local_58,0,&local_90,&local_68);
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
          local_90 = 0;
          local_88 = (void *)0x0;
        }
        FUN_00e705c8(&local_90,"[UNLOCK_CURRENCY]");
        uVar3 = FUN_00e6ce7c("MENU_GENERIC_OPALS_NAME",0);
        FUN_00e71248(&local_58,0,&local_90,uVar3);
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
          local_90 = 0;
          local_88 = (void *)0x0;
        }
        FUN_00e705c8(&local_90,"[BALANCE_AMOUNT]");
        FUN_00e71248(&local_58,0,&local_90,&local_78);
        if (local_88 != (void *)0x0) {
          operator_delete__(local_88);
          local_90 = 0;
          local_88 = (void *)0x0;
        }
        FUN_00e705c8(&local_90,"[BALANCE_CURRENCY]");
        pcVar6 = "MENU_GENERIC_OPALS_NAME";
      }
    }
    else {
      auVar8 = FUN_009580c4();
      uVar2 = 0;
      if ((auVar8._0_8_ & 1) != 0) {
        lVar5 = FUN_009580b8(auVar8._0_8_,auVar8._8_8_,0);
        uVar2 = *(undefined4 *)(lVar5 + 0x5454);
      }
      FUN_00e70e18(&local_78,"%u",uVar2);
      FUN_00e705c8(&local_90,"[BOOST_NAME]");
      FUN_00e71248(&local_58,0,&local_90,param_2 + 0x18);
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
        local_90 = 0;
        local_88 = (void *)0x0;
      }
      FUN_00e705c8(&local_90,"[UNLOCK_AMOUNT]");
      FUN_00e71248(&local_58,0,&local_90,&local_68);
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
        local_90 = 0;
        local_88 = (void *)0x0;
      }
      FUN_00e705c8(&local_90,"[UNLOCK_CURRENCY]");
      uVar3 = FUN_00e6ce7c("MENU_GENERIC_SILVER_NAME",0);
      FUN_00e71248(&local_58,0,&local_90,uVar3);
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
        local_90 = 0;
        local_88 = (void *)0x0;
      }
      FUN_00e705c8(&local_90,"[BALANCE_AMOUNT]");
      FUN_00e71248(&local_58,0,&local_90,&local_78);
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
        local_90 = 0;
        local_88 = (void *)0x0;
      }
      FUN_00e705c8(&local_90,"[BALANCE_CURRENCY]");
      pcVar6 = "MENU_GENERIC_SILVER_NAME";
    }
  }
  else {
    auVar8 = FUN_009580c4();
    uVar2 = 0;
    if ((auVar8._0_8_ & 1) != 0) {
      lVar5 = FUN_009580b8(auVar8._0_8_,auVar8._8_8_,0);
      uVar2 = *(undefined4 *)(lVar5 + 0x5450);
    }
    FUN_00e70e18(&local_78,"%u",uVar2);
    FUN_00e705c8(&local_90,"[BOOST_NAME]");
    FUN_00e71248(&local_58,0,&local_90,param_2 + 0x18);
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
      local_90 = 0;
      local_88 = (void *)0x0;
    }
    FUN_00e705c8(&local_90,"[UNLOCK_AMOUNT]");
    FUN_00e71248(&local_58,0,&local_90,&local_68);
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
      local_90 = 0;
      local_88 = (void *)0x0;
    }
    FUN_00e705c8(&local_90,"[UNLOCK_CURRENCY]");
    uVar3 = FUN_00e6ce7c("MENU_GENERIC_GOLD_NAME",0);
    FUN_00e71248(&local_58,0,&local_90,uVar3);
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
      local_90 = 0;
      local_88 = (void *)0x0;
    }
    FUN_00e705c8(&local_90,"[BALANCE_AMOUNT]");
    FUN_00e71248(&local_58,0,&local_90,&local_78);
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
      local_90 = 0;
      local_88 = (void *)0x0;
    }
    FUN_00e705c8(&local_90,"[BALANCE_CURRENCY]");
    pcVar6 = "MENU_GENERIC_GOLD_NAME";
  }
  uVar3 = FUN_00e6ce7c(pcVar6,0);
  FUN_00e71248(&local_58,0,&local_90,uVar3);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
LAB_00b0f1fc:
  uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00a9b9f8(&local_48,&local_58,uVar3,uVar7,&DAT_03210450,param_1,thunk_FUN_00b0fe1c,FUN_00b0fd94
               ,0);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

