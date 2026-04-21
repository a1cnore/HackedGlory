// functions/01a28 — 1 functions
#include "libGameKindred.h"




uint FUN_01a28d18(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = (uint)param_1[7] - (uint)param_2[7];
  uVar8 = ((uint)param_1[6] - (uint)param_2[6]) + ((int)uVar6 >> 8);
  uVar1 = ((uint)param_1[5] - (uint)param_2[5]) + ((int)uVar8 >> 8);
  if ((uVar6 >> 7 & 1) == 0) {
    uVar2 = ((uint)param_1[4] - (uint)param_2[4]) + ((int)uVar1 >> 8);
    uVar3 = ((uint)param_1[3] - (uint)param_2[3]) + ((int)uVar2 >> 8);
    uVar4 = ((uint)param_1[2] - (uint)param_2[2]) + ((int)uVar3 >> 8);
    uVar5 = ((uint)param_1[1] - (uint)param_2[1]) + ((int)uVar4 >> 8);
    uVar7 = ((uint)*param_1 - (uint)*param_2) + ((int)uVar5 >> 8);
    uVar8 = uVar7 | uVar5 | uVar4 | uVar3 | uVar2 | uVar1 | uVar8;
  }
  else {
    uVar2 = ((uint)param_1[4] - (uint)param_2[4]) + ((int)uVar1 >> 8);
    uVar3 = ((uint)param_1[3] - (uint)param_2[3]) + ((int)uVar2 >> 8);
    uVar4 = ((uint)param_1[2] - (uint)param_2[2]) + ((int)uVar3 >> 8);
    uVar5 = ((uint)param_1[1] - (uint)param_2[1]) + ((int)uVar4 >> 8);
    uVar7 = ((uint)*param_1 - (uint)*param_2) + ((int)uVar5 >> 8);
    uVar8 = ~(uVar8 & uVar1 & uVar2 & uVar3 & uVar4 & uVar5 & uVar7);
  }
  uVar6 = uVar6 & 0xff;
  if ((uVar8 & 0xff) != 0) {
    uVar6 = 0x80;
  }
  return uVar6 | uVar7 & 0xffffff00;
}

