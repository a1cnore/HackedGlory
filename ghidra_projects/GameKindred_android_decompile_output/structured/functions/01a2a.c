// functions/01a2a — 4 functions
#include "libGameKindred.h"




void * FUN_01a2a2c8(long param_1,int param_2)

{
  void *ptr;
  void *ptr_00;
  void *__s;
  ulong __n;
  
  ptr = CRYPTO_malloc(0x68,"d1_both.c",0xb5);
  if (ptr == (void *)0x0) {
    return (void *)0x0;
  }
  if (param_1 == 0) {
    ptr_00 = (void *)0x0;
    *(undefined8 *)((long)ptr + 0x58) = 0;
    if (param_2 != 0) goto LAB_01a2a324;
LAB_01a2a364:
    __s = (void *)0x0;
LAB_01a2a368:
    *(void **)((long)ptr + 0x60) = __s;
  }
  else {
    ptr_00 = CRYPTO_malloc((int)param_1,"d1_both.c",0xba);
    if (ptr_00 != (void *)0x0) {
      *(void **)((long)ptr + 0x58) = ptr_00;
      if (param_2 == 0) goto LAB_01a2a364;
LAB_01a2a324:
      __n = param_1 + 7U >> 3;
      __s = CRYPTO_malloc((int)__n,"d1_both.c",199);
      if (__s != (void *)0x0) {
        memset(__s,0,__n);
        goto LAB_01a2a368;
      }
      if (ptr_00 != (void *)0x0) {
        CRYPTO_free(ptr_00);
      }
    }
    CRYPTO_free(ptr);
    ptr = (void *)0x0;
  }
  return ptr;
}




/* WARNING: Type propagation algorithm not settling */

int FUN_01a2a86c(long param_1,void *param_2,undefined4 *param_3)

