// functions/01ad8 — 1 functions
#include "libGameKindred.h"




BN_BLINDING * FUN_01ad8138(RSA *param_1,undefined4 *param_2,BN_CTX *param_3)

{
  bool bVar1;
  int iVar2;
  CRYPTO_THREADID *b;
  int line;
  BN_BLINDING *pBVar3;
  CRYPTO_THREADID CStack_50;
  
  CRYPTO_lock(5,9,"rsa_eay.c",0x106);
  pBVar3 = param_1->blinding;
  if (pBVar3 == (BN_BLINDING *)0x0) {
    CRYPTO_lock(6,9,"rsa_eay.c",0x109);
    CRYPTO_lock(9,9,"rsa_eay.c",0x10a);
    pBVar3 = param_1->blinding;
    if (pBVar3 != (BN_BLINDING *)0x0) {
LAB_01ad81d4:
      bVar1 = true;
      goto LAB_01ad81d8;
    }
    pBVar3 = RSA_setup_blinding(param_1,param_3);
    param_1->blinding = pBVar3;
    if (pBVar3 != (BN_BLINDING *)0x0) goto LAB_01ad81d4;
  }
  else {
    bVar1 = false;
LAB_01ad81d8:
    CRYPTO_THREADID_current(&CStack_50);
    b = BN_BLINDING_thread_id(pBVar3);
    iVar2 = CRYPTO_THREADID_cmp(&CStack_50,b);
    if (iVar2 == 0) {
      *param_2 = 1;
    }
    else {
      *param_2 = 0;
      pBVar3 = param_1->mt_blinding;
      if (pBVar3 == (BN_BLINDING *)0x0) {
        if (!bVar1) {
          CRYPTO_lock(6,9,"rsa_eay.c",0x126);
          CRYPTO_lock(9,9,"rsa_eay.c",0x127);
          pBVar3 = param_1->mt_blinding;
          if (pBVar3 != (BN_BLINDING *)0x0) goto LAB_01ad8284;
        }
        pBVar3 = RSA_setup_blinding(param_1,param_3);
        param_1->mt_blinding = pBVar3;
        goto LAB_01ad8284;
      }
    }
    if (!bVar1) {
      iVar2 = 6;
      line = 0x135;
      goto LAB_01ad8298;
    }
  }
LAB_01ad8284:
  iVar2 = 10;
  line = 0x133;
LAB_01ad8298:
  CRYPTO_lock(iVar2,9,"rsa_eay.c",line);
  return pBVar3;
}

