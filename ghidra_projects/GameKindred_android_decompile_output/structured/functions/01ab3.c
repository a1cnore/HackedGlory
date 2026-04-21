// functions/01ab3 — 5 functions
#include "libGameKindred.h"




undefined4 FUN_01ab301c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_03218778 != (void *)0x0) {
    CRYPTO_free(DAT_03218778);
  }
  DAT_03218778 = (void *)0x0;
  if (DAT_03218780 == (DSO *)0x0) {
    if (DAT_03218740 == 0) {
      DAT_03218740 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218740,0x65,0x6b,"e_chil.c",0x288);
    uVar2 = 0;
  }
  else {
    (*DAT_03218790)(DAT_03218748);
    iVar1 = DSO_free(DAT_03218780);
    if (iVar1 == 0) {
      if (DAT_03218740 == 0) {
        DAT_03218740 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_03218740,0x65,0x68,"e_chil.c",0x28e);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  if (DAT_032187a8 != (BIO *)0x0) {
    BIO_free(DAT_032187a8);
  }
  DAT_032187a0 = 0;
  DAT_03218788 = 0;
  DAT_03218780 = (DSO *)0x0;
  DAT_03218798 = 0;
  DAT_03218790 = (code *)0x0;
  DAT_03218758 = 0;
  DAT_03218750 = 0;
  DAT_03218768 = 0;
  DAT_03218760 = 0;
  DAT_03218770 = 0;
  return uVar2;
}




EVP_PKEY * FUN_01ab3484(ENGINE *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  RSA *r;
  BIGNUM *pBVar4;
  EVP_PKEY *pkey;
  int iVar5;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined1 *local_480;
  undefined8 local_478;
  undefined1 auStack_470 [1024];
  ulong *local_70;
  ulong local_68;
  ulong *local_60;
  ulong local_58;
  
  local_480 = auStack_470;
  local_478 = 0x400;
  if (DAT_03218748 == 0) {
    if (DAT_03218740 == 0) {
      DAT_03218740 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218740,0x69,0x6a,"e_chil.c",0x316);
    return (EVP_PKEY *)0x0;
  }
  plVar3 = CRYPTO_malloc(8,"e_chil.c",0x31a);
  if (plVar3 == (long *)0x0) {
    if (DAT_03218740 == 0) {
      DAT_03218740 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218740,0x69,0x41,"e_chil.c",0x31c);
    return (EVP_PKEY *)0x0;
  }
  local_490 = param_3;
  uStack_488 = param_4;
  iVar2 = (*DAT_03218798)(DAT_03218748,param_2,plVar3,&local_480,&local_490);
  if (iVar2 != 0) {
    if (DAT_03218740 == 0) {
      DAT_03218740 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218740,0x69,0x66,"e_chil.c",0x322);
    ERR_add_error_data(1,local_480);
    return (EVP_PKEY *)0x0;
  }
  if (*plVar3 == 0) {
    if (DAT_03218740 == 0) {
      DAT_03218740 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218740,0x69,0x6d,"e_chil.c",0x327);
    return (EVP_PKEY *)0x0;
  }
  r = RSA_new_method(param_1);
  RSA_set_ex_data(r,DAT_02c03c70,plVar3);
  pBVar4 = BN_new();
  r->e = pBVar4;
  pBVar4 = BN_new();
  r->n = pBVar4;
  r->flags = r->flags | 0x20;
  local_58 = (long)r->e->dmax << 3;
  local_60 = r->e->d;
  local_68 = (long)pBVar4->dmax << 3;
  local_70 = pBVar4->d;
  iVar2 = (*DAT_032187a0)(*plVar3,&local_70,&local_60,&local_480);
  if (iVar2 == -3) {
    bn_expand2(r->e,(int)(local_58 >> 3));
    bn_expand2(r->n,(int)(local_68 >> 3));
    local_58 = (long)r->e->dmax << 3;
    local_60 = r->e->d;
    local_68 = (long)r->n->dmax << 3;
    local_70 = r->n->d;
    iVar2 = (*DAT_032187a0)(*plVar3,&local_70,&local_60,&local_480);
    if (iVar2 != 0) {
      if (DAT_03218740 == 0) {
        DAT_03218740 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_03218740,0x69,0x66,"e_chil.c",0x340);
      ERR_add_error_data(1,local_480);
      goto LAB_01ab374c;
    }
    pBVar4 = r->e;
    iVar2 = (int)(local_58 >> 3);
    pBVar4->top = iVar2;
    if (0 < iVar2) {
      plVar3 = (long *)((long)pBVar4->d + ((long)(((local_58 >> 3) << 0x20) + -0x100000000) >> 0x1d)
                       );
      iVar2 = iVar2 + 1;
      do {
        if (*plVar3 != 0) {
          iVar5 = iVar2 + -1;
          break;
        }
        iVar1 = iVar2 + -1;
        iVar5 = iVar2 + -2;
        plVar3 = plVar3 + -1;
        iVar2 = iVar1;
      } while (iVar5 != 0 && 0 < iVar1);
      pBVar4->top = iVar5;
    }
    pBVar4 = r->n;
    iVar2 = (int)(local_68 >> 3);
    pBVar4->top = iVar2;
    if (0 < iVar2) {
      plVar3 = (long *)((long)pBVar4->d + ((long)(((local_68 >> 3) << 0x20) + -0x100000000) >> 0x1d)
                       );
      iVar2 = iVar2 + 1;
      do {
        if (*plVar3 != 0) {
          iVar5 = iVar2 + -1;
          break;
        }
        iVar1 = iVar2 + -1;
        iVar5 = iVar2 + -2;
        plVar3 = plVar3 + -1;
        iVar2 = iVar1;
      } while (iVar5 != 0 && 0 < iVar1);
      pBVar4->top = iVar5;
    }
    pkey = EVP_PKEY_new();
    if (pkey != (EVP_PKEY *)0x0) {
      EVP_PKEY_assign(pkey,6,r);
      return pkey;
    }
    if (DAT_03218740 == 0) {
      DAT_03218740 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218740,0x69,0x66,"e_chil.c",0x34b);
  }
  else {
    if (DAT_03218740 == 0) {
      DAT_03218740 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218740,0x69,0x66,"e_chil.c",0x335);
    ERR_add_error_data(1,local_480);
  }
  if (r == (RSA *)0x0) {
    return (EVP_PKEY *)0x0;
  }
LAB_01ab374c:
  RSA_free(r);
  return (EVP_PKEY *)0x0;
}




undefined8 FUN_01ab393c(BIGNUM *param_1,undefined8 *param_2,RSA *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 in_x7;
  long *plVar4;
  int iVar5;
  int iVar6;
  ulong *local_460;
  ulong local_458;
  undefined1 *local_450;
  undefined8 local_448;
  undefined1 auStack_440 [1024];
  
  local_450 = auStack_440;
  local_448 = 0x400;
  if (DAT_03218748 == 0) {
    if (DAT_03218740 == 0) {
      DAT_03218740 = ERR_get_next_error_library();
    }
    iVar2 = 0x6a;
    iVar5 = 0x3cb;
LAB_01ab3bac:
    ERR_put_error(DAT_03218740,0x6d,iVar2,"e_chil.c",iVar5);
  }
  else {
    puVar3 = RSA_get_ex_data(param_3,DAT_02c03c70);
    if (puVar3 == (undefined8 *)0x0) {
      if ((((param_3->p == (BIGNUM *)0x0) || (param_3->q == (BIGNUM *)0x0)) ||
          (param_3->dmp1 == (BIGNUM *)0x0)) ||
         ((param_3->dmq1 == (BIGNUM *)0x0 || (param_3->iqmp == (BIGNUM *)0x0)))) {
        if (DAT_03218740 == 0) {
          DAT_03218740 = ERR_get_next_error_library();
        }
        iVar2 = 0x69;
        iVar5 = 0x400;
        goto LAB_01ab3bac;
      }
      bn_expand2(param_1,param_3->n->top);
      local_458 = (long)param_1->dmax << 3;
      local_460 = param_1->d;
      iVar2 = (*DAT_03218758)(DAT_03218748,*param_2,(long)*(int *)(param_2 + 1) << 3,param_3->p->d,
                              (long)param_3->p->top << 3,param_3->q->d,(long)param_3->q->top << 3,
                              in_x7,param_3->dmp1->d,(long)param_3->dmp1->top << 3,param_3->dmq1->d,
                              (long)param_3->dmq1->top << 3,param_3->iqmp->d,
                              (long)param_3->iqmp->top << 3,&local_460,&local_450);
      iVar5 = (int)(local_458 >> 3);
      param_1->top = iVar5;
      if (0 < iVar5) {
        plVar4 = (long *)((long)param_1->d +
                         ((long)(((local_458 >> 3) << 0x20) + -0x100000000) >> 0x1d));
        iVar5 = iVar5 + 1;
        do {
          if (*plVar4 != 0) {
            iVar6 = iVar5 + -1;
            break;
          }
          iVar1 = iVar5 + -1;
          iVar6 = iVar5 + -2;
          plVar4 = plVar4 + -1;
          iVar5 = iVar1;
        } while (iVar6 != 0 && 0 < iVar1);
        param_1->top = iVar6;
      }
      if (-1 < iVar2) {
        return 1;
      }
      if (iVar2 == -2) {
        if (DAT_03218740 == 0) {
          DAT_03218740 = ERR_get_next_error_library();
        }
        iVar2 = 0x70;
        iVar5 = 0x41e;
      }
      else {
        if (DAT_03218740 == 0) {
          DAT_03218740 = ERR_get_next_error_library();
        }
        iVar2 = 0x6f;
        iVar5 = 0x421;
      }
    }
    else {
      if (param_3->n == (BIGNUM *)0x0) {
        if (DAT_03218740 == 0) {
          DAT_03218740 = ERR_get_next_error_library();
        }
        iVar2 = 0x69;
        iVar5 = 0x3db;
        goto LAB_01ab3bac;
      }
      bn_expand2(param_1,param_3->n->top);
      local_458 = (long)param_1->dmax << 3;
      local_460 = param_1->d;
      iVar2 = (*DAT_03218750)(*param_2,(long)*(int *)(param_2 + 1) << 3,*puVar3,&local_460,
                              &local_450);
      iVar5 = (int)(local_458 >> 3);
      param_1->top = iVar5;
      if (0 < iVar5) {
        plVar4 = (long *)((long)param_1->d +
                         ((long)(((local_458 >> 3) << 0x20) + -0x100000000) >> 0x1d));
        iVar5 = iVar5 + 1;
        do {
          if (*plVar4 != 0) {
            iVar6 = iVar5 + -1;
            break;
          }
          iVar1 = iVar5 + -1;
          iVar6 = iVar5 + -2;
          plVar4 = plVar4 + -1;
          iVar5 = iVar1;
        } while (iVar6 != 0 && 0 < iVar1);
        param_1->top = iVar6;
      }
      if (-1 < iVar2) {
        return 1;
      }
      if (iVar2 == -2) {
        if (DAT_03218740 == 0) {
          DAT_03218740 = ERR_get_next_error_library();
        }
        iVar2 = 0x70;
        iVar5 = 0x3f3;
      }
      else {
        if (DAT_03218740 == 0) {
          DAT_03218740 = ERR_get_next_error_library();
        }
        iVar2 = 0x6f;
        iVar5 = 0x3f6;
      }
    }
    ERR_put_error(DAT_03218740,0x6d,iVar2,"e_chil.c",iVar5);
    ERR_add_error_data(1,local_450);
  }
  return 0;
}




undefined8 FUN_01ab3d30(BIGNUM *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  ulong *local_460;
  ulong local_458;
  undefined1 *local_450;
  undefined8 local_448;
  undefined1 auStack_440 [1024];
  
  local_450 = auStack_440;
  local_448 = 0x400;
  if (DAT_03218748 == 0) {
    if (DAT_03218740 == 0) {
      DAT_03218740 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218740,0x6b,0x6a,"e_chil.c",0x39a);
  }
  else {
    bn_expand2(param_1,*(int *)(param_4 + 1));
    local_458 = (long)param_1->dmax << 3;
    local_460 = param_1->d;
    iVar2 = (*DAT_03218760)(DAT_03218748,*param_2,(long)*(int *)(param_2 + 1) << 3,*param_3,
                            (long)*(int *)(param_3 + 1) << 3,*param_4,
                            (long)*(int *)(param_4 + 1) << 3,&local_460,&local_450);
    iVar4 = (int)(local_458 >> 3);
    param_1->top = iVar4;
    if (0 < iVar4) {
      plVar3 = (long *)((long)param_1->d +
                       ((long)(((local_458 >> 3) << 0x20) + -0x100000000) >> 0x1d));
      iVar4 = iVar4 + 1;
      do {
        if (*plVar3 != 0) {
          iVar5 = iVar4 + -1;
          break;
        }
        iVar1 = iVar4 + -1;
        iVar5 = iVar4 + -2;
        plVar3 = plVar3 + -1;
        iVar4 = iVar1;
      } while (iVar5 != 0 && 0 < iVar1);
      param_1->top = iVar5;
    }
    if (-1 < iVar2) {
      return 1;
    }
    if (iVar2 == -2) {
      if (DAT_03218740 == 0) {
        DAT_03218740 = ERR_get_next_error_library();
      }
      iVar2 = 0x70;
      iVar4 = 0x3b1;
    }
    else {
      if (DAT_03218740 == 0) {
        DAT_03218740 = ERR_get_next_error_library();
      }
      iVar2 = 0x6f;
      iVar4 = 0x3b3;
    }
    ERR_put_error(DAT_03218740,0x6b,iVar2,"e_chil.c",iVar4);
    ERR_add_error_data(1,local_450);
  }
  return 0;
}




undefined8 FUN_01ab3ef8(undefined8 param_1,int param_2)

{
  int iVar1;
  int line;
  undefined1 *local_430;
  undefined8 local_428;
  undefined1 auStack_420 [1024];
  
  local_430 = auStack_420;
  local_428 = 0x400;
  if (DAT_03218748 == 0) {
    if (DAT_03218740 == 0) {
      DAT_03218740 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218740,0x6c,0x6a,"e_chil.c",0x45e);
  }
  else {
    iVar1 = (*DAT_03218770)(DAT_03218748,param_1,(long)param_2,&local_430);
    if (-1 < iVar1) {
      return 1;
    }
    if (iVar1 == -2) {
      if (DAT_03218740 == 0) {
        DAT_03218740 = ERR_get_next_error_library();
      }
      iVar1 = 0x70;
      line = 0x469;
    }
    else {
      if (DAT_03218740 == 0) {
        DAT_03218740 = ERR_get_next_error_library();
      }
      iVar1 = 0x6f;
      line = 0x46b;
    }
    ERR_put_error(DAT_03218740,0x6c,iVar1,"e_chil.c",line);
    ERR_add_error_data(1,local_430);
  }
  return 0;
}

