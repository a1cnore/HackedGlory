// functions/00d0f — 41 functions
#include "libGameKindred.h"




void FUN_00d0f080(void)

{
  return;
}




undefined8 FUN_00d0f084(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_2 + 0x1638);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_2 + 0x1640) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x2f9) >> 1 & 1) == 0)) {
        *(long *)(param_2 + 0x1420) = param_2 + 0x1638;
        return 1;
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x1638) = 0;
      *(undefined4 *)(param_2 + 0x1640) = DAT_03214ce8;
    }
  }
  return 2;
}




void FUN_00d0f0fc(void)

{
  return;
}




void FUN_00d0f100(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




undefined4 FUN_00d0f108(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d25570(param_2);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar1 + 0x1a8) + 1.0) *
          (*(float *)(lVar1 + 0x40) + *(float *)(lVar1 + 0xf4) * (*(float *)(lVar1 + 0x25c) + 1.0));
  if (DAT_031500a8 <= fVar3) {
    fVar3 = DAT_031500a8;
  }
  fVar4 = DAT_0314ffe8;
  if (DAT_0314ffe8 <= fVar3) {
    fVar4 = fVar3;
  }
  uVar2 = 2;
  if (*(float *)(lVar1 + 0x310) < *(float *)(param_1 + 0x24) * fVar4) {
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_00d0f198(void)

{
  return;
}




undefined8 FUN_00d0f19c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  if (*(uint *)(param_2 + 0x270) != 0) {
    uVar1 = 0;
    pbVar2 = (byte *)(param_2 + 0xac);
    do {
      if ((*pbVar2 >> 3 & 1) != 0) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      pbVar2 = pbVar2 + 0x40;
    } while (uVar1 < *(uint *)(param_2 + 0x270));
  }
  return 2;
}




void FUN_00d0f1d4(void)

{
  return;
}




undefined4 FUN_00d0f1d8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  float fVar6;
  
  uVar1 = FUN_00d25570(param_2);
  plVar5 = *(long **)(param_2 + 0x1420);
  plVar4 = (long *)*plVar5;
  if (plVar4 == (long *)0x0) {
    uVar2 = 0;
  }
  else if ((int)plVar5[1] == (int)plVar4[1]) {
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  else {
    *plVar5 = 0;
    uVar2 = 0;
    *(undefined4 *)(plVar5 + 1) = DAT_03214ce8;
  }
  fVar6 = (float)FUN_00d9df64(uVar1,uVar2);
  uVar3 = 2;
  if (*(float *)(param_2 + 0x4c) < fVar6) {
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_00d0f26c(void)

{
  return;
}




void FUN_00d0f270(undefined8 param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  float local_38 [2];
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d25570(param_2);
  plVar6 = *(long **)(param_2 + 0x1420);
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    uVar4 = 0;
  }
  else if ((int)plVar6[1] == (int)plVar5[1]) {
    uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  else {
    *plVar6 = 0;
    uVar4 = 0;
    *(undefined4 *)(plVar6 + 1) = DAT_03214ce8;
  }
  FUN_00d55794(uVar4,local_38,0);
  cVar2 = FUN_00d55870(uVar3);
  if (cVar2 == '\x01') {
    if (local_38[0] < -19.0) {
LAB_00d0f344:
      if (12.0 < local_30) {
        uVar3 = 1;
        goto LAB_00d0f360;
      }
    }
  }
  else {
    cVar2 = FUN_00d55870(uVar3);
    if ((cVar2 == '\x02') && (19.0 < local_38[0])) goto LAB_00d0f344;
  }
  uVar3 = 2;
LAB_00d0f360:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00d0f384(void)

{
  return;
}




undefined4 FUN_00d0f388(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = (**(code **)(*(long *)**(undefined8 **)(param_2 + 0x1420) + 0x10))();
  uVar2 = 1;
  if ((*(ushort *)(lVar1 + 0x2f4) & 0x205) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}




void FUN_00d0f3c0(void)

{
  return;
}




undefined8 FUN_00d0f3c4(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 2:
    lVar7 = 0x19d0;
    break;
  default:
    goto switchD_00d0f400_caseD_3;
  case 4:
    lVar7 = 0x1b10;
    break;
  case 5:
    lVar7 = 0x1b50;
    break;
  case 6:
    lVar7 = 0x1b90;
  }
  lVar7 = param_2 + lVar7;
  plVar4 = *(long **)(lVar7 + 0x10);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(lVar7 + 0x18) != (int)plVar4[1]) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined4 *)(lVar7 + 0x18) = DAT_03214ce8;
      return 2;
    }
    lVar7 = (**(code **)(*plVar4 + 0x10))();
    FUN_00d25570(param_2);
    cVar2 = FUN_00d55870();
    uVar1 = *(ushort *)(lVar7 + 0x88) & 0x1f;
    if ((uVar1 != 0x1f) && (*(ushort *)(lVar7 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)) {
      return 2;
    }
    iVar6 = *(int *)(param_1 + 0x28);
    if (iVar6 == 1) {
      cVar3 = FUN_00d55870(lVar7);
      if (cVar3 != cVar2) {
        uVar5 = FUN_00d25570(param_2);
        FUN_00d24960(param_2,uVar5,lVar7,param_2 + 0x1878);
        *(long *)(param_2 + 0x1420) = param_2 + 0x1878;
        return 1;
      }
      iVar6 = *(int *)(param_1 + 0x28);
    }
    if ((iVar6 == 0) && (cVar3 = FUN_00d55870(lVar7), cVar3 == cVar2)) {
      uVar5 = FUN_00d25570(param_2);
      FUN_00d24960(param_2,uVar5,lVar7,param_2 + 0x1878);
      *(long *)(param_2 + 0x1428) = param_2 + 0x1878;
      return 1;
    }
  }
switchD_00d0f400_caseD_3:
  return 2;
}




