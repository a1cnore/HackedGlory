// functions/00e78 — 45 functions
#include "libGameKindred.h"




void FUN_00e7807c(undefined8 param_1,undefined8 param_2)

{
  pthread_t pVar1;
  long lVar2;
  
  pVar1 = pthread_self();
  lVar2 = FUN_00e77fe4(&DAT_032104d8,pVar1);
  if (lVar2 == 0) {
    FUN_00e77de4(&DAT_032104d8,param_2);
    FUN_00e77fe4(&DAT_032104d8,pVar1);
  }
  return;
}




void FUN_00e780dc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x18);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x18;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -0x18;
        puVar4[2] = puVar2[2];
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 3;
        puVar2 = puVar2 + 3;
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




void FUN_00e7816c(int param_1,uint param_2,undefined8 param_3)

{
  void *pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = operator_new(0x88);
    FUN_00e78278(pvVar1,param_2,param_2 >> 1);
    DAT_03210518 = pvVar1;
    pvVar1 = operator_new(0xa8);
    FUN_00e7996c(pvVar1,param_1,param_3,"Dispatch",2);
    DAT_03210510 = pvVar1;
  }
  return;
}




void FUN_00e781e8(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_03210510;
  if (DAT_03210510 != (void *)0x0) {
    FUN_00e79b10(DAT_03210510);
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_03210518;
  DAT_03210510 = (void *)0x0;
  if (DAT_03210518 != (void *)0x0) {
    FUN_00e78344(DAT_03210518);
    operator_delete(pvVar1);
  }
  DAT_03210518 = (void *)0x0;
  return;
}




bool FUN_00e78248(void)

{
  return DAT_03210510 != 0;
}




undefined4 FUN_00e7825c(void)

{
  if (DAT_03210510 != 0) {
    return *(undefined4 *)(DAT_03210510 + 8);
  }
  return 0;
}




void FUN_00e78278(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = param_1 + 2;
  *puVar1 = 0;
  param_1[3] = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  FUN_00e77acc(param_1 + 6,0);
  FUN_00e77acc(param_1 + 0xb,0);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  FUN_00e782dc(param_1,param_2);
  return;
}




ulong FUN_00e782dc(ulong param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  if (param_2 != 0) {
    do {
      puVar2 = operator_new(0x20);
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
      *(undefined8 **)(*(long *)(param_1 + 8) + 0x10) = puVar2;
      *(undefined8 **)(param_1 + 8) = puVar2;
      uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
      uVar3 = (ulong)uVar1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar3;
}




int FUN_00e78344(long param_1)

{
  int iVar1;
  
  FUN_00e78370();
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x58));
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x30));
  return iVar1;
}




void FUN_00e78370(undefined8 param_1)

{
  void *pvVar1;
  
  while (pvVar1 = (void *)FUN_00e783d8(param_1), pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  return;
}




void FUN_00e783a0(long param_1)

{
  long lVar1;
  
  while (lVar1 = FUN_00e783d8(param_1), lVar1 == 0) {
    FUN_00e782dc(param_1,*(undefined4 *)(param_1 + 0x80));
  }
  return;
}




long * FUN_00e783d8(long *param_1)

{
  pthread_mutex_t *__mutex;
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  __mutex = (pthread_mutex_t *)(param_1 + 6);
  pthread_mutex_lock(__mutex);
  plVar3 = (long *)*param_1;
  plVar4 = plVar3 + 2;
  lVar2 = *plVar4;
  if (lVar2 != 0) {
    plVar1 = param_1 + 2;
    do {
      *param_1 = lVar2;
      pthread_mutex_unlock(__mutex);
      if (plVar3 != plVar1) {
        return plVar3;
      }
      *plVar4 = 0;
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xb));
      *(long **)(param_1[1] + 0x10) = plVar1;
      param_1[1] = (long)plVar1;
      pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xb));
      pthread_mutex_lock(__mutex);
      plVar3 = (long *)*param_1;
      plVar4 = plVar3 + 2;
      lVar2 = *plVar4;
    } while (lVar2 != 0);
  }
  pthread_mutex_unlock(__mutex);
  return (long *)0x0;
}




int FUN_00e78484(long param_1,undefined8 *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
  *(undefined8 **)(*(long *)(param_1 + 8) + 0x10) = param_2;
  *(undefined8 **)(param_1 + 8) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
  return iVar1;
}




