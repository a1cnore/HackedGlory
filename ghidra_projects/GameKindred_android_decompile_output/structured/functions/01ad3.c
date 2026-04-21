// functions/01ad3 — 6 functions
#include "libGameKindred.h"




bool FUN_01ad3020(PKCS8_PRIV_KEY_INFO *param_1,long param_2)

{
  int iVar1;
  uint flags;
  int iVar2;
  uchar *penc;
  ASN1_OBJECT *aobj;
  EC_KEY *key;
  void *local_58;
  int local_4c;
  uchar *local_48;
  
  key = *(EC_KEY **)(param_2 + 0x20);
  iVar1 = FUN_01ad3b94(&local_4c,&local_58,key);
  if (iVar1 == 0) {
    iVar1 = 0x8e;
    iVar2 = 0x137;
  }
  else {
    flags = EC_KEY_get_enc_flags(key);
    EC_KEY_set_enc_flags(key,flags | 1);
    iVar1 = i2d_ECPrivateKey(key,(uchar **)0x0);
    if (iVar1 == 0) {
      EC_KEY_set_enc_flags(key,flags);
      iVar1 = 0x10;
      iVar2 = 0x147;
    }
    else {
      penc = CRYPTO_malloc(iVar1,"ec_ameth.c",0x14a);
      if (penc == (uchar *)0x0) {
        EC_KEY_set_enc_flags(key,flags);
        iVar1 = 0x41;
        iVar2 = 0x14d;
      }
      else {
        local_48 = penc;
        iVar2 = i2d_ECPrivateKey(key,&local_48);
        EC_KEY_set_enc_flags(key,flags);
        if (iVar2 != 0) {
          aobj = OBJ_nid2obj(0x198);
          iVar1 = PKCS8_pkey_set0(param_1,aobj,0,local_4c,local_58,penc,iVar1);
          return iVar1 != 0;
        }
        CRYPTO_free(penc);
        iVar1 = 0x10;
        iVar2 = 0x154;
      }
    }
  }
  ERR_put_error(0x10,0xd6,iVar1,"ec_ameth.c",iVar2);
  return false;
}




bool FUN_01ad3290(long param_1)

{
  EC_GROUP *pEVar1;
  
  pEVar1 = EC_KEY_get0_group(*(EC_KEY **)(param_1 + 0x20));
  return pEVar1 == (EC_GROUP *)0x0;
}




undefined4 FUN_01ad32b0(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  EC_GROUP *pEVar3;
  
  pEVar3 = EC_KEY_get0_group(*(EC_KEY **)(param_2 + 0x20));
  pEVar3 = EC_GROUP_dup(pEVar3);
  uVar2 = 0;
  if (pEVar3 != (EC_GROUP *)0x0) {
    iVar1 = EC_KEY_set_group(*(EC_KEY **)(param_1 + 0x20),pEVar3);
    uVar2 = 0;
    if (iVar1 != 0) {
      EC_GROUP_free(pEVar3);
      uVar2 = 1;
    }
  }
  return uVar2;
}




undefined8 FUN_01ad3b94(undefined4 *param_1,undefined8 *param_2,EC_KEY *param_3)

{
  int iVar1;
  EC_GROUP *group;
  ASN1_OBJECT *pAVar2;
  ASN1_STRING *a;
  int line;
  undefined4 uVar3;
  
  if ((param_3 == (EC_KEY *)0x0) || (group = EC_KEY_get0_group(param_3), group == (EC_GROUP *)0x0))
  {
    iVar1 = 0x7c;
    line = 0x4e;
LAB_01ad3c00:
    ERR_put_error(0x10,0xdf,iVar1,"ec_ameth.c",line);
    return 0;
  }
  iVar1 = EC_GROUP_get_asn1_flag(group);
  if ((iVar1 == 0) || (iVar1 = EC_GROUP_get_curve_name(group), iVar1 == 0)) {
    a = ASN1_STRING_new();
    if (a == (ASN1_STRING *)0x0) {
      return 0;
    }
    iVar1 = i2d_ECParameters(param_3,&a->data);
    a->length = iVar1;
    if (iVar1 < 1) {
      ASN1_STRING_free(a);
      iVar1 = 0x10;
      line = 0x60;
      goto LAB_01ad3c00;
    }
    uVar3 = 0x10;
    *param_2 = a;
  }
  else {
    pAVar2 = OBJ_nid2obj(iVar1);
    *param_2 = pAVar2;
    uVar3 = 6;
  }
  *param_1 = uVar3;
  return 1;
}




undefined4 FUN_01ad3c80(BIO *param_1,EC_KEY *param_2,int param_3,int param_4)

