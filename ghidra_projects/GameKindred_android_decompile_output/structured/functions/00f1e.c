// functions/00f1e — 31 functions
#include "libGameKindred.h"




void FUN_00f1e014(long param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00e6dd88(auStack_90);
  FUN_00e6d83c(auStack_90,param_2);
  thunk_FUN_00e6e91c(auStack_90,auStack_a0);
  lVar4 = *(long *)(param_1 + 8);
  lVar3 = 0;
  if (*(long *)(param_1 + 0x10) != lVar4) {
    uVar5 = 0;
    do {
      iVar2 = FUN_00e6aee0(auStack_a0,lVar4 + uVar5 * 0x20,0x10);
      if (iVar2 == 0) {
        if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 5) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar3 = *(long *)(param_1 + 8) + uVar5 * 0x20;
        if (param_3 != (int *)0x0) {
          *param_3 = (int)uVar5;
        }
        goto LAB_00f1e0c8;
      }
      lVar4 = *(long *)(param_1 + 8);
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(*(long *)(param_1 + 0x10) - lVar4 >> 5));
    lVar3 = 0;
  }
LAB_00f1e0c8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}




void thunk_FUN_00f1e0f8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5
                       )

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar4 = tpidr_el0;
  lStack_38 = *(long *)(lVar4 + 0x28);
  uStack_40 = param_4;
  lVar6 = FUN_00f1e1f8(param_1 + 0x40,&uStack_40);
  lVar7 = *(long *)(lVar6 + 8);
  lVar11 = lVar7 + (ulong)param_5 * 0x20;
  piVar10 = (int *)(lVar11 + 0x1c);
  iVar2 = *(int *)(lVar11 + 0x18);
  if (iVar2 <= *piVar10) {
    lVar12 = *(long *)(lVar6 + 0x20);
    iVar8 = -1;
    iVar9 = 0x7fffffff;
    lVar11 = (long)iVar2;
    do {
      iVar2 = *(int *)(lVar12 + lVar11 * 4);
      iVar3 = iVar2 + -1;
      *(int *)(lVar12 + lVar11 * 4) = iVar3;
      iVar5 = iVar8;
      if (iVar3 == 0 || iVar2 < 1) {
        iVar2 = (int)lVar11;
        if (iVar9 != 0x7fffffff) {
          iVar2 = iVar9;
        }
        iVar9 = iVar2;
        iVar5 = (int)lVar11;
        if (lVar11 <= iVar8) {
          iVar5 = iVar8;
        }
      }
      iVar8 = iVar5;
      bVar1 = lVar11 < *piVar10;
      lVar11 = lVar11 + 1;
    } while (bVar1);
    if (iVar9 != 0x7fffffff) {
      FUN_00e6b0f4(param_2 + (DAT_03211288 * iVar9 -
                             (ulong)(uint)(*(int *)(lVar7 + (ulong)param_5 * 0x20 + 0x10) +
                                          *(int *)(lVar6 + 0x44))),
                   ((iVar8 + 1) - iVar9) * (int)DAT_03211288);
    }
  }
  if (*(long *)(lVar4 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f1e0f8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  undefined8 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  local_40 = param_4;
  lVar6 = FUN_00f1e1f8(param_1 + 0x40,&local_40);
  lVar7 = *(long *)(lVar6 + 8);
  lVar11 = lVar7 + (ulong)param_5 * 0x20;
  piVar10 = (int *)(lVar11 + 0x1c);
  iVar2 = *(int *)(lVar11 + 0x18);
  if (iVar2 <= *piVar10) {
    lVar12 = *(long *)(lVar6 + 0x20);
    iVar8 = -1;
    iVar9 = 0x7fffffff;
    lVar11 = (long)iVar2;
    do {
      iVar2 = *(int *)(lVar12 + lVar11 * 4);
      iVar3 = iVar2 + -1;
      *(int *)(lVar12 + lVar11 * 4) = iVar3;
      iVar5 = iVar8;
      if (iVar3 == 0 || iVar2 < 1) {
        iVar2 = (int)lVar11;
        if (iVar9 != 0x7fffffff) {
          iVar2 = iVar9;
        }
        iVar9 = iVar2;
        iVar5 = (int)lVar11;
        if (lVar11 <= iVar8) {
          iVar5 = iVar8;
        }
      }
      iVar8 = iVar5;
      bVar1 = lVar11 < *piVar10;
      lVar11 = lVar11 + 1;
    } while (bVar1);
    if (iVar9 != 0x7fffffff) {
      FUN_00e6b0f4(param_2 + (DAT_03211288 * iVar9 -
                             (ulong)(uint)(*(int *)(lVar7 + (ulong)param_5 * 0x20 + 0x10) +
                                          *(int *)(lVar6 + 0x44))),
                   ((iVar8 + 1) - iVar9) * (int)DAT_03211288);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00f1e1f8(uint *param_1,undefined8 *param_2)

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
      goto LAB_00f1e284;
    }
  }
  uVar7 = 0xffffffff;
LAB_00f1e284:
  return *(long *)(param_1 + 8) + uVar7 * 0x48;
}




void FUN_00f1e29c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 )

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined8 local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  local_30 = param_4;
  lVar4 = FUN_00f1e1f8(param_1 + 0x40,&local_30);
  lVar6 = *(long *)(lVar4 + 8) + (ulong)param_5 * 0x20;
  piVar5 = (int *)(lVar6 + 0x1c);
  iVar2 = *(int *)(lVar6 + 0x18);
  if (iVar2 <= *piVar5) {
    lVar4 = *(long *)(lVar4 + 0x20);
    lVar6 = (long)iVar2;
    do {
      *(int *)(lVar4 + lVar6 * 4) = *(int *)(lVar4 + lVar6 * 4) + 1;
      bVar1 = lVar6 < *piVar5;
      lVar6 = lVar6 + 1;
    } while (bVar1);
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f1e32c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 )

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  undefined8 local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  local_30 = param_4;
  lVar4 = FUN_00f1e1f8(param_1 + 0x40,&local_30);
  lVar6 = *(long *)(lVar4 + 8) + (ulong)param_5 * 0x20;
  piVar5 = (int *)(lVar6 + 0x1c);
  iVar2 = *(int *)(lVar6 + 0x18);
  if (iVar2 <= *piVar5) {
    lVar4 = *(long *)(lVar4 + 0x20);
    lVar6 = (long)iVar2;
    do {
      *(int *)(lVar4 + lVar6 * 4) = *(int *)(lVar4 + lVar6 * 4) + -1;
      bVar1 = lVar6 < *piVar5;
      lVar6 = lVar6 + 1;
    } while (bVar1);
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00f1e3bc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  void *local_78 [2];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = param_2 + 0x39;
  if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
    lVar5 = *(long *)(param_2 + 0x48);
  }
  uVar4 = FUN_00e6a474(lVar5);
  bVar3 = false;
  if (1 < uVar4) {
    lVar5 = param_2 + 0x39;
    if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
      lVar5 = *(long *)(param_2 + 0x48);
    }
    FUN_008fa54c(local_60,lVar5);
    FUN_00f1d348(local_60,local_60);
    local_78[0] = (void *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      local_78[0] = local_50;
    }
    lVar5 = FUN_00f1df68(param_1 + 0x40,local_78);
    if (lVar5 == 0) {
      bVar3 = false;
    }
    else {
      lVar1 = param_2 + 0x51;
      if ((*(byte *)(param_2 + 0x50) & 1) != 0) {
        lVar1 = *(long *)(param_2 + 0x60);
      }
      FUN_008fa54c(local_78,lVar1);
      lVar5 = FUN_00f1e014(lVar5,local_78,0);
      bVar3 = lVar5 != 0;
      if (((ulong)local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
    }
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00f1e4ec(void)

{
  return 0;
}




undefined8 FUN_00f1e4f4(void)

{
  return 0;
}




undefined4 FUN_00f1e4fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  void *local_78 [2];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = param_2 + 0x39;
  if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
    lVar4 = *(long *)(param_2 + 0x48);
  }
  uVar3 = FUN_00e6a474(lVar4);
  uVar5 = 0;
  if (uVar3 < 2) goto LAB_00f1e600;
  lVar4 = param_2 + 0x39;
  if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
    lVar4 = *(long *)(param_2 + 0x48);
  }
  FUN_008fa54c(local_60,lVar4);
  FUN_00f1d348(local_60,local_60);
  local_78[0] = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    local_78[0] = local_50;
  }
  lVar4 = FUN_00f1df68(param_1 + 0x40,local_78);
  if (lVar4 == 0) {
LAB_00f1e5ec:
    uVar5 = 0;
  }
  else {
    lVar1 = param_2 + 0x51;
    if ((*(byte *)(param_2 + 0x50) & 1) != 0) {
      lVar1 = *(long *)(param_2 + 0x60);
    }
    FUN_008fa54c(local_78,lVar1);
    lVar4 = FUN_00f1e014(lVar4,local_78,0);
    if (((ulong)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    if (lVar4 == 0) goto LAB_00f1e5ec;
    uVar5 = *(undefined4 *)(lVar4 + 0x14);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00f1e600:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00f1e634(void)

{
  return 1;
}




void FUN_00f1e63c(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00f1e648(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}




void FUN_00f1e660(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_00f1e6ac(param_1 + 2,param_2 + 2);
  FUN_00f1e714(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  return;
}




void FUN_00f1e6ac(undefined8 *param_1,long *param_2)

{
  size_t __n;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (param_2[1] - *param_2 != 0) {
    FUN_00f1ebb0(param_1,param_2[1] - *param_2 >> 5);
    __n = param_2[1] - *param_2;
    if (0 < (long)__n) {
      memcpy((void *)param_1[1],(void *)*param_2,__n);
      param_1[1] = param_1[1] + __n;
    }
  }
  return;
}




void FUN_00f1e714(undefined8 *param_1,long *param_2)

{
  size_t __n;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (param_2[1] - *param_2 != 0) {
    FUN_00f1ebf0(param_1,param_2[1] - *param_2 >> 2);
    __n = param_2[1] - *param_2;
    if (0 < (long)__n) {
      memcpy((void *)param_1[1],(void *)*param_2,__n);
      param_1[1] = param_1[1] + __n;
    }
  }
  return;
}




void FUN_00f1e77c(long param_1,uint param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  pvVar1 = *(void **)(lVar2 + (ulong)param_2 * 0x48 + 0x20);
  uVar3 = (ulong)param_2;
  if (pvVar1 != (void *)0x0) {
    *(void **)(lVar2 + uVar3 * 0x48 + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(lVar2 + uVar3 * 0x48 + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(lVar2 + uVar3 * 0x48 + 0x10) = pvVar1;
    operator_delete(pvVar1);
  }
  *(undefined4 *)(lVar2 + uVar3 * 0x48) = *(undefined4 *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00f1e800(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  undefined8 uVar4;
  
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  uVar3 = ((long)__n >> 5) + 1;
  if (uVar3 >> 0x3b != 0) {
LAB_00f1e868:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((ulong)(param_1[2] - (long)__src >> 5) < 0x3ffffffffffffff) {
    uVar2 = param_1[2] - (long)__src >> 4;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_00f1e87c;
    }
    if (uVar3 >> 0x3b != 0) goto LAB_00f1e868;
  }
  else {
    uVar3 = 0x7ffffffffffffff;
  }
  __dest = operator_new(uVar3 << 5);
LAB_00f1e87c:
  uVar4 = param_2[2];
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 5) * 0x20);
  puVar1[3] = param_2[3];
  puVar1[2] = uVar4;
  uVar4 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar4;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *param_1 = __dest;
  param_1[1] = puVar1 + 4;
  param_1[2] = (void *)((long)__dest + uVar3 * 0x20);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}




void FUN_00f1e8f8(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  
  __src = (void *)*param_1;
  __n = param_1[1] - (long)__src;
  uVar3 = ((long)__n >> 2) + 1;
  if (uVar3 >> 0x3e != 0) {
LAB_00f1e960:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((ulong)(param_1[2] - (long)__src >> 2) < 0x1fffffffffffffff) {
    uVar2 = param_1[2] - (long)__src >> 1;
    if (uVar3 <= uVar2) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
      goto LAB_00f1e974;
    }
    if (uVar3 >> 0x3e != 0) goto LAB_00f1e960;
  }
  else {
    uVar3 = 0x3fffffffffffffff;
  }
  __dest = operator_new(uVar3 << 2);
LAB_00f1e974:
  puVar1 = (undefined4 *)((long)__dest + ((long)__n >> 2) * 4);
  *puVar1 = *param_2;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *param_1 = __dest;
  param_1[1] = puVar1 + 1;
  param_1[2] = (void *)((long)__dest + uVar3 * 4);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}




ulong FUN_00f1e9e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_80 [72];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_00f1ea84(param_1 + 0x18,auStack_80);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar3 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar3 * 0x48);
  }
  FUN_00f1e660(lVar2 + uVar3 * 0x48,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f1ea84(uint *param_1,void *param_2)

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
    FUN_00f1eb14(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  memcpy((void *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x48 + -0x48),param_2,0x48);
  return;
}




void FUN_00f1eb14(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *__src;
  void *__dest;
  long lVar2;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x48);
    __src = *(void **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x48;
      __dest = pvVar1;
      do {
        memcpy(__dest,__src,0x48);
        __src = (void *)((long)__src + 0x48);
        lVar2 = lVar2 + -0x48;
        __dest = (void *)((long)__dest + 0x48);
      } while (lVar2 != 0);
      __src = *(void **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (__src != (void *)0x0) {
      operator_delete__(__src);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_00f1ebb0(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  if (param_2 >> 0x3b == 0) {
    pvVar1 = operator_new(param_2 << 5);
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    param_1[2] = (void *)((long)pvVar1 + param_2 * 0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




void FUN_00f1ebf0(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  if (param_2 >> 0x3e == 0) {
    pvVar1 = operator_new(param_2 << 2);
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    param_1[2] = (void *)((long)pvVar1 + param_2 * 4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




void FUN_00f1ec30(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  FUN_00f1ff48(param_1 + 6);
  *(undefined4 *)(param_1 + 9) = 0;
  return;
}




void FUN_00f1ec64(uint *param_1)

{
  long *plVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  FUN_00f1ff84(param_1 + 0xc);
  puVar2 = param_1 + 4;
  if (*puVar2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 6) + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        plVar1 = *(long **)(*(long *)(param_1 + 6) + uVar3 * 8);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *puVar2);
  }
  uVar3 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 2) + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar3 = (ulong)*param_1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  FUN_00f1ff5c(param_1 + 0xc);
  if (*(void **)(param_1 + 10) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 10));
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  if (*(void **)(param_1 + 6) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 6));
    puVar2[0] = 0;
    puVar2[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
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




void FUN_00f1ed50(uint *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = param_2;
  if (param_2 == 0) {
LAB_00f1edd4:
    uVar2 = 0;
  }
  else {
    if (*param_1 != 0) {
      uVar5 = 0;
      do {
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 2) + uVar5 * 8);
        uVar2 = FUN_00f1fcbc(param_2);
        uVar3 = FUN_00f1fc54(uVar4,uVar2);
        if ((uVar3 & 1) != 0) goto LAB_00f1edd4;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *param_1);
    }
    FUN_00f1ee04(param_1,&local_50);
    uVar2 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_00f1ee04(uint *param_1,undefined8 *param_2)

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
    FUN_00f1fa78(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




int FUN_00f1ee8c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  char local_a0 [32];
  byte local_80;
  undefined1 auStack_7f [15];
  undefined1 *local_70;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f1fdd0(local_a0);
  if (local_a0[0] != '\0') {
    puVar1 = auStack_7f;
    if ((local_80 & 1) != 0) {
      puVar1 = local_70;
    }
    plVar4 = (long *)FUN_00f1ef80(param_1,puVar1);
    if ((((plVar4 != (long *)0x0) &&
         (uVar5 = (**(code **)(*plVar4 + 0x40))(plVar4), (uVar5 & 1) != 0)) &&
        (uVar5 = (**(code **)(*plVar4 + 0x48))(plVar4,param_3), (uVar5 & 1) != 0)) &&
       (lVar6 = (**(code **)(*plVar4 + 0x10))(plVar4,local_a0,param_3), lVar6 != 0)) {
      iVar3 = FUN_00f1efe8(param_1,lVar6);
      iVar3 = iVar3 + 1;
      goto LAB_00f1ef4c;
    }
  }
  iVar3 = -1;
LAB_00f1ef4c:
  FUN_00f1fee4(local_a0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00f1ef80(uint *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 2) + uVar3 * 8);
      if (lVar2 != 0) {
        uVar1 = FUN_00f1fc54(lVar2,param_2);
        if ((uVar1 & 1) != 0) {
          return lVar2;
        }
        uVar1 = (ulong)*param_1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}




void FUN_00f1efe8(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_30 = param_2;
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_00f1f9f0(param_1 + 0x10,&local_30);
    uVar3 = *(int *)(param_1 + 0x10) - 1;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x20) - 1;
    uVar3 = *(uint *)(*(long *)(param_1 + 0x28) + (ulong)uVar1 * 4);
    *(uint *)(param_1 + 0x20) = uVar1;
    *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 8) = param_2;
  }
  *(uint *)(local_30 + 8) = uVar3;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