long FUN_00d0f548(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 2:
    lVar1 = 0x19d0;
    break;
  default:
    goto switchD_00d0f56c_caseD_3;
  case 4:
    lVar1 = 0x1b10;
    break;
  case 5:
    lVar1 = 0x1b50;
    break;
  case 6:
    lVar1 = 0x1b90;
  }
  lVar1 = param_2 + lVar1;
switchD_00d0f56c_caseD_3:
  return lVar1;
}




void FUN_00d0f594(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return;
}




void FUN_00d0f59c(void)

{
  return;
}




void FUN_00d0f5a0(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  *param_1 = &PTR_FUN_02812c98;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d0f5e0(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x24) = 1;
  *(undefined4 *)(param_3 + 0x28) = param_1;
  *(undefined4 *)(param_3 + 0x2c) = param_2;
  return;
}




void FUN_00d0f5f0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = 2;
  *(undefined4 *)(param_2 + 0x38) = param_1;
  return;
}




void FUN_00d0f600(undefined4 param_1,long param_2,undefined8 param_3)

{
  *(undefined8 *)(param_2 + 0x30) = param_3;
  *(undefined4 *)(param_2 + 0x24) = 3;
  *(undefined4 *)(param_2 + 0x38) = param_1;
  return;
}




void FUN_00d0f614(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}




