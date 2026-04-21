// functions/00f03 — 38 functions
#include "libGameKindred.h"




void FUN_00f0302c(int *param_1,long *param_2)

{
  int *piVar1;
  ushort *puVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  
  uVar8 = *param_1 - 1;
  uVar10 = (ulong)uVar8;
  if (-1 < (int)uVar8) {
    piVar1 = param_1 + 8;
    uVar11 = -(ulong)(uVar8 >> 0x1f) & 0xfffffff000000000 | uVar10 << 4;
    puVar2 = (ushort *)((long)param_1 + 0xa022);
    do {
      uVar6 = (ulong)*(ushort *)(*(long *)(param_1 + 2) + uVar10 * 0x10 + 8);
      if ((*(long *)(piVar1 + uVar6 * 10) == *param_2) &&
         (*(long *)(piVar1 + uVar6 * 10 + 2) == param_2[1])) {
        lVar7 = *(long *)(param_1 + 2) + uVar11;
        FUN_00f033c8(param_1,lVar7,lVar7 + 0x10);
        iVar12 = (int)(piVar1 + uVar6 * 10);
        if (*(ushort *)(param_1 + 0x2808) == 0xffff) {
          uVar4 = (short)((uint)(iVar12 - (int)piVar1) >> 3) * -0x3333;
          *puVar2 = uVar4;
          *(ushort *)(param_1 + 0x2808) = uVar4;
        }
        else {
          uVar4 = *puVar2;
          uVar5 = (short)((uint)(iVar12 - (int)piVar1) >> 3) * -0x3333;
          *puVar2 = uVar5;
          *(ushort *)(piVar1 + (ulong)uVar4 * 10) = uVar5;
        }
        param_1[0x2809] = param_1[0x2809] + -1;
      }
      uVar8 = (int)uVar10 - 1;
      uVar10 = (ulong)uVar8;
      uVar11 = uVar11 - 0x10;
    } while (-1 < (int)uVar8);
  }
  uVar8 = param_1[4];
  if (uVar8 != 0) {
    uVar10 = 0;
    lVar7 = 8;
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 6) + lVar7);
      uVar11 = (ulong)uVar3 & 0xffff;
      plVar9 = (long *)(param_1 + uVar11 * 10 + 8);
      if ((*plVar9 == *param_2) && (*(long *)(param_1 + uVar11 * 10 + 10) == param_2[1])) {
        *(uint *)(*(long *)(param_1 + 6) + lVar7) = uVar3 & 0x7fffffff;
        *plVar9 = 0;
        plVar9[1] = 0;
        uVar8 = param_1[4];
      }
      uVar10 = uVar10 + 1;
      lVar7 = lVar7 + 0x10;
    } while (uVar10 < uVar8);
  }
  return;
}




void FUN_00f031b8(int *param_1,long param_2)

{
  int *piVar1;
  ushort *puVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  
  uVar7 = *param_1 - 1;
  uVar9 = (ulong)uVar7;
  if (-1 < (int)uVar7) {
    piVar1 = param_1 + 8;
    uVar10 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar9 << 4;
    puVar2 = (ushort *)((long)param_1 + 0xa022);
    do {
      uVar4 = *(ushort *)(*(long *)(param_1 + 2) + uVar9 * 0x10 + 8);
      if (*(long *)(piVar1 + (ulong)uVar4 * 10) == param_2) {
        lVar6 = *(long *)(param_1 + 2) + uVar10;
        FUN_00f033c8(param_1,lVar6,lVar6 + 0x10);
        iVar11 = (int)(piVar1 + (ulong)uVar4 * 10);
        if (*(ushort *)(param_1 + 0x2808) == 0xffff) {
          uVar4 = (short)((uint)(iVar11 - (int)piVar1) >> 3) * -0x3333;
          *puVar2 = uVar4;
          *(ushort *)(param_1 + 0x2808) = uVar4;
        }
        else {
          uVar4 = *puVar2;
          uVar5 = (short)((uint)(iVar11 - (int)piVar1) >> 3) * -0x3333;
          *puVar2 = uVar5;
          *(ushort *)(piVar1 + (ulong)uVar4 * 10) = uVar5;
        }
        param_1[0x2809] = param_1[0x2809] + -1;
      }
      uVar7 = (int)uVar9 - 1;
      uVar9 = (ulong)uVar7;
      uVar10 = uVar10 - 0x10;
    } while (-1 < (int)uVar7);
  }
  uVar7 = param_1[4];
  if (uVar7 != 0) {
    uVar9 = 0;
    lVar6 = 8;
    do {
      uVar3 = *(uint *)(*(long *)(param_1 + 6) + lVar6);
      plVar8 = (long *)(param_1 + ((ulong)uVar3 & 0xffff) * 10 + 8);
      if (*plVar8 == param_2) {
        *(uint *)(*(long *)(param_1 + 6) + lVar6) = uVar3 & 0x7fffffff;
        *plVar8 = 0;
        plVar8[1] = 0;
        uVar7 = param_1[4];
      }
      uVar9 = uVar9 + 1;
      lVar6 = lVar6 + 0x10;
    } while (uVar9 < uVar7);
  }
  return;
}




