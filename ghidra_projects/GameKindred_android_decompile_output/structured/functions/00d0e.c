// functions/00d0e — 30 functions
#include "libGameKindred.h"




void FUN_00d0e144(void)

{
  return;
}




void FUN_00d0e148(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02812a78;
  *(undefined4 *)((long)param_1 + 0x24) = 2;
  return;
}




void FUN_00d0e180(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_00d0e188(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  if ((*(uint *)(param_1 + 0x24) < 3) &&
     (plVar2 = (long *)FUN_00d0add0((&PTR_s___TREASURE_CHEST___028190c0)
                                    [(int)*(uint *)(param_1 + 0x24)],param_2), plVar2 != (long *)0x0
     )) {
    plVar3 = (long *)*plVar2;
    lVar4 = 0;
    if (plVar3 != (long *)0x0) {
      if ((int)plVar2[1] == (int)plVar3[1]) {
        lVar4 = (**(code **)(*plVar3 + 0x10))();
      }
      else {
        *plVar2 = 0;
        lVar4 = 0;
        *(undefined4 *)(plVar2 + 1) = DAT_03214ce8;
      }
    }
    uVar1 = *(ushort *)(lVar4 + 0x88) & 0x1f;
    if ((uVar1 == 0x1f) || (1 < *(ushort *)(lVar4 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
      *(long **)(param_2 + 0x1420) = plVar2;
      return 1;
    }
  }
  return 2;
}




void FUN_00d0e248(void)

{
  return;
}




void FUN_00d0e24c(undefined8 *param_1)

{
  FUN_00d0aac4();
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_02812b00;
  *(undefined2 *)(param_1 + 9) = 0;
  return;
}




void FUN_00d0e288(long param_1,undefined8 param_2,undefined8 param_3,byte param_4,byte param_5)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(byte *)(param_1 + 0x48) = param_4 & 1;
  *(byte *)(param_1 + 0x49) = param_5 & 1;
  return;
}




void FUN_00d0e2a0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}




void FUN_00d0e2a8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}




