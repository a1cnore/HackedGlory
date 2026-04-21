// functions/01afd — 9 functions
#include "libGameKindred.h"




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01afd138(X509_PUBKEY *param_1,EVP_PKEY *param_2)

{
  undefined1 (*pauVar1) [16];
  ulong uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  ASN1_OBJECT *aobj;
  void *pval;
  uchar *to;
  ASN1_OCTET_STRING *str;
  uchar *puVar8;
  ulong uVar9;
  ulong uVar10;
  uchar *puVar11;
  ulong uVar12;
  undefined1 (*pauVar13) [16];
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uchar *local_58;
  
  local_58 = (uchar *)0x0;
  pvVar7 = EVP_PKEY_get0(param_2);
  iVar4 = EVP_PKEY_base_id(param_2);
  aobj = OBJ_nid2obj(iVar4);
  if (param_2->save_parameters == 0) {
    pval = (void *)0x0;
    iVar4 = -1;
  }
  else {
    pval = (void *)FUN_01afdfb0(param_2);
    iVar4 = 0x10;
  }
  iVar5 = BN_num_bits(*(BIGNUM **)((long)pvVar7 + 0x30));
  iVar6 = iVar5 + 0xe;
  if (-1 < iVar5 + 7) {
    iVar6 = iVar5 + 7;
  }
  iVar6 = iVar6 >> 3;
  to = CRYPTO_malloc(iVar6,"gost_ameth.c",0x288);
  BN_bn2bin(*(BIGNUM **)((long)pvVar7 + 0x30),to);
  str = ASN1_OCTET_STRING_new();
  ASN1_STRING_set(str,(void *)0x0,iVar6);
  puVar8 = ASN1_STRING_data(str);
  auVar3 = _DAT_01e44180;
  if (0 < iVar5) {
    uVar9 = (ulong)iVar6;
    uVar2 = uVar9;
    if ((long)uVar9 < 2) {
      uVar2 = 1;
    }
    uVar12 = uVar9;
    if (uVar2 < 0x20) {
      uVar10 = 0;
    }
    else {
      uVar14 = uVar9;
      if ((long)uVar9 < 2) {
        uVar14 = 1;
      }
      if ((to + uVar9 <= puVar8) || (uVar10 = 0, puVar8 + uVar14 <= to + (uVar9 - uVar14))) {
        uVar10 = uVar2 & 0x7fffffffffffffe0;
        uVar12 = uVar9 - uVar10;
        puVar11 = puVar8 + 0x10;
        pauVar13 = (undefined1 (*) [16])(to + uVar9 + -0x10);
        uVar14 = uVar10;
        do {
          pauVar1 = pauVar13 + -1;
          auVar15 = *pauVar13;
          uVar14 = uVar14 - 0x20;
          pauVar13 = pauVar13 + -2;
          auVar15 = a64_TBL(ZEXT816(0),auVar15,auVar3);
          auVar16 = a64_TBL(ZEXT816(0),*pauVar1,auVar3);
          *(long *)(puVar11 + -8) = auVar15._8_8_;
          *(long *)(puVar11 + -0x10) = auVar15._0_8_;
          *(long *)(puVar11 + 8) = auVar16._8_8_;
          *(long *)puVar11 = auVar16._0_8_;
          puVar11 = puVar11 + 0x20;
        } while (uVar14 != 0);
        if (uVar2 == uVar10) goto LAB_01afd2bc;
      }
    }
    puVar11 = to + uVar12;
    do {
      puVar11 = puVar11 + -1;
      puVar8[uVar10] = *puVar11;
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)uVar9);
  }
LAB_01afd2bc:
  CRYPTO_free(to);
  iVar6 = i2d_ASN1_OCTET_STRING(str,&local_58);
  ASN1_BIT_STRING_free(str);
  if (iVar6 < 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = X509_PUBKEY_set0_param(param_1,aobj,iVar4,pval,local_58,iVar6);
  }
  return iVar4;
}




undefined8 FUN_01afd320(EVP_PKEY *param_1,EVP_PKEY *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = EVP_PKEY_get0(param_1);
  pvVar3 = EVP_PKEY_get0(param_2);
  if ((((pvVar2 != (void *)0x0) && (pvVar3 != (void *)0x0)) &&
      (*(BIGNUM **)((long)pvVar2 + 0x30) != (BIGNUM *)0x0)) &&
     ((*(BIGNUM **)((long)pvVar3 + 0x30) != (BIGNUM *)0x0 &&
      (iVar1 = BN_cmp(*(BIGNUM **)((long)pvVar2 + 0x30),*(BIGNUM **)((long)pvVar3 + 0x30)),
      iVar1 == 0)))) {
    return 1;
  }
  return 0;
}




