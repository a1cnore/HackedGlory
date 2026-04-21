// functions/00c16 — 15 functions
#include "libGameKindred.h"




void FUN_00c16068(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(uint *)(param_1 + 200);
  if (*(uint *)(param_1 + 200) != 0) {
    uVar2 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0xd0) + uVar2 * 8) != 0) {
        FUN_00c89d0c();
        uVar1 = (ulong)*(uint *)(param_1 + 200);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}




void FUN_00c160b0(undefined1 param_1 [16],long param_2)

{
  undefined8 uVar1;
  
  if (0.0 < param_1._0_4_) {
    uVar1 = FUN_00efee28(0,param_1._0_8_,FUN_0091aa80);
    FUN_00f022a0(param_2 + 400,uVar1);
    return;
  }
  *(uint *)(param_2 + 0x214) = *(uint *)(param_2 + 0x214) & 0xfffffffb;
  return;
}




bool FUN_00c1610c(long param_1,long param_2)

{
  return *(int *)(param_1 + 0x168) < *(int *)(param_2 + 0x168);
}




void FUN_00c16120(undefined8 param_1,float param_2,long param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulong local_a8;
  void *local_a0;
  float local_98;
  float fStack_94;
  code *local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  FUN_00f0025c(&fStack_94,&local_98);
  FUN_00c162f8(&local_a8,param_3 + 200);
  local_90 = FUN_00c1610c;
  FUN_00c165cc(local_a0,(void *)((long)local_a0 + (local_a8 & 0xffffffff) * 8),&local_90);
  fVar4 = local_98;
  uVar3 = local_a8;
  iVar2 = (int)local_a8;
  uVar7 = local_a8 & 0xffffffff;
  fVar9 = (float)FUN_00f08664(&DAT_03218ef8,param_3 + 0xd8);
  if (iVar2 != 0) {
    uVar8 = 0;
    do {
      plVar6 = *(long **)((long)local_a0 + uVar8 * 8);
      fVar13 = ((float)(int)uVar8 / (float)(uVar3 & 0xffffffff) + -0.25) * 6.2831855;
      fVar12 = 6.2831855;
      fVar10 = sinf(fVar13);
      fVar13 = cosf(fVar13);
      fVar11 = (float)(**(code **)(*plVar6 + 0x48))(plVar6);
      uVar5 = FUN_00efed6c((float)(int)uVar8 * 0.05);
      FUN_00f022a0(plVar6,uVar5);
      uVar5 = FUN_00efef08((fVar9 + fStack_94 * 0.5 + (fVar4 / 3.0) * fVar13) - fVar11 * 0.5,
                           (param_2 + local_98 * 0.5 + (fVar4 / 3.0) * fVar10) - fVar12 * 0.5,
                           param_1,FUN_009a7624);
      FUN_00f022a0(plVar6,uVar5);
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
  }
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c162f8(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00c1654c(param_1,*param_2);
  uVar1 = *param_2;
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 3;
    puVar2 = *(undefined8 **)(param_2 + 2);
    puVar3 = *(undefined8 **)(param_1 + 2);
    do {
      lVar4 = lVar4 + -8;
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  *param_1 = uVar1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1634c(undefined8 param_1,ulong param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ushort *puVar3;
  ushort uVar4;
  long *plVar5;
  ushort *puVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (*(int *)(param_3 + 200) != 0) {
    uVar7 = 0;
    do {
      fVar10 = (float)param_2;
      plVar5 = *(long **)(*(long *)(param_3 + 0xd0) + uVar7 * 8);
      if (plVar5 != (long *)0x0) {
        fVar8 = (float)(**(code **)(*plVar5 + 0x48))(plVar5);
        fVar11 = fVar10;
        fVar9 = (float)FUN_00f08664(plVar5 + 0x2c,plVar5[4]);
        uVar2 = FUN_00efed6c((float)(int)uVar7 * 0.05);
        FUN_00f022a0(plVar5,uVar2);
        puVar3 = (ushort *)FUN_00efee28(0,param_1,FUN_009a816c);
        if ((*(float *)(plVar5 + 0x2c) != DAT_03218ef8) ||
           (param_2 = (ulong)(uint)_DAT_03218efc, *(float *)((long)plVar5 + 0x164) != _DAT_03218efc)
           ) {
          param_2 = (ulong)(uint)(fVar11 - fVar10 * 0.5);
          uVar2 = FUN_00efef08(fVar9 - fVar8 * 0.5,param_2,param_1,FUN_009a7624);
          lVar1 = DAT_03210d00;
          uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
          if ((ulong)uVar4 == 0xffff) {
            puVar6 = (ushort *)0x0;
          }
          else {
            puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
            if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
              uVar4 = 0xffff;
            }
            else {
              uVar4 = *puVar6;
            }
            *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
            *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
            FUN_00efcd98(puVar6);
            *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
          }
          FUN_00efcea4(puVar6,puVar3,uVar2,0);
          puVar3 = puVar6;
        }
        FUN_00f022a0(plVar5,puVar3);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_3 + 200));
  }
  return;
}




void FUN_00c16544(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x28c) = param_1;
  return;
}




void FUN_00c1654c(uint *param_1,uint param_2)

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




void FUN_00c165cc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
LAB_00c16684:
  puVar11 = param_2 + -1;
  puVar12 = param_1;
LAB_00c166a4:
  param_1 = puVar12;
  lVar7 = (long)param_2 - (long)param_1;
  uVar6 = lVar7 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    return;
  case 2:
    uVar6 = (*(code *)*param_3)(param_2[-1],*param_1);
    if ((uVar6 & 1) != 0) {
      uVar8 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar8;
      return;
    }
    return;
  case 3:
    FUN_00c169e8(param_1,param_1 + 1,puVar11,param_3);
    return;
  case 4:
    FUN_00c16ae0(param_1,param_1 + 1,param_1 + 2,puVar11,param_3);
    return;
  case 5:
    FUN_00c16bb0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar11,param_3);
    return;
  }
  if (lVar7 < 0xf8) {
    FUN_00c16cb8(param_1,param_2,param_3);
    return;
  }
  uVar4 = uVar6;
  if ((long)uVar6 < 0) {
    uVar4 = uVar6 + 1;
  }
  puVar12 = (undefined8 *)((long)param_1 + (uVar4 & 0x3ffffffffffffffe) * 4);
  if (lVar7 < 0x1f39) {
    iVar3 = FUN_00c169e8(param_1,puVar12,puVar11,param_3);
  }
  else {
    uVar4 = uVar6 + 3;
    if (-1 < (long)uVar6) {
      uVar4 = uVar6;
    }
    lVar7 = (uVar4 & 0x7ffffffffffffffc) * 2;
    iVar3 = FUN_00c16bb0(param_1,(long)param_1 + lVar7,puVar12,(long)puVar12 + lVar7,puVar11,param_3
                        );
  }
  uVar6 = (*(code *)*param_3)(*param_1,*puVar12);
  puVar13 = puVar11;
  puVar10 = param_2 + -2;
  if ((uVar6 & 1) == 0) {
LAB_00c16748:
    puVar13 = puVar10;
    if (param_1 != puVar13) goto code_r0x00c16750;
    puVar12 = param_1 + 1;
    uVar6 = (*(code *)*param_3)(*param_1,*puVar11);
    if ((uVar6 & 1) == 0) {
      if (puVar12 == puVar11) {
        return;
      }
      puVar12 = param_1 + 2;
      while (uVar6 = (*(code *)*param_3)(*param_1,puVar12[-1]), (uVar6 & 1) == 0) {
        puVar12 = puVar12 + 1;
        if (param_2 == puVar12) {
          return;
        }
      }
      uVar8 = puVar12[-1];
      puVar12[-1] = *puVar11;
      *puVar11 = uVar8;
    }
    if (puVar12 == puVar11) {
      return;
    }
    while( true ) {
      puVar13 = puVar12 + -1;
      do {
        puVar12 = puVar13;
        puVar13 = puVar12 + 1;
        uVar6 = (*(code *)*param_3)(*param_1,*puVar13);
      } while ((uVar6 & 1) == 0);
      puVar12 = puVar12 + 2;
      do {
        puVar11 = puVar11 + -1;
        uVar6 = (*(code *)*param_3)(*param_1,*puVar11);
      } while ((uVar6 & 1) != 0);
      if (puVar11 <= puVar13) break;
      uVar8 = *puVar13;
      *puVar13 = *puVar11;
      *puVar11 = uVar8;
    }
    uVar5 = 4;
    param_1 = puVar13;
    goto LAB_00c16648;
  }
  goto LAB_00c16778;
