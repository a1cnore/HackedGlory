// functions/01b15 — 3 functions
#include "libGameKindred.h"




void FUN_01b15a40(uint param_1)

{
  long lVar1;
  uint uVar2;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = param_1 & 0x700000;
  if ((param_1 & 0x700000) != 0) goto LAB_01b15a64;
  pcre_config(1,&local_2c);
  if (local_2c < 10) {
    if (local_2c == -2) {
      uVar2 = 0x500000;
      goto LAB_01b15a64;
    }
    if (local_2c == -1) {
      uVar2 = 0x400000;
      goto LAB_01b15a64;
    }
  }
  else {
    if (local_2c == 10) {
      uVar2 = 0x200000;
      goto LAB_01b15a64;
    }
    if (local_2c == 0xd0a) {
      uVar2 = 0x300000;
      goto LAB_01b15a64;
    }
    if (local_2c == 0xd) {
      uVar2 = 0x100000;
      goto LAB_01b15a64;
    }
  }
  uVar2 = 0;
LAB_01b15a64:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_01b15af8(undefined8 param_1,byte *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte *pbVar4;
  
  bVar3 = *param_2;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (param_3 <= uVar1) {
    pbVar4 = *(byte **)(param_2 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar4 = param_2 + 1;
    }
    uVar2 = uVar1 - param_3;
    if (param_4 <= uVar1 - param_3) {
      uVar2 = param_4;
    }
    FUN_0090de84(param_1,pbVar4 + param_3,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}




byte * FUN_01b15f98(byte *param_1,byte *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((param_3 < 1) || (iVar2 = isspace((uint)*param_2), iVar2 == 0)) {
    if (9 < param_2[param_3] - 0x30) {
      uVar1 = param_2[param_3] - 0x41;
      if (0x25 < uVar1) {
        return param_2;
      }
      if ((1L << ((ulong)uVar1 & 0x3f) & 0x3f0000003fU) == 0) {
        return param_2;
      }
    }
    if (param_3 < 0x21) {
      memcpy(param_1,param_2,(long)param_3);
      param_1[param_3] = 0;
      return param_1;
    }
  }
  return &DAT_01e277f2;
}

