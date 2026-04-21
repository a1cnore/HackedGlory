// functions/008fb — 1 functions
#include "libGameKindred.h"




void FUN_008fbf6c(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
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
    FUN_008fed80(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x78;
  FUN_008fcdb8(lVar4 + -0x78,param_2);
  FUN_008fcdb8(lVar4 + -0x60,param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0x48,param_2 + 0x30);
  FUN_008fcdb8(lVar4 + -0x30,param_2 + 0x48);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x70);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(lVar4 + -0x10) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(lVar4 + -0x18) = uVar5;
  return;
}

