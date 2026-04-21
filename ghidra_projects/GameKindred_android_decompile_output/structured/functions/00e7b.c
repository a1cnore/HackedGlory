// functions/00e7b — 65 functions
#include "libGameKindred.h"




void FUN_00e7b008(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00e7a9b0();
    return;
  }
  return;
}




void FUN_00e7b018(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 100) = param_2;
  return;
}




void FUN_00e7b020(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 0x60) = 1;
  if (*(char *)(param_1 + 100) == '\x03') {
    if (*(long *)(param_1 + 0x40) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x40) + -8);
      uVar3 = 0;
      if (plVar2 == (long *)0x0) goto LAB_00e7b0a0;
      do {
        *(undefined1 *)(*plVar2 + 100) = 3;
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      } while (plVar2 != (long *)0x0);
    }
  }
  else {
    *(undefined1 *)(param_1 + 100) = 4;
    if (*(long *)(param_1 + 8) != 0) {
      uVar3 = FUN_00e7b11c(param_1);
      goto LAB_00e7b0a0;
    }
  }
  uVar3 = 0;
LAB_00e7b0a0:
  if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    sem_post((sem_t *)**(undefined8 **)(param_1 + 0x30));
  }
  FUN_00e7b1a8(param_1,uVar3);
  FUN_00e7b250(param_1);
  *(undefined1 *)(param_1 + 100) = 5;
  FUN_00e7b2dc(param_1);
  return;
}




void FUN_00e7b0e8(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x40) + -8);
    while (plVar2 != (long *)0x0) {
      *(undefined1 *)(*plVar2 + 100) = 3;
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00e7b11c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e7a3b4();
  local_68 = param_1[0xb];
  local_60 = param_1[3];
  uStack_50 = param_1[5];
  local_58 = param_1[4];
  local_48 = 0;
  puStack_40 = param_1;
  FUN_00e7a3a0(&local_68);
  (*(code *)param_1[1])(*param_1);
  FUN_00e7a3a0(uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_48);
}




void FUN_00e7b1a8(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar4 = (long *)(*(long *)(param_1 + 0x40) + -8);
    while (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      if (lVar5 != 0) {
        uVar6 = 0;
        do {
          plVar1 = (long *)(lVar5 + uVar6 * 8 + 0x20);
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = param_2;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              FUN_00e7a3ec(param_2);
              goto LAB_00e7b220;
            }
          }
          ClearExclusiveLocal();
          uVar6 = uVar6 + 1;
        } while (uVar6 < 2);
      }
LAB_00e7b220:
      plVar1 = plVar4 + 1;
      plVar4 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar4 = (long *)(*plVar1 + -8);
      }
    }
  }
  FUN_00e7a404(param_2);
  return;
}




void FUN_00e7b250(long param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = (long *)(param_1 + 0x40);
  lVar6 = *plVar7;
  if ((lVar6 != 0) && (plVar8 = (long *)(lVar6 + -8), plVar8 != (long *)0x0)) {
    do {
      if (*plVar8 != 0) {
        piVar2 = (int *)(*plVar8 + 0x60);
        do {
          iVar3 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          FUN_00e7b3d4();
        }
      }
      plVar1 = plVar8 + 1;
      plVar8 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar8 = (long *)(*plVar1 + -8);
      }
    } while (plVar8 != (long *)0x0);
    lVar6 = *plVar7;
  }
  while (lVar6 != 0) {
    FUN_00e7b698(plVar7,lVar6 + -8);
    FUN_00e7abb8(lVar6 + -8);
    lVar6 = *plVar7;
  }
  return;
}




void FUN_00e7b2dc(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  piVar1 = (int *)(param_1 + 0x60);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 + -1 == 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_00e7a404();
    }
    lVar5 = 0x20;
    do {
      if (*(long *)(param_1 + lVar5) != 0) {
        FUN_00e7a404();
      }
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0x30);
    FUN_00e7aae4(param_1);
    return;
  }
  return;
}




void FUN_00e7b348(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  *param_2 = *(undefined8 *)(param_1 + 0x58);
  param_2[1] = *(undefined8 *)(param_1 + 0x18);
  do {
    *(undefined8 *)((long)param_2 + lVar1 + 0x10) = *(undefined8 *)(param_1 + lVar1 + 0x20);
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x10);
  param_2[4] = 0;
  param_2[5] = param_1;
  return;
}




void FUN_00e7b380(void)

{
  return;
}




void FUN_00e7b384(void)

{
  return;
}




void FUN_00e7b388(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  
  uVar4 = 0;
  do {
    plVar1 = (long *)(param_1 + uVar4 * 8 + 0x20);
    while (*plVar1 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = param_2;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        FUN_00e7a3ec(param_2);
        return;
      }
    }
    ClearExclusiveLocal();
    uVar4 = uVar4 + 1;
    if (1 < uVar4) {
      return;
    }
  } while( true );
}




