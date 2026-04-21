// functions/00d19 — 47 functions
#include "libGameKindred.h"




void FUN_00d190d4(void)

{
  return;
}




void FUN_00d190d8(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02815690;
  param_1[5] = 0;
  return;
}




void FUN_00d1910c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_00d19114(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = FUN_00e6a474(uVar3);
  uVar1 = FUN_0091ed5c(uVar3,uVar1,0x12345678);
  puVar2 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
  uVar1 = FUN_009bc24c();
  *puVar2 = uVar1;
  return 1;
}




void FUN_00d19184(void)

{
  return;
}




void FUN_00d19188(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02815718;
  param_1[5] = 0;
  return;
}




void FUN_00d191bc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_00d191c4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = FUN_00e6a474(uVar5);
  uVar3 = FUN_0091ed5c(uVar5,uVar3,0x12345678);
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar3);
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  return 1;
}




void FUN_00d19240(void)

{
  return;
}




void FUN_00d19244(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028157a0;
  param_1[5] = 0;
  return;
}




void FUN_00d19278(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_00d19280(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x34);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = FUN_00e6a474(uVar4);
  uVar2 = FUN_0091ed5c(uVar4,uVar2,0x12345678);
  puVar3 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar2);
  *puVar3 = uVar5;
  *(undefined4 *)(puVar3 + 1) = uVar1;
  return 1;
}




void FUN_00d19300(void)

{
  return;
}




void FUN_00d19304(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02815828;
  *(undefined4 *)((long)param_1 + 0x24) = 0x3f000000;
  return;
}




void FUN_00d1933c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




undefined4 FUN_00d19344(long param_1,long param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = 3;
  fVar2 = *(float *)(param_1 + 0x24) - *(float *)(param_2 + 0x6c);
  if (fVar2 <= 0.0) {
    uVar1 = 1;
  }
  *(float *)(param_1 + 0x24) = fVar2;
  return uVar1;
}




void FUN_00d19368(void)

{
  return;
}




void FUN_00d1936c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}




undefined4 FUN_00d19374(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  lVar3 = FUN_00d25570(param_2);
  uVar1 = FUN_00d588cc(lVar3,*(undefined8 *)(param_1 + 0x28));
  uVar2 = FUN_00d588cc(lVar3,*(undefined8 *)(param_1 + 0x30));
  uVar4 = FUN_00d5867c(lVar3,uVar1);
  if (((uVar4 & 1) == 0) || (uVar4 = FUN_00d5867c(lVar3,uVar2), (uVar4 & 1) == 0)) {
    uVar1 = 2;
  }
  else {
    lVar5 = *(long *)(lVar3 + 0x18);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar5 = *(long *)(lVar5 + 0x20);
    }
    fVar6 = (float)FUN_00d53b2c(lVar5,uVar1);
    lVar5 = *(long *)(lVar3 + 0x18);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar5 = *(long *)(lVar5 + 0x20);
    }
    fVar7 = (float)FUN_00d53b2c(lVar5,uVar2);
    uVar1 = 2;
    if (fVar6 + fVar7 <= *(float *)(*(long *)(lVar3 + 0x40) + 0x310)) {
      uVar1 = 1;
    }
  }
  return uVar1;
}




void FUN_00d1946c(void)

{
  return;
}




void FUN_00d19470(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  *(undefined4 *)(param_4 + 0x24) = param_1;
  *(undefined4 *)(param_4 + 0x28) = 0;
  *(undefined4 *)(param_4 + 0x2c) = param_2;
  *(undefined4 *)(param_4 + 0x30) = param_3;
  return;
}




