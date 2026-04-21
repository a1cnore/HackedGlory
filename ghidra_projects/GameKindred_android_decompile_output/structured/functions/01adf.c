// functions/01adf — 4 functions
#include "libGameKindred.h"




int FUN_01adf1b0(undefined8 *param_1,EVP_PKEY *param_2)

{
  int iVar1;
  DH *key;
  
  if (param_1[2] == 0) {
    ERR_put_error(5,0x71,0x6b,"dh_pmeth.c",0x19f);
  }
  else {
    key = DH_new();
    if (key != (DH *)0x0) {
      EVP_PKEY_assign(param_2,*(int *)*param_1,key);
      iVar1 = EVP_PKEY_copy_parameters(param_2,(EVP_PKEY *)param_1[2]);
      if (iVar1 != 0) {
        iVar1 = DH_generate_key((DH *)(param_2->pkey).rsa);
        return iVar1;
      }
    }
  }
  return 0;
}




int FUN_01adf234(long param_1,uchar *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  uchar *key;
  long lVar3;
  DH *dh;
  BIGNUM *pub_key;
  long lVar4;
  
  if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    ERR_put_error(5,0x70,0x6c,"dh_pmeth.c",0x1b4);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x28);
    dh = *(DH **)(*(long *)(param_1 + 0x10) + 0x20);
    pub_key = *(BIGNUM **)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x20);
    if (*(char *)(lVar4 + 0x24) != '\x02') {
      if (*(char *)(lVar4 + 0x24) != '\x01') {
        return 1;
      }
      if (param_2 == (uchar *)0x0) {
        iVar1 = DH_size(dh);
        lVar3 = (long)iVar1;
      }
      else {
        iVar1 = DH_compute_key(param_2,pub_key,dh);
        if (iVar1 < 0) {
          return iVar1;
        }
        lVar3 = (long)iVar1;
      }
LAB_01adf38c:
      *param_3 = lVar3;
      return 1;
    }
    lVar3 = *(long *)(lVar4 + 0x48);
    if ((lVar3 != 0) && (*(long *)(lVar4 + 0x28) != 0)) {
      if (param_2 == (uchar *)0x0) goto LAB_01adf38c;
      if (*param_3 != lVar3) {
        return 0;
      }
      iVar1 = DH_size(dh);
      key = CRYPTO_malloc(iVar1,"dh_pmeth.c",0x1d0);
      if (key != (uchar *)0x0) {
        iVar2 = DH_compute_key_padded(key,pub_key,dh);
        if ((iVar2 < 1) ||
           (iVar2 = DH_KDF_X9_42(param_2,*param_3,key,(long)iVar1,*(undefined8 *)(lVar4 + 0x28),
                                 *(undefined8 *)(lVar4 + 0x38),*(undefined8 *)(lVar4 + 0x40),
                                 *(undefined8 *)(lVar4 + 0x30)), iVar2 == 0)) {
          iVar2 = 0;
        }
        else {
          iVar2 = 1;
          *param_3 = *(long *)(lVar4 + 0x48);
        }
        OPENSSL_cleanse(key,(long)iVar1);
        CRYPTO_free(key);
        return iVar2;
      }
    }
  }
  return 0;
}




undefined8 * FUN_01adfe34(void)

{
  undefined8 *obj;
  ENGINE *e;
  ECDH_METHOD *pEVar1;
  
  obj = CRYPTO_malloc(0x30,"ech_lib.c",0x8c);
  if (obj == (undefined8 *)0x0) {
    ERR_put_error(0x2b,0x65,0x41,"ech_lib.c",0x8e);
    return (undefined8 *)0x0;
  }
  *obj = 0;
  if (DAT_03218970 == (ECDH_METHOD *)0x0) {
    DAT_03218970 = ECDH_OpenSSL();
  }
  obj[3] = DAT_03218970;
  obj[1] = 0;
  e = ENGINE_get_default_ECDH();
  obj[1] = e;
  if (e == (ENGINE *)0x0) {
    pEVar1 = (ECDH_METHOD *)obj[3];
  }
  else {
    pEVar1 = ENGINE_get_ECDH(e);
    obj[3] = pEVar1;
    if (pEVar1 == (ECDH_METHOD *)0x0) {
      ERR_put_error(0x2b,0x65,0x26,"ech_lib.c",0x9c);
      ENGINE_finish((ENGINE *)obj[1]);
      CRYPTO_free(obj);
      return (undefined8 *)0x0;
    }
  }
  *(undefined4 *)(obj + 2) = *(undefined4 *)(pEVar1 + 0x10);
  CRYPTO_new_ex_data(0xd,obj,(CRYPTO_EX_DATA *)(obj + 4));
  return obj;
}