void FUN_00d0e2b0(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  float *pfVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = FUN_00e6a474(uVar8);
  uVar3 = FUN_0091ed5c(uVar8,uVar3,0x12345678);
  pfVar4 = (float *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x18))(param_2 + 0x1688,uVar3);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  fVar17 = *pfVar4 * *pfVar4;
  uVar3 = FUN_00e6a474(uVar8);
  uVar3 = FUN_0091ed5c(uVar8,uVar3,0x12345678);
  pfVar4 = (float *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x18))(param_2 + 0x1688,uVar3);
  if ((*(char *)(param_1 + 0x49) == '\0') || (lVar5 = FUN_00d25570(param_2), lVar5 == 0)) {
    local_80 = *(undefined8 *)pfVar4;
    bVar2 = true;
  }
  else {
    uVar8 = FUN_00d25570(param_2);
    FUN_00d580a0(uVar8,&local_80);
    bVar2 = false;
  }
  fVar12 = fVar17 * 4.0;
  if (*(int *)(param_1 + 0x44) == 1) {
    lVar5 = *(long *)(param_2 + 0x1420);
    if ((lVar5 != 0) &&
       (((*(char *)(param_1 + 0x48) == '\0' || ((*(byte *)(lVar5 + 0x3c) & 1) != 0)) &&
        (fVar12 = *pfVar4 - *(float *)(lVar5 + 0x10), fVar13 = pfVar4[1] - *(float *)(lVar5 + 0x18),
        fVar12 * fVar12 + fVar13 * fVar13 < fVar17)))) {
LAB_00d0e5b4:
      uVar8 = 1;
      goto LAB_00d0e5c0;
    }
  }
  else {
    if (*(int *)(param_2 + 0x270) == 0) {
      plVar9 = (long *)0x0;
    }
    else {
      uVar11 = 0;
      plVar7 = (long *)(param_2 + 0x70);
      plVar10 = (long *)0x0;
      do {
        plVar9 = plVar10;
        fVar13 = fVar17;
        fVar15 = fVar12;
        if ((*(char *)(param_1 + 0x48) == '\0') || ((*(byte *)((long)plVar7 + 0x3c) & 1) != 0)) {
          plVar6 = (long *)*plVar7;
          if (plVar6 != (long *)0x0) {
            if ((int)plVar7[1] == (int)plVar6[1]) {
              lVar5 = (**(code **)(*plVar6 + 0x10))();
              if ((lVar5 != 0) &&
                 (lVar5 = (**(code **)(*(long *)*plVar7 + 0x10))(),
                 (*(uint *)(param_1 + 0x40) & (*(uint *)(lVar5 + 0x2f4) ^ 0xffffffff)) != 0))
              goto LAB_00d0e4f0;
            }
            else {
              *plVar7 = 0;
              *(undefined4 *)(plVar7 + 1) = DAT_03214ce8;
            }
          }
          fVar14 = *pfVar4 - *(float *)(plVar7 + 2);
          fVar16 = pfVar4[1] - *(float *)(plVar7 + 3);
          fVar14 = fVar14 * fVar14 + fVar16 * fVar16;
          if (fVar14 < fVar17) {
            plVar9 = plVar7;
            fVar13 = fVar14;
          }
          if (!bVar2 && fVar14 < fVar17) {
            fVar13 = (float)local_80 - *(float *)(plVar7 + 2);
            fVar15 = local_80._4_4_ - *(float *)(plVar7 + 3);
            fVar15 = fVar13 * fVar13 + fVar15 * fVar15;
            plVar9 = plVar7;
            fVar13 = fVar17;
            if (fVar12 <= fVar15) {
              plVar9 = plVar10;
              fVar15 = fVar12;
            }
          }
        }
LAB_00d0e4f0:
        fVar12 = fVar15;
        fVar17 = fVar13;
        uVar11 = uVar11 + 1;
        plVar7 = plVar7 + 8;
        plVar10 = plVar9;
      } while (uVar11 < *(uint *)(param_2 + 0x270));
    }
    if (*(uint *)(param_2 + 0x680) != 0) {
      uVar11 = 0;
      plVar7 = (long *)(param_2 + 0x380);
      plVar10 = plVar9;
      do {
        plVar9 = plVar10;
        fVar13 = fVar17;
        fVar15 = fVar12;
        if ((*(char *)(param_1 + 0x48) == '\0') || ((*(byte *)((long)plVar7 + 0x3c) & 1) != 0)) {
          fVar14 = *pfVar4 - *(float *)(plVar7 + 2);
          fVar16 = pfVar4[1] - *(float *)(plVar7 + 3);
          fVar14 = fVar14 * fVar14 + fVar16 * fVar16;
          if (fVar14 < fVar17) {
            plVar9 = plVar7;
            fVar13 = fVar14;
          }
          if ((!bVar2 && fVar14 < fVar17) &&
             (fVar13 = (float)local_80 - *(float *)(plVar7 + 2),
             fVar15 = local_80._4_4_ - *(float *)(plVar7 + 3),
             fVar15 = fVar13 * fVar13 + fVar15 * fVar15, plVar9 = plVar7, fVar13 = fVar17,
             fVar12 <= fVar15)) {
            plVar9 = plVar10;
            fVar15 = fVar12;
          }
        }
        fVar12 = fVar15;
        fVar17 = fVar13;
        uVar11 = uVar11 + 1;
        plVar7 = plVar7 + 8;
        plVar10 = plVar9;
      } while (uVar11 < *(uint *)(param_2 + 0x680));
    }
    if (plVar9 != (long *)0x0) {
      *(long **)(param_2 + 0x1420) = plVar9;
      goto LAB_00d0e5b4;
    }
  }
  uVar8 = 2;
LAB_00d0e5c0:
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}




void FUN_00d0e5fc(void)

{
  return;
}