code_r0x00c16750:
  uVar6 = (*(code *)*param_3)(*puVar13,*puVar12);
  puVar10 = puVar13 + -1;
  if ((uVar6 & 1) != 0) goto code_r0x00c16764;
  goto LAB_00c16748;
code_r0x00c16764:
  uVar8 = *param_1;
  iVar3 = iVar3 + 1;
  *param_1 = *puVar13;
  *puVar13 = uVar8;
LAB_00c16778:
  puVar10 = param_1 + 1;
  puVar9 = puVar10;
  puVar1 = puVar12;
  if (puVar10 < puVar13) {
    while( true ) {
      puVar12 = puVar1;
      puVar10 = puVar9 + -1;
      do {
        puVar9 = puVar10;
        puVar10 = puVar9 + 1;
        uVar6 = (*(code *)*param_3)(*puVar10,*puVar12);
      } while ((uVar6 & 1) != 0);
      puVar9 = puVar9 + 2;
      do {
        puVar13 = puVar13 + -1;
        uVar6 = (*(code *)*param_3)(*puVar13,*puVar12);
      } while ((uVar6 & 1) == 0);
      if (puVar13 < puVar10) break;
      uVar8 = *puVar10;
      iVar3 = iVar3 + 1;
      *puVar10 = *puVar13;
      *puVar13 = uVar8;
      puVar1 = puVar13;
      if (puVar12 != puVar10) {
        puVar1 = puVar12;
      }
    }
  }
  if ((puVar10 != puVar12) && (uVar6 = (*(code *)*param_3)(*puVar12,*puVar10), (uVar6 & 1) != 0)) {
    uVar8 = *puVar10;
    iVar3 = iVar3 + 1;
    *puVar10 = *puVar12;
    *puVar12 = uVar8;
  }
  if (iVar3 == 0) {
    uVar6 = FUN_00c16d88(param_1,puVar10,param_3);
    uVar4 = FUN_00c16d88(puVar10 + 1,param_2,param_3);
    if ((uVar4 & 1) != 0) goto LAB_00c1666c;
    puVar12 = puVar10 + 1;
    if ((uVar6 & 1) != 0) goto LAB_00c166a4;
  }
  if ((long)param_2 - (long)puVar10 <= (long)puVar10 - (long)param_1) {
    FUN_00c165cc(puVar10 + 1,param_2,param_3);
    param_2 = puVar10;
    goto LAB_00c16684;
  }
  FUN_00c165cc(param_1,puVar10,param_3);
  puVar12 = puVar10 + 1;
  goto LAB_00c166a4;
