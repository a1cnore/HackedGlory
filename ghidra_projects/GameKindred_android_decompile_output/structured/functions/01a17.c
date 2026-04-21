// functions/01a17 — 1 functions
#include "libGameKindred.h"




/* WARNING: Type propagation algorithm not settling */

ulong FUN_01a172c0(long param_1,int param_2,void *param_3,int param_4,uchar *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  EVP_MD_CTX *pEVar5;
  EVP_MD *pEVar6;
  long lVar7;
  EVP_MD_CTX EStack_b0;
  uchar auStack_80 [64];
  uint local_38;
  uint local_34;
  
  if ((*(long *)(*(long *)(param_1 + 0x80) + 0x1b8) != 0) &&
     (uVar4 = ssl3_digest_cached_records(param_1), (int)uVar4 == 0)) {
    return uVar4;
  }
  local_38 = 0;
  pEVar5 = (EVP_MD_CTX *)**(undefined8 **)(*(long *)(param_1 + 0x80) + 0x1c0);
  if (pEVar5 == (EVP_MD_CTX *)0x0) {
LAB_01a1732c:
    local_38 = 1;
    pEVar5 = *(EVP_MD_CTX **)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + 8);
    if (pEVar5 != (EVP_MD_CTX *)0x0) {
      pEVar6 = EVP_MD_CTX_md(pEVar5);
      iVar2 = EVP_MD_type(pEVar6);
      if (iVar2 == param_2) {
        lVar7 = 1;
        goto LAB_01a17358;
      }
    }
    local_38 = 2;
    pEVar5 = *(EVP_MD_CTX **)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + 0x10);
    if (pEVar5 != (EVP_MD_CTX *)0x0) {
      pEVar6 = EVP_MD_CTX_md(pEVar5);
      iVar2 = EVP_MD_type(pEVar6);
      if (iVar2 == param_2) {
        pEVar5 = *(EVP_MD_CTX **)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + 0x10);
        goto joined_r0x01a17548;
      }
    }
    local_38 = 3;
    pEVar5 = *(EVP_MD_CTX **)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + 0x18);
    if (pEVar5 != (EVP_MD_CTX *)0x0) {
      pEVar6 = EVP_MD_CTX_md(pEVar5);
      iVar2 = EVP_MD_type(pEVar6);
      if (iVar2 == param_2) {
        pEVar5 = *(EVP_MD_CTX **)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + 0x18);
        goto joined_r0x01a17548;
      }
    }
    local_38 = 4;
    pEVar5 = *(EVP_MD_CTX **)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + 0x20);
    if (pEVar5 != (EVP_MD_CTX *)0x0) {
      pEVar6 = EVP_MD_CTX_md(pEVar5);
      iVar2 = EVP_MD_type(pEVar6);
      if (iVar2 == param_2) {
        pEVar5 = *(EVP_MD_CTX **)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + 0x20);
        goto joined_r0x01a17548;
      }
    }
    local_38 = 5;
    pEVar5 = *(EVP_MD_CTX **)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + 0x28);
    if (pEVar5 != (EVP_MD_CTX *)0x0) {
      pEVar6 = EVP_MD_CTX_md(pEVar5);
      iVar2 = EVP_MD_type(pEVar6);
      if (iVar2 == param_2) {
        pEVar5 = *(EVP_MD_CTX **)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + 0x28);
        goto joined_r0x01a17548;
      }
    }
    local_38 = 6;
LAB_01a175d8:
    ERR_put_error(0x14,0x11d,0x144,"s3_enc.c",0x2b1);
    return 0;
  }
  pEVar6 = EVP_MD_CTX_md(pEVar5);
  iVar2 = EVP_MD_type(pEVar6);
  lVar7 = 0;
  if (iVar2 != param_2) goto LAB_01a1732c;
LAB_01a17358:
  pEVar5 = *(EVP_MD_CTX **)(*(long *)(*(long *)(param_1 + 0x80) + 0x1c0) + lVar7 * 8);
joined_r0x01a17548:
  if (pEVar5 == (EVP_MD_CTX *)0x0) goto LAB_01a175d8;
  EVP_MD_CTX_init(&EStack_b0);
  EVP_MD_CTX_set_flags(&EStack_b0,8);
  EVP_MD_CTX_copy_ex(&EStack_b0,pEVar5);
  pEVar6 = EVP_MD_CTX_md(&EStack_b0);
  uVar3 = EVP_MD_size(pEVar6);
  if ((int)uVar3 < 0) {
    return 0;
  }
  if (((param_3 == (void *)0x0) ||
      (iVar2 = EVP_DigestUpdate(&EStack_b0,param_3,(long)param_4), 0 < iVar2)) &&
     (iVar2 = EVP_DigestUpdate(&EStack_b0,(void *)(*(long *)(param_1 + 0x130) + 0x14),
                               (long)*(int *)(*(long *)(param_1 + 0x130) + 0x10)), 0 < iVar2)) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = 0x30 / uVar3;
    }
    iVar2 = EVP_DigestUpdate(&EStack_b0,&DAT_02bfa160,(long)(int)(uVar1 * uVar3));
    if ((0 < iVar2) && (iVar2 = EVP_DigestFinal_ex(&EStack_b0,auStack_80,&local_38), 0 < iVar2)) {
      pEVar6 = EVP_MD_CTX_md(&EStack_b0);
      iVar2 = EVP_DigestInit_ex(&EStack_b0,pEVar6,(ENGINE *)0x0);
      if ((((0 < iVar2) &&
           ((iVar2 = EVP_DigestUpdate(&EStack_b0,(void *)(*(long *)(param_1 + 0x130) + 0x14),
                                      (long)*(int *)(*(long *)(param_1 + 0x130) + 0x10)), 0 < iVar2
            && (iVar2 = EVP_DigestUpdate(&EStack_b0,&DAT_02bfa190,(long)(int)(uVar1 * uVar3)),
               0 < iVar2)))) &&
          (iVar2 = EVP_DigestUpdate(&EStack_b0,auStack_80,(ulong)local_38), 0 < iVar2)) &&
         (iVar2 = EVP_DigestFinal_ex(&EStack_b0,param_5,&local_34), 0 < iVar2)) goto LAB_01a174c0;
    }
  }
  ERR_put_error(0x14,0x11d,0x44,"s3_enc.c",0x2c8);
  local_34 = 0;
LAB_01a174c0:
  EVP_MD_CTX_cleanup(&EStack_b0);
  return (ulong)local_34;
}

