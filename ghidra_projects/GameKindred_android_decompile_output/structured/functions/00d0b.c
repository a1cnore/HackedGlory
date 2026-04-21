// functions/00d0b — 44 functions
#include "libGameKindred.h"




void FUN_00d0b0c0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




void FUN_00d0b0c8(void)

{
  return;
}




undefined8 FUN_00d0b0cc(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = FUN_00d25570(param_2);
  uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f;
  if ((uVar1 == 0x1f) || (1 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
    lVar2 = *(long *)(lVar2 + 0x40);
    fVar3 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
            (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0)
            );
    if (DAT_031500a0 <= fVar3) {
      fVar3 = DAT_031500a0;
    }
    fVar4 = DAT_0314ffe0;
    if (DAT_0314ffe0 <= fVar3) {
      fVar4 = fVar3;
    }
    if (*(float *)(lVar2 + 0x308) <=
        (((*(float *)(param_2 + 0x58) - 1.0) / 8.0) * 0.3 + 0.1) * fVar4) {
      return 1;
    }
  }
  return 2;
}




void FUN_00d0b1c4(void)

{
  return;
}




undefined8 FUN_00d0b1c8(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = FUN_00d25570(param_2);
  uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f;
  if ((uVar1 == 0x1f) || (1 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
    lVar2 = *(long *)(lVar2 + 0x40);
    fVar3 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
            (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0)
            );
    if (DAT_031500a0 <= fVar3) {
      fVar3 = DAT_031500a0;
    }
    fVar4 = DAT_0314ffe0;
    if (DAT_0314ffe0 <= fVar3) {
      fVar4 = fVar3;
    }
    if (*(float *)(lVar2 + 0x308) <
        (((*(float *)(param_2 + 0x58) - 1.0) / 8.0) * 0.3 + 0.25) * fVar4) {
      return 1;
    }
  }
  return 2;
}




void FUN_00d0b2bc(void)

{
  return;
}




