// functions/00ec3 — 52 functions
#include "libGameKindred.h"




void FUN_00ec306c(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,param_1);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    (**(code **)(*param_2 + 0x18))(param_2);
    local_40 = param_2;
    FUN_00ec3100(param_1 + 0x18,&local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}




void FUN_00ec3100(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
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
    FUN_00ec32f0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 FUN_00ec3188(long param_1,char *param_2)

{
  int iVar1;
  char *__s2;
  ulong uVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = 0;
    do {
      __s2 = (char *)(**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar2 * 8) + 0x18))();
      iVar1 = strcmp(param_2,__s2);
      if (iVar1 == 0) {
        return *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar2 * 8);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  return 0;
}




undefined8 FUN_00ec3200(long param_1,char *param_2)

{
  int iVar1;
  char *__s2;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar2 = 0;
    do {
      __s2 = (char *)FUN_00ec3520(*(undefined8 *)(*(long *)(param_1 + 0x20) + uVar2 * 8));
      iVar1 = strcmp(param_2,__s2);
      if (iVar1 == 0) {
        return *(undefined8 *)(*(long *)(param_1 + 0x20) + uVar2 * 8);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x18));
  }
  return 0;
}




void FUN_00ec3270(uint *param_1,uint param_2)

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




void FUN_00ec32f0(uint *param_1,uint param_2)

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




void FUN_00ec3370(undefined8 *param_1)

{
  FUN_01b13ed8();
  *param_1 = &PTR_FUN_02821b38;
  FUN_00ec3534(param_1 + 5);
  *(undefined4 *)(param_1 + 0xf) = 1000;
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  return;
}




void FUN_00ec33b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02821b38;
  *(undefined1 *)((long)param_1 + 0x7c) = 1;
  FUN_01b13f30();
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  FUN_00ec35b8(param_1 + 5);
  FUN_01b13ef0(param_1);
  return;
}




void FUN_00ec33fc(long param_1)

{
  *(undefined1 *)(param_1 + 0x7c) = 1;
  FUN_01b13f30();
  *(undefined1 *)(param_1 + 0x7c) = 0;
  return;
}




void FUN_00ec3428(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xec342c);
  (*pcVar1)();
}




void FUN_00ec342c(void)

{
  return;
}




void FUN_00ec3430(void)

{
  return;
}




void FUN_00ec3434(void)

{
  return;
}




void FUN_00ec3438(long *param_1)

{
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  (**(code **)(*param_1 + 0x18))();
  FUN_01b13f64(param_1,0);
  return;
}




void FUN_00ec346c(long param_1,uint param_2)

{
  if (param_2 < 0xb) {
    param_2 = 10;
  }
  *(uint *)(param_1 + 0x78) = param_2;
  return;
}




long FUN_00ec3480(long param_1)

{
  return param_1 + 0x28;
}




void FUN_00ec3488(long *param_1)

{
  uint uVar1;
  
  if (*(char *)((long)param_1 + 0x7c) == '\0') {
    do {
      FUN_00ec3680(param_1 + 5);
      (**(code **)(*param_1 + 0x38))(param_1);
      uVar1 = *(uint *)(param_1 + 0xf);
      if (uVar1 < 0xb) {
        uVar1 = 10;
      }
      FUN_00e6b418(uVar1);
    } while (*(char *)((long)param_1 + 0x7c) == '\0');
  }
  return;
}




void FUN_00ec34ec(void)

{
  return;
}




void FUN_00ec34f0(undefined8 *param_1,undefined8 param_2)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_02821b88;
  param_1[1] = 0;
  FUN_00e6a50c(param_1 + 1,0x20,param_2);
  return;
}




void FUN_00ec3518(void)

{
  return;
}




void FUN_00ec351c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xec3520);
  (*pcVar1)();
}




long FUN_00ec3520(long param_1)

{
  return param_1 + 8;
}




void FUN_00ec3528(void)

{
  return;
}




void FUN_00ec352c(void)

{
  return;
}




void FUN_00ec3530(void)

{
  return;
}




void FUN_00ec3534(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  *param_1 = &PTR_FUN_02821be8;
  FUN_00e77acc(param_1 + 1,1);
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00e70314(param_1 + 8);
  do {
    iVar1 = DAT_032107e0 + 1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x32107e0,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_032107e0 = iVar1;
    }
  } while (cVar2 != '\0');
  DAT_032107e0 = iVar1;
  FUN_00e70314(param_1 + 8);
  return;
}




