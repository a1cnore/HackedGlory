// functions/00a8e — 33 functions
#include "libGameKindred.h"




void FUN_00a8e85c(uint *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar9 = param_1[4];
  uVar8 = *param_1;
  uVar1 = *param_2;
  param_1[4] = uVar9 + 1;
  if (uVar8 >> 1 < uVar9 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar8 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar9 = *param_1;
    uVar10 = uVar9 - 1;
    uVar8 = (uint)local_58;
    if ((int)uVar10 < 0) {
      pvVar6 = *(void **)(param_1 + 2);
    }
    else {
      pvVar6 = *(void **)(param_1 + 2);
      do {
        iVar5 = *(int *)((long)pvVar6 + (ulong)uVar10 * 8 + 4);
        if (iVar5 != -1) {
          uVar9 = *(uint *)((long)pvVar6 + (ulong)uVar10 * 8);
          uVar3 = 0;
          if ((uint)local_58 != 0) {
            uVar3 = uVar9 / (uint)local_58;
          }
          uVar11 = (ulong)(uVar9 - uVar3 * (uint)local_58);
          piVar12 = (int *)((long)local_50 + uVar11 * 8 + 4);
          iVar2 = *piVar12;
          while (iVar2 != -1) {
            uVar3 = (uint)local_58;
            if (0 < (int)(uint)uVar11) {
              uVar3 = (uint)uVar11;
            }
            uVar11 = (ulong)(uVar3 - 1);
            piVar12 = (int *)((long)local_50 + uVar11 * 8 + 4);
            iVar2 = *piVar12;
          }
          *(uint *)((long)local_50 + uVar11 * 8) = uVar9;
          *piVar12 = iVar5;
        }
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
      uVar9 = *param_1;
    }
    uVar10 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar10,uVar9);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar6;
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar8 = *param_1;
    }
  }
  lVar7 = *(long *)(param_1 + 2);
  uVar9 = 0;
  if (uVar8 != 0) {
    uVar9 = uVar1 / uVar8;
  }
  uVar11 = (ulong)(uVar1 - uVar9 * uVar8);
  piVar12 = (int *)(lVar7 + uVar11 * 8 + 4);
  iVar5 = *piVar12;
  while (iVar5 != -1) {
    uVar9 = uVar8;
    if (0 < (int)(uint)uVar11) {
      uVar9 = (uint)uVar11;
    }
    uVar11 = (ulong)(uVar9 - 1);
    piVar12 = (int *)(lVar7 + uVar11 * 8 + 4);
    iVar5 = *piVar12;
  }
  *(uint *)(lVar7 + uVar11 * 8) = uVar1;
  iVar5 = FUN_009de7a0(param_1,param_3);
  *piVar12 = iVar5;
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a8ea14(void)

{
  FUN_00a89b28();
  FUN_00a8a200();
  FUN_00a8ea34(&DAT_031336d0);
  return;
}




void FUN_00a8ea34(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 4) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  param_1[4] = 0;
  if (*(long *)(param_1 + 8) != 0) {
    param_1[6] = 0;
  }
  param_1[10] = 0xffffffff;
  return;
}




void FUN_00a8eaa0(long param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = DAT_031336c0;
  if (0x12 < param_2) {
    if (DAT_031336c0 == 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(DAT_031336c0 + 0xe624);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar1 + 0x54654);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar1 + 0x588a0);
      uVar2 = *(undefined4 *)(lVar1 + 0x58894);
    }
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    lVar1 = DAT_031336c8;
    if (DAT_031336c8 != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(DAT_031336c8 + 0xf024);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar1 + 0x41054);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar1 + 0x47ea0);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(lVar1 + 0x47e94);
      return;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}




void FUN_00a8eb54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cfe80;
  DAT_03133700 = 0;
  return;
}




void FUN_00a8eb70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cfea0;
  DAT_03133708 = 0;
  return;
}




void FUN_00a8eb8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cfec0;
  DAT_03133710 = 0;
  return;
}




void FUN_00a8eba8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cfe80;
  DAT_03133700 = 0;
  operator_delete(param_1);
  return;
}




void FUN_00a8ebc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cfea0;
  DAT_03133708 = 0;
  operator_delete(param_1);
  return;
}




