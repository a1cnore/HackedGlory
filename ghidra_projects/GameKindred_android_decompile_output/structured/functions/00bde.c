// functions/00bde — 38 functions
#include "libGameKindred.h"




void FUN_00bde004(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00bde344(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00bde08c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a06d44(param_2);
  if (*(uint *)(param_2 + 8) < 5) {
    puVar4 = (&PTR_s_very_easy_027ee570)[(int)*(uint *)(param_2 + 8)];
  }
  else {
    puVar4 = &DAT_01e277f2;
  }
  uVar3 = FUN_00a06b24();
  FUN_00a06c8c(uVar3,uVar2,puVar4);
  FUN_0093a654(1);
  FUN_00f048e0(auStack_58,DAT_0313b970,0);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bde14c(uint *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *param_1;
  lVar2 = *(long *)(param_1 + 2) + (ulong)uVar1 * 0x28;
  if ((*(byte *)(lVar2 + -0x18) & 1) != 0) {
    operator_delete(*(void **)(lVar2 + -8));
    uVar1 = *param_1;
  }
  *param_1 = uVar1 - 1;
  return;
}




void FUN_00bde194(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
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
    uVar1 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar1 = uVar3;
    }
    FUN_00bde3c4(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = *param_2;
  lVar2 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x28;
  *(undefined8 *)(lVar2 + -0x20) = param_2[1];
  *(undefined8 *)(lVar2 + -0x28) = uVar5;
  FUN_008fcdb8(lVar2 + -0x18,param_2 + 2);
  return;
}




void FUN_00bde228(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00bde4a0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00bde2b0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00969248();
  if ((*(int *)(lVar1 + 0x38) < 1) && (*(char *)(param_1 + 0xa8) == '\0')) {
    return;
  }
  FUN_00bdd4d8(param_1);
  return;
}




void FUN_00bde2f4(long param_1)

{
  FUN_00bde2b0(param_1 + -0x10);
  return;
}




void FUN_00bde2fc(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ee5a8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bde340(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbde344);
  (*pcVar1)();
}




void FUN_00bde344(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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




void FUN_00bde3c4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x28);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      puVar4 = puVar2 + (ulong)*param_1 * 5;
      puVar5 = puVar1;
      do {
        uVar6 = *puVar2;
        puVar5[1] = puVar2[1];
        *puVar5 = uVar6;
        FUN_008fcdb8(puVar5 + 2,puVar2 + 2);
        puVar2 = puVar2 + 5;
        puVar5 = puVar5 + 5;
      } while (puVar2 != puVar4);
      puVar2 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar3 = (ulong)*param_1 * 0x28;
        puVar2 = puVar2 + 4;
        do {
          if ((*(byte *)(puVar2 + -2) & 1) != 0) {
            operator_delete((void *)*puVar2);
          }
          lVar3 = lVar3 + -0x28;
          puVar2 = puVar2 + 5;
        } while (lVar3 != 0);
        puVar2 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00bde4a0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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




void FUN_00bde520(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027ee6d0;
  pvVar1 = operator_new(0x12418);
  FUN_00c4a860();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0x630) = param_1;
  FUN_00bcf3c8(param_1 + 2);
  FUN_00cd51a4(param_1 + 0x13);
  FUN_00a99760(param_1 + 0x16);
  *param_1 = &PTR_FUN_027ee5e0;
  param_1[2] = &PTR_FUN_027ee638;
  param_1[0x13] = &PTR_FUN_027ee678;
  param_1[0x16] = &PTR_FUN_027ee6a8;
  FUN_00bde5ac(param_1);
  return;
}




void FUN_00bde5ac(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00cce574();
    if (*(char *)(lVar2 + 0x20) != '\0') {
      uVar6 = *(undefined8 *)(param_1 + 8);
      uVar3 = FUN_00cd6950();
      uVar4 = FUN_00cd6930();
      uVar5 = FUN_00cd6940();
      FUN_00c4ad58(uVar6,uVar3,uVar4,uVar5);
      return;
    }
  }
  return;
}




void FUN_00bde61c(undefined8 *param_1)

