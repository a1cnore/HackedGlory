// functions/01a27 — 2 functions
#include "libGameKindred.h"




undefined8 FUN_01a278a8(long param_1,long param_2,uchar *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *data;
  pitem *item;
  pitem *ppVar3;
  void *ptr;
  long lVar4;
  
  iVar1 = pqueue_size(*(pqueue *)(param_2 + 8));
  uVar2 = 0;
  if (iVar1 < 100) {
    data = CRYPTO_malloc(0x60,"d1_pkt.c",0xe6);
    item = pitem_new(param_3,data);
    if ((data == (undefined8 *)0x0) || (item == (pitem *)0x0)) {
      if (data != (undefined8 *)0x0) {
        CRYPTO_free(data);
      }
      if (item != (pitem *)0x0) {
        pitem_free(item);
      }
      ERR_put_error(0x14,0xf7,0x44,"d1_pkt.c",0xee);
    }
    else {
      *data = *(undefined8 *)(param_1 + 0x68);
      *(undefined4 *)(data + 1) = *(undefined4 *)(param_1 + 0x70);
      lVar4 = *(long *)(param_1 + 0x80);
      data[4] = *(undefined8 *)(lVar4 + 0x100);
      uVar2 = *(undefined8 *)(lVar4 + 0xf0);
      data[3] = *(undefined8 *)(lVar4 + 0xf8);
      data[2] = uVar2;
      lVar4 = *(long *)(param_1 + 0x80);
      data[0xb] = *(undefined8 *)(lVar4 + 0x150);
      uVar2 = *(undefined8 *)(lVar4 + 0x140);
      data[10] = *(undefined8 *)(lVar4 + 0x148);
      data[9] = uVar2;
      uVar2 = *(undefined8 *)(lVar4 + 0x130);
      data[8] = *(undefined8 *)(lVar4 + 0x138);
      data[7] = uVar2;
      uVar2 = *(undefined8 *)(lVar4 + 0x120);
      data[6] = *(undefined8 *)(lVar4 + 0x128);
      data[5] = uVar2;
      item->data = data;
      lVar4 = *(long *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(lVar4 + 0x100) = 0;
      *(undefined8 *)(lVar4 + 0xf8) = 0;
      *(undefined8 *)(lVar4 + 0xf0) = 0;
      lVar4 = *(long *)(param_1 + 0x80);
      *(undefined8 *)(lVar4 + 0x150) = 0;
      *(undefined8 *)(lVar4 + 0x128) = 0;
      *(undefined8 *)(lVar4 + 0x120) = 0;
      *(undefined8 *)(lVar4 + 0x138) = 0;
      *(undefined8 *)(lVar4 + 0x130) = 0;
      *(undefined8 *)(lVar4 + 0x148) = 0;
      *(undefined8 *)(lVar4 + 0x140) = 0;
      iVar1 = ssl3_setup_buffers(param_1);
      if (iVar1 == 0) {
        ERR_put_error(0x14,0xf7,0x44,"d1_pkt.c",0x109);
        ptr = (void *)data[2];
      }
      else {
        ppVar3 = pqueue_insert(*(pqueue *)(param_2 + 8),item);
        if (ppVar3 != (pitem *)0x0) {
          return 1;
        }
        ERR_put_error(0x14,0xf7,0x44,"d1_pkt.c",0x113);
        ptr = (void *)data[2];
      }
      if (ptr != (void *)0x0) {
        CRYPTO_free(ptr);
      }
      CRYPTO_free(data);
      pitem_free(item);
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}




undefined8 FUN_01a27a5c(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  EVP_MD *pEVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  undefined1 *b;
  long lVar10;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [64];
  
  b = auStack_c0;
  lVar10 = *(long *)(param_1 + 0x80);
  lVar9 = *(long *)(param_1 + 0x130);
  lVar1 = *(long *)(param_1 + 0x68) + 0xd;
  *(long *)(lVar10 + 0x138) = lVar1;
  if (*(uint *)(lVar10 + 0x124) < 0x4541) {
    *(long *)(lVar10 + 0x130) = lVar1;
    uVar7 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 8) + 200))(param_1,0);
    iVar4 = (int)uVar7;
    if (iVar4 != 0) {
      if (((lVar9 == 0) || (*(long *)(param_1 + 0xd0) == 0)) ||
         (pEVar5 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0xd8)), pEVar5 == (EVP_MD *)0x0)) {
LAB_01a27c38:
        if (-1 < iVar4) {
          if (*(long *)(param_1 + 0xe0) != 0) {
            if (0x4400 < *(uint *)(lVar10 + 0x124)) {
              iVar4 = 0x8c;
              iVar3 = 0x20e;
              goto LAB_01a27ab4;
            }
            iVar4 = ssl3_do_uncompress(param_1);
            if (iVar4 == 0) {
              ERR_put_error(0x14,0x101,0x6b,"d1_pkt.c",0x213);
              uVar7 = 0x1e;
              goto LAB_01a27abc;
            }
          }
          if (*(uint *)(lVar10 + 0x124) < 0x4001) {
            *(undefined4 *)(lVar10 + 0x128) = 0;
            *(undefined4 *)(param_1 + 0x70) = 0;
            return 1;
          }
          iVar4 = 0x92;
          iVar3 = 0x21a;
          goto LAB_01a27ab4;
        }
      }
      else {
        pEVar5 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0xd8));
        uVar2 = EVP_MD_size(pEVar5);
        if (0x40 < uVar2) {
                    /* WARNING: Subroutine does not return */
          OpenSSLDie("d1_pkt.c",0x1d0,"mac_size <= EVP_MAX_MD_SIZE");
        }
        uVar8 = *(int *)(lVar10 + 0x124) + (*(uint *)(lVar10 + 0x120) >> 8);
        if ((uVar8 < uVar2) ||
           ((uVar6 = EVP_CIPHER_CTX_flags(*(EVP_CIPHER_CTX **)(param_1 + 0xd0)), uVar8 < uVar2 + 1
            && ((uVar6 & 0xf0007) == 2)))) {
          ERR_put_error(0x14,0x101,0xa0,"d1_pkt.c",0x1e2);
          uVar7 = 0x32;
          goto LAB_01a27abc;
        }
        uVar6 = EVP_CIPHER_CTX_flags(*(EVP_CIPHER_CTX **)(param_1 + 0xd0));
        if ((uVar6 & 0xf0007) == 2) {
          ssl3_cbc_copy_mac(auStack_c0,lVar10 + 0x120,uVar2,uVar8);
          uVar8 = *(int *)(lVar10 + 0x124) - uVar2;
        }
        else {
          uVar8 = *(int *)(lVar10 + 0x124) - uVar2;
          b = (undefined1 *)(*(long *)(lVar10 + 0x130) + (ulong)uVar8);
        }
        *(uint *)(lVar10 + 0x124) = uVar8;
        iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 200) + 8))(param_1,auStack_80,0);
        if (((b == (undefined1 *)0x0) || (iVar3 < 0)) ||
           (iVar3 = CRYPTO_memcmp(auStack_80,b,(ulong)uVar2), iVar3 != 0)) {
          iVar4 = -1;
        }
        if (*(uint *)(lVar10 + 0x124) <= uVar2 + 0x4400) goto LAB_01a27c38;
      }
      uVar7 = 0;
    }
    *(undefined4 *)(lVar10 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    iVar4 = 0x96;
    iVar3 = 0x1ab;
LAB_01a27ab4:
    ERR_put_error(0x14,0x101,iVar4,"d1_pkt.c",iVar3);
    uVar7 = 0x16;
LAB_01a27abc:
    ssl3_send_alert(param_1,2,uVar7);
    uVar7 = 0;
  }
  return uVar7;
}

