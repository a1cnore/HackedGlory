// functions/00e7a — 68 functions
#include "libGameKindred.h"




void FUN_00e7a030(undefined *param_1)

{
  undefined8 *puVar1;
  
  if (PTR_s___Main_OS_Serial_Queue_02bf24e8 == param_1) {
    puVar1 = &DAT_03210578;
  }
  else if (PTR_s___Render_Serial_Queue_02bf24f0 == param_1) {
    puVar1 = &DAT_03210580;
  }
  else if (PTR_s___Update_Serial_Queue_02bf24f8 == param_1) {
    puVar1 = &DAT_03210588;
  }
  else if (PTR_s___Default_Concurrent_Queue_02bf2500 == param_1) {
    puVar1 = &DAT_03210590;
  }
  else {
    if (PTR_s___LongRunning_Concurrent_Queue_02bf2508 != param_1) {
      return;
    }
    puVar1 = &DAT_03210598;
  }
  *puVar1 = 0;
  return;
}




undefined8 FUN_00e7a0c4(void)

{
  return DAT_03210578;
}




long FUN_00e7a0d0(void)

{
  long lVar1;
  
  lVar1 = DAT_03210578;
  if (DAT_03210580 != 0) {
    lVar1 = DAT_03210580;
  }
  return lVar1;
}




long FUN_00e7a0ec(void)

{
  long lVar1;
  
  lVar1 = DAT_03210578;
  if (DAT_03210588 != 0) {
    lVar1 = DAT_03210588;
  }
  return lVar1;
}




long FUN_00e7a108(void)

{
  long lVar1;
  
  lVar1 = DAT_03210578;
  if (DAT_03210590 != 0) {
    lVar1 = DAT_03210590;
  }
  return lVar1;
}




long FUN_00e7a124(void)

{
  long lVar1;
  
  lVar1 = DAT_03210578;
  if (DAT_03210598 != 0) {
    lVar1 = DAT_03210598;
  }
  return lVar1;
}




void thunk_FUN_00e7a610(undefined4 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x6960);
  FUN_00e7a648(pvVar1,param_1);
  DAT_032105a8 = pvVar1;
  return;
}




void thunk_FUN_00e7a73c(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_032105a8;
  if (DAT_032105a8 != (void *)0x0) {
    FUN_00e7a774(DAT_032105a8);
    operator_delete(pvVar1);
  }
  DAT_032105a8 = (void *)0x0;
  return;
}




void FUN_00e7a148(void)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00e7b6f4(&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}




void thunk_FUN_00e7a198(void)

{
  long lVar1;
  
  lVar1 = FUN_00e7b384();
  if (*(int *)(lVar1 + 0x60) != 0) {
    return;
  }
  FUN_00e7b3d4();
  return;
}




void FUN_00e7a198(void)

{
  long lVar1;
  
  lVar1 = FUN_00e7b384();
  if (*(int *)(lVar1 + 0x60) != 0) {
    return;
  }
  FUN_00e7b3d4();
  return;
}




void thunk_FUN_00e7a1c0(void)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_00e7b384();
  while (uVar2 = FUN_00e7b558(0x3a83126f,uVar1), (uVar2 & 1) == 0) {
    FUN_00e794e0();
  }
  return;
}




void FUN_00e7a1c0(void)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_00e7b384();
  while (uVar2 = FUN_00e7b558(0x3a83126f,uVar1), (uVar2 & 1) == 0) {
    FUN_00e794e0();
  }
  return;
}




bool FUN_00e7a208(void)

{
  long lVar1;
  
  lVar1 = FUN_00e7a3b4();
  return lVar1 != 0;
}




void FUN_00e7a224(void)

{
  FUN_00e7a3b4();
  return;
}




int FUN_00e7a238(pthread_key_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_key_delete(*param_1);
  return iVar1;
}




long FUN_00e7a240(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0xc) != param_2)) {
    lVar1 = 0;
  }
  return lVar1;
}




long FUN_00e7a25c(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = 0;
  while ((lVar1 = *(long *)(param_1 + 0x10 + uVar2 * 8), lVar1 == 0 ||
         (*(int *)(lVar1 + 0xc) != param_2))) {
    uVar2 = uVar2 + 1;
    if (1 < uVar2) {
      return 0;
    }
  }
  return lVar1;
}




