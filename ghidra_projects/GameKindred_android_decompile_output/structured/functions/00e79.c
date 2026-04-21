// functions/00e79 — 33 functions
#include "libGameKindred.h"




void FUN_00e7901c(long param_1,long param_2,long param_3)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  sem_t *__sem;
  int *piVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00e78d04();
  local_60 = pthread_getspecific(DAT_03210520);
  __mutex = (pthread_mutex_t *)(param_1 + 0xb0);
  local_70 = 0;
  uStack_68 = 0;
  pthread_mutex_lock(__mutex);
  if (param_2 == 0) {
    if ((*(int *)(param_1 + 0x98) == 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20)))
    {
      uVar3 = pthread_mutex_unlock(__mutex);
      piVar6 = (int *)(ulong)uVar3;
      goto LAB_00e79158;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x9c);
    puVar4 = (undefined8 *)FUN_00e783a0(DAT_03210518);
    *puVar4 = FUN_00e7b878;
    puVar4[1] = (long)iVar1;
    FUN_00e78e28(param_1,puVar4);
    plVar5 = (long *)FUN_00e783a0(DAT_03210518);
    *plVar5 = param_2;
    plVar5[1] = param_3;
    FUN_00e78e28(param_1,plVar5);
  }
  iVar1 = *(int *)(param_1 + 0x9c);
  puVar4 = (undefined8 *)FUN_00e783a0(DAT_03210518);
  *puVar4 = FUN_00e7b878;
  puVar4[1] = (long)iVar1;
  FUN_00e78e28(param_1,puVar4);
  puVar4 = (undefined8 *)FUN_00e783a0(DAT_03210518);
  *puVar4 = FUN_00e78df8;
  puVar4[1] = &local_70;
  FUN_00e78e28(param_1,puVar4);
  pthread_mutex_unlock(__mutex);
  __sem = pthread_getspecific(DAT_03210520);
  do {
    uVar3 = sem_wait(__sem);
    piVar6 = (int *)(ulong)uVar3;
    if (uVar3 != 0xffffffff) break;
    piVar6 = (int *)__errno();
  } while (*piVar6 == 4);
LAB_00e79158:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(piVar6);
}




int FUN_00e79194(long param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  
  __mutex = (pthread_mutex_t *)(param_1 + 0xb0);
  while( true ) {
    FUN_00e7901c(param_1,0,0);
    pthread_mutex_lock(__mutex);
    if ((*(int *)(param_1 + 0x98) == 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x20)))
    break;
    pthread_mutex_unlock(__mutex);
  }
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_00e791f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_00e79238(param_1,uVar1);
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20)))
  {
    FUN_00e79cd8();
    return;
  }
  return;
}




void FUN_00e79238(long param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0xa0);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  piVar2 = (int *)(param_1 + 0xa4);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = *piVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  FUN_00e78484(DAT_03210518);
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     (*(long *)(*(long *)(param_1 + 0xa8) + 8) == (long)*piVar1)) {
    FUN_00e791f0(param_1);
  }
  piVar1 = (int *)(param_1 + 0x98);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}




undefined8 * FUN_00e792c0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xb0));
  puVar4 = *(undefined8 **)(param_1 + 0xa8);
  piVar1 = (int *)(param_1 + 0x98);
  do {
    if (puVar4 != (undefined8 *)0x0) {
      if (puVar4[1] != (long)*(int *)(param_1 + 0xa0)) {
        puVar4 = (undefined8 *)0x0;
LAB_00e79350:
        pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xb0));
        return puVar4;
      }
      FUN_00e791f0(param_1);
    }
    puVar4 = (undefined8 *)FUN_00e783d8(param_1 + 0x18);
    if (puVar4 == (undefined8 *)0x0) goto LAB_00e79350;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((code *)*puVar4 != FUN_00e7b878) goto LAB_00e79350;
    *(undefined8 **)(param_1 + 0xa8) = puVar4;
  } while( true );
}




int FUN_00e79370(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xb0));
  FUN_00e79238(param_1,param_2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xb0));
  return iVar1;
}




undefined4 FUN_00e793b4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x98);
}




undefined4 FUN_00e793bc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x9c);
}




undefined4 FUN_00e793c4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa0);
}




undefined4 FUN_00e793cc(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa4);
}




