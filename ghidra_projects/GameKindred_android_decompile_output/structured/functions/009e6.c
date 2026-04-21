// functions/009e6 — 28 functions
#include "libGameKindred.h"




void FUN_009e624c(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined **local_a8;
  undefined8 local_a0;
  undefined5 uStack_98;
  undefined3 local_93;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  byte local_80 [16];
  void *local_70;
  undefined4 local_68;
  char local_64;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e84e74(param_1 + 0xa0);
  if ((uVar3 & 1) != 0) {
    pthread_mutex_lock(DAT_0312fcf8);
    uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0xbd);
    uStack_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0xbd) >> 0x18);
    uStack_90 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0xb5) >> 0x18);
    local_a0 = *(undefined8 *)(param_1 + 0xa8);
    uStack_98 = (undefined5)*(undefined8 *)(param_1 + 0xb0);
    local_93 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0xb0) >> 0x28);
    local_a8 = &PTR_FUN_027b99b0;
    FUN_008fcdb8(local_80,param_1 + 200);
    local_64 = *(char *)(param_1 + 0xe4);
    local_68 = *(undefined4 *)(param_1 + 0xe0);
    FUN_008fcdb8(local_60,param_1 + 0xe8);
    local_a0 = 0;
    uStack_98 = 0;
    local_93 = 0;
    uStack_90 = 0;
    uStack_8b = 0;
    pthread_mutex_unlock(DAT_0312fcf8);
    uVar3 = FUN_00e84e5c(&local_a8);
    if ((uVar3 & 1) != 0) {
      bVar1 = *(byte *)(param_1 + 0x100) & 0xfc;
      if (local_64 == '\0') {
        *(byte *)(param_1 + 0x100) = bVar1 | 1;
        FUN_009e63dc(param_1);
      }
      else {
        *(byte *)(param_1 + 0x100) = bVar1 | 2;
      }
      FUN_009e652c(param_1 + 0x30,param_1);
    }
    local_a8 = &PTR_FUN_027b99b0;
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    FUN_00e84dd8(&local_a8);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e6384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_00e82da8(param_2,param_3,param_4,param_5,param_6,param_1 + 0x40);
  return;
}




void FUN_009e63a4(long param_1)

{
  FUN_00e82df0(param_1 + 0xa0);
  return;
}




bool FUN_009e63ac(long param_1)

{
  return (*(byte *)(param_1 + 0x100) & 3) == 2;
}




undefined8 FUN_009e63c0(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x100) & 3) == 1) {
    uVar1 = FUN_009e5a5c();
    return uVar1;
  }
  return 0;
}




void FUN_009e63dc(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((~*(byte *)(param_1 + 0x100) & 0xc) == 0) {
    lVar3 = FUN_009580b8();
    if (*(char *)(lVar3 + 0x568c) == '\0') {
      lVar3 = FUN_00969248();
      bVar5 = 0 < *(int *)(lVar3 + 0x38);
      goto LAB_009e6424;
    }
  }
  bVar5 = true;
LAB_009e6424:
  if ((*(byte *)(param_1 + 0x100) & 3) == 1) {
    uVar2 = FUN_009e5a5c();
    if (!bVar5 && ((uVar2 ^ 0xffffffff) & 1) == 0) {
      uVar4 = FUN_00e6ce7c("GOVERNMENT_ID_REGISTER_REMINDER_DIALOG_TITLE",0);
      thunk_FUN_00e7051c(&local_48,uVar4);
      uVar4 = FUN_00e6ce7c("GOVERNMENT_ID_REGISTER_REMINDER_DIALOG_MSG",0);
      thunk_FUN_00e7051c(&local_58,uVar4);
      uVar4 = FUN_00e6ce7c("GOVERNMENT_ID_REGISTER_REMINDER_DIALOG_BUTTON",0);
      thunk_FUN_00e7051c(&local_68,uVar4);
      FUN_00a9b8b8(&local_48,&local_58,&local_68,param_1,thunk_FUN_00cbaca8);
      *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) & 0xfb;
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
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e652c(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_009e659c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_009e5a5c();
  if ((uVar1 & 1) != 0) {
    *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) | 4;
    FUN_00e82df0(param_1 + 0xa0);
    return;
  }
  return;
}




void FUN_009e65dc(long param_1)

{
  *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) | 8;
  FUN_009e63dc();
  return;
}




void FUN_009e65ec(long param_1)

{
  *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | 8;
  FUN_009e63dc(param_1 + -0x18);
  return;
}




void FUN_009e6604(undefined8 param_1)

