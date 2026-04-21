// functions/00ec6 — 43 functions
#include "libGameKindred.h"




undefined * thunk_FUN_00ec653c(void)

{
  return PTR_s_Nuo_Services_ChatClient_Usern_02bf2550;
}




undefined * thunk_FUN_00ec6548(void)

{
  return PTR_s_Nuo_Services_ChatClient_Nickn_02bf2558;
}




undefined * thunk_FUN_00ec6554(void)

{
  return PTR_s_Nuo_Services_ChatClient_Messa_02bf2560;
}




int FUN_00ec6058(undefined8 *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_02821cd8;
  uVar2 = FUN_00ec5f80();
  __mutex = DAT_03210810;
  pthread_mutex_lock(DAT_03210810);
  FUN_00ec60b4(uVar2,param_1);
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_00ec60b4(long *param_1,long param_2)

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




void FUN_00ec6114(void *param_1)

{
  FUN_00ec6058();
  operator_delete(param_1);
  return;
}




void FUN_00ec6138(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 9;
  *param_1 = &PTR_FUN_02821d28;
  param_1[1] = 6;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}




void FUN_00ec6164(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02821d28;
  if ((void *)param_1[4] != (void *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}




void FUN_00ec61a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02821d28;
  if ((void *)param_1[4] != (void *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    operator_delete__((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}




int FUN_00ec61e8(undefined4 param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00ec5f80();
  __mutex = DAT_03210810;
  pthread_mutex_lock(DAT_03210810);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
  }
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




int FUN_00ec624c(undefined4 param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00ec5f80();
  __mutex = DAT_03210810;
  pthread_mutex_lock(DAT_03210810);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
  }
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




int FUN_00ec62b0(void)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00ec5f80();
  __mutex = DAT_03210810;
  pthread_mutex_lock(DAT_03210810);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




int FUN_00ec6304(void)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00ec5f80();
  __mutex = DAT_03210810;
  pthread_mutex_lock(DAT_03210810);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




int FUN_00ec6358(undefined4 param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00ec5f80();
  __mutex = DAT_03210810;
  pthread_mutex_lock(DAT_03210810);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  }
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




int FUN_00ec63bc(undefined8 param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00ec5f80();
  __mutex = DAT_03210810;
  pthread_mutex_lock(DAT_03210810);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
  }
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_00ec6420(void)

{
  return;
}




void FUN_00ec6424(void)

{
  return;
}




void FUN_00ec6428(void)

{
  return;
}




void FUN_00ec642c(void)

{
  return;
}




void FUN_00ec6430(void)

{
  return;
}




void FUN_00ec6434(void)

{
  return;
}




void FUN_00ec6444(void)

{
  return;
}




void FUN_00ec645c(uint param_1)

{
  FUN_00ec9a98(param_1 & 1);
  return;
}




void FUN_00ec6468(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50,"1");
  FUN_008fa54c(local_68,"1");
  FUN_008fa54c(local_80,"unused");
  FUN_00ec9548(param_1,param_2,local_50,local_68,local_80);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined * FUN_00ec653c(void)

{
  return PTR_s_Nuo_Services_ChatClient_Usern_02bf2550;
}




undefined * FUN_00ec6548(void)

{
  return PTR_s_Nuo_Services_ChatClient_Nickn_02bf2558;
}




undefined * FUN_00ec6554(void)

{
  return PTR_s_Nuo_Services_ChatClient_Messa_02bf2560;
}




void FUN_00ec6560(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *param_1 = &PTR_FUN_02821d48;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}




void FUN_00ec6590(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02821d48;
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  FUN_00ec6608(param_1 + 3);
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete__((void *)param_1[10]);
    param_1[9] = 0;
    param_1[10] = 0;
  }
  FUN_00ec66b4(param_1 + 3);
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




void FUN_00ec6608(uint *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = *param_1;
  if (uVar3 != 0) {
    uVar4 = 0;
    lVar5 = 4;
    do {
      uVar2 = *(uint *)(*(long *)(param_1 + 2) + lVar5);
      if (uVar2 != 0xffffffff) {
        lVar6 = *(long *)(param_1 + 8);
        puVar1 = (undefined8 *)(lVar6 + (ulong)uVar2 * 0x10);
        if ((void *)puVar1[1] != (void *)0x0) {
          operator_delete__((void *)puVar1[1]);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        *(uint *)(lVar6 + (ulong)uVar2 * 0x10) = param_1[10];
        uVar3 = *param_1;
        param_1[10] = uVar2;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar4 < uVar3);
  }
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  param_1[4] = 0;
  if (*(long *)(param_1 + 8) != 0) {
    param_1[6] = 0;
  }
  param_1[10] = 0xffffffff;
  return;
}




void FUN_00ec66b4(uint *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = *param_1;
  if (uVar3 != 0) {
    uVar4 = 0;
    lVar5 = 4;
    do {
      uVar2 = *(uint *)(*(long *)(param_1 + 2) + lVar5);
      if (uVar2 != 0xffffffff) {
        lVar6 = *(long *)(param_1 + 8);
        puVar1 = (undefined8 *)(lVar6 + (ulong)uVar2 * 0x10);
        if ((void *)puVar1[1] != (void *)0x0) {
          operator_delete__((void *)puVar1[1]);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        *(uint *)(lVar6 + (ulong)uVar2 * 0x10) = param_1[10];
        uVar3 = *param_1;
        param_1[10] = uVar2;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar4 < uVar3);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_00ec6770(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xec6774);
  (*pcVar1)();
}




void FUN_00ec6774(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  FUN_00ec67c4(param_1 + 8,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ec67c4(uint *param_1,undefined8 *param_2)

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
    FUN_00ec7d40(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00ec684c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = (ulong)*(uint *)(param_1 + 8) << 3;
  plVar1 = *(long **)(param_1 + 0x10);
  do {
    plVar2 = plVar1;
    if (lVar3 == 0) {
      return;
    }
    lVar3 = lVar3 + -8;
    plVar1 = plVar2 + 1;
  } while (*plVar2 != param_2);
  FUN_00ec7dc0((uint *)(param_1 + 8),plVar2);
  return;
}




void FUN_00ec6878(long param_1,void *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  void *local_68;
  void *local_60;
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50,param_3);
  param_1 = param_1 + 0x18;
  pvVar3 = (void *)((ulong)local_50 | 1);
  local_60 = pvVar3;
  if ((local_50[0] & 1) != 0) {
    local_60 = local_40;
  }
  lVar2 = FUN_00ec6978(param_1,&local_60);
  if (lVar2 == 0) {
    local_68 = pvVar3;
    if ((local_50[0] & 1) != 0) {
      local_68 = local_40;
    }
    local_60 = (void *)0x0;
    local_58 = (void *)0x0;
    FUN_00ec6aa8(param_1,&local_68,&local_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
      local_58 = (void *)0x0;
    }
    local_60 = pvVar3;
    if ((local_50[0] & 1) != 0) {
      local_60 = local_40;
    }
    lVar2 = FUN_00ec6c80(param_1,&local_60);
  }
  local_60 = param_2;
  FUN_00ec6a20(lVar2,&local_60);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00ec6978(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar4 = FUN_00e6a474(uVar7);
  uVar5 = FUN_0091ed5c(uVar7,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if ((uVar3 != 0xffffffff) &&
       (uVar2 = *(uint *)(lVar6 + (ulong)uVar3 * 8 + 4), uVar2 != 0xffffffff)) {
      return *(long *)(param_1 + 8) + (ulong)uVar2 * 0x10;
    }
  }
  return 0;
}




void FUN_00ec6a20(uint *param_1,undefined8 *param_2)

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
    FUN_00ec7e2c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00ec6aa8(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar14 = *param_2;
  uVar4 = FUN_00e6a474(uVar14);
  uVar5 = FUN_0091ed5c(uVar14,uVar4,0x12345678);
  uVar10 = param_1[4];
  uVar9 = *param_1;
  param_1[4] = uVar10 + 1;
  if (uVar9 >> 1 < uVar10 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar9 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar10 = *param_1;
    uVar11 = uVar10 - 1;
    uVar9 = (uint)local_58;
    if ((int)uVar11 < 0) {
      pvVar7 = *(void **)(param_1 + 2);
    }
    else {
      pvVar7 = *(void **)(param_1 + 2);
      do {
        iVar6 = *(int *)((long)pvVar7 + (ulong)uVar11 * 8 + 4);
        if (iVar6 != -1) {
          uVar10 = *(uint *)((long)pvVar7 + (ulong)uVar11 * 8);
          uVar2 = 0;
          if ((uint)local_58 != 0) {
            uVar2 = uVar10 / (uint)local_58;
          }
          uVar12 = (ulong)(uVar10 - uVar2 * (uint)local_58);
          piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
          iVar1 = *piVar13;
          while (iVar1 != -1) {
            uVar2 = (uint)local_58;
            if (0 < (int)(uint)uVar12) {
              uVar2 = (uint)uVar12;
            }
            uVar12 = (ulong)(uVar2 - 1);
            piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
            iVar1 = *piVar13;
          }
          *(uint *)((long)local_50 + uVar12 * 8) = uVar10;
          *piVar13 = iVar6;
        }
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
      uVar10 = *param_1;
    }
    uVar11 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar11,uVar10);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar9 = *param_1;
    }
  }
  lVar8 = *(long *)(param_1 + 2);
  uVar10 = 0;
  if (uVar9 != 0) {
    uVar10 = uVar5 / uVar9;
  }
  uVar12 = (ulong)(uVar5 - uVar10 * uVar9);
  piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
  iVar6 = *piVar13;
  while (iVar6 != -1) {
    uVar10 = uVar9;
    if (0 < (int)(uint)uVar12) {
      uVar10 = (uint)uVar12;
    }
    uVar12 = (ulong)(uVar10 - 1);
    piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
    iVar6 = *piVar13;
  }
  *(uint *)(lVar8 + uVar12 * 8) = uVar5;
  iVar6 = FUN_00ec7eac(param_1,param_3);
  *piVar13 = iVar6;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00ec6c80(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  uVar4 = FUN_00e6a474(uVar8);
  uVar5 = FUN_0091ed5c(uVar8,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if (uVar3 != 0xffffffff) {
      uVar7 = (ulong)*(uint *)(lVar6 + (ulong)uVar3 * 8 + 4);
      goto LAB_00ec6d0c;
    }
  }
  uVar7 = 0xffffffff;
LAB_00ec6d0c:
  return *(long *)(param_1 + 8) + uVar7 * 0x10;
}




void FUN_00ec6d20(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_3 == 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = 0;
    do {
      uVar8 = uVar2;
      uVar5 = (ulong)uVar8;
      if (uVar1 <= uVar8) break;
      uVar2 = uVar8 + 1;
    } while (*(int *)(*(long *)(param_1 + 0x20) + uVar5 * 8 + 4) == -1);
joined_r0x00ec6e18:
    if (uVar1 != uVar8) {
      puVar4 = (uint *)(*(long *)(param_1 + 0x38) +
                       (ulong)*(uint *)(*(long *)(param_1 + 0x20) + uVar5 * 8 + 4) * 0x10);
      uVar9 = (ulong)*puVar4;
      plVar10 = *(long **)(puVar4 + 2);
      if (*puVar4 != 0) {
        plVar7 = plVar10 + uVar9;
        do {
          plVar6 = plVar7 + -1;
          if (*plVar6 == param_2) {
            if (plVar7 != plVar10 + (uVar9 - 1)) {
              *plVar7 = plVar10[uVar9 - 1];
              plVar10 = *(long **)(puVar4 + 2);
            }
            uVar2 = (int)uVar9 - 1;
            uVar9 = (ulong)uVar2;
            *puVar4 = uVar2;
          }
          plVar7 = plVar6;
        } while (plVar6 != plVar10);
      }
      uVar8 = (uint)uVar5;
      do {
        uVar8 = uVar8 + 1;
        uVar5 = (ulong)uVar8;
        if (uVar1 <= uVar8) break;
      } while (*(int *)(*(long *)(param_1 + 0x20) + uVar5 * 8 + 4) == -1);
      goto joined_r0x00ec6e18;
    }
  }
  else {
    FUN_008fa54c(local_50,param_3);
    local_58 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      local_58 = local_40;
    }
    puVar4 = (uint *)FUN_00ec6978(param_1 + 0x18,&local_58);
    if ((puVar4 != (uint *)0x0) && (uVar5 = (ulong)*puVar4, *puVar4 != 0)) {
      plVar7 = *(long **)(puVar4 + 2);
      plVar10 = plVar7 + uVar5;
      do {
        plVar6 = plVar10 + -1;
        if (*plVar6 == param_2) {
          if (plVar10 != plVar7 + (uVar5 - 1)) {
            *plVar10 = plVar7[uVar5 - 1];
            plVar7 = *(long **)(puVar4 + 2);
          }
          uVar1 = (int)uVar5 - 1;
          uVar5 = (ulong)uVar1;
          *puVar4 = uVar1;
        }
        plVar10 = plVar6;
      } while (plVar6 != plVar7);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00ec6eec(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte local_58 [16];
  void *local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_008fa54c(local_58);
    local_40 = (void *)((ulong)local_58 | 1);
    if ((local_58[0] & 1) != 0) {
      local_40 = local_48;
    }
    uVar2 = FUN_00ec6f8c(param_1 + 0x18,&local_40);
    if ((local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00ec6f8c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar4 = FUN_00e6a474(uVar7);
  uVar5 = FUN_0091ed5c(uVar7,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if ((uVar3 != 0xffffffff) &&
       (uVar2 = *(uint *)(lVar6 + (ulong)uVar3 * 8 + 4), uVar2 != 0xffffffff)) {
      return *(long *)(param_1 + 8) + (ulong)uVar2 * 0x10;
    }
  }
  return 0;
}

