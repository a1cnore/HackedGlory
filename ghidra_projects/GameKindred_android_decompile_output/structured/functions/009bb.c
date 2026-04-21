// functions/009bb — 46 functions
#include "libGameKindred.h"




void FUN_009bb030(long param_1)

{
  *(undefined1 *)(param_1 + 0xe3cb) = 1;
  return;
}




void FUN_009bb040(undefined8 param_1)

{
  FUN_009baadc(param_1,&DAT_0320ffa8);
  FUN_009ba2b4(param_1,PTR_s_screen_char_select_02be3688,1);
  return;
}




void FUN_009bb080(long param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xe3c8);
  if ((bVar1 & param_2) != 0) {
    *(byte *)(param_1 + 0xe3c8) = bVar1 ^ param_2;
  }
  return;
}




void FUN_009bb0a0(long param_1)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00937f1c();
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0xb0) == 0) {
      pvVar3 = operator_new(0x398);
      FUN_00b2fea4();
      *(void **)(param_1 + 0xb0) = pvVar3;
      local_40 = FUN_00f048a4("UI::EVENT_CLOSED_CHINA_LOADING_SCREEN");
      local_68 = thunk_FUN_009b9e00;
      local_50 = 0;
      uStack_48 = 0;
      local_58 = 0;
      lStack_60 = param_1;
      FUN_009693a0((long)pvVar3 + 8,&local_68);
      if (*(long *)(param_1 + 0xb0) == 0) goto LAB_009bb16c;
    }
    uVar2 = FUN_00f02540();
    if ((uVar2 & 1) != 0) {
      FUN_00f01a4c(*(undefined8 *)(param_1 + 0xb0),1);
    }
    (**(code **)(**(long **)(param_1 + 0x70) + 0x78))
              (*(long **)(param_1 + 0x70),*(undefined8 *)(param_1 + 0xb0),1);
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x138))(0x3f000000,*(long **)(param_1 + 0xb0),1,4,1);
  }
LAB_009bb16c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009bb194(undefined8 param_1)

{
  FUN_0093a8b4();
  FUN_00ec5c9c();
  FUN_009b9e00(param_1);
  FUN_00900140(0);
  return;
}




void FUN_009bb1c4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  FUN_00b7dba0(param_1 + 0xb8,1);
  uVar1 = thunk_FUN_00ec9300();
  if (((uVar1 & 1) != 0) && (uVar1 = thunk_FUN_00ec9510(), (uVar1 & 1) == 0)) {
    thunk_FUN_00ec93b0();
    return;
  }
  lVar2 = FUN_009580b8();
  FUN_009658c8(lVar2 + 0x18);
  return;
}




void FUN_009bb208(long param_1)

{
  long lVar1;
  byte local_90 [16];
  void *local_80;
  undefined **local_78 [4];
  byte local_58;
  void *local_48;
  byte local_40;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_90,"single_player_tutorial_0");
  FUN_00a9b794(local_78,local_90,&DAT_0320ffa8);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  FUN_00f04760(*(undefined8 *)(param_1 + 0x78),local_78,1);
  local_78[0] = &PTR_FUN_027c2790;
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009bb2c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2790;
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[6]);
  return;
}




void FUN_009bb314(long param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0xa0);
  if (lVar4 == 0) {
    pvVar2 = operator_new(0x28);
    FUN_00bf112c(pvVar2,param_2);
    *(void **)(param_1 + 0xa0) = pvVar2;
    FUN_00ed4914(*(undefined8 *)(param_1 + 0x70),PTR_s_screen_talent_refund_02be36a8,
                 *(undefined8 *)((long)pvVar2 + 8));
    local_40 = DAT_03210c84;
    local_68 = FUN_009bb3fc;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 8,&local_68);
    lVar4 = *(long *)(param_1 + 0xa0);
  }
  uVar3 = FUN_00ed4748(*(undefined8 *)(lVar4 + 8));
  if ((uVar3 & 1) == 0) {
    FUN_009ba2b4(param_1,PTR_s_screen_talent_refund_02be36a8,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009bb3fc(long param_1)

{
  *(undefined1 *)(param_1 + 0xe3cc) = 1;
  return;
}




void FUN_009bb40c(long param_1)

{
  *(undefined1 *)(param_1 + 0xe3cc) = 1;
  return;
}




void FUN_009bb41c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009bb428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x80) + 0x18))();
  return;
}




void FUN_009bb42c(long param_1)

{
  FUN_00cd3db0(param_1 + 0x6738);
  FUN_00cd47c8(param_1 + 0x6738,1);
  return;
}




void FUN_009bb45c(long param_1)

{
  FUN_00cd47c8(param_1 + 0x6738,0);
  return;
}