{
  FUN_009e5f8c();
  FUN_009e624c(param_1);
  return;
}




void FUN_009e6628(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  byte local_60 [16];
  void *local_50;
  undefined1 auStack_48 [8];
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_60);
  local_40 = local_60;
  lVar2 = FUN_009e7bc4(param_1,local_60,&DAT_01b99bb6,&local_40,auStack_48);
  *(undefined4 *)(lVar2 + 0x38) = param_3;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_009e66b8(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  byte local_60 [16];
  void *local_50;
  undefined1 auStack_48 [8];
  undefined1 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_008fa54c(local_60);
  local_40 = local_60;
  lVar3 = FUN_009e7bc4(param_1,local_60,&DAT_01b99bb6,&local_40,auStack_48);
  uVar1 = *(undefined4 *)(lVar3 + 0x38);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e6748(void)

{
  FUN_009e66b8();
  FUN_00ccf1dc();
  return;
}




void FUN_009e675c(void)

{
  FUN_009e66b8();
  FUN_00ccf1dc();
  FUN_00ccf248();
  return;
}




void FUN_009e6774(void)

{
  int iVar1;
  ulong uVar2;
  
  FUN_009e66b8();
  iVar1 = FUN_00ccf1dc();
  uVar2 = FUN_00ccf2a8(iVar1 + 1);
  if ((uVar2 & 1) != 0) {
    iVar1 = iVar1 + 1;
  }
  FUN_00ccf248(iVar1);
  return;
}




void FUN_009e67a8(undefined8 *param_1)

{
  FUN_00948cd8();
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_027c4d40;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = param_1 + 6;
  return;
}




void FUN_009e67ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c4d40;
  FUN_009e724c(param_1 + 5,param_1[6]);
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00948d58(param_1);
  return;
}




void FUN_009e6834(void *param_1)

{
  FUN_009e67ec();
  operator_delete(param_1);
  return;
}




