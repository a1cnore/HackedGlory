// functions/01afe — 5 functions
#include "libGameKindred.h"




undefined4 FUN_01afe124(BIO *param_1,EVP_PKEY *param_2,int param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  EC_KEY *key;
  BIGNUM *pBVar3;
  char *pcVar4;
  int *piVar5;
  BIGNUM *local_38;
  
  if (param_4 == 2) {
    iVar1 = BIO_indent(param_1,param_3,0x80);
    if (iVar1 == 0) {
      return 0;
    }
    BIO_printf(param_1,"Private key: ");
    iVar1 = EVP_PKEY_base_id(param_2);
    if (iVar1 == 0x32b) {
      key = EVP_PKEY_get0(param_2);
      if ((key == (EC_KEY *)0x0) || (pBVar3 = EC_KEY_get0_private_key(key), pBVar3 == (BIGNUM *)0x0)
         ) goto LAB_01afe1d0;
LAB_01afe1c4:
      BN_print(param_1,pBVar3);
    }
    else {
      if ((iVar1 == 0x32c) &&
         ((pvVar2 = EVP_PKEY_get0(param_2), pvVar2 != (void *)0x0 &&
          (pBVar3 = *(BIGNUM **)((long)pvVar2 + 0x38), pBVar3 != (BIGNUM *)0x0))))
      goto LAB_01afe1c4;
LAB_01afe1d0:
      BIO_printf(param_1,"<undefined>");
    }
    BIO_printf(param_1,"\n");
  }
  else if (param_4 < 1) goto LAB_01afe238;
  pvVar2 = EVP_PKEY_get0(param_2);
  pBVar3 = *(BIGNUM **)((long)pvVar2 + 0x30);
  BIO_indent(param_1,param_3,0x80);
  BIO_printf(param_1,"Public key: ");
  BN_print(param_1,pBVar3);
  BIO_printf(param_1,"\n");
LAB_01afe238:
  pvVar2 = EVP_PKEY_get0(param_2);
  local_38 = BN_new();
  if (PTR_s_68363196144955700784444165611827_02c08aa8 != (undefined *)0x0) {
    piVar5 = &R3410_paramset;
    pcVar4 = PTR_s_68363196144955700784444165611827_02c08aa8;
    do {
      BN_dec2bn(&local_38,pcVar4);
      iVar1 = BN_cmp(local_38,*(BIGNUM **)((long)pvVar2 + 0x20));
      if (iVar1 == 0) {
        BN_free(local_38);
        iVar1 = *piVar5;
        goto LAB_01afe2a4;
      }
      pcVar4 = *(char **)(piVar5 + 0xe);
      piVar5 = piVar5 + 8;
    } while (pcVar4 != (char *)0x0);
  }
  BN_free(local_38);
  iVar1 = 0;
LAB_01afe2a4:
  BIO_indent(param_1,param_3,0x80);
  pcVar4 = OBJ_nid2ln(iVar1);
  BIO_printf(param_1,"Parameter set: %s\n",pcVar4);
  return 1;
}




undefined4 FUN_01afe2e8(BIO *param_1,EVP_PKEY *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  BIGNUM *y;
  EC_KEY *pEVar5;
  EC_POINT *p;
  EC_GROUP *pEVar6;
  char *pcVar7;
  BN_CTX *ctx;
  BIGNUM *pBVar8;
  
  if (param_4 == 2) {
    iVar1 = BIO_indent(param_1,param_3,0x80);
    if (iVar1 == 0) {
      return 0;
    }
    BIO_printf(param_1,"Private key: ");
    iVar1 = EVP_PKEY_base_id(param_2);
    if (iVar1 == 0x32b) {
      pEVar5 = EVP_PKEY_get0(param_2);
      if ((pEVar5 != (EC_KEY *)0x0) &&
         (pBVar8 = EC_KEY_get0_private_key(pEVar5), pBVar8 != (BIGNUM *)0x0)) goto LAB_01afe508;
LAB_01afe514:
      BIO_printf(param_1,"<undefined)");
    }
    else {
      if ((iVar1 != 0x32c) ||
         ((pvVar4 = EVP_PKEY_get0(param_2), pvVar4 == (void *)0x0 ||
          (pBVar8 = *(BIGNUM **)((long)pvVar4 + 0x38), pBVar8 == (BIGNUM *)0x0))))
      goto LAB_01afe514;
LAB_01afe508:
      BN_print(param_1,pBVar8);
    }
    BIO_printf(param_1,"\n");
    ctx = BN_CTX_new();
joined_r0x01afe374:
    if (ctx == (BN_CTX *)0x0) {
      ERR_GOST_error(0x83,0x41,"gost_ameth.c",0x1b8);
    }
    else {
      BN_CTX_start(ctx);
      pBVar8 = BN_CTX_get(ctx);
      y = BN_CTX_get(ctx);
      pEVar5 = EVP_PKEY_get0(param_2);
      p = EC_KEY_get0_public_key(pEVar5);
      pEVar5 = EVP_PKEY_get0(param_2);
      pEVar6 = EC_KEY_get0_group(pEVar5);
      iVar1 = EC_POINT_get_affine_coordinates_GFp(pEVar6,p,pBVar8,y,ctx);
      if (iVar1 != 0) {
        iVar1 = BIO_indent(param_1,param_3,0x80);
        if (iVar1 == 0) {
          return 0;
        }
        BIO_printf(param_1,"Public key:\n");
        iVar1 = BIO_indent(param_1,param_3 + 3,0x80);
        if (iVar1 == 0) {
          return 0;
        }
        BIO_printf(param_1,"X:");
        BN_print(param_1,pBVar8);
        BIO_printf(param_1,"\n");
        BIO_indent(param_1,param_3 + 3,0x80);
        BIO_printf(param_1,"Y:");
        BN_print(param_1,y);
        BIO_printf(param_1,"\n");
        BN_CTX_end(ctx);
        BN_CTX_free(ctx);
        goto LAB_01afe480;
      }
      ERR_GOST_error(0x83,0x10,"gost_ameth.c",0x1c2);
      BN_CTX_free(ctx);
    }
    uVar3 = 0;
  }
  else {
    if (0 < param_4) {
      ctx = BN_CTX_new();
      goto joined_r0x01afe374;
    }
LAB_01afe480:
    pEVar5 = EVP_PKEY_get0(param_2);
    pEVar6 = EC_KEY_get0_group(pEVar5);
    iVar1 = EC_GROUP_get_curve_name(pEVar6);
    iVar2 = BIO_indent(param_1,param_3,0x80);
    uVar3 = 0;
    if (iVar2 != 0) {
      pcVar7 = OBJ_nid2ln(iVar1);
      BIO_printf(param_1,"Parameter set: %s\n",pcVar7);
      uVar3 = 1;
    }
  }
  return uVar3;
}