undefined8 FUN_00d0f61c(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar3 = FUN_00d25570(param_2);
  iVar2 = *(int *)(param_1 + 0x24);
  fVar10 = 0.0;
  if (iVar2 == 3) {
    uVar1 = FUN_00d588cc(lVar3,*(undefined8 *)(param_1 + 0x30));
    iVar2 = FUN_00d5c238(lVar3,uVar1);
    if (iVar2 == 0) {
      return 2;
    }
    uVar1 = FUN_00d588cc(lVar3,*(undefined8 *)(param_1 + 0x30));
    fVar11 = (float)FUN_00d59f98(lVar3,uVar1);
    fVar11 = fVar11 + *(float *)(param_1 + 0x38);
  }
  else if (iVar2 == 2) {
    lVar7 = *(long *)(lVar3 + 0x40);
    fVar9 = (*(float *)(lVar7 + 0x1e0) + 1.0) *
            (*(float *)(lVar7 + 0x78) + *(float *)(lVar7 + 300) * (*(float *)(lVar7 + 0x294) + 1.0))
    ;
    if (DAT_031500e0 <= fVar9) {
      fVar9 = DAT_031500e0;
    }
    fVar11 = DAT_03150020;
    if (DAT_03150020 <= fVar9) {
      fVar11 = fVar9;
    }
    fVar11 = *(float *)(param_1 + 0x38) + fVar11;
  }
  else {
    fVar11 = 0.0;
    fVar10 = 0.0;
    if (iVar2 == 1) {
      fVar10 = *(float *)(param_1 + 0x28);
      fVar11 = *(float *)(param_1 + 0x2c);
    }
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 - 1U < 2) {
    if (*(int *)(param_2 + 0x270) != 0) {
      uVar8 = 0;
      plVar6 = (long *)(param_2 + 0x70);
      do {
        plVar4 = (long *)*plVar6;
        if (plVar4 == (long *)0x0) {
          uVar5 = 0;
        }
        else if ((int)plVar6[1] == (int)plVar4[1]) {
          uVar5 = (**(code **)(*plVar4 + 0x10))();
        }
        else {
          *plVar6 = 0;
          uVar5 = 0;
          *(undefined4 *)(plVar6 + 1) = DAT_03214ce8;
        }
        fVar9 = (float)FUN_00d9df64(lVar3,uVar5);
        if ((fVar9 <= fVar11) && (fVar10 <= fVar9)) {
          *(long **)(param_2 + 0x1420) = plVar6;
          return 1;
        }
        uVar8 = uVar8 + 1;
        plVar6 = plVar6 + 8;
      } while (uVar8 < *(uint *)(param_2 + 0x270));
      iVar2 = *(int *)(param_1 + 0x3c);
    }
    if ((iVar2 == 1) && (*(int *)(param_2 + 0x680) != 0)) {
      uVar8 = 0;
      plVar6 = (long *)(param_2 + 0x380);
      do {
        plVar4 = (long *)*plVar6;
        if (plVar4 == (long *)0x0) {
          uVar5 = 0;
        }
        else if ((int)plVar6[1] == (int)plVar4[1]) {
          uVar5 = (**(code **)(*plVar4 + 0x10))();
        }
        else {
          *plVar6 = 0;
          uVar5 = 0;
          *(undefined4 *)(plVar6 + 1) = DAT_03214ce8;
        }
        fVar9 = (float)FUN_00d9df64(lVar3,uVar5);
        if ((fVar9 <= fVar11) && (fVar10 <= fVar9)) {
          *(long **)(param_2 + 0x1420) = plVar6;
          return 1;
        }
        uVar8 = uVar8 + 1;
        plVar6 = plVar6 + 8;
      } while (uVar8 < *(uint *)(param_2 + 0x680));
    }
  }
  else if (iVar2 == 3) {
    plVar4 = *(long **)(param_2 + 0x1420);
    plVar6 = (long *)*plVar4;
    if (plVar6 == (long *)0x0) {
      uVar5 = 0;
    }
    else if ((int)plVar4[1] == (int)plVar6[1]) {
      uVar5 = (**(code **)(*plVar6 + 0x10))();
    }
    else {
      *plVar4 = 0;
      uVar5 = 0;
      *(undefined4 *)(plVar4 + 1) = DAT_03214ce8;
    }
    fVar9 = (float)FUN_00d9df64(lVar3,uVar5);
    if ((fVar9 <= fVar11) && (fVar10 <= fVar9)) {
      return 1;
    }
  }
  return 2;
}




void FUN_00d0f8e0(void)

{
  return;
}




void FUN_00d0f8e4(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  *param_1 = &PTR_FUN_02812d20;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d0f928(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x24) = 1;
  *(undefined4 *)(param_3 + 0x28) = param_1;
  *(undefined4 *)(param_3 + 0x2c) = param_2;
  return;
}




void FUN_00d0f938(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = 2;
  *(undefined4 *)(param_2 + 0x38) = param_1;
  return;
}




void FUN_00d0f948(undefined4 param_1,long param_2,undefined8 param_3)

{
  *(undefined8 *)(param_2 + 0x30) = param_3;
  *(undefined4 *)(param_2 + 0x24) = 3;
  *(undefined4 *)(param_2 + 0x38) = param_1;
  return;
}