long FUN_00e793d4(char *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = 0;
  if (DAT_03210528 != 0) {
    lVar2 = DAT_03210528 + -0xe8;
    while ((lVar2 != 0 && (iVar3 = strcmp(*(char **)(lVar2 + 8),param_1), lVar5 = lVar2, iVar3 != 0)
           )) {
      plVar1 = (long *)(lVar2 + 0xe8);
      lVar4 = *plVar1 + -0xe8;
      lVar5 = 0;
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar5 = lVar4;
        lVar2 = lVar4;
      }
    }
  }
  return lVar5;
}




void FUN_00e79434(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20)))
  {
    FUN_00e79d50();
    return;
  }
  return;
}




int FUN_00e79454(pthread_mutex_t *param_1)

{
  int iVar1;
  uint uVar2;
  pthread_mutex_t *__mutex;
  pthread_mutex_t *ppVar3;
  ulong uVar4;
  long lVar5;
  
  ppVar3 = param_1 + 1;
  uVar2 = (ppVar3->__data).__lock;
  if (uVar2 != 0) {
    uVar4 = 0;
    lVar5 = 8;
    do {
      __mutex = *(pthread_mutex_t **)(*(long *)((long)param_1 + 0x30) + lVar5);
      if (__mutex != (pthread_mutex_t *)0x0) {
        __mutex[1].__align = 0;
        *(undefined8 *)((long)__mutex + 0x30) = 0;
        *(undefined4 *)((long)__mutex + 0x38) = 0;
        pthread_mutex_destroy(__mutex);
        operator_delete(__mutex);
        uVar2 = (ppVar3->__data).__lock;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar4 < uVar2);
  }
  if (*(void **)((long)param_1 + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)((long)param_1 + 0x30));
    ppVar3->__align = 0;
    *(undefined8 *)((long)param_1 + 0x30) = 0;
  }
  iVar1 = pthread_mutex_destroy(param_1);
  return iVar1;
}




void FUN_00e794e0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  pthread_mutex_t *__mutex;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00e77d14(auStack_40);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_03210540);
  __mutex = (pthread_mutex_t *)FUN_00e797ec(&DAT_03210540,auStack_40);
  iVar4 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_03210540);
  if (__mutex != (pthread_mutex_t *)0x0) {
    pthread_mutex_lock(__mutex);
    if (__mutex[1].__align != 0) {
      lVar3 = __mutex[1].__align + -0xd8;
      while (lVar3 != 0) {
        FUN_00e7bae8(lVar3,0);
        plVar1 = (long *)(lVar3 + 0xd8);
        lVar3 = 0;
        if (*plVar1 != 0) {
          lVar3 = *plVar1 + -0xd8;
        }
      }
    }
    iVar4 = pthread_mutex_unlock(__mutex);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}




ulong FUN_00e7959c(ulong param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  pthread_mutex_t *__mutex;
  ulong uVar5;
  
  uVar3 = param_1;
  if ((uint)DAT_03210568 != 0) {
    uVar5 = 0;
    do {
      __mutex = *(pthread_mutex_t **)(DAT_03210570 + uVar5 * 0x10 + 8);
      pthread_mutex_lock(__mutex);
      lVar4 = __mutex[1].__align;
      uVar3 = lVar4 - 0xd8;
      if (lVar4 != 0 && uVar3 != 0) {
        do {
          if (uVar3 == param_1) {
            FUN_00e79640(__mutex + 1,param_1);
            break;
          }
          plVar1 = (long *)(uVar3 + 0xd8);
          uVar3 = 0;
          if (*plVar1 != 0) {
            uVar3 = *plVar1 - 0xd8;
          }
        } while (uVar3 != 0);
      }
      uVar2 = pthread_mutex_unlock(__mutex);
      uVar3 = (ulong)uVar2;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)DAT_03210568);
  }
  return uVar3;
}




void FUN_00e79640(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)(param_2 + 0xd8);
  if ((long *)*param_1 == plVar1) {
    if (plVar1 == (long *)param_1[1]) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *plVar1;
    }
  }
  else if ((long *)param_1[1] == plVar1) {
    puVar2 = *(undefined8 **)(param_2 + 0xe0);
    param_1[1] = (long)puVar2;
    *puVar2 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(param_2 + 0xe0);
    *puVar2 = *(undefined8 *)(param_2 + 0xd8);
    *(undefined8 **)(*(long *)(param_2 + 0xd8) + 8) = puVar2;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




int FUN_00e796a4(undefined8 param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_03210540);
  FUN_00e7959c(param_1);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_03210540);
  return iVar1;
}