void FUN_00ec359c(void)

{
  char cVar1;
  bool bVar2;
  
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x32107e0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_032107e0 = DAT_032107e0 + 1;
    }
  } while (cVar1 != '\0');
  return;
}




int FUN_00ec35b8(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  
  __mutex = (pthread_mutex_t *)(param_1 + 1);
  *param_1 = &PTR_FUN_02821be8;
  pthread_mutex_lock(__mutex);
  piVar2 = (int *)(param_1 + 6);
  if (*piVar2 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      FUN_00ec25ac(*(undefined8 *)(param_1[7] + lVar3));
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x20;
    } while (uVar4 < *(uint *)(param_1 + 6));
  }
  if (param_1[7] != 0) {
    *piVar2 = 0;
  }
  pthread_mutex_unlock(__mutex);
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    piVar2[0] = 0;
    piVar2[1] = 0;
    param_1[7] = 0;
  }
  iVar1 = pthread_mutex_destroy(__mutex);
  return iVar1;
}




void FUN_00ec365c(void *param_1)

{
  FUN_00ec35b8();
  operator_delete(param_1);
  return;
}




int FUN_00ec3680(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  uVar1 = *(int *)(param_1 + 0x30) - 1;
  uVar3 = (ulong)uVar1;
  if (-1 < (int)uVar1) {
    uVar6 = -(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | uVar3 << 5;
    do {
      lVar4 = *(long *)(param_1 + 0x38);
      if ((*(uint *)(lVar4 + uVar3 * 0x20 + 0x1c) & 0x7ffffffe) == 2) {
        FUN_00ec26f4(*(undefined8 *)(lVar4 + uVar3 * 0x20));
        puVar5 = *(undefined8 **)(lVar4 + uVar3 * 0x20);
        if (*(int *)(puVar5 + 0x17) == 0) {
          (*(code *)puVar5[1])(*puVar5,puVar5[0x16]);
        }
        else {
          (*(code *)puVar5[3])(puVar5[2]);
        }
        FUN_00ec25ac(puVar5);
        lVar4 = *(long *)(param_1 + 0x38) + uVar6;
        FUN_00ec3c68((int *)(param_1 + 0x30),lVar4,lVar4 + 0x20);
      }
      uVar1 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar1;
      uVar6 = uVar6 - 0x20;
    } while (-1 < (int)uVar1);
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar2;
}




int FUN_00ec374c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  timespec local_78;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  do {
    iVar1 = DAT_032107e0 + 1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(0x32107e0,0x10);
    if (bVar6) {
      cVar5 = ExclusiveMonitorsStatus();
      DAT_032107e0 = iVar1;
    }
  } while (cVar5 != '\0');
  clock_gettime(1,&local_78);
  lVar10 = local_78.tv_nsec - *(long *)(param_1 + 0x48);
  lVar9 = local_78.tv_sec - *(long *)(param_1 + 0x40);
  if (lVar10 < 0) {
    lVar9 = lVar9 + -1;
    lVar10 = (local_78.tv_nsec + 1000000000) - *(long *)(param_1 + 0x48);
  }
  dVar15 = (double)(lVar10 + lVar9 * 1000000000) * 1e-09;
  fVar12 = (float)FUN_00ec26dc(param_2);
  fVar13 = 0.0;
  if (0.0 < fVar12) {
    fVar13 = (float)FUN_00ec26dc(param_2);
  }
  dVar16 = dVar15 + (double)fVar13;
  iVar8 = FUN_00ec26e4(param_2);
  FUN_00ec26ec(param_2,iVar1);
  uVar4 = *(uint *)(param_1 + 0x30);
  uVar11 = (ulong)uVar4;
  uStack_80 = 0;
  local_88 = 0;
  uStack_90 = 0;
  local_98 = 0;
  FUN_00ec3908((uint *)(param_1 + 0x30),uVar4 + 1,&local_98);
  if (uVar4 != 0) {
    lVar9 = (ulong)(uVar4 - 1) << 5;
    lVar10 = uVar11 << 5;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar9);
      if ((double)puVar2[1] <= dVar16) goto LAB_00ec38a0;
      uVar14 = puVar2[2];
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar10);
      uVar11 = uVar11 - 1;
      lVar9 = lVar9 + -0x20;
      puVar3[3] = puVar2[3];
      puVar3[2] = uVar14;
      uVar14 = *puVar2;
      lVar10 = lVar10 + -0x20;
      puVar3[1] = puVar2[1];
      *puVar3 = uVar14;
    } while ((int)uVar11 != 0);
  }
  uVar11 = 0;
