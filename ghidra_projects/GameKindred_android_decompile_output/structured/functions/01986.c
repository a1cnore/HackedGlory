// functions/01986 — 47 functions
#include "libGameKindred.h"




void * FUN_01986020(undefined8 *param_1)

{
  uint uVar1;
  void *__s;
  
  uVar1 = *(uint *)(param_1 + 0x5b);
  __s = (void *)0x0;
  if ((uVar1 >> 0x10 & 0x7fff) < (uVar1 & 0xffff)) {
    *(uint *)(param_1 + 0x5b) =
         uVar1 & 0x80000000 | uVar1 & 0xffff | (uVar1 + 0x10000 >> 0x10 & 0x7fff) << 0x10;
    __s = (void *)(param_1[0x59] +
                  (ulong)(*(uint *)(param_1 + 0x15) *
                         (uint)*(ushort *)
                                (param_1[0x5a] +
                                (long)(int)((uVar1 & 0xffff) - (uVar1 + 0x10000 >> 0x10 & 0x7fff)) *
                                2)));
    memset(__s,0,(ulong)*(uint *)(param_1 + 0x15));
    *(undefined8 **)((long)__s + 8) = param_1;
    (*(code *)param_1[0x16])(__s);
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)(__s);
    }
    FUN_01985dd4(__s);
    *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) | 0x80000000;
  }
  return __s;
}




undefined2 FUN_019860c8(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2d8);
  *(uint *)(param_1 + 0x2d8) =
       uVar1 & 0x80000000 | uVar1 & 0xffff | (uVar1 + 0x10000 >> 0x10 & 0x7fff) << 0x10;
  return *(undefined2 *)
          (*(long *)(param_1 + 0x2d0) +
          (long)(int)((uVar1 & 0xffff) - (uVar1 + 0x10000 >> 0x10 & 0x7fff)) * 2);
}




void FUN_019860f4(long param_1,long param_2)

{
  uint uVar1;
  
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(param_2);
  }
  FUN_01985e0c(param_2);
  (**(code **)(param_1 + 0xb8))(param_2);
  *(undefined8 *)(param_2 + 8) = 0;
  uVar1 = 0;
  if (*(uint *)(param_1 + 0xa8) != 0) {
    uVar1 = (uint)((int)param_2 - *(int *)(param_1 + 0x2c8)) / *(uint *)(param_1 + 0xa8);
  }
  *(ulong *)(*(long *)(param_1 + 0x2e0) + (ulong)(uVar1 >> 6) * 8) =
       *(ulong *)(*(long *)(param_1 + 0x2e0) + (ulong)(uVar1 >> 6) * 8) &
       (1L << (uVar1 & 0x3f) ^ 0xffffffffffffffffU);
  FUN_01986180(param_1);
  *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) | 0x80000000;
  return;
}




void FUN_01986180(long param_1,uint param_2)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar1 = *(uint *)(param_1 + 0x2d8);
  lVar4 = *(long *)(param_1 + 0x2d0);
  uVar3 = (uVar1 & 0xffff) - (uVar1 >> 0x10 & 0x7fff);
  uVar5 = 0;
  if (uVar3 < (uVar1 & 0xffff)) {
    puVar6 = (ushort *)(lVar4 + (ulong)uVar3 * 2);
    uVar5 = uVar3;
    do {
      if (*puVar6 == param_2) goto LAB_019861c8;
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 < (uVar1 & 0xffff));
    uVar5 = 0;
  }
LAB_019861c8:
  uVar2 = *(undefined2 *)(lVar4 + (long)(int)uVar3 * 2);
  *(short *)(lVar4 + (long)(int)uVar3 * 2) = (short)param_2;
  *(undefined2 *)(lVar4 + (ulong)uVar5 * 2) = uVar2;
  uVar5 = *(uint *)(param_1 + 0x2d8);
  *(uint *)(param_1 + 0x2d8) =
       uVar5 & 0x80000000 | uVar5 & 0xffff | (uVar5 + 0x7fff0000 >> 0x10 & 0x7fff) << 0x10;
  return;
}




void FUN_019861f0(long param_1)

