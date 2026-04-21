// functions/01b0d — 3 functions
#include "libGameKindred.h"




undefined8 FUN_01b0d388(undefined8 param_1,long *param_2,int *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  uchar *local_28;
  
  if (param_4 != (undefined8 *)0x0) {
    param_4 = (undefined8 *)*param_4;
    local_40 = param_4[2];
    local_48 = param_4[3];
    local_38 = param_4[4];
    iVar1 = (**(code **)(*(long *)(param_4[1] + 0x20) + 0x18))(0xb,param_4,param_4[1],&local_48);
    if (0 < iVar1) {
      iVar1 = ASN1_item_ndef_i2d((ASN1_VALUE *)*param_4,(uchar **)0x0,(ASN1_ITEM *)param_4[1]);
      local_28 = CRYPTO_malloc(iVar1,"bio_ndef.c",0xea);
      if (local_28 == (uchar *)0x0) {
        return 0;
      }
      param_4[5] = local_28;
      *param_2 = (long)local_28;
      iVar1 = ASN1_item_ndef_i2d((ASN1_VALUE *)*param_4,&local_28,(ASN1_ITEM *)param_4[1]);
      if (*(long *)param_4[4] != 0) {
        *param_2 = *(long *)param_4[4];
        *param_3 = iVar1 + (*(int *)(param_4 + 5) - *(int *)param_4[4]);
        return 1;
      }
    }
  }
  return 0;
}




undefined8 FUN_01b0d464(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,long *param_4)

{
  void *ptr;
  long lVar1;
  
  if (param_4 != (long *)0x0) {
    lVar1 = *param_4;
    ptr = *(void **)(lVar1 + 0x28);
    if (ptr != (void *)0x0) {
      CRYPTO_free(ptr);
    }
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *param_2 = 0;
    *param_3 = 0;
    CRYPTO_free((void *)*param_4);
    *param_4 = 0;
    return 1;
  }
  return 0;
}




int FUN_01b0d7b4(BIO *param_1,ASN1_VALUE *param_2,BIO *param_3,int param_4,ASN1_ITEM *param_5)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *b;
  BIO *out;
  
  type = BIO_f_base64();
  b = BIO_new(type);
  if (b == (BIO *)0x0) {
    ERR_put_error(0xd,0xd2,0x41,"asn_mime.c",0x9b);
    iVar1 = 0;
  }
  else {
    out = BIO_push(b,param_1);
    iVar1 = i2d_ASN1_bio_stream(out,param_2,param_3,param_4,param_5);
    BIO_ctrl(out,0xb,0,(void *)0x0);
    BIO_pop(out);
    BIO_free(b);
  }
  return iVar1;
}

