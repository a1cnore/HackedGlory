// functions/01a18 — 1 functions
#include "libGameKindred.h"




ulong FUN_01a18618(uint *param_1,int param_2,void *param_3,uint param_4,int param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  EVP_MD *pEVar6;
  undefined1 uVar7;
  int *piVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  int local_70;
  int local_6c;
  
  lVar11 = *(long *)(param_1 + 0x20);
  if (*(int *)(lVar11 + 0x11c) != 0) goto LAB_01a18654;
  if ((*(int *)(lVar11 + 0x1d4) != 0) &&
     (uVar5 = (**(code **)(*(long *)(param_1 + 2) + 0x78))(param_1), (int)uVar5 < 1)) {
    return uVar5;
  }
  if ((*(long *)(lVar11 + 0x108) == 0) && (iVar3 = ssl3_setup_write_buffer(param_1), iVar3 == 0)) {
    return 0xffffffff;
  }
  if (param_5 == 0 && param_4 == 0) {
    return 0;
  }
  lVar12 = *(long *)(param_1 + 0x20);
  if (((*(long *)(param_1 + 0x4c) == 0) || (*(long *)(param_1 + 0x3a) == 0)) ||
     (pEVar6 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0x3c)), pEVar6 == (EVP_MD *)0x0)) {
    local_70 = 0;
    local_6c = 0;
    if (*(long *)(param_1 + 0x3a) != 0 && param_5 == 0) goto LAB_01a18728;
LAB_01a187bc:
    if (param_5 == 0) {
      lVar9 = *(long *)(lVar11 + 0x108);
      if (local_6c == 0) {
        iVar3 = 3;
        goto LAB_01a187c8;
      }
      puVar10 = (undefined1 *)(lVar9 + *(int *)(lVar11 + 0x118) + (long)local_6c);
    }
    else {
      lVar9 = *(long *)(lVar11 + 0x108);
      iVar3 = 6;
LAB_01a187c8:
      uVar5 = (ulong)(uint)(iVar3 - (int)lVar9) & 7;
      puVar10 = (undefined1 *)(lVar9 + uVar5);
      *(int *)(lVar11 + 0x118) = (int)uVar5;
    }
    *puVar10 = (char)param_2;
    *(int *)(lVar12 + 0x158) = param_2;
    puVar10[1] = (char)(*param_1 >> 8);
    if (((param_1[0x12] == 0x1111) && (param_1[0xa9] == 0)) &&
       ((0x301 < (int)*param_1 && ((*param_1 & 0xffffff00) == 0x300)))) {
      uVar7 = 1;
    }
    else {
      uVar7 = (undefined1)*param_1;
    }
    puVar10[2] = uVar7;
    puVar1 = puVar10 + 5;
    if (*(EVP_CIPHER_CTX **)(param_1 + 0x3a) == (EVP_CIPHER_CTX *)0x0) {
LAB_01a18888:
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x70) & 1) != 0) {
        uVar5 = EVP_CIPHER_CTX_flags(*(EVP_CIPHER_CTX **)(param_1 + 0x3a));
        uVar2 = (uint)uVar5 & 0xf0007;
        if (uVar2 == 6) {
          iVar3 = 8;
        }
        else {
          if (uVar2 != 2) goto LAB_01a18888;
          iVar4 = EVP_CIPHER_CTX_iv_length(*(EVP_CIPHER_CTX **)(param_1 + 0x3a));
          iVar3 = 0;
          if (1 < iVar4) {
            iVar3 = iVar4;
          }
        }
      }
    }
    *(uint *)(lVar12 + 0x15c) = param_4;
    *(undefined1 **)(lVar12 + 0x168) = puVar1 + iVar3;
    *(void **)(lVar12 + 0x170) = param_3;
    if (*(COMP_CTX **)(param_1 + 0x3e) == (COMP_CTX *)0x0) {
      memcpy(puVar1 + iVar3,param_3,(ulong)param_4);
      *(long *)(lVar12 + 0x170) = *(long *)(lVar12 + 0x168);
    }
    else {
      lVar9 = *(long *)(param_1 + 0x20);
      iVar4 = COMP_compress_block(*(COMP_CTX **)(param_1 + 0x3e),*(uchar **)(lVar9 + 0x168),0x4400,
                                  *(uchar **)(lVar9 + 0x170),*(int *)(lVar9 + 0x15c));
      if (iVar4 < 0) {
        iVar3 = 0x8d;
        iVar4 = 0x3f4;
        goto LAB_01a18a1c;
      }
      *(int *)(lVar9 + 0x15c) = iVar4;
      *(undefined8 *)(lVar9 + 0x170) = *(undefined8 *)(lVar9 + 0x168);
    }
    if (local_70 != 0) {
      iVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 8))
                        (param_1,puVar1 + (uint)(*(int *)(lVar12 + 0x15c) + iVar3),1);
      if (iVar4 < 0) {
        return 0xffffffff;
      }
      *(int *)(lVar12 + 0x15c) = *(int *)(lVar12 + 0x15c) + local_70;
    }
    *(long *)(lVar12 + 0x170) = (long)puVar1;
    *(long *)(lVar12 + 0x168) = (long)puVar1;
    if (iVar3 != 0) {
      *(int *)(lVar12 + 0x15c) = *(int *)(lVar12 + 0x15c) + iVar3;
    }
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 2) + 200))(param_1,1);
    if (0 < iVar3) {
      puVar10[3] = (char)((uint)*(undefined4 *)(lVar12 + 0x15c) >> 8);
      puVar10[4] = (char)*(undefined4 *)(lVar12 + 0x15c);
      if (*(code **)(param_1 + 0x26) != (code *)0x0) {
        (**(code **)(param_1 + 0x26))(1,0,0x100,puVar10,5,param_1,*(undefined8 *)(param_1 + 0x28));
      }
      *(int *)(lVar12 + 0x158) = param_2;
      uVar2 = *(int *)(lVar12 + 0x15c) + 5;
      *(uint *)(lVar12 + 0x15c) = uVar2;
      if (param_5 != 0) {
        return (ulong)uVar2;
      }
      *(uint *)(lVar11 + 0x11c) = uVar2 + local_6c;
      lVar11 = *(long *)(param_1 + 0x20);
      *(uint *)(lVar11 + 0x1a4) = param_4;
      *(void **)(lVar11 + 0x1b0) = param_3;
      *(int *)(lVar11 + 0x1a8) = param_2;
      *(uint *)(lVar11 + 0x1ac) = param_4;
LAB_01a18654:
      uVar5 = ssl3_write_pending(param_1,param_2,param_3,param_4);
      return uVar5;
    }
  }
  else {
    pEVar6 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0x3c));
    local_70 = EVP_MD_size(pEVar6);
    if (local_70 < 0) {
      return 0xffffffff;
    }
    local_6c = 0;
    if (param_5 != 0) goto LAB_01a187bc;
LAB_01a18728:
    piVar8 = (int *)(*(long *)(param_1 + 0x20) + 0xe8);
    local_6c = 0;
    if (*piVar8 != 0) goto LAB_01a187bc;
    if (param_2 != 0x17) {
      local_6c = 0;
LAB_01a187b4:
      *piVar8 = 1;
      goto LAB_01a187bc;
    }
    local_6c = 0;
    if (*(int *)(*(long *)(param_1 + 0x20) + 0xe4) == 0) goto LAB_01a187b4;
    local_6c = FUN_01a18618(param_1,0x17,param_3,0,1);
    if (local_6c < 1) {
      return 0xffffffff;
    }
    if (local_6c < 0x56) {
      piVar8 = (int *)(*(long *)(param_1 + 0x20) + 0xe8);
      goto LAB_01a187b4;
    }
    iVar3 = 0x44;
    iVar4 = 0x3a6;
LAB_01a18a1c:
    ERR_put_error(0x14,0x68,iVar3,"s3_pkt.c",iVar4);
  }
  return 0xffffffff;
}

