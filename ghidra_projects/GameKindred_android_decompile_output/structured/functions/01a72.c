// functions/01a72 — 16 functions
#include "libGameKindred.h"




undefined8 FUN_01a72034(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)*(int *)(*param_1 + 4);
  if (uVar2 <= param_4) {
    lVar1 = param_1[0xf];
    uVar3 = 0;
    do {
      (**(code **)(lVar1 + 0x118))(param_3 + uVar3,param_2 + uVar3,lVar1);
      uVar3 = uVar3 + uVar2;
    } while (uVar3 <= param_4 - uVar2);
  }
  return 1;
}




undefined8 FUN_01a720a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  CRYPTO_ofb128_encrypt
            (param_3,param_2,param_4,*(long *)(param_1 + 0x78),param_1 + 0x28,param_1 + 0x58,
             *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x118));
  return 1;
}




undefined8 FUN_01a720d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  CRYPTO_cfb128_encrypt
            (param_3,param_2,param_4,*(long *)(param_1 + 0x78),param_1 + 0x28,param_1 + 0x58,
             *(undefined4 *)(param_1 + 0x10),*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x118));
  return 1;
}




undefined8 FUN_01a721fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  CRYPTO_cfb128_8_encrypt
            (param_3,param_2,param_4,*(long *)(param_1 + 0x78),param_1 + 0x28,param_1 + 0x58,
             *(undefined4 *)(param_1 + 0x10),*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x118));
  return 1;
}




undefined8 FUN_01a7224c(EVP_CIPHER_CTX *param_1,uchar *param_2)

{
  int len;
  RC4_KEY *key;
  
  key = param_1->cipher_data;
  len = EVP_CIPHER_CTX_key_length(param_1);
  RC4_set_key(key,len,param_2);
  return 1;
}




undefined8 FUN_01a72284(long param_1,uchar *param_2,uchar *param_3,size_t param_4)

{
  RC4(*(RC4_KEY **)(param_1 + 0x78),param_4,param_3,param_2);
  return 1;
}




undefined8 FUN_01a7242c(long *param_1,uchar *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  AES_KEY *key;
  
  key = (AES_KEY *)param_1[0xf];
  uVar1 = *(uint *)(*param_1 + 0x10) & 0xf0007;
  iVar2 = (int)param_1[0xd] << 3;
  if ((param_4 == 0) && (uVar1 - 1 < 2)) {
    iVar2 = AES_set_decrypt_key(param_2,iVar2,key);
    pcVar3 = AES_decrypt;
  }
  else {
    iVar2 = AES_set_encrypt_key(param_2,iVar2,key);
    pcVar3 = AES_encrypt;
  }
  pcVar4 = AES_cbc_encrypt;
  if (uVar1 != 2) {
    pcVar4 = (code *)0x0;
  }
  *(code **)(key[1].rd_key + 1) = pcVar3;
  *(code **)(key[1].rd_key + 3) = pcVar4;
  if (-1 < iVar2) {
    return 1;
  }
  ERR_put_error(6,0x85,0x8f,"e_aes.c",0x3f1);
  return 0;
}




undefined8 FUN_01a724f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (*(code **)(lVar1 + 0x100) != (code *)0x0) {
    (**(code **)(lVar1 + 0x100))
              (param_3,param_2,param_4,lVar1,param_1 + 0x28,*(undefined4 *)(param_1 + 0x10));
    return 1;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    CRYPTO_cbc128_encrypt();
    return 1;
  }
  CRYPTO_cbc128_decrypt(param_3,param_2,param_4,lVar1,param_1 + 0x28,*(undefined8 *)(lVar1 + 0xf8));
  return 1;
}




undefined8 FUN_01a72560(long *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)*(int *)(*param_1 + 4);
  if (uVar2 <= param_4) {
    lVar1 = param_1[0xf];
    uVar3 = 0;
    do {
      (**(code **)(lVar1 + 0xf8))(param_3 + uVar3,param_2 + uVar3,lVar1);
      uVar3 = uVar3 + uVar2;
    } while (uVar3 <= param_4 - uVar2);
  }
  return 1;
}




