// functions/01ab5 — 10 functions
#include "libGameKindred.h"




undefined4 FUN_01ab51bc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_03218850 == (DSO *)0x0) {
    if (DAT_03218810 == 0) {
      DAT_03218810 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218810,0x67,0x70,"e_sureware.c",0x250);
    uVar2 = 0;
  }
  else {
    (*DAT_03218860)();
    iVar1 = DSO_free(DAT_03218850);
    if (iVar1 == 0) {
      if (DAT_03218810 == 0) {
        DAT_03218810 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_03218810,0x67,0x68,"e_sureware.c",0x256);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  if (DAT_03218820 != (BIO *)0x0) {
    BIO_free(DAT_03218820);
  }
  DAT_03218818 = 0;
  DAT_03218860 = (code *)0x0;
  DAT_03218858 = 0;
  DAT_03218850 = (DSO *)0x0;
  DAT_03218848 = 0;
  DAT_03218870 = 0;
  DAT_03218868 = 0;
  DAT_03218880 = 0;
  DAT_03218878 = 0;
  DAT_03218830 = 0;
  DAT_03218828 = 0;
  DAT_03218840 = 0;
  DAT_03218838 = 0;
  DAT_03218888 = 0;
  return uVar2;
}




undefined8 FUN_01ab52a8(undefined8 param_1,int param_2,undefined8 param_3,BIO *param_4)

{
  BIO *pBVar1;
  int iVar2;
  
  if (param_2 == 0x65) {
    CRYPTO_lock(9,0x1e,"e_sureware.c",0x1af);
    DAT_03218804 = 1;
    CRYPTO_lock(10,0x1e,"e_sureware.c",0x1b1);
    return 1;
  }
  if (param_2 != 1) {
    if (DAT_03218810 == 0) {
      DAT_03218810 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218810,100,0x77,"e_sureware.c",0x1b7);
    return 0;
  }
  CRYPTO_lock(9,0x1e,"e_sureware.c",0x19a);
  if (DAT_03218820 != (BIO *)0x0) {
    BIO_free(DAT_03218820);
    DAT_03218820 = (BIO *)0x0;
  }
  iVar2 = CRYPTO_add_lock(&param_4->references,1,0x15,"e_sureware.c",0x19f);
  pBVar1 = param_4;
  if (iVar2 < 2) {
    if (DAT_03218810 == 0) {
      DAT_03218810 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218810,100,100,"e_sureware.c",0x1a3);
    pBVar1 = DAT_03218820;
  }
  DAT_03218820 = pBVar1;
  CRYPTO_lock(10,0x1e,"e_sureware.c",0x1a5);
  return 1;
}




undefined8 FUN_01ab5408(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  char local_80 [76];
  undefined1 local_34 [4];
  undefined8 local_30;
  undefined8 local_28;
  
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
  builtin_strncpy(local_80,"ENGINE_load_privkey",0x14);
  local_80[0x18] = '\0';
  local_80[0x19] = '\0';
  local_80[0x1a] = '\0';
  local_80[0x1b] = '\0';
  local_80[0x1c] = '\0';
  local_80[0x1d] = '\0';
  local_80[0x1e] = '\0';
  local_80[0x1f] = '\0';
  local_80[0x14] = '\0';
  local_80[0x15] = '\0';
  local_80[0x16] = '\0';
  local_80[0x17] = '\0';
  local_30 = 0;
  local_28 = 0;
  local_34[0] = 0;
  if (DAT_03218868 == (code *)0x0) {
    if (DAT_03218810 == 0) {
      DAT_03218810 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218810,0x69,0x75,"e_sureware.c",0x33d);
    return 0;
  }
  iVar1 = (*DAT_03218868)(local_80,param_2,&local_30,&local_28,local_34);
  if (iVar1 == 1) {
    uVar2 = FUN_01ab620c(param_1,param_2,local_30,local_28,local_34[0]);
    return uVar2;
  }
  if (DAT_03218810 == 0) {
    DAT_03218810 = ERR_get_next_error_library();
  }
  ERR_put_error(DAT_03218810,0x69,0x80,"e_sureware.c",0x342);
  ERR_add_error_data(1,local_80);
  return 0;
}




undefined8 FUN_01ab551c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  char local_70 [68];
  undefined1 local_2c [4];
  undefined8 local_28;
  
  local_28 = 0;
  local_2c[0] = 0;
  local_70[0x28] = '\0';
  local_70[0x29] = '\0';
  local_70[0x2a] = '\0';
  local_70[0x2b] = '\0';
  local_70[0x2c] = '\0';
  local_70[0x2d] = '\0';
  local_70[0x2e] = '\0';
  local_70[0x2f] = '\0';
  local_70[0x20] = '\0';
  local_70[0x21] = '\0';
  local_70[0x22] = '\0';
  local_70[0x23] = '\0';
  local_70[0x24] = '\0';
  local_70[0x25] = '\0';
  local_70[0x26] = '\0';
  local_70[0x27] = '\0';
  local_70[0x38] = '\0';
  local_70[0x39] = '\0';
  local_70[0x3a] = '\0';
  local_70[0x3b] = '\0';
  local_70[0x3c] = '\0';
  local_70[0x3d] = '\0';
  local_70[0x3e] = '\0';
  local_70[0x3f] = '\0';
  local_70[0x30] = '\0';
  local_70[0x31] = '\0';
  local_70[0x32] = '\0';
  local_70[0x33] = '\0';
  local_70[0x34] = '\0';
  local_70[0x35] = '\0';
  local_70[0x36] = '\0';
  local_70[0x37] = '\0';
  builtin_strncpy(local_70,"ENGINE_load_pubkey",0x13);
  local_70[0x18] = '\0';
  local_70[0x19] = '\0';
  local_70[0x1a] = '\0';
  local_70[0x1b] = '\0';
  local_70[0x1c] = '\0';
  local_70[0x1d] = '\0';
  local_70[0x1e] = '\0';
  local_70[0x1f] = '\0';
  local_70[0x13] = '\0';
  local_70[0x14] = '\0';
  local_70[0x15] = '\0';
  local_70[0x16] = '\0';
  local_70[0x17] = '\0';
  if (DAT_03218880 == (code *)0x0) {
    if (DAT_03218810 == 0) {
      DAT_03218810 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218810,0x71,0x75,"e_sureware.c",0x357);
    return 0;
  }
  iVar1 = (*DAT_03218880)(local_70,param_2,&local_28,local_2c);
  if (iVar1 == 1) {
    uVar2 = FUN_01ab620c(param_1,param_2,0,local_28,local_2c[0]);
    return uVar2;
  }
  if (DAT_03218810 == 0) {
    DAT_03218810 = ERR_get_next_error_library();
  }
  ERR_put_error(DAT_03218810,0x71,0x81,"e_sureware.c",0x35d);
  ERR_add_error_data(1,local_70);
  return 0;
}




