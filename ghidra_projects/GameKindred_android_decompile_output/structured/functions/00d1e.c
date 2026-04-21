// functions/00d1e — 67 functions
#include "libGameKindred.h"




void FUN_00d1e0a4(void)

{
  return;
}




void FUN_00d1e0a8(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02819170;
  *(undefined4 *)((long)param_1 + 0x24) = 0xff;
  return;
}




void FUN_00d1e0e0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_00d1e0e8(long param_1,undefined8 param_2)

{
  FUN_009885dc(param_2,*(undefined4 *)(param_1 + 0x24));
  return 1;
}




void FUN_00d1e10c(void)

{
  return;
}




void FUN_00d1e110(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1e134(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




void FUN_00d1e158(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_028191f8;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d1e18c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined4 FUN_00d1e194(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}




void FUN_00d1e19c(void *param_1)

{
  FUN_00d0aae0();
  operator_delete(param_1);
  return;
}




long FUN_00d1e1c0(long param_1)

{
  return param_1 + 0x28;
}




void FUN_00d1e1c8(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0xbf800000;
  (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00d1e224(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d991f8(param_1 + 0x28);
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}




long FUN_00d1e248(long param_1)

{
  return param_1 + 0x28;
}




void FUN_00d1e250(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0xbf800000;
  (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00d1e2ac(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d99454(param_1 + 0x28);
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}




long FUN_00d1e2d0(long param_1)

{
  return param_1 + 0x28;
}




void FUN_00d1e2d8(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0xbf800000;
  (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00d1e334(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d994bc(param_1 + 0x28);
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}




long FUN_00d1e358(long param_1)

{
  return param_1 + 0x28;
}




void FUN_00d1e360(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0xbf800000;
  (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00d1e3bc(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d99568(param_1 + 0x28);
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}




long FUN_00d1e3e0(long param_1)

{
  return param_1 + 0x28;
}




void FUN_00d1e3e8(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0xbf800000;
  (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00d1e444(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d9a258(param_1 + 0x30);
  uVar2 = 1;
  if ((uVar1 & 1) == 0) {
    uVar2 = 2;
  }
  return uVar2;
}




undefined8 FUN_00d1e468(void)

{
  return 0;
}




undefined8 FUN_00d1e470(void)

{
  return 0;
}




undefined8 FUN_00d1e478(void)

{
  return 0;
}




undefined8 FUN_00d1e480(void)

{
  return 0;
}




undefined8 FUN_00d1e488(void)

{
  return 0;
}




undefined8 FUN_00d1e494(void)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar1 = (long *)FUN_00d26b20(&DAT_031502e0);
  if ((plVar1 == (long *)0x0) || (plVar3 = (long *)*plVar1, plVar3 == (long *)0x0)) {
    uVar2 = 0;
  }
  else if ((int)plVar1[1] == (int)plVar3[1]) {
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  else {
    *plVar1 = 0;
    uVar2 = 0;
    *(undefined4 *)(plVar1 + 1) = DAT_03214ce8;
  }
  return uVar2;
}




void FUN_00d1e508(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02819280;
  param_1[5] = 0;
  return;
}




void FUN_00d1e53c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




undefined8 FUN_00d1e544(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 0x28))(param_2);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  return 2;
}




void FUN_00d1e574(void)

{
  return;
}




void FUN_00d1e578(undefined8 *param_1)

{
  FUN_00d0aac4();
  *param_1 = &PTR_FUN_02819308;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00d1e5ac(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




undefined8 FUN_00d1e5b4(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 == 4) {
    plVar5 = *(long **)(param_2 + 0x1420);
  }
  else {
    if (iVar2 != 3) {
      if (iVar2 != 0) {
        return 2;
      }
      lVar3 = FUN_00d25570(param_2);
      goto joined_r0x00d1e61c;
    }
    plVar5 = *(long **)(param_2 + 0x1428);
  }
  if (plVar5 == (long *)0x0) {
    return 2;
  }
  plVar4 = (long *)*plVar5;
  if (plVar4 == (long *)0x0) {
    return 2;
  }
  if ((int)plVar5[1] != (int)plVar4[1]) {
    *plVar5 = 0;
    *(undefined4 *)(plVar5 + 1) = DAT_03214ce8;
    return 2;
  }
  lVar3 = (**(code **)(*plVar4 + 0x10))();
joined_r0x00d1e61c:
  if (((lVar3 != 0) && (uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 != 0x1f)) &&
     (*(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)) {
    return 1;
  }
  return 2;
}




void FUN_00d1e674(void)

{
  return;
}




void FUN_00d1e678(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined8 *)((long)param_1 + 0x24) = 0x10;
  *param_1 = &PTR_FUN_02819390;
  FUN_00e0bc14(0,(long)param_1 + 0x2c);
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  return;
}




void FUN_00d1e6c4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}




long FUN_00d1e6cc(long param_1,undefined4 param_2,undefined8 param_3,byte param_4)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  FUN_00e0bc6c(param_1 + 0x2c,param_3);
  *(byte *)(param_1 + 0x34) = param_4 & 1;
  return param_1;
}




undefined8 FUN_00d1e704(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 4) {
    plVar5 = *(long **)(param_2 + 0x1420);
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 != 0) {
        return 2;
      }
      lVar2 = FUN_00d25570(param_2);
      goto joined_r0x00d1e77c;
    }
    plVar5 = *(long **)(param_2 + 0x1428);
  }
  if (plVar5 == (long *)0x0) {
    return 2;
  }
  plVar3 = (long *)*plVar5;
  if (plVar3 == (long *)0x0) {
    return 2;
  }
  if ((int)plVar5[1] != (int)plVar3[1]) {
    *plVar5 = 0;
    *(undefined4 *)(plVar5 + 1) = DAT_03214ce8;
    return 2;
  }
  lVar2 = (**(code **)(*plVar3 + 0x10))();
joined_r0x00d1e77c:
  if ((lVar2 != 0) && (uVar4 = FUN_00d1e7c0(param_1,lVar2,param_2), (uVar4 & 1) != 0)) {
    return 1;
  }
  return 2;
}




bool FUN_00d1e7c0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = (float)FUN_00e0bc30(param_1 + 0x2c,param_3);
  if (*(char *)(param_1 + 0x34) == '\0') {
    switch((ulong)*(uint *)(param_1 + 0x24)) {
    case 0:
      lVar1 = *(long *)(param_2 + 0x40);
      fVar4 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
              (*(float *)(lVar1 + 0x38) +
              *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
      fVar3 = *(float *)(lVar1 + 0x308);
      fVar5 = DAT_03150160;
      fVar6 = DAT_03150220;
      break;
    case 1:
      lVar1 = *(long *)(param_2 + 0x40);
      fVar4 = (*(float *)(lVar1 + 0x250) + 1.0) *
              (*(float *)(lVar1 + 0xe8) +
              *(float *)(lVar1 + 0x19c) * (*(float *)(lVar1 + 0x304) + 1.0));
      fVar3 = *(float *)(lVar1 + 0x30c);
      fVar5 = DAT_03150210;
      fVar6 = DAT_031502d0;
      break;
    case 2:
      lVar1 = *(long *)(param_2 + 0x40);
      fVar3 = 1.0;
      fVar5 = (*(float *)(lVar1 + 0x1a8) + 1.0) *
              (*(float *)(lVar1 + 0x40) +
              *(float *)(lVar1 + 0xf4) * (*(float *)(lVar1 + 0x25c) + 1.0));
      if (DAT_03150228 <= fVar5) {
        fVar5 = DAT_03150228;
      }
      fVar4 = DAT_03150168;
      if (DAT_03150168 <= fVar5) {
        fVar4 = fVar5;
      }
      if (0.0 < fVar4) {
        fVar3 = *(float *)(lVar1 + 0x310) / fVar4;
      }
      goto LAB_00d1e9c0;
    case 3:
      lVar1 = *(long *)(param_2 + 0x40);
      fVar4 = (*(float *)(lVar1 + 0x24c) + 1.0) *
              (*(float *)(lVar1 + 0xe4) +
              *(float *)(lVar1 + 0x198) * (*(float *)(lVar1 + 0x300) + 1.0));
      fVar3 = *(float *)(lVar1 + 0x314);
      fVar5 = DAT_03150208._4_4_;
      fVar6 = DAT_031502cc;
      break;
    case 4:
      lVar1 = *(long *)(param_2 + 0x40);
      fVar4 = (*(float *)(lVar1 + 0x220) + 1.0) *
              (*(float *)(lVar1 + 0xb8) +
              *(float *)(lVar1 + 0x16c) * (*(float *)(lVar1 + 0x2d4) + 1.0));
      fVar3 = *(float *)(lVar1 + 0x318);
      fVar5 = DAT_031501e0;
      fVar6 = DAT_031502a0;
      break;
    default:
      return false;
    }
    if (fVar6 <= fVar4) {
      fVar4 = fVar6;
    }
    if (fVar5 <= fVar4) {
      fVar5 = fVar4;
    }
    fVar3 = fVar3 / fVar5;
  }
  else {
    fVar3 = *(float *)(*(long *)(param_2 + 0x40) + (ulong)*(uint *)(param_1 + 0x24) * 4 + 0x308);
  }
LAB_00d1e9c0:
  return fVar2 < fVar3 || ABS(fVar3 - fVar2) < 0.0001;
}




void FUN_00d1e9f4(void)

{
  return;
}




void FUN_00d1e9f8(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0xffffffff00000000;
  *param_1 = &PTR_FUN_02819418;
  *(undefined8 *)((long)param_1 + 0x2c) = 0x500000000;
  *(undefined8 *)((long)param_1 + 0x24) = 0x500000000;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  return;
}




void FUN_00d1ea54(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00d1ea5c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}




void FUN_00d1ea64(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_00d1ea6c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}




void FUN_00d1ea74(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}




void FUN_00d1ea7c(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x28) = 0;
  *(undefined4 *)(param_3 + 0x40) = param_2;
  *(undefined4 *)(param_3 + 0x44) = param_1;
  return;
}




void FUN_00d1ea88(long param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = 2;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}




void FUN_00d1ea98(long param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = 4;
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}




void FUN_00d1eaa8(long param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}




void FUN_00d1eab4(long param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 3;
  return;
}




void FUN_00d1eac0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x60) = param_1;
  return;
}




void FUN_00d1eac8(long param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}




void FUN_00d1ead8(long param_1)

{
  *(undefined1 *)(param_1 + 0x65) = 1;
  return;
}




void FUN_00d1eae4(long param_1)

{
  *(undefined1 *)(param_1 + 0x66) = 1;
  return;
}




void FUN_00d1eaf0(long param_1,byte param_2)

{
  *(byte *)(param_1 + 100) = param_2 & 1;
  return;
}




void FUN_00d1eafc(long param_1)

{
  *(undefined1 *)(param_1 + 0x67) = 1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00d1eb08(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  float *pfVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 == 2) {
    plVar7 = *(long **)(param_2 + 0x1428);
joined_r0x00d1eb50:
    if ((plVar7 == (long *)0x0) || (plVar5 = (long *)*plVar7, plVar5 == (long *)0x0)) {
      lVar4 = 0;
    }
    else if ((int)plVar7[1] == (int)plVar5[1]) {
      lVar4 = (**(code **)(*plVar5 + 0x10))();
    }
    else {
      *plVar7 = 0;
      lVar4 = 0;
      *(undefined4 *)(plVar7 + 1) = DAT_03214ce8;
    }
  }
  else {
    if (iVar2 == 1) {
      plVar7 = *(long **)(param_2 + 0x1420);
      goto joined_r0x00d1eb50;
    }
    if (iVar2 != 0) {
      return 2;
    }
    lVar4 = FUN_00d25570(param_2);
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 2) {
    uVar1 = FUN_00d588cc(lVar4,*(undefined8 *)(param_1 + 0x48));
    iVar2 = FUN_00d5c238(lVar4,uVar1);
    if (iVar2 == 0) {
      return 2;
    }
    iVar2 = *(int *)(param_1 + 0x28);
  }
  uVar1 = 0;
  switch(iVar2) {
  case 0:
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    fVar11 = *(float *)(param_1 + 0x44);
    break;
  case 1:
    lVar8 = *(long *)(lVar4 + 0x40);
    fVar12 = *(float *)(lVar8 + 0x1e0);
    fVar10 = *(float *)(lVar8 + 0x78) + *(float *)(lVar8 + 300) * (*(float *)(lVar8 + 0x294) + 1.0);
    fVar11 = DAT_031501a0;
    fVar13 = DAT_03150260;
    goto LAB_00d1ecb4;
  case 2:
    uVar3 = FUN_00d588cc(lVar4,*(undefined8 *)(param_1 + 0x48));
    fVar11 = (float)FUN_00d59f98(lVar4,uVar3);
    fVar11 = fVar11 + *(float *)(param_1 + 0x60);
    break;
  case 3:
    lVar8 = *(long *)(lVar4 + 0x40);
    fVar12 = *(float *)(lVar8 + 0x1e4);
    fVar10 = *(float *)(lVar8 + 0x7c) +
             *(float *)(lVar8 + 0x130) * (*(float *)(lVar8 + 0x298) + 1.0);
    fVar11 = _DAT_031501a4;
    fVar13 = DAT_03150264;
LAB_00d1ecb4:
    fVar10 = (fVar12 + 1.0) * fVar10;
    if (fVar13 <= fVar10) {
      fVar10 = fVar13;
    }
    if (fVar11 <= fVar10) {
      fVar11 = fVar10;
    }
    fVar11 = *(float *)(param_1 + 0x60) + fVar11;
    break;
  case 4:
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    uVar3 = FUN_00e6a474(uVar9);
    uVar3 = FUN_0091ed5c(uVar9,uVar3,0x12345678);
    pfVar6 = (float *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x18))(param_2 + 0x1688,uVar3);
    fVar11 = *pfVar6;
    break;
  default:
    fVar11 = 0.0;
  }
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 1:
    uVar9 = FUN_00d1edf4(uVar1,param_1,lVar4,param_2);
    return uVar9;
  case 2:
    uVar9 = FUN_00d1eecc(uVar1,param_1,lVar4,param_2);
    return uVar9;
  case 3:
    uVar9 = FUN_00d1efb0(uVar1,param_1,lVar4,param_2);
    return uVar9;
  case 4:
    uVar9 = FUN_00d1f0e0(uVar1,fVar11,param_1,lVar4,param_2);
    return uVar9;
  default:
    return 2;
  }
}




undefined8
FUN_00d1edf4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(char *)(param_3 + 100) == '\0') {
    uVar2 = FUN_00d1f214(param_1,param_2,param_3,param_4,param_5 + 0x278,
                         *(undefined4 *)(param_5 + 0x378),param_5,0);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    uVar2 = FUN_00d1f214(param_1,param_2,param_3,param_4,param_5 + 0xd20,
                         *(undefined4 *)(param_5 + 0x1020),param_5,0);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    uVar1 = *(undefined4 *)(param_5 + 0x888);
    lVar3 = param_5 + 0x688;
  }
  else {
    uVar1 = *(undefined4 *)(param_5 + 0x1330);
    lVar3 = param_5 + 0x1230;
  }
  uVar2 = FUN_00d1f214(param_1,param_2,param_3,param_4,lVar3,uVar1,param_5,0);
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  return 2;
}




