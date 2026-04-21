// functions/00ec8 — 38 functions
#include "libGameKindred.h"




void thunk_FUN_00ec86e4(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_03210830 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_03210830), iVar1 != 0)) {
    FUN_00e734e4(&DAT_03210818,"NuoLocalNotification","clearNotifications",&DAT_01beef0d);
    DAT_03210818 = &PTR_FUN_02821ea0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210818,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210830);
  }
  uVar2 = FUN_00e7368c(&DAT_03210818);
  FUN_00e73934(&DAT_03210818,uVar2);
  return;
}




void thunk_FUN_00ec8798(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  if (((DAT_03210850 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_03210850), iVar3 != 0)) {
    FUN_00e734e4(&DAT_03210838,"NuoLocalNotification","scheduleNotification",
                 "(ILjava/lang/String;)V");
    DAT_03210838 = &PTR_FUN_02821ec0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210838,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210850);
  }
  uVar4 = FUN_00e7368c(&DAT_03210838);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  FUN_00e73f80(auStack_58,uVar4,param_1);
  uVar5 = FUN_00e7410c(auStack_58);
  FUN_00e73934(&DAT_03210838,uVar4,uVar1,uVar5);
  FUN_00e740f0(auStack_58);
  if (*(long *)(lVar2 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec8020(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      do {
        uVar5 = *puVar2;
        lVar3 = lVar3 + -0x10;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 2;
        puVar2 = puVar2 + 2;
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




void FUN_00ec80a4(uint *param_1,uint param_2)

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




void FUN_00ec8124(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




ulong * FUN_00ec8190(ulong *param_1,ulong param_2,byte *param_3,ulong param_4)

{
  byte *__src;
  byte bVar1;
  long lVar2;
  byte *__src_00;
  ulong uVar3;
  byte *pbVar4;
  
  bVar1 = (byte)*param_1;
  if ((bVar1 & 1) == 0) {
    uVar3 = (ulong)(bVar1 >> 1);
  }
  else {
    uVar3 = param_1[1];
  }
  if (param_2 <= uVar3) {
    if ((bVar1 & 1) == 0) {
      lVar2 = 0x16;
    }
    else {
      lVar2 = (*param_1 & 0xfffffffffffffffe) - 1;
    }
    if (lVar2 - uVar3 < param_4) {
      FUN_008fcf6c(param_1,lVar2,(uVar3 + param_4) - lVar2,uVar3,param_2,0,param_4,param_3);
    }
    else if (param_4 != 0) {
      if ((bVar1 & 1) == 0) {
        pbVar4 = (byte *)((long)param_1 + 1);
      }
      else {
        pbVar4 = (byte *)param_1[2];
      }
      __src = pbVar4 + param_2;
      __src_00 = param_3;
      if (uVar3 - param_2 != 0) {
        __src_00 = param_3 + param_4;
        if (pbVar4 + uVar3 <= param_3 || param_3 < __src) {
          __src_00 = param_3;
        }
        memmove(__src + param_4,__src,uVar3 - param_2);
      }
      memmove(__src,__src_00,param_4);
      uVar3 = uVar3 + param_4;
      if ((*param_1 & 1) == 0) {
        *(byte *)param_1 = (byte)((int)uVar3 << 1);
      }
      else {
        param_1[1] = uVar3;
      }
      pbVar4[uVar3] = 0;
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




void FUN_00ec82a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02821e30;
  FUN_00e77acc(param_1 + 1,0);
  FUN_00e70510(param_1 + 6);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}




int FUN_00ec82f4(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_02821e30;
  FUN_00ec8348();
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  return iVar1;
}




int FUN_00ec8348(long param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}




void FUN_00ec8388(void *param_1)

{
  FUN_00ec82f4();
  operator_delete(param_1);
  return;
}




undefined1 FUN_00ec83ac(long param_1)

{
  undefined1 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  uVar1 = *(undefined1 *)(param_1 + 0x58);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return uVar1;
}




bool FUN_00ec83e4(long param_1)

{
  long lVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  lVar1 = *(long *)(param_1 + 0x60);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return lVar1 != 0;
}




undefined4 FUN_00ec8424(long param_1,long *param_2,uint *param_3,uint *param_4)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2 != (long *)0x0) {
      *param_2 = *(long *)(param_1 + 0x60);
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = (uint)*(ushort *)(param_1 + 0x68);
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = (uint)*(ushort *)(param_1 + 0x6a);
    }
    uVar1 = 1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return uVar1;
}




int FUN_00ec84a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  FUN_00910394(param_1 + 0x30,param_2);
  FUN_008fce60(param_1 + 0x40,param_3);
  *(undefined1 *)(param_1 + 0x58) = 1;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}




void FUN_00ec8504(long param_1)

{
  long lVar1;
  ulong local_50;
  void *local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  FUN_00e705c8(&local_50,&DAT_01e277f2);
  FUN_00910394(param_1 + 0x30,&local_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
    local_50 = 0;
    local_48 = (void *)0x0;
  }
  FUN_008fa54c(&local_50,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x40,&local_50);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  FUN_00ec8348(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00ec85c8(long param_1,undefined8 param_2,uint param_3,int param_4)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x60) = param_2;
  *(uint *)(param_1 + 0x68) = param_3 & 0xffff | param_4 << 0x10;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}




void FUN_00ec861c(void)

{
  return;
}




void FUN_00ec8620(void)

{
  return;
}




void FUN_00ec8624(void)

{
  return;
}




void FUN_00ec8628(undefined8 *param_1)

{
  FUN_00ec82a4();
  *param_1 = &PTR_thunk_FUN_00ec82f4_02821e68;
  return;
}




int thunk_FUN_00ec82f4(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_02821e30;
  FUN_00ec8348();
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 1));
  return iVar1;
}




void FUN_00ec865c(void *param_1)

{
  FUN_00ec82f4();
  operator_delete(param_1);
  return;
}




void FUN_00ec8684(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  ulong uVar1;
  
  if ((param_3 != 0) && (uVar1 = FUN_00e6a488(param_3), (uVar1 & 1) == 0)) {
    FUN_00ecac44(param_1,param_3,param_4 & 1);
    return;
  }
  return;
}




void thunk_FUN_00ec86e4(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_03210830 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_03210830), iVar1 != 0)) {
    FUN_00e734e4(&DAT_03210818,"NuoLocalNotification","clearNotifications",&DAT_01beef0d);
    DAT_03210818 = &PTR_FUN_02821ea0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210818,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210830);
  }
  uVar2 = FUN_00e7368c(&DAT_03210818);
  FUN_00e73934(&DAT_03210818,uVar2);
  return;
}




