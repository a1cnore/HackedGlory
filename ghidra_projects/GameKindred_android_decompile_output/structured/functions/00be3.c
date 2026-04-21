// functions/00be3 — 35 functions
#include "libGameKindred.h"




void FUN_00be3034(undefined8 param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0093dbe8();
  if (((uVar1 & 1) == 0) && (*(int *)(param_2 + 0x240) == 0)) {
    FUN_00be2e58(param_1);
    return;
  }
  return;
}




void FUN_00be3074(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0093dbe8();
  if (((uVar1 & 1) == 0) && (*(int *)(param_2 + 0x240) == 0)) {
    FUN_00be2e58(param_1 + -0x10);
    return;
  }
  return;
}




void FUN_00be30b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,**(undefined8 **)(param_1 + 0x48));
  uVar2 = FUN_00cc8184(local_40);
  FUN_00aa1a70(param_1 + 0x10,uVar2);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be312c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00aa20ec(param_1 + 0x10);
  uVar2 = FUN_00f048a4("UI::SKIN_VIEWER::DIALOG_GET_OPALS");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be31a4(long param_1)

{
  FUN_00be312c(param_1 + -0x10);
  return;
}




void FUN_00be31ac(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::SKIN_VIEWER::ON_PURCHASED_SKU");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be321c(long param_1)

{
  FUN_00be31ac(param_1 + -0x10);
  return;
}




void FUN_00be3228(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00be2dc4(param_1);
  return;
}




void FUN_00be325c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auStack_230 [32];
  byte local_210 [16];
  void *local_200;
  undefined1 auStack_1f0 [440];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00a07fb0(param_2,*(undefined8 *)(param_1 + 0x48));
  if ((uVar3 & 1) != 0) {
    FUN_00b63fc0(auStack_1f0);
    FUN_008fa54c(local_210,**(undefined8 **)(param_1 + 0x48));
    FUN_00caeb04(auStack_1f0,local_210);
    if ((local_210[0] & 1) != 0) {
      operator_delete(local_200);
    }
    FUN_00f048e0(local_210,DAT_0313375c,auStack_1f0);
    FUN_00f04760(*(undefined8 *)(param_1 + 8),local_210,1);
    uVar2 = FUN_00f048a4("UI::SKIN_VIEWER::ON_SKIN_CRAFTED");
    FUN_00f048e0(auStack_230,uVar2,0);
    FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_230,1);
    FUN_00c58a70(*(undefined8 *)(param_1 + 8));
    FUN_0096910c(auStack_1f0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be3354(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_00a084a8(param_2);
  FUN_00c58818(uVar2,uVar1);
  return;
}




void FUN_00be3380(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a07af0();
  FUN_008fa54c(local_40,**(undefined8 **)(param_1 + 0x48));
  FUN_00a0846c(uVar2,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be33f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00a07af0();
  FUN_008fa54c(local_40,**(undefined8 **)(param_1 + 0x48));
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




void FUN_00be3470(long param_1)

{
  FUN_00be33f8(param_1 + -0x40);
  return;
}




void FUN_00be3478(void)

{
  return;
}




void FUN_00be347c(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ef5b8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00be34c0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbe34c4);
  (*pcVar1)();
}




void FUN_00be34c4(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00be2dc4(param_1);
  return;
}




void thunk_FUN_00be325c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auStack_230 [32];
  byte abStack_210 [16];
  void *pvStack_200;
  undefined1 auStack_1f0 [440];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00a07fb0(param_2,*(undefined8 *)(param_1 + 0x48));
  if ((uVar3 & 1) != 0) {
    FUN_00b63fc0(auStack_1f0);
    FUN_008fa54c(abStack_210,**(undefined8 **)(param_1 + 0x48));
    FUN_00caeb04(auStack_1f0,abStack_210);
    if ((abStack_210[0] & 1) != 0) {
      operator_delete(pvStack_200);
    }
    FUN_00f048e0(abStack_210,DAT_0313375c,auStack_1f0);
    FUN_00f04760(*(undefined8 *)(param_1 + 8),abStack_210,1);
    uVar2 = FUN_00f048a4("UI::SKIN_VIEWER::ON_SKIN_CRAFTED");
    FUN_00f048e0(auStack_230,uVar2,0);
    FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_230,1);
    FUN_00c58a70(*(undefined8 *)(param_1 + 8));
    FUN_0096910c(auStack_1f0);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be34fc(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_00a084a8(param_2);
  FUN_00c58818(uVar2,uVar1);
  return;
}




void FUN_00be3528(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027efb60;
  pvVar2 = operator_new(0x3cf8);
  FUN_00c5b474();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0xb8) = param_1;
  param_1[4] = 0;
  param_1[3] = &PTR_FUN_027efb20;
  param_1[2] = &PTR___cxa_pure_virtual_027e7668;
  FUN_00e83560(param_1 + 5);
  FUN_00948cd8(param_1 + 8);
  *param_1 = &PTR_FUN_027ef5e8;
  param_1[5] = &PTR_FUN_027ef740;
  param_1[8] = &PTR_FUN_027ef770;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xb] = &PTR_FUN_027efb08;
  param_1[0xc] = 0;
  param_1[3] = &PTR_FUN_027ef700;
  param_1[2] = &PTR_FUN_027ef6a8;
  param_1[0xd] = 0;
  FUN_0099ceac(param_1 + 0x14,"FRIENDS.*",1);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = param_1 + 0x19;
  FUN_00aa1380(param_1 + 0x1b);
  FUN_00e70510(param_1 + 0x1c);
  FUN_008fcdb8(param_1 + 0x1e,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x21,&DAT_0320ffa8);
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_008fcdb8(param_1 + 0x25,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x28,&DAT_0320ffa8);
  *(undefined1 *)((long)param_1 + 0x15e) = 0;
  *(undefined2 *)((long)param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  FUN_00915ec0(param_1 + 3);
  uVar4 = param_1[1];
  uVar3 = FUN_00e6ce7c("MENU_FRIENDS_REQUESTS_TITLE",0);
  FUN_00e705c8(&local_58,"REQUESTS");
  FUN_00c5bea8(uVar4,uVar3,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  uVar4 = param_1[1];
  uVar3 = FUN_00e6ce7c("MENU_FRIENDS_RECENTS_TITLE",0);
  FUN_00e705c8(&local_58,"RECENTS");
  FUN_00c5bea8(uVar4,uVar3,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  uVar4 = param_1[1];
  uVar3 = FUN_00e6ce7c("MENU_TEAM_TITLE",0);
  FUN_00e705c8(&local_58,"TEAM");
  FUN_00c5bea8(uVar4,uVar3,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  uVar4 = param_1[1];
  uVar3 = FUN_00e6ce7c("MENU_GUILD_TITLE",0);
  FUN_00e705c8(&local_58,"GUILD");
  FUN_00c5bea8(uVar4,uVar3,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  uVar4 = param_1[1];
  uVar3 = FUN_00e6ce7c("MENU_FRIENDS_ONLINE_TITLE",0);
  FUN_00e705c8(&local_58,"ONLINE_FRIENDS");
  FUN_00c5bea8(uVar4,uVar3,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  uVar4 = param_1[1];
  uVar3 = FUN_00e6ce7c("MENU_FRIENDS_OFFLINE_TITLE",0);
  FUN_00e705c8(&local_58,"OFFLINE_FRIENDS");
  FUN_00c5bea8(uVar4,uVar3,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  uVar3 = FUN_00c5bfbc(param_1[1],"TEAM");
  FUN_00b2dc58(uVar3,1);
  uVar3 = FUN_00c5bfbc(param_1[1],"GUILD");
  FUN_00b2dc58(uVar3,1);
  uVar3 = FUN_00c5bfbc(param_1[1],"ONLINE_FRIENDS");
  FUN_00b2dc58(uVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be38a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ef5e8;
  param_1[3] = &PTR_FUN_027ef700;
  param_1[2] = &PTR_FUN_027ef6a8;
  param_1[5] = &PTR_FUN_027ef740;
  param_1[8] = &PTR_FUN_027ef770;
  param_1[0xb] = &PTR_FUN_027efb08;
  FUN_00915ef0(param_1 + 3);
  FUN_00be3a1c(param_1,0);
  FUN_00be3c4c(param_1,0);
  FUN_0090de68(param_1);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    operator_delete((void *)param_1[0x2a]);
  }
  if ((*(byte *)(param_1 + 0x25) & 1) != 0) {
    operator_delete((void *)param_1[0x27]);
  }
  if ((*(byte *)(param_1 + 0x21) & 1) != 0) {
    operator_delete((void *)param_1[0x23]);
  }
  if ((*(byte *)(param_1 + 0x1e) & 1) != 0) {
    operator_delete((void *)param_1[0x20]);
  }
  if ((void *)param_1[0x1d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1d]);
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
  }
  FUN_00aa1388(param_1 + 0x1b);
  FUN_00be6ca4(param_1 + 0x18,param_1[0x19]);
  FUN_0099cedc(param_1 + 0x14);
  FUN_00914e9c(param_1 + 0x12,1);
  FUN_00914e2c(param_1 + 0x10,1);
  FUN_00914e2c(param_1 + 0xe,1);
  param_1[0xb] = &PTR_FUN_027e76c0;
  FUN_00b7d304(param_1 + 0xc,1);
  FUN_00948d58(param_1 + 8);
  FUN_00e835e0(param_1 + 5);
  *param_1 = &PTR___cxa_pure_virtual_027efb60;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00be3a1c(long param_1,byte param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  void *pvVar8;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar5 = 0;
  if ((param_2 & 1) == *(byte *)(param_1 + 0x15d)) goto LAB_00be3c24;
  bVar2 = *(byte *)(param_1 + 0x140);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x148);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pvVar8 = *(void **)(param_1 + 0x150);
    if ((bVar2 & 1) == 0) {
      pvVar8 = (void *)(param_1 + 0x141);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar6 = (char *)(param_1 + 0x141);
        lVar7 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar6 != *__s2) goto LAB_00be3aec;
          pcVar6 = pcVar6 + 1;
          lVar7 = lVar7 + 1;
          __s2 = __s2 + 1;
        } while (lVar7 != 0);
      }
    }
    else if (__n != 0) {
      iVar4 = memcmp(pvVar8,__s2,__n);
      uVar5 = 0;
      if (iVar4 == 0) goto LAB_00be3c24;
      goto LAB_00be3aec;
    }
    uVar5 = 0;
    goto LAB_00be3c24;
  }
LAB_00be3aec:
  if ((param_2 & 1) == 0) {
    FUN_00be61b0(local_50,param_1);
    pvVar8 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar8 = local_40;
    }
    FUN_0090de08(pvVar8,param_1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    FUN_00be61b0(local_50,param_1);
    pvVar8 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar8 = local_40;
    }
    lVar7 = FUN_0090d8b8(pvVar8);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (lVar7 != 0) {
      FUN_00be61b0(local_50,param_1);
      pvVar8 = (void *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        pvVar8 = local_40;
      }
      FUN_0090d958(pvVar8);
      goto LAB_00be3c04;
    }
  }
  else {
    FUN_00be61b0(local_50,param_1);
    pvVar8 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar8 = local_40;
    }
    FUN_0090d918(pvVar8);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    FUN_00be61b0(local_50,param_1);
    if (DAT_02c091c0 != 0) {
      pvVar8 = (void *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        pvVar8 = local_40;
      }
      FUN_00be721c(DAT_02c091c0,pvVar8,param_1);
    }
LAB_00be3c04:
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  uVar5 = 1;
  *(byte *)(param_1 + 0x15d) = param_2 & 1;
LAB_00be3c24:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}




void FUN_00be3c4c(long param_1,byte param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  void *pvVar8;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar5 = 0;
  if ((param_2 & 1) == *(byte *)(param_1 + 0x15e)) goto LAB_00be3e54;
  bVar2 = *(byte *)(param_1 + 0x128);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x130);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pvVar8 = *(void **)(param_1 + 0x138);
    if ((bVar2 & 1) == 0) {
      pvVar8 = (void *)(param_1 + 0x129);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar6 = (char *)(param_1 + 0x129);
        lVar7 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar6 != *__s2) goto LAB_00be3d1c;
          pcVar6 = pcVar6 + 1;
          lVar7 = lVar7 + 1;
          __s2 = __s2 + 1;
        } while (lVar7 != 0);
      }
    }
    else if (__n != 0) {
      iVar4 = memcmp(pvVar8,__s2,__n);
      uVar5 = 0;
      if (iVar4 == 0) goto LAB_00be3e54;
      goto LAB_00be3d1c;
    }
    uVar5 = 0;
    goto LAB_00be3e54;
  }