undefined8 FUN_01a725d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  CRYPTO_ofb128_encrypt
            (param_3,param_2,param_4,*(long *)(param_1 + 0x78),param_1 + 0x28,param_1 + 0x58,
             *(undefined8 *)(*(long *)(param_1 + 0x78) + 0xf8));
  return 1;
}




undefined8 FUN_01a72604(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  CRYPTO_cfb128_encrypt
            (param_3,param_2,param_4,*(long *)(param_1 + 0x78),param_1 + 0x28,param_1 + 0x58,
             *(undefined4 *)(param_1 + 0x10),*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xf8));
  return 1;
}




undefined8 FUN_01a72728(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  CRYPTO_cfb128_8_encrypt
            (param_3,param_2,param_4,*(long *)(param_1 + 0x78),param_1 + 0x28,param_1 + 0x58,
             *(undefined4 *)(param_1 + 0x10),*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xf8));
  return 1;
}




/* WARNING: Type propagation algorithm not settling */

ulong FUN_01a728b0(EVP_CIPHER_CTX *param_1,void *param_2,void *param_3,ulong param_4)

{
  long lVar1;
  uchar *a;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  
  pvVar4 = param_1->cipher_data;
  if (*(int *)((long)pvVar4 + 0xf8) == 0) {
    return 0xffffffff;
  }
  if (*(int *)((long)pvVar4 + 0x29c) < 0) {
    if (*(int *)((long)pvVar4 + 0xfc) == 0) {
      return 0xffffffff;
    }
    if (param_3 != (void *)0x0) {
      if (param_2 == (void *)0x0) {
        iVar2 = CRYPTO_gcm128_aad((long)pvVar4 + 0x100,param_3,param_4);
      }
      else {
        lVar1 = (long)pvVar4 + 0x100;
        if (param_1->encrypt == 0) {
          if (*(long *)((long)pvVar4 + 0x2a0) == 0) {
            iVar2 = CRYPTO_gcm128_decrypt(lVar1,param_3,param_2,param_4);
          }
          else {
            iVar2 = CRYPTO_gcm128_decrypt_ctr32(lVar1,param_3,param_2,param_4);
          }
        }
        else if (*(long *)((long)pvVar4 + 0x2a0) == 0) {
          iVar2 = CRYPTO_gcm128_encrypt(lVar1,param_3,param_2,param_4);
        }
        else {
          iVar2 = CRYPTO_gcm128_encrypt_ctr32(lVar1,param_3,param_2,param_4);
        }
      }
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      return param_4 & 0xffffffff;
    }
    if (param_1->encrypt == 0) {
      if (*(int *)((long)pvVar4 + 0x294) < 0) {
        return 0xffffffff;
      }
      uVar3 = CRYPTO_gcm128_finish((long)pvVar4 + 0x100,param_1->buf);
      if ((int)uVar3 != 0) {
        return 0xffffffff;
      }
    }
    else {
      CRYPTO_gcm128_tag((long)pvVar4 + 0x100,param_1->buf,0x10);
      uVar3 = 0;
      *(undefined4 *)((long)pvVar4 + 0x294) = 0x10;
    }
    *(undefined4 *)((long)pvVar4 + 0xfc) = 0;
    return uVar3;
  }
  if (param_2 != param_3) {
    return 0xffffffff;
  }
  uVar3 = param_4 - 0x18;
  if (param_4 < 0x18) {
    return 0xffffffff;
  }
  iVar2 = 0x18;
  if (param_1->encrypt != 0) {
    iVar2 = 0x13;
  }
  iVar2 = EVP_CIPHER_CTX_ctrl(param_1,iVar2,8,param_3);
  if (0 < iVar2) {
    lVar1 = (long)pvVar4 + 0x100;
    a = param_1->buf;
    iVar2 = CRYPTO_gcm128_aad(lVar1,a,(long)*(int *)((long)pvVar4 + 0x29c));
    if (iVar2 == 0) {
      param_3 = (void *)((long)param_3 + 8);
      if (param_1->encrypt == 0) {
        if (*(long *)((long)pvVar4 + 0x2a0) == 0) {
          iVar2 = CRYPTO_gcm128_decrypt(lVar1,param_3,param_3,uVar3);
        }
        else {
          iVar2 = CRYPTO_gcm128_decrypt_ctr32(lVar1,param_3,param_3,uVar3);
        }
        if (iVar2 == 0) {
          CRYPTO_gcm128_tag(lVar1,a,0x10);
          iVar2 = CRYPTO_memcmp(a,(void *)((long)param_3 + uVar3),0x10);
          if (iVar2 == 0) {
            param_4 = uVar3 & 0xffffffff;
            goto LAB_01a72950;
          }
          OPENSSL_cleanse(param_3,uVar3);
        }
      }
      else {
        if (*(long *)((long)pvVar4 + 0x2a0) == 0) {
          iVar2 = CRYPTO_gcm128_encrypt(lVar1,param_3,param_3,uVar3);
        }
        else {
          iVar2 = CRYPTO_gcm128_encrypt_ctr32(lVar1,param_3,param_3,uVar3);
        }
        if (iVar2 == 0) {
          CRYPTO_gcm128_tag(lVar1,(long)param_3 + uVar3,0x10);
          param_4 = param_4 & 0xffffffff;
          goto LAB_01a72950;
        }
      }
    }
  }
  param_4 = 0xffffffff;
LAB_01a72950:
  *(undefined4 *)((long)pvVar4 + 0xfc) = 0;
  *(undefined4 *)((long)pvVar4 + 0x29c) = 0xffffffff;
  return param_4;
}