int FUN_01ab5630(undefined4 param_1,undefined8 param_2,undefined8 param_3,RSA *param_4,int param_5)

{
  int iVar1;
  void *pvVar2;
  int line;
  char local_80 [64];
  uint local_34;
  
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
  builtin_strncpy(local_80,"ENGINE_rsa_sign",0x10);
  local_80[0x18] = '\0';
  local_80[0x19] = '\0';
  local_80[0x1a] = '\0';
  local_80[0x1b] = '\0';
  local_80[0x1c] = '\0';
  local_80[0x1d] = '\0';
  local_80[0x1e] = '\0';
  local_80[0x1f] = '\0';
  local_80[0x10] = '\0';
  local_80[0x11] = '\0';
  local_80[0x12] = '\0';
  local_80[0x13] = '\0';
  local_80[0x14] = '\0';
  local_80[0x15] = '\0';
  local_80[0x16] = '\0';
  local_80[0x17] = '\0';
  if (DAT_03218818 == (code *)0x0) {
    if (DAT_03218810 == 0) {
      DAT_03218810 = ERR_get_next_error_library();
    }
    iVar1 = 0x75;
    line = 0x3df;
  }
  else {
    pvVar2 = RSA_get_ex_data(param_4,DAT_02c041c0);
    if (pvVar2 == (void *)0x0) {
      if (DAT_03218810 == 0) {
        DAT_03218810 = ERR_get_next_error_library();
      }
      iVar1 = 0x69;
      line = 0x3e4;
    }
    else {
      if (param_5 == 1) {
        iVar1 = (*DAT_03218818)(local_80,param_1,param_2,&local_34,param_3,pvVar2,1);
        FUN_01ab5a44(local_80,0x6f,iVar1);
        if (iVar1 == 1) {
          return local_34;
        }
        return iVar1;
      }
      if (DAT_03218810 == 0) {
        DAT_03218810 = ERR_get_next_error_library();
      }
      iVar1 = 0x6b;
      line = 0x3f1;
    }
  }
  ERR_put_error(DAT_03218810,0x6f,iVar1,"e_sureware.c",line);
  return 0;
}