LAB_00be3d1c:
  if ((param_2 & 1) == 0) {
    FUN_00be6200(local_50,param_1);
    pvVar8 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar8 = local_40;
    }
    FUN_0090de08(pvVar8,param_1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    FUN_00be6200(local_50,param_1);
    pvVar8 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar8 = local_40;
    }
    lVar7 = FUN_0090d8b8(pvVar8);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if (lVar7 != 0) {
      FUN_00be6200(local_50,param_1);
      pvVar8 = (void *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        pvVar8 = local_40;
      }
      FUN_0090d958(pvVar8);
      goto LAB_00be3e34;
    }
  }
  else {
    FUN_00be6200(local_50,param_1);
    pvVar8 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar8 = local_40;
    }
    FUN_0090d918(pvVar8);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    FUN_00be6200(local_50,param_1);
    if (DAT_02c091c0 != 0) {
      pvVar8 = (void *)((ulong)local_50 | 1);
      if ((local_50[0] & 1) != 0) {
        pvVar8 = local_40;
      }
      FUN_00be7188(DAT_02c091c0,pvVar8,param_1);
    }
LAB_00be3e34:
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  uVar5 = 1;
  *(byte *)(param_1 + 0x15e) = param_2 & 1;
LAB_00be3e54:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}