{
  FUN_00a997e0(param_1 + 0x16);
  FUN_00cd5224(param_1 + 0x13);
  FUN_00bca0cc(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027ee6d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bde678(long param_1)

{
  FUN_00bde61c(param_1 + -0x10);
  return;
}




void FUN_00bde680(long param_1)

{
  FUN_00bde61c(param_1 + -0x98);
  return;
}




void FUN_00bde688(long param_1)

{
  FUN_00bde61c(param_1 + -0xb0);
  return;
}




void FUN_00bde690(void *param_1)

{
  FUN_00bde61c();
  operator_delete(param_1);
  return;
}




void FUN_00bde6b4(long param_1)

{
  FUN_00bde61c((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bde6dc(long param_1)

{
  FUN_00bde61c((void *)(param_1 + -0x98));
  operator_delete((void *)(param_1 + -0x98));
  return;
}




void FUN_00bde704(long param_1)

{
  FUN_00bde61c((void *)(param_1 + -0xb0));
  operator_delete((void *)(param_1 + -0xb0));
  return;
}




void FUN_00bde72c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0 [2];
  undefined8 local_c0;
  void *local_b8;
  byte local_a8;
  void *local_98;
  byte local_90;
  void *local_80;
  undefined8 local_74;
  undefined4 local_6c;
  byte local_68;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_009580b8();
  if (*(char *)(lVar2 + 0x568c) == '\0') {
    FUN_00aff894(local_d0);
    uVar3 = FUN_00e6ce7c("MENU_MARKET_ICE_PURCHASE_POPUP_TITLE",0);
    thunk_FUN_00e7051c(&local_e0,uVar3);
    FUN_00910394(&local_c0,&local_e0);
    local_d0[0] = 0x447a000044c80000;
    local_6c = 1;
    FUN_00aff91c(local_d0,PTR_s_build___MenuPartsCommon_tga_02be3530,"popup_fill",&DAT_01bbab3f);
    local_74 = 0xffa3781effa4781e;
    uVar3 = FUN_00aa2040(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_02be9d38,local_d0);
    FUN_00cbd980(uVar3,1);
    if (local_d8 != (void *)0x0) {
      operator_delete__(local_d8);
      local_e0 = 0;
      local_d8 = (void *)0x0;
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_90 & 1) != 0) {
      operator_delete(local_80);
    }
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if (local_b8 != (void *)0x0) {
      operator_delete__(local_b8);
      local_c0 = 0;
      local_b8 = (void *)0x0;
    }
  }
  else {
    uVar3 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
    uVar4 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TEXT",0);
    uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    uVar6 = FUN_00e6ce7c("MAIN_PROFILE_LOGIN",0);
    FUN_00a9b94c(uVar3,uVar4,uVar5,uVar6,param_1,0,thunk_FUN_00bde8f0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bde8f0(void)

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




void FUN_00bde8f0(void)

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




void FUN_00bde974(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_009b8d90();
  if ((*(byte *)(lVar1 + 0xe1b8) & 1) == 0) {
    if (*(byte *)(lVar1 + 0xe1b8) >> 1 == 0) {
LAB_00bde9b4:
      FUN_00bde5ac(param_1);
      return;
    }
  }
  else if (*(long *)(lVar1 + 0xe1c0) == 0) goto LAB_00bde9b4;
  return;
}




void FUN_00bde9c4(long param_1)

{
  FUN_00bde974(param_1 + -0x98);
  return;
}




void FUN_00bde9cc(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_2 + 0x28);
  uVar2 = FUN_009b8d90();
  if (cVar1 != '\0') {
    FUN_009bb7d4(uVar2,param_2,param_2 + 0x18);
    return;
  }
  FUN_009baf98();
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
  uVar3 = FUN_00e6ce7c("MARKET_GOLD_STORE_TRANSACTION_ERROR_BODY",0);
  uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar2,uVar3,uVar4,0,0);
  return;
}




void thunk_FUN_00bde9cc(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_2 + 0x28);
  uVar2 = FUN_009b8d90();
  if (cVar1 != '\0') {
    FUN_009bb7d4(uVar2,param_2,param_2 + 0x18);
    return;
  }
  FUN_009baf98();
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
  uVar3 = FUN_00e6ce7c("MARKET_GOLD_STORE_TRANSACTION_ERROR_BODY",0);
  uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar2,uVar3,uVar4,0,0);
  return;
}




void FUN_00bdea5c(undefined8 param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  
  bVar2 = *param_2;
  uVar3 = (ulong)(bVar2 >> 1);
  __n = uVar3;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(DAT_0313df98 >> 1);
  if ((DAT_0313df98 & 1) != 0) {
    sVar1 = DAT_0313dfa0;
  }
  if (__n == sVar1) {
    pbVar7 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = param_2 + 1;
    }
    pbVar5 = DAT_0313dfa8;
    if ((DAT_0313df98 & 1) == 0) {
      pbVar5 = &DAT_0313df99;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar6 = -uVar3;
        pbVar7 = param_2;
        do {
          pbVar7 = pbVar7 + 1;
          if (*pbVar7 != *pbVar5) goto LAB_00bdeb0c;
          lVar6 = lVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (lVar6 != 0);
      }
      goto LAB_00bdec20;
    }
    if ((__n == 0) || (iVar4 = memcmp(pbVar7,pbVar5,__n), iVar4 == 0)) goto LAB_00bdec20;
  }
LAB_00bdeb0c:
  sVar1 = (ulong)(DAT_0313dfb0 >> 1);
  if ((DAT_0313dfb0 & 1) != 0) {
    sVar1 = DAT_0313dfb8;
  }
  if (__n == sVar1) {
    pbVar7 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = param_2 + 1;
    }
    pbVar5 = DAT_0313dfc0;
    if ((DAT_0313dfb0 & 1) == 0) {
      pbVar5 = &DAT_0313dfb1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar6 = -uVar3;
        pbVar7 = param_2;
        do {
          pbVar7 = pbVar7 + 1;
          if (*pbVar7 != *pbVar5) goto LAB_00bdeb8c;
          lVar6 = lVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (lVar6 != 0);
      }
      goto LAB_00bdec20;
    }
    if ((__n == 0) || (iVar4 = memcmp(pbVar7,pbVar5,__n), iVar4 == 0)) goto LAB_00bdec20;
  }
LAB_00bdeb8c:
  sVar1 = (ulong)(DAT_0313dfc8 >> 1);
  if ((DAT_0313dfc8 & 1) != 0) {
    sVar1 = DAT_0313dfd0;
  }
  if (__n != sVar1) {
    return;
  }
  pbVar7 = *(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar7 = param_2 + 1;
  }
  pbVar5 = DAT_0313dfd8;
  if ((DAT_0313dfc8 & 1) == 0) {
    pbVar5 = &DAT_0313dfc9;
  }
  if ((bVar2 & 1) == 0) {
    if (__n != 0) {
      lVar6 = -uVar3;
      do {
        param_2 = param_2 + 1;
        if (*param_2 != *pbVar5) {
          return;
        }
        lVar6 = lVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (lVar6 != 0);
    }
  }
  else if ((__n != 0) && (iVar4 = memcmp(pbVar7,pbVar5,__n), iVar4 != 0)) {
    return;
  }
LAB_00bdec20:
  FUN_00bde5ac(param_1);
  return;
}




void FUN_00bdec38(long param_1)

{
  FUN_00bdea5c(param_1 + -0xb0);
  return;
}




void FUN_00bdec40(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_009b8d90();
  if ((*(byte *)(lVar1 + 0xe1b8) & 1) == 0) {
    if (*(byte *)(lVar1 + 0xe1b8) >> 1 == 0) {
LAB_00bdec80:
      FUN_00bde5ac(param_1);
      return;
    }
  }
  else if (*(long *)(lVar1 + 0xe1c0) == 0) goto LAB_00bdec80;
  return;
}




void FUN_00bdec90(long param_1)

{
  FUN_00bdec40(param_1 + -0x10);
  return;
}




void FUN_00bdec98(undefined8 param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  lVar5 = FUN_009b8d90();
  if ((*(byte *)(lVar5 + 0xe1b8) & 1) == 0) {
    if (*(byte *)(lVar5 + 0xe1b8) >> 1 != 0) goto LAB_00bdee50;
  }
  else if (*(long *)(lVar5 + 0xe1c0) != 0) goto LAB_00bdee50;
  bVar2 = *param_2;
  uVar6 = (ulong)(bVar2 >> 1);
  __n = uVar6;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(DAT_0313dfb0 >> 1);
  if ((DAT_0313dfb0 & 1) != 0) {
    sVar1 = DAT_0313dfb8;
  }
  if (__n == sVar1) {
    pbVar9 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar9 = param_2 + 1;
    }
    pbVar8 = DAT_0313dfc0;
    if ((DAT_0313dfb0 & 1) == 0) {
      pbVar8 = &DAT_0313dfb1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar5 = -uVar6;
        pbVar9 = param_2;
        do {
          pbVar9 = pbVar9 + 1;
          if (*pbVar9 != *pbVar8) goto LAB_00bded70;
          lVar5 = lVar5 + 1;
          pbVar8 = pbVar8 + 1;
        } while (lVar5 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pbVar9,pbVar8,__n), iVar4 != 0)) goto LAB_00bded70;
    lVar5 = FUN_00cd6930();
    uVar6 = FUN_00cd6ff4();
    if ((uVar6 & 1) == 0) {
LAB_00bdee48:
      FUN_00bde72c(param_1);
      goto LAB_00bdee50;
    }
    uVar3 = FUN_00cd70a4(lVar5);
    FUN_00cd698c(uVar3 & 1);
  }
  else {
LAB_00bded70:
    sVar1 = (ulong)(DAT_0313dfc8 >> 1);
    if ((DAT_0313dfc8 & 1) != 0) {
      sVar1 = DAT_0313dfd0;
    }
    if (__n != sVar1) goto LAB_00bdee50;
    pbVar9 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar9 = param_2 + 1;
    }
    pbVar8 = DAT_0313dfd8;
    if ((DAT_0313dfc8 & 1) == 0) {
      pbVar8 = &DAT_0313dfc9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar5 = -uVar6;
        pbVar9 = param_2;
        do {
          pbVar9 = pbVar9 + 1;
          if (*pbVar9 != *pbVar8) goto LAB_00bdee50;
          lVar5 = lVar5 + 1;
          pbVar8 = pbVar8 + 1;
        } while (lVar5 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pbVar9,pbVar8,__n), iVar4 != 0)) goto LAB_00bdee50;
    lVar5 = FUN_00cd6940();
    uVar6 = FUN_00cd6ff4();
    if ((uVar6 & 1) == 0) goto LAB_00bdee48;
    uVar3 = FUN_00cd70a4(lVar5);
    FUN_00cd69b8(uVar3 & 1);
  }
  uVar7 = FUN_009b8d90();
  FUN_009bb654(uVar7,param_2,lVar5 + 0x10);
