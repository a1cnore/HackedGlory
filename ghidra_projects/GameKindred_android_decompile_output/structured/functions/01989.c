// functions/01989 — 46 functions
#include "libGameKindred.h"




void FUN_01989014(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_1 + 1;
  return;
}




void FUN_01989028(long param_1)

{
  FUN_01989188(param_1,*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_01989030(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  
  uVar1 = *(uint *)(param_2 + 4);
  plVar5 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar5;
  plVar3 = plVar5;
  if (plVar4 != (long *)0x0) {
    do {
      if (*(uint *)(plVar4 + 4) >= uVar1) {
        plVar3 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar1];
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar5) && (*(uint *)(plVar3 + 4) <= uVar1)) {
                    /* WARNING: Could not recover jumptable at 0x0198912c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar3[5])(param_1,param_2,param_3);
      return;
    }
  }
  lVar2 = FUN_0198a748(param_2);
  if (((lVar2 != 0) && (lVar2 = FUN_0198a748(*(undefined8 *)(lVar2 + 0x10)), lVar2 != 0)) &&
     (plVar3 = (long *)*plVar5, plVar3 != (long *)0x0)) {
    lVar2 = *(long *)(lVar2 + 0x10);
    uVar1 = *(uint *)(lVar2 + 4);
    plVar4 = plVar5;
    do {
      if (*(uint *)(plVar3 + 4) >= uVar1) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < uVar1];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar5) && (*(uint *)(plVar4 + 4) <= uVar1)) && (*param_3 != 0)) {
      pcVar6 = (code *)plVar4[5];
      do {
        param_3 = param_3 + 1;
        (*pcVar6)(param_1,lVar2);
      } while (*param_3 != 0);
    }
  }
  return;
}




void FUN_01989130(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 local_38 [2];
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38[0] = *(undefined4 *)(param_2 + 4);
  local_30 = param_3;
  FUN_019891d4(param_1,local_38,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01989188(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_01989188(param_1,*param_2);
    FUN_01989188(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




undefined1  [16] FUN_019891d4(long param_1,uint *param_2,undefined8 *param_3)

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
      while (puVar3 = puVar2, *param_2 < *(uint *)(puVar3 + 4)) {
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_0198924c;
      }
      if (*param_2 <= *(uint *)(puVar3 + 4)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_0198924c:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x30);
    uVar6 = *param_3;
    *(undefined8 *)((long)pvVar5 + 0x28) = param_3[1];
    *(undefined8 *)((long)pvVar5 + 0x20) = uVar6;
    FUN_019892a0(param_1,puVar3,puVar4,pvVar5);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar5;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_019892a0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




void FUN_019892f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baf0c0;
  *(int *)(param_1 + 1) = DAT_02bf278c;
  DAT_02bf278c = DAT_02bf278c + 1;
  return;
}




void FUN_0198931c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baf0c0;
  *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
  return;
}




void FUN_0198933c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1989340);
  (*pcVar1)();
}




void FUN_01989340(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = param_2;
  lVar2 = 1;
  puVar1 = param_1;
  do {
    puVar1 = puVar1 + 2;
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x800);
  param_1[0x1002] = 0x7ff0000;
  return;
}




ulong FUN_0198936c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort *puVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x1002);
  if ((ulong)uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = (ushort *)(param_1 + 2 + (ulong)uVar1 * 2);
    if (uVar1 == *(ushort *)((long)param_1 + 0x8012)) {
      uVar1 = 0xffff;
    }
    else {
      uVar1 = *puVar2;
    }
    *(ushort *)(param_1 + 0x1002) = uVar1;
    *(int *)((long)param_1 + 0x8014) = *(int *)((long)param_1 + 0x8014) + 1;
  }
  uVar1 = (**(code **)(*(long *)*param_1 + 0x10))();
  *puVar2 = 0xffff;
  puVar2[1] = uVar1;
  *(undefined8 *)(puVar2 + 4) = param_4;
  return (ulong)((long)puVar2 - (long)(param_1 + 2)) >> 4 & 0xffffffff;
}




void FUN_01989414(undefined8 *param_1,ushort param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  undefined8 *puVar4;
  int iVar5;
  
  puVar4 = param_1 + 2;
  (**(code **)(*(long *)*param_1 + 0x18))
            ((long *)*param_1,*(undefined2 *)((long)(puVar4 + (ulong)param_2 * 2) + 2));
  iVar5 = (int)(puVar4 + (ulong)param_2 * 2);
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




void FUN_019894ac(undefined8 *param_1,ushort param_2)

{
                    /* WARNING: Could not recover jumptable at 0x019894c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x20))
            ((long *)*param_1,*(undefined2 *)((long)param_1 + (ulong)param_2 * 0x10 + 0x12));
  return;
}




void FUN_019894c8(undefined8 *param_1,undefined8 *param_2,uint param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  ushort *puVar3;
  ushort auStack_60 [4];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
  puVar3 = (ushort *)((long)auStack_60 - ((ulong)uVar2 * 2 + 0xf & 0x3fffffff0));
  uVar2 = (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,puVar3,uVar2,param_4,param_5);
  if (uVar2 <= param_3) {
    param_3 = uVar2;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *param_2 = param_1[(ulong)*puVar3 * 2 + 3];
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_019895ac(long param_1,undefined8 *param_2,ushort *param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    *param_2 = *(undefined8 *)(param_1 + (ulong)*param_3 * 0x10 + 0x18);
    param_3 = param_3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}




void FUN_019895d0(undefined8 *param_1,undefined8 *param_2,uint param_3,undefined4 param_4)

{
  long lVar1;
  uint uVar2;
  ushort *puVar3;
  ushort auStack_50 [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)*param_1 + 0x38))();
  puVar3 = (ushort *)((long)auStack_50 - ((ulong)uVar2 * 2 + 0xf & 0x3fffffff0));
  uVar2 = (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,puVar3,uVar2,param_4);
  if (uVar2 <= param_3) {
    param_3 = uVar2;
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    *param_2 = param_1[(ulong)*puVar3 * 2 + 3];
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_019896a4(void)

{
  return;
}




void FUN_019896a8(long param_1,uint param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  void *__dest;
  long lVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong *puVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  int *piVar14;
  ulong local_158 [32];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar9 = *(uint *)(param_1 + 4);
  if ((7 < uVar9) && (uVar9 < param_2)) {
    piVar6 = (int *)(param_1 + (ulong)uVar9);
    piVar1 = (int *)(param_1 + (ulong)param_2);
    if (((int *)((long)piVar6 + (ulong)(uint)piVar6[1]) <= piVar1) && (piVar6 != (int *)0x0)) {
      uVar9 = 0;
      piVar14 = (int *)0x0;
      piVar11 = (int *)0x0;
      do {
        iVar2 = *piVar6;
        piVar12 = piVar11;
        if (iVar2 == 0x424d5953) {
          if (uVar9 < 0x20) {
            local_158[uVar9] = (ulong)piVar6;
            uVar9 = uVar9 + 1;
          }
        }
        else {
          piVar12 = piVar6;
          if ((iVar2 != 0x48435450) && (piVar12 = piVar11, iVar2 == 0x54534e49)) {
            piVar14 = piVar6;
          }
        }
        uVar3 = piVar6[1];
      } while ((((7 < uVar3) && ((long)(ulong)uVar3 <= (long)piVar1 - (long)piVar6)) &&
               (piVar6 = (int *)((long)piVar6 + (ulong)uVar3), piVar6 < piVar1)) &&
              (((int *)((long)piVar6 + (ulong)(uint)piVar6[1]) <= piVar1 &&
               (piVar11 = piVar12, piVar6 != (int *)0x0))));
      if ((piVar12 != (int *)0x0) && (piVar14 != (int *)0x0)) {
        __dest = (void *)FUN_01989c44(param_3,piVar14[1] + -8,0x10);
        memmove(__dest,piVar14 + 2,(ulong)(piVar14[1] - 8));
        if (*(byte *)(param_1 + 9) - 1 < 0xf) {
          FUN_019a1194(__dest,piVar14[1] + -8,
                       *(undefined4 *)(&DAT_02bf27e8 + (ulong)*(byte *)(param_1 + 9) * 4),
                       piVar14[1] + -8);
        }
        iVar2 = piVar12[2];
        if (iVar2 != 0) {
          iVar7 = 0;
          do {
            uVar8 = *(ulong *)(piVar12 + (long)iVar7 * 2 + 4);
            if (((int)uVar8 != 0) || (uVar8 >> 0x20 != 0)) {
              *(ulong *)((long)__dest + (uVar8 & 0xffffffff)) = (long)__dest + (uVar8 >> 0x20);
            }
            iVar7 = iVar7 + 1;
          } while (iVar2 != iVar7);
        }
        if (uVar9 != 0) {
          uVar8 = (ulong)uVar9;
          puVar10 = local_158;
          do {
            uVar13 = *puVar10;
            lVar5 = FUN_0198a75c(*(undefined4 *)(uVar13 + 0xc));
            if (lVar5 != 0) {
              FUN_01989cf0(param_3,uVar13 + 0x10,(long)__dest + (ulong)*(uint *)(uVar13 + 8),lVar5);
            }
            uVar8 = uVar8 - 1;
            puVar10 = puVar10 + 1;
          } while (uVar8 != 0);
        }
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_019898a8(long param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 4);
  uVar3 = 0;
  if (7 < uVar2) {
    if ((long)(param_2 - param_1) < (long)(ulong)uVar2) {
      uVar3 = 0;
    }
    else {
      uVar1 = param_1 + (ulong)uVar2;
      uVar3 = 0;
      if ((uVar1 < param_2) && (uVar3 = 0, uVar1 + *(uint *)(uVar1 + 4) <= param_2)) {
        uVar3 = uVar1;
      }
    }
  }
  return uVar3;
}




void FUN_019898f4(uint param_1,undefined8 param_2,undefined4 param_3)

{
  if (param_1 - 1 < 0xf) {
    FUN_019a1194(param_2,param_3,*(undefined4 *)(&DAT_02bf27e8 + (ulong)param_1 * 4));
    return;
  }
  return;
}




void FUN_01989920(long param_1,undefined8 param_2)

{
  FUN_00e6b218(param_1,1,param_2);
  FUN_00e6b218(param_1 + 4,1,param_2);
  return;
}




void FUN_01989958(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined2 *)((long)param_1 + 10) = 0;
  *param_1 = 0x30464544;
  return;
}




void FUN_01989974(long param_1,undefined8 param_2)

{
  FUN_00e6b218(param_1,1,param_2);
  FUN_00e6b218(param_1 + 4,1,param_2);
  FUN_00e6b358(param_1 + 8,1,param_2);
  FUN_00e6b358(param_1 + 9,1,param_2);
  FUN_00e6af10(param_1 + 10,1,2,param_2);
  FUN_00e6b218(param_1 + 0xc,1,param_2);
  return;
}




void FUN_019899f0(uint param_1,undefined8 param_2,undefined4 param_3)

{
  if (param_1 - 1 < 0xf) {
    FUN_019a1104(param_2,param_3,*(undefined4 *)(&DAT_02bf27e8 + (ulong)param_1 * 4));
    return;
  }
  return;
}




void FUN_01989a1c(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0x424d5953;
  return;
}




void FUN_01989a30(long param_1,undefined8 param_2)

{
  FUN_00e6b218(param_1,1,param_2);
  FUN_00e6b218(param_1 + 4,1,param_2);
  FUN_00e6b218(param_1 + 8,1,param_2);
  FUN_00e6b218(param_1 + 0xc,1,param_2);
  return;
}




void FUN_01989a88(undefined8 *param_1)

{
  *param_1 = 0x54534e49;
  return;
}




void FUN_01989a98(long param_1,undefined8 param_2)

{
  FUN_00e6b218(param_1,1,param_2);
  FUN_00e6b218(param_1 + 4,1,param_2);
  return;
}




void FUN_01989ad0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0x48435450;
  return;
}




void FUN_01989ae0(long param_1,undefined8 param_2)

{
  FUN_00e6b218(param_1,1,param_2);
  FUN_00e6b218(param_1 + 4,1,param_2);
  FUN_00e6b218(param_1 + 8,1,param_2);
  FUN_00e6af10(param_1 + 0xc,1,4,param_2);
  return;
}




void FUN_01989b3c(undefined4 *param_1,uint param_2)

{
  void *pvVar1;
  
  *param_1 = 0;
  param_1[4] = param_2 | 0x80000000;
  pvVar1 = operator_new__((ulong)param_2);
  *(undefined8 *)(param_1 + 8) = 0;
  *(void **)(param_1 + 2) = pvVar1;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined4 **)(param_1 + 6) = param_1 + 8;
  return;
}




void FUN_01989b7c(undefined4 *param_1,uint param_2,undefined8 param_3)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = param_3;
  param_1[4] = param_2 & 0x7fffffff;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined4 **)(param_1 + 6) = param_1 + 8;
  return;
}




void * FUN_01989ba0(uint *param_1,uint *param_2)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  ulong uVar4;
  void *__s;
  
  uVar3 = *param_2 >> 0x11 & 0xf;
  pvVar2 = (void *)(*(long *)(param_1 + 2) + (ulong)*param_1);
  uVar4 = (ulong)uVar3 - 1;
  uVar1 = *param_1 + (*param_2 >> 3 & 0x3fff);
  if ((uVar4 & (ulong)pvVar2) == 0) {
    __s = (void *)0x0;
    if (uVar1 < (param_1[4] & 0x7fffffff)) {
      *param_1 = uVar1;
      __s = pvVar2;
    }
  }
  else {
    uVar1 = (uVar3 + uVar1) - 1;
    if (uVar1 < (param_1[4] & 0x7fffffff)) {
      uVar4 = uVar4 + (long)pvVar2;
      *param_1 = uVar1;
    }
    __s = (void *)(uVar4 & -(ulong)uVar3);
  }
  uVar1 = *param_2 >> 3 & 0x3fff;
  if (uVar1 != 0) {
    memset(__s,0,(ulong)uVar1);
  }
  return __s;
}




ulong FUN_01989c44(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_3 - 1;
  uVar2 = *(long *)(param_1 + 2) + (ulong)*param_1;
  uVar1 = *param_1 + param_2;
  if ((uVar3 & uVar2) == 0) {
    uVar3 = 0;
    if (uVar1 < (param_1[4] & 0x7fffffff)) {
      *param_1 = uVar1;
      uVar3 = uVar2;
    }
  }
  else {
    uVar1 = (param_3 + uVar1) - 1;
    if (uVar1 < (param_1[4] & 0x7fffffff)) {
      uVar3 = uVar3 + uVar2;
      *param_1 = uVar1;
    }
    uVar3 = uVar3 & -(ulong)param_3;
  }
  return uVar3;
}




void FUN_01989cb4(undefined4 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  puVar1 = (undefined8 *)(param_1 + 8);
  FUN_01987254(param_1 + 6,*puVar1);
  *(undefined8 **)(param_1 + 6) = puVar1;
  *(undefined8 *)(param_1 + 10) = 0;
  *puVar1 = 0;
  return;
}




void FUN_01989cf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6a474(param_2);
  local_60[0] = FUN_0091ed5c(param_2,uVar2,0x12345678);
  local_58 = param_3;
  uStack_50 = param_4;
  FUN_01989e48(param_1 + 0x18,local_60,local_60);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_01989d84(long param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  uVar1 = FUN_00e6a474(param_2);
  uVar2 = FUN_0091ed5c(param_2,uVar1,0x12345678);
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
    if (plVar3 != plVar5) {
      if (uVar2 < *(uint *)(plVar3 + 4)) {
        return 0;
      }
      if (param_3 != (long *)0x0) {
        *param_3 = plVar3[6];
      }
      return plVar3[5];
    }
  }
  return 0;
}




int FUN_01989e20(int *param_1)

{
  return (param_1[4] & 0x7fffffffU) - *param_1;
}




undefined4 FUN_01989e34(undefined4 *param_1)

{
  return *param_1;
}




uint FUN_01989e3c(long param_1)

{
  return *(uint *)(param_1 + 0x10) & 0x7fffffff;
}




undefined1  [16] FUN_01989e48(long param_1,uint *param_2,undefined8 *param_3)

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
      while (puVar3 = puVar2, *param_2 < *(uint *)(puVar3 + 4)) {
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_01989ec0;
      }
      if (*param_2 <= *(uint *)(puVar3 + 4)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_01989ec0:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x38);
    uVar6 = *param_3;
    *(undefined8 *)((long)pvVar5 + 0x28) = param_3[1];
    *(undefined8 *)((long)pvVar5 + 0x20) = uVar6;
    *(undefined8 *)((long)pvVar5 + 0x30) = param_3[2];
    FUN_01989f1c(param_1,puVar3,puVar4,pvVar5);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar5;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_01989f1c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




void FUN_01989f70(long param_1)

{
  FUN_0198a784();
  *(undefined8 *)(param_1 + 0x410) = 0;
  return;
}




void FUN_01989f94(long param_1,long param_2)

{
  *(long *)(param_1 + 0x410) = param_2;
  while (param_2 != 0) {
    FUN_01989fc8(param_1);
    param_2 = *(long *)(param_1 + 0x410);
  }
  return;
}




void FUN_01989fc8(long param_1)

{
  long lVar1;
  int iVar2;
  char acStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  sscanf(*(char **)(param_1 + 0x410),"%s ",acStack_38);
  iVar2 = strcmp(acStack_38,"TOK_ATOM");
  if (iVar2 == 0) {
    FUN_0198a0a4(param_1);
  }
  else {
    iVar2 = strcmp(acStack_38,"TOK_RAW");
    if (iVar2 == 0) {
      FUN_0198a234(param_1);
    }
    else {
      iVar2 = strcmp(acStack_38,"TOK_TYPE");
      if (iVar2 == 0) {
        FUN_0198a3bc(param_1);
      }
      else {
        iVar2 = strcmp(acStack_38,"TOK_ARRAY");
        if (iVar2 == 0) {
          FUN_0198a504(param_1);
        }
        else {
          *(undefined8 *)(param_1 + 0x410) = 0;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