void FUN_00be3e7c(long param_1)

{
  FUN_00be38a8(param_1 + -0x18);
  return;
}




void FUN_00be3e84(long param_1)

{
  FUN_00be38a8(param_1 + -0x28);
  return;
}




void FUN_00be3e8c(long param_1)

{
  FUN_00be38a8(param_1 + -0x40);
  return;
}




void FUN_00be3e94(void *param_1)

{
  FUN_00be38a8();
  operator_delete(param_1);
  return;
}




void FUN_00be3eb8(long param_1)

{
  FUN_00be38a8((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}




void FUN_00be3ee0(long param_1)

{
  FUN_00be38a8((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00be3f08(long param_1)

{
  FUN_00be38a8((void *)(param_1 + -0x40));
  operator_delete((void *)(param_1 + -0x40));
  return;
}




void FUN_00be3f30(long *param_1)

{
  *(undefined1 *)((long)param_1 + 0x15c) = 1;
  (**(code **)(*param_1 + 0x70))();
  FUN_00915fac(1);
  FUN_0099cf94(param_1 + 0x14,0);
  return;
}




void FUN_00be3f70(long param_1)

{
  *(undefined1 *)(param_1 + 0x14c) = 1;
  (**(code **)(*(long *)(param_1 + -0x10) + 0x70))((long *)(param_1 + -0x10));
  FUN_00915fac(1);
  FUN_0099cf94(param_1 + 0x90,0);
  return;
}




void FUN_00be3fb4(long param_1)

{
  *(undefined1 *)(param_1 + 0x15c) = 0;
  FUN_00c5d8f0(*(undefined8 *)(param_1 + 8));
  FUN_00915fac(0);
  return;
}




void FUN_00be3fd8(long param_1)

{
  *(undefined1 *)(param_1 + 0x14c) = 0;
  FUN_00c5d8f0(*(undefined8 *)(param_1 + -8));
  FUN_00915fac(0);
  return;
}




undefined1 FUN_00be3ffc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15c);
}

