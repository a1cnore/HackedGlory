// functions/00f15 — 22 functions
#include "libGameKindred.h"




void FUN_00f15098(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar4 = 0;
    do {
      lVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar4 * 8) + 0x40))();
      if ((lVar1 != 0) && (lVar2 = FUN_00f14058(lVar1), lVar2 != 0)) {
        plVar3 = (long *)FUN_00f14058(lVar1);
        (**(code **)(*plVar3 + 0x30))();
      }
      (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar4 * 8) + 0x30))();
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x28));
  }
  *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x200;
  return;
}




void FUN_00f15134(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00f15144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_2,0,2);
  return;
}




void FUN_00f15148(long *param_1,undefined8 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00f15158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_2,0,param_3);
  return;
}




void FUN_00f1515c(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f13844(param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00f15194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,uVar1);
  return;
}




void FUN_00f15198(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    uVar1 = param_2 & 0xffffffff;
    param_2 = 0;
  }
  else {
    uVar1 = 0;
  }
  uVar2 = FUN_00f138e4(uVar1,param_2,0,0,0,2,1);
                    /* WARNING: Could not recover jumptable at 0x00f151f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,uVar2);
  return;
}




byte FUN_00f151fc(long param_1)

{
  return *(byte *)(param_1 + 0x38) & 1;
}




void FUN_00f15208(long *param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00f15218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,0,param_2);
  return;
}




void FUN_00f1521c(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    uVar1 = param_2 & 0xffffffff;
    param_2 = 0;
  }
  else {
    uVar1 = 0;
  }
  uVar2 = FUN_00f138e4(uVar1,param_2,param_3,1,1,2,0);
                    /* WARNING: Could not recover jumptable at 0x00f1527c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,uVar2);
  return;
}




void FUN_00f15280(long *param_1,ulong param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    uVar2 = param_2 & 0xffffffff;
    param_2 = 0;
  }
  else {
    uVar2 = 0;
  }
  local_40 = FUN_00f138e4(uVar2,param_2,0,0,0,2,0);
  FUN_00f167f8(param_1 + 5,param_1[6] + (ulong)param_3 * 8,&local_40,&local_38);
  (**(code **)(*param_1 + 0x30))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f15338(long *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_3;
  FUN_00f167f8(param_1 + 5,param_1[6] + (param_2 & 0xffffffff) * 8,&local_30,&local_28);
  (**(code **)(*param_1 + 0x30))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f153ac(long *param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00f153c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc0))(param_1,0,param_2,param_3);
  return;
}




void FUN_00f153c4(long *param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    uVar2 = param_2 & 0xffffffff;
    param_2 = 0;
  }
  else {
    uVar2 = 0;
  }
  local_40 = FUN_00f138e4(uVar2,param_2,param_3,1,1,2,0);
  FUN_00f167f8(param_1 + 5,param_1[6] + (ulong)param_4 * 8,&local_40,&local_38);
  (**(code **)(*param_1 + 0x30))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f15480(long *param_1,long param_2,ushort param_3)

{
  *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) & 0xfe1f | (param_3 & 0xf) << 5;
  FUN_00f13b44(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00f154cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))(param_1,param_2);
  return;
}




void FUN_00f154d0(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((((DAT_03210ce0 != '\0') &&
       (plVar2 = (long *)(**(code **)(*param_2 + 0x40))(param_2), plVar2 != (long *)0x0)) &&
      (lVar4 = plVar2[4], lVar3 = FUN_00f13b24(param_1), lVar4 == 0)) && (lVar3 != 0)) {
    (**(code **)(*plVar2 + 0x80))(plVar2,lVar3,1);
  }
  local_50 = param_2;
  FUN_00f1559c(param_1 + 5,&local_50);
  (**(code **)(*param_1 + 0x30))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f1559c(uint *param_1,undefined8 *param_2)

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
    FUN_00f16778(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00f15624(void)

{
  FUN_00f15630();
  return;
}




void FUN_00f15630(long *param_1,uint param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = FUN_00f13844(param_3,param_4,param_5);
  FUN_00f167f8(param_1 + 5,param_1[6] + (ulong)param_2 * 8,&local_40,&local_38);
  (**(code **)(*param_1 + 0x30))(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00f156c4(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  float fVar10;
  
  iVar8 = DAT_0321125c;
  iVar7 = DAT_03211258;
  uVar5 = DAT_03211250;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    fVar10 = (float)((uint)*(ushort *)(param_1 + 0x20) * (*(int *)(param_1 + 0x28) + -1));
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      uVar9 = 0;
      uVar6 = 0;
      iVar8 = (int)((float)(((uint)((ulong)uVar5 >> 0x10) & 0xffff) + ((uint)uVar5 & 0xffff)) +
                    fVar10 + 0.0);
      do {
        lVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x40))();
        if ((lVar2 == 0) ||
           (((*(uint *)(lVar2 + 0x84) >> 3 & 1) != 0 &&
            (((*(uint *)(lVar2 + 0x84) >> 2 & 1) != 0 || (uVar3 = FUN_00f14094(), (uVar3 & 1) != 0))
            )))) {
          uVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x10))();
          uVar1 = iVar7 - iVar8;
          iVar8 = iVar8 + (uint)uVar3;
          if (uVar1 <= (uint)uVar3) {
            iVar8 = iVar7;
          }
          fVar10 = (float)uVar6;
          if ((float)uVar6 <= (float)(uVar3 >> 0x20)) {
            fVar10 = (float)(uVar3 >> 0x20);
          }
          uVar6 = (uint)fVar10;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 0x28));
      iVar7 = (ushort)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x30) + uVar6 +
              ((uint)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) & 0xffff);
    }
    else {
      uVar9 = 0;
      uVar6 = 0;
      iVar7 = (int)((float)((uint)(ushort)((ulong)uVar5 >> 0x30) +
                           ((uint)((ulong)uVar5 >> 0x20) & 0xffff)) + fVar10 + 0.0);
      do {
        lVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x40))();
        if ((lVar2 == 0) ||
           (((*(uint *)(lVar2 + 0x84) >> 3 & 1) != 0 &&
            (((*(uint *)(lVar2 + 0x84) >> 2 & 1) != 0 || (uVar3 = FUN_00f14094(), (uVar3 & 1) != 0))
            )))) {
          uVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x10))();
          uVar1 = iVar8 - iVar7;
          uVar4 = (uint)(uVar3 >> 0x20);
          iVar7 = iVar7 + uVar4;
          if (uVar1 <= uVar4) {
            iVar7 = iVar8;
          }
          fVar10 = (float)uVar6;
          if ((float)uVar6 <= (float)(uVar3 & 0xffffffff)) {
            fVar10 = (float)(uVar3 & 0xffffffff);
          }
          uVar6 = (uint)fVar10;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 0x28));
      iVar8 = uVar6 + (*(uint *)(param_1 + 0x18) & 0xffff) + (*(uint *)(param_1 + 0x18) >> 0x10);
    }
    uVar5 = CONCAT44(iVar7,iVar8);
  }
  return uVar5;
}




undefined8 FUN_00f158a8(long param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  
  iVar9 = DAT_0321125c;
  iVar12 = DAT_03211258;
  uVar8 = DAT_03211250;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    fVar14 = (float)((uint)*(ushort *)(param_1 + 0x20) * (*(int *)(param_1 + 0x28) + -1));
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      uVar10 = 0;
      uVar11 = 0;
      iVar9 = (int)((float)(((uint)((ulong)uVar8 >> 0x10) & 0xffff) + ((uint)uVar8 & 0xffff)) +
                    fVar14 + 0.0);
      do {
        uVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8) + 0x10))();
        plVar7 = *(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8);
        lVar5 = (**(code **)(*plVar7 + 0x40))(plVar7);
        if (lVar5 == 0) {
          fVar14 = (float)uVar11;
LAB_00f159c4:
          fVar15 = (float)(uVar4 >> 0x20);
LAB_00f159c8:
          uVar13 = iVar12 - iVar9;
          if (fVar14 <= fVar15) {
            fVar14 = fVar15;
          }
          uVar11 = (uint)fVar14;
          iVar9 = iVar9 + (uint)uVar4;
          if (uVar13 <= (uint)uVar4) {
            iVar9 = iVar12;
          }
        }
        else {
          lVar5 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8) + 0x40))();
          if ((lVar5 == 0) ||
             (((*(uint *)(lVar5 + 0x84) >> 3 & 1) != 0 &&
              (((*(uint *)(lVar5 + 0x84) >> 2 & 1) != 0 ||
               (uVar6 = FUN_00f14094(), (uVar6 & 1) != 0)))))) {
            plVar7 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8) + 0x40
                                         ))();
            iVar2 = (**(code **)(*plVar7 + 0x100))(plVar7,param_2);
            fVar14 = (float)uVar11;
            if (iVar2 < 0) goto LAB_00f159c4;
            fVar15 = (float)iVar2;
            goto LAB_00f159c8;
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 0x28));
      iVar12 = (ushort)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x30) + uVar11 +
               ((uint)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) & 0xffff);
    }
    else {
      uVar10 = 0;
      uVar11 = 0;
      iVar12 = (int)((float)((uint)(ushort)((ulong)uVar8 >> 0x30) +
                            ((uint)((ulong)uVar8 >> 0x20) & 0xffff)) + fVar14 + 0.0);
      do {
        uVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8) + 0x10))();
        plVar7 = *(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8);
        lVar5 = (**(code **)(*plVar7 + 0x40))(plVar7);
        uVar13 = (uint)(uVar4 >> 0x20);
        if (lVar5 == 0) {
          bVar1 = uVar13 < (uint)(iVar9 - iVar12);
LAB_00f15afc:
          iVar12 = uVar13 + iVar12;
          if (!bVar1) {
            iVar12 = iVar9;
          }
          fVar14 = (float)uVar11;
          if ((float)uVar11 <= (float)(uVar4 & 0xffffffff)) {
            fVar14 = (float)(uVar4 & 0xffffffff);
          }
          uVar11 = (uint)fVar14;
        }
        else {
          lVar5 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8) + 0x40))();
          if ((lVar5 == 0) ||
             (((*(uint *)(lVar5 + 0x84) >> 3 & 1) != 0 &&
              (((*(uint *)(lVar5 + 0x84) >> 2 & 1) != 0 ||
               (uVar6 = FUN_00f14094(), (uVar6 & 1) != 0)))))) {
            plVar7 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar10 * 8) + 0x40
                                         ))();
            uVar3 = (**(code **)(*plVar7 + 0x100))(plVar7,param_2);
            if (uVar3 != 0xffffffff) {
              uVar13 = uVar3;
            }
            bVar1 = uVar13 < (uint)(iVar9 - iVar12);
            goto LAB_00f15afc;
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 0x28));
      iVar9 = uVar11 + (*(uint *)(param_1 + 0x18) & 0xffff) + (*(uint *)(param_1 + 0x18) >> 0x10);
    }
    uVar8 = CONCAT44(iVar12,iVar9);
  }
  return uVar8;
}




undefined8 FUN_00f15b54(long param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  
  iVar13 = DAT_0321125c;
  iVar11 = DAT_03211258;
  uVar8 = DAT_03211250;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    fVar14 = (float)((uint)*(ushort *)(param_1 + 0x20) * (*(int *)(param_1 + 0x28) + -1));
    uVar12 = 0;
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      uVar10 = 0;
      iVar13 = (int)((float)(((uint)((ulong)uVar8 >> 0x10) & 0xffff) + ((uint)uVar8 & 0xffff)) +
                     fVar14 + 0.0);
      do {
        uVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar12 * 8) + 0x10))();
        plVar7 = *(long **)(*(long *)(param_1 + 0x30) + uVar12 * 8);
        lVar5 = (**(code **)(*plVar7 + 0x40))(plVar7);
        uVar9 = (uint)uVar4;
        if (lVar5 == 0) {
          bVar1 = uVar9 < (uint)(iVar11 - iVar13);
LAB_00f15c84:
          iVar13 = uVar9 + iVar13;
          if (!bVar1) {
            iVar13 = iVar11;
          }
          fVar14 = (float)uVar10;
          if ((float)uVar10 <= (float)(uVar4 >> 0x20)) {
            fVar14 = (float)(uVar4 >> 0x20);
          }
          uVar10 = (uint)fVar14;
        }
        else {
          lVar5 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar12 * 8) + 0x40))();
          if ((lVar5 == 0) ||
             (((*(uint *)(lVar5 + 0x84) >> 3 & 1) != 0 &&
              (((*(uint *)(lVar5 + 0x84) >> 2 & 1) != 0 ||
               (uVar6 = FUN_00f14094(), (uVar6 & 1) != 0)))))) {
            plVar7 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar12 * 8) + 0x40
                                         ))();
            uVar2 = (**(code **)(*plVar7 + 0x110))(plVar7,param_2);
            if (uVar2 != 0xffffffff) {
              uVar9 = uVar2;
            }
            bVar1 = uVar9 < (uint)(iVar11 - iVar13);
            goto LAB_00f15c84;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(param_1 + 0x28));
      iVar11 = (ushort)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x30) + uVar10 +
               ((uint)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) & 0xffff);
    }
    else {
      uVar10 = 0;
      iVar11 = (int)((float)((uint)(ushort)((ulong)uVar8 >> 0x30) +
                            ((uint)((ulong)uVar8 >> 0x20) & 0xffff)) + fVar14 + 0.0);
      do {
        uVar4 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar12 * 8) + 0x10))();
        plVar7 = *(long **)(*(long *)(param_1 + 0x30) + uVar12 * 8);
        lVar5 = (**(code **)(*plVar7 + 0x40))(plVar7);
        if (lVar5 == 0) {
          fVar14 = (float)uVar10;
LAB_00f15d9c:
          fVar15 = (float)(uVar4 & 0xffffffff);
LAB_00f15da0:
          uVar9 = iVar13 - iVar11;
          if (fVar14 <= fVar15) {
            fVar14 = fVar15;
          }
          uVar2 = (uint)(uVar4 >> 0x20);
          uVar10 = (uint)fVar14;
          iVar11 = iVar11 + uVar2;
          if (uVar9 <= uVar2) {
            iVar11 = iVar13;
          }
        }
        else {
          lVar5 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar12 * 8) + 0x40))();
          if ((lVar5 == 0) ||
             (((*(uint *)(lVar5 + 0x84) >> 3 & 1) != 0 &&
              (((*(uint *)(lVar5 + 0x84) >> 2 & 1) != 0 ||
               (uVar6 = FUN_00f14094(), (uVar6 & 1) != 0)))))) {
            plVar7 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar12 * 8) + 0x40
                                         ))();
            iVar3 = (**(code **)(*plVar7 + 0x110))(plVar7,param_2);
            fVar14 = (float)uVar10;
            if (iVar3 < 0) goto LAB_00f15d9c;
            fVar15 = (float)iVar3;
            goto LAB_00f15da0;
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(uint *)(param_1 + 0x28));
      iVar13 = uVar10 + (*(uint *)(param_1 + 0x18) & 0xffff) + (*(uint *)(param_1 + 0x18) >> 0x10);
    }
    uVar8 = CONCAT44(iVar11,iVar13);
  }
  return uVar8;
}




undefined8 FUN_00f15dfc(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  float fVar10;
  
  iVar8 = DAT_0321125c;
  iVar7 = DAT_03211258;
  uVar5 = DAT_03211250;
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    fVar10 = (float)((uint)*(ushort *)(param_1 + 0x20) * (*(int *)(param_1 + 0x28) + -1));
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      uVar9 = 0;
      uVar6 = 0;
      iVar8 = (int)((float)(((uint)((ulong)uVar5 >> 0x10) & 0xffff) + ((uint)uVar5 & 0xffff)) +
                    fVar10 + 0.0);
      do {
        lVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x40))();
        if ((lVar2 == 0) ||
           (((*(uint *)(lVar2 + 0x84) >> 3 & 1) != 0 &&
            (((*(uint *)(lVar2 + 0x84) >> 2 & 1) != 0 || (uVar3 = FUN_00f14094(), (uVar3 & 1) != 0))
            )))) {
          uVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x18))();
          uVar1 = iVar7 - iVar8;
          iVar8 = iVar8 + (uint)uVar3;
          if (uVar1 <= (uint)uVar3) {
            iVar8 = iVar7;
          }
          fVar10 = (float)uVar6;
          if ((float)uVar6 <= (float)(uVar3 >> 0x20)) {
            fVar10 = (float)(uVar3 >> 0x20);
          }
          uVar6 = (uint)fVar10;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 0x28));
      iVar7 = (ushort)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x30) + uVar6 +
              ((uint)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) & 0xffff);
    }
    else {
      uVar9 = 0;
      uVar6 = 0;
      iVar7 = (int)((float)((uint)(ushort)((ulong)uVar5 >> 0x30) +
                           ((uint)((ulong)uVar5 >> 0x20) & 0xffff)) + fVar10 + 0.0);
      do {
        lVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x40))();
        if ((lVar2 == 0) ||
           (((*(uint *)(lVar2 + 0x84) >> 3 & 1) != 0 &&
            (((*(uint *)(lVar2 + 0x84) >> 2 & 1) != 0 || (uVar3 = FUN_00f14094(), (uVar3 & 1) != 0))
            )))) {
          uVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x18))();
          uVar1 = iVar8 - iVar7;
          uVar4 = (uint)(uVar3 >> 0x20);
          iVar7 = iVar7 + uVar4;
          if (uVar1 <= uVar4) {
            iVar7 = iVar8;
          }
          fVar10 = (float)uVar6;
          if ((float)uVar6 <= (float)(uVar3 & 0xffffffff)) {
            fVar10 = (float)(uVar3 & 0xffffffff);
          }
          uVar6 = (uint)fVar10;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 0x28));
      iVar8 = uVar6 + (*(uint *)(param_1 + 0x18) & 0xffff) + (*(uint *)(param_1 + 0x18) >> 0x10);
    }
    uVar5 = CONCAT44(iVar7,iVar8);
  }
  return uVar5;
}




undefined8 FUN_00f15fe0(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  float fVar10;
  
  iVar8 = DAT_0321125c;
  iVar7 = DAT_03211258;
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar5 = CONCAT44(DAT_0321125c,DAT_03211258);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    fVar10 = (float)((uint)*(ushort *)(param_1 + 0x20) * (*(int *)(param_1 + 0x28) + -1));
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      uVar9 = 0;
      uVar6 = 0;
      iVar8 = (int)((float)(((uint)((ulong)uVar5 >> 0x10) & 0xffff) + ((uint)uVar5 & 0xffff)) +
                    fVar10 + 0.0);
      do {
        lVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x40))();
        if ((lVar2 == 0) ||
           (((*(uint *)(lVar2 + 0x84) >> 3 & 1) != 0 &&
            (((*(uint *)(lVar2 + 0x84) >> 2 & 1) != 0 || (uVar3 = FUN_00f14094(), (uVar3 & 1) != 0))
            )))) {
          uVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x20))();
          uVar1 = iVar7 - iVar8;
          iVar8 = iVar8 + (uint)uVar3;
          if (uVar1 <= (uint)uVar3) {
            iVar8 = iVar7;
          }
          fVar10 = (float)uVar6;
          if ((float)uVar6 <= (float)(uVar3 >> 0x20)) {
            fVar10 = (float)(uVar3 >> 0x20);
          }
          uVar6 = (uint)fVar10;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 0x28));
      iVar7 = (ushort)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x30) + uVar6 +
              ((uint)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) & 0xffff);
    }
    else {
      uVar9 = 0;
      uVar6 = 0;
      iVar7 = (int)((float)((uint)(ushort)((ulong)uVar5 >> 0x30) +
                           ((uint)((ulong)uVar5 >> 0x20) & 0xffff)) + fVar10 + 0.0);
      do {
        lVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x40))();
        if ((lVar2 == 0) ||
           (((*(uint *)(lVar2 + 0x84) >> 3 & 1) != 0 &&
            (((*(uint *)(lVar2 + 0x84) >> 2 & 1) != 0 || (uVar3 = FUN_00f14094(), (uVar3 & 1) != 0))
            )))) {
          uVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8) + 0x20))();
          uVar1 = iVar8 - iVar7;
          uVar4 = (uint)(uVar3 >> 0x20);
          iVar7 = iVar7 + uVar4;
          if (uVar1 <= uVar4) {
            iVar7 = iVar8;
          }
          fVar10 = (float)uVar6;
          if ((float)uVar6 <= (float)(uVar3 & 0xffffffff)) {
            fVar10 = (float)(uVar3 & 0xffffffff);
          }
          uVar6 = (uint)fVar10;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_1 + 0x28));
      iVar8 = uVar6 + (*(uint *)(param_1 + 0x18) & 0xffff) + (*(uint *)(param_1 + 0x18) >> 0x10);
    }
    uVar5 = CONCAT44(iVar7,iVar8);
  }
  return uVar5;
}