undefined8
FUN_00d1eecc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_3 + 100) == '\0') {
    uVar2 = FUN_00d1f214(param_1,param_2,param_3,param_4,param_5 + 0x70,
                         *(undefined4 *)(param_5 + 0x270),param_5,1);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    uVar2 = FUN_00d1f214(param_1,param_2,param_3,param_4,param_5 + 0xa18,
                         *(undefined4 *)(param_5 + 0xd18),param_5,1);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    uVar1 = *(undefined4 *)(param_5 + 0x680);
    lVar3 = param_5 + 0x380;
  }
  else {
    uVar1 = *(undefined4 *)(param_5 + 0x1228);
    lVar3 = param_5 + 0x1028;
  }
  uVar4 = 1;
  uVar2 = FUN_00d1f214(param_1,param_2,param_3,param_4,lVar3,uVar1,param_5,1);
  if ((uVar2 & 1) == 0) {
    uVar4 = 2;
  }
  return uVar4;
}




void FUN_00d1efb0(float param_1,float param_2,long param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  float fVar7;
  float local_68;
  float local_60;
  float local_58 [2];
  float local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d1f420();
  plVar6 = *(long **)(param_5 + 0x1428);
  if ((plVar6 != (long *)0x0) && (plVar3 = (long *)*plVar6, plVar3 != (long *)0x0)) {
    if ((int)plVar6[1] == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if ((((lVar4 != 0) &&
           (uVar1 = *(uint *)(lVar4 + 0x2f4),
           (*(uint *)(param_3 + 0x34) & (uVar1 ^ 0xffffffff)) == 0)) &&
          ((*(uint *)(param_3 + 0x38) == 0xffffffff || ((*(uint *)(param_3 + 0x38) & uVar1) != 0))))
         && ((*(uint *)(param_3 + 0x3c) & uVar1) == 0)) {
        FUN_00d55794(lVar4,local_58,0);
        fVar7 = (local_68 - local_58[0]) * (local_68 - local_58[0]) +
                (local_60 - local_50) * (local_60 - local_50);
        if ((param_1 * param_1 <= fVar7) && (fVar7 <= param_2 * param_2)) {
          uVar5 = 1;
          goto LAB_00d1f0b4;
        }
      }
    }
    else {
      *plVar6 = 0;
      *(undefined4 *)(plVar6 + 1) = DAT_03214ce8;
    }
  }
  uVar5 = 2;
LAB_00d1f0b4:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

