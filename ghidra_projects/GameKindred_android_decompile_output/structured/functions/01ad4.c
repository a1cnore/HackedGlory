// functions/01ad4 — 1 functions
#include "libGameKindred.h"




int FUN_01ad441c(long param_1,EVP_PKEY *param_2)

{
  int iVar1;
  EC_KEY *key;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if ((*(long *)(param_1 + 0x10) == 0) && (*plVar2 == 0)) {
    ERR_put_error(0x10,199,0x8b,"ec_pmeth.c",0x1dc);
  }
  else {
    key = EC_KEY_new();
    if (key != (EC_KEY *)0x0) {
      EVP_PKEY_assign(param_2,0x198,key);
      if (*(EVP_PKEY **)(param_1 + 0x10) == (EVP_PKEY *)0x0) {
        iVar1 = EC_KEY_set_group(key,(EC_GROUP *)*plVar2);
      }
      else {
        iVar1 = EVP_PKEY_copy_parameters(param_2,*(EVP_PKEY **)(param_1 + 0x10));
      }
      if (iVar1 != 0) {
        iVar1 = EC_KEY_generate_key((EC_KEY *)(param_2->pkey).rsa);
        return iVar1;
      }
    }
  }
  return 0;
}

