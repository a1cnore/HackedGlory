// functions/00bf5 — 53 functions
#include "libGameKindred.h"




void FUN_00bf5088(long param_1,long param_2)

{
  FUN_00bf5278(param_1 + 0x20,param_2 + 0x28);
  FUN_00bf4fe4(param_1 + -0x10,param_1 + 0x20);
  return;
}




void FUN_00bf50bc(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = FUN_00e84e5c(param_2);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_00c6d11c(*(undefined8 *)(param_1 + 8),param_2 + 0x48);
    if ((uVar2 & 1) != 0) {
      iVar1 = *(int *)(param_2 + 0x28);
      if (iVar1 == -0x16) {
        uVar5 = FUN_00e6ce7c("MENU_DIALOG_BOOST_CANT_AFFORD_TITLE",0);
        pcVar4 = "MENU_DIALOG_BOOST_CANT_AFFORD";
      }
      else {
        if (iVar1 == 0) {
          FUN_00c6d22c(*(undefined8 *)(param_1 + 8),param_2 + 0x48);
          lVar3 = FUN_009580b8();
          FUN_009658c8(lVar3 + 0x18);
          return;
        }
        uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
        if (iVar1 == -0x18) {
          pcVar4 = "MENU_DIALOG_SKU_UNAVAILABLE";
        }
        else {
          pcVar4 = "MENU_DIALOG_PURCHASE_FAILED";
        }
      }
      uVar6 = FUN_00e6ce7c(pcVar4,0);
      uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00a9b8b8(uVar5,uVar6,uVar7,0,0);
      return;
    }
  }
  return;
}




void FUN_00bf51c8(long param_1)

{
  FUN_00bf50bc(param_1 + -0x10);
  return;
}




void FUN_00bf51d0(void)

{
  FUN_00e6ce7c("INVENTORY_BOOSTS_TAB_TITLE",0);
  return;
}




void FUN_00bf51e0(void)

{
  FUN_00e6ce7c("INVENTORY_BOOSTS_TAB_TITLE",0);
  return;
}




