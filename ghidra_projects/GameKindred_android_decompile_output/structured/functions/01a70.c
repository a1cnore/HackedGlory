// functions/01a70 — 12 functions
#include "libGameKindred.h"




undefined8 FUN_01a7046c(long param_1,const_DES_cblock *param_2)

{
  *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x80) = 0;
  DES_set_key_unchecked(param_2,*(DES_key_schedule **)(param_1 + 0x78));
  return 1;
}




undefined8 FUN_01a70498(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  DES_key_schedule *schedule;
  uchar *input;
  uchar *output;
  
  schedule = *(DES_key_schedule **)(param_1 + 0x78);
  if (schedule[1].ks[0] == (_union_772)0x0) {
    input = param_3;
    if (param_4 >> 0x3e != 0) {
      param_4 = param_4 + 0xc000000000000000;
      lVar1 = (param_4 & 0xc000000000000000) + 0x4000000000000000;
      input = param_3 + lVar1;
      DES_ncbc_encrypt(param_3,param_2,0x4000000000000000,schedule,(DES_cblock *)(param_1 + 0x28),
                       *(int *)(param_1 + 0x10));
      output = param_2;
      for (uVar2 = param_4; uVar2 >> 0x3e != 0; uVar2 = uVar2 + 0xc000000000000000) {
        output = output + 0x4000000000000000;
        param_3 = param_3 + 0x4000000000000000;
        DES_ncbc_encrypt(param_3,output,0x4000000000000000,*(DES_key_schedule **)(param_1 + 0x78),
                         (DES_cblock *)(param_1 + 0x28),*(int *)(param_1 + 0x10));
      }
      param_4 = param_4 - (param_4 & 0xc000000000000000);
      param_2 = param_2 + lVar1;
    }
    if (param_4 != 0) {
      DES_ncbc_encrypt(input,param_2,param_4,*(DES_key_schedule **)(param_1 + 0x78),
                       (DES_cblock *)(param_1 + 0x28),*(int *)(param_1 + 0x10));
    }
  }
  else {
    (*(code *)schedule[1].ks[0])(param_3,param_2,param_4,schedule,param_1 + 0x28);
  }
  return 1;
}




undefined8 FUN_01a70630(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

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
      DES_cfb64_encrypt(param_3,out,0x4000000000000000,*(DES_key_schedule **)(param_1 + 0x78),
                        (DES_cblock *)(param_1 + 0x28),(int *)(param_1 + 0x58),
                        *(int *)(param_1 + 0x10));
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      out = out + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_2 = param_2 + lVar2;
    param_4 = uVar1 - uVar4;
    param_3 = puVar3;
  }
  if (param_4 != 0) {
    DES_cfb64_encrypt(param_3,param_2,param_4,*(DES_key_schedule **)(param_1 + 0x78),
                      (DES_cblock *)(param_1 + 0x28),(int *)(param_1 + 0x58),
                      *(int *)(param_1 + 0x10));
  }
  return 1;
}




undefined8 FUN_01a7072c(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

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
      DES_ofb64_encrypt(param_3,out,0x4000000000000000,*(DES_key_schedule **)(param_1 + 0x78),
                        (DES_cblock *)(param_1 + 0x28),(int *)(param_1 + 0x58));
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      out = out + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_2 = param_2 + lVar2;
    param_4 = uVar1 - uVar4;
    param_3 = puVar3;
  }
  if (param_4 != 0) {
    DES_ofb64_encrypt(param_3,param_2,param_4,*(DES_key_schedule **)(param_1 + 0x78),
                      (DES_cblock *)(param_1 + 0x28),(int *)(param_1 + 0x58));
  }
  return 1;
}




