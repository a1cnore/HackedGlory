// functions/00968 — 45 functions
#include "libGameKindred.h"




undefined8 * FUN_00968070(void)

{
  void *pvVar1;
  
  if (DAT_02c7ed68 == (undefined8 *)0x0) {
    DAT_02c7ed68 = operator_new(0x18);
    *(undefined4 *)(DAT_02c7ed68 + 2) = 0;
    *DAT_02c7ed68 = 0;
    DAT_02c7ed68[1] = 0;
    pvVar1 = operator_new(0x28);
    FUN_00e77acc(pvVar1,0);
    DAT_02c7ed70 = pvVar1;
  }
  return DAT_02c7ed68;
}




int FUN_009680c8(undefined8 *param_1)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027bc2f0;
  plVar3 = (long *)FUN_00968070();
  __mutex = DAT_02c7ed70;
  pthread_mutex_lock(DAT_02c7ed70);
  param_1[2] = 0;
  lVar4 = plVar3[1];
  param_1[1] = lVar4;
  plVar1 = plVar3;
  if (*plVar3 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
  }
  *plVar1 = (long)param_1;
  plVar3[1] = (long)param_1;
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  iVar2 = pthread_mutex_unlock(__mutex);
  return iVar2;
}




int FUN_00968148(undefined8 *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_027bc2f0;
  uVar2 = FUN_00968070();
  __mutex = DAT_02c7ed70;
  pthread_mutex_lock(DAT_02c7ed70);
  FUN_009681a4(uVar2,param_1);
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_009681a4(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x10);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 8);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 8);
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(*(long *)(param_2 + 0x10) + 8) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00968204(void *param_1)

{
  FUN_00968148();
  operator_delete(param_1);
  return;
}




void FUN_00968228(undefined4 param_1,undefined4 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00968070();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2);
  }
  return;
}




void FUN_0096827c(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00968070();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return;
}




void FUN_009682b8(void)

{
  return;
}




void FUN_009682bc(void)

{
  return;
}




void FUN_009682c0(undefined8 *param_1)

{
  long lVar1;
  
  FUN_00948cd8();
  FUN_00e83560(param_1 + 3);
  FUN_0092157c(param_1 + 6);
  *(undefined4 *)(param_1 + 7) = 0xfffffffe;
  *(undefined2 *)((long)param_1 + 0x3c) = 1;
  *param_1 = &PTR_FUN_027bc320;
  param_1[3] = &PTR_FUN_027bc6c8;
  *(undefined1 *)((long)param_1 + 0x3e) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = &PTR_FUN_027bc6f8;
  DAT_02c7ed78 = param_1;
  lVar1 = FUN_009580b8();
  FUN_009658c8(lVar1 + 0x18);
  return;
}




void FUN_00968338(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bc320;
  param_1[3] = &PTR_FUN_027bc6c8;
  param_1[6] = &PTR_FUN_027bc6f8;
  DAT_02c7ed78 = 0;
  if (*(char *)((long)param_1 + 0x3d) != '\0') {
    *(undefined1 *)((long)param_1 + 0x3d) = 0;
  }
  FUN_0095132c(param_1 + 8,1);
  FUN_00921668(param_1 + 6);
  FUN_00e835e0(param_1 + 3);
  FUN_00948d58(param_1);
  return;
}




void FUN_009683b8(long param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x3d) != (param_2 & 1)) &&
     (*(byte *)(param_1 + 0x3d) = param_2 & 1, (param_2 & 1) != 0)) {
    FUN_00968564();
    return;
  }
  return;
}




void FUN_009683d8(long param_1)

{
  FUN_00968338(param_1 + -0x18);
  return;
}




void FUN_009683e0(long param_1)

{
  FUN_00968338(param_1 + -0x30);
  return;
}




void FUN_009683e8(void *param_1)

{
  FUN_00968338();
  operator_delete(param_1);
  return;
}




void FUN_0096840c(long param_1)

{
  FUN_00968338((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}




void FUN_00968434(long param_1)

{
  FUN_00968338((void *)(param_1 + -0x30));
  operator_delete((void *)(param_1 + -0x30));
  return;
}




void FUN_0096845c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  
  if (*(int *)(param_2 + 0x240) == 0) {
    iVar5 = *(int *)(param_1 + 0x38);
    iVar3 = *(int *)(param_2 + 0x1a8);
    if (iVar3 != iVar5) {
      *(int *)(param_1 + 0x38) = iVar3;
      if ((0 < iVar5) && (iVar3 < 1)) {
        FUN_00a021e8();
        FUN_00907ac0();
        if (*(char *)(param_1 + 0x3c) != '\0') {
          FUN_0096827c();
        }
      }
      if (*(char *)(param_1 + 0x3d) != '\0') {
        FUN_00968564(param_1);
      }
    }
    FUN_0095132c(param_1 + 0x40,0);
    if (*(int *)(param_2 + 0x38) != 0) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        lVar1 = *(long *)(param_2 + 0x40) + lVar7;
        pbVar6 = (byte *)(lVar1 + 0x18);
        bVar4 = *pbVar6;
        uVar2 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar2 = *(ulong *)(lVar1 + 0x20);
        }
        if ((uVar2 == 8) &&
           (iVar5 = FUN_0090d610(pbVar6,0,0xffffffffffffffff,"tutorial",8), iVar5 == 0)) {
          FUN_00968620(param_1 + 0x40,*(long *)(param_2 + 0x40) + lVar7);
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x38;
      } while (uVar8 < *(uint *)(param_2 + 0x38));
    }
  }
  return;
}




