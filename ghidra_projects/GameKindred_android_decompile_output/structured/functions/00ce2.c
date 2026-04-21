// functions/00ce2 — 46 functions
#include "libGameKindred.h"




void thunk_FUN_00ce2110(void)

{
  FUN_00ce2218(&DAT_0313ecd8);
  return;
}




void thunk_FUN_00ce207c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_50 [40];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x3f6) != '\0') {
    FUN_00910394(param_1 + 0x3c0,param_3);
  }
  FUN_00f04c40(auStack_50,DAT_03210fb0,param_1);
  FUN_00f04760(param_1,auStack_50,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ce207c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x3f6) != '\0') {
    FUN_00910394(param_1 + 0x3c0,param_3);
  }
  FUN_00f04c40(auStack_50,DAT_03210fb0,param_1);
  FUN_00f04760(param_1,auStack_50,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ce20fc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ce210c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,&DAT_0313ecd8);
  return;
}




void FUN_00ce2110(void)

{
  FUN_00ce2218(&DAT_0313ecd8);
  return;
}




void FUN_00ce211c(void)

{
  FUN_00ce2194(&DAT_0313ecd8);
  return;
}




void FUN_00ce2128(long param_1)

{
  FUN_00e77acc(param_1,1);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}




int FUN_00ce215c(pthread_mutex_t *param_1)

{
  int iVar1;
  
  FUN_00ce2194();
  FUN_00ce22e0((long)param_1 + 0x40,0);
  param_1[1].__align = 0;
  *(undefined8 *)((long)param_1 + 0x30) = 0;
  *(undefined4 *)((long)param_1 + 0x38) = 0;
  iVar1 = pthread_mutex_destroy(param_1);
  return iVar1;
}




int FUN_00ce2194(pthread_mutex_t *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  pthread_mutex_lock(param_1);
  puVar3 = (undefined8 *)param_1[1].__align;
  param_1[2].__align = 0;
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    puVar3 = (undefined8 *)puVar3[1];
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((long)param_1 + 0x38) = 0;
  param_1[1].__align = 0;
  *(undefined8 *)((long)param_1 + 0x30) = 0;
  plVar4 = (long *)((long)param_1 + 0x48);
  lVar6 = *plVar4;
  if (*plVar4 != 0) {
    do {
      lVar5 = lVar6;
      lVar6 = *(long *)(lVar5 + 0x2808);
    } while (lVar6 != 0);
    plVar4 = (long *)(lVar5 + 0x2808);
  }
  *plVar4 = *(long *)((long)param_1 + 0x40);
  *(undefined8 *)((long)param_1 + 0x40) = 0;
  iVar2 = pthread_mutex_unlock(param_1);
  return iVar2;
}




int FUN_00ce2218(pthread_mutex_t *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  pthread_mutex_lock(param_1);
  plVar7 = *(long **)(param_1 + 1);
  if (plVar7 != (long *)0x0) {
    do {
      param_1[2].__align = (long)plVar7;
      lVar5 = *plVar7;
      if ((char)plVar7[3] == '\0') {
        (**(code **)(lVar5 + 0x10))(plVar7);
        uVar3 = FUN_00ceab48();
        if ((uVar3 & 1) != 0) {
          lVar5 = *plVar7;
          goto LAB_00ce2264;
        }
      }
      else {
LAB_00ce2264:
        (**(code **)(lVar5 + 0x18))(plVar7);
      }
      plVar7 = (long *)plVar7[1];
    } while (plVar7 != (long *)0x0);
    puVar4 = (undefined8 *)param_1[1].__align;
    param_1[2].__align = 0;
    while (puVar4 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar4;
      puVar4 = (undefined8 *)puVar4[1];
      (*(code *)*puVar1)();
    }
    *(undefined4 *)((long)param_1 + 0x38) = 0;
    param_1[1].__align = 0;
    *(undefined8 *)((long)param_1 + 0x30) = 0;
    plVar7 = (long *)((long)param_1 + 0x48);
    lVar5 = *plVar7;
    if (*plVar7 != 0) {
      do {
        lVar6 = lVar5;
        lVar5 = *(long *)(lVar6 + 0x2808);
      } while (lVar5 != 0);
      plVar7 = (long *)(lVar6 + 0x2808);
    }
    *plVar7 = *(long *)((long)param_1 + 0x40);
    *(undefined8 *)((long)param_1 + 0x40) = 0;
  }
  iVar2 = pthread_mutex_unlock(param_1);
  return iVar2;
}