{
  char *pcVar1;
  point_conversion_form_t form;
  int iVar2;
  uint uVar3;
  EC_GROUP *group;
  BN_CTX *c;
  EC_POINT *pEVar4;
  BIGNUM *a;
  BIGNUM *a_00;
  uchar *buf;
  BIGNUM *pBVar5;
  undefined4 uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  
  if ((param_2 == (EC_KEY *)0x0) || (group = EC_KEY_get0_group(param_2), group == (EC_GROUP *)0x0))
  {
    buf = (uchar *)0x0;
    pBVar5 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    c = (BN_CTX *)0x0;
    iVar2 = 0x43;
  }
  else {
    c = BN_CTX_new();
    if (c == (BN_CTX *)0x0) {
      a = (BIGNUM *)0x0;
      pBVar5 = (BIGNUM *)0x0;
      buf = (uchar *)0x0;
      iVar2 = 0x41;
    }
    else {
      if (param_4 < 1) {
        buf = (uchar *)0x0;
        a = (BIGNUM *)0x0;
        a_00 = (BIGNUM *)0x0;
        pcVar7 = "ECDSA-Parameters";
      }
      else {
        pEVar4 = EC_KEY_get0_public_key(param_2);
        if (pEVar4 == (EC_POINT *)0x0) {
          uVar8 = 0;
          a = (BIGNUM *)0x0;
          pBVar5 = (BIGNUM *)0x0;
          if (param_4 == 2) goto LAB_01ad3d38;
LAB_01ad3dc8:
          a_00 = (BIGNUM *)0x0;
          uVar9 = uVar8;
        }
        else {
          form = EC_KEY_get_conv_form(param_2);
          a = EC_POINT_point2bn(group,pEVar4,form,(BIGNUM *)0x0,c);
          if (a == (BIGNUM *)0x0) {
            pBVar5 = (BIGNUM *)0x0;
            buf = (uchar *)0x0;
            iVar2 = 0x10;
            goto LAB_01ad3ef0;
          }
          iVar2 = BN_num_bits(a);
          uVar3 = iVar2 + 0xe;
          if (-1 < (int)(iVar2 + 7U)) {
            uVar3 = iVar2 + 7U;
          }
          uVar8 = (long)((ulong)uVar3 << 0x20) >> 0x23;
          pBVar5 = a;
          if (param_4 != 2) goto LAB_01ad3dc8;
LAB_01ad3d38:
          a_00 = EC_KEY_get0_private_key(param_2);
          a = pBVar5;
          uVar9 = uVar8;
          if (a_00 != (BIGNUM *)0x0) {
            iVar2 = BN_num_bits(a_00);
            uVar3 = iVar2 + 0xe;
            if (-1 < (int)(iVar2 + 7U)) {
              uVar3 = iVar2 + 7U;
            }
            uVar9 = (long)((ulong)uVar3 << 0x20) >> 0x23;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
          }
        }
        buf = CRYPTO_malloc((int)uVar9 + 10,"ec_ameth.c",0x1c9);
        if (buf == (uchar *)0x0) {
          pBVar5 = (BIGNUM *)0x0;
          iVar2 = 0x41;
          goto LAB_01ad3ef0;
        }
        pcVar1 = "Public-Key";
        if (param_4 != 1) {
          pcVar1 = "ECDSA-Parameters";
        }
        pcVar7 = "Private-Key";
        if (param_4 != 2) {
          pcVar7 = pcVar1;
        }
      }
      iVar2 = BIO_indent(param_1,param_3,0x80);
      if (iVar2 == 0) {
        pBVar5 = (BIGNUM *)0x0;
      }
      else {
        pBVar5 = BN_new();
        if ((pBVar5 != (BIGNUM *)0x0) &&
           (iVar2 = EC_GROUP_get_order(group,pBVar5,(BN_CTX *)0x0), iVar2 != 0)) {
          uVar3 = BN_num_bits(pBVar5);
          iVar2 = BIO_printf(param_1,"%s: (%d bit)\n",pcVar7,(ulong)uVar3);
          if ((((0 < iVar2) &&
               ((a_00 == (BIGNUM *)0x0 ||
                (iVar2 = ASN1_bn_print(param_1,"priv:",a_00,buf,param_3), iVar2 != 0)))) &&
              ((a == (BIGNUM *)0x0 ||
               (iVar2 = ASN1_bn_print(param_1,"pub: ",a,buf,param_3), iVar2 != 0)))) &&
             (iVar2 = ECPKParameters_print(param_1,group,param_3), iVar2 != 0)) {
            uVar6 = 1;
            goto joined_r0x01ad3f0c;
          }
        }
      }
      iVar2 = 0x20;
    }
  }
LAB_01ad3ef0:
  ERR_put_error(0x10,0xdd,iVar2,"ec_ameth.c",0x1e9);
  uVar6 = 0;
joined_r0x01ad3f0c:
  if (a != (BIGNUM *)0x0) {
    BN_free(a);
  }
  if (pBVar5 != (BIGNUM *)0x0) {
    BN_free(pBVar5);
  }
  if (c != (BN_CTX *)0x0) {
    BN_CTX_free(c);
  }
  if (buf != (uchar *)0x0) {
    CRYPTO_free(buf);
  }
  return uVar6;
}