undefined8
FUN_01afd39c(EVP_PKEY *param_1,undefined4 param_2,long param_3,PKCS7_SIGNER_INFO *param_4)

{
  int iVar1;
  undefined8 uVar2;
  void *pval;
  ASN1_OBJECT *pAVar3;
  X509_ALGOR *pXVar4;
  X509_ALGOR *local_38;
  X509_ALGOR *local_28;
  
  uVar2 = 0xfffffffe;
  switch(param_2) {
  case 1:
    if (param_3 == 0) {
      local_28 = (X509_ALGOR *)0x0;
      local_38 = (X509_ALGOR *)0x0;
      iVar1 = EVP_PKEY_base_id(param_1);
      PKCS7_SIGNER_INFO_get0_algs(param_4,(EVP_PKEY **)0x0,&local_28,&local_38);
LAB_01afd470:
      pXVar4 = local_28;
      pAVar3 = OBJ_nid2obj(0x329);
      X509_ALGOR_set0(pXVar4,pAVar3,5,(void *)0x0);
      pXVar4 = local_38;
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      pAVar3 = OBJ_nid2obj(iVar1);
      iVar1 = 5;
      pval = (void *)0x0;
LAB_01afd4fc:
      X509_ALGOR_set0(pXVar4,pAVar3,iVar1,pval);
    }
    break;
  case 2:
    if (param_3 == 0) {
      pval = (void *)FUN_01afdfb0(param_1);
      if (pval == (void *)0x0) {
        return 0xffffffff;
      }
      PKCS7_RECIP_INFO_get0_alg((PKCS7_RECIP_INFO *)param_4,&local_28);
LAB_01afd4e0:
      pXVar4 = local_28;
      pAVar3 = OBJ_nid2obj(param_1->type);
      iVar1 = 0x10;
      goto LAB_01afd4fc;
    }
    break;
  case 3:
    *(undefined4 *)&param_4->version = 0x329;
    return 2;
  default:
    goto switchD_01afd3d8_caseD_4;
  case 5:
    if (param_3 == 0) {
      local_28 = (X509_ALGOR *)0x0;
      local_38 = (X509_ALGOR *)0x0;
      iVar1 = EVP_PKEY_base_id(param_1);
      CMS_SignerInfo_get0_algs
                ((CMS_SignerInfo *)param_4,(EVP_PKEY **)0x0,(X509 **)0x0,&local_28,&local_38);
      goto LAB_01afd470;
    }
    break;
  case 7:
    if (param_3 == 0) {
      local_28 = (X509_ALGOR *)0x0;
      pval = (void *)FUN_01afdfb0(param_1);
      if (pval == (void *)0x0) {
        return 0xffffffff;
      }
      CMS_RecipientInfo_ktri_get0_algs
                ((CMS_RecipientInfo *)param_4,(EVP_PKEY **)0x0,(X509 **)0x0,&local_28);
      goto LAB_01afd4e0;
    }
  }
  uVar2 = 1;
switchD_01afd3d8_caseD_4:
  return uVar2;
}




bool FUN_01afd608(EVP_PKEY *param_1)

{
  EC_KEY *key;
  EC_GROUP *pEVar1;
  
  key = EVP_PKEY_get0(param_1);
  if (key != (EC_KEY *)0x0) {
    pEVar1 = EC_KEY_get0_group(key);
    return pEVar1 == (EC_GROUP *)0x0;
  }
  return true;
}




bool FUN_01afd778(EVP_PKEY *param_1,EVP_PKEY *param_2)

{
  int iVar1;
  int iVar2;
  EC_KEY *pEVar3;
  EC_GROUP *pEVar4;
  
  pEVar3 = EVP_PKEY_get0(param_1);
  pEVar4 = EC_KEY_get0_group(pEVar3);
  iVar1 = EC_GROUP_get_curve_name(pEVar4);
  pEVar3 = EVP_PKEY_get0(param_2);
  pEVar4 = EC_KEY_get0_group(pEVar3);
  iVar2 = EC_GROUP_get_curve_name(pEVar4);
  return iVar1 == iVar2;
}




ulong FUN_01afd82c(EVP_PKEY *param_1,X509_PUBKEY *param_2)

