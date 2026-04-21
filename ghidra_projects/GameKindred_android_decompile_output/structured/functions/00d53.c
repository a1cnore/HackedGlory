// functions/00d53 — 59 functions
#include "libGameKindred.h"




uint FUN_00d530b0(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = 0;
  while ((uVar1 = *(uint *)(param_1 + 0x108 + lVar2 * 4), (uVar1 >> 0x1e & 1) == 0 ||
         ((uVar1 & 0x7fff) != param_2))) {
    lVar2 = lVar2 + 1;
    if (0x13 < (uint)lVar2) {
      return param_2;
    }
  }
  return uVar1 >> 0xf & 0x7fff;
}




void FUN_00d530e8(long param_1,ulong param_2)

{
  FUN_00d530f4(param_1,*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50));
  return;
}




void FUN_00d530f4(long param_1,long param_2)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  
  uVar1 = FUN_00d50890(param_2);
  if (((uVar1 & 1) != 0) || (uVar1 = FUN_00d5092c(param_2), (uVar1 & 1) != 0)) {
    FUN_00d53224(param_1);
  }
  uVar1 = FUN_00d5075c(param_2);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_00d5210c(param_2), (uVar1 & 1) != 0)) {
    FUN_00d53288(param_1);
  }
  piVar2 = (int *)FUN_00d50ad4(param_2);
  if ((*piVar2 != 0x377db359) && (*(char *)(param_1 + 0x198) != '\0')) {
    uVar1 = 0;
    do {
      if (*(long *)(param_1 + 0x50 + uVar1 * 8) != param_2) {
        piVar2 = (int *)FUN_00d50ad4();
        piVar3 = (int *)FUN_00d50ad4(param_2);
        if (*piVar2 == *piVar3) {
          FUN_00d50838(*(undefined8 *)(param_1 + 0x50 + uVar1 * 8));
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(byte *)(param_1 + 0x198));
  }
  FUN_00d5084c(param_2);
  return;
}




void FUN_00d531dc(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00d518d0();
    FUN_00d530f4(param_1,*(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}




void FUN_00d53218(long param_1,ulong param_2)

{
  FUN_00d530f4(param_1,*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50));
  return;
}




void FUN_00d53224(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x198) != '\0') {
    uVar3 = 0;
    lVar1 = param_1 + 0x50;
    do {
      uVar2 = FUN_00d508f8(*(undefined8 *)(lVar1 + uVar3 * 8));
      if (((uVar2 & 1) != 0) &&
         (uVar2 = FUN_00d509f0(*(undefined8 *)(lVar1 + uVar3 * 8)), (uVar2 & 1) != 0)) {
        FUN_00d5089c(*(undefined8 *)(lVar1 + uVar3 * 8));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)(param_1 + 0x198));
  }
  return;
}




void FUN_00d53288(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x198) != '\0') {
    uVar2 = 0;
    do {
      if ((*(long *)(param_1 + 0x50 + uVar2 * 8) != 0) && (uVar1 = FUN_00d5075c(), (uVar1 & 1) != 0)
         ) {
        FUN_00d519bc(*(undefined8 *)(param_1 + 0x50 + uVar2 * 8));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_1 + 0x198));
  }
  return;
}




undefined8 FUN_00d532e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_00d532ec(long param_1,uint param_2)

