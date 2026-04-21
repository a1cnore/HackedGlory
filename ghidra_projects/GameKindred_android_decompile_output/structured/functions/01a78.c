// functions/01a78 — 3 functions
#include "libGameKindred.h"




bool FUN_01a78a44(EVP_MD_CTX *param_1,undefined8 *param_2,EVP_MD *param_3,ENGINE *param_4,
                 EVP_PKEY *param_5,int param_6)

{
  int iVar1;
  EVP_PKEY_CTX *pEVar2;
  char *name;
  long lVar3;
  undefined4 uVar4;
  int local_44;
  
  pEVar2 = param_1->pctx;
  if (pEVar2 == (EVP_PKEY_CTX *)0x0) {
    pEVar2 = EVP_PKEY_CTX_new(param_5,param_4);
    param_1->pctx = pEVar2;
    if (pEVar2 == (EVP_PKEY_CTX *)0x0) {
      return false;
    }
  }
  lVar3 = *(long *)pEVar2;
  if ((param_3 == (EVP_MD *)0x0) && ((*(uint *)(lVar3 + 4) >> 2 & 1) == 0)) {
    iVar1 = EVP_PKEY_get_default_digest_nid(param_5,&local_44);
    if (iVar1 < 1) {
LAB_01a78af8:
      ERR_put_error(6,0xa1,0x9e,"m_sigver.c",0x55);
      return false;
    }
    name = OBJ_nid2sn(local_44);
    param_3 = EVP_get_digestbyname(name);
    if (param_3 == (EVP_MD *)0x0) goto LAB_01a78af8;
    pEVar2 = param_1->pctx;
    lVar3 = *(long *)pEVar2;
  }
  if (param_6 == 0) {
    if (*(code **)(lVar3 + 0x70) != (code *)0x0) {
      iVar1 = (**(code **)(lVar3 + 0x70))(pEVar2,param_1);
      if (iVar1 < 1) {
        return false;
      }
      pEVar2 = param_1->pctx;
      uVar4 = 0x40;
      goto LAB_01a78b38;
    }
    iVar1 = EVP_PKEY_sign_init(pEVar2);
  }
  else {
    if (*(code **)(lVar3 + 0x80) != (code *)0x0) {
      iVar1 = (**(code **)(lVar3 + 0x80))(pEVar2,param_1);
      if (iVar1 < 1) {
        return false;
      }
      pEVar2 = param_1->pctx;
      uVar4 = 0x80;
LAB_01a78b38:
      *(undefined4 *)(pEVar2 + 0x20) = uVar4;
      goto LAB_01a78b5c;
    }
    iVar1 = EVP_PKEY_verify_init(pEVar2);
  }
  if (iVar1 < 1) {
    return false;
  }
LAB_01a78b5c:
  iVar1 = EVP_PKEY_CTX_ctrl(param_1->pctx,-1,0xf8,1,0,param_3);
  if (iVar1 < 1) {
    return false;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1->pctx;
  }
  if ((*(byte *)(*(long *)param_1->pctx + 4) >> 2 & 1) != 0) {
    return true;
  }
  iVar1 = EVP_DigestInit_ex(param_1,param_3,param_4);
  return iVar1 != 0;
}




undefined8 FUN_01a78e90(EVP_CIPHER_CTX *param_1,uchar *param_2)

{
  MD5_CTX *c;
  int len;
  RC4_KEY *key;
  
  key = param_1->cipher_data;
  len = EVP_CIPHER_CTX_key_length(param_1);
  RC4_set_key(key,len,param_2);
  c = (MD5_CTX *)(key->data + 0x3f);
  MD5_Init(c);
  memcpy(key->data + 0x56,c,0x5c);
  memcpy(key->data + 0x6d,c,0x5c);
  key->data[0x84] = 0xffffffff;
  key->data[0x85] = 0xffffffff;
  return 1;
}




undefined4 FUN_01a78efc(long param_1,uchar *param_2,uchar *param_3,size_t param_4)

{
  MD5_CTX *pMVar1;
  uchar *md;
  size_t len;
  int iVar2;
  undefined4 uVar3;
  RC4_KEY *key;
  size_t len_00;
  uchar auStack_50 [16];
  
  key = *(RC4_KEY **)(param_1 + 0x78);
  len_00 = *(size_t *)(key->data + 0x84);
  uVar3 = 0;
  if (len_00 + 0x10 == param_4 || len_00 == 0xffffffffffffffff) {
    if (*(int *)(param_1 + 0x10) == 0) {
      RC4(key,param_4,param_3,param_2);
      pMVar1 = (MD5_CTX *)(key->data + 0x6d);
      if (len_00 == 0xffffffffffffffff) {
        MD5_Update(pMVar1,param_2,param_4);
      }
      else {
        MD5_Update(pMVar1,param_2,len_00);
        MD5_Final(auStack_50,pMVar1);
        memcpy(pMVar1,key->data + 0x56,0x5c);
        MD5_Update(pMVar1,auStack_50,0x10);
        MD5_Final(auStack_50,pMVar1);
        iVar2 = CRYPTO_memcmp(param_2 + len_00,auStack_50,0x10);
        if (iVar2 != 0) {
          return 0;
        }
      }
    }
    else {
      len = param_4;
      if (len_00 != 0xffffffffffffffff) {
        len = len_00;
      }
      pMVar1 = (MD5_CTX *)(key->data + 0x6d);
      MD5_Update(pMVar1,param_3,len);
      if (len != param_4) {
        if (param_3 != param_2) {
          memcpy(param_2,param_3,len);
        }
        md = param_2 + len;
        MD5_Final(md,pMVar1);
        memcpy(pMVar1,key->data + 0x56,0x5c);
        MD5_Update(pMVar1,md,0x10);
        MD5_Final(md,pMVar1);
        param_3 = param_2;
      }
      RC4(key,param_4,param_3,param_2);
    }
    key->data[0x84] = 0xffffffff;
    key->data[0x85] = 0xffffffff;
    uVar3 = 1;
  }
  return uVar3;
}

