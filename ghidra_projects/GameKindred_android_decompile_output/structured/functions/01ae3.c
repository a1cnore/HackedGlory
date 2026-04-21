// functions/01ae3 — 2 functions
#include "libGameKindred.h"




undefined8 FUN_01ae3e14(long param_1,const_DES_cblock *param_2)

{
  DES_set_key_unchecked(param_2,*(DES_key_schedule **)(param_1 + 0x78));
  *(const_DES_cblock *)(*(long *)(param_1 + 0x78) + 0x80) = param_2[1];
  *(const_DES_cblock *)(*(long *)(param_1 + 0x78) + 0x88) = param_2[2];
  return 1;
}




undefined8 FUN_01ae3e60(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  uchar *puVar3;
  DES_key_schedule *pDVar4;
  uchar *output;
  ulong uVar5;
  
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar5 = uVar1 & 0xc000000000000000;
    lVar2 = uVar5 + 0x4000000000000000;
    puVar3 = param_3 + lVar2;
    output = param_2;
    do {
      pDVar4 = *(DES_key_schedule **)(param_1 + 0x78);
      DES_xcbc_encrypt(param_3,output,0x4000000000000000,pDVar4,(DES_cblock *)(param_1 + 0x28),
                       (const_DES_cblock *)(pDVar4 + 1),(const_DES_cblock *)(pDVar4[1].ks + 1),
                       *(int *)(param_1 + 0x10));
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      output = output + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_2 = param_2 + lVar2;
    param_4 = uVar1 - uVar5;
    param_3 = puVar3;
  }
  if (param_4 != 0) {
    pDVar4 = *(DES_key_schedule **)(param_1 + 0x78);
    DES_xcbc_encrypt(param_3,param_2,param_4,pDVar4,(DES_cblock *)(param_1 + 0x28),
                     (const_DES_cblock *)(pDVar4 + 1),(const_DES_cblock *)(pDVar4[1].ks + 1),
                     *(int *)(param_1 + 0x10));
  }
  return 1;
}

