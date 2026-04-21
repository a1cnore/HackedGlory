// functions/01a5e — 5 functions
#include "libGameKindred.h"




DSA_SIG * FUN_01a5e01c(uchar *param_1,int param_2,DSA *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  BIGNUM *r;
  BN_CTX *ctx_in;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  DSA_SIG *pDVar6;
  BIGNUM BStack_80;
  BIGNUM BStack_68;
  BIGNUM *local_50;
  BIGNUM *local_48;
  
  local_50 = (BIGNUM *)0x0;
  local_48 = (BIGNUM *)0x0;
  BN_init(&BStack_68);
  BN_init(&BStack_80);
  if (((param_3->p == (BIGNUM *)0x0) || (param_3->q == (BIGNUM *)0x0)) ||
     (param_3->g == (BIGNUM *)0x0)) {
    r = (BIGNUM *)0x0;
    ctx_in = (BN_CTX *)0x0;
    iVar3 = 0x65;
  }
  else {
    r = BN_new();
    if (r == (BIGNUM *)0x0) {
      ctx_in = (BN_CTX *)0x0;
    }
    else {
      ctx_in = BN_CTX_new();
      if (ctx_in != (BN_CTX *)0x0) {
        do {
          pBVar4 = param_3->kinv;
          if ((pBVar4 == (BIGNUM *)0x0) || (pBVar5 = param_3->r, pBVar5 == (BIGNUM *)0x0)) {
            iVar3 = DSA_sign_setup(param_3,ctx_in,&local_48,&local_50);
            bVar1 = false;
            if (iVar3 == 0) goto LAB_01a5e1b8;
          }
          else {
            bVar1 = true;
            param_3->kinv = (BIGNUM *)0x0;
            param_3->r = (BIGNUM *)0x0;
            local_50 = pBVar5;
            local_48 = pBVar4;
          }
          iVar2 = BN_num_bits(param_3->q);
          iVar3 = iVar2 + 0xe;
          if (-1 < iVar2 + 7) {
            iVar3 = iVar2 + 7;
          }
          if (iVar3 >> 3 < param_2) {
            iVar3 = BN_num_bits(param_3->q);
            param_2 = iVar3 + 0xe;
            if (-1 < iVar3 + 7) {
              param_2 = iVar3 + 7;
            }
            param_2 = param_2 >> 3;
          }
          pBVar4 = BN_bin2bn(param_1,param_2,&BStack_68);
          if (((pBVar4 == (BIGNUM *)0x0) ||
              (iVar3 = BN_mod_mul(&BStack_80,param_3->priv_key,local_50,param_3->q,ctx_in),
              iVar3 == 0)) ||
             ((iVar3 = BN_add(r,&BStack_80,&BStack_68), iVar3 == 0 ||
              (((iVar3 = BN_cmp(r,param_3->q), 0 < iVar3 &&
                (iVar3 = BN_sub(r,r,param_3->q), iVar3 == 0)) ||
               (iVar3 = BN_mod_mul(r,r,local_48,param_3->q,ctx_in), iVar3 == 0))))))
          goto LAB_01a5e1b8;
          if ((local_50->top != 0) && (r->top != 0)) {
            pDVar6 = DSA_SIG_new();
            if (pDVar6 == (DSA_SIG *)0x0) goto LAB_01a5e1b8;
            pDVar6->r = local_50;
            pDVar6->s = r;
            if (ctx_in == (BN_CTX *)0x0) goto LAB_01a5e1f4;
            goto LAB_01a5e1ec;
          }
          iVar3 = 0x6e;
        } while (!bVar1);
        goto LAB_01a5e1bc;
      }
    }
LAB_01a5e1b8:
    iVar3 = 3;
  }
LAB_01a5e1bc:
  ERR_put_error(10,0x70,iVar3,"dsa_ossl.c",0xd1);
  BN_free(local_50);
  BN_free(r);
  pDVar6 = (DSA_SIG *)0x0;
  if (ctx_in != (BN_CTX *)0x0) {
LAB_01a5e1ec:
    BN_CTX_free(ctx_in);
  }
LAB_01a5e1f4:
  BN_clear_free(&BStack_68);
  BN_clear_free(&BStack_80);
  if (local_48 != (BIGNUM *)0x0) {
    BN_clear_free(local_48);
  }
  return pDVar6;
}




