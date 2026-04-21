// functions/00944 — 15 functions
#include "libGameKindred.h"




void FUN_0094476c(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = (long *)*param_1;
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if ((int)param_1[1] == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *param_1 = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
          }
        }
        FUN_019888f4(uVar3);
        return;
      }
    }
    else {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00944810(long param_1,uint param_2,byte param_3)

{
  *(byte *)(param_1 + (ulong)param_2 * 2 + (ulong)param_2 + 0x310a) = param_3 & 1;
  return;
}




void FUN_00944830(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar6 = FUN_00ceab64();
  if ((uVar6 & 1) != 0) goto LAB_00944af0;
  FUN_00cedce4();
  uStack_70 = FUN_00d9e390();
  lVar13 = param_1[0x620];
  if (lVar13 != 0) {
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      if ((int)param_1[3] == (int)plVar7[1]) {
        lVar8 = (**(code **)(*plVar7 + 0x10))();
        lVar13 = param_1[0x620];
        if (lVar8 != 0) {
          if ((*(int *)(lVar13 + 0x2d8) == 2) ||
             (uVar6 = FUN_00944b44(lVar13,&uStack_70), (uVar6 & 1) != 0)) goto LAB_00944af0;
          plVar7 = (long *)param_1[2];
          param_1[0x620] = 0;
          uVar9 = 0;
          if (plVar7 != (long *)0x0) {
            if ((int)param_1[3] == (int)plVar7[1]) {
              uVar9 = (**(code **)(*plVar7 + 0x10))();
            }
            else {
              param_1[2] = 0;
              uVar9 = 0;
              *(undefined4 *)(param_1 + 3) = DAT_03214ce8;
            }
          }
          FUN_019888f4(uVar9);
          goto LAB_00944910;
        }
      }
      else {
        param_1[2] = 0;
        *(undefined4 *)(param_1 + 3) = DAT_03214ce8;
      }
    }
    *(undefined1 *)(lVar13 + 0x2dc) = 1;
    param_1[0x620] = 0;
  }
LAB_00944910:
  lVar13 = 0;
  do {
    if ((*(char *)((long)param_1 + lVar13 * 3 + 0x310a) != '\0') &&
       (pbVar1 = (byte *)((long)param_1 + lVar13 * 3 + 0x3109), *pbVar1 != 0)) {
      pbVar2 = (byte *)((long)param_1 + lVar13 * 3 + 0x3108);
      uVar6 = (ulong)*pbVar2;
      plVar7 = param_1 + uVar6 * 0x5c + 0x5e;
      do {
        uVar10 = FUN_00944b44(plVar7 + -0x5a,&uStack_70);
        if ((uVar10 & 1) != 0) {
          plVar11 = (long *)*param_1;
          param_1[0x620] = (long)(plVar7 + -0x5a);
          uVar9 = 0;
          if (plVar11 != (long *)0x0) {
            if ((int)param_1[1] == (int)plVar11[1]) {
              uVar9 = (**(code **)(*plVar11 + 0x10))();
            }
            else {
              *param_1 = 0;
              uVar9 = 0;
              *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
            }
          }
          lVar8 = FUN_01985d44(uVar9,DAT_02c7eb40);
          uVar5 = DAT_03214ce8;
          if (lVar8 == 0) {
            param_1[2] = 0;
          }
          else {
            iVar3 = *(int *)(lVar8 + 0x30);
            param_1[2] = lVar8 + 0x28;
            *(int *)(param_1 + 3) = iVar3;
            if (iVar3 == *(int *)(lVar8 + 0x30)) {
              lVar8 = (**(code **)(*(long *)(lVar8 + 0x28) + 0x10))();
              if (lVar8 != 0) {
                plVar11 = (long *)param_1[2];
                if (plVar11 == (long *)0x0) {
                  uVar9 = 0;
                }
                else if ((int)param_1[3] == (int)plVar11[1]) {
                  uVar9 = (**(code **)(*plVar11 + 0x10))();
                }
                else {
                  param_1[2] = 0;
                  uVar9 = 0;
                  *(undefined4 *)(param_1 + 3) = DAT_03214ce8;
                }
                plVar11 = (long *)*param_1;
                if (plVar11 == (long *)0x0) {
                  uVar12 = 0;
                }
                else if ((int)param_1[1] == (int)plVar11[1]) {
                  uVar12 = (**(code **)(*plVar11 + 0x10))();
                }
                else {
                  *param_1 = 0;
                  uVar12 = 0;
                  *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
                }
                FUN_009cba7c(uVar9,uVar12,(int)*plVar7);
              }
              break;
            }
            param_1[2] = 0;
          }
          *(undefined4 *)(param_1 + 3) = uVar5;
          break;
        }
        uVar6 = uVar6 + 1;
        plVar7 = plVar7 + 0x5c;
      } while (uVar6 < (ulong)*pbVar1 + (ulong)*pbVar2);
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 2);
LAB_00944af0:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00944b44(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  
  if (((int)param_1[0x5b] == 0) || (uVar1 = 0, *(char *)((long)param_1 + 0x2dc) == '\0')) {
    if (*(int *)((long)param_1 + 0x2d4) != 0) {
      uVar4 = 0;
      plVar3 = param_1;
      do {
        uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        plVar3 = plVar3 + 0xf;
      } while (uVar4 < *(uint *)((long)param_1 + 0x2d4));
    }
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_00944bc8(int *param_1)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  
  lVar1 = DAT_02c7eb28;
  if (((*param_1 == 0x19) || (*param_1 == 0x22)) && (DAT_02c7eb28 != 0)) {
    uVar3 = FUN_009f1f70(0x19);
    bVar2 = 0;
    if ((uVar3 & 1) != 0) {
      FUN_00ceace8();
      bVar2 = FUN_00ceae88();
      bVar2 = ~bVar2 & 1;
    }
    *(byte *)(lVar1 + 0x310a) = bVar2;
  }
  return;
}




void FUN_00944c28(void)

{
  long lVar1;
  void *pvVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  code *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_009f1f64();
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = FUN_00944bc8;
  FUN_009104f8(uVar5,&local_58);
  pvVar6 = operator_new(0x3110);
  FUN_00943cf4();
  DAT_02c7eb28 = pvVar6;
  uVar7 = FUN_009f1f70(0x19);
  bVar3 = 0;
  if ((uVar7 & 1) != 0) {
    FUN_00ceace8();
    bVar3 = FUN_00ceae88();
    bVar3 = ~bVar3 & 1;
  }
  pvVar2 = DAT_02c7eb28;
  *(byte *)((long)pvVar6 + 0x310a) = bVar3;
  iVar4 = FUN_00ceacf4();
  *(bool *)((long)pvVar2 + 0x310d) = iVar4 == 0x35;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00944ce8(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  uVar3 = FUN_009f1f50();
  if ((uVar3 & 1) != 0) {
    puVar4 = (uint *)FUN_009f1f64();
    lVar6 = (ulong)*puVar4 << 5;
    puVar2 = *(undefined8 **)(puVar4 + 2);
    do {
      puVar5 = puVar2;
      if (lVar6 == 0) goto LAB_00944d30;
      lVar6 = lVar6 + -0x20;
      puVar2 = puVar5 + 4;
    } while ((code *)*puVar5 != FUN_00944bc8);
    FUN_0091064c(puVar4,puVar5);
  }
LAB_00944d30:
  pvVar1 = DAT_02c7eb28;
  if (DAT_02c7eb28 != (void *)0x0) {
    FUN_0094476c(DAT_02c7eb28);
    operator_delete(pvVar1);
    DAT_02c7eb28 = (void *)0x0;
  }
  return;
}




void FUN_00944d5c(void)

{
  if (DAT_02c7eb28 != 0) {
    FUN_00944830();
    return;
  }
  return;
}




undefined8 FUN_00944d74(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  
  uVar3 = 0;
  plVar4 = (long *)(param_1 + 8);
  while( true ) {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    if ((uVar2 & 1) == 0) break;
    uVar3 = uVar3 + 1;
    plVar4 = plVar4 + 7;
    if (1 < uVar3) {
      return 1;
    }
  }
  return 0;
}




undefined8 * FUN_00944dd8(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined2 *)((long)puVar1 + 0xc) = 1;
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_027bae70;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




bool FUN_00944e3c(long param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    bVar1 = FUN_00a7eccc(*(undefined4 *)(param_1 + 8));
  }
  else {
    bVar1 = FUN_00a7ec5c();
  }
  return (bVar1 & 1) != *(byte *)(param_1 + 0xd);
}




undefined8 * FUN_00944e80(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x18);
  do {
    if (*(long *)(puVar2 + -4) == 0) {
      puVar1 = (undefined8 *)(puVar2 + -2);
      *puVar1 = &PTR_FUN_027bae98;
      *puVar2 = 0;
      puVar2[2] = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined1 *)(puVar2 + 6) = 0;
      *(undefined8 **)(puVar2 + -4) = puVar1;
      return puVar1;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0xe;
  } while (uVar3 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




undefined8 FUN_00944ef0(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar2 = FUN_00d9ecdc(lVar1,*(undefined4 *)(param_1 + 0x1c));
    }
    else {
      uVar2 = FUN_00d9ee8c(lVar1);
    }
    uVar3 = FUN_00944f88(param_1 + 8,param_2,0);
    uVar2 = FUN_00d99988(uVar2,uVar3,param_1 + 8,*(undefined4 *)(param_1 + 0x18));
    return uVar2;
  }
  return 0;
}




undefined1  [16] FUN_00944f88(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  switch(param_1[2]) {
  case 0:
  case 6:
    break;
  case 1:
    uVar2 = (ulong)*param_1;
    uVar3 = 0;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00944fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar1 = (**(code **)param_1)();
    return auVar1;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    param_2 = (undefined8 *)*param_2;
    goto LAB_00945014;
  case 4:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
LAB_00945014:
                    /* WARNING: Could not recover jumptable at 0x0094501c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar1 = (*UNRECOVERED_JUMPTABLE)(param_2);
    return auVar1;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00945008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar1 = (**(code **)param_1)(param_2,param_3);
    return auVar1;
  default:
    FUN_00e6a2fc(0);
  }
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = uVar2;
  return auVar1;
}




void thunk_FUN_00944ce8(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  uVar3 = FUN_009f1f50();
  if ((uVar3 & 1) != 0) {
    puVar4 = (uint *)FUN_009f1f64();
    lVar6 = (ulong)*puVar4 << 5;
    puVar2 = *(undefined8 **)(puVar4 + 2);
    do {
      puVar5 = puVar2;
      if (lVar6 == 0) goto LAB_00944d30;
      lVar6 = lVar6 + -0x20;
      puVar2 = puVar5 + 4;
    } while ((code *)*puVar5 != FUN_00944bc8);
    FUN_0091064c(puVar4,puVar5);
  }
LAB_00944d30:
  pvVar1 = DAT_02c7eb28;
  if (DAT_02c7eb28 != (void *)0x0) {
    FUN_0094476c(DAT_02c7eb28);
    operator_delete(pvVar1);
    DAT_02c7eb28 = (void *)0x0;
  }
  return;
}