void FUN_00d0f95c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}




void FUN_00d0f964(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x3c) = param_2 & 1;
  return;
}




undefined4 FUN_00d0f970(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  bool bVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar2 = FUN_00d25570(param_2);
  iVar6 = *(int *)(param_1 + 0x24);
  fVar11 = 0.0;
  if (iVar6 == 3) {
    uVar1 = FUN_00d588cc(lVar2,*(undefined8 *)(param_1 + 0x30));
    fVar12 = (float)FUN_00d59f98(lVar2,uVar1);
    fVar12 = fVar12 + *(float *)(param_1 + 0x38);
  }
  else if (iVar6 == 2) {
    lVar5 = *(long *)(lVar2 + 0x40);
    fVar10 = (*(float *)(lVar5 + 0x1e0) + 1.0) *
             (*(float *)(lVar5 + 0x78) + *(float *)(lVar5 + 300) * (*(float *)(lVar5 + 0x294) + 1.0)
             );
    if (DAT_031500e0 <= fVar10) {
      fVar10 = DAT_031500e0;
    }
    fVar12 = DAT_03150020;
    if (DAT_03150020 <= fVar10) {
      fVar12 = fVar10;
    }
    fVar12 = *(float *)(param_1 + 0x38) + fVar12;
  }
  else {
    fVar12 = 0.0;
    fVar11 = 0.0;
    if (iVar6 == 1) {
      fVar11 = *(float *)(param_1 + 0x28);
      fVar12 = *(float *)(param_1 + 0x2c);
    }
  }
  iVar6 = *(int *)(param_1 + 0x40);
  if (iVar6 == 3) {
    plVar7 = *(long **)(param_2 + 0x1428);
    plVar3 = (long *)*plVar7;
    if (plVar3 == (long *)0x0) {
      uVar4 = 0;
    }
    else if ((int)plVar7[1] == (int)plVar3[1]) {
      uVar4 = (**(code **)(*plVar3 + 0x10))();
    }
    else {
      *plVar7 = 0;
      uVar4 = 0;
      *(undefined4 *)(plVar7 + 1) = DAT_03214ce8;
    }
    fVar10 = (float)FUN_00d9df64(lVar2,uVar4);
    if ((fVar10 <= fVar12) && (fVar11 <= fVar10)) {
      return 1;
    }
  }
  else if (*(char *)(param_1 + 0x3c) == '\0') {
    if (iVar6 - 1U < 2) {
      if (*(int *)(param_2 + 0x378) != 0) {
        uVar9 = 0;
        plVar3 = (long *)(param_2 + 0x278);
        do {
          plVar7 = (long *)*plVar3;
          if (plVar7 == (long *)0x0) {
            uVar4 = 0;
          }
          else if ((int)plVar3[1] == (int)plVar7[1]) {
            uVar4 = (**(code **)(*plVar7 + 0x10))();
          }
          else {
            *plVar3 = 0;
            uVar4 = 0;
            *(undefined4 *)(plVar3 + 1) = DAT_03214ce8;
          }
          fVar10 = (float)FUN_00d9df64(lVar2,uVar4);
          if ((fVar10 <= fVar12) && (fVar11 <= fVar10)) {
            *(long **)(param_2 + 0x1428) = plVar3;
            return 1;
          }
          uVar9 = uVar9 + 1;
          plVar3 = plVar3 + 8;
        } while (uVar9 < *(uint *)(param_2 + 0x378));
        iVar6 = *(int *)(param_1 + 0x40);
      }
      if ((iVar6 == 1) && (*(int *)(param_2 + 0x888) != 0)) {
        uVar9 = 0;
        plVar3 = (long *)(param_2 + 0x688);
        do {
          plVar7 = (long *)*plVar3;
          if (plVar7 == (long *)0x0) {
            uVar4 = 0;
          }
          else if ((int)plVar3[1] == (int)plVar7[1]) {
            uVar4 = (**(code **)(*plVar7 + 0x10))();
          }
          else {
            *plVar3 = 0;
            uVar4 = 0;
            *(undefined4 *)(plVar3 + 1) = DAT_03214ce8;
          }
          fVar10 = (float)FUN_00d9df64(lVar2,uVar4);
          if ((fVar10 <= fVar12) && (fVar11 <= fVar10)) {
            *(long **)(param_2 + 0x1428) = plVar3;
            return 1;
          }
          uVar9 = uVar9 + 1;
          plVar3 = plVar3 + 8;
        } while (uVar9 < *(uint *)(param_2 + 0x888));
      }
    }
  }
  else if ((iVar6 - 1U < 2) && (*(int *)(param_2 + 0x1330) != 0)) {
    uVar9 = 0;
    bVar8 = false;
    plVar3 = (long *)(param_2 + 0x1230);
    do {
      plVar7 = (long *)*plVar3;
      if (plVar7 == (long *)0x0) {
        lVar5 = 0;
      }
      else if ((int)plVar3[1] == (int)plVar7[1]) {
        lVar5 = (**(code **)(*plVar7 + 0x10))();
      }
      else {
        *plVar3 = 0;
        lVar5 = 0;
        *(undefined4 *)(plVar3 + 1) = DAT_03214ce8;
      }
      if ((((*(int *)(param_1 + 0x40) != 2) || ((*(byte *)(lVar5 + 0x2f4) & 1) != 0)) &&
          (fVar10 = (float)FUN_00d9df64(lVar2,lVar5), fVar10 <= fVar12)) && (fVar11 <= fVar10)) {
        *(long **)(param_2 + 0x1428) = plVar3;
        bVar8 = true;
        if ((*(byte *)(lVar5 + 0x2f4) & 1) != 0) {
          return 1;
        }
      }
      uVar9 = uVar9 + 1;
      plVar3 = plVar3 + 8;
    } while (uVar9 < *(uint *)(param_2 + 0x1330));
    if (bVar8) {
      return 1;
    }
  }
  return 2;
}