LAB_00ec38a0:
  FUN_00ec26f4(param_2);
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + (uVar11 & 0xffffffff) * 0x20);
  *puVar2 = param_2;
  puVar2[1] = dVar16;
  puVar2[2] = dVar15;
  *(float *)(puVar2 + 3) = fVar13;
  *(int *)((long)puVar2 + 0x1c) = iVar8 << 0x1f;
  iVar8 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar8);
}




void FUN_00ec3908(uint *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < param_2) {
      FUN_00ec3ce0(param_1,param_2);
    }
    uVar2 = *param_1;
    if (uVar2 < param_2) {
      lVar3 = (ulong)uVar2 << 5;
      lVar4 = (ulong)param_2 - (ulong)uVar2;
      do {
        uVar5 = param_3[2];
        lVar4 = lVar4 + -1;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + lVar3);
        puVar1[3] = param_3[3];
        puVar1[2] = uVar5;
        uVar5 = *param_3;
        lVar3 = lVar3 + 0x20;
        puVar1[1] = param_3[1];
        *puVar1 = uVar5;
      } while (lVar4 != 0);
    }
    *param_1 = param_2;
  }
  return;
}




undefined8 FUN_00ec39a0(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  timespec local_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  clock_gettime(1,&local_58);
  lVar6 = local_58.tv_nsec - *(long *)(param_1 + 0x48);
  lVar5 = local_58.tv_sec - *(long *)(param_1 + 0x40);
  if (lVar6 < 0) {
    lVar5 = lVar5 + -1;
    lVar6 = (local_58.tv_nsec + 1000000000) - *(long *)(param_1 + 0x48);
  }
  if (*(uint *)(param_1 + 0x30) != 0) {
    lVar10 = 0;
    uVar8 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x38) + (ulong)uVar8 * 0x20;
      if ((double)(lVar6 + lVar5 * 1000000000) * 1e-09 < *(double *)(lVar1 + 8)) break;
      puVar7 = (uint *)(lVar1 + 0x1c);
      uVar2 = *puVar7;
      if ((uVar2 & 0x7fffffff) == 0) {
        *puVar7 = uVar2 & 0x80000000 | 1;
        FUN_00ec26f4(*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar10));
        uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar10);
        goto LAB_00ec3a8c;
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x20;
    } while (uVar8 < *(uint *)(param_1 + 0x30));
  }
  uVar9 = 0;
LAB_00ec3a8c:
  iVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
}




bool FUN_00ec3ac4(long param_1,undefined4 param_2)

{
  long lVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  lVar1 = FUN_00ec3b30(param_1,param_2);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x1c) = *(uint *)(lVar1 + 0x1c) & 0x80000000 | 2;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return lVar1 != 0;
}




long FUN_00ec3b30(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      iVar1 = FUN_00ec26f4(*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar2));
      if (iVar1 == param_2) {
        return *(long *)(param_1 + 0x38) + lVar2;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x20;
    } while (uVar3 < *(uint *)(param_1 + 0x30));
  }
  return 0;
}




bool FUN_00ec3ba0(long param_1,undefined4 param_2)

{
  long lVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  lVar1 = FUN_00ec3b30(param_1,param_2);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x1c) = *(uint *)(lVar1 + 0x1c) & 0x80000000 | 3;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return lVar1 != 0;
}




undefined8 FUN_00ec3c0c(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  puVar1 = (undefined8 *)FUN_00ec3b30(param_1,param_2);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return uVar2;
}