void FUN_00e7b3d4(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 100) != '\x03')) {
    *(undefined1 *)(param_1 + 100) = 2;
    FUN_00e78ecc(*(long *)(param_1 + 0x10),thunk_FUN_00e7b020);
    return;
  }
  FUN_00e7b020(param_1);
  return;
}




void thunk_FUN_00e7b020(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 0x60) = 1;
  if (*(char *)(param_1 + 100) == '\x03') {
    if (*(long *)(param_1 + 0x40) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x40) + -8);
      uVar3 = 0;
      if (plVar2 == (long *)0x0) goto LAB_00e7b0a0;
      do {
        *(undefined1 *)(*plVar2 + 100) = 3;
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      } while (plVar2 != (long *)0x0);
    }
  }
  else {
    *(undefined1 *)(param_1 + 100) = 4;
    if (*(long *)(param_1 + 8) != 0) {
      uVar3 = FUN_00e7b11c(param_1);
      goto LAB_00e7b0a0;
    }
  }
  uVar3 = 0;
LAB_00e7b0a0:
  if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    sem_post((sem_t *)**(undefined8 **)(param_1 + 0x30));
  }
  FUN_00e7b1a8(param_1,uVar3);
  FUN_00e7b250(param_1);
  *(undefined1 *)(param_1 + 100) = 5;
  FUN_00e7b2dc(param_1);
  return;
}




void FUN_00e7b40c(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  
  plVar4 = (long *)FUN_00e7ab74();
  piVar1 = (int *)(param_2 + 0x60);
  *plVar4 = param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4 = plVar4 + 1;
  *plVar4 = 0;
  if (*(long *)(param_1 + 0x40) == 0) {
    *(long **)(param_1 + 0x40) = plVar4;
  }
  else {
    **(undefined8 **)(param_1 + 0x48) = plVar4;
  }
  *(long **)(param_1 + 0x48) = plVar4;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return;
}




void FUN_00e7b474(long param_1,long param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x40) + -8);
    while (plVar2 != (long *)0x0) {
      if ((*plVar2 != param_2) &&
         (((param_3 == -0x7ee3623b || (param_3 == 0)) || (*(int *)(*plVar2 + 0x38) == param_3)))) {
        FUN_00e7b40c(param_2);
      }
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}




void FUN_00e7b510(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 1) == 0) {
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      sem_post((sem_t *)**(undefined8 **)(param_1 + 0x30));
      FUN_00e7a9b0(*(undefined8 *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
  }
  else {
    uVar1 = FUN_00e7a8f4();
    *(undefined8 *)(param_1 + 0x30) = uVar1;
  }
  return;
}




void FUN_00e7b558(float param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  timespec local_68;
  timeval local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar4 = *(undefined8 **)(param_2 + 0x30);
  gettimeofday(&local_58,(__timezone_ptr_t)0x0);
  local_68.tv_sec = local_58.tv_sec + (ulong)(uint)(int)param_1;
  local_58.tv_usec =
       local_58.tv_usec + (ulong)(uint)(int)((param_1 - (float)(uint)(int)param_1) * 1e+06);
  if (999999 < local_58.tv_usec) {
    uVar3 = 0xffffffffffe17b80;
    if (-2000000 < ~local_58.tv_usec) {
      uVar3 = ~local_58.tv_usec;
    }
    uVar3 = (local_58.tv_usec + 1000000U + uVar3) / 1000000;
    local_58.tv_usec = (local_58.tv_usec + uVar3 * -1000000) - 1000000;
    local_68.tv_sec = local_68.tv_sec + uVar3 + 1;
  }
  local_68.tv_nsec = local_58.tv_usec * 1000;
  local_58.tv_sec = local_68.tv_sec;
  iVar2 = sem_timedwait((sem_t *)*puVar4,&local_68);
  if (iVar2 == 0) {
    FUN_00e7b2dc(param_2);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2 == 0);
  }
  return;
}




void FUN_00e7b674(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  
  plVar1 = (long *)(param_1 + 0x18);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = param_2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  FUN_00e7a3ec(param_2);
  return;
}




void FUN_00e7b698(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 8);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00e7b6f4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00e7aa70();
  *param_1 = uVar1;
  return;
}




void FUN_00e7b718(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  return;
}




void FUN_00e7b728(long *param_1,undefined8 param_2)

{
  *(undefined8 *)(*param_1 + 0x10) = param_2;
  return;
}




void FUN_00e7b734(long *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x38) = param_2;
  return;
}




undefined8 * FUN_00e7b740(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00e7b384(param_2);
  uVar2 = FUN_00e7b380(*param_1);
  FUN_00e7b40c(uVar1,uVar2);
  return param_1;
}




undefined8 * FUN_00e7b784(undefined8 *param_1)