int FUN_01ab5784(int param_1,undefined8 param_2,uchar *param_3,RSA *param_4,int param_5)

{
  int iVar1;
  void *pvVar2;
  uchar *f;
  char local_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint local_44;
  
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  builtin_strncpy(local_90,"ENGINE_rsa_priv_",0x10);
  uStack_78 = 0;
  uStack_80 = 0x636564;
  if (DAT_03218828 == (code *)0x0) {
    if (DAT_03218810 == 0) {
      DAT_03218810 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218810,0x6e,0x75,"e_sureware.c",0x38f);
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = RSA_get_ex_data(param_4,DAT_02c041c0);
    if (pvVar2 == (void *)0x0) {
      if (DAT_03218810 == 0) {
        DAT_03218810 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_03218810,0x6e,0x69,"e_sureware.c",0x394);
      return 0;
    }
  }
  if (param_5 == 1) {
    iVar1 = (*DAT_03218828)(local_90,param_1,param_2,&local_44,param_3,pvVar2,1);
    FUN_01ab5a44(local_90,0x6e,iVar1);
    if (iVar1 == 1) {
      return local_44;
    }
    return iVar1;
  }
  iVar1 = (*DAT_03218828)(local_90,param_1,param_2,&local_44,param_3,pvVar2,0);
  FUN_01ab5a44(local_90,0x6e,iVar1);
  if (iVar1 != 1) {
    return iVar1;
  }
  f = CRYPTO_malloc(local_44,"e_sureware.c",0x3ac);
  if (f == (uchar *)0x0) {
    if (DAT_03218810 == 0) {
      DAT_03218810 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218810,0x6e,0x41,"e_sureware.c",0x3ae);
    return 1;
  }
  memcpy(f,param_3,(long)(int)local_44);
  if (param_5 == 2) {
    iVar1 = RSA_padding_check_SSLv23(param_3,local_44,f,param_1,local_44);
  }
  else if (param_5 == 3) {
    iVar1 = RSA_padding_check_none(param_3,local_44,f,param_1,local_44);
  }
  else {
    if (param_5 != 4) {
      if (DAT_03218810 == 0) {
        DAT_03218810 = ERR_get_next_error_library();
      }
      ERR_put_error(DAT_03218810,0x6e,0x6b,"e_sureware.c",0x3c6);
      iVar1 = 1;
      goto LAB_01ab5a10;
    }
    iVar1 = RSA_padding_check_PKCS1_OAEP(param_3,local_44,f,local_44,local_44,(uchar *)0x0,0);
  }
  if (iVar1 < 0) {
    if (DAT_03218810 == 0) {
      DAT_03218810 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218810,0x6e,0x6a,"e_sureware.c",0x3cb);
  }
LAB_01ab5a10:
  OPENSSL_cleanse(f,(long)(int)local_44);
  CRYPTO_free(f);
  return iVar1;
}




