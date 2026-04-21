// functions/01a25 — 1 functions
#include "libGameKindred.h"




undefined4
FUN_01a259ec(undefined8 *param_1,uint param_2,long param_3,long param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  ushort *addr;
  void *pvVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ushort *puVar6;
  
  if ((param_3 != 0) || (uVar2 = 0, param_4 == 0)) {
    if (((param_2 < 0x24) && ((1L << ((ulong)param_2 & 0x3f) & 0x80021fc21U) != 0)) ||
       (param_2 == 0x3374)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      if ((param_2 != 0xff01) && (uVar2 = 0, param_2 >> 0x10 == 0)) {
        uVar5 = param_1[1];
        if (uVar5 == 0) {
          addr = (ushort *)*param_1;
        }
        else {
          addr = (ushort *)*param_1;
          uVar3 = 0;
          puVar6 = addr;
          do {
            if (*puVar6 == param_2) {
              if (puVar6 != (ushort *)0x0) {
                return 0;
              }
              break;
            }
            uVar3 = uVar3 + 1;
            puVar6 = puVar6 + 0x18;
          } while (uVar3 < uVar5);
        }
        pvVar1 = CRYPTO_realloc(addr,(int)((uVar5 << 0x20) + 0x100000000 >> 0x20) * 0x30,"t1_ext.c",
                                0xe4);
        *param_1 = pvVar1;
        if (pvVar1 == (void *)0x0) {
          uVar2 = 0;
          param_1[1] = 0;
        }
        else {
          puVar4 = (undefined8 *)((long)pvVar1 + param_1[1] * 0x30);
          *puVar4 = 0;
          puVar4[1] = param_3;
          *(short *)puVar4 = (short)param_2;
          puVar4[2] = param_4;
          puVar4[3] = param_5;
          puVar4[4] = param_6;
          puVar4[5] = param_7;
          param_1[1] = param_1[1] + 1;
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}