void FUN_00bf51f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f1ad8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf5234(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f1ad8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bf5278(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    FUN_009512b0(param_1,1);
    FUN_00950d18(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar4 = *(long *)(param_1 + 2);
      lVar5 = lVar3 + (ulong)*param_2 * 0x38;
      do {
        FUN_008fcdb8(lVar4,lVar3);
        uVar6 = *(undefined8 *)(lVar3 + 0x28);
        *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
        *(undefined8 *)(lVar4 + 0x28) = uVar6;
        puVar1 = (undefined8 *)(lVar3 + 0x20);
        uVar6 = *(undefined8 *)(lVar3 + 0x18);
        lVar3 = lVar3 + 0x38;
        *(undefined8 *)(lVar4 + 0x20) = *puVar1;
        *(undefined8 *)(lVar4 + 0x18) = uVar6;
        lVar4 = lVar4 + 0x38;
      } while (lVar3 != lVar5);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_00bf5314(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027f1f68;
  pvVar2 = operator_new(0xc48);
  FUN_00c6e61c();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0xb8) = param_1;
  FUN_00948cd8(param_1 + 2);
  param_1[5] = &PTR_FUN_027f1f30;
  FUN_00e83560(param_1 + 6);
  *param_1 = &PTR_FUN_027f1af8;
  param_1[2] = &PTR_FUN_027f1b30;
  param_1[6] = &PTR_FUN_027f1f00;
  param_1[5] = &PTR_FUN_027f1ec8;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_00bf5408(param_1);
  FUN_00a07af0();
  FUN_00a07ed8();
  lVar3 = FUN_00a07af0();
  local_58 = 0;
  pcStack_40 = thunk_FUN_00bf56dc;
  puStack_50 = param_1;
  local_48 = param_1;
  FUN_00be1490(lVar3 + 0x18,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf5408(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong local_50;
  undefined8 *local_48;
  code *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar3 = (undefined8 *)FUN_00ce9af4();
  local_50 = 0;
  local_48 = (undefined8 *)0x0;
  plVar6 = (long *)*puVar3;
  lVar4 = *plVar6;
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    do {
      if (*(char *)(lVar4 + 8) != '\0') {
        FUN_00be1a9c(&local_50,plVar6);
      }
      plVar6 = plVar6 + 1;
      lVar4 = *plVar6;
    } while (lVar4 != 0);
    uVar5 = local_50 & 0xffffffff;
  }
  local_40 = FUN_00ce9c44;
  FUN_00be1edc(local_48,local_48 + uVar5,&local_40);
  puVar3 = local_48;
  if ((int)local_50 != 0) {
    do {
      puVar7 = puVar3 + 1;
      FUN_00c6ea5c(*(undefined8 *)(param_1 + 8),*puVar3);
      puVar3 = puVar7;
    } while (puVar7 != local_48 + (local_50 & 0xffffffff));
  }
  uVar2 = FUN_00bf5674();
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  if (local_48 != (undefined8 *)0x0) {
    operator_delete__(local_48);
    local_50 = 0;
    local_48 = (undefined8 *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bf54f0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027f1af8;
  param_1[2] = &PTR_FUN_027f1b30;
  param_1[6] = &PTR_FUN_027f1f00;
  param_1[5] = &PTR_FUN_027f1ec8;
  lVar2 = FUN_00a07af0();
  lVar4 = (ulong)*(uint *)(lVar2 + 0x18) << 5;
  lVar1 = *(long *)(lVar2 + 0x20);
  do {
    lVar3 = lVar1;
    if (lVar4 == 0) goto LAB_00bf5568;
    lVar4 = lVar4 + -0x20;
    lVar1 = lVar3 + 0x20;
  } while (*(undefined8 **)(lVar3 + 8) != param_1);
  FUN_00be15b0((uint *)(lVar2 + 0x18),lVar3);
LAB_00bf5568:
  FUN_00e835e0(param_1 + 6);
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR_FUN_027f1f68;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf55b0(long param_1)

{
  FUN_00bf54f0(param_1 + -0x10);
  return;
}




void FUN_00bf55b8(long param_1)

{
  FUN_00bf54f0(param_1 + -0x28);
  return;
}




void FUN_00bf55c0(long param_1)

{
  FUN_00bf54f0(param_1 + -0x30);
  return;
}




void FUN_00bf55c8(void *param_1)

{
  FUN_00bf54f0();
  operator_delete(param_1);
  return;
}




void FUN_00bf55ec(long param_1)

{
  FUN_00bf54f0((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bf5614(long param_1)

{
  FUN_00bf54f0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00bf563c(long param_1)

{
  FUN_00bf54f0((void *)(param_1 + -0x30));
  operator_delete((void *)(param_1 + -0x30));
  return;
}




undefined8 FUN_00bf5664(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00bf566c(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




int FUN_00bf5674(void)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  long *plVar6;
  
  puVar2 = (undefined8 *)FUN_00cc75b0();
  plVar6 = (long *)*puVar2;
  if (*plVar6 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    do {
      uVar3 = FUN_00cce580();
      if (((uVar3 & 1) != 0) && (*(int *)(*plVar6 + 0x20) != 0)) {
        uVar4 = FUN_00a07af0();
        uVar1 = FUN_00a07f2c(uVar4,*plVar6);
        iVar5 = iVar5 + (uVar1 & 1);
      }
      plVar6 = plVar6 + 1;
    } while (*plVar6 != 0);
  }
  return iVar5;
}




void FUN_00bf56dc(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  iVar2 = FUN_00bf5674();
  if (iVar1 == iVar2) {
    return;
  }
  FUN_00c6e9b4(*(undefined8 *)(param_1 + 8));
  FUN_00bf5408(param_1);
  return;
}




void FUN_00bf5720(long param_1)

{
  FUN_00c6e9b4(*(undefined8 *)(param_1 + 8));
  FUN_00c6e7d8(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bf5748(long param_1)

{
  FUN_00c6e9b4(*(undefined8 *)(param_1 + -0x28));
  FUN_00c6e7d8(*(undefined8 *)(param_1 + -0x28));
  return;
}




void FUN_00bf5770(void)

{
  FUN_00e6ce7c("INVENTORY_BLUEPRINT_TAB_TITLE",0);
  return;
}




void FUN_00bf5780(void)

{
  FUN_00e6ce7c("INVENTORY_BLUEPRINT_TAB_TITLE",0);
  return;
}




void FUN_00bf5790(void)

{
  return;
}




void FUN_00bf5794(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbf5798);
  (*pcVar1)();
}




undefined8 * FUN_00bf5798(void)

{
  return &DAT_03210450;
}




void FUN_00bf57a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f1f68;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf57e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f1f68;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void thunk_FUN_00bf56dc(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  iVar2 = FUN_00bf5674();
  if (iVar1 == iVar2) {
    return;
  }
  FUN_00c6e9b4(*(undefined8 *)(param_1 + 8));
  FUN_00bf5408(param_1);
  return;
}




void FUN_00bf5830(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  code *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027f23a0;
  pvVar2 = operator_new(0x2b0);
  FUN_00c6f9f8();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0x148) = param_1;
  puVar4 = param_1 + 2;
  *puVar4 = &PTR___cxa_pure_virtual_027f2380;
  FUN_00948cd8(param_1 + 3);
  *param_1 = &PTR_FUN_027f1f88;
  param_1[3] = &PTR_FUN_027f1fe8;
  *puVar4 = &PTR_FUN_027f1fc8;
  param_1[6] = param_2;
  puVar5 = param_1 + 7;
  *puVar5 = &PTR_FUN_027d9d98;
  pvVar2 = operator_new(0x670);
  FUN_00c38bc0();
  param_1[8] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0x648) = puVar5;
  FUN_00bd7114(param_1 + 9);
  *puVar5 = &PTR_FUN_027d9d30;
  param_1[9] = &PTR_FUN_027d9d60;
  *(undefined2 *)(param_1 + 10) = 0;
  FUN_00c6fe54(param_1[1],param_1[8]);
  FUN_00c6ff3c(param_1[1],param_2);
  FUN_00c70058(param_1[1],puVar4);
  lVar3 = FUN_00a07af0();
  if (lVar3 != 0) {
    lVar3 = FUN_00a07af0();
    local_68 = 0;
    pcStack_50 = thunk_FUN_00bf5c8c;
    puStack_60 = param_1;
    local_58 = param_1;
    FUN_00be1490(lVar3 + 0x38,&local_68);
    lVar3 = FUN_00a07af0();
    local_68 = 0;
    pcStack_50 = thunk_FUN_00bf5d48;
    puStack_60 = param_1;
    local_58 = param_1;
    FUN_00be1490(lVar3 + 0x28,&local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf59b0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027f1f88;
  param_1[3] = &PTR_FUN_027f1fe8;
  param_1[2] = &PTR_FUN_027f1fc8;
  lVar2 = FUN_00a07af0();
  lVar4 = (ulong)*(uint *)(lVar2 + 0x28) << 5;
  lVar1 = *(long *)(lVar2 + 0x30);
  do {
    lVar3 = lVar1;
    if (lVar4 == 0) goto LAB_00bf5a18;
    lVar4 = lVar4 + -0x20;
    lVar1 = lVar3 + 0x20;
  } while (*(undefined8 **)(lVar3 + 8) != param_1);
  FUN_00be15b0((uint *)(lVar2 + 0x28),lVar3);
LAB_00bf5a18:
  lVar2 = FUN_00a07af0();
  lVar4 = (ulong)*(uint *)(lVar2 + 0x38) << 5;
  lVar1 = *(long *)(lVar2 + 0x40);
  do {
    lVar3 = lVar1;
    if (lVar4 == 0) goto LAB_00bf5a48;
    lVar4 = lVar4 + -0x20;
    lVar1 = lVar3 + 0x20;
  } while (*(undefined8 **)(lVar3 + 8) != param_1);
  FUN_00be15b0((uint *)(lVar2 + 0x38),lVar3);
LAB_00bf5a48:
  param_1[6] = 0;
  FUN_00bd7128(param_1 + 9);
  param_1[7] = &PTR_FUN_027d9d98;
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 8))();
  }
  param_1[8] = 0;
  FUN_00948d58(param_1 + 3);
  *param_1 = &PTR_FUN_027f23a0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf5ab8(long param_1)

{
  FUN_00bf59b0(param_1 + -0x18);
  return;
}




void FUN_00bf5ac0(void *param_1)

{
  FUN_00bf59b0();
  operator_delete(param_1);
  return;
}




void FUN_00bf5ae4(long param_1)

{
  FUN_00bf59b0((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}




void FUN_00bf5b0c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x50) = 1;
  uVar2 = FUN_00a07af0();
  FUN_008fa54c(local_40,**(undefined8 **)(param_1 + 0x30));
  FUN_00a08438(uVar2,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf5b8c(long param_1)

{
  FUN_00bf5b0c(param_1 + -0x10);
  return;
}




void FUN_00bf5b94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a07af0();
  FUN_008fa54c(local_50,**(undefined8 **)(param_1 + 0x30));
  FUN_00a0846c(uVar2,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  *(undefined1 *)(param_1 + 0x51) = 1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf5c1c(long param_1)

{
  FUN_00bf5b94(param_1 + -0x10);
  return;
}




void FUN_00bf5c24(long param_1)

{
  FUN_00c6fe68(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bf5c2c(long param_1)

{
  FUN_00c6fe68(*(undefined8 *)(param_1 + -0x10));
  return;
}




void FUN_00bf5c34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_009580b8();
  FUN_00c6feac(uVar2,*(undefined4 *)(lVar1 + 0x5458));
  return;
}




void FUN_00bf5c60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + -0x10);
  lVar1 = FUN_009580b8();
  FUN_00c6feac(uVar2,*(undefined4 *)(lVar1 + 0x5458));
  return;
}




void FUN_00bf5c8c(long param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x50) != '\0') {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = FUN_00a084a8(param_2);
    FUN_00c6feac(uVar4,uVar3);
    FUN_008fa54c(local_50,**(undefined8 **)(param_1 + 0x30));
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
    FUN_0090d008(pvVar1,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x20),1);
    FUN_00c70060(*(undefined8 *)(param_1 + 8));
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf5d48(long param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte local_238 [16];
  void *local_228;
  byte local_220 [16];
  void *local_210;
  undefined1 auStack_200 [440];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00a07fb0(param_2,*(undefined8 *)(param_1 + 0x30));
  if (((uVar4 & 1) != 0) && (*(char *)(param_1 + 0x51) != '\0')) {
    FUN_00b63fc0(auStack_200);
    FUN_008fa54c(local_220,**(undefined8 **)(param_1 + 0x30));
    FUN_00caeb04(auStack_200,local_220);
    if ((local_220[0] & 1) != 0) {
      operator_delete(local_210);
    }
    FUN_00f048e0(local_220,DAT_0313375c,auStack_200);
    FUN_00f04760(*(undefined8 *)(param_1 + 8),local_220,1);
    FUN_00c70060(*(undefined8 *)(param_1 + 8));
    FUN_008fa54c(local_238,**(undefined8 **)(param_1 + 0x30));
    pvVar1 = (void *)((ulong)local_238 | 1);
    if ((local_238[0] & 1) != 0) {
      pvVar1 = local_228;
    }
    FUN_009035a4(pvVar1,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x20),1);
    if ((local_238[0] & 1) != 0) {
      operator_delete(local_228);
    }
    FUN_0096910c(auStack_200);
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar3 = FUN_00a084a8(param_2);
  FUN_00c6feac(uVar5,uVar3);
  *(undefined1 *)(param_1 + 0x51) = 0;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf5e8c(undefined8 param_1,long param_2)

{
  if (*(undefined8 **)(param_2 + 0x30) != (undefined8 *)0x0) {
    FUN_008fa54c(param_1,**(undefined8 **)(param_2 + 0x30));
    return;
  }
  FUN_008fcdb8(param_1,&DAT_0320ffa8);
  return;
}




void FUN_00bf5eac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f23a0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf5ef0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f23a0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void thunk_FUN_00bf5c8c(long param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x50) != '\0') {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = FUN_00a084a8(param_2);
    FUN_00c6feac(uVar4,uVar3);
    FUN_008fa54c(abStack_50,**(undefined8 **)(param_1 + 0x30));
    pvVar1 = (void *)((ulong)abStack_50 | 1);
    if ((abStack_50[0] & 1) != 0) {
      pvVar1 = pvStack_40;
    }
    FUN_0090d008(pvVar1,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x20),1);
    FUN_00c70060(*(undefined8 *)(param_1 + 8));
    if ((abStack_50[0] & 1) != 0) {
      operator_delete(pvStack_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bf5d48(long param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte abStack_238 [16];
  void *pvStack_228;
  byte abStack_220 [16];
  void *pvStack_210;
  undefined1 auStack_200 [440];
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00a07fb0(param_2,*(undefined8 *)(param_1 + 0x30));
  if (((uVar4 & 1) != 0) && (*(char *)(param_1 + 0x51) != '\0')) {
    FUN_00b63fc0(auStack_200);
    FUN_008fa54c(abStack_220,**(undefined8 **)(param_1 + 0x30));
    FUN_00caeb04(auStack_200,abStack_220);
    if ((abStack_220[0] & 1) != 0) {
      operator_delete(pvStack_210);
    }
    FUN_00f048e0(abStack_220,DAT_0313375c,auStack_200);
    FUN_00f04760(*(undefined8 *)(param_1 + 8),abStack_220,1);
    FUN_00c70060(*(undefined8 *)(param_1 + 8));
    FUN_008fa54c(abStack_238,**(undefined8 **)(param_1 + 0x30));
    pvVar1 = (void *)((ulong)abStack_238 | 1);
    if ((abStack_238[0] & 1) != 0) {
      pvVar1 = pvStack_228;
    }
    FUN_009035a4(pvVar1,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x20),1);
    if ((abStack_238[0] & 1) != 0) {
      operator_delete(pvStack_228);
    }
    FUN_0096910c(auStack_200);
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar3 = FUN_00a084a8(param_2);
  FUN_00c6feac(uVar5,uVar3);
  *(undefined1 *)(param_1 + 0x51) = 0;
  if (*(long *)(lVar2 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf5f3c(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027f27c0;
  pvVar2 = operator_new(0xff0);
  FUN_00c701a8();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0xb8) = param_1;
  FUN_00948cd8(param_1 + 2);
  param_1[7] = 0;
  *param_1 = &PTR_FUN_027f23c0;
  param_1[2] = &PTR_FUN_027f23f0;
  param_1[5] = &PTR_FUN_027f2788;
  puVar4 = param_1 + 6;
  *puVar4 = 0;
  lVar3 = FUN_00aa4e1c();
  FUN_00bf626c(puVar4,lVar3 + 0x450);
  FUN_00c70a7c(param_1[1],puVar4);
  lVar3 = FUN_00aa4e1c();
  uStack_50 = 0;
  pcStack_40 = FUN_00bf62d8;
  local_58 = param_1;
  local_48 = param_1;
  FUN_009e4694(lVar3 + 0x18,&local_58);
  lVar3 = FUN_00aa4e1c();
  uStack_50 = 0;
  pcStack_40 = FUN_00bf62d8;
  local_58 = param_1;
  local_48 = param_1;
  FUN_009e4694(lVar3 + 0x28,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

