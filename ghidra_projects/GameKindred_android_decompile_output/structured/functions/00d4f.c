// functions/00d4f — 17 functions
#include "libGameKindred.h"




void FUN_00d4f0e8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_019888e0();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  FUN_00cf2af0(param_1 + 0x48,param_1);
  uVar3 = DAT_03214ce8;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = uVar3;
  *(undefined4 *)(param_1 + 0x1e0) = DAT_03218f38;
  uVar4 = DAT_03218f30;
  lVar6 = *(long *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) & 0xffff3fff;
  *(undefined8 *)(param_1 + 0x1d8) = uVar4;
  puVar2 = PTR_s_onAbilityEnterReadyName_02bed5c0;
  lVar7 = param_1;
  if (*(char *)(lVar6 + 0x8b) != '\0') {
    do {
      lVar7 = *(long *)(lVar7 + 0x10);
    } while (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02c09220);
    for (lVar7 = *(long *)(lVar7 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
      if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_02c7bf48) {
        pcVar5 = *(char **)(param_1 + 0x200);
        if (pcVar5 == (char *)0x0) {
          if (lVar6 == 0) {
            pcVar5 = "<null>";
          }
          else {
            pcVar5 = *(char **)(lVar6 + 8);
          }
        }
        thunk_FUN_00d9ff34(local_40,pcVar5);
        FUN_00d6c758(lVar7,puVar2,local_40[0]);
        break;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4f224(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (((*(uint *)(param_1 + 0x238) & 0x38) == 8) &&
     (plVar1 = *(long **)(param_1 + 0x1c8), plVar1 != (long *)0x0)) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        FUN_00d55794(lVar2,param_1 + 0x1d8,0);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_03214ce8;
    }
  }
  FUN_00d51b94(param_1);
  return;
}




void FUN_00d4f2a0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x60) != '\0') {
    *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) | 0x10000;
  }
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x8a) != '\0') {
    for (lVar4 = *(long *)(param_1 + 0x10); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x10)) {
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_02c09220) {
        uVar5 = 0xffff0000;
        lVar2 = lVar4;
        goto LAB_00d4f350;
      }
    }
  }
LAB_00d4f3a8:
  *(undefined4 *)(param_1 + 0x23c) = 0;
  FUN_00d51dc8(param_1);
  FUN_00cf2ba4(param_1 + 0x48,param_1);
  FUN_00d51b94(param_1);
  return;
LAB_00d4f350:
  do {
    lVar3 = lVar2;
    if ((lVar3 != lVar4) &&
       (lVar2 = FUN_019865b4(*(undefined8 *)(lVar3 + 8),0x6d6a08d2), lVar2 != 0)) {
      (**(code **)(lVar2 + 8))(lVar3);
    }
    if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
      uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
      goto LAB_00d4f350;
    }
    if ((uVar5 & 0xffff) == 0) goto LAB_00d4f3a8;
    lVar2 = *(long *)(lVar3 + 0x20);
  } while (*(long *)(lVar3 + 0x20) != 0);
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((lVar3 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) goto LAB_00d4f3a8;
  uVar5 = uVar1 | uVar5 & 0xffff0000;
  while (lVar2 = *(long *)(lVar3 + 0x20), lVar2 == 0) {
    if ((uVar5 - 1 & 0xffff) == 0) goto LAB_00d4f3a8;
    lVar3 = *(long *)(lVar3 + 0x10);
    uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
    if (lVar3 == 0) goto LAB_00d4f3a8;
  }
  goto LAB_00d4f350;
}




void FUN_00d4f3d8(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  if ((*(char *)(*(long *)(param_1 + 0x38) + 0x8a) != '\0') &&
     ((((~*(ushort *)(param_1 + 0x68) & 0x1f) == 0 ||
       (uVar8 = *(ushort *)(param_1 + 0x68) >> 5 & 0x1f, uVar8 == 0x1f)) ||
      (*(short *)(param_1 + (ulong)uVar8 * 0x38 + 0x70) != 4)))) {
    for (lVar7 = *(long *)(param_1 + 0x10); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x10)) {
      if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_02c09220) {
        uVar8 = 0xffff0000;
        lVar2 = lVar7;
        goto LAB_00d4f4a8;
      }
    }
  }
LAB_00d4f500:
  plVar3 = *(long **)(param_1 + 0x208);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x210) == (int)plVar3[1]) {
      lVar7 = (**(code **)(*plVar3 + 0x10))();
      if (lVar7 == 0) goto LAB_00d4f594;
      plVar3 = *(long **)(param_1 + 0x208);
      uVar4 = 0;
      if (plVar3 != (long *)0x0) {
        if (*(int *)(param_1 + 0x210) == (int)plVar3[1]) {
          uVar4 = (**(code **)(*plVar3 + 0x10))();
        }
        else {
          *(undefined8 *)(param_1 + 0x208) = 0;
          uVar4 = 0;
          *(undefined4 *)(param_1 + 0x210) = DAT_03214ce8;
        }
      }
      FUN_01985ca8(uVar4);
      uVar5 = DAT_03214ce8;
      *(undefined8 *)(param_1 + 0x208) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x208) = 0;
      uVar5 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 0x210) = uVar5;
  }