void FUN_00d19480(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  byte bVar8;
  byte bVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long local_c8 [8];
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  fVar11 = *(float *)(param_2 + 0x6c) + *(float *)(param_1 + 0x28);
  *(float *)(param_1 + 0x28) = fVar11;
  if (*(float *)(param_1 + 0x24) <= fVar11) {
    if (*(int *)(param_2 + 0x1228) == 0) {
      uVar6 = 0;
      bVar8 = 0;
    }
    else {
      uVar5 = 0;
      bVar8 = 0;
      uVar6 = 0;
      lVar4 = param_2 + 0x1028;
      do {
        if (((*(long *)(param_2 + 0x1678) != 0) && (*(long *)(param_2 + 0x1680) != 0)) &&
           (uVar2 = FUN_00da2a10(0x41000000,0,*(long *)(param_2 + 0x1678),
                                 *(long *)(param_2 + 0x1680),lVar4 + 0x10), (uVar2 & 1) != 0)) {
          local_c8[uVar6] = lVar4;
          uVar6 = uVar6 + 1;
          bVar8 = 1;
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x40;
      } while (uVar5 < *(uint *)(param_2 + 0x1228));
    }
    if (*(int *)(param_2 + 0x1330) != 0) {
      uVar5 = 0;
      bVar9 = 0;
      lVar4 = param_2 + 0x1240;
      do {
        if (((*(long *)(param_2 + 0x1678) != 0) && (*(long *)(param_2 + 0x1680) != 0)) &&
           (uVar2 = FUN_00da2a10(0x41000000,0,*(long *)(param_2 + 0x1678),
                                 *(long *)(param_2 + 0x1680),lVar4), (uVar2 & 1) != 0)) {
          bVar9 = 1;
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x40;
      } while (uVar5 < *(uint *)(param_2 + 0x1330));
      uVar3 = 2;
      if ((!(bool)(bVar8 & bVar9)) || (uVar6 == 0)) goto LAB_00d19698;
      uVar5 = 0;
      plVar7 = local_c8;
      do {
        puVar10 = (undefined8 *)*plVar7;
        lVar4 = (**(code **)(*(long *)*puVar10 + 0x10))();
        fVar11 = DAT_0314ffe0;
        lVar4 = *(long *)(lVar4 + 0x40);
        fVar12 = *(float *)(param_2 + 0x1588) - *(float *)(puVar10 + 2);
        fVar13 = (float)*(undefined8 *)(param_2 + 0x158c) -
                 (float)*(undefined8 *)((long)puVar10 + 0x14);
        fVar14 = (float)((ulong)*(undefined8 *)(param_2 + 0x158c) >> 0x20) -
                 (float)((ulong)*(undefined8 *)((long)puVar10 + 0x14) >> 0x20);
        fVar14 = fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14;
        fVar15 = *(float *)(lVar4 + 0x308);
        fVar12 = (*(float *)(lVar4 + 0x1a0) + 1.0) *
                 (*(float *)(lVar4 + 0x38) +
                 *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0));
        fVar13 = SQRT(fVar14);
        if (DAT_031500a0 <= fVar12) {
          fVar12 = DAT_031500a0;
        }
        if (NAN(fVar13)) {
          fVar13 = sqrtf(fVar14);
        }
        if (*(float *)(param_1 + 0x30) <= fVar13) {
          if (fVar11 <= fVar12) {
            fVar11 = fVar12;
          }
          if (fVar15 / fVar11 <= *(float *)(param_1 + 0x2c)) {
            *(undefined4 *)(param_1 + 0x28) = 0;
            uVar3 = 1;
            *(long *)(param_2 + 0x1420) = *plVar7;
            goto LAB_00d19698;
          }
        }
        uVar5 = uVar5 + 1;
        plVar7 = plVar7 + 1;
      } while (uVar5 < uVar6);
    }
  }
  uVar3 = 2;
LAB_00d19698:
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}




undefined8 FUN_00d196e8(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_2 + 0x1678) != 0) && (*(long *)(param_2 + 0x1680) != 0)) {
    uVar1 = FUN_00da2a10(0x41000000,0,*(long *)(param_2 + 0x1678),*(long *)(param_2 + 0x1680),
                         param_3 + 0x10);
    return uVar1;
  }
  return 0;
}




void FUN_00d19710(void)

{
  return;
}




