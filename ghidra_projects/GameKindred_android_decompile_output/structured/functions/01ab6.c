// functions/01ab6 — 6 functions
#include "libGameKindred.h"




bool FUN_01ab6058(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  char local_60 [64];
  
  local_60[0x28] = '\0';
  local_60[0x29] = '\0';
  local_60[0x2a] = '\0';
  local_60[0x2b] = '\0';
  local_60[0x2c] = '\0';
  local_60[0x2d] = '\0';
  local_60[0x2e] = '\0';
  local_60[0x2f] = '\0';
  local_60[0x20] = '\0';
  local_60[0x21] = '\0';
  local_60[0x22] = '\0';
  local_60[0x23] = '\0';
  local_60[0x24] = '\0';
  local_60[0x25] = '\0';
  local_60[0x26] = '\0';
  local_60[0x27] = '\0';
  local_60[0x38] = '\0';
  local_60[0x39] = '\0';
  local_60[0x3a] = '\0';
  local_60[0x3b] = '\0';
  local_60[0x3c] = '\0';
  local_60[0x3d] = '\0';
  local_60[0x3e] = '\0';
  local_60[0x3f] = '\0';
  local_60[0x30] = '\0';
  local_60[0x31] = '\0';
  local_60[0x32] = '\0';
  local_60[0x33] = '\0';
  local_60[0x34] = '\0';
  local_60[0x35] = '\0';
  local_60[0x36] = '\0';
  local_60[0x37] = '\0';
  builtin_strncpy(local_60,"ENGINE_rand_bytes",0x12);
  local_60[0x18] = '\0';
  local_60[0x19] = '\0';
  local_60[0x1a] = '\0';
  local_60[0x1b] = '\0';
  local_60[0x1c] = '\0';
  local_60[0x1d] = '\0';
  local_60[0x1e] = '\0';
  local_60[0x1f] = '\0';
  local_60[0x12] = '\0';
  local_60[0x13] = '\0';
  local_60[0x14] = '\0';
  local_60[0x15] = '\0';
  local_60[0x16] = '\0';
  local_60[0x17] = '\0';
  if (DAT_03218848 != (code *)0x0) {
    iVar1 = (*DAT_03218848)(local_60,param_1,param_2);
    FUN_01ab5a44(local_60,0x6c,iVar1);
    return iVar1 == 1;
  }
  if (DAT_03218810 == 0) {
    DAT_03218810 = ERR_get_next_error_library();
  }
  ERR_put_error(DAT_03218810,0x6c,0x75,"e_sureware.c",0x293);
  return false;
}




void FUN_01ab610c(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char local_60 [64];
  
  local_60[0x28] = '\0';
  local_60[0x29] = '\0';
  local_60[0x2a] = '\0';
  local_60[0x2b] = '\0';
  local_60[0x2c] = '\0';
  local_60[0x2d] = '\0';
  local_60[0x2e] = '\0';
  local_60[0x2f] = '\0';
  local_60[0x20] = '\0';
  local_60[0x21] = '\0';
  local_60[0x22] = '\0';
  local_60[0x23] = '\0';
  local_60[0x24] = '\0';
  local_60[0x25] = '\0';
  local_60[0x26] = '\0';
  local_60[0x27] = '\0';
  local_60[0x38] = '\0';
  local_60[0x39] = '\0';
  local_60[0x3a] = '\0';
  local_60[0x3b] = '\0';
  local_60[0x3c] = '\0';
  local_60[0x3d] = '\0';
  local_60[0x3e] = '\0';
  local_60[0x3f] = '\0';
  local_60[0x30] = '\0';
  local_60[0x31] = '\0';
  local_60[0x32] = '\0';
  local_60[0x33] = '\0';
  local_60[0x34] = '\0';
  local_60[0x35] = '\0';
  local_60[0x36] = '\0';
  local_60[0x37] = '\0';
  builtin_strncpy(local_60,"ENGINE_rand_seed",0x11);
  local_60[0x18] = '\0';
  local_60[0x19] = '\0';
  local_60[0x1a] = '\0';
  local_60[0x1b] = '\0';
  local_60[0x1c] = '\0';
  local_60[0x1d] = '\0';
  local_60[0x1e] = '\0';
  local_60[0x1f] = '\0';
  local_60[0x11] = '\0';
  local_60[0x12] = '\0';
  local_60[0x13] = '\0';
  local_60[0x14] = '\0';
  local_60[0x15] = '\0';
  local_60[0x16] = '\0';
  local_60[0x17] = '\0';
  if (DAT_03218840 != (code *)0x0) {
    uVar1 = (*DAT_03218840)(local_60,param_1,param_2);
    FUN_01ab5a44(local_60,0x6d,uVar1);
    return;
  }
  if (DAT_03218810 == 0) {
    DAT_03218810 = ERR_get_next_error_library();
  }
  ERR_put_error(DAT_03218810,0x6d,0x75,"e_sureware.c",0x2a1);
  return;
}




