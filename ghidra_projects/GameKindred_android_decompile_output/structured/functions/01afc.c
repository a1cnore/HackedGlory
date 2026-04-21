// functions/01afc — 3 functions
#include "libGameKindred.h"




undefined4 FUN_01afc8ec(EVP_PKEY *param_1,PKCS8_PRIV_KEY_INFO *param_2)

{
  int iVar1;
  ASN1_OCTET_STRING *a;
  BIGNUM *a_00;
  EC_KEY *key;
  ASN1_INTEGER *ai;
  DSA *key_00;
  BIGNUM *pBVar2;
  undefined8 uVar3;
  uchar *puVar4;
  undefined4 uVar5;
  uchar local_70;
  uchar local_6f;
  uchar local_6e;
  uchar local_6d;
  uchar local_6c;
  uchar local_6b;
  uchar local_6a;
  uchar local_69;
  uchar local_68;
  uchar local_67;
  uchar local_66;
  uchar local_65;
  uchar local_64;
  uchar local_63;
  uchar local_62;
  uchar local_61;
  uchar local_60;
  uchar local_5f;
  uchar local_5e;
  uchar local_5d;
  uchar local_5c;
  uchar local_5b;
  uchar local_5a;
  uchar local_59;
  uchar local_58;
  uchar local_57;
  uchar local_56;
  uchar local_55;
  uchar local_54;
  uchar local_53;
  uchar local_52;
  uchar local_51;
  ASN1_OBJECT *local_50;
  X509_ALGOR *local_48;
  int local_3c;
  uchar *local_38;
  uchar *local_28;
  
  local_28 = (uchar *)0x0;
  local_38 = (uchar *)0x0;
  local_3c = 0;
  local_50 = (ASN1_OBJECT *)0x0;
  local_48 = (X509_ALGOR *)0x0;
  iVar1 = PKCS8_pkey_get0(&local_50,&local_28,&local_3c,&local_48,param_2);
  puVar4 = local_28;
  if (iVar1 == 0) {
    return 0;
  }
  local_38 = local_28;
  iVar1 = FUN_01afde24(param_1,local_48);
  if (iVar1 == 0) {
    return 0;
  }
  if (*puVar4 == '\x04') {
    a = d2i_ASN1_OCTET_STRING((ASN1_OCTET_STRING **)0x0,&local_38,(long)local_3c);
    if ((a == (ASN1_OCTET_STRING *)0x0) || (a->length != 0x20)) {
      uVar3 = 0x13f;
LAB_01afcc28:
      ERR_GOST_error(0x84,0x72,"gost_ameth.c",uVar3);
      return 0;
    }
    local_51 = *a->data;
    local_52 = a->data[1];
    local_53 = a->data[2];
    local_54 = a->data[3];
    local_55 = a->data[4];
    local_56 = a->data[5];
    local_57 = a->data[6];
    local_58 = a->data[7];
    local_59 = a->data[8];
    local_5a = a->data[9];
    local_5b = a->data[10];
    local_5c = a->data[0xb];
    local_5d = a->data[0xc];
    local_5e = a->data[0xd];
    local_5f = a->data[0xe];
    local_60 = a->data[0xf];
    local_61 = a->data[0x10];
    local_62 = a->data[0x11];
    local_63 = a->data[0x12];
    local_64 = a->data[0x13];
    local_65 = a->data[0x14];
    local_66 = a->data[0x15];
    local_67 = a->data[0x16];
    local_68 = a->data[0x17];
    puVar4 = a->data;
    local_69 = puVar4[0x18];
    local_6a = puVar4[0x19];
    local_6b = puVar4[0x1a];
    local_6c = puVar4[0x1b];
    local_6d = puVar4[0x1c];
    local_6e = puVar4[0x1d];
    local_6f = puVar4[0x1e];
    local_70 = puVar4[0x1f];
    ASN1_STRING_free(a);
    a_00 = (BIGNUM *)getbnfrombuf(&local_70,0x20);
    iVar1 = EVP_PKEY_base_id(param_1);
  }
  else {
    ai = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_38,(long)local_3c);
    if (ai == (ASN1_INTEGER *)0x0) {
      return 0;
    }
    a_00 = ASN1_INTEGER_to_BN(ai,(BIGNUM *)0x0);
    ASN1_INTEGER_free(ai);
    if (a_00 == (BIGNUM *)0x0) {
      uVar3 = 0x14e;
      goto LAB_01afcc28;
    }
    iVar1 = EVP_PKEY_base_id(param_1);
  }
  if (iVar1 == 0x32b) {
    key = EVP_PKEY_get0(param_1);
    if (key == (EC_KEY *)0x0) {
      key = EC_KEY_new();
      iVar1 = EVP_PKEY_base_id(param_1);
      EVP_PKEY_assign(param_1,iVar1,key);
    }
    iVar1 = EC_KEY_set_private_key(key,a_00);
    if (iVar1 == 0) {
      uVar5 = 0;
      goto LAB_01afcbf0;
    }
    iVar1 = EVP_PKEY_missing_parameters(param_1);
    if (iVar1 == 0) {
      gost2001_compute_public(key);
    }
  }
  else if (iVar1 == 0x32c) {
    key_00 = EVP_PKEY_get0(param_1);
    if (key_00 == (DSA *)0x0) {
      key_00 = DSA_new();
      iVar1 = EVP_PKEY_base_id(param_1);
      EVP_PKEY_assign(param_1,iVar1,key_00);
    }
    pBVar2 = BN_dup(a_00);
    key_00->priv_key = pBVar2;
    iVar1 = EVP_PKEY_missing_parameters(param_1);
    if (iVar1 == 0) {
      gost94_compute_public(key_00);
    }
  }
  uVar5 = 1;
LAB_01afcbf0:
  BN_free(a_00);
  return uVar5;
}




bool FUN_01afce64(EVP_PKEY *param_1)

{
  void *pvVar1;
  
  pvVar1 = EVP_PKEY_get0(param_1);
  if (pvVar1 != (void *)0x0) {
    return *(long *)((long)pvVar1 + 0x20) == 0;
  }
  return true;
}




bool FUN_01afcfbc(EVP_PKEY *param_1,EVP_PKEY *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = EVP_PKEY_get0(param_1);
  pvVar3 = EVP_PKEY_get0(param_2);
  iVar1 = BN_cmp(*(BIGNUM **)((long)pvVar2 + 0x20),*(BIGNUM **)((long)pvVar3 + 0x20));
  return iVar1 == 0;
}