void FUN_00e796dc(long param_1,undefined8 *param_2)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  int iVar3;
  pthread_mutex_t *__mutex;
  pthread_mutex_t *ppVar4;
  undefined8 *puVar5;
  undefined8 local_58;
  pthread_mutex_t *ppStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_03210540);
  FUN_00e7959c(param_1);
  __mutex = (pthread_mutex_t *)FUN_00e797ec(&DAT_03210540,param_2);
  if (__mutex == (pthread_mutex_t *)0x0) {
    __mutex = operator_new(0x40);
    *(undefined8 *)((long)__mutex + 0x30) = 0;
    *(undefined8 *)((long)__mutex + 0x38) = 0;
    (__mutex->__data).__list.__next = (__pthread_internal_list *)0x0;
    __mutex[1].__align = 0;
    *(int *)((long)__mutex + 0x10) = 0;
    *(int *)((long)__mutex + 0x14) = 0;
    (__mutex->__data).__list.__prev = (__pthread_internal_list *)0x0;
    __mutex->__align = 0;
    *(int *)((long)__mutex + 8) = 0;
    *(uint *)((long)__mutex + 0xc) = 0;
    FUN_00e77acc(__mutex,0);
    __mutex[1].__align = 0;
    *(undefined8 *)((long)__mutex + 0x30) = 0;
    *(undefined4 *)((long)__mutex + 0x38) = 0;
    local_58 = *param_2;
    ppStack_50 = __mutex;
    FUN_00e79860(&DAT_03210568,&local_58);
  }
  pthread_mutex_lock(__mutex);
  puVar5 = (undefined8 *)(param_1 + 0xd8);
  *puVar5 = 0;
  ppVar4 = *(pthread_mutex_t **)((long)__mutex + 0x30);
  *(pthread_mutex_t **)(param_1 + 0xe0) = ppVar4;
  ppVar1 = __mutex + 1;
  if (__mutex[1].__align != 0) {
    ppVar1 = ppVar4;
  }
  ppVar1->__align = (long)puVar5;
  *(undefined8 **)((long)__mutex + 0x30) = puVar5;
  *(int *)((long)__mutex + 0x38) = *(int *)((long)__mutex + 0x38) + 1;
  pthread_mutex_unlock(__mutex);
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_03210540);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}




undefined8 FUN_00e797ec(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar3 = 0;
    lVar2 = 8;
    do {
      uVar1 = FUN_00e77d38(param_2,*(long *)(param_1 + 0x30) + lVar2 + -8);
      if ((uVar1 & 1) != 0) {
        return *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar2);
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar3 < *(uint *)(param_1 + 0x28));
  }
  return 0;
}