LAB_00c1666c:
  bVar2 = (uVar6 & 1) == 0;
  if (bVar2) {
    param_2 = puVar10;
  }
  uVar5 = 1;
  if (bVar2) {
    uVar5 = 2;
  }
LAB_00c16648:
  if (4 < uVar5) {
    return;
  }
  if ((1 << (ulong)uVar5 & 0x15U) == 0) {
    return;
  }
  goto LAB_00c16684;
}




undefined8
FUN_00c169e8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = (*(code *)*param_4)(*param_2,*param_1);
  uVar2 = (*(code *)*param_4)(*param_3,*param_2);
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    uVar1 = (*(code *)*param_4)(*param_2,*param_1);
    if ((uVar1 & 1) != 0) {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      return 2;
    }
  }
  else {
    uVar3 = *param_1;
    if ((uVar2 & 1) == 0) {
      *param_1 = *param_2;
      *param_2 = uVar3;
      uVar1 = (*(code *)*param_4)(*param_3);
      if ((uVar1 & 1) != 0) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        return 2;
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar3;
    }
  }
  return 1;
}




int FUN_00c16ae0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00c169e8();
  uVar2 = (*(code *)*param_5)(*param_4,*param_3);
  if ((uVar2 & 1) != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    uVar2 = (*(code *)*param_5)(*param_3,*param_2);
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      uVar2 = (*(code *)*param_5)(*param_2,*param_1);
      if ((uVar2 & 1) == 0) {
        iVar1 = iVar1 + 2;
      }
      else {
        uVar3 = *param_1;
        iVar1 = iVar1 + 3;
        *param_1 = *param_2;
        *param_2 = uVar3;
      }
    }
  }
  return iVar1;
}




