// functions/00d14 — 37 functions
#include "libGameKindred.h"




void FUN_00d14038(void)

{
  return;
}




undefined4 FUN_00d1403c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  lVar2 = FUN_00d25570(param_2);
  plVar6 = *(long **)(param_2 + 0x1420);
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    uVar3 = 0;
  }
  else if ((int)plVar6[1] == (int)plVar5[1]) {
    uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  else {
    *plVar6 = 0;
    uVar3 = 0;
    *(undefined4 *)(plVar6 + 1) = DAT_03214ce8;
  }
  uVar1 = FUN_00d55870(uVar3);
  uVar4 = FUN_00d7d0a0(*(undefined8 *)(lVar2 + 0x80),uVar1);
  uVar1 = 1;
  if ((uVar4 & 1) == 0) {
    uVar1 = 2;
  }
  return uVar1;
}




void FUN_00d140d4(void)

{
  return;
}




void FUN_00d140d8(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02814108;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}




void FUN_00d1410c(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x24) = param_1;
  *(undefined4 *)(param_3 + 0x28) = param_2;
  return;
}




void FUN_00d14114(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  char *pcVar4;
  ulong uVar5;
  float fVar6;
  float local_68;
  float fStack_64;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  FUN_00d55794(uVar2,&local_58,0);
  uVar5 = 0;
  pcVar4 = (char *)(param_2 + 0x1a48);
  do {
    fVar6 = (float)FUN_009bc24c();
    if ((*pcVar4 != '\0') && (fVar6 <= *(float *)(param_1 + 0x28) + *(float *)(pcVar4 + -0xc))) {
      plVar3 = *(long **)(pcVar4 + -0x38);
      uVar2 = 0;
      if (plVar3 != (long *)0x0) {
        if (*(int *)(pcVar4 + -0x30) == (int)plVar3[1]) {
          uVar2 = (**(code **)(*plVar3 + 0x10))();
        }
        else {
          pcVar4[-0x38] = '\0';
          pcVar4[-0x37] = '\0';
          pcVar4[-0x36] = '\0';
          pcVar4[-0x35] = '\0';
          pcVar4[-0x34] = '\0';
          pcVar4[-0x33] = '\0';
          pcVar4[-0x32] = '\0';
          pcVar4[-0x31] = '\0';
          uVar2 = 0;
          *(undefined4 *)(pcVar4 + -0x30) = DAT_03214ce8;
        }
      }
      FUN_00d55794(uVar2,&local_68,0);
      fVar6 = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24);
      if ((fVar6 <= (local_68 - local_58) * (local_68 - local_58) +
                    (fStack_64 - fStack_54) * (fStack_64 - fStack_54) +
                    (local_60 - local_50) * (local_60 - local_50)) &&
         ((*(float *)(pcVar4 + -0x18) - local_58) * (*(float *)(pcVar4 + -0x18) - local_58) +
          (*(float *)(pcVar4 + -0x14) - fStack_54) * (*(float *)(pcVar4 + -0x14) - fStack_54) +
          (*(float *)(pcVar4 + -0x10) - local_50) * (*(float *)(pcVar4 + -0x10) - local_50) <= fVar6
         )) {
        uVar2 = 1;
        goto LAB_00d14250;
      }
    }
    uVar5 = uVar5 + 1;
    pcVar4 = pcVar4 + 0x40;
    if (3 < uVar5) {
      uVar2 = 2;
LAB_00d14250:
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar2);
    }
  } while( true );
}




void FUN_00d14284(void)

{
  return;
}




undefined8 FUN_00d14288(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  FUN_00d25570(param_2);
  FUN_00d55870();
  puVar1 = (undefined8 *)FUN_00d25ff0();
  uVar2 = FUN_00d26738(0x41f00000);
  if ((uVar2 & 1) == 0) {
    uVar3 = 2;
  }
  else {
    uVar3 = 1;
    *(undefined4 *)(param_2 + 0x1438) = *(undefined4 *)(puVar1 + 1);
    *(undefined8 *)(param_2 + 0x1430) = *puVar1;
  }
  return uVar3;
}




void FUN_00d142e0(void)

{
  return;
}




