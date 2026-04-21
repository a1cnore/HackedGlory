// functions/01ada — 6 functions
#include "libGameKindred.h"




undefined8
FUN_01ada56c(long param_1,undefined8 param_2,undefined8 param_3,X509_ALGOR *param_4,
            X509_ALGOR *param_5)

{
  int iVar1;
  ASN1_STRING *a;
  ASN1_STRING *pval;
  ASN1_OBJECT *pAVar2;
  undefined8 uVar3;
  EVP_PKEY_CTX *ctx;
  int local_34;
  
  ctx = *(EVP_PKEY_CTX **)(param_1 + 0x20);
  iVar1 = EVP_PKEY_CTX_ctrl(ctx,6,-1,0x1006,0,&local_34);
  if (iVar1 < 1) {
    uVar3 = 0;
  }
  else if (local_34 == 6) {
    a = (ASN1_STRING *)FUN_01ada9c4(ctx);
    uVar3 = 0;
    if (a != (ASN1_STRING *)0x0) {
      if (param_5 != (X509_ALGOR *)0x0) {
        pval = ASN1_STRING_dup(a);
        if (pval == (ASN1_STRING *)0x0) {
          ASN1_STRING_free(a);
          return 0;
        }
        pAVar2 = OBJ_nid2obj(0x390);
        X509_ALGOR_set0(param_5,pAVar2,0x10,pval);
      }
      pAVar2 = OBJ_nid2obj(0x390);
      X509_ALGOR_set0(param_4,pAVar2,0x10,a);
      uVar3 = 3;
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}




undefined4 FUN_01ada650(BIO *param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  BIGNUM *a;
  uchar *buf;
  char *number;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  char *number_00;
  
  if (*(BIGNUM **)(param_2 + 0x20) == (BIGNUM *)0x0) {
    uVar5 = 0;
    a = *(BIGNUM **)(param_2 + 0x28);
  }
  else {
    iVar1 = BN_num_bits(*(BIGNUM **)(param_2 + 0x20));
    uVar2 = iVar1 + 0xeU;
    if (-1 < (int)(iVar1 + 7U)) {
      uVar2 = iVar1 + 7U;
    }
    uVar5 = (long)((ulong)uVar2 << 0x20) >> 0x23;
    if (iVar1 + 0xeU < 0xf) {
      uVar5 = 0;
    }
    a = *(BIGNUM **)(param_2 + 0x28);
  }
  uVar4 = uVar5;
  if (a != (BIGNUM *)0x0) {
    iVar1 = BN_num_bits(a);
    uVar2 = iVar1 + 0xe;
    if (-1 < (int)(iVar1 + 7U)) {
      uVar2 = iVar1 + 7U;
    }
    uVar4 = (long)((ulong)uVar2 << 0x20) >> 0x23;
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
  }
  if (param_4 != 0) {
    uVar5 = uVar4;
    if (*(BIGNUM **)(param_2 + 0x30) != (BIGNUM *)0x0) {
      iVar1 = BN_num_bits(*(BIGNUM **)(param_2 + 0x30));
      uVar2 = iVar1 + 0xe;
      if (-1 < (int)(iVar1 + 7U)) {
        uVar2 = iVar1 + 7U;
      }
      uVar5 = (long)((ulong)uVar2 << 0x20) >> 0x23;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
    }
    uVar4 = uVar5;
    if (*(BIGNUM **)(param_2 + 0x38) != (BIGNUM *)0x0) {
      iVar1 = BN_num_bits(*(BIGNUM **)(param_2 + 0x38));
      uVar2 = iVar1 + 0xe;
      if (-1 < (int)(iVar1 + 7U)) {
        uVar2 = iVar1 + 7U;
      }
      uVar4 = (long)((ulong)uVar2 << 0x20) >> 0x23;
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
    }
    uVar5 = uVar4;
    if (*(BIGNUM **)(param_2 + 0x40) != (BIGNUM *)0x0) {
      iVar1 = BN_num_bits(*(BIGNUM **)(param_2 + 0x40));
      uVar2 = iVar1 + 0xe;
      if (-1 < (int)(iVar1 + 7U)) {
        uVar2 = iVar1 + 7U;
      }
      uVar5 = (long)((ulong)uVar2 << 0x20) >> 0x23;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
    }
    uVar4 = uVar5;
    if (*(BIGNUM **)(param_2 + 0x48) != (BIGNUM *)0x0) {
      iVar1 = BN_num_bits(*(BIGNUM **)(param_2 + 0x48));
      uVar2 = iVar1 + 0xe;
      if (-1 < (int)(iVar1 + 7U)) {
        uVar2 = iVar1 + 7U;
      }
      uVar4 = (long)((ulong)uVar2 << 0x20) >> 0x23;
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
    }
    uVar5 = uVar4;
    if (*(BIGNUM **)(param_2 + 0x50) != (BIGNUM *)0x0) {
      iVar1 = BN_num_bits(*(BIGNUM **)(param_2 + 0x50));
      uVar2 = iVar1 + 0xe;
      if (-1 < (int)(iVar1 + 7U)) {
        uVar2 = iVar1 + 7U;
      }
      uVar5 = (long)((ulong)uVar2 << 0x20) >> 0x23;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
    }
    uVar4 = uVar5;
    if (*(BIGNUM **)(param_2 + 0x58) != (BIGNUM *)0x0) {
      iVar1 = BN_num_bits(*(BIGNUM **)(param_2 + 0x58));
      uVar2 = iVar1 + 0xe;
      if (-1 < (int)(iVar1 + 7U)) {
        uVar2 = iVar1 + 7U;
      }
      uVar4 = (long)((ulong)uVar2 << 0x20) >> 0x23;
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
    }
  }
  buf = CRYPTO_malloc((int)uVar4 + 10,"rsa_ameth.c",0xcc);
  if (buf == (uchar *)0x0) {
    ERR_put_error(4,0x92,0x41,"rsa_ameth.c",0xce);
    return 0;
  }
  if (*(BIGNUM **)(param_2 + 0x20) == (BIGNUM *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar2 = BN_num_bits(*(BIGNUM **)(param_2 + 0x20));
    uVar5 = (ulong)uVar2;
  }
  iVar1 = BIO_indent(param_1,param_3,0x80);
  if (iVar1 != 0) {
    if ((param_4 == 0) || (*(long *)(param_2 + 0x30) == 0)) {
      iVar1 = BIO_printf(param_1,"Public-Key: (%d bit)\n",uVar5);
      if (0 < iVar1) {
        number_00 = "Exponent:";
        number = "Modulus:";
        goto LAB_01ada8a0;
      }
    }
    else {
      iVar1 = BIO_printf(param_1,"Private-Key: (%d bit)\n",uVar5);
      if (0 < iVar1) {
        number_00 = "publicExponent:";
        number = "modulus:";
LAB_01ada8a0:
        iVar1 = ASN1_bn_print(param_1,number,*(BIGNUM **)(param_2 + 0x20),buf,param_3);
        if (((iVar1 != 0) &&
            (iVar1 = ASN1_bn_print(param_1,number_00,*(BIGNUM **)(param_2 + 0x28),buf,param_3),
            iVar1 != 0)) &&
           ((param_4 == 0 ||
            ((((iVar1 = ASN1_bn_print(param_1,"privateExponent:",*(BIGNUM **)(param_2 + 0x30),buf,
                                      param_3), iVar1 != 0 &&
               (iVar1 = ASN1_bn_print(param_1,"prime1:",*(BIGNUM **)(param_2 + 0x38),buf,param_3),
               iVar1 != 0)) &&
              (iVar1 = ASN1_bn_print(param_1,"prime2:",*(BIGNUM **)(param_2 + 0x40),buf,param_3),
              iVar1 != 0)) &&
             (((iVar1 = ASN1_bn_print(param_1,"exponent1:",*(BIGNUM **)(param_2 + 0x48),buf,param_3)
               , iVar1 != 0 &&
               (iVar1 = ASN1_bn_print(param_1,"exponent2:",*(BIGNUM **)(param_2 + 0x50),buf,param_3)
               , iVar1 != 0)) &&
              (iVar1 = ASN1_bn_print(param_1,"coefficient:",*(BIGNUM **)(param_2 + 0x58),buf,param_3
                                    ), iVar1 != 0)))))))) {
          uVar3 = 1;
          goto LAB_01ada9a4;
        }
      }
    }
  }
  uVar3 = 0;
LAB_01ada9a4:
  CRYPTO_free(buf);
  return uVar3;
}




ASN1_STRING * FUN_01ada9c4(EVP_PKEY_CTX *param_1)

{
  int iVar1;
  EVP_PKEY *pkey;
  RSA_PSS_PARAMS *a;
  ASN1_INTEGER *a_00;
  X509_ALGOR *alg;
  ASN1_STRING *pAVar2;
  int local_3c;
  ASN1_OCTET_STRING *local_38;
  undefined8 local_30;
  EVP_MD *local_28;
  
  local_38 = (ASN1_STRING *)0x0;
  pkey = EVP_PKEY_CTX_get0_pkey(param_1);
  iVar1 = EVP_PKEY_CTX_ctrl(param_1,-1,0xf8,0xd,0,&local_28);
  if (((iVar1 < 1) || (iVar1 = EVP_PKEY_CTX_ctrl(param_1,6,0x3f8,0x1008,0,&local_30), iVar1 < 1)) ||
     (iVar1 = EVP_PKEY_CTX_ctrl(param_1,6,0x18,0x1007,0,&local_3c), iVar1 == 0)) goto LAB_01adab60;
  if (local_3c == -2) {
    iVar1 = EVP_PKEY_size(pkey);
    local_3c = EVP_MD_size(local_28);
    local_3c = (iVar1 + -2) - local_3c;
    iVar1 = EVP_PKEY_bits(pkey);
    if ((iVar1 - 1U & 7) == 0) {
      local_3c = local_3c + -1;
    }
LAB_01adaabc:
    a = RSA_PSS_PARAMS_new();
  }
  else {
    if (local_3c != -1) goto LAB_01adaabc;
    local_3c = EVP_MD_size(local_28);
    a = RSA_PSS_PARAMS_new();
  }
  if (a == (RSA_PSS_PARAMS *)0x0) goto LAB_01adab60;
  if (local_3c == 0x14) {
LAB_01adaaec:
    iVar1 = EVP_MD_type(local_28);
    if (iVar1 != 0x40) {
      alg = X509_ALGOR_new();
      a->hashAlgorithm = alg;
      if (alg == (X509_ALGOR *)0x0) goto LAB_01adab58;
      X509_ALGOR_set_md(alg,local_28);
    }
    iVar1 = FUN_01adab80(&a->maskGenAlgorithm,local_30);
    if ((iVar1 != 0) &&
       (pAVar2 = ASN1_item_pack(a,(ASN1_ITEM *)RSA_PSS_PARAMS_it,&local_38),
       pAVar2 != (ASN1_STRING *)0x0)) {
      RSA_PSS_PARAMS_free(a);
      return local_38;
    }
  }
  else {
    a_00 = ASN1_INTEGER_new();
    a->saltLength = a_00;
    if ((a_00 != (ASN1_INTEGER *)0x0) && (iVar1 = ASN1_INTEGER_set(a_00,(long)local_3c), iVar1 != 0)
       ) goto LAB_01adaaec;
  }
LAB_01adab58:
  RSA_PSS_PARAMS_free(a);
LAB_01adab60:
  if (local_38 != (ASN1_STRING *)0x0) {
    ASN1_STRING_free(local_38);
  }
  return (ASN1_STRING *)0x0;
}




bool FUN_01adab80(long *param_1,EVP_MD *param_2)

{
  int iVar1;
  ASN1_STRING *pAVar2;
  X509_ALGOR *alg;
  ASN1_OBJECT *aobj;
  X509_ALGOR *alg_00;
  ASN1_OCTET_STRING *local_28;
  
  local_28 = (ASN1_STRING *)0x0;
  *param_1 = 0;
  iVar1 = EVP_MD_type(param_2);
  if (iVar1 == 0x40) {
    return true;
  }
  iVar1 = EVP_MD_type(param_2);
  alg_00 = (X509_ALGOR *)0x0;
  if (iVar1 == 0x40) {
LAB_01adabf0:
    pAVar2 = ASN1_item_pack(alg_00,(ASN1_ITEM *)X509_ALGOR_it,&local_28);
    if (pAVar2 != (ASN1_STRING *)0x0) {
      alg = X509_ALGOR_new();
      *param_1 = (long)alg;
      if (alg != (X509_ALGOR *)0x0) {
        aobj = OBJ_nid2obj(0x38f);
        X509_ALGOR_set0(alg,aobj,0x10,local_28);
        local_28 = (ASN1_STRING *)0x0;
        goto joined_r0x01adac38;
      }
    }
  }
  else {
    alg_00 = X509_ALGOR_new();
    if (alg_00 != (X509_ALGOR *)0x0) {
      X509_ALGOR_set_md(alg_00,param_2);
      goto LAB_01adabf0;
    }
  }
  if (local_28 != (ASN1_STRING *)0x0) {
    ASN1_STRING_free(local_28);
  }
joined_r0x01adac38:
  if (alg_00 != (X509_ALGOR *)0x0) {
    X509_ALGOR_free(alg_00);
  }
  return *param_1 != 0;
}




undefined4
FUN_01adac74(EVP_MD_CTX *param_1,EVP_PKEY_CTX *param_2,undefined8 *param_3,EVP_PKEY *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  RSA_PSS_PARAMS *a;
  void *p2;
  char *name;
  EVP_MD *md;
  long lVar4;
  int *piVar5;
  ASN1_STRING *pAVar6;
  undefined4 uVar7;
  X509_ALGOR *pXVar8;
  EVP_PKEY_CTX *local_60;
  uchar *local_58;
  EVP_MD *local_48;
  
  local_60 = param_2;
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_3);
  if (iVar1 != 0x390) {
    ERR_put_error(4,0xa2,0x9b,"rsa_ameth.c",0x253);
    return 0xffffffff;
  }
  piVar5 = (int *)param_3[1];
  if ((piVar5 == (int *)0x0) || (*piVar5 != 0x10)) {
LAB_01adad78:
    ERR_put_error(4,0xa2,0x95,"rsa_ameth.c",0x25a);
    RSA_PSS_PARAMS_free((RSA_PSS_PARAMS *)0x0);
    return 0xffffffff;
  }
  local_58 = *(uchar **)(*(int **)(piVar5 + 2) + 2);
  a = d2i_RSA_PSS_PARAMS((RSA_PSS_PARAMS **)0x0,&local_58,(long)**(int **)(piVar5 + 2));
  if (a == (RSA_PSS_PARAMS *)0x0) goto LAB_01adad78;
  pXVar8 = a->maskGenAlgorithm;
  if (pXVar8 == (X509_ALGOR *)0x0) {
LAB_01adadc4:
    pXVar8 = (X509_ALGOR *)0x0;
    p2 = (void *)FUN_01adafe4(a->maskGenAlgorithm,0);
    if (p2 != (void *)0x0) goto LAB_01adadd4;
LAB_01adaea0:
    RSA_PSS_PARAMS_free(a);
  }
  else {
    if (pXVar8->parameter == (ASN1_TYPE *)0x0) {
      pXVar8 = (X509_ALGOR *)0x0;
      p2 = (void *)FUN_01adafe4(a->maskGenAlgorithm,0);
    }
    else {
      iVar1 = OBJ_obj2nid(pXVar8->algorithm);
      if ((iVar1 != 0x38f) || (pXVar8->parameter->type != 0x10)) goto LAB_01adadc4;
      pAVar6 = (pXVar8->parameter->value).asn1_string;
      local_48 = (EVP_MD *)pAVar6->data;
      pXVar8 = d2i_X509_ALGOR((X509_ALGOR **)0x0,(uchar **)&local_48,(long)pAVar6->length);
      p2 = (void *)FUN_01adafe4(a->maskGenAlgorithm,pXVar8);
    }
    if (p2 == (void *)0x0) goto LAB_01adaea0;
LAB_01adadd4:
    if (a->hashAlgorithm == (X509_ALGOR *)0x0) {
      md = EVP_sha1();
      if (md != (EVP_MD *)0x0) goto LAB_01adae38;
      goto LAB_01adaea0;
    }
    iVar1 = OBJ_obj2nid(a->hashAlgorithm->algorithm);
    name = OBJ_nid2sn(iVar1);
    md = EVP_get_digestbyname(name);
    if (md == (EVP_MD *)0x0) {
      iVar1 = 0x9d;
      iVar2 = 0xa3;
      iVar3 = 499;
LAB_01adaecc:
      ERR_put_error(4,iVar1,iVar2,"rsa_ameth.c",iVar3);
      uVar7 = 0xffffffff;
      RSA_PSS_PARAMS_free(a);
      goto joined_r0x01adafa4;
    }
LAB_01adae38:
    if (a->saltLength == (ASN1_INTEGER *)0x0) {
      iVar1 = 0x14;
    }
    else {
      lVar4 = ASN1_INTEGER_get(a->saltLength);
      iVar1 = (int)lVar4;
      if (iVar1 < 0) {
        iVar1 = 0xa2;
        iVar2 = 0x96;
        iVar3 = 0x26c;
        goto LAB_01adaecc;
      }
    }
    if ((a->trailerField != (ASN1_INTEGER *)0x0) &&
       (lVar4 = ASN1_INTEGER_get(a->trailerField), lVar4 != 1)) {
      iVar1 = 0xa2;
      iVar2 = 0x8b;
      iVar3 = 0x277;
      goto LAB_01adaecc;
    }
    if (param_4 == (EVP_PKEY *)0x0) {
      iVar2 = EVP_PKEY_CTX_ctrl(local_60,-1,0xf8,0xd,0,&local_48);
      if (0 < iVar2) {
        iVar2 = EVP_MD_type(md);
        iVar3 = EVP_MD_type(local_48);
        if (iVar2 == iVar3) goto LAB_01adaf28;
        ERR_put_error(4,0xa2,0xa6,"rsa_ameth.c",0x285);
      }
    }
    else {
      iVar2 = EVP_DigestVerifyInit(param_1,&local_60,md,(ENGINE *)0x0,param_4);
      if (iVar2 == 0) goto LAB_01adaea0;
LAB_01adaf28:
      iVar2 = EVP_PKEY_CTX_ctrl(local_60,6,-1,0x1001,6,(void *)0x0);
      if ((0 < iVar2) &&
         (iVar1 = EVP_PKEY_CTX_ctrl(local_60,6,0x18,0x1002,iVar1,(void *)0x0), 0 < iVar1)) {
        iVar1 = EVP_PKEY_CTX_ctrl(local_60,6,0x3f8,0x1005,0,p2);
        uVar7 = 1;
        if (iVar1 < 1) {
          uVar7 = 0xffffffff;
        }
        RSA_PSS_PARAMS_free(a);
        goto joined_r0x01adafa4;
      }
    }
    RSA_PSS_PARAMS_free(a);
  }
  uVar7 = 0xffffffff;
joined_r0x01adafa4:
  if (pXVar8 != (X509_ALGOR *)0x0) {
    X509_ALGOR_free(pXVar8);
    return uVar7;
  }
  return uVar7;
}




EVP_MD * FUN_01adafe4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char *name;
  EVP_MD *pEVar2;
  int line;
  
  if (param_1 == (undefined8 *)0x0) {
    pEVar2 = EVP_sha1();
    return pEVar2;
  }
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  if (iVar1 == 0x38f) {
    if (param_2 == (undefined8 *)0x0) {
      iVar1 = 0x9a;
      line = 0x203;
    }
    else {
      iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_2);
      name = OBJ_nid2sn(iVar1);
      pEVar2 = EVP_get_digestbyname(name);
      if (pEVar2 != (EVP_MD *)0x0) {
        return pEVar2;
      }
      iVar1 = 0x97;
      line = 0x208;
    }
  }
  else {
    iVar1 = 0x99;
    line = 0x1ff;
  }
  ERR_put_error(4,0x9f,iVar1,"rsa_ameth.c",line);
  return (EVP_MD *)0x0;
}

