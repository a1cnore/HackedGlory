// functions/01aa2 — 2 functions
#include "libGameKindred.h"




undefined8 FUN_01aa2724(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  char *name;
  EVP_MD *parg;
  BIO *pBVar2;
  int line;
  
  type = BIO_f_md();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_put_error(0x21,0x7d,0x20,"pk7_doit.c",0x6d);
  }
  else {
    iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_2);
    name = OBJ_nid2sn(iVar1);
    parg = EVP_get_digestbyname(name);
    if (parg == (EVP_MD *)0x0) {
      iVar1 = 0x6d;
      line = 0x73;
    }
    else {
      BIO_ctrl(bp,0x6f,0,parg);
      if ((BIO *)*param_1 == (BIO *)0x0) {
        *param_1 = bp;
        return 1;
      }
      pBVar2 = BIO_push((BIO *)*param_1,bp);
      if (pBVar2 != (BIO *)0x0) {
        return 1;
      }
      iVar1 = 0x20;
      line = 0x7b;
    }
    ERR_put_error(0x21,0x7d,iVar1,"pk7_doit.c",line);
    BIO_free(bp);
  }
  return 0;
}




int FUN_01aa2f48(undefined8 *param_1,int *param_2,void *param_3,EVP_PKEY *param_4)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  uchar *out;
  int local_38 [2];
  
  ctx = EVP_PKEY_CTX_new(param_4,(ENGINE *)0x0);
  if (ctx != (EVP_PKEY_CTX *)0x0) {
    iVar1 = EVP_PKEY_decrypt_init(ctx);
    if (0 < iVar1) {
      iVar1 = EVP_PKEY_CTX_ctrl(ctx,-1,0x200,4,0,param_3);
      if (iVar1 < 1) {
        ERR_put_error(0x21,0x85,0x98,"pk7_doit.c",0xd3);
      }
      else {
        iVar1 = EVP_PKEY_decrypt(ctx,(uchar *)0x0,(size_t *)local_38,
                                 *(uchar **)(*(int **)((long)param_3 + 0x18) + 2),
                                 (long)**(int **)((long)param_3 + 0x18));
        if (0 < iVar1) {
          out = CRYPTO_malloc(local_38[0],"pk7_doit.c",0xdb);
          if (out == (uchar *)0x0) {
            ERR_put_error(0x21,0x85,0x41,"pk7_doit.c",0xde);
            EVP_PKEY_CTX_free(ctx);
            return -1;
          }
          iVar1 = EVP_PKEY_decrypt(ctx,out,(size_t *)local_38,
                                   *(uchar **)(*(int **)((long)param_3 + 0x18) + 2),
                                   (long)**(int **)((long)param_3 + 0x18));
          if (iVar1 < 1) {
            ERR_put_error(0x21,0x85,6,"pk7_doit.c",0xe5);
            iVar1 = 0;
            EVP_PKEY_CTX_free(ctx);
          }
          else {
            if ((void *)*param_1 != (void *)0x0) {
              OPENSSL_cleanse((void *)*param_1,(long)*param_2);
              CRYPTO_free((void *)*param_1);
            }
            *param_1 = out;
            *param_2 = local_38[0];
            iVar1 = 1;
            EVP_PKEY_CTX_free(ctx);
          }
          if (out != (uchar *)0x0) {
            if (iVar1 == 0) {
              CRYPTO_free(out);
              return 0;
            }
            return iVar1;
          }
          return iVar1;
        }
      }
    }
    EVP_PKEY_CTX_free(ctx);
  }
  return -1;
}