void FUN_00968564(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (5 < iVar1 - 5U) {
    if (iVar1 != 4) {
      if (iVar1 == 2) {
        FUN_00968ff4(param_1,"*Gwen*");
        uVar2 = FUN_009580b8();
        FUN_00962444(uVar2,*(int *)(param_1 + 0x38) + 1);
        FUN_00936e48("AutoBuySettingPopupShown",1);
        FUN_00936e48("AutoLevelSettingPopupShown",1);
      }
      goto LAB_00968590;
    }
    FUN_00968ff4(param_1,"*Catherine*");
  }
  uVar2 = FUN_009580b8();
  FUN_00962444(uVar2,0xb);
LAB_00968590:
  FUN_0096887c(param_1);
  if (*(char *)(param_1 + 0x3c) != '\0') {
    FUN_00968228(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
    return;
  }
  return;
}




void FUN_00968620(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_00950dfc(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  FUN_008fcdb8(lVar4 + -0x38,param_2);
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0x18);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x30);
  return;
}




void FUN_009686c8(void)

{
  long lVar1;
  
  lVar1 = FUN_009580b8();
  FUN_009658c8(lVar1 + 0x18);
  return;
}




void FUN_009686e0(long param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0xfffffffe;
  FUN_0095132c(param_1 + 0x40,0);
  return;
}




void FUN_009686f8(long param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0xfffffffe;
  FUN_0095132c(param_1 + 0x28,0);
  return;
}




void FUN_00968710(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_00962444(uVar1,*(int *)(param_1 + 0x38) + 1);
  return;
}




void FUN_00968738(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_00962444(uVar1,param_2);
  return;
}




void FUN_0096875c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x3c) = param_2 & 1;
  if ((param_2 & 1) != 0) {
    FUN_00968228(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
    return;
  }
  return;
}




void FUN_0096877c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_00962444(uVar1,0xb);
  return;
}




uint FUN_00968794(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x38) - 1;
  if (uVar1 < 9) {
    return 0x115U >> (ulong)(uVar1 & 0x1f) & 1;
  }
  return 0;
}




undefined8 FUN_009687c0(int param_1)

{
  return *(undefined8 *)(&DAT_027bc710 + (long)param_1 * 8);
}