void FUN_009bb46c(long param_1,undefined8 param_2,byte *param_3,uint param_4,ulong param_5)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte local_78 [8];
  ulong local_70;
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((param_5 & 1) == 0) {
LAB_009bb4e0:
    uVar3 = FUN_0092e8e0();
    if ((uVar3 & 1) == 0) {
      plVar5 = *(long **)(param_1 + 0x78);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x168))(plVar5,param_2,param_3,1);
      }
    }
    else {
      FUN_008fcdb8(local_60,param_2);
      uVar3 = (ulong)(*param_3 >> 1);
      if ((*param_3 & 1) != 0) {
        uVar3 = *(ulong *)(param_3 + 8);
      }
      if (uVar3 != 0) {
        FUN_0090dab8(local_78,"/",param_3);
        uVar3 = (ulong)(local_78[0] >> 1);
        pvVar1 = (void *)((ulong)local_78 | 1);
        if ((local_78[0] & 1) != 0) {
          uVar3 = local_70;
          pvVar1 = local_68;
        }
        FUN_0090de84(local_60,pvVar1,uVar3);
        if ((local_78[0] & 1) != 0) {
          operator_delete(local_68);
        }
      }
      pvVar1 = (void *)((ulong)local_60 | 1);
      if ((local_60[0] & 1) != 0) {
        pvVar1 = local_50;
      }
      FUN_00aa25b0(pvVar1,param_4 & 1);
      if ((local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
    }
  }
  else {
    uVar3 = FUN_009e5a5c();
    if ((uVar3 & 1) == 0) {
LAB_009bb4b8:
      lVar4 = FUN_009580b8();
      if ((*(char *)(lVar4 + 0x568c) == '\0') ||
         ((uVar3 = FUN_00969254(), (uVar3 & 1) != 0 &&
          (lVar4 = FUN_00969248(), 0 < *(int *)(lVar4 + 0x38))))) goto LAB_009bb4e0;
      uVar6 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
      pcVar7 = "MARKET_MUST_REGISTER_DIALOG_TEXT";
    }
    else {
      FUN_009e5a50();
      uVar3 = FUN_009e63ac();
      if ((uVar3 & 1) != 0) goto LAB_009bb4b8;
      uVar6 = FUN_00e6ce7c("GOVERNMENT_ID_PURCHASE_MUST_REGISTER_TITLE",0);
      pcVar7 = "GOVERNMENT_ID_PURCHASE_MUST_REGISTER_TEXT";
    }
    uVar8 = FUN_00e6ce7c(pcVar7,0);
    uVar9 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar8,uVar9,param_1,thunk_FUN_009bbc7c);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_009bbc7c(void)

{
  long lVar1;
  undefined8 uVar2;
  byte abStack_40 [16];
  void *pvStack_30;
  long lStack_28;
  
  uVar2 = DAT_0312ede0;
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
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




void FUN_009bb654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  byte local_d0 [16];
  void *local_c0;
  byte local_b8;
  void *local_a8;
  byte local_a0;
  void *local_90;
  byte local_88;
  void *local_78;
  byte local_70;
  void *local_60;
  byte local_58;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00cce574();
  FUN_00cce198(local_d0,uVar2,param_3);
  FUN_009bb728(param_1,param_2,local_d0);
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009bb728(long param_1,undefined8 param_2,byte *param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x90);
    if ((*(byte *)(lVar2 + 0xe18) & 1) == 0) {
      if (*(byte *)(lVar2 + 0xe18) >> 1 != 0) {
        return;
      }
    }
    else if (*(long *)(lVar2 + 0xe20) != 0) {
      return;
    }
    uVar1 = (ulong)(*param_3 >> 1);
    if ((*param_3 & 1) != 0) {
      uVar1 = *(ulong *)(param_3 + 8);
    }
    if (uVar1 != 0) {
      FUN_008fce60(lVar2 + 0xe18,param_2);
      FUN_008fce60(*(long *)(param_1 + 0x90) + 0xe30,param_3);
      FUN_009ba2b4(param_1,PTR_s_screen_rewards_02be3698,1);
      return;
    }
  }
  return;
}




void FUN_009bb7d4(long param_1,byte *param_2,undefined8 param_3)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  byte *__s1;
  byte *__s2;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x90);
  bVar2 = *param_2;
  bVar3 = *(byte *)(lVar6 + 0xe18);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar6 + 0xe20);
  }
  if (__n == sVar1) {
    __s1 = *(byte **)(param_2 + 0x10);
    __s2 = *(byte **)(lVar6 + 0xe28);
    if ((bVar2 & 1) == 0) {
      __s1 = param_2 + 1;
    }
    if ((bVar3 & 1) == 0) {
      __s2 = (byte *)(lVar6 + 0xe19);
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          param_2 = param_2 + 1;
          if (*param_2 != *__s2) {
            return;
          }
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) {
      return;
    }
    FUN_00b8b97c(lVar6,param_3);
    return;
  }
  return;
}




void FUN_009bb89c(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  byte *__s1;
  byte *__s2;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x90);
  bVar2 = *param_2;
  bVar3 = *(byte *)(lVar7 + 0xe18);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar7 + 0xe20);
  }
  if (__n == sVar1) {
    __s1 = *(byte **)(param_2 + 0x10);
    __s2 = *(byte **)(lVar7 + 0xe28);
    if ((bVar2 & 1) == 0) {
      __s1 = param_2 + 1;
    }
    if ((bVar3 & 1) == 0) {
      __s2 = (byte *)(lVar7 + 0xe19);
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar6 = -(ulong)(bVar2 >> 1);
        do {
          param_2 = param_2 + 1;
          if (*param_2 != *__s2) {
            return;
          }
          lVar6 = lVar6 + 1;
          __s2 = __s2 + 1;
        } while (lVar6 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) {
      return;
    }
    uVar5 = FUN_00ed4748(lVar7);
    if ((uVar5 & 1) != 0) {
      FUN_009ba2b4(param_1,PTR_s_screen_main_hub_02be3690,1);
      return;
    }
  }
  return;
}