undefined8 FUN_00d19714(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  byte *pbVar7;
  
  plVar1 = (long *)*param_2;
  if (plVar1 == (long *)0x0) {
    uVar2 = 0;
  }
  else if ((int)param_2[1] == (int)plVar1[1]) {
    uVar2 = (**(code **)(*plVar1 + 0x10))();
  }
  else {
    *param_2 = 0;
    uVar2 = 0;
    *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
  }
  plVar5 = (long *)param_2[0x284];
  plVar1 = (long *)*plVar5;
  if (plVar1 != (long *)0x0) {
    if ((int)plVar5[1] == (int)plVar1[1]) {
      lVar3 = (**(code **)(*plVar1 + 0x10))();
      if ((((lVar3 != 0) && ((*(ushort *)(lVar3 + 0x2f4) & 0x310) != 0)) &&
          (uVar4 = FUN_00e0b8cc(uVar2), (uVar4 & 1) != 0)) &&
         ((*(float *)(param_2[0x284] + 0x28) <= *(float *)(param_2 + 9) &&
          (*(uint *)(param_2 + 0x6f) != 0)))) {
        uVar6 = 0;
        pbVar7 = (byte *)((long)param_2 + 0x2b4);
        do {
          if ((*pbVar7 & 1) != 0) {
            return 1;
          }
          uVar6 = uVar6 + 1;
          pbVar7 = pbVar7 + 0x40;
        } while (uVar6 < *(uint *)(param_2 + 0x6f));
        return 2;
      }
    }
    else {
      *plVar5 = 0;
      *(undefined4 *)(plVar5 + 1) = DAT_03214ce8;
    }
  }
  return 2;
}




void FUN_00d19828(void)

{
  return;
}




undefined8 FUN_00d1982c(undefined8 param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  plVar6 = *(long **)(param_2 + 0x1420);
  plVar2 = (long *)*plVar6;
  if (plVar2 != (long *)0x0) {
    if ((int)plVar6[1] == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if ((((lVar3 != 0) && ((*(byte *)(param_2 + 0x54) >> 3 & 1) == 0)) &&
          ((*(byte *)(lVar3 + 0x2f5) & 1) != 0)) && (*(int *)(param_2 + 0x378) != 0)) {
        uVar7 = 0;
        bVar1 = false;
        plVar2 = (long *)(param_2 + 0x278);
        do {
          plVar6 = (long *)*plVar2;
          uVar4 = 0;
          if (plVar6 != (long *)0x0) {
            if ((int)plVar2[1] == (int)plVar6[1]) {
              uVar4 = (**(code **)(*plVar6 + 0x10))();
            }
            else {
              *plVar2 = 0;
              uVar4 = 0;
              *(undefined4 *)(plVar2 + 1) = DAT_03214ce8;
            }
          }
          uVar5 = FUN_00e0b8cc(uVar4);
          if ((uVar5 & 1) != 0) {
            if ((*(byte *)((long)plVar2 + 0x3c) >> 3 & 1) != 0) {
              return 2;
            }
            bVar1 = true;
          }
          uVar7 = uVar7 + 1;
          plVar2 = plVar2 + 8;
        } while (uVar7 < *(uint *)(param_2 + 0x378));
        if (bVar1) {
          return 1;
        }
      }
    }
    else {
      *plVar6 = 0;
      *(undefined4 *)(plVar6 + 1) = DAT_03214ce8;
    }
  }
  return 2;
}




void FUN_00d19934(void)

{
  return;
}