undefined8 FUN_01a72b24(long param_1)

{
  void *ptr;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  OPENSSL_cleanse((void *)(lVar1 + 0x100),0x188);
  ptr = *(void **)(lVar1 + 0x288);
  if (ptr != (void *)(param_1 + 0x28)) {
    CRYPTO_free(ptr);
  }
  return 1;
}




undefined8 FUN_01a72ec4(long param_1,uchar *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int bits;
  code *pcVar2;
  AES_KEY *key;
  undefined8 uVar3;
  
  if (param_2 != (uchar *)0x0 || param_3 != (undefined8 *)0x0) {
    key = *(AES_KEY **)(param_1 + 0x78);
    if (param_2 != (uchar *)0x0) {
      key[2].rd_key[10] = 0;
      key[2].rd_key[0xb] = 0;
      iVar1 = *(int *)(param_1 + 0x68) << 2;
      if (param_4 == 0) {
        AES_set_decrypt_key(param_2,iVar1,key);
        pcVar2 = AES_decrypt;
      }
      else {
        AES_set_encrypt_key(param_2,iVar1,key);
        pcVar2 = AES_encrypt;
      }
      *(code **)(key[2].rd_key + 6) = pcVar2;
      iVar1 = *(int *)(param_1 + 0x68);
      bits = iVar1 << 2;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      AES_set_encrypt_key(param_2 + (iVar1 >> 1),bits,(AES_KEY *)(key[1].rd_key + 1));
      *(AES_KEY **)(key[2].rd_key + 2) = key;
      *(code **)(key[2].rd_key + 8) = AES_encrypt;
    }
    if (param_3 != (undefined8 *)0x0) {
      *(uint **)(key[2].rd_key + 4) = key[1].rd_key + 1;
      uVar3 = *param_3;
      *(undefined8 *)(param_1 + 0x30) = param_3[1];
      *(undefined8 *)(param_1 + 0x28) = uVar3;
    }
  }
  return 1;
}




undefined8 FUN_01a72f80(long param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x78);
  if (*(long *)(lVar2 + 0x1f0) == 0) {
    return 0;
  }
  if (*(long *)(lVar2 + 0x1f8) != 0) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_3 == 0) {
      return 0;
    }
    if (0xf < param_4) {
      if (*(code **)(lVar2 + 0x210) == (code *)0x0) {
        iVar1 = CRYPTO_xts128_encrypt
                          (lVar2 + 0x1f0,param_1 + 0x28,param_3,param_2,param_4,
                           *(undefined4 *)(param_1 + 0x10));
        if (iVar1 != 0) {
          return 0;
        }
      }
      else {
        (**(code **)(lVar2 + 0x210))
                  (param_3,param_2,param_4,*(long *)(lVar2 + 0x1f0),*(long *)(lVar2 + 0x1f8),
                   param_1 + 0x28);
      }
      return 1;
    }
  }
  return 0;
}