void FUN_00e7a28c(long param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  iVar1 = 0;
  if (0 < param_3) {
    lVar2 = 2;
    do {
      lVar3 = *(long *)(param_1 + lVar2 * 8);
      if (lVar3 != 0) {
        *(long *)(param_2 + (long)iVar1 * 8) = lVar3;
        iVar1 = iVar1 + 1;
      }
      uVar4 = lVar2 - 1;
    } while ((uVar4 < 2) && (lVar2 = lVar2 + 1, (long)uVar4 < (long)param_3));
  }
  return;
}




void FUN_00e7a2d0(long param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0xc) = param_3;
  *(long *)(param_1 + 0x20) = param_2;
  FUN_00e7a3ec(param_2);
  return;
}




undefined8 FUN_00e7a2e0(undefined8 *param_1)

{
  return *param_1;
}




undefined4 FUN_00e7a2e8(undefined4 *param_1)

{
  return *param_1;
}




void FUN_00e7a2f0(long param_1)

{
  FUN_00e7b384(*(undefined8 *)(param_1 + 0x28));
  FUN_00e7b0e8();
  return;
}




void FUN_00e7a308(long param_1,undefined8 *param_2,uint param_3,undefined8 *param_4,uint param_5,
                 undefined4 param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)param_3;
  uVar1 = FUN_00e7b384(*(undefined8 *)(param_1 + 0x28));
  if (0 < (int)param_5) {
    uVar3 = (ulong)param_5;
    do {
      FUN_00e7b474(uVar1,*param_4,param_6);
      uVar3 = uVar3 - 1;
      param_4 = param_4 + 1;
    } while (uVar3 != 0);
  }
  if (0 < (int)param_3) {
    do {
      FUN_00e7b40c(uVar1,*param_2);
      uVar2 = uVar2 - 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_00e7a398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




int FUN_00e7a3a0(void *param_1)

{
  int iVar1;
  
  iVar1 = pthread_setspecific(DAT_032105a4,param_1);
  return iVar1;
}




void FUN_00e7a3b4(void)

{
  pthread_getspecific(DAT_032105a4);
  return;
}




void FUN_00e7a3c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028207b0;
  param_1[1] = 0;
  return;
}




void FUN_00e7a3d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028207b0;
  return;
}




void FUN_00e7a3ec(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}




void FUN_00e7a404(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 1);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((param_1 != (undefined8 *)0x0) && (iVar2 == 1)) {
    (**(code **)*param_1)(param_1);
    FUN_00e7a864(param_1);
    return;
  }
  return;
}




void FUN_00e7a460(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1);
    FUN_00e7a864(param_1);
    return;
  }
  return;
}




void FUN_00e7a4a0(long param_1)

{
  FUN_01b13ff8();
  FUN_00e77acc(param_1 + 0x20,0);
  return;
}




void FUN_00e7a4c8(long param_1)

{
  FUN_01b14008();
  FUN_00e77acc(param_1 + 0x20,0);
  return;
}




int FUN_00e7a4f0(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x20));
  FUN_01b14018(param_1,param_2,param_3);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x20));
  return iVar1;
}




undefined8 FUN_00e7a53c(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x20));
  uVar1 = FUN_01b140e8(param_1,param_2,param_3);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x20));
  return uVar1;
}




int FUN_00e7a598(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x20));
  FUN_01b14408(param_1,param_2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x20));
  return iVar1;
}




int FUN_00e7a5dc(long param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x20));
  FUN_01b140c0(param_1);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x20));
  return iVar1;
}




void FUN_00e7a610(undefined4 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x6960);
  FUN_00e7a648(pvVar1,param_1);
  DAT_032105a8 = pvVar1;
  return;
}




