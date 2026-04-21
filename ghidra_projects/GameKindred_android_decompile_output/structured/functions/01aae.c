// functions/01aae — 6 functions
#include "libGameKindred.h"




undefined8 FUN_01aae1c4(void)

{
  char *filename;
  
  if (DAT_03217e28 == (DSO *)0x0) {
    filename = "CSUNSAPI";
    if (DAT_03217e20 != (char *)0x0) {
      filename = DAT_03217e20;
    }
    DAT_03217e28 = DSO_load((DSO *)0x0,filename,(DSO_METHOD *)0x0,0);
    if (DAT_03217e28 == (DSO *)0x0) {
      if (DAT_03217df0 == 0) {
        DAT_03217df0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_03217df0,0x66,0x67,"e_4758cca.c",0x122);
    }
    else {
      DAT_03217e30 = DSO_bind_func(DAT_03217e28,"CSNDKRR");
      if ((((DAT_03217e30 != (DSO_FUNC_TYPE)0x0) &&
           (DAT_03217e18 = DSO_bind_func(DAT_03217e28,"CSNBRNG"), DAT_03217e18 != (DSO_FUNC_TYPE)0x0
           )) && (DAT_03217e08 = DSO_bind_func(DAT_03217e28,"CSNDDSG"),
                 DAT_03217e08 != (DSO_FUNC_TYPE)0x0)) &&
         (((DAT_03217e10 = DSO_bind_func(DAT_03217e28,"CSNDDSV"), DAT_03217e10 != (DSO_FUNC_TYPE)0x0
           && (DAT_03217e38 = DSO_bind_func(DAT_03217e28,"CSNDPKX"),
              DAT_03217e38 != (DSO_FUNC_TYPE)0x0)) &&
          ((DAT_03217df8 = DSO_bind_func(DAT_03217e28,"CSNDPKE"), DAT_03217df8 != (DSO_FUNC_TYPE)0x0
           && (DAT_03217e00 = DSO_bind_func(DAT_03217e28,"CSNDPKD"),
              DAT_03217e00 != (DSO_FUNC_TYPE)0x0)))))) {
        DAT_02c032e0 = RSA_get_ex_new_index
                                 (0,"IBM 4758 CCA RSA key handle",(undefined1 *)0x0,
                                  (undefined1 *)0x0,&LAB_01aaf458);
        return 1;
      }
      if (DAT_03217df0 == 0) {
        DAT_03217df0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_03217df0,0x66,0x67,"e_4758cca.c",0x135);
    }
  }
  else {
    if (DAT_03217df0 == 0) {
      DAT_03217df0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03217df0,0x66,100,"e_4758cca.c",0x11c);
  }
  if (DAT_03217e28 != (DSO *)0x0) {
    DSO_free(DAT_03217e28);
  }
  DAT_03217e38 = (DSO_FUNC_TYPE)0x0;
  DAT_03217e30 = (DSO_FUNC_TYPE)0x0;
  DAT_03217e28 = (DSO *)0x0;
  DAT_03217e10 = (DSO_FUNC_TYPE)0x0;
  DAT_03217e08 = (DSO_FUNC_TYPE)0x0;
  DAT_03217e00 = (DSO_FUNC_TYPE)0x0;
  DAT_03217df8 = (DSO_FUNC_TYPE)0x0;
  DAT_03217e18 = (DSO_FUNC_TYPE)0x0;
  return 0;
}




bool FUN_01aae47c(undefined8 param_1,int param_2,undefined8 param_3,char *param_4)

{
  int reason;
  int line;
  
  if (param_2 == 200) {
    if (param_4 == (char *)0x0) {
      if (DAT_03217df0 == 0) {
        DAT_03217df0 = ERR_get_next_error_library();
      }
      reason = 0x43;
      line = 0x178;
    }
    else {
      if (DAT_03217e28 == 0) {
        if (DAT_03217e20 != (void *)0x0) {
          CRYPTO_free(DAT_03217e20);
        }
        DAT_03217e20 = (char *)0x0;
        DAT_03217e20 = BUF_strdup(param_4);
        return DAT_03217e20 != (char *)0x0;
      }
      if (DAT_03217df0 == 0) {
        DAT_03217df0 = ERR_get_next_error_library();
      }
      reason = 100;
      line = 0x17c;
    }
  }
  else {
    if (DAT_03217df0 == 0) {
      DAT_03217df0 = ERR_get_next_error_library();
    }
    reason = 0x66;
    line = 0x184;
  }
  ERR_put_error(DAT_03217df0,100,reason,"e_4758cca.c",line);
  return false;
}