undefined8 FUN_00d19938(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  float fVar6;
  
  uVar1 = *(uint *)(param_2 + 0x1330);
  if (uVar1 != 0) {
    uVar4 = 0;
    puVar5 = (undefined8 *)(param_2 + 0x1230);
    do {
      fVar6 = *(float *)(puVar5 + 3);
      lVar2 = (**(code **)(*(long *)*puVar5 + 0x10))();
      if (((14.0 < fVar6) && ((*(uint *)(lVar2 + 0x2f4) & 1) != 0)) &&
         (uVar3 = FUN_00e0b8cc(), (uVar3 & 1) != 0)) {
        *(undefined8 **)(param_2 + 0x1428) = puVar5;
        return 1;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 8;
    } while (uVar4 < uVar1);
  }
  return 2;
}




void FUN_00d199c8(void)

{
  return;
}




undefined8 FUN_00d199cc(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar1 = *(uint *)(param_2 + 0x1330);
  if (uVar1 != 0) {
    uVar8 = 0;
    plVar7 = (long *)(param_2 + 0x1230);
    do {
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
      uVar5 = FUN_00e0b8cc(uVar4);
      if ((uVar5 & 1) != 0) {
        *(long **)(param_2 + 0x1428) = plVar7;
        uVar6 = FUN_00d25570(param_2);
        FUN_00d24960(param_2,uVar6,uVar4,param_2 + 0x18b8);
        uVar2 = FUN_00e6a474("__MASTER__");
        uVar2 = FUN_0091ed5c("__MASTER__",uVar2,0x12345678);
        plVar7 = (long *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar2);
        *plVar7 = param_2 + 0x18b8;
        return 1;
      }
      uVar8 = uVar8 + 1;
      plVar7 = plVar7 + 8;
    } while (uVar8 < uVar1);
  }
  return 2;
}




void FUN_00d19aec(void)

{
  return;
}




undefined8 FUN_00d19af0(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_00e6a474("__MASTER__");
  uVar1 = FUN_0091ed5c("__MASTER__",uVar1,0x12345678);
  puVar2 = (undefined8 *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
  *puVar2 = 0;
  return 1;
}




void FUN_00d19b60(void)

{
  return;
}




undefined8 FUN_00d19b64(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x1478) != 0) {
    if (*(int *)(param_2 + 0x1480) == *(int *)(*(long *)(param_2 + 0x1478) + 8)) {
      *(long *)(param_2 + 0x1428) = param_2 + 0x1478;
      return 1;
    }
    *(undefined8 *)(param_2 + 0x1478) = 0;
    *(undefined4 *)(param_2 + 0x1480) = DAT_03214ce8;
  }
  return 2;
}




void FUN_00d19bac(void)

{
  return;
}




void FUN_00d19bb0(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028158b0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x41400000;
  return;
}




void FUN_00d19be8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




undefined8 FUN_00d19bf0(long param_1,long param_2)

{
  float fVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  float fVar13;
  
  uVar2 = FUN_00d25570(param_2);
  if (*(int *)(param_2 + 0x378) == 0) {
    uVar9 = 1;
  }
  else {
    uVar11 = 0;
    piVar12 = (int *)(param_2 + 0x280);
    uVar9 = 1;
    do {
      plVar3 = *(long **)(piVar12 + -2);
      if (plVar3 == (long *)0x0) {
        uVar4 = 0;
      }
      else if (*piVar12 == (int)plVar3[1]) {
        uVar4 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        piVar12[-2] = 0;
        piVar12[-1] = 0;
        uVar4 = 0;
        *piVar12 = DAT_03214ce8;
      }
      fVar13 = (float)FUN_00d9df64(uVar2,uVar4);
      uVar11 = uVar11 + 1;
      piVar12 = piVar12 + 0x10;
      uVar9 = uVar9 + (fVar13 < *(float *)(param_1 + 0x24));
    } while (uVar11 < *(uint *)(param_2 + 0x378));
  }
  if (*(int *)(param_2 + 0x270) == 0) {
    uVar10 = 0;
    uVar7 = 0;
  }
  else {
    uVar11 = 0;
    uVar10 = 0;
    piVar12 = (int *)(param_2 + 0x78);
    do {
      plVar3 = *(long **)(piVar12 + -2);
      if (plVar3 == (long *)0x0) {
        uVar4 = 0;
      }
      else if (*piVar12 == (int)plVar3[1]) {
        uVar4 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        piVar12[-2] = 0;
        piVar12[-1] = 0;
        uVar4 = 0;
        *piVar12 = DAT_03214ce8;
      }
      fVar13 = (float)FUN_00d9df64(uVar2,uVar4);
      uVar7 = *(uint *)(param_2 + 0x270);
      uVar11 = uVar11 + 1;
      piVar12 = piVar12 + 0x10;
      uVar10 = uVar10 + (fVar13 < *(float *)(param_1 + 0x24));
    } while (uVar11 < uVar7);
  }
  if (uVar9 < uVar10) {
    lVar6 = param_2 + 0x70;
    if (uVar7 != 0) {
      uVar11 = (ulong)uVar7;
      fVar13 = 0.0;
      lVar5 = lVar6;
      lVar8 = lVar6;
      do {
        lVar6 = lVar8;
        fVar1 = *(float *)(lVar8 + 0x30);
        if (*(float *)(lVar8 + 0x30) <= fVar13) {
          lVar6 = lVar5;
          fVar1 = fVar13;
        }
        fVar13 = fVar1;
        uVar11 = uVar11 - 1;
        lVar8 = lVar8 + 0x40;
        lVar5 = lVar6;
      } while (uVar11 != 0);
    }
    *(long *)(param_2 + 0x1420) = lVar6;
    uVar2 = 1;
    *(undefined1 *)(param_2 + 0x19cc) = 1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}




void FUN_00d19db0(void)

{
  return;
}




void FUN_00d19db4(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02815938;
  *(undefined8 *)((long)param_1 + 0x24) = 0x4100000000000000;
  return;
}




void FUN_00d19dec(undefined4 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x24) = param_3;
  *(undefined4 *)(param_2 + 0x28) = param_1;
  return;
}




