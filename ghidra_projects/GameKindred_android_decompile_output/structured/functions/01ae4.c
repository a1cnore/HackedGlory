// functions/01ae4 — 5 functions
#include "libGameKindred.h"




uint FUN_01ae4040(BIO *param_1,void *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  
  if (param_2 == (void *)0x0) {
    return 0;
  }
  if (param_3 < 1) {
    return 0;
  }
  ctx = param_1->ptr;
  if (ctx == (EVP_MD_CTX *)0x0) {
    uVar1 = 0;
LAB_01ae40bc:
    if (param_1->next_bio != (bio_st *)0x0) {
      BIO_clear_flags(param_1,0xf);
      BIO_copy_next_retry(param_1);
    }
  }
  else {
    if (param_1->next_bio != (BIO *)0x0) {
      uVar1 = BIO_write(param_1->next_bio,param_2,param_3);
      if ((((int)uVar1 < 1) || (param_1->init == 0)) ||
         (iVar2 = EVP_DigestUpdate(ctx,param_2,(ulong)uVar1), iVar2 != 0)) goto LAB_01ae40bc;
      BIO_clear_flags(param_1,0xf);
    }
    uVar1 = 0;
  }
  return uVar1;
}




ulong FUN_01ae40ec(BIO *param_1,void *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulong cnt;
  EVP_MD_CTX *ctx;
  
  if (((param_2 == (void *)0x0) || (ctx = param_1->ptr, ctx == (EVP_MD_CTX *)0x0)) ||
     (param_1->next_bio == (BIO *)0x0)) {
    cnt = 0;
  }
  else {
    uVar1 = BIO_read(param_1->next_bio,param_2,param_3);
    cnt = (ulong)uVar1;
    if ((((int)uVar1 < 1) || (param_1->init == 0)) ||
       (iVar2 = EVP_DigestUpdate(ctx,param_2,cnt), 0 < iVar2)) {
      BIO_clear_flags(param_1,0xf);
      BIO_copy_next_retry(param_1);
    }
    else {
      cnt = 0xffffffff;
    }
  }
  return cnt;
}




int FUN_01ae44ec(BIO *param_1,uchar *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *outl;
  int len;
  
  outl = param_1->ptr;
  BIO_clear_flags(param_1,0xf);
  iVar1 = outl[1];
  iVar3 = *outl - iVar1;
  while( true ) {
    if (iVar3 < 1) {
      if (param_2 == (uchar *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = 0;
        if (0 < param_3) {
          outl[1] = 0;
          iVar1 = param_3;
          do {
            iVar3 = iVar1;
            if (0xfff < iVar1) {
              iVar3 = 0x1000;
            }
            EVP_CipherUpdate((EVP_CIPHER_CTX *)(outl + 6),(uchar *)(outl + 0x30),outl,param_2,iVar3)
            ;
            len = *outl;
            iVar1 = iVar1 - iVar3;
            outl[1] = 0;
            if (0 < len) {
              iVar2 = 0;
              do {
                iVar2 = BIO_write(param_1->next_bio,(void *)((long)outl + (long)iVar2 + 0xc0),len);
                if (iVar2 < 1) {
                  BIO_copy_next_retry(param_1);
                  if (iVar1 == param_3) {
                    return iVar2;
                  }
                  return param_3 - iVar1;
                }
                len = len - iVar2;
                iVar2 = outl[1] + iVar2;
                outl[1] = iVar2;
              } while (0 < len);
            }
            param_2 = param_2 + iVar3;
            outl[0] = 0;
            outl[1] = 0;
          } while (0 < iVar1);
          BIO_copy_next_retry(param_1);
          iVar1 = param_3;
        }
      }
      return iVar1;
    }
    iVar1 = BIO_write(param_1->next_bio,(void *)((long)outl + (long)iVar1 + 0xc0),iVar3);
    if (iVar1 < 1) break;
    iVar3 = iVar3 - iVar1;
    iVar1 = outl[1] + iVar1;
    outl[1] = iVar1;
  }
  BIO_copy_next_retry(param_1);
  return iVar1;
}




int FUN_01ae4664(BIO *param_1,void *param_2,int param_3)

{
  int *outm;
  int iVar1;
  int iVar2;
  int *outl;
  int iVar3;
  
  if (((param_2 == (void *)0x0) || (outl = param_1->ptr, outl == (int *)0x0)) ||
     (param_1->next_bio == (bio_st *)0x0)) {
    iVar1 = 0;
  }
  else {
    if (*outl < 1) {
      iVar1 = 0;
    }
    else {
      iVar3 = *outl - outl[1];
      iVar1 = param_3;
      if (iVar3 <= param_3) {
        iVar1 = iVar3;
      }
      memcpy(param_2,(void *)((long)outl + (long)outl[1] + 0xc0),(long)iVar1);
      iVar3 = outl[1];
      param_2 = (void *)((long)param_2 + (long)iVar1);
      param_3 = param_3 - iVar1;
      outl[1] = iVar1 + iVar3;
      if (*outl == iVar1 + iVar3) {
        outl[0] = 0;
        outl[1] = 0;
      }
    }
    if (0 < param_3) {
      outm = outl + 0x30;
      iVar3 = iVar1;
      do {
        iVar2 = outl[2];
        do {
          iVar1 = iVar3;
          if (iVar2 < 1) goto LAB_01ae4808;
          iVar1 = BIO_read(param_1->next_bio,outl + 0x40,0x1000);
          if (iVar1 < 1) {
            iVar2 = BIO_test_flags(param_1->next_bio,8);
            if (iVar2 != 0) {
              if (iVar3 != 0) {
                iVar1 = iVar3;
              }
              goto LAB_01ae4808;
            }
            outl[2] = iVar1;
            iVar2 = EVP_CipherFinal_ex((EVP_CIPHER_CTX *)(outl + 6),(uchar *)outm,outl);
            iVar1 = *outl;
            outl[4] = iVar2;
            outl[1] = 0;
            break;
          }
          EVP_CipherUpdate((EVP_CIPHER_CTX *)(outl + 6),(uchar *)outm,outl,(uchar *)(outl + 0x40),
                           iVar1);
          iVar1 = *outl;
          iVar2 = 1;
          outl[2] = 1;
        } while (iVar1 == 0);
        iVar2 = param_3;
        if (iVar1 <= param_3) {
          iVar2 = iVar1;
        }
        iVar1 = iVar3;
        if (iVar2 < 1) break;
        memcpy(param_2,outm,(long)iVar2);
        param_3 = param_3 - iVar2;
        iVar1 = iVar2 + iVar3;
        param_2 = (void *)((long)param_2 + (long)iVar2);
        outl[1] = iVar2;
        iVar3 = iVar1;
      } while (0 < param_3);
    }
LAB_01ae4808:
    BIO_clear_flags(param_1,0xf);
    BIO_copy_next_retry(param_1);
    if (iVar1 == 0) {
      iVar1 = outl[2];
    }
  }
  return iVar1;
}




void FUN_01ae4abc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = CRYPTO_malloc(0x1108,"bio_enc.c",0x73);
  if (puVar1 != (undefined8 *)0x0) {
    EVP_CIPHER_CTX_init((EVP_CIPHER_CTX *)(puVar1 + 3));
    *(undefined4 *)(puVar1 + 2) = 1;
    puVar1[1] = 1;
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 **)(param_1 + 0x30) = puVar1;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