LAB_00d4f594:
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_019888e0();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
LAB_00d4f4a8:
  do {
    lVar6 = lVar2;
    if ((lVar6 != lVar7) &&
       (lVar2 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0x76660925), lVar2 != 0)) {
      (**(code **)(lVar2 + 8))(lVar6);
    }
    if (((uVar8 & 0xffff) < uVar8 >> 0x10) && (lVar2 = *(long *)(lVar6 + 0x18), lVar2 != 0)) {
      uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
      goto LAB_00d4f4a8;
    }
    if ((uVar8 & 0xffff) == 0) goto LAB_00d4f500;
    lVar2 = *(long *)(lVar6 + 0x20);
  } while (*(long *)(lVar6 + 0x20) != 0);
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((lVar6 == 0) || (uVar1 = uVar8 - 1 & 0xffff, uVar1 == 0)) goto LAB_00d4f500;
  uVar8 = uVar1 | uVar8 & 0xffff0000;
  while (lVar2 = *(long *)(lVar6 + 0x20), lVar2 == 0) {
    if ((uVar8 - 1 & 0xffff) == 0) goto LAB_00d4f500;
    lVar6 = *(long *)(lVar6 + 0x10);
    uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
    if (lVar6 == 0) goto LAB_00d4f500;
  }
  goto LAB_00d4f4a8;
}




void FUN_00d4f5b8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d51b0c();
  lVar4 = param_1;
  if ((*(char *)(*(long *)(param_1 + 0x38) + 0x8a) == '\0') ||
     ((*(byte *)(param_1 + 0x239) >> 6 & 1) != 0)) {
    FUN_00d51be0(param_1);
  }
  else if (*(long *)(param_1 + 0x40) == 0) {
    FUN_00d4f8a8(param_1 + 0x68,1,0,0);
  }
  else {
    FUN_00d52920(*(long *)(param_1 + 0x40),param_1);
  }
  do {
    puVar2 = PTR_s_onAbilityEnterCancelledName_02bed5d0;
    lVar4 = *(long *)(lVar4 + 0x10);
  } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c09220);
  lVar4 = *(long *)(lVar4 + 0x18);
  do {
    if (lVar4 == 0) {
LAB_00d4f6c8:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_02c7bf48) {
      pcVar3 = *(char **)(param_1 + 0x200);
      if (pcVar3 == (char *)0x0) {
        if (*(long *)(param_1 + 0x38) == 0) {
          pcVar3 = "<null>";
        }
        else {
          pcVar3 = *(char **)(*(long *)(param_1 + 0x38) + 8);
        }
      }
      thunk_FUN_00d9ff34(local_40,pcVar3);
      FUN_00d6c758(lVar4,puVar2,local_40[0]);
      FUN_00d6c488(lVar4,param_1);
      goto LAB_00d4f6c8;
    }
    lVar4 = *(long *)(lVar4 + 0x20);
  } while( true );
}