{
  uint uVar1;
  long lVar2;
  ushort *__dest;
  ulong uVar3;
  uint uVar4;
  ushort auStack_50 [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = *(uint *)(param_1 + 0x2d8);
  uVar1 = uVar4 >> 0x10 & 0x7fff;
  uVar3 = (ulong)uVar1;
  __dest = (ushort *)((long)auStack_50 - ((ulong)(uVar1 * 8 + 0xf) & 0x7fff0));
  memcpy(__dest,(void *)(*(long *)(param_1 + 0x2d0) + (ulong)((uVar4 & 0xffff) - uVar1) * 2),
         (ulong)(uVar1 * 8));
  if (uVar1 != 0) {
    do {
      if (*(long *)(*(long *)(param_1 + 0x2c8) + (ulong)(*(int *)(param_1 + 0xa8) * (uint)*__dest) +
                   0x10) == 0) {
        FUN_019860f4(param_1);
      }
      uVar3 = uVar3 - 1;
      __dest = __dest + 1;
    } while (uVar3 != 0);
    uVar4 = *(uint *)(param_1 + 0x2d8);
  }
  *(uint *)(param_1 + 0x2d8) = uVar4 | 0x80000000;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_019862bc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  if ((ulong)*(uint *)(param_1 + 0xa8) != 0) {
    uVar1 = (param_2 - *(long *)(param_1 + 0x2c8)) / (long)(ulong)*(uint *)(param_1 + 0xa8);
  }
  uVar2 = uVar1 >> 6 & 0x3ffffff;
  *(ulong *)(*(long *)(param_1 + 0x2e0) + uVar2 * 8) =
       *(ulong *)(*(long *)(param_1 + 0x2e0) + uVar2 * 8) | 1L << (uVar1 & 0x3f);
  return;
}




void FUN_019862f0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2d8);
  iVar3 = 0;
  uVar4 = 0;
  do {
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x2e0) + uVar4 * 8);
    if (uVar2 != 0) {
      uVar5 = 0;
      while( true ) {
        if ((uVar2 & 1L << (uVar5 & 0x3f)) != 0) {
          FUN_019860f4(param_1,*(long *)(param_1 + 0x2c8) +
                               (ulong)(uint)(*(int *)(param_1 + 0xa8) * (iVar3 + (int)uVar5)));
        }
        if (uVar5 == 0x3f) break;
        uVar5 = uVar5 + 1;
        uVar2 = *(ulong *)(*(long *)(param_1 + 0x2e0) + uVar4 * 8);
      }
    }
    uVar4 = uVar4 + 1;
    iVar3 = iVar3 + 0x40;
  } while (uVar4 != (uVar1 >> 6 & 0x3ff) + 1);
  return;
}




bool FUN_01986394(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  if ((ulong)*(uint *)(param_1 + 0xa8) != 0) {
    uVar1 = (param_2 - *(long *)(param_1 + 0x2c8)) / (long)(ulong)*(uint *)(param_1 + 0xa8);
  }
  return (*(ulong *)(*(long *)(param_1 + 0x2e0) + (uVar1 >> 6 & 0x3ffffff) * 8) &
         1L << (uVar1 & 0x3f)) != 0;
}




void FUN_019863c8(long param_1,ulong param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x2d8);
  uVar1 = (uVar2 & 0xffff) - (uVar2 >> 0x10 & 0x7fff);
  if (*(long *)(param_1 + (param_2 & 0xffffffff) * 8) != 0) {
    FUN_01988e0c();
    uVar2 = *(uint *)(param_1 + 0x2d8);
    if (uVar1 < (uVar2 & 0xffff)) {
      uVar3 = (ulong)uVar1;
      do {
        (**(code **)(param_1 + (param_2 & 0xffffffff) * 8))
                  (*(long *)(param_1 + 0x2c8) +
                   (ulong)(*(int *)(param_1 + 0xa8) *
                          (uint)*(ushort *)(*(long *)(param_1 + 0x2d0) + uVar3 * 2)));
        uVar2 = *(uint *)(param_1 + 0x2d8);
        uVar3 = uVar3 + 1;
      } while (uVar3 < (ushort)uVar2);
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01986464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(param_1 + 0x2c8),*(long *)(param_1 + 0x2d0) + (ulong)uVar1 * 2,
               uVar2 >> 0x10 & 0x7fff);
    return;
  }
  return;
}