void FUN_00f03314(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xa040);
  FUN_00f02a94();
  DAT_03210f48 = pvVar1;
  return;
}




void FUN_00f03344(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_03210f48;
  if (DAT_03210f48 != (void *)0x0) {
    FUN_00f02b54(DAT_03210f48);
    operator_delete(pvVar1);
  }
  DAT_03210f48 = (void *)0x0;
  return;
}




void FUN_00f0337c(void)

{
  if (DAT_03210f48 != 0) {
    FUN_00f02bcc();
    return;
  }
  return;
}




void FUN_00f03390(undefined8 param_1)

{
  if (DAT_03210f48 != 0) {
    FUN_00f0302c(DAT_03210f48,param_1);
    return;
  }
  return;
}




void FUN_00f033ac(undefined8 param_1)

{
  if (DAT_03210f48 != 0) {
    FUN_00f031b8(DAT_03210f48,param_1);
    return;
  }
  return;
}




void FUN_00f033c8(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 4);
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
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x10);
    if (puVar1 != param_3) {
      do {
        puVar2 = param_3 + 2;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 2;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_00f03438(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  FUN_00f0ca1c();
  lVar3 = 0;
  auVar4 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x1b0) = 0xbf800000bf800000;
  *(long *)(param_1 + 0x1a8) = auVar4._8_8_;
  *(long *)(param_1 + 0x1a0) = auVar4._0_8_;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x1b8 + lVar3);
    lVar3 = lVar3 + 0x18;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
  } while (lVar3 != 0x300);
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  if (DAT_03210ce0 != '\0') {
    uVar2 = FUN_00f13624();
    FUN_00f13fd8(param_1,uVar2);
    FUN_00f112f0(param_1,1);
    return;
  }
  return;
}




void FUN_00f034c8(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x1b0) = param_1;
  *(undefined4 *)(param_3 + 0x1b4) = param_2;
  return;
}




void FUN_00f034d4(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1b0);
  *param_3 = *(undefined4 *)(param_1 + 0x1b4);
  return;
}




void FUN_00f034e8(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x1a0) = param_1;
  *(undefined4 *)(param_3 + 0x1a4) = param_2;
  return;
}




void FUN_00f034f4(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1a0);
  *param_3 = *(undefined4 *)(param_1 + 0x1a4);
  return;
}




undefined4 FUN_00f03508(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1a0);
}




undefined4 FUN_00f03510(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1a4);
}




void FUN_00f03518(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x1a8) = param_1;
  *(undefined4 *)(param_3 + 0x1ac) = param_2;
  return;
}




void FUN_00f03524(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1a8);
  *param_3 = *(undefined4 *)(param_1 + 0x1ac);
  return;
}




undefined4 FUN_00f03538(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1a8);
}




undefined4 FUN_00f03540(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1ac);
}




void FUN_00f03548(void)

{
  return;
}




void FUN_00f0354c(void)

{
  return;
}




void FUN_00f03550(undefined8 param_1,long *param_2)