void FUN_009e6858(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  local_70 = &local_68;
  FUN_009e6628(&local_70,"*Koshka*",500);
  FUN_009e6628(&local_70,"*Catherine*",0xdac);
  FUN_009e6628(&local_70,"*Varya*",10000);
  local_50 = param_2;
  lVar2 = FUN_009e7c74(param_1 + 0x28,param_2,&DAT_01b99bb6,&local_50,auStack_58);
  if ((undefined8 **)(lVar2 + 0x38) != &local_70) {
    FUN_009e72b4((undefined1 *)(lVar2 + 0x38),local_70,&local_68);
  }
  FUN_009e74d8(&local_70,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e6940(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  lVar2 = FUN_009e7c74(param_1 + 0x28,param_2,&DAT_01b99bb6,&local_30,auStack_38);
  if ((undefined8 *)(lVar2 + 0x38) != param_3) {
    FUN_009e72b4((undefined8 *)(lVar2 + 0x38),*param_3,param_3 + 1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_009e69b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  lVar2 = FUN_009e7c74(param_1 + 0x28,param_2,&DAT_01b99bb6,&local_30,auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return lVar2 + 0x38;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e6a18(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  long local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar5 = 0;
    do {
      local_88 = 0;
      uStack_80 = 0;
      lVar3 = *(long *)(param_2 + 0x30);
      local_90 = &local_88;
      if (*(int *)(lVar3 + uVar5 * 0x28) != 0) {
        lVar6 = 0;
        uVar4 = 0;
        do {
          lVar3 = *(long *)(lVar3 + uVar5 * 0x28 + 8);
          if ((*(byte *)(lVar3 + lVar6) & 1) == 0) {
            lVar2 = lVar3 + lVar6 + 1;
          }
          else {
            lVar2 = *(long *)(lVar3 + lVar6 + 0x10);
          }
          FUN_009e6628(&local_90,lVar2,*(undefined4 *)(lVar3 + lVar6 + 0x18));
          lVar3 = *(long *)(param_2 + 0x30);
          uVar4 = uVar4 + 1;
          lVar6 = lVar6 + 0x20;
        } while (uVar4 < *(uint *)(lVar3 + uVar5 * 0x28));
      }
      local_70 = lVar3 + uVar5 * 0x28 + 0x10;
      lVar3 = FUN_009e7c74(param_1 + 0x28,local_70,&DAT_01b99bb6,&local_70,auStack_78);
      if ((undefined8 **)(lVar3 + 0x38) != &local_90) {
        FUN_009e72b4((undefined8 **)(lVar3 + 0x38),local_90,&local_88);
      }
      FUN_009e74d8(&local_90,local_88);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_2 + 0x28));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    do {
      if (*(code **)(lVar3 + 8) == (code *)0x0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x10));
      }
      else {
        (**(code **)(lVar3 + 8))();
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != *(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e6bac(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20);
  }
  return;
}




void FUN_009e6c04(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  byte local_50 [16];
  void *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e80f6c();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_009580b8();
    if (*(int *)(lVar3 + 0x55dc) == 8) {
      local_38 = 0;
      uStack_30 = 0;
      lVar3 = FUN_009580b8();
      FUN_008fcdb8(local_50,lVar3 + 0x5508);
      FUN_0096204c(&local_38,local_50);
      uVar4 = FUN_009580b8();
      FUN_00962178(uVar4,&local_38);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      FUN_00951534(&local_38,1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_009e6cac(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_009e7eb0(param_1 + 0x28);
  if (param_1 + 0x30 == lVar4) {
    uVar3 = 0;
  }
  else {
    local_68 = param_2;
    lVar4 = FUN_009e7c74(param_1 + 0x28,param_2,&DAT_01b99bb6,&local_68,auStack_50);
    local_60 = 0;
    uStack_58 = 0;
    plVar7 = *(long **)(lVar4 + 0x38);
    local_68 = &local_60;
    while (plVar7 != (long *)(lVar4 + 0x40)) {
      FUN_009e7700(&local_68,&local_60,plVar7 + 4,plVar7 + 4);
      plVar5 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        plVar5 = plVar7 + 2;
        bVar2 = *(long **)*plVar5 != plVar7;
        plVar7 = (long *)*plVar5;
        if (bVar2) {
          do {
            lVar6 = *plVar5;
            plVar5 = (long *)(lVar6 + 0x10);
            plVar7 = (long *)*plVar5;
          } while (*plVar7 != lVar6);
        }
      }
      else {
        do {
          plVar7 = plVar5;
          plVar5 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    }
    FUN_009e66b8(&local_68,param_3);
    uVar3 = FUN_00ccf1dc();
    FUN_009e74d8(&local_68,local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}




undefined4 FUN_009e6df0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_009e7eb0(param_1 + 0x28);
  if (param_1 + 0x30 == lVar4) {
    uVar3 = 0;
  }
  else {
    local_68 = param_2;
    lVar4 = FUN_009e7c74(param_1 + 0x28,param_2,&DAT_01b99bb6,&local_68,auStack_50);
    local_60 = 0;
    uStack_58 = 0;
    plVar7 = *(long **)(lVar4 + 0x38);
    local_68 = &local_60;
    while (plVar7 != (long *)(lVar4 + 0x40)) {
      FUN_009e7700(&local_68,&local_60,plVar7 + 4,plVar7 + 4);
      plVar5 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        plVar5 = plVar7 + 2;
        bVar2 = *(long **)*plVar5 != plVar7;
        plVar7 = (long *)*plVar5;
        if (bVar2) {
          do {
            lVar6 = *plVar5;
            plVar5 = (long *)(lVar6 + 0x10);
            plVar7 = (long *)*plVar5;
          } while (*plVar7 != lVar6);
        }
      }
      else {
        do {
          plVar7 = plVar5;
          plVar5 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    }
    uVar3 = FUN_009e66b8(&local_68,param_3);
    FUN_009e74d8(&local_68,local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}




undefined4 FUN_009e6f30(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_009e7eb0(param_1 + 0x28);
  if (param_1 + 0x30 == lVar4) {
    uVar3 = 0;
  }
  else {
    local_68 = param_2;
    lVar4 = FUN_009e7c74(param_1 + 0x28,param_2,&DAT_01b99bb6,&local_68,auStack_50);
    local_60 = 0;
    uStack_58 = 0;
    plVar7 = *(long **)(lVar4 + 0x38);
    local_68 = &local_60;
    while (plVar7 != (long *)(lVar4 + 0x40)) {
      FUN_009e7700(&local_68,&local_60,plVar7 + 4,plVar7 + 4);
      plVar5 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        plVar5 = plVar7 + 2;
        bVar2 = *(long **)*plVar5 != plVar7;
        plVar7 = (long *)*plVar5;
        if (bVar2) {
          do {
            lVar6 = *plVar5;
            plVar5 = (long *)(lVar6 + 0x10);
            plVar7 = (long *)*plVar5;
          } while (*plVar7 != lVar6);
        }
      }
      else {
        do {
          plVar7 = plVar5;
          plVar5 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    }
    uVar3 = FUN_009e6774(&local_68,param_3);
    FUN_009e74d8(&local_68,local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

