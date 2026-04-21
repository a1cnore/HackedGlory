// functions/00bea — 6 functions
#include "libGameKindred.h"




void FUN_00beacd4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00beb8fc(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bead5c(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  FUN_008fa54c(param_1 + 8,PTR_s_build___SpoilsOfWarPartsCommon_t_02be3638);
  FUN_008fcdb8(param_1 + 0xe,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x14,&DAT_0320ffa8);
  param_1[0x1a] = 0;
  thunk_FUN_00e7051c(param_1 + 0x1c,&DAT_03210450);
  param_1[0x20] = 1;
  FUN_008fcdb8(param_1 + 0x22,&DAT_0320ffa8);
  uVar1 = _DAT_03218ef8;
  param_1[0x2a] = 1;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}




void FUN_00beae00(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00beb97c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xb0;
  *(undefined4 *)(lVar4 + -0xb0) = *param_2;
  FUN_008fcdb8(lVar4 + -0xa8,param_2 + 2);
  FUN_008fcdb8(lVar4 + -0x90,param_2 + 8);
  FUN_008fcdb8(lVar4 + -0x78,param_2 + 0xe);
  FUN_008fcdb8(lVar4 + -0x60,param_2 + 0x14);
  *(undefined4 *)(lVar4 + -0x48) = param_2[0x1a];
  thunk_FUN_00e7051c(lVar4 + -0x40,param_2 + 0x1c);
  *(undefined4 *)(lVar4 + -0x30) = param_2[0x20];
  FUN_008fcdb8(lVar4 + -0x28,param_2 + 0x22);
  *(undefined8 *)(lVar4 + -0xb) = *(undefined8 *)((long)param_2 + 0xa5);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0x28);
  return;
}




uint FUN_00beaef4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar2 = FUN_00f023dc(lVar3);
  uVar1 = 0;
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_00f023dc(lVar3 + 0x1858);
    uVar1 = 0;
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_00bc47a0(param_1 + 0x668);
      uVar1 = 0;
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_00bc4a2c(param_1 + 0x690);
        uVar1 = 0;
        if ((uVar2 & 1) == 0) {
          uVar1 = FUN_00bc4c18(param_1 + 0x6a0);
          uVar1 = uVar1 ^ 1;
        }
      }
    }
  }
  return uVar1 & 1;
}




void FUN_00beaf68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efbe0;
  if ((void *)param_1[0x22] != (void *)0x0) {
    operator_delete__((void *)param_1[0x22]);
    param_1[0x21] = 0;
    param_1[0x22] = 0;
  }
  if ((void *)param_1[0x20] != (void *)0x0) {
    operator_delete__((void *)param_1[0x20]);
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  FUN_00beb548(param_1);
  return;
}




void FUN_00beafb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efbe0;
  if ((void *)param_1[0x22] != (void *)0x0) {
    operator_delete__((void *)param_1[0x22]);
    param_1[0x21] = 0;
    param_1[0x22] = 0;
  }
  if ((void *)param_1[0x20] != (void *)0x0) {
    operator_delete__((void *)param_1[0x20]);
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  FUN_00beb548(param_1);
  operator_delete(param_1);
  return;
}