void FUN_00e79860(uint *param_1,undefined8 *param_2)

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
    FUN_00e798e8(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = *param_2;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_00e798e8(uint *param_1,uint param_2)

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




void FUN_00e7996c(long *param_1,uint param_2,long param_3,undefined1 *param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  sem_t *__sem;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  
  *param_1 = 0;
  *(uint *)(param_1 + 1) = param_2;
  uVar3 = (ulong)param_2;
  __sem = operator_new(0x10);
  param_1[2] = (long)__sem;
  sem_init(__sem,0x1c0,0);
  FUN_00e77acc(param_1 + 3,0);
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00e77acc((long)param_1 + 0x44,0);
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  puVar2 = operator_new__(uVar3 * 0x30 | 8);
  puVar4 = puVar2 + 1;
  *puVar2 = uVar3;
  if (param_2 != 0) {
    lVar5 = uVar3 * 0x30;
    puVar2 = puVar4;
    do {
      FUN_00e7b87c(puVar2);
      lVar5 = lVar5 + -0x30;
      puVar2 = puVar2 + 6;
    } while (lVar5 != 0);
  }
  *param_1 = (long)puVar4;
  if (((param_3 != 0) && ((int)param_1[1] != 0)) &&
     (FUN_00e7b9e4(puVar4,param_3), 1 < *(uint *)(param_1 + 1))) {
    uVar3 = 1;
    lVar5 = 0x30;
    do {
      FUN_00e7b9e4(*param_1 + lVar5,param_3);
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 0x30;
    } while (uVar3 < *(uint *)(param_1 + 1));
  }
  puVar1 = &DAT_01e277f2;
  if (param_4 != (undefined1 *)0x0) {
    puVar1 = param_4;
  }
  *(uint *)(param_1 + 1) = param_2;
  FUN_00e6a50c(param_1 + 0x12,0x10,puVar1);
  *(undefined1 *)(param_1 + 0x14) = 1;
  if ((int)param_1[1] != 0) {
    lVar5 = 0;
    uVar3 = 0;
    do {
      FUN_00e7b8a4(*param_1 + lVar5,param_1,param_1 + 0xe,uVar3 & 0xffffffff,param_5);
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 0x30;
    } while (uVar3 < *(uint *)(param_1 + 1));
  }
  return;
}




ulong FUN_00e79b10(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong extraout_x0;
  long lVar7;
  sem_t *__sem;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  
  *(undefined1 *)(param_1 + 0x14) = 0;
  FUN_00e79cd8();
  if ((int)param_1[1] == 0) {
LAB_00e79ba4:
    lVar8 = *param_1;
    if (lVar8 != 0) {
LAB_00e79be4:
      lVar7 = *(long *)(lVar8 + -8);
      if (lVar7 != 0) {
        lVar7 = lVar7 * 0x30;
        do {
          FUN_00e7b898(lVar8 + lVar7 + -0x30);
          lVar7 = lVar7 + -0x30;
        } while (lVar7 != 0);
      }
      operator_delete__((long *)(lVar8 + -8));
    }
LAB_00e79c14:
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    plVar9 = param_1 + 0xe;
    lVar7 = *plVar9;
    lVar8 = lVar7 + -0xd8;
    if ((lVar7 != 0) && (lVar8 != 0)) {
      do {
        lVar7 = *(long *)(lVar8 + 0xd8);
        FUN_00e78724(lVar8);
        lVar8 = 0;
        if (lVar7 != 0) {
          lVar8 = lVar7 + -0xd8;
        }
      } while (lVar8 != 0);
      lVar7 = *plVar9;
      lVar8 = lVar7 + -0xd8;
    }
    if (lVar7 != 0) {
      while (lVar8 != 0) {
        FUN_00e7893c(lVar8);
        plVar1 = (long *)(lVar8 + 0xd8);
        lVar8 = 0;
        if (*plVar1 != 0) {
          lVar8 = *plVar1 + -0xd8;
        }
      }
    }
    param_1[0x11] = 0;
    *plVar9 = 0;
    param_1[0xf] = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x44));
    uVar4 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 3));
    __sem = (sem_t *)param_1[2];
    if (__sem != (sem_t *)0x0) {
      iVar5 = sem_destroy(__sem);
      param_1[2] = (long)iVar5;
      operator_delete(__sem);
      return extraout_x0;
    }
    return (ulong)uVar4;
  }
  uVar10 = 0;
  plVar9 = param_1 + 8;
LAB_00e79b44:
  do {
    uVar6 = FUN_00e7b9d4(*param_1 + uVar10 * 0x30);
    if ((uVar6 & 1) == 0) goto LAB_00e79b6c;
    uVar10 = uVar10 + 1;
  } while (uVar10 < *(uint *)(param_1 + 1));
  lVar8 = *param_1;
  if (*(uint *)(param_1 + 1) != 0) {
    lVar7 = 0;
    uVar10 = 0;
    do {
      FUN_00e7b978(lVar8 + lVar7);
      lVar8 = *param_1;
      uVar10 = uVar10 + 1;
      lVar7 = lVar7 + 0x30;
    } while (uVar10 < *(uint *)(param_1 + 1));
  }
  if (lVar8 == 0) goto LAB_00e79c14;
  goto LAB_00e79be4;
LAB_00e79b6c:
  if ((int)*plVar9 < 0x81) {
    sem_post((sem_t *)param_1[2]);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_00e6b418(5);
  uVar10 = 0;
  if ((int)param_1[1] == 0) goto LAB_00e79ba4;
  goto LAB_00e79b44;
}




