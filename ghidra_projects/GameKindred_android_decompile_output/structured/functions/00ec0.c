// functions/00ec0 — 66 functions
#include "libGameKindred.h"




void thunk_FUN_00ec03b4(void)

{
  if (DAT_032107b0 != (long *)0x0) {
    (**(code **)(*DAT_032107b0 + 8))();
  }
  DAT_032107b0 = (long *)0x0;
  if (DAT_032107a8 != (long *)0x0) {
    (**(code **)(*DAT_032107a8 + 8))();
  }
  DAT_032107a8 = (long *)0x0;
  FUN_00ec2414();
  FUN_00ec1f74();
  FUN_00ec1ccc();
  return;
}




long * FUN_00ec0014(long param_1,long param_2)

{
  long *plVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2980));
  plVar1 = *(long **)(param_1 + 0x29a8);
  if (plVar1 != (long *)0x0) {
    do {
      if (*plVar1 == param_2) {
        FUN_00ec0210(param_1 + 0x29a8,plVar1);
        break;
      }
      plVar1 = (long *)plVar1[0x19];
    } while (plVar1 != (long *)0x0);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2980));
  return plVar1;
}




undefined8 * FUN_00ec0088(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28a0);
  if (uVar1 == 0xffffffff) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)(param_1 + (ulong)uVar1 * 0xd0);
    if (uVar1 == *(uint *)(param_1 + 0x28a4)) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = *(undefined4 *)puVar3;
    }
    *(undefined4 *)(param_1 + 0x28a0) = uVar2;
    *puVar3 = 0;
    lVar4 = param_1 + (ulong)uVar1 * 0xd0;
    *(undefined4 *)(lVar4 + 8) = DAT_02bf251c;
    *(undefined8 *)(lVar4 + 0x8c) = 0x5a;
    memset((void *)(lVar4 + 0xc),0,0x80);
    *(undefined4 *)(lVar4 + 0xb8) = 0;
    *(undefined8 *)(lVar4 + 0xa8) = 0;
    *(undefined8 *)(lVar4 + 0xb0) = 0;
    *(undefined8 *)(lVar4 + 0x98) = 0;
    *(undefined8 *)(lVar4 + 0xa0) = 0;
    *(undefined8 *)(lVar4 + 0xc0) = 0;
    *(undefined8 *)(lVar4 + 200) = 0;
    *(int *)(param_1 + 0x28a8) = *(int *)(param_1 + 0x28a8) + 1;
  }
  return puVar3;
}




void FUN_00ec0140(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  
  FUN_00ec0324();
  if (*(int *)(param_1 + 0x28a0) == -1) {
    iVar2 = (int)((ulong)(param_2 - param_1) >> 4) * -0x3b13b13b;
    *(int *)(param_1 + 0x28a4) = iVar2;
    *(int *)(param_1 + 0x28a0) = iVar2;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x28a4);
    iVar2 = (int)((ulong)(param_2 - param_1) >> 4) * -0x3b13b13b;
    *(int *)(param_1 + 0x28a4) = iVar2;
    *(int *)(param_1 + (ulong)uVar1 * 0xd0) = iVar2;
  }
  *(int *)(param_1 + 0x28a8) = *(int *)(param_1 + 0x28a8) + -1;
  return;
}




int FUN_00ec01c4(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2980));
  FUN_00ec0210(param_1 + 0x29a8,param_2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2980));
  return iVar1;
}




void FUN_00ec0210(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 200);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0xc0);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 200) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0xc0);
    *(undefined8 *)(lVar1 + 200) = *(undefined8 *)(param_2 + 200);
    *(long *)(*(long *)(param_2 + 200) + 0xc0) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




long FUN_00ec0270(long param_1)

{
  long lVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2980));
  lVar1 = *(long *)(param_1 + 0x29a8);
  if (lVar1 != 0) {
    FUN_00ec0210(param_1 + 0x29a8,lVar1);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2980));
  return lVar1;
}




void FUN_00ec02c8(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = DAT_02bf251c;
  *(undefined8 *)((long)param_1 + 0x8c) = 0x5a;
  *(undefined4 *)(param_1 + 1) = uVar1;
  memset((void *)((long)param_1 + 0xc),0,0x80);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return;
}