undefined8 FUN_00d0e600(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(uint *)(param_2 + 0x270) != 0) {
    uVar2 = 0;
    lVar1 = param_2 + 0x70;
    do {
      if (((*(byte *)(lVar1 + 0x3c) & 1) != 0) &&
         (*(float *)(lVar1 + 0x28) < *(float *)(param_2 + 0x48))) {
        *(long *)(param_2 + 0x1420) = lVar1;
        return 1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x40;
    } while (uVar2 < *(uint *)(param_2 + 0x270));
  }
  if (*(uint *)(param_2 + 0x680) != 0) {
    uVar2 = 0;
    lVar1 = param_2 + 0x380;
    do {
      if (((*(byte *)(lVar1 + 0x3c) & 1) != 0) &&
         (*(float *)(lVar1 + 0x28) < *(float *)(param_2 + 0x48))) {
        *(long *)(param_2 + 0x1420) = lVar1;
        return 1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x40;
    } while (uVar2 < *(uint *)(param_2 + 0x680));
  }
  return 2;
}




float FUN_00d0e690(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = (ulong)*(uint *)(param_2 + 0x270);
  if (*(uint *)(param_2 + 0x270) == 0) {
    fVar6 = 0.0;
  }
  else {
    uVar3 = 0;
    lVar2 = param_2 + 0x70;
    fVar6 = 0.0;
    do {
      fVar4 = fVar6;
      if (((*(byte *)(lVar2 + 0x3c) & 1) != 0) &&
         (*(float *)(lVar2 + 0x28) < *(float *)(param_2 + 0x48))) {
        fVar4 = (float)FUN_00d26d8c(param_2,lVar2);
        uVar1 = (ulong)*(uint *)(param_2 + 0x270);
        if (fVar4 <= fVar6) {
          fVar4 = fVar6;
        }
      }
      fVar6 = fVar4;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x40;
    } while (uVar3 < uVar1);
  }
  uVar1 = (ulong)*(uint *)(param_2 + 0x680);
  if (*(uint *)(param_2 + 0x680) != 0) {
    uVar3 = 0;
    lVar2 = param_2 + 0x380;
    do {
      fVar4 = fVar6;
      if (((*(byte *)(lVar2 + 0x3c) & 1) != 0) &&
         (*(float *)(lVar2 + 0x28) < *(float *)(param_2 + 0x48))) {
        fVar5 = (float)FUN_00d26d8c(param_2,lVar2);
        uVar1 = (ulong)*(uint *)(param_2 + 0x680);
        fVar4 = fVar5 * 0.8;
        if (fVar5 * 0.8 <= fVar6) {
          fVar4 = fVar6;
        }
      }
      fVar6 = fVar4;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x40;
    } while (uVar3 < uVar1);
  }
  fVar6 = (float)NEON_fminnm(fVar6,0x3f800000);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  return fVar6;
}




void FUN_00d0e784(void)

{
  return;
}




void FUN_00d0e788(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_02812b88;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}




void FUN_00d0e7c0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




undefined8 FUN_00d0e7c8(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  
  bVar3 = *(char *)(param_1 + 0x28) != '\0';
  lVar5 = 0x270;
  if (bVar3) {
    lVar5 = 0x1228;
  }
  uVar2 = *(uint *)(param_2 + lVar5);
  plVar6 = (long *)(param_2 + 0x70);
  if (bVar3) {
    plVar6 = (long *)(param_2 + 0x1028);
  }
  if (uVar2 != 0) {
    uVar7 = 0;
    do {
      if ((*(byte *)((long)plVar6 + 0x3c) & 1) != 0) {
        plVar4 = (long *)*plVar6;
        lVar5 = 0;
        if (plVar4 != (long *)0x0) {
          if ((int)plVar6[1] == (int)plVar4[1]) {
            lVar5 = (**(code **)(*plVar4 + 0x10))();
          }
          else {
            *plVar6 = 0;
            lVar5 = 0;
            *(undefined4 *)(plVar6 + 1) = DAT_03214ce8;
          }
        }
        uVar1 = *(ushort *)(lVar5 + 0x88) & 0x1f;
        if ((uVar1 == 0x1f) || (1 < *(ushort *)(lVar5 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
          lVar5 = *(long *)(lVar5 + 0x40);
          fVar8 = (*(float *)(lVar5 + 0x1a0) + 1.0) *
                  (*(float *)(lVar5 + 0x38) +
                  *(float *)(lVar5 + 0xec) * (*(float *)(lVar5 + 0x254) + 1.0));
          if (DAT_031500a0 <= fVar8) {
            fVar8 = DAT_031500a0;
          }
          fVar9 = DAT_0314ffe0;
          if (DAT_0314ffe0 <= fVar8) {
            fVar9 = fVar8;
          }
          if (*(float *)(lVar5 + 0x308) < *(float *)(param_1 + 0x24) * fVar9) {
            *(long **)(param_2 + 0x1420) = plVar6;
            return 1;
          }
        }
      }
      uVar7 = uVar7 + 1;
      plVar6 = plVar6 + 8;
    } while (uVar7 < uVar2);
  }
  return 2;
}




void FUN_00d0e934(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}




void FUN_00d0e940(void)

{
  return;
}




undefined8 FUN_00d0e944(undefined8 param_1,long param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if (*(uint *)(param_2 + 0x680) != 0) {
    uVar1 = 0;
    pbVar2 = (byte *)(param_2 + 0x3bc);
    do {
      if ((*pbVar2 >> 1 & 1) != 0) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      pbVar2 = pbVar2 + 0x40;
    } while (uVar1 < *(uint *)(param_2 + 0x680));
  }
  return 2;
}




void FUN_00d0e97c(void)

{
  return;
}




undefined8 FUN_00d0e980(undefined8 param_1,long param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if (*(uint *)(param_2 + 0xa10) != 0) {
    uVar1 = 0;
    pbVar2 = (byte *)(param_2 + 0x8cc);
    do {
      if ((*pbVar2 >> 1 & 1) != 0) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      pbVar2 = pbVar2 + 0x40;
    } while (uVar1 < *(uint *)(param_2 + 0xa10));
  }
  return 2;
}




void FUN_00d0e9b8(void)

{
  return;
}




undefined8 FUN_00d0e9bc(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(uint *)(param_2 + 0x270) != 0) {
    uVar2 = 0;
    lVar1 = param_2 + 0x70;
    do {
      if ((*(byte *)(lVar1 + 0x3c) >> 1 & 1) != 0) {
        *(long *)(param_2 + 0x1420) = lVar1;
        return 1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x40;
    } while (uVar2 < *(uint *)(param_2 + 0x270));
  }
  return 2;
}




void FUN_00d0e9f8(void)

{
  return;
}




float FUN_00d0e9fc(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(int *)(param_1 + 0x270) == 0) {
    fVar8 = 0.0;
  }
  else {
    uVar3 = 0;
    pfVar4 = (float *)(param_1 + 0xa8);
    fVar8 = 0.0;
    do {
      fVar5 = pfVar4[-10] - *(float *)(param_1 + 0x28);
      fVar6 = (float)*(undefined8 *)(pfVar4 + -9) - (float)*(undefined8 *)(param_1 + 0x2c);
      fVar7 = (float)((ulong)*(undefined8 *)(pfVar4 + -9) >> 0x20) -
              (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      fVar6 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
      fVar5 = SQRT(fVar6);
      if (NAN(fVar5)) {
        fVar5 = sqrtf(fVar6);
      }
      fVar6 = pfVar4[-1];
      lVar1 = FUN_00d25570(param_1);
      uVar3 = uVar3 + 1;
      fVar7 = *(float *)(*(long *)(lVar1 + 0x38) + 100);
      fVar5 = (fVar5 - fVar6) -
              (*(float *)(*(long *)(lVar1 + 0x38) + 0x68) * (fVar7 + *(float *)(lVar1 + 0x2e8))) /
              fVar7;
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      fVar5 = 3.0 - fVar5 / *pfVar4;
      if (*pfVar4 <= 0.0) {
        fVar5 = -999996.0;
      }
      fVar5 = pfVar4[-2] * 3.0 * fVar5;
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      fVar8 = fVar8 + fVar5;
      pfVar4 = pfVar4 + 0x10;
    } while (uVar3 < *(uint *)(param_1 + 0x270));
  }
  if (*(int *)(param_1 + 0xd18) != 0) {
    uVar3 = 0;
    lVar1 = param_1 + 0xa18;
    do {
      uVar2 = FUN_00e0b624(0x3f800000,lVar1,param_1 + 0x18);
      if ((uVar2 & 1) != 0) {
        fVar8 = fVar8 + *(float *)(lVar1 + 0x30) * 3.0;
      }
      uVar3 = uVar3 + 1;
      lVar1 = lVar1 + 0x40;
    } while (uVar3 < *(uint *)(param_1 + 0xd18));
  }
  return fVar8;
}




undefined8 FUN_00d0eb64(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *(float *)(param_2 + 0x58);
  fVar5 = (float)FUN_00d0e9fc(param_2);
  if (fVar5 <= 0.0) {
    fVar5 = 60.0;
  }
  else {
    fVar5 = *(float *)(param_2 + 0x40) / (fVar5 / 3.0);
  }
  fVar4 = ((fVar4 - 1.0) / 8.0) * -1.5 + 2.5;
  if (*(int *)(param_2 + 0xd18) != 0) {
    uVar3 = 0;
    lVar2 = param_2 + 0xa18;
    do {
      uVar1 = FUN_00e0b624(0x3f800000,param_2 + 0x18,lVar2);
      if ((uVar1 & 1) != 0) {
        fVar6 = 60.0;
        if (0.0 < *(float *)(param_2 + 0x48)) {
          fVar6 = *(float *)(lVar2 + 0x28) / *(float *)(param_2 + 0x48);
        }
        if (fVar6 < fVar4 + fVar5) goto LAB_00d0ecdc;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x40;
    } while (uVar3 < *(uint *)(param_2 + 0xd18));
  }
  if (*(int *)(param_2 + 0x270) != 0) {
    uVar3 = 0;
    lVar2 = param_2 + 0x70;
    do {
      if ((((*(byte *)(lVar2 + 0x3c) & 1) != 0) &&
          (uVar1 = FUN_00e0b624(0x3f800000,param_2 + 0x18,lVar2), (uVar1 & 1) != 0)) &&
         (uVar1 = FUN_00d0ad40(param_2 + 0x18,lVar2), (uVar1 & 1) == 0)) {
        fVar6 = 60.0;
        if (0.0 < *(float *)(param_2 + 0x48)) {
          fVar6 = *(float *)(lVar2 + 0x28) / *(float *)(param_2 + 0x48);
        }
        if (fVar6 < fVar4 + fVar5) {
LAB_00d0ecdc:
          *(long *)(param_2 + 0x1420) = lVar2;
          return 1;
        }
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x40;
    } while (uVar3 < *(uint *)(param_2 + 0x270));
  }
  return 2;
}




void FUN_00d0ed04(void)

{
  return;
}




void FUN_00d0ed08(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02812c10;
  return;
}




undefined8 FUN_00d0ed38(undefined8 param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_94;
  
  fVar13 = *(float *)(param_2 + 0x58);
  if (*(uint *)(param_2 + 0x888) == 0) {
    fVar14 = 0.0;
  }
  else {
    uVar6 = 0;
    fVar14 = 0.0;
    pfVar7 = (float *)(param_2 + 0x6b8);
    do {
      uVar6 = uVar6 + 1;
      fVar14 = fVar14 + *pfVar7;
      pfVar7 = pfVar7 + 0x10;
    } while (uVar6 < *(uint *)(param_2 + 0x888));
  }
  if (*(uint *)(param_2 + 0x378) != 0) {
    uVar6 = 0;
    pfVar7 = (float *)(param_2 + 0x2a8);
    do {
      uVar6 = uVar6 + 1;
      fVar14 = fVar14 + *pfVar7;
      pfVar7 = pfVar7 + 0x10;
    } while (uVar6 < *(uint *)(param_2 + 0x378));
  }
  if (*(uint *)(param_2 + 0x680) == 0) {
    fVar15 = 0.0;
  }
  else {
    uVar6 = 0;
    fVar15 = 0.0;
    pfVar7 = (float *)(param_2 + 0x3b0);
    do {
      uVar6 = uVar6 + 1;
      fVar15 = fVar15 + *pfVar7;
      pfVar7 = pfVar7 + 0x10;
    } while (uVar6 < *(uint *)(param_2 + 0x680));
  }
  uVar5 = *(uint *)(param_2 + 0x270);
  if (uVar5 != 0) {
    uVar6 = 0;
    pfVar7 = (float *)(param_2 + 0xa0);
    do {
      uVar6 = uVar6 + 1;
      fVar15 = fVar15 + *pfVar7;
      pfVar7 = pfVar7 + 0x10;
    } while (uVar6 < uVar5);
  }
  if (*(int *)(param_2 + 0xd18) != 0) {
    uVar6 = 0;
    lVar8 = param_2 + 0xa18;
    do {
      uVar2 = FUN_00e0b624(0x3f800000,lVar8,param_2 + 0x18);
      if ((uVar2 & 1) != 0) {
        fVar15 = fVar15 + *(float *)(lVar8 + 0x30);
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x40;
    } while (uVar6 < *(uint *)(param_2 + 0xd18));
    uVar5 = *(uint *)(param_2 + 0x270);
  }
  if (uVar5 != 0) {
    uVar6 = 0;
    fVar13 = ((fVar13 - 1.0) / 8.0) * 0.39999998 + 0.6;
    local_94 = 999999.0;
    do {
      lVar8 = param_2 + uVar6 * 0x40;
      if ((*(byte *)(lVar8 + 0xac) & 1) != 0) {
        lVar8 = lVar8 + 0x70;
        uVar2 = FUN_00d0ad40(param_2 + 0x18,lVar8);
        if ((uVar2 & 1) == 0) {
          bVar1 = false;
          if (fVar15 < *(float *)(param_2 + 0x48)) {
            lVar9 = param_2 + uVar6 * 0x40;
            fVar10 = *(float *)(lVar9 + 0x80) - *(float *)(param_2 + 0x28);
            fVar11 = *(float *)(lVar9 + 0x84) - *(float *)(param_2 + 0x2c);
            fVar12 = *(float *)(lVar9 + 0x88) - *(float *)(param_2 + 0x30);
            fVar10 = fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12;
            fVar11 = SQRT(fVar10);
            if (NAN(fVar11)) {
              fVar11 = sqrtf(fVar10);
            }
            fVar12 = *(float *)(lVar9 + 0xa4);
            lVar3 = FUN_00d25570(param_2);
            fVar10 = local_94;
            if (0.0 < *(float *)(lVar9 + 0xa8)) {
              fVar10 = *(float *)(*(long *)(lVar3 + 0x38) + 100);
              fVar10 = (fVar11 - fVar12) -
                       (*(float *)(*(long *)(lVar3 + 0x38) + 0x68) *
                       (fVar10 + *(float *)(lVar3 + 0x2e8))) / fVar10;
              if (fVar10 <= 0.0) {
                fVar10 = 0.0;
              }
              fVar10 = fVar10 / (fVar13 * *(float *)(lVar9 + 0xa8));
            }
            bVar1 = 0.2 <= fVar10;
          }
          if (*(int *)(param_2 + 0x1020) == 0) {
            fVar10 = 0.0;
          }
          else {
            uVar2 = 0;
            fVar10 = 0.0;
            lVar9 = param_2 + 0xd20;
            do {
              uVar4 = FUN_00e0b624(0x3f800000,lVar9,lVar8);
              if ((uVar4 & 1) != 0) {
                fVar10 = fVar10 + *(float *)(lVar9 + 0x30);
              }
              uVar2 = uVar2 + 1;
              lVar9 = lVar9 + 0x40;
            } while (uVar2 < *(uint *)(param_2 + 0x1020));
          }
          if (((bVar1) ||
              (lVar9 = param_2 + uVar6 * 0x40,
              fVar13 * (*(float *)(lVar9 + 0x98) / (fVar10 + fVar14 + *(float *)(param_2 + 0x48)))
              <= (1.0 / fVar13) * (*(float *)(param_2 + 0x40) / (fVar15 + *(float *)(lVar9 + 0xa0)))
              )) || (uVar2 = FUN_00e0b624(0x3f800000,param_2 + 0x18,lVar8), (uVar2 & 1) != 0)) {
            *(long *)(param_2 + 0x1420) = lVar8;
            return 1;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_2 + 0x270));
  }
  return 2;
}