long FUN_01986478(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if ((ulong)*(uint *)(param_1 + 0xa8) != 0) {
    lVar1 = (param_2 - *(long *)(param_1 + 0x2c8)) / (long)(ulong)*(uint *)(param_1 + 0xa8);
  }
  return lVar1;
}




long FUN_0198648c(long param_1,int param_2)

{
  return *(long *)(param_1 + 0x2c8) + (ulong)(uint)(*(int *)(param_1 + 0xa8) * param_2);
}




long FUN_019864a0(long param_1,int param_2)

{
  return *(long *)(param_1 + 0x2c8) + (ulong)(uint)(*(int *)(param_1 + 0xa8) * param_2);
}




ulong FUN_019864b4(long param_1,long *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
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
  uVar3 = uVar6 >> 0x10 & 0x7fff;
  uVar11 = (uVar6 & 0xffff) - uVar3;
  if (uVar3 <= param_3) {
    param_3 = uVar3;
  }
  bVar5 = uVar11 < (uVar6 & 0xffff);
  if ((param_4 & 1) != 0) {
    if (param_3 != 0 && bVar5) {
      iVar1 = *(int *)(param_1 + 0xa8);
      lVar7 = 0;
      uVar8 = (ulong)uVar11;
      do {
        param_2[lVar7] =
             *(long *)(param_1 + 0x2c8) +
             (ulong)(iVar1 * (uint)*(ushort *)(*(long *)(param_1 + 0x2d0) + uVar8 * 2));
        lVar7 = lVar7 + 1;
        if (param_3 <= (uint)lVar7) {
          return (ulong)param_3;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ushort *)(param_1 + 0x2d8));
    }
    return (ulong)param_3;
  }
  plVar10 = param_2;
  if (param_3 != 0 && bVar5) {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar8 = (ulong)uVar11;
    uVar11 = 1;
    plVar9 = param_2;
    do {
      uVar2 = uVar3 * *(ushort *)(*(long *)(param_1 + 0x2d0) + uVar8 * 2);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar2 / uVar3;
      }
      plVar10 = plVar9;
      if ((*(ulong *)(*(long *)(param_1 + 0x2e0) + ((ulong)(uVar4 >> 3) & 0x1ffffff8)) &
          1L << (uVar4 & 0x3f)) == 0) {
        plVar10 = plVar9 + 1;
        *plVar9 = *(long *)(param_1 + 0x2c8) + (ulong)uVar2;
        uVar6 = (uint)*(ushort *)(param_1 + 0x2d8);
      }
      if (param_3 <= uVar11) break;
      uVar8 = uVar8 + 1;
      uVar11 = uVar11 + 1;
      plVar9 = plVar10;
    } while (uVar8 < (uVar6 & 0xffff));
  }
  return (ulong)((long)plVar10 - (long)param_2) >> 3;
}




int * FUN_019865b4(long param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x2c0) != 0) {
    uVar2 = 0;
    piVar1 = (int *)(param_1 + 0xc0);
    do {
      if (*piVar1 == param_2) {
        return piVar1;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 4;
    } while (uVar2 < *(uint *)(param_1 + 0x2c0));
  }
  return (int *)0x0;
}




