// functions/01add — 5 functions
#include "libGameKindred.h"




bool FUN_01add2f4(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = CRYPTO_malloc(0x20,"dsa_pmeth.c",0x54);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    puVar1[3] = 0;
    *puVar1 = 0xa000000400;
    *(undefined8 **)(param_1 + 0x40) = puVar1 + 2;
    *(undefined8 **)(param_1 + 0x28) = puVar1;
    *(undefined4 *)(param_1 + 0x48) = 2;
    puVar2 = *(undefined8 **)(param_2 + 0x28);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[3] = puVar2[3];
  }
  return puVar1 != (undefined8 *)0x0;
}




int FUN_01add384(long param_1,EVP_PKEY *param_2)

{
  int iVar1;
  DSA *r;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [24];
  
  piVar2 = *(int **)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x38) == 0) {
    puVar3 = (undefined1 *)0x0;
    r = DSA_new();
  }
  else {
    puVar3 = auStack_48;
    evp_pkey_set_cb_translate(auStack_48,param_1);
    r = DSA_new();
  }
  if (r == (DSA *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = dsa_builtin_paramgen
                      (r,(long)*piVar2,(long)piVar2[1],*(undefined8 *)(piVar2 + 2),0,0,0,0,0,puVar3)
    ;
    if (iVar1 == 0) {
      DSA_free(r);
    }
    else {
      EVP_PKEY_assign(param_2,0x74,r);
    }
  }
  return iVar1;
}




int FUN_01add438(long param_1,EVP_PKEY *param_2)

{
  int iVar1;
  DSA *key;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    ERR_put_error(10,0x79,0x6b,"dsa_pmeth.c",0x10c);
  }
  else {
    key = DSA_new();
    if (key != (DSA *)0x0) {
      EVP_PKEY_assign(param_2,0x74,key);
      iVar1 = EVP_PKEY_copy_parameters(param_2,*(EVP_PKEY **)(param_1 + 0x10));
      if (iVar1 != 0) {
        iVar1 = DSA_generate_key((DSA *)(param_2->pkey).rsa);
        return iVar1;
      }
    }
  }
  return 0;
}




undefined8 * FUN_01adda14(void)

{
  undefined8 *obj;
  ENGINE *e;
  ECDSA_METHOD *pEVar1;
  
  obj = CRYPTO_malloc(0x30,"ecs_lib.c",0x77);
  if (obj == (undefined8 *)0x0) {
    ERR_put_error(0x2a,100,0x41,"ecs_lib.c",0x79);
    return (undefined8 *)0x0;
  }
  *obj = 0;
  if (DAT_03218968 == (ECDSA_METHOD *)0x0) {
    DAT_03218968 = ECDSA_OpenSSL();
  }
  obj[3] = DAT_03218968;
  obj[1] = 0;
  e = ENGINE_get_default_ECDSA();
  obj[1] = e;
  if (e == (ENGINE *)0x0) {
    pEVar1 = (ECDSA_METHOD *)obj[3];
  }
  else {
    pEVar1 = ENGINE_get_ECDSA(e);
    obj[3] = pEVar1;
    if (pEVar1 == (ECDSA_METHOD *)0x0) {
      ERR_put_error(0x2a,100,0x26,"ecs_lib.c",0x87);
      ENGINE_finish((ENGINE *)obj[1]);
      CRYPTO_free(obj);
      return (undefined8 *)0x0;
    }
  }
  *(undefined4 *)(obj + 2) = *(undefined4 *)(pEVar1 + 0x20);
  CRYPTO_new_ex_data(0xc,obj,(CRYPTO_EX_DATA *)(obj + 4));
  return obj;
}