ulong FUN_01a5e4dc(uchar *param_1,uint param_2,undefined8 *param_3,long param_4)

{
  uint len;
  uint uVar1;
  int iVar2;
  BN_CTX *ctx;
  BIGNUM *pBVar3;
  int line;
  BN_MONT_CTX *m_ctx;
  code *pcVar4;
  ulong uVar5;
  BIGNUM BStack_98;
  BIGNUM BStack_80;
  BIGNUM BStack_68;
  
  if (((*(long *)(param_4 + 0x18) == 0) || (*(BIGNUM **)(param_4 + 0x20) == (BIGNUM *)0x0)) ||
     (*(long *)(param_4 + 0x28) == 0)) {
    iVar2 = 0x65;
    line = 0x143;
LAB_01a5e588:
    ERR_put_error(10,0x71,iVar2,"dsa_ossl.c",line);
    return 0xffffffff;
  }
  uVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x20));
  if (((uVar1 != 0xa0) && (uVar1 != 0xe0)) && (uVar1 != 0x100)) {
    iVar2 = 0x66;
    line = 0x14a;
    goto LAB_01a5e588;
  }
  iVar2 = BN_num_bits(*(BIGNUM **)(param_4 + 0x18));
  if (10000 < iVar2) {
    iVar2 = 0x67;
    line = 0x14f;
    goto LAB_01a5e588;
  }
  BN_init(&BStack_68);
  BN_init(&BStack_80);
  BN_init(&BStack_98);
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    ERR_put_error(10,0x71,3,"dsa_ossl.c",0x192);
    uVar5 = 0xffffffff;
    goto LAB_01a5e744;
  }
  pBVar3 = (BIGNUM *)*param_3;
  if (pBVar3->top == 0) {
LAB_01a5e738:
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (pBVar3->neg == 0) {
      iVar2 = BN_ucmp(pBVar3,*(BIGNUM **)(param_4 + 0x20));
      uVar5 = 0;
      if (iVar2 < 0) {
        pBVar3 = (BIGNUM *)param_3[1];
        if (pBVar3->top == 0) goto LAB_01a5e738;
        uVar5 = 0;
        if (pBVar3->neg == 0) {
          iVar2 = BN_ucmp(pBVar3,*(BIGNUM **)(param_4 + 0x20));
          uVar5 = 0;
          if (iVar2 < 0) {
            pBVar3 = BN_mod_inverse(&BStack_80,(BIGNUM *)param_3[1],*(BIGNUM **)(param_4 + 0x20),ctx
                                   );
            if (pBVar3 != (BIGNUM *)0x0) {
              len = uVar1 >> 3;
              if ((int)param_2 <= (int)(uVar1 >> 3)) {
                len = param_2;
              }
              pBVar3 = BN_bin2bn(param_1,len,&BStack_68);
              if (((pBVar3 != (BIGNUM *)0x0) &&
                  (iVar2 = BN_mod_mul(&BStack_68,&BStack_68,&BStack_80,*(BIGNUM **)(param_4 + 0x20),
                                      ctx), iVar2 != 0)) &&
                 ((iVar2 = BN_mod_mul(&BStack_80,(BIGNUM *)*param_3,&BStack_80,
                                      *(BIGNUM **)(param_4 + 0x20),ctx), iVar2 != 0 &&
                  ((m_ctx = (BN_MONT_CTX *)0x0, (*(byte *)(param_4 + 0x50) & 1) == 0 ||
                   (m_ctx = BN_MONT_CTX_set_locked
                                      ((BN_MONT_CTX **)(param_4 + 0x58),8,
                                       *(BIGNUM **)(param_4 + 0x18),ctx),
                   m_ctx != (BN_MONT_CTX *)0x0)))))) {
                pcVar4 = *(code **)(*(long *)(param_4 + 0x78) + 0x20);
                if (pcVar4 == (code *)0x0) {
                  iVar2 = BN_mod_exp2_mont(&BStack_98,*(BIGNUM **)(param_4 + 0x28),&BStack_68,
                                           *(BIGNUM **)(param_4 + 0x30),&BStack_80,
                                           *(BIGNUM **)(param_4 + 0x18),ctx,m_ctx);
                }
                else {
                  iVar2 = (*pcVar4)(param_4,&BStack_98,*(BIGNUM **)(param_4 + 0x28),&BStack_68,
                                    *(BIGNUM **)(param_4 + 0x30),&BStack_80,
                                    *(BIGNUM **)(param_4 + 0x18),ctx,m_ctx);
                }
                if ((iVar2 != 0) &&
                   (iVar2 = BN_div((BIGNUM *)0x0,&BStack_68,&BStack_98,*(BIGNUM **)(param_4 + 0x20),
                                   ctx), iVar2 != 0)) {
                  iVar2 = BN_ucmp(&BStack_68,(BIGNUM *)*param_3);
                  uVar5 = (ulong)(iVar2 == 0);
                  goto LAB_01a5e73c;
                }
              }
            }
            ERR_put_error(10,0x71,3,"dsa_ossl.c",0x192);
            uVar5 = 0xffffffff;
          }
        }
      }
    }
  }