undefined4 FUN_01ad3f5c(EVP_PKEY_CTX *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  EVP_MD *p2;
  X509_ALGOR *a;
  EVP_CIPHER_CTX *ctx;
  EVP_CIPHER *cipher;
  ulong uVar4;
  int *piVar5;
  undefined4 uVar6;
  void *local_60;
  uchar *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  int local_34;
  
  local_60 = (void *)0x0;
  iVar1 = CMS_RecipientInfo_kari_get0_alg(param_2,&local_48,&local_50);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*local_48);
  if ((iVar1 == 0) || (iVar1 = OBJ_find_sigid_algs(iVar1,&local_34,(int *)&local_58), iVar1 == 0)) {
LAB_01ad418c:
    ERR_put_error(0x10,0xef,0x94,"ec_ameth.c",0x2ed);
    return 0;
  }
  if ((int)local_58 == 0x3b2) {
    iVar1 = 0;
  }
  else {
    if ((int)local_58 != 0x3b3) goto LAB_01ad418c;
    iVar1 = 1;
  }
  iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x198,0x400,0x1003,iVar1,(void *)0x0);
  if ((iVar1 < 1) ||
     (iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x198,0x400,0x1004,2,(void *)0x0), iVar1 < 1))
  goto LAB_01ad418c;
  pcVar3 = OBJ_nid2sn(local_34);
  p2 = EVP_get_digestbyname(pcVar3);
  if ((p2 == (EVP_MD *)0x0) ||
     (iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x198,0x400,0x1005,0,p2), iVar1 < 1)) goto LAB_01ad418c;
  if (*(int *)local_48[1] != 0x10) {
    return 0;
  }
  piVar5 = *(int **)((int *)local_48[1] + 2);
  local_58 = *(uchar **)(piVar5 + 2);
  a = d2i_X509_ALGOR((X509_ALGOR **)0x0,&local_58,(long)*piVar5);
  if (a == (X509_ALGOR *)0x0) {
    return 0;
  }
  ctx = (EVP_CIPHER_CTX *)CMS_RecipientInfo_kari_get0_ctx(param_2);
  if (ctx != (EVP_CIPHER_CTX *)0x0) {
    iVar1 = OBJ_obj2nid(a->algorithm);
    pcVar3 = OBJ_nid2sn(iVar1);
    cipher = EVP_get_cipherbyname(pcVar3);
    if (cipher != (EVP_CIPHER *)0x0) {
      uVar4 = EVP_CIPHER_flags(cipher);
      if ((uVar4 & 0xf0007) != 0x10002) {
LAB_01ad41e4:
        uVar6 = 0;
        X509_ALGOR_free(a);
        goto joined_r0x01ad41d8;
      }
      iVar1 = EVP_EncryptInit_ex(ctx,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0);
      if ((iVar1 != 0) && (iVar1 = EVP_CIPHER_asn1_to_param(ctx,a->parameter), 0 < iVar1)) {
        iVar1 = EVP_CIPHER_CTX_key_length(ctx);
        iVar2 = EVP_PKEY_CTX_ctrl(param_1,0x198,0x400,0x1007,iVar1,(void *)0x0);
        if ((0 < iVar2) && (iVar1 = CMS_SharedInfo_encode(&local_60,a,local_50,iVar1), iVar1 != 0))
        {
          iVar1 = EVP_PKEY_CTX_ctrl(param_1,0x198,0x400,0x1009,iVar1,local_60);
          if (0 < iVar1) {
            uVar6 = 1;
            local_60 = (void *)0x0;
            X509_ALGOR_free(a);
            goto joined_r0x01ad41d8;
          }
          goto LAB_01ad41e4;
        }
      }
    }
  }
  uVar6 = 0;
  X509_ALGOR_free(a);
joined_r0x01ad41d8:
  if (local_60 != (void *)0x0) {
    CRYPTO_free(local_60);
    return uVar6;
  }
  return uVar6;
}