void FUN_00ce22e0(long *param_1,uint param_2)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  if ((param_2 & 1) == 0) {
    pvVar1 = (void *)*param_1;
    while (pvVar1 != (void *)0x0) {
      pvVar5 = *(void **)((long)pvVar1 + 0x2808);
      operator_delete(pvVar1);
      pvVar1 = pvVar5;
    }
    pvVar1 = (void *)param_1[1];
    while (pvVar1 != (void *)0x0) {
      pvVar5 = *(void **)((long)pvVar1 + 0x2808);
      operator_delete(pvVar1);
      pvVar1 = pvVar5;
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    lVar4 = *plVar2;
    if (*plVar2 != 0) {
      do {
        lVar3 = lVar4;
        lVar4 = *(long *)(lVar3 + 0x2808);
      } while (lVar4 != 0);
      plVar2 = (long *)(lVar3 + 0x2808);
    }
    *plVar2 = *param_1;
    *param_1 = 0;
  }
  return;
}




int FUN_00ce2364(pthread_mutex_t *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  pthread_mutex_t *ppVar4;
  
  pthread_mutex_lock(param_1);
  lVar3 = param_1[2].__align;
  if (lVar3 == 0) {
    *(undefined8 *)(param_2 + 8) = 0;
    plVar2 = (long *)((long)param_1 + 0x30);
    lVar3 = *plVar2;
    *(long *)(param_2 + 0x10) = lVar3;
    ppVar4 = param_1 + 1;
    if (param_1[1].__align != 0) {
      ppVar4 = (pthread_mutex_t *)(lVar3 + 8);
    }
  }
  else {
    plVar2 = (long *)(lVar3 + 8);
    *(long *)(param_2 + 8) = *plVar2;
    *(long *)(param_2 + 0x10) = lVar3;
    ppVar4 = (pthread_mutex_t *)((long)param_1 + 0x30);
    if (*plVar2 != 0) {
      ppVar4 = (pthread_mutex_t *)(*plVar2 + 0x10);
    }
  }
  ppVar4->__align = param_2;
  *plVar2 = param_2;
  param_1[2].__align = param_2;
  *(int *)((long)param_1 + 0x38) = *(int *)((long)param_1 + 0x38) + 1;
  iVar1 = pthread_mutex_unlock(param_1);
  return iVar1;
}




ulong FUN_00ce23f4(pthread_mutex_t *param_1,int param_2,uint param_3)

{
  long lVar1;
  
  pthread_mutex_lock(param_1);
  lVar1 = FUN_00ce2454((long)param_1 + 0x40,param_2 + param_3 + -1);
  pthread_mutex_unlock(param_1);
  return (lVar1 + (ulong)param_3) - 1 & -(ulong)param_3;
}




long FUN_00ce2454(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  int *piVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *pvVar5;
  
  pvVar5 = (void *)*param_1;
  if ((pvVar5 == (void *)0x0) ||
     (uVar1 = (ulong)*(uint *)((long)pvVar5 + 0x2800), *(uint *)((long)pvVar5 + 0x2800) < param_2))
  {
    pvVar3 = (void *)param_1[1];
    if (pvVar3 == (void *)0x0) {
      pvVar3 = operator_new(0x2810);
      uVar1 = 0x2800;
      *(void **)((long)pvVar3 + 0x2808) = pvVar5;
      piVar2 = (int *)((long)pvVar3 + 0x2800);
      *(undefined4 *)((long)pvVar3 + 0x2800) = 0x2800;
      *param_1 = pvVar3;
      pvVar5 = pvVar3;
    }
    else {
      uVar4 = *(undefined8 *)((long)pvVar3 + 0x2808);
      uVar1 = 0x2800;
      *(void **)((long)pvVar3 + 0x2808) = pvVar5;
      piVar2 = (int *)((long)pvVar3 + 0x2800);
      *param_1 = pvVar3;
      param_1[1] = uVar4;
      *(undefined4 *)((long)pvVar3 + 0x2800) = 0x2800;
      pvVar5 = pvVar3;
    }
  }
  else {
    piVar2 = (int *)((long)pvVar5 + 0x2800);
  }
  *piVar2 = (int)uVar1 - param_2;
  return (long)pvVar5 + (0x2800 - uVar1);
}