LAB_01a5e73c:
  BN_CTX_free(ctx);
LAB_01a5e744:
  BN_free(&BStack_68);
  BN_free(&BStack_80);
  BN_free(&BStack_98);
  return uVar5;
}




undefined8 FUN_01a5e7fc(BN_MONT_CTX *param_1)

{
  BN_MONT_CTX_free(param_1);
  return 1;
}




undefined4 FUN_01a5ece8(long param_1)

{
  bool bVar1;
  int iVar2;
  BN_CTX *ctx;
  BIGNUM *pBVar3;
  long lVar4;
  BIGNUM *rnd;
  BIGNUM *a;
  undefined4 uVar5;
  BN_MONT_CTX *pBVar6;
  BIGNUM local_58;
  
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    a = (BIGNUM *)0x0;
    rnd = (BIGNUM *)0x0;
  }
  else {
    rnd = *(BIGNUM **)(param_1 + 0x28);
    if (rnd == (BIGNUM *)0x0) {
      rnd = BN_new();
      if (rnd == (BIGNUM *)0x0) {
        a = (BIGNUM *)0x0;
        goto LAB_01a5ee8c;
      }
      bVar1 = true;
      a = *(BIGNUM **)(param_1 + 0x20);
    }
    else {
      bVar1 = false;
      a = *(BIGNUM **)(param_1 + 0x20);
    }
    if (((a != (BIGNUM *)0x0) || (a = BN_new(), a != (BIGNUM *)0x0)) &&
       ((pBVar6 = (BN_MONT_CTX *)0x0, (*(byte *)(param_1 + 0x30) & 1) == 0 ||
        (pBVar6 = BN_MONT_CTX_set_locked
                            ((BN_MONT_CTX **)(param_1 + 0x38),0x1a,*(BIGNUM **)(param_1 + 8),ctx),
        pBVar6 != (BN_MONT_CTX *)0x0)))) {
      if (bVar1) {
        pBVar3 = *(BIGNUM **)(param_1 + 0x40);
        if (pBVar3 == (BIGNUM *)0x0) {
          lVar4 = *(long *)(param_1 + 0x18);
          if (lVar4 == 0) {
            iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
            lVar4 = (long)(iVar2 + -1);
          }
          iVar2 = BN_rand(rnd,(int)lVar4,0,0);
          if (iVar2 != 0) goto LAB_01a5edf4;
        }
        else {
          while (iVar2 = BN_rand_range(rnd,pBVar3), iVar2 != 0) {
            if ((rnd->top != 0) && (((rnd->top != 1 || (*rnd->d != 1)) || (rnd->neg != 0))))
            goto LAB_01a5edf4;
            pBVar3 = *(BIGNUM **)(param_1 + 0x40);
          }
        }
      }
      else {
LAB_01a5edf4:
        pBVar3 = rnd;
        if ((*(byte *)(param_1 + 0x30) >> 1 & 1) == 0) {
          pBVar3 = &local_58;
          BN_init(&local_58);
          local_58.d = rnd->d;
          local_58.top = rnd->top;
          local_58.dmax = rnd->dmax;
          local_58.neg = rnd->neg;
          local_58.flags = rnd->flags & 0xfffffff8U | local_58.flags & 1U | 6;
        }
        iVar2 = (**(code **)(*(long *)(param_1 + 0x80) + 0x18))
                          (param_1,a,*(undefined8 *)(param_1 + 0x10),pBVar3,
                           *(undefined8 *)(param_1 + 8),ctx,pBVar6);
        if (iVar2 != 0) {
          *(BIGNUM **)(param_1 + 0x20) = a;
          *(BIGNUM **)(param_1 + 0x28) = rnd;
          uVar5 = 1;
          goto joined_r0x01a5eeac;
        }
      }
    }
  }