void FUN_019865ec(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  ushort *puVar8;
  long lVar9;
  ulong uVar10;
  ushort uVar11;
  ushort *puVar12;
  ushort *puVar13;
  
  uVar1 = *(uint *)(param_1 + 0x2d8);
  if (-1 < (int)uVar1) {
    return;
  }
  uVar5 = uVar1 >> 0x10 & 0x7fff;
  uVar1 = (uVar1 & 0xffff) - uVar5;
  if ((uVar1 != 0) && (1 < (int)uVar1)) {
    puVar8 = *(ushort **)(param_1 + 0x2d0);
    uVar3 = uVar1 - 1;
    iVar7 = 0;
    uVar4 = uVar3;
    while (uVar10 = (ulong)uVar4, 0 < (int)(uVar3 - iVar7)) {
      uVar11 = *puVar8;
      bVar6 = 1;
      puVar12 = puVar8;
      do {
        puVar13 = puVar12 + 1;
        uVar2 = *puVar13;
        if (uVar2 < uVar11) {
          bVar6 = 0;
          *puVar12 = uVar2;
          *puVar13 = uVar11;
          uVar2 = uVar11;
        }
        uVar11 = uVar2;
        uVar10 = uVar10 - 1;
        puVar12 = puVar13;
      } while (uVar10 != 0);
      iVar7 = iVar7 + 1;
      if (((int)uVar3 <= iVar7) || (uVar4 = uVar4 - 1, !(bool)(bVar6 ^ 1))) break;
    }
  }
  if ((uVar5 != 0) && (uVar5 = uVar5 - 1, uVar5 != 0)) {
    lVar9 = *(long *)(param_1 + 0x2d0);
    iVar7 = 0;
    uVar3 = uVar5;
    while (uVar10 = (ulong)uVar3, iVar7 < (int)uVar5) {
      uVar11 = *(ushort *)(lVar9 + (ulong)uVar1 * 2);
      bVar6 = 1;
      puVar8 = (ushort *)(lVar9 + (ulong)uVar1 * 2);
      do {
        puVar12 = puVar8 + 1;
        uVar2 = *puVar12;
        if (uVar2 < uVar11) {
          bVar6 = 0;
          *puVar8 = uVar2;
          *puVar12 = uVar11;
          uVar2 = uVar11;
        }
        uVar11 = uVar2;
        uVar10 = uVar10 - 1;
        puVar8 = puVar12;
      } while (uVar10 != 0);
      iVar7 = iVar7 + 1;
      if (((int)uVar5 <= iVar7) || (uVar3 = uVar3 - 1, !(bool)(bVar6 ^ 1))) break;
    }
  }
  *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) & 0x7fffffff;
  return;
}




void FUN_01986724(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0x13fb0;
  lVar1 = param_1;
  do {
    FUN_01985e44(lVar1);
    lVar2 = lVar2 + -0x2e8;
    lVar1 = lVar1 + 0x2e8;
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0x13fb0) = 0;
  *(undefined8 *)(param_1 + 0x13fb8) = 0;
  return;
}




void FUN_01986780(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  
  *(undefined8 *)(*(long *)(param_1 + 0x13fb8) + (ulong)param_2 * 8) = param_3;
  uVar1 = 1 << (ulong)(param_2 & 0x1f);
  if ((param_4 & 1) == 0) {
    uVar1 = 0;
  }
  *(uint *)(*(long *)(param_1 + 0x13fb8) + 0xa0) =
       *(uint *)(*(long *)(param_1 + 0x13fb8) + 0xa0) | uVar1;
  return;
}




void FUN_019867b4(long param_1,uint param_2,undefined8 param_3)

{
  *(undefined8 *)(*(long *)(param_1 + 0x13fb8) + (ulong)param_2 * 8 + 0x50) = param_3;
  return;
}




void FUN_019867cc(long param_1,undefined4 param_2,undefined8 param_3)

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




undefined1 * FUN_019867f4(undefined1 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  
  puVar1 = (uint *)(param_1 + 0x13fb0);
  if (*puVar1 == 0) {
    puVar6 = (undefined1 *)0x0;
    uVar3 = 0;
  }
  else {
    uVar2 = *puVar1 * 0x2e8;
    puVar5 = (undefined1 *)(*(long *)(param_2 + 2) + (ulong)*param_2);
    uVar3 = *param_2 + uVar2;
    if (((ulong)puVar5 & 7) == 0) {
      puVar6 = (undefined1 *)0x0;
      if (uVar3 < (param_2[4] & 0x7fffffff)) {
        *param_2 = uVar3;
        puVar6 = puVar5;
      }
    }
    else {
      puVar6 = (undefined1 *)0x0;
      if (uVar3 + 7 < (param_2[4] & 0x7fffffff)) {
        *param_2 = uVar3 + 7;
        puVar6 = (undefined1 *)((ulong)(puVar5 + 7) & 0xfffffffffffffff8);
      }
    }
    if (uVar2 != 0) {
      lVar4 = -(ulong)uVar2;
      puVar5 = puVar6;
      do {
        lVar4 = lVar4 + 1;
        *puVar5 = *param_1;
        param_1 = param_1 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar4 != 0);
      uVar3 = 0;
      if (*puVar1 == 0) goto LAB_019868e4;
    }
    uVar7 = 0;
    puVar5 = puVar6;
    do {
      FUN_01985e84(puVar5,param_2);
      uVar3 = *puVar1;
      uVar7 = uVar7 + 1;
      puVar5 = puVar5 + 0x2e8;
    } while (uVar7 < uVar3);
  }
LAB_019868e4:
  *param_3 = uVar3;
  return puVar6;
}