void FUN_00ec0324(undefined8 param_1,long param_2)

{
  if (*(void **)(param_2 + 0xb0) != (void *)0x0) {
    operator_delete__(*(void **)(param_2 + 0xb0));
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(undefined8 *)(param_2 + 0xb0) = 0;
  }
  if (*(void **)(param_2 + 0xa0) != (void *)0x0) {
    operator_delete__(*(void **)(param_2 + 0xa0));
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
  }
  return;
}




void FUN_00ec0360(void)

{
  void *pvVar1;
  
  FUN_00ec1c90();
  FUN_00ec1e94();
  FUN_00ec2340();
  pvVar1 = operator_new(0x38);
  FUN_00ec1220();
  DAT_032107a8 = pvVar1;
  pvVar1 = operator_new(0x28);
  FUN_00ec2d8c();
  DAT_032107b0 = pvVar1;
  return;
}




void FUN_00ec03b4(void)

{
  if (DAT_032107b0 != (long *)0x0) {
    (**(code **)(*DAT_032107b0 + 8))();
  }
  DAT_032107b0 = (long *)0x0;
  if (DAT_032107a8 != (long *)0x0) {
    (**(code **)(*DAT_032107a8 + 8))();
  }
  DAT_032107a8 = (long *)0x0;
  FUN_00ec2414();
  FUN_00ec1f74();
  FUN_00ec1ccc();
  return;
}




void FUN_00ec040c(void)

{
  if (DAT_032107a8 != 0) {
    FUN_00ec14d4();
  }
  if (DAT_032107b0 != 0) {
    FUN_00ec2f28();
    return;
  }
  return;
}




bool FUN_00ec043c(void)

{
  return DAT_032107a8 != 0 && DAT_032107b0 != 0;
}




undefined8 FUN_00ec0464(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (DAT_032107a8 != 0)) {
    uVar1 = FUN_00ec159c(DAT_032107a8,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_00ec0488(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (DAT_032107b0 != 0)) {
    uVar1 = FUN_00ec306c(DAT_032107b0,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_00ec04a8(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (DAT_032107b0 != 0)) {
    uVar1 = FUN_00ec2f74(DAT_032107b0,param_1);
    return uVar1;
  }
  return 0;
}




void FUN_00ec04c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (DAT_032107b0 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_00ec3200();
    if (lVar1 == 0) {
      FUN_00ec0df4(param_1,&DAT_032107b8,0);
      return;
    }
    uVar2 = FUN_00ec1778(DAT_032107a8,param_2);
  }
  FUN_00ec0e28(param_1,uVar2);
  return;
}




void FUN_00ec053c(undefined8 param_1)

{
  FUN_00ec1930(DAT_032107a8,param_1);
  return;
}




void FUN_00ec0550(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_032107a8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00ec1a94(DAT_032107a8,param_2);
  }
  FUN_00ec0e28(param_1,uVar1);
  return;
}




bool FUN_00ec0594(undefined8 param_1)

{
  long lVar1;
  
  if (DAT_032107a8 != 0) {
    lVar1 = FUN_00ec1a94(DAT_032107a8,param_1);
    return lVar1 != 0;
  }
  return false;
}




void FUN_00ec05cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02821a40;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_00e70314(param_1 + 7);
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = 0xffffffffffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00ec0618(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02821a40;
  param_1[5] = 0;
  FUN_00ec2118(param_1[6]);
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = 0xffffffff00000001;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00ec066c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02821a40;
  param_1[5] = 0;
  FUN_00ec2118(param_1[6]);
  operator_delete(param_1);
  return;
}




void FUN_00ec06a8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}




undefined4 FUN_00ec06b0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}




long FUN_00ec06b8(long param_1)

{
  return param_1 + 8;
}




void FUN_00ec06c0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  FUN_00e70314(param_1 + 0x38);
  return;
}




void FUN_00ec06d0(long param_1)

{
  FUN_00e70314(param_1 + 0x38);
  return;
}




