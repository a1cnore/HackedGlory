// functions/01a0e — 7 functions
#include "libGameKindred.h"




int FUN_01a0eb88(undefined8 param_1,int *param_2)

{
  int iVar1;
  BIGNUM *pBVar2;
  
  if (*param_2 == 0) {
    pBVar2 = BN_new();
    *(BIGNUM **)(param_2 + 0x44) = pBVar2;
    pBVar2 = BN_new();
    *(BIGNUM **)(param_2 + 0x46) = pBVar2;
    BN_set_word(pBVar2,2);
    BN_bin2bn(&DAT_01e2cd10,0x80,*(BIGNUM **)(param_2 + 0x44));
    *param_2 = 2;
  }
  iVar1 = FUN_01a0d644(param_1,*(undefined8 *)(param_2 + 0x46),*(undefined8 *)(param_2 + 0x44),0x80,
                       0x1e,0x1f,0,0,param_2 + 6);
  if (iVar1 != -0x25) {
    BN_clear_free(*(BIGNUM **)(param_2 + 0x44));
    param_2[0x44] = 0;
    param_2[0x45] = 0;
    BN_clear_free(*(BIGNUM **)(param_2 + 0x46));
    param_2[0x46] = 0;
    param_2[0x47] = 0;
    *param_2 = 0;
  }
  return iVar1;
}




undefined8
FUN_01a0ec64(undefined8 param_1,uchar *param_2,undefined4 param_3,uchar *param_4,uint param_5,
            uchar *param_6,uint param_7,undefined8 *param_8)

{
  EVP_MD *md;
  void *key;
  HMAC_CTX HStack_170;
  uchar auStack_44 [4];
  
  _libssh2_htonu32(auStack_44,param_3);
  key = (void *)*param_8;
  md = EVP_sha1();
  HMAC_Init(&HStack_170,key,0x14,md);
  HMAC_Update(&HStack_170,auStack_44,4);
  HMAC_Update(&HStack_170,param_4,(ulong)param_5);
  if ((param_6 != (uchar *)0x0) && (param_7 != 0)) {
    HMAC_Update(&HStack_170,param_6,(ulong)param_7);
  }
  HMAC_Final(&HStack_170,param_2,(uint *)0x0);
  HMAC_CTX_cleanup(&HStack_170);
  return 0;
}




undefined8 FUN_01a0ed6c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_34;
  undefined4 local_2c;
  
  FUN_01a0ec64(param_1,&local_34);
  *param_2 = local_34;
  *(undefined4 *)(param_2 + 1) = local_2c;
  return 0;
}




undefined8
FUN_01a0edac(undefined8 param_1,uchar *param_2,undefined4 param_3,uchar *param_4,uint param_5,
            uchar *param_6,uint param_7,undefined8 *param_8)

{
  EVP_MD *md;
  void *key;
  HMAC_CTX HStack_170;
  uchar auStack_44 [4];
  
  _libssh2_htonu32(auStack_44,param_3);
  key = (void *)*param_8;
  md = EVP_md5();
  HMAC_Init(&HStack_170,key,0x10,md);
  HMAC_Update(&HStack_170,auStack_44,4);
  HMAC_Update(&HStack_170,param_4,(ulong)param_5);
  if ((param_6 != (uchar *)0x0) && (param_7 != 0)) {
    HMAC_Update(&HStack_170,param_6,(ulong)param_7);
  }
  HMAC_Final(&HStack_170,param_2,(uint *)0x0);
  HMAC_CTX_cleanup(&HStack_170);
  return 0;
}




undefined8 FUN_01a0ee78(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_30;
  undefined4 local_28;
  
  FUN_01a0edac(param_1,&local_30);
  *param_2 = local_30;
  *(undefined4 *)(param_2 + 1) = local_28;
  return 0;
}




undefined8
FUN_01a0eeb8(undefined8 param_1,uchar *param_2,undefined4 param_3,uchar *param_4,uint param_5,
            uchar *param_6,uint param_7,undefined8 *param_8)

{
  EVP_MD *md;
  void *key;
  HMAC_CTX HStack_170;
  uchar auStack_44 [4];
  
  _libssh2_htonu32(auStack_44,param_3);
  key = (void *)*param_8;
  md = EVP_ripemd160();
  HMAC_Init(&HStack_170,key,0x14,md);
  HMAC_Update(&HStack_170,auStack_44,4);
  HMAC_Update(&HStack_170,param_4,(ulong)param_5);
  if ((param_6 != (uchar *)0x0) && (param_7 != 0)) {
    HMAC_Update(&HStack_170,param_6,(ulong)param_7);
  }
  HMAC_Final(&HStack_170,param_2,(uint *)0x0);
  HMAC_CTX_cleanup(&HStack_170);
  return 0;
}




undefined8 FUN_01a0efa4(long param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  void *__s;
  undefined8 uVar2;
  
  __s = (void *)(**(code **)(param_1 + 8))(0x70,param_1);
  if (__s != (void *)0x0) {
    memset(__s,0,0x70);
    *(undefined1 **)((long)__s + 0x40) = &LAB_01a0f33c;
    *(undefined1 **)((long)__s + 0x48) = &LAB_01a0f350;
    *(long *)((long)__s + 0x50) = param_1;
    if (param_2 == 0) {
      uVar2 = FUN_00f2762c(__s,"1.2.7",0x70);
      iVar1 = (int)uVar2;
    }
    else {
      uVar2 = FUN_00f22618(__s,0xffffffff,"1.2.7",0x70);
      iVar1 = (int)uVar2;
    }
    if (iVar1 == 0) {
      *param_3 = __s;
    }
    else {
      (**(code **)(param_1 + 0x18))(__s,param_1);
      uVar2 = 0xffffffd8;
    }
    return uVar2;
  }
  uVar2 = _libssh2_error(param_1,0xfffffffa,
                         "Unable to allocate memory for zlib compression/decompression");
  return uVar2;
}

