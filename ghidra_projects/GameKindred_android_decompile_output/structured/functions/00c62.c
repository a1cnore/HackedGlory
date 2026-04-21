// functions/00c62 — 25 functions
#include "libGameKindred.h"




void thunk_FUN_00c620d0(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uStack_110;
  void *pvStack_108;
  void *pvStack_100;
  void *pvStack_f8;
  byte bStack_e8;
  void *pvStack_d8;
  byte bStack_d0;
  void *pvStack_c0;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  byte bStack_a8;
  void *pvStack_98;
  undefined8 uStack_88;
  void *pvStack_80;
  undefined8 uStack_78;
  void *pvStack_70;
  undefined8 uStack_68;
  void *pvStack_60;
  undefined8 uStack_58;
  void *pvStack_50;
  long lStack_48;
  
  lVar3 = tpidr_el0;
  lStack_48 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_009580b8();
  if ((*(char *)(lVar4 + 0x568c) == '\0') ||
     ((uVar5 = FUN_00969254(), (uVar5 & 1) != 0 &&
      (lVar4 = FUN_00969248(), 0 < *(int *)(lVar4 + 0x38))))) {
    plVar1 = (long *)(param_1 + 0x1fe58);
    uVar2 = *(uint *)(*plVar1 + 0x78);
    lVar4 = FUN_009580b8();
    if (*(uint *)(lVar4 + 0x5454) < uVar2) {
      FUN_00aff894(&uStack_110);
      uVar6 = FUN_00e6ce7c("MENU_MARKET_GLORY_PURCHASE_POPUP_TITLE",0);
      thunk_FUN_00e7051c(&uStack_58,uVar6);
      FUN_00910394(&pvStack_100,&uStack_58);
      uStack_110 = 0x447a000044c80000;
      uStack_ac = 1;
      FUN_00aff91c(&uStack_110,PTR_s_build___MenuPartsCommon_tga_02be3530,"popup_fill",&DAT_01bbe0e8
                  );
      uStack_b4 = 0xffa3781effa4781e;
      lVar4 = FUN_00aa2040(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_02be9d38,&uStack_110);
      uVar5 = FUN_00969254();
      if (((uVar5 & 1) != 0) && (lVar7 = FUN_00969248(), 0 < *(int *)(lVar7 + 0x38))) {
        *(undefined1 *)(lVar4 + 0x1874) = 0;
      }
      FUN_00cbd980(lVar4,0);
      if (pvStack_50 != (void *)0x0) {
        operator_delete__(pvStack_50);
        uStack_58 = 0;
        pvStack_50 = (void *)0x0;
      }
      if ((bStack_a8 & 1) != 0) {
        operator_delete(pvStack_98);
      }
      if ((bStack_d0 & 1) != 0) {
        operator_delete(pvStack_c0);
      }
      if ((bStack_e8 & 1) != 0) {
        operator_delete(pvStack_d8);
      }
      if (pvStack_f8 != (void *)0x0) {
        operator_delete__(pvStack_f8);
        pvStack_100 = (void *)0x0;
        pvStack_f8 = (void *)0x0;
      }
    }
    else {
      uVar6 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_TITLE",0);
      thunk_FUN_00e7051c(&uStack_58,uVar6);
      uVar6 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_MSG",0);
      thunk_FUN_00e7051c(&uStack_68,uVar6);
      FUN_00cb418c(&uStack_110,*(undefined4 *)(*plVar1 + 0x78));
      FUN_00e70570(&uStack_78,&uStack_110);
      if ((uStack_110 & 1) != 0) {
        operator_delete(pvStack_100);
      }
      lVar4 = FUN_009580b8();
      FUN_00cb418c(&uStack_110,*(undefined4 *)(lVar4 + 0x5454));
      FUN_00e70570(&uStack_88,&uStack_110);
      if ((uStack_110 & 1) != 0) {
        operator_delete(pvStack_100);
      }
      FUN_00e705c8(&uStack_110,"[HERO_NAME]");
      FUN_00e71248(&uStack_58,0,&uStack_110,*plVar1 + 0x28);
      if (pvStack_108 != (void *)0x0) {
        operator_delete__(pvStack_108);
        uStack_110 = 0;
        pvStack_108 = (void *)0x0;
      }
      FUN_00e705c8(&uStack_110,"[HERO_NAME]");
      FUN_00e71248(&uStack_68,0,&uStack_110,*plVar1 + 0x28);
      if (pvStack_108 != (void *)0x0) {
        operator_delete__(pvStack_108);
        uStack_110 = 0;
        pvStack_108 = (void *)0x0;
      }
      FUN_00e705c8(&uStack_110,"[UNLOCK_AMOUNT]");
      FUN_00e71248(&uStack_68,0,&uStack_110,&uStack_78);
      if (pvStack_108 != (void *)0x0) {
        operator_delete__(pvStack_108);
        uStack_110 = 0;
        pvStack_108 = (void *)0x0;
      }
      FUN_00e705c8(&uStack_110,"[BALANCE_AMOUNT]");
      FUN_00e71248(&uStack_68,0,&uStack_110,&uStack_88);
      if (pvStack_108 != (void *)0x0) {
        operator_delete__(pvStack_108);
        uStack_110 = 0;
        pvStack_108 = (void *)0x0;
      }
      lVar4 = FUN_00969248();
      if (*(int *)(lVar4 + 0x38) < 1) {
        uVar6 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_ACCEPT",0);
        puVar10 = (undefined8 *)FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_REJECT",0);
      }
      else {
        uVar6 = FUN_009b8d90();
        FUN_009baadc(uVar6,&DAT_0320ffa8);
        uVar6 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_ACCEPT",0);
        puVar10 = &DAT_03210450;
      }
      FUN_00a9b9f8(&uStack_58,&uStack_68,uVar6,puVar10,&DAT_03210450,param_1,thunk_FUN_00c61338,0,0)
      ;
      if (pvStack_80 != (void *)0x0) {
        operator_delete__(pvStack_80);
        uStack_88 = 0;
        pvStack_80 = (void *)0x0;
      }
      if (pvStack_70 != (void *)0x0) {
        operator_delete__(pvStack_70);
        uStack_78 = 0;
        pvStack_70 = (void *)0x0;
      }
      if (pvStack_60 != (void *)0x0) {
        operator_delete__(pvStack_60);
        uStack_68 = 0;
        pvStack_60 = (void *)0x0;
      }
      if (pvStack_50 != (void *)0x0) {
        operator_delete__(pvStack_50);
        uStack_58 = 0;
        pvStack_50 = (void *)0x0;
      }
    }
  }
  else {
    uVar6 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
    uVar8 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TEXT",0);
    uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar8,uVar9,0,0);
  }
  if (*(long *)(lVar3 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c62538(long param_1)

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
    uVar1 = *(uint *)(*(long *)(param_1 + 0x1fe58) + 0x98);
    lVar3 = FUN_009580b8();
    if (*(uint *)(lVar3 + 0x5450) < uVar1) {
      FUN_00aff894(auStack_c0);
      uVar5 = FUN_00e6ce7c("MENU_MARKET_ICE_PURCHASE_POPUP_TITLE",0);
      thunk_FUN_00e7051c(&uStack_d0,uVar5);
      FUN_00910394(&uStack_b0,&uStack_d0);
      auStack_c0[0] = 0x447a000044c80000;
      uStack_5c = 1;
      FUN_00aff91c(auStack_c0,PTR_s_build___MenuPartsCommon_tga_02be3530,"popup_fill",&DAT_01bbe0e8)
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
      FUN_00c61408(param_1);
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




void thunk_FUN_00c62738(undefined8 param_1)

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




void thunk_FUN_00c627f0(long param_1)

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
  lVar3 = *(long *)(param_1 + 0x1fe58);
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




void thunk_FUN_00c62894(long param_1)

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
  lVar3 = *(long *)(param_1 + 0x1fe58);
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




void thunk_FUN_00c62938(long param_1)

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
    FUN_008fcdb8(abStack_40,*(long *)(param_1 + 0x1fe58) + 0xb8);
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




void FUN_00c6201c(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x1fe64) - 1;
  if (uVar1 < 4) {
    FUN_00b4c404(param_1 + 0x14fb8,
                 *(undefined8 *)(*(long *)(param_1 + 0x1fe58) + (long)(int)uVar1 * 8 + 0x38));
    FUN_00c61050(param_1);
    return;
  }
  return;
}




bool FUN_00c62084(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x1fe58);
  if ((*(byte *)(lVar1 + 0x60) & 1) == 0) {
    if (*(byte *)(lVar1 + 0x60) >> 1 == 0) {
LAB_00c620b0:
      if ((*(byte *)(lVar1 + 0x80) & 1) == 0) {
        uVar2 = (ulong)(*(byte *)(lVar1 + 0x80) >> 1);
      }
      else {
        uVar2 = *(ulong *)(lVar1 + 0x88);
      }
      return uVar2 != 0;
    }
  }
  else if (*(long *)(lVar1 + 0x68) == 0) goto LAB_00c620b0;
  return true;
}




void FUN_00c620d0(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong local_110;
  void *local_108;
  void *local_100;
  void *local_f8;
  byte local_e8;
  void *local_d8;
  byte local_d0;
  void *local_c0;
  undefined8 local_b4;
  undefined4 local_ac;
  byte local_a8;
  void *local_98;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_009580b8();
  if ((*(char *)(lVar4 + 0x568c) == '\0') ||
     ((uVar5 = FUN_00969254(), (uVar5 & 1) != 0 &&
      (lVar4 = FUN_00969248(), 0 < *(int *)(lVar4 + 0x38))))) {
    plVar1 = (long *)(param_1 + 0x1fe58);
    uVar2 = *(uint *)(*plVar1 + 0x78);
    lVar4 = FUN_009580b8();
    if (*(uint *)(lVar4 + 0x5454) < uVar2) {
      FUN_00aff894(&local_110);
      uVar6 = FUN_00e6ce7c("MENU_MARKET_GLORY_PURCHASE_POPUP_TITLE",0);
      thunk_FUN_00e7051c(&local_58,uVar6);
      FUN_00910394(&local_100,&local_58);
      local_110 = 0x447a000044c80000;
      local_ac = 1;
      FUN_00aff91c(&local_110,PTR_s_build___MenuPartsCommon_tga_02be3530,"popup_fill",&DAT_01bbe0e8)
      ;
      local_b4 = 0xffa3781effa4781e;
      lVar4 = FUN_00aa2040(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_02be9d38,&local_110);
      uVar5 = FUN_00969254();
      if (((uVar5 & 1) != 0) && (lVar7 = FUN_00969248(), 0 < *(int *)(lVar7 + 0x38))) {
        *(undefined1 *)(lVar4 + 0x1874) = 0;
      }
      FUN_00cbd980(lVar4,0);
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
      if ((local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
      if ((local_e8 & 1) != 0) {
        operator_delete(local_d8);
      }
      if (local_f8 != (void *)0x0) {
        operator_delete__(local_f8);
        local_100 = (void *)0x0;
        local_f8 = (void *)0x0;
      }
    }
    else {
      uVar6 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_TITLE",0);
      thunk_FUN_00e7051c(&local_58,uVar6);
      uVar6 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_MSG",0);
      thunk_FUN_00e7051c(&local_68,uVar6);
      FUN_00cb418c(&local_110,*(undefined4 *)(*plVar1 + 0x78));
      FUN_00e70570(&local_78,&local_110);
      if ((local_110 & 1) != 0) {
        operator_delete(local_100);
      }
      lVar4 = FUN_009580b8();
      FUN_00cb418c(&local_110,*(undefined4 *)(lVar4 + 0x5454));
      FUN_00e70570(&local_88,&local_110);
      if ((local_110 & 1) != 0) {
        operator_delete(local_100);
      }
      FUN_00e705c8(&local_110,"[HERO_NAME]");
      FUN_00e71248(&local_58,0,&local_110,*plVar1 + 0x28);
      if (local_108 != (void *)0x0) {
        operator_delete__(local_108);
        local_110 = 0;
        local_108 = (void *)0x0;
      }
      FUN_00e705c8(&local_110,"[HERO_NAME]");
      FUN_00e71248(&local_68,0,&local_110,*plVar1 + 0x28);
      if (local_108 != (void *)0x0) {
        operator_delete__(local_108);
        local_110 = 0;
        local_108 = (void *)0x0;
      }
      FUN_00e705c8(&local_110,"[UNLOCK_AMOUNT]");
      FUN_00e71248(&local_68,0,&local_110,&local_78);
      if (local_108 != (void *)0x0) {
        operator_delete__(local_108);
        local_110 = 0;
        local_108 = (void *)0x0;
      }
      FUN_00e705c8(&local_110,"[BALANCE_AMOUNT]");
      FUN_00e71248(&local_68,0,&local_110,&local_88);
      if (local_108 != (void *)0x0) {
        operator_delete__(local_108);
        local_110 = 0;
        local_108 = (void *)0x0;
      }
      lVar4 = FUN_00969248();
      if (*(int *)(lVar4 + 0x38) < 1) {
        uVar6 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_ACCEPT",0);
        puVar10 = (undefined8 *)FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_REJECT",0);
      }
      else {
        uVar6 = FUN_009b8d90();
        FUN_009baadc(uVar6,&DAT_0320ffa8);
        uVar6 = FUN_00e6ce7c("HERO_HUB_DIALOG_UNLOCKHERO_SILVER_ACCEPT",0);
        puVar10 = &DAT_03210450;
      }
      FUN_00a9b9f8(&local_58,&local_68,uVar6,puVar10,&DAT_03210450,param_1,thunk_FUN_00c61338,0,0);
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
        local_88 = 0;
        local_80 = (void *)0x0;
      }
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
    }
  }
  else {
    uVar6 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
    uVar8 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TEXT",0);
    uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar8,uVar9,0,0);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c62538(long param_1)

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
    uVar1 = *(uint *)(*(long *)(param_1 + 0x1fe58) + 0x98);
    lVar3 = FUN_009580b8();
    if (*(uint *)(lVar3 + 0x5450) < uVar1) {
      FUN_00aff894(local_c0);
      uVar5 = FUN_00e6ce7c("MENU_MARKET_ICE_PURCHASE_POPUP_TITLE",0);
      thunk_FUN_00e7051c(&local_d0,uVar5);
      FUN_00910394(&local_b0,&local_d0);
      local_c0[0] = 0x447a000044c80000;
      local_5c = 1;
      FUN_00aff91c(local_c0,PTR_s_build___MenuPartsCommon_tga_02be3530,"popup_fill",&DAT_01bbe0e8);
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
      FUN_00c61408(param_1);
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




void FUN_00c62738(undefined8 param_1)

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




void FUN_00c627a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_2);
  FUN_00c6160c(param_1,1,uVar1);
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_menu_button_tap_drill_in.mp3",0,0);
  return;
}




void FUN_00c627f0(long param_1)

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
  lVar3 = *(long *)(param_1 + 0x1fe58);
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




void FUN_00c62894(long param_1)

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
  lVar3 = *(long *)(param_1 + 0x1fe58);
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




void FUN_00c62938(long param_1)

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
    FUN_008fcdb8(local_40,*(long *)(param_1 + 0x1fe58) + 0xb8);
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




void FUN_00c62a0c(long param_1)

{
  FUN_00c6160c(param_1,0,0xffffffff);
  FUN_00ad6848(param_1 + 0xe938);
  return;
}




void FUN_00c62a3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c62a70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c62aac(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  float fVar15;
  code *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027ff1b0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x38;
  param_1[0x37] = 0;
  FUN_00ed66ec(plVar2);
  FUN_00f0d160(param_1 + 0x17d);
  plVar3 = param_1 + 0x1a4;
  param_1[0x1a3] = 0;
  FUN_00f0d160(plVar3);
  FUN_00f0d160(param_1 + 0x1ca);
  plVar4 = param_1 + 0x1f0;
  FUN_00aba378(plVar4,0);
  plVar5 = param_1 + 0x67e;
  FUN_00ab6c24(plVar5,0);
  *(undefined2 *)(param_1 + 0x936) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00ed5b20(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,1);
  local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
  FUN_00ed5ab0(plVar2,&local_a8);
  lVar12 = FUN_00f136e0();
  param_1[0x37] = lVar12;
  FUN_00ed59f4(plVar2,lVar12);
  FUN_00f13ba0(param_1[0x37],0x2d,0x28,5,0);
  lVar12 = FUN_00f136e0();
  param_1[0x36] = lVar12;
  FUN_00f13fd8(param_1,lVar12);
  uVar13 = FUN_0092ea9c();
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  uVar8 = *(uint *)((long)param_1 + 0x144);
  if ((uVar8 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x144) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x1980;
    FUN_0091ada4(plVar1);
  }
  bVar11 = (uVar13 & 1) == 0;
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if (bVar11) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  }
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if (bVar11) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  FUN_00f0d378(param_1 + 0x17d,*ppuVar6);
  FUN_00f0d9b0(plVar3,1);
  FUN_00f0d378(plVar3,*ppuVar6);
  uVar14 = FUN_00e6ce7c("MENU_TALENTS_TEXT_UNDISCOVERED_DESCRIPTION",0);
  FUN_00f0d75c(plVar3,uVar14);
  FUN_00f0d378(param_1 + 0x1ca,*ppuVar7);
  FUN_00e705c8(&local_a8,"0");
  FUN_00ab703c(0x42a00000,0x42c80000,0x44228000,plVar4,0,&local_a8,&DAT_01bee7fa,&DAT_03218ef8,0);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_90 = 0;
  uStack_88 = 0;
  uVar9 = DAT_03210c64;
  local_a8 = FUN_00c62e98;
  local_98 = 0;
  local_a0 = param_1;
  local_80 = uVar9;
  FUN_009693a0(param_1 + 0x1f1,&local_a8);
  fVar15 = 1.5;
  if ((uVar13 & 1) == 0) {
    fVar15 = 1.0;
  }
  if ((*(float *)(param_1 + 0x1f9) != fVar15) || (*(float *)((long)param_1 + 0xfcc) != fVar15)) {
    *(float *)(param_1 + 0x1f9) = fVar15;
    *(float *)((long)param_1 + 0xfcc) = fVar15;
    FUN_0091ada4(plVar4);
  }
  FUN_00aba748(plVar4,"glory_icon_small");
  FUN_00ab95f4(0,plVar4);
  FUN_00ab71fc(plVar4,2);
  uVar14 = FUN_00e6ce7c("MENU_TALENTS_TEXT_UNDISCOVERED_BUTTON",0);
  FUN_00ab703c(0x41200000,0x42c80000,0x43c80000,plVar5,0,uVar14,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_a8 = FUN_00c62eb0;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  local_a0 = param_1;
  local_80 = uVar9;
  FUN_009693a0(param_1 + 0x67f,&local_a8);
  if ((*(float *)(param_1 + 0x687) != fVar15) || (*(float *)((long)param_1 + 0x343c) != fVar15)) {
    *(float *)(param_1 + 0x687) = fVar15;
    *(float *)((long)param_1 + 0x343c) = fVar15;
    FUN_0091ada4(plVar5);
  }
  if (*(long *)(lVar10 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c62e98(long param_1)

{
  if (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c62ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0xb8))();
    return;
  }
  return;
}




void FUN_00c62eb0(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c62ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
    return;
  }
  return;
}




void FUN_00c62ec8(undefined1 param_1 [16],float param_2,long param_3)

{
  FUN_00f13f08(param_1,param_2 - (*(float *)(param_3 + 0x44) + *(float *)(param_3 + 0x44)),
               param_3 + 0xc0);
  return;
}




void FUN_00c62edc(long param_1)

{
  *(undefined8 *)(param_1 + 0xd18) = 0;
  FUN_00ed5670(param_1 + 0x1c0);
  return;
}




void FUN_00c62eec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0xbe8;
  FUN_00ed5664(param_1 + 0x1c0,lVar1,1);
  FUN_00f1515c(*(undefined8 *)(param_1 + 0x1b8),lVar1,0,9);
  FUN_00f15198(*(undefined8 *)(param_1 + 0x1b8),0x14);
  uVar3 = FUN_00e6ce7c(param_2,0);
  thunk_FUN_00e7051c(&local_58,uVar3);
  FUN_00cb3124(&local_58,param_3);
  FUN_00f0d75c(lVar1,&local_58);
  FUN_00f0d9b0(lVar1,1);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c62fc8(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_3 + 0xd18) == 0) {
    lVar1 = FUN_00f136e0();
    *(long *)(param_3 + 0xd18) = lVar1;
    *(ushort *)(lVar1 + 0xc) = *(ushort *)(lVar1 + 0xc) & 0xffe0 | 9;
    *(undefined1 *)(*(long *)(param_3 + 0xd18) + 8) = DAT_03211038;
    FUN_00f15480(*(undefined8 *)(param_3 + 0x1b8),*(undefined8 *)(param_3 + 0xd18),0);
  }
  uVar2 = FUN_00ed5aa8(param_3 + 0x1c0);
  uVar2 = FUN_00c63094(uVar2,1);
  FUN_00ca4e00(param_1,param_2,uVar2,param_4,param_5,param_6);
  FUN_00f1515c(*(undefined8 *)(param_3 + 0xd18),uVar2,0,9);
  return;
}