undefined8 FUN_01afeb98(long *param_1,ASN1_TYPE *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ASN1_OBJECT *pAVar3;
  void *data;
  ASN1_OCTET_STRING *str;
  undefined8 uVar4;
  int *piVar5;
  void *local_38;
  
  local_38 = (void *)0x0;
  piVar5 = (int *)param_1[0xf];
  puVar2 = (undefined8 *)GOST_CIPHER_PARAMS_new();
  if (puVar2 == (undefined8 *)0x0) {
    uVar4 = 0x1b4;
  }
  else {
    iVar1 = ASN1_OCTET_STRING_set((ASN1_STRING *)*puVar2,param_1 + 5,*(int *)(*param_1 + 0xc));
    if (iVar1 == 0) {
      GOST_CIPHER_PARAMS_free(puVar2);
      uVar4 = 0x1b9;
    }
    else {
      ASN1_OBJECT_free((ASN1_OBJECT *)puVar2[1]);
      pAVar3 = OBJ_nid2obj(*piVar5);
      puVar2[1] = pAVar3;
      iVar1 = i2d_GOST_CIPHER_PARAMS(puVar2,0);
      data = CRYPTO_malloc(iVar1,"gost_crypt.c",0x1c0);
      local_38 = data;
      if (data == (void *)0x0) {
        GOST_CIPHER_PARAMS_free(puVar2);
        uVar4 = 0x1c3;
      }
      else {
        i2d_GOST_CIPHER_PARAMS(puVar2,&local_38);
        GOST_CIPHER_PARAMS_free(puVar2);
        str = ASN1_OCTET_STRING_new();
        if ((str != (ASN1_OCTET_STRING *)0x0) &&
           (iVar1 = ASN1_OCTET_STRING_set(str,data,iVar1), iVar1 != 0)) {
          CRYPTO_free(data);
          ASN1_TYPE_set(param_2,0x10,str);
          return 1;
        }
        CRYPTO_free(data);
        uVar4 = 0x1cd;
      }
    }
  }
  ERR_GOST_error(0x6d,0x76,"gost_crypt.c",uVar4);
  return 0;
}




undefined8 FUN_01afed00(long *param_1,ASN1_TYPE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int n;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uchar *local_38;
  
  puVar5 = (undefined4 *)param_1[0xf];
  iVar2 = ASN1_TYPE_get(param_2);
  if (iVar2 == 0x10) {
    local_38 = ((param_2->value).asn1_string)->data;
    plVar3 = (long *)d2i_GOST_CIPHER_PARAMS
                               (0,&local_38,(long)((param_2->value).asn1_string)->length);
    iVar2 = *(int *)*plVar3;
    if (iVar2 == *(int *)(*param_1 + 0xc)) {
      n = OBJ_obj2nid((ASN1_OBJECT *)plVar3[1]);
      if (n == 0) {
        puVar4 = (undefined4 *)get_encryption_params(0);
      }
      else {
        OBJ_nid2obj(n);
        puVar4 = (undefined4 *)get_encryption_params();
      }
      if (puVar4 != (undefined4 *)0x0) {
        *puVar5 = *puVar4;
        uVar1 = puVar4[4];
        puVar5[1] = 0;
        puVar5[2] = uVar1;
        gost_init(puVar5 + 3,*(undefined8 *)(puVar4 + 2));
        memcpy(param_1 + 3,*(void **)(*plVar3 + 8),(long)iVar2);
        GOST_CIPHER_PARAMS_free(plVar3);
        return 1;
      }
      GOST_CIPHER_PARAMS_free(plVar3);
    }
    else {
      GOST_CIPHER_PARAMS_free(plVar3);
      ERR_GOST_error(0x6c,0x6e,"gost_crypt.c",0x1ea);
    }
  }
  return 0xffffffff;
}




undefined8 FUN_01afee10(long param_1,int param_2,undefined8 param_3,uchar *param_4)

{
  int iVar1;
  
  if (param_2 == 7) {
    if (param_4 != (uchar *)0x0) {
      param_4[0] = '*';
      param_4[1] = '\x03';
      param_4[2] = '\0';
      param_4[3] = '\0';
      return 1;
    }
    return 0;
  }
  if (param_2 == 6) {
    iVar1 = RAND_bytes(param_4,*(int *)(param_1 + 0x68));
    if (0 < iVar1) {
      return 1;
    }
    ERR_GOST_error(0x6f,0x7b,"gost_crypt.c",0x195);
    return 0xffffffff;
  }
  ERR_GOST_error(0x6f,0x81,"gost_crypt.c",0x1a4);
  return 0xffffffff;
}