void FUN_01986900(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}




void FUN_0198690c(void)

{
  return;
}




void FUN_01986910(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  return;
}




void FUN_0198691c(long *param_1,uint param_2)

{
  FUN_01986020(*param_1 + (ulong)param_2 * 0x2e8);
  return;
}




void FUN_0198692c(long *param_1,long param_2)

{
  FUN_019860f4(*param_1 + (ulong)*(uint *)(*(long *)(param_2 + 8) + 0xa4) * 0x2e8);
  return;
}




void FUN_01986948(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_019861f0(*param_1 + lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x2e8;
    } while (uVar2 < *(uint *)(param_1 + 1));
    if (*(uint *)(param_1 + 1) != 0) {
      lVar1 = 0;
      uVar2 = 0;
      do {
        FUN_01985fc4(*param_1 + lVar1);
        uVar2 = uVar2 + 1;
        lVar1 = lVar1 + 0x2e8;
      } while (uVar2 < *(uint *)(param_1 + 1));
    }
  }
  return;
}




void FUN_019869c8(long *param_1,long param_2)

{
  FUN_019862bc(*param_1 + (ulong)*(uint *)(*(long *)(param_2 + 8) + 0xa4) * 0x2e8);
  return;
}




void FUN_019869e4(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_019862f0(*param_1 + lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x2e8;
    } while (uVar2 < *(uint *)(param_1 + 1));
  }
  return;
}




void FUN_01986a38(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,uint param_5)

{
  FUN_019864b4(*param_1 + (param_4 & 0xffffffff) * 0x2e8,param_2,param_3,param_5 & 1);
  return;
}




void FUN_01986a4c(long *param_1,ulong param_2,undefined4 param_3)

{
  FUN_019864a0(*param_1 + (param_2 & 0xffffffff) * 0x2e8,param_3);
  return;
}




void FUN_01986a70(long *param_1,ulong param_2,undefined4 param_3)

{
  FUN_019864a0(*param_1 + (param_2 & 0xffffffff) * 0x2e8,param_3);
  return;
}




ushort FUN_01986a94(long *param_1,uint param_2)

{
  return *(ushort *)(*param_1 + (ulong)param_2 * 0x2e8 + 0x2da) & 0x7fff;
}




undefined2 FUN_01986aac(long *param_1,uint param_2)

{
  return *(undefined2 *)(*param_1 + (ulong)param_2 * 0x2e8 + 0x2d8);
}




void FUN_01986ac0(void)

{
  return;
}




void FUN_01986ac4(long *param_1,ulong param_2)

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
      FUN_019862f0(lVar1);
      lVar4 = lVar4 + (param_2 & 0xffffffff) * 8;
      if ((*(long *)(lVar4 + lVar2) != 0) || (*(long *)(lVar4 + lVar2 + 0x50) != 0)) {
        FUN_019863c8(lVar1,param_2 & 0xffffffff);
      }
      FUN_019862f0(lVar1);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x2e8;
    } while (uVar3 < *(uint *)(param_1 + 1));
  }
  return;
}




undefined8 FUN_01986b64(void)

{
  return 7;
}




void FUN_01986b6c(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  return;
}




void FUN_01986b78(long param_1)

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
        FUN_01987254((long)pvVar2 + 0x18,*(undefined8 *)((long)pvVar2 + 0x20));
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
  return;
}