LAB_01a5ee8c:
  ERR_put_error(5,0x67,3,"dh_key.c",0xc6);
  uVar5 = 0;
joined_r0x01a5eeac:
  if ((a != (BIGNUM *)0x0) && (*(long *)(param_1 + 0x20) == 0)) {
    BN_free(a);
  }
  if ((rnd != (BIGNUM *)0x0) && (*(long *)(param_1 + 0x28) == 0)) {
    BN_free(rnd);
  }
  BN_CTX_free(ctx);
  return uVar5;
}




int FUN_01a5eee8(uchar *param_1,BIGNUM *param_2,DH *param_3)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *r;
  int line;
  BN_MONT_CTX *m_ctx;
  int local_44;
  
  iVar1 = BN_num_bits(param_3->p);
  if (10000 < iVar1) {
    ERR_put_error(5,0x66,0x67,"dh_key.c",0xd9);
    return -1;
  }
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    return -1;
  }
  BN_CTX_start(ctx);
  r = BN_CTX_get(ctx);
  if (param_3->priv_key == (BIGNUM *)0x0) {
    iVar1 = 100;
    line = 0xe4;
LAB_01a5f060:
    ERR_put_error(5,0x66,iVar1,"dh_key.c",line);
  }
  else {
    m_ctx = (BN_MONT_CTX *)0x0;
    if ((param_3->flags & 1) == 0) {
LAB_01a5efac:
      iVar1 = DH_check_pub_key(param_3,param_2,&local_44);
      if ((iVar1 == 0) || (local_44 != 0)) {
        iVar1 = 0x66;
        line = 0xf4;
      }
      else {
        iVar1 = (*param_3->meth->bn_mod_exp)
                          (param_3,r,param_2,param_3->priv_key,param_3->p,ctx,m_ctx);
        if (iVar1 != 0) {
          iVar1 = BN_bn2bin(r,param_1);
          goto LAB_01a5f068;
        }
        iVar1 = 3;
        line = 0xfa;
      }
      goto LAB_01a5f060;
    }
    m_ctx = BN_MONT_CTX_set_locked(&param_3->method_mont_p,0x1a,param_3->p,ctx);
    if (((byte)param_3->flags >> 1 & 1) == 0) {
      param_3->priv_key->flags = param_3->priv_key->flags | 4;
    }
    if (m_ctx != (BN_MONT_CTX *)0x0) goto LAB_01a5efac;
  }
  iVar1 = -1;
LAB_01a5f068:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  return iVar1;
}

