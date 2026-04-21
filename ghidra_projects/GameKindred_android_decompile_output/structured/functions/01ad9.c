// functions/01ad9 — 4 functions
#include "libGameKindred.h"




undefined4 FUN_01ad9648(EVP_PKEY *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  undefined4 uVar2;
  RSA *key;
  int local_24;
  uchar *puStack_18;
  
  iVar1 = X509_PUBKEY_get0_param
                    ((ASN1_OBJECT **)0x0,&puStack_18,&local_24,(X509_ALGOR **)0x0,param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    key = d2i_RSAPublicKey((RSA **)0x0,&puStack_18,(long)local_24);
    if (key == (RSA *)0x0) {
      ERR_put_error(4,0x8b,4,"rsa_ameth.c",99);
      return 0;
    }
    EVP_PKEY_assign(param_1,6,key);
    uVar2 = 1;
  }
  return uVar2;
}




undefined8 FUN_01ad96e0(X509_PUBKEY *param_1,long param_2)

{
  int iVar1;
  ASN1_OBJECT *aobj;
  uchar *local_28;
  
  local_28 = (uchar *)0x0;
  iVar1 = i2d_RSAPublicKey(*(RSA **)(param_2 + 0x20),&local_28);
  if (0 < iVar1) {
    aobj = OBJ_nid2obj(6);
    iVar1 = X509_PUBKEY_set0_param(param_1,aobj,5,(void *)0x0,local_28,iVar1);
    if (iVar1 != 0) {
      return 1;
    }
    CRYPTO_free(local_28);
  }
  return 0;
}




bool FUN_01ad976c(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = BN_cmp(*(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x20),
                 *(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x20));
  if (iVar1 != 0) {
    return false;
  }
  iVar1 = BN_cmp(*(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x28),
                 *(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x28));
  return iVar1 == 0;
}




undefined8 FUN_01ad9874(PKCS8_PRIV_KEY_INFO *param_1,long param_2)

{
  int iVar1;
  ASN1_OBJECT *aobj;
  uchar *local_28;
  
  local_28 = (uchar *)0x0;
  iVar1 = i2d_RSAPrivateKey(*(RSA **)(param_2 + 0x20),&local_28);
  if (iVar1 < 1) {
    iVar1 = 0x8a;
  }
  else {
    aobj = OBJ_nid2obj(6);
    iVar1 = PKCS8_pkey_set0(param_1,aobj,0,5,(void *)0x0,local_28,iVar1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = 0x90;
  }
  ERR_put_error(4,0x8a,0x41,"rsa_ameth.c",iVar1);
  return 0;
}