void FUN_00d0b2c0(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02812060;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d0b2f4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




undefined8 FUN_00d0b2fc(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = FUN_00d25570(param_2);
  lVar4 = *(long *)(lVar2 + 0x40);
  fVar5 = (*(float *)(lVar4 + 0x1a0) + 1.0) *
          (*(float *)(lVar4 + 0x38) + *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0));
  if (DAT_031500a0 <= fVar5) {
    fVar5 = DAT_031500a0;
  }
  uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f;
  fVar6 = DAT_0314ffe0;
  if (DAT_0314ffe0 <= fVar5) {
    fVar6 = fVar5;
  }
  if (((uVar1 != 0x1f) && (*(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)) ||
     (*(float *)(param_1 + 0x24) * fVar6 <= *(float *)(lVar4 + 0x308))) {
    uVar3 = 2;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_00d0b3b8(void)

{
  return;
}




void FUN_00d0b3bc(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028120e8;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d0b3f0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




void FUN_00d0b3f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  FUN_00d55794(uVar2,auStack_38,0);
  uVar3 = FUN_00e0b8e8(param_2,auStack_38,0);
  uVar4 = 1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00d0b46c(void)

{
  return;
}




void FUN_00d0b470(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02812170;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}




void FUN_00d0b4a4(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x24) = param_2;
  *(undefined4 *)(param_3 + 0x28) = param_1;
  return;
}




undefined8 FUN_00d0b4ac(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_2 + 0xd18) != 0) {
    uVar3 = 0;
    lVar2 = param_2 + 0xa18;
    do {
      uVar1 = FUN_00e0b7ac(*(float *)(param_1 + 0x24),*(float *)(param_1 + 0x24) * 0.5,lVar2,param_2
                           ,0);
      if (((uVar1 & 1) == 0) &&
         (uVar1 = FUN_00e0b624(*(undefined4 *)(param_1 + 0x28),lVar2,param_2 + 0x18),
         (uVar1 & 1) != 0)) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x40;
    } while (uVar3 < *(uint *)(param_2 + 0xd18));
  }
  return 2;
}




void FUN_00d0b54c(void)

{
  return;
}




undefined4 FUN_00d0b550(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  byte *pbVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = 0.0;
  fVar6 = 0.0;
  if (*(uint *)(param_2 + 0x270) != 0) {
    uVar2 = 0;
    pbVar3 = (byte *)(param_2 + 0xac);
    fVar6 = 0.0;
    do {
      if ((*pbVar3 & 1) != 0) {
        fVar6 = fVar6 + *(float *)(pbVar3 + -0xc);
      }
      uVar2 = uVar2 + 1;
      pbVar3 = pbVar3 + 0x40;
    } while (uVar2 < *(uint *)(param_2 + 0x270));
  }
  if (*(uint *)(param_2 + 0xa10) != 0) {
    uVar2 = 0;
    fVar5 = 0.0;
    pfVar4 = (float *)(param_2 + 0x8c0);
    do {
      uVar2 = uVar2 + 1;
      fVar5 = fVar5 + *pfVar4;
      pfVar4 = pfVar4 + 0x10;
    } while (uVar2 < *(uint *)(param_2 + 0xa10));
  }
  uVar1 = 2;
  if (*(float *)(param_2 + 0x40) < fVar6 * 4.0 + fVar5) {
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_00d0b5d4(void)

{
  return;
}




void FUN_00d0b5d8(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028121f8;
  *(undefined8 *)((long)param_1 + 0x24) = 0x40c0000000000000;
  return;
}




void FUN_00d0b614(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x24) = param_1;
  *(undefined4 *)(param_3 + 0x28) = param_2;
  return;
}




void FUN_00d0b61c(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_c0 [4];
  float local_b0 [4];
  undefined8 local_a0 [5];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d25570(param_2);
  FUN_00d55794(lVar3,local_b0,0);
  if (*(int *)(param_2 + 0x270) != 0) {
    uVar6 = 0;
    fVar8 = *(float *)(*(long *)(lVar3 + 0x38) + 100);
    fVar8 = (*(float *)(*(long *)(lVar3 + 0x38) + 0x68) * (fVar8 + *(float *)(lVar3 + 0x2e8))) /
            fVar8;
    do {
      lVar3 = (**(code **)(**(long **)(param_2 + uVar6 * 0x40 + 0x70) + 0x10))();
      iVar2 = FUN_00d8481c(local_a0,*(undefined4 *)(lVar3 + 0x260),5);
      if (0 < iVar2) {
        lVar3 = 0;
        do {
          uVar5 = local_a0[lVar3];
          lVar4 = FUN_00d80eb4(uVar5);
          fVar11 = *(float *)(lVar4 + 0x30);
          fVar7 = local_b0[0] - fVar11;
          fVar12 = (float)*(undefined8 *)(lVar4 + 0x34);
          fVar9 = (float)local_b0._4_8_ - fVar12;
          fVar13 = (float)((ulong)*(undefined8 *)(lVar4 + 0x34) >> 0x20);
          fVar10 = SUB84(local_b0._4_8_,4) - fVar13;
          fVar7 = fVar7 * fVar7 + fVar9 * fVar9 + fVar10 * fVar10;
          fVar9 = SQRT(fVar7);
          if (NAN(fVar9)) {
            fVar9 = sqrtf(fVar7);
          }
          if (((*(float *)(param_1 + 0x24) <= fVar9) && (fVar9 <= *(float *)(param_1 + 0x28))) &&
             (FUN_00d80c00(uVar5,local_c0), fVar7 = local_b0[0] - (fVar11 + fVar9 * local_c0[0]),
             fVar10 = (float)local_b0._4_8_ - (fVar12 + (float)local_c0._4_8_ * fVar9),
             fVar9 = SUB84(local_b0._4_8_,4) - (fVar13 + SUB84(local_c0._4_8_,4) * fVar9),
             fVar7 * fVar7 + fVar10 * fVar10 + fVar9 * fVar9 <= fVar8 * fVar8)) {
            uVar5 = 1;
            goto LAB_00d0b7b0;
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 < iVar2);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_2 + 0x270));
  }
  uVar5 = 2;
LAB_00d0b7b0:
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}




void FUN_00d0b7e8(void)

{
  return;
}




undefined4 FUN_00d0b7ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d25570(param_2);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
          (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
  if (DAT_031500a0 <= fVar3) {
    fVar3 = DAT_031500a0;
  }
  fVar4 = DAT_0314ffe0;
  if (DAT_0314ffe0 <= fVar3) {
    fVar4 = fVar3;
  }
  uVar2 = 2;
  if (ABS(*(float *)(lVar1 + 0x308) - fVar4) < 10.0) {
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_00d0b86c(void)

{
  return;
}




undefined8 FUN_00d0b870(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d25570(param_2);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
          (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
  if (DAT_031500a0 <= fVar3) {
    fVar3 = DAT_031500a0;
  }
  fVar2 = DAT_0314ffe0;
  if (DAT_0314ffe0 <= fVar3) {
    fVar2 = fVar3;
  }
  if (ABS(*(float *)(lVar1 + 0x308) - fVar2) < 10.0) {
    fVar3 = (*(float *)(lVar1 + 0x1a8) + 1.0) *
            (*(float *)(lVar1 + 0x40) + *(float *)(lVar1 + 0xf4) * (*(float *)(lVar1 + 0x25c) + 1.0)
            );
    if (DAT_031500a8 <= fVar3) {
      fVar3 = DAT_031500a8;
    }
    fVar2 = DAT_0314ffe8;
    if (DAT_0314ffe8 <= fVar3) {
      fVar2 = fVar3;
    }
    if (ABS(*(float *)(lVar1 + 0x310) - fVar2) < 10.0) {
      return 1;
    }
  }
  return 2;
}




void FUN_00d0b958(void)

{
  return;
}




void FUN_00d0b95c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02812280;
  *(undefined4 *)((long)param_1 + 0x24) = 0x3f800000;
  return;
}




void FUN_00d0b994(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




undefined8 FUN_00d0b99c(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  FUN_00d25570(param_2);
  fVar5 = (float)FUN_00d08034();
  if ((0.0 < fVar5) && (*(int *)(param_2 + 0x270) != 0)) {
    fVar8 = *(float *)(param_2 + 0x58);
    fVar5 = (float)FUN_00d618e4();
    if (fVar5 <= 0.0) {
      fVar5 = 5.0;
    }
    else {
      fVar5 = *(float *)(param_2 + 0x40) / fVar5;
    }
    if (*(int *)(param_2 + 0x270) != 0) {
      uVar3 = 0;
      plVar4 = (long *)(param_2 + 0x70);
      do {
        plVar1 = (long *)*plVar4;
        uVar2 = 0;
        if (plVar1 != (long *)0x0) {
          if ((int)plVar4[1] == (int)plVar1[1]) {
            uVar2 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *plVar4 = 0;
            uVar2 = 0;
            *(undefined4 *)(plVar4 + 1) = DAT_03214ce8;
          }
        }
        if ((*(byte *)((long)plVar4 + 0x3c) & 1) != 0) {
          FUN_00d08034(uVar2);
          fVar6 = (float)FUN_00d618e4();
          fVar7 = 5.0;
          if (0.0 < fVar6) {
            fVar7 = *(float *)(plVar4 + 5) / fVar6;
          }
          if (((fVar8 - 1.0) / 8.0) * -1.5 + 2.5 + fVar5 < fVar7) {
            return 1;
          }
        }
        uVar3 = uVar3 + 1;
        plVar4 = plVar4 + 8;
      } while (uVar3 < *(uint *)(param_2 + 0x270));
    }
  }
  return 2;
}




void FUN_00d0badc(void)

{
  return;
}




void FUN_00d0bae0(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02812308;
  param_1[5] = 0;
  return;
}




void FUN_00d0bb14(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_00d0bb1c(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = FUN_00d25570(param_2);
  if (*(char *)(param_2 + 0x68) != '\0') {
    uVar1 = FUN_00d588cc(lVar2,*(undefined8 *)(param_1 + 0x28));
    uVar3 = FUN_00d5867c(lVar2,uVar1);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(lVar2 + 0x18);
      while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02e3ef78))) {
        lVar4 = *(long *)(lVar4 + 0x20);
      }
      uVar3 = FUN_00d54540(lVar4,uVar1);
      if (((uVar3 & 1) == 0) || (*(char *)(param_2 + 0x69) != '\0')) {
        fVar7 = *(float *)(param_2 + 0x60);
        fVar5 = *(float *)(*(long *)(lVar2 + 0x40) + 0x310);
        fVar8 = *(float *)(*(long *)(lVar2 + 0x40) + 0x314);
        fVar6 = (float)FUN_00d53b2c(lVar4,uVar1);
        if ((fVar6 <= fVar5 * fVar7) &&
           (fVar5 = (float)FUN_00d53b44(lVar4,uVar1), fVar5 <= fVar7 * fVar8)) {
          return 1;
        }
      }
    }
  }
  return 2;
}




void FUN_00d0bc14(void)

{
  return;
}




undefined8 FUN_00d0bc18(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  lVar3 = FUN_00d25570(param_2);
  lVar6 = *(long *)(lVar3 + 0x18);
  while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar6 = *(long *)(lVar6 + 0x20);
  }
  lVar5 = *(long *)(lVar3 + 0x40);
  fVar8 = (*(float *)(lVar5 + 0x214) + 1.0) *
          (*(float *)(lVar5 + 0xac) + *(float *)(lVar5 + 0x160) * (*(float *)(lVar5 + 0x2c8) + 1.0))
  ;
  if (DAT_03150114 <= fVar8) {
    fVar8 = DAT_03150114;
  }
  fVar9 = DAT_03150054;
  if (DAT_03150054 <= fVar8) {
    fVar9 = fVar8;
  }
  if ((fVar9 != 0.0) && (uVar1 = FUN_00d5359c(lVar6), uVar1 != 0)) {
    uVar7 = 0;
    do {
      uVar4 = FUN_00d535b8(lVar6,uVar7);
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(lVar3 + 0x40);
        fVar8 = (*(float *)(lVar5 + 0x240) + 1.0) *
                (*(float *)(lVar5 + 0xd8) +
                *(float *)(lVar5 + 0x18c) * (*(float *)(lVar5 + 0x2f4) + 1.0));
        if (DAT_03150140 <= fVar8) {
          fVar8 = DAT_03150140;
        }
        fVar9 = DAT_03150080;
        if (DAT_03150080 <= fVar8) {
          fVar9 = fVar8;
        }
        uVar2 = FUN_00d54944(lVar6,uVar7);
        if ((float)uVar2 <= fVar9) {
          return 1;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  return 2;
}




void FUN_00d0bd70(void)

{
  return;
}




void FUN_00d0bd74(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_00d0bd7c(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = FUN_00d25570(param_2);
  lVar5 = *(long *)(lVar2 + 0x18);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  lVar4 = *(long *)(lVar2 + 0x40);
  fVar6 = (*(float *)(lVar4 + 0x214) + 1.0) *
          (*(float *)(lVar4 + 0xac) + *(float *)(lVar4 + 0x160) * (*(float *)(lVar4 + 0x2c8) + 1.0))
  ;
  if (DAT_03150114 <= fVar6) {
    fVar6 = DAT_03150114;
  }
  fVar7 = DAT_03150054;
  if (DAT_03150054 <= fVar6) {
    fVar7 = fVar6;
  }
  if (((fVar7 != 0.0) && (uVar1 = FUN_00d5359c(lVar5), *(uint *)(param_1 + 0x24) < uVar1)) &&
     (uVar3 = FUN_00d535b8(lVar5), (uVar3 & 1) != 0)) {
    lVar2 = *(long *)(lVar2 + 0x40);
    fVar6 = (*(float *)(lVar2 + 0x240) + 1.0) *
            (*(float *)(lVar2 + 0xd8) +
            *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0));
    if (DAT_03150140 <= fVar6) {
      fVar6 = DAT_03150140;
    }
    fVar7 = DAT_03150080;
    if (DAT_03150080 <= fVar6) {
      fVar7 = fVar6;
    }
    uVar1 = FUN_00d54944(lVar5,*(undefined4 *)(param_1 + 0x24));
    if ((float)uVar1 <= fVar7) {
      return 1;
    }
  }
  return 2;
}




void FUN_00d0bec4(void)

{
  return;
}




void FUN_00d0bec8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d25570(param_2);
  iVar2 = FUN_00e0bafc(param_2);
  if (iVar2 < 0) {
    uVar4 = 2;
  }
  else {
    FUN_00d005bc(auStack_60,*(undefined4 *)(lVar3 + 0x260),iVar2);
    FUN_00ce20fc(auStack_60);
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00d0bf50(void)

{
  return;
}




void FUN_00d0bf54(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  float local_58;
  float fStack_54;
  float local_50;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar5 = FUN_00d25570(param_5);
  lVar9 = *(long *)(lVar5 + 0x18);
  while ((lVar9 != 0 && (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar9 = *(long *)(lVar9 + 0x20);
  }
  local_40 = 0;
  FUN_019889cc(&local_40,1,DAT_02e3ef88,0);
  lVar8 = local_40;
  if (*(int *)(*(long *)(local_40 + 8) + 0xa4) != DAT_02e3ef88) {
    lVar8 = 0;
  }
  plVar10 = *(long **)(*(long *)(lVar8 + 0x290) + 0x160);
  if ((plVar10 != (long *)0x0) && (*plVar10 != 0)) {
    bVar2 = FUN_00d55870(lVar5);
    lVar8 = *(long *)(plVar10[(ulong)bVar2 - 1] + 8);
    if (lVar8 != 0) {
      if (((DAT_0314ffa8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0314ffa8), iVar4 != 0)) {
        uVar3 = FUN_00e6a474(lVar8);
        DAT_0314ffa0 = FUN_0091ed5c(lVar8,uVar3,0x12345678);
        __cxa_guard_release(&DAT_0314ffa8);
      }
      FUN_00d9ff84(local_48,DAT_0314ffa0);
      uVar6 = FUN_00d6bbac(lVar9,local_48[0],0);
      if ((uVar6 & 1) != 0) {
        uVar3 = 1;
        goto LAB_00d0c0c0;
      }
    }
  }
  FUN_00d55794(lVar5,&local_58,0);
  if ((*(byte *)(lVar5 + 0x2f4) >> 1 & 1) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_00ceceb4(*(undefined4 *)(lVar5 + 0x260));
  }
  uVar7 = FUN_00d55870(lVar5);
  FUN_00d79d64(uVar7,uVar3);
  fVar11 = (float)FUN_00d79c84();
  uVar3 = 2;
  if ((local_58 - fVar11) * (local_58 - fVar11) + (fStack_54 - param_2) * (fStack_54 - param_2) +
      (local_50 - param_3) * (local_50 - param_3) < 0.0625) {
    uVar3 = 1;
  }
LAB_00d0c0c0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