int FUN_00e7a648(undefined8 *param_1,ulong param_2)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  sem_t *__sem;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = 0;
  FUN_01b13ff8(param_1 + 1);
  __mutex = (pthread_mutex_t *)(param_1 + 5);
  FUN_00e77acc(__mutex,0);
  lVar4 = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xffff0000;
  do {
    __sem = operator_new(0x10);
    *(sem_t **)((long)param_1 + lVar4 + 0x50) = __sem;
    sem_init(__sem,0x1c0,0);
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x80);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  FUN_00e77acc(param_1 + 0x1e,0);
  lVar4 = 1;
  puVar3 = param_1 + 0x24;
  do {
    *(short *)puVar3 = (short)lVar4;
    lVar4 = lVar4 + 1;
    puVar3 = puVar3 + 0xd;
  } while (lVar4 != 0x100);
  param_1[0xd24] = 0xff0000;
  FUN_00e77acc(param_1 + 0xd26,0);
  pvVar2 = operator_new__(param_2 & 0xffffffff);
  *param_1 = pvVar2;
  pthread_mutex_lock(__mutex);
  FUN_01b14018(param_1 + 1,pvVar2,param_2 & 0xffffffff);
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_00e7a73c(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_032105a8;
  if (DAT_032105a8 != (void *)0x0) {
    FUN_00e7a774(DAT_032105a8);
    operator_delete(pvVar1);
  }
  DAT_032105a8 = (void *)0x0;
  return;
}




int FUN_00e7a774(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  
  FUN_00e7ac00(param_1 + 0x1b);
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete__((void *)*param_1);
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xd26));
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x1e));
  lVar2 = 0;
  do {
    FUN_00e7aca8(param_1 + 10,(long)(param_1 + 10) + lVar2);
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x80);
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 5));
  return iVar1;
}




void FUN_00e7a7e4(undefined4 param_1)

{
  FUN_00e7a7f8(DAT_032105a8,param_1);
  return;
}




void * FUN_00e7a7f8(long param_1,uint param_2)

{
  void *pvVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
  pvVar1 = (void *)FUN_01b140e8(param_1 + 8,param_2,0x10);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
  pvVar1 = operator_new__((ulong)param_2);
  return pvVar1;
}




void FUN_00e7a864(undefined8 param_1)

{
  FUN_00e7a878(DAT_032105a8,param_1);
  return;
}




ulong FUN_00e7a878(long param_1,void *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong extraout_x0;
  
  uVar2 = FUN_01b14098(param_1 + 8);
  if ((uVar2 & 1) != 0) {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x28));
    FUN_01b14408(param_1 + 8,param_2);
    uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x28));
    return (ulong)uVar1;
  }
  if (param_2 != (void *)0x0) {
    operator_delete__(param_2);
    return extraout_x0;
  }
  return uVar2;
}




void FUN_00e7a8f4(void)

{
  FUN_00e7a910(DAT_032105a8);
  return;
}




undefined8 * FUN_00e7a910(long param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  sem_t *__sem;
  long lVar5;
  uint uVar6;
  
  puVar1 = (uint *)(param_1 + 0xd0);
  do {
    uVar6 = *puVar1;
    if (uVar6 == 0xffffffff) {
LAB_00e7a97c:
      puVar4 = operator_new(8);
      __sem = operator_new(0x10);
      *puVar4 = __sem;
      sem_init(__sem,0x1c0,0);
      return puVar4;
    }
    while (*puVar1 == uVar6) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar6 + 1 | uVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        uVar6 = uVar6 + 1 & (uVar6 ^ 0xffffffff);
        lVar5 = -0x48;
        do {
          uVar6 = uVar6 >> 1;
          lVar5 = lVar5 + -8;
        } while (uVar6 != 0);
        if (((int)lVar5 != -0xd0) && ((undefined8 *)(param_1 - lVar5) != (undefined8 *)0x0)) {
          return (undefined8 *)(param_1 - lVar5);
        }
        goto LAB_00e7a97c;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}




void FUN_00e7a9b0(undefined8 param_1)

{
  FUN_00e7a9c4(DAT_032105a8,param_1);
  return;
}




void FUN_00e7a9c4(long param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  sem_t *__sem;
  
  if ((param_2 < (long *)(param_1 + 0x50U)) || ((long *)(param_1 + 0xd0U) <= param_2)) {
    __sem = (sem_t *)*param_2;
    if (__sem != (sem_t *)0x0) {
      iVar5 = sem_destroy(__sem);
      *param_2 = (long)iVar5;
      operator_delete(__sem);
    }
    operator_delete(param_2);
    return;
  }
  uVar6 = (long)param_2 - (long)(param_1 + 0x50U);
  puVar1 = (uint *)(param_1 + (uVar6 >> 8 & 0x7ffffff) * 4 + 0xd0);
  do {
    uVar2 = *puVar1;
    while (*puVar1 == uVar2) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar2 & ~(1 << (ulong)((uint)uVar6 >> 3 & 0x1f));
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}




void FUN_00e7aa70(void)

{
  FUN_00e7aa8c(DAT_032105a8);
  return;
}




void * FUN_00e7aa8c(long param_1)

{
  void *pvVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x6930));
  pvVar1 = (void *)FUN_00e7acec(param_1 + 0x120);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x6930));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = operator_new(0x68);
    FUN_00e7afdc();
  }
  return pvVar1;
}