{
  FUN_00d507bc(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




int FUN_00d532f8(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if (*(char *)(param_1 + 0x198) == '\0') {
    iVar5 = 0;
  }
  else {
    uVar7 = 0;
    iVar5 = 0;
    do {
      uVar6 = *(undefined8 *)(param_1 + 0x50 + uVar7 * 8);
      uVar3 = FUN_00d50ab0(uVar6);
      if (((uVar3 & 1) != 0) && (lVar4 = FUN_00d5029c(uVar6), *(char *)(lVar4 + 0x8b) != '\0')) {
        iVar1 = FUN_00d504c4(uVar6);
        iVar2 = FUN_00d51240(uVar6);
        iVar5 = (iVar1 + iVar5) - iVar2;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(byte *)(param_1 + 0x198));
  }
  return iVar5;
}




void FUN_00d5338c(long param_1,long param_2,long param_3,long param_4,long param_5,uint *param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  *param_6 = 0;
  if (*(char *)(param_1 + 0x198) != '\0') {
    uVar5 = 0;
    do {
      uVar4 = *(undefined8 *)(param_1 + 0x50 + uVar5 * 8);
      uVar3 = FUN_00d50ab0(uVar4);
      if ((uVar3 & 1) != 0) {
        *(int *)(param_2 + (ulong)*param_6 * 4) = (int)uVar5;
        uVar2 = FUN_00d504c4(uVar4);
        *(undefined4 *)(param_3 + (ulong)*param_6 * 4) = uVar2;
        uVar2 = FUN_00d50c5c(uVar4);
        *(undefined4 *)(param_4 + (ulong)*param_6 * 4) = uVar2;
        uVar1 = FUN_00d50c44(uVar4);
        *(undefined1 *)(param_5 + (ulong)*param_6) = uVar1;
        *param_6 = *param_6 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(byte *)(param_1 + 0x198));
  }
  return;
}




void FUN_00d53454(long param_1,long param_2,long param_3,long param_4,long param_5,uint param_6)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_6 != 0) {
    uVar7 = 0;
    do {
      uVar4 = *(undefined8 *)(param_1 + (ulong)*(uint *)(param_2 + uVar7 * 4) * 8 + 0x50);
      FUN_00d502a4(uVar4,*(undefined4 *)(param_3 + uVar7 * 4));
      if (*(char *)(param_1 + 0x198) != '\0') {
        uVar3 = 0;
        do {
          if ((uVar3 != *(uint *)(param_2 + uVar7 * 4)) &&
             (uVar1 = FUN_00d513dc(*(undefined8 *)(param_1 + 0x50 + uVar3 * 8)),
             uVar1 == *(uint *)(param_2 + uVar7 * 4))) {
            uVar5 = *(undefined8 *)(param_1 + 0x50 + uVar3 * 8);
            if (*(long *)(param_1 + (ulong)uVar1 * 8 + 0x50) == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = FUN_00d504c4();
            }
            FUN_00d502a4(uVar5,uVar2);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(byte *)(param_1 + 0x198));
      }
      if ((((0.0 < *(float *)(param_4 + uVar7 * 4)) || (*(char *)(param_5 + uVar7) != '\0')) &&
          (lVar6 = *(long *)(param_1 + 0x10), lVar6 != 0)) &&
         (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_02c09220)) {
        uVar4 = FUN_00d50ad4(uVar4);
        uVar4 = FUN_00d9f258(lVar6,uVar4);
        FUN_00d6d618(*(undefined4 *)(param_4 + uVar7 * 4),uVar4,*(undefined1 *)(param_5 + uVar7));
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_6);
  }
  return;
}




undefined1 FUN_00d5359c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x198);
}




void FUN_00d535a4(long param_1,uint param_2)

{
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d504c4();
    return;
  }
  return;
}




void FUN_00d535b8(long param_1,uint param_2)

{
  FUN_00d50ab0(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




undefined8 FUN_00d535c4(long param_1,uint param_2)

{
  ulong uVar1;
  
  if ((ulong)*(byte *)(param_1 + 0x199) != 0) {
    uVar1 = 0;
    do {
      if (*(long *)(param_1 + 0xf0 + uVar1 * 8) == *(long *)(param_1 + (ulong)param_2 * 8 + 0x50)) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(byte *)(param_1 + 0x199));
  }
  return 0;
}




void FUN_00d53604(long param_1,uint param_2)

{
  FUN_00d50890(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




uint FUN_00d53610(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x198) == '\0') {
    uVar4 = 0;
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    lVar1 = param_1 + 0x50;
    do {
      uVar3 = FUN_00d508f8(*(undefined8 *)(lVar1 + uVar5 * 8));
      if (((uVar3 & 1) != 0) &&
         (uVar3 = FUN_00d50938(*(undefined8 *)(lVar1 + uVar5 * 8)), (uVar3 & 1) == 0)) {
        uVar2 = FUN_00d5089c(*(undefined8 *)(lVar1 + uVar5 * 8));
        uVar4 = uVar4 | uVar2;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(byte *)(param_1 + 0x198));
  }
  return uVar4 & 1;
}




uint FUN_00d53688(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x198) == '\0') {
    uVar4 = 0;
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    lVar1 = param_1 + 0x50;
    do {
      uVar3 = FUN_00d508f8(*(undefined8 *)(lVar1 + uVar5 * 8));
      if ((((uVar3 & 1) != 0) &&
          (uVar3 = FUN_00d50938(*(undefined8 *)(lVar1 + uVar5 * 8)), (uVar3 & 1) == 0)) &&
         (uVar3 = FUN_00d509c8(*(undefined8 *)(lVar1 + uVar5 * 8)), (uVar3 & 1) != 0)) {
        uVar2 = FUN_00d5089c(*(undefined8 *)(lVar1 + uVar5 * 8));
        uVar4 = uVar4 | uVar2;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(byte *)(param_1 + 0x198));
  }
  return uVar4 & 1;
}




undefined8 FUN_00d5370c(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x198) != '\0') {
    uVar3 = 0;
    lVar1 = param_1 + 0x50;
    do {
      uVar2 = FUN_00d508f8(*(undefined8 *)(lVar1 + uVar3 * 8));
      if (((((uVar2 & 1) != 0) &&
           (uVar2 = FUN_00d51a30(*(undefined8 *)(lVar1 + uVar3 * 8)), (uVar2 & 1) == 0)) &&
          (uVar2 = FUN_00d50938(*(undefined8 *)(lVar1 + uVar3 * 8)), (uVar2 & 1) == 0)) &&
         (uVar2 = FUN_00d509c8(*(undefined8 *)(lVar1 + uVar3 * 8)), (uVar2 & 1) != 0)) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)(param_1 + 0x198));
  }
  return 0;
}