{
  FUN_00e7b40c(*param_1);
  return param_1;
}




undefined8 * FUN_00e7b7ac(undefined8 *param_1,uint param_2)

{
  FUN_00e7b510(*param_1,param_2 & 1);
  return param_1;
}




void FUN_00e7b7d8(long *param_1,undefined8 param_2)

{
  *(undefined8 *)(*param_1 + 0x58) = param_2;
  return;
}




void FUN_00e7b7e4(long *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x58) = param_2;
  return;
}




undefined8 * FUN_00e7b7f0(undefined8 *param_1)

{
  FUN_00e7b674(*param_1);
  return param_1;
}




undefined8 * FUN_00e7b818(undefined8 *param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0xc) = param_3;
  FUN_00e7b388(*param_1);
  return param_1;
}




void FUN_00e7b844(undefined8 *param_1)

{
  FUN_00e7b018(*param_1,1);
  FUN_00e7b380(*param_1);
  *param_1 = 0;
  return;
}




void FUN_00e7b878(void)

{
  return;
}




void FUN_00e7b87c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0x1000;
  FUN_00e77c74(param_1 + 2);
  return;
}




void FUN_00e7b898(long param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0x5000;
  return;
}




void FUN_00e7b8a4(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined4 *)(param_1 + 8) = param_4;
  *(undefined4 *)(param_1 + 0x28) = 0x2000;
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  FUN_00e77c7c(param_1 + 0x10,FUN_00e7b8d4,param_1,param_5);
  return;
}




undefined8 FUN_00e7b8d4(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x32105b0,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      DAT_032105b0 = DAT_032105b0 + 1;
    }
  } while (cVar1 != '\0');
  FUN_00968914(auStack_48,"%s Worker %d",param_1[3] + 0x90);
  FUN_00e77d5c(auStack_48);
  if ((code *)*param_1 != (code *)0x0) {
    (*(code *)*param_1)();
  }
  *(undefined4 *)(param_1 + 5) = 0x3000;
  FUN_00e7b9ec(param_1);
  *(undefined4 *)(param_1 + 5) = 0x4000;
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e7b978(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0x1000) {
    return;
  }
  while (iVar1 != 0x4000) {
    FUN_00e79d50(*(undefined8 *)(param_1 + 0x18));
    FUN_00e6b418(5);
    iVar1 = *(int *)(param_1 + 0x28);
  }
  FUN_00e77ccc(param_1 + 0x10);
  return;
}




undefined4 FUN_00e7b9cc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




bool FUN_00e7b9d4(long param_1)

{
  return *(int *)(param_1 + 0x28) == 0x4000;
}




