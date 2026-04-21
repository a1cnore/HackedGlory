// functions/00caf — 10 functions
#include "libGameKindred.h"




int FUN_00caf080(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00a01a90(&local_38,2);
  if ((int)local_38 == 0) {
    iVar5 = 0;
    iVar2 = 0;
    if (local_30 == (void *)0x0) goto LAB_00caf104;
  }
  else {
    uVar3 = 0;
    iVar5 = 0;
    do {
      lVar4 = *(long *)((long)local_30 + uVar3 * 8);
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0xd8) != '\0')) {
        iVar5 = iVar5 + (*(byte *)(lVar4 + 0xd9) ^ 1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (local_38 & 0xffffffff));
  }
  operator_delete__(local_30);
  local_38 = 0;
  local_30 = (void *)0x0;
  iVar2 = iVar5;
LAB_00caf104:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}




void FUN_00caf12c(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00caf27c();
  lVar3 = FUN_00caf2d4(param_1);
  if ((iVar2 < 0) || (lVar3 == 0)) {
    *(uint *)((long)param_2 + 0x1f74) = *(uint *)((long)param_2 + 0x1f74) & 0xfffffffb;
    (**(code **)(*param_2 + 0x180))(param_2);
    uVar4 = FUN_00e6ce7c("MARKET_GOLD_BUNDLE_BUY_UNAVAILABLE",0);
    FUN_00ab7498(param_2,uVar4);
    FUN_00b09454(param_2,0);
  }
  else {
    FUN_00e70510(&local_58);
    FUN_00e70e18(&local_58,&DAT_01bb6d43,iVar2);
    FUN_00ab7498(param_2,&local_58);
    FUN_00aba748(param_2,lVar3);
    *(uint *)((long)param_2 + 0x1f74) = *(uint *)((long)param_2 + 0x1f74) | 4;
    (**(code **)(*param_2 + 0x180))(param_2);
    FUN_00b09454(param_2,1);
    if ((*(int *)(param_1 + 0x28) != 0) || (*(int *)(param_1 + 0x2c) != 0)) {
      local_60 = 0x42dc000042dc0000;
      FUN_00aba790(param_2,&local_60);
    }
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00caf27c(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_00cab8b4((int *)(param_1 + 0x18));
  if (((uVar2 & 1) == 0) ||
     ((((iVar1 = *(int *)(param_1 + 0x18), iVar1 == 0 &&
        (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) &&
       (iVar1 = *(int *)(param_1 + 0x20), iVar1 == 0)) &&
      ((iVar1 = *(int *)(param_1 + 0x28), iVar1 == 0 &&
       (iVar1 = *(int *)(param_1 + 0x2c), iVar1 == 0)))))) {
    iVar1 = -1;
  }
  return iVar1;
}




char * FUN_00caf2d4(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00cab8b4((int *)(param_1 + 0x18));
  if ((uVar1 & 1) != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      return "ice_icon_small";
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      return "glory_icon_small";
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      return "opal_icon_small";
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      return "rareKey_icon_small";
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      return "epicKey_icon_small";
    }
  }
  return (char *)0x0;
}




void FUN_00caf368(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00cab8b4((int *)(param_1 + 0x18));
  if ((uVar2 & 1) != 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        if (*(int *)(param_1 + 0x20) == 0) {
          if (*(int *)(param_1 + 0x28) == 0) {
            if (*(int *)(param_1 + 0x2c) == 0) goto LAB_00caf488;
            lVar3 = FUN_009580b8();
            FUN_00b1ad28(param_2,*(undefined4 *)(lVar3 + 0x5464));
            pcVar4 = "epicKey_icon_small";
          }
          else {
            lVar3 = FUN_009580b8();
            FUN_00b1ad28(param_2,*(undefined4 *)(lVar3 + 0x5460));
            pcVar4 = "rareKey_icon_small";
          }
        }
        else {
          lVar3 = FUN_009580b8();
          FUN_00b1ad28(param_2,*(undefined4 *)(lVar3 + 0x545c));
          pcVar4 = "opal_icon_small";
        }
      }
      else {
        lVar3 = FUN_009580b8();
        FUN_00b1ad28(param_2,*(undefined4 *)(lVar3 + 0x5454));
        pcVar4 = "glory_icon_small";
      }
    }
    else {
      lVar3 = FUN_009580b8();
      FUN_00b1ad28(param_2,*(undefined4 *)(lVar3 + 0x5450));
      pcVar4 = "ice_icon_small";
    }
    FUN_008fa54c(local_50,pcVar4);
    FUN_00b1acf0(param_2,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
LAB_00caf488:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00caf4b4(void)

{
  FUN_009b8d90();
  FUN_009bba7c();
  return;
}




void FUN_00caf4c8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0 [2];
  undefined8 local_a0;
  void *local_98;
  byte local_88;
  void *local_78;
  byte local_70;
  void *local_60;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  byte local_48;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00aff894(local_b0);
  uVar2 = FUN_00e6ce7c("MENU_MARKET_GLORY_PURCHASE_POPUP_TITLE",0);
  thunk_FUN_00e7051c(&local_c0,uVar2);
  FUN_00910394(&local_a0,&local_c0);
  local_b0[0] = 0x447a000044c80000;
  local_4c = 1;
  FUN_00aff91c(local_b0,PTR_s_build___MenuPartsCommon_tga_02be3530,"popup_fill",&DAT_0313d124);
  local_54 = DAT_0313d0fc;
  uStack_50 = DAT_0313d10c;
  uVar2 = FUN_00aa2040(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_02be9d38,local_b0);
  FUN_00cbd980(uVar2,0);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = 0;
    local_b8 = (void *)0x0;
  }
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00caf5f8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0 [2];
  undefined8 local_a0;
  void *local_98;
  byte local_88;
  void *local_78;
  byte local_70;
  void *local_60;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  byte local_48;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00aff894(local_b0);
  uVar2 = FUN_00e6ce7c("MENU_MARKET_ICE_PURCHASE_POPUP_TITLE",0);
  thunk_FUN_00e7051c(&local_c0,uVar2);
  FUN_00910394(&local_a0,&local_c0);
  local_b0[0] = 0x447a000044c80000;
  local_4c = 0;
  FUN_00aff91c(local_b0,PTR_s_build___MenuPartsCommon_tga_02be3530,"popup_fill",&DAT_0313d124);
  local_54 = DAT_0313d0fc;
  uStack_50 = DAT_0313d10c;
  uVar2 = FUN_00aa2040(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_02be9d38,local_b0);
  FUN_00cbd980(uVar2,1);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = 0;
    local_b8 = (void *)0x0;
  }
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00caf724(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      uVar2 = FUN_00e6ce7c("MENU_DIALOG_CANT_AFFORD",0);
      thunk_FUN_00e7051c(&local_58,uVar2);
      uVar2 = FUN_00e6ce7c("MENU_DIALOG_CANT_AFFORD_TITLE",0);
      thunk_FUN_00e7051c(&local_68,uVar2);
      FUN_00e70510(&local_78);
      FUN_00e70510(&local_88);
      FUN_00e70510(&local_98);
      FUN_00e70510(&local_a8);
      if (*(int *)(param_1 + 0x20) == 0) {
        pcVar4 = (code *)0x0;
      }
      else {
        FUN_00e70e18(&local_78,&DAT_01bb6d43);
        lVar3 = FUN_009580b8();
        FUN_00e70e18(&local_88,&DAT_01bb6d43,*(undefined4 *)(lVar3 + 0x545c));
        uVar2 = FUN_00e6ce7c("MENU_DIALOG_OPALS",0);
        FUN_00910394(&local_a8,uVar2);
        uVar2 = FUN_00e6ce7c("MARKET_DIALOG_GET_OPALS",0);
        FUN_00910394(&local_98,uVar2);
        pcVar4 = FUN_00caf4b4;
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        FUN_00e70e18(&local_78,&DAT_01bb6d43);
        lVar3 = FUN_009580b8();
        FUN_00e70e18(&local_88,&DAT_01bb6d43,*(undefined4 *)(lVar3 + 0x5458));
        uVar2 = FUN_00e6ce7c("MENU_DIALOG_ESSENCE",0);
        FUN_00910394(&local_a8,uVar2);
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        FUN_00e70e18(&local_78,&DAT_01bb6d43);
        lVar3 = FUN_009580b8();
        FUN_00e70e18(&local_88,&DAT_01bb6d43,*(undefined4 *)(lVar3 + 0x5460));
        uVar2 = FUN_00e6ce7c("MENU_DIALOG_SEASONAL_KEYS",0);
        FUN_00910394(&local_a8,uVar2);
        FUN_00e6ce7c("MARKET_DIALOG_GET_SEASONAL_KEYS",0);
      }
      FUN_00e705c8(&local_b8,"[CURRENCY_TYPE]");
      FUN_00e71248(&local_68,0,&local_b8,&local_a8);
      if (local_b0 != (void *)0x0) {
        operator_delete__(local_b0);
        local_b8 = 0;
        local_b0 = (void *)0x0;
      }
      FUN_00e705c8(&local_b8,"[ITEM_NAME]");
      FUN_00e71248(&local_58,0,&local_b8,param_2);
      if (local_b0 != (void *)0x0) {
        operator_delete__(local_b0);
        local_b8 = 0;
        local_b0 = (void *)0x0;
      }
      FUN_00e705c8(&local_b8,"[UNLOCK_AMOUNT]");
      FUN_00e71248(&local_58,0,&local_b8,&local_78);
      if (local_b0 != (void *)0x0) {
        operator_delete__(local_b0);
        local_b8 = 0;
        local_b0 = (void *)0x0;
      }
      FUN_00e705c8(&local_b8,"[BALANCE_AMOUNT]");
      FUN_00e71248(&local_58,0,&local_b8,&local_88);
      if (local_b0 != (void *)0x0) {
        operator_delete__(local_b0);
        local_b8 = 0;
        local_b0 = (void *)0x0;
      }
      FUN_00e705c8(&local_b8,"[CURRENCY_TYPE]");
      FUN_00e713f0(&local_58,0,&local_b8,&local_a8);
      if (local_b0 != (void *)0x0) {
        operator_delete__(local_b0);
        local_b8 = 0;
        local_b0 = (void *)0x0;
      }
      uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00a9b9f8(&local_68,&local_58,uVar2,&local_98,&DAT_03210450,0,0,pcVar4,0);
      if (local_a0 != (void *)0x0) {
        operator_delete__(local_a0);
        local_a8 = 0;
        local_a0 = (void *)0x0;
      }
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
        local_98 = 0;
        local_90 = (void *)0x0;
      }
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
    else {
      FUN_00caf4c8();
    }
  }
  else {
    FUN_00caf5f8();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cafac0(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  byte local_168 [16];
  void *local_158;
  byte local_150 [8];
  ulong local_148;
  void *local_140;
  byte local_138 [16];
  void *local_128;
  byte local_120 [16];
  void *local_110;
  undefined4 local_108;
  undefined4 local_104;
  char *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  byte local_e8;
  void *local_d8;
  byte local_d0;
  void *local_c0;
  byte local_b8;
  void *local_a8;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (((int)param_1[2] == 4) && (FUN_009369b0(param_2,(int)param_1[1]), (int)param_1[1] != 0)) {
    lVar13 = 0;
    uVar11 = 0;
    do {
      lVar12 = *param_1;
      memset(local_168,0,0x60);
      lVar1 = lVar12 + lVar13;
      local_100 = "id";
      local_f0 = 0x100005;
      local_f8 = 2;
      plVar6 = (long *)FUN_008feca4(lVar1,&local_100);
      if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
      FUN_008fa54c(&local_100,plVar6);
      FUN_008fce60(local_168,&local_100);
      if (((ulong)local_100 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_ec,local_f0));
      }
      local_100 = "type";
      local_f0 = 0x100005;
      local_f8 = 4;
      plVar6 = (long *)FUN_008feca4(lVar1,&local_100);
      if ((*(byte *)((long)plVar6 + 0x12) >> 6 & 1) == 0) {
        plVar6 = (long *)*plVar6;
      }
      FUN_008fa54c(&local_100,plVar6);
      FUN_008fce60(local_150,&local_100);
      if (((ulong)local_100 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_ec,local_f0));
      }
      local_100 = "amount";
      local_f0 = 0x100005;
      local_f8 = 6;
      puVar7 = (undefined4 *)FUN_008feca4(lVar1,&local_100);
      local_108 = *puVar7;
      lVar8 = FUN_008fd190(lVar1,"originalId");
      plVar6 = (long *)(lVar12 + lVar13);
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar8) {
        puVar9 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_100 = "originalId";
        local_f0 = 0x100005;
        local_f8 = 10;
        lVar12 = FUN_008feca4(lVar1,&local_100);
        puVar9 = (undefined8 *)&DAT_01e277f2;
        if ((*(byte *)(lVar12 + 0x12) >> 4 & 1) != 0) {
          local_100 = "originalId";
          local_f0 = 0x100005;
          local_f8 = 10;
          puVar9 = (undefined8 *)FUN_008feca4(lVar1,&local_100);
          if ((*(byte *)((long)puVar9 + 0x12) >> 6 & 1) == 0) {
            puVar9 = (undefined8 *)*puVar9;
          }
        }
      }
      FUN_008fa54c(&local_100,puVar9);
      FUN_008fce60(local_138,&local_100);
      if (((ulong)local_100 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_ec,local_f0));
      }
      lVar12 = FUN_008fd190(lVar1,"originalType");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar12) {
        puVar9 = (undefined8 *)&DAT_01e277f2;
      }
      else {
        local_100 = "originalType";
        local_f0 = 0x100005;
        local_f8 = 0xc;
        lVar12 = FUN_008feca4(lVar1,&local_100);
        puVar9 = (undefined8 *)&DAT_01e277f2;
        if ((*(byte *)(lVar12 + 0x12) >> 4 & 1) != 0) {
          local_100 = "originalType";
          local_f0 = 0x100005;
          local_f8 = 0xc;
          puVar9 = (undefined8 *)FUN_008feca4(lVar1,&local_100);
          if ((*(byte *)((long)puVar9 + 0x12) >> 6 & 1) == 0) {
            puVar9 = (undefined8 *)*puVar9;
          }
        }
      }
      FUN_008fa54c(&local_100,puVar9);
      FUN_008fce60(local_120,&local_100);
      if (((ulong)local_100 & 1) != 0) {
        operator_delete((void *)CONCAT44(uStack_ec,local_f0));
      }
      lVar12 = FUN_008fd190(lVar1,"originalAmount");
      if (*plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 == lVar12) {
        uVar4 = 0;
      }
      else {
        local_100 = "originalAmount";
        local_f0 = 0x100005;
        local_f8 = 0xe;
        lVar12 = FUN_008feca4(lVar1,&local_100);
        uVar4 = 0;
        if ((*(byte *)(lVar12 + 0x11) >> 2 & 1) != 0) {
          local_100 = "originalAmount";
          local_f0 = 0x100005;
          local_f8 = 0xe;
          puVar7 = (undefined4 *)FUN_008feca4(lVar1,&local_100);
          uVar4 = *puVar7;
        }
      }
      local_104 = uVar4;
      FUN_00a87660(param_2,local_168);
      uVar2 = (ulong)(local_150[0] >> 1);
      if ((local_150[0] & 1) != 0) {
        uVar2 = local_148;
      }
      if (((uVar2 == 6) &&
          (iVar5 = FUN_0090d610(local_150,0,0xffffffffffffffff,"talent",6), iVar5 == 0)) &&
         (lVar12 = FUN_008fd190(lVar1,"talentData"),
         *plVar6 + (ulong)*(uint *)(plVar6 + 1) * 0x30 != lVar12)) {
        memset(&local_100,0,0x60);
        local_88 = "talentData";
        local_78 = 0x100005;
        local_80 = 10;
        uVar10 = FUN_008feca4(lVar1,&local_88);
        FUN_00eb35e8(uVar10,&local_100);
        uVar10 = FUN_00cdbb18();
        FUN_00cdd418(uVar10,&local_100);
        if ((local_b8 & 1) != 0) {
          operator_delete(local_a8);
        }
        if ((local_d0 & 1) != 0) {
          operator_delete(local_c0);
        }
        if ((local_e8 & 1) != 0) {
          operator_delete(local_d8);
        }
        if (((ulong)local_100 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_ec,local_f0));
        }
      }
      uVar2 = (ulong)(local_150[0] >> 1);
      if ((local_150[0] & 1) != 0) {
        uVar2 = local_148;
      }
      if ((uVar2 == 4) &&
         (iVar5 = FUN_0090d610(local_150,0,0xffffffffffffffff,&DAT_01b9230f,4), iVar5 == 0)) {
        uVar10 = FUN_00a07af0();
        FUN_00a085e0(uVar10,local_168);
      }
      uVar2 = (ulong)(local_150[0] >> 1);
      if ((local_150[0] & 1) != 0) {
        uVar2 = local_148;
      }
      if ((uVar2 == 9) &&
         (iVar5 = FUN_0090d610(local_150,0,0xffffffffffffffff,"blueprint",9), iVar5 == 0)) {
        uVar10 = FUN_00a07af0();
        FUN_00a08610(uVar10,local_168);
      }
      if ((local_120[0] & 1) != 0) {
        operator_delete(local_110);
      }
      if ((local_138[0] & 1) != 0) {
        operator_delete(local_128);
      }
      if ((local_150[0] & 1) != 0) {
        operator_delete(local_140);
      }
      if ((local_168[0] & 1) != 0) {
        operator_delete(local_158);
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 0x18;
    } while (uVar11 < *(uint *)(param_1 + 1));
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