void FUN_00d5378c(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  uVar1 = FUN_00d508f8(lVar4);
  if ((uVar1 & 1) != 0) {
    FUN_00d5089c(lVar4);
  }
  if ((((param_3 & 1) != 0) && (piVar2 = (int *)FUN_00d50ad4(lVar4), *piVar2 != 0x377db359)) &&
     (*(char *)(param_1 + 0x198) != '\0')) {
    uVar1 = 0;
    do {
      piVar3 = (int *)FUN_00d50ad4(*(undefined8 *)(param_1 + 0x50 + uVar1 * 8));
      if ((*piVar2 == *piVar3) && (lVar4 != *(long *)(param_1 + 0x50 + uVar1 * 8))) {
        FUN_00d5089c();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(byte *)(param_1 + 0x198));
  }
  return;
}




void FUN_00d53848(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00d508f8(*(undefined8 *)(param_1 + 0x38));
  if ((uVar1 & 1) != 0) {
    FUN_00d5089c(*(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}




void FUN_00d53880(long param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  while ((uVar1 = *(uint *)(param_1 + 0x108 + uVar2 * 4), (uVar1 >> 0x1e & 1) == 0 ||
         ((uVar1 & 0x7fff) != param_2))) {
    uVar2 = uVar2 + 1;
    if (0x13 < uVar2) {
LAB_00d538b0:
      thunk_FUN_00d51844(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50),param_3);
      return;
    }
  }
  param_2 = uVar1 >> 0xf & 0x7fff;
  goto LAB_00d538b0;
}




void FUN_00d538c0(long param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = 0;
  while ((uVar1 = *(uint *)(param_1 + 0x108 + uVar2 * 4), (uVar1 >> 0x1e & 1) == 0 ||
         ((uVar1 & 0x7fff) != param_2))) {
    uVar2 = uVar2 + 1;
    if (0x13 < uVar2) {
LAB_00d538f0:
      FUN_00d518d0(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50),param_3);
      return;
    }
  }
  param_2 = uVar1 >> 0xf & 0x7fff;
  goto LAB_00d538f0;
}




void FUN_00d53900(long param_1,uint param_2)

{
  FUN_00d51760(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




undefined1 FUN_00d5390c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x199);
}




void FUN_00d53914(long param_1,uint param_2)

{
  FUN_00d5029c(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




void FUN_00d53920(long param_1,uint param_2)

{
  FUN_00d50abc(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




void FUN_00d5392c(long param_1,uint param_2)

{
  FUN_00d50460(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




void FUN_00d53938(long param_1,uint param_2)

{
  FUN_00d50460(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  FUN_00d9ff9c();
  return;
}




int FUN_00d53954(long param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    cVar1 = FUN_00d51234();
    iVar2 = (int)cVar1;
  }
  return iVar2;
}




undefined8 FUN_00d53978(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    uVar1 = FUN_00d513f4();
    return uVar1;
  }
  return 0x400;
}




void FUN_00d53990(long param_1,uint param_2)

{
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d507f8();
    return;
  }
  return;
}




undefined4 * FUN_00d539a4(long param_1,uint param_2)

{
  undefined4 *puVar1;
  
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    puVar1 = (undefined4 *)FUN_00d50ad4();
    return puVar1;
  }
  return &DAT_01bd11d0;
}




undefined1  [16] FUN_00d539d0(long param_1,uint param_2)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d50af0();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




undefined1  [16] FUN_00d539e8(long param_1,uint param_2)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d50b40();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




undefined1  [16] FUN_00d53a00(long param_1,uint param_2)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d50bd8();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




undefined1  [16] FUN_00d53a18(long param_1,uint param_2)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d50b2c();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




void FUN_00d53a30(long param_1,uint param_2)

{
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d50c44();
    return;
  }
  return;
}




void FUN_00d53a44(long param_1,uint param_2)

{
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d50c24();
    return;
  }
  return;
}




undefined1  [16] FUN_00d53a58(long param_1,uint param_2)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d50c5c();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




undefined8 FUN_00d53a70(long param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  if ((lVar5 != 0) && (*(char *)(param_1 + 0x198) != '\0')) {
    uVar6 = 0;
    do {
      piVar1 = (int *)FUN_00d50ad4(lVar5);
      lVar4 = lVar5;
      if (lVar5 == *(long *)(param_1 + 0x50 + uVar6 * 8)) {
LAB_00d53af0:
        uVar3 = FUN_00d51a30(lVar4);
        if ((uVar3 & 1) != 0) {
          return 1;
        }
      }
      else if ((*piVar1 != 0x377db359) && (piVar2 = (int *)FUN_00d50ad4(), *piVar1 == *piVar2)) {
        lVar4 = *(long *)(param_1 + 0x50 + uVar6 * 8);
        goto LAB_00d53af0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)(param_1 + 0x198));
  }
  return 0;
}




undefined1  [16] FUN_00d53b2c(long param_1,uint param_2)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d50c70();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




undefined1  [16] FUN_00d53b44(long param_1,uint param_2)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d50c9c();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




undefined1  [16] FUN_00d53b5c(long param_1,uint param_2)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    FUN_00d50cc8();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




undefined8 FUN_00d53b74(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    uVar1 = FUN_00d50dd0();
    return uVar1;
  }
  return 1;
}




undefined8 FUN_00d53b8c(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    uVar1 = FUN_00d50ddc();
    return uVar1;
  }
  return 1;
}




undefined8 FUN_00d53ba4(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + (ulong)param_2 * 8 + 0x50) != 0) {
    uVar1 = FUN_00d50de8();
    return uVar1;
  }
  return 4;
}




