// functions/01ab1 — 3 functions
#include "libGameKindred.h"




bool FUN_01ab133c(undefined8 param_1,int param_2,undefined8 param_3,char *param_4)

{
  int reason;
  int line;
  
  if (param_2 == 200) {
    if (param_4 == (char *)0x0) {
      if (DAT_03218710 == 0) {
        DAT_03218710 = ERR_get_next_error_library();
      }
      reason = 0x43;
      line = 0x1d7;
    }
    else {
      if (DAT_03218720 == 0) {
        if (DAT_03218718 != (void *)0x0) {
          CRYPTO_free(DAT_03218718);
        }
        DAT_03218718 = (char *)0x0;
        DAT_03218718 = BUF_strdup(param_4);
        return DAT_03218718 != (char *)0x0;
      }
      if (DAT_03218710 == 0) {
        DAT_03218710 = ERR_get_next_error_library();
      }
      reason = 100;
      line = 0x1db;
    }
  }
  else {
    if (DAT_03218710 == 0) {
      DAT_03218710 = ERR_get_next_error_library();
    }
    reason = 0x68;
    line = 0x1e2;
  }
  ERR_put_error(DAT_03218710,100,reason,"e_cswift.c",line);
  return false;
}




int FUN_01ab142c(BIGNUM *param_1,BIGNUM *param_2,RSA *param_3,BN_CTX *param_4)