EVP_PKEY * FUN_01aae56c(ENGINE *param_1,char *param_2)

{
  ushort uVar1;
  size_t __n;
  undefined8 *arg;
  RSA *r;
  BIGNUM *pBVar2;
  EVP_PKEY *pkey;
  int line;
  uchar auStack_c88 [256];
  uchar auStack_b88 [256];
  undefined1 auStack_a88 [64];
  undefined1 auStack_a48 [8];
  undefined1 auStack_a40 [8];
  undefined8 local_a38;
  undefined8 local_a30;
  undefined1 auStack_a28 [8];
  long local_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  char local_a04;
  char local_a03;
  char local_9fc;
  char local_9fb;
  undefined1 local_9f6;
  undefined1 local_9f5;
  undefined1 local_9f2;
  undefined1 local_9f1;
  undefined1 auStack_9f0 [2480];
  
  local_a30 = 0;
  local_a10 = 0x9c4;
  local_a18 = 0x9c4;
  local_a38 = 0;
  __n = strlen(param_2);
  if (__n < 0x41) {
    memset(auStack_a88 + __n,0x20,0x40 - __n);
    memcpy(auStack_a88,param_2,__n);
    arg = CRYPTO_malloc(0x9cc,"e_4758cca.c",0x1ad);
    if (arg == (undefined8 *)0x0) {
      if (DAT_03217df0 == 0) {
        DAT_03217df0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_03217df0,0x67,0x41,"e_4758cca.c",0x1af);
    }
    else {
      (*DAT_03217e30)(&local_a20,auStack_a28,&local_a30,auStack_a40,&local_a38,auStack_a48,
                      auStack_a88,&local_a18,arg + 1);
      if (local_a20 == 0) {
        (*DAT_03217e38)(&local_a20,auStack_a28,&local_a30,auStack_a40,&local_a38,auStack_a48,
                        &local_a18,arg + 1,&local_a10,&local_a04);
        if (local_a20 == 0) {
          if ((((local_a04 == '\x1e') && (local_a03 == '\0')) && (local_9fc == '\x04')) &&
             (local_9fb == '\0')) {
            uVar1 = CONCAT11(local_9f6,local_9f5);
            memcpy(auStack_c88,auStack_9f0,(ulong)uVar1);
            memcpy(auStack_b88,auStack_9f0 + uVar1,(ulong)CONCAT11(local_9f2,local_9f1));
            *arg = local_a18;
            r = RSA_new_method(param_1);
            RSA_set_ex_data(r,DAT_02c032e0,arg);
            pBVar2 = BN_bin2bn(auStack_c88,(uint)uVar1,(BIGNUM *)0x0);
            r->e = pBVar2;
            pBVar2 = BN_bin2bn(auStack_b88,(uint)CONCAT11(local_9f2,local_9f1),(BIGNUM *)0x0);
            r->n = pBVar2;
            r->flags = r->flags | 0x20;
            pkey = EVP_PKEY_new();
            EVP_PKEY_assign(pkey,6,r);
            return pkey;
          }
          if (DAT_03217df0 == 0) {
            DAT_03217df0 = ERR_get_next_error_library();
          }
          line = 0x1cc;
        }
        else {
          if (DAT_03217df0 == 0) {
            DAT_03217df0 = ERR_get_next_error_library();
          }
          line = 0x1c4;
        }
      }
      else {
        if (DAT_03217df0 == 0) {
          DAT_03217df0 = ERR_get_next_error_library();
        }
        line = 0x1b9;
      }
      ERR_put_error(DAT_03217df0,0x67,0x68,"e_4758cca.c",line);
      CRYPTO_free(arg);
    }
  }
  else {
    if (DAT_03217df0 == 0) {
      DAT_03217df0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03217df0,0x67,0x6b,"e_4758cca.c",0x1a6);
  }
  return (EVP_PKEY *)0x0;
}




EVP_PKEY * FUN_01aae858(ENGINE *param_1,char *param_2)

