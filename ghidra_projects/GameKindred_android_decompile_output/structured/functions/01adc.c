// functions/01adc — 3 functions
#include "libGameKindred.h"




undefined8 FUN_01adc464(X509_PUBKEY *param_1,long param_2)

{
  int iVar1;
  int penclen;
  ASN1_STRING *a;
  ASN1_OBJECT *aobj;
  DSA *a_00;
  uchar *local_38;
  
  local_38 = (uchar *)0x0;
  a_00 = *(DSA **)(param_2 + 0x20);
  if ((((*(int *)(param_2 + 0x28) == 0) || (a_00->p == (BIGNUM *)0x0)) || (a_00->q == (BIGNUM *)0x0)
      ) || (a_00->g == (BIGNUM *)0x0)) {
    a = (ASN1_STRING *)0x0;
    iVar1 = -1;
LAB_01adc4d8:
    a_00->write_params = 0;
    penclen = i2d_DSAPublicKey(a_00,&local_38);
    if (0 < penclen) {
      aobj = OBJ_nid2obj(0x74);
      iVar1 = X509_PUBKEY_set0_param(param_1,aobj,iVar1,a,local_38,penclen);
      if (iVar1 != 0) {
        return 1;
      }
      goto LAB_01adc540;
    }
    iVar1 = 0x9e;
  }
  else {
    a = ASN1_STRING_new();
    if (a == (ASN1_STRING *)0x0) {
      iVar1 = 0x8d;
    }
    else {
      iVar1 = i2d_DSAparams(a_00,&a->data);
      a->length = iVar1;
      if (0 < iVar1) {
        iVar1 = 0x10;
        goto LAB_01adc4d8;
      }
      iVar1 = 0x92;
    }
  }
  ERR_put_error(10,0x76,0x41,"dsa_ameth.c",iVar1);
LAB_01adc540:
  if (local_38 != (uchar *)0x0) {
    CRYPTO_free(local_38);
  }
  if (a != (ASN1_STRING *)0x0) {
    ASN1_STRING_free(a);
  }
  return 0;
}




bool FUN_01adc5a8(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = BN_cmp(*(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x30),
                 *(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x30));
  return iVar1 == 0;
}




bool FUN_01adcbac(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = BN_cmp(*(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x18),
                 *(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x18));
  if ((iVar1 == 0) &&
     (iVar1 = BN_cmp(*(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x20),
                     *(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x20)), iVar1 == 0)) {
    iVar1 = BN_cmp(*(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x28),
                   *(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x28));
    return iVar1 == 0;
  }
  return false;
}