int FUN_00e784d0(pthread_key_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_key_delete(*param_1);
  return iVar1;
}




int FUN_00e784d8(pthread_key_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_key_delete(*param_1);
  return iVar1;
}




void FUN_00e784e0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}




void FUN_00e784ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = &DAT_01e277f2;
  puVar1 = param_1 + 5;
  param_1[6] = 0;
  *puVar1 = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = puVar1;
  param_1[4] = puVar1;
  FUN_00e77acc(param_1 + 9,0);
  FUN_00e77acc(param_1 + 0xe,0);
  param_1[7] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  FUN_00e77acc(param_1 + 0x16,0);
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  return;
}




void FUN_00e7856c(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = &DAT_01e277f2;
  puVar1 = param_1 + 5;
  param_1[6] = 0;
  *puVar1 = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = puVar1;
  param_1[4] = puVar1;
  FUN_00e77acc(param_1 + 9,0);
  FUN_00e77acc(param_1 + 0xe,0);
  param_1[7] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  FUN_00e77acc(param_1 + 0x16,0);
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  FUN_00e78608(param_1,param_2,param_3);
  return;
}




void FUN_00e78608(undefined8 param_1,int param_2,undefined8 param_3)

{
  if (param_2 == 2) {
    FUN_00e78804(param_1,2,0,param_3);
    return;
  }
  FUN_00e78804(param_1,param_2,DAT_03210510,param_3);
  return;
}




void FUN_00e7862c(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = &DAT_01e277f2;
  puVar1 = param_1 + 5;
  param_1[6] = 0;
  *puVar1 = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = puVar1;
  param_1[4] = puVar1;
  FUN_00e77acc(param_1 + 9,0);
  FUN_00e77acc(param_1 + 0xe,0);
  param_1[7] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  FUN_00e77acc(param_1 + 0x16,0);
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  FUN_00e78804(param_1,param_2,param_3,param_4);
  return;
}




void thunk_FUN_00e78804(int *param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  puVar4 = param_4;
  if (param_4 == (undefined1 *)0x0) {
    puVar4 = &DAT_01e277f2;
  }
  *param_1 = param_2;
  *(undefined1 **)(param_1 + 2) = puVar4;
  if (param_4 != (undefined1 *)0x0) {
    piVar5 = param_1 + 0x3a;
    piVar5[0] = 0;
    piVar5[1] = 0;
    bVar3 = DAT_03210528 != 0;
    *(int **)(param_1 + 0x3c) = DAT_03210530;
    piVar1 = (int *)&DAT_03210528;
    if (bVar3) {
      piVar1 = DAT_03210530;
    }
    *(int **)piVar1 = piVar5;
    DAT_03210538 = DAT_03210538 + 1;
    DAT_03210530 = piVar5;
  }
  param_1[1] = 1;
  if (param_2 == 2) {
    FUN_00e77d14(auStack_30);
    FUN_00e78aec(param_1,auStack_30);
    puVar4 = *(undefined1 **)(param_1 + 2);
  }
  else {
    *(undefined8 *)(param_1 + 4) = param_3;
  }
  FUN_00e79f9c(param_1,puVar4);
  if (*(long *)(lVar2 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00e786d4(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00e78724(param_1);
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xb0));
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x70));
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x48));
  return iVar1;
}




bool FUN_00e78714(long param_1)

{
  return *(int *)(param_1 + 4) != 0;
}




void FUN_00e78724(int *param_1)

{
  int iVar1;
  long lVar2;
  
  FUN_00e7a030(*(undefined8 *)(param_1 + 2));
  if (*param_1 == 2) {
    FUN_00e796a4(param_1);
    FUN_00e77c74(param_1 + 4);
  }
  if ((*(long *)(param_1 + 4) != 0) && (param_1[1] == 2)) {
    FUN_00e7901c(param_1,0,0);
    FUN_00e78948(param_1);
  }
  lVar2 = FUN_00e783d8(param_1 + 6);
  while (lVar2 != 0) {
    FUN_00e78484(DAT_03210518,lVar2);
    lVar2 = FUN_00e783d8(param_1 + 6);
  }
  if ((*(long *)(param_1 + 2) != 0) && (iVar1 = FUN_00e6a474(), iVar1 != 0)) {
    FUN_00e78a08(&DAT_03210528,param_1);
  }
  *(undefined1 **)(param_1 + 2) = &DAT_01e277f2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0] = -1;
  param_1[1] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return;
}