void FUN_00e7aae4(undefined8 param_1)

{
  FUN_00e7aaf8(DAT_032105a8,param_1);
  return;
}




ulong FUN_00e7aaf8(long param_1,void *param_2)

{
  uint uVar1;
  ulong extraout_x0;
  
  if (((void *)(param_1 + 0x120U) <= param_2) && (param_2 <= (void *)(param_1 + 0x68b8U))) {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x6930));
    FUN_00e7ad6c((void *)(param_1 + 0x120U),param_2);
    uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x6930));
    return (ulong)uVar1;
  }
  FUN_00e7b008(param_2);
  operator_delete(param_2);
  return extraout_x0;
}




undefined8 FUN_00e7ab74(void)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_032105a8;
  __mutex = (pthread_mutex_t *)(DAT_032105a8 + 0xf0);
  pthread_mutex_lock(__mutex);
  uVar2 = FUN_00e7ae08(lVar1 + 0xd8);
  pthread_mutex_unlock(__mutex);
  return uVar2;
}




int FUN_00e7abb8(undefined8 param_1)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  int iVar2;
  
  lVar1 = DAT_032105a8;
  __mutex = (pthread_mutex_t *)(DAT_032105a8 + 0xf0);
  pthread_mutex_lock(__mutex);
  FUN_00e7af20(lVar1 + 0xd8,param_1);
  iVar2 = pthread_mutex_unlock(__mutex);
  return iVar2;
}




void FUN_00e7ac00(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    FUN_00e7ac50(param_1,lVar1);
    FUN_00e7a878(DAT_032105a8,lVar1);
    lVar1 = *param_1;
  }
  return;
}




void FUN_00e7ac50(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)*param_1;
  if (param_2 == (long *)*param_1) {
    plVar2 = (long *)0x0;
    *param_1 = *param_2;
  }
  else {
    do {
      plVar2 = plVar1;
      if (plVar2 == (long *)0x0) break;
      plVar1 = (long *)*plVar2;
    } while ((long *)*plVar2 != param_2);
    *plVar2 = *param_2;
  }
  if (param_2 == (long *)param_1[1]) {
    param_1[1] = (long)plVar2;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00e7aca8(undefined8 param_1,long *param_2)

{
  int iVar1;
  sem_t *__sem;
  
  __sem = (sem_t *)*param_2;
  if (__sem != (sem_t *)0x0) {
    iVar1 = sem_destroy(__sem);
    *param_2 = (long)iVar1;
    operator_delete(__sem);
    return;
  }
  return;
}




ushort * FUN_00e7acec(long param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x6800);
  if ((ulong)uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = (ushort *)(param_1 + (ulong)uVar1 * 0x68);
    if (uVar1 == *(ushort *)(param_1 + 0x6802)) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = *puVar2;
    }
    *(ushort *)(param_1 + 0x6800) = uVar1;
    FUN_00e7afdc(puVar2);
    *(int *)(param_1 + 0x6804) = *(int *)(param_1 + 0x6804) + 1;
  }
  return puVar2;
}




void FUN_00e7ad6c(long param_1,undefined8 param_2)

{
  ushort uVar1;
  short sVar2;
  
  FUN_00e7b008(param_2);
  if (*(short *)(param_1 + 0x6800) == -1) {
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 3) * 0x4ec5;
    *(short *)(param_1 + 0x6802) = sVar2;
    *(short *)(param_1 + 0x6800) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x6802);
    sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 3) * 0x4ec5;
    *(short *)(param_1 + 0x6802) = sVar2;
    *(short *)(param_1 + (ulong)uVar1 * 0x68) = sVar2;
  }
  *(int *)(param_1 + 0x6804) = *(int *)(param_1 + 0x6804) + -1;
  return;
}




