// functions/1010a — 432 functions
#include "GameKindred.h"




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a01dc(void)

{
  FUN_1010a01dc();
  return;
}




void thunk_FUN_1010a01dc(void)

{
  FUN_1010a01dc();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void thunk_FUN_1010a149c(void)

{
  FUN_1010a149c();
  return;
}




void thunk_FUN_1010a14b4(void)

{
  FUN_1010a14b4();
  return;
}




void FUN_1010a0018(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10182e228;
  FUN_10109c67c();
  operator_delete(param_1);
  return;
}




void FUN_1010a0048(void)

{
  return;
}




void FUN_1010a004c(void)

{
  return;
}




void FUN_1010a0050(void)

{
  return;
}




void FUN_1010a0054(void)

{
  return;
}




void FUN_1010a0058(void)

{
  return;
}




void FUN_1010a005c(void)

{
  return;
}




void FUN_1010a0060(void)

{
  return;
}




undefined8 * FUN_1010a0064(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_thunk_FUN_1010a0064_10182e280;
  lVar2 = param_1[3];
  while (lVar2 != 0) {
    puVar1 = (undefined8 *)(lVar2 + 8);
    lVar2 = *(long *)(lVar2 + 0x20);
    FUN_1010a00bc(*puVar1);
  }
  if (param_1[2] != 0) {
    FUN_1010a0164(param_1[2],param_1);
  }
  return param_1;
}




void FUN_1010a00bc(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(param_2);
  }
  for (plVar2 = *(long **)(param_2 + 0x18); plVar2 != (long *)0x0; plVar2 = (long *)plVar2[4]) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  (**(code **)(param_1 + 0xb8))(param_2);
  *(undefined8 *)(param_2 + 8) = 0;
  uVar1 = 0;
  if (*(uint *)(param_1 + 0xa8) != 0) {
    uVar1 = (uint)((int)param_2 - *(int *)(param_1 + 0x2c8)) / *(uint *)(param_1 + 0xa8);
  }
  *(ulong *)(*(long *)(param_1 + 0x2e0) + (ulong)(uVar1 >> 6) * 8) =
       *(ulong *)(*(long *)(param_1 + 0x2e0) + (ulong)(uVar1 >> 6) * 8) &
       (1L << ((ulong)uVar1 & 0x3f) ^ 0xffffffffffffffffU);
  FUN_1010a05a4(param_1);
  *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) | 0x80000000;
  return;
}




void FUN_1010a0164(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = lVar1;
  if (lVar1 == param_2) {
    lVar2 = 0;
  }
  else {
    do {
      lVar2 = lVar3;
      lVar3 = *(long *)(lVar2 + 0x20);
      if (lVar3 == 0) {
        return;
      }
    } while (lVar3 != param_2);
  }
  if (lVar1 == param_2) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x20);
  }
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}




void thunk_FUN_1010a0064(void)

{
  FUN_1010a0064();
  return;
}




void FUN_1010a01c8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010a0064();
  operator_delete(pvVar1);
  return;
}




void FUN_1010a01dc(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if ((ulong)*(uint *)(lVar2 + 0xa8) != 0) {
    uVar1 = (param_1 - *(long *)(lVar2 + 0x2c8)) / (long)(ulong)*(uint *)(lVar2 + 0xa8);
  }
  uVar3 = uVar1 >> 6 & 0x3ffffff;
  *(ulong *)(*(long *)(lVar2 + 0x2e0) + uVar3 * 8) =
       *(ulong *)(*(long *)(lVar2 + 0x2e0) + uVar3 * 8) | 1L << (uVar1 & 0x3f);
  return;
}




void FUN_1010a0210(void)

{
  return;
}




void FUN_1010a0214(void)

{
  return;
}




void FUN_1010a0218(long param_1,long *param_2,int param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  iVar1 = 0;
  if (lVar3 != 0 && param_3 != 0) {
    do {
      plVar2 = param_2;
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == param_4) {
        plVar2 = param_2 + 1;
        *param_2 = lVar3;
        iVar1 = iVar1 + 1;
      }
      lVar3 = *(long *)(lVar3 + 0x20);
      param_2 = plVar2;
    } while (lVar3 != 0 && iVar1 != param_3);
  }
  return;
}




void FUN_1010a0258(long param_1,long *param_2,int param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  iVar1 = 0;
  if (lVar3 != 0 && param_3 != 0) {
    do {
      plVar2 = param_2;
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == param_4) {
        plVar2 = param_2 + 1;
        *param_2 = lVar3;
        iVar1 = iVar1 + 1;
      }
      lVar3 = *(long *)(lVar3 + 0x20);
      param_2 = plVar2;
    } while (lVar3 != 0 && iVar1 != param_3);
  }
  return;
}




void FUN_1010a0298(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_1010a04dc(*DAT_101ea5a38 + (ulong)param_2 * 0x2e8);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_1;
    lVar2 = *(long *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar1;
    if (lVar2 != 0) {
      *(long *)(lVar1 + 0x20) = lVar2;
    }
  }
  return;
}




void FUN_1010a02e4(long param_1,long param_2)

{
  long lVar1;
  
  *(long *)(param_2 + 0x10) = param_1;
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = param_2;
  if (lVar1 != 0) {
    *(long *)(param_2 + 0x20) = lVar1;
  }
  return;
}




void FUN_1010a02fc(undefined8 param_1,long param_2)

{
  FUN_1010a0164();
  FUN_1010a00bc(*(undefined8 *)(param_2 + 8),param_2);
  return;
}




uint FUN_1010a0324(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = 0;
  if ((ulong)*(uint *)(lVar2 + 0xa8) != 0) {
    uVar1 = (param_1 - *(long *)(lVar2 + 0x2c8)) / (long)(ulong)*(uint *)(lVar2 + 0xa8);
  }
  return (uint)(*(ulong *)(*(long *)(lVar2 + 0x2e0) + (uVar1 >> 6 & 0x3ffffff) * 8) >>
               (uVar1 & 0x3f)) & 1;
}




void FUN_1010a0350(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_2 + 2);
  uVar4 = (ulong)*param_2;
  uVar5 = lVar3 + uVar4;
  uVar2 = *param_2 + (uint)*(ushort *)(param_1 + 0x2d8) * *(int *)(param_1 + 0xa8);
  if ((uVar5 & 0xf) == 0) {
    if ((param_2[4] & 0x7fffffff) <= uVar2) goto LAB_1010a03b0;
    *param_2 = uVar2;
LAB_1010a03a8:
    uVar4 = (ulong)uVar2;
  }
  else {
    uVar2 = uVar2 + 0xf;
    if (uVar2 < (param_2[4] & 0x7fffffff)) {
      *param_2 = uVar2;
      uVar5 = uVar5 + 0xf & 0xfffffffffffffff0;
      goto LAB_1010a03a8;
    }
LAB_1010a03b0:
    uVar5 = 0;
  }
  *(ulong *)(param_1 + 0x2c8) = uVar5;
  uVar5 = lVar3 + uVar4;
  uVar2 = (*(uint *)(param_1 + 0x2d8) & 0xffff) * 2 + (int)uVar4;
  if ((uVar5 & 1) == 0) {
    if (uVar2 < (param_2[4] & 0x7fffffff)) {
      *param_2 = uVar2;
      goto LAB_1010a0404;
    }
LAB_1010a040c:
    uVar5 = 0;
  }
  else {
    uVar2 = uVar2 + 1;
    if ((param_2[4] & 0x7fffffff) <= uVar2) goto LAB_1010a040c;
    *param_2 = uVar2;
    uVar5 = uVar5 + 1 & 0xfffffffffffffffe;
LAB_1010a0404:
    uVar4 = (ulong)uVar2;
  }
  *(ulong *)(param_1 + 0x2d0) = uVar5;
  uVar5 = lVar3 + uVar4;
  iVar1 = (int)uVar4 + (*(uint *)(param_1 + 0x2d8) >> 3 & 0x1ff8);
  uVar2 = iVar1 + 8;
  if ((uVar5 & 7) == 0) {
    if (uVar2 < (param_2[4] & 0x7fffffff)) {
      *param_2 = uVar2;
      goto LAB_1010a0474;
    }
  }
  else {
    uVar2 = iVar1 + 0xf;
    if (uVar2 < (param_2[4] & 0x7fffffff)) {
      *param_2 = uVar2;
      uVar5 = uVar5 + 7 & 0xfffffffffffffff8;
      goto LAB_1010a0474;
    }
  }
  uVar5 = 0;
LAB_1010a0474:
  *(ulong *)(param_1 + 0x2e0) = uVar5;
  FUN_1010a047c();
  return;
}




void FUN_1010a047c(long param_1)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x2d8);
  *(uint *)(param_1 + 0x2d8) = uVar1 & 0x8000ffff;
  if ((uVar1 & 0xffff) != 0) {
    uVar3 = 0;
    lVar4 = *(long *)(param_1 + 0x2d0);
    do {
      *(short *)(lVar4 + uVar3 * 2) = (short)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_1 + 0x2d8));
  }
  lVar4 = *(long *)(param_1 + 0x2e0);
  uVar3 = 0;
  do {
    *(undefined8 *)(lVar4 + uVar3 * 8) = 0;
    bVar2 = uVar3 < ((ulong)(*(uint *)(param_1 + 0x2d8) >> 6) & 0x3ff);
    uVar3 = uVar3 + 1;
  } while (bVar2);
  *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) & 0x7fffffff;
  return;
}




void * FUN_1010a04dc(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  long *plVar4;
  
  uVar2 = *(uint *)(param_1 + 0x5b);
  if ((uVar2 >> 0x10 & 0x7fff) < (uVar2 & 0xffff)) {
    uVar1 = uVar2 + 0x10000 & 0x7fff0000;
    *(uint *)(param_1 + 0x5b) = uVar1 | uVar2 & 0x8000ffff;
    pvVar3 = (void *)(param_1[0x59] +
                     (ulong)(*(uint *)(param_1 + 0x15) *
                            (uint)*(ushort *)
                                   (param_1[0x5a] +
                                   (long)(int)((uVar2 & 0xffff) - (uVar1 >> 0x10)) * 2)));
    _bzero(pvVar3,(ulong)*(uint *)(param_1 + 0x15));
    *(undefined8 **)((long)pvVar3 + 8) = param_1;
    (*(code *)param_1[0x16])(pvVar3);
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)(pvVar3);
    }
    for (plVar4 = *(long **)((long)pvVar3 + 0x18); plVar4 != (long *)0x0; plVar4 = (long *)plVar4[4]
        ) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) | 0x80000000;
  }
  else {
    pvVar3 = (void *)0x0;
  }
  return pvVar3;
}




void FUN_1010a05a4(long param_1,uint param_2)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x2d8);
  uVar6 = uVar1 >> 0x10 & 0x7fff;
  uVar3 = (uVar1 & 0xffff) - uVar6;
  lVar4 = *(long *)(param_1 + 0x2d0);
  if (uVar3 < (uVar1 & 0xffff)) {
    uVar5 = (ulong)uVar3;
    do {
      if (*(ushort *)(lVar4 + uVar5 * 2) == param_2) goto LAB_1010a05e0;
      uVar5 = uVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar5 = 0;
LAB_1010a05e0:
  uVar2 = *(undefined2 *)(lVar4 + (long)(int)uVar3 * 2);
  *(short *)(lVar4 + (long)(int)uVar3 * 2) = (short)param_2;
  *(undefined2 *)(lVar4 + (uVar5 & 0xffffffff) * 2) = uVar2;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  *(uint *)(param_1 + 0x2d8) =
       uVar1 & 0x80000000 | uVar1 & 0xffff | (uVar1 + 0x7fff0000 >> 0x10 & 0x7fff) << 0x10;
  return;
}




void FUN_1010a0608(long param_1)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  ulong uVar4;
  ushort auStack_40 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = *(uint *)(param_1 + 0x2d8);
  uVar1 = uVar3 >> 0x10 & 0x7fff;
  puVar2 = (ushort *)((long)auStack_40 - ((ulong)(uVar1 * 8 + 0xf) & 0x7fff0));
  _memcpy(puVar2,(void *)(*(long *)(param_1 + 0x2d0) + (ulong)((uVar3 & 0xffff) - uVar1) * 2),
          (ulong)(uVar1 * 8));
  if (uVar1 != 0) {
    uVar4 = (ulong)uVar1;
    do {
      if (*(long *)(*(long *)(param_1 + 0x2c8) + (ulong)(*(int *)(param_1 + 0xa8) * (uint)*puVar2) +
                   0x10) == 0) {
        FUN_1010a00bc(param_1);
      }
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    uVar3 = *(uint *)(param_1 + 0x2d8);
  }
  *(uint *)(param_1 + 0x2d8) = uVar3 | 0x80000000;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010a06dc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  iVar3 = 0;
  lVar4 = 0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  do {
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x2e0) + lVar4 * 8);
    if (uVar2 != 0) {
      uVar5 = 0;
      while( true ) {
        if ((uVar2 >> (uVar5 & 0x3f) & 1) != 0) {
          FUN_1010a00bc(param_1,*(long *)(param_1 + 0x2c8) +
                                (ulong)(uint)(*(int *)(param_1 + 0xa8) * (iVar3 + (int)uVar5)));
        }
        if (uVar5 == 0x3f) break;
        uVar2 = *(ulong *)(*(long *)(param_1 + 0x2e0) + lVar4 * 8);
        uVar5 = uVar5 + 1;
      }
    }
    lVar4 = lVar4 + 1;
    iVar3 = iVar3 + 0x40;
  } while (lVar4 != ((ulong)(uVar1 >> 6) & 0x3ff) + 1);
  return;
}




void FUN_1010a0778(long param_1,ulong param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x2d8);
  uVar1 = (uVar2 & 0xffff) - (uVar2 >> 0x10 & 0x7fff);
  if (*(long *)(param_1 + (param_2 & 0xffffffff) * 8) != 0) {
    FUN_1004e4ecc(&DAT_101dc07c8);
    uVar2 = *(uint *)(param_1 + 0x2d8);
    if (uVar1 < (uVar2 & 0xffff)) {
      uVar3 = (ulong)uVar1;
      do {
        (**(code **)(param_1 + (param_2 & 0xffffffff) * 8))
                  (*(long *)(param_1 + 0x2c8) +
                   (ulong)(*(int *)(param_1 + 0xa8) *
                          (uint)*(ushort *)(*(long *)(param_1 + 0x2d0) + uVar3 * 2)));
        uVar3 = uVar3 + 1;
        uVar2 = *(uint *)(param_1 + 0x2d8);
      } while (uVar3 < (ushort)uVar2);
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001010a081c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(param_1 + 0x2c8),*(long *)(param_1 + 0x2d0) + (ulong)uVar1 * 2,
               uVar2 >> 0x10 & 0x7fff);
    return;
  }
  return;
}




ulong FUN_1010a0830(long param_1,long *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  
  uVar6 = *(uint *)(param_1 + 0x2d8);
  uVar11 = uVar6 >> 0x10 & 0x7fff;
  if (uVar11 <= param_3) {
    param_3 = uVar11;
  }
  uVar1 = uVar6 & 0xffff;
  uVar11 = uVar1 - uVar11;
  if (param_4 != 0) {
    if (uVar11 < uVar1 && param_3 != 0) {
      lVar7 = 0;
      iVar2 = *(int *)(param_1 + 0xa8);
      uVar8 = (ulong)uVar11;
      do {
        param_2[lVar7] =
             *(long *)(param_1 + 0x2c8) +
             (ulong)(iVar2 * (uint)*(ushort *)(*(long *)(param_1 + 0x2d0) + uVar8 * 2));
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 1;
      } while (uVar8 < *(ushort *)(param_1 + 0x2d8) && (uint)lVar7 < param_3);
    }
    return (ulong)param_3;
  }
  plVar10 = param_2;
  if (uVar11 < uVar1 && param_3 != 0) {
    uVar1 = *(uint *)(param_1 + 0xa8);
    uVar8 = (ulong)uVar11;
    plVar9 = param_2;
    uVar11 = 1;
    do {
      uVar3 = uVar1 * *(ushort *)(*(long *)(param_1 + 0x2d0) + uVar8 * 2);
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar3 / uVar1;
      }
      plVar10 = plVar9;
      if ((*(ulong *)(*(long *)(param_1 + 0x2e0) + ((ulong)(uVar4 >> 3) & 0x1ffffff8)) >>
           ((ulong)uVar4 & 0x3f) & 1) == 0) {
        plVar10 = plVar9 + 1;
        *plVar9 = *(long *)(param_1 + 0x2c8) + (ulong)uVar3;
        uVar6 = (uint)*(ushort *)(param_1 + 0x2d8);
      }
      uVar8 = uVar8 + 1;
    } while ((uVar8 < (uVar6 & 0xffff)) &&
            (bVar5 = uVar11 < param_3, plVar9 = plVar10, uVar11 = uVar11 + 1, bVar5));
  }
  return (ulong)((long)plVar10 - (long)param_2) >> 3;
}




int * FUN_1010a0918(long param_1,int param_2)

{
  int *piVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x2c0);
  if (*(uint *)(param_1 + 0x2c0) != 0) {
    piVar1 = (int *)(param_1 + 0xc0);
    do {
      if (*piVar1 == param_2) {
        return piVar1;
      }
      piVar1 = piVar1 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return (int *)0x0;
}




void FUN_1010a0944(long param_1,uint param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  
  *(undefined8 *)(*(long *)(param_1 + 0x13fb8) + (ulong)param_2 * 8) = param_3;
  uVar1 = 1 << (ulong)(param_2 & 0x1f);
  if (param_4 == 0) {
    uVar1 = 0;
  }
  *(uint *)(*(long *)(param_1 + 0x13fb8) + 0xa0) =
       *(uint *)(*(long *)(param_1 + 0x13fb8) + 0xa0) | uVar1;
  return;
}




void FUN_1010a0978(long param_1,uint param_2,undefined8 param_3)

{
  *(undefined8 *)(*(long *)(param_1 + 0x13fb8) + (ulong)param_2 * 8 + 0x50) = param_3;
  return;
}




void FUN_1010a0990(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x13fb8);
  uVar2 = *(uint *)(lVar3 + 0x2c0);
  lVar1 = lVar3 + (ulong)uVar2 * 0x10;
  *(undefined4 *)(lVar1 + 0xc0) = param_2;
  *(undefined8 *)(lVar1 + 200) = param_3;
  *(uint *)(lVar3 + 0x2c0) = uVar2 + 1;
  return;
}




undefined1 * FUN_1010a09b8(undefined1 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  
  puVar1 = (uint *)(param_1 + 0x13fb0);
  if (*puVar1 == 0) {
    puVar5 = (undefined1 *)0x0;
    uVar3 = 0;
    goto LAB_1010a0aa4;
  }
  uVar2 = *puVar1 * 0x2e8;
  puVar5 = (undefined1 *)(*(long *)(param_2 + 2) + (ulong)*param_2);
  uVar3 = *param_2 + uVar2;
  if (((ulong)puVar5 & 7) == 0) {
    if ((param_2[4] & 0x7fffffff) <= uVar3) goto LAB_1010a0a54;
    *param_2 = uVar3;
  }
  else if (uVar3 + 7 < (param_2[4] & 0x7fffffff)) {
    *param_2 = uVar3 + 7;
    puVar5 = (undefined1 *)((ulong)(puVar5 + 7) & 0xfffffffffffffff8);
  }
  else {
LAB_1010a0a54:
    puVar5 = (undefined1 *)0x0;
  }
  if (uVar2 != 0) {
    uVar6 = (ulong)uVar2;
    puVar4 = puVar5;
    do {
      *puVar4 = *param_1;
      uVar6 = uVar6 - 1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 != 0);
    uVar3 = 0;
    if (*puVar1 == 0) goto LAB_1010a0aa4;
  }
  uVar6 = 0;
  puVar4 = puVar5;
  do {
    FUN_1010a0350(puVar4,param_2);
    uVar6 = uVar6 + 1;
    uVar3 = *puVar1;
    puVar4 = puVar4 + 0x2e8;
  } while (uVar6 < uVar3);
LAB_1010a0aa4:
  *param_3 = uVar3;
  return puVar5;
}




void FUN_1010a0ac0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_1010a0608(*param_1 + lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x2e8;
    } while (uVar2 < *(uint *)(param_1 + 1));
    if (*(uint *)(param_1 + 1) != 0) {
      lVar1 = 0;
      uVar2 = 0;
      do {
        FUN_1010a047c(*param_1 + lVar1);
        uVar2 = uVar2 + 1;
        lVar1 = lVar1 + 0x2e8;
      } while (uVar2 < *(uint *)(param_1 + 1));
    }
  }
  return;
}




void FUN_1010a0b40(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar4 = *param_1;
      lVar1 = lVar4 + lVar2;
      FUN_1010a06dc(lVar1);
      lVar4 = lVar4 + (param_2 & 0xffffffff) * 8;
      if ((*(long *)(lVar4 + lVar2) != 0) || (*(long *)(lVar4 + lVar2 + 0x50) != 0)) {
        FUN_1010a0778(lVar1,param_2);
      }
      FUN_1010a06dc(lVar1);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x2e8;
    } while (uVar3 < *(uint *)(param_1 + 1));
  }
  return;
}




long FUN_1010a0be0(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  uint *puVar3;
  ulong uVar4;
  
  puVar3 = (uint *)(param_1 + 8);
  uVar1 = (ulong)*puVar3;
  if (*puVar3 != 0) {
    uVar4 = 0;
    do {
      pvVar2 = *(void **)(*(long *)(param_1 + 0x10) + uVar4 * 8);
      if (pvVar2 != (void *)0x0) {
        FUN_1010a1f10((long)pvVar2 + 0x18,*(undefined8 *)((long)pvVar2 + 0x20));
        if ((*(int *)((long)pvVar2 + 0x10) < 0) && (*(void **)((long)pvVar2 + 8) != (void *)0x0)) {
          operator_delete__(*(void **)((long)pvVar2 + 8));
        }
        operator_delete(pvVar2);
        uVar1 = (ulong)*puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x10));
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return param_1;
}




void FUN_1010a0c6c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




int FUN_1010a0c74(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint *puVar4;
  long lVar5;
  undefined8 local_38;
  
  puVar4 = (uint *)*param_1;
  uVar2 = *puVar4;
  uVar1 = uVar2 + (int)param_2;
  if (uVar1 < (puVar4[4] & 0x7fffffff)) {
    lVar5 = *(long *)(puVar4 + 2);
    *puVar4 = uVar1;
    if (lVar5 != 0) {
      pvVar3 = operator_new(0x30);
      local_38 = FUN_1010a30b8(pvVar3,param_2,lVar5 + (ulong)uVar2);
      FUN_1010a0d04(param_1 + 1,&local_38);
      return *(int *)(param_1 + 1) + -1;
    }
  }
  return -1;
}




void FUN_1010a0d04(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1010a1f90(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1010a0d84(long param_1,ulong param_2,long param_3,ulong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_450 [1048];
  undefined1 auStack_38 [8];
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8);
  auVar3 = thunk_FUN_1010b8be8(auStack_38,param_3,param_3 + (param_4 & 0xffffffff),5);
  piVar1 = auVar3._0_8_;
  if (*piVar1 == 0x30464544) {
    FUN_1010a2e9c(piVar1,auVar3._8_8_,uVar2);
  }
  else {
    FUN_1010a31c0(auStack_450,uVar2);
    FUN_1010a31d4(auStack_450,piVar1);
  }
  return;
}




void FUN_1010a0e0c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1010a3114(*(undefined8 *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8),param_3,
                param_4);
  return;
}




int FUN_1010a0e20(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = FUN_1010a31ac(*(undefined8 *)(*(long *)(param_1 + 0x10) + uVar3 * 8));
      iVar2 = iVar1 + iVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  return iVar2;
}




int FUN_1010a0e80(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = FUN_1010a31b4(*(undefined8 *)(*(long *)(param_1 + 0x10) + uVar3 * 8));
      iVar2 = iVar1 + iVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  return iVar2;
}




long * FUN_1010a0ee0(long *param_1)

{
  uint64_t uVar1;
  
  FUN_1004e3004();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_1004e3004(param_1);
  uVar1 = _mach_absolute_time();
  param_1[1] = (long)((double)((uVar1 - *param_1) * DAT_101d91638) * 1e-09);
  return param_1;
}




long * thunk_FUN_1010a0ee0(long *param_1)

{
  uint64_t uVar1;
  
  FUN_1004e3004();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_1004e3004(param_1);
  uVar1 = _mach_absolute_time();
  param_1[1] = (long)((double)((uVar1 - *param_1) * DAT_101d91638) * 1e-09);
  return param_1;
}




void FUN_1010a0f50(long *param_1)

{
  uint64_t uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = _mach_absolute_time();
  dVar2 = (double)((uVar1 - *param_1) * DAT_101d91638) * 1e-09;
  dVar3 = dVar2 - (double)param_1[1];
  param_1[1] = (long)dVar2;
  param_1[3] = (long)dVar3;
  dVar2 = (double)NEON_fminnm(dVar3,0x4000000000000000);
  param_1[2] = (long)(dVar2 * (double)param_1[4]);
  return;
}




undefined1  [16] FUN_1010a0fbc(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + 0x10);
  auVar1._8_8_ = 0;
  return auVar1;
}




undefined1  [16] FUN_1010a0fc4(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + 0x18);
  auVar1._8_8_ = 0;
  return auVar1;
}




undefined1  [16] FUN_1010a0fcc(long *param_1)

{
  uint64_t uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = _mach_absolute_time();
  auVar2._0_8_ = (double)((uVar1 - *param_1) * DAT_101d91638) * 1e-09;
  auVar2._8_8_ = 0;
  return auVar2;
}




void FUN_1010a1014(double param_1,long param_2)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  *(double *)(param_2 + 0x20) = param_1;
  return;
}




void FUN_1010a1024(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  pvVar1 = operator_new__((ulong)param_1);
  DAT_101ea5a18 = pvVar1;
  puVar2 = operator_new(0x18);
  *puVar2 = 0;
  *(void **)(puVar2 + 2) = pvVar1;
  puVar2[4] = param_1 & 0x7fffffff;
  DAT_101ea5a20 = puVar2;
  DAT_101ea5a28 = operator_new(0x20);
  *DAT_101ea5a28 = puVar2;
  DAT_101ea5a28[1] = 0;
  DAT_101ea5a28[2] = 0;
  DAT_101ea5a28[3] = 0;
  DAT_101dc07b8 = FUN_1010a0c74(DAT_101ea5a28,param_4);
  pvVar1 = operator_new(0x18040);
  DAT_101ea5a30 = FUN_1010cee6c();
  DAT_101ea5a38 = operator_new(0x10);
  *DAT_101ea5a38 = 0;
  *(undefined4 *)(DAT_101ea5a38 + 1) = 0;
  DAT_101ea5a40 = operator_new(0x8020);
  *DAT_101ea5a40 = pvVar1;
  lVar4 = 1;
  puVar3 = DAT_101ea5a40;
  do {
    puVar3 = puVar3 + 2;
    *(short *)puVar3 = (short)lVar4;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x800);
  DAT_101ea5a40[0x1002] = 0x7ff0000;
  DAT_101ea5a48 = operator_new(0x18);
  DAT_101ea5a48[2] = 0;
  DAT_101ea5a48[1] = 0;
  *DAT_101ea5a48 = DAT_101ea5a48 + 1;
  DAT_101ea5a58 = 0;
  DAT_101ea5a50 = 0;
  DAT_101ea5a68 = 0;
  DAT_101ea5a60 = 0;
  DAT_101ea5a70 = 0;
  FUN_1010a1180(param_2);
  FUN_1010a1250(param_3);
  DAT_101dc07bc = 0;
  FUN_1010a0e20(DAT_101ea5a28);
  FUN_1010a0e80(DAT_101ea5a28);
  return;
}




void FUN_1010a1180(code *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uStack_14004;
  undefined8 auStack_14000 [19];
  undefined8 auStack_13f64 [2];
  undefined1 auStack_13f50 [536];
  undefined8 auStack_13d38 [2];
  undefined4 auStack_13d28 [20282];
  
  lVar3 = 0;
  do {
    *(undefined8 *)((long)auStack_13d38 + lVar3) = 0;
    *(undefined4 *)((long)auStack_13d28 + lVar3) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3 + 8) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3 + 0x18) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3 + 0x10) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3 + 0x28) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3 + 0x20) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3 + 0x38) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3 + 0x30) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3 + 0x48) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3 + 0x40) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3 + 0x58) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3 + 0x50) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3 + 0x68) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3 + 0x60) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3 + 0x78) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3 + 0x70) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3 + 0x88) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3 + 0x80) = 0;
    *(undefined8 *)(&stack0xfffffffffffec098 + lVar3) = 0;
    *(undefined8 *)((long)auStack_14000 + lVar3 + 0x90) = 0;
    *(undefined8 *)((long)auStack_13f64 + lVar3 + 8) = 0;
    *(undefined8 *)((long)auStack_13f64 + lVar3) = 0;
    _bzero(auStack_13f50 + lVar3,0x214);
    lVar3 = lVar3 + 0x2e8;
  } while (lVar3 != 0x13fb0);
  if (param_1 != (code *)0x0) {
    (*param_1)(auStack_14000);
  }
  uStack_14004 = 0;
  uVar2 = FUN_1010a09b8(auStack_14000,DAT_101ea5a20,&uStack_14004);
  puVar1 = DAT_101ea5a38;
  *DAT_101ea5a38 = uVar2;
  *(undefined4 *)(puVar1 + 1) = uStack_14004;
  return;
}




void FUN_1010a1250(int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_1004e4bc0();
  if (iVar1 != 0) {
    pvVar2 = operator_new(0xd8);
    DAT_101dc07c0 = thunk_FUN_1004e63dc(pvVar2,1,FUN_1010a1cec,"LongRunning",1);
    thunk_FUN_1004e5088(&DAT_101dc0908,0,pvVar2,PTR_s___LongRunning_Concurrent_Queue_101867480);
    FUN_1004e55c8(&DAT_101dc0908);
    if (param_1 != 0) {
      FUN_1004e4e60(&DAT_101dc07c8,1,PTR_s___Default_Concurrent_Queue_101867478);
      FUN_1004e55c8(&DAT_101dc07c8);
    }
    FUN_1004e4e60(&DAT_101dc0a48,2,PTR_s___Update_Serial_Queue_101867470);
    return;
  }
  return;
}




void FUN_1010a132c(void)

{
  void *pvVar1;
  
  FUN_1010a1408();
  pvVar1 = DAT_101ea5a48;
  if (DAT_101ea5a48 != (void *)0x0) {
    FUN_1010a1f50(DAT_101ea5a48,*(undefined8 *)((long)DAT_101ea5a48 + 8));
    operator_delete(pvVar1);
  }
  DAT_101ea5a48 = (void *)0x0;
  if (DAT_101ea5a40 != (void *)0x0) {
    operator_delete(DAT_101ea5a40);
  }
  DAT_101ea5a40 = (void *)0x0;
  if (DAT_101ea5a38 != (void *)0x0) {
    operator_delete(DAT_101ea5a38);
  }
  DAT_101ea5a38 = (void *)0x0;
  if (DAT_101ea5a30 != (long *)0x0) {
    (**(code **)(*DAT_101ea5a30 + 8))();
  }
  DAT_101ea5a30 = (long *)0x0;
  if (DAT_101ea5a28 != 0) {
    pvVar1 = (void *)FUN_1010a0be0();
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_101ea5a20;
  DAT_101ea5a28 = 0;
  if (DAT_101ea5a20 != (void *)0x0) {
    if ((*(int *)((long)DAT_101ea5a20 + 0x10) < 0) &&
       (*(void **)((long)DAT_101ea5a20 + 8) != (void *)0x0)) {
      operator_delete__(*(void **)((long)DAT_101ea5a20 + 8));
    }
    operator_delete(pvVar1);
  }
  DAT_101ea5a20 = (void *)0x0;
  if (DAT_101ea5a18 != (void *)0x0) {
    operator_delete__(DAT_101ea5a18);
  }
  DAT_101ea5a18 = (void *)0x0;
  return;
}




void FUN_1010a1408(void)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_1004e4ecc(&DAT_101dc0a48);
  if (iVar1 != 0) {
    FUN_1004e5ff0(&DAT_101dc0a48,1);
    FUN_1004e4edc(&DAT_101dc0a48);
  }
  iVar1 = FUN_1004e4ecc(&DAT_101dc07c8);
  if (iVar1 != 0) {
    FUN_1004e4edc(&DAT_101dc07c8);
  }
  iVar1 = FUN_1004e4ecc(&DAT_101dc0908);
  if (iVar1 != 0) {
    FUN_1004e4edc(&DAT_101dc0908);
  }
  if (DAT_101dc07c0 != 0) {
    pvVar2 = (void *)thunk_FUN_1004e6660();
    operator_delete(pvVar2);
  }
  DAT_101dc07c0 = 0;
  return;
}




void FUN_1010a149c(void)

{
  DAT_101ea5a78 = *DAT_101ea5a20;
  return;
}




void FUN_1010a14b4(void)

{
  FUN_1010a0ac0(DAT_101ea5a38);
  *DAT_101ea5a20 = DAT_101ea5a78;
  return;
}




void FUN_1010a14e4(undefined1 param_1)

{
  DAT_101dc07bc = param_1;
  return;
}




undefined1 FUN_1010a14f0(void)

{
  return DAT_101dc07bc;
}




void FUN_1010a14fc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(DAT_101ea5a28 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001010a1518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_1);
    return;
  }
  return;
}




undefined8 FUN_1010a1520(void)

{
  return DAT_101ea5a28;
}




void FUN_1010a152c(ulong param_1)

{
  FUN_1010a30dc(*(undefined8 *)(*(long *)(DAT_101ea5a28 + 0x10) + (param_1 & 0xffffffff) * 8));
  return;
}




void FUN_1010a1540(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_1010a04dc(*DAT_101ea5a38 + (param_1 & 0xffffffff) * 0x2e8);
  lVar1 = DAT_101ea5a80;
  if (lVar2 == 0) {
    return;
  }
  if (param_2 == 0) {
    if (DAT_101ea5a80 == 0) goto LAB_1010a15a4;
    *(long *)(lVar2 + 0x10) = DAT_101ea5a80;
    lVar3 = *(long *)(lVar1 + 0x18);
    *(long *)(lVar1 + 0x18) = lVar2;
  }
  else {
    *(long *)(lVar2 + 0x10) = param_2;
    lVar3 = *(long *)(param_2 + 0x18);
    *(long *)(param_2 + 0x18) = lVar2;
  }
  if (lVar3 != 0) {
    *(long *)(lVar2 + 0x20) = lVar3;
  }
LAB_1010a15a4:
  if ((DAT_101ea5a88 != 0) && (DAT_101872e3c < DAT_101872e40)) {
    *(long *)(DAT_101ea5a88 + (long)DAT_101872e3c * 8) = lVar2;
    DAT_101872e3c = DAT_101872e3c + 1;
  }
  return;
}




undefined4 FUN_1010a15e0(undefined8 param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 local_68;
  
  lVar4 = DAT_101ea5a88;
  lVar1 = DAT_101ea5a80;
  iVar3 = DAT_101872e40;
  uVar2 = DAT_101872e3c;
  if (param_4 != 0) {
    DAT_101ea5a80 = param_4;
  }
  if (param_2 != 0 && 0 < param_3) {
    DAT_101872e3c = 0;
    DAT_101872e40 = param_3;
    DAT_101ea5a88 = param_2;
  }
  local_68 = 0;
  lVar6 = FUN_1010a3114(*(undefined8 *)(*(long *)(DAT_101ea5a28 + 0x10) + (ulong)DAT_101dc07b8 * 8),
                        param_1,&local_68);
  if (lVar6 != 0) {
    FUN_1010a16e4(DAT_101ea5a48,local_68,lVar6);
  }
  if (param_4 != 0) {
    DAT_101ea5a80 = lVar1;
  }
  uVar5 = DAT_101872e3c;
  if (param_2 == 0 || param_3 < 1) {
    uVar2 = DAT_101872e3c;
    iVar3 = DAT_101872e40;
    lVar4 = DAT_101ea5a88;
    uVar5 = 0;
  }
  DAT_101ea5a88 = lVar4;
  DAT_101872e40 = iVar3;
  DAT_101872e3c = uVar2;
  return uVar5;
}




undefined8 FUN_1010a16d8(void)

{
  return DAT_101ea5a48;
}




void FUN_1010a16e4(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  
  plVar5 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar5;
  if (plVar4 != (long *)0x0) {
    uVar1 = *(uint *)(param_2 + 4);
    plVar3 = plVar5;
    do {
      if (*(uint *)(plVar4 + 4) >= uVar1) {
        plVar3 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar1];
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar5) && (*(uint *)(plVar3 + 4) <= uVar1)) {
                    /* WARNING: Could not recover jumptable at 0x0001010a17e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar3[5])(param_1,param_2,param_3);
      return;
    }
  }
  lVar2 = FUN_1010a39d4(param_2);
  if (((lVar2 != 0) && (lVar2 = FUN_1010a39d4(*(undefined8 *)(lVar2 + 0x10)), lVar2 != 0)) &&
     (plVar4 = (long *)*plVar5, plVar4 != (long *)0x0)) {
    lVar2 = *(long *)(lVar2 + 0x10);
    uVar1 = *(uint *)(lVar2 + 4);
    plVar3 = plVar5;
    do {
      if (*(uint *)(plVar4 + 4) >= uVar1) {
        plVar3 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar1];
    } while (plVar4 != (long *)0x0);
    if (((plVar3 != plVar5) && (*(uint *)(plVar3 + 4) <= uVar1)) && (*param_3 != 0)) {
      pcVar6 = (code *)plVar3[5];
      do {
        param_3 = param_3 + 1;
        (*pcVar6)(param_1,lVar2);
      } while (*param_3 != 0);
    }
  }
  return;
}




void FUN_1010a17e4(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *DAT_101ea5a38 + (ulong)*(uint *)(*(long *)(param_1 + 8) + 0xa4) * 0x2e8;
  uVar1 = 0;
  if ((ulong)*(uint *)(lVar2 + 0xa8) != 0) {
    uVar1 = (param_1 - *(long *)(lVar2 + 0x2c8)) / (long)(ulong)*(uint *)(lVar2 + 0xa8);
  }
  uVar3 = uVar1 >> 6 & 0x3ffffff;
  *(ulong *)(*(long *)(lVar2 + 0x2e0) + uVar3 * 8) =
       *(ulong *)(*(long *)(lVar2 + 0x2e0) + uVar3 * 8) | 1L << (uVar1 & 0x3f);
  return;
}




void FUN_1010a1830(long param_1)

{
  FUN_1010a00bc(*DAT_101ea5a38 + (ulong)*(uint *)(*(long *)(param_1 + 8) + 0xa4) * 0x2e8,param_1);
  return;
}




void FUN_1010a1854(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long alStack_30 [2];
  
  alStack_30[1] = *(long *)PTR____stack_chk_guard_101444218;
  lVar3 = *DAT_101ea5a38 + (param_1 & 0xffffffff) * 0x2e8;
  uVar2 = *(ushort *)(lVar3 + 0x2da) & 0x7fff;
  plVar7 = (long *)((long)alStack_30 - ((ulong)(uVar2 * 8 + 0xf) & 0x7fff0));
  uVar2 = FUN_1010a0830(lVar3,plVar7,uVar2,1);
  if (uVar2 != 0) {
    lVar3 = *DAT_101ea5a38;
    uVar4 = (ulong)uVar2;
    do {
      lVar6 = lVar3 + (ulong)*(uint *)(*(long *)(*plVar7 + 8) + 0xa4) * 0x2e8;
      uVar1 = 0;
      if ((ulong)*(uint *)(lVar6 + 0xa8) != 0) {
        uVar1 = (*plVar7 - *(long *)(lVar6 + 0x2c8)) / (long)(ulong)*(uint *)(lVar6 + 0xa8);
      }
      uVar5 = uVar1 >> 6 & 0x3ffffff;
      *(ulong *)(*(long *)(lVar6 + 0x2e0) + uVar5 * 8) =
           *(ulong *)(*(long *)(lVar6 + 0x2e0) + uVar5 * 8) | 1L << (uVar1 & 0x3f);
      uVar4 = uVar4 - 1;
      plVar7 = plVar7 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == alStack_30[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




ushort FUN_1010a1938(ulong param_1)

{
  return *(ushort *)(*DAT_101ea5a38 + (param_1 & 0xffffffff) * 0x2e8 + 0x2da) & 0x7fff;
}




void FUN_1010a1958(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  FUN_1010a0830(*DAT_101ea5a38 + (param_3 & 0xffffffff) * 0x2e8,param_1,param_2);
  return;
}




void FUN_1010a197c(ulong param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long alStack_40 [2];
  
  alStack_40[1] = *(long *)PTR____stack_chk_guard_101444218;
  lVar2 = *DAT_101ea5a38 + (param_1 & 0xffffffff) * 0x2e8;
  uVar1 = *(ushort *)(lVar2 + 0x2da) & 0x7fff;
  plVar3 = (long *)((long)alStack_40 - ((ulong)(uVar1 * 8 + 0xf) & 0x7fff0));
  uVar1 = FUN_1010a0830(lVar2,plVar3,uVar1,1);
  if (uVar1 != 0) {
    uVar4 = (ulong)uVar1;
    do {
      FUN_1010a00bc(*DAT_101ea5a38 + (ulong)*(uint *)(*(long *)(*plVar3 + 8) + 0xa4) * 0x2e8);
      uVar4 = uVar4 - 1;
      plVar3 = plVar3 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == alStack_40[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010a1a40(undefined4 param_1,undefined8 param_2)

{
  FUN_1010a0b40(DAT_101ea5a38,2);
  if (DAT_101dc07bc == '\0') {
    DAT_101dc07b0 = (undefined4)param_2;
    DAT_101dc07b4 = param_1;
    if (DAT_101ea5a50 != (code *)0x0) {
      (*DAT_101ea5a50)(param_2,0);
    }
    FUN_1010a0b40(DAT_101ea5a38,3);
    if (DAT_101ea5a58 != (code *)0x0) {
      (*DAT_101ea5a58)(param_2,1);
    }
    FUN_1010a0b40(DAT_101ea5a38,4);
    if (DAT_101ea5a60 != (code *)0x0) {
      (*DAT_101ea5a60)(param_2,2);
    }
    FUN_1010a1b40();
    FUN_1010a0b40(DAT_101ea5a38,5);
    if (DAT_101ea5a68 != (code *)0x0) {
      (*DAT_101ea5a68)(param_2,3);
    }
    if (DAT_101ea5a70 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001010a1b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_101ea5a70)(param_2,4);
      return;
    }
  }
  return;
}




void FUN_1010a1b40(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e4ecc(&DAT_101dc07c8);
  if (iVar1 != 0) {
    FUN_1004e586c(&DAT_101dc07c8,0,0);
    return;
  }
  return;
}




void FUN_1010a1b78(void)

{
  FUN_1010a0b40(DAT_101ea5a38,6);
  return;
}




void FUN_1010a1b88(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e4ecc(&DAT_101dc07c8);
  if (iVar1 != 0) {
    FUN_1004e51fc(&DAT_101dc07c8);
    return;
  }
  return;
}




void FUN_1010a1bb8(uint param_1,undefined8 param_2)

{
  (&DAT_101ea5a50)[param_1] = param_2;
  return;
}




void FUN_1010a1bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1010a1be4(DAT_101ea5a40,param_1,param_2,param_3,param_4);
  return;
}




void FUN_1010a1be4(undefined8 *param_1,undefined8 *param_2,uint param_3,undefined2 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  ushort *puVar3;
  ushort auStack_50 [4];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
  puVar3 = (ushort *)((long)auStack_50 - ((uVar2 & 0xffffffff) * 2 + 0xf & 0x3fffffff0));
  uVar1 = (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,puVar3,uVar2,param_4,param_5);
  if (uVar1 <= param_3) {
    param_3 = uVar1;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *param_2 = param_1[(ulong)*puVar3 * 2 + 3];
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




undefined8 FUN_1010a1cc8(void)

{
  return DAT_101ea5a40;
}




undefined4 FUN_1010a1cd4(void)

{
  return DAT_101dc07b0;
}




undefined4 FUN_1010a1ce0(void)

{
  return DAT_101dc07b4;
}




void FUN_1010a1cec(void)

{
  return;
}




void FUN_1010a1cf0(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e4ecc(&DAT_101dc0a48);
  if (iVar1 != 0) {
    FUN_1004e5ff0(&DAT_101dc0a48,0);
    return;
  }
  return;
}




void FUN_1010a1d24(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e4ecc(&DAT_101dc0a48);
  if (iVar1 != 0) {
    FUN_1004e51c4(&DAT_101dc0a48);
    return;
  }
  return;
}




void FUN_1010a1d54(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 local_20 [2];
  undefined8 local_18;
  
  local_20[0] = *(undefined4 *)(param_2 + 4);
  local_18 = param_3;
  FUN_1010a200c(param_1,local_20,local_20);
  return;
}




void FUN_1010a1d84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10182e2b0;
  *(int *)(param_1 + 1) = DAT_101872e48;
  DAT_101872e48 = DAT_101872e48 + 1;
  return;
}




void FUN_1010a1da8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10182e2b0;
  *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
  return;
}




void FUN_1010a1dc4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010a1dc8);
  (*pcVar1)();
}




void FUN_1010a1dc8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010a1dcc);
  (*pcVar1)();
}




uint FUN_1010a1dcc(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort *puVar3;
  
  uVar2 = *(ushort *)(param_1 + 0x1002);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(param_1 + 2 + (ulong)uVar2 * 2);
    if (uVar2 == *(ushort *)((long)param_1 + 0x8012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(param_1 + 0x1002) = uVar2;
    *(int *)((long)param_1 + 0x8014) = *(int *)((long)param_1 + 0x8014) + 1;
  }
  uVar1 = (uint)((int)puVar3 - (int)(param_1 + 2)) >> 4 & 0xffff;
  uVar2 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2,param_3,uVar1);
  *puVar3 = 0xffff;
  puVar3[1] = uVar2;
  *(undefined8 *)(puVar3 + 4) = param_4;
  return uVar1;
}




void FUN_1010a1e70(undefined8 *param_1,ulong param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  undefined8 *puVar4;
  int iVar5;
  
  puVar4 = param_1 + 2;
  (**(code **)(*(long *)*param_1 + 0x18))
            ((long *)*param_1,*(undefined2 *)((long)(puVar4 + (param_2 & 0xffffffff) * 2) + 2));
  iVar5 = (int)(puVar4 + (param_2 & 0xffffffff) * 2);
  if (*(short *)(param_1 + 0x1002) == -1) {
    sVar3 = (short)((uint)(iVar5 - (int)puVar4) >> 4);
    *(short *)((long)param_1 + 0x8012) = sVar3;
    *(short *)(param_1 + 0x1002) = sVar3;
  }
  else {
    uVar1 = *(ushort *)((long)param_1 + 0x8012);
    uVar2 = (undefined2)((uint)(iVar5 - (int)puVar4) >> 4);
    *(undefined2 *)((long)param_1 + 0x8012) = uVar2;
    *(undefined2 *)(puVar4 + (ulong)uVar1 * 2) = uVar2;
  }
  *(int *)((long)param_1 + 0x8014) = *(int *)((long)param_1 + 0x8014) + -1;
  return;
}




void FUN_1010a1ef8(undefined8 *param_1,ulong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001010a1f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x20))
            ((long *)*param_1,*(undefined2 *)((long)param_1 + (param_2 & 0xffffffff) * 0x10 + 0x12))
  ;
  return;
}




void FUN_1010a1f10(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1010a1f10(param_1,*param_2);
    FUN_1010a1f10(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_1010a1f50(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1010a1f50(param_1,*param_2);
    FUN_1010a1f50(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_1010a1f90(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




undefined1  [16] FUN_1010a200c(long param_1,uint *param_2,undefined8 *param_3)

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
    puVar4 = (undefined8 *)(param_1 + 8);
    puVar2 = (undefined8 *)*puVar3;
    do {
      while (puVar3 = puVar2, *param_2 < *(uint *)(puVar3 + 4)) {
        puVar4 = puVar3;
        puVar2 = (undefined8 *)*puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_1010a2080;
      }
      if (*param_2 <= *(uint *)(puVar3 + 4)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_1010a2080:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x30);
    uVar6 = *param_3;
    *(undefined8 *)((long)pvVar5 + 0x28) = param_3[1];
    *(undefined8 *)((long)pvVar5 + 0x20) = uVar6;
    FUN_1010a20d4(param_1,puVar3,puVar4,pvVar5);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar5;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_1010a20d4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_1010a2128(void)

{
  if ((DAT_101872e80 & 1) == 0) {
    DAT_101872e50 = 0;
    DAT_101872e54 = 0;
    DAT_101872e58 = PTR_DAT_1018730f0;
    DAT_101872e60 = 0;
    DAT_101872e64 = 4;
    DAT_101872e68 = PTR_DAT_1018730f0;
    DAT_101872e88 = DAT_101872e88 + 3;
    DAT_101872e70 = 0;
    DAT_101872e74 = 8;
    DAT_101872e78 = PTR_DAT_1018730f0;
    DAT_101872e80 = 1;
  }
  return;
}




void FUN_1010a2190(void)

{
  long lVar1;
  
  if ((DAT_101872e90 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101872c18,1,"Vector3",0xc,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101872e50;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101872e88;
    DAT_101872e90 = 1;
  }
  return;
}




void FUN_1010a21f0(void)

{
  long lVar1;
  
  if ((DAT_101872e98 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101872c40,3,"Vector3*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101872c18;
    DAT_101872e98 = 1;
  }
  return;
}




void FUN_1010a2248(void)

{
  long lVar1;
  
  if ((DAT_101872ea0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101872c58,3,"Vector3**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101872c40;
    DAT_101872ea0 = 1;
  }
  return;
}




void FUN_1010a22a0(void)

{
  if ((DAT_101872ed8 & 1) == 0) {
    DAT_101872ea8 = 0;
    DAT_101872eac = 0;
    DAT_101872eb0 = PTR_DAT_101872c38;
    DAT_101872eb8 = 0;
    DAT_101872ebc = 0xc;
    DAT_101872ec0 = PTR_DAT_101872c38;
    DAT_101872ee0 = DAT_101872ee0 + 3;
    DAT_101872ec8 = 0;
    DAT_101872ecc = 0x18;
    DAT_101872ed0 = PTR_DAT_101872c38;
    DAT_101872ed8 = 1;
  }
  return;
}




void FUN_1010a2304(void)

{
  long lVar1;
  
  if ((DAT_101872ee8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101872c78,1,"Transform",0x24,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101872ea8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101872ee0;
    DAT_101872ee8 = 1;
  }
  return;
}




void FUN_1010a2364(void)

{
  long lVar1;
  
  if ((DAT_101872ef0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101872ca0,3,"Transform*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101872c78;
    DAT_101872ef0 = 1;
  }
  return;
}




void FUN_1010a23bc(void)

{
  long lVar1;
  
  if ((DAT_101872ef8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101872cb8,3,"Transform**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101872ca0;
    DAT_101872ef8 = 1;
  }
  return;
}




void FUN_1010a2414(void)

{
  if ((DAT_101872f20 & 1) == 0) {
    DAT_101872f00 = 0;
    DAT_101872f04 = 0;
    DAT_101872f08 = PTR_DAT_101872c98;
    DAT_101872f28 = DAT_101872f28 + 2;
    DAT_101872f10 = 0;
    DAT_101872f14 = 0x28;
    DAT_101872f18 = PTR_DAT_101873138;
    DAT_101872f20 = 1;
  }
  return;
}




void FUN_1010a2474(void)

{
  long lVar1;
  
  if ((DAT_101872f30 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101872cd0,1,"MeshPlacement",0x30,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101872f00;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101872f28;
    DAT_101872f30 = 1;
  }
  return;
}




void FUN_1010a24d4(void)

{
  long lVar1;
  
  if ((DAT_101872f38 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101872cf0,3,"MeshPlacement*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101872cd0;
    DAT_101872f38 = 1;
  }
  return;
}




void FUN_1010a252c(void)

{
  long lVar1;
  
  if ((DAT_101872f40 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101872d08,3,"MeshPlacement**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101872cf0;
    DAT_101872f40 = 1;
  }
  return;
}




void FUN_1010a2584(void)

{
  if ((DAT_101872f68 & 1) == 0) {
    DAT_101872f48 = 0;
    DAT_101872f4c = 0;
    DAT_101872f50 = PTR_DAT_1018730f0;
    DAT_101872f70 = DAT_101872f70 + 2;
    DAT_101872f58 = 0;
    DAT_101872f5c = 4;
    DAT_101872f60 = PTR_DAT_1018730f0;
    DAT_101872f68 = 1;
  }
  return;
}




void FUN_1010a25dc(void)

{
  long lVar1;
  
  if ((DAT_101872f78 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101872d20,1,"Vector2",8,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101872f48;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101872f70;
    DAT_101872f78 = 1;
  }
  return;
}




void FUN_1010a263c(void)

{
  long lVar1;
  
  if ((DAT_101872f80 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101872d48,3,"Vector2*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101872d20;
    DAT_101872f80 = 1;
  }
  return;
}




void FUN_1010a2694(void)

{
  long lVar1;
  
  if ((DAT_101872f88 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101872d60,3,"Vector2**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101872d48;
    DAT_101872f88 = 1;
  }
  return;
}




void FUN_1010a26ec(void)

{
  if ((DAT_101872fd0 & 1) == 0) {
    DAT_101872f90 = 0;
    DAT_101872f94 = 0;
    DAT_101872f98 = PTR_DAT_1018730f0;
    DAT_101872fa0 = 0;
    DAT_101872fa4 = 4;
    DAT_101872fa8 = PTR_DAT_1018730f0;
    DAT_101872fb0 = 0;
    DAT_101872fb4 = 8;
    DAT_101872fb8 = PTR_DAT_1018730f0;
    DAT_101872fd8 = DAT_101872fd8 + 4;
    DAT_101872fc0 = 0;
    DAT_101872fc4 = 0xc;
    DAT_101872fc8 = PTR_DAT_1018730f0;
    DAT_101872fd0 = 1;
  }
  return;
}




void FUN_1010a2764(void)

{
  long lVar1;
  
  if ((DAT_101872fe0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101872d80,1,"Color",0x10,4);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101872f90;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101872fd8;
    DAT_101872fe0 = 1;
  }
  return;
}




void FUN_1010a27c4(void)

{
  long lVar1;
  
  if ((DAT_101872fe8 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101872da8,3,"Color*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101872d80;
    DAT_101872fe8 = 1;
  }
  return;
}




void FUN_1010a281c(void)

{
  long lVar1;
  
  if ((DAT_101872ff0 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101872dc0,3,"Color**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101872da8;
    DAT_101872ff0 = 1;
  }
  return;
}




void FUN_1010a2874(void)

{
  if ((DAT_101873038 & 1) == 0) {
    DAT_101872ff8 = 0;
    DAT_101872ffc = 0;
    DAT_101873000 = PTR_DAT_101872c98;
    DAT_101873008 = 0;
    DAT_10187300c = 0x24;
    DAT_101873010 = PTR_DAT_101872da0;
    DAT_101873018 = 0;
    DAT_10187301c = 0x34;
    DAT_101873020 = PTR_DAT_1018730f0;
    DAT_101873040 = DAT_101873040 + 4;
    DAT_101873028 = 0;
    DAT_10187302c = 0x38;
    DAT_101873030 = PTR_DAT_101873138;
    DAT_101873038 = 1;
  }
  return;
}




void FUN_1010a2908(void)

{
  long lVar1;
  
  if ((DAT_101873048 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101872dd8,1,"LightPlacement",0x40,8);
    *(undefined4 **)(lVar1 + 0x10) = &DAT_101872ff8;
    *(undefined4 **)(lVar1 + 0x18) = &DAT_101873040;
    DAT_101873048 = 1;
  }
  return;
}




void FUN_1010a2968(void)

{
  long lVar1;
  
  if ((DAT_101873050 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101872e00,3,"LightPlacement*",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101872dd8;
    DAT_101873050 = 1;
  }
  return;
}




void FUN_1010a29c0(void)

{
  long lVar1;
  
  if ((DAT_101873058 & 1) == 0) {
    lVar1 = FUN_1010a3954(&DAT_101872e18,3,"LightPlacement**",8,8);
    *(undefined **)(lVar1 + 0x10) = &DAT_101872e00;
    DAT_101873058 = 1;
  }
  return;
}




void FUN_1010a2a18(void)

{
  thunk_FUN_1004e4dcc(&DAT_101dc07c8);
  ___cxa_atexit(thunk_FUN_1004e4e84,&DAT_101dc07c8,0x100000000);
  thunk_FUN_1004e4dcc(&DAT_101dc0908);
  ___cxa_atexit(thunk_FUN_1004e4e84,&DAT_101dc0908,0x100000000);
  thunk_FUN_1004e4dcc(&DAT_101dc0a48);
  ___cxa_atexit(thunk_FUN_1004e4e84,&DAT_101dc0a48,0x100000000);
  return;
}




void FUN_1010a2aa4(undefined8 *param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)param_1[(long)*(int *)(param_1 + 0x81) * 2 + 1];
  if (plVar6 == (long *)0x0) {
    lVar2 = FUN_1010a2bb4(*param_1,param_2);
  }
  else {
    puVar3 = (uint *)param_1[(long)*(int *)(param_1 + 0x81) * 2 + 2];
    if ((*puVar3 & 7) == 3) {
      lVar2 = FUN_1010a2bb4(*param_1,param_2);
      *plVar6 = lVar2;
    }
    else {
      if ((*puVar3 & 7) != 1) {
        return;
      }
      uVar5 = (ulong)**(uint **)(puVar3 + 6);
      if (**(uint **)(puVar3 + 6) == 0) {
        return;
      }
      plVar4 = (long *)(*(long *)(puVar3 + 4) + 8);
      while ((int)plVar4[-1] != param_3) {
        plVar4 = plVar4 + 2;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) {
          return;
        }
      }
      if (*(int *)(*plVar4 + 4) != *(int *)(param_2 + 4)) {
        return;
      }
      lVar2 = (long)plVar6 + (ulong)*(ushort *)((long)plVar4 + -4);
    }
  }
  if (lVar2 != 0) {
    if (param_4 != 0) {
      FUN_1010a2c54(*param_1,param_4,lVar2,param_2);
    }
    lVar1 = (long)*(int *)(param_1 + 0x81) + 1;
    *(int *)(param_1 + 0x81) = (int)lVar1;
    param_1[lVar1 * 2 + 1] = lVar2;
    param_1[lVar1 * 2 + 2] = param_2;
  }
  return;
}




void * FUN_1010a2bb4(uint *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  
  uVar2 = (ulong)(*param_2 >> 0x11) & 0xf;
  pvVar4 = (void *)(*(long *)(param_1 + 2) + (ulong)*param_1);
  uVar3 = uVar2 - 1;
  uVar1 = *param_1 + (*param_2 >> 3 & 0x3fff);
  if ((uVar3 & (ulong)pvVar4) == 0) {
    if (uVar1 < (param_1[4] & 0x7fffffff)) {
      *param_1 = uVar1;
    }
    else {
      pvVar4 = (void *)0x0;
    }
  }
  else {
    uVar1 = ((int)uVar2 + uVar1) - 1;
    if (uVar1 < (param_1[4] & 0x7fffffff)) {
      *param_1 = uVar1;
      uVar3 = uVar3 + (long)pvVar4;
    }
    pvVar4 = (void *)(uVar3 & -uVar2);
  }
  uVar3 = (ulong)(*param_2 >> 3) & 0x3fff;
  if ((int)uVar3 != 0) {
    _bzero(pvVar4,uVar3);
  }
  return pvVar4;
}




void FUN_1010a2c54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar1 = FUN_1004d2524(param_2);
  local_48[0] = FUN_100015208(param_2,uVar1,0x12345678);
  local_40 = param_3;
  uStack_38 = param_4;
  FUN_1010a39e8(param_1 + 0x18,local_48,local_48);
  return;
}




void FUN_1010a2cc0(undefined8 *param_1,uint *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_1010a2d30(*param_1,(*param_2 >> 3 & 0x3fff) * (param_3 + 1),*param_2 >> 0x11 & 0xf);
  *(undefined8 *)(lVar3 + (ulong)param_3 * 8) = 0;
  iVar2 = *(int *)(param_1 + 0x81);
  *(long *)param_1[(long)iVar2 * 2 + 1] = lVar3;
  lVar1 = (long)iVar2 + 1;
  *(int *)(param_1 + 0x81) = (int)lVar1;
  param_1[lVar1 * 2 + 1] = lVar3;
  (param_1 + lVar1 * 2 + 1)[1] = param_2;
  return;
}




ulong FUN_1010a2d30(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(long *)(param_1 + 2) + (ulong)*param_1;
  uVar3 = (ulong)param_3 - 1;
  uVar1 = *param_1 + param_2;
  if ((uVar3 & uVar2) != 0) {
    uVar1 = (param_3 + uVar1) - 1;
    if (uVar1 < (param_1[4] & 0x7fffffff)) {
      *param_1 = uVar1;
      uVar3 = uVar3 + uVar2;
    }
    return uVar3 & -(ulong)param_3;
  }
  if (uVar1 < (param_1[4] & 0x7fffffff)) {
    *param_1 = uVar1;
    return uVar2;
  }
  return 0;
}




void FUN_1010a2da0(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  
  param_1 = param_1 + (long)*(int *)(param_1 + 0x408) * 0x10;
  puVar3 = *(uint **)(param_1 + 0x10);
  if ((*(uint *)(param_2 + 4) == puVar3[1]) && (uVar1 = *puVar3 >> 0x15, uVar1 < 9)) {
    puVar2 = *(undefined8 **)(param_1 + 8);
    switch(uVar1) {
    default:
      *(undefined1 *)puVar2 = *(undefined1 *)param_3;
      break;
    case 2:
    case 3:
      *(undefined2 *)puVar2 = *(undefined2 *)param_3;
      return;
    case 4:
    case 5:
      *(undefined4 *)puVar2 = *(undefined4 *)param_3;
      return;
    case 6:
      *(undefined4 *)puVar2 = *(undefined4 *)param_3;
      return;
    case 7:
      *puVar2 = *param_3;
      return;
    }
  }
  return;
}




void FUN_1010a2e24(undefined8 *param_1,long param_2,undefined1 *param_3,uint param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  puVar1 = (undefined1 *)
           FUN_1010a2d30(*param_1,param_4 + 1,**(uint **)(param_2 + 0x10) >> 0x11 & 0xf);
  puVar2 = puVar1;
  uVar3 = (ulong)param_4;
  if (param_4 != 0) {
    do {
      *puVar2 = *param_3;
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + 1;
      param_3 = param_3 + 1;
    } while (uVar3 != 0);
  }
  puVar1[param_4] = 0;
  *(undefined1 **)param_1[(long)*(int *)(param_1 + 0x81) * 2 + 1] = puVar1;
  return;
}




void FUN_1010a2e9c(long param_1,uint param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int *piVar9;
  ulong uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  ulong local_158 [32];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  uVar11 = *(uint *)(param_1 + 4);
  if (7 < uVar11 && uVar11 < param_2) {
    piVar1 = (int *)(param_1 + (ulong)param_2);
    piVar9 = (int *)(param_1 + (ulong)uVar11);
    if ((int *)((long)piVar9 + (ulong)(uint)piVar9[1]) <= piVar1) {
      uVar11 = 0;
      piVar14 = (int *)0x0;
      piVar12 = (int *)0x0;
      do {
        iVar3 = *piVar9;
        piVar13 = piVar12;
        if (iVar3 == 0x424d5953) {
          if (uVar11 < 0x20) {
            local_158[uVar11] = (ulong)piVar9;
            uVar11 = uVar11 + 1;
          }
        }
        else {
          piVar2 = piVar14;
          if (iVar3 == 0x54534e49) {
            piVar2 = piVar9;
          }
          piVar13 = piVar9;
          if (iVar3 != 0x48435450) {
            piVar13 = piVar12;
            piVar14 = piVar2;
          }
        }
        uVar4 = piVar9[1];
      } while (((7 < uVar4) &&
               (piVar2 = (int *)((long)piVar9 + (ulong)uVar4),
               (long)(ulong)uVar4 <= (long)piVar1 - (long)piVar9 && piVar2 < piVar1)) &&
              (piVar9 = piVar2, piVar12 = piVar13,
              (int *)((long)piVar2 + (ulong)(uint)piVar2[1]) <= piVar1));
      if ((piVar14 != (int *)0x0) && (piVar13 != (int *)0x0)) {
        pvVar5 = (void *)FUN_1010a2d30(param_3,piVar14[1] + -8,0x10);
        _memmove(pvVar5,piVar14 + 2,(ulong)(piVar14[1] - 8));
        if (*(byte *)(param_1 + 9) - 1 < 0xf) {
          FUN_1010b8c4c(pvVar5,piVar14[1] + -8,
                        *(undefined4 *)(&DAT_101873140 + (ulong)*(byte *)(param_1 + 9) * 4),
                        piVar14[1] + -8);
        }
        iVar3 = piVar13[2];
        if (iVar3 != 0) {
          iVar8 = 0;
          do {
            uVar10 = *(ulong *)(piVar13 + (long)iVar8 * 2 + 4);
            if (uVar10 >> 0x20 != 0 || (int)uVar10 != 0) {
              *(ulong *)((long)pvVar5 + (uVar10 & 0xffffffff)) = (long)pvVar5 + (uVar10 >> 0x20);
            }
            iVar8 = iVar8 + 1;
          } while (iVar3 != iVar8);
        }
        if (uVar11 != 0) {
          uVar10 = 0;
          do {
            if (DAT_101dc0b90 != 0) {
              uVar7 = local_158[uVar10];
              lVar6 = DAT_101dc0b90;
              do {
                if (*(int *)(lVar6 + 4) == *(int *)(uVar7 + 0xc)) {
                  FUN_1010a2c54(param_3,uVar7 + 0x10,(long)pvVar5 + (ulong)*(uint *)(uVar7 + 8));
                  break;
                }
                lVar6 = *(long *)(lVar6 + 8);
              } while (lVar6 != 0);
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar11);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1010a30b8(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = param_3;
  param_1[4] = param_2 & 0x7fffffff;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 **)(param_1 + 6) = param_1 + 8;
  return;
}




void FUN_1010a30dc(undefined4 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  puVar1 = (undefined8 *)(param_1 + 8);
  FUN_1010a1f10(param_1 + 6,*puVar1);
  *(undefined8 **)(param_1 + 6) = puVar1;
  *(undefined8 *)(param_1 + 10) = 0;
  *puVar1 = 0;
  return;
}




long FUN_1010a3114(long param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  uVar1 = FUN_1004d2524(param_2);
  uVar2 = FUN_100015208(param_2,uVar1,0x12345678);
  plVar5 = (long *)(param_1 + 0x20);
  plVar4 = (long *)*plVar5;
  plVar3 = plVar5;
  if (plVar4 != (long *)0x0) {
    do {
      if (*(uint *)(plVar4 + 4) >= uVar2) {
        plVar3 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar2];
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar5) && (*(uint *)(plVar3 + 4) <= uVar2)) {
      if (param_3 != (long *)0x0) {
        *param_3 = plVar3[6];
      }
      return plVar3[5];
    }
  }
  return 0;
}




undefined4 FUN_1010a31ac(undefined4 *param_1)

{
  return *param_1;
}




uint FUN_1010a31b4(long param_1)

{
  return *(uint *)(param_1 + 0x10) & 0x7fffffff;
}




void FUN_1010a31c0(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  param_1[0x82] = 0;
  return;
}




void FUN_1010a31d4(long param_1,long param_2)

{
  *(long *)(param_1 + 0x410) = param_2;
  while (param_2 != 0) {
    FUN_1010a3208(param_1);
    param_2 = *(long *)(param_1 + 0x410);
  }
  return;
}




void FUN_1010a3208(long param_1)

{
  int iVar1;
  char acStack_38 [16];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  _sscanf(*(char **)(param_1 + 0x410),"%s ");
  iVar1 = _strcmp(acStack_38,"TOK_ATOM");
  if (iVar1 == 0) {
    FUN_1010a32f4(param_1);
  }
  else {
    iVar1 = _strcmp(acStack_38,"TOK_RAW");
    if (iVar1 == 0) {
      FUN_1010a34b0(param_1);
    }
    else {
      iVar1 = _strcmp(acStack_38,"TOK_TYPE");
      if (iVar1 == 0) {
        FUN_1010a3658(param_1);
      }
      else {
        iVar1 = _strcmp(acStack_38,"TOK_ARRAY");
        if (iVar1 == 0) {
          FUN_1010a37c0(param_1);
        }
        else {
          *(undefined8 *)(param_1 + 0x410) = 0;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010a32f4(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint *puVar5;
  double dVar6;
  double local_d0;
  char acStack_c8 [32];
  char local_a8 [64];
  undefined1 auStack_68 [64];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  _sscanf(*(char **)(param_1 + 0x410),"TOK_ATOM typeinfo=%s field=%s value=%s");
  if (*(long *)(param_1 + 0x410) != 0) {
    pcVar4 = _strstr((char *)(*(long *)(param_1 + 0x410) + 1),"TOK_");
    *(char **)(param_1 + 0x410) = pcVar4;
  }
  uVar1 = FUN_1004d2524(auStack_68);
  uVar2 = FUN_100015208(auStack_68,uVar1,0x12345678);
  for (puVar5 = DAT_101dc0b90; (puVar5 != (uint *)0x0 && (puVar5[1] != uVar2));
      puVar5 = *(uint **)(puVar5 + 2)) {
  }
  if (local_a8[0] == '!') {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_1004d2524(local_a8);
    uVar2 = FUN_100015208(local_a8,uVar1,0x12345678);
    uVar2 = uVar2 & 0xffffff;
  }
  FUN_1010a2aa4(param_1,puVar5,uVar2,0);
  switch(*puVar5 >> 0x15) {
  case 0:
  case 1:
    iVar3 = _atoi(acStack_c8);
    local_d0 = (double)CONCAT71(local_d0._1_7_,(char)iVar3);
    break;
  case 2:
  case 3:
    iVar3 = _atoi(acStack_c8);
    local_d0 = (double)CONCAT62(local_d0._2_6_,(short)iVar3);
    break;
  case 4:
  case 5:
    iVar3 = _atoi(acStack_c8);
    local_d0 = (double)CONCAT44(local_d0._4_4_,iVar3);
    break;
  case 6:
    dVar6 = _atof(acStack_c8);
    local_d0 = (double)CONCAT44(local_d0._4_4_,(float)dVar6);
    break;
  case 7:
    local_d0 = _atof(acStack_c8);
    break;
  case 8:
    iVar3 = _atoi(acStack_c8);
    local_d0 = (double)CONCAT71(local_d0._1_7_,iVar3 != 0);
    break;
  default:
    goto switchD_1010a33fc_default;
  }
  FUN_1010a2da0(param_1,puVar5,&local_d0);
switchD_1010a33fc_default:
  *(int *)(param_1 + 0x408) = *(int *)(param_1 + 0x408) + -1;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010a34b0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  undefined4 local_ac;
  char local_a8 [64];
  undefined1 auStack_68 [64];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  _sscanf(*(char **)(param_1 + 0x410),"TOK_RAW typeinfo=%s field=%s bytes=%d");
  uVar1 = FUN_1004d2524(auStack_68);
  iVar2 = FUN_100015208(auStack_68,uVar1,0x12345678);
  for (lVar5 = DAT_101dc0b90; (lVar5 != 0 && (*(int *)(lVar5 + 4) != iVar2));
      lVar5 = *(long *)(lVar5 + 8)) {
  }
  if (local_a8[0] == '!') {
    uVar3 = 0;
  }
  else {
    uVar1 = FUN_1004d2524(local_a8);
    uVar3 = FUN_100015208(local_a8,uVar1,0x12345678);
    uVar3 = uVar3 & 0xffffff;
  }
  FUN_1010a2aa4(param_1,lVar5,uVar3,0);
  if (((DAT_101ea5a98 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_101ea5a98), iVar2 != 0)) {
    DAT_101ea5a90 = FUN_1004d2524("value=");
    ___cxa_guard_release(&DAT_101ea5a98);
  }
  if ((*(int *)(lVar5 + 4) == *(int *)(PTR_DAT_101873138 + 4)) &&
     (pcVar4 = _strstr(*(char **)(param_1 + 0x410),"value="), pcVar4 != (char *)0x0)) {
    FUN_1010a2e24(param_1,lVar5,pcVar4 + DAT_101ea5a90,local_ac);
  }
  if (*(long *)(param_1 + 0x410) != 0) {
    pcVar4 = _strstr((char *)(*(long *)(param_1 + 0x410) + 1),"TOK_");
    *(char **)(param_1 + 0x410) = pcVar4;
  }
  *(int *)(param_1 + 0x408) = *(int *)(param_1 + 0x408) + -1;
  if (*(long *)PTR____stack_chk_guard_101444218 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1010a37c0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int local_bc;
  char local_b8 [64];
  undefined1 auStack_78 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _sscanf(*(char **)(param_1 + 0x410),"TOK_ARRAY typeinfo=%s field=%s length=%d");
  if (*(long *)(param_1 + 0x410) != 0) {
    pcVar5 = _strstr((char *)(*(long *)(param_1 + 0x410) + 1),"TOK_");
    *(char **)(param_1 + 0x410) = pcVar5;
  }
  uVar2 = FUN_1004d2524(auStack_78);
  iVar3 = FUN_100015208(auStack_78,uVar2,0x12345678);
  for (lVar6 = DAT_101dc0b90; (lVar6 != 0 && (*(int *)(lVar6 + 4) != iVar3));
      lVar6 = *(long *)(lVar6 + 8)) {
  }
  if (local_b8[0] == '!') {
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_1004d2524(local_b8);
    uVar4 = FUN_100015208(local_b8,uVar2,0x12345678);
    uVar4 = uVar4 & 0xffffff;
  }
  FUN_1010a2aa4(param_1,lVar6,uVar4,0);
  uVar7 = *(undefined8 *)(lVar6 + 0x10);
  FUN_1010a2cc0(param_1,uVar7,local_bc);
  iVar3 = *(int *)(param_1 + 0x408);
  if (0 < local_bc) {
    iVar8 = 0;
    lVar6 = *(long *)(param_1 + (long)iVar3 * 0x10 + 8);
    do {
      *(int *)(param_1 + 0x408) = (int)((long)iVar3 + 1);
      lVar1 = param_1 + ((long)iVar3 + 1) * 0x10;
      *(long *)(lVar1 + 8) = lVar6;
      *(undefined8 *)(lVar1 + 0x10) = uVar7;
      FUN_1010a3208(param_1);
      iVar3 = *(int *)(param_1 + 0x408) + -1;
      *(int *)(param_1 + 0x408) = iVar3;
      iVar8 = iVar8 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar8 < local_bc);
  }
  *(int *)(param_1 + 0x408) = iVar3 + -2;
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




uint * FUN_1010a3954(uint *param_1,uint param_2,undefined8 param_3,uint param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  *param_1 = param_2 & 7 | (param_4 & 0x3fff) << 3 | (param_5 & 0xf) << 0x11;
  uVar2 = FUN_1004d2524(param_3);
  uVar3 = FUN_100015208(param_3,uVar2,0x12345678);
  param_1[1] = uVar3;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = &DAT_101dc0b90;
  if (DAT_101dc0b90 != 0) {
    puVar1 = (undefined8 *)((long)DAT_101dc0b98 + 8);
  }
  *puVar1 = param_1;
  DAT_101dc0b98 = param_1;
  return param_1;
}




uint * FUN_1010a39d4(uint *param_1)

{
  if ((*param_1 & 7) != 3) {
    param_1 = (uint *)0x0;
  }
  return param_1;
}




undefined1  [16] FUN_1010a39e8(long param_1,uint *param_2,undefined8 *param_3)

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
    puVar4 = (undefined8 *)(param_1 + 8);
    puVar2 = (undefined8 *)*puVar3;
    do {
      while (puVar3 = puVar2, *param_2 < *(uint *)(puVar3 + 4)) {
        puVar4 = puVar3;
        puVar2 = (undefined8 *)*puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_1010a3a5c;
      }
      if (*param_2 <= *(uint *)(puVar3 + 4)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_1010a3a5c:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x38);
    uVar6 = *param_3;
    *(undefined8 *)((long)pvVar5 + 0x28) = param_3[1];
    *(undefined8 *)((long)pvVar5 + 0x20) = uVar6;
    *(undefined8 *)((long)pvVar5 + 0x30) = param_3[2];
    FUN_1010a3ab8(param_1,puVar3,puVar4,pvVar5);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar5;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_1010a3ab8(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_1010a3b0c(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if ((DAT_101873180 & 1) == 0) {
    DAT_101873060 = 0x20008;
    uVar2 = FUN_1004d2524("");
    DAT_101873064 = FUN_100015208("",uVar2,0x12345678);
    DAT_101873068 = 0;
    puVar1 = &DAT_101dc0b90;
    if (DAT_101dc0b90 != 0) {
      puVar1 = (undefined8 *)(DAT_101dc0b98 + 2);
    }
    *puVar1 = &DAT_101873060;
    DAT_101dc0b98 = &DAT_101873060;
    DAT_101873060 = DAT_101873060 & 0x1fffff;
    DAT_101873180 = 1;
  }
  return;
}




void FUN_1010a3bb0(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if ((DAT_101873188 & 1) == 0) {
    DAT_101873070 = 0x20008;
    uVar2 = FUN_1004d2524("");
    DAT_101873074 = FUN_100015208("",uVar2,0x12345678);
    DAT_101873078 = 0;
    puVar1 = &DAT_101dc0b90;
    if (DAT_101dc0b90 != 0) {
      puVar1 = (undefined8 *)(DAT_101dc0b98 + 2);
    }
    *puVar1 = &DAT_101873070;
    DAT_101dc0b98 = &DAT_101873070;
    DAT_101873070 = DAT_101873070 & 0x1fffff;
    DAT_101873188 = 1;
  }
  return;
}




void FUN_1010a3c54(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if ((DAT_101873190 & 1) == 0) {
    DAT_101873080 = 0x20008;
    uVar2 = FUN_1004d2524("");
    DAT_101873084 = FUN_100015208("",uVar2,0x12345678);
    DAT_101873088 = 0;
    puVar1 = &DAT_101dc0b90;
    if (DAT_101dc0b90 != 0) {
      puVar1 = (undefined8 *)(DAT_101dc0b98 + 2);
    }
    *puVar1 = &DAT_101873080;
    DAT_101dc0b98 = &DAT_101873080;
    DAT_101873080 = DAT_101873080 & 0x1fffff | 0x200000;
    DAT_101873190 = 1;
  }
  return;
}




void FUN_1010a3cfc(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if ((DAT_101873198 & 1) == 0) {
    DAT_101873090 = 0x40010;
    uVar2 = FUN_1004d2524("");
    DAT_101873094 = FUN_100015208("",uVar2,0x12345678);
    DAT_101873098 = 0;
    puVar1 = &DAT_101dc0b90;
    if (DAT_101dc0b90 != 0) {
      puVar1 = (undefined8 *)(DAT_101dc0b98 + 2);
    }
    *puVar1 = &DAT_101873090;
    DAT_101dc0b98 = &DAT_101873090;
    DAT_101873090 = DAT_101873090 & 0x1fffff | 0x400000;
    DAT_101873198 = 1;
  }
  return;
}




void FUN_1010a3da4(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if ((DAT_1018731a0 & 1) == 0) {
    DAT_1018730a0 = 0x40010;
    uVar2 = FUN_1004d2524("");
    DAT_1018730a4 = FUN_100015208("",uVar2,0x12345678);
    DAT_1018730a8 = 0;
    puVar1 = &DAT_101dc0b90;
    if (DAT_101dc0b90 != 0) {
      puVar1 = (undefined8 *)(DAT_101dc0b98 + 2);
    }
    *puVar1 = &DAT_1018730a0;
    DAT_101dc0b98 = &DAT_1018730a0;
    DAT_1018730a0 = DAT_1018730a0 & 0x1fffff | 0x600000;
    DAT_1018731a0 = 1;
  }
  return;
}




void FUN_1010a3e4c(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if ((DAT_1018731a8 & 1) == 0) {
    DAT_1018730b0 = 0x80020;
    uVar2 = FUN_1004d2524("");
    DAT_1018730b4 = FUN_100015208("",uVar2,0x12345678);
    DAT_1018730b8 = 0;
    puVar1 = &DAT_101dc0b90;
    if (DAT_101dc0b90 != 0) {
      puVar1 = (undefined8 *)(DAT_101dc0b98 + 2);
    }
    *puVar1 = &DAT_1018730b0;
    DAT_101dc0b98 = &DAT_1018730b0;
    DAT_1018730b0 = DAT_1018730b0 & 0x1fffff | 0x800000;
    DAT_1018731a8 = 1;
  }
  return;
}




void FUN_1010a3ef4(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if ((DAT_1018731b0 & 1) == 0) {
    DAT_1018730c8 = 0x80020;
    uVar2 = FUN_1004d2524("");
    DAT_1018730cc = FUN_100015208("",uVar2,0x12345678);
    DAT_1018730d0 = 0;
    puVar1 = &DAT_101dc0b90;
    if (DAT_101dc0b90 != 0) {
      puVar1 = (undefined8 *)(DAT_101dc0b98 + 2);
    }
    *puVar1 = &DAT_1018730c8;
    DAT_101dc0b98 = &DAT_1018730c8;
    DAT_1018730c8 = DAT_1018730c8 & 0x1fffff | 0xa00000;
    DAT_1018731b0 = 1;
  }
  return;
}




void FUN_1010a3f9c(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if ((DAT_1018731b8 & 1) == 0) {
    DAT_1018730e0 = 0x80020;
    uVar2 = FUN_1004d2524("");
    DAT_1018730e4 = FUN_100015208("",uVar2,0x12345678);
    DAT_1018730e8 = 0;
    puVar1 = &DAT_101dc0b90;
    if (DAT_101dc0b90 != 0) {
      puVar1 = (undefined8 *)(DAT_101dc0b98 + 2);
    }
    *puVar1 = &DAT_1018730e0;
    DAT_101dc0b98 = &DAT_1018730e0;
    DAT_1018730e0 = DAT_1018730e0 & 0x1fffff | 0xc00000;
    DAT_1018731b8 = 1;
  }
  return;
}




void FUN_1010a4044(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if ((DAT_1018731c0 & 1) == 0) {
    DAT_1018730f8 = 0x100040;
    uVar2 = FUN_1004d2524("");
    DAT_1018730fc = FUN_100015208("",uVar2,0x12345678);
    DAT_101873100 = 0;
    puVar1 = &DAT_101dc0b90;
    if (DAT_101dc0b90 != 0) {
      puVar1 = (undefined8 *)(DAT_101dc0b98 + 2);
    }
    *puVar1 = &DAT_1018730f8;
    DAT_101dc0b98 = &DAT_1018730f8;
    DAT_1018730f8 = DAT_1018730f8 & 0x1fffff | 0xe00000;
    DAT_1018731c0 = 1;
  }
  return;
}




void FUN_1010a40ec(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if ((DAT_1018731c8 & 1) == 0) {
    DAT_101873108 = 0x20008;
    uVar2 = FUN_1004d2524("");
    DAT_10187310c = FUN_100015208("",uVar2,0x12345678);
    DAT_101873110 = 0;
    puVar1 = &DAT_101dc0b90;
    if (DAT_101dc0b90 != 0) {
      puVar1 = (undefined8 *)(DAT_101dc0b98 + 2);
    }
    *puVar1 = &DAT_101873108;
    DAT_101dc0b98 = &DAT_101873108;
    DAT_101873108 = DAT_101873108 & 0x1fffff | 0x1000000;
    DAT_1018731c8 = 1;
  }
  return;
}




void FUN_1010a4194(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  
  if ((DAT_1018731d0 & 1) == 0) {
    DAT_101873120 = 0x100043;
    uVar2 = FUN_1004d2524("char*");
    DAT_101873124 = FUN_100015208("char*",uVar2,0x12345678);
    DAT_101873128 = 0;
    puVar1 = &DAT_101dc0b90;
    if (DAT_101dc0b90 != 0) {
      puVar1 = (undefined8 *)(DAT_101dc0b98 + 2);
    }
    *puVar1 = &DAT_101873120;
    DAT_101dc0b98 = &DAT_101873120;
    DAT_101873130 = &DAT_101873060;
    DAT_1018731d0 = 1;
  }
  return;
}




void FUN_1010a423c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar2 = operator_new(0x38);
  puVar2[2] = 0;
  puVar2[1] = 0;
  *puVar2 = puVar2 + 1;
  puVar2[4] = 0;
  puVar2[5] = param_2;
  *(undefined4 *)(puVar2 + 6) = 0;
  pvVar3 = operator_new(0x80);
  uVar4 = FUN_1010a458c(pvVar3,param_2);
  puVar2[3] = uVar4;
  DAT_101ea5aa0 = puVar2;
  operator_new(0x20);
  DAT_101ea5aa8 = (undefined8 *)FUN_1010b23f0();
  *DAT_101ea5aa8 = &PTR_thunk_FUN_1010b240c_10182e370;
  DAT_101ea5aa8[2] = param_1;
  DAT_101ea5aa8[3] = puVar2;
  pvVar3 = operator_new(0x78);
  puVar2 = DAT_101ea5aa0;
  puVar5 = (undefined8 *)FUN_1010b23f0();
  *puVar5 = &PTR_FUN_10182e328;
  puVar5[2] = param_1;
  puVar5[3] = puVar2;
  FUN_1010b7de4(puVar5 + 4);
  *(byte *)((long)pvVar3 + 0x70) = *(byte *)((long)pvVar3 + 0x70) & 0xfa;
  DAT_101ea5ab0 = pvVar3;
  iVar1 = FUN_1004e4bc0();
  if (iVar1 != 0) {
    FUN_1004e4e60(&DAT_101dc0ba0,1,"DispatchQueue_AnimSample");
    FUN_1004e55c8(&DAT_101dc0ba0);
  }
  *(byte *)((long)DAT_101ea5ab0 + 0x70) = *(byte *)((long)DAT_101ea5ab0 + 0x70) | 4;
  return;
}




void FUN_1010a4348(void)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_1004e4ecc(&DAT_101dc0ba0);
  if (iVar1 != 0) {
    FUN_1004e4edc(&DAT_101dc0ba0);
  }
  if (DAT_101ea5ab0 != (long *)0x0) {
    (**(code **)(*DAT_101ea5ab0 + 8))();
  }
  DAT_101ea5ab0 = (long *)0x0;
  if (DAT_101ea5aa8 != (long *)0x0) {
    (**(code **)(*DAT_101ea5aa8 + 8))();
  }
  DAT_101ea5aa8 = (long *)0x0;
  if (DAT_101ea5aa0 != 0) {
    pvVar2 = (void *)FUN_1010a5674();
    operator_delete(pvVar2);
  }
  DAT_101ea5aa0 = 0;
  return;
}




void FUN_1010a43cc(void)

{
  return;
}




void FUN_1010a43d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1010a43e8(DAT_101ea5aa0,param_1,param_2,param_3);
  return;
}




void FUN_1010a43e8(long param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_50 [2];
  undefined4 *local_48;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    puVar1 = (undefined4 *)FUN_1010a56cc(param_1,param_3);
    puVar2 = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_1010a4ae0(*(undefined8 *)(param_1 + 0x18));
      FUN_1010a51b8(puVar2,param_3);
      local_50[0] = *puVar2;
      local_48 = puVar2;
      FUN_1010a7a88(param_1,local_50,local_50);
    }
    *param_2 = puVar2;
    puVar2[1] = puVar2[1] + 1;
    if (param_4 == (long *)0x0) {
      if (puVar1 != (undefined4 *)0x0) {
        return;
      }
    }
    else {
      plVar4 = (long *)(puVar2 + 4);
      lVar5 = *plVar4;
      plVar3 = param_4 + 1;
      *plVar3 = lVar5;
      param_4[2] = 0;
      if (lVar5 == 0) {
        *(long **)(puVar2 + 4) = plVar3;
        plVar4 = (long *)(puVar2 + 6);
      }
      else {
        *(long **)(lVar5 + 8) = plVar3;
      }
      *plVar4 = (long)plVar3;
      puVar2[8] = puVar2[8] + 1;
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)(*param_4 + 0x10))(param_4,puVar2[2]);
        return;
      }
    }
    (**(code **)(**(long **)(param_1 + 0x20) + 0x10))(*(long **)(param_1 + 0x20),param_3,puVar2);
  }
  return;
}




void FUN_1010a44f8(undefined8 param_1)

{
  FUN_1010a4508(DAT_101ea5aa0,param_1);
  return;
}




void FUN_1010a4508(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *param_2;
  iVar1 = *(int *)(lVar3 + 4);
  iVar2 = iVar1 + -1;
  *(int *)(lVar3 + 4) = iVar2;
  if (iVar2 == 0 || iVar1 < 1) {
    if (*(int *)(param_1 + 0x30) == 0) {
      FUN_1010a7ba4(param_1,lVar3);
      FUN_1010a501c(*(undefined8 *)(param_1 + 0x18),lVar3);
    }
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}




undefined8 FUN_1010a4568(void)

{
  return DAT_101ea5aa0;
}




undefined8 FUN_1010a4574(void)

{
  return DAT_101ea5aa8;
}




undefined8 FUN_1010a4580(void)

{
  return DAT_101ea5ab0;
}




undefined8 * FUN_1010a458c(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *local_38;
  
  *param_1 = param_2;
  piVar4 = (int *)(param_1 + 1);
  param_1[2] = 0;
  piVar4[0] = 0;
  piVar4[1] = 0;
  puVar5 = param_1 + 3;
  param_1[4] = 0;
  *puVar5 = 0;
  param_1[5] = 0;
  FUN_1010a7650(puVar5,1);
  FUN_1010a7650(piVar4,*piVar4 + 1);
  local_38 = operator_new(0x4008);
  local_38[0x1001] = 0;
  lVar2 = -0xff;
  piVar3 = local_38;
  do {
    *piVar3 = (int)lVar2 + 0x100;
    bVar1 = lVar2 != -1;
    lVar2 = lVar2 + 1;
    piVar3 = piVar3 + 0x10;
  } while (bVar1);
  local_38[0x1000] = 0;
  FUN_1010a76cc(puVar5,&local_38);
  FUN_1010a76cc(piVar4,&local_38);
  piVar4 = (int *)(param_1 + 6);
  param_1[7] = 0;
  piVar4[0] = 0;
  piVar4[1] = 0;
  puVar5 = param_1 + 8;
  param_1[9] = 0;
  *puVar5 = 0;
  param_1[10] = 0;
  FUN_1010a774c(puVar5,1);
  FUN_1010a774c(piVar4,*piVar4 + 1);
  local_38 = operator_new(0x8808);
  local_38[0x2201] = 0;
  lVar2 = -0xff;
  piVar3 = local_38;
  do {
    *piVar3 = (int)lVar2 + 0x100;
    bVar1 = lVar2 != -1;
    lVar2 = lVar2 + 1;
    piVar3 = piVar3 + 0x22;
  } while (bVar1);
  local_38[0x2200] = 0;
  FUN_1010a77c8(puVar5,&local_38);
  FUN_1010a77c8(piVar4,&local_38);
  piVar4 = (int *)(param_1 + 0xb);
  param_1[0xc] = 0;
  piVar4[0] = 0;
  piVar4[1] = 0;
  puVar5 = param_1 + 0xd;
  param_1[0xe] = 0;
  *puVar5 = 0;
  param_1[0xf] = 0;
  FUN_1010a7848(puVar5,1);
  FUN_1010a7848(piVar4,*piVar4 + 1);
  local_38 = operator_new(0xc008);
  local_38[0x3001] = 0;
  lVar2 = -0x1ff;
  piVar3 = local_38;
  do {
    *piVar3 = (int)lVar2 + 0x200;
    bVar1 = lVar2 != -1;
    lVar2 = lVar2 + 1;
    piVar3 = piVar3 + 0x18;
  } while (bVar1);
  local_38[0x3000] = 0;
  FUN_1010a78c4(puVar5,&local_38);
  FUN_1010a78c4(piVar4,&local_38);
  FUN_1010a474c(param_1,0);
  return param_1;
}




void FUN_1010a474c(long param_1,ulong param_2)

{
  uint *puVar1;
  bool bVar2;
  void *pvVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  
  puVar1 = (uint *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((param_2 & 1) == 0) {
    uVar4 = *(uint *)(param_1 + 8);
    if (uVar4 != 0) {
      uVar5 = 0;
      do {
        pvVar3 = *(void **)(*(long *)(param_1 + 0x10) + uVar5 * 8);
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
          uVar4 = *puVar1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      *puVar1 = 0;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
  }
  else {
    if (*puVar1 != 0) {
      uVar5 = 0;
      lVar6 = *(long *)(param_1 + 0x10);
      do {
        piVar7 = *(int **)(lVar6 + uVar5 * 8);
        piVar7[0x1001] = 0;
        lVar9 = -0xff;
        piVar8 = piVar7;
        do {
          *piVar8 = (int)lVar9 + 0x100;
          bVar2 = lVar9 != -1;
          lVar9 = lVar9 + 1;
          piVar8 = piVar8 + 0x10;
        } while (bVar2);
        piVar7[0x1000] = 0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *puVar1);
    }
    FUN_1010a7944(param_1 + 0x18,puVar1);
  }
  puVar1 = (uint *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if ((param_2 & 1) == 0) {
    uVar4 = *(uint *)(param_1 + 0x30);
    if (uVar4 != 0) {
      uVar5 = 0;
      do {
        pvVar3 = *(void **)(*(long *)(param_1 + 0x38) + uVar5 * 8);
        if (pvVar3 != (void *)0x0) {
          operator_delete(pvVar3);
          uVar4 = *puVar1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      *puVar1 = 0;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  else {
    if (*puVar1 != 0) {
      uVar5 = 0;
      lVar6 = *(long *)(param_1 + 0x38);
      do {
        piVar7 = *(int **)(lVar6 + uVar5 * 8);
        piVar7[0x2201] = 0;
        lVar9 = -0xff;
        piVar8 = piVar7;
        do {
          *piVar8 = (int)lVar9 + 0x100;
          bVar2 = lVar9 != -1;
          lVar9 = lVar9 + 1;
          piVar8 = piVar8 + 0x22;
        } while (bVar2);
        piVar7[0x2200] = 0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *puVar1);
    }
    FUN_1010a79b0(param_1 + 0x40,puVar1);
  }
  puVar1 = (uint *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if ((param_2 & 1) != 0) {
    if (*puVar1 != 0) {
      uVar5 = 0;
      lVar6 = *(long *)(param_1 + 0x60);
      do {
        piVar7 = *(int **)(lVar6 + uVar5 * 8);
        piVar7[0x3001] = 0;
        lVar9 = -0x1ff;
        piVar8 = piVar7;
        do {
          *piVar8 = (int)lVar9 + 0x200;
          bVar2 = lVar9 != -1;
          lVar9 = lVar9 + 1;
          piVar8 = piVar8 + 0x18;
        } while (bVar2);
        piVar7[0x3000] = 0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *puVar1);
    }
    FUN_1010a7a1c(param_1 + 0x68,puVar1);
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x58);
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      pvVar3 = *(void **)(*(long *)(param_1 + 0x60) + uVar5 * 8);
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
        uVar4 = *puVar1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *puVar1 = 0;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  return;
}




long FUN_1010a4978(long param_1)

{
  void *pvVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  
  FUN_1010a474c(param_1,0);
  puVar3 = (uint *)(param_1 + 0x58);
  uVar2 = *puVar3;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      pvVar1 = *(void **)(*(long *)(param_1 + 0x60) + uVar4 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        uVar2 = *puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  pvVar1 = *(void **)(param_1 + 0x60);
  if (pvVar1 != (void *)0x0) {
    *puVar3 = 0;
  }
  if (*(void **)(param_1 + 0x70) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    operator_delete__(*(void **)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    pvVar1 = *(void **)(param_1 + 0x60);
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  puVar3 = (uint *)(param_1 + 0x30);
  uVar2 = *puVar3;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      pvVar1 = *(void **)(*(long *)(param_1 + 0x38) + uVar4 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        uVar2 = *puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  pvVar1 = *(void **)(param_1 + 0x38);
  if (pvVar1 != (void *)0x0) {
    *puVar3 = 0;
  }
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    operator_delete__(*(void **)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    pvVar1 = *(void **)(param_1 + 0x38);
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  puVar3 = (uint *)(param_1 + 8);
  uVar2 = *puVar3;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      pvVar1 = *(void **)(*(long *)(param_1 + 0x10) + uVar4 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        uVar2 = *puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 != (void *)0x0) {
    *puVar3 = 0;
  }
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    operator_delete__(*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    pvVar1 = *(void **)(param_1 + 0x10);
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return param_1;
}




void FUN_1010a4ae0(long param_1)

{
  int iVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int *local_38;
  
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar4 == 0) {
    FUN_1010a7650(param_1 + 0x18,1);
    FUN_1010a7650(param_1 + 8,*(int *)(param_1 + 8) + 1);
    local_38 = operator_new(0x4008);
    local_38[0x1001] = 0;
    lVar5 = -0xff;
    piVar6 = local_38;
    do {
      *piVar6 = (int)lVar5 + 0x100;
      bVar3 = lVar5 != -1;
      lVar5 = lVar5 + 1;
      piVar6 = piVar6 + 0x10;
    } while (bVar3);
    local_38[0x1000] = 0;
    FUN_1010a76cc(param_1 + 0x18,&local_38);
    FUN_1010a76cc(param_1 + 8,&local_38);
    iVar4 = *(int *)(param_1 + 0x18);
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + (ulong)(iVar4 - 1U) * 8);
  puVar2 = (uint *)(lVar5 + (ulong)*(uint *)(lVar5 + 0x4000) * 0x40);
  iVar1 = *(int *)(lVar5 + 0x4004) + 1;
  *(uint *)(lVar5 + 0x4000) = *puVar2;
  *(int *)(lVar5 + 0x4004) = iVar1;
  if (iVar1 == 0x100) {
    *(uint *)(param_1 + 0x18) = iVar4 - 1U;
  }
  puVar2[0] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  return;
}




uint * FUN_1010a4bd0(int *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  int *local_28;
  
  puVar6 = (uint *)(param_1 + 4);
  uVar3 = *puVar6;
  if (uVar3 == 0) {
    FUN_1010a774c(puVar6,1);
    FUN_1010a774c(param_1,*param_1 + 1);
    local_28 = operator_new(0x8808);
    local_28[0x2201] = 0;
    lVar4 = -0xff;
    piVar5 = local_28;
    do {
      *piVar5 = (int)lVar4 + 0x100;
      bVar2 = lVar4 != -1;
      lVar4 = lVar4 + 1;
      piVar5 = piVar5 + 0x22;
    } while (bVar2);
    local_28[0x2200] = 0;
    FUN_1010a77c8(puVar6,&local_28);
    FUN_1010a77c8(param_1,&local_28);
    uVar3 = param_1[4];
  }
  lVar4 = *(long *)(*(long *)(param_1 + 6) + (ulong)(uVar3 - 1) * 8);
  puVar7 = (uint *)(lVar4 + (ulong)*(uint *)(lVar4 + 0x8800) * 0x88);
  iVar1 = *(int *)(lVar4 + 0x8804) + 1;
  *(uint *)(lVar4 + 0x8800) = *puVar7;
  *(int *)(lVar4 + 0x8804) = iVar1;
  if (iVar1 == 0x100) {
    *puVar6 = uVar3 - 1;
  }
  puVar7[0] = 0;
  puVar7[1] = 0;
  FUN_1010b7de4(puVar7 + 6);
  *(undefined1 *)(puVar7 + 0x20) = 1;
  puVar7[0x1c] = 0x7f7fffff;
  puVar7[0x1b] = 0x7f7fffff;
  puVar7[0x1a] = 0x7f7fffff;
  puVar7[0x1f] = 0xff7fffff;
  puVar7[0x1e] = 0xff7fffff;
  puVar7[0x1d] = 0xff7fffff;
  return puVar7;
}




void FUN_1010a4ce4(long param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int *local_38;
  
  iVar3 = *(int *)(param_1 + 0x68);
  if (iVar3 == 0) {
    FUN_1010a7848(param_1 + 0x68,1);
    FUN_1010a7848(param_1 + 0x58,*(int *)(param_1 + 0x58) + 1);
    local_38 = operator_new(0xc008);
    local_38[0x3001] = 0;
    lVar4 = -0x1ff;
    piVar5 = local_38;
    do {
      *piVar5 = (int)lVar4 + 0x200;
      bVar2 = lVar4 != -1;
      lVar4 = lVar4 + 1;
      piVar5 = piVar5 + 0x18;
    } while (bVar2);
    local_38[0x3000] = 0;
    FUN_1010a78c4(param_1 + 0x68,&local_38);
    FUN_1010a78c4(param_1 + 0x58,&local_38);
    iVar3 = *(int *)(param_1 + 0x68);
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x70) + (ulong)(iVar3 - 1U) * 8);
  iVar1 = *(int *)(lVar4 + 0xc004) + 1;
  *(uint *)(lVar4 + 0xc000) = *(uint *)(lVar4 + (ulong)*(uint *)(lVar4 + 0xc000) * 0x60);
  *(int *)(lVar4 + 0xc004) = iVar1;
  if (iVar1 == 0x200) {
    *(uint *)(param_1 + 0x68) = iVar3 - 1U;
  }
  return;
}




void FUN_1010a4dc0(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *local_58;
  
  puVar6 = *(ulong **)(param_2 + 0x28);
  if (puVar6 != (ulong *)0x0) {
    *(undefined8 *)(param_2 + 0x28) = 0;
    FUN_1010a4fb4(param_2,0);
    if ((ulong *)*puVar6 != (ulong *)0x0) {
      puVar2 = (ulong *)*puVar6;
      do {
        puVar7 = (ulong *)puVar2[0xb];
        FUN_1010aeee8(*param_1,puVar2[1]);
        local_58 = (ulong *)0x0;
        puVar1 = (ulong *)param_1[0xf];
        if (((puVar1 == (ulong *)0x0 || puVar2 < puVar1) || puVar1 + 0x1800 < puVar2) &&
           (uVar4 = (ulong)*(uint *)(param_1 + 0xb), puVar1 = local_58,
           *(uint *)(param_1 + 0xb) != 0)) {
          puVar5 = (ulong *)param_1[0xc];
          do {
            puVar1 = (ulong *)*puVar5;
            if (puVar1 <= puVar2 && puVar2 <= puVar1 + 0x1800) break;
            puVar5 = puVar5 + 1;
            uVar4 = uVar4 - 1;
            puVar1 = local_58;
          } while (uVar4 != 0);
        }
        local_58 = puVar1;
        iVar3 = *(int *)((long)local_58 + 0xc004);
        if (iVar3 == 0x200) {
          FUN_1010a78c4(param_1 + 0xd,&local_58);
          iVar3 = *(int *)((long)local_58 + 0xc004);
        }
        param_1[0xf] = local_58;
        *(int *)(local_58 + ((ulong)((long)puVar2 - (long)local_58) / 0x60 & 0xffffffff) * 0xc) =
             (int)local_58[0x1800];
        *(int *)(local_58 + 0x1800) = (int)((ulong)((long)puVar2 - (long)local_58) / 0x60);
        *(int *)((long)local_58 + 0xc004) = iVar3 + -1;
        puVar2 = puVar7;
      } while (puVar7 != (ulong *)0x0);
    }
    local_58 = (ulong *)0x0;
    FUN_1010b7e7c(puVar6 + 3);
    puVar2 = (ulong *)param_1[10];
    if (((puVar2 == (ulong *)0x0) || (puVar6 < puVar2)) ||
       (puVar1 = puVar2, puVar2 + 0x1100 < puVar6)) {
      uVar4 = (ulong)*(uint *)(param_1 + 6);
      if (*(uint *)(param_1 + 6) != 0) {
        puVar7 = (ulong *)param_1[7];
        do {
          puVar2 = (ulong *)*puVar7;
          puVar1 = puVar2;
          if (puVar2 <= puVar6 && puVar6 <= puVar2 + 0x1100) goto LAB_1010a4f34;
          puVar7 = puVar7 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      puVar2 = (ulong *)0x0;
      puVar1 = local_58;
    }
LAB_1010a4f34:
    local_58 = puVar1;
    iVar3 = *(int *)((long)puVar2 + 0x8804);
    if (iVar3 == 0x100) {
      FUN_1010a77c8(param_1 + 8,&local_58);
      iVar3 = *(int *)((long)local_58 + 0x8804);
      puVar2 = local_58;
    }
    param_1[10] = puVar2;
    *(int *)(puVar2 + ((ulong)((long)puVar6 - (long)puVar2) / 0x88 & 0xffffffff) * 0x11) =
         (int)puVar2[0x1100];
    *(int *)(puVar2 + 0x1100) = (int)((ulong)((long)puVar6 - (long)puVar2) / 0x88);
    *(int *)((long)puVar2 + 0x8804) = iVar3 + -1;
  }
  return;
}




void FUN_1010a4fb4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*(int *)(param_1 + 8) != (int)param_2) {
    *(int *)(param_1 + 8) = (int)param_2;
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
    if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
      do {
        (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      } while (plVar2 != (long *)0x0);
    }
  }
  return;
}




void FUN_1010a501c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong local_28;
  
  FUN_1010a4dc0();
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  uVar1 = *(ulong *)(param_1 + 0x28);
  if (((uVar1 == 0 || param_2 < uVar1) || uVar1 + 0x4000 < param_2) &&
     (uVar2 = (ulong)*(uint *)(param_1 + 8), uVar1 = local_28, *(uint *)(param_1 + 8) != 0)) {
    puVar3 = *(ulong **)(param_1 + 0x10);
    do {
      uVar1 = *puVar3;
      if (uVar1 <= param_2 && param_2 <= uVar1 + 0x4000) break;
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 - 1;
      uVar1 = local_28;
    } while (uVar2 != 0);
  }
  local_28 = uVar1;
  if (*(int *)(local_28 + 0x4004) == 0x100) {
    FUN_1010a76cc(param_1 + 0x18,&local_28);
  }
  *(ulong *)(param_1 + 0x28) = local_28;
  *(undefined4 *)(local_28 + (param_2 - local_28 & 0x3fffffffc0)) =
       *(undefined4 *)(local_28 + 0x4000);
  *(undefined4 *)(local_28 + 0x4000) = (int)(param_2 - local_28 >> 6);
  *(int *)(local_28 + 0x4004) = *(int *)(local_28 + 0x4004) + -1;
  return;
}




void FUN_1010a50ec(long param_1,long param_2,void *param_3,void *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined **local_3e0 [2];
  long local_3d0;
  undefined1 local_3b0 [472];
  undefined1 auStack_1d8 [392];
  
  uVar1 = FUN_1010a4bd0(param_1 + 0x30);
  local_3e0[0] = &PTR_FUN_10182e2e0;
  lVar2 = 0x30;
  do {
    *(undefined8 *)((long)local_3e0 + lVar2) = 0;
    *(undefined8 *)((long)local_3e0 + lVar2 + 8) = 0;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0xf0);
  local_3e0[1] = (undefined **)uVar1;
  local_3d0 = param_1;
  _bzero(local_3b0,0x360);
  FUN_1010b8cbc(param_5,local_3e0);
  _memcpy(param_3,auStack_1d8,0x184);
  _memcpy(param_4,local_3b0,0x1d4);
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  return;
}




void FUN_1010a51b4(void)

{
  return;
}




void FUN_1010a51b8(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  FUN_1010a4fb4(param_1,0);
  uVar1 = FUN_1004d2524(param_2);
  uVar1 = FUN_100015208(param_2,uVar1,0x12345678);
  *param_1 = uVar1;
  return;
}




void FUN_1010a5200(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_1010a520c(long param_1)

{
  void *pvVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    pvVar1 = (void *)FUN_1010a59d4();
    operator_delete(pvVar1);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}




undefined8 FUN_1010a523c(undefined8 param_1)

{
  FUN_1010a520c();
  return param_1;
}




bool FUN_1010a5260(long *param_1)

{
  return *param_1 != 0;
}




void FUN_1010a5270(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_1010a5278(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




undefined8 FUN_1010a5280(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




long FUN_1010a5288(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(*param_1 + 8) == 1) {
    lVar2 = *(long *)(*param_1 + 0x28);
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 + 0x68;
    }
    return lVar1;
  }
  return 0;
}




void FUN_1010a52b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x20);
  uVar2 = *param_1;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  FUN_1010a5968(puVar1,uVar2,param_2);
  param_1[2] = puVar1;
  return;
}




void FUN_1010a5300(long *param_1)

{
  FUN_1010a75ac(*param_1 + 0x10);
  return;
}




int FUN_1010a530c(long param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar3 = param_2 + 1;
  uVar1 = *param_2;
  uVar4 = (ulong)uVar1;
  *(uint *)(param_1 + 0x308) = (uint)uVar1;
  if (uVar1 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x208);
    do {
      *puVar5 = puVar3;
      iVar2 = FUN_1004d2524(puVar3);
      puVar3 = (ushort *)((long)puVar3 + (ulong)(iVar2 + 1));
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
  }
  return (int)puVar3 - (int)param_2;
}




int FUN_1010a5364(long param_1,ushort *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  long lVar6;
  undefined4 *puVar7;
  ushort local_b0;
  undefined8 local_ae;
  undefined8 local_a6;
  undefined8 uStack_9e;
  undefined8 local_96;
  undefined1 local_8e;
  undefined8 local_8d;
  undefined8 uStack_85;
  undefined8 uStack_7d;
  undefined8 uStack_75;
  undefined4 local_6d;
  long local_68;
  
  lVar6 = 0;
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  puVar5 = param_2 + 1;
  uVar3 = (uint)*param_2;
  if (*param_2 < 2) {
    uVar3 = 1;
  }
  puVar7 = (undefined4 *)0x0;
  do {
    puVar2 = (undefined4 *)FUN_1010a4ce4(*(undefined8 *)(param_1 + 0x10));
    iVar1 = FUN_1010b8d48(puVar5,&local_b0);
    *puVar2 = 3;
    *(uint *)(param_1 + 0x30c + lVar6) = (uint)local_b0;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 4) = local_ae;
    *(undefined1 *)(puVar2 + 0xc) = local_8e;
    *(undefined8 *)(puVar2 + 8) = uStack_9e;
    *(undefined8 *)(puVar2 + 6) = local_a6;
    *(undefined8 *)(puVar2 + 10) = local_96;
    *(undefined8 *)((long)puVar2 + 0x39) = uStack_85;
    *(undefined8 *)((long)puVar2 + 0x31) = local_8d;
    *(undefined8 *)((long)puVar2 + 0x49) = uStack_75;
    *(undefined8 *)((long)puVar2 + 0x41) = uStack_7d;
    *(undefined4 *)((long)puVar2 + 0x51) = local_6d;
    if (lVar6 == 0) {
      puVar4 = *(undefined8 **)(param_1 + 8);
    }
    else {
      puVar4 = (undefined8 *)(puVar7 + 0x16);
    }
    puVar5 = (ushort *)((long)puVar5 + (long)iVar1);
    *puVar4 = puVar2;
    lVar6 = lVar6 + 4;
    puVar7 = puVar2;
  } while ((ulong)uVar3 * 4 - lVar6 != 0);
  *(undefined8 *)(puVar2 + 0x16) = 0;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return (int)puVar5 - (int)param_2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




int FUN_1010a5490(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint *puVar4;
  uint local_48;
  byte local_44;
  byte local_43;
  byte local_42;
  undefined1 uStack_41;
  
  iVar1 = FUN_1010b8db4(param_2,&uStack_41,&local_42,param_1 + 0x18,param_1 + 0x1fc,param_1 + 0x1f0,
                        &local_43);
  lVar2 = param_2 + iVar1;
  *(uint *)(param_1 + 0x200) = (uint)local_42;
  *(uint *)(param_1 + 0x1f8) = (uint)local_43;
  if (local_42 < 3) {
    iVar1 = *(int *)(&DAT_1013a20d4 + (long)(char)local_42 * 4);
  }
  else {
    iVar1 = 0;
  }
  *(ulong *)(param_1 + 0x1e8) = (ulong)(uint)(*(int *)(param_1 + 0x1f0) * iVar1);
  *(bool *)(*(long *)(param_1 + 8) + 0x80) = local_43 < 2;
  if (local_43 != 0) {
    uVar3 = 0;
    puVar4 = (uint *)(param_1 + 0x44);
    do {
      iVar1 = FUN_1010b8e08(lVar2,&local_44,&local_48,puVar4 + -1);
      lVar2 = lVar2 + iVar1;
      *(ulong *)(puVar4 + -3) = (ulong)local_48;
      *puVar4 = (uint)local_44;
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 6;
    } while (uVar3 < *(uint *)(param_1 + 0x1f8));
  }
  return (int)lVar2 - (int)param_2;
}




int FUN_1010a5580(long param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  
  pbVar3 = param_2 + 1;
  bVar1 = *param_2;
  *(uint *)(param_1 + 500) = (uint)bVar1;
  if (bVar1 != 0) {
    uVar5 = 0;
    lVar4 = param_1 + 0x100;
    do {
      iVar2 = FUN_1010b8d70(pbVar3,&local_41,&local_42,&local_43,&local_44,lVar4);
      pbVar3 = pbVar3 + iVar2;
      *(uint *)(lVar4 + -0x10) = (uint)local_41;
      *(uint *)(lVar4 + -0xc) = (uint)local_42;
      *(uint *)(lVar4 + -8) = (uint)local_43;
      *(uint *)(lVar4 + -4) = (uint)local_44;
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x14;
    } while (uVar5 < *(uint *)(param_1 + 500));
  }
  return (int)pbVar3 - (int)param_2;
}




int FUN_1010a5620(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar1 = (int)param_2;
  lVar2 = *(long *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar2 + 0x68) = uVar5;
  *(undefined8 *)(lVar2 + 0x78) = uVar6;
  uVar3 = (ulong)*(uint *)(param_1 + 0x1f8);
  if (*(uint *)(param_1 + 0x1f8) != 0) {
    plVar4 = (long *)(param_1 + 0x38);
    do {
      plVar4[-1] = param_2;
      param_2 = param_2 + *plVar4;
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 3;
    } while (uVar3 != 0);
  }
  *(long *)(param_1 + 0x1e0) = param_2;
  return ((int)param_2 + *(int *)(param_1 + 0x1e8)) - iVar1;
}




void FUN_1010a5670(void)

{
  return;
}




long FUN_1010a5674(long param_1)

{
  void *pvVar1;
  
  FUN_1010a474c(*(undefined8 *)(param_1 + 0x18),0);
  if (*(long *)(param_1 + 0x18) != 0) {
    pvVar1 = (void *)FUN_1010a4978();
    operator_delete(pvVar1);
  }
  FUN_1010a7610(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}




void FUN_1010a56bc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_1010a56c4(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




long FUN_1010a56cc(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  uVar1 = FUN_1004d2524(param_2);
  uVar2 = FUN_100015208(param_2,uVar1,0x12345678);
  plVar5 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar5;
  plVar3 = plVar5;
  if (plVar4 != (long *)0x0) {
    do {
      if (*(uint *)(plVar4 + 4) >= uVar2) {
        plVar3 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar2];
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar5) && (*(uint *)(plVar3 + 4) <= uVar2)) {
      return plVar3[5];
    }
  }
  return 0;
}




void FUN_1010a574c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_148 [256];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  plVar2 = *(long **)(param_2 + 0x28);
  if (*(int *)(param_3 + 0x100) != 0) {
    uVar4 = 0;
    do {
      FUN_1004e2b98(auStack_148,"build:/%s");
      FUN_1010aed8c(param_4,auStack_148);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_3 + 0x100));
  }
  for (lVar3 = *plVar2; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x58)) {
    FUN_1004e2b98(auStack_148,"build:/%s");
    uVar1 = FUN_1010aee84(param_4,auStack_148);
    *(undefined8 *)(lVar3 + 8) = uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010a5844(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  
  lVar3 = *(long *)(param_2 + 0x28);
  lVar1 = lVar3 + 0x18;
  FUN_1010b7eac(lVar1,*(undefined4 *)(param_3 + 0x1c0));
  if (*(int *)(param_3 + 0x1c8) != 0) {
    uVar4 = 0;
    puVar5 = (undefined4 *)(param_3 + 0x14);
    do {
      FUN_1010b7ebc(lVar1,0,puVar5[-3],*puVar5,puVar5[-1]);
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 6;
    } while (uVar4 < *(uint *)(param_3 + 0x1c8));
  }
  if (*(int *)(param_3 + 0x1c4) != 0) {
    uVar4 = 0;
    puVar5 = (undefined4 *)(param_3 + 0xd0);
    do {
      FUN_1010b7f64(lVar1,puVar5[-4],puVar5[-3],puVar5[-2],puVar5[-1],*puVar5,0);
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 5;
    } while (uVar4 < *(uint *)(param_3 + 0x1c4));
  }
  FUN_1010b7ff8(lVar1,0xffff,6);
  if (*(int *)(param_3 + 0x1c8) != 0) {
    uVar4 = 0;
    puVar6 = (uint *)(param_3 + 8);
    do {
      pvVar2 = (void *)FUN_1010b8000(lVar1,uVar4);
      _memmove(pvVar2,*(void **)(puVar6 + -2),(ulong)*puVar6);
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 6;
    } while (uVar4 < *(uint *)(param_3 + 0x1c8));
  }
  FUN_1010b7ffc(lVar1,0xffff,0xffffffff);
  *(undefined8 *)(lVar3 + 8) = 0;
  *(undefined4 *)(lVar3 + 0x10) = 1;
  FUN_1010b4484((undefined8 *)(lVar3 + 8),*(undefined8 *)(param_3 + 0x1b0),
                *(undefined4 *)(param_3 + 0x1cc),*(undefined4 *)(param_3 + 0x1d0));
  return;
}




void FUN_1010a5968(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  FUN_1010a5a64();
  for (lVar1 = *(long *)(param_2 + 0x30); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x30)) {
    FUN_1010a5a64(param_1,lVar1,param_3);
  }
  while (param_2 = *(long *)(param_2 + 0x38), param_2 != 0) {
    FUN_1010a5a64(param_1,param_2,param_3);
  }
  return;
}




uint * FUN_1010a59d4(uint *param_1)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 2);
      *(undefined8 *)(*(long *)(lVar3 + uVar4 * 8) + 8) = 0;
      if (*(long *)(lVar3 + uVar4 * 8) != 0) {
        pvVar1 = (void *)thunk_FUN_1010ae29c();
        operator_delete(pvVar1);
        uVar2 = (ulong)*param_1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  pvVar1 = *(void **)(param_1 + 2);
  if (pvVar1 != (void *)0x0) {
    *param_1 = 0;
  }
  if (*(void **)(param_1 + 6) != (void *)0x0) {
    param_1[4] = 0;
    operator_delete__(*(void **)(param_1 + 6));
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    pvVar1 = *(void **)(param_1 + 2);
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_1010a5a64(long param_1,long param_2,undefined8 param_3)

{
  long local_40;
  long local_38;
  
  if ((*(long **)(param_2 + 0x28) != (long *)0x0) &&
     (local_38 = **(long **)(param_2 + 0x28), local_38 != 0)) {
    do {
      operator_new(0x10);
      local_40 = FUN_1010ae294();
      FUN_1010ae2d0(local_40,**(undefined8 **)(local_38 + 8));
      *(undefined8 *)(local_40 + 8) = param_3;
      FUN_10066a8c8(param_1,&local_40);
      FUN_1010a5afc(param_1 + 0x10,&local_38);
      local_38 = *(long *)(local_38 + 0x58);
    } while (local_38 != 0);
  }
  return;
}




void FUN_1010a5afc(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1010a7c98(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined1  [16]
FUN_1010a5b7c(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined8 *local_58;
  
  uVar1 = FUN_1004e6cb8(0x28);
  puVar2 = (undefined8 *)FUN_1004e6bb8();
  plVar6 = puVar2 + 2;
  *plVar6 = param_2;
  *puVar2 = &PTR_thunk_FUN_1004e6bc8_10182e448;
  puVar2[3] = param_3;
  *(undefined4 *)(puVar2 + 4) = param_1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  local_58 = (undefined8 *)FUN_1004e68dc();
  *local_58 = plVar6;
  local_58[1] = thunk_FUN_1010a5ce8;
  uVar3 = FUN_1004e76ac(&local_58,0xc26fcbe1);
  uVar3 = FUN_1004e76b8(uVar3,param_5);
  FUN_1004e7744(uVar3,uVar1);
  auVar7._0_8_ = FUN_1004e777c();
  local_58 = (undefined8 *)FUN_1004e68dc();
  *local_58 = plVar6;
  local_58[1] = thunk_FUN_1010a5db4;
  uVar3 = FUN_1004e76ac(&local_58,0x54da852f);
  uVar4 = FUN_1004e6804();
  uVar3 = FUN_1004e76a0(uVar3,uVar4);
  uVar3 = FUN_1004e76b8(uVar3,auVar7._0_8_);
  uVar3 = FUN_1004e76e8(uVar3,param_6);
  FUN_1004e7744(uVar3,uVar1);
  uVar3 = FUN_1004e777c();
  local_58 = (undefined8 *)FUN_1004e68dc();
  *local_58 = plVar6;
  local_58[1] = FUN_1010a7d34;
  uVar4 = FUN_1004e76ac(&local_58,0xb80ca353);
  uVar5 = FUN_1004e6820();
  uVar4 = FUN_1004e76a0(uVar4,uVar5);
  uVar3 = FUN_1004e76b8(uVar4,uVar3);
  FUN_1004e7744(uVar3,uVar1);
  uVar1 = FUN_1004e777c();
  auVar7._8_8_ = uVar1;
  return auVar7;
}




void FUN_1010a5ce8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar3 = FUN_1004e6948();
  lVar4 = FUN_1004e697c(uVar3,0x815f1c7b);
  puVar1 = (undefined8 *)0x0;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x10);
  }
  lVar4 = FUN_1010a7d6c();
  uVar3 = FUN_1004e6948();
  FUN_1004e69d4(uVar3,lVar4,0xb875ca64);
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  FUN_1010a50ec(*(undefined8 *)(param_1[1] + 0x18),*param_1,&local_1c0,lVar4 + 0x10,*puVar1);
  plVar2 = *(long **)(param_1[1] + 0x20);
  (**(code **)(*plVar2 + 0x18))(plVar2,*param_1,&local_1c0,*(undefined8 *)(param_1[1] + 0x28));
  return;
}




void FUN_1010a5db4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_1004e6948();
  lVar3 = FUN_1004e697c(uVar2,0xb875ca64);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0001010a5df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1[1] + 0x20) + 0x20))(*(long **)(param_1[1] + 0x20),*param_1,lVar1)
  ;
  return;
}




void FUN_1010a5dfc(long param_1)

{
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = *(undefined8 *)(param_1 + 0x50);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  FUN_100663b94(&local_20,0);
  return;
}




void FUN_1010a5e30(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 auStack_938 [288];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1010a5fa4();
  FUN_1010b53c4(0,param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x68);
  if (*(char *)(lVar2 + 0x80) == '\0') {
    FUN_1010a5fe8(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x70),lVar2 + 0x18,
                  *(undefined8 *)(param_1 + 0x80));
    FUN_1010b84f8(*(long *)(param_1 + 0x68) + 0x18,0x830,0);
    puVar3 = *(undefined4 **)(param_1 + 0x60);
    if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
      FUN_1010b5248(*puVar3,*(long *)(param_1 + 0x68) + 8,*(undefined8 *)(param_1 + 0x80),puVar3[4],
                    puVar3[5],63999,0x830);
      return;
    }
  }
  else {
    puVar3 = *(undefined4 **)(param_1 + 0x60);
    if (*(char *)(puVar3 + 0xc) == '\0') {
      DAT_101dc0d20 = *(undefined8 **)(param_1 + 0x78);
      uVar7 = (ulong)*(ushort *)(*(long *)(param_1 + 0x70) + 2);
    }
    else {
      uVar4 = 0;
      lVar5 = *(long *)(param_1 + 0x78);
      puVar6 = auStack_938;
      do {
        puVar1 = (undefined8 *)(lVar5 + (ulong)*(byte *)((long)puVar3 + uVar4 + 0x31) * 0x40);
        uVar9 = puVar1[1];
        uVar8 = *puVar1;
        uVar11 = puVar1[3];
        uVar10 = puVar1[2];
        uVar12 = puVar1[4];
        uVar14 = puVar1[7];
        uVar13 = puVar1[6];
        puVar6[5] = puVar1[5];
        puVar6[4] = uVar12;
        puVar6[7] = uVar14;
        puVar6[6] = uVar13;
        puVar6[1] = uVar9;
        *puVar6 = uVar8;
        puVar6[3] = uVar11;
        puVar6[2] = uVar10;
        uVar4 = uVar4 + 1;
        uVar7 = (ulong)*(byte *)(puVar3 + 0xc);
        puVar6 = puVar6 + 8;
      } while (uVar4 < uVar7);
      DAT_101dc0d20 = auStack_938;
    }
    DAT_101dc0d28 = (undefined4)uVar7;
    FUN_1010b5248(*puVar3,lVar2 + 8,lVar2 + 0x18,puVar3[4],puVar3[5],0xe3f,0);
    DAT_101dc0d20 = (undefined8 *)0x0;
    DAT_101dc0d28 = 0;
    if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010a5fa4(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e4ecc(&DAT_101dc0ba0);
  if (iVar1 == 0 || DAT_101dc0ce0 == '\0') {
    return;
  }
  DAT_101dc0ce0 = 0;
  FUN_1004e51fc(&DAT_101dc0ba0);
  return;
}




void FUN_1010a5fe8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 extraout_x1;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  
  uVar1 = *(undefined4 *)(param_3 + 0x48);
  FUN_1010b7ff8(param_3,0x60f,1);
  FUN_1010b7ff8(param_4,0x60f,6);
  uVar2 = FUN_1010b8014(param_3,0);
  uVar3 = FUN_1010b8014(param_4,0);
  lVar4 = FUN_1010b8014(param_3,1);
  lVar5 = FUN_1010b8014(param_3,2);
  lVar6 = FUN_1010b8014(param_3,3);
  uVar7 = FUN_1010b8014(param_4,1);
  uVar8 = FUN_1010b8014(param_4,2);
  uVar9 = FUN_1010b8014(param_4,3);
  uVar10 = FUN_1010b8014(param_3,9);
  uVar11 = FUN_1010b8014(param_3,10);
  uVar12 = FUN_1010b806c(param_3,9);
  uVar13 = FUN_1010b806c(param_3,0);
  auVar16 = FUN_1010b806c(param_4,0);
  uVar15 = auVar16._8_8_;
  uVar14 = auVar16._0_8_;
  if ((lVar4 != 0 && lVar5 != 0) && (lVar6 != 0)) {
    FUN_1010a69b8(param_1,uVar15,uVar10,uVar11,uVar12,uVar1,uVar13,uVar14,uVar2,uVar3,lVar4,uVar7,
                  lVar5,uVar8,lVar6,uVar9);
    uVar15 = extraout_x1;
  }
  if (lVar4 == 0 || lVar5 == 0) {
    if (lVar4 == 0) {
      FUN_1010a7028(param_1,uVar15,uVar10,uVar11);
    }
    else {
      FUN_1010a6e4c(param_1,uVar15,uVar10,uVar11,uVar12,uVar1,uVar13,uVar14,uVar2,uVar3,lVar4,uVar7)
      ;
    }
  }
  else {
    FUN_1010a6c28(param_1,uVar15,uVar10,uVar11,uVar12,uVar1,uVar13,uVar14,uVar2,uVar3,lVar4,uVar7,
                  lVar5,uVar8);
  }
  FUN_1010b7ffc(param_3,0x60f,0xffffffff);
  FUN_1010b7ffc(param_4,0x60f,0xffffffff);
  return;
}




void FUN_1010a6244(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10182e328;
  FUN_1010b7e7c(param_1 + 4);
  FUN_1010b240c(param_1);
  return;
}




void FUN_1010a6274(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10182e328;
  FUN_1010b7e7c(param_1 + 4);
  pvVar1 = (void *)FUN_1010b240c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1010a62a8(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  void *pvVar14;
  long lVar15;
  long *plVar16;
  int *piVar17;
  undefined8 *puVar18;
  void *pvVar19;
  int *piVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long local_80;
  
  plVar16 = (long *)(param_5 + -8);
  plVar7 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16);
  puVar8 = (undefined8 *)(**(code **)(*plVar16 + 0x18))(plVar16);
  plVar16 = DAT_101dc0d18;
  plVar12 = *(long **)(*plVar7 + 0x28);
  if (*(int *)(*plVar7 + 8) == 1 && plVar12 != (long *)0x0) {
    puVar18 = (undefined8 *)plVar7[1];
    uVar10 = *puVar18;
    do {
      while ((int)*plVar16 != 0) {
        ClearExclusiveLocal();
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = 100;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar13 = (ulong)*(uint *)(plVar16 + 0x801);
    plVar5 = plVar16;
    if (*(uint *)(plVar16 + 0x801) != 0) {
      do {
        if ((undefined8 *)plVar5[1] == puVar18) {
          local_80 = plVar5[2];
          *(int *)plVar16 = 0;
          if (local_80 != 0) goto LAB_1010a6400;
          goto LAB_1010a637c;
        }
        uVar13 = uVar13 - 1;
        plVar5 = plVar5 + 2;
      } while (uVar13 != 0);
    }
    *(int *)plVar16 = 0;
LAB_1010a637c:
    if (((*(byte *)(param_1 + 0x70) >> 2 & 1) == 0) ||
       (iVar6 = FUN_1004e4ecc(&DAT_101dc0ba0), iVar6 == 0)) {
      local_80 = FUN_1010a67a8(puVar18,*(undefined8 *)(param_1 + 0x10));
      plVar16 = DAT_101dc0d18;
    }
    else {
      local_80 = FUN_1010a65e0(puVar18,*(undefined8 *)(param_1 + 0x10));
      plVar16 = DAT_101dc0d18;
    }
    do {
      while ((int)*plVar16 != 0) {
        ClearExclusiveLocal();
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = 100;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar1 = *(uint *)(plVar16 + 0x801);
    if (uVar1 < 0x400) {
      plVar16[(ulong)uVar1 * 2 + 1] = (long)puVar18;
      plVar16[(ulong)uVar1 * 2 + 2] = local_80;
      *(uint *)(plVar16 + 0x801) = uVar1 + 1;
    }
    *(int *)plVar16 = 0;
LAB_1010a6400:
    lVar15 = *plVar12;
    if (lVar15 != 0) {
      lVar21 = plVar7[2];
      uVar2 = *(undefined1 *)(param_5 + 3);
      do {
        if (lVar21 == 0) {
          puVar18 = (undefined8 *)(lVar15 + 8);
LAB_1010a646c:
          uVar9 = *puVar18;
        }
        else {
          if (*(uint *)(lVar21 + 0x10) != 0) {
            lVar11 = 0;
            do {
              if (*(long *)(*(long *)(lVar21 + 0x18) + lVar11) == lVar15) {
                puVar18 = (undefined8 *)(*(long *)(lVar21 + 8) + lVar11);
                goto LAB_1010a646c;
              }
              lVar11 = lVar11 + 8;
            } while ((ulong)*(uint *)(lVar21 + 0x10) * 8 - lVar11 != 0);
          }
          uVar9 = 0;
        }
        plVar16 = (long *)(**(code **)(*param_3 + 0x10))
                                    (param_3,*(undefined8 *)(param_1 + 0x10),uVar9,uVar2);
        if (plVar16 != (long *)0x0) {
          piVar20 = *(int **)(param_1 + 0x10);
          do {
            while (*piVar20 != 0) {
              ClearExclusiveLocal();
            }
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar4) {
              *piVar20 = 100;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          uVar1 = piVar20[10];
          piVar17 = piVar20 + (ulong)uVar1 * 4 + 2;
          pvVar19 = *(void **)piVar17;
          if ((pvVar19 == (void *)0x0) ||
             (uVar13 = (ulong)*(uint *)((long)pvVar19 + 0x20000), pvVar14 = pvVar19,
             *(uint *)((long)pvVar19 + 0x20000) < 0x8f)) {
            pvVar14 = *(void **)(piVar20 + (ulong)uVar1 * 4 + 4);
            if (pvVar14 == (void *)0x0) {
              pvVar14 = operator_new(0x20010);
              uVar13 = 0x20000;
              *(undefined4 *)((long)pvVar14 + 0x20000) = 0x20000;
              *(void **)((long)pvVar14 + 0x20008) = pvVar19;
              *(void **)piVar17 = pvVar14;
            }
            else {
              uVar9 = *(undefined8 *)((long)pvVar14 + 0x20008);
              *(void **)((long)pvVar14 + 0x20008) = pvVar19;
              *(void **)piVar17 = pvVar14;
              *(undefined8 *)(piVar20 + (ulong)uVar1 * 4 + 4) = uVar9;
              uVar13 = 0x20000;
              *(undefined4 *)((long)pvVar14 + 0x20000) = 0x20000;
            }
          }
          *(int *)((long)pvVar14 + 0x20000) = (int)uVar13 + -0x8f;
          puVar18 = (undefined8 *)((long)pvVar14 + 0x20000 + (7 - uVar13) & 0xfffffffffffffff8);
          *piVar20 = 0;
          *puVar18 = &DAT_10182e418;
          puVar18[1] = plVar16;
          puVar18[2] = 0;
          puVar18[3] = 0;
          uVar9 = (**(code **)(*plVar16 + 0x10))(plVar16);
          puVar18[3] = uVar9;
          *puVar18 = &PTR_FUN_10182e3b8;
          uVar22 = puVar8[1];
          uVar9 = *puVar8;
          uVar24 = puVar8[3];
          uVar23 = puVar8[2];
          uVar25 = puVar8[4];
          uVar27 = puVar8[7];
          uVar26 = puVar8[6];
          puVar18[9] = puVar8[5];
          puVar18[8] = uVar25;
          puVar18[0xb] = uVar27;
          puVar18[10] = uVar26;
          puVar18[5] = uVar22;
          puVar18[4] = uVar9;
          puVar18[7] = uVar24;
          puVar18[6] = uVar23;
          puVar18[0xc] = lVar15;
          puVar18[0xd] = plVar12;
          puVar18[0xe] = uVar10;
          puVar18[0xf] = local_80;
          puVar18[0x10] = param_1 + 0x20;
          FUN_1010b2aa4(param_6,puVar18);
        }
        lVar15 = *(long *)(lVar15 + 0x58);
      } while (lVar15 != 0);
    }
  }
  return;
}




ulong FUN_1010a65e0(long *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  void *pvVar10;
  void *pvVar11;
  int *piVar12;
  
  uVar3 = *(ushort *)(*param_1 + 2);
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar5) {
      *param_2 = 100;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar2 = param_2[10];
  piVar12 = param_2 + (ulong)uVar2 * 4 + 2;
  pvVar11 = *(void **)piVar12;
  uVar1 = (uint)uVar3 << 6 | 3;
  if ((pvVar11 == (void *)0x0) ||
     (uVar7 = (ulong)*(uint *)((long)pvVar11 + 0x20000), pvVar10 = pvVar11,
     *(uint *)((long)pvVar11 + 0x20000) < uVar1)) {
    pvVar10 = *(void **)(param_2 + (ulong)uVar2 * 4 + 4);
    if (pvVar10 == (void *)0x0) {
      pvVar10 = operator_new(0x20010);
      uVar7 = 0x20000;
      *(undefined4 *)((long)pvVar10 + 0x20000) = 0x20000;
      *(void **)((long)pvVar10 + 0x20008) = pvVar11;
      *(void **)piVar12 = pvVar10;
    }
    else {
      uVar8 = *(undefined8 *)((long)pvVar10 + 0x20008);
      *(void **)((long)pvVar10 + 0x20008) = pvVar11;
      *(void **)piVar12 = pvVar10;
      *(undefined8 *)(param_2 + (ulong)uVar2 * 4 + 4) = uVar8;
      uVar7 = 0x20000;
      *(undefined4 *)((long)pvVar10 + 0x20000) = 0x20000;
    }
  }
  *(int *)((long)pvVar10 + 0x20000) = (int)uVar7 - uVar1;
  *param_2 = 0;
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar5) {
      *param_2 = 100;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar7 = (long)pvVar10 + 0x20000 + (3 - uVar7) & 0xfffffffffffffffc;
  uVar1 = param_2[10];
  piVar12 = param_2 + (ulong)uVar1 * 4 + 2;
  pvVar11 = *(void **)piVar12;
  if ((pvVar11 == (void *)0x0) ||
     (uVar9 = (ulong)*(uint *)((long)pvVar11 + 0x20000), pvVar10 = pvVar11,
     *(uint *)((long)pvVar11 + 0x20000) < 0x17)) {
    pvVar10 = *(void **)(param_2 + (ulong)uVar1 * 4 + 4);
    if (pvVar10 == (void *)0x0) {
      pvVar10 = operator_new(0x20010);
      uVar9 = 0x20000;
      *(undefined4 *)((long)pvVar10 + 0x20000) = 0x20000;
      *(void **)((long)pvVar10 + 0x20008) = pvVar11;
      *(void **)piVar12 = pvVar10;
    }
    else {
      uVar8 = *(undefined8 *)((long)pvVar10 + 0x20008);
      *(void **)((long)pvVar10 + 0x20008) = pvVar11;
      *(void **)piVar12 = pvVar10;
      *(undefined8 *)(param_2 + (ulong)uVar1 * 4 + 4) = uVar8;
      uVar9 = 0x20000;
      *(undefined4 *)((long)pvVar10 + 0x20000) = 0x20000;
    }
  }
  *(int *)((long)pvVar10 + 0x20000) = (int)uVar9 + -0x17;
  puVar6 = (undefined8 *)((long)pvVar10 + 0x20000 + (7 - uVar9) & 0xfffffffffffffff8);
  *param_2 = 0;
  *puVar6 = param_1;
  puVar6[1] = uVar7;
  DAT_101dc0ce0 = 1;
  FUN_1004e57e0(&DAT_101dc0ba0,FUN_1010a6918);
  return uVar7;
}




ulong FUN_1010a67a8(long *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  long lVar9;
  undefined1 *puVar10;
  void *pvVar11;
  int *piVar12;
  undefined1 auStack_60 [8];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  lVar9 = *param_1;
  uVar3 = *(ushort *)(lVar9 + 2);
  puVar10 = auStack_60 + -(ulong)((uint)uVar3 * 0x30);
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar5) {
      *param_2 = 100;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar2 = param_2[10];
  piVar12 = param_2 + (ulong)uVar2 * 4 + 2;
  pvVar11 = *(void **)piVar12;
  uVar1 = (uint)uVar3 << 6 | 3;
  if ((pvVar11 == (void *)0x0) ||
     (uVar6 = (ulong)*(uint *)((long)pvVar11 + 0x20000), pvVar8 = pvVar11,
     *(uint *)((long)pvVar11 + 0x20000) < uVar1)) {
    pvVar8 = *(void **)(param_2 + (ulong)uVar2 * 4 + 4);
    if (pvVar8 == (void *)0x0) {
      pvVar8 = operator_new(0x20010);
      uVar6 = 0x20000;
      *(undefined4 *)((long)pvVar8 + 0x20000) = 0x20000;
      *(void **)((long)pvVar8 + 0x20008) = pvVar11;
      *(void **)piVar12 = pvVar8;
    }
    else {
      uVar7 = *(undefined8 *)((long)pvVar8 + 0x20008);
      *(void **)((long)pvVar8 + 0x20008) = pvVar11;
      *(void **)piVar12 = pvVar8;
      *(undefined8 *)(param_2 + (ulong)uVar2 * 4 + 4) = uVar7;
      uVar6 = 0x20000;
      *(undefined4 *)((long)pvVar8 + 0x20000) = 0x20000;
    }
  }
  *(int *)((long)pvVar8 + 0x20000) = (int)uVar6 - uVar1;
  uVar6 = (long)pvVar8 + 0x20000 + (3 - uVar6) & 0xfffffffffffffffc;
  *param_2 = 0;
  FUN_1010a7fe4(param_1,puVar10);
  FUN_1010a91bc(puVar10,puVar10,lVar9);
  FUN_1010a9244(uVar6,puVar10,lVar9);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010a6918(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  lVar1 = *(long *)*param_1;
  puVar2 = auStack_40 + -(ulong)((uint)*(ushort *)(lVar1 + 2) * 0x30);
  FUN_1010a7fe4((long *)*param_1,puVar2);
  FUN_1010a91bc(puVar2,puVar2,lVar1);
  FUN_1010a9244(param_1[1],puVar2,lVar1);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010a69b8(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  int param_6,ulong param_7,ulong param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13,long param_14,long param_15,long param_16)

{
  ushort *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  
  if (param_6 != 0) {
    lVar7 = 0;
    lVar8 = 0;
    lVar9 = 0;
    do {
      puVar1 = (ushort *)(param_4 + 4 + lVar8);
      pfVar2 = (float *)(param_3 + 8 + lVar8);
      puVar3 = (undefined8 *)(param_1 + (ulong)puVar1[-2] * 0x40);
      fVar17 = pfVar2[-2];
      fVar16 = pfVar2[-1];
      fVar27 = *(float *)(puVar3 + 7);
      puVar4 = (undefined8 *)(param_1 + (ulong)puVar1[-1] * 0x40);
      fVar18 = *(float *)(puVar4 + 7);
      puVar5 = (undefined8 *)(param_1 + (ulong)*puVar1 * 0x40);
      fVar19 = *pfVar2;
      fVar32 = pfVar2[1];
      fVar35 = *(float *)(puVar5 + 7);
      puVar6 = (undefined8 *)(param_1 + (ulong)puVar1[1] * 0x40);
      fVar14 = (float)*puVar3 * fVar17 + (float)*puVar4 * fVar16 + (float)*puVar5 * fVar19 +
               (float)*puVar6 * fVar32;
      fVar15 = (float)((ulong)*puVar3 >> 0x20) * fVar17 + (float)((ulong)*puVar4 >> 0x20) * fVar16 +
               (float)((ulong)*puVar5 >> 0x20) * fVar19 + (float)((ulong)*puVar6 >> 0x20) * fVar32;
      fVar12 = (float)puVar3[2] * fVar17 + (float)puVar4[2] * fVar16 + (float)puVar5[2] * fVar19 +
               (float)puVar6[2] * fVar32;
      fVar13 = (float)((ulong)puVar3[2] >> 0x20) * fVar17 +
               (float)((ulong)puVar4[2] >> 0x20) * fVar16 +
               (float)((ulong)puVar5[2] >> 0x20) * fVar19 +
               (float)((ulong)puVar6[2] >> 0x20) * fVar32;
      fVar10 = (float)puVar3[4] * fVar17 + (float)puVar4[4] * fVar16 + (float)puVar5[4] * fVar19 +
               (float)puVar6[4] * fVar32;
      fVar11 = (float)((ulong)puVar3[4] >> 0x20) * fVar17 +
               (float)((ulong)puVar4[4] >> 0x20) * fVar16 +
               (float)((ulong)puVar5[4] >> 0x20) * fVar19 +
               (float)((ulong)puVar6[4] >> 0x20) * fVar32;
      fVar36 = *(float *)(puVar6 + 7);
      pfVar2 = (float *)(param_9 + lVar7);
      fVar33 = *pfVar2;
      fVar37 = pfVar2[1];
      fVar38 = pfVar2[2];
      pfVar2 = (float *)(param_11 + 8 + lVar7);
      fVar20 = pfVar2[-2];
      fVar21 = pfVar2[-1];
      fVar22 = *pfVar2;
      pfVar2 = (float *)(param_13 + 8 + lVar7);
      fVar26 = *(float *)(puVar3 + 1) * fVar17 + fVar16 * *(float *)(puVar4 + 1) +
               fVar19 * *(float *)(puVar5 + 1) + fVar32 * *(float *)(puVar6 + 1);
      fVar23 = pfVar2[-2];
      fVar28 = pfVar2[-1];
      fVar34 = *pfVar2;
      pfVar2 = (float *)(param_15 + 8 + lVar7);
      fVar24 = pfVar2[-2];
      fVar25 = pfVar2[-1];
      fVar29 = *(float *)(puVar3 + 3) * fVar17 + fVar16 * *(float *)(puVar4 + 3) +
               fVar19 * *(float *)(puVar5 + 3) + fVar32 * *(float *)(puVar6 + 3);
      fVar30 = *pfVar2;
      fVar31 = *(float *)(puVar3 + 5) * fVar17 + fVar16 * *(float *)(puVar4 + 5) +
               fVar19 * *(float *)(puVar5 + 5) + fVar32 * *(float *)(puVar6 + 5);
      *(undefined8 *)(param_10 + lVar9) =
           CONCAT44((float)((ulong)puVar3[6] >> 0x20) * fVar17 +
                    (float)((ulong)puVar4[6] >> 0x20) * fVar16 +
                    (float)((ulong)puVar5[6] >> 0x20) * fVar19 +
                    (float)((ulong)puVar6[6] >> 0x20) * fVar32 + fVar15 * fVar33 + fVar13 * fVar37 +
                    fVar11 * fVar38,
                    (float)puVar3[6] * fVar17 + (float)puVar4[6] * fVar16 +
                    (float)puVar5[6] * fVar19 + (float)puVar6[6] * fVar32 + fVar14 * fVar33 +
                    fVar12 * fVar37 + fVar10 * fVar38);
      *(float *)((undefined8 *)(param_10 + lVar9) + 1) =
           fVar27 * fVar17 + fVar16 * fVar18 + fVar19 * fVar35 + fVar32 * fVar36 + fVar26 * fVar33 +
           fVar29 * fVar37 + fVar31 * fVar38;
      *(float *)((undefined8 *)(param_12 + lVar9) + 1) =
           fVar20 * fVar26 + fVar29 * fVar21 + fVar31 * fVar22;
      *(undefined8 *)(param_12 + lVar9) =
           CONCAT44(fVar15 * fVar20 + fVar13 * fVar21 + fVar11 * fVar22,
                    fVar14 * fVar20 + fVar12 * fVar21 + fVar10 * fVar22);
      *(float *)((undefined8 *)(param_14 + lVar9) + 1) =
           fVar23 * fVar26 + fVar29 * fVar28 + fVar31 * fVar34;
      *(undefined8 *)(param_14 + lVar9) =
           CONCAT44(fVar15 * fVar23 + fVar13 * fVar28 + fVar11 * fVar34,
                    fVar14 * fVar23 + fVar12 * fVar28 + fVar10 * fVar34);
      *(float *)((undefined8 *)(param_16 + lVar9) + 1) =
           fVar24 * fVar26 + fVar29 * fVar25 + fVar31 * fVar30;
      *(undefined8 *)(param_16 + lVar9) =
           CONCAT44(fVar15 * fVar24 + fVar13 * fVar25 + fVar11 * fVar30,
                    fVar14 * fVar24 + fVar12 * fVar25 + fVar10 * fVar30);
      lVar9 = lVar9 + (param_8 & 0xffffffff);
      lVar8 = lVar8 + (param_5 & 0xffffffff);
      lVar7 = lVar7 + (param_7 & 0xffffffff);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}




void FUN_1010a6c28(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  int param_6,ulong param_7,ulong param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13,long param_14)

{
  ushort *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  if (param_6 != 0) {
    lVar7 = 0;
    lVar8 = 0;
    lVar9 = 0;
    do {
      puVar1 = (ushort *)(param_4 + 4 + lVar8);
      pfVar2 = (float *)(param_3 + 8 + lVar8);
      puVar3 = (undefined8 *)(param_1 + (ulong)puVar1[-2] * 0x40);
      fVar17 = pfVar2[-2];
      fVar16 = pfVar2[-1];
      fVar23 = *(float *)(puVar3 + 7);
      puVar4 = (undefined8 *)(param_1 + (ulong)puVar1[-1] * 0x40);
      fVar18 = *(float *)(puVar4 + 7);
      puVar5 = (undefined8 *)(param_1 + (ulong)*puVar1 * 0x40);
      fVar27 = *pfVar2;
      fVar28 = pfVar2[1];
      fVar30 = *(float *)(puVar5 + 7);
      puVar6 = (undefined8 *)(param_1 + (ulong)puVar1[1] * 0x40);
      fVar14 = (float)*puVar3 * fVar17 + (float)*puVar4 * fVar16 + (float)*puVar5 * fVar27 +
               (float)*puVar6 * fVar28;
      fVar15 = (float)((ulong)*puVar3 >> 0x20) * fVar17 + (float)((ulong)*puVar4 >> 0x20) * fVar16 +
               (float)((ulong)*puVar5 >> 0x20) * fVar27 + (float)((ulong)*puVar6 >> 0x20) * fVar28;
      fVar12 = (float)puVar3[2] * fVar17 + (float)puVar4[2] * fVar16 + (float)puVar5[2] * fVar27 +
               (float)puVar6[2] * fVar28;
      fVar13 = (float)((ulong)puVar3[2] >> 0x20) * fVar17 +
               (float)((ulong)puVar4[2] >> 0x20) * fVar16 +
               (float)((ulong)puVar5[2] >> 0x20) * fVar27 +
               (float)((ulong)puVar6[2] >> 0x20) * fVar28;
      fVar10 = (float)puVar3[4] * fVar17 + (float)puVar4[4] * fVar16 + (float)puVar5[4] * fVar27 +
               (float)puVar6[4] * fVar28;
      fVar11 = (float)((ulong)puVar3[4] >> 0x20) * fVar17 +
               (float)((ulong)puVar4[4] >> 0x20) * fVar16 +
               (float)((ulong)puVar5[4] >> 0x20) * fVar27 +
               (float)((ulong)puVar6[4] >> 0x20) * fVar28;
      fVar32 = *(float *)(puVar6 + 7);
      pfVar2 = (float *)(param_9 + lVar7);
      fVar29 = *pfVar2;
      fVar33 = pfVar2[1];
      fVar34 = pfVar2[2];
      pfVar2 = (float *)(param_11 + 8 + lVar7);
      fVar24 = *(float *)(puVar3 + 1) * fVar17 + fVar16 * *(float *)(puVar4 + 1) +
               fVar27 * *(float *)(puVar5 + 1) + fVar28 * *(float *)(puVar6 + 1);
      fVar26 = pfVar2[-2];
      fVar35 = pfVar2[-1];
      fVar20 = *pfVar2;
      pfVar2 = (float *)(param_13 + 8 + lVar7);
      fVar19 = *(float *)(puVar3 + 3) * fVar17 + fVar16 * *(float *)(puVar4 + 3) +
               fVar27 * *(float *)(puVar5 + 3) + fVar28 * *(float *)(puVar6 + 3);
      fVar21 = pfVar2[-2];
      fVar31 = pfVar2[-1];
      fVar25 = *pfVar2;
      fVar22 = *(float *)(puVar3 + 5) * fVar17 + fVar16 * *(float *)(puVar4 + 5) +
               fVar27 * *(float *)(puVar5 + 5) + fVar28 * *(float *)(puVar6 + 5);
      *(undefined8 *)(param_10 + lVar9) =
           CONCAT44((float)((ulong)puVar3[6] >> 0x20) * fVar17 +
                    (float)((ulong)puVar4[6] >> 0x20) * fVar16 +
                    (float)((ulong)puVar5[6] >> 0x20) * fVar27 +
                    (float)((ulong)puVar6[6] >> 0x20) * fVar28 + fVar15 * fVar29 + fVar13 * fVar33 +
                    fVar11 * fVar34,
                    (float)puVar3[6] * fVar17 + (float)puVar4[6] * fVar16 +
                    (float)puVar5[6] * fVar27 + (float)puVar6[6] * fVar28 + fVar14 * fVar29 +
                    fVar12 * fVar33 + fVar10 * fVar34);
      *(float *)((undefined8 *)(param_10 + lVar9) + 1) =
           fVar23 * fVar17 + fVar16 * fVar18 + fVar27 * fVar30 + fVar28 * fVar32 + fVar24 * fVar29 +
           fVar19 * fVar33 + fVar22 * fVar34;
      *(float *)((undefined8 *)(param_12 + lVar9) + 1) =
           fVar26 * fVar24 + fVar19 * fVar35 + fVar22 * fVar20;
      *(undefined8 *)(param_12 + lVar9) =
           CONCAT44(fVar15 * fVar26 + fVar13 * fVar35 + fVar11 * fVar20,
                    fVar14 * fVar26 + fVar12 * fVar35 + fVar10 * fVar20);
      puVar3 = (undefined8 *)(param_14 + lVar9);
      *puVar3 = CONCAT44(fVar15 * fVar21 + fVar13 * fVar31 + fVar11 * fVar25,
                         fVar14 * fVar21 + fVar12 * fVar31 + fVar10 * fVar25);
      fVar10 = pfVar2[1];
      *(float *)(puVar3 + 1) = fVar21 * fVar24 + fVar19 * fVar31 + fVar22 * fVar25;
      *(float *)((long)puVar3 + 0xc) = fVar10;
      lVar9 = lVar9 + (param_8 & 0xffffffff);
      lVar8 = lVar8 + (param_5 & 0xffffffff);
      lVar7 = lVar7 + (param_7 & 0xffffffff);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}




void FUN_1010a6e4c(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  int param_6,ulong param_7,uint param_8,long param_9,long param_10,long param_11,
                  long param_12)

{
  ushort *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  
  if (param_6 != 0) {
    lVar7 = 0;
    lVar8 = 0;
    lVar9 = 0;
    do {
      puVar1 = (ushort *)(param_4 + 4 + lVar8);
      pfVar2 = (float *)(param_3 + 8 + lVar8);
      puVar3 = (undefined8 *)(param_1 + (ulong)puVar1[-2] * 0x40);
      fVar18 = pfVar2[-2];
      fVar17 = pfVar2[-1];
      uVar16 = puVar3[6];
      puVar4 = (undefined8 *)(param_1 + (ulong)puVar1[-1] * 0x40);
      uVar24 = puVar4[6];
      puVar5 = (undefined8 *)(param_1 + (ulong)*puVar1 * 0x40);
      fVar25 = *pfVar2;
      fVar22 = pfVar2[1];
      uVar26 = puVar5[6];
      puVar6 = (undefined8 *)(param_1 + (ulong)puVar1[1] * 0x40);
      fVar14 = (float)*puVar3 * fVar18 + (float)*puVar4 * fVar17 + (float)*puVar5 * fVar25 +
               (float)*puVar6 * fVar22;
      fVar15 = (float)((ulong)*puVar3 >> 0x20) * fVar18 + (float)((ulong)*puVar4 >> 0x20) * fVar17 +
               (float)((ulong)*puVar5 >> 0x20) * fVar25 + (float)((ulong)*puVar6 >> 0x20) * fVar22;
      fVar12 = (float)puVar3[2] * fVar18 + (float)puVar4[2] * fVar17 + (float)puVar5[2] * fVar25 +
               (float)puVar6[2] * fVar22;
      fVar13 = (float)((ulong)puVar3[2] >> 0x20) * fVar18 +
               (float)((ulong)puVar4[2] >> 0x20) * fVar17 +
               (float)((ulong)puVar5[2] >> 0x20) * fVar25 +
               (float)((ulong)puVar6[2] >> 0x20) * fVar22;
      fVar19 = *(float *)(puVar3 + 1) * fVar18 + fVar17 * *(float *)(puVar4 + 1) +
               fVar25 * *(float *)(puVar5 + 1) + fVar22 * *(float *)(puVar6 + 1);
      fVar10 = (float)puVar3[4] * fVar18 + (float)puVar4[4] * fVar17 + (float)puVar5[4] * fVar25 +
               (float)puVar6[4] * fVar22;
      fVar11 = (float)((ulong)puVar3[4] >> 0x20) * fVar18 +
               (float)((ulong)puVar4[4] >> 0x20) * fVar17 +
               (float)((ulong)puVar5[4] >> 0x20) * fVar25 +
               (float)((ulong)puVar6[4] >> 0x20) * fVar22;
      uVar28 = puVar6[6];
      pfVar2 = (float *)(param_9 + 4 + lVar7);
      fVar20 = *(float *)(puVar3 + 3) * fVar18 + fVar17 * *(float *)(puVar4 + 3) +
               fVar25 * *(float *)(puVar5 + 3) + fVar22 * *(float *)(puVar6 + 3);
      fVar27 = pfVar2[-1];
      fVar23 = *pfVar2;
      fVar29 = pfVar2[1];
      fVar21 = *(float *)(puVar3 + 5) * fVar18 + fVar17 * *(float *)(puVar4 + 5) +
               fVar25 * *(float *)(puVar5 + 5) + fVar22 * *(float *)(puVar6 + 5);
      *(float *)((undefined8 *)(param_10 + lVar9) + 1) =
           *(float *)(puVar3 + 7) * fVar18 + fVar17 * *(float *)(puVar4 + 7) +
           fVar25 * *(float *)(puVar5 + 7) + fVar22 * *(float *)(puVar6 + 7) + fVar19 * fVar27 +
           fVar20 * fVar23 + fVar21 * fVar29;
      *(undefined8 *)(param_10 + lVar9) =
           CONCAT44((float)((ulong)uVar16 >> 0x20) * fVar18 +
                    (float)((ulong)uVar24 >> 0x20) * fVar17 +
                    (float)((ulong)uVar26 >> 0x20) * fVar25 +
                    (float)((ulong)uVar28 >> 0x20) * fVar22 + fVar15 * fVar27 + fVar13 * fVar23 +
                    fVar11 * fVar29,
                    (float)uVar16 * fVar18 + (float)uVar24 * fVar17 + (float)uVar26 * fVar25 +
                    (float)uVar28 * fVar22 + fVar14 * fVar27 + fVar12 * fVar23 + fVar10 * fVar29);
      pfVar2 = (float *)(param_11 + 8 + lVar7);
      fVar17 = pfVar2[-2];
      fVar18 = pfVar2[-1];
      fVar22 = *pfVar2;
      *(float *)((undefined8 *)(param_12 + lVar9) + 1) =
           fVar17 * fVar19 + fVar20 * fVar18 + fVar21 * fVar22;
      *(undefined8 *)(param_12 + lVar9) =
           CONCAT44(fVar15 * fVar17 + fVar13 * fVar18 + fVar11 * fVar22,
                    fVar14 * fVar17 + fVar12 * fVar18 + fVar10 * fVar22);
      lVar9 = lVar9 + (ulong)param_8;
      lVar8 = lVar8 + (param_5 & 0xffffffff);
      lVar7 = lVar7 + (param_7 & 0xffffffff);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}




void FUN_1010a7028(long param_1,undefined8 param_2,long param_3,ushort *param_4,undefined8 param_5,
                  int param_6,uint param_7,uint param_8,long param_9,long param_10)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  
  if (param_6 * 3 != 0) {
    uVar9 = (ulong)*param_4;
    pfVar6 = (float *)(param_10 + 8);
    pfVar7 = (float *)(param_9 + 4);
    uVar8 = 1;
    do {
      fVar14 = *(float *)(param_3 + (ulong)(uVar8 - 1) * 4);
      puVar2 = (undefined8 *)(param_1 + uVar9 * 0x40);
      uVar10 = *puVar2;
      uVar11 = puVar2[2];
      uVar12 = puVar2[4];
      uVar15 = puVar2[6];
      fVar13 = *(float *)(param_3 + (ulong)uVar8 * 4);
      puVar3 = (undefined8 *)(param_1 + (ulong)param_4[uVar8] * 0x40);
      uVar16 = *puVar3;
      uVar17 = puVar3[2];
      uVar18 = puVar3[4];
      uVar20 = puVar3[6];
      fVar21 = *(float *)(param_3 + (ulong)(uVar8 + 1) * 4);
      puVar4 = (undefined8 *)(param_1 + (ulong)param_4[uVar8 + 1] * 0x40);
      uVar22 = *puVar4;
      uVar25 = puVar4[2];
      uVar26 = puVar4[4];
      uVar27 = puVar4[6];
      uVar1 = uVar8 + 2;
      uVar9 = (ulong)param_4[uVar1];
      fVar24 = *(float *)(param_3 + (ulong)uVar1 * 4);
      puVar5 = (undefined8 *)(param_1 + uVar9 * 0x40);
      uVar23 = *puVar5;
      uVar28 = puVar5[2];
      uVar29 = puVar5[4];
      uVar30 = puVar5[6];
      fVar31 = pfVar7[-1];
      fVar19 = *pfVar7;
      fVar32 = pfVar7[1];
      uVar8 = uVar8 + 3;
      *pfVar6 = *(float *)(puVar2 + 7) * fVar14 + fVar13 * *(float *)(puVar3 + 7) +
                fVar21 * *(float *)(puVar4 + 7) + fVar24 * *(float *)(puVar5 + 7) +
                (*(float *)(puVar2 + 1) * fVar14 + fVar13 * *(float *)(puVar3 + 1) +
                 fVar21 * *(float *)(puVar4 + 1) + fVar24 * *(float *)(puVar5 + 1)) * fVar31 +
                (*(float *)(puVar2 + 3) * fVar14 + fVar13 * *(float *)(puVar3 + 3) +
                 fVar21 * *(float *)(puVar4 + 3) + fVar24 * *(float *)(puVar5 + 3)) * fVar19 +
                (*(float *)(puVar2 + 5) * fVar14 + fVar13 * *(float *)(puVar3 + 5) +
                 fVar21 * *(float *)(puVar4 + 5) + fVar24 * *(float *)(puVar5 + 5)) * fVar32;
      *(ulong *)(pfVar6 + -2) =
           CONCAT44((float)((ulong)uVar15 >> 0x20) * fVar14 +
                    (float)((ulong)uVar20 >> 0x20) * fVar13 +
                    (float)((ulong)uVar27 >> 0x20) * fVar21 +
                    (float)((ulong)uVar30 >> 0x20) * fVar24 +
                    ((float)((ulong)uVar10 >> 0x20) * fVar14 +
                     (float)((ulong)uVar16 >> 0x20) * fVar13 +
                     (float)((ulong)uVar22 >> 0x20) * fVar21 +
                    (float)((ulong)uVar23 >> 0x20) * fVar24) * fVar31 +
                    ((float)((ulong)uVar11 >> 0x20) * fVar14 +
                     (float)((ulong)uVar17 >> 0x20) * fVar13 +
                     (float)((ulong)uVar25 >> 0x20) * fVar21 +
                    (float)((ulong)uVar28 >> 0x20) * fVar24) * fVar19 +
                    ((float)((ulong)uVar12 >> 0x20) * fVar14 +
                     (float)((ulong)uVar18 >> 0x20) * fVar13 +
                     (float)((ulong)uVar26 >> 0x20) * fVar21 +
                    (float)((ulong)uVar29 >> 0x20) * fVar24) * fVar32,
                    (float)uVar15 * fVar14 + (float)uVar20 * fVar13 + (float)uVar27 * fVar21 +
                    (float)uVar30 * fVar24 +
                    ((float)uVar10 * fVar14 + (float)uVar16 * fVar13 + (float)uVar22 * fVar21 +
                    (float)uVar23 * fVar24) * fVar31 +
                    ((float)uVar11 * fVar14 + (float)uVar17 * fVar13 + (float)uVar25 * fVar21 +
                    (float)uVar28 * fVar24) * fVar19 +
                    ((float)uVar12 * fVar14 + (float)uVar18 * fVar13 + (float)uVar26 * fVar21 +
                    (float)uVar29 * fVar24) * fVar32);
      pfVar6 = (float *)((long)pfVar6 + (ulong)param_8);
      pfVar7 = (float *)((long)pfVar7 + (ulong)param_7);
    } while (uVar1 < (uint)(param_6 * 3));
  }
  return;
}




void FUN_1010a71c8(long param_1)

{
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = *(undefined8 *)(param_1 + 0x50);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  FUN_100663b94(&local_20,0);
  return;
}




void FUN_1010a71fc(long param_1)

{
  undefined4 *puVar1;
  
  FUN_1010b53c4(0,param_1 + 0x20);
  puVar1 = *(undefined4 **)(param_1 + 0x60);
  FUN_1010b5248(*puVar1,*(long *)(param_1 + 0x68) + 8,*(long *)(param_1 + 0x68) + 0x18,puVar1[4],
                puVar1[5],0xffff,0);
  return;
}




void FUN_1010a7240(long param_1,undefined8 param_2,long *param_3,long *param_4,long param_5,
                  undefined8 param_6)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  void *pvVar14;
  long lVar15;
  int *piVar16;
  int *piVar17;
  long *plVar18;
  void *pvVar19;
  undefined8 *puVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 local_a0;
  undefined4 uStack_98;
  float afStack_94 [5];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  plVar18 = (long *)(param_5 + -8);
  plVar6 = (long *)(**(code **)(*plVar18 + 0x10))(plVar18);
  puVar7 = (undefined8 *)(**(code **)(*plVar18 + 0x18))(plVar18);
  plVar18 = *(long **)(*plVar6 + 0x28);
  if (*(int *)(*plVar6 + 8) == 1 && plVar18 != (long *)0x0) {
    lVar8 = (**(code **)(*param_4 + 0x48))(param_4);
    lVar15 = *plVar18;
    if (lVar15 != 0) {
      lVar10 = plVar6[2];
      uVar2 = *(undefined1 *)(param_5 + 3);
      do {
        if (lVar8 == 0) {
LAB_1010a73d8:
          if (lVar10 == 0) {
            puVar20 = (undefined8 *)(lVar15 + 8);
LAB_1010a7424:
            uVar9 = *puVar20;
          }
          else {
            if (*(uint *)(lVar10 + 0x10) != 0) {
              lVar11 = 0;
              do {
                if (*(long *)(*(long *)(lVar10 + 0x18) + lVar11) == lVar15) {
                  puVar20 = (undefined8 *)(*(long *)(lVar10 + 8) + lVar11);
                  goto LAB_1010a7424;
                }
                lVar11 = lVar11 + 8;
              } while ((ulong)*(uint *)(lVar10 + 0x10) * 8 - lVar11 != 0);
            }
            uVar9 = 0;
          }
          plVar6 = (long *)(**(code **)(*param_3 + 0x10))
                                     (param_3,*(undefined8 *)(param_1 + 0x10),uVar9,uVar2);
          if (plVar6 != (long *)0x0) {
            piVar17 = *(int **)(param_1 + 0x10);
            do {
              while (*piVar17 != 0) {
                ClearExclusiveLocal();
              }
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar17,0x10);
              if (bVar4) {
                *piVar17 = 100;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            uVar1 = piVar17[10];
            piVar16 = piVar17 + (ulong)uVar1 * 4 + 2;
            pvVar19 = *(void **)piVar16;
            if ((pvVar19 == (void *)0x0) ||
               (uVar12 = (ulong)*(uint *)((long)pvVar19 + 0x20000), pvVar14 = pvVar19,
               *(uint *)((long)pvVar19 + 0x20000) < 0x77)) {
              pvVar14 = *(void **)(piVar17 + (ulong)uVar1 * 4 + 4);
              if (pvVar14 == (void *)0x0) {
                pvVar14 = operator_new(0x20010);
                uVar12 = 0x20000;
                *(undefined4 *)((long)pvVar14 + 0x20000) = 0x20000;
                *(void **)((long)pvVar14 + 0x20008) = pvVar19;
                *(void **)piVar16 = pvVar14;
              }
              else {
                uVar9 = *(undefined8 *)((long)pvVar14 + 0x20008);
                *(void **)((long)pvVar14 + 0x20008) = pvVar19;
                *(void **)piVar16 = pvVar14;
                *(undefined8 *)(piVar17 + (ulong)uVar1 * 4 + 4) = uVar9;
                uVar12 = 0x20000;
                *(undefined4 *)((long)pvVar14 + 0x20000) = 0x20000;
              }
            }
            *(int *)((long)pvVar14 + 0x20000) = (int)uVar12 + -0x77;
            puVar20 = (undefined8 *)((long)pvVar14 + 0x20000 + (7 - uVar12) & 0xfffffffffffffff8);
            *piVar17 = 0;
            *puVar20 = &DAT_10182e418;
            puVar20[1] = plVar6;
            puVar20[2] = 0;
            puVar20[3] = 0;
            uVar9 = (**(code **)(*plVar6 + 0x10))(plVar6);
            puVar20[3] = uVar9;
            *puVar20 = &PTR_FUN_10182e3e8;
            uVar22 = puVar7[1];
            uVar9 = *puVar7;
            uVar25 = puVar7[3];
            uVar24 = puVar7[2];
            uVar27 = puVar7[4];
            uVar30 = puVar7[7];
            uVar29 = puVar7[6];
            puVar20[9] = puVar7[5];
            puVar20[8] = uVar27;
            puVar20[0xb] = uVar30;
            puVar20[10] = uVar29;
            puVar20[5] = uVar22;
            puVar20[4] = uVar9;
            puVar20[7] = uVar25;
            puVar20[6] = uVar24;
            puVar20[0xc] = lVar15;
            puVar20[0xd] = plVar18;
            FUN_1010b2aa4(param_6,puVar20);
          }
        }
        else {
          lVar11 = 0;
          afStack_94[0] = (float)((ulong)*(undefined8 *)(lVar15 + 0x20) >> 0x20);
          afStack_94[1] = (float)*(undefined8 *)(lVar15 + 0x28);
          afStack_94[2] = (float)((ulong)*(undefined8 *)(lVar15 + 0x28) >> 0x20);
          local_70 = *(undefined8 *)(lVar15 + 0x18);
          local_68 = *(undefined4 *)(lVar15 + 0x20);
          local_80 = CONCAT44(afStack_94[1],afStack_94[0]);
          local_78 = afStack_94[2];
          afStack_94[0] = *(float *)(puVar7 + 6);
          local_a0 = puVar7[6];
          uStack_98 = *(undefined4 *)(puVar7 + 7);
          afStack_94[1] = (float)*(undefined4 *)((long)puVar7 + 0x34);
          afStack_94[2] = (float)*(undefined4 *)(puVar7 + 7);
          puVar20 = puVar7;
          fVar21 = afStack_94[0];
          fVar23 = afStack_94[0];
          while( true ) {
            lVar13 = 0;
            do {
              fVar26 = *(float *)((long)puVar20 + lVar13 * 4);
              fVar28 = *(float *)((long)&local_70 + lVar13) * fVar26;
              fVar26 = (float)NEON_fminnm(fVar28,*(float *)((long)&local_80 + lVar13) * fVar26);
              fVar23 = fVar26 + fVar23;
              fVar21 = fVar21 + fVar28;
              lVar13 = lVar13 + 4;
            } while (lVar13 != 0xc);
            *(float *)((long)&local_a0 + lVar11 * 4) = fVar23;
            afStack_94[lVar11] = fVar21;
            lVar11 = lVar11 + 1;
            if (lVar11 == 3) break;
            fVar23 = *(float *)((long)&local_a0 + lVar11 * 4);
            fVar21 = afStack_94[lVar11];
            puVar20 = (undefined8 *)((long)puVar20 + 4);
          }
          iVar5 = FUN_1010cf6f4(lVar8 + 0x44,6,&local_a0,afStack_94);
          if (iVar5 != 1) goto LAB_1010a73d8;
        }
        lVar15 = *(long *)(lVar15 + 0x58);
      } while (lVar15 != 0);
    }
  }
  return;
}




void FUN_1010a757c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1010b240c();
  operator_delete(pvVar1);
  return;
}




void FUN_1010a7590(void)

{
  return;
}




void FUN_1010a7594(void)

{
  return;
}




void FUN_1010a759c(void)

{
  return;
}




void FUN_1010a75a4(void)

{
  return;
}




void FUN_1010a75ac(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)(param_2 + 8);
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
    puVar2 = *(undefined8 **)(param_2 + 0x10);
    param_1[1] = (long)puVar2;
    *puVar2 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(param_2 + 0x10);
    *puVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 **)(*(long *)(param_2 + 8) + 8) = puVar2;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_1010a7610(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1010a7610(param_1,*param_2);
    FUN_1010a7610(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_1010a7650(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1010a76cc(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1010a7650(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1010a774c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1010a77c8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1010a774c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1010a7848(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1010a78c4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1010a7848(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1010a7944(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_1010a7650(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        *puVar3 = *puVar2;
        lVar4 = lVar4 + -8;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_1010a79b0(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_1010a774c(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        *puVar3 = *puVar2;
        lVar4 = lVar4 + -8;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_1010a7a1c(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_1010a7848(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        *puVar3 = *puVar2;
        lVar4 = lVar4 + -8;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




undefined1  [16] FUN_1010a7a88(long param_1,uint *param_2,undefined8 *param_3)

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
    puVar4 = (undefined8 *)(param_1 + 8);
    puVar2 = (undefined8 *)*puVar3;
    do {
      while (puVar3 = puVar2, *param_2 < *(uint *)(puVar3 + 4)) {
        puVar4 = puVar3;
        puVar2 = (undefined8 *)*puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_1010a7afc;
      }
      if (*param_2 <= *(uint *)(puVar3 + 4)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_1010a7afc:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x30);
    uVar6 = *param_3;
    *(undefined8 *)((long)pvVar5 + 0x28) = param_3[1];
    *(undefined8 *)((long)pvVar5 + 0x20) = uVar6;
    FUN_1010a7b50(param_1,puVar3,puVar4,pvVar5);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar5;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_1010a7b50(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




undefined8 FUN_1010a7ba4(long param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 != (long *)0x0) {
    uVar1 = *param_2;
    plVar2 = plVar3;
    do {
      if (*(uint *)(plVar4 + 4) >= uVar1) {
        plVar2 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar1];
    } while (plVar4 != (long *)0x0);
    if ((plVar2 != plVar3) && (*(uint *)(plVar2 + 4) <= uVar1)) {
      FUN_1010a7c04();
      return 1;
    }
  }
  return 0;
}




long * FUN_1010a7c04(undefined8 *param_1,void *param_2)

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
  FUN_10012bc9c(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




void FUN_1010a7c98(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1010a7d18(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004e6bc8();
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1010a5ce8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar3 = FUN_1004e6948();
  lVar4 = FUN_1004e697c(uVar3,0x815f1c7b);
  puVar1 = (undefined8 *)0x0;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x10);
  }
  lVar4 = FUN_1010a7d6c();
  uVar3 = FUN_1004e6948();
  FUN_1004e69d4(uVar3,lVar4,0xb875ca64);
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  FUN_1010a50ec(*(undefined8 *)(param_1[1] + 0x18),*param_1,&uStack_1c0,lVar4 + 0x10,*puVar1);
  plVar2 = *(long **)(param_1[1] + 0x20);
  (**(code **)(*plVar2 + 0x18))(plVar2,*param_1,&uStack_1c0,*(undefined8 *)(param_1[1] + 0x28));
  return;
}




void thunk_FUN_1010a5db4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_1004e6948();
  lVar3 = FUN_1004e697c(uVar2,0xb875ca64);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0001010a5df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1[1] + 0x20) + 0x20))(*(long **)(param_1[1] + 0x20),*param_1,lVar1)
  ;
  return;
}




void FUN_1010a7d34(long *param_1)

{
  FUN_1010a4fb4(*param_1,1);
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
  return;
}




void FUN_1010a7d6c(void)

{
  undefined8 *puVar1;
  long lVar2;
  
  FUN_1004e6cb8(0x1e8);
  puVar1 = (undefined8 *)FUN_1004e6bb8();
  lVar2 = 0x10;
  do {
    *(undefined8 *)((long)puVar1 + lVar2) = 0;
    ((undefined8 *)((long)puVar1 + lVar2))[1] = 0;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0xd0);
  puVar1[0x3c] = 0;
  puVar1[0x39] = 0;
  puVar1[0x38] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x35] = 0;
  puVar1[0x34] = 0;
  puVar1[0x37] = 0;
  puVar1[0x36] = 0;
  puVar1[0x31] = 0;
  puVar1[0x30] = 0;
  puVar1[0x33] = 0;
  puVar1[0x32] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_thunk_FUN_1004e6bc8_10182e468;
  return;
}




void FUN_1010a7df8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004e6bc8();
  operator_delete(pvVar1);
  return;
}




void FUN_1010a7e0c(void)

{
  thunk_FUN_1004e4dcc(&DAT_101dc0ba0);
  ___cxa_atexit(thunk_FUN_1004e4e84,&DAT_101dc0ba0,0x100000000);
  return;
}




void FUN_1010a7e48(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  return;
}




void FUN_1010a7e60(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar1 = 0;
    do {
      FUN_1010a871c(DAT_101ea5ab8,*(undefined8 *)(param_1 + 8 + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x48));
  }
  return;
}




undefined8 FUN_1010a7eb4(undefined8 param_1)

{
  FUN_1010a7e60();
  return param_1;
}




void FUN_1010a7ed8(float param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar7 = (ulong)*(uint *)(param_2 + 9);
  if (*(uint *)(param_2 + 9) != 0) {
    do {
      param_2 = param_2 + 1;
      plVar8 = (long *)*param_2;
      fVar12 = *(float *)(plVar8 + 1);
      fVar13 = *(float *)(plVar8 + 3);
      fVar9 = fVar12 + param_1 * fVar13;
      fVar11 = *(float *)(*plVar8 + 4);
      if (*(int *)((long)plVar8 + 0x14) == 1) {
        fVar14 = *(float *)((long)plVar8 + 0x1c);
        fVar11 = fVar11 - (fVar14 + *(float *)(plVar8 + 4));
        bVar1 = false;
        bVar4 = false;
        if (0.0 < fVar13) {
          bVar1 = false;
          bVar4 = true;
          if (!NAN(fVar12) && !NAN(fVar11)) {
            bVar1 = fVar12 < fVar11;
            bVar4 = false;
          }
        }
        bVar2 = true;
        bVar5 = false;
        if (bVar1 != bVar4) {
          bVar2 = false;
          bVar5 = true;
          if (!NAN(fVar9) && !NAN(fVar11)) {
            bVar2 = fVar9 < fVar11;
            bVar5 = false;
          }
        }
        if (bVar2 == bVar5) {
          *(int *)((long)plVar8 + 0x24) = *(int *)((long)plVar8 + 0x24) + 1;
        }
        else {
          bVar1 = false;
          bVar4 = true;
          bVar2 = false;
          if (fVar13 < 0.0) {
            bVar1 = false;
            bVar4 = false;
            bVar2 = true;
            if (!NAN(fVar12) && !NAN(fVar14)) {
              bVar1 = fVar12 < fVar14;
              bVar4 = fVar12 == fVar14;
              bVar2 = false;
            }
          }
          bVar5 = false;
          bVar3 = false;
          bVar6 = false;
          if (!bVar4 && bVar1 == bVar2) {
            bVar5 = false;
            bVar3 = false;
            bVar6 = true;
            if (!NAN(fVar9) && !NAN(fVar14)) {
              bVar5 = fVar9 < fVar14;
              bVar3 = fVar9 == fVar14;
              bVar6 = false;
            }
          }
          if (bVar3 || bVar5 != bVar6) {
            *(int *)(plVar8 + 5) = (int)plVar8[5] + 1;
          }
        }
        fVar10 = (float)_fmodf(fVar9 - fVar14);
        fVar10 = fVar10 + fVar14;
      }
      else {
        fVar10 = *(float *)((long)plVar8 + 0x1c);
        if (*(char *)((long)plVar8 + 0x2c) == '\0') {
          fVar14 = fVar11 - (fVar10 + *(float *)(plVar8 + 4));
          bVar1 = false;
          bVar4 = false;
          if (0.0 < fVar13) {
            bVar1 = false;
            bVar4 = true;
            if (!NAN(fVar12) && !NAN(fVar14)) {
              bVar1 = fVar12 < fVar14;
              bVar4 = false;
            }
          }
          bVar2 = true;
          bVar5 = false;
          if (bVar1 != bVar4) {
            bVar2 = false;
            bVar5 = true;
            if (!NAN(fVar9) && !NAN(fVar14)) {
              bVar2 = fVar9 < fVar14;
              bVar5 = false;
            }
          }
          if (bVar2 != bVar5) {
            bVar1 = false;
            bVar4 = true;
            bVar2 = false;
            if (fVar13 < 0.0) {
              bVar1 = false;
              bVar4 = false;
              bVar2 = true;
              if (!NAN(fVar12) && !NAN(fVar10)) {
                bVar1 = fVar12 < fVar10;
                bVar4 = fVar12 == fVar10;
                bVar2 = false;
              }
            }
            bVar5 = false;
            bVar3 = false;
            bVar6 = false;
            if (!bVar4 && bVar1 == bVar2) {
              bVar5 = false;
              bVar3 = false;
              bVar6 = true;
              if (!NAN(fVar9) && !NAN(fVar10)) {
                bVar5 = fVar9 < fVar10;
                bVar3 = fVar9 == fVar10;
                bVar6 = false;
              }
            }
            if (!bVar3 && bVar5 == bVar6) goto LAB_1010a7f98;
          }
          *(undefined1 *)((long)plVar8 + 0x2c) = 1;
        }
LAB_1010a7f98:
        NEON_fminnm(fVar9,fVar11 - *(float *)(plVar8 + 4));
      }
      *(float *)(plVar8 + 1) = fVar10;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}




void FUN_1010a7fe4(long *param_1,undefined8 *param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  undefined8 *puVar7;
  long *plVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_60 [8];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  puVar3 = (undefined8 *)param_1[10];
  uVar6 = *(ushort *)(*param_1 + 2);
  if (puVar3 == (undefined8 *)0x0) {
    uVar4 = (ulong)*(uint *)(param_1 + 9);
    if (*(uint *)(param_1 + 9) != 0) {
      fVar9 = 0.0;
      plVar8 = param_1;
      do {
        plVar8 = plVar8 + 1;
        fVar9 = *(float *)(*plVar8 + 0x10) + fVar9;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      plVar8 = (long *)param_1[1];
      (**(code **)(*plVar8 + 0x20))
                ((int)plVar8[1],*(undefined8 *)(*plVar8 + 0x10),*(int *)((long)plVar8 + 0x14) == 1,
                 param_2);
      FUN_1010a8210(*(float *)(plVar8 + 2) * (1.0 / fVar9),param_2,*(undefined2 *)(*param_1 + 2));
      if (1 < *(uint *)(param_1 + 9)) {
        uVar4 = 2;
        do {
          plVar8 = (long *)param_1[uVar4];
          (**(code **)(*plVar8 + 0x20))
                    ((int)plVar8[1],*(undefined8 *)(*plVar8 + 0x10),
                     *(int *)((long)plVar8 + 0x14) == 1,auStack_60 + -(ulong)((uint)uVar6 * 0x30));
          if (*(int *)((long)plVar8 + 0xc) == 0) {
            FUN_1010a8278(*(float *)(plVar8 + 2) * (1.0 / fVar9),param_2,
                          auStack_60 + -(ulong)((uint)uVar6 * 0x30),*(undefined2 *)(*param_1 + 2));
          }
          bVar2 = uVar4 < *(uint *)(param_1 + 9);
          uVar4 = uVar4 + 1;
        } while (bVar2);
      }
      uVar6 = *(ushort *)(param_1 + 0xd);
      if (uVar6 != 0) {
        lVar5 = 0;
        uVar4 = 0;
        do {
          uVar1 = *(ushort *)(param_1[0xc] + uVar4 * 2);
          if (uVar1 < *(ushort *)(*param_1 + 2)) {
            puVar7 = param_2 + (ulong)uVar1 * 6;
            puVar3 = (undefined8 *)(param_1[0xb] + lVar5);
            uVar11 = puVar3[1];
            uVar10 = *puVar3;
            uVar12 = puVar3[2];
            uVar14 = puVar3[5];
            uVar13 = puVar3[4];
            puVar7[3] = puVar3[3];
            puVar7[2] = uVar12;
            puVar7[5] = uVar14;
            puVar7[4] = uVar13;
            puVar7[1] = uVar11;
            *puVar7 = uVar10;
            uVar6 = *(ushort *)(param_1 + 0xd);
          }
          uVar4 = uVar4 + 1;
          lVar5 = lVar5 + 0x30;
        } while (uVar4 < uVar6);
      }
    }
  }
  else if (uVar6 != 0) {
    uVar11 = puVar3[1];
    uVar10 = *puVar3;
    uVar12 = puVar3[2];
    uVar14 = puVar3[5];
    uVar13 = puVar3[4];
    param_2[3] = puVar3[3];
    param_2[2] = uVar12;
    param_2[5] = uVar14;
    param_2[4] = uVar13;
    param_2[1] = uVar11;
    *param_2 = uVar10;
    if (1 < *(ushort *)(*param_1 + 2)) {
      uVar4 = 1;
      lVar5 = 0x30;
      do {
        puVar3 = (undefined8 *)((long)param_2 + lVar5);
        puVar7 = (undefined8 *)(param_1[10] + lVar5);
        uVar11 = puVar7[1];
        uVar10 = *puVar7;
        uVar12 = puVar7[2];
        uVar14 = puVar7[5];
        uVar13 = puVar7[4];
        puVar3[3] = puVar7[3];
        puVar3[2] = uVar12;
        puVar3[5] = uVar14;
        puVar3[4] = uVar13;
        puVar3[1] = uVar11;
        *puVar3 = uVar10;
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x30;
      } while (uVar4 < *(ushort *)(*param_1 + 2));
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1010a8210(float param_1,long param_2,uint param_3)

{
  ulong uVar1;
  float *pfVar2;
  
  if (param_3 != 0) {
    uVar1 = (ulong)param_3;
    pfVar2 = (float *)(param_2 + 0x18);
    do {
      *(ulong *)(pfVar2 + -4) =
           CONCAT44((float)((ulong)*(undefined8 *)(pfVar2 + -4) >> 0x20) * param_1,
                    (float)*(undefined8 *)(pfVar2 + -4) * param_1);
      *(ulong *)(pfVar2 + -6) =
           CONCAT44((float)((ulong)*(undefined8 *)(pfVar2 + -6) >> 0x20) * param_1,
                    (float)*(undefined8 *)(pfVar2 + -6) * param_1);
      *(ulong *)(pfVar2 + -2) =
           CONCAT44((float)((ulong)*(undefined8 *)(pfVar2 + -2) >> 0x20) * param_1,
                    (float)*(undefined8 *)(pfVar2 + -2) * param_1);
      *pfVar2 = *pfVar2 * param_1;
      *(ulong *)(pfVar2 + 2) =
           CONCAT44((float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20) * param_1,
                    (float)*(undefined8 *)(pfVar2 + 2) * param_1);
      pfVar2[4] = pfVar2[4] * param_1;
      pfVar2[1] = 0.0;
      pfVar2[5] = 0.0;
      pfVar2 = pfVar2 + 0xc;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}




void FUN_1010a8278(float param_1,long param_2,long param_3,uint param_4)

{
  float fVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar7;
  undefined8 uVar6;
  float fVar8;
  float fVar10;
  undefined8 uVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (param_4 != 0) {
    uVar2 = (ulong)param_4;
    puVar3 = (undefined8 *)(param_3 + 0x10);
    puVar4 = (undefined8 *)(param_2 + 0x10);
    do {
      fVar5 = (float)puVar4[-2];
      fVar11 = (float)puVar3[-2];
      fVar7 = (float)((ulong)puVar4[-2] >> 0x20);
      fVar12 = (float)((ulong)puVar3[-2] >> 0x20);
      fVar8 = (float)puVar4[-1];
      fVar13 = (float)puVar3[-1];
      fVar10 = (float)((ulong)puVar4[-1] >> 0x20);
      fVar14 = (float)((ulong)puVar3[-1] >> 0x20);
      fVar1 = -param_1;
      if (0.0 <= fVar11 * fVar5 + fVar12 * fVar7 + fVar13 * fVar8 + fVar14 * fVar10) {
        fVar1 = param_1;
      }
      puVar4[-1] = CONCAT44(fVar10 + fVar14 * fVar1,fVar8 + fVar13 * fVar1);
      puVar4[-2] = CONCAT44(fVar7 + fVar12 * fVar1,fVar5 + fVar11 * fVar1);
      uVar6 = *puVar3;
      puVar4[1] = CONCAT44((float)((ulong)puVar4[1] >> 0x20) +
                           param_1 * (float)((ulong)puVar3[1] >> 0x20),
                           (float)puVar4[1] + param_1 * (float)puVar3[1]);
      *puVar4 = CONCAT44((float)((ulong)*puVar4 >> 0x20) + param_1 * (float)((ulong)uVar6 >> 0x20),
                         (float)*puVar4 + param_1 * (float)uVar6);
      uVar9 = puVar3[3];
      uVar6 = puVar3[2];
      *(float *)(puVar4 + 3) = *(float *)(puVar4 + 3) + param_1 * (float)uVar9;
      *(float *)((long)puVar4 + 0x1c) =
           *(float *)((long)puVar4 + 0x1c) + param_1 * (float)((ulong)uVar9 >> 0x20);
      *(float *)(puVar4 + 2) = *(float *)(puVar4 + 2) + param_1 * (float)uVar6;
      *(float *)((long)puVar4 + 0x14) =
           *(float *)((long)puVar4 + 0x14) + param_1 * (float)((ulong)uVar6 >> 0x20);
      puVar3 = puVar3 + 6;
      puVar4 = puVar4 + 6;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}




uint FUN_1010a82e4(long *param_1,undefined8 *param_2,uint param_3,ushort param_4,int param_5)

{
  undefined8 *puVar1;
  short sVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  short *psVar8;
  ushort uVar9;
  ulong uVar10;
  short *psVar11;
  ushort *puVar12;
  long lVar13;
  ushort *puVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ushort auStack_80 [4];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  uVar6 = *(uint *)(param_1 + 9);
  uVar4 = (ulong)uVar6;
  if (uVar6 == 0) {
    fVar15 = 0.0;
  }
  else {
    fVar15 = 0.0;
    plVar5 = param_1;
    do {
      plVar5 = plVar5 + 1;
      fVar15 = *(float *)(*plVar5 + 0x10) + fVar15;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  lVar13 = (long)auStack_80 - ((ulong)((uint)*(ushort *)(*param_1 + 2) * 2 + 0xf) & 0x3fff0);
  if (param_4 == 0xffff) {
    uVar4 = 0;
    puVar12 = auStack_80;
    if (uVar6 == 0) goto LAB_1010a8578;
    uVar4 = 0;
    puVar14 = auStack_80;
  }
  else {
    uVar4 = 0;
    lVar7 = *(long *)(*param_1 + 0x10);
    uVar9 = param_4;
    do {
      uVar9 = *(ushort *)(lVar7 + (ulong)uVar9 * 2);
      uVar4 = uVar4 + 1;
      uVar10 = uVar4;
    } while (uVar9 != 0xffff);
    do {
      uVar10 = (ulong)((int)uVar10 - 1);
      *(ushort *)(lVar13 + (uVar10 & 0xffff) * 2) = param_4;
      param_4 = *(ushort *)(lVar7 + (ulong)param_4 * 2);
    } while (param_4 != 0xffff);
    puVar14 = (ushort *)(lVar13 + uVar4 * -0x30);
    puVar12 = puVar14 + uVar4 * -0x18;
    if (uVar6 == 0) {
      puVar14 = puVar12 + 8;
      uVar10 = uVar4;
      do {
        puVar14[-4] = 0;
        puVar14[-3] = 0;
        puVar14[-2] = 0;
        puVar14[-1] = 0x3f80;
        puVar14[-8] = 0;
        puVar14[-7] = 0;
        puVar14[-6] = 0;
        puVar14[-5] = 0;
        puVar14[0] = 0;
        puVar14[1] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[6] = 0;
        puVar14[7] = 0;
        puVar14[0xc] = 0;
        puVar14[0xd] = 0x3f80;
        puVar14[0xe] = 0;
        puVar14[0xf] = 0;
        puVar14[8] = 0;
        puVar14[9] = 0x3f80;
        puVar14[10] = 0;
        puVar14[0xb] = 0x3f80;
        puVar14 = puVar14 + 0x18;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      goto LAB_1010a8578;
    }
  }
  plVar5 = (long *)param_1[1];
  (**(code **)(*plVar5 + 0x28))
            ((int)plVar5[1],*(undefined8 *)(*plVar5 + 0x10),*(int *)((long)plVar5 + 0x14) == 1,
             lVar13,uVar4,puVar12);
  FUN_1010a8210(*(float *)(param_1[1] + 0x10) * (1.0 / fVar15),puVar12,uVar4);
  if (1 < *(uint *)(param_1 + 9)) {
    uVar10 = 2;
    do {
      plVar5 = (long *)param_1[uVar10];
      (**(code **)(*plVar5 + 0x28))
                ((int)plVar5[1],*(undefined8 *)(*plVar5 + 0x10),*(int *)((long)plVar5 + 0x14) == 1,
                 lVar13,uVar4,puVar14);
      if (*(int *)(param_1[uVar10] + 0xc) == 0) {
        FUN_1010a8278(*(float *)(param_1[uVar10] + 0x10) * (1.0 / fVar15),puVar12,puVar14,uVar4);
      }
      bVar3 = uVar10 < *(uint *)(param_1 + 9);
      uVar10 = uVar10 + 1;
    } while (bVar3);
  }
  uVar9 = *(ushort *)(param_1 + 0xd);
  if (((ulong)uVar9 != 0) && ((int)uVar4 != 0)) {
    uVar10 = 0;
    psVar8 = (short *)param_1[0xc];
    do {
      lVar7 = 0;
      sVar2 = *(short *)(lVar13 + uVar10 * 2);
      puVar14 = puVar12 + uVar10 * 0x18;
      psVar11 = psVar8;
      do {
        if (sVar2 == *psVar11) {
          puVar1 = (undefined8 *)(param_1[0xb] + lVar7);
          uVar19 = puVar1[3];
          uVar18 = puVar1[2];
          uVar17 = puVar1[5];
          uVar16 = puVar1[4];
          uVar20 = *puVar1;
          *(undefined8 *)(puVar14 + 4) = puVar1[1];
          *(undefined8 *)puVar14 = uVar20;
          *(undefined8 *)(puVar14 + 0xc) = uVar19;
          *(undefined8 *)(puVar14 + 8) = uVar18;
          *(undefined8 *)(puVar14 + 0x14) = uVar17;
          *(undefined8 *)(puVar14 + 0x10) = uVar16;
        }
        psVar11 = psVar11 + 1;
        lVar7 = lVar7 + 0x30;
      } while ((ulong)uVar9 * 0x30 - lVar7 != 0);
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar4);
  }
LAB_1010a8578:
  uVar6 = (uint)uVar4;
  if (uVar6 <= param_3) {
    param_3 = uVar6;
  }
  if (param_5 != 0) {
    FUN_1010a8608(puVar12,puVar12,uVar4);
  }
  if (param_3 != 0) {
    uVar4 = (ulong)param_3;
    do {
      uVar6 = uVar6 - 1;
      puVar14 = puVar12 + (ulong)uVar6 * 0x18;
      uVar17 = *(undefined8 *)(puVar14 + 4);
      uVar16 = *(undefined8 *)puVar14;
      uVar18 = *(undefined8 *)(puVar14 + 8);
      uVar20 = *(undefined8 *)(puVar14 + 0x14);
      uVar19 = *(undefined8 *)(puVar14 + 0x10);
      param_2[3] = *(undefined8 *)(puVar14 + 0xc);
      param_2[2] = uVar18;
      param_2[5] = uVar20;
      param_2[4] = uVar19;
      param_2[1] = uVar17;
      *param_2 = uVar16;
      uVar4 = uVar4 - 1;
      param_2 = param_2 + 6;
    } while (uVar4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_3;
}




void FUN_1010a8608(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_3 != 0) {
    if (param_1 != param_2) {
      uVar3 = param_2[1];
      uVar2 = *param_2;
      uVar4 = param_2[2];
      uVar6 = param_2[5];
      uVar5 = param_2[4];
      param_1[3] = param_2[3];
      param_1[2] = uVar4;
      param_1[5] = uVar6;
      param_1[4] = uVar5;
      param_1[1] = uVar3;
      *param_1 = uVar2;
    }
    if (1 < param_3) {
      lVar1 = (ulong)param_3 - 1;
      do {
        param_2 = param_2 + 6;
        FUN_1010a908c(param_1 + 6,param_1,param_2);
        lVar1 = lVar1 + -1;
        param_1 = param_1 + 6;
      } while (lVar1 != 0);
    }
  }
  return;
}




void FUN_1010a8680(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = uVar1 + 1;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 8 + 8) = param_2;
  return;
}




void FUN_1010a8698(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x48) != 0) {
    lVar2 = 1;
    do {
      if (*(long *)(param_1 + lVar2 * 8) == param_2) {
        FUN_1010a871c(DAT_101ea5ab8);
        uVar1 = *(int *)(param_1 + 0x48) - 1;
        if (*(int *)(param_1 + 0x48) != (int)lVar2) {
          *(undefined8 *)(param_1 + lVar2 * 8) = *(undefined8 *)(param_1 + (ulong)uVar1 * 8 + 8);
        }
        *(uint *)(param_1 + 0x48) = uVar1;
        return;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 - (ulong)*(uint *)(param_1 + 0x48) != 1);
  }
  return;
}




undefined8 FUN_1010a8710(void)

{
  return DAT_101ea5ab8;
}




void FUN_1010a871c(long param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = (int)(param_1 + 0x20);
  if (*(short *)(param_1 + 0x6020) == -1) {
    sVar2 = (short)((uint)(param_2 - iVar3) >> 4) * -0x5555;
    *(short *)(param_1 + 0x6022) = sVar2;
    *(short *)(param_1 + 0x6020) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x6022);
    sVar2 = (short)((uint)(param_2 - iVar3) >> 4) * -0x5555;
    *(short *)(param_1 + 0x6022) = sVar2;
    *(short *)(param_1 + 0x20 + (ulong)uVar1 * 0x30) = sVar2;
  }
  *(int *)(param_1 + 0x6024) = *(int *)(param_1 + 0x6024) + -1;
  *(int *)(param_1 + 0xf0d050) = *(int *)(param_1 + 0xf0d050) + -1;
  return;
}




undefined4 FUN_1010a879c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}




void FUN_1010a87a4(long param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(undefined2 *)(param_1 + 0x68) = param_4;
  return;
}




void FUN_1010a87b0(void)

{
  operator_new(0xf0d060);
  DAT_101ea5ab8 = FUN_1010a8818();
  return;
}




void FUN_1010a87d8(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_101ea5ab8;
  if (DAT_101ea5ab8 != (void *)0x0) {
    FUN_1010ad1a0(DAT_101ea5ab8,*(undefined8 *)((long)DAT_101ea5ab8 + 8));
    operator_delete(pvVar1);
  }
  DAT_101ea5ab8 = (void *)0x0;
  return;
}




void FUN_1010a8814(void)

{
  return;
}




void FUN_1010a8818(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar1 = 0x20;
  lVar2 = 1;
  do {
    *(short *)((long)param_1 + lVar1) = (short)lVar2;
    lVar1 = lVar1 + 0x30;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x200);
  param_1[0xc04] = 0x1ff0000;
  lVar1 = 0x6030;
  lVar2 = 1;
  do {
    *(short *)((long)param_1 + lVar1) = (short)lVar2;
    lVar1 = lVar1 + 0x38;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x200);
  param_1[0x1a06] = 0x1ff0000;
  param_1[0x1e1a08] = param_1 + 0x1a08;
  param_1[0x1e1a09] = FUN_1010a88b4;
  param_1[0x1a09] = 0;
  param_1[0x1a08] = 0;
  *(undefined1 *)(param_1 + 0x1a0a) = 0;
  param_1[0x1e1a0a] = 0;
  return;
}




void FUN_1010a88b4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_1010a88bc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_1010a88c4(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}




long FUN_1010a88cc(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 local_40 [2];
  long local_38;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1010a8984();
    if (lVar2 == 0) {
      lVar2 = FUN_1010a8a04(param_1,param_2);
      (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18),param_2,lVar2);
      uVar1 = FUN_1004d2524(param_2);
      local_40[0] = FUN_100015208(param_2,uVar1,0x12345678);
      local_38 = lVar2;
      FUN_1010ad280(param_1,local_40,local_40);
    }
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
  }
  return lVar2;
}




long FUN_1010a8984(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  uVar1 = FUN_1004d2524(param_2);
  uVar2 = FUN_100015208(param_2,uVar1,0x12345678);
  plVar5 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar5;
  plVar3 = plVar5;
  if (plVar4 != (long *)0x0) {
    do {
      if (*(uint *)(plVar4 + 4) >= uVar2) {
        plVar3 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar2];
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar5) && (*(uint *)(plVar3 + 4) <= uVar2)) {
      return plVar3[5];
    }
  }
  return 0;
}




ushort * FUN_1010a8a04(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  ushort *puVar5;
  
  uVar4 = *(ushort *)(param_1 + 0xd030);
  uVar2 = (ulong)uVar4;
  if (uVar2 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(param_1 + 0x6030 + uVar2 * 0x38);
    if (uVar4 == *(ushort *)(param_1 + 0xd032)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(param_1 + 0xd030) = uVar4;
    puVar5[0] = 0;
    puVar5[1] = 0;
    lVar3 = param_1 + 0x6030 + uVar2 * 0x38;
    *(undefined4 *)(lVar3 + 4) = 0xbf800000;
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(int *)(param_1 + 0xd034) = *(int *)(param_1 + 0xd034) + 1;
  }
  *(int *)(param_1 + 0xf0d054) = *(int *)(param_1 + 0xf0d054) + 1;
  uVar1 = FUN_1004d2524(param_2);
  uVar1 = FUN_100015208(param_2,uVar1,0x12345678);
  *(undefined4 *)puVar5 = uVar1;
  return puVar5;
}




void FUN_1010a8ad8(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc) + -1;
  *(int *)(param_2 + 0xc) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  FUN_1010a8af0();
  return;
}




void FUN_1010a8af0(long param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)(param_1 + 8);
  plVar7 = (long *)*plVar6;
  if (plVar7 != (long *)0x0) {
    uVar1 = *param_2;
    plVar4 = plVar6;
    do {
      if (*(uint *)(plVar7 + 4) >= uVar1) {
        plVar4 = plVar7;
      }
      plVar7 = (long *)plVar7[*(uint *)(plVar7 + 4) < uVar1];
    } while (plVar7 != (long *)0x0);
    if ((plVar4 != plVar6) && (*(uint *)(plVar4 + 4) <= uVar1)) goto LAB_1010a8b60;
  }
  plVar4 = plVar6;
LAB_1010a8b60:
  FUN_1010ad39c(param_1,plVar4);
  FUN_1010a8fcc(param_1,*(undefined8 *)(param_2 + 4));
  iVar5 = (int)(param_1 + 0x6030);
  if (*(short *)(param_1 + 0xd030) == -1) {
    sVar3 = (short)((uint)((int)param_2 - iVar5) >> 3) * 0x6db7;
    *(short *)(param_1 + 0xd032) = sVar3;
    *(short *)(param_1 + 0xd030) = sVar3;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0xd032);
    sVar3 = (short)((uint)((int)param_2 - iVar5) >> 3) * 0x6db7;
    *(short *)(param_1 + 0xd032) = sVar3;
    *(short *)(param_1 + 0x6030 + (ulong)uVar2 * 0x38) = sVar3;
  }
  *(int *)(param_1 + 0xd034) = *(int *)(param_1 + 0xd034) + -1;
  *(int *)(param_1 + 0xf0d054) = *(int *)(param_1 + 0xf0d054) + -1;
  return;
}




void FUN_1010a8bf0(long param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort *puVar2;
  long lVar3;
  ushort uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x6020);
  puVar2 = (ushort *)(param_1 + 0x20 + (ulong)uVar1 * 0x30);
  if (uVar1 == *(ushort *)(param_1 + 0x6022)) {
    uVar4 = 0xffff;
  }
  else {
    uVar4 = *puVar2;
  }
  *(ushort *)(param_1 + 0x6020) = uVar4;
  lVar3 = param_1 + 0x20 + (ulong)uVar1 * 0x30;
  puVar2[0] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(int *)(param_1 + 0x6024) = *(int *)(param_1 + 0x6024) + 1;
  *(undefined8 *)(lVar3 + 8) = 0;
  *(undefined4 *)(lVar3 + 0x10) = 0x3f800000;
  *(undefined8 *)(lVar3 + 0x24) = 0;
  *(undefined8 *)(lVar3 + 0x14) = 0x3f80000000000000;
  *(undefined4 *)(lVar3 + 0x1c) = 0;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  *(undefined1 *)(lVar3 + 0x2c) = 0;
  *(undefined8 *)puVar2 = param_2;
  *(int *)(param_1 + 0xf0d050) = *(int *)(param_1 + 0xf0d050) + 1;
  return;
}




long FUN_1010a8c7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 auStack_868 [2048];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  plVar5 = (long *)(param_1 + 0xf0d040);
  plVar7 = (long *)*plVar5;
  plVar1 = *(long **)*plVar5;
  do {
    if (plVar1 == (long *)0x0) {
LAB_1010a8d40:
      lVar3 = FUN_1010a8e34(param_1 + 0xd040,param_2,param_3);
      if (lVar3 == 0) {
        if ((long *)*plVar5 != (long *)0x0) {
          uVar4 = 0;
          plVar5 = (long *)*plVar5;
          do {
            plVar7 = (long *)*plVar5;
            iVar6 = (int)param_1 + 0xf0d03f;
            if (plVar7 != (long *)0x0) {
              iVar6 = (int)plVar7;
            }
            uVar2 = iVar6 - (int)plVar5;
            if (uVar2 <= uVar4) {
              uVar2 = uVar4;
            }
            if ((char)plVar5[2] != '\0') {
              uVar2 = uVar4;
            }
            uVar4 = uVar2;
            plVar5 = plVar7;
          } while (plVar7 != (long *)0x0);
        }
        FUN_1010a8f9c(auStack_868,
                      "AnimationManager alloc of %d bytes failed. Free: %d, num allocs: %d, largest free: %d, clips: %d, cliprscs: %d"
                     );
      }
      if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return lVar3;
    }
    if ((char)plVar7[2] == '\0') {
      lVar3 = *plVar1;
      if ((char)plVar1[2] == '\0') {
        *plVar7 = lVar3;
      }
      else {
        iVar6 = (int)plVar5;
        if (lVar3 != 0) {
          iVar6 = (int)lVar3;
        }
        uVar8 = (ulong)(uint)(iVar6 - (int)plVar1);
        _memmove(plVar7,plVar1,uVar8);
        plVar1 = (long *)((long)plVar7 + uVar8);
        *plVar1 = lVar3;
        plVar1[1] = 0;
        *(undefined1 *)(plVar1 + 2) = 0;
        *plVar7 = (long)plVar1;
        if (*(code **)(param_1 + 0xf0d048) != (code *)0x0) {
          (**(code **)(param_1 + 0xf0d048))(plVar7[1],plVar7 + 3);
        }
      }
      goto LAB_1010a8d40;
    }
    plVar7 = plVar1;
    plVar1 = (long *)*plVar1;
  } while( true );
}




long * FUN_1010a8e34(long param_1,int param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  plVar2 = (long *)(param_1 + 0xf00000);
  param_2 = param_2 + 0x18;
  plVar7 = (long *)*plVar2;
  plVar4 = plVar7;
  do {
    plVar5 = (long *)*plVar4;
    if ((char)plVar4[2] == '\0') {
      plVar3 = plVar2;
      if (plVar5 != (long *)0x0) {
        plVar3 = plVar5;
      }
      iVar6 = (int)plVar3 - (int)plVar4;
      if (param_2 <= iVar6) {
        plVar4[1] = param_3;
        *(undefined1 *)(plVar4 + 2) = 1;
        if (0x18 < (uint)(iVar6 - param_2)) {
          puVar1 = (undefined8 *)((long)plVar4 + (long)param_2);
          *puVar1 = plVar5;
          puVar1[1] = 0;
          *(undefined1 *)(puVar1 + 2) = 0;
          *plVar4 = (long)puVar1;
        }
        return plVar4 + 3;
      }
    }
    plVar4 = plVar5;
  } while (plVar5 != (long *)0x0);
  plVar4 = (long *)*plVar7;
  if (plVar4 != (long *)0x0) {
    do {
      plVar5 = plVar4;
      if ((char)plVar7[2] == '\0') {
        lVar9 = *plVar4;
        if ((char)plVar4[2] == '\0') {
          *plVar7 = lVar9;
          plVar5 = plVar7;
        }
        else {
          iVar6 = (int)plVar2;
          if (lVar9 != 0) {
            iVar6 = (int)lVar9;
          }
          uVar8 = (ulong)(uint)(iVar6 - (int)plVar4);
          _memmove(plVar7,plVar4,uVar8);
          plVar5 = (long *)((long)plVar7 + uVar8);
          *plVar5 = lVar9;
          plVar5[1] = 0;
          *(undefined1 *)(plVar5 + 2) = 0;
          *plVar7 = (long)plVar5;
          if (*(code **)(param_1 + 0xf00008) != (code *)0x0) {
            (**(code **)(param_1 + 0xf00008))(plVar7[1],plVar7 + 3);
          }
        }
      }
      plVar4 = (long *)*plVar5;
      plVar7 = plVar5;
    } while (plVar4 != (long *)0x0);
    plVar7 = (long *)*plVar2;
  }
  do {
    plVar4 = (long *)*plVar7;
    if ((char)plVar7[2] == '\0') {
      plVar5 = plVar2;
      if (plVar4 != (long *)0x0) {
        plVar5 = plVar4;
      }
      iVar6 = (int)plVar5 - (int)plVar7;
      if (param_2 <= iVar6) {
        plVar7[1] = param_3;
        *(undefined1 *)(plVar7 + 2) = 1;
        if (0x18 < (uint)(iVar6 - param_2)) {
          puVar1 = (undefined8 *)((long)plVar7 + (long)param_2);
          *puVar1 = plVar4;
          puVar1[1] = 0;
          *(undefined1 *)(puVar1 + 2) = 0;
          *plVar7 = (long)puVar1;
        }
        return plVar7 + 3;
      }
    }
    plVar7 = plVar4;
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
  } while( true );
}




void FUN_1010a8f9c(undefined8 param_1,undefined8 param_2)

{
  FUN_1004d26e8(param_1,0x800,param_2,&stack0x00000000);
  return;
}




void FUN_1010a8fcc(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + -0x10) = 0;
    *(undefined1 *)(param_2 + -8) = 0;
  }
  plVar2 = *(long **)(param_1 + 0xf0d040);
  plVar1 = (long *)**(long **)(param_1 + 0xf0d040);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return;
    }
    if ((char)plVar2[2] == '\0') break;
    plVar2 = plVar1;
    plVar1 = (long *)*plVar1;
  }
  lVar5 = *plVar1;
  if ((char)plVar1[2] != '\0') {
    iVar3 = (int)param_1 + 0xf0d040;
    if (lVar5 != 0) {
      iVar3 = (int)lVar5;
    }
    uVar4 = (ulong)(uint)(iVar3 - (int)plVar1);
    _memmove(plVar2,plVar1,uVar4);
    plVar1 = (long *)((long)plVar2 + uVar4);
    *plVar1 = lVar5;
    plVar1[1] = 0;
    *(undefined1 *)(plVar1 + 2) = 0;
    *plVar2 = (long)plVar1;
    if (*(code **)(param_1 + 0xf0d048) == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001010a9074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0xf0d048))(plVar2[1],plVar2 + 3);
    return;
  }
  *plVar2 = lVar5;
  return;
}




void FUN_1010a908c(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = param_2[8] * param_3[4];
  fVar2 = param_2[9] * param_3[5];
  fVar3 = param_2[10] * param_3[6];
  fVar5 = param_2[2];
  fVar4 = param_2[3];
  fVar8 = *param_2;
  fVar7 = param_2[1];
  fVar6 = (fVar4 * fVar1 - fVar5 * fVar2) + fVar3 * fVar7;
  fVar9 = (fVar4 * fVar2 + fVar1 * fVar5) - fVar3 * fVar8;
  fVar10 = (fVar8 * fVar2 - fVar7 * fVar1) + fVar3 * fVar4;
  fVar1 = fVar5 * fVar3 + fVar2 * fVar7 + fVar1 * fVar8;
  param_1[4] = ((param_2[4] + fVar4 * fVar6 + fVar8 * fVar1) - fVar5 * fVar9) + fVar7 * fVar10;
  param_1[5] = ((param_2[1] * fVar1 + fVar9 * param_2[3]) - fVar10 * *param_2) + fVar6 * param_2[2]
               + param_2[5];
  param_1[6] = ((param_2[2] * fVar1 + fVar10 * param_2[3]) - fVar6 * param_2[1]) + fVar9 * *param_2
               + param_2[6];
  *(ulong *)(param_1 + 8) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20) *
                (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20),
                (float)*(undefined8 *)(param_3 + 8) * (float)*(undefined8 *)(param_2 + 8));
  param_1[10] = param_3[10] * param_2[10];
  fVar2 = param_2[2];
  fVar1 = param_2[3];
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar8 = param_3[2];
  fVar7 = param_3[3];
  *param_1 = (fVar3 * fVar1 + fVar5 * fVar7 + fVar6 * fVar8) - fVar2 * fVar4;
  param_1[1] = (fVar6 * fVar7 - fVar8 * fVar5) + fVar3 * fVar2 + fVar1 * fVar4;
  param_1[2] = (fVar8 * fVar1 - fVar6 * fVar3) + fVar7 * fVar2 + fVar5 * fVar4;
  param_1[3] = fVar7 * fVar1 - (fVar5 * fVar3 + fVar8 * fVar2 + fVar6 * fVar4);
  return;
}




void FUN_1010a91bc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ushort uVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(ushort *)(param_3 + 2);
  if ((ulong)uVar1 != 0) {
    puVar2 = *(ushort **)(param_3 + 0x10);
    uVar6 = param_2[1];
    uVar5 = *param_2;
    uVar7 = param_2[2];
    uVar9 = param_2[5];
    uVar8 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar7;
    param_1[5] = uVar9;
    param_1[4] = uVar8;
    param_1[1] = uVar6;
    *param_1 = uVar5;
    if (uVar1 != 1) {
      lVar4 = (ulong)uVar1 - 1;
      puVar3 = param_1;
      do {
        param_2 = param_2 + 6;
        puVar3 = puVar3 + 6;
        puVar2 = puVar2 + 1;
        FUN_1010a908c(puVar3,param_1 + (ulong)*puVar2 * 6,param_2);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return;
}




void FUN_1010a9244(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  uVar1 = (ulong)*(ushort *)(param_3 + 2);
  if (uVar1 != 0) {
    pfVar2 = (float *)(param_2 + 0x28);
    pfVar3 = (float *)(param_1 + 0x20);
    pfVar4 = (float *)(*(long *)(param_3 + 0x18) + 0x14);
    do {
      fVar12 = pfVar2[-2] * pfVar4[-1];
      fVar13 = pfVar2[-1] * *pfVar4;
      fVar14 = *pfVar2 * pfVar4[1];
      uVar10 = *(undefined8 *)(pfVar2 + -10);
      uVar6 = *(undefined8 *)(pfVar2 + -8);
      uVar18 = NEON_rev64(uVar6,4);
      fVar5 = (float)uVar6;
      fVar7 = (float)((ulong)uVar6 >> 0x20);
      fVar11 = (float)((ulong)uVar10 >> 0x20);
      fVar19 = -(fVar5 * fVar13) + fVar12 * fVar7 + fVar14 * fVar11;
      fVar9 = (float)uVar10;
      fVar8 = -(fVar11 * fVar12) + fVar13 * fVar9 + fVar14 * fVar7;
      fVar20 = fVar14 * fVar5 + fVar13 * fVar11 + fVar12 * fVar9;
      fVar14 = (fVar13 * fVar7 + fVar12 * fVar5) - fVar14 * fVar9;
      uVar6 = *(undefined8 *)(pfVar2 + -6);
      uVar10 = NEON_rev64(uVar10,4);
      fVar15 = pfVar2[-4];
      fVar17 = pfVar4[3] * pfVar2[-2];
      fVar16 = pfVar4[4] * pfVar2[-1];
      fVar13 = pfVar4[5] * *pfVar2;
      fVar12 = pfVar4[-5];
      fVar22 = pfVar4[-4];
      fVar25 = pfVar4[-3];
      fVar24 = pfVar4[-2];
      fVar23 = (fVar12 * fVar7 + fVar24 * fVar9 + fVar25 * fVar11) - fVar22 * fVar5;
      fVar26 = ((fVar12 * fVar5 + fVar24 * fVar11) - fVar25 * fVar9) + fVar22 * fVar7;
      fVar21 = -(fVar12 * fVar11) + fVar24 * fVar5 + fVar25 * fVar7 + fVar22 * fVar9;
      fVar12 = (-(fVar22 * fVar11) - (fVar12 * fVar9 + fVar25 * fVar5)) + fVar24 * fVar7;
      pfVar3[-5] = 0.0;
      pfVar3[-1] = 0.0;
      pfVar3[3] = 0.0;
      pfVar3[7] = 1.0;
      fVar25 = fVar21 * fVar21 + fVar26 * fVar26;
      fVar24 = fVar21 * fVar21 + fVar23 * fVar23;
      fVar22 = fVar26 * fVar26 + fVar23 * fVar23;
      pfVar3[-4] = (fVar16 + fVar16) * (fVar26 * fVar23 - fVar12 * fVar21);
      *pfVar3 = (fVar13 + fVar13) * (fVar12 * fVar26 + fVar21 * fVar23);
      pfVar3[-7] = (fVar17 + fVar17) * (fVar12 * fVar21 + fVar26 * fVar23);
      pfVar3[-8] = fVar17 - fVar17 * (fVar25 + fVar25);
      pfVar3[1] = (fVar13 + fVar13) * (fVar21 * fVar26 - fVar12 * fVar23);
      pfVar3[-6] = (fVar17 + fVar17) * (fVar21 * fVar23 - fVar12 * fVar26);
      pfVar3[-2] = (fVar16 + fVar16) * (fVar12 * fVar23 + fVar21 * fVar26);
      pfVar3[2] = fVar13 - fVar13 * (fVar22 + fVar22);
      pfVar3[-3] = fVar16 - fVar16 * (fVar24 + fVar24);
      *(ulong *)(pfVar3 + 4) =
           CONCAT44(((float)((ulong)uVar6 >> 0x20) + (float)((ulong)uVar18 >> 0x20) * fVar19 +
                     fVar11 * fVar20 + fVar7 * fVar14) - (float)((ulong)uVar10 >> 0x20) * fVar8,
                    (((float)uVar6 + (float)uVar18 * fVar19 + fVar9 * fVar20) - fVar5 * fVar14) +
                    (float)uVar10 * fVar8);
      pfVar3[6] = -(fVar19 * fVar11) + fVar20 * fVar5 + fVar14 * fVar9 + fVar15 + fVar8 * fVar7;
      pfVar2 = pfVar2 + 0xc;
      pfVar3 = pfVar3 + 0x10;
      pfVar4 = pfVar4 + 0xc;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}




void FUN_1010a9430(undefined4 param_1,long param_2,long param_3,undefined4 param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_2 + 4) = param_1;
  *(long *)(param_2 + 0x10) = param_3;
  *(undefined4 *)(param_2 + 0x18) = param_4;
  if (param_5 < 4) {
    puVar1 = (&PTR_FUN_10182e498)[(int)param_5];
    puVar2 = (&PTR_FUN_10182e4b8)[(int)param_5];
    *(undefined **)(param_2 + 0x20) = (&PTR_FUN_10182e478)[(int)param_5];
    *(undefined **)(param_2 + 0x28) = puVar1;
    *(undefined **)(param_2 + 0x30) = puVar2;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_3 + 8);
  }
  return;
}




void FUN_1010a947c(float param_1,float *param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  uVar6 = (ulong)(uint)fVar3;
  fVar10 = (float)(int)(*param_2 * param_1);
  fVar12 = (float)NEON_fminnm(fVar10,(float)((int)fVar2 - 1U));
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  uVar4 = 0;
  if (fVar2 != 0.0) {
    uVar4 = (uint)(int)fVar10 / (uint)fVar2;
  }
  uVar1 = (int)fVar12;
  if (param_3 != 0) {
    uVar1 = (int)fVar10 - uVar4 * (int)fVar2;
  }
  fVar12 = 0.0;
  if (((uint)(uVar1 == (int)fVar2 - 1U) & (param_3 ^ 0xffffffff)) == 0) {
    fVar12 = *param_2 * param_1 - fVar10;
  }
  if (fVar12 <= 0.0) {
    if (fVar3 != 0.0) {
      param_2 = param_2 + (ulong)(uVar1 * (int)fVar3) * 0xc + 3;
      do {
        uVar9 = *(undefined8 *)(param_2 + 2);
        uVar8 = *(undefined8 *)param_2;
        uVar11 = *(undefined8 *)(param_2 + 4);
        uVar14 = *(undefined8 *)(param_2 + 10);
        uVar13 = *(undefined8 *)(param_2 + 8);
        param_4[3] = *(undefined8 *)(param_2 + 6);
        param_4[2] = uVar11;
        param_4[5] = uVar14;
        param_4[4] = uVar13;
        param_4[1] = uVar9;
        *param_4 = uVar8;
        param_2 = param_2 + 0xc;
        uVar6 = uVar6 - 1;
        param_4 = param_4 + 6;
      } while (uVar6 != 0);
    }
  }
  else if (fVar3 != 0.0) {
    lVar7 = 0;
    uVar4 = 0;
    if (fVar2 != 0.0) {
      uVar4 = (uVar1 + 1) / (uint)fVar2;
    }
    pfVar5 = param_2 + (ulong)(uVar1 * (int)fVar3) * 0xc + 3;
    do {
      FUN_1010ab444(fVar12,param_4,pfVar5,
                    param_2 + (lVar7 + (ulong)(((uVar1 + 1) - uVar4 * (int)fVar2) * (int)fVar3)) *
                              0xc + 3);
      lVar7 = lVar7 + 1;
      param_4 = param_4 + 6;
      pfVar5 = pfVar5 + 0xc;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}




void FUN_1010a95a4(float param_1,float *param_2,uint param_3,ushort *param_4,uint param_5,
                  undefined8 *param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar10 = (float)(int)(*param_2 * param_1);
  fVar12 = (float)NEON_fminnm(fVar10,(float)((int)fVar2 - 1U));
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  uVar4 = 0;
  if (fVar2 != 0.0) {
    uVar4 = (uint)(int)fVar10 / (uint)fVar2;
  }
  uVar1 = (int)fVar12;
  if (param_3 != 0) {
    uVar1 = (int)fVar10 - uVar4 * (int)fVar2;
  }
  fVar12 = 0.0;
  if (((uint)(uVar1 == (int)fVar2 - 1U) & (param_3 ^ 0xffffffff)) == 0) {
    fVar12 = *param_2 * param_1 - fVar10;
  }
  uVar4 = uVar1 * (int)fVar3;
  if (fVar12 <= 0.0) {
    if (param_5 != 0) {
      uVar7 = (ulong)param_5;
      do {
        pfVar6 = param_2 + ((ulong)*param_4 + (ulong)uVar4) * 0xc + 3;
        uVar9 = *(undefined8 *)(pfVar6 + 2);
        uVar8 = *(undefined8 *)pfVar6;
        uVar11 = *(undefined8 *)(pfVar6 + 4);
        uVar14 = *(undefined8 *)(pfVar6 + 10);
        uVar13 = *(undefined8 *)(pfVar6 + 8);
        param_6[3] = *(undefined8 *)(pfVar6 + 6);
        param_6[2] = uVar11;
        param_6[5] = uVar14;
        param_6[4] = uVar13;
        param_6[1] = uVar9;
        *param_6 = uVar8;
        uVar7 = uVar7 - 1;
        param_6 = param_6 + 6;
        param_4 = param_4 + 1;
      } while (uVar7 != 0);
    }
  }
  else if (param_5 != 0) {
    uVar5 = 0;
    if (fVar2 != 0.0) {
      uVar5 = (uVar1 + 1) / (uint)fVar2;
    }
    uVar7 = (ulong)param_5;
    do {
      FUN_1010ab444(fVar12,param_6,param_2 + ((ulong)*param_4 + (ulong)uVar4) * 0xc + 3,
                    param_2 + ((ulong)*param_4 +
                              (ulong)(((uVar1 + 1) - uVar5 * (int)fVar2) * (int)fVar3)) * 0xc + 3);
      param_6 = param_6 + 6;
      uVar7 = uVar7 - 1;
      param_4 = param_4 + 1;
    } while (uVar7 != 0);
  }
  return;
}




void FUN_1010a96cc(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  undefined8 local_90;
  float local_88;
  undefined8 local_80;
  float local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  undefined8 local_50;
  float local_48;
  
  FUN_1010acad4(param_3,param_4,&local_70);
  FUN_1010acad4(param_2,param_3,param_4,&local_a0);
  if (local_88 - local_58 < 0.0) {
    local_90 = CONCAT44((float)((ulong)local_90 >> 0x20) + fStack_5c,(float)local_90 + local_60);
    local_88 = local_58 + local_88;
  }
  fVar9 = local_70 * local_70 + fStack_6c * fStack_6c + local_68 * local_68 + fStack_64 * fStack_64;
  fVar1 = 0.0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  fVar2 = 0.0;
  if (1.1920929e-07 < fVar9) {
    fVar9 = 1.0 / fVar9;
    fVar4 = -fVar9;
    fVar1 = local_70 * fVar4;
    fVar3 = fStack_6c * fVar4;
    fVar4 = local_68 * fVar4;
    fVar2 = fVar9 * fStack_64;
  }
  fVar7 = ((fVar3 * local_58 + fVar2 * local_60) - fVar4 * fStack_5c) + fVar1 * local_54;
  fVar10 = (local_60 * fVar4 - fVar1 * local_58) + fVar2 * fStack_5c + fVar3 * local_54;
  fVar11 = (fVar2 * local_58 - local_60 * fVar3) + fVar1 * fStack_5c + fVar4 * local_54;
  fVar9 = local_54 * fVar2 - (fVar4 * local_58 + fVar1 * local_60 + fVar3 * fStack_5c);
  fVar5 = ((fVar9 * fVar1 + fVar4 * fVar10) - (fVar11 * fVar3 + fVar2 * fVar7)) * (float)local_80;
  fVar8 = (float)((ulong)local_80 >> 0x20);
  fVar6 = ((fVar9 * fVar3 + fVar1 * fVar11) - (fVar7 * fVar4 + fVar2 * fVar10)) * fVar8;
  fVar9 = local_78 * ((fVar9 * fVar4 + fVar3 * fVar7) - (fVar11 * fVar2 + fVar1 * fVar10));
  fVar7 = (fStack_94 * fVar5 - local_98 * fVar6) + fVar9 * fStack_9c;
  fVar10 = (fStack_94 * fVar6 + fVar5 * local_98) - fVar9 * local_a0;
  fVar11 = (local_a0 * fVar6 - fStack_9c * fVar5) + fVar9 * fStack_94;
  fVar9 = local_98 * fVar9 + fVar6 * fStack_9c + fVar5 * local_a0;
  param_5[4] = (((float)local_90 + fStack_94 * fVar7 + local_a0 * fVar9) - local_98 * fVar10) +
               fStack_9c * fVar11;
  param_5[5] = (fVar7 * local_98 + fStack_9c * fVar9 + fStack_94 * fVar10 + local_90._4_4_) -
               local_a0 * fVar11;
  param_5[6] = (fVar9 * local_98 - fVar7 * fStack_9c) + local_a0 * fVar10 + fStack_94 * fVar11 +
               local_88;
  *(ulong *)(param_5 + 8) =
       CONCAT44(fVar8 / (float)((ulong)local_50 >> 0x20),(float)local_80 / (float)local_50);
  param_5[10] = local_78 / local_48;
  *param_5 = (fStack_94 * fVar1 - local_98 * fVar3) + fVar4 * fStack_9c + fVar2 * local_a0;
  param_5[1] = (fStack_94 * fVar3 + fVar1 * local_98 + fVar2 * fStack_9c) - fVar4 * local_a0;
  param_5[2] = ((fStack_94 * fVar4 + fVar2 * local_98) - fVar1 * fStack_9c) + fVar3 * local_a0;
  param_5[3] = fStack_94 * fVar2 - (local_98 * fVar4 + fVar3 * fStack_9c + fVar1 * local_a0);
  return;
}




void FUN_1010a9924(float param_1,float *param_2,uint param_3,long param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined1 local_c0 [24];
  float local_a8;
  undefined8 local_a0;
  float local_98;
  
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  uVar6 = (ulong)(uint)fVar3;
  fVar13 = (float)(int)(*param_2 * param_1);
  fVar14 = (float)NEON_fminnm(fVar13,(float)((int)fVar2 - 1U));
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  uVar4 = 0;
  if (fVar2 != 0.0) {
    uVar4 = (uint)(int)fVar13 / (uint)fVar2;
  }
  uVar1 = (int)fVar14;
  if (param_3 != 0) {
    uVar1 = (int)fVar13 - uVar4 * (int)fVar2;
  }
  fVar14 = 0.0;
  if (((uint)(uVar1 == (int)fVar2 - 1U) & (param_3 ^ 0xffffffff)) == 0) {
    fVar14 = *param_2 * param_1 - fVar13;
  }
  if (fVar14 <= 0.0) {
    if (fVar3 != 0.0) {
      param_2 = param_2 + (ulong)(uVar1 * (int)fVar3) * 5 + 3;
      do {
        FUN_1010ab9e8(param_4,param_2);
        param_4 = param_4 + 0x30;
        param_2 = param_2 + 5;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  else if (fVar3 != 0.0) {
    lVar7 = 0;
    uVar4 = 0;
    if (fVar2 != 0.0) {
      uVar4 = (uVar1 + 1) / (uint)fVar2;
    }
    fVar13 = 1.0 - fVar14;
    pfVar5 = param_2 + (ulong)(uVar1 * (int)fVar3) * 5 + 3;
    pfVar8 = (float *)(param_4 + 0x18);
    do {
      FUN_1010ab9e8(local_c0,pfVar5);
      FUN_1010ab9e8(&fStack_f0,
                    param_2 + (lVar7 + (ulong)(((uVar1 + 1) - uVar4 * (int)fVar2) * (int)fVar3)) * 5
                              + 3);
      fVar12 = -fVar14;
      if (0.0 <= fStack_f0 * (float)local_c0._0_8_ + fStack_ec * SUB84(local_c0._0_8_,4) +
                 fStack_e8 * (float)local_c0._8_8_ + fStack_e4 * SUB84(local_c0._8_8_,4)) {
        fVar12 = fVar14;
      }
      fVar9 = (float)local_c0._0_8_ * fVar13 + fStack_f0 * fVar12;
      fVar10 = SUB84(local_c0._0_8_,4) * fVar13 + fStack_ec * fVar12;
      fVar11 = (float)local_c0._8_8_ * fVar13 + fStack_e8 * fVar12;
      fVar12 = SUB84(local_c0._8_8_,4) * fVar13 + fStack_e4 * fVar12;
      fVar15 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12);
      local_130 = 0.0;
      fStack_12c = 0.0;
      fStack_128 = 0.0;
      fStack_124 = 1.0;
      if (1.1920929e-07 < fVar15) {
        fVar15 = 1.0 / fVar15;
        local_130 = fVar9 * fVar15;
        fStack_12c = fVar10 * fVar15;
        fStack_128 = fVar11 * fVar15;
        fStack_124 = fVar12 * fVar15;
      }
      pfVar8[-4] = fStack_128;
      pfVar8[-3] = fStack_124;
      pfVar8[-6] = local_130;
      pfVar8[-5] = fStack_12c;
      *(ulong *)(pfVar8 + -2) =
           CONCAT44(SUB84(local_c0._16_8_,4) * fVar13 + fVar14 * (float)((ulong)local_e0 >> 0x20),
                    (float)local_c0._16_8_ * fVar13 + fVar14 * (float)local_e0);
      *pfVar8 = local_a8 * fVar13 + fVar14 * local_d8;
      *(ulong *)(pfVar8 + 2) =
           CONCAT44((float)((ulong)local_a0 >> 0x20) * fVar13 +
                    fVar14 * (float)((ulong)local_d0 >> 0x20),
                    (float)local_a0 * fVar13 + fVar14 * (float)local_d0);
      pfVar8[4] = local_98 * fVar13 + fVar14 * local_c8;
      pfVar8[1] = 0.0;
      pfVar8[5] = 0.0;
      lVar7 = lVar7 + 1;
      pfVar5 = pfVar5 + 5;
      pfVar8 = pfVar8 + 0xc;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}




void FUN_1010a9b60(float param_1,float *param_2,uint param_3,ushort *param_4,uint param_5,
                  long param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined1 local_c0 [24];
  float local_a8;
  undefined8 local_a0;
  float local_98;
  
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar13 = (float)(int)(*param_2 * param_1);
  fVar14 = (float)NEON_fminnm(fVar13,(float)((int)fVar2 - 1U));
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  uVar5 = 0;
  if (fVar2 != 0.0) {
    uVar5 = (uint)(int)fVar13 / (uint)fVar2;
  }
  uVar1 = (int)fVar14;
  if (param_3 != 0) {
    uVar1 = (int)fVar13 - uVar5 * (int)fVar2;
  }
  fVar14 = 0.0;
  if (((uint)(uVar1 == (int)fVar2 - 1U) & (param_3 ^ 0xffffffff)) == 0) {
    fVar14 = *param_2 * param_1 - fVar13;
  }
  uVar5 = uVar1 * (int)fVar3;
  if (fVar14 <= 0.0) {
    if (param_5 != 0) {
      uVar7 = (ulong)param_5;
      do {
        FUN_1010ab9e8(param_6,param_2 + ((ulong)*param_4 + (ulong)uVar5) * 5 + 3);
        param_6 = param_6 + 0x30;
        uVar7 = uVar7 - 1;
        param_4 = param_4 + 1;
      } while (uVar7 != 0);
    }
  }
  else if (param_5 != 0) {
    uVar6 = 0;
    if (fVar2 != 0.0) {
      uVar6 = (uVar1 + 1) / (uint)fVar2;
    }
    fVar13 = 1.0 - fVar14;
    uVar7 = (ulong)param_5;
    pfVar8 = (float *)(param_6 + 0x18);
    do {
      uVar4 = *param_4;
      FUN_1010ab9e8(local_c0,param_2 + ((ulong)uVar4 + (ulong)uVar5) * 5 + 3);
      FUN_1010ab9e8(&fStack_f0,
                    param_2 + ((ulong)uVar4 +
                              (ulong)(((uVar1 + 1) - uVar6 * (int)fVar2) * (int)fVar3)) * 5 + 3);
      fVar12 = -fVar14;
      if (0.0 <= fStack_f0 * (float)local_c0._0_8_ + fStack_ec * SUB84(local_c0._0_8_,4) +
                 fStack_e8 * (float)local_c0._8_8_ + fStack_e4 * SUB84(local_c0._8_8_,4)) {
        fVar12 = fVar14;
      }
      fVar9 = (float)local_c0._0_8_ * fVar13 + fStack_f0 * fVar12;
      fVar10 = SUB84(local_c0._0_8_,4) * fVar13 + fStack_ec * fVar12;
      fVar11 = (float)local_c0._8_8_ * fVar13 + fStack_e8 * fVar12;
      fVar12 = SUB84(local_c0._8_8_,4) * fVar13 + fStack_e4 * fVar12;
      fVar15 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12);
      local_130 = 0.0;
      fStack_12c = 0.0;
      fStack_128 = 0.0;
      fStack_124 = 1.0;
      if (1.1920929e-07 < fVar15) {
        fVar15 = 1.0 / fVar15;
        local_130 = fVar9 * fVar15;
        fStack_12c = fVar10 * fVar15;
        fStack_128 = fVar11 * fVar15;
        fStack_124 = fVar12 * fVar15;
      }
      pfVar8[-4] = fStack_128;
      pfVar8[-3] = fStack_124;
      pfVar8[-6] = local_130;
      pfVar8[-5] = fStack_12c;
      *(ulong *)(pfVar8 + -2) =
           CONCAT44(SUB84(local_c0._16_8_,4) * fVar13 + fVar14 * (float)((ulong)local_e0 >> 0x20),
                    (float)local_c0._16_8_ * fVar13 + fVar14 * (float)local_e0);
      *pfVar8 = local_a8 * fVar13 + fVar14 * local_d8;
      *(ulong *)(pfVar8 + 2) =
           CONCAT44((float)((ulong)local_a0 >> 0x20) * fVar13 +
                    fVar14 * (float)((ulong)local_d0 >> 0x20),
                    (float)local_a0 * fVar13 + fVar14 * (float)local_d0);
      pfVar8[4] = local_98 * fVar13 + fVar14 * local_c8;
      pfVar8[1] = 0.0;
      pfVar8[5] = 0.0;
      param_4 = param_4 + 1;
      pfVar8 = pfVar8 + 0xc;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}




void FUN_1010a9d9c(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  undefined8 local_90;
  float local_88;
  undefined8 local_80;
  float local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  undefined8 local_50;
  float local_48;
  
  FUN_1010abe7c(param_3,param_4,&local_70);
  FUN_1010abe7c(param_2,param_3,param_4,&local_a0);
  if (local_88 - local_58 < 0.0) {
    local_90 = CONCAT44((float)((ulong)local_90 >> 0x20) + fStack_5c,(float)local_90 + local_60);
    local_88 = local_58 + local_88;
  }
  fVar9 = local_70 * local_70 + fStack_6c * fStack_6c + local_68 * local_68 + fStack_64 * fStack_64;
  fVar1 = 0.0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  fVar2 = 0.0;
  if (1.1920929e-07 < fVar9) {
    fVar9 = 1.0 / fVar9;
    fVar4 = -fVar9;
    fVar1 = local_70 * fVar4;
    fVar3 = fStack_6c * fVar4;
    fVar4 = local_68 * fVar4;
    fVar2 = fVar9 * fStack_64;
  }
  fVar7 = ((fVar3 * local_58 + fVar2 * local_60) - fVar4 * fStack_5c) + fVar1 * local_54;
  fVar10 = (local_60 * fVar4 - fVar1 * local_58) + fVar2 * fStack_5c + fVar3 * local_54;
  fVar11 = (fVar2 * local_58 - local_60 * fVar3) + fVar1 * fStack_5c + fVar4 * local_54;
  fVar9 = local_54 * fVar2 - (fVar4 * local_58 + fVar1 * local_60 + fVar3 * fStack_5c);
  fVar5 = ((fVar9 * fVar1 + fVar4 * fVar10) - (fVar11 * fVar3 + fVar2 * fVar7)) * (float)local_80;
  fVar8 = (float)((ulong)local_80 >> 0x20);
  fVar6 = ((fVar9 * fVar3 + fVar1 * fVar11) - (fVar7 * fVar4 + fVar2 * fVar10)) * fVar8;
  fVar9 = local_78 * ((fVar9 * fVar4 + fVar3 * fVar7) - (fVar11 * fVar2 + fVar1 * fVar10));
  fVar7 = (fStack_94 * fVar5 - local_98 * fVar6) + fVar9 * fStack_9c;
  fVar10 = (fStack_94 * fVar6 + fVar5 * local_98) - fVar9 * local_a0;
  fVar11 = (local_a0 * fVar6 - fStack_9c * fVar5) + fVar9 * fStack_94;
  fVar9 = local_98 * fVar9 + fVar6 * fStack_9c + fVar5 * local_a0;
  param_5[4] = (((float)local_90 + fStack_94 * fVar7 + local_a0 * fVar9) - local_98 * fVar10) +
               fStack_9c * fVar11;
  param_5[5] = (fVar7 * local_98 + fStack_9c * fVar9 + fStack_94 * fVar10 + local_90._4_4_) -
               local_a0 * fVar11;
  param_5[6] = (fVar9 * local_98 - fVar7 * fStack_9c) + local_a0 * fVar10 + fStack_94 * fVar11 +
               local_88;
  *(ulong *)(param_5 + 8) =
       CONCAT44(fVar8 / (float)((ulong)local_50 >> 0x20),(float)local_80 / (float)local_50);
  param_5[10] = local_78 / local_48;
  *param_5 = (fStack_94 * fVar1 - local_98 * fVar3) + fVar4 * fStack_9c + fVar2 * local_a0;
  param_5[1] = (fStack_94 * fVar3 + fVar1 * local_98 + fVar2 * fStack_9c) - fVar4 * local_a0;
  param_5[2] = ((fStack_94 * fVar4 + fVar2 * local_98) - fVar1 * fStack_9c) + fVar3 * local_a0;
  param_5[3] = fStack_94 * fVar2 - (local_98 * fVar4 + fVar3 * fStack_9c + fVar1 * local_a0);
  return;
}




void FUN_1010a9ff4(float param_1,float *param_2,uint param_3,undefined8 *param_4)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 *puVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar16;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar17;
  float fVar20;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar21;
  float fVar22;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  short *local_90;
  short *local_88;
  
  fVar12 = param_2[1];
  fVar20 = param_2[2];
  uVar10 = (ulong)(uint)fVar20;
  fVar16 = param_2[3];
  pfVar9 = param_2 + 5;
  lVar11 = 0;
  if (fVar16 != 0.0) {
    lVar11 = (long)pfVar9 + uVar10 * 0x34 + 2;
  }
  fVar21 = (float)(int)(*param_2 * param_1);
  fVar22 = (float)NEON_fminnm(fVar21,(float)((int)fVar12 - 1U));
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  uVar4 = 0;
  if (fVar12 != 0.0) {
    uVar4 = (uint)(int)fVar21 / (uint)fVar12;
  }
  uVar2 = (int)fVar22;
  if (param_3 != 0) {
    uVar2 = (int)fVar21 - uVar4 * (int)fVar12;
  }
  fVar22 = 0.0;
  if (((uint)(uVar2 == (int)fVar12 - 1U) & (param_3 ^ 0xffffffff)) == 0) {
    fVar22 = *param_2 * param_1 - fVar21;
  }
  if (fVar16 == 0.0) {
    if (fVar20 != 0.0) {
      puVar8 = (undefined8 *)((long)param_2 + uVar10 * 4 + 0x16);
      do {
        uVar18 = puVar8[1];
        uVar14 = *puVar8;
        uVar15 = puVar8[2];
        uVar19 = puVar8[4];
        uVar7 = puVar8[5];
        param_4[3] = puVar8[3];
        param_4[2] = uVar15;
        param_4[5] = uVar7;
        param_4[4] = uVar19;
        param_4[1] = uVar18;
        *param_4 = uVar14;
        puVar8 = puVar8 + 6;
        uVar10 = uVar10 - 1;
        param_4 = param_4 + 6;
      } while (uVar10 != 0);
    }
  }
  else {
    local_88 = (short *)(lVar11 + (ulong)((uVar2 - 1) * (int)fVar16) * 2);
    if (fVar22 <= 0.0) {
      if (fVar20 != 0.0) {
        puVar8 = (undefined8 *)((long)param_2 + uVar10 * 4 + 0x16);
        do {
          uVar19 = puVar8[1];
          uVar15 = *puVar8;
          auVar5 = *(undefined1 (*) [16])(puVar8 + 2);
          auVar6 = *(undefined1 (*) [16])(puVar8 + 4);
          param_4[3] = auVar5._8_8_;
          param_4[2] = auVar5._0_8_;
          param_4[5] = auVar6._8_8_;
          param_4[4] = auVar6._0_8_;
          param_4[1] = uVar19;
          *param_4 = uVar15;
          if ((uVar2 != 0) && (*(short *)pfVar9 != 0)) {
            FUN_1010ac1ec(param_4,&local_88);
          }
          param_4 = param_4 + 6;
          puVar8 = puVar8 + 6;
          pfVar9 = (float *)((long)pfVar9 + 2);
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    else {
      uVar4 = 0;
      if (fVar12 != 0.0) {
        uVar4 = (uVar2 + 1) / (uint)fVar12;
      }
      iVar3 = (uVar2 + 1) - uVar4 * (int)fVar12;
      local_90 = (short *)(lVar11 + (ulong)(uint)((iVar3 + -1) * (int)fVar16) * 2);
      if (fVar20 != 0.0) {
        lVar11 = 0;
        fVar12 = 1.0 - fVar22;
        do {
          puVar8 = (undefined8 *)((long)param_2 + lVar11 + uVar10 * 4 + 0x16);
          uStack_e8 = puVar8[1];
          local_f0 = *puVar8;
          local_d8 = SUB168(*(undefined1 (*) [16])(puVar8 + 2),8);
          local_e0 = SUB168(*(undefined1 (*) [16])(puVar8 + 2),0);
          uStack_c8 = SUB168(*(undefined1 (*) [16])(puVar8 + 4),8);
          local_d0 = SUB168(*(undefined1 (*) [16])(puVar8 + 4),0);
          local_c0 = local_f0;
          uStack_b8 = uStack_e8;
          local_b0 = local_e0;
          local_a8 = local_d8;
          local_a0 = local_d0;
          uStack_98 = uStack_c8;
          if ((uVar2 != 0) && (*(short *)pfVar9 != 0)) {
            FUN_1010ac1ec(&local_c0,&local_88);
          }
          if ((iVar3 != 0) && (*(short *)pfVar9 != 0)) {
            FUN_1010ac1ec(&local_f0,&local_90);
          }
          fVar16 = (float)((ulong)local_c0 >> 0x20);
          fVar21 = (float)((ulong)uStack_b8 >> 0x20);
          fVar20 = -fVar22;
          if (0.0 <= (float)local_f0 * (float)local_c0 + local_f0._4_4_ * fVar16 +
                     (float)uStack_e8 * (float)uStack_b8 + uStack_e8._4_4_ * fVar21) {
            fVar20 = fVar22;
          }
          fVar13 = (float)local_c0 * fVar12 + (float)local_f0 * fVar20;
          fVar16 = fVar16 * fVar12 + local_f0._4_4_ * fVar20;
          fVar17 = (float)uStack_b8 * fVar12 + (float)uStack_e8 * fVar20;
          fVar20 = fVar21 * fVar12 + uStack_e8._4_4_ * fVar20;
          fVar21 = SQRT(fVar13 * fVar13 + fVar16 * fVar16 + fVar17 * fVar17 + fVar20 * fVar20);
          local_100 = 0.0;
          fStack_fc = 0.0;
          fStack_f8 = 0.0;
          fStack_f4 = 1.0;
          if (1.1920929e-07 < fVar21) {
            fVar21 = 1.0 / fVar21;
            local_100 = fVar13 * fVar21;
            fStack_fc = fVar16 * fVar21;
            fStack_f8 = fVar17 * fVar21;
            fStack_f4 = fVar20 * fVar21;
          }
          pfVar1 = (float *)((long)param_4 + lVar11);
          pfVar1[2] = fStack_f8;
          pfVar1[3] = fStack_f4;
          *pfVar1 = local_100;
          pfVar1[1] = fStack_fc;
          *(ulong *)(pfVar1 + 4) =
               CONCAT44((float)((ulong)local_b0 >> 0x20) * fVar12 +
                        fVar22 * (float)((ulong)local_e0 >> 0x20),
                        (float)local_b0 * fVar12 + fVar22 * (float)local_e0);
          pfVar1[6] = (float)local_a8 * fVar12 + fVar22 * (float)local_d8;
          *(ulong *)(pfVar1 + 8) =
               CONCAT44((float)((ulong)local_a0 >> 0x20) * fVar12 +
                        fVar22 * (float)((ulong)local_d0 >> 0x20),
                        (float)local_a0 * fVar12 + fVar22 * (float)local_d0);
          pfVar1[10] = (float)uStack_98 * fVar12 + fVar22 * (float)uStack_c8;
          pfVar1[7] = 0.0;
          pfVar1[0xb] = 0.0;
          lVar11 = lVar11 + 0x30;
          pfVar9 = (float *)((long)pfVar9 + 2);
        } while (uVar10 * 0x30 - lVar11 != 0);
      }
    }
  }
  return;
}




void FUN_1010aa2c8(float param_1,float *param_2,uint param_3,ushort *param_4,uint param_5,
                  undefined8 *param_6)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  float *pfVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar20;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0 [2];
  
  fVar16 = param_2[1];
  uVar15 = (ulong)(uint)param_2[2];
  fVar4 = param_2[3];
  lVar10 = uVar15 * 2 + 0x16;
  lVar11 = uVar15 * 2 + lVar10;
  lVar3 = 0;
  if (fVar4 != 0.0) {
    lVar3 = (long)param_2 + uVar15 * 0x30 + lVar11;
  }
  fVar24 = (float)(int)(*param_2 * param_1);
  fVar25 = (float)NEON_fminnm(fVar24,(float)((int)fVar16 - 1U));
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  uVar6 = 0;
  if (fVar16 != 0.0) {
    uVar6 = (uint)(int)fVar24 / (uint)fVar16;
  }
  uVar2 = (int)fVar25;
  if (param_3 != 0) {
    uVar2 = (int)fVar24 - uVar6 * (int)fVar16;
  }
  fVar25 = 0.0;
  if (((uint)(uVar2 == (int)fVar16 - 1U) & (param_3 ^ 0xffffffff)) == 0) {
    fVar25 = *param_2 * param_1 - fVar24;
  }
  if (fVar4 == 0.0) {
    if (param_5 != 0) {
      uVar15 = (ulong)param_5;
      do {
        puVar12 = (undefined8 *)((long)param_2 + (ulong)*param_4 * 0x30 + lVar11);
        uVar22 = puVar12[1];
        uVar18 = *puVar12;
        uVar19 = puVar12[2];
        uVar23 = puVar12[4];
        uVar9 = puVar12[5];
        param_6[3] = puVar12[3];
        param_6[2] = uVar19;
        param_6[5] = uVar9;
        param_6[4] = uVar23;
        param_6[1] = uVar22;
        *param_6 = uVar18;
        uVar15 = uVar15 - 1;
        param_4 = param_4 + 1;
        param_6 = param_6 + 6;
      } while (uVar15 != 0);
    }
  }
  else {
    lVar1 = lVar3 + (ulong)((uVar2 - 1) * (int)fVar4) * 2;
    if (fVar25 <= 0.0) {
      if (param_5 != 0) {
        uVar15 = (ulong)param_5;
        do {
          uVar14 = (ulong)*param_4;
          puVar12 = (undefined8 *)((long)param_2 + uVar14 * 0x30 + lVar11);
          uVar23 = puVar12[1];
          uVar19 = *puVar12;
          auVar7 = *(undefined1 (*) [16])(puVar12 + 2);
          auVar8 = *(undefined1 (*) [16])(puVar12 + 4);
          param_6[3] = auVar7._8_8_;
          param_6[2] = auVar7._0_8_;
          param_6[5] = auVar8._8_8_;
          param_6[4] = auVar8._0_8_;
          param_6[1] = uVar23;
          *param_6 = uVar19;
          if ((uVar2 != 0) && (*(short *)((long)param_2 + uVar14 * 2 + 0x14) != 0)) {
            local_a0[0] = lVar1 + (ulong)*(ushort *)((long)param_2 + uVar14 * 2 + lVar10) * 2;
            FUN_1010ac1ec(param_6,local_a0);
          }
          param_4 = param_4 + 1;
          param_6 = param_6 + 6;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
    }
    else if (param_5 != 0) {
      uVar6 = 0;
      if (fVar16 != 0.0) {
        uVar6 = (uVar2 + 1) / (uint)fVar16;
      }
      iVar5 = (uVar2 + 1) - uVar6 * (int)fVar16;
      fVar16 = 1.0 - fVar25;
      uVar15 = (ulong)param_5;
      pfVar13 = (float *)(param_6 + 3);
      do {
        uVar14 = (ulong)*param_4;
        puVar12 = (undefined8 *)((long)param_2 + uVar14 * 0x30 + lVar11);
        uStack_f8 = puVar12[1];
        local_100 = *puVar12;
        local_e8 = SUB168(*(undefined1 (*) [16])(puVar12 + 2),8);
        local_f0 = SUB168(*(undefined1 (*) [16])(puVar12 + 2),0);
        uStack_d8 = SUB168(*(undefined1 (*) [16])(puVar12 + 4),8);
        local_e0 = SUB168(*(undefined1 (*) [16])(puVar12 + 4),0);
        local_d0 = local_100;
        uStack_c8 = uStack_f8;
        local_c0 = local_f0;
        local_b8 = local_e8;
        local_b0 = local_e0;
        uStack_a8 = uStack_d8;
        if ((uVar2 != 0) && (*(short *)((long)param_2 + uVar14 * 2 + 0x14) != 0)) {
          local_a0[0] = lVar1 + (ulong)*(ushort *)((long)param_2 + uVar14 * 2 + lVar10) * 2;
          FUN_1010ac1ec(&local_d0,local_a0);
        }
        if ((iVar5 != 0) && (*(short *)((long)param_2 + uVar14 * 2 + 0x14) != 0)) {
          local_a0[0] = lVar3 + ((ulong)*(ushort *)((long)param_2 + uVar14 * 2 + lVar10) +
                                (ulong)(uint)((iVar5 + -1) * (int)fVar4)) * 2;
          FUN_1010ac1ec(&local_100,local_a0);
        }
        fVar20 = (float)((ulong)local_d0 >> 0x20);
        fVar26 = (float)((ulong)uStack_c8 >> 0x20);
        fVar24 = -fVar25;
        if (0.0 <= (float)local_100 * (float)local_d0 + local_100._4_4_ * fVar20 +
                   (float)uStack_f8 * (float)uStack_c8 + uStack_f8._4_4_ * fVar26) {
          fVar24 = fVar25;
        }
        fVar17 = (float)local_d0 * fVar16 + (float)local_100 * fVar24;
        fVar20 = fVar20 * fVar16 + local_100._4_4_ * fVar24;
        fVar21 = (float)uStack_c8 * fVar16 + (float)uStack_f8 * fVar24;
        fVar24 = fVar26 * fVar16 + uStack_f8._4_4_ * fVar24;
        fVar26 = SQRT(fVar17 * fVar17 + fVar20 * fVar20 + fVar21 * fVar21 + fVar24 * fVar24);
        local_130 = 0.0;
        fStack_12c = 0.0;
        fStack_128 = 0.0;
        fStack_124 = 1.0;
        if (1.1920929e-07 < fVar26) {
          fVar26 = 1.0 / fVar26;
          local_130 = fVar17 * fVar26;
          fStack_12c = fVar20 * fVar26;
          fStack_128 = fVar21 * fVar26;
          fStack_124 = fVar24 * fVar26;
        }
        pfVar13[-4] = fStack_128;
        pfVar13[-3] = fStack_124;
        pfVar13[-6] = local_130;
        pfVar13[-5] = fStack_12c;
        *(ulong *)(pfVar13 + -2) =
             CONCAT44((float)((ulong)local_c0 >> 0x20) * fVar16 +
                      fVar25 * (float)((ulong)local_f0 >> 0x20),
                      (float)local_c0 * fVar16 + fVar25 * (float)local_f0);
        *pfVar13 = (float)local_b8 * fVar16 + fVar25 * (float)local_e8;
        *(ulong *)(pfVar13 + 2) =
             CONCAT44((float)((ulong)local_b0 >> 0x20) * fVar16 +
                      fVar25 * (float)((ulong)local_e0 >> 0x20),
                      (float)local_b0 * fVar16 + fVar25 * (float)local_e0);
        pfVar13[4] = (float)uStack_a8 * fVar16 + fVar25 * (float)uStack_d8;
        pfVar13[1] = 0.0;
        pfVar13[5] = 0.0;
        param_4 = param_4 + 1;
        pfVar13 = pfVar13 + 0xc;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  return;
}




void FUN_1010aa5dc(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  undefined8 local_90;
  float local_88;
  undefined8 local_80;
  float local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  undefined8 local_50;
  float local_48;
  
  FUN_1010ac6d0(param_3,param_4,&local_70);
  FUN_1010ac6d0(param_2,param_3,param_4,&local_a0);
  if (local_88 - local_58 < 0.0) {
    local_90 = CONCAT44((float)((ulong)local_90 >> 0x20) + fStack_5c,(float)local_90 + local_60);
    local_88 = local_58 + local_88;
  }
  fVar9 = local_70 * local_70 + fStack_6c * fStack_6c + local_68 * local_68 + fStack_64 * fStack_64;
  fVar1 = 0.0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  fVar2 = 0.0;
  if (1.1920929e-07 < fVar9) {
    fVar9 = 1.0 / fVar9;
    fVar4 = -fVar9;
    fVar1 = local_70 * fVar4;
    fVar3 = fStack_6c * fVar4;
    fVar4 = local_68 * fVar4;
    fVar2 = fVar9 * fStack_64;
  }
  fVar7 = ((fVar3 * local_58 + fVar2 * local_60) - fVar4 * fStack_5c) + fVar1 * local_54;
  fVar10 = (local_60 * fVar4 - fVar1 * local_58) + fVar2 * fStack_5c + fVar3 * local_54;
  fVar11 = (fVar2 * local_58 - local_60 * fVar3) + fVar1 * fStack_5c + fVar4 * local_54;
  fVar9 = local_54 * fVar2 - (fVar4 * local_58 + fVar1 * local_60 + fVar3 * fStack_5c);
  fVar5 = ((fVar9 * fVar1 + fVar4 * fVar10) - (fVar11 * fVar3 + fVar2 * fVar7)) * (float)local_80;
  fVar8 = (float)((ulong)local_80 >> 0x20);
  fVar6 = ((fVar9 * fVar3 + fVar1 * fVar11) - (fVar7 * fVar4 + fVar2 * fVar10)) * fVar8;
  fVar9 = local_78 * ((fVar9 * fVar4 + fVar3 * fVar7) - (fVar11 * fVar2 + fVar1 * fVar10));
  fVar7 = (fStack_94 * fVar5 - local_98 * fVar6) + fVar9 * fStack_9c;
  fVar10 = (fStack_94 * fVar6 + fVar5 * local_98) - fVar9 * local_a0;
  fVar11 = (local_a0 * fVar6 - fStack_9c * fVar5) + fVar9 * fStack_94;
  fVar9 = local_98 * fVar9 + fVar6 * fStack_9c + fVar5 * local_a0;
  param_5[4] = (((float)local_90 + fStack_94 * fVar7 + local_a0 * fVar9) - local_98 * fVar10) +
               fStack_9c * fVar11;
  param_5[5] = (fVar7 * local_98 + fStack_9c * fVar9 + fStack_94 * fVar10 + local_90._4_4_) -
               local_a0 * fVar11;
  param_5[6] = (fVar9 * local_98 - fVar7 * fStack_9c) + local_a0 * fVar10 + fStack_94 * fVar11 +
               local_88;
  *(ulong *)(param_5 + 8) =
       CONCAT44(fVar8 / (float)((ulong)local_50 >> 0x20),(float)local_80 / (float)local_50);
  param_5[10] = local_78 / local_48;
  *param_5 = (fStack_94 * fVar1 - local_98 * fVar3) + fVar4 * fStack_9c + fVar2 * local_a0;
  param_5[1] = (fStack_94 * fVar3 + fVar1 * local_98 + fVar2 * fStack_9c) - fVar4 * local_a0;
  param_5[2] = ((fStack_94 * fVar4 + fVar2 * local_98) - fVar1 * fStack_9c) + fVar3 * local_a0;
  param_5[3] = fStack_94 * fVar2 - (local_98 * fVar4 + fVar3 * fStack_9c + fVar1 * local_a0);
  return;
}




void FUN_1010aa834(float param_1,float *param_2,uint param_3,long param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  uint uVar3;
  float fVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  float local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  float fStack_a8;
  undefined4 uStack_a4;
  
  fVar4 = param_2[1];
  uVar5 = (ulong)(uint)param_2[2];
  fVar13 = *param_2;
  fVar15 = (float)(int)(fVar13 * param_1);
  fVar19 = (float)NEON_fminnm(fVar15,(float)((int)fVar4 - 1));
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  uVar7 = (uint)fVar15;
  uVar6 = 0;
  if (fVar4 != 0.0) {
    uVar6 = uVar7 / (uint)fVar4;
  }
  uVar3 = (int)fVar19;
  if (param_3 != 0) {
    uVar3 = uVar7 - uVar6 * (int)fVar4;
  }
  if (param_2[2] != 0.0) {
    lVar8 = 0;
    pfVar10 = param_2 + 4 + uVar5 + (uint)fVar4 * uVar5;
    pfVar11 = pfVar10 + (uint)param_2[3];
    pfVar12 = param_2 + (ulong)uVar3 + uVar5 + 4;
    pfVar9 = param_2 + 4;
    do {
      fVar15 = *pfVar12;
      fVar19 = *pfVar9;
      fVar14 = 0.0;
      if (((param_3 ^ 1) & (uint)((float)((int)fVar19 - 1U) == fVar15)) == 0) {
        fVar14 = (float)(uint)fVar4 / fVar13;
        if ((float)((int)fVar19 - 1U) != fVar15) {
          fVar14 = pfVar10[(int)fVar15 + 1];
        }
        fVar14 = (float)NEON_fminnm((param_1 - pfVar10[(uint)fVar15]) /
                                    (fVar14 - pfVar10[(uint)fVar15]),0x3f800000);
        if (fVar14 <= 0.0) {
          fVar14 = 0.0;
        }
      }
      uVar6 = 0;
      if (fVar19 != 0.0) {
        uVar6 = ((int)fVar15 + 1U) / (uint)fVar19;
      }
      FUN_1010aafb0(&local_d0,pfVar11 + (ulong)(uint)fVar15 * 5);
      FUN_1010aafb0(&local_100,pfVar11 + (ulong)(((int)fVar15 + 1U) - uVar6 * (int)fVar19) * 5);
      if (fVar14 <= 0.0) {
        puVar2 = (undefined8 *)(param_4 + lVar8);
        puVar2[1] = uStack_c8;
        *puVar2 = local_d0;
        puVar2[3] = CONCAT44(uStack_b4,local_b8);
        puVar2[2] = local_c0;
        puVar2[5] = CONCAT44(uStack_a4,fStack_a8);
        puVar2[4] = local_b0;
      }
      else {
        fVar19 = 1.0 - fVar14;
        fVar17 = (float)((ulong)local_d0 >> 0x20);
        fVar20 = (float)((ulong)uStack_c8 >> 0x20);
        fVar15 = -fVar14;
        if (0.0 <= local_100 * (float)local_d0 + fStack_fc * fVar17 +
                   fStack_f8 * (float)uStack_c8 + fStack_f4 * fVar20) {
          fVar15 = fVar14;
        }
        fVar16 = (float)local_d0 * fVar19 + local_100 * fVar15;
        fVar17 = fVar17 * fVar19 + fStack_fc * fVar15;
        fVar18 = (float)uStack_c8 * fVar19 + fStack_f8 * fVar15;
        fVar15 = fVar20 * fVar19 + fStack_f4 * fVar15;
        fVar20 = SQRT(fVar16 * fVar16 + fVar17 * fVar17 + fVar18 * fVar18 + fVar15 * fVar15);
        local_130 = 0.0;
        fStack_12c = 0.0;
        fStack_128 = 0.0;
        fStack_124 = 1.0;
        if (1.1920929e-07 < fVar20) {
          fVar20 = 1.0 / fVar20;
          local_130 = fVar16 * fVar20;
          fStack_12c = fVar17 * fVar20;
          fStack_128 = fVar18 * fVar20;
          fStack_124 = fVar15 * fVar20;
        }
        pfVar1 = (float *)(param_4 + lVar8);
        pfVar1[2] = fStack_128;
        pfVar1[3] = fStack_124;
        *pfVar1 = local_130;
        pfVar1[1] = fStack_12c;
        *(ulong *)(pfVar1 + 4) =
             CONCAT44((float)((ulong)local_c0 >> 0x20) * fVar19 +
                      (float)((ulong)local_f0 >> 0x20) * fVar14,
                      (float)local_c0 * fVar19 + (float)local_f0 * fVar14);
        pfVar1[6] = local_b8 * fVar19 + fVar14 * local_e8;
        *(ulong *)(pfVar1 + 8) =
             CONCAT44((float)((ulong)local_b0 >> 0x20) * fVar19 +
                      (float)((ulong)local_e0 >> 0x20) * fVar14,
                      (float)local_b0 * fVar19 + (float)local_e0 * fVar14);
        pfVar1[10] = fStack_a8 * fVar19 + fVar14 * local_d8;
        pfVar1[7] = 0.0;
        pfVar1[0xb] = 0.0;
      }
      pfVar10 = pfVar10 + (uint)*pfVar9;
      pfVar11 = pfVar11 + (ulong)(uint)*pfVar9 * 5;
      lVar8 = lVar8 + 0x30;
      pfVar12 = pfVar12 + (uint)fVar4;
      pfVar9 = pfVar9 + 1;
    } while (uVar5 * 0x30 - lVar8 != 0);
  }
  return;
}




void FUN_1010aaaac(float param_1,float *param_2,uint param_3,long param_4,uint param_5,long param_6)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  ushort uVar4;
  uint uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  float local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  float fStack_a8;
  undefined4 uStack_a4;
  
  fVar3 = param_2[1];
  fVar12 = *param_2;
  fVar15 = (float)(int)(fVar12 * param_1);
  fVar19 = (float)NEON_fminnm(fVar15,(float)((int)fVar3 - 1));
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  uVar8 = (uint)fVar15;
  uVar5 = 0;
  if (fVar3 != 0.0) {
    uVar5 = uVar8 / (uint)fVar3;
  }
  uVar1 = (int)fVar19;
  if (param_3 != 0) {
    uVar1 = uVar8 - uVar5 * (int)fVar3;
  }
  if (param_5 != 0) {
    uVar11 = 0;
    uVar2 = (ulong)(uint)param_2[2];
    fVar15 = param_2[3];
    param_2 = param_2 + 4;
    lVar9 = (uint)fVar3 * uVar2;
    do {
      uVar4 = *(ushort *)(param_4 + uVar11 * 2);
      if (uVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        uVar10 = (ulong)(uint)uVar4;
        pfVar6 = param_2;
        do {
          uVar5 = (int)*pfVar6 + uVar5;
          uVar10 = uVar10 - 1;
          pfVar6 = pfVar6 + 1;
        } while (uVar10 != 0);
      }
      fVar19 = param_2[uVar2 + (ulong)((int)fVar3 * (uint)uVar4) + (ulong)uVar1];
      fVar14 = param_2[uVar4];
      fVar13 = 0.0;
      if (((param_3 ^ 1) & (uint)((float)((int)fVar14 - 1U) == fVar19)) == 0) {
        fVar13 = (float)(uint)fVar3 / fVar12;
        if ((float)((int)fVar14 - 1U) != fVar19) {
          fVar13 = param_2[uVar2 + lVar9 + (ulong)uVar5 + (ulong)((int)fVar19 + 1)];
        }
        fVar13 = (float)NEON_fminnm((param_1 -
                                    param_2[uVar2 + lVar9 + (ulong)uVar5 + (ulong)(uint)fVar19]) /
                                    (fVar13 - param_2[uVar2 + lVar9 + (ulong)uVar5 +
                                                                      (ulong)(uint)fVar19]),
                                    0x3f800000);
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
      }
      uVar8 = 0;
      if (fVar14 != 0.0) {
        uVar8 = ((int)fVar19 + 1U) / (uint)fVar14;
      }
      FUN_1010aafb0(&local_d0,
                    param_2 + uVar2 + lVar9 + (ulong)(uint)fVar15 +
                                              (ulong)uVar5 * 5 + (ulong)(uint)fVar19 * 5);
      FUN_1010aafb0(&local_100,
                    param_2 + uVar2 + lVar9 + (ulong)(uint)fVar15 +
                                              (ulong)uVar5 * 5 +
                                              (ulong)(((int)fVar19 + 1U) - uVar8 * (int)fVar14) * 5)
      ;
      if (fVar13 <= 0.0) {
        puVar7 = (undefined8 *)(param_6 + uVar11 * 0x30);
        puVar7[1] = uStack_c8;
        *puVar7 = local_d0;
        puVar7[3] = CONCAT44(uStack_b4,local_b8);
        puVar7[2] = local_c0;
        puVar7[5] = CONCAT44(uStack_a4,fStack_a8);
        puVar7[4] = local_b0;
      }
      else {
        fVar14 = 1.0 - fVar13;
        fVar17 = (float)((ulong)local_d0 >> 0x20);
        fVar20 = (float)((ulong)uStack_c8 >> 0x20);
        fVar19 = -fVar13;
        if (0.0 <= local_100 * (float)local_d0 + fStack_fc * fVar17 +
                   fStack_f8 * (float)uStack_c8 + fStack_f4 * fVar20) {
          fVar19 = fVar13;
        }
        fVar16 = (float)local_d0 * fVar14 + local_100 * fVar19;
        fVar17 = fVar17 * fVar14 + fStack_fc * fVar19;
        fVar18 = (float)uStack_c8 * fVar14 + fStack_f8 * fVar19;
        fVar19 = fVar20 * fVar14 + fStack_f4 * fVar19;
        fVar20 = SQRT(fVar16 * fVar16 + fVar17 * fVar17 + fVar18 * fVar18 + fVar19 * fVar19);
        local_140 = 0.0;
        fStack_13c = 0.0;
        fStack_138 = 0.0;
        fStack_134 = 1.0;
        if (1.1920929e-07 < fVar20) {
          fVar20 = 1.0 / fVar20;
          local_140 = fVar16 * fVar20;
          fStack_13c = fVar17 * fVar20;
          fStack_138 = fVar18 * fVar20;
          fStack_134 = fVar19 * fVar20;
        }
        pfVar6 = (float *)(param_6 + uVar11 * 0x30);
        pfVar6[2] = fStack_138;
        pfVar6[3] = fStack_134;
        *pfVar6 = local_140;
        pfVar6[1] = fStack_13c;
        *(ulong *)(pfVar6 + 4) =
             CONCAT44((float)((ulong)local_c0 >> 0x20) * fVar14 +
                      (float)((ulong)local_f0 >> 0x20) * fVar13,
                      (float)local_c0 * fVar14 + (float)local_f0 * fVar13);
        pfVar6[6] = local_b8 * fVar14 + fVar13 * local_e8;
        *(ulong *)(pfVar6 + 8) =
             CONCAT44((float)((ulong)local_b0 >> 0x20) * fVar14 +
                      (float)((ulong)local_e0 >> 0x20) * fVar13,
                      (float)local_b0 * fVar14 + (float)local_e0 * fVar13);
        pfVar6[10] = fStack_a8 * fVar14 + fVar13 * local_d8;
        pfVar6[7] = 0.0;
        pfVar6[0xb] = 0.0;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_5);
  }
  return;
}




void FUN_1010aad58(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  undefined8 local_90;
  float local_88;
  undefined8 local_80;
  float local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  undefined8 local_50;
  float local_48;
  
  FUN_1010ab4fc(param_3,param_4,&local_70);
  FUN_1010ab4fc(param_2,param_3,param_4,&local_a0);
  if (local_88 - local_58 < 0.0) {
    local_90 = CONCAT44((float)((ulong)local_90 >> 0x20) + fStack_5c,(float)local_90 + local_60);
    local_88 = local_58 + local_88;
  }
  fVar9 = local_70 * local_70 + fStack_6c * fStack_6c + local_68 * local_68 + fStack_64 * fStack_64;
  fVar1 = 0.0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  fVar2 = 0.0;
  if (1.1920929e-07 < fVar9) {
    fVar9 = 1.0 / fVar9;
    fVar4 = -fVar9;
    fVar1 = local_70 * fVar4;
    fVar3 = fStack_6c * fVar4;
    fVar4 = local_68 * fVar4;
    fVar2 = fVar9 * fStack_64;
  }
  fVar7 = ((fVar3 * local_58 + fVar2 * local_60) - fVar4 * fStack_5c) + fVar1 * local_54;
  fVar10 = (local_60 * fVar4 - fVar1 * local_58) + fVar2 * fStack_5c + fVar3 * local_54;
  fVar11 = (fVar2 * local_58 - local_60 * fVar3) + fVar1 * fStack_5c + fVar4 * local_54;
  fVar9 = local_54 * fVar2 - (fVar4 * local_58 + fVar1 * local_60 + fVar3 * fStack_5c);
  fVar5 = ((fVar9 * fVar1 + fVar4 * fVar10) - (fVar11 * fVar3 + fVar2 * fVar7)) * (float)local_80;
  fVar8 = (float)((ulong)local_80 >> 0x20);
  fVar6 = ((fVar9 * fVar3 + fVar1 * fVar11) - (fVar7 * fVar4 + fVar2 * fVar10)) * fVar8;
  fVar9 = local_78 * ((fVar9 * fVar4 + fVar3 * fVar7) - (fVar11 * fVar2 + fVar1 * fVar10));
  fVar7 = (fStack_94 * fVar5 - local_98 * fVar6) + fVar9 * fStack_9c;
  fVar10 = (fStack_94 * fVar6 + fVar5 * local_98) - fVar9 * local_a0;
  fVar11 = (local_a0 * fVar6 - fStack_9c * fVar5) + fVar9 * fStack_94;
  fVar9 = local_98 * fVar9 + fVar6 * fStack_9c + fVar5 * local_a0;
  param_5[4] = (((float)local_90 + fStack_94 * fVar7 + local_a0 * fVar9) - local_98 * fVar10) +
               fStack_9c * fVar11;
  param_5[5] = (fVar7 * local_98 + fStack_9c * fVar9 + fStack_94 * fVar10 + local_90._4_4_) -
               local_a0 * fVar11;
  param_5[6] = (fVar9 * local_98 - fVar7 * fStack_9c) + local_a0 * fVar10 + fStack_94 * fVar11 +
               local_88;
  *(ulong *)(param_5 + 8) =
       CONCAT44(fVar8 / (float)((ulong)local_50 >> 0x20),(float)local_80 / (float)local_50);
  param_5[10] = local_78 / local_48;
  *param_5 = (fStack_94 * fVar1 - local_98 * fVar3) + fVar4 * fStack_9c + fVar2 * local_a0;
  param_5[1] = (fStack_94 * fVar3 + fVar1 * local_98 + fVar2 * fStack_9c) - fVar4 * local_a0;
  param_5[2] = ((fStack_94 * fVar4 + fVar2 * local_98) - fVar1 * fStack_9c) + fVar3 * local_a0;
  param_5[3] = fStack_94 * fVar2 - (local_98 * fVar4 + fVar3 * fStack_9c + fVar1 * local_a0);
  return;
}




void FUN_1010aafb0(float *param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  float fVar4;
  
  uVar2 = *param_2;
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  *param_1 = fVar4;
  uVar2 = param_2[1];
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  param_1[1] = fVar4;
  uVar2 = param_2[2];
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  param_1[2] = fVar4;
  uVar2 = param_2[3];
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  param_1[3] = fVar4;
  uVar2 = param_2[4];
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  param_1[4] = fVar4;
  uVar2 = param_2[5];
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  param_1[5] = fVar4;
  uVar2 = param_2[6];
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  param_1[6] = fVar4;
  param_1[7] = 0.0;
  uVar2 = param_2[7];
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  param_1[8] = fVar4;
  uVar2 = param_2[8];
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  param_1[9] = fVar4;
  uVar2 = param_2[9];
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  param_1[10] = fVar4;
  param_1[0xb] = 0.0;
  return;
}




void FUN_1010ab444(float param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = 1.0 - param_1;
  fVar6 = (float)*param_3;
  fVar7 = (float)((ulong)*param_3 >> 0x20);
  fVar8 = (float)param_3[1];
  fVar9 = (float)((ulong)param_3[1] >> 0x20);
  fVar10 = -param_1;
  if (0.0 <= *param_4 * fVar6 + param_4[1] * fVar7 + param_4[2] * fVar8 + param_4[3] * fVar9) {
    fVar10 = param_1;
  }
  fVar6 = fVar6 * fVar1 + *param_4 * fVar10;
  fVar7 = fVar7 * fVar1 + param_4[1] * fVar10;
  fVar8 = fVar8 * fVar1 + param_4[2] * fVar10;
  fVar9 = fVar9 * fVar1 + param_4[3] * fVar10;
  fVar10 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
  if (fVar10 <= 1.1920929e-07) {
    uVar3 = 0x3f80000000000000;
    uVar2 = 0;
  }
  else {
    fVar10 = 1.0 / fVar10;
    uVar2 = CONCAT44(fVar7 * fVar10,fVar6 * fVar10);
    uVar3 = CONCAT44(fVar9 * fVar10,fVar8 * fVar10);
  }
  param_2[1] = uVar3;
  *param_2 = uVar2;
  uVar4 = param_3[3];
  uVar2 = param_3[2];
  uVar5 = *(undefined8 *)(param_4 + 6);
  uVar3 = *(undefined8 *)(param_4 + 4);
  *(float *)(param_2 + 3) = (float)uVar4 * fVar1 + (float)uVar5 * param_1;
  *(float *)((long)param_2 + 0x1c) =
       (float)((ulong)uVar4 >> 0x20) * fVar1 + (float)((ulong)uVar5 >> 0x20) * param_1;
  *(float *)(param_2 + 2) = (float)uVar2 * fVar1 + (float)uVar3 * param_1;
  *(float *)((long)param_2 + 0x14) =
       (float)((ulong)uVar2 >> 0x20) * fVar1 + (float)((ulong)uVar3 >> 0x20) * param_1;
  param_2[4] = CONCAT44((float)((ulong)param_3[4] >> 0x20) * fVar1 +
                        (float)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20) * param_1,
                        (float)param_3[4] * fVar1 + (float)*(undefined8 *)(param_4 + 8) * param_1);
  *(float *)(param_2 + 5) = *(float *)(param_3 + 5) * fVar1 + param_1 * param_4[10];
  *(undefined4 *)((long)param_2 + 0x1c) = 0;
  *(undefined4 *)((long)param_2 + 0x2c) = 0;
  return;
}




void FUN_1010ab4fc(float param_1,float *param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  float local_58;
  undefined8 local_50;
  float local_48;
  
  fVar9 = param_2[1];
  lVar6 = ((ulong)(uint)fVar9 * 4 + 4) * (ulong)(uint)param_2[2] + (ulong)(uint)param_2[3] * 0x18;
  uVar2 = *(uint *)((long)param_2 + lVar6 + 0x10);
  lVar6 = lVar6 + 0x14;
  lVar4 = (ulong)(uint)fVar9 * 4 + lVar6;
  lVar5 = (ulong)uVar2 * 4 + lVar4;
  fVar10 = (float)(int)(*param_2 * param_1);
  fVar14 = (float)NEON_fminnm(fVar10,(float)((int)fVar9 - 1));
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  uVar7 = (uint)fVar10;
  uVar3 = 0;
  if (fVar9 != 0.0) {
    uVar3 = uVar7 / (uint)fVar9;
  }
  uVar1 = (int)fVar14;
  if (param_3 != 0) {
    uVar1 = uVar7 - uVar3 * (int)fVar9;
  }
  uVar3 = *(uint *)((long)param_2 + (ulong)uVar1 * 4 + lVar6);
  uVar8 = (ulong)uVar3;
  if ((param_3 != 0) || (uVar2 - 1 != uVar3)) {
    fVar10 = *(float *)((long)param_2 + uVar8 * 4 + lVar4);
    if (uVar2 - 1 == uVar3) {
      fVar9 = (float)(uint)fVar9 / *param_2;
    }
    else {
      fVar9 = *(float *)((long)param_2 + (ulong)(uVar3 + 1) * 4 + lVar4);
    }
    fVar9 = (float)NEON_fminnm((param_1 - fVar10) / (fVar9 - fVar10),0x3f800000);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    if (0.0 < fVar9) {
      uVar7 = 0;
      if (uVar2 != 0) {
        uVar7 = (uVar3 + 1) / uVar2;
      }
      uVar2 = (uVar3 + 1) - uVar7 * uVar2;
      FUN_1010aafb0(&local_70,(long)param_2 + uVar8 * 0x14 + lVar5);
      FUN_1010aafb0(&local_a0,(long)param_2 + (ulong)uVar2 * 0x14 + lVar5);
      fVar10 = (float)local_50;
      fVar14 = (float)((ulong)local_50 >> 0x20);
      fVar16 = (float)uStack_68;
      fVar13 = (float)((ulong)uStack_68 >> 0x20);
      fVar11 = (float)local_70;
      fVar12 = (float)((ulong)local_70 >> 0x20);
      fVar17 = (float)local_60;
      fVar18 = (float)((ulong)local_60 >> 0x20);
      fVar21 = (float)((ulong)local_80 >> 0x20);
      if (uVar2 < uVar3) {
        local_90 = local_90 * fVar10;
        fStack_8c = fStack_8c * fVar14;
        local_88 = local_48 * local_88;
        uVar27 = NEON_rev64(uStack_68,4);
        fVar19 = -(fVar16 * fStack_8c) + local_90 * fVar13 + local_88 * fVar12;
        fVar20 = (fStack_8c * fVar13 + local_90 * fVar16) - local_88 * fVar11;
        fVar29 = -(fVar12 * local_90) + fStack_8c * fVar11 + local_88 * fVar13;
        fVar22 = local_88 * fVar16 + fStack_8c * fVar12 + local_90 * fVar11;
        fVar25 = (float)uVar27;
        fVar28 = (float)((ulong)uVar27 >> 0x20);
        uVar27 = NEON_rev64(local_70,4);
        fVar32 = (float)((ulong)uVar27 >> 0x20);
        fVar34 = (fVar25 * local_a0 + fVar11 * fStack_94 + (float)uVar27 * fStack_98) -
                 fVar16 * fStack_9c;
        fVar33 = ((fVar28 * local_a0 + fVar12 * fStack_94) - fVar32 * fStack_98) +
                 fVar13 * fStack_9c;
        fVar31 = (fStack_94 * fVar28 - fVar12 * local_a0) + fStack_98 * fVar25 + fVar11 * fStack_9c;
        fVar30 = -(local_a0 * fVar11 + fVar16 * fStack_98 + fStack_9c * fVar12) + fVar13 * fStack_94
        ;
        fVar26 = 1.0;
        fVar24 = 1.0 - fVar9;
        fVar15 = -fVar9;
        if (0.0 <= fVar34 * fVar11 + fVar33 * fVar12 + fVar31 * fVar16 + fVar30 * fVar13) {
          fVar15 = fVar9;
        }
        fVar34 = fVar11 * fVar24 + fVar34 * fVar15;
        fVar33 = fVar12 * fVar24 + fVar33 * fVar15;
        fVar31 = fVar24 * fVar16 + fVar31 * fVar15;
        fVar15 = fVar24 * fVar13 + fVar30 * fVar15;
        fVar30 = SQRT(fVar34 * fVar34 + fVar33 * fVar33 + fVar31 * fVar31 + fVar15 * fVar15);
        if (fVar30 <= 1.1920929e-07) {
          uVar23 = 0;
          fVar31 = 0.0;
        }
        else {
          fVar30 = 1.0 / fVar30;
          uVar23 = CONCAT44(fVar33 * fVar30,fVar34 * fVar30);
          fVar31 = fVar30 * fVar31;
          fVar26 = fVar30 * fVar15;
        }
        *param_4 = uVar23;
        *(float *)(param_4 + 1) = fVar31;
        *(float *)((long)param_4 + 0xc) = fVar26;
        param_4[2] = CONCAT44(fVar18 * fVar24 +
                              ((fVar18 + fVar28 * fVar19 + fVar12 * fVar22 + fVar13 * fVar20) -
                              fVar32 * fVar29) * fVar9,
                              fVar17 * fVar24 +
                              (((fVar17 + fVar25 * fVar19 + fVar11 * fVar22) - fVar16 * fVar20) +
                              (float)uVar27 * fVar29) * fVar9);
        *(float *)(param_4 + 3) =
             (-(fVar19 * fVar12) + fVar22 * fVar16 + fVar20 * fVar11 + local_58 + fVar29 * fVar13) *
             fVar9 + fVar24 * local_58;
        param_4[4] = CONCAT44((fVar24 + fVar21 * fVar9) * fVar14,
                              (fVar24 + (float)local_80 * fVar9) * fVar10);
        local_48 = (fVar24 + fVar9 * local_78) * local_48;
      }
      else {
        fVar19 = 1.0 - fVar9;
        fVar15 = -fVar9;
        if (0.0 <= local_a0 * fVar11 + fStack_9c * fVar12 + fStack_98 * fVar16 + fStack_94 * fVar13)
        {
          fVar15 = fVar9;
        }
        fVar11 = fVar11 * fVar19 + local_a0 * fVar15;
        fVar12 = fVar12 * fVar19 + fStack_9c * fVar15;
        fVar20 = fVar16 * fVar19 + fStack_98 * fVar15;
        fVar13 = fVar13 * fVar19 + fStack_94 * fVar15;
        fVar16 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar20 * fVar20 + fVar13 * fVar13);
        if (fVar16 <= 1.1920929e-07) {
          uVar23 = 0x3f80000000000000;
          uVar27 = 0;
        }
        else {
          fVar16 = 1.0 / fVar16;
          uVar27 = CONCAT44(fVar12 * fVar16,fVar11 * fVar16);
          uVar23 = CONCAT44(fVar13 * fVar16,fVar20 * fVar16);
        }
        param_4[1] = uVar23;
        *param_4 = uVar27;
        param_4[2] = CONCAT44(fVar18 * fVar19 + fStack_8c * fVar9,fVar17 * fVar19 + local_90 * fVar9
                             );
        *(float *)(param_4 + 3) = local_58 * fVar19 + fVar9 * local_88;
        param_4[4] = CONCAT44(fVar14 * fVar19 + fVar21 * fVar9,
                              fVar10 * fVar19 + (float)local_80 * fVar9);
        local_48 = local_48 * fVar19 + fVar9 * local_78;
      }
      *(float *)(param_4 + 5) = local_48;
      *(undefined4 *)((long)param_4 + 0x1c) = 0;
      *(undefined4 *)((long)param_4 + 0x2c) = 0;
      return;
    }
  }
  FUN_1010aafb0(param_4,(long)param_2 + uVar8 * 0x14 + lVar5);
  return;
}




void FUN_1010ab8d0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar6 = *param_2;
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9;
  fVar1 = 0.0;
  fVar2 = 0.0;
  fVar4 = 0.0;
  fVar5 = 0.0;
  if (1.1920929e-07 < fVar10) {
    fVar10 = 1.0 / fVar10;
    fVar4 = -fVar10;
    fVar1 = fVar6 * fVar4;
    fVar2 = fVar7 * fVar4;
    fVar4 = fVar8 * fVar4;
    fVar5 = fVar10 * fVar9;
  }
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar4;
  param_1[3] = fVar5;
  fVar10 = param_2[4];
  fVar6 = param_2[5];
  fVar7 = param_2[6];
  fVar8 = param_2[7];
  fVar9 = (fVar10 * fVar5 - fVar6 * fVar4) + fVar2 * fVar7 + fVar1 * fVar8;
  fVar11 = ((fVar10 * fVar4 + fVar5 * fVar6) - fVar1 * fVar7) + fVar2 * fVar8;
  fVar12 = (fVar6 * fVar1 - fVar10 * fVar2) + fVar5 * fVar7 + fVar4 * fVar8;
  fVar10 = fVar8 * fVar5 - (fVar10 * fVar1 + fVar2 * fVar6 + fVar4 * fVar7);
  param_1[4] = (fVar10 * fVar1 + fVar4 * fVar11) - (fVar12 * fVar2 + fVar5 * fVar9);
  param_1[5] = (fVar10 * fVar2 + fVar1 * fVar12) - (fVar9 * fVar4 + fVar5 * fVar11);
  param_1[6] = (fVar10 * fVar4 + fVar2 * fVar9) - (fVar12 * fVar5 + fVar1 * fVar11);
  param_1[7] = 0.0;
  uVar3 = NEON_fmov(0x3f800000,4);
  *(ulong *)(param_1 + 8) =
       CONCAT44((float)((ulong)uVar3 >> 0x20) / (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20)
                ,(float)uVar3 / (float)*(undefined8 *)(param_2 + 8));
  param_1[10] = 1.0 / param_2[10];
  param_1[0xb] = 0.0;
  return;
}




void FUN_1010ab9e8(float *param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  float fVar4;
  
  uVar2 = *param_2;
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  *param_1 = fVar4;
  uVar2 = param_2[1];
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  param_1[1] = fVar4;
  uVar2 = param_2[2];
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  param_1[2] = fVar4;
  uVar2 = param_2[3];
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  param_1[3] = fVar4;
  uVar2 = param_2[4];
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  param_1[4] = fVar4;
  uVar2 = param_2[5];
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  param_1[5] = fVar4;
  uVar2 = param_2[6];
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  param_1[6] = fVar4;
  param_1[7] = 0.0;
  uVar2 = param_2[7];
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  param_1[8] = fVar4;
  uVar2 = param_2[8];
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  param_1[9] = fVar4;
  uVar2 = param_2[9];
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  param_1[10] = fVar4;
  param_1[0xb] = 0.0;
  return;
}




void FUN_1010abe7c(float param_1,float *param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined8 local_70;
  float local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  float local_38;
  
  fVar4 = param_2[1];
  uVar3 = (ulong)(uint)((int)param_2[2] * (int)fVar4);
  fVar5 = (float)(int)(*param_2 * param_1);
  fVar6 = (float)NEON_fminnm(fVar5,(float)((int)fVar4 - 1U));
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  uVar2 = 0;
  if (fVar4 != 0.0) {
    uVar2 = (uint)(int)fVar5 / (uint)fVar4;
  }
  uVar1 = (int)fVar6;
  if (param_3 != 0) {
    uVar1 = (int)fVar5 - uVar2 * (int)fVar4;
  }
  fVar6 = 0.0;
  if (((uint)(uVar1 == (int)fVar4 - 1U) & (param_3 ^ 0xffffffff)) == 0) {
    fVar6 = *param_2 * param_1 - fVar5;
  }
  if (fVar6 <= 0.0) {
    FUN_1010ab9e8(param_4,param_2 + uVar3 * 5 + (ulong)uVar1 * 5 + 3);
    return;
  }
  uVar2 = 0;
  if (fVar4 != 0.0) {
    uVar2 = (uVar1 + 1) / (uint)fVar4;
  }
  uVar2 = (uVar1 + 1) - uVar2 * (int)fVar4;
  FUN_1010ab9e8(&local_60,param_2 + uVar3 * 5 + (ulong)uVar1 * 5 + 3);
  FUN_1010ab9e8(&local_90,param_2 + uVar3 * 5 + (ulong)uVar2 * 5 + 3);
  fVar4 = (float)local_40;
  fVar5 = (float)((ulong)local_40 >> 0x20);
  fVar11 = (float)uStack_58;
  fVar9 = (float)((ulong)uStack_58 >> 0x20);
  fVar7 = (float)local_60;
  fVar8 = (float)((ulong)local_60 >> 0x20);
  fVar12 = (float)local_50;
  fVar13 = (float)((ulong)local_50 >> 0x20);
  fVar16 = (float)((ulong)local_70 >> 0x20);
  if (uVar2 < uVar1) {
    local_80 = local_80 * fVar4;
    fStack_7c = fStack_7c * fVar5;
    local_78 = local_38 * local_78;
    uVar22 = NEON_rev64(uStack_58,4);
    fVar14 = -(fVar11 * fStack_7c) + local_80 * fVar9 + local_78 * fVar8;
    fVar15 = (fStack_7c * fVar9 + local_80 * fVar11) - local_78 * fVar7;
    fVar24 = -(fVar8 * local_80) + fStack_7c * fVar7 + local_78 * fVar9;
    fVar17 = local_78 * fVar11 + fStack_7c * fVar8 + local_80 * fVar7;
    fVar20 = (float)uVar22;
    fVar23 = (float)((ulong)uVar22 >> 0x20);
    uVar22 = NEON_rev64(local_60,4);
    fVar27 = (float)((ulong)uVar22 >> 0x20);
    fVar29 = (fVar20 * local_90 + fVar7 * fStack_84 + (float)uVar22 * fStack_88) -
             fVar11 * fStack_8c;
    fVar28 = ((fVar23 * local_90 + fVar8 * fStack_84) - fVar27 * fStack_88) + fVar9 * fStack_8c;
    fVar26 = (fStack_84 * fVar23 - fVar8 * local_90) + fStack_88 * fVar20 + fVar7 * fStack_8c;
    fVar25 = -(local_90 * fVar7 + fVar11 * fStack_88 + fStack_8c * fVar8) + fVar9 * fStack_84;
    fVar21 = 1.0;
    fVar19 = 1.0 - fVar6;
    fVar10 = -fVar6;
    if (0.0 <= fVar29 * fVar7 + fVar28 * fVar8 + fVar26 * fVar11 + fVar25 * fVar9) {
      fVar10 = fVar6;
    }
    fVar29 = fVar7 * fVar19 + fVar29 * fVar10;
    fVar28 = fVar8 * fVar19 + fVar28 * fVar10;
    fVar26 = fVar19 * fVar11 + fVar26 * fVar10;
    fVar10 = fVar19 * fVar9 + fVar25 * fVar10;
    fVar25 = SQRT(fVar29 * fVar29 + fVar28 * fVar28 + fVar26 * fVar26 + fVar10 * fVar10);
    if (fVar25 <= 1.1920929e-07) {
      uVar18 = 0;
      fVar26 = 0.0;
    }
    else {
      fVar25 = 1.0 / fVar25;
      uVar18 = CONCAT44(fVar28 * fVar25,fVar29 * fVar25);
      fVar26 = fVar25 * fVar26;
      fVar21 = fVar25 * fVar10;
    }
    *param_4 = uVar18;
    *(float *)(param_4 + 1) = fVar26;
    *(float *)((long)param_4 + 0xc) = fVar21;
    param_4[2] = CONCAT44(fVar13 * fVar19 +
                          ((fVar13 + fVar23 * fVar14 + fVar8 * fVar17 + fVar9 * fVar15) -
                          fVar27 * fVar24) * fVar6,
                          fVar12 * fVar19 +
                          (((fVar12 + fVar20 * fVar14 + fVar7 * fVar17) - fVar11 * fVar15) +
                          (float)uVar22 * fVar24) * fVar6);
    *(float *)(param_4 + 3) =
         (-(fVar14 * fVar8) + fVar17 * fVar11 + fVar15 * fVar7 + local_48 + fVar24 * fVar9) * fVar6
         + fVar19 * local_48;
    param_4[4] = CONCAT44((fVar19 + fVar16 * fVar6) * fVar5,
                          (fVar19 + (float)local_70 * fVar6) * fVar4);
    local_38 = (fVar19 + fVar6 * local_68) * local_38;
  }
  else {
    fVar14 = 1.0 - fVar6;
    fVar10 = -fVar6;
    if (0.0 <= local_90 * fVar7 + fStack_8c * fVar8 + fStack_88 * fVar11 + fStack_84 * fVar9) {
      fVar10 = fVar6;
    }
    fVar7 = fVar7 * fVar14 + local_90 * fVar10;
    fVar8 = fVar8 * fVar14 + fStack_8c * fVar10;
    fVar15 = fVar11 * fVar14 + fStack_88 * fVar10;
    fVar9 = fVar9 * fVar14 + fStack_84 * fVar10;
    fVar11 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar15 * fVar15 + fVar9 * fVar9);
    if (fVar11 <= 1.1920929e-07) {
      uVar18 = 0x3f80000000000000;
      uVar22 = 0;
    }
    else {
      fVar11 = 1.0 / fVar11;
      uVar22 = CONCAT44(fVar8 * fVar11,fVar7 * fVar11);
      uVar18 = CONCAT44(fVar9 * fVar11,fVar15 * fVar11);
    }
    param_4[1] = uVar18;
    *param_4 = uVar22;
    param_4[2] = CONCAT44(fVar13 * fVar14 + fStack_7c * fVar6,fVar12 * fVar14 + local_80 * fVar6);
    *(float *)(param_4 + 3) = local_48 * fVar14 + fVar6 * local_78;
    param_4[4] = CONCAT44(fVar5 * fVar14 + fVar16 * fVar6,fVar4 * fVar14 + (float)local_70 * fVar6);
    local_38 = local_38 * fVar14 + fVar6 * local_68;
  }
  *(float *)(param_4 + 5) = local_38;
  *(undefined4 *)((long)param_4 + 0x1c) = 0;
  *(undefined4 *)((long)param_4 + 0x2c) = 0;
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1010ac1ec(float *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  float fVar5;
  
  puVar4 = (ushort *)*param_2;
  if ((param_3 & 1) != 0) {
    uVar2 = *puVar4;
    uVar1 = (uVar2 & 0x8000) << 0x10;
    uVar3 = uVar2 >> 10 & 0x1f;
    if (uVar3 == 0x1f) {
      fVar5 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
    }
    else if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar5 = (float)(uVar2 & 0x3ff);
      if ((short)uVar2 < 0) {
        fVar5 = -fVar5;
      }
      fVar5 = fVar5 * 5.9604645e-08;
    }
    else {
      fVar5 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
    }
    *param_1 = fVar5;
    puVar4 = puVar4 + 1;
  }
  if ((param_3 >> 1 & 1) != 0) {
    uVar2 = *puVar4;
    uVar1 = (uVar2 & 0x8000) << 0x10;
    uVar3 = uVar2 >> 10 & 0x1f;
    if (uVar3 == 0x1f) {
      fVar5 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
    }
    else if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar5 = (float)(uVar2 & 0x3ff);
      if ((short)uVar2 < 0) {
        fVar5 = -fVar5;
      }
      fVar5 = fVar5 * 5.9604645e-08;
    }
    else {
      fVar5 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
    }
    param_1[1] = fVar5;
    puVar4 = (ushort *)((long)puVar4 + 2);
  }
  if ((param_3 >> 2 & 1) != 0) {
    uVar2 = *puVar4;
    uVar1 = (uVar2 & 0x8000) << 0x10;
    uVar3 = uVar2 >> 10 & 0x1f;
    if (uVar3 == 0x1f) {
      fVar5 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
    }
    else if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar5 = (float)(uVar2 & 0x3ff);
      if ((short)uVar2 < 0) {
        fVar5 = -fVar5;
      }
      fVar5 = fVar5 * 5.9604645e-08;
    }
    else {
      fVar5 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
    }
    param_1[2] = fVar5;
    puVar4 = (ushort *)((long)puVar4 + 2);
  }
  if ((param_3 >> 3 & 1) != 0) {
    uVar2 = *puVar4;
    uVar1 = (uVar2 & 0x8000) << 0x10;
    uVar3 = uVar2 >> 10 & 0x1f;
    if (uVar3 == 0x1f) {
      fVar5 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
    }
    else if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar5 = (float)(uVar2 & 0x3ff);
      if ((short)uVar2 < 0) {
        fVar5 = -fVar5;
      }
      fVar5 = fVar5 * 5.9604645e-08;
    }
    else {
      fVar5 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
    }
    param_1[3] = fVar5;
    puVar4 = (ushort *)((long)puVar4 + 2);
  }
  if ((param_3 >> 4 & 1) != 0) {
    uVar2 = *puVar4;
    uVar1 = (uVar2 & 0x8000) << 0x10;
    uVar3 = uVar2 >> 10 & 0x1f;
    if (uVar3 == 0x1f) {
      fVar5 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
    }
    else if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar5 = (float)(uVar2 & 0x3ff);
      if ((short)uVar2 < 0) {
        fVar5 = -fVar5;
      }
      fVar5 = fVar5 * 5.9604645e-08;
    }
    else {
      fVar5 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
    }
    param_1[4] = fVar5;
    puVar4 = (ushort *)((long)puVar4 + 2);
  }
  if ((param_3 >> 5 & 1) != 0) {
    uVar2 = *puVar4;
    uVar1 = (uVar2 & 0x8000) << 0x10;
    uVar3 = uVar2 >> 10 & 0x1f;
    if (uVar3 == 0x1f) {
      fVar5 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
    }
    else if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar5 = (float)(uVar2 & 0x3ff);
      if ((short)uVar2 < 0) {
        fVar5 = -fVar5;
      }
      fVar5 = fVar5 * 5.9604645e-08;
    }
    else {
      fVar5 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
    }
    param_1[5] = fVar5;
    puVar4 = (ushort *)((long)puVar4 + 2);
  }
  if ((param_3 >> 6 & 1) != 0) {
    uVar2 = *puVar4;
    uVar1 = (uVar2 & 0x8000) << 0x10;
    uVar3 = uVar2 >> 10 & 0x1f;
    if (uVar3 == 0x1f) {
      fVar5 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
    }
    else if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar5 = (float)(uVar2 & 0x3ff);
      if ((short)uVar2 < 0) {
        fVar5 = -fVar5;
      }
      fVar5 = fVar5 * 5.9604645e-08;
    }
    else {
      fVar5 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
    }
    param_1[6] = fVar5;
    puVar4 = (ushort *)((long)puVar4 + 2);
  }
  if ((param_3 >> 7 & 1) != 0) {
    uVar2 = *puVar4;
    uVar1 = (uVar2 & 0x8000) << 0x10;
    uVar3 = uVar2 >> 10 & 0x1f;
    if (uVar3 == 0x1f) {
      fVar5 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
    }
    else if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar5 = (float)(uVar2 & 0x3ff);
      if ((short)uVar2 < 0) {
        fVar5 = -fVar5;
      }
      fVar5 = fVar5 * 5.9604645e-08;
    }
    else {
      fVar5 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
    }
    param_1[8] = fVar5;
    puVar4 = puVar4 + 1;
  }
  if ((param_3 >> 8 & 1) != 0) {
    uVar2 = *puVar4;
    uVar1 = (uVar2 & 0x8000) << 0x10;
    uVar3 = uVar2 >> 10 & 0x1f;
    if (uVar3 == 0x1f) {
      fVar5 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
    }
    else if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar5 = (float)(uVar2 & 0x3ff);
      if ((short)uVar2 < 0) {
        fVar5 = -fVar5;
      }
      fVar5 = fVar5 * 5.9604645e-08;
    }
    else {
      fVar5 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
    }
    param_1[9] = fVar5;
    puVar4 = puVar4 + 1;
  }
  if ((param_3 >> 9 & 1) != 0) {
    uVar2 = *puVar4;
    uVar1 = (uVar2 & 0x8000) << 0x10;
    uVar3 = uVar2 >> 10 & 0x1f;
    if (uVar3 == 0x1f) {
      fVar5 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
    }
    else if ((uVar2 >> 10 & 0x1f) == 0) {
      fVar5 = (float)(uVar2 & 0x3ff);
      if ((short)uVar2 < 0) {
        fVar5 = -fVar5;
      }
      fVar5 = fVar5 * 5.9604645e-08;
    }
    else {
      fVar5 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
    }
    param_1[10] = fVar5;
    puVar4 = puVar4 + 1;
  }
  *param_2 = puVar4;
  return;
}




void FUN_1010ac6d0(float param_1,float *param_2,uint param_3,undefined8 *param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined2 *local_40;
  undefined2 *local_38;
  
  fVar7 = param_2[1];
  fVar8 = param_2[3];
  fVar17 = param_2[4];
  puVar1 = (undefined2 *)((long)param_2 + (ulong)(uint)param_2[2] * 2 + 0x14);
  uVar5 = (int)fVar7 - 1;
  puVar4 = (undefined8 *)0x0;
  if (fVar8 != 0.0) {
    puVar4 = (undefined8 *)(puVar1 + (ulong)(uint)param_2[2] * 0x19 + 1);
  }
  puVar3 = (undefined8 *)(puVar1 + (ulong)(uint)param_2[2] * 0x19 + 1);
  if (fVar8 != 0.0) {
    puVar3 = (undefined8 *)((long)puVar4 + (ulong)((int)fVar8 * uVar5) * 2);
  }
  puVar4 = (undefined8 *)0x0;
  if (fVar17 != 0.0) {
    puVar4 = puVar3 + 6;
  }
  fVar8 = (float)(int)(*param_2 * param_1);
  fVar10 = (float)NEON_fminnm(fVar8,(float)uVar5);
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  uVar6 = 0;
  if (fVar7 != 0.0) {
    uVar6 = (uint)(int)fVar8 / (uint)fVar7;
  }
  uVar2 = (int)fVar10;
  if (param_3 != 0) {
    uVar2 = (int)fVar8 - uVar6 * (int)fVar7;
  }
  fVar10 = 0.0;
  if (((uint)(uVar2 == uVar5) & (param_3 ^ 0xffffffff)) == 0) {
    fVar10 = *param_2 * param_1 - fVar8;
  }
  if (fVar17 == 0.0) {
    uVar24 = puVar3[1];
    uVar28 = *puVar3;
    uVar9 = puVar3[2];
    uVar14 = puVar3[5];
    uVar12 = puVar3[4];
    param_4[3] = puVar3[3];
    param_4[2] = uVar9;
    param_4[5] = uVar14;
    param_4[4] = uVar12;
    param_4[1] = uVar24;
    *param_4 = uVar28;
  }
  else {
    local_38 = (undefined2 *)((long)puVar4 + (ulong)((uVar2 - 1) * (int)fVar17) * 2);
    if (fVar10 <= 0.0) {
      uVar24 = puVar3[1];
      uVar28 = *puVar3;
      uVar9 = puVar3[2];
      uVar14 = puVar3[5];
      uVar12 = puVar3[4];
      param_4[3] = puVar3[3];
      param_4[2] = uVar9;
      param_4[5] = uVar14;
      param_4[4] = uVar12;
      param_4[1] = uVar24;
      *param_4 = uVar28;
      if (uVar2 != 0) {
        FUN_1010ac1ec(param_4,&local_38,*puVar1);
      }
    }
    else {
      uVar5 = 0;
      if (fVar7 != 0.0) {
        uVar5 = (uVar2 + 1) / (uint)fVar7;
      }
      uVar5 = (uVar2 + 1) - uVar5 * (int)fVar7;
      local_40 = (undefined2 *)((long)puVar4 + (ulong)((uVar5 - 1) * (int)fVar17) * 2);
      uStack_98 = puVar3[1];
      local_a0 = *puVar3;
      local_88 = puVar3[3];
      local_90 = puVar3[2];
      uStack_78 = puVar3[5];
      local_80 = puVar3[4];
      local_70 = local_a0;
      uStack_68 = uStack_98;
      local_60 = local_90;
      local_58 = local_88;
      local_50 = local_80;
      uStack_48 = uStack_78;
      if (uVar2 != 0) {
        FUN_1010ac1ec(&local_70,&local_38,*puVar1);
      }
      if (uVar5 != 0) {
        FUN_1010ac1ec(&local_a0,&local_40,*puVar1);
      }
      fVar7 = (float)local_50;
      fVar8 = (float)((ulong)local_50 >> 0x20);
      fVar17 = (float)uStack_68;
      fVar15 = (float)((ulong)uStack_68 >> 0x20);
      fVar11 = (float)local_70;
      fVar13 = (float)((ulong)local_70 >> 0x20);
      fVar18 = (float)local_60;
      fVar19 = (float)((ulong)local_60 >> 0x20);
      fVar22 = (float)((ulong)local_80 >> 0x20);
      if (uVar5 < uVar2) {
        local_90._0_4_ = (float)local_90 * fVar7;
        local_90._4_4_ = local_90._4_4_ * fVar8;
        local_88._0_4_ = (float)uStack_48 * (float)local_88;
        uVar28 = NEON_rev64(uStack_68,4);
        fVar20 = -(fVar17 * local_90._4_4_) + (float)local_90 * fVar15 + (float)local_88 * fVar13;
        fVar21 = (local_90._4_4_ * fVar15 + (float)local_90 * fVar17) - (float)local_88 * fVar11;
        fVar30 = -(fVar13 * (float)local_90) + local_90._4_4_ * fVar11 + (float)local_88 * fVar15;
        fVar23 = (float)local_88 * fVar17 + local_90._4_4_ * fVar13 + (float)local_90 * fVar11;
        fVar26 = (float)uVar28;
        fVar29 = (float)((ulong)uVar28 >> 0x20);
        uVar28 = NEON_rev64(local_70,4);
        fVar33 = (float)((ulong)uVar28 >> 0x20);
        fVar35 = (fVar26 * (float)local_a0 + fVar11 * uStack_98._4_4_ +
                 (float)uVar28 * (float)uStack_98) - fVar17 * local_a0._4_4_;
        fVar34 = ((fVar29 * (float)local_a0 + fVar13 * uStack_98._4_4_) - fVar33 * (float)uStack_98)
                 + fVar15 * local_a0._4_4_;
        fVar32 = (uStack_98._4_4_ * fVar29 - fVar13 * (float)local_a0) + (float)uStack_98 * fVar26 +
                 fVar11 * local_a0._4_4_;
        fVar31 = -((float)local_a0 * fVar11 + fVar17 * (float)uStack_98 + local_a0._4_4_ * fVar13) +
                 fVar15 * uStack_98._4_4_;
        fVar27 = 1.0;
        fVar25 = 1.0 - fVar10;
        fVar16 = -fVar10;
        if (0.0 <= fVar35 * fVar11 + fVar34 * fVar13 + fVar32 * fVar17 + fVar31 * fVar15) {
          fVar16 = fVar10;
        }
        fVar35 = fVar11 * fVar25 + fVar35 * fVar16;
        fVar34 = fVar13 * fVar25 + fVar34 * fVar16;
        fVar32 = fVar25 * fVar17 + fVar32 * fVar16;
        fVar16 = fVar25 * fVar15 + fVar31 * fVar16;
        fVar31 = SQRT(fVar35 * fVar35 + fVar34 * fVar34 + fVar32 * fVar32 + fVar16 * fVar16);
        if (fVar31 <= 1.1920929e-07) {
          uVar24 = 0;
          fVar32 = 0.0;
        }
        else {
          fVar31 = 1.0 / fVar31;
          uVar24 = CONCAT44(fVar34 * fVar31,fVar35 * fVar31);
          fVar32 = fVar31 * fVar32;
          fVar27 = fVar31 * fVar16;
        }
        *param_4 = uVar24;
        *(float *)(param_4 + 1) = fVar32;
        *(float *)((long)param_4 + 0xc) = fVar27;
        param_4[2] = CONCAT44(fVar19 * fVar25 +
                              ((fVar19 + fVar29 * fVar20 + fVar13 * fVar23 + fVar15 * fVar21) -
                              fVar33 * fVar30) * fVar10,
                              fVar18 * fVar25 +
                              (((fVar18 + fVar26 * fVar20 + fVar11 * fVar23) - fVar17 * fVar21) +
                              (float)uVar28 * fVar30) * fVar10);
        *(float *)(param_4 + 3) =
             (-(fVar20 * fVar13) + fVar23 * fVar17 + fVar21 * fVar11 + (float)local_58 +
             fVar30 * fVar15) * fVar10 + fVar25 * (float)local_58;
        param_4[4] = CONCAT44((fVar25 + fVar22 * fVar10) * fVar8,
                              (fVar25 + (float)local_80 * fVar10) * fVar7);
        uStack_48._0_4_ = (fVar25 + fVar10 * (float)uStack_78) * (float)uStack_48;
      }
      else {
        fVar20 = 1.0 - fVar10;
        fVar16 = -fVar10;
        if (0.0 <= (float)local_a0 * fVar11 + local_a0._4_4_ * fVar13 +
                   (float)uStack_98 * fVar17 + uStack_98._4_4_ * fVar15) {
          fVar16 = fVar10;
        }
        fVar11 = fVar11 * fVar20 + (float)local_a0 * fVar16;
        fVar13 = fVar13 * fVar20 + local_a0._4_4_ * fVar16;
        fVar21 = fVar17 * fVar20 + (float)uStack_98 * fVar16;
        fVar15 = fVar15 * fVar20 + uStack_98._4_4_ * fVar16;
        fVar17 = SQRT(fVar11 * fVar11 + fVar13 * fVar13 + fVar21 * fVar21 + fVar15 * fVar15);
        if (fVar17 <= 1.1920929e-07) {
          uVar24 = 0x3f80000000000000;
          uVar28 = 0;
        }
        else {
          fVar17 = 1.0 / fVar17;
          uVar28 = CONCAT44(fVar13 * fVar17,fVar11 * fVar17);
          uVar24 = CONCAT44(fVar15 * fVar17,fVar21 * fVar17);
        }
        param_4[1] = uVar24;
        *param_4 = uVar28;
        param_4[2] = CONCAT44(fVar19 * fVar20 + local_90._4_4_ * fVar10,
                              fVar18 * fVar20 + (float)local_90 * fVar10);
        *(float *)(param_4 + 3) = (float)local_58 * fVar20 + fVar10 * (float)local_88;
        param_4[4] = CONCAT44(fVar8 * fVar20 + fVar22 * fVar10,
                              fVar7 * fVar20 + (float)local_80 * fVar10);
        uStack_48._0_4_ = (float)uStack_48 * fVar20 + fVar10 * (float)uStack_78;
      }
      *(float *)(param_4 + 5) = (float)uStack_48;
      *(undefined4 *)((long)param_4 + 0x1c) = 0;
      *(undefined4 *)((long)param_4 + 0x2c) = 0;
    }
  }
  return;
}




void FUN_1010acad4(float param_1,float *param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float local_28;
  undefined8 local_20;
  float local_18;
  
  fVar9 = param_2[1];
  uVar3 = (ulong)(uint)((int)param_2[2] * (int)fVar9);
  fVar8 = (float)(int)(*param_2 * param_1);
  fVar11 = (float)NEON_fminnm(fVar8,(float)((int)fVar9 - 1U));
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  uVar2 = 0;
  if (fVar9 != 0.0) {
    uVar2 = (uint)(int)fVar8 / (uint)fVar9;
  }
  uVar1 = (int)fVar11;
  if (param_3 != 0) {
    uVar1 = (int)fVar8 - uVar2 * (int)fVar9;
  }
  fVar11 = 0.0;
  if (((uint)(uVar1 == (int)fVar9 - 1U) & (param_3 ^ 0xffffffff)) == 0) {
    fVar11 = *param_2 * param_1 - fVar8;
  }
  if (fVar11 <= 0.0) {
    param_2 = param_2 + uVar3 * 0xc + (ulong)uVar1 * 0xc + 3;
    uVar7 = *(undefined8 *)(param_2 + 2);
    uVar6 = *(undefined8 *)param_2;
    uVar10 = *(undefined8 *)(param_2 + 4);
    uVar13 = *(undefined8 *)(param_2 + 10);
    uVar12 = *(undefined8 *)(param_2 + 8);
    param_4[3] = *(undefined8 *)(param_2 + 6);
    param_4[2] = uVar10;
    param_4[5] = uVar13;
    param_4[4] = uVar12;
    param_4[1] = uVar7;
    *param_4 = uVar6;
  }
  else {
    uVar2 = 0;
    if (fVar9 != 0.0) {
      uVar2 = (uVar1 + 1) / (uint)fVar9;
    }
    uVar2 = (uVar1 + 1) - uVar2 * (int)fVar9;
    uVar4 = (ulong)uVar2;
    if (uVar1 <= uVar2) {
      FUN_1010ab444(param_4);
      return;
    }
    uVar5 = (ulong)uVar1;
    fVar14 = param_2[uVar3 * 0xc + uVar4 * 0xc + 6];
    fVar9 = (float)*(undefined8 *)(param_2 + uVar3 * 0xc + uVar5 * 0xc + 0xb);
    fVar11 = param_2[uVar3 * 0xc + uVar4 * 0xc + 7] * fVar9;
    fVar8 = (float)((ulong)*(undefined8 *)(param_2 + uVar3 * 0xc + uVar5 * 0xc + 0xb) >> 0x20);
    fVar15 = param_2[uVar3 * 0xc + uVar4 * 0xc + 8] * fVar8;
    fVar16 = param_2[uVar3 * 0xc + uVar5 * 0xc + 0xd] * param_2[uVar3 * 0xc + uVar4 * 0xc + 9];
    fVar18 = param_2[uVar3 * 0xc + uVar5 * 0xc + 4];
    fVar17 = param_2[uVar3 * 0xc + uVar5 * 0xc + 5];
    fVar20 = param_2[uVar3 * 0xc + uVar5 * 0xc + 6];
    fVar19 = (fVar20 * fVar11 - fVar17 * fVar15) + fVar16 * fVar18;
    fVar22 = param_2[uVar3 * 0xc + (ulong)uVar1 * 0xc + 3];
    fVar21 = (fVar20 * fVar15 + fVar11 * fVar17) - fVar16 * fVar22;
    fVar23 = (fVar22 * fVar15 - fVar18 * fVar11) + fVar16 * fVar20;
    fVar11 = fVar17 * fVar16 + fVar15 * fVar18 + fVar11 * fVar22;
    local_30 = ((param_2[uVar3 * 0xc + uVar5 * 0xc + 7] + fVar20 * fVar19 + fVar22 * fVar11) -
               fVar17 * fVar21) + fVar18 * fVar23;
    fStack_2c = (fVar19 * fVar17 + fVar18 * fVar11 + fVar20 * fVar21 +
                param_2[uVar3 * 0xc + uVar5 * 0xc + 8]) - fVar22 * fVar23;
    local_28 = (fVar11 * fVar17 - fVar19 * fVar18) + fVar22 * fVar21 + fVar20 * fVar23 +
               param_2[uVar3 * 0xc + uVar5 * 0xc + 9];
    local_20 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + uVar3 * 0xc + uVar4 * 0xc + 0xb) >>
                               0x20) * fVar8,
                        (float)*(undefined8 *)(param_2 + uVar3 * 0xc + uVar4 * 0xc + 0xb) * fVar9);
    local_18 = param_2[uVar3 * 0xc + uVar4 * 0xc + 0xd] * param_2[uVar3 * 0xc + uVar5 * 0xc + 0xd];
    fVar9 = param_2[uVar3 * 0xc + uVar4 * 0xc + 3];
    fVar11 = param_2[uVar3 * 0xc + uVar4 * 0xc + 4];
    fVar8 = param_2[uVar3 * 0xc + uVar4 * 0xc + 5];
    local_40 = (fVar9 * fVar20 + fVar22 * fVar14 + fVar18 * fVar8) - fVar17 * fVar11;
    fStack_3c = ((fVar9 * fVar17 + fVar18 * fVar14) - fVar22 * fVar8) + fVar20 * fVar11;
    local_38 = (fVar14 * fVar17 - fVar9 * fVar18) + fVar20 * fVar8 + fVar22 * fVar11;
    fStack_34 = fVar14 * fVar20 - (fVar9 * fVar22 + fVar17 * fVar8 + fVar18 * fVar11);
    FUN_1010ab444(param_4,param_2 + uVar3 * 0xc + (ulong)uVar1 * 0xc + 3,&local_40);
  }
  return;
}




void FUN_1010accc0(undefined4 *param_1)

{
  *param_1 = 0;
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
  }
  *(undefined8 *)(param_1 + 2) = 0;
  if (*(void **)(param_1 + 6) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 6));
  }
  *(undefined8 *)(param_1 + 6) = 0;
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 4));
  }
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}




uint FUN_1010acd10(long param_1,int param_2)

{
  ulong uVar1;
  
  if ((ulong)*(ushort *)(param_1 + 2) != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 8) + uVar1 * 4) == param_2) goto LAB_1010acd3c;
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(param_1 + 2) != uVar1);
  }
  uVar1 = 0xffff;
LAB_1010acd3c:
  return (uint)uVar1 & 0xffff;
}




uint FUN_1010acd44(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1010acd98(param_2);
  if ((ulong)*(ushort *)(param_1 + 2) != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 8) + uVar2 * 4) == iVar1) goto LAB_1010acd88;
      uVar2 = uVar2 + 1;
    } while (*(ushort *)(param_1 + 2) != uVar2);
  }
  uVar2 = 0xffff;
LAB_1010acd88:
  return (uint)uVar2 & 0xffff;
}




undefined8 FUN_1010acd98(char *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    uVar1 = FUN_1004d2524(param_1);
    uVar2 = FUN_100015208(param_1,uVar1,0x12345678);
    return uVar2;
  }
  return 0;
}




void FUN_1010acde8(undefined2 *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined2 *local_80;
  undefined8 **local_78;
  undefined8 uStack_70;
  long local_68;
  
  local_78 = (undefined8 ***)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_1006581d8(param_2,&local_78);
  pppuVar2 = (undefined8 ***)local_78;
  if (-1 < local_68) {
    pppuVar2 = &local_78;
  }
  uVar3 = FUN_100658c88(pppuVar2,1);
  if ((int)uVar3 != -1) {
    local_80 = (undefined2 *)0x0;
    FUN_100658cc4(uVar3,&local_80);
    FUN_100658c9c(uVar3);
    *param_1 = *local_80;
    uVar8 = (ulong)(ushort)local_80[1];
    param_1[1] = local_80[1];
    puVar1 = local_80 + 2;
    pvVar4 = operator_new__(uVar8 << 2);
    *(void **)(param_1 + 4) = pvVar4;
    pvVar5 = operator_new__(uVar8 << 1);
    *(void **)(param_1 + 8) = pvVar5;
    pvVar6 = operator_new__(uVar8 * 0x30);
    *(void **)(param_1 + 0xc) = pvVar6;
    _memmove(pvVar4,puVar1,uVar8 << 2);
    _memmove(pvVar5,puVar1 + uVar8 * 2,uVar8 << 1);
    _memmove(pvVar6,puVar1 + uVar8 * 2 + uVar8,uVar8 * 0x30);
    FUN_1010a91bc(pvVar6,pvVar6,param_1);
    if (param_1[1] != 0) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        FUN_1010ab8d0(*(long *)(param_1 + 0xc) + lVar7,*(long *)(param_1 + 0xc) + lVar7);
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x30;
      } while (uVar8 < (ushort)param_1[1]);
    }
    FUN_100658ce8(local_80);
  }
  if (local_68 < 0) {
    operator_delete(local_78);
  }
  return;
}




long FUN_1010acf68(long param_1)

{
  FUN_1010ad1e0(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}




long FUN_1010acf90(long param_1)

{
  FUN_1010ad230(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}




undefined4 * FUN_1010acfb8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_60;
  void *local_58;
  char local_49;
  undefined4 local_48;
  char local_41;
  undefined4 *local_40;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,param_1);
  puVar1 = (undefined8 *)FUN_1010ad430(&DAT_101dc0ce8,local_38);
  if (puVar1 == &DAT_101dc0cf0) {
    puVar2 = operator_new(0x20);
    *puVar2 = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined8 *)(puVar2 + 2) = 0;
    FUN_1010acde8(puVar2,param_1);
    FUN_10003330c(&local_60,local_38);
    local_48 = 1;
    local_40 = puVar2;
    FUN_1010ad530(&DAT_101dc0ce8,&local_60,&local_60);
    if (local_49 < '\0') {
      operator_delete(local_60);
    }
    local_60 = puVar2;
    FUN_10003330c(&local_58,local_38);
    FUN_1010ad6b4(&DAT_101dc0d00,&local_60,&local_60);
    if (local_41 < '\0') {
      operator_delete(local_58);
    }
  }
  else {
    *(int *)(puVar1 + 7) = *(int *)(puVar1 + 7) + 1;
    puVar2 = (undefined4 *)puVar1[8];
  }
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return puVar2;
}




void FUN_1010ad0c4(ulong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  if (DAT_101dc0d08 != (undefined8 *)0x0) {
    puVar3 = &DAT_101dc0d08;
    puVar2 = DAT_101dc0d08;
    do {
      if ((ulong)puVar2[4] >= param_1) {
        puVar3 = puVar2;
      }
      puVar2 = (undefined8 *)puVar2[(ulong)puVar2[4] < param_1];
    } while (puVar2 != (undefined8 *)0x0);
    if ((((undefined8 **)puVar3 != &DAT_101dc0d08) && ((ulong)puVar3[4] <= param_1)) &&
       (puVar2 = (undefined8 *)FUN_1010ad430(&DAT_101dc0ce8,puVar3 + 5), puVar2 != &DAT_101dc0cf0))
    {
      iVar1 = *(int *)(puVar2 + 7);
      *(int *)(puVar2 + 7) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        pvVar4 = (void *)puVar2[8];
        if (pvVar4 != (void *)0x0) {
          FUN_1010accc0(pvVar4);
          operator_delete(pvVar4);
        }
        FUN_1010ad7dc(&DAT_101dc0ce8,puVar2);
        FUN_1010ad880(&DAT_101dc0d00,puVar3);
        return;
      }
    }
  }
  return;
}




void FUN_1010ad1a0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1010ad1a0(param_1,*param_2);
    FUN_1010ad1a0(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_1010ad1e0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1010ad1e0(param_1,*param_2);
    FUN_1010ad1e0(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_1010ad230(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1010ad230(param_1,*param_2);
    FUN_1010ad230(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x3f) < '\0') {
      operator_delete((void *)param_2[5]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




undefined1  [16] FUN_1010ad280(long param_1,uint *param_2,undefined8 *param_3)

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
    puVar4 = (undefined8 *)(param_1 + 8);
    puVar2 = (undefined8 *)*puVar3;
    do {
      while (puVar3 = puVar2, *param_2 < *(uint *)(puVar3 + 4)) {
        puVar4 = puVar3;
        puVar2 = (undefined8 *)*puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_1010ad2f4;
      }
      if (*param_2 <= *(uint *)(puVar3 + 4)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_1010ad2f4:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x30);
    uVar6 = *param_3;
    *(undefined8 *)((long)pvVar5 + 0x28) = param_3[1];
    *(undefined8 *)((long)pvVar5 + 0x20) = uVar6;
    FUN_1010ad348(param_1,puVar3,puVar4,pvVar5);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar5;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_1010ad348(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




long * FUN_1010ad39c(undefined8 *param_1,void *param_2)

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
  FUN_10012bc9c(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




long * FUN_1010ad430(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      iVar2 = FUN_1010ad4b0(plVar5 + 4,param_2);
      lVar1 = 8;
      if (iVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_1010ad4b0(param_2,plVar4 + 4), iVar2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}




uint FUN_1010ad4b0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_1010ad520;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_1010ad520:
  return uVar8 >> 0x1f;
}




undefined1  [16] FUN_1010ad530(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 local_38;
  
  puVar2 = (undefined8 *)FUN_1010ad5bc(param_1,&local_38,param_2);
  pvVar3 = (void *)*puVar2;
  bVar1 = pvVar3 == (void *)0x0;
  if (bVar1) {
    pvVar3 = operator_new(0x48);
    FUN_10003330c((long)pvVar3 + 0x20,param_3);
    uVar4 = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)((long)pvVar3 + 0x40) = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)((long)pvVar3 + 0x38) = uVar4;
    FUN_1010ad660(param_1,local_38,puVar2,pvVar3);
  }
  auVar5[8] = bVar1;
  auVar5._0_8_ = pvVar3;
  auVar5._9_7_ = 0;
  return auVar5;
}




long * FUN_1010ad5bc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    *param_2 = plVar2;
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    do {
      while( true ) {
        plVar4 = plVar3;
        iVar1 = FUN_1010ad4b0(param_3,plVar4 + 4);
        if (iVar1 == 0) break;
        plVar2 = plVar4;
        plVar3 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          *param_2 = plVar4;
          return plVar4;
        }
      }
      iVar1 = FUN_1010ad4b0(plVar4 + 4,param_3);
      if (iVar1 == 0) break;
      plVar2 = plVar4 + 1;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *param_2 = plVar4;
  }
  return plVar2;
}




void FUN_1010ad660(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




undefined1  [16] FUN_1010ad6b4(long param_1,ulong *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)(param_1 + 8);
    puVar2 = (undefined8 *)*puVar3;
    do {
      while (puVar3 = puVar2, *param_2 < (ulong)puVar3[4]) {
        puVar4 = puVar3;
        puVar2 = (undefined8 *)*puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_1010ad728;
      }
      if (*param_2 <= (ulong)puVar3[4]) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_1010ad728:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x40);
    *(undefined8 *)((long)pvVar5 + 0x20) = *param_3;
    FUN_10003330c((long)pvVar5 + 0x28,param_3 + 1);
    FUN_1010ad788(param_1,puVar3,puVar4,pvVar5);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = pvVar5;
  auVar6._9_7_ = 0;
  return auVar6;
}




void FUN_1010ad788(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




long * FUN_1010ad7dc(undefined8 *param_1,void *param_2)

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
  FUN_10012bc9c(param_1[1],param_2);
  if (*(char *)((long)param_2 + 0x37) < '\0') {
    operator_delete(*(void **)((long)param_2 + 0x20));
  }
  operator_delete(param_2);
  return plVar3;
}




long * FUN_1010ad880(undefined8 *param_1,void *param_2)

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
  FUN_10012bc9c(param_1[1],param_2);
  if (*(char *)((long)param_2 + 0x3f) < '\0') {
    operator_delete(*(void **)((long)param_2 + 0x28));
  }
  operator_delete(param_2);
  return plVar3;
}




void FUN_1010ad924(void)

{
  DAT_101dc0cf8 = 0;
  DAT_101dc0cf0 = 0;
  DAT_101dc0ce8 = &DAT_101dc0cf0;
  ___cxa_atexit(FUN_1010acf68,&DAT_101dc0ce8,0x100000000);
  DAT_101dc0d10 = 0;
  DAT_101dc0d08 = 0;
  DAT_101dc0d00 = &DAT_101dc0d08;
  ___cxa_atexit(FUN_1010acf90,&DAT_101dc0d00,0x100000000);
  return;
}




ulong FUN_1010ad990(char *param_1)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      param_1 = param_1 + 1;
      uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_1;
    }
  }
  uVar2 = (ulong)DAT_101ea5b28;
  uVar4 = 0;
  uVar5 = uVar4;
  if (DAT_101ea5b28 != 0) {
    do {
      if ((&DAT_101ea5ae8)[uVar4] == uVar3) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      uVar5 = uVar2;
    } while (uVar2 != uVar4);
  }
  (&DAT_101ea5ae8)[uVar5] = uVar3;
  DAT_101ea5b28 = DAT_101ea5b28 + 1;
  return uVar2;
}




void FUN_1010ada18(long param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  void *pvVar9;
  int *piVar10;
  
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar4) {
      *param_2 = 100;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar1 = param_2[10];
  piVar10 = param_2 + (ulong)uVar1 * 4 + 2;
  pvVar9 = *(void **)piVar10;
  if ((pvVar9 == (void *)0x0) ||
     (uVar6 = (ulong)*(uint *)((long)pvVar9 + 0x20000), pvVar8 = pvVar9,
     *(uint *)((long)pvVar9 + 0x20000) < 0x1f)) {
    pvVar8 = *(void **)(param_2 + (ulong)uVar1 * 4 + 4);
    if (pvVar8 == (void *)0x0) {
      pvVar8 = operator_new(0x20010);
      uVar6 = 0x20000;
      *(undefined4 *)((long)pvVar8 + 0x20000) = 0x20000;
      *(void **)((long)pvVar8 + 0x20008) = pvVar9;
      *(void **)piVar10 = pvVar8;
    }
    else {
      uVar7 = *(undefined8 *)((long)pvVar8 + 0x20008);
      *(void **)((long)pvVar8 + 0x20008) = pvVar9;
      *(void **)piVar10 = pvVar8;
      *(undefined8 *)(param_2 + (ulong)uVar1 * 4 + 4) = uVar7;
      uVar6 = 0x20000;
      *(undefined4 *)((long)pvVar8 + 0x20000) = 0x20000;
    }
  }
  *(int *)((long)pvVar8 + 0x20000) = (int)uVar6 + -0x1f;
  puVar5 = (undefined8 *)((long)pvVar8 + 0x20000 + (7 - uVar6) & 0xfffffffffffffff8);
  *param_2 = 0;
  uVar2 = *(undefined1 *)(param_1 + 8);
  *puVar5 = &PTR_FUN_10182e590;
  puVar5[1] = param_3;
  *(undefined1 *)(puVar5 + 2) = uVar2;
  return;
}




void FUN_1010adb10(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001010adb18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_1010adb1c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  plVar4 = *(long **)(param_2 + 8);
  puVar5 = *(undefined8 **)(*plVar4 + (ulong)*(byte *)(param_2 + 0x10) * 8 + 8);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_1004d22dc(0);
  }
  FUN_1010b7024(*puVar5);
  lVar2 = plVar4[1];
  lVar1 = puVar5[1];
  lVar3 = lVar2;
  if (puVar5[1] == 0) {
    if (lVar2 == 0) goto LAB_1010adb6c;
    lVar3 = 0;
    lVar1 = lVar2;
  }
  FUN_1010af818(lVar1,lVar3);
LAB_1010adb6c:
  FUN_1010b4b00(0x7010100c2);
  return;
}




undefined8 * thunk_FUN_1010ae29c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = 0;
  if (param_1[1] != 0) {
    pvVar1 = (void *)FUN_1010af6a0();
    operator_delete(pvVar1);
  }
  return param_1;
}




undefined8 * FUN_1010adb88(undefined8 *param_1,uint param_2)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  *param_1 = &PTR_FUN_10182e528;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 10) = 0;
  if (param_2 < 3) {
    uVar1 = FUN_1010ad990((&PTR_s_forward_low_10182e6b8)[(int)param_2]);
  }
  *(undefined1 *)((long)param_1 + 10) = uVar1;
  *(undefined1 *)((long)param_1 + 9) = uVar1;
  *(undefined1 *)(param_1 + 1) = uVar1;
  *(uint *)((long)param_1 + 0xc) = param_2;
  return param_1;
}




void FUN_1010adbec(long param_1,int *param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  void *pvVar8;
  int *piVar9;
  
  uVar7 = (ulong)*(byte *)(param_1 + (ulong)*(uint *)(param_1 + 0xc) + 8);
  if (*(long *)(*param_3 + uVar7 * 8 + 8) == 0) {
    uVar7 = (ulong)*(byte *)(param_1 + 9);
  }
  do {
    while (*param_2 != 0) {
      ClearExclusiveLocal();
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar3) {
      *param_2 = 100;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar1 = param_2[10];
  piVar9 = param_2 + (ulong)uVar1 * 4 + 2;
  pvVar8 = *(void **)piVar9;
  if ((pvVar8 == (void *)0x0) ||
     (uVar4 = (ulong)*(uint *)((long)pvVar8 + 0x20000), pvVar6 = pvVar8,
     *(uint *)((long)pvVar8 + 0x20000) < 0x27)) {
    pvVar6 = *(void **)(param_2 + (ulong)uVar1 * 4 + 4);
    if (pvVar6 == (void *)0x0) {
      pvVar6 = operator_new(0x20010);
      uVar4 = 0x20000;
      *(undefined4 *)((long)pvVar6 + 0x20000) = 0x20000;
      *(void **)((long)pvVar6 + 0x20008) = pvVar8;
      *(void **)piVar9 = pvVar6;
    }
    else {
      uVar5 = *(undefined8 *)((long)pvVar6 + 0x20008);
      *(void **)((long)pvVar6 + 0x20008) = pvVar8;
      *(void **)piVar9 = pvVar6;
      *(undefined8 *)(param_2 + (ulong)uVar1 * 4 + 4) = uVar5;
      uVar4 = 0x20000;
      *(undefined4 *)((long)pvVar6 + 0x20000) = 0x20000;
    }
  }
  *(int *)((long)pvVar6 + 0x20000) = (int)uVar4 + -0x27;
  *param_2 = 0;
  FUN_1010b0ea8((long)pvVar6 + 0x20000 + (7 - uVar4) & 0xfffffffffffffff8,param_3,param_4,uVar7);
  return;
}




void FUN_1010adcfc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001010add04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_1010add08(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  plVar4 = *(long **)(param_2 + 8);
  puVar5 = *(undefined8 **)(*plVar4 + (ulong)*(byte *)(param_2 + 0x18) * 8 + 8);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_1004d22dc(0);
  }
  FUN_1010b7024(*puVar5);
  lVar1 = plVar4[1];
  lVar3 = puVar5[1];
  lVar2 = lVar1;
  if (puVar5[1] == 0) {
    if (lVar1 == 0) goto LAB_1010add60;
    lVar2 = 0;
    lVar3 = lVar1;
  }
  FUN_1010af818(lVar3,lVar2);
LAB_1010add60:
  lVar3 = *(long *)(**(long **)(param_2 + 8) + (ulong)*(byte *)(param_2 + 0x18) * 8 + 8);
  if (lVar3 == 0) {
    FUN_1004d22dc(0);
  }
  FUN_1010b4b00(*(undefined8 *)(lVar3 + 0x10));
  return;
}




undefined8 * FUN_1010add94(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = operator_new(0x18);
  *(undefined4 *)(puVar1 + 2) = 0;
  pvVar2 = operator_new__(0x1000);
  *puVar1 = pvVar2;
  pvVar2 = operator_new__(0x2000);
  puVar1[1] = pvVar2;
  *param_1 = puVar1;
  return param_1;
}




undefined8 * thunk_FUN_1010add94(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = operator_new(0x18);
  *(undefined4 *)(puVar1 + 2) = 0;
  pvVar2 = operator_new__(0x1000);
  *puVar1 = pvVar2;
  pvVar2 = operator_new__(0x2000);
  puVar1[1] = pvVar2;
  *param_1 = puVar1;
  return param_1;
}




long * FUN_1010adde4(long *param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(*param_1 + 0x10) = 0;
  if (*param_1 != 0) {
    pvVar1 = (void *)FUN_1010af6a0();
    operator_delete(pvVar1);
  }
  *param_1 = 0;
  return param_1;
}




void FUN_1010ade20(long *param_1,int param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = DAT_101ea5ad0;
  if ((param_2 != 0) && (uVar2 = (ulong)*(ushort *)(param_1 + 2), *(ushort *)(param_1 + 2) != 0)) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      if (*(uint *)(*param_1 + lVar3) >> 0x1c == 0xc) {
        FUN_1010af6ec(uVar1,*(undefined8 *)
                             (param_1[1] +
                             ((ulong)(*(uint *)(*param_1 + lVar3) >> 0xc) & 0xffff) * 4));
        uVar2 = (ulong)*(ushort *)(param_1 + 2);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar4 < uVar2);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}




undefined8 * thunk_FUN_1010af6a0(undefined8 *param_1)

{
  FUN_1010ade20(param_1,1);
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete__((void *)*param_1);
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
  }
  return param_1;
}




long * thunk_FUN_1010adde4(long *param_1)

{
  void *pvVar1;
  
  *(undefined4 *)(*param_1 + 0x10) = 0;
  if (*param_1 != 0) {
    pvVar1 = (void *)FUN_1010af6a0();
    operator_delete(pvVar1);
  }
  *param_1 = 0;
  return param_1;
}




void FUN_1010adeb0(long *param_1,uint param_2,undefined8 *param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  
  uVar1 = *(uint *)((long *)*param_1 + 2);
  lVar3 = *(long *)*param_1;
  lVar4 = ((ulong)uVar1 & 0xffff) * 8;
  *(uint *)(lVar3 + lVar4) = *(uint *)(lVar3 + lVar4) & 0xfffff000 | param_2 & 0xfff;
  uVar2 = uVar1 >> 0x10;
  uVar6 = *(uint *)(*(long *)*param_1 + lVar4);
  *(uint *)(*(long *)*param_1 + lVar4) = uVar6 & 0xf0000000 | uVar6 & 0xfff | uVar2 << 0xc;
  *(uint *)(*(long *)*param_1 + lVar4) =
       *(uint *)(*(long *)*param_1 + lVar4) & 0x8fffffff | 0x40000000;
  uVar6 = 0x80000000;
  if (param_4 == 0) {
    uVar6 = 0;
  }
  *(uint *)(*(long *)*param_1 + lVar4) = uVar6 | *(uint *)(*(long *)*param_1 + lVar4) & 0x7fffffff;
  plVar5 = (long *)*param_1;
  *(undefined4 *)(*plVar5 + (ulong)(ushort)uVar1 * 8 + 4) = param_5;
  if (param_4 == 0) {
    *(undefined8 **)(plVar5[1] + (ulong)uVar2 * 4) = param_3;
  }
  else {
    *(undefined8 *)(plVar5[1] + (ulong)uVar2 * 4) = *param_3;
  }
  *(short *)(*param_1 + 0x10) = (short)*(undefined4 *)(*param_1 + 0x10) + 1;
  *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + 0x20000;
  return;
}




void FUN_1010adf7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_1004d2524(param_4);
    uVar2 = FUN_100015208(param_4,uVar1,0x12345678);
  }
  local_38 = param_3;
  FUN_1010adeb0(param_1,param_2,&local_38,1,uVar2);
  return;
}




void FUN_1010adff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_1004d2524(param_4);
    uVar2 = FUN_100015208(param_4,uVar1,0x12345678);
  }
  FUN_1010adeb0(param_1,param_2,param_3,0,uVar2);
  return;
}




void FUN_1010ae064(long *param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5,
                  undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar8 = (param_4 - 2) * 0x10000000 + 0x10000000;
  if (2 < param_4 - 2) {
    uVar8 = 0;
  }
  uVar1 = *(uint *)((long *)*param_1 + 2);
  lVar3 = *(long *)*param_1;
  lVar6 = ((ulong)uVar1 & 0xffff) * 8;
  *(uint *)(lVar3 + lVar6) = *(uint *)(lVar3 + lVar6) & 0xfffff000 | param_2 & 0xfff;
  uVar2 = *(uint *)(*(long *)*param_1 + lVar6);
  uVar4 = (ulong)(uVar1 >> 0x10);
  *(uint *)(*(long *)*param_1 + lVar6) = uVar2 & 0xf0000000 | uVar2 & 0xfff | (uVar1 >> 0x10) << 0xc
  ;
  *(uint *)(*(long *)*param_1 + lVar6) = *(uint *)(*(long *)*param_1 + lVar6) & 0x8fffffff | uVar8;
  uVar8 = 0x80000000;
  if (param_5 == 0) {
    uVar8 = 0;
  }
  *(uint *)(*(long *)*param_1 + lVar6) = uVar8 | *(uint *)(*(long *)*param_1 + lVar6) & 0x7fffffff;
  plVar5 = (long *)*param_1;
  *(undefined4 *)(*plVar5 + (ulong)(ushort)uVar1 * 8 + 4) = param_6;
  *(short *)(plVar5 + 2) = (short)(int)plVar5[2] + 1;
  if (param_5 != 0) {
    lVar3 = *param_1;
    if (param_4 != 0) {
      lVar6 = *(long *)(lVar3 + 8);
      uVar7 = (ulong)param_4;
      do {
        *(undefined4 *)(lVar6 + uVar4 * 4) = *param_3;
        uVar4 = (ulong)((int)uVar4 + 1);
        uVar7 = uVar7 - 1;
        param_3 = param_3 + 1;
      } while (uVar7 != 0);
    }
    *(uint *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + param_4 * 0x10000;
    return;
  }
  *(undefined4 **)(*(long *)(*param_1 + 8) + uVar4 * 4) = param_3;
  *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + 0x20000;
  return;
}




void FUN_1010ae160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_6 != 0) {
    uVar1 = FUN_1004d2524(param_6);
    uVar2 = FUN_100015208(param_6,uVar1,0x12345678);
  }
  FUN_1010ae064(param_1,param_2,param_3,param_4,param_5,uVar2);
  return;
}




undefined8 * FUN_1010ae1d8(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  puVar1 = operator_new(0x18);
  plVar7 = (long *)*param_1;
  uVar4 = *(uint *)(plVar7 + 2);
  pvVar2 = operator_new__((ulong)(uVar4 << 3) & 0x7fff8);
  *puVar1 = pvVar2;
  pvVar3 = operator_new__((ulong)(uVar4 >> 0xe) & 0x3fffc);
  puVar1[1] = pvVar3;
  uVar4 = *(uint *)(plVar7 + 2);
  if ((uVar4 & 0xffff) != 0) {
    uVar5 = 0;
    do {
      *(undefined8 *)((long)pvVar2 + uVar5 * 8) = *(undefined8 *)(*plVar7 + uVar5 * 8);
      uVar5 = uVar5 + 1;
      uVar4 = *(uint *)(plVar7 + 2);
    } while (uVar5 < (ushort)uVar4);
  }
  if (0xffff < uVar4) {
    uVar5 = 0;
    lVar6 = plVar7[1];
    do {
      *(undefined4 *)((long)pvVar3 + uVar5 * 4) = *(undefined4 *)(lVar6 + uVar5 * 4);
      uVar5 = uVar5 + 1;
      uVar4 = *(uint *)(plVar7 + 2);
    } while (uVar5 < uVar4 >> 0x10);
  }
  *(uint *)(puVar1 + 2) = uVar4;
  return puVar1;
}




void FUN_1010ae294(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




undefined8 * FUN_1010ae29c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = 0;
  if (param_1[1] != 0) {
    pvVar1 = (void *)FUN_1010af6a0();
    operator_delete(pvVar1);
  }
  return param_1;
}




void FUN_1010ae2d0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




long FUN_1010ae2d8(long param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = 0;
  lVar6 = 0;
  do {
    lVar1 = *(long *)(param_1 + lVar6 * 8 + 8);
    lVar3 = lVar5;
    lVar4 = lVar1;
    if (lVar1 != 0) {
      while( true ) {
        if (lVar4 == lVar1) {
          *(undefined8 *)(param_1 + lVar3 + 8) = 0;
        }
        if (lVar3 == 0x78) break;
        lVar4 = param_1 + lVar3;
        lVar3 = lVar3 + 8;
        lVar4 = *(long *)(lVar4 + 0x10);
      }
      pvVar2 = (void *)FUN_1010b0068();
      operator_delete(pvVar2);
    }
    lVar6 = lVar6 + 1;
    lVar5 = lVar5 + 8;
  } while (lVar6 != 0x10);
  return param_1;
}




undefined2 * FUN_1010ae35c(undefined2 *param_1)

{
  long lVar1;
  long lVar2;
  undefined2 *puVar3;
  
  lVar1 = 1;
  puVar3 = param_1;
  do {
    *puVar3 = (short)lVar1;
    lVar1 = lVar1 + 1;
    puVar3 = puVar3 + 8;
  } while (lVar1 != 0x1000);
  *(undefined8 *)(param_1 + 0x8000) = 0xfff0000;
  lVar1 = 0x10010;
  lVar2 = 1;
  do {
    *(short *)((long)param_1 + lVar1) = (short)lVar2;
    lVar1 = lVar1 + 0x88;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xe00);
  *(undefined8 *)(param_1 + 0x43808) = 0xdff0000;
  FUN_1004e4464(param_1 + 0x43810,0);
  *(undefined8 *)(param_1 + 0x43830) = 0;
  return param_1;
}




ushort * FUN_1010ae3ec(long param_1,int *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x87020));
  *param_2 = *param_2 + 1;
  uVar1 = *(ushort *)(param_1 + 0x10000);
  if ((ulong)uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = (ushort *)(param_1 + (ulong)uVar1 * 0x10);
    if (uVar1 == *(ushort *)(param_1 + 0x10002)) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = *puVar2;
    }
    *(ushort *)(param_1 + 0x10000) = uVar1;
    puVar2[0] = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(int *)(param_1 + 0x10004) = *(int *)(param_1 + 0x10004) + 1;
  }
  *(int **)puVar2 = param_2;
  *(int *)(param_1 + 0x87060) = *(int *)(param_1 + 0x87060) + 1;
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x87020));
  return puVar2;
}




ushort * FUN_1010ae4b0(long param_1)

{
  ushort uVar1;
  long lVar2;
  ushort *puVar3;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x87020));
  uVar1 = *(ushort *)(param_1 + 0x87010);
  if ((ulong)uVar1 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    lVar2 = param_1 + (ulong)uVar1 * 0x88;
    puVar3 = (ushort *)(lVar2 + 0x10010);
    if (uVar1 == *(ushort *)(param_1 + 0x87012)) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = *puVar3;
    }
    *(ushort *)(param_1 + 0x87010) = uVar1;
    *(undefined8 *)(lVar2 + 0x10090) = 0;
    *(undefined8 *)(lVar2 + 0x10078) = 0;
    *(undefined8 *)(lVar2 + 0x10070) = 0;
    *(undefined8 *)(lVar2 + 0x10088) = 0;
    *(undefined8 *)(lVar2 + 0x10080) = 0;
    *(undefined8 *)(lVar2 + 0x10058) = 0;
    *(undefined8 *)(lVar2 + 0x10050) = 0;
    *(undefined8 *)(lVar2 + 0x10068) = 0;
    *(undefined8 *)(lVar2 + 0x10060) = 0;
    *(undefined8 *)(lVar2 + 0x10038) = 0;
    *(undefined8 *)(lVar2 + 0x10030) = 0;
    *(undefined8 *)(lVar2 + 0x10048) = 0;
    *(undefined8 *)(lVar2 + 0x10040) = 0;
    *(undefined8 *)(lVar2 + 0x10018) = 0;
    puVar3[0] = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined8 *)(lVar2 + 0x10028) = 0;
    *(undefined8 *)(lVar2 + 0x10020) = 0;
    *(int *)(param_1 + 0x87014) = *(int *)(param_1 + 0x87014) + 1;
  }
  *(int *)(param_1 + 0x87064) = *(int *)(param_1 + 0x87064) + 1;
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x87020));
  return puVar3;
}




int FUN_1010ae578(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x87020));
  piVar5 = (int *)*param_2;
  iVar4 = *piVar5;
  *piVar5 = iVar4 + -1;
  FUN_1010ae29c(param_2);
  if (*(short *)(param_1 + 0x10000) == -1) {
    sVar3 = (short)((uint)((int)param_2 - (int)param_1) >> 4);
    *(short *)(param_1 + 0x10002) = sVar3;
    *(short *)(param_1 + 0x10000) = sVar3;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x10002);
    uVar2 = (undefined2)((uint)((int)param_2 - (int)param_1) >> 4);
    *(undefined2 *)(param_1 + 0x10002) = uVar2;
    *(undefined2 *)(param_1 + (ulong)uVar1 * 0x10) = uVar2;
  }
  *(int *)(param_1 + 0x10004) = *(int *)(param_1 + 0x10004) + -1;
  *(int *)(param_1 + 0x87060) = *(int *)(param_1 + 0x87060) + -1;
  if (iVar4 + -1 == 0) {
    FUN_1010ae2d8(piVar5);
    iVar4 = (int)(param_1 + 0x10010);
    if (*(short *)(param_1 + 0x87010) == -1) {
      sVar3 = (short)((uint)((int)piVar5 - iVar4) >> 3) * -0xf0f;
      *(short *)(param_1 + 0x87012) = sVar3;
      *(short *)(param_1 + 0x87010) = sVar3;
    }
    else {
      uVar1 = *(ushort *)(param_1 + 0x87012);
      sVar3 = (short)((uint)((int)piVar5 - iVar4) >> 3) * -0xf0f;
      *(short *)(param_1 + 0x87012) = sVar3;
      *(short *)(param_1 + 0x10010 + (ulong)uVar1 * 0x88) = sVar3;
    }
    *(int *)(param_1 + 0x87014) = *(int *)(param_1 + 0x87014) + -1;
    *(int *)(param_1 + 0x87064) = *(int *)(param_1 + 0x87064) + -1;
  }
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x87020));
  return iVar4;
}




void FUN_1010ae6bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
                  long param_5,long param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined1 auStack_2a0 [4];
  int local_29c;
  undefined8 local_298;
  undefined1 local_28c;
  undefined1 local_28b;
  undefined1 local_28a;
  undefined1 local_289;
  undefined1 auStack_288 [10];
  ushort local_27e;
  undefined1 auStack_278 [8];
  undefined8 uStack_270;
  long local_268 [32];
  uint local_168 [64];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  iVar2 = FUN_1010b872c();
  lVar4 = thunk_FUN_1010b8be8(auStack_278,param_5,param_5 + param_6,iVar2 == 1);
  FUN_1010b903c(lVar4,auStack_288,local_168,0x20);
  uVar1 = DAT_101ea5b28;
  if ((ulong)local_27e != 0) {
    uVar10 = 0;
    uVar9 = 0;
    uVar11 = (ulong)DAT_101ea5b28;
LAB_1010ae768:
    if (uVar1 != 0) {
      uVar12 = 0;
      do {
        if ((&DAT_101ea5ae8)[uVar12] == local_168[uVar10 * 2]) {
          if ((~(uint)uVar12 & 0xff) != 0) {
            uVar8 = (uint)uVar9;
            if (uVar8 != 0) {
              uVar5 = 0;
              goto LAB_1010ae7b8;
            }
            uVar5 = 0;
            goto LAB_1010ae7dc;
          }
          break;
        }
        uVar12 = uVar12 + 1;
      } while (uVar11 != uVar12);
    }
    goto LAB_1010ae808;
  }
LAB_1010ae8a8:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
  while (uVar5 = uVar5 + 1, uVar6 = uVar9, uVar9 != uVar5) {
LAB_1010ae7b8:
    if (lVar4 + (ulong)local_168[uVar10 * 2 + 1] == local_268[uVar5]) goto LAB_1010ae7dc;
  }
LAB_1010ae7e4:
  uVar3 = (uint)uVar6;
  local_268[uVar9] = lVar4 + (ulong)local_168[uVar10 * 2 + 1];
  uVar9 = (ulong)(uVar8 + 1);
LAB_1010ae7ec:
  uVar8 = param_4[0x1dfa];
  puVar13 = param_4 + (ulong)uVar8 * 2 + 0x1dfc;
  puVar13[0] = 0;
  puVar13[1] = 0;
  param_4[0x1dfa] = uVar8 + 1;
  *(char *)puVar13 = (char)uVar12;
  puVar13[1] = uVar3;
LAB_1010ae808:
  uVar10 = uVar10 + 1;
  if (uVar10 == local_27e) goto code_r0x0001010ae814;
  goto LAB_1010ae768;
LAB_1010ae7dc:
  uVar3 = (uint)uVar5;
  uVar6 = uVar5;
  if (uVar3 != uVar8) goto LAB_1010ae7ec;
  goto LAB_1010ae7e4;
code_r0x0001010ae814:
  if ((int)uVar9 != 0) {
    puVar15 = &uStack_270;
    do {
      puVar15 = puVar15 + 1;
      uVar1 = *param_4;
      puVar13 = param_4 + (ulong)uVar1 * 0x77e + 2;
      _bzero(puVar13,0x1df8);
      *param_4 = uVar1 + 1;
      uVar14 = *puVar15;
      uVar7 = FUN_1010b9094(uVar14,auStack_2a0);
      iVar2 = (int)uVar14 + local_29c;
      uVar7 = FUN_1010ae8e4(param_3,puVar13,uVar7,local_28c,local_28b,local_28a,local_289);
      *(undefined8 *)(puVar13 + 0x776) = local_298;
      *(undefined8 *)(puVar13 + 0x77c) = uVar7;
      puVar13[0x77a] = iVar2 - (int)uVar7;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  goto LAB_1010ae8a8;
}




long FUN_1010ae8e4(uint *param_1,long param_2,long param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined2 local_394;
  undefined1 local_392;
  uint local_390;
  byte local_38c;
  byte local_38b;
  byte local_38a;
  byte local_389;
  byte local_388;
  undefined7 uStack_387;
  undefined1 auStack_380 [8];
  ulong local_378;
  undefined8 local_370 [96];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1010add94(auStack_380);
  for (; param_4 != 0; param_4 = param_4 + -1) {
    iVar4 = FUN_1010b8ed8(param_3,&local_388,&local_390,local_370,&local_378);
    switch(local_390 & 0xff) {
    case 1:
      uVar6 = 1;
      break;
    case 2:
      uVar6 = 2;
      break;
    case 3:
      uVar6 = 3;
      break;
    case 4:
      uVar6 = 4;
      break;
    default:
      goto switchD_1010ae97c_default;
    }
    FUN_1010ae064(auStack_380,local_388,local_370,uVar6,1,local_378 & 0xffffffff);
switchD_1010ae97c_default:
    param_3 = param_3 + iVar4;
  }
  if (param_5 != 0) {
    do {
      iVar4 = FUN_1010b8f34(param_3,&local_388,&local_389,&local_38a,&local_38b,&local_38c,
                            &local_390);
      param_3 = param_3 + iVar4;
      local_392 = 0;
      local_394 = 0;
      FUN_1004d2628(&local_394,CONCAT71(uStack_387,local_388),2);
      FUN_1004d2698(local_370,"build://%s/%s");
      uVar2 = *param_1;
      puVar1 = (undefined8 *)((long)param_1 + (ulong)uVar2 * 0x41 + 8);
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      *(undefined1 *)(puVar1 + 8) = 0;
      *param_1 = uVar2 + 1;
      FUN_1004d25b8(puVar1,0x40,local_370);
      bVar3 = FUN_1004e2fec(&DAT_101d911b0);
      *(byte *)(puVar1 + 8) = bVar3 ^ 1 | DAT_101d911c8 < 0x20000001;
      uVar2 = *(uint *)(param_2 + 8);
      puVar9 = (uint *)(param_2 + 0x10 + (ulong)uVar2 * 0x54);
      puVar9[0x14] = 0;
      puVar9[0xe] = 0;
      puVar9[0xf] = 0;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
      puVar9[0x12] = 0;
      puVar9[0x13] = 0;
      puVar9[0x10] = 0;
      puVar9[0x11] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[0] = 0;
      puVar9[1] = 0;
      *(uint *)(param_2 + 8) = uVar2 + 1;
      FUN_1004d25b8(puVar9 + 1,0x40,local_370);
      *puVar9 = (uint)local_389;
      puVar9[0x13] = (uint)local_38b;
      puVar9[0x14] = (uint)local_38c;
      puVar9[0x11] = local_390;
      puVar9[0x12] = (uint)local_38a;
      local_378 = 0;
      FUN_1010adeb0(auStack_380,local_389,&local_378,1);
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  if (param_6 != 0) {
    do {
      iVar4 = FUN_1010b8f88(param_3,local_370,&local_388,&local_390,&local_394,&local_389);
      param_3 = param_3 + iVar4;
      uVar2 = *(uint *)(param_2 + 0x550);
      puVar9 = (uint *)(param_2 + 0x558 + (ulong)uVar2 * 0x310);
      _bzero(puVar9,0x310);
      bVar3 = local_388;
      *(uint *)(param_2 + 0x550) = uVar2 + 1;
      *puVar9 = (uint)local_388;
      puVar9[0xc1] = local_390 & 0xff;
      puVar9[0xc2] = (uint)(byte)local_394;
      puVar9[0xc3] = (uint)local_389;
      _memcpy(puVar9 + 1,local_370,0x300);
      local_378 = 0;
      FUN_1010adeb0(auStack_380,bVar3,&local_378,1,0);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  do {
    if (param_7 == 0) {
      uVar6 = FUN_1010ae1d8(auStack_380);
      *(undefined8 *)(param_2 + 0x1de0) = uVar6;
      FUN_1010adde4(auStack_380);
      if (*(long *)PTR____stack_chk_guard_101444218 != local_70) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return param_3;
    }
    iVar4 = FUN_1010b9010(param_3,&local_378,&local_388,local_370);
    iVar5 = FUN_1010b1b84(DAT_101ea5ad8,local_370[0]);
    if (iVar5 == 0) {
      uVar7 = FUN_1010b1bf4(DAT_101ea5ad8,local_370[0]);
      uVar6 = FUN_1010b1ca4(DAT_101ea5ad8,uVar7,local_388);
      switch(*(undefined4 *)(&DAT_101873210 + (uVar7 & 0xffffffff) * 0x18)) {
      case 0:
        uVar8 = 1;
        break;
      case 1:
        uVar8 = 2;
        break;
      case 2:
        uVar8 = 3;
        break;
      case 3:
        uVar8 = 4;
        break;
      default:
        goto switchD_1010aec7c_default;
      }
      FUN_1010ae160(auStack_380,local_378 & 0xff,uVar6,uVar8,0,local_370[0]);
    }
    else {
      uVar6 = FUN_1010b1c4c();
      uVar6 = FUN_1010b1cd8(DAT_101ea5ad8,uVar6,0);
      FUN_1010adff8(auStack_380,local_378 & 0xff,uVar6,local_370[0]);
    }
switchD_1010aec7c_default:
    param_3 = param_3 + iVar4;
    param_7 = param_7 + -1;
  } while( true );
}




undefined8 FUN_1010aed34(void)

{
  return DAT_101ea5ad8;
}




long FUN_1010aed40(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    _pthread_mutex_destroy((pthread_mutex_t *)((long)pvVar1 + 0x87020));
    operator_delete(pvVar1);
  }
  FUN_1010b0f40(param_1,*(undefined8 *)(param_1 + 8));
  return param_1;
}




void FUN_1010aed8c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint local_40 [2];
  long local_38;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_1004d2524(param_2);
    local_40[0] = FUN_100015208(param_2,uVar1,0x12345678);
    plVar4 = (long *)(param_1 + 8);
    plVar5 = (long *)*plVar4;
    plVar3 = plVar4;
    if (plVar5 != (long *)0x0) {
      do {
        if (*(uint *)(plVar5 + 4) >= local_40[0]) {
          plVar3 = plVar5;
        }
        plVar5 = (long *)plVar5[*(uint *)(plVar5 + 4) < local_40[0]];
      } while (plVar5 != (long *)0x0);
      if (((plVar3 != plVar4) && (*(uint *)(plVar3 + 4) <= local_40[0])) && (plVar3[5] != 0)) {
        return;
      }
    }
    lVar2 = FUN_1010ae4b0(*(undefined8 *)(param_1 + 0x18));
    uVar1 = FUN_1004d2524(param_2);
    uVar1 = FUN_100015208(param_2,uVar1,0x12345678);
    *(undefined4 *)(lVar2 + 4) = uVar1;
    local_38 = lVar2;
    FUN_1010b1038(param_1,local_40,local_40);
    (**(code **)(**(long **)(param_1 + 0x20) + 0x10))(*(long **)(param_1 + 0x20),param_2,lVar2);
  }
  return;
}




void FUN_1010aee84(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = FUN_1004d2524(param_2);
  uVar2 = FUN_100015208(param_2,uVar1,0x12345678);
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = (undefined8 *)*puVar3;
  do {
    if (*(uint *)(puVar4 + 4) >= uVar2) {
      puVar3 = puVar4;
    }
    puVar4 = (undefined8 *)puVar4[*(uint *)(puVar4 + 4) < uVar2];
  } while (puVar4 != (undefined8 *)0x0);
  FUN_1010ae3ec(*(undefined8 *)(param_1 + 0x18),puVar3[5]);
  return;
}




void FUN_1010aeee8(long param_1,undefined8 *param_2)

{
  if (*(int *)*param_2 == 1) {
    FUN_1010b1154(param_1,(int *)*param_2 + 1);
  }
  FUN_1010ae578(*(undefined8 *)(param_1 + 0x18),param_2);
  return;
}




void FUN_1010aef2c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_1010aef34(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_1010aef3c(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  ulong uVar1;
  uint *puVar2;
  
  if (*param_3 != 0) {
    uVar1 = 0;
    puVar2 = param_3 + 0x12;
    do {
      FUN_1010aef94(param_4,puVar2 + -0x10,(char)*puVar2);
      uVar1 = uVar1 + 1;
      puVar2 = (uint *)((long)puVar2 + 0x41);
    } while (uVar1 < *param_3);
  }
  return;
}




void FUN_1010aef94(long param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_50 [2];
  long local_48;
  
  if ((*(long *)(param_1 + 0x36050) != 0) && (uVar3 = FUN_1010b0488(), (uVar3 & 1) == 0)) {
    plVar1 = (long *)(param_1 + 0x36020);
    lVar4 = FUN_1010b051c(param_1);
    *(undefined4 *)(lVar4 + 0x24) = 0;
    *(undefined1 *)(lVar4 + 0x62) = param_3;
    uVar2 = FUN_1004d2524(param_2);
    uVar2 = FUN_100015208(param_2,uVar2,0x12345678);
    *(undefined4 *)(lVar4 + 0x20) = uVar2;
    lVar5 = *plVar1;
    *(long *)(lVar4 + 0x68) = lVar5;
    *(undefined8 *)(lVar4 + 0x70) = 0;
    if (lVar5 == 0) {
      plVar6 = (long *)(param_1 + 0x36028);
      *plVar1 = lVar4;
    }
    else {
      *(long *)(lVar5 + 0x70) = lVar4;
      plVar6 = plVar1;
    }
    *plVar6 = lVar4;
    *(int *)(param_1 + 0x36030) = *(int *)(param_1 + 0x36030) + 1;
    local_50[0] = *(undefined4 *)(lVar4 + 0x20);
    local_48 = lVar4;
    FUN_1010b12c0(param_1 + 0x36058,local_50,local_50);
    (**(code **)(**(long **)(param_1 + 0x36050) + 0x10))
              (*(long **)(param_1 + 0x36050),param_2,lVar4);
  }
  return;
}




void FUN_1010af094(undefined8 param_1,long param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f0 [16];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  if (*param_3 != 0) {
    uVar8 = 0;
    do {
      puVar5 = param_3 + uVar8 * 0x77e + 0x77a;
      if (param_3[uVar8 * 0x77e + 4] != 0) {
        uVar9 = 0;
        do {
          puVar7 = param_3 + uVar8 * 0x77e + uVar9 * 0x15 + 6;
          uVar2 = FUN_1010af2cc(param_4,puVar7 + 1,puVar7[0x12],puVar7[0x13],puVar7[0x14]);
          puVar6 = (uint *)**(undefined8 **)puVar5;
          do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + 2;
          } while ((uVar1 & 0xfff) != *puVar7 || (uVar1 & 0x70000000) != 0x40000000);
          *(undefined8 *)((*(undefined8 **)puVar5)[1] + ((ulong)(uVar1 >> 0xc) & 0xffff) * 4) =
               uVar2;
          uVar9 = uVar9 + 1;
        } while (uVar9 < param_3[uVar8 * 0x77e + 4]);
      }
      if (param_3[uVar8 * 0x77e + 0x156] != 0) {
        uVar9 = 0;
        do {
          uVar2 = FUN_1010af46c(param_4,param_3 + uVar8 * 0x77e + uVar9 * 0xc4 + 0x158 + 1);
          puVar6 = (uint *)**(undefined8 **)puVar5;
          do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + 2;
          } while ((uVar1 & 0xfff) != param_3[uVar8 * 0x77e + uVar9 * 0xc4 + 0x158] ||
                   (uVar1 & 0x70000000) != 0x40000000);
          *(undefined8 *)((*(undefined8 **)puVar5)[1] + ((ulong)(uVar1 >> 0xc) & 0xffff) * 4) =
               uVar2;
          uVar9 = uVar9 + 1;
        } while (uVar9 < param_3[uVar8 * 0x77e + 0x156]);
      }
      puVar3 = operator_new(0x20);
      FUN_1010b6ff0();
      FUN_1010b6c0c(&local_118,*(undefined8 *)(param_3 + uVar8 * 0x77e + 0x77e),
                    (long)(int)param_3[uVar8 * 0x77e + 0x77c]);
      puVar3[1] = uStack_110;
      *puVar3 = local_118;
      puVar3[3] = uStack_100;
      puVar3[2] = local_108;
      FUN_1010af624(*(undefined8 *)puVar5,puVar3);
      puVar4 = operator_new(0x18);
      uVar2 = *(undefined8 *)puVar5;
      *puVar4 = puVar3;
      puVar4[1] = uVar2;
      puVar4[2] = *(undefined8 *)(param_3 + uVar8 * 0x77e + 0x778);
      local_f0[uVar8 & 0xffffffff] = puVar4;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *param_3);
  }
  uVar8 = (ulong)param_3[0x1dfa];
  if (param_3[0x1dfa] != 0) {
    puVar5 = param_3 + 0x1dfd;
    do {
      *(undefined8 *)(param_2 + (ulong)(byte)puVar5[-1] * 8 + 8) = local_f0[*puVar5];
      uVar8 = uVar8 - 1;
      puVar5 = puVar5 + 2;
    } while (uVar8 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010af2cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  ushort *puVar7;
  long *plVar8;
  long *plVar9;
  ushort uVar10;
  long lVar11;
  
  plVar2 = (long *)(param_1 + 0x36060);
  uVar5 = FUN_1004d2524(param_2);
  uVar6 = FUN_100015208(param_2,uVar5,0x12345678);
  plVar9 = (long *)*plVar2;
  plVar8 = plVar2;
  if (plVar9 != (long *)0x0) {
    do {
      if (*(uint *)(plVar9 + 4) >= uVar6) {
        plVar8 = plVar9;
      }
      plVar9 = (long *)plVar9[*(uint *)(plVar9 + 4) < uVar6];
    } while (plVar9 != (long *)0x0);
    if ((plVar8 != plVar2) && (*(uint *)(plVar8 + 4) <= uVar6)) {
      lVar11 = plVar8[5];
      goto LAB_1010af360;
    }
  }
  lVar11 = 0;
LAB_1010af360:
  lVar1 = lVar11 + 0x30;
  FUN_1010b7a64(0,0x447a0000,lVar1);
  FUN_1010b7a18(lVar1,param_3,param_4,0);
  FUN_1010b7a3c(lVar1,param_5,param_5,0);
  FUN_1010b7a60(0,lVar1);
  *(int *)(lVar11 + 100) = *(int *)(lVar11 + 100) + 1;
  if ((*(long *)(lVar11 + 0x28) == 0) ||
     (bVar3 = *(byte *)(*(long *)(lVar11 + 0x28) + 0x10),
     ((bVar3 & 3) != (uint)param_3 || (bVar3 >> 2 & 3) != (uint)param_4) ||
     (bVar3 >> 4 & 1) != (uint)param_5)) {
    uVar4 = *(ushort *)(param_1 + 0x18000);
    puVar7 = (ushort *)(param_1 + (ulong)uVar4 * 0x18);
    if (uVar4 == *(ushort *)(param_1 + 0x18002)) {
      uVar10 = 0xffff;
    }
    else {
      uVar10 = *puVar7;
    }
    *(ushort *)(param_1 + 0x18000) = uVar10;
    *(undefined ***)puVar7 = &PTR_FUN_10182e568;
    *(int *)(param_1 + 0x18004) = *(int *)(param_1 + 0x18004) + 1;
    param_1 = param_1 + (ulong)uVar4 * 0x18;
    *(long *)(param_1 + 8) = lVar11;
    *(byte *)(param_1 + 0x10) =
         (byte)param_3 & 3 | (byte)(((uint)param_4 & 3) << 2) | (byte)(((uint)param_5 & 1) << 4) |
         *(byte *)(param_1 + 0x10) & 0xe0;
    if (*(long *)(lVar11 + 0x28) == 0) {
      *(ushort **)(lVar11 + 0x28) = puVar7;
    }
  }
  return;
}




void FUN_1010af46c(long param_1,float *param_2)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  long lVar5;
  ushort uVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 local_108 [48];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  plVar1 = (long *)(param_1 + 0x36020);
  lVar3 = FUN_1010b051c();
  *(undefined4 *)(lVar3 + 0x20) = 0xffffffff;
  lVar5 = *plVar1;
  *(long *)(lVar3 + 0x68) = lVar5;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  if (lVar5 == 0) {
    plVar7 = (long *)(param_1 + 0x36028);
    *plVar1 = lVar3;
  }
  else {
    *(long *)(lVar5 + 0x70) = lVar3;
    plVar7 = plVar1;
  }
  lVar5 = 0;
  *plVar7 = lVar3;
  *(int *)(param_1 + 0x36030) = *(int *)(param_1 + 0x36030) + 1;
  do {
    auVar8._0_4_ = (int)(*param_2 * 255.0);
    auVar8._4_4_ = (int)(param_2[1] * 255.0);
    auVar8._8_4_ = (int)(param_2[2] * 255.0);
    auVar8._12_4_ = (int)(param_2[3] * 255.0);
    auVar9._8_4_ = 0x437f0000;
    auVar9._0_8_ = 0x437f0000437f0000;
    auVar9._12_4_ = 0x437f0000;
    auVar9 = NEON_fminnm(auVar8,auVar9,4);
    auVar9 = NEON_fmaxnm(auVar9,ZEXT216(0),4);
    *(uint *)((long)local_108 + lVar5) =
         CONCAT13((char)(int)auVar9._12_4_,
                  CONCAT12((char)(int)auVar9._8_4_,
                           CONCAT11((char)(int)auVar9._4_4_,(char)(int)auVar9._0_4_)));
    lVar5 = lVar5 + 4;
    param_2 = param_2 + 4;
  } while (lVar5 != 0xc0);
  lVar5 = lVar3 + 0x30;
  FUN_1010b7478(lVar5,0);
  FUN_1010b75c4(lVar5,local_108,0x40,1,1,0,0);
  FUN_1010b7a18(lVar5,2,2,0);
  FUN_1010b7a3c(lVar5,1,1,0);
  *(undefined4 *)(lVar3 + 0x24) = 1;
  uVar2 = *(ushort *)(param_1 + 0x18000);
  puVar4 = (ushort *)(param_1 + (ulong)uVar2 * 0x18);
  if (uVar2 == *(ushort *)(param_1 + 0x18002)) {
    uVar6 = 0xffff;
  }
  else {
    uVar6 = *puVar4;
  }
  *(ushort *)(param_1 + 0x18000) = uVar6;
  *(undefined ***)puVar4 = &PTR_FUN_10182e568;
  *(int *)(param_1 + 0x18004) = *(int *)(param_1 + 0x18004) + 1;
  param_1 = param_1 + (ulong)uVar2 * 0x18;
  *(long *)(param_1 + 8) = lVar3;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xe0 | 0x1a;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010af624(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *(uint *)(param_1 + 2);
  if ((uVar4 & 0xffff) == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = 0;
    lVar3 = *param_1;
    uVar1 = 1;
    lVar5 = lVar3;
    while( true ) {
      if ((*(uint *)(lVar5 + lVar2) & 0x70000000) != 0x40000000) {
        lVar5 = *param_1;
      }
      if (lVar3 + lVar2 != lVar5 + lVar2) {
        *(undefined8 *)(lVar3 + lVar2) = *(undefined8 *)(lVar5 + lVar2);
      }
      uVar4 = *(uint *)(param_1 + 2);
      if ((ushort)uVar4 <= uVar1) break;
      lVar5 = *param_1;
      lVar2 = lVar2 + 8;
      uVar1 = uVar1 + 1;
    }
  }
  *(uint *)(param_1 + 2) = uVar4 & 0xffff0000 | (uint)uVar1;
  return;
}




undefined8 * FUN_1010af6a0(undefined8 *param_1)

{
  FUN_1010ade20(param_1,1);
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete__((void *)*param_1);
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
  }
  return param_1;
}




undefined8 FUN_1010af6e0(void)

{
  return DAT_101ea5ad0;
}




undefined8 FUN_1010af6ec(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_2[1] + 0x28);
  uVar3 = FUN_1010b05dc();
  if (puVar4 != param_2 || (int)uVar3 != 0) {
    (**(code **)*param_2)(param_2);
    if (*(short *)(param_1 + 0x18000) == -1) {
      sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 3) * -0x5555;
      *(short *)(param_1 + 0x18002) = sVar2;
      *(short *)(param_1 + 0x18000) = sVar2;
    }
    else {
      uVar1 = *(ushort *)(param_1 + 0x18002);
      sVar2 = (short)((uint)((int)param_2 - (int)param_1) >> 3) * -0x5555;
      *(short *)(param_1 + 0x18002) = sVar2;
      *(short *)(param_1 + (ulong)uVar1 * 0x18) = sVar2;
    }
    *(int *)(param_1 + 0x18004) = *(int *)(param_1 + 0x18004) + -1;
  }
  return uVar3;
}




void FUN_1010af7a0(undefined8 param_1,uint *param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = *param_2;
  plVar2 = (long *)(param_3 + (ulong)(ushort)(uVar1 >> 0xc) * 4);
  if (-1 < (int)uVar1) {
    plVar2 = (long *)*plVar2;
  }
  switch(uVar1 >> 0x1c & 7) {
  case 0:
    FUN_1010b54a8((int)*plVar2,param_4);
    return;
  case 1:
    FUN_1010b54d0(param_4);
    return;
  case 2:
    FUN_1010b54fc(param_4);
    return;
  case 3:
    FUN_1010b5530(param_4);
    return;
  case 4:
    plVar2 = (long *)*plVar2;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001010af810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
      return;
    }
  }
  return;
}




void FUN_1010af818(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  if ((short)param_1[2] != 0) {
    lVar2 = 0;
    uVar3 = 0;
    plVar1 = param_1;
    do {
      plVar1 = (long *)FUN_1010af7a0(plVar1,(uint *)(*param_1 + lVar2),param_1[1],
                                     *(uint *)(*param_1 + lVar2) & 0xfff);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (uVar3 < *(ushort *)(param_1 + 2));
  }
  if (param_2 != 0) {
    FUN_1010af894(param_1,param_2);
    return;
  }
  return;
}




void FUN_1010af894(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  
  uVar2 = (ulong)*(ushort *)(param_2 + 2);
  if (*(ushort *)(param_2 + 2) != 0) {
    uVar5 = 0;
    plVar1 = param_1;
    do {
      uVar3 = (ulong)*(ushort *)(param_1 + 2);
      if (*(ushort *)(param_1 + 2) != 0) {
        piVar4 = (int *)(*param_1 + 4);
        do {
          if (*piVar4 == *(int *)(*param_2 + uVar5 * 8 + 4)) {
            plVar1 = (long *)FUN_1010af7a0(plVar1,*param_2 + uVar5 * 8,param_2[1],piVar4[-1] & 0xfff
                                          );
            uVar2 = (ulong)*(ushort *)(param_2 + 2);
            break;
          }
          piVar4 = piVar4 + 2;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return;
}




bool FUN_1010af928(long *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 2);
  if (*(ushort *)(param_1 + 2) != 0) {
    piVar3 = (int *)(*param_1 + 4);
    do {
      uVar2 = uVar2 - 1;
      iVar1 = *piVar3;
      piVar3 = piVar3 + 2;
    } while (iVar1 != param_2 && uVar2 != 0);
    return iVar1 == param_2;
  }
  return false;
}




int FUN_1010af960(long *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = 0xffffffffffffffff;
  piVar4 = (int *)(*param_1 + 4);
  do {
    iVar1 = *piVar4;
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 2;
  } while (iVar1 != param_2);
  uVar2 = *(uint *)(*param_1 + (uVar3 & 0xffffffff) * 8) >> 0x1c & 7;
  iVar1 = 0;
  if (uVar2 < 4) {
    iVar1 = uVar2 + 1;
  }
  return iVar1;
}




void FUN_1010af998(undefined4 param_1,long *param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
  uVar2 = 0xffffffffffffffff;
  piVar3 = (int *)(*param_2 + 4);
  do {
    iVar1 = *piVar3;
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 2;
  } while (iVar1 != param_3);
  *(undefined4 *)
   (param_2[1] + ((ulong)(*(uint *)(*param_2 + (uVar2 & 0xffffffff) * 8) >> 0xc) & 0xffff) * 4) =
       param_1;
  return;
}




void FUN_1010af9d0(long *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = 0xffffffffffffffff;
  piVar4 = (int *)(*param_1 + 4);
  do {
    iVar2 = *piVar4;
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 2;
  } while (iVar2 != param_2);
  puVar1 = (undefined4 *)
           (param_1[1] + (ulong)(ushort)(*(uint *)(*param_1 + (uVar3 & 0xffffffff) * 8) >> 0xc) * 4)
  ;
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  return;
}




void FUN_1010afa18(long *param_1,int param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = 0xffffffffffffffff;
  piVar3 = (int *)(*param_1 + 4);
  do {
    iVar1 = *piVar3;
    uVar5 = uVar5 + 1;
    piVar3 = piVar3 + 2;
  } while (iVar1 != param_2);
  lVar4 = 0;
  lVar6 = param_1[1];
  uVar2 = *(uint *)(*param_1 + (uVar5 & 0xffffffff) * 8);
  do {
    *(undefined4 *)(lVar6 + (ulong)(ushort)(uVar2 >> 0xc) * 4 + lVar4) =
         *(undefined4 *)(param_3 + lVar4);
    lVar4 = lVar4 + 4;
  } while ((int)lVar4 != 0xc);
  return;
}




void FUN_1010afa68(long *param_1,int param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = 0xffffffffffffffff;
  piVar3 = (int *)(*param_1 + 4);
  do {
    iVar1 = *piVar3;
    uVar5 = uVar5 + 1;
    piVar3 = piVar3 + 2;
  } while (iVar1 != param_2);
  lVar4 = 0;
  lVar6 = param_1[1];
  uVar2 = *(uint *)(*param_1 + (uVar5 & 0xffffffff) * 8);
  do {
    *(undefined4 *)(lVar6 + (ulong)(ushort)(uVar2 >> 0xc) * 4 + lVar4) =
         *(undefined4 *)(param_3 + lVar4);
    lVar4 = lVar4 + 4;
  } while ((int)lVar4 != 0x10);
  return;
}




void FUN_1010afab8(long *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
  uVar2 = 0xffffffffffffffff;
  piVar3 = (int *)(*param_1 + 4);
  do {
    iVar1 = *piVar3;
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 2;
  } while (iVar1 != param_2);
  *(undefined8 *)
   (param_1[1] + ((ulong)(*(uint *)(*param_1 + (uVar2 & 0xffffffff) * 8) >> 0xc) & 0xffff) * 4) =
       param_3;
  return;
}




undefined1  [16]
FUN_1010afb04(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined8 *local_58;
  
  uVar1 = FUN_1004e6cb8(0x28);
  puVar2 = (undefined8 *)FUN_1004e6bb8();
  *puVar2 = &PTR_thunk_FUN_1004e6bc8_10182e608;
  puVar6 = puVar2 + 2;
  *puVar6 = param_2;
  puVar2[3] = param_3;
  *(undefined4 *)(puVar2 + 4) = param_1;
  local_58 = (undefined8 *)FUN_1004e68dc();
  *local_58 = puVar6;
  local_58[1] = thunk_FUN_1010afc64;
  uVar3 = FUN_1004e76ac(&local_58,0x959a5c8d);
  uVar3 = FUN_1004e76b8(uVar3,param_5);
  FUN_1004e7744(uVar3,uVar1);
  auVar7._0_8_ = FUN_1004e777c();
  local_58 = (undefined8 *)FUN_1004e68dc();
  *local_58 = puVar6;
  local_58[1] = thunk_FUN_1010afd54;
  uVar3 = FUN_1004e76ac(&local_58,0x91c1db3);
  uVar4 = FUN_1004e6804();
  uVar3 = FUN_1004e76a0(uVar3,uVar4);
  uVar3 = FUN_1004e76b8(uVar3,auVar7._0_8_);
  uVar3 = FUN_1004e76e8(uVar3,param_6);
  FUN_1004e7744(uVar3,uVar1);
  uVar3 = FUN_1004e777c();
  local_58 = (undefined8 *)FUN_1004e68dc();
  *local_58 = puVar6;
  local_58[1] = FUN_1010b1268;
  uVar4 = FUN_1004e76ac(&local_58,0x5ff44943);
  uVar5 = FUN_1004e6820();
  uVar4 = FUN_1004e76a0(uVar4,uVar5);
  uVar3 = FUN_1004e76b8(uVar4,uVar3);
  FUN_1004e7744(uVar3,uVar1);
  uVar1 = FUN_1004e777c();
  auVar7._8_8_ = uVar1;
  return auVar7;
}




void FUN_1010afc64(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_460 [1048];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = FUN_1004e6948();
  FUN_1004e697c(uVar2,0x815f1c7b);
  uVar2 = FUN_1004e6cb8(0x7880);
  puVar3 = (undefined8 *)FUN_1004e6bb8();
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)(puVar3 + 0xeff) = 0;
  *puVar3 = &PTR_thunk_FUN_1010b1284_10182e628;
  uVar4 = FUN_1004e6948();
  FUN_1004e69d4(uVar4,uVar2,0xb875ca64);
  _bzero(auStack_460,0x418);
  FUN_1010ae6bc();
  plVar1 = *(long **)(param_1[1] + 0x20);
  (**(code **)(*plVar1 + 0x18))(plVar1,*param_1,auStack_460,*(undefined8 *)(param_1[1] + 0x28));
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010afd54(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = FUN_1004e6948();
  lVar4 = FUN_1004e697c(uVar3,0xb875ca64);
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x10;
  }
  plVar2 = *(long **)(param_1[1] + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0001010afd98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))(plVar2,*param_1,lVar1,*(undefined8 *)(param_1[1] + 0x28));
  return;
}




void FUN_1010afd9c(void)

{
  return;
}




void FUN_1010afda0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined **ppuVar9;
  
  pvVar5 = operator_new(0x10);
  FUN_1010adb88(pvVar5,param_1);
  puVar6 = operator_new(0x10);
  *puVar6 = &PTR_FUN_10182e4e8;
  uVar2 = FUN_1010ad990("depth");
  *(undefined1 *)(puVar6 + 1) = uVar2;
  DAT_101ea5ac0 = pvVar5;
  DAT_101ea5ac8 = puVar6;
  operator_new(0x36070);
  DAT_101ea5ad0 = FUN_1010b02f0();
  iVar3 = FUN_1010b872c();
  ppuVar1 = &PTR_s_OmniLight_Position_101873208;
  do {
    ppuVar9 = ppuVar1;
    iVar4 = _strcmp("OmniLight.Position",*ppuVar9);
    ppuVar1 = ppuVar9 + 3;
  } while (iVar4 != 0);
  uVar8 = 2;
  if (iVar3 == 1) {
    uVar8 = 3;
  }
  *(undefined4 *)((long)ppuVar9 + 0xc) = uVar8;
  ppuVar1 = &PTR_s_OmniLight_Position_101873208;
  do {
    ppuVar9 = ppuVar1;
    iVar3 = _strcmp("OmniLight.Color",*ppuVar9);
    ppuVar1 = ppuVar9 + 3;
  } while (iVar3 != 0);
  *(undefined4 *)((long)ppuVar9 + 0xc) = uVar8;
  ppuVar1 = &PTR_s_OmniLight_Position_101873208;
  do {
    ppuVar9 = ppuVar1;
    iVar3 = _strcmp("OmniLight.Attenuation",*ppuVar9);
    ppuVar1 = ppuVar9 + 3;
  } while (iVar3 != 0);
  *(undefined4 *)((long)ppuVar9 + 0xc) = uVar8;
  pvVar5 = operator_new(0x28);
  DAT_101ea5ad8 = thunk_FUN_1010b1990(pvVar5,&PTR_s_OmniLight_Position_101873208,0x17);
  FUN_1010b1f6c(DAT_101ea5ad8,"CloudShadows.Texture",0,&PTR_PTR_1018731d8);
  FUN_1010b1f6c(DAT_101ea5ad8,"FogOfWar.Texture",0,&PTR_PTR_1018731d8);
  FUN_1010b1f6c(DAT_101ea5ad8,"Shadowing.mMap",0,&PTR_PTR_1018731d8);
  puVar6 = operator_new(0x30);
  uVar7 = DAT_101ea5ad0;
  puVar6[2] = 0;
  puVar6[1] = 0;
  *puVar6 = puVar6 + 1;
  puVar6[4] = 0;
  puVar6[5] = uVar7;
  operator_new(0x87070);
  uVar7 = FUN_1010ae35c();
  puVar6[3] = uVar7;
  DAT_101ea5ae0 = puVar6;
  return;
}




void FUN_1010aff5c(void)

{
  bool bVar1;
  void *pvVar2;
  long lVar3;
  bool bVar4;
  
  if (DAT_101ea5ae0 != 0) {
    pvVar2 = (void *)FUN_1010aed40();
    operator_delete(pvVar2);
  }
  if (DAT_101ea5ad8 != 0) {
    pvVar2 = (void *)thunk_FUN_1010b1b3c();
    operator_delete(pvVar2);
  }
  pvVar2 = DAT_101ea5ad0;
  if (DAT_101ea5ad0 != (void *)0x0) {
    FUN_1010b0398(DAT_101ea5ad0);
    FUN_1010b0ff8((long)pvVar2 + 0x36058,*(undefined8 *)((long)pvVar2 + 0x36060));
    operator_delete(pvVar2);
  }
  lVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    if ((long *)(&DAT_101ea5ac0)[lVar3] != (long *)0x0) {
      (**(code **)(*(long *)(&DAT_101ea5ac0)[lVar3] + 8))();
    }
    lVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  return;
}




void thunk_FUN_1010afc64(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_460 [1048];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = FUN_1004e6948();
  FUN_1004e697c(uVar2,0x815f1c7b);
  uVar2 = FUN_1004e6cb8(0x7880);
  puVar3 = (undefined8 *)FUN_1004e6bb8();
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)(puVar3 + 0xeff) = 0;
  *puVar3 = &PTR_thunk_FUN_1010b1284_10182e628;
  uVar4 = FUN_1004e6948();
  FUN_1004e69d4(uVar4,uVar2,0xb875ca64);
  _bzero(auStack_460,0x418);
  FUN_1010ae6bc();
  plVar1 = *(long **)(param_1[1] + 0x20);
  (**(code **)(*plVar1 + 0x18))(plVar1,*param_1,auStack_460,*(undefined8 *)(param_1[1] + 0x28));
  if (*(long *)PTR____stack_chk_guard_101444218 == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void thunk_FUN_1010afd54(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = FUN_1004e6948();
  lVar4 = FUN_1004e697c(uVar3,0xb875ca64);
  lVar1 = 0;
  if (lVar4 != 0) {
    lVar1 = lVar4 + 0x10;
  }
  plVar2 = *(long **)(param_1[1] + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0001010afd98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))(plVar2,*param_1,lVar1,*(undefined8 *)(param_1[1] + 0x28));
  return;
}

