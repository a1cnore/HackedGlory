// functions/01af5 — 3 functions
#include "libGameKindred.h"




undefined8 FUN_01af5d84(EVP_PKEY *param_1)

{
  EVP_PKEY_free(param_1);
  return 1;
}




undefined8 FUN_01af5d9c(int param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (param_1 != 3) {
    if (param_1 == 1) {
      EVP_CIPHER_CTX_init((EVP_CIPHER_CTX *)(lVar1 + 0x30));
      EVP_CIPHER_CTX_set_flags((EVP_CIPHER_CTX *)(lVar1 + 0x30),1);
      *(undefined8 *)(lVar1 + 0x28) = 0;
    }
    return 1;
  }
  if (*(EVP_PKEY_CTX **)(lVar1 + 0x28) != (EVP_PKEY_CTX *)0x0) {
    EVP_PKEY_CTX_free(*(EVP_PKEY_CTX **)(lVar1 + 0x28));
  }
  EVP_CIPHER_CTX_cleanup((EVP_CIPHER_CTX *)(lVar1 + 0x30));
  return 1;
}




undefined8 FUN_01af5ea0(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  BIO *pBVar2;
  CMS_ContentInfo *cms;
  
  if ((param_2 != (undefined8 *)0x0) && (param_1 - 10U < 4)) {
    cms = (CMS_ContentInfo *)*param_2;
    switch(param_1) {
    case 10:
      iVar1 = CMS_stream((uchar ***)(param_4 + 2),cms);
      if (iVar1 < 1) {
        return 0;
      }
    case 0xc:
      pBVar2 = CMS_dataInit(cms,(BIO *)*param_4);
      param_4[1] = pBVar2;
      if (pBVar2 == (BIO *)0x0) {
        return 0;
      }
      break;
    default:
      iVar1 = CMS_dataFinal(cms,(BIO *)param_4[1]);
      if (iVar1 < 1) {
        return 0;
      }
    }
  }
  return 1;
}

