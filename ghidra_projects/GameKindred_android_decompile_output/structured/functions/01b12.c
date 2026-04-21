// functions/01b12 — 1 functions
#include "libGameKindred.h"




int FUN_01b12930(BIO *param_1,uchar *param_2,uint param_3)

{
  int *t;
  int iVar1;
  uint n;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  BIO *b;
  int *data;
  int *outl;
  
  outl = param_1->ptr;
  BIO_clear_flags(param_1,0xf);
  if (outl[4] == 1) {
    iVar4 = outl[1];
  }
  else {
    outl[0] = 0;
    outl[1] = 0;
    outl[2] = 0;
    outl[4] = 1;
    EVP_EncodeInit((EVP_ENCODE_CTX *)(outl + 7));
    iVar4 = outl[1];
  }
  if (0x5dd < iVar4) {
                    /* WARNING: Subroutine does not return */
    OpenSSLDie("bio_b64.c",0x17a,"ctx->buf_off < (int)sizeof(ctx->buf)");
  }
  iVar4 = *outl;
  if (0x5de < iVar4) {
                    /* WARNING: Subroutine does not return */
    OpenSSLDie("bio_b64.c",0x17b,"ctx->buf_len <= (int)sizeof(ctx->buf)");
  }
  iVar2 = outl[1];
  if (iVar4 < iVar2) {
                    /* WARNING: Subroutine does not return */
    OpenSSLDie("bio_b64.c",0x17c,"ctx->buf_len >= ctx->buf_off");
  }
  iVar4 = iVar4 - iVar2;
  if (iVar4 < 1) {
LAB_01b12b2c:
    outl[0] = 0;
    outl[1] = 0;
    if (param_2 == (uchar *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
      if (0 < (int)param_3) {
        t = outl + 0x1f;
        iVar2 = 0;
        do {
          n = param_3;
          if (0x3ff < (int)param_3) {
            n = 0x400;
          }
          uVar3 = BIO_test_flags(param_1,-1);
          if ((uVar3 >> 8 & 1) == 0) {
            EVP_EncodeUpdate((EVP_ENCODE_CTX *)(outl + 7),(uchar *)t,outl,param_2,n);
            if (0x5de < *outl) {
                    /* WARNING: Subroutine does not return */
              OpenSSLDie("bio_b64.c",0x1bf,"ctx->buf_len <= (int)sizeof(ctx->buf)");
            }
            if (*outl < outl[1]) {
              iVar4 = 0x1c0;
LAB_01b12d0c:
                    /* WARNING: Subroutine does not return */
              OpenSSLDie("bio_b64.c",iVar4,"ctx->buf_len >= ctx->buf_off");
            }
LAB_01b12d18:
            iVar2 = n + iVar2;
            iVar4 = *outl;
            outl[1] = 0;
          }
          else {
            iVar4 = outl[2];
            if (iVar4 < 1) {
              if ((int)n < 3) {
                memcpy((uchar *)((long)outl + 0x65a),param_2,(long)(int)n);
                outl[2] = n;
                return n + iVar2;
              }
              n = n - (n & 0xffff) % 3;
              iVar4 = EVP_EncodeBlock((uchar *)t,param_2,n);
              *outl = iVar4;
              if (0x5de < iVar4) {
                    /* WARNING: Subroutine does not return */
                OpenSSLDie("bio_b64.c",0x1b7,"ctx->buf_len <= (int)sizeof(ctx->buf)");
              }
              if (iVar4 < outl[1]) {
                iVar4 = 0x1b8;
                goto LAB_01b12d0c;
              }
              goto LAB_01b12d18;
            }
            if (3 < iVar4) {
                    /* WARNING: Subroutine does not return */
              OpenSSLDie("bio_b64.c",0x196,"ctx->tmp_len <= 3");
            }
            n = param_3;
            if ((int)(3U - iVar4) <= (int)param_3) {
              n = 3U - iVar4;
            }
            memcpy((void *)((long)outl + (long)iVar4 + 0x65a),param_2,(long)(int)n);
            iVar2 = n + iVar2;
            iVar4 = n + outl[2];
            outl[2] = iVar4;
            if (iVar4 < 3) {
              return iVar2;
            }
            iVar4 = EVP_EncodeBlock((uchar *)t,(uchar *)((long)outl + 0x65a),iVar4);
            *outl = iVar4;
            if (0x5de < iVar4) {
                    /* WARNING: Subroutine does not return */
              OpenSSLDie("bio_b64.c",0x1a5,"ctx->buf_len <= (int)sizeof(ctx->buf)");
            }
            if (iVar4 < outl[1]) {
                    /* WARNING: Subroutine does not return */
              OpenSSLDie("bio_b64.c",0x1a6,"ctx->buf_len >= ctx->buf_off");
            }
            outl[2] = 0;
            iVar4 = *outl;
            outl[1] = 0;
          }
          if (0 < iVar4) {
            b = param_1->next_bio;
            data = t;
            while( true ) {
              iVar5 = BIO_write(b,data,iVar4);
              if (iVar5 < 1) {
                BIO_copy_next_retry(param_1);
                if (iVar2 == 0) {
                  return iVar5;
                }
                return iVar2;
              }
              if (iVar4 < iVar5) {
                    /* WARNING: Subroutine does not return */
                OpenSSLDie("bio_b64.c",0x1ce,"i <= n");
              }
              iVar1 = outl[1] + iVar5;
              outl[1] = iVar1;
              if (0x5de < iVar1) {
                    /* WARNING: Subroutine does not return */
                OpenSSLDie("bio_b64.c",0x1d1,"ctx->buf_off <= (int)sizeof(ctx->buf)");
              }
              if (*outl < iVar1) {
                    /* WARNING: Subroutine does not return */
                OpenSSLDie("bio_b64.c",0x1d2,"ctx->buf_len >= ctx->buf_off");
              }
              if (iVar4 - iVar5 < 1) break;
              b = param_1->next_bio;
              data = (int *)((long)outl + (long)outl[1] + 0x7c);
              iVar4 = iVar4 - iVar5;
            }
          }
          param_3 = param_3 - n;
          param_2 = param_2 + (int)n;
          outl[0] = 0;
          outl[1] = 0;
        } while (0 < (int)param_3);
      }
    }
  }
  else {
    iVar2 = BIO_write(param_1->next_bio,(void *)((long)outl + (long)iVar2 + 0x7c),iVar4);
    while (0 < iVar2) {
      iVar5 = iVar4 - iVar2;
      if (iVar4 < iVar2) {
                    /* WARNING: Subroutine does not return */
        OpenSSLDie("bio_b64.c",0x184,"i <= n");
      }
      iVar2 = outl[1] + iVar2;
      outl[1] = iVar2;
      if (0x5de < iVar2) {
                    /* WARNING: Subroutine does not return */
        OpenSSLDie("bio_b64.c",0x186,"ctx->buf_off <= (int)sizeof(ctx->buf)");
      }
      if (*outl < iVar2) {
                    /* WARNING: Subroutine does not return */
        OpenSSLDie("bio_b64.c",0x187,"ctx->buf_len >= ctx->buf_off");
      }
      if (iVar5 < 1) goto LAB_01b12b2c;
      iVar2 = BIO_write(param_1->next_bio,(void *)((long)outl + (long)outl[1] + 0x7c),iVar5);
      iVar4 = iVar5;
    }
    BIO_copy_next_retry(param_1);
  }
  return iVar2;
}