LAB_00bdee50:
  FUN_009b8d90();
  FUN_009bb45c();
  return;
}




void FUN_00bdee68(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  
  bVar2 = *param_2;
  uVar3 = (ulong)(bVar2 >> 1);
  __n = uVar3;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(DAT_0313dfb0 >> 1);
  if ((DAT_0313dfb0 & 1) != 0) {
    sVar1 = DAT_0313dfb8;
  }
  if (__n == sVar1) {
    pbVar9 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar9 = param_2 + 1;
    }
    pbVar6 = DAT_0313dfc0;
    if ((DAT_0313dfb0 & 1) == 0) {
      pbVar6 = &DAT_0313dfb1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar7 = -uVar3;
        pbVar9 = param_2;
        do {
          pbVar9 = pbVar9 + 1;
          if (*pbVar9 != *pbVar6) goto LAB_00bdef18;
          lVar7 = lVar7 + 1;
          pbVar6 = pbVar6 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pbVar9,pbVar6,__n), iVar4 != 0)) goto LAB_00bdef18;
    uVar5 = FUN_009b8d90();
    lVar7 = *(long *)(param_1 + 8);
    lVar8 = 0xc460;
  }
  else {
LAB_00bdef18:
    sVar1 = (ulong)(DAT_0313dfc8 >> 1);
    if ((DAT_0313dfc8 & 1) != 0) {
      sVar1 = DAT_0313dfd0;
    }
    if (__n != sVar1) {
      return;
    }
    pbVar9 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar9 = param_2 + 1;
    }
    pbVar6 = DAT_0313dfd8;
    if ((DAT_0313dfc8 & 1) == 0) {
      pbVar6 = &DAT_0313dfc9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar7 = -uVar3;
        do {
          param_2 = param_2 + 1;
          if (*param_2 != *pbVar6) {
            return;
          }
          lVar7 = lVar7 + 1;
          pbVar6 = pbVar6 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pbVar9,pbVar6,__n), iVar4 != 0)) {
      return;
    }
    uVar5 = FUN_009b8d90();
    lVar7 = *(long *)(param_1 + 8);
    lVar8 = 0x12260;
  }
  FUN_009bb42c(uVar5,lVar7 + lVar8);
  return;
}




undefined8 FUN_00bdefe4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00bdefec(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}




void FUN_00bdeff4(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ee6d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}