void FUN_01986c00(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_01986c08(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}




void FUN_01986c10(undefined8 *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  void *pvVar6;
  uint *puVar7;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  puVar7 = (uint *)*param_1;
  uVar3 = *puVar7;
  uVar1 = uVar3 + param_2;
  if (uVar1 < (puVar7[4] & 0x7fffffff)) {
    *puVar7 = uVar1;
    lVar2 = *(long *)(puVar7 + 2) + (ulong)uVar3;
    if (lVar2 != 0) {
      pvVar6 = operator_new(0x30);
      FUN_01989b7c(pvVar6,param_2,lVar2);
      local_50 = pvVar6;
      FUN_01986ccc(param_1 + 1,&local_50);
      iVar5 = *(int *)(param_1 + 1) + -1;
      goto LAB_01986ca0;
    }
  }
  iVar5 = -1;
LAB_01986ca0:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}




void FUN_01986ccc(uint *param_1,undefined8 *param_2)

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
    FUN_01987f18(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_01986d54(long param_1,uint param_2)

{
  FUN_01989cb4(*(undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 8));
  return;
}




undefined8 FUN_01986d60(long param_1,uint param_2)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 8);
}




void FUN_01986d6c(long param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01986d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_3,param_2);
    return;
  }
  return;
}




void FUN_01986d90(undefined8 param_1,undefined4 param_2,char *param_3)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  undefined *puVar7;
  ulong local_1d8;
  undefined8 local_1d0;
  void *local_1c8;
  undefined **local_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [16];
  uint auStack_1a0 [26];
  FILE *local_138;
  undefined4 local_118;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_1c0 = (undefined **)0x2baeff8;
  local_108[0] = (undefined **)0x2baf020;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = (void *)0x0;
  uStack_1b8 = 0;
  std::__ndk1::ios_base::init((ios_base *)local_108,auStack_1b0);
  local_80 = 0;
  local_78 = 0xffffffff;
  local_1c0 = &PTR_FUN_02baefa8;
  local_108[0] = &PTR_FUN_02baefd0;
  FUN_01987f98(auStack_1b0);
  if (local_138 == (FILE *)0x0) {
    local_138 = fopen(param_3,"r");
    if (local_138 != (FILE *)0x0) {
      local_118 = 8;
      goto LAB_01986e78;
    }
  }
  std::__ndk1::ios_base::clear
            ((ios_base *)((long)&local_1c0 + (long)local_1c0[-3]),
             *(uint *)((long)auStack_1a0 + (long)local_1c0[-3]) | 4);
LAB_01986e78:
  puVar7 = local_1c0[-3];
  while (*(int *)((long)auStack_1a0 + (long)puVar7) == 0) {
    uVar5 = FUN_01986f6c(&local_1c0);
    FUN_0093de70(&local_1d8,uVar5);
    puVar7 = local_1c0[-3];
  }
  lVar6 = FUN_01987464(auStack_1b0);
  if (lVar6 == 0) {
    std::__ndk1::ios_base::clear
              ((ios_base *)((long)&local_1c0 + (long)local_1c0[-3]),
               *(uint *)((long)auStack_1a0 + (long)local_1c0[-3]) | 4);
  }
  local_1c0 = &PTR_FUN_02baefa8;
  local_108[0] = &PTR_FUN_02baefd0;
  FUN_019873f8(auStack_1b0);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  bVar4 = (local_1d8 & 1) != 0;
  pvVar2 = (void *)((ulong)&local_1d8 | 1);
  if (bVar4) {
    pvVar2 = local_1c8;
  }
  uVar1 = (uint)((byte)local_1d8 >> 1);
  if (bVar4) {
    uVar1 = (uint)local_1d0;
  }
  FUN_01987070(param_1,param_2,pvVar2,uVar1);
  if ((local_1d8 & 1) != 0) {
    operator_delete(local_1c8);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01986f6c(long *param_1)

{
  ios_base *this;
  byte *pbVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  char local_30 [8];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  param_1[1] = 0;
  FUN_00e6da14(local_30,param_1,1);
  if (local_30[0] == '\0') {
LAB_0198700c:
    uVar4 = 0xffffffff;
  }
  else {
    plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
    pbVar1 = (byte *)plVar3[3];
    if (pbVar1 == (byte *)plVar3[4]) {
      uVar4 = (**(code **)(*plVar3 + 0x50))();
      if ((int)uVar4 == -1) {
        this = (ios_base *)((long)param_1 + *(long *)(*param_1 + -0x18));
        std::__ndk1::ios_base::clear(this,*(uint *)(this + 0x20) | 6);
        goto LAB_0198700c;
      }
    }
    else {
      plVar3[3] = (long)(pbVar1 + 1);
      uVar4 = (ulong)*pbVar1;
    }
    param_1[1] = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