void FUN_00e7b9e4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00e7b9ec(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *local_40;
  undefined8 local_38;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00e77d14(auStack_30);
  local_38 = 0;
  while( true ) {
    FUN_00e79f8c(*(undefined8 *)(param_1 + 0x18));
    uVar2 = FUN_00e79f94(*(undefined8 *)(param_1 + 0x18));
    if ((uVar2 & 1) == 0) break;
    local_40 = (undefined8 *)FUN_00e79ea0(*(undefined8 *)(param_1 + 0x18),&local_38);
    if (local_40 == (undefined8 *)0x0) {
      FUN_00e79f24(*(undefined8 *)(param_1 + 0x18),&local_40);
      uVar2 = FUN_00e79f94(*(undefined8 *)(param_1 + 0x18));
      if ((uVar2 & 1) == 0) break;
    }
    while (FUN_00e79f84(*(undefined8 *)(param_1 + 0x18)), local_40 != (undefined8 *)0x0) {
      if ((code *)*local_40 != (code *)0x0) {
        (*(code *)*local_40)(local_40[1]);
      }
      FUN_00e79370(local_38,local_40);
      FUN_00e79f8c(*(undefined8 *)(param_1 + 0x18));
      local_40 = (undefined8 *)FUN_00e79ea0(*(undefined8 *)(param_1 + 0x18),&local_38);
    }
  }
  FUN_00e79f84(*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e7bad0(long param_1)

{
  FUN_00e79f8c(*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_00e7bad8(long param_1)

{
  FUN_00e79f24(*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_00e7bae0(long param_1)

{
  FUN_00e79f84(*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_00e7bae8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00e793cc();
  if ((int)uVar3 != 0) {
    local_3c = 0;
    if ((param_2 & 1) == 0) {
      FUN_00e78ecc(param_1,FUN_00e7bbbc,&local_3c);
    }
    else {
      FUN_00e78f64();
    }
    while (local_3c == 0) {
      puVar4 = (undefined8 *)FUN_00e792c0(param_1);
      if (puVar4 == (undefined8 *)0x0) {
        FUN_00e6b418(1);
      }
      else {
        if ((code *)*puVar4 != (code *)0x0) {
          (*(code *)*puVar4)(puVar4[1]);
        }
        FUN_00e79370(param_1,puVar4);
      }
    }
    iVar2 = FUN_00e793b4(param_1);
    uVar3 = (ulong)(iVar2 != 0);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}




void FUN_00e7bbbc(undefined4 *param_1)

{
  *param_1 = 1;
  return;
}




void FUN_00e7bbc8(void)

{
  long *plVar1;
  
  if (DAT_032105b8 == (long *)0x0) {
    plVar1 = operator_new(0x28);
    FUN_00e7be28();
    DAT_032105b8 = plVar1;
  }
  (**(code **)(*DAT_032105b8 + 0x10))(DAT_032105b8);
  if (DAT_032105b8 == (long *)0x0) {
    plVar1 = operator_new(0x28);
    FUN_00e7be28();
    DAT_032105b8 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00e7bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_032105b8 + 0x30))(DAT_032105b8);
  return;
}




void FUN_00e7bc38(void)

{
  long *plVar1;
  
  if (DAT_032105b8 == (long *)0x0) {
    plVar1 = operator_new(0x28);
    FUN_00e7be28();
    DAT_032105b8 = plVar1;
  }
  (**(code **)(*DAT_032105b8 + 0x38))(DAT_032105b8);
  if (DAT_032105b8 == (long *)0x0) {
    plVar1 = operator_new(0x28);
    FUN_00e7be28();
    DAT_032105b8 = plVar1;
  }
  (**(code **)(*DAT_032105b8 + 0x18))(DAT_032105b8);
  if (DAT_032105b8 != (long *)0x0) {
    (**(code **)(*DAT_032105b8 + 8))();
  }
  DAT_032105b8 = (long *)0x0;
  return;
}




void FUN_00e7bcc4(void)

{
  long *plVar1;
  
  if (DAT_032105b8 == (long *)0x0) {
    plVar1 = operator_new(0x28);
    FUN_00e7be28();
    DAT_032105b8 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00e7bd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_032105b8 + 0x20))(DAT_032105b8);
  return;
}




void FUN_00e7bd08(void)

{
  long *plVar1;
  
  if (DAT_032105b8 == (long *)0x0) {
    plVar1 = operator_new(0x28);
    FUN_00e7be28();
    DAT_032105b8 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00e7bd48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_032105b8 + 0x28))(DAT_032105b8);
  return;
}




void FUN_00e7bd4c(undefined8 param_1)

{
  void *pvVar1;
  
  if (DAT_032105b8 == (void *)0x0) {
    pvVar1 = operator_new(0x28);
    FUN_00e7be28();
    DAT_032105b8 = pvVar1;
  }
  FUN_00e7bf00(DAT_032105b8,param_1);
  FUN_00e7be08(param_1);
  return;
}




void FUN_00e7bda0(undefined4 param_1)

{
  void *pvVar1;
  
  if (DAT_032105b8 == (void *)0x0) {
    pvVar1 = operator_new(0x28);
    FUN_00e7be28();
    DAT_032105b8 = pvVar1;
  }
  FUN_00e7bff0(DAT_032105b8,param_1);
  return;
}




void FUN_00e7bdec(undefined8 *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  *param_1 = &PTR_FUN_028207d0;
  param_1[2] = 0;
  return;
}




undefined4 FUN_00e7be08(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}




void FUN_00e7be10(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




undefined8 FUN_00e7be18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00e7be20(void)

{
  return;
}




void FUN_00e7be24(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xe7be28);
  (*pcVar1)();
}




void FUN_00e7be28(undefined8 *param_1)

{
  FUN_00e7bdec(param_1,6);
  *param_1 = &PTR_FUN_02820820;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}




void FUN_00e7be60(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_02820820;
  puVar3 = (uint *)(param_1 + 3);
  uVar2 = *puVar3;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(param_1[4] + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_1[4] = 0;
  }
  return;
}




void FUN_00e7bedc(void *param_1)

{
  FUN_00e7be60();
  operator_delete(param_1);
  return;
}




void FUN_00e7bf00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  FUN_00e7be10(param_2,param_1);
  FUN_00e7bf68(param_1 + 0x18,&local_30);
  FUN_00e7be08(local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e7bf68(uint *param_1,undefined8 *param_2)

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
    FUN_00e7c264(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




long FUN_00e7bff0(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_00e7be08();
  if (iVar1 != param_2) {
    if (*(int *)(param_1 + 0x18) != 0) {
      uVar2 = 0;
      do {
        iVar1 = FUN_00e7be08(*(undefined8 *)(*(long *)(param_1 + 0x20) + uVar2 * 8));
        if (iVar1 == param_2) {
          return *(long *)(*(long *)(param_1 + 0x20) + uVar2 * 8);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x18));
    }
    param_1 = 0;
  }
  return param_1;
}

