// functions/01a74 — 7 functions
#include "libGameKindred.h"




undefined8 FUN_01a74014(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  uchar *puVar3;
  ulong uVar4;
  uchar *out;
  
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar4 = uVar1 & 0xc000000000000000;
    lVar2 = uVar4 + 0x4000000000000000;
    puVar3 = param_3 + lVar2;
    out = param_2;
    do {
      RC2_ofb64_encrypt(param_3,out,0x4000000000000000,(RC2_KEY *)(*(long *)(param_1 + 0x78) + 4),
                        (uchar *)(param_1 + 0x28),(int *)(param_1 + 0x58));
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      out = out + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_2 = param_2 + lVar2;
    param_4 = uVar1 - uVar4;
    param_3 = puVar3;
  }
  if (param_4 != 0) {
    RC2_ofb64_encrypt(param_3,param_2,param_4,(RC2_KEY *)(*(long *)(param_1 + 0x78) + 4),
                      (uchar *)(param_1 + 0x28),(int *)(param_1 + 0x58));
  }
  return 1;
}




undefined8 FUN_01a74110(long *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(int *)(*param_1 + 4);
  if (uVar1 <= param_4) {
    uVar2 = 0;
    do {
      RC2_ecb_encrypt((uchar *)(param_3 + uVar2),(uchar *)(param_2 + uVar2),
                      (RC2_KEY *)(param_1[0xf] + 4),(int)param_1[2]);
      uVar2 = uVar2 + uVar1;
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}




undefined8 FUN_01a741b4(EVP_CIPHER_CTX *param_1,uchar *param_2)

{
  int len;
  CAST_KEY *key;
  
  key = param_1->cipher_data;
  len = EVP_CIPHER_CTX_key_length(param_1);
  CAST_set_key(key,len,param_2);
  return 1;
}




undefined8 FUN_01a741ec(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  uchar *puVar3;
  uchar *out;
  ulong uVar4;
  
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar4 = uVar1 & 0xc000000000000000;
    lVar2 = uVar4 + 0x4000000000000000;
    puVar3 = param_3 + lVar2;
    out = param_2;
    do {
      CAST_cbc_encrypt(param_3,out,0x4000000000000000,*(CAST_KEY **)(param_1 + 0x78),
                       (uchar *)(param_1 + 0x28),*(int *)(param_1 + 0x10));
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      out = out + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_2 = param_2 + lVar2;
    param_4 = uVar1 - uVar4;
    param_3 = puVar3;
  }
  if (param_4 != 0) {
    CAST_cbc_encrypt(param_3,param_2,param_4,*(CAST_KEY **)(param_1 + 0x78),
                     (uchar *)(param_1 + 0x28),*(int *)(param_1 + 0x10));
  }
  return 1;
}




undefined8 FUN_01a7436c(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  uchar *puVar3;
  ulong uVar4;
  uchar *out;
  
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar4 = uVar1 & 0xc000000000000000;
    lVar2 = uVar4 + 0x4000000000000000;
    puVar3 = param_3 + lVar2;
    out = param_2;
    do {
      CAST_ofb64_encrypt(param_3,out,0x4000000000000000,*(CAST_KEY **)(param_1 + 0x78),
                         (uchar *)(param_1 + 0x28),(int *)(param_1 + 0x58));
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      out = out + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_2 = param_2 + lVar2;
    param_4 = uVar1 - uVar4;
    param_3 = puVar3;
  }
  if (param_4 != 0) {
    CAST_ofb64_encrypt(param_3,param_2,param_4,*(CAST_KEY **)(param_1 + 0x78),
                       (uchar *)(param_1 + 0x28),(int *)(param_1 + 0x58));
  }
  return 1;
}




undefined8 FUN_01a74460(long *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(int *)(*param_1 + 4);
  if (uVar1 <= param_4) {
    uVar2 = 0;
    do {
      CAST_ecb_encrypt((uchar *)(param_3 + uVar2),(uchar *)(param_2 + uVar2),
                       (CAST_KEY *)param_1[0xf],(int)param_1[2]);
      uVar2 = uVar2 + uVar1;
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}




undefined8 FUN_01a74c2c(undefined4 *param_1,int param_2,char *param_3,int param_4)

{
  EVP_PKEY_ASN1_METHOD *pEVar1;
  code *pcVar2;
  ENGINE *local_38;
  
  local_38 = (ENGINE *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    if (*(long *)(param_1 + 8) != 0) {
      if ((*(long *)(param_1 + 4) != 0) &&
         (pcVar2 = *(code **)(*(long *)(param_1 + 4) + 0xa0), pcVar2 != (code *)0x0)) {
        (*pcVar2)(param_1);
        *(undefined8 *)(param_1 + 8) = 0;
      }
      if (*(ENGINE **)(param_1 + 6) != (ENGINE *)0x0) {
        ENGINE_finish(*(ENGINE **)(param_1 + 6));
        *(undefined8 *)(param_1 + 6) = 0;
      }
    }
    if ((param_1[1] == param_2) && (*(long *)(param_1 + 4) != 0)) {
      return 1;
    }
    if (*(ENGINE **)(param_1 + 6) != (ENGINE *)0x0) {
      ENGINE_finish(*(ENGINE **)(param_1 + 6));
      *(undefined8 *)(param_1 + 6) = 0;
    }
  }
  if (param_3 == (char *)0x0) {
    pEVar1 = EVP_PKEY_asn1_find(&local_38,param_2);
  }
  else {
    pEVar1 = EVP_PKEY_asn1_find_str(&local_38,param_3,param_4);
  }
  if ((param_1 == (undefined4 *)0x0) && (local_38 != (ENGINE *)0x0)) {
    ENGINE_finish(local_38);
  }
  if (pEVar1 != (EVP_PKEY_ASN1_METHOD *)0x0) {
    if (param_1 != (undefined4 *)0x0) {
      *(EVP_PKEY_ASN1_METHOD **)(param_1 + 4) = pEVar1;
      *(ENGINE **)(param_1 + 6) = local_38;
      *param_1 = *(undefined4 *)pEVar1;
      param_1[1] = param_2;
    }
    return 1;
  }
  ERR_put_error(6,0x9e,0x9c,"p_lib.c",0xe7);
  return 0;
}