void FUN_009687d4(undefined8 param_1,long param_2)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_2 + 0x40) == 0) {
    FUN_008fa54c(param_1,&DAT_01e277f2);
  }
  else {
    FUN_008fcdb8(local_50,*(undefined8 *)(param_2 + 0x48));
    FUN_00969268((int *)(param_2 + 0x40),*(long *)(param_2 + 0x48),*(long *)(param_2 + 0x48) + 0x38)
    ;
    FUN_008fcdb8(param_1,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0096887c(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (0 < *(int *)(param_1 + 0x38)) {
    FUN_00968914(auStack_48,"Phase%d");
    FUN_00907848(auStack_48,(&PTR_DAT_027bc768)[*(int *)(param_1 + 0x38)],"StartPhase");
    FUN_00907a44(*(undefined4 *)(param_1 + 0x38));
    if (*(int *)(param_1 + 0x38) == 10) {
      FUN_008ff164();
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00968914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  puStack_60 = &local_a0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  FUN_00e6a9d0(param_1,0x20,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009689b4(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (0 < *(int *)(param_1 + 0x38)) {
    FUN_00968914(auStack_48,"Phase%d");
    FUN_00907848(auStack_48,(&PTR_DAT_027bc768)[*(int *)(param_1 + 0x38)],"TappedTile");
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00968a34(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (0 < *(int *)(param_1 + 0x38)) {
    FUN_00968914(auStack_48,"Phase%d");
    FUN_00907848(auStack_48,(&PTR_DAT_027bc768)[*(int *)(param_1 + 0x38)],"OpenChest");
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00968ab4(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (0 < *(int *)(param_1 + 0x38)) {
    FUN_00968914(auStack_48,"Phase%d");
    FUN_00907848(auStack_48,(&PTR_DAT_027bc768)[*(int *)(param_1 + 0x38)],"DismissCards");
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00968b34(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (0 < *(int *)(param_1 + 0x38)) {
    FUN_00968914(auStack_48,"Phase%d");
    FUN_00907848(auStack_48,(&PTR_DAT_027bc768)[*(int *)(param_1 + 0x38)],"OpenMarket");
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00968bb4(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (0 < *(int *)(param_1 + 0x38)) {
    FUN_00968914(auStack_48,"Phase%d");
    FUN_00907848(auStack_48,(&PTR_DAT_027bc768)[*(int *)(param_1 + 0x38)],"OpenHeroesMarket");
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00968c34(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (0 < *(int *)(param_1 + 0x38)) {
    FUN_00968914(auStack_48,"Phase%d");
    FUN_00907848(auStack_48,(&PTR_DAT_027bc768)[*(int *)(param_1 + 0x38)],"OpenHeroHub");
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00968cb4(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (0 < *(int *)(param_1 + 0x38)) {
    FUN_00968914(auStack_48,"Phase%d");
    FUN_00907848(auStack_48,(&PTR_DAT_027bc768)[*(int *)(param_1 + 0x38)],"HeroUnlock");
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00968d34(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (0 < *(int *)(param_1 + 0x38)) {
    FUN_00968914(auStack_48,"Phase%d");
    FUN_00907848(auStack_48,(&PTR_DAT_027bc768)[*(int *)(param_1 + 0x38)],"OpenSkinsMarket");
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00968db4(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (0 < *(int *)(param_1 + 0x38)) {
    FUN_00968914(auStack_48,"Phase%d");
    FUN_00907848(auStack_48,(&PTR_DAT_027bc768)[*(int *)(param_1 + 0x38)],"OpenSkinsHub");
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00968e34(void)

{
  return 1;
}




void FUN_00968e3c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined8 local_c8;
  void *local_c0;
  undefined4 local_b8;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  long local_68 [3];
  
  lVar1 = tpidr_el0;
  local_68[2] = *(long *)(lVar1 + 0x28);
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = FUN_00940b8c();
    if (*(char *)(lVar2 + 0x3d) != '\0') {
      uVar3 = FUN_00e6ce7c("TUTORIAL_NOTIFICATION_1",0);
      thunk_FUN_00e7051c(auStack_a8,uVar3);
      uVar3 = FUN_00e6ce7c("TUTORIAL_NOTIFICATION_2",0);
      thunk_FUN_00e7051c(auStack_98,uVar3);
      uVar3 = FUN_00e6ce7c("TUTORIAL_NOTIFICATION_3",0);
      thunk_FUN_00e7051c(auStack_88,uVar3);
      uVar3 = FUN_00e6ce7c("TUTORIAL_NOTIFICATION_4",0);
      thunk_FUN_00e7051c(auStack_78,uVar3);
      uVar3 = FUN_00e6ce7c("TUTORIAL_NOTIFICATION_5",0);
      thunk_FUN_00e7051c(local_68,uVar3);
      if (*(int *)(lVar2 + 0x18) != 0) {
        puVar6 = *(undefined4 **)(lVar2 + 0x20);
        uVar5 = 0;
        do {
          FUN_00ec5370(&local_c8);
          local_b8 = *puVar6;
          uVar7 = uVar5;
          if (3 < uVar5) {
            uVar7 = 4;
          }
          FUN_00910394(&local_c8,auStack_a8 + (ulong)uVar7 * 0x10);
          FUN_009216cc(param_1 + 0x30,&local_c8);
          uVar5 = uVar5 + 1;
          if (local_c0 != (void *)0x0) {
            operator_delete__(local_c0);
            local_c8 = 0;
            local_c0 = (void *)0x0;
          }
          puVar6 = puVar6 + 1;
        } while (puVar6 != (undefined4 *)
                           (*(long *)(lVar2 + 0x20) + (ulong)*(uint *)(lVar2 + 0x18) * 4));
      }
      lVar2 = 0;
      do {
        pvVar4 = *(void **)((long)local_68 + lVar2 + 8);
        if (pvVar4 != (void *)0x0) {
          operator_delete__(pvVar4);
          *(undefined8 *)((long)local_68 + lVar2) = 0;
          *(undefined8 *)((long)local_68 + lVar2 + 8) = 0;
        }
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != -0x50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68[2]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00968fec(long param_1)

{
  FUN_00968e3c(param_1 + -0x30);
  return;
}




void FUN_00968ff4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  undefined1 auStack_220 [440];
  code *local_68;
  void *pvStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00b63fc0(auStack_220);
  FUN_00cae8fc(auStack_220,param_2);
  pvVar2 = operator_new(0x5558);
  FUN_00b64064();
  *(uint *)((long)pvVar2 + 0x84) = *(uint *)((long)pvVar2 + 0x84) | 0x20;
  FUN_00b64d20(pvVar2,auStack_220);
  *(uint *)((long)pvVar2 + 0x84) = *(uint *)((long)pvVar2 + 0x84) | 0xc;
  FUN_00b65a74(pvVar2,1);
  pvVar3 = operator_new(0x278);
  FUN_00accedc();
  FUN_00acd1bc(pvVar3,pvVar2);
  local_40 = FUN_00f048a4("UI::EVENT_MENU_CLOSE_PLATFORM_NOTIFICATION");
  local_68 = FUN_00969100;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  pvStack_60 = pvVar3;
  FUN_009693a0((long)pvVar3 + 8,&local_68);
  FUN_00aa18e0(pvVar3,0,1,0,1);
  FUN_0096910c(auStack_220);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

