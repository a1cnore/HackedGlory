// functions/01aac — 2 functions
#include "libGameKindred.h"




BIGNUM * FUN_01aac1c0(BIGNUM *param_1,BIGNUM *param_2)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  uchar *to;
  EVP_MD *type;
  EVP_MD_CTX EStack_78;
  uchar auStack_44 [20];
  
  iVar2 = BN_num_bits(param_1);
  iVar1 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar1 = iVar2 + 7;
  }
  iVar2 = BN_ucmp(param_2,param_1);
  pBVar3 = (BIGNUM *)0x0;
  if (iVar2 < 0) {
    iVar1 = iVar1 >> 3;
    to = CRYPTO_malloc(iVar1,"srp_lib.c",0x5f);
    pBVar3 = (BIGNUM *)0x0;
    if (to != (uchar *)0x0) {
      BN_bn2bin(param_1,to);
      EVP_MD_CTX_init(&EStack_78);
      type = EVP_sha1();
      EVP_DigestInit_ex(&EStack_78,type,(ENGINE *)0x0);
      EVP_DigestUpdate(&EStack_78,to,(long)iVar1);
      memset(to,0,(long)iVar1);
      iVar2 = BN_bn2bin(param_2,to);
      EVP_DigestUpdate(&EStack_78,to + iVar2,(long)(iVar1 - iVar2));
      EVP_DigestUpdate(&EStack_78,to,(long)iVar2);
      CRYPTO_free(to);
      EVP_DigestFinal_ex(&EStack_78,auStack_44,(uint *)0x0);
      EVP_MD_CTX_cleanup(&EStack_78);
      pBVar3 = BN_bin2bn(auStack_44,0x14,(BIGNUM *)0x0);
    }
  }
  return pBVar3;
}




undefined8 FUN_01aacefc(_STACK *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  BIGNUM *pBVar5;
  uchar auStack_a04 [2500];
  
  if (param_1 != (_STACK *)0x0) {
    iVar1 = sk_num(param_1);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        puVar3 = sk_value(param_1,iVar1);
        iVar2 = strcmp((char *)*puVar3,param_2);
        if (iVar2 == 0) {
          return puVar3[1];
        }
        iVar1 = iVar1 + 1;
        iVar2 = sk_num(param_1);
      } while (iVar1 < iVar2);
    }
    puVar3 = CRYPTO_malloc(0x10,"srp_vfy.c",0x132);
    if (puVar3 != (undefined8 *)0x0) {
      pcVar4 = BUF_strdup(param_2);
      *puVar3 = pcVar4;
      if (pcVar4 != (char *)0x0) {
        iVar1 = FUN_01aad858(auStack_a04,param_2);
        pBVar5 = BN_bin2bn(auStack_a04,iVar1,(BIGNUM *)0x0);
        puVar3[1] = pBVar5;
        if (pBVar5 == (BIGNUM *)0x0) {
          CRYPTO_free((void *)*puVar3);
        }
        else {
          iVar1 = sk_insert(param_1,puVar3,0);
          if (0 < iVar1) {
            return puVar3[1];
          }
          CRYPTO_free((void *)*puVar3);
          BN_free((BIGNUM *)puVar3[1]);
        }
      }
      CRYPTO_free(puVar3);
    }
  }
  return 0;
}