void FUN_00ec86e4(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((DAT_03210830 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_03210830), iVar1 != 0)) {
    FUN_00e734e4(&DAT_03210818,"NuoLocalNotification","clearNotifications",&DAT_01beef0d);
    DAT_03210818 = &PTR_FUN_02821ea0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210818,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210830);
  }
  uVar2 = FUN_00e7368c(&DAT_03210818);
  FUN_00e73934(&DAT_03210818,uVar2);
  return;
}




void FUN_00ec8794(void)

{
  return;
}




void FUN_00ec8798(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((DAT_03210850 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_03210850), iVar3 != 0)) {
    FUN_00e734e4(&DAT_03210838,"NuoLocalNotification","scheduleNotification",
                 "(ILjava/lang/String;)V");
    DAT_03210838 = &PTR_FUN_02821ec0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210838,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210850);
  }
  uVar4 = FUN_00e7368c(&DAT_03210838);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  FUN_00e73f80(auStack_58,uVar4,param_1);
  uVar5 = FUN_00e7410c(auStack_58);
  FUN_00e73934(&DAT_03210838,uVar4,uVar1,uVar5);
  FUN_00e740f0(auStack_58);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec88b8(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00ec88dc(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00ec8900(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_03210870 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_03210870), iVar2 != 0)) {
    FUN_00e734e4(&DAT_03210858,"OpenURL","open","(Ljava/lang/String;)V");
    DAT_03210858 = &PTR_FUN_02821ee0;
    __cxa_atexit(FUN_00e748b8,&DAT_03210858,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210870);
  }
  uVar3 = FUN_00e7368c(&DAT_03210858);
  FUN_00e73e94(auStack_48,uVar3,param_1);
  uVar4 = FUN_00e7410c(auStack_48);
  FUN_00e73934(&DAT_03210858,uVar3,uVar4);
  FUN_00e740f0(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec8a10(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




uint FUN_00ec8a34(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte local_a0 [16];
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_03210890 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_03210890), iVar3 != 0)) {
    FUN_00e734e4(&DAT_03210878,"NuoSecureStorePassword","set",
                 "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z");
    DAT_03210878 = &PTR_FUN_02821f00;
    __cxa_atexit(FUN_00e748b8,&DAT_03210878,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03210890);
  }
  pbVar8 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar8 = param_3 + 1;
  }
  FUN_008fa54c(local_a0,pbVar8);
  uVar4 = FUN_00e7368c(&DAT_03210878);
  FUN_00e73e94(auStack_58,uVar4,param_1);
  uVar5 = FUN_00e7410c(auStack_58);
  FUN_00e73e94(auStack_68,uVar4,param_2);
  uVar6 = FUN_00e7410c(auStack_68);
  FUN_00e70570(&local_88,local_a0);
  FUN_00e73f80(auStack_78,uVar4,&local_88);
  uVar7 = FUN_00e7410c(auStack_78);
  uVar2 = FUN_00e739d8(&DAT_03210878,uVar4,uVar5,uVar6,uVar7);
  FUN_00e740f0(auStack_78);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  FUN_00e740f0(auStack_68);
  FUN_00e740f0(auStack_58);
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec8bf8(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_80 [16];
  void *local_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((DAT_032108b0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_032108b0), iVar3 != 0)) {
    FUN_00e734e4(&DAT_03210898,"NuoSecureStorePassword","get",
                 "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    DAT_03210898 = &PTR_FUN_02821f20;
    __cxa_atexit(FUN_00e748b8,&DAT_03210898,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_032108b0);
  }
  uVar4 = FUN_00e7368c(&DAT_03210898);
  FUN_00e73e94(auStack_58,uVar4,param_1);
  uVar5 = FUN_00e7410c(auStack_58);
  FUN_00e73e94(auStack_68,uVar4,param_2);
  uVar6 = FUN_00e7410c(auStack_68);
  FUN_00e73bd8(local_80,&DAT_03210898,uVar4,uVar5,uVar6);
  FUN_00e740f0(auStack_68);
  FUN_00e740f0(auStack_58);
  FUN_008fce60(param_3,local_80);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  uVar1 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1 != 0);
}