void FUN_00e78804(int *param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar4 = param_4;
  if (param_4 == (undefined1 *)0x0) {
    puVar4 = &DAT_01e277f2;
  }
  *param_1 = param_2;
  *(undefined1 **)(param_1 + 2) = puVar4;
  if (param_4 != (undefined1 *)0x0) {
    piVar5 = param_1 + 0x3a;
    piVar5[0] = 0;
    piVar5[1] = 0;
    bVar3 = DAT_03210528 != 0;
    *(int **)(param_1 + 0x3c) = DAT_03210530;
    piVar1 = (int *)&DAT_03210528;
    if (bVar3) {
      piVar1 = DAT_03210530;
    }
    *(int **)piVar1 = piVar5;
    DAT_03210538 = DAT_03210538 + 1;
    DAT_03210530 = piVar5;
  }
  param_1[1] = 1;
  if (param_2 == 2) {
    FUN_00e77d14(auStack_30);
    FUN_00e78aec(param_1,auStack_30);
    puVar4 = *(undefined1 **)(param_1 + 2);
  }
  else {
    *(undefined8 *)(param_1 + 4) = param_3;
  }
  FUN_00e79f9c(param_1,puVar4);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00e788d4(int *param_1)

{
  return *param_1 == 2;
}




void FUN_00e788e4(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00e77d14(auStack_30);
  FUN_00e78aec(param_1,auStack_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e7893c(undefined8 param_1)

{
  FUN_00e7901c(param_1,0,0);
  return;
}




void FUN_00e78948(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int local_58 [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00e79e08(*(undefined8 *)(param_1 + 0x10),param_1);
  local_58[2] = 0xffffffff;
  local_58[0] = 100;
  local_58[1] = 10;
  if (0 < *(int *)(param_1 + 0x98)) {
    uVar3 = 0;
    do {
      FUN_00e6b418((&DAT_01bef36c)[uVar3]);
      iVar1 = local_58[uVar3];
      local_58[uVar3] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        uVar3 = uVar3 + 1;
      }
    } while (0 < *(int *)(param_1 + 0x98));
  }
  *(undefined4 *)(param_1 + 4) = 1;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e78a08(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)(param_2 + 0xe8);
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
    puVar2 = *(undefined8 **)(param_2 + 0xf0);
    param_1[1] = (long)puVar2;
    *puVar2 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(param_2 + 0xf0);
    *puVar2 = *(undefined8 *)(param_2 + 0xe8);
    *(undefined8 **)(*(long *)(param_2 + 0xe8) + 8) = puVar2;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




bool FUN_00e78a6c(long param_1)

{
  return *(int *)(param_1 + 4) == 2;
}




uint FUN_00e78a7c(int *param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*param_1 == 2) {
    FUN_00e77d14(auStack_30);
    uVar2 = FUN_00e77d38(param_1 + 4,auStack_30);
  }
  else {
    uVar2 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e78aec(int *param_1,undefined8 *param_2)

{
  if (*param_1 == 0) {
    *param_1 = 2;
    if (*(long *)(param_1 + 4) != 0) {
      FUN_00e79e08(*(long *)(param_1 + 4),param_1);
    }
  }
  FUN_00e796dc(param_1,param_2);
  *(undefined8 *)(param_1 + 4) = *param_2;
  return;
}




void FUN_00e78b40(undefined4 *param_1,undefined8 param_2)

{
  FUN_00e796a4();
  FUN_00e77c74(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = param_2;
  FUN_00e79d90(param_2,param_1);
  *param_1 = 0;
  return;
}




void FUN_00e78b80(long param_1)

{
  *(undefined4 *)(param_1 + 4) = 2;
  FUN_00e79d90(*(undefined8 *)(param_1 + 0x10),param_1);
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20)))
  {
    FUN_00e79cd8();
    return;
  }
  return;
}




void FUN_00e78bd0(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20)))
  {
    FUN_00e79cd8();
    return;
  }
  return;
}