{
  ushort uVar1;
  ushort uVar2;
  size_t __n;
  undefined8 *arg;
  RSA *r;
  BIGNUM *pBVar3;
  EVP_PKEY *pkey;
  int reason;
  int line;
  uchar auStack_4b8 [512];
  uchar auStack_2b8 [512];
  undefined1 auStack_b8 [64];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  undefined8 local_48;
  
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0x9c4;
  __n = strlen(param_2);
  if (__n < 0x41) {
    memset(auStack_b8 + __n,0x20,0x40 - __n);
    memcpy(auStack_b8,param_2,__n);
    arg = CRYPTO_malloc(0x9cc,"e_4758cca.c",0x201);
    if (arg == (undefined8 *)0x0) {
      if (DAT_03217df0 == 0) {
        DAT_03217df0 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_03217df0,0x68,0x41,"e_4758cca.c",0x203);
    }
    else {
      (*DAT_03217e30)(&local_50,auStack_58,&uStack_60,auStack_70,&local_68,auStack_78,auStack_b8,
                      &local_48,arg + 1);
      if (local_50 == 0) {
        if ((((*(char *)(arg + 1) == '\x1e') && (*(char *)((long)arg + 9) == '\0')) &&
            (*(char *)(arg + 2) == '\x04')) && (*(char *)((long)arg + 0x11) == '\0')) {
          uVar1 = CONCAT11(*(undefined1 *)((long)arg + 0x16),*(undefined1 *)((long)arg + 0x17));
          uVar2 = CONCAT11(*(undefined1 *)((long)arg + 0x1a),*(undefined1 *)((long)arg + 0x1b));
          memcpy(auStack_4b8,(void *)((long)arg + 0x1c),(ulong)uVar1);
          memcpy(auStack_2b8,(void *)((long)arg + 0x1c + (ulong)uVar1),(ulong)uVar2);
          *arg = local_48;
          r = RSA_new_method(param_1);
          RSA_set_ex_data(r,DAT_02c032e0,arg);
          pBVar3 = BN_bin2bn(auStack_4b8,(uint)uVar1,(BIGNUM *)0x0);
          r->e = pBVar3;
          pBVar3 = BN_bin2bn(auStack_2b8,(uint)uVar2,(BIGNUM *)0x0);
          r->n = pBVar3;
          r->flags = r->flags | 0x20;
          pkey = EVP_PKEY_new();
          EVP_PKEY_assign(pkey,6,r);
          return pkey;
        }
        if (DAT_03217df0 == 0) {
          DAT_03217df0 = ERR_get_next_error_library();
        }
        reason = 0x69;
        line = 0x214;
      }
      else {
        if (DAT_03217df0 == 0) {
          DAT_03217df0 = ERR_get_next_error_library();
        }
        reason = 0x41;
        line = 0x20c;
      }
      ERR_put_error(DAT_03217df0,0x68,reason,"e_4758cca.c",line);
      CRYPTO_free(arg);
    }
  }
  else {
    if (DAT_03217df0 == 0) {
      DAT_03217df0 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03217df0,0x68,0x6b,"e_4758cca.c",0x1fa);
  }
  return (EVP_PKEY *)0x0;
}




bool FUN_01aaebc0(int param_1,undefined8 param_2,undefined8 param_3,RSA *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uStack_80;
  long local_78;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  long lStack_40;
  long local_38;
  long local_28;
  
  lStack_40 = (long)param_1;
  local_48 = 0;
  local_58 = 1;
  local_68 = 0;
  uStack_60 = 0x322e312d53434b50;
  iVar1 = RSA_size(param_4);
  local_78 = (long)iVar1;
  puVar2 = RSA_get_ex_data(param_4,DAT_02c032e0);
  uStack_80 = *puVar2;
  (*DAT_03217e00)(&local_28,&local_38,&local_48,auStack_50,&local_58,&uStack_60,&lStack_40,param_2,
                  &local_68,auStack_70,&uStack_80,puVar2 + 1,&local_78,param_3);
  return local_38 == 0 && local_28 == 0;
}




bool FUN_01aaeca4(int param_1,uchar *param_2,int param_3,undefined8 param_4,undefined4 *param_5,
                 RSA *param_6)