void FUN_00ec06d8(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  timespec local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x48) < 0) {
    bVar2 = false;
  }
  else {
    clock_gettime(1,&local_48);
    lVar4 = local_48.tv_nsec - *(long *)(param_1 + 0x40);
    lVar3 = local_48.tv_sec - *(long *)(param_1 + 0x38);
    if (lVar4 < 0) {
      lVar3 = lVar3 + -1;
      lVar4 = (local_48.tv_nsec + 1000000000) - *(long *)(param_1 + 0x40);
    }
    bVar2 = (double)*(int *)(param_1 + 0x48) <= (double)(lVar4 + lVar3 * 1000000000) * 1e-09;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




void FUN_00ec0790(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x50);
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




void FUN_00ec07a8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x50);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}




bool FUN_00ec07c0(long param_1)

{
  return *(int *)(param_1 + 0x50) != 0;
}




undefined8 FUN_00ec07d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_00ec07d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void thunk_FUN_00ec07e4(undefined4 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == 0) {
    lVar1 = FUN_00ec200c();
    *(long *)(param_2 + 0x30) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  if (*(int *)(lVar1 + 0x4c) == 9) {
    *(undefined4 *)(lVar1 + 0x4c) = 8;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    lVar1 = *(long *)(param_2 + 0x30);
    if (*(int *)(lVar1 + 0x4c) == 9) {
      *(undefined4 *)(lVar1 + 0x4c) = 8;
      *(undefined8 *)(lVar1 + 0x50) = 0;
    }
  }
  lVar1 = FUN_00ec0f3c(lVar1,param_3,1);
  if (*(int *)(lVar1 + 0x4c) == 9) {
    *(undefined4 *)(lVar1 + 0x4c) = 3;
  }
  *(undefined4 *)(lVar1 + 0x50) = param_1;
  return;
}




void FUN_00ec07e4(undefined4 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == 0) {
    lVar1 = FUN_00ec200c();
    *(long *)(param_2 + 0x30) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  if (*(int *)(lVar1 + 0x4c) == 9) {
    *(undefined4 *)(lVar1 + 0x4c) = 8;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    lVar1 = *(long *)(param_2 + 0x30);
    if (*(int *)(lVar1 + 0x4c) == 9) {
      *(undefined4 *)(lVar1 + 0x4c) = 8;
      *(undefined8 *)(lVar1 + 0x50) = 0;
    }
  }
  lVar1 = FUN_00ec0f3c(lVar1,param_3,1);
  if (*(int *)(lVar1 + 0x4c) == 9) {
    *(undefined4 *)(lVar1 + 0x4c) = 3;
  }
  *(undefined4 *)(lVar1 + 0x50) = param_1;
  return;
}




void thunk_FUN_00ec087c(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    lVar1 = FUN_00ec200c();
    *(long *)(param_1 + 0x30) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  if (*(int *)(lVar1 + 0x4c) == 9) {
    *(undefined4 *)(lVar1 + 0x4c) = 8;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    lVar1 = *(long *)(param_1 + 0x30);
    if (*(int *)(lVar1 + 0x4c) == 9) {
      *(undefined4 *)(lVar1 + 0x4c) = 8;
      *(undefined8 *)(lVar1 + 0x50) = 0;
    }
  }
  lVar1 = FUN_00ec0f3c(lVar1,param_2,1);
  if (*(int *)(lVar1 + 0x4c) == 9) {
    *(undefined4 *)(lVar1 + 0x4c) = 2;
  }
  *(undefined4 *)(lVar1 + 0x50) = param_3;
  return;
}




void FUN_00ec087c(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    lVar1 = FUN_00ec200c();
    *(long *)(param_1 + 0x30) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  if (*(int *)(lVar1 + 0x4c) == 9) {
    *(undefined4 *)(lVar1 + 0x4c) = 8;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    lVar1 = *(long *)(param_1 + 0x30);
    if (*(int *)(lVar1 + 0x4c) == 9) {
      *(undefined4 *)(lVar1 + 0x4c) = 8;
      *(undefined8 *)(lVar1 + 0x50) = 0;
    }
  }
  lVar1 = FUN_00ec0f3c(lVar1,param_2,1);
  if (*(int *)(lVar1 + 0x4c) == 9) {
    *(undefined4 *)(lVar1 + 0x4c) = 2;
  }
  *(undefined4 *)(lVar1 + 0x50) = param_3;
  return;
}