void FUN_009bb978(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (uVar1 = FUN_00ed4748(*(undefined8 *)(*(long *)(param_1 + 0xa0) + 8)), (uVar1 & 1) != 0)) {
    FUN_009ba2b4(param_1,PTR_s_screen_main_hub_02be3690,1);
  }
  lVar2 = FUN_009e80b8();
  if (lVar2 != 0) {
    uVar3 = FUN_009e80b8();
    FUN_009e8824(uVar3,param_2);
    return;
  }
  return;
}




void FUN_009bb9e0(long param_1)

{
  FUN_00b8cf9c(*(undefined8 *)(param_1 + 0x98));
  return;
}




void FUN_009bb9e8(undefined8 param_1)

{
  FUN_009ba2b4(param_1,PTR_s_screen_talent_upgrade_02be36a0,1);
  return;
}




void FUN_009bb9fc(undefined8 param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,"vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/glory_for_ice");
  FUN_009bb46c(param_1,local_40,&DAT_0320ffa8,0,0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009bba7c(undefined8 param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,"vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/mystery_chests");
  FUN_009bb46c(param_1,local_40,&DAT_0320ffa8,0,0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009bbafc(undefined8 param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,"vainglory://Market/MENU_MARKET_TAB_NAME_FREE");
  FUN_009bb46c(param_1,local_40,&DAT_0320ffa8,0,0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009bbb7c(undefined8 param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,"vainglory://Market/MENU_MARKET_TAB_NAME_MARKET");
  FUN_009bb46c(param_1,local_40,&DAT_0320ffa8,0,0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009bbbfc(undefined8 param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,"vainglory://Market/MENU_MARKET_TAB_NAME_TALENTS");
  FUN_009bb46c(param_1,local_40,&DAT_0320ffa8,0,0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009bbc7c(void)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  uVar2 = DAT_0312ede0;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
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




void FUN_009bbd00(void)

{
  return;
}




void FUN_009bbd04(void)

{
  return;
}




void FUN_009bbd08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2790;
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  operator_delete(param_1);
  return;
}




bool FUN_009bbd58(undefined8 param_1,int param_2)

{
  return DAT_0313378c == param_2;
}




void FUN_009bbd70(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_009bbe04(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}




void thunk_FUN_009bb314(long param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  code *pcStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0xa0);
  if (lVar4 == 0) {
    pvVar2 = operator_new(0x28);
    FUN_00bf112c(pvVar2,param_2);
    *(void **)(param_1 + 0xa0) = pvVar2;
    FUN_00ed4914(*(undefined8 *)(param_1 + 0x70),PTR_s_screen_talent_refund_02be36a8,
                 *(undefined8 *)((long)pvVar2 + 8));
    uStack_40 = DAT_03210c84;
    pcStack_68 = FUN_009bb3fc;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    lStack_60 = param_1;
    FUN_009693a0(*(long *)(*(long *)(param_1 + 0xa0) + 8) + 8,&pcStack_68);
    lVar4 = *(long *)(param_1 + 0xa0);
  }
  uVar3 = FUN_00ed4748(*(undefined8 *)(lVar4 + 8));
  if ((uVar3 & 1) == 0) {
    FUN_009ba2b4(param_1,PTR_s_screen_talent_refund_02be36a8,1);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009bbe04(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      do {
        uVar5 = puVar2[2];
        lVar3 = lVar3 + -0x20;
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 4;
        puVar2 = puVar2 + 4;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_009bbe90(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        uVar5 = param_3[2];
        param_2[3] = param_3[3];
        param_2[2] = uVar5;
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_009bbf08(undefined8 param_1,int *param_2)

{
  if (*param_2 == 2) {
    FUN_009ba2b4(param_1,PTR_s_screen_main_hub_02be3690,1);
    return;
  }
  return;
}




undefined8 FUN_009bbf30(undefined8 param_1)

{
  FUN_009b8db0();
  return param_1;
}




void FUN_009bbf54(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009bbf5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009bbf60(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_009bbf84(long param_1)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009bbf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_009bbf98(void)

{
  return;
}




bool FUN_009bbf9c(void)

{
  return DAT_0312ede8 != 0;
}




undefined8 FUN_009bbfb0(void)

{
  return DAT_0312ede8;
}




void FUN_009bbfbc(uint param_1)

{
  ulong uVar1;
  
  if (DAT_0312ede8 != 0) {
    FUN_00ceace8();
    uVar1 = FUN_00ceae88();
    if ((uVar1 & 1) != 0) {
      FUN_009bc004(DAT_0312ede8,param_1 & 1);
      return;
    }
  }
  return;
}