ECDSA_SIG * FUN_01addd94(uchar *param_1,int param_2,BIGNUM *param_3,BIGNUM *param_4,EC_KEY *param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  EC_GROUP *group;
  BIGNUM *a;
  ECDSA_SIG *sig;
  BN_CTX *ctx;
  BIGNUM *order;
  BIGNUM *r;
  BIGNUM *ret;
  BIGNUM *pBVar4;
  int iVar5;
  BIGNUM *r_00;
  BIGNUM *local_68;
  
  local_68 = (BIGNUM *)0x0;
  lVar3 = ecdsa_check(param_5);
  group = EC_KEY_get0_group(param_5);
  a = EC_KEY_get0_private_key(param_5);
  if (((lVar3 == 0) || (group == (EC_GROUP *)0x0)) || (a == (BIGNUM *)0x0)) {
    ERR_put_error(0x2a,0x65,0x43,"ecs_ossl.c",0xfd);
    return (ECDSA_SIG *)0x0;
  }
  sig = ECDSA_SIG_new();
  if (sig == (ECDSA_SIG *)0x0) {
    ERR_put_error(0x2a,0x65,0x41,"ecs_ossl.c",0x103);
    return (ECDSA_SIG *)0x0;
  }
  r_00 = sig->s;
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    r = (BIGNUM *)0x0;
    order = (BIGNUM *)0x0;
LAB_01addfa4:
    ERR_put_error(0x2a,0x65,0x41,"ecs_ossl.c",0x10a);
    ret = (BIGNUM *)0x0;
    ECDSA_SIG_free(sig);
    sig = (ECDSA_SIG *)0x0;
joined_r0x01ade240:
    if (ctx == (BN_CTX *)0x0) goto LAB_01addfdc;
  }
  else {
    order = BN_new();
    if ((order == (BIGNUM *)0x0) || (r = BN_new(), r == (BIGNUM *)0x0)) {
      r = (BIGNUM *)0x0;
      goto LAB_01addfa4;
    }
    ret = BN_new();
    if (ret == (BIGNUM *)0x0) goto LAB_01addfa4;
    iVar1 = EC_GROUP_get_order(group,order,ctx);
    if (iVar1 == 0) {
      iVar1 = 0x10;
      iVar5 = 0x10f;
LAB_01ade198:
      ERR_put_error(0x2a,0x65,iVar1,"ecs_ossl.c",iVar5);
LAB_01ade230:
      ECDSA_SIG_free(sig);
      sig = (ECDSA_SIG *)0x0;
      goto joined_r0x01ade240;
    }
    uVar2 = BN_num_bits(order);
    if ((int)uVar2 < param_2 * 8) {
      param_2 = uVar2 + 0xe;
      if (-1 < (int)(uVar2 + 7)) {
        param_2 = uVar2 + 7;
      }
      param_2 = param_2 >> 3;
    }
    pBVar4 = BN_bin2bn(param_1,param_2,ret);
    if (pBVar4 == (BIGNUM *)0x0) {
      iVar1 = 3;
      iVar5 = 0x119;
      goto LAB_01ade198;
    }
    if (((int)uVar2 < param_2 * 8) && (iVar1 = BN_rshift(ret,ret,8 - (uVar2 & 7)), iVar1 == 0)) {
      iVar1 = 3;
      iVar5 = 0x11e;
      goto LAB_01ade198;
    }
    if ((param_3 == (BIGNUM *)0x0) || (param_4 == (BIGNUM *)0x0)) {
      do {
        iVar1 = ECDSA_sign_setup(param_5,ctx,&local_68,&sig->r);
        pBVar4 = local_68;
        if (iVar1 == 0) {
          iVar1 = 0x2a;
          iVar5 = 0x124;
          goto LAB_01ade22c;
        }
        iVar1 = BN_mod_mul(r,a,sig->r,order,ctx);
        if (iVar1 == 0) goto LAB_01ade1a4;
        iVar1 = BN_mod_add_quick(r_00,r,ret,order);
        if (iVar1 == 0) goto LAB_01ade1c0;
        iVar1 = BN_mod_mul(r_00,r_00,pBVar4,order,ctx);
        if (iVar1 == 0) goto LAB_01ade1dc;
        if (r_00->top != 0) goto joined_r0x01ade240;
      } while (param_3 == (BIGNUM *)0x0 || param_4 == (BIGNUM *)0x0);
LAB_01ade0ec:
      iVar1 = 0x6a;
      iVar5 = 0x143;
      goto LAB_01ade22c;
    }
    if (param_3 == (BIGNUM *)0x0 || param_4 == (BIGNUM *)0x0) {
      do {
        pBVar4 = BN_copy(sig->r,param_4);
        if (pBVar4 == (BIGNUM *)0x0) goto LAB_01ade1f8;
        iVar1 = BN_mod_mul(r,a,sig->r,order,ctx);
        if (iVar1 == 0) goto LAB_01ade1a4;
        iVar1 = BN_mod_add_quick(r_00,r,ret,order);
        if (iVar1 == 0) goto LAB_01ade1c0;
        iVar1 = BN_mod_mul(r_00,r_00,param_3,order,ctx);
        if (iVar1 == 0) goto LAB_01ade1dc;
      } while (r_00->top == 0);
      goto joined_r0x01ade240;
    }
    pBVar4 = BN_copy(sig->r,param_4);
    if (pBVar4 == (BIGNUM *)0x0) {
LAB_01ade1f8:
      iVar1 = 0x41;
      iVar5 = 299;
LAB_01ade22c:
      ERR_put_error(0x2a,0x65,iVar1,"ecs_ossl.c",iVar5);
      goto LAB_01ade230;
    }
    iVar1 = BN_mod_mul(r,a,sig->r,order,ctx);
    if (iVar1 == 0) {
LAB_01ade1a4:
      iVar1 = 3;
      iVar5 = 0x131;
      goto LAB_01ade22c;
    }
    iVar1 = BN_mod_add_quick(r_00,r,ret,order);
    if (iVar1 == 0) {
LAB_01ade1c0:
      iVar1 = 3;
      iVar5 = 0x135;
      goto LAB_01ade22c;
    }
    iVar1 = BN_mod_mul(r_00,r_00,param_3,order,ctx);
    if (iVar1 == 0) {
LAB_01ade1dc:
      iVar1 = 3;
      iVar5 = 0x139;
      goto LAB_01ade22c;
    }
    if (r_00->top == 0) goto LAB_01ade0ec;
  }
  BN_CTX_free(ctx);
LAB_01addfdc:
  if (ret != (BIGNUM *)0x0) {
    BN_clear_free(ret);
  }
  if (r != (BIGNUM *)0x0) {
    BN_clear_free(r);
  }
  if (order != (BIGNUM *)0x0) {
    BN_free(order);
  }
  if (local_68 != (BIGNUM *)0x0) {
    BN_clear_free(local_68);
  }
  return sig;
}