ulong FUN_01adffd0(void *param_1,ulong param_2,EC_POINT *param_3,EC_KEY *param_4,code *param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  BN_CTX *ctx;
  BIGNUM *cofactor;
  BIGNUM *y;
  BIGNUM *b;
  EC_GROUP *group;
  EC_POINT *r;
  EC_METHOD *meth;
  long lVar5;
  int iVar6;
  void *__s;
  ulong local_68;
  
  local_68 = param_2;
  if (param_2 >> 0x1f != 0) {
    ERR_put_error(0x2b,100,0x41,"ech_ossl.c",0x7b);
    param_2 = 0xffffffff;
    goto LAB_01ae02e0;
  }
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    param_2 = 0xffffffff;
    goto LAB_01ae02e0;
  }
  BN_CTX_start(ctx);
  cofactor = BN_CTX_get(ctx);
  y = BN_CTX_get(ctx);
  b = EC_KEY_get0_private_key(param_4);
  if (b == (BIGNUM *)0x0) {
    iVar4 = 100;
    iVar6 = 0x88;
LAB_01ae0188:
    ERR_put_error(0x2b,100,iVar4,"ech_ossl.c",iVar6);
    __s = (void *)0x0;
    param_2 = 0xffffffff;
  }
  else {
    group = EC_KEY_get0_group(param_4);
    uVar3 = EC_KEY_get_flags(param_4);
    if (((uVar3 >> 0xc & 1) != 0) &&
       ((iVar4 = EC_GROUP_get_cofactor(group,cofactor,ctx), iVar4 == 0 ||
        (iVar4 = BN_mul(cofactor,cofactor,b,ctx), b = cofactor, iVar4 == 0)))) {
      iVar4 = 0x41;
      iVar6 = 0x91;
      goto LAB_01ae0188;
    }
    r = EC_POINT_new(group);
    if (r == (EC_POINT *)0x0) {
      iVar4 = 0x41;
      iVar6 = 0x98;
      goto LAB_01ae0188;
    }
    iVar4 = EC_POINT_mul(group,r,(BIGNUM *)0x0,param_3,b,ctx);
    if (iVar4 == 0) {
      iVar4 = 0x65;
      iVar6 = 0x9d;
LAB_01ae02b0:
      ERR_put_error(0x2b,100,iVar4,"ech_ossl.c",iVar6);
      __s = (void *)0x0;
LAB_01ae02b8:
      param_2 = 0xffffffff;
    }
    else {
      meth = EC_GROUP_method_of(group);
      iVar4 = EC_METHOD_get_field_type(meth);
      if (iVar4 != 0x196) {
        iVar4 = EC_POINT_get_affine_coordinates_GF2m(group,r,cofactor,y,ctx);
        if (iVar4 != 0) goto LAB_01ae01d0;
        iVar4 = 0x65;
        iVar6 = 0xab;
        goto LAB_01ae02b0;
      }
      iVar4 = EC_POINT_get_affine_coordinates_GFp(group,r,cofactor,y,ctx);
      if (iVar4 == 0) {
        iVar4 = 0x65;
        iVar6 = 0xa4;
        goto LAB_01ae02b0;
      }
LAB_01ae01d0:
      iVar4 = EC_GROUP_get_degree(group);
      uVar3 = iVar4 + 0xe;
      if (-1 < (int)(iVar4 + 7U)) {
        uVar3 = iVar4 + 7U;
      }
      iVar4 = BN_num_bits(cofactor);
      uVar1 = iVar4 + 0xe;
      if (-1 < (int)(iVar4 + 7U)) {
        uVar1 = iVar4 + 7U;
      }
      if ((uint)((int)uVar3 >> 3) < (uint)((int)uVar1 >> 3)) {
        iVar4 = 0x44;
        iVar6 = 0xb4;
        goto LAB_01ae02b0;
      }
      uVar2 = (long)((ulong)uVar3 << 0x20) >> 0x23;
      __s = CRYPTO_malloc((int)uVar3 >> 3,"ech_ossl.c",0xb7);
      if (__s == (void *)0x0) {
        iVar4 = 0x41;
        iVar6 = 0xb8;
LAB_01ae0338:
        ERR_put_error(0x2b,100,iVar4,"ech_ossl.c",iVar6);
        goto LAB_01ae02b8;
      }
      lVar5 = (long)((ulong)uVar1 << 0x20) >> 0x23;
      memset(__s,0,uVar2 - lVar5);
      uVar3 = BN_bn2bin(cofactor,(uchar *)((long)__s + (uVar2 - lVar5)));
      if ((int)uVar1 >> 3 != uVar3) {
        iVar4 = 3;
        iVar6 = 0xbe;
        goto LAB_01ae0338;
      }
      if (param_5 == (code *)0x0) {
        if (uVar2 < param_2) {
          param_2 = uVar2;
          local_68 = uVar2;
        }
        memcpy(param_1,__s,param_2);
      }
      else {
        lVar5 = (*param_5)(__s,uVar2,param_1,&local_68);
        if (lVar5 == 0) {
          iVar4 = 0x66;
          iVar6 = 0xc4;
          goto LAB_01ae0338;
        }
        param_2 = local_68 & 0xffffffff;
      }
    }
    EC_POINT_free(r);
  }
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  if (__s != (void *)0x0) {
    CRYPTO_free(__s);
  }
LAB_01ae02e0:
  return param_2 & 0xffffffff;
}