{
  int iVar1;
  pitem *ppVar2;
  void *ptr;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  void *__dest;
  undefined4 uVar8;
  undefined1 auStack_158 [256];
  long local_58;
  
  uVar5 = *(ulong *)((long)param_2 + 0x20);
  if (*(long *)((long)param_2 + 0x18) + uVar5 <= *(ulong *)((long)param_2 + 8)) {
    uVar6 = *(ulong *)(param_1 + 0x1b8);
    if (uVar6 < 0x454d) {
      uVar6 = 0x454c;
    }
    if (*(ulong *)((long)param_2 + 8) <= uVar6) {
      if (uVar5 == 0) {
        return -3;
      }
      local_58 = (ulong)CONCAT11((char)*(undefined2 *)((long)param_2 + 0x10),
                                 (char)((ushort)*(undefined2 *)((long)param_2 + 0x10) >> 8)) << 0x30
      ;
      ppVar2 = pqueue_find(*(pqueue *)(*(long *)(param_1 + 0x88) + 0x260),(uchar *)&local_58);
      if (ppVar2 == (pitem *)0x0) {
        __dest = (void *)FUN_01a2a2c8(*(undefined8 *)((long)param_2 + 8),1);
        if (__dest != (void *)0x0) {
          memcpy(__dest,param_2,0x58);
          *(undefined8 *)((long)__dest + 0x18) = 0;
          *(undefined8 *)((long)__dest + 0x20) = *(undefined8 *)((long)__dest + 8);
          lVar4 = *(long *)((long)__dest + 0x60);
          goto joined_r0x01a2a9e8;
        }
      }
      else {
        __dest = ppVar2->data;
        if (*(long *)((long)__dest + 8) == *(long *)((long)param_2 + 8)) {
          lVar4 = *(long *)((long)__dest + 0x60);
joined_r0x01a2a9e8:
          if (lVar4 == 0) {
            while( true ) {
              uVar8 = (undefined4)uVar5;
              if (0xff < uVar5) {
                uVar8 = 0x100;
              }
              iVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x68))(param_1,0x16,auStack_158,uVar8,0)
              ;
              if (iVar1 < 1) break;
              uVar5 = uVar5 - (long)iVar1;
              if (uVar5 == 0) {
                return -3;
              }
            }
          }
          else {
            iVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x68))
                              (param_1,0x16,
                               *(long *)((long)__dest + 0x58) + *(long *)((long)param_2 + 0x18),
                               uVar5 & 0xffffffff,0);
            if (uVar5 != (long)iVar1) {
              iVar1 = -1;
            }
            if (0 < iVar1) {
              uVar6 = *(ulong *)((long)param_2 + 0x18);
              if ((long)uVar5 < 9) {
                if ((long)uVar6 < (long)(uVar6 + uVar5)) {
                  do {
                    lVar4 = (long)uVar6 >> 3;
                    uVar3 = (uint)uVar6;
                    uVar6 = uVar6 + 1;
                    *(byte *)(*(long *)((long)__dest + 0x60) + lVar4) =
                         *(byte *)(*(long *)((long)__dest + 0x60) + lVar4) |
                         (byte)(1 << (ulong)(uVar3 & 7));
                  } while ((long)uVar6 < (long)(*(long *)((long)param_2 + 0x18) + uVar5));
                }
              }
              else {
                *(byte *)(*(long *)((long)__dest + 0x60) + ((long)uVar6 >> 3)) =
                     *(byte *)(*(long *)((long)__dest + 0x60) + ((long)uVar6 >> 3)) |
                     (&DAT_01e2f918)[uVar6 & 7];
                uVar6 = *(long *)((long)param_2 + 0x18) + uVar5;
                lVar4 = (*(long *)((long)param_2 + 0x18) >> 3) + 1;
                lVar7 = (long)(uVar6 - 1) >> 3;
                if (lVar4 < lVar7) {
                  do {
                    *(undefined1 *)(*(long *)((long)__dest + 0x60) + lVar4) = 0xff;
                    lVar4 = lVar4 + 1;
                    uVar6 = *(long *)((long)param_2 + 0x18) + uVar5;
                    lVar7 = (long)(uVar6 - 1) >> 3;
                  } while (lVar4 < lVar7);
                }
                *(byte *)(*(long *)((long)__dest + 0x60) + lVar7) =
                     *(byte *)(*(long *)((long)__dest + 0x60) + lVar7) | (&DAT_01e2f920)[uVar6 & 7];
              }
              uVar5 = *(ulong *)((long)param_2 + 8);
              if ((long)uVar5 < 1) {
                    /* WARNING: Subroutine does not return */
                OpenSSLDie("d1_both.c",0x2ea,"((long)msg_hdr->msg_len) > 0");
              }
              ptr = *(void **)((long)__dest + 0x60);
              lVar4 = (long)(uVar5 - 1) >> 3;
              if (*(char *)((long)ptr + lVar4) == (&DAT_01e2f920)[uVar5 & 7]) {
                do {
                  if (lVar4 < 1) {
                    CRYPTO_free(ptr);
                    *(undefined8 *)((long)__dest + 0x60) = 0;
                    break;
                  }
                  lVar7 = lVar4 + -1;
                  lVar4 = lVar4 + -1;
                } while (*(char *)((long)ptr + lVar7) == -1);
              }
              if (ppVar2 != (pitem *)0x0) {
                return -3;
              }
              ppVar2 = pitem_new((uchar *)&local_58,__dest);
              if (ppVar2 != (pitem *)0x0) {
                ppVar2 = pqueue_insert(*(pqueue *)(*(long *)(param_1 + 0x88) + 0x260),ppVar2);
                if (ppVar2 != (pitem *)0x0) {
                  return -3;
                }
                    /* WARNING: Subroutine does not return */
                OpenSSLDie("d1_both.c",0x2ff,"item != NULL");
              }
              ppVar2 = (pitem *)0x0;
              iVar1 = -1;
            }
          }
          if ((__dest != (void *)0x0) && (ppVar2 == (pitem *)0x0)) {
            if (*(int *)((long)__dest + 0x28) != 0) {
              EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)((long)__dest + 0x30));
              EVP_MD_CTX_destroy(*(EVP_MD_CTX **)((long)__dest + 0x38));
            }
            if (*(void **)((long)__dest + 0x58) != (void *)0x0) {
              CRYPTO_free(*(void **)((long)__dest + 0x58));
            }
            if (*(void **)((long)__dest + 0x60) != (void *)0x0) {
              CRYPTO_free(*(void **)((long)__dest + 0x60));
            }
            CRYPTO_free(__dest);
          }
          goto LAB_01a2a8c0;
        }
      }
    }
  }
  iVar1 = -1;
