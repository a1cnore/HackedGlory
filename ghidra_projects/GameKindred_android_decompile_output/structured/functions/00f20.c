// functions/00f20 — 73 functions
#include "libGameKindred.h"




void FUN_00f20050(long param_1,ulong param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  plVar2 = plVar3;
  if (plVar4 != (long *)0x0) {
    do {
      if ((ulong)plVar4[4] >= param_2) {
        plVar2 = plVar4;
      }
      plVar4 = (long *)plVar4[(ulong)plVar4[4] < param_2];
    } while (plVar4 != (long *)0x0);
    if ((plVar2 != plVar3) && ((ulong)plVar2[4] <= param_2)) {
      *(int *)((long)plVar2 + 0x44) = *(int *)((long)plVar2 + 0x44) + 1;
      goto LAB_00f200c4;
    }
  }
  uStack_2c = 1;
  local_50 = param_2;
  uStack_48 = param_3;
  local_40 = param_2;
  uStack_38 = param_5;
  local_30 = param_4;
  FUN_00f20228(param_1,&local_50,&local_50);
LAB_00f200c4:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f200f8(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar1;
  plVar2 = plVar1;
  if (plVar4 != (long *)0x0) {
    do {
      if ((ulong)plVar4[4] >= param_2) {
        plVar2 = plVar4;
      }
      plVar4 = (long *)plVar4[(ulong)plVar4[4] < param_2];
    } while (plVar4 != (long *)0x0);
    if ((plVar2 != plVar1) && (puVar3 = (ulong *)(plVar2 + 4), *puVar3 <= param_2))
    goto LAB_00f20134;
  }
  puVar3 = (ulong *)(param_1 + 0x28);
LAB_00f20134:
  *(int *)((long)puVar3 + 0x24) = *(int *)((long)puVar3 + 0x24) + -1;
  return;
}




void FUN_00f20144(long param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if ((ulong)plVar3[4] >= param_2) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[(ulong)plVar3[4] < param_2];
    } while (plVar3 != (long *)0x0);
    if ((plVar4 != plVar2) && ((ulong)plVar4[4] <= param_2)) {
      iVar1 = *(int *)((long)plVar4 + 0x44) + -1;
      *(int *)((long)plVar4 + 0x44) = iVar1;
      (*(code *)plVar4[5])(param_2,(int)plVar4[8],iVar1,plVar4[7]);
      if (*(int *)((long)plVar4 + 0x44) < 1) {
        FUN_00f20358(param_1,plVar4);
        return;
      }
    }
  }
  return;
}




void FUN_00f201dc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00f201dc(param_1,*param_2);
    FUN_00f201dc(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




undefined1  [16] FUN_00f20228(long param_1,ulong *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar3 = puVar2, *param_2 < (ulong)puVar3[4]) {
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_00f202a0;
      }
      if (*param_2 <= (ulong)puVar3[4]) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_00f202a0:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x48);
    uVar6 = *param_3;
    *(undefined8 *)((long)pvVar5 + 0x28) = param_3[1];
    *(undefined8 *)((long)pvVar5 + 0x20) = uVar6;
    uVar6 = param_3[2];
    *(undefined8 *)((long)pvVar5 + 0x38) = param_3[3];
    *(undefined8 *)((long)pvVar5 + 0x30) = uVar6;
    *(undefined8 *)((long)pvVar5 + 0x40) = param_3[4];
    FUN_00f20304(param_1,puVar3,puVar4,pvVar5);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar5;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_00f20304(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




long * FUN_00f20358(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_009343e8(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




void * FUN_00f203ec(void *param_1,size_t param_2,int param_3)

{
  uint uVar1;
  
  if (0 < param_3) {
    return param_1;
  }
  uVar1 = munmap(param_1,param_2);
  return (void *)(ulong)uVar1;
}




void FUN_00f203fc(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xc) = param_4;
  *param_1 = &PTR_FUN_02828c90;
  *(undefined4 *)(param_1 + 2) = param_3;
  return;
}




void FUN_00f2041c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02828c90;
  return;
}




bool FUN_00f20434(long param_1)

{
  int iVar1;
  
  iVar1 = close(*(int *)(param_1 + 0x10));
  if (-1 < iVar1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return -1 < iVar1;
}




void FUN_00f2046c(long param_1,void *param_2,size_t param_3)

{
  read(*(int *)(param_1 + 0x10),param_2,param_3);
  return;
}




void FUN_00f20474(long param_1,void *param_2,size_t param_3)

{
  write(*(int *)(param_1 + 0x10),param_2,param_3);
  return;
}




size_t FUN_00f2047c(long *param_1,undefined8 *param_2)

{
  size_t __len;
  void *pvVar1;
  
  __len = (**(code **)(*param_1 + 0x48))();
  pvVar1 = mmap((void *)0x0,__len,1,2,(int)param_1[2],0);
  *param_2 = pvVar1;
  return __len;
}




undefined8 FUN_00f204d0(long *param_1,void *param_2)

{
  size_t __len;
  
  __len = (**(code **)(*param_1 + 0x48))();
  munmap(param_2,__len);
  return 0;
}




code * FUN_00f20508(void)

{
  return FUN_00f203ec;
}




void FUN_00f20514(long param_1)

{
  long lVar1;
  __off_t local_78;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fstat(*(int *)(param_1 + 0x10),(stat *)&stack0xffffffffffffff58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_78);
}




undefined8 FUN_00f20564(void)

{
  return 1;
}




undefined8 FUN_00f2056c(void)

{
  return 1;
}




undefined8 FUN_00f20574(void)

{
  return 0;
}




void FUN_00f2057c(undefined8 param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  
  if ((*(byte *)(param_4 + 1) & 1) == 0) {
    lVar1 = (long)param_4 + 9;
  }
  else {
    lVar1 = param_4[3];
  }
  FUN_00f1e0f8(*param_4,param_1,param_2,lVar1,*(undefined4 *)(param_4 + 4));
  if (0 < param_3) {
    return;
  }
  if ((*(byte *)(param_4 + 1) & 1) != 0) {
    operator_delete((void *)param_4[3]);
  }
  operator_delete(param_4);
  return;
}




void FUN_00f205f0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xc) = param_4;
  param_1[2] = param_5;
  *param_1 = &PTR_FUN_02828d00;
  FUN_008fa54c(param_1 + 3,param_6);
  *(undefined4 *)(param_1 + 6) = param_7;
  param_1[7] = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  return;
}