void FUN_01ab5a44(char *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  BIO *b;
  size_t sVar2;
  
  switch(param_3) {
  case 1:
    *param_1 = '\0';
    return;
  case 0xfffffffb:
    ERR_put_error(0x26,param_2,0x6a,"e_sureware.c",0x27b);
    cVar1 = *param_1;
    break;
  case 0xfffffffc:
    ERR_put_error(0x26,param_2,0x67,"e_sureware.c",0x278);
    cVar1 = *param_1;
    goto joined_r0x01ab5adc;
  case 0xfffffffd:
    ERR_put_error(0x26,param_2,0x68,"e_sureware.c",0x272);
    cVar1 = *param_1;
joined_r0x01ab5adc:
    if (cVar1 == '\0') {
      return;
    }
    goto LAB_01ab5b28;
  case 0xfffffffe:
    ERR_put_error(0x26,param_2,0x66,"e_sureware.c",0x275);
    cVar1 = *param_1;
    break;
  default:
    ERR_put_error(0x26,param_2,0x65,"e_sureware.c",0x27e);
    cVar1 = *param_1;
  }
  if (cVar1 != '\0') {
LAB_01ab5b28:
    ERR_add_error_data(1,param_1);
    if (DAT_03218820 != (BIO *)0x0) {
      CRYPTO_lock(9,0x15,"e_sureware.c",0x286);
      b = DAT_03218820;
      sVar2 = strlen(param_1);
      BIO_write(b,param_1,(int)sVar2);
      CRYPTO_lock(10,0x15,"e_sureware.c",0x288);
      return;
    }
  }
  return;
}




int FUN_01ab5bb0(BIGNUM *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
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
  builtin_strncpy(local_80,"ENGINE_modexp",0xe);
  local_80[0xe] = '\0';
  local_80[0xf] = '\0';
  local_80[0x18] = '\0';
  local_80[0x19] = '\0';
  local_80[0x1a] = '\0';
  local_80[0x1b] = '\0';
  local_80[0x1c] = '\0';
  local_80[0x1d] = '\0';
  local_80[0x1e] = '\0';
  local_80[0x1f] = '\0';
  local_80[0x10] = '\0';
  local_80[0x11] = '\0';
  local_80[0x12] = '\0';
  local_80[0x13] = '\0';
  local_80[0x14] = '\0';
  local_80[0x15] = '\0';
  local_80[0x16] = '\0';
  local_80[0x17] = '\0';
  if (DAT_03218830 == (code *)0x0) {
    if (DAT_03218810 == 0) {
      DAT_03218810 = ERR_get_next_error_library();
    }
    ERR_put_error(DAT_03218810,0x6b,0x75,"e_sureware.c",0x435);
  }
  else if (param_1 != (BIGNUM *)0x0) {
    bn_expand2(param_1,*(int *)(param_4 + 1));
    if (param_1->dmax != *(int *)(param_4 + 1)) {
      return 0;
    }
    iVar2 = (*DAT_03218830)(local_80,param_1->dmax << 3,*param_4,*(int *)(param_3 + 1) << 3,*param_3
                            ,*(int *)(param_2 + 1) << 3,*param_2,param_1->d);
    FUN_01ab5a44(local_80,0x6b,iVar2);
    if (iVar2 != 1) {
      return iVar2;
    }
    iVar2 = *(int *)(param_4 + 1);
    param_1->top = iVar2;
    if (0 < iVar2) {
      puVar4 = param_1->d + (iVar2 + -1);
      do {
        iVar3 = iVar2;
        if (*puVar4 != 0) break;
        iVar3 = iVar2 + -1;
        puVar4 = puVar4 + -1;
        bVar1 = 0 < iVar2;
        iVar2 = iVar3;
      } while (iVar3 != 0 && bVar1);
      param_1->top = iVar3;
    }
    return 1;
  }
  return 0;
}