void FUN_00ec0910(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_00ec0918(param_1,param_2,param_3 & 1);
  return;
}




void FUN_00ec0918(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    lVar1 = FUN_00ec200c();
    *(long *)(param_1 + 0x30) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  if (*(int *)(lVar1 + 0x4c) == 9) {
    *(undefined4 *)(lVar1 + 0x4c) = 8;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    lVar1 = *(long *)(param_1 + 0x30);
  }
  FUN_00ec1068(lVar1,param_2,param_3 & 1,1);
  return;
}




void thunk_FUN_00ec0994(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    lVar1 = FUN_00ec200c();
    *(long *)(param_1 + 0x30) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  if (*(int *)(lVar1 + 0x4c) == 9) {
    *(undefined4 *)(lVar1 + 0x4c) = 8;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    lVar1 = *(long *)(param_1 + 0x30);
  }
  FUN_00ec10bc(lVar1,param_2,param_3,1);
  return;
}




void FUN_00ec0994(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    lVar1 = FUN_00ec200c();
    *(long *)(param_1 + 0x30) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  if (*(int *)(lVar1 + 0x4c) == 9) {
    *(undefined4 *)(lVar1 + 0x4c) = 8;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    lVar1 = *(long *)(param_1 + 0x30);
  }
  FUN_00ec10bc(lVar1,param_2,param_3,1);
  return;
}




void thunk_FUN_00ec0a10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    lVar1 = FUN_00ec200c();
    *(long *)(param_1 + 0x30) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  if (*(int *)(lVar1 + 0x4c) == 9) {
    *(undefined4 *)(lVar1 + 0x4c) = 8;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    lVar1 = *(long *)(param_1 + 0x30);
  }
  FUN_00ec1164(lVar1,param_2,param_3,1);
  return;
}




void FUN_00ec0a10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    lVar1 = FUN_00ec200c();
    *(long *)(param_1 + 0x30) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  if (*(int *)(lVar1 + 0x4c) == 9) {
    *(undefined4 *)(lVar1 + 0x4c) = 8;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    lVar1 = *(long *)(param_1 + 0x30);
  }
  FUN_00ec1164(lVar1,param_2,param_3,1);
  return;
}




void FUN_00ec0a88(void)

{
  return;
}