void FUN_00f20650(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02828d00;
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[5]);
  return;
}




void FUN_00f20674(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02828d00;
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    operator_delete((void *)param_1[5]);
  }
  operator_delete(param_1);
  return;
}




undefined8 FUN_00f206b4(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar1 = param_1 + 0x19;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
  }
  thunk_FUN_00f1e0f8(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x38),
                     *(undefined4 *)(param_1 + 0x40),lVar1,*(undefined4 *)(param_1 + 0x30));
  return 1;
}




long FUN_00f206f8(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x44);
  uVar1 = (ulong)(*(uint *)(param_1 + 0x40) - uVar2);
  if ((long)(uVar2 + param_3) <= (long)(ulong)*(uint *)(param_1 + 0x40)) {
    uVar1 = param_3;
  }
  memmove(param_2,(void *)(*(long *)(param_1 + 0x38) + (ulong)uVar2),uVar1 & 0xffffffff);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (int)uVar1;
  return (long)(int)uVar1;
}




undefined8 FUN_00f20750(void)

{
  return 0;
}




undefined4 FUN_00f20758(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar1 = param_1 + 0x19;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
  }
  FUN_00f1e29c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x38),
               *(undefined4 *)(param_1 + 0x40),lVar1,*(undefined4 *)(param_1 + 0x30));
  *param_2 = *(undefined8 *)(param_1 + 0x38);
  return *(undefined4 *)(param_1 + 0x40);
}




undefined8 FUN_00f207b4(void)

{
  return 0;
}




code * FUN_00f207bc(void)

{
  return FUN_00f2057c;
}




undefined8 * FUN_00f207c8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x28);
  *puVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_008fcdb8(puVar1 + 1,param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x30);
  return puVar1;
}




undefined4 FUN_00f20810(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}




undefined8 FUN_00f20818(void)

{
  return 1;
}




undefined8 FUN_00f20820(void)

{
  return 0;
}




void FUN_00f20828(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  FUN_008fa54c(param_1 + 1,param_3);
  *(undefined4 *)(param_1 + 4) = param_4;
  return;
}




void FUN_00f20858(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_008fcdb8(param_1 + 1,param_2 + 1);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return;
}




void FUN_00f20890(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_02828d70;
  pvVar1 = operator_new(0x1a150);
  FUN_00f21504();
  param_1[3] = pvVar1;
  return;
}




void FUN_00f208d8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_02828d70;
  FUN_00f20930();
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    FUN_00f215ac(pvVar1);
    operator_delete(pvVar1);
  }
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




void FUN_00f20930(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x10) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 8);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}




void FUN_00f209b0(void *param_1)

{
  FUN_00f208d8();
  operator_delete(param_1);
  return;
}




void FUN_00f209d4(long param_1)