{
  uint uVar1;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  bool bVar2;
  int iVar3;
  int iVar4;
  RSA_METHOD *pRVar5;
  long lVar6;
  void *pvVar7;
  BIGNUM *pBVar8;
  BIGNUM *a_02;
  BIGNUM *a_03;
  BIGNUM *a_04;
  ulong uVar9;
  char acStack_100 [24];
  undefined8 local_e8;
  undefined8 local_e0;
  long local_d8;
  void *local_d0;
  long local_c8;
  void *local_c0;
  long local_b8;
  void *local_b0;
  long local_a8;
  void *local_a0;
  long local_98;
  void *local_90;
  size_t local_88;
  ulong *local_80;
  long local_78;
  ulong *local_70;
  
  if ((((param_3->p == (BIGNUM *)0x0) || (param_3->q == (BIGNUM *)0x0)) ||
      (param_3->dmp1 == (BIGNUM *)0x0)) ||
     ((param_3->dmq1 == (BIGNUM *)0x0 || (param_3->iqmp == (BIGNUM *)0x0)))) {
    if (DAT_03218710 == 0) {
      DAT_03218710 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218710,0x6b,0x69,"e_cswift.c",0x2e3);
    return 0;
  }
  iVar3 = BN_num_bits(param_3->p);
  if ((((0x400 < iVar3) || (iVar3 = BN_num_bits(param_3->q), 0x400 < iVar3)) ||
      ((iVar3 = BN_num_bits(param_3->dmp1), 0x400 < iVar3 ||
       ((iVar3 = BN_num_bits(param_3->dmq1), 0x400 < iVar3 ||
        (iVar3 = BN_num_bits(param_3->iqmp), 0x400 < iVar3)))))) &&
     (pRVar5 = RSA_PKCS1_SSLeay(), pRVar5 != (RSA_METHOD *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01ab150c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (*pRVar5->rsa_mod_exp)(param_1,param_2,param_3,param_4);
    return iVar3;
  }
  a = param_3->p;
  a_00 = param_3->q;
  pBVar8 = param_3->dmp1;
  a_01 = param_3->dmq1;
  a_04 = param_3->iqmp;
  local_d0 = (void *)0x0;
  local_c0 = (void *)0x0;
  local_b0 = (void *)0x0;
  local_a0 = (void *)0x0;
  local_90 = (void *)0x0;
  lVar6 = (*p_CSwift_AcquireAccContext)(&local_e8);
  if (lVar6 != 0) {
    if (DAT_03218710 == 0) {
      DAT_03218710 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218710,0x6a,0x6c,"e_cswift.c",0x270);
    a_03 = (BIGNUM *)0x0;
    a_02 = (BIGNUM *)0x0;
    iVar3 = 0;
    bVar2 = false;
    goto joined_r0x01ab1bd8;
  }
  a_02 = BN_new();
  a_03 = BN_new();
  if ((a_02 == (BIGNUM *)0x0) || (a_03 == (BIGNUM *)0x0)) {
    if (DAT_03218710 == 0) {
      DAT_03218710 = ERR_get_next_error_library();
    }
    iVar3 = 0x66;
    iVar4 = 0x279;
LAB_01ab1a40:
    ERR_put_error(DAT_03218710,0x6a,iVar3,"e_cswift.c",iVar4);
  }
  else {
    local_e0 = 1;
    iVar3 = BN_num_bits(a);
    uVar1 = iVar3 + 0xe;
    if (-1 < (int)(iVar3 + 7U)) {
      uVar1 = iVar3 + 7U;
    }
    uVar9 = 0xffffffffffffffff;
    do {
      iVar3 = (int)uVar9;
      uVar9 = uVar9 + 1;
    } while ((((int)uVar1 >> 3) + iVar3 + 1U & 0x1f) != 0);
    local_d8 = ((long)((ulong)uVar1 << 0x20) >> 0x23) + uVar9;
    pvVar7 = CRYPTO_malloc((int)local_d8,"e_cswift.c",0x24d);
    local_d0 = pvVar7;
    if (pvVar7 == (void *)0x0) {
      if (DAT_03218710 == 0) {
        DAT_03218710 = ERR_get_next_error_library();
      }
      iVar3 = 0x67;
      iVar4 = 0x28a;
      goto LAB_01ab1a40;
    }
    BN_bn2bin(a,(uchar *)((long)pvVar7 + (uVar9 & 0xffffffff)));
    if ((int)uVar9 != 0) {
      memset(pvVar7,0,uVar9 & 0xffffffff);
    }
    iVar3 = BN_num_bits(a_00);
    uVar1 = iVar3 + 0xe;
    if (-1 < (int)(iVar3 + 7U)) {
      uVar1 = iVar3 + 7U;
    }
    uVar9 = 0xffffffffffffffff;
    do {
      iVar3 = (int)uVar9;
      uVar9 = uVar9 + 1;
    } while ((((int)uVar1 >> 3) + iVar3 + 1U & 0x1f) != 0);
    local_c8 = ((long)((ulong)uVar1 << 0x20) >> 0x23) + uVar9;
    pvVar7 = CRYPTO_malloc((int)local_c8,"e_cswift.c",0x24d);
    local_c0 = pvVar7;
    if (pvVar7 == (void *)0x0) {
      if (DAT_03218710 == 0) {
        DAT_03218710 = ERR_get_next_error_library();
      }
      iVar3 = 0x67;
      iVar4 = 0x28e;
      goto LAB_01ab1a40;
    }
    BN_bn2bin(a_00,(uchar *)((long)pvVar7 + (uVar9 & 0xffffffff)));
    if ((int)uVar9 != 0) {
      memset(pvVar7,0,uVar9 & 0xffffffff);
    }
    iVar3 = BN_num_bits(pBVar8);
    uVar1 = iVar3 + 0xe;
    if (-1 < (int)(iVar3 + 7U)) {
      uVar1 = iVar3 + 7U;
    }
    uVar9 = 0xffffffffffffffff;
    do {
      iVar3 = (int)uVar9;
      uVar9 = uVar9 + 1;
    } while ((((int)uVar1 >> 3) + iVar3 + 1U & 0x1f) != 0);
    local_b8 = ((long)((ulong)uVar1 << 0x20) >> 0x23) + uVar9;
    pvVar7 = CRYPTO_malloc((int)local_b8,"e_cswift.c",0x24d);
    local_b0 = pvVar7;
    if (pvVar7 == (void *)0x0) {
      if (DAT_03218710 == 0) {
        DAT_03218710 = ERR_get_next_error_library();
      }
      iVar3 = 0x67;
      iVar4 = 0x292;
      goto LAB_01ab1a40;
    }
    BN_bn2bin(pBVar8,(uchar *)((long)pvVar7 + (uVar9 & 0xffffffff)));
    if ((int)uVar9 != 0) {
      memset(pvVar7,0,uVar9 & 0xffffffff);
    }
    iVar3 = BN_num_bits(a_01);
    uVar1 = iVar3 + 0xe;
    if (-1 < (int)(iVar3 + 7U)) {
      uVar1 = iVar3 + 7U;
    }
    uVar9 = 0xffffffffffffffff;
    do {
      iVar3 = (int)uVar9;
      uVar9 = uVar9 + 1;
    } while ((((int)uVar1 >> 3) + iVar3 + 1U & 0x1f) != 0);
    local_a8 = ((long)((ulong)uVar1 << 0x20) >> 0x23) + uVar9;
    pvVar7 = CRYPTO_malloc((int)local_a8,"e_cswift.c",0x24d);
    local_a0 = pvVar7;
    if (pvVar7 == (void *)0x0) {
      if (DAT_03218710 == 0) {
        DAT_03218710 = ERR_get_next_error_library();
      }
      iVar3 = 0x67;
      iVar4 = 0x296;
      goto LAB_01ab1a40;
    }
    BN_bn2bin(a_01,(uchar *)((long)pvVar7 + (uVar9 & 0xffffffff)));
    if ((int)uVar9 != 0) {
      memset(pvVar7,0,uVar9 & 0xffffffff);
    }
    iVar3 = BN_num_bits(a_04);
    uVar1 = iVar3 + 0xe;
    if (-1 < (int)(iVar3 + 7U)) {
      uVar1 = iVar3 + 7U;
    }
    uVar9 = 0xffffffffffffffff;
    do {
      iVar3 = (int)uVar9;
      uVar9 = uVar9 + 1;
    } while ((((int)uVar1 >> 3) + iVar3 + 1U & 0x1f) != 0);
    local_98 = ((long)((ulong)uVar1 << 0x20) >> 0x23) + uVar9;
    pvVar7 = CRYPTO_malloc((int)local_98,"e_cswift.c",0x24d);
    local_90 = pvVar7;
    if (pvVar7 == (void *)0x0) {
      if (DAT_03218710 == 0) {
        DAT_03218710 = ERR_get_next_error_library();
      }
      iVar3 = 0x67;
      iVar4 = 0x29a;
      goto LAB_01ab1a40;
    }
    BN_bn2bin(a_04,(uchar *)((long)pvVar7 + (uVar9 & 0xffffffff)));
    if ((int)uVar9 != 0) {
      memset(pvVar7,0,uVar9 & 0xffffffff);
    }
    if (((a_02->dmax < param_2->top) &&
        (pBVar8 = bn_expand2(a_02,param_2->top), pBVar8 == (BIGNUM *)0x0)) ||
       ((iVar3 = a_00->top + a->top, a_03->dmax < iVar3 &&
        (pBVar8 = bn_expand2(a_03,iVar3), pBVar8 == (BIGNUM *)0x0)))) {
      if (DAT_03218710 == 0) {
        DAT_03218710 = ERR_get_next_error_library();
      }
      iVar3 = 0x67;
      iVar4 = 0x29e;
      goto LAB_01ab1a40;
    }
    lVar6 = (*p_CSwift_AttachKeyParam)(local_e8,&local_e0);
    if (lVar6 == 0) {
      iVar3 = BN_bn2bin(param_2,(uchar *)a_02->d);
      local_78 = (long)iVar3;
      local_70 = a_02->d;
      iVar4 = BN_num_bits(a);
      iVar3 = iVar4 + 0xe;
      if (-1 < iVar4 + 7) {
        iVar3 = iVar4 + 7;
      }
      local_88 = (size_t)((iVar3 >> 3) << 1);
      memset(a_03->d,0,local_88);
      local_80 = a_03->d;
      lVar6 = (*p_CSwift_SimpleRequest)(local_e8,1,&local_78,1,&local_88,1);
      if (lVar6 == 0) {
        BN_bin2bn((uchar *)a_03->d,(int)local_88,param_1);
        iVar3 = 1;
        bVar2 = true;
        goto joined_r0x01ab1bd8;
      }
      if (DAT_03218710 == 0) {
        DAT_03218710 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_03218710,0x6a,0x6b,"e_cswift.c",0x2bd);
    }
    else {
      if (lVar6 == -0x2716) {
        if (DAT_03218710 == 0) {
          DAT_03218710 = ERR_get_next_error_library();
        }
        iVar3 = 0x65;
        iVar4 = 0x2a8;
        goto LAB_01ab1a40;
      }
      if (DAT_03218710 == 0) {
        DAT_03218710 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_03218710,0x6a,0x6b,"e_cswift.c",0x2ad);
    }
    sprintf(acStack_100,"%ld",lVar6);
    ERR_add_error_data(2,"CryptoSwift error number is ",acStack_100);
  }
  bVar2 = true;
  iVar3 = 0;
joined_r0x01ab1bd8:
  if (local_d0 != (void *)0x0) {
    CRYPTO_free(local_d0);
  }
  if (local_c0 != (void *)0x0) {
    CRYPTO_free(local_c0);
  }
  if (local_b0 != (void *)0x0) {
    CRYPTO_free(local_b0);
  }
  if (local_a0 != (void *)0x0) {
    CRYPTO_free(local_a0);
  }
  if (local_90 != (void *)0x0) {
    CRYPTO_free(local_90);
  }
  if (a_03 != (BIGNUM *)0x0) {
    BN_free(a_03);
  }
  if (a_02 != (BIGNUM *)0x0) {
    BN_free(a_02);
  }
  if (bVar2) {
    (*p_CSwift_ReleaseAccContext)(local_e8);
  }
  return iVar3;
}




int FUN_01ab1c04(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BN_CTX *param_5,
                BN_MONT_CTX *param_6)

{
  uint uVar1;
  int iVar2;
  RSA_METHOD *pRVar3;
  long lVar4;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  BIGNUM *pBVar5;
  int line;
  char acStack_f0 [24];
  undefined8 local_d8;
  long local_d0;
  ulong *local_c8;
  long local_c0;
  ulong *local_b8;
  size_t local_80;
  ulong *local_78;
  long local_70;
  ulong *local_68;
  undefined8 local_58;
  
  iVar2 = BN_num_bits(param_1);
  if ((((0x800 < iVar2) || (iVar2 = BN_num_bits(param_2), 0x800 < iVar2)) ||
      (iVar2 = BN_num_bits(param_4), 0x800 < iVar2)) &&
     (pRVar3 = RSA_PKCS1_SSLeay(), pRVar3 != (RSA_METHOD *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01ab1c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*pRVar3->bn_mod_exp)(param_1,param_2,param_3,param_4,param_5,param_6);
    return iVar2;
  }
  lVar4 = (*p_CSwift_AcquireAccContext)(&local_58);
  if (lVar4 != 0) {
    if (DAT_03218710 == 0) {
      DAT_03218710 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218710,0x69,0x6c,"e_cswift.c",0x1ff);
    iVar2 = 0;
    goto LAB_01ab1ee4;
  }
  BN_CTX_start(param_5);
  a = BN_CTX_get(param_5);
  a_00 = BN_CTX_get(param_5);
  a_01 = BN_CTX_get(param_5);
  a_02 = BN_CTX_get(param_5);
  if (a_02 == (BIGNUM *)0x0) {
    if (DAT_03218710 == 0) {
      DAT_03218710 = ERR_get_next_error_library();
    }
    iVar2 = 0x66;
    line = 0x20a;
LAB_01ab1ecc:
    ERR_put_error(DAT_03218710,0x69,iVar2,"e_cswift.c",line);
LAB_01ab1ed0:
    iVar2 = 0;
  }
  else {
    if (((((a->dmax < param_4->top) &&
          (pBVar5 = bn_expand2(a,param_4->top), pBVar5 == (BIGNUM *)0x0)) ||
         ((a_00->dmax < param_3->top &&
          (pBVar5 = bn_expand2(a_00,param_3->top), pBVar5 == (BIGNUM *)0x0)))) ||
        ((a_01->dmax < param_2->top &&
         (pBVar5 = bn_expand2(a_01,param_2->top), pBVar5 == (BIGNUM *)0x0)))) ||
       ((a_02->dmax < param_4->top &&
        (pBVar5 = bn_expand2(a_02,param_4->top), pBVar5 == (BIGNUM *)0x0)))) {
      if (DAT_03218710 == 0) {
        DAT_03218710 = ERR_get_next_error_library();
      }
      iVar2 = 0x67;
      line = 0x20f;
      goto LAB_01ab1ecc;
    }
    local_d8 = 2;
    iVar2 = BN_bn2bin(param_4,(uchar *)a->d);
    local_d0 = (long)iVar2;
    local_c8 = a->d;
    iVar2 = BN_bn2bin(param_3,(uchar *)a_00->d);
    local_c0 = (long)iVar2;
    local_b8 = a_00->d;
    lVar4 = (*p_CSwift_AttachKeyParam)(local_58,&local_d8);
    if (lVar4 != 0) {
      if (lVar4 == -0x2716) {
        if (DAT_03218710 == 0) {
          DAT_03218710 = ERR_get_next_error_library();
        }
        iVar2 = 0x65;
        line = 0x21f;
        goto LAB_01ab1ecc;
      }
      if (DAT_03218710 == 0) {
        DAT_03218710 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_03218710,0x69,0x6b,"e_cswift.c",0x224);
LAB_01ab2004:
      sprintf(acStack_f0,"%ld",lVar4);
      ERR_add_error_data(2,"CryptoSwift error number is ",acStack_f0);
      goto LAB_01ab1ed0;
    }
    iVar2 = BN_bn2bin(param_2,(uchar *)a_01->d);
    local_70 = (long)iVar2;
    local_68 = a_01->d;
    iVar2 = BN_num_bits(param_4);
    uVar1 = iVar2 + 0xe;
    if (-1 < (int)(iVar2 + 7U)) {
      uVar1 = iVar2 + 7U;
    }
    local_80 = (long)((ulong)uVar1 << 0x20) >> 0x23;
    memset(a_02->d,0,local_80);
    local_78 = a_02->d;
    lVar4 = (*p_CSwift_SimpleRequest)(local_58,2,&local_70,1,&local_80,1);
    if (lVar4 != 0) {
      if (DAT_03218710 == 0) {
        DAT_03218710 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_03218710,0x69,0x6b,"e_cswift.c",0x234);
      goto LAB_01ab2004;
    }
    BN_bin2bn((uchar *)a_02->d,(int)local_80,param_1);
    iVar2 = 1;
  }
  (*p_CSwift_ReleaseAccContext)(local_58);
LAB_01ab1ee4:
  BN_CTX_end(param_5);
  return iVar2;
}