void FUN_00a8ebe0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cfec0;
  DAT_03133710 = 0;
  operator_delete(param_1);
  return;
}




void FUN_00a8ebfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cfee0;
  DAT_03133718 = 0;
  return;
}




void FUN_00a8ec18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cff00;
  DAT_03133720 = 0;
  return;
}




void FUN_00a8ec34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cff20;
  DAT_03133728 = 0;
  return;
}




void FUN_00a8ec50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cfee0;
  DAT_03133718 = 0;
  operator_delete(param_1);
  return;
}




void FUN_00a8ec6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cff00;
  DAT_03133720 = 0;
  operator_delete(param_1);
  return;
}




void FUN_00a8ec88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cff20;
  DAT_03133728 = 0;
  operator_delete(param_1);
  return;
}




void FUN_00a8eca8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_027cff88;
  plVar2 = param_1 + 1;
  lVar1 = *plVar2;
  while (lVar1 != 0) {
    FUN_00a8ed5c(plVar2,lVar1 + -8);
    FUN_00a89d60(DAT_031336c0 + 0xe630,lVar1 + -8);
    lVar1 = *plVar2;
  }
  return;
}




void FUN_00a8ed14(void *param_1)

{
  FUN_00a8eca8();
  operator_delete(param_1);
  return;
}




void FUN_00a8ed38(void *param_1)

{
  FUN_00a8eca8();
  operator_delete(param_1);
  return;
}




void FUN_00a8ed5c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 8);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00a8edb8(void)

{
  return;
}




void FUN_00a8edc0(void)

{
  return;
}




void FUN_00a8edc4(void)

{
  return;
}




void FUN_00a8edcc(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}




void FUN_00a8edd8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00a8ab18(DAT_031336c0 + 0xe630);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_00a8ee0c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a8ee14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_00a8ee18(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a8ee20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




undefined8 FUN_00a8ee24(long param_1,long param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_2 + 8);
  fVar3 = fVar1 - *(float *)(param_3 + 0x18);
  if (fVar2 < fVar3) {
    *(float *)(param_3 + 0x18) = *(float *)(param_3 + 0x18) + fVar2;
    *(undefined4 *)(param_2 + 8) = 0;
    return 1;
  }
  *(float *)(param_2 + 8) = fVar2 - fVar3;
  *(float *)(param_3 + 0x18) = fVar1;
  return 0;
}




void FUN_00a8ee64(void)

{
  return;
}




void FUN_00a8ee6c(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}




undefined8 FUN_00a8ee78(void)

{
  return 1;
}




void FUN_00a8ee84(long param_1,long *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  lVar4 = *param_2;
  uVar2 = FUN_00e6a474(uVar5);
  uVar2 = FUN_0091ed5c(uVar5,uVar2,0x12345678);
  pbVar3 = (byte *)(**(code **)(*(long *)(lVar4 + 0x68) + 0x10))((long *)(lVar4 + 0x68),uVar2);
  bVar1 = FUN_00a8ef18(param_1 + 0x18,param_2,0);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    bVar1 = bVar1 | *pbVar3 != 0;
  }
  *pbVar3 = bVar1 & 1;
  return;
}




ulong FUN_00a8ef18(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar3 = 0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    goto switchD_00a8ef4c_caseD_0;
  case 1:
    cVar1 = *param_1;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00a8ef78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)param_1)();
    return uVar3;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    FUN_00cb6990(param_2);
                    /* WARNING: Could not recover jumptable at 0x00a8ef9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)();
    return uVar3;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x00a8efb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)param_1)(param_2);
    return uVar3;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00a8efd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)param_1)(param_2,param_3);
    return uVar3;
  case 6:
    plVar4 = (long *)FUN_00cb6a58(param_2);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    uVar6 = *(undefined8 *)param_1;
    uVar2 = FUN_00e6a474(uVar6);
    uVar2 = FUN_0091ed5c(uVar6,uVar2,0x12345678);
    pcVar5 = (char *)(**(code **)(*plVar4 + 0x18))(plVar4,uVar2);
    cVar1 = *pcVar5;
    break;
  default:
    FUN_00e6a2fc(0);
    uVar3 = 0;
    goto switchD_00a8ef4c_caseD_0;
  }
  uVar3 = (ulong)(cVar1 != '\0');
switchD_00a8ef4c_caseD_0:
  return uVar3;
}

