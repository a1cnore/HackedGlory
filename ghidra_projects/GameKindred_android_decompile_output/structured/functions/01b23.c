// functions/01b23 — 2 functions
#include "libGameKindred.h"




undefined8 FUN_01b23264(byte *param_1,int param_2,long param_3,undefined4 *param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  if (param_2 == 2) {
    if (uVar2 == 0xd) {
LAB_01b232c8:
      uVar1 = 1;
      if ((param_1 < (byte *)(param_3 + -1)) && (uVar1 = 1, param_1[1] == 10)) {
        uVar1 = 2;
      }
      *param_4 = uVar1;
      return 1;
    }
    if (uVar2 != 10) {
      return 0;
    }
  }
  else if (2 < uVar2 - 10) {
    if (uVar2 != 0xd) {
      if (uVar2 != 0x85) {
        return 0;
      }
      uVar1 = 1;
      if (param_5 != 0) {
        uVar1 = 2;
      }
      *param_4 = uVar1;
      return 1;
    }
    goto LAB_01b232c8;
  }
  *param_4 = 1;
  return 1;
}




undefined4 FUN_01b232f0(long param_1,int param_2,byte *param_3,undefined4 *param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + -1);
  if (param_2 == 2) {
    if (uVar1 != 0xd) {
LAB_01b2332c:
      if (uVar1 != 10) {
        return 0;
      }
      uVar2 = 1;
      if ((param_3 < (byte *)(param_1 + -1)) && (uVar2 = 1, *(char *)(param_1 + -2) == '\r')) {
        uVar2 = 2;
      }
      *param_4 = uVar2;
      return 1;
    }
  }
  else if (2 < uVar1 - 0xb) {
    if (uVar1 == 0x85) {
      uVar2 = 1;
      if (param_5 != 0) {
        uVar2 = 2;
      }
      *param_4 = uVar2;
      return 1;
    }
    goto LAB_01b2332c;
  }
  *param_4 = 1;
  return 1;
}