EVP_PKEY * FUN_01ab620c(ENGINE *param_1,undefined8 param_2,void *param_3,ulong param_4,char param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  RSA *r;
  BIGNUM *pBVar4;
  EVP_PKEY *pkey;
  ENGINE *pEVar5;
  uint uVar6;
  ulong *puVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  char local_80 [64];
  
  local_80[0x28] = '\0';
  local_80[0x29] = '\0';
  local_80[0x2a] = '\0';
  local_80[0x2b] = '\0';
  local_80[0x2c] = '\0';
  local_80[0x2d] = '\0';
  local_80[0x2e] = '\0';
  local_80[0x2f] = '\0';
  local_80[0x20] = '\0';
  local_80[0x21] = '\0';
  local_80[0x22] = '\0';
  local_80[0x23] = '\0';
  local_80[0x24] = '\0';
  local_80[0x25] = '\0';
  local_80[0x26] = '\0';
  local_80[0x27] = '\0';
  local_80[0x38] = '\0';
  local_80[0x39] = '\0';
  local_80[0x3a] = '\0';
  local_80[0x3b] = '\0';
  local_80[0x3c] = '\0';
  local_80[0x3d] = '\0';
  local_80[0x3e] = '\0';
  local_80[0x3f] = '\0';
  local_80[0x30] = '\0';
  local_80[0x31] = '\0';
  local_80[0x32] = '\0';
  local_80[0x33] = '\0';
  local_80[0x34] = '\0';
  local_80[0x35] = '\0';
  local_80[0x36] = '\0';
  local_80[0x37] = '\0';
  builtin_strncpy(local_80,"sureware_load_public",0x15);
  local_80[0x18] = '\0';
  local_80[0x19] = '\0';
  local_80[0x1a] = '\0';
  local_80[0x1b] = '\0';
  local_80[0x1c] = '\0';
  local_80[0x1d] = '\0';
  local_80[0x1e] = '\0';
  local_80[0x1f] = '\0';
  local_80[0x15] = '\0';
  local_80[0x16] = '\0';
  local_80[0x17] = '\0';
  if ((DAT_03218870 == (code *)0x0) || (DAT_03218888 == (code *)0x0)) {
    if (DAT_03218810 == 0) {
      DAT_03218810 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218810,0x6a,0x75,"e_sureware.c",700);
  }
  else if (param_5 == '\x02') {
    r = (RSA *)DSA_new_method(param_1);
    DSA_set_ex_data((DSA *)r,DAT_02c041c4,param_3);
    pBVar4 = BN_new();
    r->d = pBVar4;
    pBVar4 = BN_new();
    r->engine = (ENGINE *)pBVar4;
    pBVar4 = BN_new();
    r->n = pBVar4;
    pBVar4 = BN_new();
    r->e = pBVar4;
    if (r->d == (BIGNUM *)0x0) {
      if (r == (RSA *)0x0) {
        return (EVP_PKEY *)0x0;
      }
    }
    else if (((r->engine != (ENGINE *)0x0) && (pBVar4 != (BIGNUM *)0x0)) && (r->n != (BIGNUM *)0x0))
    {
      uVar11 = param_4 >> 3;
      iVar9 = (int)uVar11;
      bn_expand2(r->d,iVar9);
      bn_expand2((BIGNUM *)r->engine,iVar9);
      bn_expand2(r->n,2);
      bn_expand2(r->e,iVar9);
      if (((r->d->dmax == iVar9) && (*(int *)(r->engine + 0xc) == iVar9)) &&
         ((r->n->dmax == 2 && (r->e->dmax == iVar9)))) {
        iVar3 = (*DAT_03218888)(local_80,param_2,param_4,r->d->d,*(undefined8 *)r->engine,r->n->d,
                                r->e->d);
        FUN_01ab5a44(local_80,0x6a,iVar3);
        if (iVar3 == 1) {
          pBVar4 = r->d;
          pBVar4->top = iVar9;
          if (iVar9 < 1) {
            *(int *)(r->engine + 8) = iVar9;
          }
          else {
            lVar1 = (uVar11 << 0x20) + -0x100000000;
            plVar8 = (long *)((long)pBVar4->d + (lVar1 >> 0x1d));
            iVar3 = iVar9 + 1;
            do {
              if (*plVar8 != 0) {
                iVar10 = iVar3 + -1;
                break;
              }
              iVar2 = iVar3 + -1;
              iVar10 = iVar3 + -2;
              plVar8 = plVar8 + -1;
              iVar3 = iVar2;
            } while (iVar10 != 0 && 0 < iVar2);
            pBVar4->top = iVar10;
            pEVar5 = r->engine;
            *(int *)(pEVar5 + 8) = iVar9;
            plVar8 = (long *)(*(long *)pEVar5 + (lVar1 >> 0x20) * 8);
            iVar3 = iVar9 + 1;
            do {
              if (*plVar8 != 0) {
                iVar10 = iVar3 + -1;
                break;
              }
              iVar2 = iVar3 + -1;
              iVar10 = iVar3 + -2;
              plVar8 = plVar8 + -1;
              iVar3 = iVar2;
            } while (iVar10 != 0 && 0 < iVar2);
            *(int *)(pEVar5 + 8) = iVar10;
          }
          pBVar4 = r->n;
          uVar6 = 2;
          pBVar4->top = 2;
          if (pBVar4->d[1] == 0) {
            uVar6 = (uint)(*pBVar4->d != 0);
          }
          pBVar4->top = uVar6;
          pBVar4 = r->e;
          pBVar4->top = iVar9;
          if (0 < iVar9) {
            plVar8 = (long *)((long)pBVar4->d + ((long)((uVar11 << 0x20) + -0x100000000) >> 0x1d));
            iVar9 = iVar9 + 1;
            do {
              if (*plVar8 != 0) {
                iVar3 = iVar9 + -1;
                break;
              }
              iVar10 = iVar9 + -1;
              iVar3 = iVar9 + -2;
              plVar8 = plVar8 + -1;
              iVar9 = iVar10;
            } while (iVar3 != 0 && 0 < iVar10);
            pBVar4->top = iVar3;
          }
          pkey = EVP_PKEY_new();
          iVar9 = 0x74;
          goto LAB_01ab65dc;
        }
        if (DAT_03218810 == 0) {
          DAT_03218810 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_03218810,0x6a,0x81,"e_sureware.c",0x30a);
      }
    }
    DSA_free((DSA *)r);
  }
  else if (param_5 == '\x01') {
    r = RSA_new_method(param_1);
    RSA_set_ex_data(r,DAT_02c041c0,param_3);
    r->flags = r->flags | 0x20;
    pBVar4 = BN_new();
    r->e = pBVar4;
    pBVar4 = BN_new();
    r->n = pBVar4;
    if ((pBVar4 == (BIGNUM *)0x0) || (r->e == (BIGNUM *)0x0)) {
      if (r == (RSA *)0x0) {
        return (EVP_PKEY *)0x0;
      }
    }
    else {
      iVar9 = (int)(param_4 >> 3);
      bn_expand2(r->e,iVar9);
      bn_expand2(r->n,iVar9);
      if ((r->e->dmax == iVar9) && (r->n->dmax == iVar9)) {
        iVar3 = (*DAT_03218870)(local_80,param_2,param_4,r->n->d,r->e->d);
        FUN_01ab5a44(local_80,0x6a,iVar3);
        if (iVar3 == 1) {
          pBVar4 = r->e;
          pBVar4->top = iVar9;
          if (iVar9 < 1) {
            r->n->top = iVar9;
          }
          else {
            lVar1 = ((param_4 >> 3) << 0x20) + -0x100000000;
            plVar8 = (long *)((long)pBVar4->d + (lVar1 >> 0x1d));
            iVar3 = iVar9 + 1;
            do {
              if (*plVar8 != 0) {
                iVar10 = iVar3 + -1;
                break;
              }
              iVar2 = iVar3 + -1;
              iVar10 = iVar3 + -2;
              plVar8 = plVar8 + -1;
              iVar3 = iVar2;
            } while (iVar10 != 0 && 0 < iVar2);
            pBVar4->top = iVar10;
            pBVar4 = r->n;
            pBVar4->top = iVar9;
            puVar7 = pBVar4->d + (lVar1 >> 0x20);
            iVar9 = iVar9 + 1;
            do {
              if (*puVar7 != 0) {
                iVar3 = iVar9 + -1;
                break;
              }
              iVar10 = iVar9 + -1;
              iVar3 = iVar9 + -2;
              puVar7 = puVar7 + -1;
              iVar9 = iVar10;
            } while (iVar3 != 0 && 0 < iVar10);
            pBVar4->top = iVar3;
          }
          pkey = EVP_PKEY_new();
          iVar9 = 6;
LAB_01ab65dc:
          EVP_PKEY_assign(pkey,iVar9,r);
          return pkey;
        }
        if (DAT_03218810 == 0) {
          DAT_03218810 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_03218810,0x6a,0x81,"e_sureware.c",0x2d8);
      }
    }
    RSA_free(r);
  }
  else {
    if (DAT_03218810 == 0) {
      DAT_03218810 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218810,0x6a,0x80,"e_sureware.c",800);
  }
  return (EVP_PKEY *)0x0;
}




