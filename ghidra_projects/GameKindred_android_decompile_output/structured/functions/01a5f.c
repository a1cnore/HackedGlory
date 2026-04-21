// functions/01a5f — 2 functions
#include "libGameKindred.h"




undefined8 FUN_01a5f108(BN_MONT_CTX *param_1)

{
  BN_MONT_CTX_free(param_1);
  return 1;
}




undefined8 FUN_01a5f908(long param_1,long param_2,uint param_3)

{
  BIGNUM *pBVar1;
  BIGNUM *pBVar2;
  void *pvVar3;
  
  if (param_3 == 0xffffffff) {
    param_3 = (uint)(*(long *)(param_2 + 0x40) != 0);
    pBVar1 = *(BIGNUM **)(param_2 + 8);
  }
  else {
    pBVar1 = *(BIGNUM **)(param_2 + 8);
  }
  if (pBVar1 == (BIGNUM *)0x0) {
    pBVar1 = (BIGNUM *)0x0;
    pBVar2 = *(BIGNUM **)(param_1 + 8);
  }
  else {
    pBVar1 = BN_dup(pBVar1);
    if (pBVar1 == (BIGNUM *)0x0) {
      return 0;
    }
    pBVar2 = *(BIGNUM **)(param_1 + 8);
  }
  if (pBVar2 != (BIGNUM *)0x0) {
    BN_free(pBVar2);
  }
  *(BIGNUM **)(param_1 + 8) = pBVar1;
  if (*(BIGNUM **)(param_2 + 0x10) == (BIGNUM *)0x0) {
    pBVar1 = (BIGNUM *)0x0;
    pBVar2 = *(BIGNUM **)(param_1 + 0x10);
  }
  else {
    pBVar1 = BN_dup(*(BIGNUM **)(param_2 + 0x10));
    if (pBVar1 == (BIGNUM *)0x0) {
      return 0;
    }
    pBVar2 = *(BIGNUM **)(param_1 + 0x10);
  }
  if (pBVar2 != (BIGNUM *)0x0) {
    BN_free(pBVar2);
  }
  *(BIGNUM **)(param_1 + 0x10) = pBVar1;
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  else {
    if (*(BIGNUM **)(param_2 + 0x40) == (BIGNUM *)0x0) {
      pBVar1 = (BIGNUM *)0x0;
      pBVar2 = *(BIGNUM **)(param_1 + 0x40);
    }
    else {
      pBVar1 = BN_dup(*(BIGNUM **)(param_2 + 0x40));
      if (pBVar1 == (BIGNUM *)0x0) {
        return 0;
      }
      pBVar2 = *(BIGNUM **)(param_1 + 0x40);
    }
    if (pBVar2 != (BIGNUM *)0x0) {
      BN_free(pBVar2);
    }
    *(BIGNUM **)(param_1 + 0x40) = pBVar1;
    if (*(BIGNUM **)(param_2 + 0x48) == (BIGNUM *)0x0) {
      pBVar1 = (BIGNUM *)0x0;
      pBVar2 = *(BIGNUM **)(param_1 + 0x48);
    }
    else {
      pBVar1 = BN_dup(*(BIGNUM **)(param_2 + 0x48));
      if (pBVar1 == (BIGNUM *)0x0) {
        return 0;
      }
      pBVar2 = *(BIGNUM **)(param_1 + 0x48);
    }
    if (pBVar2 != (BIGNUM *)0x0) {
      BN_free(pBVar2);
    }
    *(BIGNUM **)(param_1 + 0x48) = pBVar1;
    if (*(void **)(param_1 + 0x50) != (void *)0x0) {
      CRYPTO_free(*(void **)(param_1 + 0x50));
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(void **)(param_2 + 0x50) != (void *)0x0) {
      pvVar3 = BUF_memdup(*(void **)(param_2 + 0x50),(long)*(int *)(param_2 + 0x58));
      *(void **)(param_1 + 0x50) = pvVar3;
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    }
  }
  return 1;
}