{
  FUN_00f21790(*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_00f209dc(long param_1)

{
  FUN_00f217d0(*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_00f209e4(long param_1)

{
  FUN_00f21718(*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_00f209ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  FUN_00f20a3c(param_1 + 8,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f20a3c(uint *param_1,undefined8 *param_2)

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
    FUN_00f20c1c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00f20ac4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f20ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}




void FUN_00f20ad8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f20ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}




undefined8
FUN_00f20aec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5,
            undefined4 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00f20b8c();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_00f21624(*(undefined8 *)(param_1 + 0x18));
    FUN_00f20df8(uVar2,lVar1,param_3);
    FUN_00f20eb0(uVar2,param_4,0);
    FUN_00f20ec8(uVar2,param_6);
    if ((param_5 & 1) == 0) {
      FUN_00f21690(*(undefined8 *)(param_1 + 0x18),uVar2);
    }
    else {
      FUN_00f21720();
    }
    uVar2 = 1;
  }
  return uVar2;
}




undefined8 FUN_00f20b8c(long param_1,char *param_2)

{
  int iVar1;
  char *__s1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = 0;
    do {
      __s1 = (char *)(**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar2 * 8) + 0x10))();
      iVar1 = strcmp(__s1,param_2);
      if (iVar1 == 0) {
        return *(undefined8 *)(*(long *)(param_1 + 0x10) + uVar2 * 8);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  return 0;
}




void FUN_00f20c00(void)

{
  return;
}




void FUN_00f20c04(long param_1)

{
  FUN_00f21868(*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_00f20c0c(long param_1)

{
  FUN_00f21814(*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_00f20c14(long param_1)

{
  FUN_00f21604(*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_00f20c1c(uint *param_1,uint param_2)

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




void FUN_00f20c9c(undefined8 param_1,uint param_2)

{
  operator_new__((ulong)param_2);
  return;
}




undefined8 FUN_00f20cb4(undefined8 param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    operator_delete__(param_2);
  }
  return 0;
}




void FUN_00f20cd4(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00f1c7b0(param_2,1);
  if (iVar2 == -1) {
    uVar4 = 0;
  }
  else {
    local_40 = 0;
    uVar3 = FUN_00f1c844(iVar2,&local_40);
    FUN_00f1c7c8(iVar2);
    uVar4 = local_40;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = uVar3;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}




undefined8 FUN_00f20d68(undefined8 param_1,undefined8 param_2)

{
  FUN_00f1c874(param_2);
  return 1;
}




void FUN_00f20d84(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf20d88);
  (*pcVar1)();
}




int FUN_00f20d88(pthread_key_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_key_delete(*param_1);
  return iVar1;
}




void FUN_00f20d90(undefined4 *param_1)

{
  *param_1 = 0;
  memset(param_1 + 2,0,0x5a);
  FUN_00f21ba4(param_1,FUN_00f20dd0,param_1,0);
  return;
}




void FUN_00f20dd0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  piVar1 = (int *)(param_1 + 0x5c);
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
    FUN_00f218d4(*(undefined8 *)(param_1 + 0x50));
    return;
  }
  return;
}




void FUN_00f20df8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 8) = param_2;
  FUN_008fa54c(local_40,param_3);
  FUN_008fce60(param_1 + 0x10,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00f20e74(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    return param_1 + 0x11;
  }
  return *(long *)(param_1 + 0x20);
}




undefined1 * FUN_00f20e90(long param_1)

{
  undefined1 *puVar1;
  
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f20ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined1 *)(**(code **)(**(long **)(param_1 + 8) + 0x10))();
    return puVar1;
  }
  return &DAT_01e277f2;
}




void FUN_00f20eb0(long param_1,undefined8 param_2,uint param_3)

{
  *(undefined8 *)(param_1 + (ulong)param_3 * 8 + 0x28) = param_2;
  return;
}




undefined8 FUN_00f20ebc(long param_1,uint param_2)

{
  return *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x28);
}




void FUN_00f20ec8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}




undefined4 FUN_00f20ed0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}




undefined1 FUN_00f20ed8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x61);
}




void FUN_00f20ee0(long param_1)

{
  char cVar1;
  long *plVar2;
  char *pcVar3;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    pcVar3 = (char *)(param_1 + 0x11);
  }
  else {
    pcVar3 = *(char **)(param_1 + 0x20);
    if (pcVar3 == (char *)0x0) goto LAB_00f20f20;
  }
  cVar1 = *pcVar3;
  while (cVar1 != '\0') {
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
  }
LAB_00f20f20:
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x10))();
    plVar2 = *(long **)(param_1 + 8);
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f20f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
      return;
    }
  }
  return;
}




bool FUN_00f20f60(long param_1)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 == (long *)0x0) ||
     (uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1), (uVar3 & 1) == 0)) {
    bVar1 = *(int *)(param_1 + 0x58) != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}




void FUN_00f20fac(long param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar3 = FUN_00f21c60();
    FUN_00f21e98(uVar3,*(undefined4 *)(param_1 + 0x58));
  }
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    pcVar4 = (char *)(param_1 + 0x11);
  }
  else {
    pcVar4 = *(char **)(param_1 + 0x20);
    if (pcVar4 == (char *)0x0) goto LAB_00f21018;
  }
  cVar1 = *pcVar4;
  while (cVar1 != '\0') {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
LAB_00f21018:
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f21030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}