void FUN_00d0fcf4(void)

{
  return;
}




void FUN_00d0fcf8(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02812da8;
  *(undefined8 *)((long)param_1 + 0x24) = 0x4100000000000000;
  return;
}




void FUN_00d0fd34(undefined4 param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  *(undefined4 *)(param_3 + 0x24) = param_2;
  *(undefined4 *)(param_3 + 0x28) = param_1;
  *(undefined4 *)(param_3 + 0x2c) = param_4;
  return;
}




void FUN_00d0fd40(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(param_2 + 0x1678) == 0) || (*(long *)(param_2 + 0x1680) == 0)) {
    uVar4 = 2;
    goto LAB_00d0fdd8;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 2) {
    local_30 = *(undefined4 *)(param_2 + 0x1438);
    local_38 = *(undefined8 *)(param_2 + 0x1430);
  }
  else {
    if (iVar1 == 1) {
      lVar5 = *(long *)(param_2 + 0x1428);
    }
    else {
      if (iVar1 != 0) goto LAB_00d0fdbc;
      lVar5 = *(long *)(param_2 + 0x1420);
    }
    local_30 = *(undefined4 *)(lVar5 + 0x18);
    local_38 = *(undefined8 *)(lVar5 + 0x10);
  }
LAB_00d0fdbc:
  uVar3 = FUN_00da2a10(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x24),
                       *(long *)(param_2 + 0x1678),*(long *)(param_2 + 0x1680),&local_38);
  uVar4 = 1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 2;
  }
LAB_00d0fdd8:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}




void FUN_00d0fdfc(void)

{
  return;
}




