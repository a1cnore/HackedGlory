// functions/01ad6 — 2 functions
#include "libGameKindred.h"




/* WARNING: Type propagation algorithm not settling */

int FUN_01ad6c74(int param_1,uchar *param_2,void *param_3,long param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BN_CTX *ctx;
  BIGNUM *ret;
  BIGNUM *a;
  uchar *to;
  BIGNUM *pBVar4;
  BN_MONT_CTX *pBVar5;
  
  iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x20));
  if (0x4000 < iVar1) {
    iVar1 = 0x69;
    iVar2 = 0xa4;
LAB_01ad6de4:
    ERR_put_error(4,0x68,iVar1,"rsa_eay.c",iVar2);
    return -1;
  }
  iVar1 = BN_ucmp(*(BIGNUM **)(param_4 + 0x20),*(BIGNUM **)(param_4 + 0x28));
  if (iVar1 < 1) {
    iVar1 = 0x65;
    iVar2 = 0xa9;
    goto LAB_01ad6de4;
  }
  iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x20));
  if ((0xc00 < iVar1) && (iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28)), 0x40 < iVar1)) {
    iVar1 = 0x65;
    iVar2 = 0xb0;
    goto LAB_01ad6de4;
  }
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    return -1;
  }
  BN_CTX_start(ctx);
  ret = BN_CTX_get(ctx);
  a = BN_CTX_get(ctx);
  iVar2 = BN_num_bits(*(BIGNUM **)(param_4 + 0x20));
  iVar1 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar1 = iVar2 + 7;
  }
  iVar1 = iVar1 >> 3;
  to = CRYPTO_malloc(iVar1,"rsa_eay.c",0xbb);
  if (((ret == (BIGNUM *)0x0) || (a == (BIGNUM *)0x0)) || (to == (uchar *)0x0)) {
    iVar2 = 0x41;
    iVar3 = 0xbd;
LAB_01ad6e24:
    ERR_put_error(4,0x68,iVar2,"rsa_eay.c",iVar3);
  }
  else {
    switch(param_5) {
    case 1:
      iVar2 = RSA_padding_add_PKCS1_type_2(to,iVar1,param_2,param_1);
      break;
    case 2:
      iVar2 = RSA_padding_add_SSLv23(to,iVar1,param_2,param_1);
      break;
    case 3:
      iVar2 = RSA_padding_add_none(to,iVar1,param_2,param_1);
      break;
    case 4:
      iVar2 = RSA_padding_add_PKCS1_OAEP(to,iVar1,param_2,param_1,(uchar *)0x0,0);
      break;
    default:
      iVar2 = 0x76;
      iVar3 = 0xd1;
      goto LAB_01ad6e24;
    }
    if ((0 < iVar2) && (pBVar4 = BN_bin2bn(to,iVar1,ret), pBVar4 != (BIGNUM *)0x0)) {
      iVar2 = BN_ucmp(ret,*(BIGNUM **)(param_4 + 0x20));
      if (-1 < iVar2) {
        iVar2 = 0x84;
        iVar3 = 0xdd;
        goto LAB_01ad6e24;
      }
      if ((((*(byte *)(param_4 + 0x74) >> 1 & 1) == 0) ||
          (pBVar5 = BN_MONT_CTX_set_locked
                              ((BN_MONT_CTX **)(param_4 + 0x78),9,*(BIGNUM **)(param_4 + 0x20),ctx),
          pBVar5 != (BN_MONT_CTX *)0x0)) &&
         (iVar2 = (**(code **)(*(long *)(param_4 + 0x10) + 0x30))
                            (a,ret,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x20),
                             ctx,*(undefined8 *)(param_4 + 0x78)), iVar2 != 0)) {
        iVar3 = BN_num_bits(a);
        iVar2 = iVar3 + 0xe;
        if (-1 < iVar3 + 7) {
          iVar2 = iVar3 + 7;
        }
        iVar3 = BN_bn2bin(a,(uchar *)((long)param_3 + (long)(iVar1 - (iVar2 >> 3))));
        iVar2 = iVar1;
        if (0 < iVar1 - iVar3) {
          memset(param_3,0,(ulong)(uint)((iVar1 + -1) - iVar3) + 1);
        }
        goto LAB_01ad6e2c;
      }
    }
  }
  iVar2 = -1;
LAB_01ad6e2c:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  if (to != (uchar *)0x0) {
    OPENSSL_cleanse(to,(long)iVar1);
    CRYPTO_free(to);
  }
  return iVar2;
}