void FUN_00ec0a8c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auStack_80 [64];
  int local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    FUN_00e6a50c(auStack_80,0x40,param_2);
    uVar2 = FUN_00e6a474(param_2);
    local_40 = FUN_0091ed5c(param_2,uVar2,0x12345678);
    for (lVar3 = *(long *)(lVar3 + 0x50); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x58)) {
      if (*(int *)(lVar3 + 0x48) == local_40) {
        *param_3 = *(undefined4 *)(lVar3 + 0x50);
        break;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec0b3c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auStack_80 [64];
  int local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    FUN_00e6a50c(auStack_80,0x40,param_2);
    uVar2 = FUN_00e6a474(param_2);
    local_40 = FUN_0091ed5c(param_2,uVar2,0x12345678);
    for (lVar3 = *(long *)(lVar3 + 0x50); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x58)) {
      if (*(int *)(lVar3 + 0x48) == local_40) {
        *param_3 = *(undefined4 *)(lVar3 + 0x50);
        break;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec0bec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auStack_80 [64];
  int local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    FUN_00e6a50c(auStack_80,0x40,param_2);
    uVar2 = FUN_00e6a474(param_2);
    local_40 = FUN_0091ed5c(param_2,uVar2,0x12345678);
    for (lVar3 = *(long *)(lVar3 + 0x50); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x58)) {
      if (*(int *)(lVar3 + 0x48) == local_40) {
        *param_3 = *(undefined1 *)(lVar3 + 0x50);
        break;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec0c9c(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00ec0cac();
    return;
  }
  return;
}




void FUN_00ec0cac(long param_1,undefined8 param_2,byte *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  int *piVar4;
  byte local_80 [16];
  void *local_70;
  int local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e6a50c(local_80,0x40,param_2);
  uVar2 = FUN_00e6a474(param_2);
  local_40 = FUN_0091ed5c(param_2,uVar2,0x12345678);
  lVar3 = *(long *)(param_1 + 0x50);
  do {
    if (lVar3 == 0) {
LAB_00ec0d80:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(int *)(lVar3 + 0x48) == local_40) {
      piVar4 = *(int **)(lVar3 + 0x50);
      if ((piVar4 == (int *)0x0) || (*piVar4 == 0)) {
        if ((*param_3 & 1) == 0) {
          param_3[0] = 0;
          param_3[1] = 0;
        }
        else {
          **(undefined1 **)(param_3 + 0x10) = 0;
          param_3[8] = 0;
          param_3[9] = 0;
          param_3[10] = 0;
          param_3[0xb] = 0;
          param_3[0xc] = 0;
          param_3[0xd] = 0;
          param_3[0xe] = 0;
          param_3[0xf] = 0;
        }
      }
      else {
        FUN_008fa54c(local_80,*(undefined8 *)(piVar4 + 2));
        FUN_008fce60(param_3,local_80);
        if ((local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
      }
      goto LAB_00ec0d80;
    }
    lVar3 = *(long *)(lVar3 + 0x58);
  } while( true );
}




void FUN_00ec0da8(void)

{
  return;
}




void FUN_00ec0dac(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x50);
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




void FUN_00ec0dc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  FUN_00e6a50c(param_1 + 8,0x20,param_2);
  return;
}




void FUN_00ec0de0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02821a60;
  param_1[1] = 0;
  return;
}




void FUN_00ec0df4(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_02821a60;
  lVar4 = *(long *)(param_2 + 8);
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}




void FUN_00ec0e28(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  *param_1 = &PTR_FUN_02821a60;
  param_1[1] = param_2;
  if (param_2 != 0) {
    piVar1 = (int *)(param_2 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}




void FUN_00ec0e54(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  *param_1 = &PTR_FUN_02821a60;
  param_1[1] = param_2;
  piVar1 = (int *)(param_2 + 0x50);
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




void FUN_00ec0e7c(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  *param_1 = &PTR_FUN_02821a60;
  if (param_1[1] != 0) {
    piVar1 = (int *)(param_1[1] + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}




void FUN_00ec0eac(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  *param_1 = &PTR_FUN_02821a60;
  if (param_1[1] != 0) {
    piVar1 = (int *)(param_1[1] + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  operator_delete(param_1);
  return;
}




undefined8 FUN_00ec0edc(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 8);
  *(long *)(param_1 + 8) = lVar4;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}




undefined8 FUN_00ec0f0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00ec0f14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00ec0f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00ec0f24(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




bool FUN_00ec0f2c(long param_1)

{
  return *(long *)(param_1 + 8) != 0;
}




long FUN_00ec0f3c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_90 [64];
  int local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x4c) == 9) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 8;
  }
  plVar5 = (long *)(param_1 + 0x50);
  FUN_00e6a50c(auStack_90,0x40,param_2);
  uVar2 = FUN_00e6a474(param_2);
  local_50 = FUN_0091ed5c(param_2,uVar2,0x12345678);
  for (lVar6 = *plVar5; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x58)) {
    if (*(int *)(lVar6 + 0x48) == local_50) goto LAB_00ec1038;
  }
  lVar6 = 0;
  if ((param_3 & 1) != 0) {
    lVar6 = FUN_00ec200c();
    FUN_00e6a50c(lVar6 + 8,0x40,param_2);
    uVar2 = FUN_00e6a474(param_2);
    uVar2 = FUN_0091ed5c(param_2,uVar2,0x12345678);
    *(undefined4 *)(lVar6 + 0x48) = uVar2;
    lVar4 = *plVar5;
    if (*plVar5 == 0) {
      *plVar5 = lVar6;
    }
    else {
      do {
        lVar3 = lVar4;
        lVar4 = *(long *)(lVar3 + 0x58);
      } while (lVar4 != 0);
      *(long *)(lVar3 + 0x58) = lVar6;
    }
  }
LAB_00ec1038:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