void FUN_00d142e4(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02814190;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d14318(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




void FUN_00d14320(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  float local_68;
  float fStack_64;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d25570(param_2);
  FUN_00d55794(uVar2,&local_58,0);
  if (*(int *)(param_2 + 0x1330) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(param_2 + 0x1238);
    do {
      plVar3 = *(long **)(piVar5 + -2);
      uVar2 = 0;
      if (plVar3 != (long *)0x0) {
        if (*piVar5 == (int)plVar3[1]) {
          uVar2 = (**(code **)(*plVar3 + 0x10))();
        }
        else {
          piVar5[-2] = 0;
          piVar5[-1] = 0;
          uVar2 = 0;
          *piVar5 = DAT_03214ce8;
        }
      }
      FUN_00d55794(uVar2,&local_68,0);
      if (*(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) <
          (local_68 - local_58) * (local_68 - local_58) +
          (fStack_64 - fStack_54) * (fStack_64 - fStack_54) +
          (local_60 - local_50) * (local_60 - local_50)) {
        uVar2 = 2;
        goto LAB_00d14420;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 0x10;
    } while (uVar4 < *(uint *)(param_2 + 0x1330));
  }
  uVar2 = 1;
LAB_00d14420:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_00d1444c(void)

{
  return;
}




undefined8 FUN_00d14450(undefined8 param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  
  plVar7 = *(long **)(param_2 + 0x1420);
  plVar2 = (long *)*plVar7;
  if (plVar2 == (long *)0x0) {
    lVar3 = 0;
  }
  else if ((int)plVar7[1] == (int)plVar2[1]) {
    lVar3 = (**(code **)(*plVar2 + 0x10))();
  }
  else {
    *plVar7 = 0;
    lVar3 = 0;
    *(int *)(plVar7 + 1) = DAT_03214ce8;
  }
  if (*(int *)(param_2 + 0x1330) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(param_2 + 0x1238);
    do {
      plVar2 = *(long **)(piVar9 + -2);
      if (plVar2 == (long *)0x0) {
        lVar4 = 0;
      }
      else if (*piVar9 == (int)plVar2[1]) {
        lVar4 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        piVar9[-2] = 0;
        piVar9[-1] = 0;
        lVar4 = 0;
        *piVar9 = DAT_03214ce8;
      }
      plVar2 = *(long **)(lVar3 + 0x2b0);
      lVar6 = 0;
      if (plVar2 != (long *)0x0) {
        if (*(int *)(lVar3 + 0x2b8) == (int)plVar2[1]) {
          lVar5 = (**(code **)(*plVar2 + 0x10))();
          lVar6 = 0;
          if (lVar5 != 0) {
            plVar2 = *(long **)(lVar3 + 0x2b0);
            lVar5 = 0;
            if (plVar2 != (long *)0x0) {
              if (*(int *)(lVar3 + 0x2b8) == (int)plVar2[1]) {
                lVar5 = (**(code **)(*plVar2 + 0x10))();
              }
              else {
                *(undefined8 *)(lVar3 + 0x2b0) = 0;
                lVar5 = 0;
                *(int *)(lVar3 + 0x2b8) = DAT_03214ce8;
              }
            }
            uVar1 = *(ushort *)(lVar5 + 0x88) & 0x1f;
            if ((uVar1 == 0x1f) ||
               (lVar6 = 0, 1 < *(ushort *)(lVar5 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
              plVar2 = *(long **)(lVar3 + 0x2b0);
              lVar6 = 0;
              if (plVar2 != (long *)0x0) {
                if (*(int *)(lVar3 + 0x2b8) != (int)plVar2[1]) goto LAB_00d145d4;
                lVar6 = (**(code **)(*plVar2 + 0x10))();
              }
            }
          }
        }
        else {
LAB_00d145d4:
          *(undefined8 *)(lVar3 + 0x2b0) = 0;
          lVar6 = 0;
          *(int *)(lVar3 + 0x2b8) = DAT_03214ce8;
        }
      }
      if (lVar6 == lVar4) {
        return 1;
      }
      plVar2 = *(long **)(lVar4 + 0x2b0);
      lVar6 = 0;
      if (plVar2 != (long *)0x0) {
        if (*(int *)(lVar4 + 0x2b8) == (int)plVar2[1]) {
          lVar5 = (**(code **)(*plVar2 + 0x10))();
          lVar6 = 0;
          if (lVar5 != 0) {
            plVar2 = *(long **)(lVar4 + 0x2b0);
            lVar5 = 0;
            if (plVar2 != (long *)0x0) {
              if (*(int *)(lVar4 + 0x2b8) == (int)plVar2[1]) {
                lVar5 = (**(code **)(*plVar2 + 0x10))();
              }
              else {
                *(undefined8 *)(lVar4 + 0x2b0) = 0;
                lVar5 = 0;
                *(int *)(lVar4 + 0x2b8) = DAT_03214ce8;
              }
            }
            uVar1 = *(ushort *)(lVar5 + 0x88) & 0x1f;
            if ((uVar1 == 0x1f) ||
               (lVar6 = 0, 1 < *(ushort *)(lVar5 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
              plVar2 = *(long **)(lVar4 + 0x2b0);
              lVar6 = 0;
              if (plVar2 != (long *)0x0) {
                if (*(int *)(lVar4 + 0x2b8) != (int)plVar2[1]) goto LAB_00d146a0;
                lVar6 = (**(code **)(*plVar2 + 0x10))();
              }
            }
          }
        }
        else {
LAB_00d146a0:
          *(undefined8 *)(lVar4 + 0x2b0) = 0;
          lVar6 = 0;
          *(int *)(lVar4 + 0x2b8) = DAT_03214ce8;
        }
      }
      if (lVar6 == lVar3) {
        return 1;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 0x10;
    } while (uVar8 < *(uint *)(param_2 + 0x1330));
  }
  return 2;
}




void FUN_00d146f0(void)

{
  return;
}




undefined4 FUN_00d146f4(undefined8 param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 0x1428);
  plVar2 = (long *)*plVar5;
  if (plVar2 == (long *)0x0) {
    lVar3 = 0;
  }
  else if ((int)plVar5[1] == (int)plVar2[1]) {
    lVar3 = (**(code **)(*plVar2 + 0x10))();
  }
  else {
    *plVar5 = 0;
    lVar3 = 0;
    *(undefined4 *)(plVar5 + 1) = DAT_03214ce8;
  }
  plVar2 = *(long **)(lVar3 + 0x2b0);
  if (plVar2 == (long *)0x0) {
    return 2;
  }
  if (*(int *)(lVar3 + 0x2b8) == (int)plVar2[1]) {
    lVar4 = (**(code **)(*plVar2 + 0x10))();
    if (lVar4 == 0) {
      return 2;
    }
    plVar2 = *(long **)(lVar3 + 0x2b0);
    lVar4 = 0;
    if (plVar2 != (long *)0x0) {
      if (*(int *)(lVar3 + 0x2b8) == (int)plVar2[1]) {
        lVar4 = (**(code **)(*plVar2 + 0x10))();
      }
      else {
        *(undefined8 *)(lVar3 + 0x2b0) = 0;
        lVar4 = 0;
        *(undefined4 *)(lVar3 + 0x2b8) = DAT_03214ce8;
      }
    }
    uVar1 = *(ushort *)(lVar4 + 0x88) & 0x1f;
    if ((uVar1 != 0x1f) && (*(ushort *)(lVar4 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)) {
      return 2;
    }
    plVar2 = *(long **)(lVar3 + 0x2b0);
    if (plVar2 == (long *)0x0) {
      return 2;
    }
    if (*(int *)(lVar3 + 0x2b8) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 == 0) {
        return 2;
      }
      return 1;
    }
  }
  *(undefined8 *)(lVar3 + 0x2b0) = 0;
  *(undefined4 *)(lVar3 + 0x2b8) = DAT_03214ce8;
  return 2;
}




void FUN_00d1483c(void)

{
  return;
}




undefined4 FUN_00d14840(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(uint *)(param_2 + 0x133c) <= *(uint *)(param_2 + 0x1330)) {
    uVar1 = 2;
  }
  return uVar1;
}




void FUN_00d14858(void)

{
  return;
}




undefined4 FUN_00d1485c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(uint *)(param_2 + 0x1340) <= *(uint *)(param_2 + 0x1228)) {
    uVar1 = 2;
  }
  return uVar1;
}




void FUN_00d14874(void)

{
  return;
}




undefined4 FUN_00d14878(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(uint *)(param_2 + 0x1334) <= *(uint *)(param_2 + 0x1020)) {
    uVar1 = 2;
  }
  return uVar1;
}




void FUN_00d14890(void)

{
  return;
}




undefined4 FUN_00d14894(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(uint *)(param_2 + 0x1338) <= *(uint *)(param_2 + 0xd18)) {
    uVar1 = 2;
  }
  return uVar1;
}




void FUN_00d148ac(void)

{
  return;
}




void FUN_00d148b0(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_02814218;
  param_1[5] = 0x40400000;
  *(undefined4 *)(param_1 + 7) = DAT_03218f38;
  param_1[6] = DAT_03218f30;
  return;
}




undefined4 FUN_00d14908(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




void FUN_00d14914(void)

{
  return;
}




void FUN_00d14918(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_cc;
  undefined1 local_c8 [8];
  float local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d25570(param_2);
  local_90 = *(float *)(param_2 + 0x1444);
  local_98 = (float)*(undefined8 *)(param_2 + 0x143c);
  fStack_94 = (float)((ulong)*(undefined8 *)(param_2 + 0x143c) >> 0x20);
  FUN_00d55794(lVar2,&local_98,0);
  fVar10 = *(float *)(*(long *)(lVar2 + 0x38) + 100);
  fVar10 = (*(float *)(*(long *)(lVar2 + 0x38) + 0x68) * (fVar10 + *(float *)(lVar2 + 0x2e8))) /
           fVar10;
  if (*(int *)(param_2 + 0xd18) != 0) {
    uVar6 = 0;
    lVar5 = param_2 + 0xa18;
    do {
      uVar3 = FUN_00e0b7ac(0x447a0000,0x43960000,lVar5,param_2,0);
      if ((uVar3 & 1) == 0) {
        fVar8 = local_98 - *(float *)(lVar5 + 0x10);
        fVar11 = fStack_94 - (float)*(undefined8 *)(lVar5 + 0x14);
        fVar12 = local_90 - (float)((ulong)*(undefined8 *)(lVar5 + 0x14) >> 0x20);
        fVar11 = fVar8 * fVar8 + fVar11 * fVar11 + fVar12 * fVar12;
        fVar8 = SQRT(fVar11);
        if (NAN(fVar8)) {
          fVar8 = sqrtf(fVar11);
        }
        fVar8 = fVar8 - fVar10;
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        fVar8 = (*(float *)(lVar5 + 0x34) + 1.5) - fVar8;
        if (0.0 < fVar8) {
          fVar13 = local_98 - (float)*(undefined8 *)(lVar5 + 0x10);
          fVar14 = fStack_94 - (float)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x20);
          fVar12 = local_90 - *(float *)(lVar5 + 0x18);
          fVar11 = fVar13 * fVar13 + fVar14 * fVar14 + fVar12 * fVar12;
          if (0.01 < fVar11) {
            fVar9 = SQRT(fVar11);
            if (NAN(fVar9)) {
              fVar9 = sqrtf(fVar11);
            }
            local_98 = local_98 + (fVar13 / fVar9) * fVar8;
            fStack_94 = fStack_94 + (fVar14 / fVar9) * fVar8;
            local_90 = fVar8 * (fVar12 / fVar9) + local_90;
          }
        }
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x40;
    } while (uVar6 < *(uint *)(param_2 + 0xd18));
  }
  if (*(int *)(param_2 + 0x680) != 0) {
    uVar6 = 0;
    pfVar7 = (float *)(param_2 + 0x390);
    do {
      fVar8 = fStack_94 - (float)*(undefined8 *)(pfVar7 + 1);
      fVar11 = local_90 - (float)((ulong)*(undefined8 *)(pfVar7 + 1) >> 0x20);
      fVar11 = (local_98 - *pfVar7) * (local_98 - *pfVar7) + fVar8 * fVar8 + fVar11 * fVar11;
      fVar8 = SQRT(fVar11);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(fVar11);
      }
      fVar8 = fVar8 - fVar10;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      fVar8 = (pfVar7[9] + 0.25) - fVar8;
      if (0.0 < fVar8) {
        fVar13 = local_98 - (float)*(undefined8 *)pfVar7;
        fVar14 = fStack_94 - (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
        fVar12 = local_90 - pfVar7[2];
        fVar11 = fVar13 * fVar13 + fVar14 * fVar14 + fVar12 * fVar12;
        if (0.01 < fVar11) {
          fVar9 = SQRT(fVar11);
          if (NAN(fVar9)) {
            fVar9 = sqrtf(fVar11);
          }
          local_98 = local_98 + (fVar13 / fVar9) * fVar8;
          fStack_94 = fStack_94 + (fVar14 / fVar9) * fVar8;
          local_90 = fVar8 * (fVar12 / fVar9) + local_90;
        }
      }
      uVar6 = uVar6 + 1;
      pfVar7 = pfVar7 + 0x10;
    } while (uVar6 < *(uint *)(param_2 + 0x680));
  }
  if (*(int *)(param_2 + 0x270) != 0) {
    uVar6 = 0;
    pfVar7 = (float *)(param_2 + 0x80);
    do {
      fVar8 = fStack_94 - (float)*(undefined8 *)(pfVar7 + 1);
      fVar11 = local_90 - (float)((ulong)*(undefined8 *)(pfVar7 + 1) >> 0x20);
      fVar11 = (local_98 - *pfVar7) * (local_98 - *pfVar7) + fVar8 * fVar8 + fVar11 * fVar11;
      fVar8 = SQRT(fVar11);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(fVar11);
      }
      fVar8 = fVar8 - fVar10;
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      fVar8 = (pfVar7[9] + 1.5) - fVar8;
      if (0.0 < fVar8) {
        fVar13 = local_98 - (float)*(undefined8 *)pfVar7;
        fVar14 = fStack_94 - (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
        fVar12 = local_90 - pfVar7[2];
        fVar11 = fVar13 * fVar13 + fVar14 * fVar14 + fVar12 * fVar12;
        if (0.01 < fVar11) {
          fVar9 = SQRT(fVar11);
          if (NAN(fVar9)) {
            fVar9 = sqrtf(fVar11);
          }
          local_98 = local_98 + (fVar13 / fVar9) * fVar8;
          fStack_94 = fStack_94 + (fVar14 / fVar9) * fVar8;
          local_90 = fVar8 * (fVar12 / fVar9) + local_90;
        }
      }
      uVar6 = uVar6 + 1;
      pfVar7 = pfVar7 + 0x10;
    } while (uVar6 < *(uint *)(param_2 + 0x270));
  }
  local_b8 = 0x4000000040000000;
  local_b0 = 0x40000000;
  uVar4 = FUN_00da2eb4(lVar2);
  uVar6 = FUN_00ef00a0(uVar4,&local_98,&local_a8,&local_b8);
  if ((uVar6 & 1) == 0) {
    FUN_00d55794(lVar2,local_c8,0);
    uVar4 = FUN_00da2eb4(lVar2);
    FUN_00ef01b8(uVar4,local_c8,&local_98,&local_cc,0,0);
    *(ulong *)(param_1 + 0x30) =
         CONCAT44(local_c8._4_4_ + (fStack_94 - local_c8._4_4_) * local_cc,
                  local_c8._0_4_ + (local_98 - local_c8._0_4_) * local_cc);
    *(float *)(param_1 + 0x38) = local_c0 + local_cc * (local_90 - local_c0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = local_a0;
    *(undefined8 *)(param_1 + 0x30) = local_a8;
  }
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d14dc8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d14dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}




void FUN_00d14dd4(void)

{
  return;
}




void FUN_00d14dd8(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_02814318;
  param_1[5] = 0x40400000;
  *(undefined4 *)(param_1 + 7) = DAT_03218f38;
  param_1[6] = DAT_03218f30;
  *(undefined8 *)((long)param_1 + 0x3c) = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0x44) = DAT_03218f38;
  return;
}




undefined4 FUN_00d14e40(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




undefined1  [16] FUN_00d14e4c(void)

{
  return ZEXT816(0x40000000);
}




void thunk_FUN_00d14e58(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong uStack_110;
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_ec;
  undefined1 auStack_e8 [8];
  float fStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined1 auStack_ac [4];
  undefined8 uStack_a8;
  float fStack_a0;
  long lStack_98;
  
  lVar1 = tpidr_el0;
  lStack_98 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d25570(param_2);
  FUN_00d15488(lVar2,param_2,&uStack_a8,auStack_ac);
  fVar8 = *(float *)(*(long *)(lVar2 + 0x38) + 100);
  fVar8 = (*(float *)(*(long *)(lVar2 + 0x38) + 0x68) * (fVar8 + *(float *)(lVar2 + 0x2e8))) / fVar8
  ;
  if (*(int *)(param_2 + 0x680) != 0) {
    uVar4 = 0;
    puVar5 = (undefined8 *)(param_2 + 0x390);
    do {
      fVar12 = fStack_a0;
      if ((*(byte *)((long)puVar5 + 0x2c) >> 1 & 1) != 0) {
        fVar10 = (float)uStack_a8;
        fVar6 = fVar10 - (float)*puVar5;
        fVar14 = (float)(uStack_a8 >> 0x20);
        fVar7 = fVar14 - (float)((ulong)*puVar5 >> 0x20);
        fVar7 = fVar6 * fVar6 + fVar7 * fVar7 +
                (fStack_a0 - *(float *)(puVar5 + 1)) * (fStack_a0 - *(float *)(puVar5 + 1));
        fVar6 = SQRT(fVar7);
        if (NAN(fVar6)) {
          fVar6 = sqrtf(fVar7);
        }
        fVar6 = fVar6 - fVar8;
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        fVar6 = (*(float *)((long)puVar5 + 0x24) + 1.25) - fVar6;
        if (0.01 < fVar6) {
          fVar13 = fVar10 - (float)*puVar5;
          fVar15 = fVar14 - (float)((ulong)*puVar5 >> 0x20);
          fVar16 = fVar12 - *(float *)(puVar5 + 1);
          fVar9 = fVar13 * fVar13 + fVar15 * fVar15 + fVar16 * fVar16;
          uVar3 = DAT_03218f30;
          fVar7 = DAT_03218f38;
          if (1e-06 <= fVar9) {
            fVar7 = SQRT(fVar9);
            if (NAN(fVar7)) {
              fVar7 = sqrtf(fVar9);
            }
            uVar3 = CONCAT44(fVar15 / fVar7,fVar13 / fVar7);
            fVar7 = fVar16 / fVar7;
          }
          uStack_a8 = CONCAT44((float)((ulong)uVar3 >> 0x20) * fVar6 + fVar14,
                               (float)uVar3 * fVar6 + fVar10);
          fStack_a0 = fVar6 * fVar7 + fVar12;
        }
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 8;
    } while (uVar4 < *(uint *)(param_2 + 0x680));
  }
  if (*(int *)(param_2 + 0x270) != 0) {
    uVar4 = 0;
    puVar5 = (undefined8 *)(param_2 + 0x80);
    uVar11 = uStack_a8;
    fVar12 = fStack_a0;
    do {
      fVar10 = (float)uVar11;
      fVar6 = fVar10 - (float)*puVar5;
      fVar14 = (float)(uVar11 >> 0x20);
      fVar7 = fVar14 - (float)((ulong)*puVar5 >> 0x20);
      fVar7 = fVar6 * fVar6 + fVar7 * fVar7 +
              (fVar12 - *(float *)(puVar5 + 1)) * (fVar12 - *(float *)(puVar5 + 1));
      fVar6 = SQRT(fVar7);
      if (NAN(fVar6)) {
        fVar6 = sqrtf(fVar7);
      }
      fVar6 = fVar6 - fVar8;
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      fVar6 = (*(float *)((long)puVar5 + 0x24) + 2.0) - fVar6;
      if (0.01 < fVar6) {
        fVar13 = fVar10 - (float)*puVar5;
        fVar15 = fVar14 - (float)((ulong)*puVar5 >> 0x20);
        fVar16 = fVar12 - *(float *)(puVar5 + 1);
        fVar9 = fVar13 * fVar13 + fVar15 * fVar15 + fVar16 * fVar16;
        uVar3 = DAT_03218f30;
        fVar7 = DAT_03218f38;
        if (1e-06 <= fVar9) {
          fVar7 = SQRT(fVar9);
          if (NAN(fVar7)) {
            fVar7 = sqrtf(fVar9);
          }
          uVar3 = CONCAT44(fVar15 / fVar7,fVar13 / fVar7);
          fVar7 = fVar16 / fVar7;
        }
        uVar11 = CONCAT44((float)((ulong)uVar3 >> 0x20) * fVar6 + fVar14,
                          (float)uVar3 * fVar6 + fVar10);
        fVar12 = fVar6 * fVar7 + fVar12;
        uStack_a8 = uVar11;
        fStack_a0 = fVar12;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 8;
    } while (uVar4 < *(uint *)(param_2 + 0x270));
  }
  fVar12 = fStack_a0;
  if (*(int *)(param_2 + 0xd18) == 0) {
    uStack_110 = uStack_a8 & 0xffffffff;
    fVar8 = uStack_a8._4_4_;
  }
  else {
    uVar4 = 0;
    puVar5 = (undefined8 *)(param_2 + 0xa28);
    uStack_110 = uStack_a8;
    do {
      fVar10 = (float)uStack_110;
      fVar6 = fVar10 - (float)*puVar5;
      fVar14 = (float)(uStack_110 >> 0x20);
      fVar7 = fVar14 - (float)((ulong)*puVar5 >> 0x20);
      fVar7 = fVar6 * fVar6 + fVar7 * fVar7 +
              (fVar12 - *(float *)(puVar5 + 1)) * (fVar12 - *(float *)(puVar5 + 1));
      fVar6 = SQRT(fVar7);
      if (NAN(fVar6)) {
        fVar6 = sqrtf(fVar7);
      }
      fVar7 = fVar6 - fVar8;
      if (fVar6 - fVar8 <= 0.0) {
        fVar7 = 0.0;
      }
      fVar7 = (*(float *)((long)puVar5 + 0x24) + 1.25) - fVar7;
      if (0.01 < fVar7) {
        fVar15 = fVar10 - (float)*puVar5;
        fVar16 = fVar14 - (float)((ulong)*puVar5 >> 0x20);
        fVar13 = fVar12 - *(float *)(puVar5 + 1);
        fVar9 = fVar15 * fVar15 + fVar16 * fVar16 + fVar13 * fVar13;
        uVar3 = DAT_03218f30;
        fVar6 = DAT_03218f38;
        if (1e-06 <= fVar9) {
          fVar6 = SQRT(fVar9);
          if (NAN(fVar6)) {
            fVar6 = sqrtf(fVar9);
          }
          uVar3 = CONCAT44(fVar16 / fVar6,fVar15 / fVar6);
          fVar6 = fVar13 / fVar6;
        }
        uStack_110 = CONCAT44(fVar14 + (float)((ulong)uVar3 >> 0x20) * fVar7,
                              fVar10 + (float)uVar3 * fVar7);
        fVar12 = fVar7 * fVar6 + fVar12;
        uStack_a8 = uStack_110;
        fStack_a0 = fVar12;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 8;
    } while (uVar4 < *(uint *)(param_2 + 0xd18));
    fVar8 = (float)(uStack_110 >> 0x20);
  }
  FUN_00d55794(lVar2,&fStack_b8,0);
  fVar8 = fVar8 - fStack_b4;
  fVar10 = (float)uStack_110;
  fVar14 = fVar10 - fStack_b8;
  fVar12 = fVar12 - fStack_b0;
  fVar7 = fVar14 * fVar14 + fVar8 * fVar8 + fVar12 * fVar12;
  fVar6 = SQRT(fVar7);
  if (NAN(fVar6)) {
    fVar6 = sqrtf(fVar7);
  }
  if ((0.01 < fVar6) && (fVar6 < 2.5)) {
    fVar6 = fVar10 * fVar10 + uStack_a8._4_4_ * uStack_a8._4_4_ + fStack_a0 * fStack_a0;
    if ((1e-06 <= fVar6) && (NAN(SQRT(fVar6)))) {
      sqrtf(fVar6);
    }
    fStack_a0 = fVar12 * 2.5 + fStack_b0;
    uStack_a8 = CONCAT44(fVar8 * 2.5 + fStack_b4,fVar14 * 2.5 + fStack_b8);
  }
  uStack_d8 = 0x4000000040000000;
  uStack_d0 = 0x40000000;
  uVar3 = FUN_00da2eb4(lVar2);
  uVar4 = FUN_00ef00a0(uVar3,&uStack_a8,&uStack_c8,&uStack_d8);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = (**(code **)**(undefined8 **)(param_2 + 0x1450))
                        (*(undefined8 **)(param_2 + 0x1450),param_2,&uStack_c8), (uVar4 & 1) == 0))
  {
    FUN_00d55794(lVar2,auStack_e8,0);
    uVar3 = FUN_00da2eb4(lVar2);
    FUN_00ef01b8(uVar3,auStack_e8,&uStack_a8,&fStack_ec,0,0);
    fStack_f0 = fStack_e0 + fStack_ec * (fStack_a0 - fStack_e0);
    uStack_f8 = CONCAT44(auStack_e8._4_4_ +
                         (*(float *)((ulong)&uStack_a8 | 4) - auStack_e8._4_4_) * fStack_ec,
                         auStack_e8._0_4_ + ((float)uStack_a8 - auStack_e8._0_4_) * fStack_ec);
    uVar4 = (**(code **)**(undefined8 **)(param_2 + 0x1450))
                      (*(undefined8 **)(param_2 + 0x1450),param_2,&uStack_f8);
    if ((uVar4 & 1) == 0) goto LAB_00d15440;
    *(float *)(param_1 + 0x38) = fStack_f0;
    uStack_c8 = uStack_f8;
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = uStack_c0;
  }
  *(undefined8 *)(param_1 + 0x30) = uStack_c8;
LAB_00d15440:
  if (*(long *)(lVar1 + 0x28) != lStack_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d14e58(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong local_110;
  undefined8 local_f8;
  float local_f0;
  float local_ec;
  undefined1 local_e8 [8];
  float local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined1 auStack_ac [4];
  undefined8 local_a8;
  float local_a0;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d25570(param_2);
  FUN_00d15488(lVar2,param_2,&local_a8,auStack_ac);
  fVar8 = *(float *)(*(long *)(lVar2 + 0x38) + 100);
  fVar8 = (*(float *)(*(long *)(lVar2 + 0x38) + 0x68) * (fVar8 + *(float *)(lVar2 + 0x2e8))) / fVar8
  ;
  if (*(int *)(param_2 + 0x680) != 0) {
    uVar4 = 0;
    puVar5 = (undefined8 *)(param_2 + 0x390);
    do {
      fVar12 = local_a0;
      if ((*(byte *)((long)puVar5 + 0x2c) >> 1 & 1) != 0) {
        fVar10 = (float)local_a8;
        fVar6 = fVar10 - (float)*puVar5;
        fVar14 = (float)(local_a8 >> 0x20);
        fVar7 = fVar14 - (float)((ulong)*puVar5 >> 0x20);
        fVar7 = fVar6 * fVar6 + fVar7 * fVar7 +
                (local_a0 - *(float *)(puVar5 + 1)) * (local_a0 - *(float *)(puVar5 + 1));
        fVar6 = SQRT(fVar7);
        if (NAN(fVar6)) {
          fVar6 = sqrtf(fVar7);
        }
        fVar6 = fVar6 - fVar8;
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        fVar6 = (*(float *)((long)puVar5 + 0x24) + 1.25) - fVar6;
        if (0.01 < fVar6) {
          fVar13 = fVar10 - (float)*puVar5;
          fVar15 = fVar14 - (float)((ulong)*puVar5 >> 0x20);
          fVar16 = fVar12 - *(float *)(puVar5 + 1);
          fVar9 = fVar13 * fVar13 + fVar15 * fVar15 + fVar16 * fVar16;
          uVar3 = DAT_03218f30;
          fVar7 = DAT_03218f38;
          if (1e-06 <= fVar9) {
            fVar7 = SQRT(fVar9);
            if (NAN(fVar7)) {
              fVar7 = sqrtf(fVar9);
            }
            uVar3 = CONCAT44(fVar15 / fVar7,fVar13 / fVar7);
            fVar7 = fVar16 / fVar7;
          }
          local_a8 = CONCAT44((float)((ulong)uVar3 >> 0x20) * fVar6 + fVar14,
                              (float)uVar3 * fVar6 + fVar10);
          local_a0 = fVar6 * fVar7 + fVar12;
        }
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 8;
    } while (uVar4 < *(uint *)(param_2 + 0x680));
  }
  if (*(int *)(param_2 + 0x270) != 0) {
    uVar4 = 0;
    puVar5 = (undefined8 *)(param_2 + 0x80);
    uVar11 = local_a8;
    fVar12 = local_a0;
    do {
      fVar10 = (float)uVar11;
      fVar6 = fVar10 - (float)*puVar5;
      fVar14 = (float)(uVar11 >> 0x20);
      fVar7 = fVar14 - (float)((ulong)*puVar5 >> 0x20);
      fVar7 = fVar6 * fVar6 + fVar7 * fVar7 +
              (fVar12 - *(float *)(puVar5 + 1)) * (fVar12 - *(float *)(puVar5 + 1));
      fVar6 = SQRT(fVar7);
      if (NAN(fVar6)) {
        fVar6 = sqrtf(fVar7);
      }
      fVar6 = fVar6 - fVar8;
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      fVar6 = (*(float *)((long)puVar5 + 0x24) + 2.0) - fVar6;
      if (0.01 < fVar6) {
        fVar13 = fVar10 - (float)*puVar5;
        fVar15 = fVar14 - (float)((ulong)*puVar5 >> 0x20);
        fVar16 = fVar12 - *(float *)(puVar5 + 1);
        fVar9 = fVar13 * fVar13 + fVar15 * fVar15 + fVar16 * fVar16;
        uVar3 = DAT_03218f30;
        fVar7 = DAT_03218f38;
        if (1e-06 <= fVar9) {
          fVar7 = SQRT(fVar9);
          if (NAN(fVar7)) {
            fVar7 = sqrtf(fVar9);
          }
          uVar3 = CONCAT44(fVar15 / fVar7,fVar13 / fVar7);
          fVar7 = fVar16 / fVar7;
        }
        uVar11 = CONCAT44((float)((ulong)uVar3 >> 0x20) * fVar6 + fVar14,
                          (float)uVar3 * fVar6 + fVar10);
        fVar12 = fVar6 * fVar7 + fVar12;
        local_a8 = uVar11;
        local_a0 = fVar12;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 8;
    } while (uVar4 < *(uint *)(param_2 + 0x270));
  }
  fVar12 = local_a0;
  if (*(int *)(param_2 + 0xd18) == 0) {
    local_110 = local_a8 & 0xffffffff;
    fVar8 = local_a8._4_4_;
  }
  else {
    uVar4 = 0;
    puVar5 = (undefined8 *)(param_2 + 0xa28);
    local_110 = local_a8;
    do {
      fVar10 = (float)local_110;
      fVar6 = fVar10 - (float)*puVar5;
      fVar14 = (float)(local_110 >> 0x20);
      fVar7 = fVar14 - (float)((ulong)*puVar5 >> 0x20);
      fVar7 = fVar6 * fVar6 + fVar7 * fVar7 +
              (fVar12 - *(float *)(puVar5 + 1)) * (fVar12 - *(float *)(puVar5 + 1));
      fVar6 = SQRT(fVar7);
      if (NAN(fVar6)) {
        fVar6 = sqrtf(fVar7);
      }
      fVar7 = fVar6 - fVar8;
      if (fVar6 - fVar8 <= 0.0) {
        fVar7 = 0.0;
      }
      fVar7 = (*(float *)((long)puVar5 + 0x24) + 1.25) - fVar7;
      if (0.01 < fVar7) {
        fVar15 = fVar10 - (float)*puVar5;
        fVar16 = fVar14 - (float)((ulong)*puVar5 >> 0x20);
        fVar13 = fVar12 - *(float *)(puVar5 + 1);
        fVar9 = fVar15 * fVar15 + fVar16 * fVar16 + fVar13 * fVar13;
        uVar3 = DAT_03218f30;
        fVar6 = DAT_03218f38;
        if (1e-06 <= fVar9) {
          fVar6 = SQRT(fVar9);
          if (NAN(fVar6)) {
            fVar6 = sqrtf(fVar9);
          }
          uVar3 = CONCAT44(fVar16 / fVar6,fVar15 / fVar6);
          fVar6 = fVar13 / fVar6;
        }
        local_110 = CONCAT44(fVar14 + (float)((ulong)uVar3 >> 0x20) * fVar7,
                             fVar10 + (float)uVar3 * fVar7);
        fVar12 = fVar7 * fVar6 + fVar12;
        local_a8 = local_110;
        local_a0 = fVar12;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 8;
    } while (uVar4 < *(uint *)(param_2 + 0xd18));
    fVar8 = (float)(local_110 >> 0x20);
  }
  FUN_00d55794(lVar2,&local_b8,0);
  fVar8 = fVar8 - fStack_b4;
  fVar10 = (float)local_110;
  fVar14 = fVar10 - local_b8;
  fVar12 = fVar12 - local_b0;
  fVar7 = fVar14 * fVar14 + fVar8 * fVar8 + fVar12 * fVar12;
  fVar6 = SQRT(fVar7);
  if (NAN(fVar6)) {
    fVar6 = sqrtf(fVar7);
  }
  if ((0.01 < fVar6) && (fVar6 < 2.5)) {
    fVar6 = fVar10 * fVar10 + local_a8._4_4_ * local_a8._4_4_ + local_a0 * local_a0;
    if ((1e-06 <= fVar6) && (NAN(SQRT(fVar6)))) {
      sqrtf(fVar6);
    }
    local_a0 = fVar12 * 2.5 + local_b0;
    local_a8 = CONCAT44(fVar8 * 2.5 + fStack_b4,fVar14 * 2.5 + local_b8);
  }
  local_d8 = 0x4000000040000000;
  local_d0 = 0x40000000;
  uVar3 = FUN_00da2eb4(lVar2);
  uVar4 = FUN_00ef00a0(uVar3,&local_a8,&local_c8,&local_d8);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = (**(code **)**(undefined8 **)(param_2 + 0x1450))
                        (*(undefined8 **)(param_2 + 0x1450),param_2,&local_c8), (uVar4 & 1) == 0)) {
    FUN_00d55794(lVar2,local_e8,0);
    uVar3 = FUN_00da2eb4(lVar2);
    FUN_00ef01b8(uVar3,local_e8,&local_a8,&local_ec,0,0);
    local_f0 = local_e0 + local_ec * (local_a0 - local_e0);
    local_f8 = CONCAT44(local_e8._4_4_ +
                        (*(float *)((ulong)&local_a8 | 4) - local_e8._4_4_) * local_ec,
                        local_e8._0_4_ + ((float)local_a8 - local_e8._0_4_) * local_ec);
    uVar4 = (**(code **)**(undefined8 **)(param_2 + 0x1450))
                      (*(undefined8 **)(param_2 + 0x1450),param_2,&local_f8);
    if ((uVar4 & 1) == 0) goto LAB_00d15440;
    *(float *)(param_1 + 0x38) = local_f0;
    local_c8 = local_f8;
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = local_c0;
  }
  *(undefined8 *)(param_1 + 0x30) = local_c8;
LAB_00d15440:
  if (*(long *)(lVar1 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00d14e58(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong uStack_110;
  undefined8 uStack_f8;
  float fStack_f0;
  float fStack_ec;
  undefined1 auStack_e8 [8];
  float fStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined1 auStack_ac [4];
  undefined8 uStack_a8;
  float fStack_a0;
  long lStack_98;
  
  lVar1 = tpidr_el0;
  lStack_98 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d25570(param_2);
  FUN_00d15488(lVar2,param_2,&uStack_a8,auStack_ac);
  fVar8 = *(float *)(*(long *)(lVar2 + 0x38) + 100);
  fVar8 = (*(float *)(*(long *)(lVar2 + 0x38) + 0x68) * (fVar8 + *(float *)(lVar2 + 0x2e8))) / fVar8
  ;
  if (*(int *)(param_2 + 0x680) != 0) {
    uVar4 = 0;
    puVar5 = (undefined8 *)(param_2 + 0x390);
    do {
      fVar12 = fStack_a0;
      if ((*(byte *)((long)puVar5 + 0x2c) >> 1 & 1) != 0) {
        fVar10 = (float)uStack_a8;
        fVar6 = fVar10 - (float)*puVar5;
        fVar14 = (float)(uStack_a8 >> 0x20);
        fVar7 = fVar14 - (float)((ulong)*puVar5 >> 0x20);
        fVar7 = fVar6 * fVar6 + fVar7 * fVar7 +
                (fStack_a0 - *(float *)(puVar5 + 1)) * (fStack_a0 - *(float *)(puVar5 + 1));
        fVar6 = SQRT(fVar7);
        if (NAN(fVar6)) {
          fVar6 = sqrtf(fVar7);
        }
        fVar6 = fVar6 - fVar8;
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        fVar6 = (*(float *)((long)puVar5 + 0x24) + 1.25) - fVar6;
        if (0.01 < fVar6) {
          fVar13 = fVar10 - (float)*puVar5;
          fVar15 = fVar14 - (float)((ulong)*puVar5 >> 0x20);
          fVar16 = fVar12 - *(float *)(puVar5 + 1);
          fVar9 = fVar13 * fVar13 + fVar15 * fVar15 + fVar16 * fVar16;
          uVar3 = DAT_03218f30;
          fVar7 = DAT_03218f38;
          if (1e-06 <= fVar9) {
            fVar7 = SQRT(fVar9);
            if (NAN(fVar7)) {
              fVar7 = sqrtf(fVar9);
            }
            uVar3 = CONCAT44(fVar15 / fVar7,fVar13 / fVar7);
            fVar7 = fVar16 / fVar7;
          }
          uStack_a8 = CONCAT44((float)((ulong)uVar3 >> 0x20) * fVar6 + fVar14,
                               (float)uVar3 * fVar6 + fVar10);
          fStack_a0 = fVar6 * fVar7 + fVar12;
        }
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 8;
    } while (uVar4 < *(uint *)(param_2 + 0x680));
  }
  if (*(int *)(param_2 + 0x270) != 0) {
    uVar4 = 0;
    puVar5 = (undefined8 *)(param_2 + 0x80);
    uVar11 = uStack_a8;
    fVar12 = fStack_a0;
    do {
      fVar10 = (float)uVar11;
      fVar6 = fVar10 - (float)*puVar5;
      fVar14 = (float)(uVar11 >> 0x20);
      fVar7 = fVar14 - (float)((ulong)*puVar5 >> 0x20);
      fVar7 = fVar6 * fVar6 + fVar7 * fVar7 +
              (fVar12 - *(float *)(puVar5 + 1)) * (fVar12 - *(float *)(puVar5 + 1));
      fVar6 = SQRT(fVar7);
      if (NAN(fVar6)) {
        fVar6 = sqrtf(fVar7);
      }
      fVar6 = fVar6 - fVar8;
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      fVar6 = (*(float *)((long)puVar5 + 0x24) + 2.0) - fVar6;
      if (0.01 < fVar6) {
        fVar13 = fVar10 - (float)*puVar5;
        fVar15 = fVar14 - (float)((ulong)*puVar5 >> 0x20);
        fVar16 = fVar12 - *(float *)(puVar5 + 1);
        fVar9 = fVar13 * fVar13 + fVar15 * fVar15 + fVar16 * fVar16;
        uVar3 = DAT_03218f30;
        fVar7 = DAT_03218f38;
        if (1e-06 <= fVar9) {
          fVar7 = SQRT(fVar9);
          if (NAN(fVar7)) {
            fVar7 = sqrtf(fVar9);
          }
          uVar3 = CONCAT44(fVar15 / fVar7,fVar13 / fVar7);
          fVar7 = fVar16 / fVar7;
        }
        uVar11 = CONCAT44((float)((ulong)uVar3 >> 0x20) * fVar6 + fVar14,
                          (float)uVar3 * fVar6 + fVar10);
        fVar12 = fVar6 * fVar7 + fVar12;
        uStack_a8 = uVar11;
        fStack_a0 = fVar12;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 8;
    } while (uVar4 < *(uint *)(param_2 + 0x270));
  }
  fVar12 = fStack_a0;
  if (*(int *)(param_2 + 0xd18) == 0) {
    uStack_110 = uStack_a8 & 0xffffffff;
    fVar8 = uStack_a8._4_4_;
  }
  else {
    uVar4 = 0;
    puVar5 = (undefined8 *)(param_2 + 0xa28);
    uStack_110 = uStack_a8;
    do {
      fVar10 = (float)uStack_110;
      fVar6 = fVar10 - (float)*puVar5;
      fVar14 = (float)(uStack_110 >> 0x20);
      fVar7 = fVar14 - (float)((ulong)*puVar5 >> 0x20);
      fVar7 = fVar6 * fVar6 + fVar7 * fVar7 +
              (fVar12 - *(float *)(puVar5 + 1)) * (fVar12 - *(float *)(puVar5 + 1));
      fVar6 = SQRT(fVar7);
      if (NAN(fVar6)) {
        fVar6 = sqrtf(fVar7);
      }
      fVar7 = fVar6 - fVar8;
      if (fVar6 - fVar8 <= 0.0) {
        fVar7 = 0.0;
      }
      fVar7 = (*(float *)((long)puVar5 + 0x24) + 1.25) - fVar7;
      if (0.01 < fVar7) {
        fVar15 = fVar10 - (float)*puVar5;
        fVar16 = fVar14 - (float)((ulong)*puVar5 >> 0x20);
        fVar13 = fVar12 - *(float *)(puVar5 + 1);
        fVar9 = fVar15 * fVar15 + fVar16 * fVar16 + fVar13 * fVar13;
        uVar3 = DAT_03218f30;
        fVar6 = DAT_03218f38;
        if (1e-06 <= fVar9) {
          fVar6 = SQRT(fVar9);
          if (NAN(fVar6)) {
            fVar6 = sqrtf(fVar9);
          }
          uVar3 = CONCAT44(fVar16 / fVar6,fVar15 / fVar6);
          fVar6 = fVar13 / fVar6;
        }
        uStack_110 = CONCAT44(fVar14 + (float)((ulong)uVar3 >> 0x20) * fVar7,
                              fVar10 + (float)uVar3 * fVar7);
        fVar12 = fVar7 * fVar6 + fVar12;
        uStack_a8 = uStack_110;
        fStack_a0 = fVar12;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 8;
    } while (uVar4 < *(uint *)(param_2 + 0xd18));
    fVar8 = (float)(uStack_110 >> 0x20);
  }
  FUN_00d55794(lVar2,&fStack_b8,0);
  fVar8 = fVar8 - fStack_b4;
  fVar10 = (float)uStack_110;
  fVar14 = fVar10 - fStack_b8;
  fVar12 = fVar12 - fStack_b0;
  fVar7 = fVar14 * fVar14 + fVar8 * fVar8 + fVar12 * fVar12;
  fVar6 = SQRT(fVar7);
  if (NAN(fVar6)) {
    fVar6 = sqrtf(fVar7);
  }
  if ((0.01 < fVar6) && (fVar6 < 2.5)) {
    fVar6 = fVar10 * fVar10 + uStack_a8._4_4_ * uStack_a8._4_4_ + fStack_a0 * fStack_a0;
    if ((1e-06 <= fVar6) && (NAN(SQRT(fVar6)))) {
      sqrtf(fVar6);
    }
    fStack_a0 = fVar12 * 2.5 + fStack_b0;
    uStack_a8 = CONCAT44(fVar8 * 2.5 + fStack_b4,fVar14 * 2.5 + fStack_b8);
  }
  uStack_d8 = 0x4000000040000000;
  uStack_d0 = 0x40000000;
  uVar3 = FUN_00da2eb4(lVar2);
  uVar4 = FUN_00ef00a0(uVar3,&uStack_a8,&uStack_c8,&uStack_d8);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = (**(code **)**(undefined8 **)(param_2 + 0x1450))
                        (*(undefined8 **)(param_2 + 0x1450),param_2,&uStack_c8), (uVar4 & 1) == 0))
  {
    FUN_00d55794(lVar2,auStack_e8,0);
    uVar3 = FUN_00da2eb4(lVar2);
    FUN_00ef01b8(uVar3,auStack_e8,&uStack_a8,&fStack_ec,0,0);
    fStack_f0 = fStack_e0 + fStack_ec * (fStack_a0 - fStack_e0);
    uStack_f8 = CONCAT44(auStack_e8._4_4_ +
                         (*(float *)((ulong)&uStack_a8 | 4) - auStack_e8._4_4_) * fStack_ec,
                         auStack_e8._0_4_ + ((float)uStack_a8 - auStack_e8._0_4_) * fStack_ec);
    uVar4 = (**(code **)**(undefined8 **)(param_2 + 0x1450))
                      (*(undefined8 **)(param_2 + 0x1450),param_2,&uStack_f8);
    if ((uVar4 & 1) == 0) goto LAB_00d15440;
    *(float *)(param_1 + 0x38) = fStack_f0;
    uStack_c8 = uStack_f8;
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = uStack_c0;
  }
  *(undefined8 *)(param_1 + 0x30) = uStack_c8;
LAB_00d15440:
  if (*(long *)(lVar1 + 0x28) != lStack_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