int FUN_01ad6fb0(int param_1,uchar *param_2,uchar *param_3,long param_4,int param_5)

{
  int iVar1;
  int iVar2;
  BN_CTX *ctx;
  BIGNUM *ret;
  BIGNUM *a;
  uchar *to;
  BIGNUM *pBVar3;
  BN_MONT_CTX *pBVar4;
  int line;
  
  iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x20));
  if (0x4000 < iVar1) {
    iVar1 = 0x69;
    iVar2 = 0x273;
LAB_01ad7104:
    ERR_put_error(4,0x67,iVar1,"rsa_eay.c",iVar2);
    return -1;
  }
  iVar1 = BN_ucmp(*(BIGNUM **)(param_4 + 0x20),*(BIGNUM **)(param_4 + 0x28));
  if (iVar1 < 1) {
    iVar1 = 0x65;
    iVar2 = 0x278;
    goto LAB_01ad7104;
  }
  iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x20));
  if ((0xc00 < iVar1) && (iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28)), 0x40 < iVar1)) {
    iVar1 = 0x65;
    iVar2 = 0x27f;
    goto LAB_01ad7104;
  }
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    return -1;
  }
  BN_CTX_start(ctx);
  ret = BN_CTX_get(ctx);
  a = BN_CTX_get(ctx);
  iVar2 = BN_num_bits(*(BIGNUM **)(param_4 + 0x20));
  iVar1 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar1 = iVar2 + 7;
  }
  iVar1 = iVar1 >> 3;
  to = CRYPTO_malloc(iVar1,"rsa_eay.c",0x28a);
  if (((ret == (BIGNUM *)0x0) || (a == (BIGNUM *)0x0)) || (to == (uchar *)0x0)) {
    iVar2 = 0x41;
    line = 0x28c;
LAB_01ad7144:
    ERR_put_error(4,0x67,iVar2,"rsa_eay.c",line);
  }
  else {
    if (iVar1 < param_1) {
      iVar2 = 0x6c;
      line = 0x295;
      goto LAB_01ad7144;
    }
    pBVar3 = BN_bin2bn(param_2,param_1,ret);
    if (pBVar3 != (BIGNUM *)0x0) {
      iVar2 = BN_ucmp(ret,*(BIGNUM **)(param_4 + 0x20));
      if (-1 < iVar2) {
        iVar2 = 0x84;
        line = 0x29e;
        goto LAB_01ad7144;
      }
      if ((((*(byte *)(param_4 + 0x74) >> 1 & 1) == 0) ||
          (pBVar4 = BN_MONT_CTX_set_locked
                              ((BN_MONT_CTX **)(param_4 + 0x78),9,*(BIGNUM **)(param_4 + 0x20),ctx),
          pBVar4 != (BN_MONT_CTX *)0x0)) &&
         (iVar2 = (**(code **)(*(long *)(param_4 + 0x10) + 0x30))
                            (a,ret,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x20),
                             ctx,*(undefined8 *)(param_4 + 0x78)), iVar2 != 0)) {
        if (param_5 == 5) {
          if (((*a->d & 0xf) != 0xc) &&
             (iVar2 = BN_sub(a,*(BIGNUM **)(param_4 + 0x20),a), iVar2 == 0)) goto LAB_01ad7148;
          iVar2 = BN_bn2bin(a,to);
          iVar2 = RSA_padding_check_X931(param_3,iVar1,to,iVar2,iVar1);
        }
        else {
          iVar2 = BN_bn2bin(a,to);
          if (param_5 == 3) {
            iVar2 = RSA_padding_check_none(param_3,iVar1,to,iVar2,iVar1);
          }
          else {
            if (param_5 != 1) {
              iVar2 = 0x76;
              line = 0x2bd;
              goto LAB_01ad7144;
            }
            iVar2 = RSA_padding_check_PKCS1_type_1(param_3,iVar1,to,iVar2,iVar1);
          }
        }
        if (iVar2 < 0) {
          ERR_put_error(4,0x67,0x72,"rsa_eay.c",0x2c1);
        }
        goto LAB_01ad714c;
      }
    }
  }
LAB_01ad7148:
  iVar2 = -1;
LAB_01ad714c:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  if (to != (uchar *)0x0) {
    OPENSSL_cleanse(to,(long)iVar1);
    CRYPTO_free(to);
    return iVar2;
  }
  return iVar2;
}