{
  long *plVar1;
  
  (**(code **)(*param_2 + 0x80))(param_2,param_1,1);
  if (DAT_03210ce0 != '\0') {
    plVar1 = (long *)FUN_00f14058(param_1);
                    /* WARNING: Could not recover jumptable at 0x00f035a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))(plVar1,param_2);
    return;
  }
  return;
}




long FUN_00f035b8(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  if ((param_1 != 0) && (0xffff < (uint)(*(int *)(param_1 + 0x84) << 1 ^ param_2 << 0x10))) {
    uVar2 = 0xffff0000;
    lVar3 = param_1;
    do {
      if (((uVar2 & 0xffff) < uVar2 >> 0x10) && (param_1 = *(long *)(lVar3 + 0x28), param_1 != 0)) {
        uVar2 = uVar2 & 0xffff0000 | uVar2 + 1 & 0xffff;
      }
      else {
        if ((uVar2 & 0xffff) == 0) {
          return 0;
        }
        param_1 = *(long *)(lVar3 + 0x30);
        if (param_1 == 0) {
          lVar3 = *(long *)(lVar3 + 0x20);
          if (lVar3 == 0) {
            return 0;
          }
          uVar1 = uVar2 - 1 & 0xffff;
          if (uVar1 == 0) {
            return 0;
          }
          uVar2 = uVar1 | uVar2 & 0xffff0000;
          while (param_1 = *(long *)(lVar3 + 0x30), param_1 == 0) {
            lVar3 = *(long *)(lVar3 + 0x20);
            if (lVar3 == 0) {
              return 0;
            }
            uVar1 = uVar2 - 1;
            uVar2 = uVar2 & 0xffff0000 | uVar1 & 0xffff;
            if ((uVar1 & 0xffff) == 0) {
              return 0;
            }
          }
        }
      }
      lVar3 = param_1;
    } while ((uint)(param_2 << 0x10 ^ *(int *)(param_1 + 0x84) << 1) >> 0x10 != 0);
  }
  return param_1;
}




void FUN_00f0366c(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00e6a474(param_2);
  sVar1 = FUN_0091ed5c(param_2,uVar2,0x1234);
  FUN_00f035b8(param_1,(int)sVar1);
  return;
}




void FUN_00f036ac(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  
  uVar2 = 0;
  plVar5 = (long *)(param_1 + 0x1b8);
  iVar4 = -1;
  do {
    if (*plVar5 == param_2) goto LAB_00f03708;
    iVar1 = (int)uVar2;
    if (*plVar5 != 0 || iVar4 != -1) {
      iVar1 = iVar4;
    }
    uVar2 = uVar2 + 1;
    plVar5 = plVar5 + 3;
    iVar4 = iVar1;
  } while (uVar2 < 0x20);
  if (iVar1 != -1) {
    lVar3 = param_1 + (long)iVar1 * 0x18;
    plVar5 = (long *)(lVar3 + 0x1b8);
    *(long *)(lVar3 + 0x1b8) = param_2;
LAB_00f03708:
    FUN_00f03784(param_1,plVar5);
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  return;
}




long * FUN_00f03724(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = 0;
  plVar2 = (long *)(param_1 + 0x1b8);
  iVar4 = -1;
  do {
    if (*plVar2 == param_2) {
      return plVar2;
    }
    iVar1 = (int)uVar3;
    if (*plVar2 != 0 || iVar4 != -1) {
      iVar1 = iVar4;
    }
    uVar3 = uVar3 + 1;
    plVar2 = plVar2 + 3;
    iVar4 = iVar1;
  } while (uVar3 < 0x20);
  if (iVar1 != -1) {
    param_1 = param_1 + (long)iVar1 * 0x18;
    *(long *)(param_1 + 0x1b8) = param_2;
    return (long *)(param_1 + 0x1b8);
  }
  return (long *)0x0;
}




void FUN_00f03784(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = param_2[1];
  if (lVar2 != param_3) {
    uVar3 = *param_2;
    if (param_3 != 0) {
      FUN_00f04bf8(auStack_78,DAT_03210fa0,param_3,uVar3);
      FUN_00f04760(param_3,auStack_78,1);
      param_2[1] = param_3;
    }
    if (lVar2 != 0) {
      FUN_00f04bf8(auStack_78,DAT_03210fa4,lVar2,uVar3);
      FUN_00f04760(lVar2,auStack_78,1);
    }
    if (param_3 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined1 *)(param_2 + 2) = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f0385c(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = 0;
  plVar1 = (long *)(param_1 + 0x1b8);
  do {
    if (*plVar1 == param_2) {
      FUN_00f03784(param_1,plVar1,0);
      return;
    }
    uVar2 = uVar2 + 1;
    plVar1 = plVar1 + 3;
  } while (uVar2 < 0x20);
  return;
}




long * FUN_00f03890(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = 0;
  plVar1 = (long *)(param_1 + 0x1b8);
  do {
    if (*plVar1 == param_2) {
      return plVar1;
    }
    uVar2 = uVar2 + 1;
    plVar1 = plVar1 + 3;
  } while (uVar2 < 0x20);
  return (long *)0x0;
}




void FUN_00f038bc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  lVar2 = param_1;
  do {
    lVar1 = param_1 + lVar3;
    if ((*(long *)(lVar1 + 0x1b8) != 0) && (*(long *)(lVar1 + 0x1c0) == param_2)) {
      lVar2 = FUN_00f03784(lVar2,lVar1 + 0x1b8,0);
    }
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0x300);
  return;
}




void FUN_00f03918(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = 0;
  lVar1 = param_1 + 0x1b8;
  do {
    plVar2 = (long *)(lVar1 + lVar3);
    if (*plVar2 != 0) {
      param_1 = FUN_00f03784(param_1,plVar2,0);
    }
    lVar3 = lVar3 + 0x18;
  } while (lVar3 != 0x300);
  return;
}




long FUN_00f03958(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = 0;
  plVar1 = (long *)(param_1 + 0x1c0);
  do {
    if (*plVar1 == param_2) {
      return plVar1[-1];
    }
    uVar2 = uVar2 + 1;
    plVar1 = plVar1 + 3;
  } while (uVar2 < 0x20);
  return 0;
}




undefined8 FUN_00f0398c(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = 0;
  plVar2 = (long *)(param_1 + 0x1c0);
  do {
    if (*plVar2 == param_2) {
      return 1;
    }
    uVar1 = uVar1 + 1;
    plVar2 = plVar2 + 3;
  } while (uVar1 < 0x20);
  return 0;
}




undefined8 FUN_00f039c0(void)

{
  return 0;
}




bool FUN_00f039c8(long param_1,long param_2)

{
  return *(long *)(param_1 + 0x4b8) == param_2;
}




void FUN_00f039d8(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x4b8) != param_2) {
    return;
  }
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  return;
}




void FUN_00f039f0(undefined8 param_1,float param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)FUN_00f13e54();
  if (*(float *)(param_3 + 0x1b0) == fVar3) {
    fVar3 = *(float *)(param_3 + 0x1b4);
    if (fVar3 == param_2) goto LAB_00f03a4c;
  }
  else {
    fVar3 = *(float *)(param_3 + 0x1b4);
  }
  FUN_00f024d0(*(float *)(param_3 + 0x1b0),fVar3,param_3);
LAB_00f03a4c:
  FUN_00f0337c(param_1);
  FUN_00f017ac(auStack_60);
  FUN_00f02604(param_1,param_3,auStack_60);
  uVar2 = FUN_019806a4();
  if ((uVar2 & 1) != 0) {
    FUN_00f03ab4(param_3);
  }
  uVar2 = FUN_019807a4();
  if ((uVar2 & 1) != 0) {
    FUN_00f04328(param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f03ab4(long param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  bool bVar19;
  uint local_dc;
  float local_b8;
  float fStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [64];
  long local_68;
  
  lVar18 = DAT_02bf2598;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_01980738(&uStack_ac,&local_b0,&fStack_b4,&local_b8);
  uVar16 = 0;
  plVar17 = (long *)(param_1 + 0x1b8);
  do {
    if (*plVar17 == lVar18) {
      if ((char)plVar17[2] != '\0') {
        lVar14 = plVar17[1];
        bVar19 = true;
        goto LAB_00f03b60;
      }
      bVar19 = true;
      goto LAB_00f03b4c;
    }
    uVar16 = uVar16 + 1;
    plVar17 = plVar17 + 3;
  } while (uVar16 < 0x20);
  bVar19 = false;
  plVar17 = (long *)0x0;
LAB_00f03b4c:
  lVar14 = FUN_00f112fc(uStack_ac,local_b0,param_1,1);
LAB_00f03b60:
  uVar16 = FUN_019806d8(0);
  if (((uVar16 & 1) == 0) && (uVar16 = FUN_019806d8(2), (uVar16 & 1) == 0)) {
    uVar15 = FUN_019806d8(1);
  }
  else {
    uVar15 = 1;
  }
  if (bVar19 || (lVar14 == 0 || (((uint)uVar15 ^ 0xffffffff) & 1) != 0)) {
    if (plVar17 == (long *)0x0) {
      local_dc = 0;
    }
    else {
LAB_00f03bd8:
      FUN_00f03784(uVar15,plVar17,lVar14);
      local_dc = 1;
    }
    if (lVar14 != 0) {
      uVar3 = FUN_019806b8(0);
      uVar4 = FUN_019806b8(2);
      uVar5 = FUN_019806b8(1);
      uVar6 = FUN_01980718(0);
      uVar7 = FUN_01980718(2);
      bVar2 = FUN_01980718(1);
      uVar8 = FUN_01980644(0x4c);
      uVar9 = FUN_01980644(0x4d);
      uVar10 = FUN_01980644(0x4e);
      uVar11 = FUN_01980644(0x4f);
      uVar12 = FUN_01980644(0x50);
      uVar13 = FUN_01980644(0x51);
      uVar16 = FUN_019806d8(0);
      if ((uVar16 & 1) != 0) {
        FUN_00f04944(uStack_ac,local_b0,fStack_b4,local_b8,auStack_a8,DAT_03210f58,uVar3 & 1,
                     uVar4 & 1,uVar5 & 1,lVar18,uVar6 & 1,uVar7 & 1,bVar2 & 1);
        FUN_00f04a14(auStack_a8,uVar8 & 1,uVar9 & 1,uVar10 & 1,uVar11 & 1,uVar12 & 1,uVar13 & 1);
        FUN_00f04760(lVar14,auStack_a8,1);
      }
      uVar16 = FUN_019806b8(0);
      if ((uVar16 & 1) != 0) {
        FUN_00f04944(uStack_ac,local_b0,fStack_b4,local_b8,auStack_a8,DAT_03210f5c,uVar3 & 1,
                     uVar4 & 1,uVar5 & 1,lVar18,uVar6 & 1,uVar7 & 1,bVar2 & 1);
        FUN_00f04a14(auStack_a8,uVar8 & 1,uVar9 & 1,uVar10 & 1,uVar11 & 1,uVar12 & 1,uVar13 & 1);
        FUN_00f04760(lVar14,auStack_a8,1);
      }
      uVar16 = FUN_019806f8(0);
      if ((uVar16 & 1) != 0) {
        FUN_00f04944(uStack_ac,local_b0,fStack_b4,local_b8,auStack_a8,DAT_03210f60,uVar3 & 1,
                     uVar4 & 1,uVar5 & 1,lVar18,uVar6 & 1,uVar7 & 1,bVar2 & 1);
        FUN_00f04a14(auStack_a8,uVar8 & 1,uVar9 & 1,uVar10 & 1,uVar11 & 1,uVar12 & 1,uVar13 & 1);
        FUN_00f04760(lVar14,auStack_a8,1);
      }
      uVar16 = FUN_019806d8(2);
      if ((uVar16 & 1) != 0) {
        FUN_00f04944(uStack_ac,local_b0,fStack_b4,local_b8,auStack_a8,DAT_03210f64,uVar3 & 1,
                     uVar4 & 1,uVar5 & 1,lVar18,uVar6 & 1,uVar7 & 1,bVar2 & 1);
        FUN_00f04a14(auStack_a8,uVar8 & 1,uVar9 & 1,uVar10 & 1,uVar11 & 1,uVar12 & 1,uVar13 & 1);
        FUN_00f04760(lVar14,auStack_a8,1);
      }
      uVar16 = FUN_019806b8(2);
      if ((uVar16 & 1) != 0) {
        FUN_00f04944(uStack_ac,local_b0,fStack_b4,local_b8,auStack_a8,DAT_03210f68,uVar3 & 1,
                     uVar4 & 1,uVar5 & 1,lVar18,uVar6 & 1,uVar7 & 1,bVar2 & 1);
        FUN_00f04a14(auStack_a8,uVar8 & 1,uVar9 & 1,uVar10 & 1,uVar11 & 1,uVar12 & 1,uVar13 & 1);
        FUN_00f04760(lVar14,auStack_a8,1);
      }
      uVar16 = FUN_019806f8(2);
      if ((uVar16 & 1) != 0) {
        FUN_00f04944(uStack_ac,local_b0,fStack_b4,local_b8,auStack_a8,DAT_03210f6c,uVar3 & 1,
                     uVar4 & 1,uVar5 & 1,lVar18,uVar6 & 1,uVar7 & 1,bVar2 & 1);
        FUN_00f04a14(auStack_a8,uVar8 & 1,uVar9 & 1,uVar10 & 1,uVar11 & 1,uVar12 & 1,uVar13 & 1);
        FUN_00f04760(lVar14,auStack_a8,1);
      }
      uVar16 = FUN_019806d8(1);
      if ((uVar16 & 1) != 0) {
        FUN_00f04944(uStack_ac,local_b0,fStack_b4,local_b8,auStack_a8,DAT_03210f70,uVar3 & 1,
                     uVar4 & 1,uVar5 & 1,lVar18,uVar6 & 1,uVar7 & 1,bVar2 & 1);
        FUN_00f04a14(auStack_a8,uVar8 & 1,uVar9 & 1,uVar10 & 1,uVar11 & 1,uVar12 & 1,uVar13 & 1);
        FUN_00f04760(lVar14,auStack_a8,1);
      }
      uVar16 = FUN_019806b8(1);
      if ((uVar16 & 1) != 0) {
        FUN_00f04944(uStack_ac,local_b0,fStack_b4,local_b8,auStack_a8,DAT_03210f74,uVar3 & 1,
                     uVar4 & 1,uVar5 & 1,lVar18,uVar6 & 1,uVar7 & 1,bVar2 & 1);
        FUN_00f04a14(auStack_a8,uVar8 & 1,uVar9 & 1,uVar10 & 1,uVar11 & 1,uVar12 & 1,uVar13 & 1);
        FUN_00f04760(lVar14,auStack_a8,1);
      }
      uVar16 = FUN_019806f8(1);
      if ((uVar16 & 1) != 0) {
        FUN_00f04944(uStack_ac,local_b0,fStack_b4,local_b8,auStack_a8,DAT_03210f78,uVar3 & 1,
                     uVar4 & 1,uVar5 & 1,lVar18,uVar6 & 1,uVar7 & 1,bVar2 & 1);
        FUN_00f04a14(auStack_a8,uVar8 & 1,uVar9 & 1,uVar10 & 1,uVar11 & 1,uVar12 & 1,uVar13 & 1);
        FUN_00f04760(lVar14,auStack_a8,1);
      }
      if ((0.001 <= ABS(fStack_b4)) || (0.001 <= ABS(local_b8))) {
        FUN_00f04944(uStack_ac,local_b0,auStack_a8,DAT_03210f7c,uVar3 & 1,uVar4 & 1,uVar5 & 1,lVar18
                     ,uVar6 & 1,uVar7 & 1,bVar2 & 1);
        FUN_00f04a14(auStack_a8,uVar8 & 1,uVar9 & 1,uVar10 & 1,uVar11 & 1,uVar12 & 1,uVar13 & 1);
        FUN_00f04760(lVar14,auStack_a8,1);
      }
    }
    lVar18 = *(long *)(param_1 + 0x4b8);
    if (lVar14 != lVar18) {
      *(long *)(param_1 + 0x4b8) = lVar14;
      if (lVar18 != 0) {
        FUN_00f04ba8(uStack_ac,local_b0,auStack_a8,DAT_03210f98,lVar18);
        FUN_00f04760(lVar18,auStack_a8,1);
        lVar14 = *(long *)(param_1 + 0x4b8);
      }
      if (lVar14 != 0) {
        FUN_00f04ba8(uStack_ac,local_b0,auStack_a8,DAT_03210f94,lVar14);
        FUN_00f04760(*(undefined8 *)(param_1 + 0x4b8),auStack_a8,1);
      }
    }
    uVar16 = FUN_019806f8(0);
    if (((uVar16 & 1) == 0) && (uVar16 = FUN_019806f8(2), (uVar16 & 1) == 0)) {
      uVar15 = FUN_019806f8(1);
    }
    else {
      uVar15 = 1;
    }
    if ((local_dc & (uint)uVar15) == 1) {
      FUN_00f03784(uVar15,plVar17,0);
    }
  }
  else {
    uVar16 = 0;
    plVar17 = (long *)(param_1 + 0x1b8);
    do {
      if (*plVar17 == 0) {
        *plVar17 = lVar18;
        goto LAB_00f03bd8;
      }
      uVar16 = uVar16 + 1;
      plVar17 = plVar17 + 3;
    } while (uVar16 < 0x20);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