void FUN_00ce24f8(undefined8 param_1,undefined4 param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1408);
  FUN_00e7eb04();
  DAT_0314b238 = pvVar1;
  FUN_00ce2540(param_1,param_2);
  return;
}




void FUN_00ce2540(long param_1,int param_2)

{
  long lVar1;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00e6dd88(auStack_90);
  uStack_b8 = 0x5e4131706daadd30;
  local_c0 = 0x336d39318bbe3640;
  uStack_a8 = 0x263a7c87e8e39932;
  uStack_b0 = 0xc53488be603f90fe;
  uStack_d8 = 0x8ba81c4bd7c878a7;
  local_e0 = 0x1e5f2f1a34467c46;
  uStack_c8 = 0xeb2c3293b4e778f3;
  uStack_d0 = 0xe3e08596ab339d45;
  thunk_FUN_00e6ddac(auStack_90,&local_e0,0x40);
  if ((param_1 != 0) && (param_2 != 0)) {
    thunk_FUN_00e6ddac(auStack_90,param_1,param_2);
  }
  thunk_FUN_00e6e91c(auStack_90,auStack_a0);
  FUN_00e7eb40(DAT_0314b238,auStack_a0,0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ce25f8(void)

{
  if (DAT_0314b238 != (long *)0x0) {
    (**(code **)(*DAT_0314b238 + 8))();
  }
  DAT_0314b238 = (long *)0x0;
  return;
}




void FUN_00ce262c(byte *param_1)

{
  uint uVar1;
  size_t __n;
  size_t sVar2;
  void *__s1;
  byte bVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  
  bVar3 = *param_1;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  if ((int)__n != 0) {
    sVar2 = (ulong)((byte)DAT_0314b220 >> 1);
    if (((byte)DAT_0314b220 & 1) != 0) {
      sVar2 = DAT_0314b228;
    }
    if (sVar2 != __n) {
LAB_00ce26cc:
      FUN_008fce60(&DAT_0314b220,param_1);
      bVar4 = (*param_1 & 1) != 0;
      pbVar8 = param_1 + 1;
      if (bVar4) {
        pbVar8 = *(byte **)(param_1 + 0x10);
      }
      uVar1 = (uint)(*param_1 >> 1);
      if (bVar4) {
        uVar1 = *(uint *)(param_1 + 8);
      }
      FUN_00ce2540(pbVar8,uVar1);
      return;
    }
    pbVar8 = *(byte **)(param_1 + 0x10);
    __s1 = DAT_0314b230;
    if (((byte)DAT_0314b220 & 1) == 0) {
      __s1 = (void *)((long)&DAT_0314b220 + 1);
    }
    if ((bVar3 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    if (((byte)DAT_0314b220 & 1) == 0) {
      if (__n != 0) {
        lVar7 = -(ulong)((byte)DAT_0314b220 >> 1);
        pbVar6 = (byte *)((long)&DAT_0314b220 + 1);
        do {
          if (*pbVar6 != *pbVar8) goto LAB_00ce26cc;
          pbVar6 = pbVar6 + 1;
          lVar7 = lVar7 + 1;
          pbVar8 = pbVar8 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(__s1,pbVar8,__n), iVar5 != 0)) goto LAB_00ce26cc;
  }
  return;
}




bool FUN_00ce271c(void)

{
  return DAT_0314b238 != 0;
}




void FUN_00ce2730(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ce2748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_0314b238 + 0x10))(DAT_0314b238,param_1);
  return;
}




void FUN_00ce274c(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ce2764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_0314b238 + 0x18))(DAT_0314b238,param_1);
  return;
}




void FUN_00ce2768(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00ce278c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_0314b238 + 0x20))(DAT_0314b238,param_1,param_2,param_3,param_4);
  return;
}




void FUN_00ce2790(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00ce27b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_0314b238 + 0x28))(DAT_0314b238,param_1,param_2,param_3,param_4);
  return;
}