uint FUN_00ec8d7c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_032108d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_032108d0), iVar3 != 0)) {
    FUN_00e734e4(&DAT_032108b8,"NuoSecureStorePassword","delete",
                 "(Ljava/lang/String;Ljava/lang/String;)Z");
    DAT_032108b8 = &PTR_FUN_02821f40;
    __cxa_atexit(FUN_00e748b8,&DAT_032108b8,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_032108d0);
  }
  uVar4 = FUN_00e7368c(&DAT_032108b8);
  FUN_00e73e94(auStack_58,uVar4,param_1);
  uVar5 = FUN_00e7410c(auStack_58);
  FUN_00e73e94(auStack_68,uVar4,param_2);
  uVar6 = FUN_00e7410c(auStack_68);
  uVar2 = FUN_00e739d8(&DAT_032108b8,uVar4,uVar5,uVar6);
  FUN_00e740f0(auStack_68);
  FUN_00e740f0(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec8ec8(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00ec8eec(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}



undefined1 DAT_032108f0;
undefined8 DAT_032108d8;
pointer PTR_FUN_02821f60;
undefined FUN_00ec90fc;
long *DAT_03210918;
undefined FUN_00ec921c;
undefined FUN_00ec9294;
undefined1 DAT_03210998;
undefined8 DAT_03210980;
pointer PTR_FUN_02821fe0;
byte DAT_03210910;
undefined1 DAT_03210a18;
undefined8 DAT_03210a00;
pointer PTR_FUN_02822060;
undefined1 DAT_03210a38;
undefined8 DAT_03210a20;
pointer PTR_FUN_02822080;
undefined1 DAT_03210a58;
undefined8 DAT_03210a40;
pointer PTR_FUN_028220a0;
undefined1 DAT_03210a78;
undefined8 DAT_03210a60;
pointer PTR_FUN_028220c0;
long *DAT_03210ac0;
pointer PTR_FUN_02822120;
pointer PTR_FUN_02822140;
pointer PTR_FUN_02822160;
undefined DAT_01bf176b;
pointer PTR_FUN_02822180;
undefined *PTR_FUN_028221a0;
undefined8 DAT_03210ac0;
long DAT_03210ac0;
long *DAT_03210ac8;
undefined1 DAT_03210ae8;
undefined8 DAT_03210ad0;
pointer PTR_FUN_02822230;
undefined1 DAT_03210b08;
undefined8 DAT_03210af0;
pointer PTR_FUN_02822250;
undefined8 *DAT_03210b10;
undefined *PTR_FUN_028221f0;
undefined8 DAT_03210ac8;
long DAT_03210ac8;
undefined *PTR_FUN_02822270;
undefined *PTR_FUN_028222c0;
undefined1 DAT_03210b50;
undefined8 DAT_03210b38;
pointer PTR_FUN_02822320;
undefined8 DAT_03210b90;
undefined1 DAT_03210bb0;
undefined8 DAT_03210b98;
pointer PTR_FUN_028223a0;
undefined1 DAT_03210bd0;
undefined8 DAT_03210bb8;
pointer PTR_FUN_028223c0;
undefined1 DAT_03210bf0;
undefined8 DAT_03210bd8;
pointer PTR_FUN_028223e0;
void *DAT_03210b78;
void *DAT_03210b80;
long *DAT_03210b78;
undefined8 DAT_03210b80;
undefined8 DAT_03210b78;
long DAT_03210b78;
undefined1 DAT_03210b88;
byte DAT_03210b88;
undefined *PTR_FUN_02822360;
long *DAT_03210b90;
undefined8 *DAT_03210c00;
undefined8 DAT_03210c00;
float DAT_03210bf8;
float DAT_03210bfc;
long DAT_03210c00;
long UNK_00000218;
undefined *PTR_FUN_02822400;
ushort DAT_02bf2574;
undefined DAT_01bf1860;
undefined FUN_00ecf4d8;
undefined FUN_00ecf4e4;
undefined FUN_00ecf4f0;
undefined FUN_00ecf560;
undefined *PTR_FUN_02822440;
undefined FUN_00ecf720;
undefined FUN_00ecf728;
undefined FUN_00ecf73c;
undefined FUN_00ecf744;
undefined FUN_00ecfaec;
undefined FUN_00ecfb10;
undefined *PTR_FUN_02822598;
undefined FUN_00ed007c;
undefined FUN_00ed0090;
undefined FUN_00ed00a4;
undefined FUN_00ed00b8;
undefined FUN_00ed00cc;
undefined *PTR_FUN_028225f0;
undefined *PTR_FUN_02822778;
undefined4 DAT_03218f28;
undefined FUN_00ed1dd8;
undefined FUN_00ed1de0;
undefined FUN_00ed1de8;
undefined FUN_00ed1df0;
undefined *PTR_FUN_02822878;
undefined *PTR_FUN_028229c8;
undefined *PTR_FUN_02822b10;
undefined FUN_00ed3624;
undefined FUN_00ed3658;
undefined FUN_00ed3668;
undefined FUN_00ed3674;
undefined *PTR_thunk_FUN_00ed00e0_02822c30;
undefined *PTR_thunk_FUN_00f13d08_02822dc0;
undefined4 DAT_02bf2578;
undefined *PTR_FUN_02822f08;
undefined FUN_00ed5344;
undefined *PTR_FUN_02823008;
undefined *PTR_FUN_02823278;
undefined *PTR_FUN_02823378;
undefined *PTR_FUN_02823178;
undefined *PTR_thunk_FUN_00ed5534_02823478;
undefined FUN_00ed6910;
undefined FUN_00ed6924;
undefined FUN_00ed6938;
undefined FUN_00ed694c;
undefined FUN_00ed6960;
undefined *PTR_FUN_02823610;
undefined *PTR_FUN_02823798;
undefined *PTR_FUN_028237e0;
undefined *PTR_FUN_028239f8;
undefined FUN_00ed7d20;
undefined *PTR_FUN_02823b10;
undefined *PTR_thunk_FUN_00f13d08_02823c58;
undefined *PTR_FUN_02823da0;
undefined *PTR_FUN_02823de8;
undefined *PTR_FUN_02823e10;
int DAT_03210c98;
undefined *PTR_FUN_02823e38;
undefined *PTR_FUN_02823f50;
long *DAT_032143e8;
undefined *PTR_FUN_02823fc8;
undefined *PTR_FUN_02824128;
undefined FUN_00ed9420;
undefined FUN_00ed9824;
undefined FUN_00edb304;
undefined FUN_00eda4d8;
undefined FUN_00eda4e8;
undefined FUN_00eda588;
undefined FUN_00eda5f4;
undefined FUN_00eda6a0;
undefined FUN_00eda6a4;
undefined DAT_01bf1c3c;
undefined FUN_00edaa64;
undefined FUN_00edb018;
undefined FUN_00edb070;
undefined FUN_00edb2f0;
undefined DAT_01bf3110;
undefined DAT_01bf3250;
undefined DAT_01bf3354;
undefined DAT_01bf3424;
undefined4 DAT_01bf34c8;
undefined DAT_01bf3548;
undefined DAT_01bf35ac;
undefined FUN_00edb624;
undefined FUN_00edb644;
undefined FUN_00edc9fc;
undefined FUN_00edca98;
undefined FUN_00edcb88;
undefined FUN_00edcdf4;
undefined DAT_01bf1d60;
undefined FUN_00edde70;
undefined FUN_00ede030;
undefined FUN_00ede564;
undefined FUN_00ede5b4;
undefined FUN_00ede210;
undefined FUN_00ede224;
undefined FUN_00ede354;
undefined FUN_00ede7dc;
undefined FUN_00ede8c4;
undefined FUN_00ede980;
undefined FUN_00edea98;
undefined FUN_00eded80;
undefined FUN_00eded98;
undefined FUN_00edeee4;
undefined FUN_00edeeec;
undefined FUN_00edeef4;
undefined FUN_00edef48;
undefined FUN_00edeff4;
undefined *PTR_s_Bogus_message_code_%d_02824160;
undefined FUN_00edf148;
undefined FUN_00edf174;
undefined FUN_00edf1d8;
undefined FUN_00edf244;
undefined FUN_00edf30c;
undefined FUN_00edf8c4;
undefined4 DAT_01bf30d8;
undefined FUN_00edf67c;
undefined FUN_00edf8c0;
undefined1 DAT_01bf2fd8;
undefined FUN_00edfa88;
undefined FUN_00edfafc;
undefined FUN_00edfb8c;
undefined FUN_00edfc5c;
undefined FUN_00edfd50;
undefined FUN_00ee00c4;
undefined FUN_00ee0218;
undefined FUN_00ee0a8c;
undefined FUN_00ee02d8;
undefined FUN_00ee0350;
undefined FUN_00ee06ac;
undefined FUN_00ee09a8;
undefined FUN_00ee1480;
undefined FUN_00ee1e58;
undefined FUN_00ee1628;
undefined FUN_00ee203c;
undefined FUN_00ee1728;
undefined FUN_00ee2184;
undefined FUN_00ee1838;
undefined FUN_00ee1950;
undefined FUN_00ee19f0;
undefined FUN_00ee1a90;
undefined FUN_00ee1c78;
undefined DAT_01bf3638;
undefined DAT_01bf3648;
undefined FUN_00ee25cc;
undefined FUN_00ee2968;
undefined FUN_00ee2b90;
undefined FUN_00ee2da4;
undefined FUN_00ee2e50;
undefined FUN_00ee3024;
undefined DAT_01bf3ab0;
undefined FUN_00ee3d20;
undefined FUN_00ee3d28;
undefined FUN_00ee3804;
undefined FUN_00ee380c;
undefined FUN_00ee394c;
undefined FUN_00ee3b50;
undefined FUN_00ee4010;
undefined FUN_00ee4ab4;
undefined FUN_00ee4b4c;
undefined FUN_00ee4d0c;
undefined FUN_00ee4d70;
undefined FUN_00ee4a08;
undefined FUN_00ee4de4;
undefined FUN_00ee4a0c;
undefined FUN_00ee4e68;
undefined FUN_00ee4a28;
undefined FUN_00ee4f34;
undefined FUN_00ee5054;
undefined FUN_00ee8d1c;
undefined FUN_00ee8f24;
undefined FUN_00ee90ac;
undefined FUN_00ee91f0;
undefined FUN_00ee928c;
undefined FUN_00ee92bc;
undefined FUN_00ee9658;
undefined FUN_00ee9a30;
undefined FUN_00ee9ed8;
undefined FUN_00eea34c;
undefined FUN_00eea8a4;
undefined FUN_00eead9c;
undefined FUN_00eeb2f8;
undefined FUN_00eeb900;
undefined FUN_00eebe58;
undefined FUN_00eec280;
undefined8 DAT_01bf3670;
undefined8 DAT_01bf36f0;
undefined FUN_00eec5d4;
undefined *PTR_FUN_02824560;
undefined FUN_00eec8c4;
undefined FUN_00eecb40;
undefined FUN_00eeccf8;
undefined FUN_00eece44;
undefined FUN_00eece94;
undefined FUN_00eed33c;
undefined FUN_00eed754;
undefined FUN_00eedac0;
undefined FUN_00eeddc8;
undefined FUN_00eee0f4;
undefined FUN_00eee2bc;
undefined FUN_00eee448;
undefined FUN_00ee8794;
undefined FUN_00ee8ae8;
undefined FUN_00ee56c0;
undefined UNK_01bf3730;
undefined UNK_01bf3740;
undefined UNK_01bf3764;
undefined FUN_00ee6954;
undefined UNK_01bf37a4;
undefined UNK_01bf3808;
undefined FUN_00ee6d98;
undefined UNK_01bf3898;
undefined UNK_01bf395c;
undefined FUN_00ee5c70;
undefined FUN_00ee5e94;
undefined FUN_00ee60f4;
undefined FUN_00ee6220;
undefined DAT_01bf3a58;
undefined DAT_01bf3a5c;
undefined FUN_00ee76ac;
undefined FUN_00ee77fc;
undefined FUN_00ee7ae0;
undefined FUN_00ee7b94;
undefined *PTR_FUN_02824588;
undefined *PTR_FUN_028245d8;
undefined4 *DAT_03214960;
undefined4 DAT_032149b8;
undefined8 DAT_03214978;
undefined *PTR_FUN_02824628;
undefined *PTR_FUN_02824688;
void *DAT_03210ca0;
long DAT_03210ca0;
undefined *PTR_FUN_028246b0;
void *DAT_03210ca8;
undefined8 DAT_03210ca8;
uint DAT_02bf257c;
undefined FUN_00ef080c;
undefined1 DAT_03210cc0;
undefined8 DAT_03210cb0;
undefined4 DAT_03210cb8;
undefined *PTR_FUN_02bf2580;
undefined *PTR_free_02bf2588;
undefined FUN_00ef1250;
undefined free;
undefined1 DAT_03210cd0;
float DAT_03210cc8;
undefined DAT_01bf3e80;
undefined *PTR_FUN_028246d8;
undefined8 DAT_03214ff0;
undefined8 DAT_03214f88;
undefined8 DAT_03214e28;
undefined8 DAT_03214e30;
undefined *PTR_FUN_02824728;
undefined *PTR_FUN_02824788;
pthread_key_t DAT_032112d0;
undefined *PTR_FUN_028247c0;
pointer PTR_FUN_02824820;
undefined thunk_FUN_00efbb6c;
undefined FUN_00efbc50;
pointer PTR_FUN_02824840;
undefined *PTR_FUN_02824860;
undefined *PTR_FUN_02824888;
undefined *PTR_FUN_028248e8;
undefined *PTR_FUN_02824910;
undefined *PTR_FUN_02824970;
void *DAT_03210cd8;
undefined8 DAT_03210cd8;
undefined *PTR_FUN_028249a8;
undefined *PTR_FUN_028249f8;
undefined8 DAT_03210d00;
undefined *PTR_FUN_02824a40;
undefined *PTR_FUN_02824a88;
undefined *PTR_FUN_028252b0;
undefined *PTR_FUN_02824ad0;
undefined *PTR_FUN_02824b18;
undefined *PTR_FUN_02824b60;
undefined *PTR_FUN_02824ba8;
undefined *PTR_FUN_02824bf0;
undefined *PTR_FUN_02824c38;
undefined *PTR_FUN_02824c80;
undefined *PTR_FUN_02824cc8;
undefined *PTR_FUN_02824d10;
undefined *PTR_FUN_02824d58;
undefined *PTR_FUN_02824da0;
undefined *PTR_FUN_02824de8;
undefined *PTR_FUN_02824e30;
undefined *PTR_FUN_02824e78;
undefined *PTR_FUN_02824ec0;
undefined *PTR_FUN_02824f08;
undefined *PTR_FUN_02824f50;
undefined *PTR_FUN_02824f98;
undefined *PTR_FUN_02824fe0;
undefined *PTR_FUN_02825028;
undefined *PTR_FUN_028252f8;
pointer PTR_FUN_02825340;
void *DAT_03210d00;
void *DAT_03210ce8;
void *DAT_03210cf0;
void *DAT_03210cf8;
long *DAT_03210cf0;
long *DAT_03210cf8;
long *DAT_03210d00;
undefined8 DAT_03210ce8;
undefined8 DAT_03210d08;
undefined8 DAT_03210d10;
undefined8 DAT_03210cf0;
long DAT_03210ce8;
undefined FUN_00f00708;
undefined FUN_00f007bc;
undefined FUN_00f0084c;
undefined8 UNK_032154d0;
undefined8 UNK_032154e0;
undefined8 UNK_032154f0;
undefined4 *DAT_032157d0;
undefined8 *DAT_03215378;
undefined4 DAT_03215380;
uint DAT_0321561c;
undefined DAT_032154a8;
undefined DAT_032154d8;
undefined DAT_032154e8;
undefined DAT_032154b8;
undefined DAT_032154c8;
undefined8 UNK_03215480;
undefined8 UNK_03215490;
undefined8 UNK_032154a0;
undefined8 UNK_032154b0;
undefined8 UNK_032154c0;
undefined *PTR_FUN_028253a8;
ulong DAT_03210f10;
ulong DAT_03210f18;
ulong DAT_03210f20;
undefined *PTR_FUN_02825360;
undefined DAT_03215620;
undefined UNK_01010000;
undefined DAT_01bf3f08;
undefined DAT_01bf3f28;
undefined DAT_01bf3f48;
uint DAT_0321564c;
undefined UNK_01bf3f18;
undefined DAT_01bf3f60;
undefined DAT_01bf3f88;
undefined4 DAT_03215650;
undefined DAT_03215654;
long DAT_03215640;
uint DAT_03215648;
uint DAT_03215634;
undefined DAT_01bf3f6c;
int DAT_03215380;
long DAT_03215378;
undefined4 DAT_032154b8;
undefined DAT_032154f8;
undefined4 DAT_03215538;
undefined4 DAT_03215578;
undefined DAT_032155b8;
undefined4 DAT_032155f8;
uint DAT_03210f38;
long DAT_03210f40;
long DAT_03210f48;
void *DAT_03210f48;
char DAT_03210ce0;
undefined *PTR_FUN_02825558;
int DAT_03210f58;
int DAT_03210f60;
int DAT_03210f64;
int DAT_03210f6c;
int DAT_03210f70;
int DAT_03210f78;
undefined *PTR_FUN_02825580;
undefined *PTR_FUN_028255a8;
undefined *PTR_FUN_028255d0;
undefined *PTR_FUN_028255f8;
undefined *PTR_FUN_02825620;
int DAT_03210fdc;
int DAT_03210fe0;
int DAT_03210fe8;
int DAT_03210fec;
pointer PTR_FUN_02825648;
byte DAT_02bf2590;
undefined4 DAT_01bf42c0;
undefined FUN_00f0748c;
undefined FUN_00f074c8;
undefined FUN_00f07118;
void *DAT_03210ff8;
long DAT_03210ff8;
undefined8 DAT_03210ff8;
undefined *PTR_FUN_02825668;
undefined *PTR___cxa_pure_virtual_028256c8;
undefined DAT_01bf4370;
undefined DAT_01bf4390;
undefined DAT_01bf42d0;
undefined DAT_01bf42f0;
undefined DAT_01bf4320;
undefined DAT_01bf4350;
undefined4 DAT_01bf43b0;
undefined4 DAT_01bf44f0;
undefined4 DAT_01bf4530;
undefined4 DAT_01bf45b4;
undefined *PTR_FUN_02825878;
undefined *PTR_FUN_02825978;
undefined *PTR_FUN_02825ae0;
undefined *PTR_thunk_FUN_00f13d08_02825b28;
undefined *PTR_FUN_02825c88;
undefined FUN_00f0b7d4;
undefined *PTR_FUN_02825cd0;
undefined1 DAT_03211008;
undefined8 DAT_03211000;
undefined *PTR_FUN_02825f68;
undefined *PTR_thunk_FUN_00f13d08_028260b8;
undefined *PTR_FUN_02826218;
undefined *PTR_FUN_02826260;
undefined *PTR_FUN_02826530;
undefined *PTR_FUN_028266a8;
undefined *PTR_FUN_02826898;
undefined *PTR_FUN_028269f8;
undefined *PTR_FUN_02826a40;
undefined *PTR_FUN_02826ba0;
undefined *PTR_FUN_02826be8;
undefined *PTR_FUN_02826d48;
undefined4 DAT_03211010;
int DAT_03211014;
int DAT_03211018;
int DAT_0321101c;
undefined4 DAT_03211020;
int DAT_03211024;
int DAT_03211028;
int DAT_0321102c;
undefined *PTR_FUN_02827440;
undefined *PTR_FUN_02827760;
undefined *PTR_FUN_028278e0;
undefined *PTR_FUN_02827928;
undefined *PTR_FUN_02827aa8;
undefined *PTR_FUN_02827af0;
undefined *PTR_FUN_02827c70;
undefined FUN_00f13054;
undefined *PTR_FUN_02827e80;
undefined *PTR_FUN_02828118;
undefined8 *DAT_03211030;
pointer PTR_FUN_02828218;
long *DAT_03211030;
long DAT_03211030;
undefined *PTR_FUN_02828238;
undefined *PTR_FUN_02828310;
undefined *PTR_FUN_028283e8;
undefined *PTR_FUN_028285e8;
int DAT_03211258;
int DAT_0321125c;
undefined *PTR_FUN_028286c0;
uint DAT_03211258;
uint DAT_0321125c;
undefined1 DAT_03211058;
undefined *PTR_s_NuoWebViewManager_02bf25b8;
undefined8 DAT_03211040;
undefined *PTR_FUN_02828778;
pointer PTR_FUN_02828818;
undefined1 DAT_03211078;
undefined8 DAT_03211060;
pointer PTR_FUN_02828838;
undefined1 DAT_03211098;
undefined8 DAT_03211080;
pointer PTR_FUN_02828858;
undefined1 DAT_032110b8;
undefined8 DAT_032110a0;
pointer PTR_FUN_02828878;
undefined1 DAT_032110d8;
undefined8 DAT_032110c0;
pointer PTR_FUN_02828898;
undefined1 DAT_032110f8;
undefined8 DAT_032110e0;
undefined DAT_01bf470f;
pointer PTR_FUN_028288b8;
undefined1 DAT_03211118;
undefined8 DAT_03211100;
pointer PTR_FUN_028288d8;
undefined1 DAT_03211138;
undefined8 DAT_03211120;
pointer PTR_FUN_028288f8;
undefined1 DAT_03211158;
undefined8 DAT_03211140;
pointer PTR_FUN_02828918;
undefined1 DAT_03211178;
undefined8 DAT_03211160;
pointer PTR_FUN_02828938;
undefined1 DAT_03211198;
undefined8 DAT_03211180;
pointer PTR_FUN_02828958;
undefined1 DAT_032111b8;
undefined8 DAT_032111a0;
pointer PTR_FUN_02828978;
undefined1 DAT_032111d8;
undefined8 DAT_032111c0;
pointer PTR_FUN_02828998;
undefined1 DAT_032111f8;
undefined8 DAT_032111e0;
pointer PTR_FUN_028289b8;
undefined1 DAT_03211218;
undefined8 DAT_03211200;
pointer PTR_FUN_028289d8;
undefined1 DAT_03211238;
undefined8 DAT_03211220;
pointer PTR_FUN_028289f8;
undefined DAT_01bf47b1;
undefined DAT_01bf47b6;
undefined DAT_01bf47bb;
undefined DAT_01bf47c0;
undefined DAT_01bf47c5;
undefined DAT_01bf47ca;
undefined DAT_01bf47cf;
undefined DAT_01bf47d4;
undefined *PTR_FUN_02828a18;
undefined *PTR_FUN_02828a78;
undefined *PTR_FUN_02828ae0;
void *DAT_03211268;
undefined8 DAT_03211268;
long DAT_03211268;
undefined *PTR_FUN_02828b40;
undefined *PTR_FUN_02828bb0;
undefined FUN_00f1f474;
undefined *PTR_FUN_02828c20;
undefined parse_string;
undefined *PTR_FUN_02828c90;
undefined FUN_00f203ec;
undefined *PTR_FUN_02828d00;
undefined FUN_00f2057c;
undefined *PTR_FUN_02828d70;
undefined FUN_00f20dd0;
undefined thunk_FUN_00f212d4;
pointer PTR_FUN_02828e00;
undefined thunk_FUN_00f213d0;
undefined FUN_00f214fc;
undefined FUN_00f2170c;
undefined FUN_00f219b8;
undefined8 *DAT_032112d8;
void *DAT_032112d8;
undefined8 DAT_032112d8;
undefined DAT_02bf25c0;
undefined DAT_02bf25c8;
undefined DAT_02bf25e0;
undefined DAT_02bf25f0;
undefined DAT_02bf2600;
undefined DAT_02bf2608;
undefined DAT_02bf2610;
undefined DAT_02bf2614;
char DAT_02bf2680;
byte DAT_02bf2681;
int DAT_02bf2684;
undefined FUN_00f26ac8;
undefined FUN_00f26ad0;
undefined DAT_02828e10;
undefined DAT_02828e12;
undefined DAT_02828e14;
undefined DAT_02828e16;
pointer PTR_FUN_02828e18;
undefined DAT_01bf4a98;
undefined1 DAT_01bf4898;
pointer PTR_DAT_02bf2690;
pointer PTR_DAT_02bf26b0;
undefined DAT_02bf26d0;
undefined DAT_01bf4b98;
undefined DAT_01bf5018;
undefined1 DAT_01bf51c8;
undefined DAT_01bf5090;
undefined DAT_01bf5104;
undefined DAT_01bf51dc;
undefined DAT_01bf5250;
undefined *PTR_s_need_dictionary_02828eb0;
undefined DAT_01bf533c;
undefined DAT_01bf573c;
undefined DAT_01bf5b3c;
undefined DAT_01bf5f3c;
undefined DAT_01bf73c4;
undefined UNK_01bf73ea;
undefined DAT_01bf7bea;
void *DAT_032112e8;
long DAT_032112e8;
uint DAT_03212068;
undefined4 DAT_0321206c;
undefined8 DAT_03212070;
undefined8 DAT_03212078;
undefined DAT_032113e8;
undefined FUN_00f2a260;
undefined FUN_00f2a398;
undefined *PTR_FUN_02828f10;
uint DAT_03212080;
undefined FUN_00f2bcb0;
undefined DAT_01bf7fdc;
undefined DAT_01bf7ff4;
undefined *PTR_FUN_02828f38;
undefined8 DAT_03215388;
undefined8 DAT_032157d0;
undefined *PTR_FUN_02828f98;
ulong DAT_03215620;
undefined DAT_01bf8050;
undefined DAT_01bf8060;
undefined *PTR_FUN_02828ff8;
undefined DAT_03215538;
undefined DAT_03215548;
undefined DAT_03215558;
undefined DAT_03215568;
undefined8 UNK_03215540;
undefined8 UNK_03215550;
undefined8 UNK_03215560;
undefined8 UNK_03215570;
pointer PTR_FUN_02829058;
void *DAT_03212088;
undefined8 DAT_03212088;
undefined *PTR_FUN_02829078;
undefined UNK_01bf8100;
undefined DAT_01bf8124;
undefined DAT_01bf8130;
undefined DAT_01bf813c;
undefined DAT_01bf8150;
pointer PTR_s_OmniLight.Position_02bf2858;
undefined *PTR_FUN_028290b0;
undefined *PTR_FUN_02829140;
undefined *PTR_FUN_028291b8;
undefined *PTR_FUN_028290f8;
undefined *PTR_FUN_02829200;
undefined *PTR_FUN_02829260;
undefined DAT_01bf81f4;
int DAT_03212188;
char DAT_0321218c;
undefined8 DAT_03212190;
undefined4 DAT_032141a0;
uint DAT_03214198;
undefined4 DAT_0321419c;
undefined1 DAT_032142a8;
undefined DAT_03212198;
undefined FUN_00f33f2c;
undefined1 DAT_0321218c;
undefined FUN_00f34094;
undefined FUN_00f340f8;
undefined FUN_00f34148;
void *DAT_032142b0;
void *DAT_032142b8;
long *DAT_032142b8;
undefined8 DAT_032142b0;
undefined8 DAT_032142b8;
byte DAT_032142c0;
byte DAT_03215628;
undefined *PTR_FUN_028292d0;
ulong DAT_032142c8;
ulong DAT_032142d0;
ulong DAT_032142d8;
undefined *PTR_FUN_02829288;
undefined8 DAT_01bf82f0;
undefined8 DAT_01bf8380;
undefined FUN_00f3b0ac;
undefined FUN_00f3b0e8;
undefined *PTR_FUN_02829300;
undefined FUN_00f3b190;
undefined *PTR_FUN_02829328;
undefined FUN_00f3b170;
undefined *PTR_FUN_02829350;
undefined FUN_00f3b118;
undefined FUN_00f3b144;
undefined *PTR_FUN_02829378;
undefined *PTR_FUN_028293a0;
undefined FUN_00f3b0f8;
undefined DAT_028293b8;
pointer PTR_FUN_028293c0;
undefined DAT_01c15680;
undefined DAT_01c1a980;
undefined DAT_01c16480;
undefined DAT_01c0f780;
undefined DAT_01c13d80;
undefined DAT_01c17280;
undefined DAT_01c00480;
undefined DAT_01c1a480;
undefined DAT_01bf8d80;
undefined DAT_01c19c80;
undefined DAT_01bf8e80;
undefined DAT_01bf8f80;
undefined DAT_01bf9080;
undefined DAT_01c1ae80;
undefined DAT_01c15980;
undefined DAT_01bf9180;
undefined DAT_01c11080;
undefined DAT_01c0dc80;
undefined DAT_01bf9280;
undefined DAT_01c03880;
undefined DAT_01c01580;
undefined DAT_01c11d80;
undefined DAT_01c11c80;
undefined DAT_01c19d80;
undefined DAT_01c11e80;
undefined DAT_01c1aa80;
undefined DAT_01bf9380;
undefined DAT_01bfce80;
undefined DAT_01c15380;
undefined DAT_01c19480;
undefined DAT_01c13a80;
undefined4 DAT_01bf8590;
undefined DAT_01bf9480;
undefined DAT_01bf9580;
undefined4 DAT_01bf85a8;
undefined DAT_01bf9680;
undefined DAT_01c17080;
undefined DAT_01bf9780;
undefined DAT_01c18580;
undefined DAT_01bfc480;
undefined DAT_01c17e80;
undefined DAT_01c08d80;
undefined DAT_01c00780;
undefined DAT_01c13c80;
undefined DAT_01bfde80;
undefined DAT_01c16080;
undefined DAT_01bf9880;
undefined DAT_01c16d80;
undefined DAT_01c1a180;
undefined DAT_01c10280;
undefined DAT_01c17780;
undefined DAT_01bf9980;
undefined DAT_01c0bf80;
undefined DAT_01c0c080;
undefined DAT_01c0ce80;
undefined DAT_01c17180;
undefined DAT_01bf9a80;
undefined DAT_01bf9b80;
undefined DAT_01c11780;
undefined DAT_01bf9c80;
undefined DAT_01bf9d80;
undefined DAT_01c17a80;
undefined DAT_01c18380;
undefined DAT_01c18180;
undefined DAT_01bf9e80;
undefined DAT_01c0d780;
undefined DAT_01c1ab80;
undefined DAT_01bf9f80;
undefined DAT_01bfa080;
undefined DAT_01bfa180;
undefined DAT_01bfa280;
undefined DAT_01bfa380;
undefined DAT_01bfa480;
undefined DAT_01c0a780;
undefined DAT_01bfa580;
undefined DAT_01bfa680;
undefined DAT_01bfa780;
undefined DAT_01bfa880;
undefined DAT_01bfa980;
undefined DAT_01bfaa80;
undefined DAT_01c09980;
undefined DAT_01bfab80;
undefined DAT_01bfac80;
undefined DAT_01c0ff80;
undefined DAT_01c19a80;
undefined DAT_01bfad80;
undefined DAT_01c18780;
undefined DAT_01c14a80;
undefined DAT_01bfae80;
undefined DAT_01bfb280;
undefined DAT_01bfaf80;
undefined DAT_01bfb080;
undefined DAT_01bfb180;
undefined DAT_01bfb380;
undefined DAT_01bfb480;
undefined DAT_01c17980;
undefined DAT_01c0df80;
undefined DAT_01bfb580;
undefined DAT_01bfb780;
undefined DAT_01bfb880;
undefined DAT_01bfb980;
undefined DAT_01bfba80;
undefined DAT_01bfb680;
undefined DAT_01bfbc80;
undefined DAT_01bfbb80;
undefined DAT_01bfbd80;
undefined DAT_01bfbe80;
undefined DAT_01c0ef80;
undefined DAT_01c1a280;
undefined DAT_01bfbf80;
undefined DAT_01c14c80;
undefined DAT_01c19880;
undefined DAT_01bfc080;
undefined DAT_01c19980;
undefined DAT_01c1ad80;
undefined DAT_01bfc180;
undefined DAT_01c09880;
undefined DAT_01bfc280;
undefined DAT_01bfc380;
undefined DAT_01bfc580;
undefined DAT_01c12c80;
undefined DAT_01c0af80;
undefined DAT_01c19b80;
undefined DAT_01bfc680;
undefined DAT_01bfc780;
undefined DAT_01bfc880;
undefined DAT_01bfc980;
undefined DAT_01bfca80;
undefined DAT_01bfcb80;
undefined DAT_01bfcc80;
undefined DAT_01bfcd80;
undefined DAT_01c00580;
undefined DAT_01bfcf80;
undefined DAT_01bfd080;
undefined DAT_01bfd180;
undefined DAT_01bfd280;
undefined DAT_01bfd380;
undefined DAT_01bfd480;
undefined DAT_01c10c80;
undefined DAT_01bfd580;
undefined DAT_01bfd680;
undefined DAT_01bfd780;
undefined DAT_01bfd880;
undefined DAT_01c0e280;
undefined DAT_01c0e180;
undefined DAT_01c0e380;
undefined DAT_01c17680;
undefined DAT_01c1a380;
undefined DAT_01bfd980;
undefined DAT_01bfda80;
undefined DAT_01bfdb80;
undefined DAT_01c0c880;
undefined DAT_01bfdc80;
undefined DAT_01bfdd80;
undefined DAT_01bfdf80;
undefined DAT_01bfe080;
undefined DAT_01bfe180;
undefined DAT_01bfe280;
undefined DAT_01c0a680;
undefined DAT_01bfe380;
undefined DAT_01c15480;
undefined DAT_01bfe480;
undefined DAT_01c10f80;
undefined DAT_01c0b080;
undefined DAT_01bfe580;
undefined DAT_01bfe680;
undefined DAT_01bfe780;
undefined DAT_01c12880;
undefined DAT_01c01780;
undefined DAT_01c16380;
undefined DAT_01c00380;
undefined DAT_01bfe880;
undefined DAT_01bfe980;
undefined DAT_01c12780;
undefined DAT_01c15a80;
undefined DAT_01c12680;
undefined DAT_01bfeb80;
undefined DAT_01bfea80;
undefined DAT_01bfec80;
undefined DAT_01bfed80;
undefined DAT_01bfee80;
undefined DAT_01bfef80;
undefined DAT_01bff080;
undefined DAT_01bff180;
undefined DAT_01bff280;
undefined DAT_01bff380;
undefined DAT_01bff480;
undefined DAT_01c11480;
undefined DAT_01bff580;
undefined DAT_01bff680;
undefined DAT_01bff780;
undefined DAT_01c14e80;
undefined DAT_01c06b80;
undefined DAT_01bff880;
undefined DAT_01bff980;
undefined DAT_01c07580;
undefined DAT_01c0c480;
undefined DAT_01bffa80;
undefined DAT_01bffb80;
undefined DAT_01bffc80;
undefined DAT_01bffd80;
undefined DAT_01bffe80;
undefined DAT_01bfff80;
undefined DAT_01c00080;
undefined DAT_01c00180;
undefined DAT_01c00280;
undefined DAT_01c07680;
undefined DAT_01c0c380;
undefined DAT_01c0e980;
undefined DAT_01c07780;
undefined DAT_01c00680;
undefined DAT_01c00880;
undefined DAT_01c00980;
undefined DAT_01c00a80;
undefined DAT_01c00b80;
undefined DAT_01c00c80;
undefined DAT_01c00d80;
undefined DAT_01c00e80;
undefined DAT_01c00f80;
undefined DAT_01c01080;
undefined DAT_01c01180;
undefined DAT_01c14980;
undefined DAT_01c01280;
undefined DAT_01c01380;
undefined DAT_01c0b380;
undefined DAT_01c12d80;
undefined DAT_01c01480;
undefined DAT_01c01680;
undefined DAT_01c01880;
undefined DAT_01c01980;
undefined DAT_01c01a80;
undefined DAT_01c01b80;
undefined DAT_01c01c80;
undefined DAT_01c01d80;
undefined DAT_01c01e80;
undefined DAT_01c01f80;
undefined DAT_01c02080;
undefined DAT_01c02280;
undefined DAT_01c02180;
undefined DAT_01c02380;
undefined DAT_01c02480;
undefined DAT_01c02580;
undefined DAT_01c02680;
undefined DAT_01c02780;
undefined DAT_01c02880;
undefined DAT_01c02980;
undefined DAT_01c04880;
undefined DAT_01c02a80;
undefined DAT_01c02b80;
undefined DAT_01c02c80;
undefined DAT_01c02d80;
undefined DAT_01c03a80;
undefined DAT_01c0b180;
undefined DAT_01c02e80;
undefined DAT_01c03b80;
undefined DAT_01c0dd80;
undefined DAT_01c02f80;
undefined DAT_01c03080;
undefined DAT_01c16e80;
undefined DAT_01c03180;
undefined DAT_01c03280;
undefined DAT_01c1a880;
undefined DAT_01c03380;
undefined DAT_01c03480;
undefined DAT_01c03580;
undefined DAT_01c0a280;
undefined DAT_01c0a980;
undefined DAT_01c0a380;
undefined DAT_01c0a480;
undefined DAT_01c0a580;
undefined DAT_01c0a880;
undefined DAT_01c03680;
undefined DAT_01c03780;
undefined DAT_01c03980;
undefined DAT_01c16180;
undefined DAT_01c03c80;
undefined DAT_01c03d80;
undefined DAT_01c03e80;
undefined DAT_01c03f80;
undefined DAT_01c04080;
undefined DAT_01c04180;
undefined DAT_01c04280;
undefined DAT_01c04380;
undefined DAT_01c04480;
undefined DAT_01c04580;
undefined DAT_01c04680;
undefined DAT_01c04780;
undefined DAT_01c04980;
undefined DAT_01c04a80;
undefined DAT_01c04b80;
undefined DAT_01c04c80;
undefined DAT_01c06580;
undefined DAT_01c04d80;
undefined DAT_01c04e80;
undefined DAT_01c06780;
undefined DAT_01c06880;
undefined4 DAT_01bf88f0;
undefined DAT_01c04f80;
undefined DAT_01c05080;
undefined DAT_01c05180;
undefined DAT_01c05280;
undefined DAT_01c05380;
undefined DAT_01c05480;
undefined DAT_01c05580;
undefined DAT_01c05680;
undefined DAT_01c05780;
undefined DAT_01c05880;
undefined DAT_01c05980;
undefined DAT_01c05a80;
undefined DAT_01c05b80;
undefined DAT_01c05c80;
undefined DAT_01c05d80;
undefined DAT_01c17380;
undefined DAT_01c16b80;
undefined DAT_01c05e80;
undefined DAT_01c05f80;
undefined DAT_01c06080;
undefined DAT_01c06180;
undefined DAT_01c06280;
undefined DAT_01c06380;
undefined DAT_01c06480;
undefined DAT_01c06680;
undefined DAT_01c06980;
undefined DAT_01c06a80;
undefined DAT_01c06c80;
undefined DAT_01c06d80;
undefined DAT_01c06e80;
undefined DAT_01c06f80;
undefined DAT_01c07080;
undefined DAT_01c07180;
undefined DAT_01c07280;
undefined DAT_01c07380;
undefined DAT_01c07480;

void FUN_00ec8f10(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00ec8f34(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((DAT_032108f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_032108f0), iVar2 != 0)) {
    FUN_00e734e4(&DAT_032108d8,"NuoShare","shareScreenshotAndroid","(Ljava/lang/String;)V");
    DAT_032108d8 = &PTR_FUN_02821f60;
    __cxa_atexit(FUN_00e748b8,&DAT_032108d8,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_032108f0);
  }
  uVar3 = FUN_00e7368c(&DAT_032108d8);
  FUN_00e73e94(auStack_48,uVar3,param_1);
  uVar4 = FUN_00e7410c(auStack_48);
  FUN_00e73934(&DAT_032108d8,uVar3,uVar4);
  FUN_00e740f0(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

