// functions/00d0d — 43 functions
#include "libGameKindred.h"




void FUN_00d0d074(void)

{
  return;
}




undefined8 FUN_00d0d078(undefined8 param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (*(undefined8 **)(param_2 + 0x1428) != (undefined8 *)0x0) {
    lVar1 = (**(code **)(*(long *)**(undefined8 **)(param_2 + 0x1428) + 0x10))();
    lVar1 = *(long *)(lVar1 + 0x40);
    fVar2 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
            (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0)
            );
    if (DAT_031500a0 <= fVar2) {
      fVar2 = DAT_031500a0;
    }
    fVar3 = DAT_0314ffe0;
    if (DAT_0314ffe0 <= fVar2) {
      fVar3 = fVar2;
    }
    if (*(float *)(lVar1 + 0x308) / fVar3 <= 0.75) {
      return 1;
    }
  }
  return 2;
}




void FUN_00d0d10c(void)

{
  return;
}




void FUN_00d0d110(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028127d0;
  param_1[5] = 0;
  return;
}




void FUN_00d0d144(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00d0d14c(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(undefined8 **)(param_2 + 0x1428) != (undefined8 *)0x0) {
    lVar3 = (**(code **)(*(long *)**(undefined8 **)(param_2 + 0x1428) + 0x10))();
    lVar3 = *(long *)(lVar3 + 0x18);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = FUN_00e6a474(uVar5);
    uVar2 = FUN_0091ed5c(uVar5,uVar2,0x12345678);
    FUN_00d9ff84(local_40,uVar2);
    uVar4 = FUN_00d6bbac(lVar3,local_40[0],0);
    if ((uVar4 & 1) != 0) {
      uVar5 = 1;
      goto LAB_00d0d1fc;
    }
  }
  uVar5 = 2;
LAB_00d0d1fc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




void FUN_00d0d224(void)

{
  return;
}




void FUN_00d0d228(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02812858;
  return;
}




void FUN_00d0d258(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00d0d260(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(undefined8 **)(param_2 + 0x1420) != (undefined8 *)0x0) {
    lVar3 = (**(code **)(*(long *)**(undefined8 **)(param_2 + 0x1420) + 0x10))();
    lVar3 = *(long *)(lVar3 + 0x18);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = FUN_00e6a474(uVar5);
    uVar2 = FUN_0091ed5c(uVar5,uVar2,0x12345678);
    FUN_00d9ff84(local_40,uVar2);
    uVar4 = FUN_00d6bbac(lVar3,local_40[0],0);
    if ((uVar4 & 1) != 0) {
      uVar5 = 1;
      goto LAB_00d0d310;
    }
  }
  uVar5 = 2;
LAB_00d0d310:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




void FUN_00d0d338(void)

{
  return;
}




undefined8 FUN_00d0d33c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = (**(code **)(*(long *)*param_2 + 0x10))();
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar4 = (*(float *)(lVar1 + 0x1e4) + 1.0) *
          (*(float *)(lVar1 + 0x7c) + *(float *)(lVar1 + 0x130) * (*(float *)(lVar1 + 0x298) + 1.0))
  ;
  if (DAT_031500e4 <= fVar4) {
    fVar4 = DAT_031500e4;
  }
  fVar5 = DAT_03150024;
  if (DAT_03150024 <= fVar4) {
    fVar5 = fVar4;
  }
  if (*(uint *)(param_2 + 0x1a3) != 0) {
    uVar2 = 0;
    puVar3 = param_2 + 0x143;
    do {
      fVar4 = (float)*(undefined8 *)((long)param_2 + 0x2c) -
              (float)*(undefined8 *)((long)puVar3 + 0x14);
      fVar6 = (float)((ulong)*(undefined8 *)((long)param_2 + 0x2c) >> 0x20) -
              (float)((ulong)*(undefined8 *)((long)puVar3 + 0x14) >> 0x20);
      if ((*(float *)(param_2 + 5) - *(float *)(puVar3 + 2)) *
          (*(float *)(param_2 + 5) - *(float *)(puVar3 + 2)) + fVar4 * fVar4 + fVar6 * fVar6 <
          fVar5 * fVar5) {
        param_2[0x284] = puVar3;
        return 1;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 8;
    } while (uVar2 < *(uint *)(param_2 + 0x1a3));
  }
  return 2;
}




void FUN_00d0d424(void)

{
  return;
}




void FUN_00d0d428(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}




undefined4 FUN_00d0d430(long param_1,long param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_2 + 0x28) - *(float *)(param_2 + 0x1648);
  fVar3 = (float)*(undefined8 *)(param_2 + 0x2c) - (float)*(undefined8 *)(param_2 + 0x164c);
  fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_2 + 0x164c) >> 0x20);
  uVar1 = 2;
  if (fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4 <
      *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24)) {
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_00d0d478(void)

{
  return;
}




undefined8 FUN_00d0d47c(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = (**(code **)(*(long *)*param_2 + 0x10))();
  lVar2 = *(long *)(lVar2 + 0x40);
  fVar3 = (float)*(undefined8 *)((long)param_2 + 0x2c) -
          (float)*(undefined8 *)((long)param_2 + 0x164c);
  fVar4 = (float)((ulong)*(undefined8 *)((long)param_2 + 0x2c) >> 0x20) -
          (float)((ulong)*(undefined8 *)((long)param_2 + 0x164c) >> 0x20);
  fVar5 = (*(float *)(lVar2 + 0x1e4) + 1.0) *
          (*(float *)(lVar2 + 0x7c) + *(float *)(lVar2 + 0x130) * (*(float *)(lVar2 + 0x298) + 1.0))
  ;
  if (DAT_031500e4 <= fVar5) {
    fVar5 = DAT_031500e4;
  }
  fVar6 = DAT_03150024;
  if (DAT_03150024 <= fVar5) {
    fVar6 = fVar5;
  }
  if ((*(float *)(param_2 + 5) - *(float *)(param_2 + 0x2c9)) *
      (*(float *)(param_2 + 5) - *(float *)(param_2 + 0x2c9)) + fVar3 * fVar3 + fVar4 * fVar4 <
      fVar6 * fVar6) {
    lVar2 = (**(code **)(*(long *)param_2[0x2c7] + 0x10))();
    uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f;
    if ((uVar1 != 0x1f) && (*(short *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) == 3)) {
      return 1;
    }
  }
  return 2;
}




void FUN_00d0d57c(void)

{
  return;
}




undefined8 FUN_00d0d580(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (*(int *)(param_2 + 0x111) == 0) {
    uVar3 = 2;
  }
  else {
    uVar5 = 0;
    puVar4 = param_2 + 0xd1;
    do {
      lVar2 = (**(code **)(*(long *)*puVar4 + 0x10))();
      iVar1 = *(int *)(lVar2 + 0x260);
      lVar2 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2);
      if (iVar1 != *(int *)(lVar2 + 0x260)) {
        param_2[0x285] = puVar4;
        break;
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 8;
    } while (uVar5 < *(uint *)(param_2 + 0x111));
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_00d0d610(void)

{
  return;
}




undefined8 FUN_00d0d614(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  
  if (*(uint *)(param_2 + 0x270) != 0) {
    uVar2 = 0;
    lVar1 = param_2 + 0x70;
    do {
      if ((*(byte *)(param_2 + (ulong)uVar2 * 0x40 + 0xac) & 1) != 0) {
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
      if ((*(byte *)(param_2 + (ulong)uVar2 * 0x40 + 0x3bc) & 1) != 0) {
        *(long *)(param_2 + 0x1420) = lVar1;
        return 1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x40;
    } while (uVar2 < *(uint *)(param_2 + 0x680));
  }
  return 2;
}




void FUN_00d0d694(void)

{
  return;
}




undefined8 FUN_00d0d698(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if (*(uint *)(param_2 + 0x270) != 0) {
    uVar2 = 0;
    lVar1 = param_2 + 0x70;
    do {
      if ((*(byte *)(param_2 + (ulong)uVar2 * 0x40 + 0xac) & 1) != 0) {
        *(long *)(param_2 + 0x1420) = lVar1;
        return 1;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x40;
    } while (uVar2 < *(uint *)(param_2 + 0x270));
  }
  uVar2 = *(uint *)(param_2 + 0x680);
  if (uVar2 != 0) {
    uVar3 = 0;
    puVar4 = (undefined8 *)(param_2 + 0x380);
    do {
      if ((*(byte *)((long)puVar4 + 0x3c) & 1) != 0) {
        lVar1 = (**(code **)(*(long *)*puVar4 + 0x10))();
        if ((*(byte *)(lVar1 + 0x2f6) >> 4 & 1) == 0) {
          *(undefined8 **)(param_2 + 0x1420) = puVar4;
          return 1;
        }
        uVar2 = *(uint *)(param_2 + 0x680);
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 8;
    } while (uVar3 < uVar2);
  }
  return 2;
}




void FUN_00d0d74c(void)

{
  return;
}




undefined8 FUN_00d0d750(undefined8 param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  
  if (*(int *)(param_2 + 0x680) != 0) {
    uVar7 = 0;
    plVar4 = (long *)(param_2 + 0x380);
    fVar9 = 0.0;
    plVar5 = (long *)0x0;
    do {
      plVar2 = (long *)*plVar4;
      plVar6 = plVar5;
      fVar8 = fVar9;
      if (plVar2 != (long *)0x0) {
        if ((int)plVar4[1] == (int)plVar2[1]) {
          lVar3 = (**(code **)(*plVar2 + 0x10))();
          if ((((lVar3 != 0) && ((*(byte *)((long)plVar4 + 0x3c) & 1) != 0)) &&
              ((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 == 0x1f ||
               (1 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) &&
             (((*(byte *)(lVar3 + 0x2f4) >> 4 & 1) != 0 &&
              (fVar8 = (float)FUN_00d0d86c(lVar3,param_2,plVar4), plVar6 = plVar4,
              plVar5 != (long *)0x0 && fVar8 <= fVar9)))) {
            plVar6 = plVar5;
            fVar8 = fVar9;
          }
        }
        else {
          *plVar4 = 0;
          *(undefined4 *)(plVar4 + 1) = DAT_03214ce8;
        }
      }
      fVar9 = fVar8;
      uVar7 = uVar7 + 1;
      plVar4 = plVar4 + 8;
      plVar5 = plVar6;
    } while (uVar7 < *(uint *)(param_2 + 0x680));
    if (plVar6 != (long *)0x0) {
      *(long **)(param_2 + 0x1420) = plVar6;
      return 1;
    }
  }
  return 2;
}




float FUN_00d0d86c(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  plVar1 = (long *)*param_3;
  lVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if ((int)param_3[1] == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
    }
    else {
      *param_3 = 0;
      lVar2 = 0;
      *(undefined4 *)(param_3 + 1) = DAT_03214ce8;
    }
  }
  if (*(float *)(param_3 + 5) <= *(float *)(param_2 + 0x48)) {
    fVar4 = 0.45;
    if ((*(byte *)(lVar2 + 0x2f4) & 0x10) != 0) {
      fVar4 = 1.0;
    }
  }
  else {
    fVar4 = 0.45;
  }
  fVar3 = (float)FUN_00d26d8c(param_2,param_3);
  return fVar4 * fVar3;
}




float FUN_00d0d914(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  float extraout_s0;
  float fVar4;
  float fVar5;
  
  uVar1 = (ulong)*(uint *)(param_2 + 0x680);
  fVar4 = 0.0;
  if (*(uint *)(param_2 + 0x680) != 0) {
    uVar3 = 0;
    lVar2 = param_2 + 0x380;
    fVar5 = 0.0;
    do {
      fVar4 = fVar5;
      if ((*(byte *)(lVar2 + 0x3c) & 1) != 0) {
        param_1 = FUN_00d0d86c(param_1,param_2,lVar2);
        uVar1 = (ulong)*(uint *)(param_2 + 0x680);
        fVar4 = extraout_s0;
        if (extraout_s0 <= fVar5) {
          fVar4 = fVar5;
        }
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x40;
      fVar5 = fVar4;
    } while (uVar3 < uVar1);
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  return fVar4;
}




void FUN_00d0d990(void)

{
  return;
}




undefined8 FUN_00d0d994(undefined8 param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  
  if (*(int *)(param_2 + 0x270) != 0) {
    uVar7 = 0;
    plVar4 = (long *)(param_2 + 0x70);
    fVar9 = 0.0;
    plVar5 = (long *)0x0;
    do {
      plVar6 = plVar5;
      fVar8 = fVar9;
      if ((*(byte *)((long)plVar4 + 0x3c) & 1) != 0) {
        plVar2 = (long *)*plVar4;
        lVar3 = 0;
        if (plVar2 != (long *)0x0) {
          if ((int)plVar4[1] == (int)plVar2[1]) {
            lVar3 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *plVar4 = 0;
            lVar3 = 0;
            *(undefined4 *)(plVar4 + 1) = DAT_03214ce8;
          }
        }
        uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f;
        if (((uVar1 == 0x1f) || (1 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3)) &&
           (fVar8 = (float)FUN_00d0daa8(lVar3,param_2,plVar4), plVar6 = plVar4,
           plVar5 != (long *)0x0 && fVar8 <= fVar9)) {
          plVar6 = plVar5;
          fVar8 = fVar9;
        }
      }
      fVar9 = fVar8;
      uVar7 = uVar7 + 1;
      plVar4 = plVar4 + 8;
      plVar5 = plVar6;
    } while (uVar7 < *(uint *)(param_2 + 0x270));
    if (plVar6 != (long *)0x0) {
      *(long **)(param_2 + 0x1420) = plVar6;
      return 1;
    }
  }
  return 2;
}




float FUN_00d0daa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  char *__s1;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = FUN_00d25570(param_2);
  if ((*(byte *)(lVar2 + 0x2f4) & 1) == 0) {
    fVar5 = 1.0;
  }
  else {
    __s1 = (char *)FUN_00d0ac9c();
    iVar1 = strcmp(__s1,"Lane");
    fVar5 = 2.0;
    if (iVar1 != 0) {
      fVar5 = 1.0;
    }
  }
  fVar3 = (float)FUN_00d26d8c(param_2,param_3);
  fVar4 = (float)FUN_00d26bc8(param_2,param_3);
  return fVar5 * (fVar3 * 0.5 + fVar4 * 0.5);
}




float FUN_00d0db38(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  float extraout_s0;
  float fVar4;
  float fVar5;
  
  uVar1 = (ulong)*(uint *)(param_2 + 0x270);
  fVar4 = 0.0;
  if (*(uint *)(param_2 + 0x270) != 0) {
    uVar3 = 0;
    lVar2 = param_2 + 0x70;
    fVar5 = 0.0;
    do {
      fVar4 = fVar5;
      if ((*(byte *)(lVar2 + 0x3c) & 1) != 0) {
        param_1 = FUN_00d0daa8(param_1,param_2,lVar2);
        uVar1 = (ulong)*(uint *)(param_2 + 0x270);
        fVar4 = extraout_s0;
        if (extraout_s0 <= fVar5) {
          fVar4 = fVar5;
        }
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x40;
      fVar5 = fVar4;
    } while (uVar3 < uVar1);
  }
  fVar4 = (float)NEON_fminnm(fVar4,0x3f800000);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  return fVar4;
}




void FUN_00d0dbbc(void)

{
  return;
}




void FUN_00d0dbc0(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028128e0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d0dbf4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_00d0dbfc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  uVar3 = *(uint *)(param_2 + 0x270);
  if (uVar3 != 0) {
    uVar4 = 0;
    puVar5 = (undefined8 *)(param_2 + 0x70);
    do {
      if ((*(byte *)((long)puVar5 + 0x3c) & 1) != 0) {
        lVar2 = (**(code **)(*(long *)*puVar5 + 0x10))();
        iVar1 = FUN_00ceceb4(*(undefined4 *)(lVar2 + 0x260));
        if (iVar1 == *(int *)(param_1 + 0x24)) {
          *(undefined8 **)(param_2 + 0x1420) = puVar5;
          return 1;
        }
        uVar3 = *(uint *)(param_2 + 0x270);
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 8;
    } while (uVar4 < uVar3);
  }
  return 2;
}




void FUN_00d0dc84(void)

{
  return;
}




void FUN_00d0dc88(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02812968;
  *(undefined4 *)((long)param_1 + 0x24) = 3;
  return;
}




void FUN_00d0dcc0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_00d0dcc8(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  
  uVar3 = DAT_03214ce8;
  uVar1 = *(uint *)(param_2 + 0x270);
  if (uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x24);
    uVar8 = 0;
    plVar7 = (long *)0x0;
    plVar4 = (long *)(param_2 + 0x70);
    fVar9 = 99999.9;
    if (iVar2 != 3) {
      fVar9 = 0.0;
    }
    do {
      if (*plVar4 != 0) {
        if ((int)plVar4[1] != *(int *)(*plVar4 + 8)) {
          *plVar4 = 0;
          *(undefined4 *)(plVar4 + 1) = uVar3;
          goto switchD_00d0dd5c_default;
        }
        switch(iVar2) {
        case 0:
        case 1:
          fVar10 = *(float *)(plVar4 + 6);
          break;
        case 2:
          fVar10 = *(float *)(plVar4 + 5);
          break;
        case 3:
          fVar10 = *(float *)(plVar4 + 5);
          if (fVar9 <= fVar10) goto switchD_00d0dd5c_default;
          goto LAB_00d0dd80;
        default:
          goto switchD_00d0dd5c_default;
        }
        if (fVar9 < fVar10) {
LAB_00d0dd80:
          plVar7 = plVar4;
          fVar9 = fVar10;
        }
      }
switchD_00d0dd5c_default:
      uVar8 = uVar8 + 1;
      plVar4 = plVar4 + 8;
    } while (uVar8 < uVar1);
    if (plVar7 != (long *)0x0) {
      plVar4 = (long *)*plVar7;
      if (plVar4 == (long *)0x0) {
        lVar5 = 0;
      }
      else if ((int)plVar7[1] == (int)plVar4[1]) {
        lVar5 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        *plVar7 = 0;
        lVar5 = 0;
        *(undefined4 *)(plVar7 + 1) = DAT_03214ce8;
      }
      uVar1 = *(ushort *)(lVar5 + 0x88) & 0x1f;
      if ((uVar1 == 0x1f) || (1 < *(ushort *)(lVar5 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
        uVar6 = FUN_00d25570(param_2);
        FUN_00d24960(param_2,uVar6,lVar5,param_2 + 0x1878);
        *(long *)(param_2 + 0x1420) = param_2 + 0x1878;
        return 1;
      }
    }
  }
  return 2;
}




void FUN_00d0de50(void)

{
  return;
}




void FUN_00d0de54(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028129f0;
  *(undefined4 *)((long)param_1 + 0x24) = 2;
  return;
}




void FUN_00d0de8c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_00d0de94(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  
  switch(*(undefined4 *)(param_1 + 0x24)) {
  case 0:
    uVar2 = FUN_00e6a474("__TREASURE_CHEST__");
    uVar2 = FUN_0091ed5c("__TREASURE_CHEST__",uVar2,0x12345678);
    plVar3 = (long *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar2);
    if (*plVar3 == 0) {
      return 2;
    }
    pcVar9 = "__TREASURE_CHEST__";
    break;
  case 1:
    uVar2 = FUN_00e6a474("__LAST_HURT_ME__");
    uVar2 = FUN_0091ed5c("__LAST_HURT_ME__",uVar2,0x12345678);
    plVar3 = (long *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar2);
    if (*plVar3 == 0) {
      return 2;
    }
    pcVar9 = "__LAST_HURT_ME__";
    break;
  case 2:
    uVar2 = FUN_00e6a474("__SUGGESTED_TARGET__");
    uVar2 = FUN_0091ed5c("__SUGGESTED_TARGET__",uVar2,0x12345678);
    plVar3 = (long *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar2);
    if (*plVar3 == 0) {
      return 2;
    }
    pcVar9 = "__SUGGESTED_TARGET__";
    break;
  case 3:
    uVar2 = FUN_00e6a474("__CALL_FOR_HELP__");
    uVar2 = FUN_0091ed5c("__CALL_FOR_HELP__",uVar2,0x12345678);
    plVar3 = (long *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar2);
    if (*plVar3 == 0) {
      return 2;
    }
    pcVar9 = "__CALL_FOR_HELP__";
    break;
  default:
    goto switchD_00d0dec4_default;
  }
  uVar2 = FUN_00e6a474(pcVar9);
  uVar2 = FUN_0091ed5c(pcVar9,uVar2,0x12345678);
  puVar4 = (undefined8 *)
           (**(code **)(*(long *)(param_2 + 0x1688) + 0x10))((long *)(param_2 + 0x1688),uVar2);
  plVar3 = (long *)*puVar4;
  if ((plVar3 != (long *)0x0) && (plVar5 = (long *)*plVar3, plVar5 != (long *)0x0)) {
    if ((int)plVar3[1] == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      uVar1 = *(ushort *)(lVar6 + 0x88) & 0x1f;
      if ((uVar1 == 0x1f) || (1 < *(ushort *)(lVar6 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
        uVar7 = FUN_00d25570(param_2);
        plVar5 = (long *)*plVar3;
        if (plVar5 == (long *)0x0) {
          uVar8 = 0;
        }
        else if ((int)plVar3[1] == (int)plVar5[1]) {
          uVar8 = (**(code **)(*plVar5 + 0x10))(plVar5);
        }
        else {
          *plVar3 = 0;
          uVar8 = 0;
          *(undefined4 *)(plVar3 + 1) = DAT_03214ce8;
        }
        FUN_00d24960(param_2,uVar7,uVar8,param_2 + 0x1878);
        *(long *)(param_2 + 0x1420) = param_2 + 0x1878;
        return 1;
      }
    }
    else {
      *plVar3 = 0;
      *(undefined4 *)(plVar3 + 1) = DAT_03214ce8;
    }
  }
switchD_00d0dec4_default:
  return 2;
}