undefined4 FUN_00d19df8(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  float fVar9;
  undefined1 auVar10 [16];
  
  auVar10 = FUN_00d25570(param_2);
  uVar2 = auVar10._8_8_;
  if (*(int *)(param_2 + 0x378) == 0) {
    iVar5 = 1;
  }
  else {
    uVar7 = 0;
    piVar8 = (int *)(param_2 + 0x280);
    iVar5 = 1;
    do {
      plVar1 = *(long **)(piVar8 + -2);
      if (plVar1 == (long *)0x0) {
        uVar2 = 0;
      }
      else if (*piVar8 == (int)plVar1[1]) {
        uVar2 = (**(code **)(*plVar1 + 0x10))();
      }
      else {
        piVar8[-2] = 0;
        piVar8[-1] = 0;
        uVar2 = 0;
        *piVar8 = DAT_03214ce8;
      }
      fVar9 = (float)FUN_00d9df64(auVar10._0_8_,uVar2);
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 0x10;
      iVar5 = iVar5 + (uint)(fVar9 < *(float *)(param_1 + 0x28));
      uVar2 = extraout_x1;
    } while (uVar7 < *(uint *)(param_2 + 0x378));
  }
  if (*(int *)(param_2 + 0x270) == 0) {
    iVar6 = 0;
  }
  else {
    uVar7 = 0;
    iVar6 = 0;
    plVar1 = (long *)(param_2 + 0x70);
    do {
      plVar3 = (long *)*plVar1;
      if (plVar3 == (long *)0x0) {
        uVar2 = 0;
      }
      else if ((int)plVar1[1] == (int)plVar3[1]) {
        uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,uVar2);
      }
      else {
        *plVar1 = 0;
        uVar2 = 0;
        *(int *)(plVar1 + 1) = DAT_03214ce8;
      }
      if (((*(byte *)((long)plVar1 + 0x3c) & 1) != 0) &&
         (fVar9 = (float)FUN_00d9df64(auVar10._0_8_), uVar2 = extraout_x1_00,
         fVar9 < *(float *)(param_1 + 0x28))) {
        iVar6 = iVar6 + 1;
      }
      uVar7 = uVar7 + 1;
      plVar1 = plVar1 + 8;
    } while (uVar7 < *(uint *)(param_2 + 0x270));
  }
  uVar4 = 1;
  if (iVar5 - iVar6 < *(int *)(param_1 + 0x24)) {
    uVar4 = 2;
  }
  return uVar4;
}




void FUN_00d19f80(void)

{
  return;
}




void FUN_00d19f84(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028159c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d19fb8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




int FUN_00d19fc0(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = FUN_00e0bac0(param_2);
  if (uVar1 < *(uint *)(param_1 + 0x24)) {
    iVar2 = 2;
  }
  else {
    uVar3 = FUN_00e0bafc(param_2);
    iVar2 = ((uint)(uVar3 >> 0x1f) & 1) + 1;
  }
  return iVar2;
}