undefined8 FUN_01ab68f8(void)

{
  char *filename;
  int iVar1;
  DSO_FUNC_TYPE pDVar2;
  DSO_FUNC_TYPE pDVar3;
  DSO_FUNC_TYPE pDVar4;
  DSO_FUNC_TYPE pDVar5;
  DSO_FUNC_TYPE pDVar6;
  DSO_FUNC_TYPE pDVar7;
  DSO_FUNC_TYPE pDVar8;
  DSO_FUNC_TYPE pDVar9;
  DSO_FUNC_TYPE pDVar10;
  DSO_FUNC_TYPE pDVar11;
  DSO_FUNC_TYPE pDVar12;
  DSO_FUNC_TYPE pDVar13;
  DSO_FUNC_TYPE pDVar14;
  ulong uVar15;
  
  if (DAT_032188c0 == (DSO *)0x0) {
    filename = "ubsec";
    if (DAT_03218900 != (char *)0x0) {
      filename = DAT_03218900;
    }
    DAT_032188c0 = DSO_load((DSO *)0x0,filename,(DSO_METHOD *)0x0,0);
    if (DAT_032188c0 == (DSO *)0x0) {
      if (DAT_032188a0 == 0) {
        DAT_032188a0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_032188a0,0x69,0x67,"e_ubsec.c",0x19e);
    }
    else {
      pDVar2 = DSO_bind_func(DAT_032188c0,"ubsec_bytes_to_bits");
      if (((((pDVar2 == (DSO_FUNC_TYPE)0x0) ||
            (pDVar3 = DSO_bind_func(DAT_032188c0,"ubsec_bits_to_bytes"),
            pDVar3 == (DSO_FUNC_TYPE)0x0)) ||
           (pDVar4 = DSO_bind_func(DAT_032188c0,"ubsec_open"), pDVar4 == (DSO_FUNC_TYPE)0x0)) ||
          (((pDVar5 = DSO_bind_func(DAT_032188c0,"ubsec_close"), pDVar5 == (DSO_FUNC_TYPE)0x0 ||
            (pDVar6 = DSO_bind_func(DAT_032188c0,"diffie_hellman_generate_ioctl"),
            pDVar6 == (DSO_FUNC_TYPE)0x0)) ||
           ((pDVar7 = DSO_bind_func(DAT_032188c0,"diffie_hellman_agree_ioctl"),
            pDVar7 == (DSO_FUNC_TYPE)0x0 ||
            ((pDVar8 = DSO_bind_func(DAT_032188c0,"rsa_mod_exp_ioctl"), pDVar8 == (DSO_FUNC_TYPE)0x0
             || (pDVar9 = DSO_bind_func(DAT_032188c0,"rsa_mod_exp_crt_ioctl"),
                pDVar9 == (DSO_FUNC_TYPE)0x0)))))))) ||
         ((pDVar10 = DSO_bind_func(DAT_032188c0,"dsa_sign_ioctl"), pDVar10 == (DSO_FUNC_TYPE)0x0 ||
          ((((pDVar11 = DSO_bind_func(DAT_032188c0,"dsa_verify_ioctl"),
             pDVar11 == (DSO_FUNC_TYPE)0x0 ||
             (pDVar12 = DSO_bind_func(DAT_032188c0,"math_accelerate_ioctl"),
             pDVar12 == (DSO_FUNC_TYPE)0x0)) ||
            (pDVar13 = DSO_bind_func(DAT_032188c0,"rng_ioctl"), pDVar13 == (DSO_FUNC_TYPE)0x0)) ||
           (pDVar14 = DSO_bind_func(DAT_032188c0,"ubsec_max_key_len_ioctl"),
           pDVar14 == (DSO_FUNC_TYPE)0x0)))))) {
        if (DAT_032188a0 == 0) {
          DAT_032188a0 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_032188a0,0x69,0x67,"e_ubsec.c",0x1c2);
      }
      else {
        DAT_032188a8 = pDVar4;
        DAT_032188b0 = pDVar9;
        DAT_032188b8 = pDVar5;
        DAT_032188c8 = pDVar8;
        DAT_032188d0 = pDVar2;
        DAT_032188d8 = pDVar10;
        DAT_032188e0 = pDVar11;
        DAT_032188e8 = pDVar6;
        DAT_032188f0 = pDVar7;
        DAT_032188f8 = pDVar3;
        DAT_03218908 = pDVar12;
        DAT_03218910 = pDVar13;
        DAT_03218918 = pDVar14;
        uVar15 = (*pDVar4)("/dev/ubskey");
        if (0 < (int)uVar15) {
          iVar1 = (*DAT_03218918)(uVar15,&DAT_02c044b0);
          if (iVar1 == 0) {
            (*DAT_032188b8)(uVar15 & 0xffffffff);
            return 1;
          }
        }
        if (DAT_032188a0 == 0) {
          DAT_032188a0 = ERR_get_next_error_library();
        }
        ERR_put_error(DAT_032188a0,0x69,0x6c,"e_ubsec.c",0x1e1);
      }
    }
  }
  else {
    if (DAT_032188a0 == 0) {
      DAT_032188a0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_032188a0,0x69,100,"e_ubsec.c",0x196);
  }
  if (DAT_032188c0 != (DSO *)0x0) {
    DSO_free(DAT_032188c0);
  }
  DAT_03218918 = (DSO_FUNC_TYPE)0x0;
  DAT_032188f8 = (DSO_FUNC_TYPE)0x0;
  DAT_032188f0 = (DSO_FUNC_TYPE)0x0;
  DAT_032188e8 = (DSO_FUNC_TYPE)0x0;
  DAT_032188e0 = (DSO_FUNC_TYPE)0x0;
  DAT_032188d8 = (DSO_FUNC_TYPE)0x0;
  DAT_032188d0 = (DSO_FUNC_TYPE)0x0;
  DAT_032188c8 = (DSO_FUNC_TYPE)0x0;
  DAT_032188c0 = (DSO *)0x0;
  DAT_032188b8 = (DSO_FUNC_TYPE)0x0;
  DAT_032188b0 = (DSO_FUNC_TYPE)0x0;
  DAT_032188a8 = (DSO_FUNC_TYPE)0x0;
  return 0;
}