void FUN_00e78bf0(int *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  sem_t *__sem;
  int *piVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00e78d04();
  local_50 = pthread_getspecific(DAT_03210520);
  local_60 = param_2;
  uStack_58 = param_3;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2c));
  if (*param_1 == 0) {
    iVar2 = param_1[0x27];
    puVar3 = (undefined8 *)FUN_00e783a0(DAT_03210518);
    *puVar3 = FUN_00e7b878;
    puVar3[1] = (long)iVar2;
    FUN_00e78e28(param_1,puVar3);
  }
  puVar3 = (undefined8 *)FUN_00e783a0(DAT_03210518);
  *puVar3 = FUN_00e78df8;
  puVar3[1] = &local_60;
  FUN_00e78e28(param_1,puVar3);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2c));
  __sem = pthread_getspecific(DAT_03210520);
  do {
    iVar2 = sem_wait(__sem);
    if (iVar2 != -1) break;
    piVar4 = (int *)__errno();
  } while (*piVar4 == 4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00e78d04(void)

{
  uint uVar1;
  void *pvVar2;
  sem_t *__sem;
  
  pvVar2 = pthread_getspecific(DAT_03210524);
  if ((int)pvVar2 != 0) {
    return pvVar2;
  }
  __sem = operator_new(0x10);
  sem_init(__sem,0x1c0,0);
  pthread_setspecific(DAT_03210520,__sem);
  uVar1 = pthread_setspecific(DAT_03210524,(void *)0x1);
  return (void *)(ulong)uVar1;
}




void FUN_00e78d68(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  puVar2 = (undefined8 *)FUN_00e783a0(DAT_03210518);
  *puVar2 = FUN_00e7b878;
  puVar2[1] = (long)iVar1;
  FUN_00e78e28(param_1,puVar2);
  return;
}




void FUN_00e78dac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00e783a0(DAT_03210518);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  FUN_00e78e28(param_1,puVar1);
  return;
}




int FUN_00e78df8(undefined8 *param_1)

{
  int iVar1;
  
  if ((code *)*param_1 != (code *)0x0) {
    (*(code *)*param_1)(param_1[1]);
  }
  iVar1 = sem_post((sem_t *)param_1[2]);
  return iVar1;
}




ulong FUN_00e78e28(int *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  
  piVar1 = param_1 + 0x27;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  piVar1 = param_1 + 0x29;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined8 *)(param_2 + 0x10) = 0;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x1c));
  *(long *)(*(long *)(param_1 + 8) + 0x10) = param_2;
  *(long *)(param_1 + 8) = param_2;
  uVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x1c));
  uVar5 = (ulong)uVar4;
  if (((*param_1 != 2) && (uVar5 = *(ulong *)(param_1 + 4), uVar5 != 0)) &&
     (*(long *)(param_1 + 6) != *(long *)(param_1 + 8))) {
    uVar5 = FUN_00e79d50();
    return uVar5;
  }
  return uVar5;
}




int FUN_00e78ecc(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2c));
  if (*param_1 == 0) {
    iVar1 = param_1[0x27];
    puVar2 = (undefined8 *)FUN_00e783a0(DAT_03210518);
    *puVar2 = FUN_00e7b878;
    puVar2[1] = (long)iVar1;
    FUN_00e78e28(param_1,puVar2);
  }
  puVar2 = (undefined8 *)FUN_00e783a0(DAT_03210518);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  FUN_00e78e28(param_1,puVar2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2c));
  return iVar1;
}




int FUN_00e78f64(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xb0));
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x9c);
    puVar2 = (undefined8 *)FUN_00e783a0(DAT_03210518);
    *puVar2 = FUN_00e7b878;
    puVar2[1] = (long)iVar1;
    FUN_00e78e28(param_1,puVar2);
    plVar3 = (long *)FUN_00e783a0(DAT_03210518);
    *plVar3 = param_2;
    plVar3[1] = param_3;
    FUN_00e78e28(param_1,plVar3);
  }
  iVar1 = *(int *)(param_1 + 0x9c);
  puVar2 = (undefined8 *)FUN_00e783a0(DAT_03210518);
  *puVar2 = FUN_00e7b878;
  puVar2[1] = (long)iVar1;
  FUN_00e78e28(param_1,puVar2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xb0));
  return iVar1;
}




int thunk_FUN_00e786d4(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00e78724(param_1);
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xb0));
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x70));
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x48));
  return iVar1;
}