long * FUN_00e7ae08(long *param_1)

{
  ushort uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined2 uVar6;
  
  plVar3 = (long *)*param_1;
  do {
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)FUN_00e7aedc(param_1);
      if (*param_1 == 0) {
        *plVar3 = 0;
        plVar4 = param_1 + 1;
        *param_1 = (long)plVar3;
      }
      else {
        *plVar3 = *param_1;
        plVar4 = param_1;
      }
      *plVar4 = (long)plVar3;
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      uVar1 = *(ushort *)(plVar3 + 0x1fe);
      if ((ulong)uVar1 == 0xffff) {
        plVar5 = (long *)0x0;
      }
      else {
        plVar4 = plVar3 + (ulong)uVar1 * 2;
        bVar2 = uVar1 == *(ushort *)((long)plVar3 + 0xff2);
LAB_00e7ae9c:
        plVar5 = plVar4 + 2;
        if (bVar2) {
          uVar6 = 0xffff;
        }
        else {
          uVar6 = (undefined2)*plVar5;
        }
        *(undefined2 *)(plVar3 + 0x1fe) = uVar6;
        *plVar5 = 0;
        plVar4[3] = 0;
        *(int *)((long)plVar3 + 0xff4) = *(int *)((long)plVar3 + 0xff4) + 1;
      }
      return plVar5;
    }
    uVar1 = *(ushort *)(plVar3 + 0x1fe);
    if ((ulong)uVar1 != 0xffff) {
      plVar4 = plVar3 + (ulong)uVar1 * 2;
      bVar2 = uVar1 == *(ushort *)((long)plVar3 + 0xff2);
      goto LAB_00e7ae9c;
    }
    plVar3 = (long *)*plVar3;
  } while( true );
}




void FUN_00e7aedc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)FUN_00e7a7f8(DAT_032105a8,0x1000);
  *puVar1 = 0;
  lVar3 = 1;
  puVar2 = puVar1;
  do {
    puVar2 = puVar2 + 2;
    *(short *)puVar2 = (short)lVar3;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0xfe);
  puVar1[0x1fe] = 0xfd0000;
  return;
}




void FUN_00e7af20(long *param_1,ulong param_2)

{
  ulong uVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)*param_1;
  plVar6 = plVar5;
  while( true ) {
    if (plVar6 == (long *)0x0) {
      return;
    }
    uVar1 = (ulong)(plVar6 + 2);
    if ((uVar1 <= param_2) && (param_2 <= plVar6 + 0x1fc)) break;
    plVar6 = (long *)*plVar6;
  }
  if (*(short *)(plVar6 + 0x1fe) == -1) {
    uVar3 = (undefined2)((uint)((int)param_2 - (int)uVar1) >> 4);
    *(undefined2 *)((long)plVar6 + 0xff2) = uVar3;
    *(undefined2 *)(plVar6 + 0x1fe) = uVar3;
  }
  else {
    uVar2 = *(ushort *)((long)plVar6 + 0xff2);
    uVar3 = (undefined2)((uint)((int)param_2 - (int)uVar1) >> 4);
    *(undefined2 *)((long)plVar6 + 0xff2) = uVar3;
    *(undefined2 *)(uVar1 + (ulong)uVar2 * 0x10) = uVar3;
  }
  iVar4 = *(int *)((long)plVar6 + 0xff4) + -1;
  *(int *)((long)plVar6 + 0xff4) = iVar4;
  if (iVar4 != 0) {
    return;
  }
  if (*plVar5 == 0) {
    return;
  }
  FUN_00e7ac50(param_1,plVar6);
  FUN_00e7a878(DAT_032105a8,plVar6);
  return;
}




void FUN_00e7afdc(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  param_1[0xb] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}




void thunk_FUN_00e7a3d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028207b0;
  return;
}




void thunk_FUN_00e7a3d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028207b0;
  return;
}




void thunk_FUN_00e7a3d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028207b0;
  return;
}