{
  uchar *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  EC_KEY *pEVar5;
  EC_GROUP *group;
  ASN1_OCTET_STRING *a;
  void *ptr;
  BIGNUM *y;
  BIGNUM *x;
  EC_POINT *p;
  long lVar6;
  uchar *puVar7;
  int local_54;
  ASN1_OBJECT *local_50;
  uchar *puStack_48;
  X509_ALGOR *local_38;
  
  local_38 = (X509_ALGOR *)0x0;
  local_50 = (ASN1_OBJECT *)0x0;
  puStack_48 = (uchar *)0x0;
  uVar2 = X509_PUBKEY_get0_param(&local_50,&puStack_48,&local_54,&local_38,param_2);
  uVar4 = (ulong)uVar2;
  if (uVar2 != 0) {
    iVar3 = OBJ_obj2nid(local_50);
    EVP_PKEY_assign(param_1,iVar3,(void *)0x0);
    uVar4 = FUN_01afde24(param_1,local_38);
    if ((int)uVar4 != 0) {
      pEVar5 = EVP_PKEY_get0(param_1);
      group = EC_KEY_get0_group(pEVar5);
      a = d2i_ASN1_OCTET_STRING((ASN1_OCTET_STRING **)0x0,&puStack_48,(long)local_54);
      if (a == (ASN1_OCTET_STRING *)0x0) {
        ERR_GOST_error(0x85,0x41,"gost_ameth.c",0x2ad);
      }
      else {
        ptr = CRYPTO_malloc(a->length,"gost_ameth.c",0x2b0);
        uVar2 = a->length;
        if (0 < (int)uVar2) {
          puVar7 = (uchar *)((long)ptr + (long)(int)uVar2);
          lVar6 = 0;
          do {
            puVar7 = puVar7 + -1;
            puVar1 = a->data + lVar6;
            lVar6 = lVar6 + 1;
            *puVar7 = *puVar1;
            uVar2 = a->length;
          } while (lVar6 < (int)uVar2);
        }
        if ((int)uVar2 < 0) {
          uVar2 = uVar2 + 1;
        }
        ASN1_OCTET_STRING_free(a);
        lVar6 = (long)((ulong)uVar2 << 0x20) >> 0x21;
        y = (BIGNUM *)getbnfrombuf(ptr,lVar6);
        x = (BIGNUM *)getbnfrombuf((long)ptr + lVar6,lVar6);
        CRYPTO_free(ptr);
        p = EC_POINT_new(group);
        iVar3 = EC_POINT_set_affine_coordinates_GFp(group,p,x,y,(BN_CTX *)0x0);
        if (iVar3 == 0) {
          ERR_GOST_error(0x85,0x10,"gost_ameth.c",700);
          EC_POINT_free(p);
          BN_free(x);
          BN_free(y);
        }
        else {
          BN_free(x);
          BN_free(y);
          pEVar5 = EVP_PKEY_get0(param_1);
          iVar3 = EC_KEY_set_public_key(pEVar5,p);
          if (iVar3 != 0) {
            EC_POINT_free(p);
            return 1;
          }
          ERR_GOST_error(0x85,0x10,"gost_ameth.c",0x2c5);
          EC_POINT_free(p);
        }
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01afda2c(X509_PUBKEY *param_1,EVP_PKEY *param_2)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  int num;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  EC_KEY *key;
  ASN1_OBJECT *aobj;
  void *pval;
  BIGNUM *order;
  EC_GROUP *pEVar6;
  EC_POINT *p;
  BIGNUM *a;
  BIGNUM *y;
  void *__s;
  ASN1_OCTET_STRING *str;
  uchar *puVar7;
  ulong uVar8;
  uchar *puVar9;
  ulong uVar10;
  undefined1 (*pauVar11) [16];
  ulong uVar12;
  ulong __n;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uchar *local_68;
  
  local_68 = (uchar *)0x0;
  key = EVP_PKEY_get0(param_2);
  iVar4 = EVP_PKEY_base_id(param_2);
  aobj = OBJ_nid2obj(iVar4);
  if (param_2->save_parameters == 0) {
    pval = (void *)0x0;
    iVar4 = -1;
  }
  else {
    pval = (void *)FUN_01afdfb0(param_2);
    iVar4 = 0x10;
  }
  order = BN_new();
  pEVar6 = EC_KEY_get0_group(key);
  EC_GROUP_get_order(pEVar6,order,(BN_CTX *)0x0);
  p = EC_KEY_get0_public_key(key);
  if (p == (EC_POINT *)0x0) {
    ERR_GOST_error(0x87,0x7a,"gost_ameth.c",0x2e4);
    return 0;
  }
  a = BN_new();
  y = BN_new();
  if ((a == (BIGNUM *)0x0) || (y == (BIGNUM *)0x0)) {
    ERR_GOST_error(0x87,0x41,"gost_ameth.c",0x2ea);
    if (a != (BIGNUM *)0x0) {
      BN_free(a);
    }
    if (y == (BIGNUM *)0x0) goto LAB_01afdc50;
  }
  else {
    pEVar6 = EC_KEY_get0_group(key);
    iVar5 = EC_POINT_get_affine_coordinates_GFp(pEVar6,p,a,y,(BN_CTX *)0x0);
    if (iVar5 != 0) {
      iVar5 = BN_num_bits(order);
      uVar2 = iVar5 + 0xe;
      if (-1 < (int)(iVar5 + 7U)) {
        uVar2 = iVar5 + 7U;
      }
      uVar13 = (ulong)(uint)((int)uVar2 >> 3);
      __n = -(ulong)((uint)((int)uVar2 >> 3) >> 0x1f) & 0xfffffffe00000000 | uVar13 << 1;
      BN_free(order);
      num = (int)(uVar13 << 1);
      __s = CRYPTO_malloc(num,"gost_ameth.c",0x2fa);
      memset(__s,0,__n);
      store_bignum(a,(long)__s + ((long)((ulong)uVar2 << 0x20) >> 0x23),uVar13);
      store_bignum(y,__s,uVar13);
      BN_free(a);
      BN_free(y);
      str = ASN1_OCTET_STRING_new();
      ASN1_STRING_set(str,(void *)0x0,num);
      puVar7 = ASN1_STRING_data(str);
      auVar3 = _DAT_01e44180;
      if (0 < iVar5) {
        uVar13 = __n;
        if ((long)__n < 2) {
          uVar13 = 1;
        }
        uVar10 = __n;
        if (uVar13 < 0x20) {
          uVar8 = 0;
        }
        else {
          uVar12 = __n;
          if ((long)__n < 2) {
            uVar12 = 1;
          }
          if (((uchar *)((long)__s + __n) <= puVar7) ||
             (uVar8 = 0, puVar7 + uVar12 <= (uchar *)((long)__s + (__n - uVar12)))) {
            uVar8 = uVar13 & 0x7fffffffffffffe0;
            uVar10 = __n - uVar8;
            puVar9 = puVar7 + 0x10;
            pauVar11 = (undefined1 (*) [16])((uchar *)((long)__s + __n) + -0x10);
            uVar12 = uVar8;
            do {
              pauVar1 = pauVar11 + -1;
              auVar14 = *pauVar11;
              uVar12 = uVar12 - 0x20;
              pauVar11 = pauVar11 + -2;
              auVar14 = a64_TBL(ZEXT816(0),auVar14,auVar3);
              auVar15 = a64_TBL(ZEXT816(0),*pauVar1,auVar3);
              *(long *)(puVar9 + -8) = auVar14._8_8_;
              *(long *)(puVar9 + -0x10) = auVar14._0_8_;
              *(long *)(puVar9 + 8) = auVar15._8_8_;
              *(long *)puVar9 = auVar15._0_8_;
              puVar9 = puVar9 + 0x20;
            } while (uVar12 != 0);
            if (uVar13 == uVar8) goto LAB_01afdd0c;
          }
        }
        puVar9 = (uchar *)((long)__s + uVar10);
        do {
          puVar9 = puVar9 + -1;
          puVar7[uVar8] = *puVar9;
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)__n);
      }
LAB_01afdd0c:
      CRYPTO_free(__s);
      iVar5 = i2d_ASN1_OCTET_STRING(str,&local_68);
      ASN1_BIT_STRING_free(str);
      if (iVar5 < 0) {
        return 0;
      }
      iVar4 = X509_PUBKEY_set0_param(param_1,aobj,iVar4,pval,local_68,iVar5);
      return iVar4;
    }
    ERR_GOST_error(0x87,0x44,"gost_ameth.c",0x2f2);
    BN_free(a);
  }
  BN_free(y);
LAB_01afdc50:
  BN_free(order);
                    /* WARNING: Read-only address (ram,0x01e44180) is written */
                    /* WARNING: Read-only address (ram,0x01e44180) is written */
  return 0;
}




undefined8 FUN_01afde24(EVP_PKEY *param_1,X509_ALGOR *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  DSA *key;
  undefined8 uVar5;
  EC_KEY *key_00;
  undefined8 uVar6;
  undefined8 local_50;
  int *local_48;
  int local_3c;
  ASN1_OBJECT *local_38;
  
  local_38 = (ASN1_OBJECT *)0x0;
  local_3c = -1;
  X509_ALGOR_get0(&local_38,&local_3c,&local_48,param_2);
  if (local_3c == 0x10) {
    local_50 = *(undefined8 *)(local_48 + 2);
    iVar1 = OBJ_obj2nid(local_38);
    puVar4 = (undefined8 *)d2i_GOST_KEY_PARAMS(0,&local_50,(long)*local_48);
    if (puVar4 == (undefined8 *)0x0) {
      uVar5 = 100;
      uVar6 = 0x71;
    }
    else {
      iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*puVar4);
      GOST_KEY_PARAMS_free(puVar4);
      iVar3 = EVP_PKEY_set_type(param_1,iVar1);
      if (iVar3 != 0) {
        if (iVar1 == 0x32b) {
          key_00 = EVP_PKEY_get0(param_1);
          if (key_00 == (EC_KEY *)0x0) {
            key_00 = EC_KEY_new();
            iVar1 = EVP_PKEY_assign(param_1,0x32b,key_00);
            if (iVar1 == 0) {
              return 0;
            }
          }
          uVar5 = fill_GOST2001_params(key_00,iVar2);
          iVar1 = (int)uVar5;
        }
        else {
          if (iVar1 != 0x32c) {
            return 1;
          }
          key = EVP_PKEY_get0(param_1);
          if (key == (DSA *)0x0) {
            key = DSA_new();
            iVar1 = EVP_PKEY_assign(param_1,0x32c,key);
            if (iVar1 == 0) {
              return 0;
            }
          }
          uVar5 = fill_GOST94_params(key,iVar2);
          iVar1 = (int)uVar5;
        }
        if (iVar1 != 0) {
          return 1;
        }
        return uVar5;
      }
      uVar5 = 0x44;
      uVar6 = 0x77;
    }
  }
  else {
    uVar5 = 99;
    uVar6 = 0x68;
  }
  ERR_GOST_error(99,uVar5,"gost_ameth.c",uVar6);
  return 0;
}




ASN1_STRING * FUN_01afdfb0(EVP_PKEY *param_1)

{
  int iVar1;
  int n;
  ASN1_STRING *a;
  undefined8 *puVar2;
  EC_KEY *key;
  EC_GROUP *group;
  ASN1_OBJECT *pAVar3;
  void *pvVar4;
  char *str;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  BIGNUM *local_38;
  
  a = ASN1_STRING_new();
  puVar2 = (undefined8 *)GOST_KEY_PARAMS_new();
  if ((a == (ASN1_STRING *)0x0) || (puVar2 == (undefined8 *)0x0)) {
    uVar5 = 0x41;
    uVar6 = 0x2d;
  }
  else {
    iVar1 = EVP_PKEY_base_id(param_1);
    if (iVar1 == 0x32c) {
      pvVar4 = EVP_PKEY_get0(param_1);
      local_38 = BN_new();
      if (PTR_s_68363196144955700784444165611827_02c08aa8 != (undefined *)0x0) {
        piVar7 = &R3410_paramset;
        str = PTR_s_68363196144955700784444165611827_02c08aa8;
        do {
          BN_dec2bn(&local_38,str);
          iVar1 = BN_cmp(local_38,*(BIGNUM **)((long)pvVar4 + 0x20));
          if (iVar1 == 0) {
            BN_free(local_38);
            n = *piVar7;
            if (n == 0) goto LAB_01afe0b4;
            goto LAB_01afe00c;
          }
          str = *(char **)(piVar7 + 0xe);
          piVar7 = piVar7 + 8;
        } while (str != (char *)0x0);
      }
      BN_free(local_38);
LAB_01afe0b4:
      uVar5 = 0x6d;
      uVar6 = 0x3d;
    }
    else {
      n = 0;
      if (iVar1 == 0x32b) {
        key = EVP_PKEY_get0(param_1);
        group = EC_KEY_get0_group(key);
        n = EC_GROUP_get_curve_name(group);
      }
LAB_01afe00c:
      pAVar3 = OBJ_nid2obj(n);
      *puVar2 = pAVar3;
      pAVar3 = OBJ_nid2obj(0x336);
      puVar2[1] = pAVar3;
      iVar1 = i2d_GOST_KEY_PARAMS(puVar2,&a->data);
      a->length = iVar1;
      if (0 < iVar1) {
        a->type = 0x10;
        goto LAB_01afe0f0;
      }
      uVar5 = 0x41;
      uVar6 = 0x4b;
    }
  }
  ERR_GOST_error(100,uVar5,"gost_ameth.c",uVar6);
  ASN1_STRING_free(a);
  a = (ASN1_STRING *)0x0;
LAB_01afe0f0:
  GOST_KEY_PARAMS_free(puVar2);
  return a;
}