bool FUN_01ab6ce4(undefined8 param_1,int param_2,undefined8 param_3,char *param_4)

{
  int reason;
  int line;
  
  if (param_2 == 200) {
    if (param_4 == (char *)0x0) {
      if (DAT_032188a0 == 0) {
        DAT_032188a0 = ERR_get_next_error_library();
      }
      reason = 0x43;
      line = 0x227;
    }
    else {
      if (DAT_032188c0 == 0) {
        if (DAT_03218900 != (void *)0x0) {
          CRYPTO_free(DAT_03218900);
        }
        DAT_03218900 = (char *)0x0;
        DAT_03218900 = BUF_strdup(param_4);
        return DAT_03218900 != (char *)0x0;
      }
      if (DAT_032188a0 == 0) {
        DAT_032188a0 = ERR_get_next_error_library();
      }
      reason = 100;
      line = 0x22b;
    }
  }
  else {
    if (DAT_032188a0 == 0) {
      DAT_032188a0 = ERR_get_next_error_library();
    }
    reason = 0x66;
    line = 0x232;
  }
  ERR_put_error(DAT_032188a0,100,reason,"e_ubsec.c",line);
  return false;
}




int FUN_01ab6dd4(BIGNUM *param_1,BIGNUM *param_2,RSA *param_3,BN_CTX *param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  BIGNUM *pBVar9;
  RSA_METHOD *pRVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *a_02;
  ulong *puVar15;
  BIGNUM *a_03;
  ulong *puVar16;
  int local_64;
  
  a_00 = param_3->p;
  if ((((a_00 == (BIGNUM *)0x0) || (a = param_3->q, a == (BIGNUM *)0x0)) ||
      (a_02 = param_3->dmp1, a_02 == (BIGNUM *)0x0)) ||
     ((a_01 = param_3->dmq1, a_01 == (BIGNUM *)0x0 || (a_03 = param_3->iqmp, a_03 == (BIGNUM *)0x0))
     )) {
    if (DAT_032188a0 == 0) {
      DAT_032188a0 = ERR_get_next_error_library();
    }
    iVar2 = 0x6c;
    iVar3 = 0x68;
    iVar4 = 0x26a;
LAB_01ab6eac:
    ERR_put_error(DAT_032188a0,iVar2,iVar3,"e_ubsec.c",iVar4);
    iVar2 = 0;
  }
  else {
    iVar2 = BN_num_bits(a_00);
    local_64 = BN_num_bits(a);
    local_64 = local_64 + iVar2;
    if (DAT_02c044b0 < local_64) {
      if (DAT_032188a0 == 0) {
        DAT_032188a0 = ERR_get_next_error_library();
      }
      iVar2 = 0x6b;
      iVar3 = 0x287;
LAB_01ab7050:
      ERR_put_error(DAT_032188a0,0x6e,iVar2,"e_ubsec.c",iVar3);
    }
    else {
      iVar2 = a->top + a_00->top;
      if ((param_1->dmax <= iVar2) &&
         (pBVar9 = bn_expand2(param_1,iVar2 + 1), pBVar9 == (BIGNUM *)0x0)) {
        if (DAT_032188a0 == 0) {
          DAT_032188a0 = ERR_get_next_error_library();
        }
        iVar2 = 0x6e;
        iVar3 = 0x65;
        iVar4 = 0x28c;
        goto LAB_01ab6eac;
      }
      iVar2 = (*DAT_032188a8)("/dev/ubskey");
      pcVar1 = DAT_032188b0;
      if (iVar2 < 1) {
        if (DAT_032188a0 == 0) {
          DAT_032188a0 = ERR_get_next_error_library();
        }
        iVar2 = 0x6c;
        iVar3 = 0x292;
        goto LAB_01ab7050;
      }
      puVar11 = param_2->d;
      iVar3 = BN_num_bits(param_2);
      puVar12 = a_03->d;
      iVar4 = BN_num_bits(a_03);
      puVar13 = a_02->d;
      iVar5 = BN_num_bits(a_02);
      puVar14 = a_00->d;
      iVar6 = BN_num_bits(a_00);
      puVar16 = a_01->d;
      iVar7 = BN_num_bits(a_01);
      puVar15 = a->d;
      iVar8 = BN_num_bits(a);
      iVar3 = (*pcVar1)(iVar2,puVar11,iVar3,puVar12,iVar4,puVar13,iVar5,puVar14,iVar6,puVar16,iVar7,
                        puVar15,iVar8,param_1->d,&local_64);
      if (iVar3 == 0) {
        (*DAT_032188b8)(iVar2);
        iVar3 = BN_num_bits(a_00);
        iVar4 = BN_num_bits(a);
        iVar2 = iVar3 + iVar4 + 0x3f;
        iVar3 = iVar3 + iVar4 + 0x7e;
        if (-1 < iVar2) {
          iVar3 = iVar2;
        }
        param_1->top = iVar3 >> 6;
        return 1;
      }
      if (DAT_032188a0 == 0) {
        DAT_032188a0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_032188a0,0x6e,0x6a,"e_ubsec.c",0x29f);
      (*DAT_032188b8)(iVar2);
    }
    pRVar10 = RSA_PKCS1_SSLeay();
    iVar2 = (*pRVar10->rsa_mod_exp)(param_1,param_2,param_3,param_4);
  }
  return iVar2;
}