void FUN_00ec3c68(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        uVar5 = param_3[2];
        param_2[3] = param_3[3];
        param_2[2] = uVar5;
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_00ec3ce0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      do {
        uVar5 = puVar2[2];
        lVar3 = lVar3 + -0x20;
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 4;
        puVar2 = puVar2 + 4;
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




void FUN_00ec3d6c(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *param_1 = 0;
  return;
}




void FUN_00ec3d7c(undefined4 *param_1,undefined4 *param_2)

{
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = *param_2;
  FUN_008fce60(param_1 + 2,param_2 + 2);
  param_1[8] = param_2[8];
  return;
}




void FUN_00ec3db8(undefined4 *param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 1;
  FUN_008fa54c(local_40);
  FUN_008fce60(param_1 + 2,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec3e30(undefined4 *param_1,undefined4 param_2)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *param_1 = 2;
  param_1[8] = param_2;
  return;
}




void FUN_00ec3e48(undefined4 param_1,undefined4 *param_2)

{
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *param_2 = 3;
  param_2[8] = param_1;
  return;
}




undefined4 * FUN_00ec3e60(undefined4 *param_1)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = 1;
  FUN_008fa54c(local_50);
  FUN_008fce60(param_1 + 2,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec3ee0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = 2;
  param_1[8] = param_2;
  return;
}




void FUN_00ec3ef0(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 3;
  param_2[8] = param_1;
  return;
}




undefined4 FUN_00ec3f00(undefined4 *param_1)

{
  return *param_1;
}




long FUN_00ec3f08(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return param_1 + 9;
  }
  return *(long *)(param_1 + 0x18);
}




undefined4 FUN_00ec3f24(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}




undefined4 FUN_00ec3f2c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}




void FUN_00ec3f34(byte *param_1,undefined8 param_2)

{
  float fVar1;
  long lVar2;
  double dVar3;
  undefined8 *puVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  long local_130;
  ulong local_128;
  undefined4 local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  void *local_100;
  void *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  float *local_c8;
  float *local_c0;
  ulong local_b8 [2];
  void *local_a8;
  float local_a0;
  undefined4 local_98 [2];
  ulong local_90 [2];
  void *local_80;
  float local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = (void *)0x0;
  local_f8 = (void *)0x0;
  local_108 = 0;
  local_e0 = 0x400;
  local_d8 = 0;
  local_d0 = 0;
  local_118 = operator_new(0x28);
  local_118[3] = 0;
  local_118[4] = 0;
  local_118[1] = 0x10000;
  local_118[2] = 0;
  *local_118 = 0;
  local_c8 = *(float **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    local_c8 = (float *)(param_1 + 1);
  }
  local_110 = local_118;
  local_c0 = local_c8;
  FUN_008fd344(&local_130,&local_c8);
  if ((int)local_128 != 0) {
    pfVar6 = (float *)(local_130 + 0x18);
    do {
      if ((*(byte *)((long)pfVar6 + -6) >> 6 & 1) == 0) {
        pfVar7 = *(float **)(pfVar6 + -6);
      }
      else {
        pfVar7 = pfVar6 + -6;
      }
      if (pfVar7 != (float *)0x0) {
        fVar1 = pfVar6[4];
        if (((uint)fVar1 >> 0xe & 1) == 0) {
          if (((uint)fVar1 >> 10 & 1) == 0) {
            if (((uint)fVar1 >> 0xc & 1) == 0) {
              if (((uint)fVar1 >> 0x14 & 1) == 0) goto LAB_00ec410c;
              pfVar5 = pfVar6;
              if (((uint)fVar1 >> 0x16 & 1) == 0) {
                pfVar5 = *(float **)pfVar6;
              }
              FUN_00ec3db8(local_98,pfVar5);
              local_c0 = (float *)CONCAT44(local_c0._4_4_,local_98[0]);
              goto LAB_00ec40c8;
            }
            local_78 = (float)*(undefined8 *)pfVar6;
          }
          else {
            local_78 = *pfVar6;
          }
          local_80 = (void *)0x0;
          local_90[1] = 0;
          local_90[0] = 0;
          local_98[0] = 2;
          local_c0 = (float *)CONCAT44(local_c0._4_4_,2);
        }
        else {
          dVar3 = (double)FUN_008fc0f0(pfVar6);
          local_78 = (float)dVar3;
          local_90[1] = 0;
          local_80 = (void *)0x0;
          local_90[0] = 0;
          local_98[0] = 3;
          local_c0 = (float *)CONCAT44(local_c0._4_4_,3);
        }
LAB_00ec40c8:
        local_a8 = (void *)0x0;
        local_b8[1] = 0;
        local_b8[0] = 0;
        local_c8 = pfVar7;
        FUN_008fce60(local_b8,local_90);
        local_a0 = local_78;
        FUN_00ec4c7c(param_2,&local_c8,&local_c8);
        if ((local_b8[0] & 1) != 0) {
          operator_delete(local_a8);
        }
        if ((local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
      }
LAB_00ec410c:
      pfVar7 = pfVar6 + 6;
      pfVar6 = pfVar6 + 0xc;
    } while (pfVar7 != (float *)(local_130 + (local_128 & 0xffffffff) * 0x30));
  }
  puVar4 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_110);
    operator_delete(puVar4);
  }
  free(local_f8);
  if (local_100 != (void *)0x0) {
    operator_delete(local_100);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

