// functions/00932 — 35 functions
#include "libGameKindred.h"




undefined8 FUN_0093201c(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_02c7c010 != 0) {
    uVar1 = FUN_009333cc(DAT_02c7c010,param_1);
    return uVar1;
  }
  return 0;
}




void FUN_0093203c(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_02c7c010;
  if (DAT_02c7c010 != 0) {
    uVar2 = FUN_00932c44(DAT_02c7c010);
    FUN_0093330c(lVar1,uVar2,param_1 & 1);
    return;
  }
  return;
}




undefined8 FUN_00932084(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_02c7c010;
  if (DAT_02c7c010 != 0) {
    uVar2 = FUN_00932c44(DAT_02c7c010);
    uVar2 = FUN_009333cc(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}




undefined8 FUN_009320c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_02c7c010 != 0) {
    uVar1 = FUN_00933418(DAT_02c7c010,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_009320e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_02c7c010 != 0) {
    uVar1 = FUN_00933464(DAT_02c7c010,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 * FUN_00932108(void)

{
  void *pvVar1;
  
  if (DAT_02c7c018 == (undefined8 *)0x0) {
    DAT_02c7c018 = operator_new(0x18);
    *(undefined4 *)(DAT_02c7c018 + 2) = 0;
    *DAT_02c7c018 = 0;
    DAT_02c7c018[1] = 0;
    pvVar1 = operator_new(0x28);
    FUN_00e77acc(pvVar1,0);
    DAT_02c7c020 = pvVar1;
  }
  return DAT_02c7c018;
}




int FUN_00932160(undefined8 *param_1)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027ba168;
  plVar3 = (long *)FUN_00932108();
  __mutex = DAT_02c7c020;
  pthread_mutex_lock(DAT_02c7c020);
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




int FUN_009321e0(undefined8 *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_027ba168;
  uVar2 = FUN_00932108();
  __mutex = DAT_02c7c020;
  pthread_mutex_lock(DAT_02c7c020);
  FUN_0093223c(uVar2,param_1);
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_0093223c(long *param_1,long param_2)

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




void FUN_0093229c(void *param_1)

{
  FUN_009321e0();
  operator_delete(param_1);
  return;
}




int FUN_009322c0(undefined8 param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00932108();
  __mutex = DAT_02c7c020;
  pthread_mutex_lock(DAT_02c7c020);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
  }
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




int FUN_00932324(undefined8 param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00932108();
  __mutex = DAT_02c7c020;
  pthread_mutex_lock(DAT_02c7c020);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
  }
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




int FUN_00932388(void)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00932108();
  __mutex = DAT_02c7c020;
  pthread_mutex_lock(DAT_02c7c020);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




int FUN_009323dc(void)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00932108();
  __mutex = DAT_02c7c020;
  pthread_mutex_lock(DAT_02c7c020);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_00932430(void)

{
  return;
}




void FUN_00932434(void)

{
  return;
}




void FUN_00932438(void)

{
  return;
}




void FUN_0093243c(void)

{
  return;
}




void FUN_00932440(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ec5fd8();
  FUN_00948cd8(param_1 + 3);
  *param_1 = &PTR_FUN_027ba1a8;
  param_1[3] = &PTR_FUN_027ba200;
  FUN_00e70314(param_1 + 6);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = param_1 + 9;
  param_1[0xb] = 0;
  FUN_008fcdb8(param_1 + 0xe,&DAT_0320ffa8);
  *(undefined1 *)(param_1 + 0x11) = 0;
  FUN_00e70314(param_1 + 6);
  FUN_00932524(param_1 + 0xb,0x10);
  lVar2 = FUN_00a06b24();
  local_58 = 0;
  pcStack_40 = thunk_FUN_00933cbc;
  puStack_50 = param_1;
  local_48 = param_1;
  FUN_00933ec0(lVar2 + 0x40,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00932524(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 2);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 2;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        lVar3 = lVar3 + -4;
        *puVar4 = *puVar5;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_009325a4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027ba1a8;
  param_1[3] = &PTR_FUN_027ba200;
  FUN_00932648();
  lVar2 = FUN_00a06b24();
  lVar4 = (ulong)*(uint *)(lVar2 + 0x40) << 5;
  lVar1 = *(long *)(lVar2 + 0x48);
  do {
    lVar3 = lVar1;
    if (lVar4 == 0) goto LAB_00932604;
    lVar4 = lVar4 + -0x20;
    lVar1 = lVar3 + 0x20;
  } while (*(undefined8 **)(lVar3 + 8) != param_1);
  FUN_00933fe0((uint *)(lVar2 + 0x40),lVar3);
LAB_00932604:
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    operator_delete((void *)param_1[0x10]);
  }
  if ((void *)param_1[0xc] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc]);
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  FUN_00933e74(param_1 + 8,param_1[9]);
  FUN_00948d58(param_1 + 3);
  FUN_00ec6058(param_1);
  return;
}




void FUN_00932648(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x40);
  while (plVar5 != (long *)(param_1 + 0x48)) {
    puVar4 = (undefined8 *)plVar5[5];
    if (puVar4 != (undefined8 *)0x0) {
      if ((void *)puVar4[1] != (void *)0x0) {
        operator_delete__((void *)puVar4[1]);
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      operator_delete(puVar4);
    }
    plVar2 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar2 = plVar5 + 2;
      bVar1 = *(long **)*plVar2 != plVar5;
      plVar5 = (long *)*plVar2;
      if (bVar1) {
        do {
          lVar3 = *plVar2;
          plVar2 = (long *)(lVar3 + 0x10);
          plVar5 = (long *)*plVar2;
        } while (*plVar5 != lVar3);
      }
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  FUN_00933e74((undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(long **)(param_1 + 0x40) = (long *)(param_1 + 0x48);
  if (*(long *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}




void FUN_00932718(long param_1)

{
  FUN_009325a4(param_1 + -0x18);
  return;
}




void FUN_00932720(void *param_1)

{
  FUN_009325a4();
  operator_delete(param_1);
  return;
}




void FUN_00932744(long param_1)

{
  FUN_009325a4((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}




void FUN_0093276c(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  timespec local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar3 = clock_gettime(1,&local_48);
  lVar8 = local_48.tv_nsec - *(long *)(param_1 + 0x38);
  lVar5 = local_48.tv_sec - *(long *)(param_1 + 0x30);
  if (lVar8 < 0) {
    lVar5 = lVar5 + -1;
    lVar8 = (local_48.tv_nsec + 1000000000) - *(long *)(param_1 + 0x38);
  }
  if (*(long **)(param_1 + 0x40) != (long *)(param_1 + 0x48)) {
    bVar2 = false;
    plVar4 = *(long **)(param_1 + 0x40);
    do {
      lVar6 = plVar4[5];
      if (((lVar6 != 0) && (*(char *)(lVar6 + 0x22) != '\0')) &&
         (*(double *)(lVar6 + 0x10) < (double)(lVar8 + lVar5 * 1000000000) * 1e-09)) {
        bVar2 = true;
        *(undefined1 *)(lVar6 + 0x22) = 0;
        *(undefined4 *)(lVar6 + 0x1c) = 0;
      }
      plVar7 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        plVar7 = plVar4 + 2;
        plVar9 = (long *)*plVar7;
        if ((long *)*plVar9 != plVar4) {
          do {
            lVar6 = *plVar7;
            plVar7 = (long *)(lVar6 + 0x10);
            plVar9 = (long *)*plVar7;
          } while (*plVar9 != lVar6);
        }
      }
      else {
        do {
          plVar9 = plVar7;
          plVar7 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
      plVar4 = plVar9;
    } while (plVar9 != (long *)(param_1 + 0x48));
    if (bVar2) {
      FUN_009323dc(iVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093289c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  void *pvVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  uint local_68 [2];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_009329e0(param_2);
  plVar6 = (long *)(param_1 + 0x48);
  plVar8 = (long *)*plVar6;
  plVar9 = plVar6;
  if (plVar8 != (long *)0x0) {
    do {
      if ((int)uVar3 <= (int)plVar8[4]) {
        plVar9 = plVar8;
      }
      plVar8 = (long *)plVar8[(int)plVar8[4] < (int)uVar3];
    } while (plVar8 != (long *)0x0);
    if ((plVar9 != plVar6) && ((int)plVar9[4] <= (int)uVar3)) {
      if ((param_3 & 1) != 0) {
        *(uint *)(param_1 + 0x68) = uVar3;
      }
      goto LAB_009329a4;
    }
  }
  pvVar4 = operator_new(0x28);
  thunk_FUN_00e7051c(pvVar4,param_2);
  *(undefined8 *)((long)pvVar4 + 0x10) = 0;
  *(undefined1 *)((long)pvVar4 + 0x22) = 0;
  *(undefined2 *)((long)pvVar4 + 0x20) = 0;
  *(uint *)((long)pvVar4 + 0x18) = uVar3;
  *(undefined4 *)((long)pvVar4 + 0x1c) = 0;
  local_68[0] = uVar3;
  local_60 = pvVar4;
  FUN_00934058((undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x40),local_68,local_68);
  if ((param_3 & 1) != 0) {
    *(uint *)(param_1 + 0x68) = uVar3;
  }
  lVar7 = (ulong)*(uint *)(param_1 + 0x58) << 2;
  puVar2 = *(uint **)(param_1 + 0x60);
  do {
    puVar5 = puVar2;
    if (lVar7 == 0) goto LAB_009329a4;
    lVar7 = lVar7 + -4;
    puVar2 = puVar5 + 1;
  } while (*puVar5 != uVar3);
  FUN_009342e4((uint *)(param_1 + 0x58),puVar5);
  FUN_00ec5f7c(uVar3,0);
  *(undefined1 *)((long)pvVar4 + 0x21) = 1;
LAB_009329a4:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_009329e0(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  FUN_008f68f8(local_50,0x40,0);
  FUN_00e70a24(param_1,local_50);
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  uVar3 = FUN_00e6a474(pvVar1);
  uVar3 = FUN_0091ed5c(pvVar1,uVar3,0x12345678);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00932a9c(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  void *pvVar8;
  
  iVar2 = FUN_009329e0(param_2);
  plVar4 = (long *)(param_1 + 0x48);
  plVar6 = (long *)*plVar4;
  plVar7 = plVar4;
  if (plVar6 != (long *)0x0) {
    do {
      if (iVar2 <= (int)plVar6[4]) {
        plVar7 = plVar6;
      }
      plVar6 = (long *)plVar6[(int)plVar6[4] < iVar2];
    } while (plVar6 != (long *)0x0);
    if ((plVar7 != plVar4) && ((int)plVar7[4] <= iVar2)) {
      pvVar8 = (void *)plVar7[5];
      if (pvVar8 != (void *)0x0) {
        if (*(void **)((long)pvVar8 + 8) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar8 + 8));
        }
        operator_delete(pvVar8);
      }
      FUN_00934354(param_1 + 0x40,plVar7);
      return;
    }
  }
  lVar5 = (ulong)*(uint *)(param_1 + 0x58) << 2;
  piVar1 = *(int **)(param_1 + 0x60);
  do {
    piVar3 = piVar1;
    if (lVar5 == 0) {
      return;
    }
    lVar5 = lVar5 + -4;
    piVar1 = piVar3 + 1;
  } while (*piVar3 != iVar2);
  FUN_009342e4((uint *)(param_1 + 0x58),piVar3);
  return;
}




ulong FUN_00932b70(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x50) != 0)) {
    if (*(long **)(param_1 + 0x40) != (long *)(param_1 + 0x48)) {
      if (param_3 == 0) {
        return 0;
      }
      uVar1 = 0;
      plVar5 = *(long **)(param_1 + 0x40);
      while( true ) {
        if (plVar5[5] != 0) {
          FUN_00e70900(param_2 + uVar1 * 0x10);
          uVar1 = (ulong)((int)uVar1 + 1);
        }
        plVar2 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) {
          plVar2 = plVar5 + 2;
          plVar3 = (long *)*plVar2;
          if ((long *)*plVar3 != plVar5) {
            do {
              lVar4 = *plVar2;
              plVar2 = (long *)(lVar4 + 0x10);
              plVar3 = (long *)*plVar2;
            } while (*plVar3 != lVar4);
          }
        }
        else {
          do {
            plVar3 = plVar2;
            plVar2 = (long *)*plVar3;
          } while ((long *)*plVar3 != (long *)0x0);
        }
        if (plVar3 == (long *)(param_1 + 0x48)) break;
        plVar5 = plVar3;
        if (param_3 <= (uint)uVar1) {
          return uVar1;
        }
      }
      return uVar1;
    }
  }
  return 0;
}




undefined8 * FUN_00932c44(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 0x48);
  plVar4 = (long *)*plVar3;
  if (plVar4 != (long *)0x0) {
    iVar1 = *(int *)(param_1 + 0x68);
    plVar2 = plVar3;
    do {
      if (iVar1 <= (int)plVar4[4]) {
        plVar2 = plVar4;
      }
      plVar4 = (long *)plVar4[(int)plVar4[4] < iVar1];
    } while (plVar4 != (long *)0x0);
    if (((plVar2 != plVar3) && ((int)plVar2[4] <= iVar1)) &&
       ((undefined8 *)plVar2[5] != (undefined8 *)0x0)) {
      return (undefined8 *)plVar2[5];
    }
  }
  return &DAT_03210450;
}




undefined8 FUN_00932c9c(void)

{
  return 1;
}




void FUN_00932ca4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulong local_98;
  void *local_90;
  void *local_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ec5f3c();
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_00932e44(param_1);
    if ((uVar3 & 1) == 0) {
      thunk_FUN_00ecb45c(2);
      FUN_008fa130(1,1);
      FUN_008f6b34(1,1);
    }
    FUN_00e70510(&local_78);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0xffffffff;
    uVar3 = FUN_009580c4();
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_00e70198(&DAT_0320ffc0,"--playerID");
      if ((uVar3 & 1) == 0) {
        puVar5 = &DAT_01e277f2;
      }
      else {
        puVar5 = (undefined1 *)FUN_00e70138(&DAT_0320ffc0,"--playerID");
      }
      FUN_00e705c8(&local_98,puVar5);
      FUN_00910394(&local_78,&local_98);
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
        local_98 = 0;
        local_90 = (void *)0x0;
      }
    }
    else {
      FUN_009580b8();
      uVar4 = FUN_0095fdf0();
      FUN_00910394(&local_78,uVar4);
    }
    local_80[0] = 0xf14ae9c3;
    FUN_008fa54c(&local_98,"Unused");
    FUN_00932efc(&local_68,local_80,&local_98);
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    uVar2 = FUN_009329e0(&local_78);
    FUN_0093289c(param_1,&local_78,1);
    FUN_00ec5f54(param_2,uVar2,&local_68);
    FUN_009330b4(&local_68);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = 0;
      local_70 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00932e44(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  char *__s2;
  char *pcVar4;
  long lVar5;
  void *__s1;
  
  bVar2 = *(byte *)(param_1 + 0x70);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x78);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x80);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x71);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar4 = (char *)(param_1 + 0x71);
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar4 != *__s2) {
            return true;
          }
          pcVar4 = pcVar4 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
    }
    else if (__n != 0) {
      iVar3 = memcmp(__s1,__s2,__n);
      return iVar3 != 0;
    }
    return false;
  }
  return true;
}




void FUN_00932efc(uint *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar9 = param_1[4];
  uVar8 = *param_1;
  uVar1 = *param_2;
  param_1[4] = uVar9 + 1;
  if (uVar8 >> 1 < uVar9 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar8 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar9 = *param_1;
    uVar10 = uVar9 - 1;
    uVar8 = (uint)local_58;
    if ((int)uVar10 < 0) {
      pvVar6 = *(void **)(param_1 + 2);
    }
    else {
      pvVar6 = *(void **)(param_1 + 2);
      do {
        iVar5 = *(int *)((long)pvVar6 + (ulong)uVar10 * 8 + 4);
        if (iVar5 != -1) {
          uVar9 = *(uint *)((long)pvVar6 + (ulong)uVar10 * 8);
          uVar3 = 0;
          if ((uint)local_58 != 0) {
            uVar3 = uVar9 / (uint)local_58;
          }
          uVar11 = (ulong)(uVar9 - uVar3 * (uint)local_58);
          piVar12 = (int *)((long)local_50 + uVar11 * 8 + 4);
          iVar2 = *piVar12;
          while (iVar2 != -1) {
            uVar3 = (uint)local_58;
            if (0 < (int)(uint)uVar11) {
              uVar3 = (uint)uVar11;
            }
            uVar11 = (ulong)(uVar3 - 1);
            piVar12 = (int *)((long)local_50 + uVar11 * 8 + 4);
            iVar2 = *piVar12;
          }
          *(uint *)((long)local_50 + uVar11 * 8) = uVar9;
          *piVar12 = iVar5;
        }
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
      uVar9 = *param_1;
    }
    uVar10 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar10,uVar9);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar6;
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar8 = *param_1;
    }
  }
  lVar7 = *(long *)(param_1 + 2);
  uVar9 = 0;
  if (uVar8 != 0) {
    uVar9 = uVar1 / uVar8;
  }
  uVar11 = (ulong)(uVar1 - uVar9 * uVar8);
  piVar12 = (int *)(lVar7 + uVar11 * 8 + 4);
  iVar5 = *piVar12;
  while (iVar5 != -1) {
    uVar9 = uVar8;
    if (0 < (int)(uint)uVar11) {
      uVar9 = (uint)uVar11;
    }
    uVar11 = (ulong)(uVar9 - 1);
    piVar12 = (int *)(lVar7 + uVar11 * 8 + 4);
    iVar5 = *piVar12;
  }
  *(uint *)(lVar7 + uVar11 * 8) = uVar1;
  iVar5 = FUN_00934828(param_1,param_3);
  *piVar12 = iVar5;
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