void FUN_00d53bbc(long param_1,ulong param_2,undefined4 param_3)

{
  FUN_00d519c8(*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50),param_3);
  return;
}




void FUN_00d53bcc(long param_1,uint param_2)

{
  FUN_00d519ec(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




void FUN_00d53bd8(long param_1,uint param_2)

{
  FUN_00d519f4(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




void FUN_00d53be4(long param_1,uint param_2)

{
  FUN_00d51a00(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




void FUN_00d53bf0(long param_1,uint param_2)

{
  FUN_00d519dc(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  return;
}




void FUN_00d53bfc(long param_1,ulong param_2,undefined4 param_3,uint param_4)

{
  FUN_00d51a10(*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 8 + 0x50),param_3,param_4 & 1);
  return;
}




void FUN_00d53c14(long param_1,uint param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  
  uVar8 = *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50);
  FUN_00d50860(uVar8);
  bVar1 = *(char *)(param_1 + 0x19a) + 1;
  *(byte *)(param_1 + 0x19a) = bVar1;
  *(uint *)(param_1 + (ulong)bVar1 * 4 + 0x158) = param_2;
  if (*(char *)(param_1 + 0x198) != '\0') {
    uVar9 = 0;
    do {
      if ((param_2 != uVar9) &&
         (uVar3 = FUN_00d513dc(*(undefined8 *)(param_1 + 0x50 + uVar9 * 8)), uVar3 == param_2)) {
        FUN_00d50860(*(undefined8 *)(param_1 + 0x50 + uVar9 * 8));
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(byte *)(param_1 + 0x198));
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c09220) {
    lVar6 = 0;
  }
  lVar5 = FUN_00d7e3d0();
  uVar2 = *(undefined4 *)(lVar6 + 0x260);
  uVar4 = FUN_00d504c4(uVar8);
  plVar10 = (long *)(lVar5 + 0x10);
  plVar7 = (long *)*plVar10;
  plVar11 = plVar10;
  if (plVar7 != (long *)0x0) {
    do {
      if (*(uint *)(plVar7 + 4) >= 0x4b5470ae) {
        plVar11 = plVar7;
      }
      plVar7 = (long *)plVar7[*(uint *)(plVar7 + 4) < 0x4b5470ae];
    } while (plVar7 != (long *)0x0);
    if (((plVar11 != plVar10) && (*(uint *)(plVar11 + 4) < 0x4b5470af)) && ((int)plVar11[5] != 0)) {
      lVar6 = 0;
      uVar9 = 0;
      do {
        (*(code *)((undefined8 *)(plVar11[6] + lVar6))[1])
                  (*(undefined8 *)(plVar11[6] + lVar6),uVar2,param_2,uVar4);
        uVar9 = uVar9 + 1;
        lVar6 = lVar6 + 0x10;
      } while (uVar9 < *(uint *)(plVar11 + 5));
    }
  }
  return;
}




void FUN_00d53d6c(long param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  
  FUN_00d50870(*(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50));
  bVar1 = *(byte *)(param_1 + 0x19a);
  *(undefined4 *)(param_1 + (ulong)bVar1 * 4 + 0x158) = 0xffffffff;
  *(byte *)(param_1 + 0x19a) = bVar1 - 1;
  if (*(char *)(param_1 + 0x198) != '\0') {
    uVar3 = 0;
    do {
      if ((param_2 != uVar3) &&
         (uVar2 = FUN_00d513dc(*(undefined8 *)(param_1 + 0x50 + uVar3 * 8)), uVar2 == param_2)) {
        FUN_00d50870(*(undefined8 *)(param_1 + 0x50 + uVar3 * 8));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)(param_1 + 0x198));
  }
  return;
}




undefined8 FUN_00d53e0c(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 0x198) != '\0') {
    uVar4 = 0;
    lVar1 = param_1 + 0x50;
    do {
      uVar3 = FUN_00d50ab0(*(undefined8 *)(lVar1 + uVar4 * 8));
      if ((((uVar3 & 1) != 0) &&
          (uVar3 = FUN_00d50aa4(*(undefined8 *)(lVar1 + uVar4 * 8)), (uVar3 & 1) != 0)) &&
         (iVar2 = FUN_00d504c4(*(undefined8 *)(lVar1 + uVar4 * 8)), iVar2 != 0)) {
        return 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)(param_1 + 0x198));
  }
  return 0;
}




void FUN_00d53e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_50 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(local_50);
  uVar2 = FUN_00d5412c(param_1,local_50[0]);
  thunk_FUN_00d9ff34(local_50,param_3);
  uVar3 = FUN_00d5412c(param_1,local_50[0]);
  FUN_00d53f20(param_1,uVar2,uVar3,param_4 & 1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d53f20(long param_1,uint param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  lVar4 = 0;
  while ((*(byte *)(param_1 + lVar4 * 4 + 0x10b) >> 6 & 1) != 0) {
    lVar4 = lVar4 + 1;
    if (0x13 < (uint)lVar4) {
      return;
    }
  }
  *(uint *)(param_1 + lVar4 * 4 + 0x108) = param_2 & 0x7fff | (param_3 & 0x7fff) << 0xf | 0x40000000
  ;
  if ((param_4 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x198) == '\0') {
    return;
  }
  puVar7 = (undefined8 *)(param_1 + 0x50);
  uVar6 = 0;
  puVar1 = puVar7 + param_2;
  do {
    piVar2 = (int *)FUN_00d50ad4(*puVar1);
    puVar5 = puVar7;
    if (param_2 == uVar6) {
LAB_00d53fb0:
      FUN_00d5089c(*puVar5);
    }
    else if ((*piVar2 != 0x377db359) && (piVar3 = (int *)FUN_00d50ad4(*puVar7), *piVar2 == *piVar3))
    {
      puVar5 = (undefined8 *)(param_1 + uVar6 * 8 + 0x50);
      goto LAB_00d53fb0;
    }
    uVar6 = uVar6 + 1;
    puVar7 = puVar7 + 1;
    if (*(byte *)(param_1 + 0x198) <= uVar6) {
      return;
    }
  } while( true );
}