LAB_01a2a8c0:
  *param_3 = 0;
  return iVar1;
}




undefined8 FUN_01a2abc8(long param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_2 + 8);
  if (uVar5 < (ulong)(*(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x18))) {
    iVar2 = 0x23b;
  }
  else if ((ulong)(long)param_3 < (ulong)(*(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x18))) {
    iVar2 = 0x240;
  }
  else {
    if (*(long *)(*(long *)(param_1 + 0x88) + 0x300) == 0) {
      iVar2 = BUF_MEM_grow_clean(*(BUF_MEM **)(param_1 + 0x50),uVar5 + 0xc);
      if (iVar2 == 0) {
        ERR_put_error(0x14,0x120,7,"d1_both.c",0x24b);
        return 0x50;
      }
      lVar3 = *(long *)(param_1 + 0x80);
      *(ulong *)(lVar3 + 0x398) = uVar5;
      lVar4 = *(long *)(param_1 + 0x88);
      *(ulong *)(lVar4 + 0x2f0) = uVar5;
      bVar1 = *param_2;
      *(uint *)(lVar3 + 0x3a0) = (uint)bVar1;
      *(byte *)(lVar4 + 0x2e8) = bVar1;
      *(undefined2 *)(lVar4 + 0x2f8) = *(undefined2 *)(param_2 + 0x10);
      return 0;
    }
    if (uVar5 == *(ulong *)(*(long *)(param_1 + 0x88) + 0x2f0)) {
      return 0;
    }
    iVar2 = 0x259;
  }
  ERR_put_error(0x14,0x120,0x98,"d1_both.c",iVar2);
  return 0x2f;
}




undefined8 FUN_01a2ad08(char *param_1,undefined8 *param_2)

{
  int iVar1;
  _STACK *st;
  char *pcVar2;
  size_t sVar3;
  undefined8 uVar4;
  int line;
  ulong uVar5;
  undefined **data;
  char *__s;
  
  st = sk_new_null();
  if (st == (_STACK *)0x0) {
    ERR_put_error(0x14,0x135,0x16a,"d1_srtp.c",0xb0);
LAB_01a2ae28:
    uVar4 = 1;
  }
  else {
    do {
      pcVar2 = strchr(param_1,0x3a);
      if (pcVar2 == (char *)0x0) {
        sVar3 = strlen(param_1);
        uVar5 = (ulong)(int)sVar3;
        if (PTR_s_SRTP_AES128_CM_SHA1_80_02bfa498 != (undefined *)0x0) goto LAB_01a2ad7c;
LAB_01a2ade4:
        iVar1 = 0x16c;
        line = 0xc3;
LAB_01a2adfc:
        ERR_put_error(0x14,0x135,iVar1,"d1_srtp.c",line);
        sk_free(st);
        goto LAB_01a2ae28;
      }
      uVar5 = (long)pcVar2 - (long)param_1;
      if (PTR_s_SRTP_AES128_CM_SHA1_80_02bfa498 == (undefined *)0x0) goto LAB_01a2ade4;
LAB_01a2ad7c:
      data = &PTR_s_SRTP_AES128_CM_SHA1_80_02bfa498;
      __s = PTR_s_SRTP_AES128_CM_SHA1_80_02bfa498;
      while ((sVar3 = strlen(__s), sVar3 != (uVar5 & 0xffffffff) ||
             (iVar1 = strncmp(__s,param_1,uVar5 & 0xffffffff), iVar1 != 0))) {
        data = data + 2;
        __s = *data;
        if (__s == (char *)0x0) goto LAB_01a2ade4;
      }
      iVar1 = sk_find(st,data);
      if (-1 < iVar1) {
        iVar1 = 0x161;
        line = 0xbb;
        goto LAB_01a2adfc;
      }
      sk_push(st,data);
      param_1 = pcVar2 + 1;
    } while (pcVar2 != (char *)0x0);
    uVar4 = 0;
    *param_2 = st;
  }
  return uVar4;
}