undefined8 FUN_01a70820(long *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(int *)(*param_1 + 4);
  if (uVar1 <= param_4) {
    uVar2 = 0;
    do {
      DES_ecb_encrypt((const_DES_cblock *)(param_3 + uVar2),(DES_cblock *)(param_2 + uVar2),
                      (DES_key_schedule *)param_1[0xf],(int)param_1[2]);
      uVar2 = uVar2 + uVar1;
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}




undefined8 FUN_01a70890(long param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte local_68 [4];
  uchar local_64 [4];
  
  if (param_4 != 0) {
    uVar4 = param_4;
    if (param_4 >> 0x3b != 0) {
      uVar4 = 0x800000000000000;
    }
    do {
      if (uVar4 * 8 != 0) {
        uVar2 = 0;
        do {
          uVar3 = uVar2 >> 3;
          uVar1 = (uint)uVar2 & 7;
          local_64[0] = '\0';
          if ((1 << (ulong)(uVar1 ^ 7) & (uint)*(byte *)(param_3 + uVar3)) != 0) {
            local_64[0] = 0x80;
          }
          DES_cfb_encrypt(local_64,local_68,1,1,*(DES_key_schedule **)(param_1 + 0x78),
                          (DES_cblock *)(param_1 + 0x28),*(int *)(param_1 + 0x10));
          uVar2 = uVar2 + 1;
          *(byte *)(param_2 + uVar3) =
               (byte)((local_68[0] & 0x80) >> (ulong)uVar1) |
               (byte)(-0x81 >> uVar1) & *(byte *)(param_2 + uVar3);
        } while (uVar4 * 8 - uVar2 != 0);
      }
      param_3 = param_3 + uVar4;
      param_2 = param_2 + uVar4;
      param_4 = param_4 - uVar4;
      uVar2 = param_4;
      if (uVar4 <= param_4) {
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
    } while (param_4 != 0);
  }
  return 1;
}




undefined8 FUN_01a709a4(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

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
      DES_cfb_encrypt(param_3,out,8,0x4000000000000000,*(DES_key_schedule **)(param_1 + 0x78),
                      (DES_cblock *)(param_1 + 0x28),*(int *)(param_1 + 0x10));
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      out = out + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_2 = param_2 + lVar2;
    param_4 = uVar1 - uVar4;
    param_3 = puVar3;
  }
  if (param_4 != 0) {
    DES_cfb_encrypt(param_3,param_2,8,param_4,*(DES_key_schedule **)(param_1 + 0x78),
                    (DES_cblock *)(param_1 + 0x28),*(int *)(param_1 + 0x10));
  }
  return 1;
}




undefined8 FUN_01a70ac4(EVP_CIPHER_CTX *param_1,uchar *param_2)

{
  int len;
  BF_KEY *key;
  
  key = param_1->cipher_data;
  len = EVP_CIPHER_CTX_key_length(param_1);
  BF_set_key(key,len,param_2);
  return 1;
}




undefined8 FUN_01a70afc(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

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
      BF_cbc_encrypt(param_3,out,0x4000000000000000,*(BF_KEY **)(param_1 + 0x78),
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
    BF_cbc_encrypt(param_3,param_2,param_4,*(BF_KEY **)(param_1 + 0x78),(uchar *)(param_1 + 0x28),
                   *(int *)(param_1 + 0x10));
  }
  return 1;
}




undefined8 FUN_01a70c7c(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

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
      BF_ofb64_encrypt(param_3,out,0x4000000000000000,*(BF_KEY **)(param_1 + 0x78),
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
    BF_ofb64_encrypt(param_3,param_2,param_4,*(BF_KEY **)(param_1 + 0x78),(uchar *)(param_1 + 0x28),
                     (int *)(param_1 + 0x58));
  }
  return 1;
}




undefined8 FUN_01a70d70(long *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(int *)(*param_1 + 4);
  if (uVar1 <= param_4) {
    uVar2 = 0;
    do {
      BF_ecb_encrypt((uchar *)(param_3 + uVar2),(uchar *)(param_2 + uVar2),(BF_KEY *)param_1[0xf],
                     (int)param_1[2]);
      uVar2 = uVar2 + uVar1;
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}




undefined8 FUN_01a70e10(EVP_CIPHER_CTX *param_1,uchar *param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  IDEA_KEY_SCHEDULE IStack_108;
  
  if (((param_4 == 0) && (uVar1 = EVP_CIPHER_CTX_flags(param_1), (uVar1 & 0xf0007) != 4)) &&
     (uVar1 = EVP_CIPHER_CTX_flags(param_1), (uVar1 & 0xf0007) != 3)) {
    idea_set_encrypt_key(param_2,&IStack_108);
    idea_set_decrypt_key(&IStack_108,param_1->cipher_data);
    OPENSSL_cleanse(&IStack_108,0xd8);
  }
  else {
    idea_set_encrypt_key(param_2,param_1->cipher_data);
  }
  return 1;
}