void FUN_00d4f6f0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_019888e0();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  FUN_00cf2af0(param_1 + 0x48,param_1);
  uVar3 = DAT_03214ce8;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = uVar3;
  *(undefined4 *)(param_1 + 0x1e0) = DAT_03218f38;
  lVar5 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x1d8) = DAT_03218f30;
  puVar2 = PTR_s_onAbilityEnterCooldownName_02bed5c8;
  lVar6 = param_1;
  if (*(char *)(lVar5 + 0x8b) != '\0') {
    do {
      lVar6 = *(long *)(lVar6 + 0x10);
    } while (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c09220);
    for (lVar6 = *(long *)(lVar6 + 0x18); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x20)) {
      if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_02c7bf48) {
        pcVar4 = *(char **)(param_1 + 0x200);
        if (pcVar4 == (char *)0x0) {
          if (lVar5 == 0) {
            pcVar4 = "<null>";
          }
          else {
            pcVar4 = *(char **)(lVar5 + 8);
          }
        }
        thunk_FUN_00d9ff34(local_40,pcVar4);
        FUN_00d6c758(lVar6,puVar2,local_40[0]);
        break;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4f820(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar1 = *param_1 >> 10;
  if ((uVar1 & 0x1f) != 0) {
    uVar2 = 0;
    puVar4 = param_1 + 4;
    do {
      if (*puVar4 == param_2) goto LAB_00d4f854;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_00d4f854:
    if ((uVar1 & 0x1f) != 0) {
      uVar3 = 0;
      puVar4 = param_1 + 4;
      do {
        if (*puVar4 == param_3) {
          if (uVar2 == 0xffffffff) {
            return;
          }
          param_1[(long)(int)uVar2 * 0x1c + 5] =
               param_1[(long)(int)uVar2 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar3 & 0x1f));
          return;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 0x1c;
      } while (uVar3 < (uVar1 & 0x1f));
    }
  }
  return;
}




void FUN_00d4f8a8(ushort *param_1,uint param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong uVar7;
  
  uVar2 = *param_1;
  if ((uVar2 & 0x7c00) != 0) {
    uVar3 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_00d4f8f0;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 < (uVar2 >> 10 & 0x1f));
  }
  uVar3 = 0x1f;
LAB_00d4f8f0:
  uVar1 = uVar2 & 0x1f;
  uVar4 = (ulong)uVar1;
  if (uVar1 == 0x1f) {
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
  }
  else {
    if (uVar3 == uVar1) {
      return;
    }
    if ((1 << (ulong)(uVar3 & 0x1f) & (uint)param_1[uVar4 * 0x1c + 5]) == 0) {
      return;
    }
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar4 * 0x1c + 0x18);
    uVar5 = *(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) & 1;
    if (uVar5 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar5 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0xac) +
                                ((long)*(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) >> 1)));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar2 = *param_1;
    }
  }
  *param_1 = (ushort)uVar7 | uVar2 & 0xfc00 | 0x3e0;
  if ((int)uVar7 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar7 * 0x1c + 0x10);
    uVar4 = *(ulong *)(param_1 + uVar7 * 0x1c + 0x14) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0xac) +
                                ((long)*(ulong *)(param_1 + uVar7 * 0x1c + 0x14) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00d4f95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_00d4f9e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281da28;
  param_1[5] = &PTR_FUN_0281da58;
  FUN_00cf2d1c(param_1 + 9);
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d4fa28(long param_1)

{
  FUN_00d4f9e0(param_1 + -0x28);
  return;
}




void FUN_00d4fa30(void *param_1)

{
  FUN_00d4f9e0();
  operator_delete(param_1);
  return;
}




void FUN_00d4fa54(long param_1)

{
  FUN_00d4f9e0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00d4fa7c(long param_1)

{
  long lVar1;
  
  DAT_031a94c4 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031a94c4 + 1;
  lVar1 = param_1 + (ulong)DAT_031a94c4 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d527f0;
  *(code **)(lVar1 + 0xb8) = FUN_00d52814;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x4b0;
  *(uint *)(lVar1 + 0xa4) = DAT_031a94c4;
  *(undefined4 *)(lVar1 + 0xa8) = 0x240;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,3,FUN_00d4fb74,0);
  FUN_019867cc(param_1,0x457106fa,FUN_00d4fb7c,0);
  FUN_019867cc(param_1,0x366b0603,FUN_00d4fc38,0);
  FUN_019867cc(param_1,0x444d06f4,FUN_00d4fcf4,0);
  FUN_019867cc(param_1,0x1b0a0423,FUN_00d4fd20,0);
  return;
}




void FUN_00d4fb74(long param_1)

{
  FUN_00d4fe08(param_1 + 0x68);
  return;
}




void FUN_00d4fcf4(void)

{
  FUN_00d52158();
  return;
}




void FUN_00d4fe08(ushort *param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0xac) +
                                ((long)*(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00d4fe48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_00d4fe50(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 local_44;
  uint local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x38) = param_2;
  *(long *)(param_1 + 0x40) = param_3;
  if (param_3 == 0) {
    uVar8 = 2;
  }
  else {
    uVar8 = *(byte *)(param_2 + 0x8a) ^ 1;
  }
  uVar10 = 0x811c9dc5;
  *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) & 0xfffffff8 | uVar8;
  FUN_00d502a4(param_1,*(undefined4 *)(param_2 + 0x78));
  *(undefined8 *)(param_1 + 0x200) = param_4;
  uVar3 = FUN_00d50380(param_1);
  if ((uVar3 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x38);
    pbVar9 = *(byte **)(lVar6 + 0x30);
    if (pbVar9 == (byte *)0x0) {
      local_40[0] = 0;
    }
    else {
      local_40[0] = 0x811c9dc5;
      if (*pbVar9 != 0) {
        local_40[0] = 0x811c9dc5;
        uVar8 = (uint)*pbVar9;
        do {
          pbVar9 = pbVar9 + 1;
          local_40[0] = (local_40[0] ^ uVar8) * 0x1000193;
          uVar8 = (uint)*pbVar9;
        } while (*pbVar9 != 0);
      }
    }
    if ((local_40[0] == 0x811c9dc5) || (local_40[0] == 0)) {
      if (*(char *)(lVar6 + 0x8a) == '\0') {
        pbVar9 = *(byte **)(param_1 + 0x200);
        if ((pbVar9 == (byte *)0x0) && (pbVar9 = *(byte **)(lVar6 + 8), pbVar9 == (byte *)0x0)) {
          local_40[0] = 0;
        }
        else {
          local_40[0] = 0x811c9dc5;
          if (*pbVar9 != 0) {
            local_40[0] = 0x811c9dc5;
            uVar8 = (uint)*pbVar9;
            do {
              pbVar9 = pbVar9 + 1;
              local_40[0] = (local_40[0] ^ uVar8) * 0x1000193;
              uVar8 = (uint)*pbVar9;
            } while (*pbVar9 != 0);
          }
        }
      }
      else {
        local_40[0] = 0xd60c580b;
      }
    }
    lVar6 = *(long *)(param_1 + 0x10);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c09220))) {
      lVar6 = *(long *)(lVar6 + 0x10);
    }
    lVar6 = FUN_00d9f258(lVar6,local_40);
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_1 + 0x10);
      while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c09220))) {
        lVar6 = *(long *)(lVar6 + 0x10);
      }
      lVar6 = FUN_01985d44(lVar6,DAT_02c7bf1c);
      lVar7 = *(long *)(param_1 + 0x38);
      FUN_00d6d5e0(lVar6,local_40,*(uint *)(param_1 + 0x238) & 7,*(undefined1 *)(lVar7 + 0x8d),
                   *(undefined1 *)(lVar7 + 0x44),*(undefined1 *)(lVar7 + 0x45));
      if ((*(byte *)(param_1 + 0x239) & 0x1c) != 0) {
        FUN_00d504d0(param_1);
        FUN_00d6e2d0(lVar6);
        uVar2 = FUN_00d50544(param_1);
        FUN_00d6e510(lVar6,uVar2);
      }
    }
    *(long *)(param_1 + 0x1e8) = lVar6;
    *(long *)(param_1 + 0x1f8) = lVar6;
    if (*(char *)(lVar6 + 0x6a) == '\0') {
      FUN_00d505cc(param_1,lVar6);
    }
  }
  pbVar9 = *(byte **)(*(long *)(param_1 + 0x38) + 0x38);
  if (pbVar9 == (byte *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar8 = (uint)*pbVar9;
    if (*pbVar9 != 0) {
      do {
        pbVar9 = pbVar9 + 1;
        uVar10 = (uVar10 ^ uVar8) * 0x1000193;
        uVar8 = (uint)*pbVar9;
      } while (*pbVar9 != 0);
    }
  }
  local_40[0] = uVar10;
  if ((uVar10 != 0x811c9dc5) && (uVar10 != 0)) {
    lVar6 = *(long *)(param_1 + 0x10);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c09220))) {
      lVar6 = *(long *)(lVar6 + 0x10);
    }
    lVar6 = FUN_00d9f258(lVar6,local_40);
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_1 + 0x10);
      while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c09220))) {
        lVar6 = *(long *)(lVar6 + 0x10);
      }
      lVar6 = FUN_01985d44(lVar6,DAT_02c7bf1c);
      lVar7 = *(long *)(param_1 + 0x38);
      FUN_00d6d5e0(lVar6,local_40,*(uint *)(param_1 + 0x238) & 7,*(undefined1 *)(lVar7 + 0x8d),
                   *(undefined1 *)(lVar7 + 0x46),*(undefined1 *)(lVar7 + 0x47));
      FUN_00d6e2d0(0,lVar6);
      FUN_00d6e510(lVar6,1);
      if (((*(byte *)(param_1 + 0x239) & 0x1c) != 0) &&
         (uVar3 = FUN_00d5066c(param_1,"Cooldown2",&local_44), (uVar3 & 1) != 0)) {
        FUN_00d506d8(param_1,local_44,0);
        FUN_00d6e2d0(lVar6);
      }
    }
    *(long *)(param_1 + 0x1f0) = lVar6;
    if (*(char *)(lVar6 + 0x6a) == '\0') {
      FUN_00d505cc(param_1,lVar6);
    }
  }
  pcVar4 = *(char **)(param_1 + 0x200);
  if (pcVar4 == (char *)0x0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      pcVar4 = "<null>";
    }
    else {
      pcVar4 = *(char **)(*(long *)(param_1 + 0x38) + 8);
    }
  }
  uVar5 = FUN_00dab3f8(pcVar4);
  FUN_00cf2d74(param_1 + 0x48,uVar5);
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x94) != '\0') {
    *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) | 0x2000;
  }
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x8a) != '\0') {
    *(undefined1 *)(param_1 + 0x234) = 1;
  }
  lVar6 = FUN_00d50768(param_1,"Range");
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x84);
  }
  else {
    *(long *)(param_1 + 0x220) = lVar6;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