undefined8 FUN_00ce27b8(void)

{
  return 0x7d0000;
}




void FUN_00ce27c0(undefined8 param_1)

{
  FUN_008fce60(&DAT_0314b258,param_1);
  return;
}




undefined * FUN_00ce27d4(void)

{
  return &DAT_0314b258;
}




void FUN_00ce27e0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00ceace8();
  FUN_008fa54c(param_1,*(undefined8 *)(lVar1 + 8));
  return;
}




void FUN_00ce2808(undefined8 param_1)

{
  FUN_008fce60(&DAT_0314b270,param_1);
  return;
}




undefined * FUN_00ce281c(void)

{
  return &DAT_0314b270;
}




undefined1  [16] FUN_00ce2828(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = DAT_02beaea8;
  return auVar1;
}




void FUN_00ce2834(double param_1)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  DAT_02beaea8 = param_1;
  return;
}




uint FUN_00ce2848(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_30 = 0;
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  FUN_00e6a50c(&local_68,0x40,param_1);
  uVar2 = FUN_00ce28bc(&local_68,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce28bc(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort local_80;
  undefined1 auStack_7e [2];
  ushort local_7c [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_7c[0] = 0x4200;
  local_7c[1] = 0xe803;
  uStack_40 = param_1[7];
  local_48 = param_1[6];
  uStack_50 = param_1[5];
  local_58 = param_1[4];
  uStack_60 = param_1[3];
  local_68 = param_1[2];
  uStack_70 = param_1[1];
  local_78 = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_7c;
    uVar5 = 0x44;
  }
  else {
    iVar3 = FUN_00ce2730(0x42);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&local_80 + lVar2);
    _local_80 = 0;
    FUN_00ce2768((ulong)local_7c | 2,0x42,auStack_7e + lVar2,&local_80);
    *puVar6 = local_80 >> 8 | local_80 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0xe803);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce29b4(void)

{
  long lVar1;
  uint uVar2;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = 0;
  uVar2 = FUN_00ce2a08(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce2a08(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x300;
  local_40[1] = 0x5004;
  local_3c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 5;
  }
  else {
    iVar3 = FUN_00ce2730(3);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,3,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x5004);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce2ae8(void)

{
  long lVar1;
  uint uVar2;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = 0;
  uVar2 = FUN_00ce2b3c(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce2b3c(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x300;
  local_40[1] = 0xef03;
  local_3c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 5;
  }
  else {
    iVar3 = FUN_00ce2730(3);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,3,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0xef03);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce2c1c(void)

{
  long lVar1;
  uint uVar2;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = 0;
  uVar2 = FUN_00ce2c70(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce2c70(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x300;
  local_40[1] = 0xf003;
  local_3c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 5;
  }
  else {
    iVar3 = FUN_00ce2730(3);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,3,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0xf003);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce2d50(uint param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ushort local_2c;
  ushort local_2a;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = (ushort)(param_1 >> 8) & 0xff | (ushort)((param_1 & 0xff00ff) << 8);
  local_2a = (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
  uVar2 = FUN_00ce2db8(&local_2c,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce2db8(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined4 uStack_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_3c = *param_1;
  local_40[0] = 0x600;
  local_40[1] = 0x100;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 8;
  }
  else {
    iVar3 = FUN_00ce2730(6);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,6,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x100);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce2e94(uint param_1)

{
  long lVar1;
  uint uVar2;
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_30[0] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce2eec(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce2eec(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined4 uStack_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_3c = *param_1;
  local_40[0] = 0x600;
  local_40[1] = 0xb04;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 8;
  }
  else {
    iVar3 = FUN_00ce2730(6);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,6,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0xb04);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce2fc8(uint param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint local_30;
  uint uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_2c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce3024(&local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint thunk_FUN_00ce2c1c(void)

{
  long lVar1;
  uint uVar2;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  auStack_30[0] = 0;
  uVar2 = FUN_00ce2c70(auStack_30,0);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint thunk_FUN_00ce2ae8(void)

{
  long lVar1;
  uint uVar2;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  auStack_30[0] = 0;
  uVar2 = FUN_00ce2b3c(auStack_30,0);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

