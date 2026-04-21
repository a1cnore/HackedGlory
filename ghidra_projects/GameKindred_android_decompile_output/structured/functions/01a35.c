// functions/01a35 — 1 functions
#include "libGameKindred.h"




undefined8 FUN_01a353f4(undefined8 *param_1,X509 *param_2)

{
  int iVar1;
  uint uVar2;
  EVP_PKEY *pkey;
  EVP_PKEY *pkey_00;
  undefined8 *puVar3;
  long *plVar4;
  
  pkey = X509_get_pubkey(param_2);
  if (pkey == (EVP_PKEY *)0x0) {
    ERR_put_error(0x14,0xbf,0x10c,"ssl_rsa.c",399);
    return 0;
  }
  iVar1 = ssl_cert_type(param_2,pkey);
  if (iVar1 < 0) {
    ERR_put_error(0x14,0xbf,0xf7,"ssl_rsa.c",0x195);
    EVP_PKEY_free(pkey);
    return 0;
  }
  plVar4 = param_1 + (long)iVar1 * 7 + 0xf;
  puVar3 = param_1 + (long)iVar1 * 7 + 0xe;
  if ((EVP_PKEY *)*plVar4 != (EVP_PKEY *)0x0) {
    EVP_PKEY_copy_parameters(pkey,(EVP_PKEY *)*plVar4);
    ERR_clear_error();
    pkey_00 = (EVP_PKEY *)*plVar4;
    if (pkey_00->type == 6) {
      uVar2 = RSA_flags((pkey_00->pkey).rsa);
      if ((uVar2 & 1) != 0) goto LAB_01a3548c;
      pkey_00 = (EVP_PKEY *)*plVar4;
    }
    iVar1 = X509_check_private_key(param_2,pkey_00);
    if (iVar1 == 0) {
      EVP_PKEY_free((EVP_PKEY *)*plVar4);
      *plVar4 = 0;
      ERR_clear_error();
    }
  }
LAB_01a3548c:
  EVP_PKEY_free(pkey);
  if ((X509 *)*puVar3 != (X509 *)0x0) {
    X509_free((X509 *)*puVar3);
  }
  CRYPTO_add_lock(&param_2->references,1,3,"ssl_rsa.c",0x1bd);
  *puVar3 = param_2;
  *param_1 = puVar3;
  *(undefined4 *)(param_1 + 1) = 0;
  return 1;
}