void FUN_00d0fe00(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_00d25570(param_2);
  plVar10 = *(long **)(param_2 + 0x1420);
  plVar9 = (long *)*plVar10;
  if (plVar9 == (long *)0x0) {
    lVar6 = 0;
  }
  else if ((int)plVar10[1] == (int)plVar9[1]) {
    lVar6 = (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  else {
    *plVar10 = 0;
    lVar6 = 0;
    *(undefined4 *)(plVar10 + 1) = DAT_03214ce8;
  }
  uVar1 = *(ushort *)(lVar6 + 0x88) & 0x1f;
  if ((uVar1 == 0x1f) || (1 < *(ushort *)(lVar6 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
    FUN_00d55794(uVar5,auStack_58,0);
    FUN_00d55794(lVar6,auStack_68,0);
    fVar11 = 0.0;
    if ((*(byte *)(lVar6 + 0x2f5) >> 4 & 1) != 0) {
      fVar11 = *(float *)(*(long *)(lVar6 + 0x38) + 100);
      fVar11 = (*(float *)(*(long *)(lVar6 + 0x38) + 0x68) * (fVar11 + *(float *)(lVar6 + 0x2e8))) /
               fVar11;
    }
    uVar13 = 0xbf000000;
    fVar11 = fVar11 + *(float *)(param_2 + 0x4c) + -0.5;
    uVar12 = 0x3f800000;
    if (fVar11 <= 1.0) {
      fVar11 = 1.0;
    }
    lVar7 = FUN_00d25570(param_2);
    uVar2 = *(undefined4 *)(lVar7 + 0x260);
    uVar4 = FUN_00da2eb4(uVar5);
    local_78 = FUN_00d4c928(fVar11,&DAT_02bebbe8,auStack_58,auStack_68,uVar2,uVar4);
    uStack_74 = uVar12;
    local_70 = uVar13;
    uVar8 = FUN_00e0b8e8(param_2,&local_78,*(uint *)(lVar6 + 0x2f4) & 1);
    uVar12 = 1;
    if ((uVar8 & 1) != 0) {
      uVar12 = 2;
    }
  }
  else {
    uVar12 = 2;
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
  }
  return;
}




void FUN_00d0ffa8(void)

{
  return;
}




void FUN_00d0ffac(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *param_1 = &PTR_FUN_02812e30;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d0ffe4(long param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float local_98;
  float fStack_94;
  float local_90;
  float local_88;
  float fStack_84;
  float local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)((long)param_2 + 0x54) >> 3 & 1) == 0) {
    plVar3 = (long *)*param_2;
    uVar4 = 0;
    if (plVar3 != (long *)0x0) {
      if ((int)param_2[1] == (int)plVar3[1]) {
        uVar4 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        *param_2 = 0;
        uVar4 = 0;
        *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
      }
    }
    FUN_00d55794(uVar4,&local_88,0);
    if ((int)param_2[0x1a3] == 0) {
      uVar8 = 2;
      bVar2 = false;
    }
    else {
      uVar9 = 0;
      fVar10 = 3.4028235e+38;
      bVar2 = false;
      do {
        plVar5 = (long *)param_2[uVar9 * 8 + 0x143];
        plVar3 = param_2 + uVar9 * 8 + 0x143;
        uVar4 = 0;
        if (plVar5 != (long *)0x0) {
          if ((int)param_2[uVar9 * 8 + 0x144] == (int)plVar5[1]) {
            uVar4 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            *plVar3 = 0;
            uVar4 = 0;
            *(undefined4 *)(param_2 + uVar9 * 8 + 0x144) = DAT_03214ce8;
          }
        }
        FUN_00d55794(uVar4,&local_98,0);
        fVar11 = (local_88 - local_98) * (local_88 - local_98) +
                 (fStack_84 - fStack_94) * (fStack_84 - fStack_94) +
                 (local_80 - local_90) * (local_80 - local_90);
        if ((fVar11 < fVar10) &&
           (uVar6 = FUN_00e0b7ac(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                                 plVar3,param_2,*(undefined1 *)(param_1 + 0x2c)), (uVar6 & 1) != 0))
        {
          lVar7 = (**(code **)(*(long *)*plVar3 + 0x10))();
          lVar7 = *(long *)(lVar7 + 0x18);
          while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02c7bf48))) {
            lVar7 = *(long *)(lVar7 + 0x20);
          }
          uVar6 = FUN_00d6bbac(lVar7,DAT_0315cf6c,0);
          if ((uVar6 & 1) == 0) {
            bVar2 = true;
            param_2[0x284] = (long)plVar3;
            fVar10 = fVar11;
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_2 + 0x1a3));
      uVar8 = 1;
      if (!bVar2) {
        uVar8 = 2;
      }
    }
    *(bool *)(param_1 + 0x2c) = bVar2;
  }
  else {
    uVar8 = 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