ulong FUN_00e79cd8(ulong param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = (int *)(param_1 + 0x40);
  if (*piVar1 < 0x81) {
    if ((*(uint *)(param_1 + 8) & 0x7fffffff) == 0) {
      iVar5 = 0;
    }
    else {
      uVar6 = 0;
      do {
        uVar4 = sem_post(*(sem_t **)(param_1 + 0x10));
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)(*(int *)(param_1 + 8) << 1));
      iVar5 = *(int *)(param_1 + 8) << 1;
      param_1 = (ulong)uVar4;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return param_1;
}




ulong FUN_00e79d50(ulong param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x40);
  if (*piVar4 < 0x81) {
    uVar3 = sem_post(*(sem_t **)(param_1 + 0x10));
    param_1 = (ulong)uVar3;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return param_1;
}




int FUN_00e79d90(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x44));
  puVar3 = (undefined8 *)(param_2 + 0xd8);
  *puVar3 = 0;
  plVar4 = *(long **)(param_1 + 0x78);
  *(long **)(param_2 + 0xe0) = plVar4;
  plVar1 = (long *)(param_1 + 0x70);
  if (*(long *)(param_1 + 0x70) != 0) {
    plVar1 = plVar4;
  }
  *plVar1 = (long)puVar3;
  *(undefined8 **)(param_1 + 0x78) = puVar3;
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  if (*(long *)(param_1 + 0x88) == 0) {
    *(long *)(param_1 + 0x88) = param_2;
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x44));
  return iVar2;
}




int FUN_00e79e08(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x44));
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0xb0));
  FUN_00e79640((long *)(param_1 + 0x70),param_2);
  if (*(long *)(param_1 + 0x88) == param_2) {
    lVar3 = 0;
    if (*(long *)(param_2 + 0xd8) != 0) {
      lVar3 = *(long *)(param_2 + 0xd8) + -0xd8;
    }
    if (lVar3 == 0) {
      lVar2 = *(long *)(param_1 + 0x70);
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = lVar2 + -0xd8;
      }
    }
    *(long *)(param_1 + 0x88) = lVar3;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0xb0));
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x44));
  return iVar1;
}




long FUN_00e79ea0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 != 0) {
    do {
      lVar1 = FUN_00e792c0(lVar2);
      if (lVar1 != 0) {
        *(long *)(param_1 + 0x88) = lVar2;
        if (param_2 == (long *)0x0) {
          return lVar1;
        }
        *param_2 = lVar2;
        return lVar1;
      }
      if (lVar2 != 0) {
        lVar1 = 0;
        if (*(long *)(lVar2 + 0xd8) != 0) {
          lVar1 = *(long *)(lVar2 + 0xd8) + -0xd8;
        }
        lVar2 = lVar1;
        if (lVar1 == 0) {
          lVar2 = 0;
          if (*(long *)(param_1 + 0x70) != 0) {
            lVar2 = *(long *)(param_1 + 0x70) + -0xd8;
          }
        }
      }
    } while (lVar2 != *(long *)(param_1 + 0x88));
  }
  return 0;
}




int FUN_00e79f24(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x44));
  piVar4 = (int *)(param_1 + 0x40);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar2) {
      *piVar4 = *piVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    iVar3 = sem_wait(*(sem_t **)(param_1 + 0x10));
    if (iVar3 != -1) break;
    piVar4 = (int *)__errno();
  } while (*piVar4 == 4);
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x44));
  return iVar3;
}




int FUN_00e79f84(long param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x44));
  return iVar1;
}




int FUN_00e79f8c(long param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x44));
  return iVar1;
}




undefined1 FUN_00e79f94(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa0);
}




void FUN_00e79f9c(undefined8 param_1,undefined *param_2)

{
  undefined8 *puVar1;
  
  if (PTR_s___Main_OS_Serial_Queue_02bf24e8 == param_2) {
    puVar1 = &DAT_03210578;
  }
  else if (PTR_s___Render_Serial_Queue_02bf24f0 == param_2) {
    puVar1 = &DAT_03210580;
  }
  else if (PTR_s___Update_Serial_Queue_02bf24f8 == param_2) {
    puVar1 = &DAT_03210588;
  }
  else if (PTR_s___Default_Concurrent_Queue_02bf2500 == param_2) {
    puVar1 = &DAT_03210590;
  }
  else {
    if (PTR_s___LongRunning_Concurrent_Queue_02bf2508 != param_2) {
      return;
    }
    puVar1 = &DAT_03210598;
  }
  *puVar1 = param_1;
  return;
}

