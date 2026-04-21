// functions/00b52 — 7 functions
#include "libGameKindred.h"




void FUN_00b52358(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte local_2c8 [16];
  void *local_2b8;
  undefined **local_2b0;
  undefined1 auStack_2a8 [16];
  byte local_298;
  void *local_288;
  undefined1 auStack_280 [48];
  byte local_250;
  void *local_240;
  undefined8 local_238;
  void *local_230;
  undefined8 local_228;
  void *local_220;
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [408];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 == -0x18) {
    uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    pcVar4 = "MENU_DIALOG_SKU_UNAVAILABLE";
  }
  else if (iVar1 == -0x16) {
    uVar8 = FUN_00e6ce7c("MENU_DIALOG_HERO_CANT_AFFORD_TITLE",0);
    pcVar4 = "MENU_DIALOG_HERO_CANT_AFFORD";
  }
  else {
    if (iVar1 == 0) {
      FUN_00b63fc0(auStack_210);
      if ((*(byte *)(param_3 + 0xa8) & 1) == 0) {
        lVar7 = param_3 + 0xa9;
      }
      else {
        lVar7 = *(long *)(param_3 + 0xb8);
      }
      FUN_00cae8fc(auStack_210,lVar7);
      lVar7 = FUN_00969248();
      if (0 < *(int *)(lVar7 + 0x38)) {
        FUN_00910394(auStack_1f0,&DAT_03210450);
        if ((*(byte *)(param_3 + 0xa8) & 1) == 0) {
          param_3 = param_3 + 0xa9;
        }
        else {
          param_3 = *(long *)(param_3 + 0xb8);
        }
        FUN_00b53d38(param_1,param_3);
        FUN_00969248();
        FUN_00968cb4();
      }
      uVar8 = FUN_009b8d90();
      FUN_009bb41c(uVar8,auStack_210);
      lVar7 = FUN_00969248();
      if (*(int *)(lVar7 + 0x38) < 1) {
        FUN_00975578(&local_2b0);
        uVar9 = FUN_0096bf40(param_2 + 0x48,&local_2b0);
        if ((uVar9 & 1) != 0) {
          lVar7 = *(long *)(param_2 + 0x58);
          if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
            lVar7 = param_2 + 0x49;
          }
          uVar3 = FUN_00cab944(auStack_280);
          uVar8 = FUN_00cab978(auStack_280);
          FUN_008fa54c(local_2c8,uVar8);
          FUN_00901e18(lVar7,uVar3,local_2c8);
          if ((local_2c8[0] & 1) != 0) {
            operator_delete(local_2b8);
          }
        }
        local_2b0 = &PTR_FUN_027bca90;
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
        if ((local_250 & 1) != 0) {
          operator_delete(local_240);
        }
        if ((local_298 & 1) != 0) {
          operator_delete(local_288);
        }
        FUN_00977ea0(auStack_2a8,1);
      }
      FUN_008ff254();
      FUN_0096910c(auStack_210);
      goto LAB_00b525d0;
    }
    lVar7 = FUN_00969248();
    if (0 < *(int *)(lVar7 + 0x38)) {
      *(undefined1 *)(param_1 + 0x9cb8) = 1;
      goto LAB_00b525d0;
    }
    if (*(int *)(param_2 + 0x28) == -0x17) {
      uVar8 = FUN_00e6ce7c("MENU_DIALOG_HERO_ALREADY_OWNED_TITLE",0);
      pcVar4 = "MENU_DIALOG_HERO_ALREADY_OWNED";
    }
    else {
      uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
      pcVar4 = "MENU_DIALOG_PURCHASE_FAILED";
    }
  }
  uVar5 = FUN_00e6ce7c(pcVar4,0);
  uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar8,uVar5,uVar6,0,0);
LAB_00b525d0:
  lVar7 = FUN_009580b8();
  FUN_009658c8(lVar7 + 0x18);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b5262c(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 == -0x18) {
    uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    pcVar5 = "MENU_DIALOG_SKU_UNAVAILABLE";
  }
  else if (iVar1 == -0x16) {
    uVar3 = FUN_00e6ce7c("MENU_DIALOG_HERO_CANT_AFFORD_TITLE",0);
    pcVar5 = "MENU_DIALOG_HERO_CANT_AFFORD";
  }
  else {
    if (iVar1 == 0) {
      if (((*(byte *)(param_1 + 0x2c34) >> 2 & 1) != 0) &&
         ((*(int *)(param_1 + 0x4204) << 1) >> 0x10 != (int)*(short *)(param_1 + 0x2c28))) {
        uVar3 = FUN_00e6ce7c("MENU_MARKET_BOOST_PURCHASE_SUCCESSFUL_BODY",0);
        thunk_FUN_00e7051c(&local_48,uVar3);
        FUN_00e705c8(&local_58,"[BOOST_NAME]");
        FUN_00e71248(&local_48,0,&local_58,param_3 + 0x18);
        if (local_50 != (void *)0x0) {
          operator_delete__(local_50);
          local_58 = 0;
          local_50 = (void *)0x0;
        }
        uVar3 = FUN_00e6ce7c("MENU_MARKET_BOOST_PURCHASE_SUCCESSFUL_TITLE",0);
        uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b9f8(uVar3,&local_48,uVar4,&DAT_03210450,&DAT_03210450,0,0,0,0);
        if (local_40 != (void *)0x0) {
          operator_delete__(local_40);
          local_48 = 0;
          local_40 = (void *)0x0;
        }
      }
      goto LAB_00b527f8;
    }
    lVar7 = FUN_00969248();
    if (0 < *(int *)(lVar7 + 0x38)) {
      *(undefined1 *)(param_1 + 0x9cb8) = 1;
      goto LAB_00b527f8;
    }
    uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    pcVar5 = "MENU_DIALOG_PURCHASE_FAILED";
  }
  uVar4 = FUN_00e6ce7c(pcVar5,0);
  uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar3,uVar4,uVar6,0,0);