undefined8 FUN_01ab5cf4(undefined8 param_1,undefined4 param_2,DSA *param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  DSA_SIG *a;
  BIGNUM *pBVar3;
  int reason;
  int line;
  uint uVar4;
  uint uVar5;
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
  builtin_strncpy(local_80,"ENGINE_dsa_do_sign",0x13);
  local_80[0x18] = '\0';
  local_80[0x19] = '\0';
  local_80[0x1a] = '\0';
  local_80[0x1b] = '\0';
  local_80[0x1c] = '\0';
  local_80[0x1d] = '\0';
  local_80[0x1e] = '\0';
  local_80[0x1f] = '\0';
  local_80[0x13] = '\0';
  local_80[0x14] = '\0';
  local_80[0x15] = '\0';
  local_80[0x16] = '\0';
  local_80[0x17] = '\0';
  if (DAT_03218838 == (code *)0x0) {
    if (DAT_03218810 == 0) {
      DAT_03218810 = ERR_get_next_error_library();
    }
    reason = 0x75;
    line = 0x404;
  }
  else {
    pvVar2 = DSA_get_ex_data(param_3,DAT_02c041c4);
    if (pvVar2 == (void *)0x0) {
      if (DAT_03218810 == 0) {
        DAT_03218810 = ERR_get_next_error_library();
      }
      reason = 0x69;
      line = 0x40a;
    }
    else {
      a = DSA_SIG_new();
      if (a != (DSA_SIG *)0x0) {
        pBVar3 = BN_new();
        a->r = pBVar3;
        pBVar3 = BN_new();
        a->s = pBVar3;
        if ((pBVar3 != (BIGNUM *)0x0) && (a->r != (BIGNUM *)0x0)) {
          bn_expand2(a->r,2);
          bn_expand2(a->s,2);
          if ((a->r->dmax == 2) && (a->s->dmax == 2)) {
            uVar1 = (*DAT_03218838)(local_80,param_2,param_1,a->r->d,a->s->d,pvVar2);
            FUN_01ab5a44(local_80,0x65,uVar1);
            pBVar3 = a->r;
            uVar4 = 2;
            uVar5 = 2;
            pBVar3->top = 2;
            if (pBVar3->d[1] == 0) {
              uVar5 = (uint)(*pBVar3->d != 0);
            }
            pBVar3->top = uVar5;
            pBVar3 = a->s;
            pBVar3->top = 2;
            if (pBVar3->d[1] == 0) {
              uVar4 = (uint)(*pBVar3->d != 0);
            }
            pBVar3->top = uVar4;
          }
        }
        DSA_SIG_free(a);
        return 0;
      }
      if (DAT_03218810 == 0) {
        DAT_03218810 = ERR_get_next_error_library();
      }
      reason = 0x41;
      line = 0x40f;
    }
  }
  ERR_put_error(DAT_03218810,0x65,reason,"e_sureware.c",line);
  return 0;
}




bool FUN_01ab5ee0(undefined8 param_1,BIGNUM *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,BIGNUM *param_7,BN_CTX *param_8)

{
  bool bVar1;
  int iVar2;
  BIGNUM BStack_68;
  
  BN_init(&BStack_68);
  iVar2 = FUN_01ab5bb0(param_2,param_3,param_4,param_7);
  if ((iVar2 == 0) || (iVar2 = FUN_01ab5bb0(&BStack_68,param_5,param_6,param_7), iVar2 == 0)) {
    bVar1 = false;
  }
  else {
    iVar2 = BN_mod_mul(param_2,param_2,&BStack_68,param_7,param_8);
    bVar1 = iVar2 != 0;
  }
  BN_free(&BStack_68);
  return bVar1;
}

