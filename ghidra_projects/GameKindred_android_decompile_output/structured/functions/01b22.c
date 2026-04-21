// functions/01b22 — 1 functions
#include "libGameKindred.h"




int FUN_01b22f54(int param_1,byte *param_2,int param_3,long param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar3 = (int)param_2;
  if (-1 < param_3) {
    pbVar4 = (byte *)(*(long *)(param_4 + 0xa0) +
                     (long)*(int *)(*(long *)(param_4 + 0x18) + (long)param_1 * 4));
    if (param_5 != 0) {
      if (0 < param_3) {
        param_3 = param_3 + 1;
        do {
          if (*(byte **)(param_4 + 0xa8) <= param_2) {
            return -2;
          }
          if (*(char *)(*(long *)(param_4 + 0x50) + (ulong)*pbVar4) !=
              *(char *)(*(long *)(param_4 + 0x50) + (ulong)*param_2)) {
            return -1;
          }
          param_3 = param_3 + -1;
          pbVar4 = pbVar4 + 1;
          param_2 = param_2 + 1;
        } while (1 < param_3);
      }
LAB_01b22ff0:
      return (int)param_2 - iVar3;
    }
    do {
      if (param_3 < 1) goto LAB_01b22ff0;
      if (*(byte **)(param_4 + 0xa8) <= param_2) {
        return -2;
      }
      bVar1 = *pbVar4;
      bVar2 = *param_2;
      pbVar4 = pbVar4 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (bVar1 == bVar2);
  }
  return -1;
}