LAB_00b527f8:
  lVar7 = FUN_009580b8();
  FUN_009658c8(lVar7 + 0x18);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b5282c(long param_1,long param_2,undefined8 param_3,byte *param_4,int *param_5)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  byte local_100 [16];
  void *local_f0;
  undefined **local_e8;
  void *local_e0;
  void *local_d8;
  byte local_d0;
  void *local_c0;
  undefined1 auStack_b8 [48];
  byte local_88;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 < -0x16) {
    if (iVar1 == -0x18) {
      uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
      pcVar5 = "MENU_DIALOG_SKU_UNAVAILABLE";
    }
    else if (iVar1 == -0x17) {
      uVar4 = FUN_00e6ce7c("MENU_DIALOG_ITEM_ALREADY_OWNED_TITLE",0);
      pcVar5 = "MENU_DIALOG_ITEM_ALREADY_OWNED";
    }
    else {
LAB_00b528bc:
      lVar9 = FUN_00969248();
      if (0 < *(int *)(lVar9 + 0x38)) {
        *(undefined1 *)(param_1 + 0x9cb8) = 1;
        goto LAB_00b52b48;
      }
      uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
      pcVar5 = "MENU_DIALOG_PURCHASE_FAILED";
    }
  }
  else {
    if (iVar1 != -0x16) {
      if (iVar1 != 0) goto LAB_00b528bc;
      if ((*param_4 & 1) == 0) {
        if (*param_4 >> 1 == 0) goto LAB_00b529a0;
LAB_00b52924:
        if (*param_5 == 0) goto LAB_00b529a0;
        uVar4 = FUN_009b8d90();
        FUN_008fa54c(&local_e8,"purchaseBundle");
        FUN_009bb654(uVar4,&local_e8,param_4);
        if (((ulong)local_e8 & 1) != 0) {
          operator_delete(local_d8);
        }
        uVar4 = FUN_009b8d90();
        FUN_008fa54c(&local_e8,"purchaseBundle");
        FUN_009bb7d4(uVar4,&local_e8,param_5);
        if (((ulong)local_e8 & 1) != 0) {
          operator_delete(local_d8);
        }
      }
      else {
        if (*(long *)(param_4 + 8) != 0) goto LAB_00b52924;
LAB_00b529a0:
        uVar4 = FUN_00e6ce7c("MENU_MARKET_BUNDLE_PURCHASE_SUCCESSFUL_BODY",0);
        thunk_FUN_00e7051c(&local_e8,uVar4);
        uVar4 = FUN_00e6ce7c("MENU_MARKET_BUNDLE_PURCHASE_SUCCESSFUL_TITLE",0);
        uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b9f8(uVar4,&local_e8,uVar7,&DAT_03210450,&DAT_03210450,0,0,0,0);
        if (local_e0 != (void *)0x0) {
          operator_delete__(local_e0);
          local_e8 = (undefined **)0x0;
          local_e0 = (void *)0x0;
        }
      }
      FUN_00975578(&local_e8);
      uVar6 = FUN_0096bf40(param_2 + 0x48,&local_e8);
      if ((uVar6 & 1) != 0) {
        lVar9 = *(long *)(param_2 + 0x58);
        if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
          lVar9 = param_2 + 0x49;
        }
        uVar3 = FUN_00cab944(auStack_b8);
        uVar4 = FUN_00cab978(auStack_b8);
        FUN_008fa54c(local_100,uVar4);
        FUN_009022d8(lVar9,uVar3,local_100,param_5);
        if ((local_100[0] & 1) != 0) {
          operator_delete(local_f0);
        }
      }
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
      if ((local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
      FUN_00977ea0(&local_e0,1);
      goto LAB_00b52b48;
    }
    uVar4 = FUN_00e6ce7c("MENU_DIALOG_HERO_CANT_AFFORD_TITLE",0);
    pcVar5 = "MENU_DIALOG_HERO_CANT_AFFORD";
  }
  uVar7 = FUN_00e6ce7c(pcVar5,0);
  uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar4,uVar7,uVar8,0,0);
