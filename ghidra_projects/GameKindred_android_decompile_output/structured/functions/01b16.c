// functions/01b16 — 1 functions
#include "libGameKindred.h"




byte * FUN_01b16c68(byte *param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
LAB_01b16d38:
  bVar2 = *param_1;
  uVar5 = (uint)bVar2;
  uVar6 = (uint)bVar2;
  pbVar4 = param_1;
  if (uVar5 < 0x61) {
    if (uVar5 == 0x5a || bVar2 < 0x5a) {
      if (uVar6 - 0x55 < 6) {
LAB_01b16cc4:
        bVar1 = param_1[1];
LAB_01b16d20:
        pbVar4 = param_1 + 2;
        if (1 < bVar1 - 0xf) {
          pbVar4 = param_1;
        }
      }
      else if (uVar6 == 0) {
        return (byte *)0x0;
      }
    }
    else {
      if (uVar5 - 0x5b < 3) {
LAB_01b16d1c:
        bVar1 = param_1[3];
        goto LAB_01b16d20;
      }
      if (uVar6 - 0x5e < 3) goto LAB_01b16cc4;
    }
  }
  else {
    uVar5 = bVar2 - 0x7c;
    if (0x1f < uVar5) {
LAB_01b16cf8:
      if (bVar2 == 0x61) goto LAB_01b16d1c;
      if (uVar6 != 0x70) goto LAB_01b16d30;
      param_1 = param_1 + CONCAT11(param_1[1],param_1[2]);
      goto LAB_01b16d38;
    }
    uVar3 = 1 << (ulong)(uVar5 & 0x1f);
    if ((uVar3 & 0xc600) == 0) {
      if ((uVar3 & 0xaa000000) != 0) {
        pbVar4 = param_1 + param_1[1];
        goto LAB_01b16d30;
      }
      if (uVar5 != 0) goto LAB_01b16cf8;
      if ((int)param_3 < 0) {
        return param_1;
      }
      param_1 = param_1 + 3;
      goto LAB_01b16d38;
    }
    if (CONCAT11(param_1[3],param_1[4]) == param_3) {
      return param_1;
    }
  }
LAB_01b16d30:
  param_1 = pbVar4 + (byte)(&DAT_01e65378)[bVar2];
  goto LAB_01b16d38;
}

