// functions/00d6c — 49 functions
#include "libGameKindred.h"




void FUN_00d6c028(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d67dc4(lVar2);
  return;
}




bool FUN_00d6c068(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while( true ) {
    if (lVar2 == 0) {
      return false;
    }
    iVar1 = FUN_00d66d34(lVar2);
    if (iVar1 == param_2) break;
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  iVar1 = FUN_00d67ce4(lVar2);
  return iVar1 == 0;
}




void FUN_00d6c0bc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined4 local_38 [2];
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(local_38);
  local_30[0] = local_38[0];
  lVar2 = FUN_00d6b680(param_1,local_30,0xffffffff);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2 != 0);
}




uint FUN_00d6c130(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(local_40);
  uVar2 = FUN_00d6c19c(param_1,local_40[0],param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00d6c19c(long param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_00d67b1c(lVar2);
    if (((iVar1 == param_2) && (iVar1 = FUN_00d67ce4(lVar2), iVar1 == 0)) &&
       (iVar1 = FUN_00d67b84(lVar2), iVar1 == param_3)) break;
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  return 1;
}




undefined8 FUN_00d6c20c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    uVar2 = FUN_00d67d5c(lVar3);
    if ((((uVar2 & 1) != 0) && (iVar1 = FUN_00d67ce4(lVar3), iVar1 == 0)) &&
       (iVar1 = FUN_00d66cf4(lVar3), iVar1 != 0)) break;
    lVar3 = *(long *)(lVar3 + 0x350);
  }
  return 1;
}




undefined8 FUN_00d6c264(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    uVar2 = FUN_00d67db0(lVar3);
    if ((((uVar2 & 1) != 0) && (iVar1 = FUN_00d67ce4(lVar3), iVar1 == 0)) &&
       (iVar1 = FUN_00d66cf4(lVar3), iVar1 != 0)) break;
    lVar3 = *(long *)(lVar3 + 0x350);
  }
  return 1;
}




undefined8 FUN_00d6c2bc(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = FUN_00d66d34(lVar3);
    if (iVar1 == param_2) break;
    lVar3 = *(long *)(lVar3 + 0x350);
  }
  uVar2 = FUN_00d66ce0(lVar3,param_3);
  return uVar2;
}




void FUN_00d6c320(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d67ddc(lVar1,param_2,param_3);
  }
  return;
}




void FUN_00d6c368(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d67e48(lVar1,param_2,param_3);
  }
  return;
}




void FUN_00d6c3b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d67eb4(lVar1,param_2);
  }
  return;
}




void FUN_00d6c3e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d67f18(lVar1,param_2);
  }
  return;
}




void FUN_00d6c420(long param_1)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d67f7c(lVar1);
  }
  return;
}




void FUN_00d6c450(long param_1,undefined8 param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d67fd0(lVar1,param_2);
  }
  return;
}




void FUN_00d6c488(long param_1,undefined8 param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d68034(lVar1,param_2);
  }
  return;
}




void FUN_00d6c4c0(long param_1)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d68098(lVar1);
  }
  return;
}




void FUN_00d6c4f0(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d680ec(lVar1,param_2,param_3,param_4);
  }
  return;
}




void FUN_00d6c540(long param_1,undefined8 param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d68168(lVar1,param_2);
  }
  return;
}




void FUN_00d6c578(long param_1,undefined8 param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d681cc(lVar1,param_2);
  }
  return;
}




void FUN_00d6c5b0(long param_1)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d68230(lVar1);
  }
  return;
}




void FUN_00d6c5e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d68284(lVar1,param_2);
  }
  return;
}




void FUN_00d6c618(long param_1)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d682e8(lVar1);
  }
  return;
}




void FUN_00d6c648(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d6833c(lVar1,param_2,param_3);
  }
  return;
}




void FUN_00d6c690(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d68448(lVar1,param_2,param_3);
  }
  return;
}




void FUN_00d6c6d8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d68554(lVar1,param_2);
  }
  return;
}




void FUN_00d6c710(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d6862c(lVar1,param_2,param_3);
  }
  return;
}




void FUN_00d6c758(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d68738(lVar1,param_2,param_3);
  }
  return;
}




void FUN_00d6c7a0(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_2 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d68844(param_1,lVar1,param_3,param_4,param_5);
  }
  return;
}




void FUN_00d6c800(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d689c4(lVar1,param_2,param_3);
  }
  return;
}




void FUN_00d6c848(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d68ad0(lVar1,param_2,param_3,param_4,param_5);
  }
  return;
}




void FUN_00d6c8a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_2 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d68c44(param_1,lVar1,param_3,param_4,param_5);
  }
  return;
}




void FUN_00d6c908(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_2 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d68df4(param_1,lVar1,param_3,param_4,param_5);
  }
  return;
}




void FUN_00d6c968(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d68f70(lVar1,param_2,param_3,param_4,param_5);
  }
  return;
}




void FUN_00d6c9c8(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
    FUN_00d690e4(lVar1,param_2,param_3,param_4);
  }
  return;
}




long FUN_00d6ca18(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(local_30);
  lVar3 = *(long *)(param_1 + 0x28);
  while ((lVar3 != 0 && (iVar2 = FUN_00d67b1c(lVar3), local_30[0] != iVar2))) {
    lVar3 = *(long *)(lVar3 + 0x350);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}




void FUN_00d6ca8c(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    param_2 = ~param_2;
    do {
      param_2 = param_2 + 1;
      if (param_2 == 0) {
        return;
      }
      lVar1 = *(long *)(lVar1 + 0x350);
    } while (lVar1 != 0);
  }
  return;
}