{
  int iVar1;
  undefined8 *puVar2;
  uchar *ptr;
  int line;
  long lVar3;
  ASN1_OCTET_STRING local_f0;
  X509_ALGOR local_d8;
  ASN1_TYPE local_c8;
  X509_SIG local_b8;
  long local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  long local_68;
  uchar *local_58;
  
  local_88 = 0x312e312d53434b50;
  uStack_80 = 1;
  local_70 = 0;
  local_90 = 0x100;
  puVar2 = RSA_get_ex_data(param_6,DAT_02c032e0);
  local_a8 = 0x24;
  local_a0 = *puVar2;
  if ((param_1 == 0x40) || (param_1 == 4)) {
    local_b8.algor = &local_d8;
    local_d8.algorithm = OBJ_nid2obj(param_1);
    if (local_d8.algorithm == (ASN1_OBJECT *)0x0) {
      if (DAT_03217df0 == 0) {
        DAT_03217df0 = ERR_get_next_error_library();
      }
      iVar1 = 0x6d;
      line = 0x2f1;
      goto LAB_01aaeea4;
    }
    if ((local_d8.algorithm)->length == 0) {
      if (DAT_03217df0 == 0) {
        DAT_03217df0 = ERR_get_next_error_library();
      }
      iVar1 = 0x65;
      line = 0x2f7;
      goto LAB_01aaeea4;
    }
    local_d8.parameter = &local_c8;
    local_b8.digest = &local_f0;
    local_c8.type = 5;
    local_c8.value.ptr = (char *)0x0;
    local_f0.length = param_3;
    local_f0.data = param_2;
    iVar1 = i2d_X509_SIG(&local_b8,(uchar **)0x0);
    local_a8 = (long)iVar1;
    lVar3 = local_a8 + -1;
  }
  else {
    lVar3 = 0x23;
  }
  iVar1 = RSA_size(param_6);
  if (iVar1 < lVar3) {
    if (DAT_03217df0 == 0) {
      DAT_03217df0 = ERR_get_next_error_library();
    }
    iVar1 = 0x6b;
    line = 0x30a;
LAB_01aaeea4:
    ERR_put_error(DAT_03217df0,0x69,iVar1,"e_4758cca.c",line);
    return false;
  }
  if (param_1 == 4) {
    ptr = CRYPTO_malloc(iVar1 + 1,"e_4758cca.c",0x31b);
    if (ptr == (uchar *)0x0) {
      local_58 = ptr;
      if (DAT_03217df0 == 0) {
        DAT_03217df0 = ERR_get_next_error_library();
      }
      iVar1 = 0x41;
      line = 0x31d;
      goto LAB_01aaeea4;
    }
  }
  else {
    if (param_1 != 0x40) {
      if (param_1 != 0x72) {
        return false;
      }
      if (param_3 != 0x24) {
        if (DAT_03217df0 == 0) {
          DAT_03217df0 = ERR_get_next_error_library();
        }
        iVar1 = 0x6b;
        line = 0x312;
        goto LAB_01aaeea4;
      }
      local_a8 = 0x24;
      (*DAT_03217e08)(&local_58,&local_68,&local_70,auStack_78,&uStack_80,&local_88,&local_a0,
                      puVar2 + 1,&local_a8,param_2,&local_90,auStack_98,param_4);
      goto LAB_01aaef9c;
    }
    ptr = CRYPTO_malloc(iVar1 + 1,"e_4758cca.c",0x326);
    if (ptr == (uchar *)0x0) {
      local_58 = ptr;
      if (DAT_03217df0 == 0) {
        DAT_03217df0 = ERR_get_next_error_library();
      }
      iVar1 = 0x41;
      line = 0x328;
      goto LAB_01aaeea4;
    }
  }
  local_58 = ptr;
  i2d_X509_SIG(&local_b8,&local_58);
  (*DAT_03217e08)(&local_58,&local_68,&local_70,auStack_78,&uStack_80,&local_88,&local_a0,puVar2 + 1
                  ,&local_a8,ptr,&local_90,auStack_98,param_4);
  OPENSSL_cleanse(ptr,(long)iVar1 + 1);
  CRYPTO_free(ptr);
LAB_01aaef9c:
  *param_5 = (int)local_90;
  return local_68 == 0 && local_58 == (uchar *)0x0;
}

