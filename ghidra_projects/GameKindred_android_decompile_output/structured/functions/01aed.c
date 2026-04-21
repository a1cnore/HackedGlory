// functions/01aed — 5 functions
#include "libGameKindred.h"




int PEM_write_bio_PKCS8PrivateKey_nid
              (BIO *bp,EVP_PKEY *x,int nid,char *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  
  iVar1 = FUN_01aede74((int)bp,x,0,nid,0,kstr,klen,cb,u);
  return iVar1;
}




int FUN_01aede74(BIO *param_1,EVP_PKEY *param_2,int param_3,int param_4,EVP_CIPHER *param_5,
                char *param_6,int param_7,code *param_8,void *param_9)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *a;
  X509_SIG *p8;
  char acStack_460 [1024];
  
  a = EVP_PKEY2PKCS8(param_2);
  if (a == (PKCS8_PRIV_KEY_INFO *)0x0) {
    ERR_put_error(9,0x7e,0x73,"pem_pk8.c",0x78);
    return 0;
  }
  if ((param_4 == -1) && (param_5 == (EVP_CIPHER *)0x0)) {
    if (param_3 == 0) {
      iVar1 = PEM_ASN1_write_bio(i2d_PKCS8_PRIV_KEY_INFO,"PRIVATE KEY",param_1,a,(EVP_CIPHER *)0x0,
                                 (uchar *)0x0,0,(undefined1 *)0x0,(void *)0x0);
    }
    else {
      iVar1 = i2d_PKCS8_PRIV_KEY_INFO_bio(param_1,a);
    }
    PKCS8_PRIV_KEY_INFO_free(a);
    return iVar1;
  }
  if (param_6 == (char *)0x0) {
    if (param_8 == (code *)0x0) {
      param_7 = PEM_def_callback(acStack_460,0x400,1,param_9);
    }
    else {
      param_7 = (*param_8)();
    }
    if (param_7 < 1) {
      ERR_put_error(9,0x7e,0x6f,"pem_pk8.c",0x82);
      PKCS8_PRIV_KEY_INFO_free(a);
      return 0;
    }
    p8 = PKCS8_encrypt(param_4,param_5,acStack_460,param_7,(uchar *)0x0,0,0,a);
  }
  else {
    p8 = PKCS8_encrypt(param_4,param_5,param_6,param_7,(uchar *)0x0,0,0,a);
    if (acStack_460 != param_6) {
      PKCS8_PRIV_KEY_INFO_free(a);
      goto joined_r0x01aedff8;
    }
  }
  OPENSSL_cleanse(acStack_460,(long)param_7);
  PKCS8_PRIV_KEY_INFO_free(a);
joined_r0x01aedff8:
  if (p8 == (X509_SIG *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
    iVar1 = PEM_ASN1_write_bio(i2d_X509_SIG,"ENCRYPTED PRIVATE KEY",param_1,p8,(EVP_CIPHER *)0x0,
                               (uchar *)0x0,0,(undefined1 *)0x0,(void *)0x0);
  }
  else {
    iVar1 = i2d_PKCS8_bio(param_1,p8);
  }
  X509_SIG_free(p8);
  return iVar1;
}




int PEM_write_bio_PKCS8PrivateKey
              (BIO *param_1,EVP_PKEY *param_2,EVP_CIPHER *param_3,char *param_4,int param_5,
              undefined1 *param_6,void *param_7)

{
  int iVar1;
  
  iVar1 = FUN_01aede74((int)param_1,param_2,0,0xffffffff,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}




int i2d_PKCS8PrivateKey_bio
              (BIO *bp,EVP_PKEY *x,EVP_CIPHER *enc,char *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  
  iVar1 = FUN_01aede74((int)bp,x,1,0xffffffff,enc,kstr,klen,cb,u);
  return iVar1;
}




int i2d_PKCS8PrivateKey_nid_bio
              (BIO *bp,EVP_PKEY *x,int nid,char *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  
  iVar1 = FUN_01aede74((int)bp,x,1,nid,0,kstr,klen,cb,u);
  return iVar1;
}

