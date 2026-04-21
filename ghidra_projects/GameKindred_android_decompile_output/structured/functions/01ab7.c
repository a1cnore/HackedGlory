// functions/01ab7 — 3 functions
#include "libGameKindred.h"




int FUN_01ab70ec(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BN_CTX *param_5,
                BN_MONT_CTX *param_6)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  RSA_METHOD *pRVar6;
  BIGNUM *pBVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  int local_64;
  
  iVar2 = BN_num_bits(param_4);
  if (DAT_02c044b0 < iVar2) {
    pRVar6 = RSA_PKCS1_SSLeay();
                    /* WARNING: Could not recover jumptable at 0x01ab7160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*pRVar6->bn_mod_exp)(param_1,param_2,param_3,param_4,param_5,param_6);
    return iVar2;
  }
  local_64 = 0;
  if (DAT_032188c0 == 0) {
    if (DAT_032188a0 == 0) {
      DAT_032188a0 = ERR_get_next_error_library();
    }
    iVar2 = 0x69;
    iVar3 = 0x23d;
LAB_01ab7244:
    ERR_put_error(DAT_032188a0,0x6a,iVar2,"e_ubsec.c",iVar3);
    iVar2 = 0;
  }
  else {
    local_64 = BN_num_bits(param_4);
    if (DAT_02c044b0 < local_64) {
      if (DAT_032188a0 == 0) {
        DAT_032188a0 = ERR_get_next_error_library();
      }
      iVar2 = 0x6b;
      iVar3 = 0x244;
LAB_01ab7368:
      ERR_put_error(DAT_032188a0,0x6a,iVar2,"e_ubsec.c",iVar3);
    }
    else {
      if ((param_1->dmax < param_4->top) &&
         (pBVar7 = bn_expand2(param_1,param_4->top), pBVar7 == (BIGNUM *)0x0)) {
        if (DAT_032188a0 == 0) {
          DAT_032188a0 = ERR_get_next_error_library();
        }
        iVar2 = 0x65;
        iVar3 = 0x249;
        goto LAB_01ab7244;
      }
      iVar2 = (*DAT_032188a8)("/dev/ubskey");
      pcVar1 = DAT_032188c8;
      if (iVar2 < 1) {
        if (DAT_032188a0 == 0) {
          DAT_032188a0 = ERR_get_next_error_library();
        }
        iVar2 = 0x6c;
        iVar3 = 0x24f;
        goto LAB_01ab7368;
      }
      puVar8 = param_2->d;
      iVar3 = BN_num_bits(param_2);
      puVar9 = param_4->d;
      iVar4 = BN_num_bits(param_4);
      puVar10 = param_3->d;
      iVar5 = BN_num_bits(param_3);
      iVar3 = (*pcVar1)(iVar2,puVar8,iVar3,puVar9,iVar4,puVar10,iVar5,param_1->d,&local_64);
      if (iVar3 == 0) {
        (*DAT_032188b8)(iVar2);
        iVar3 = BN_num_bits(param_4);
        iVar2 = iVar3 + 0x7e;
        if (-1 < iVar3 + 0x3f) {
          iVar2 = iVar3 + 0x3f;
        }
        param_1->top = iVar2 >> 6;
        return 1;
      }
      if (DAT_032188a0 == 0) {
        DAT_032188a0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_032188a0,0x6a,0x6a,"e_ubsec.c",599);
      (*DAT_032188b8)(iVar2);
    }
    iVar2 = BN_mod_exp(param_1,param_2,param_3,param_4,param_5);
  }
  return iVar2;
}




int FUN_01ab79c4(DH *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BIGNUM *pBVar6;
  DH_METHOD *pDVar7;
  BIGNUM *a;
  BIGNUM *pBVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  int local_68;
  int iStack_64;
  
  local_68 = 0;
  iStack_64 = 0;
  a = param_1->priv_key;
  if (a == (BIGNUM *)0x0) {
    a = BN_new();
    if (a == (BIGNUM *)0x0) {
      return 0;
    }
    local_68 = BN_num_bits(param_1->p);
    iVar5 = param_1->p->top;
    if ((a->dmax < iVar5) && (pBVar8 = bn_expand2(a,iVar5), pBVar8 == (BIGNUM *)0x0)) {
      return 0;
    }
    do {
      iVar5 = BN_rand_range(a,param_1->p);
      if (iVar5 == 0) {
        return 0;
      }
    } while (a->top == 0);
    iVar5 = BN_num_bits(a);
    pBVar8 = param_1->pub_key;
  }
  else {
    iVar5 = 0;
    pBVar8 = param_1->pub_key;
  }
  if (pBVar8 == (BIGNUM *)0x0) {
    pBVar8 = BN_new();
    if (pBVar8 == (BIGNUM *)0x0) {
      return 0;
    }
    iStack_64 = BN_num_bits(param_1->p);
    iVar2 = param_1->p->top;
    if ((pBVar8->dmax < iVar2) && (pBVar6 = bn_expand2(pBVar8,iVar2), pBVar6 == (BIGNUM *)0x0)) {
      return 0;
    }
  }
  iVar2 = (*DAT_032188a8)("/dev/ubskey");
  pcVar1 = DAT_032188e8;
  if (iVar2 < 1) {
    if (DAT_032188a0 == 0) {
      DAT_032188a0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_032188a0,0x6f,0x6c,"e_ubsec.c",0x3d5);
  }
  else {
    puVar9 = a->d;
    puVar10 = pBVar8->d;
    puVar11 = param_1->g->d;
    iVar3 = BN_num_bits(param_1->g);
    puVar12 = param_1->p->d;
    iVar4 = BN_num_bits(param_1->p);
    iVar5 = (*pcVar1)(iVar2,puVar9,&local_68,puVar10,&iStack_64,puVar11,iVar3,puVar12,iVar4,0,0,
                      iVar5);
    if (iVar5 == 0) {
      (*DAT_032188b8)(iVar2);
      param_1->pub_key = pBVar8;
      iVar5 = iStack_64 + 0x7e;
      if (-1 < iStack_64 + 0x3f) {
        iVar5 = iStack_64 + 0x3f;
      }
      pBVar8->top = iVar5 >> 6;
      param_1->priv_key = a;
      iVar5 = local_68 + 0x7e;
      if (-1 < local_68 + 0x3f) {
        iVar5 = local_68 + 0x3f;
      }
      a->top = iVar5 >> 6;
      return 1;
    }
    if (DAT_032188a0 == 0) {
      DAT_032188a0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_032188a0,0x6f,0x6a,"e_ubsec.c",1000);
    (*DAT_032188b8)(iVar2);
  }
  pDVar7 = DH_OpenSSL();
  iVar5 = (*pDVar7->generate_key)(param_1);
  return iVar5;
}




void FUN_01ab7c2c(uchar *param_1,BIGNUM *param_2,DH *param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  DH_METHOD *pDVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  int local_64;
  
  local_64 = BN_num_bits(param_3->p);
  iVar2 = (*DAT_032188a8)("/dev/ubskey");
  pcVar1 = DAT_032188f0;
  if (iVar2 < 1) {
    if (DAT_032188a0 == 0) {
      DAT_032188a0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_032188a0,0x65,0x6c,"e_ubsec.c",0x38d);
  }
  else {
    puVar7 = param_3->priv_key->d;
    iVar3 = BN_num_bits(param_3->priv_key);
    puVar8 = param_2->d;
    iVar4 = BN_num_bits(param_2);
    puVar9 = param_3->p->d;
    iVar5 = BN_num_bits(param_3->p);
    iVar3 = (*pcVar1)(iVar2,puVar7,iVar3,puVar8,iVar4,puVar9,iVar5,param_1,&local_64);
    if (iVar3 == 0) {
      (*DAT_032188b8)(iVar2);
      (*DAT_032188f8)(local_64);
      return;
    }
    if (DAT_032188a0 == 0) {
      DAT_032188a0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_032188a0,0x65,0x6a,"e_ubsec.c",0x39d);
    (*DAT_032188b8)(iVar2);
  }
  pDVar6 = DH_OpenSSL();
  (*pDVar6->compute_key)(param_1,param_2,param_3);
  return;
}