void FUN_00d6caac(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_0281deb0;
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}




void FUN_00d6cac8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d6cad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d6cad4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_0281dee0;
  puVar1 = param_1 + 5;
  do {
    *(undefined4 *)((long)puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar2 = (undefined8 *)((long)puVar1 + 0xc);
    *(undefined4 *)puVar1 = 0xffffffff;
    puVar1 = puVar2;
  } while (puVar2 != param_1 + 0xe);
  puVar1 = param_1 + 0xe;
  do {
    *(undefined4 *)((long)puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar2 = (undefined8 *)((long)puVar1 + 0xc);
    *(undefined4 *)puVar1 = 0xffffffff;
    puVar1 = puVar2;
  } while (puVar2 != param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  return;
}




void FUN_00d6cb28(long param_1)

{
  long lVar1;
  
  DAT_0314fa24 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0314fa24 + 1;
  lVar1 = param_1 + (ulong)DAT_0314fa24 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d6d30c;
  *(code **)(lVar1 + 0xb8) = FUN_00d6d370;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(uint *)(lVar1 + 0xa4) = DAT_0314fa24;
  *(undefined4 *)(lVar1 + 0xa8) = 0xf0;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_019867cc(param_1,0x22ef04a2,FUN_00d6cb9c,0);
  return;
}




undefined4 FUN_00d6cc90(long param_1)

{
  return *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe8) * 0xc + 0x28);
}




int FUN_00d6cca4(long param_1)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  
  fVar4 = (float)FUN_009bc24c();
  lVar2 = 0;
  iVar1 = 0;
  pfVar3 = (float *)(param_1 + 0x30);
  do {
    if (((-lVar2 != (ulong)*(uint *)(param_1 + 0xe8)) && (fVar4 + -10.0 <= *pfVar3)) &&
       (pfVar3[-2] != -NAN)) {
      iVar1 = iVar1 + 1;
    }
    lVar2 = lVar2 + -1;
    pfVar3 = pfVar3 + 3;
  } while (lVar2 != -6);
  return iVar1;
}




float FUN_00d6cd1c(long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  float *pfVar4;
  float fVar5;
  
  fVar5 = (float)FUN_009bc24c();
  uVar3 = 0;
  pfVar4 = (float *)(param_1 + 0x30);
  while ((((*(uint *)(param_1 + 0xe8) == uVar3 || (*pfVar4 < fVar5 + -10.0)) ||
          (iVar2 = param_2 + -1, bVar1 = 0 < param_2, param_2 = iVar2, bVar1)) ||
         (pfVar4[-2] == -NAN))) {
    uVar3 = uVar3 + 1;
    pfVar4 = pfVar4 + 3;
    if (5 < uVar3) {
      return -NAN;
    }
  }
  return pfVar4[-2];
}




int FUN_00d6cda4(long param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = 0;
  lVar3 = 0x28;
  do {
    piVar1 = (int *)(param_1 + lVar3);
    lVar3 = lVar3 + 0xc;
    if (*piVar1 != -1) {
      iVar2 = iVar2 + 1;
    }
  } while (lVar3 != 0x70);
  return iVar2;
}




int FUN_00d6cdd8(long param_1,int param_2)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  piVar1 = (int *)(param_1 + 0x28);
  do {
    if (*piVar1 != -1) {
      if (iVar3 == param_2) {
        return *piVar1;
      }
      iVar3 = iVar3 + 1;
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 3;
  } while (uVar2 < 6);
  return -1;
}




int FUN_00d6ce28(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  fVar3 = (float)FUN_009bc24c();
  lVar2 = 0;
  iVar1 = 0;
  do {
    if ((*(int *)(param_1 + lVar2 + 0x70) != -1) &&
       (fVar3 + -10.0 <= *(float *)(param_1 + lVar2 + 0x78))) {
      iVar1 = iVar1 + 1;
    }
    lVar2 = lVar2 + 0xc;
  } while (lVar2 != 0x78);
  return iVar1;
}




float FUN_00d6ce90(long param_1,int param_2)

{
  bool bVar1;
  ulong uVar2;
  float *pfVar3;
  float fVar4;
  
  fVar4 = (float)FUN_009bc24c();
  uVar2 = 0;
  pfVar3 = (float *)(param_1 + 0x78);
  while (((pfVar3[-2] == -NAN || (*pfVar3 < fVar4 + -10.0)) ||
         (bVar1 = 0 < param_2, param_2 = param_2 + -1, bVar1))) {
    uVar2 = uVar2 + 1;
    pfVar3 = pfVar3 + 3;
    if (9 < uVar2) {
      return -NAN;
    }
  }
  return pfVar3[-2];
}




undefined8 FUN_00d6cf08(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00d6cca4();
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      iVar2 = FUN_00d6cd1c(param_1,iVar3);
      if (iVar2 == param_2) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}




undefined8 FUN_00d6cf70(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  uVar1 = 0;
  lVar3 = 0x28;
  do {
    piVar6 = (int *)(param_1 + lVar3);
    lVar3 = lVar3 + 0xc;
    if (*piVar6 != -1) {
      uVar1 = uVar1 + 1;
    }
  } while (lVar3 != 0x70);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      uVar4 = 0;
      uVar5 = 0;
      piVar6 = (int *)(param_1 + 0x28);
      do {
        if (*piVar6 != -1) {
          iVar7 = *piVar6;
          if (uVar5 == uVar2) break;
          uVar5 = uVar5 + 1;
        }
        uVar4 = uVar4 + 1;
        piVar6 = piVar6 + 3;
        iVar7 = -1;
      } while (uVar4 < 6);
      if (iVar7 == param_2) {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}