int FUN_00c16bb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00c16ae0();
  uVar2 = (*(code *)*param_6)(*param_5,*param_4);
  if ((uVar2 & 1) != 0) {
    uVar3 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar3;
    uVar2 = (*(code *)*param_6)(*param_4,*param_3);
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      uVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar3;
      uVar2 = (*(code *)*param_6)(*param_3,*param_2);
      if ((uVar2 & 1) == 0) {
        iVar1 = iVar1 + 2;
      }
      else {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        uVar2 = (*(code *)*param_6)(*param_2,*param_1);
        if ((uVar2 & 1) == 0) {
          iVar1 = iVar1 + 3;
        }
        else {
          uVar3 = *param_1;
          iVar1 = iVar1 + 4;
          *param_1 = *param_2;
          *param_2 = uVar3;
        }
      }
    }
  }
  return iVar1;
}




void FUN_00c16cb8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  FUN_00c169e8(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar7 = 0;
    puVar4 = param_1 + 3;
    puVar5 = param_1 + 2;
    do {
      puVar3 = puVar4;
      uVar2 = (*(code *)*param_3)(*puVar3,*puVar5);
      if ((uVar2 & 1) != 0) {
        uVar6 = *puVar3;
        lVar1 = lVar7;
        do {
          lVar8 = lVar1;
          *(undefined8 *)((long)param_1 + lVar8 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x10);
          puVar4 = param_1;
          if (lVar8 == -0x10) goto LAB_00c16d5c;
          uVar2 = (*(code *)*param_3)(uVar6,*(undefined8 *)((long)param_1 + lVar8 + 8));
          lVar1 = lVar8 + -8;
        } while ((uVar2 & 1) != 0);
        puVar4 = (undefined8 *)((long)param_1 + lVar8 + 0x10);
LAB_00c16d5c:
        *puVar4 = uVar6;
      }
      lVar7 = lVar7 + 8;
      puVar4 = puVar3 + 1;
      puVar5 = puVar3;
    } while (puVar3 + 1 != param_2);
  }
  return;
}




bool FUN_00c16d88(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar2 = (*(code *)*param_3)(param_2[-1],*param_1);
    if ((uVar2 & 1) != 0) {
      uVar6 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar6;
    }
    break;
  case 3:
    FUN_00c169e8(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_00c16ae0(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00c16bb0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_00c169e8(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar7 = 0;
      iVar8 = 0;
      puVar4 = param_1 + 3;
      puVar5 = param_1 + 2;
      do {
        puVar3 = puVar4;
        uVar2 = (*(code *)*param_3)(*puVar3,*puVar5);
        if ((uVar2 & 1) != 0) {
          uVar6 = *puVar3;
          lVar1 = lVar7;
          do {
            lVar9 = lVar1;
            *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar9 + 0x10);
            puVar4 = param_1;
            if (lVar9 == -0x10) goto LAB_00c16e84;
            uVar2 = (*(code *)*param_3)(uVar6,*(undefined8 *)((long)param_1 + lVar9 + 8));
            lVar1 = lVar9 + -8;
          } while ((uVar2 & 1) != 0);
          puVar4 = (undefined8 *)((long)param_1 + lVar9 + 0x10);
LAB_00c16e84:
          iVar8 = iVar8 + 1;
          *puVar4 = uVar6;
          if (iVar8 == 8) {
            return puVar3 + 1 == param_2;
          }
        }
        lVar7 = lVar7 + 8;
        puVar4 = puVar3 + 1;
        puVar5 = puVar3;
      } while (puVar3 + 1 != param_2);
    }
  }
  return true;
}




void FUN_00c16f24(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00f13ca4();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = (long)&PTR_FUN_027f68d0;
  FUN_00afbfb0(param_1 + 0x19);
  plVar1 = param_1 + 0x55;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x73;
  FUN_00f0d160(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x19,1);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x32c) = *(uint *)((long)param_1 + 0x32c) & 0xfffffffb;
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Regular_12_02be9c60);
  uVar4 = FUN_00e6ce7c("MENU_SPOILS_END_OF_REWARDS_PROMPT",0);
  FUN_00f0d75c(plVar2,uVar4);
  FUN_00f0e548(plVar1,PTR_s_build___SpoilsOfWarPartsCommon_t_02be3638,"ringbg");
  if ((*(uint *)((long)param_1 + 0x32c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x32c) = *(uint *)((long)param_1 + 0x32c) & 0xffff807f;
    FUN_0091ada4(plVar1);
  }
  local_50 = FUN_00f048a4("SPOILSOFWAR::PULSE_RING");
  local_78 = thunk_FUN_00c18480;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