LAB_00b52b48:
  lVar9 = FUN_009580b8();
  FUN_009658c8(lVar9 + 0x18);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b52b80(long param_1,long param_2,byte *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  byte *pbVar9;
  byte local_200 [16];
  void *local_1f0;
  long local_68;
  code *pcStack_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)(param_2 + 0x28);
  if (iVar2 < -0x16) {
    if (iVar2 == -0x1a) {
      uVar4 = FUN_00e6ce7c("MENU_DIALOG_TITLE_PREVIOUS_TIER_REQUIRED",0);
      pcVar5 = "MENU_DIALOG_SKIN_PREREQ_NOT_MET";
    }
    else {
      if (iVar2 != -0x18) goto LAB_00b52cc0;
      uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
      pcVar5 = "MENU_DIALOG_SKU_UNAVAILABLE";
    }
  }
  else if (iVar2 == -0x16) {
    uVar4 = FUN_00e6ce7c("MENU_DIALOG_SKIN_CANT_AFFORD_BUY_TITLE",0);
    pcVar5 = "MENU_DIALOG_SKIN_CANT_AFFORD_BUY";
  }
  else {
    if (iVar2 == 0) {
      lVar8 = FUN_00969248();
      if (*(int *)(lVar8 + 0x38) < 1) {
        FUN_00cc7e2c(local_200,param_3);
        pbVar9 = *(byte **)(param_3 + 0x10);
        lVar8 = param_2 + 0x49;
        if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
          lVar8 = *(long *)(param_2 + 0x58);
        }
        lVar1 = param_2 + 0x61;
        if ((*(byte *)(param_2 + 0x60) & 1) != 0) {
          lVar1 = *(long *)(param_2 + 0x70);
        }
        if ((*param_3 & 1) == 0) {
          pbVar9 = param_3 + 1;
        }
        FUN_00903170(lVar8,lVar1,pbVar9,*(undefined4 *)(param_3 + 0xa0),local_200);
        if ((local_200[0] & 1) != 0) {
          operator_delete(local_1f0);
        }
      }
      FUN_00b63fc0(local_200);
      FUN_00caeb04(local_200,param_3);
      pcStack_60 = thunk_FUN_00b55380;
      local_68 = param_1;
      uVar4 = FUN_009b8d90();
      FUN_009bb41c(uVar4,local_200);
      FUN_00969248();
      FUN_00968710();
      FUN_008ff284();
      lVar8 = FUN_00a07af0();
      if (lVar8 != 0) {
        uVar4 = FUN_00a07af0();
        FUN_00a085e0(uVar4,param_3);
      }
      FUN_0096910c(local_200);
      goto LAB_00b52d50;
    }
LAB_00b52cc0:
    lVar8 = FUN_00969248();
    if (0 < *(int *)(lVar8 + 0x38)) {
      *(undefined1 *)(param_1 + 0x9cb8) = 1;
      goto LAB_00b52d50;
    }
    if (*(int *)(param_2 + 0x28) == -0x17) {
      uVar4 = FUN_00e6ce7c("MENU_DIALOG_SKIN_ALREADY_OWNED_TITLE",0);
      pcVar5 = "MENU_DIALOG_SKIN_ALREADY_OWNED";
    }
    else {
      uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
      pcVar5 = "MENU_DIALOG_PURCHASE_FAILED";
    }
  }
  uVar6 = FUN_00e6ce7c(pcVar5,0);
  uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar4,uVar6,uVar7,0,0);
LAB_00b52d50:
  lVar8 = FUN_009580b8();
  FUN_009658c8(lVar8 + 0x18);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b52dd4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00969248();
  if (0 < *(int *)(lVar2 + 0x38)) {
    FUN_00969248();
    FUN_00968710();
    uVar3 = FUN_00aa0104();
    FUN_00aa0770(uVar3,7);
    FUN_00f048e0(auStack_48,DAT_03133778,0);
    FUN_00f04760(param_1,auStack_48,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b52e64(long param_1)

{
  FUN_00b51f60(param_1 + -0x2c68);
  return;
}




void FUN_00b52e70(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte local_78 [16];
  void *local_68;
  ulong local_60 [2];
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = 0;
  uStack_40 = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_50 = (void *)0x0;
  FUN_00b51d1c(param_1 + 0x78,&local_48,local_60);
  if ((int)local_48 == 0) {
    uVar3 = FUN_00e6ce7c("MAIN_PROFILE_REG_STATUS_SUCCESS",0);
    uVar4 = FUN_00e6ce7c("VIDEO_ADS_SUCCESS_2",0);
    uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b9f8(uVar3,uVar4,uVar5,&DAT_03210450,&DAT_03210450,0,0,0,0);
  }
  else {
    uVar3 = FUN_009b8d90();
    FUN_008fa54c(local_78,"purchaseBundle");
    FUN_009bb654(uVar3,local_78,local_60);
    if ((local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    uVar3 = FUN_009b8d90();
    FUN_008fa54c(local_78,"purchaseBundle");
    FUN_009bb7d4(uVar3,local_78,&local_48);
    if ((local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
  }
  lVar1 = param_1 + 0x49;
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x58);
  }
  FUN_008fa54c(local_78,&DAT_01e277f2);
  FUN_009022d8(lVar1,0,local_78,&local_48);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  FUN_008fefd4(&local_48,1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

