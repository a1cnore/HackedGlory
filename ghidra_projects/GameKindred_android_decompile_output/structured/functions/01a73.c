// functions/01a73 — 8 functions
#include "libGameKindred.h"




ulong FUN_01a73158(long param_1,void *param_2,long param_3,size_t param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [16];
  
  lVar4 = *(long *)(param_1 + 0x78);
  if (((*(int *)(lVar4 + 0xfc) != 0) || (*(int *)(lVar4 + 0xf8) != 0)) &&
     ((iVar1 = *(int *)(param_1 + 0x10), iVar1 != 0 || (*(int *)(lVar4 + 0x100) != 0)))) {
    lVar2 = lVar4 + 0x110;
    if (param_2 == (void *)0x0) {
      if (param_3 == 0) {
        iVar1 = CRYPTO_ccm128_setiv(lVar2,param_1 + 0x28,0xf - (long)*(int *)(lVar4 + 0x108),param_4
                                   );
        if (iVar1 == 0) {
          *(undefined4 *)(lVar4 + 0x104) = 1;
          goto LAB_01a732a8;
        }
      }
      else if ((param_4 == 0) || (*(int *)(lVar4 + 0x104) != 0)) {
        CRYPTO_ccm128_aad(lVar2,param_3,param_4);
        goto LAB_01a732a8;
      }
    }
    else {
      if (param_3 == 0) {
        param_4 = 0;
        goto LAB_01a732a8;
      }
      if (*(int *)(lVar4 + 0x104) == 0) {
        iVar1 = CRYPTO_ccm128_setiv(lVar2,param_1 + 0x28,0xf - (long)*(int *)(lVar4 + 0x108),param_4
                                   );
        if (iVar1 != 0) goto LAB_01a732a4;
        *(undefined4 *)(lVar4 + 0x104) = 1;
        iVar1 = *(int *)(param_1 + 0x10);
        lVar3 = *(long *)(lVar4 + 0x148);
      }
      else {
        lVar3 = *(long *)(lVar4 + 0x148);
      }
      if (iVar1 == 0) {
        if (lVar3 == 0) {
          iVar1 = CRYPTO_ccm128_decrypt(lVar2,param_3,param_2,param_4);
          if (iVar1 == 0) goto LAB_01a732e8;
LAB_01a73318:
          OPENSSL_cleanse(param_2,param_4);
          param_4 = 0xffffffff;
        }
        else {
          iVar1 = CRYPTO_ccm128_decrypt_ccm64(lVar2,param_3,param_2,param_4);
          if (iVar1 != 0) goto LAB_01a73318;
LAB_01a732e8:
          lVar2 = CRYPTO_ccm128_tag(lVar2,auStack_50,(long)*(int *)(lVar4 + 0x10c));
          if (((lVar2 == 0) ||
              (iVar1 = CRYPTO_memcmp(auStack_50,(void *)(param_1 + 0x38),
                                     (long)*(int *)(lVar4 + 0x10c)), iVar1 != 0)) ||
             ((int)param_4 == -1)) goto LAB_01a73318;
        }
        *(undefined4 *)(lVar4 + 0xfc) = 0;
        *(undefined8 *)(lVar4 + 0x100) = 0;
        goto LAB_01a732a8;
      }
      if (lVar3 == 0) {
        iVar1 = CRYPTO_ccm128_encrypt(lVar2,param_3,param_2,param_4);
      }
      else {
        iVar1 = CRYPTO_ccm128_encrypt_ccm64(lVar2,param_3,param_2,param_4);
      }
      if (iVar1 == 0) {
        *(undefined4 *)(lVar4 + 0x100) = 1;
        goto LAB_01a732a8;
      }
    }
  }
LAB_01a732a4:
  param_4 = 0xffffffff;
LAB_01a732a8:
  return param_4 & 0xffffffff;
}




undefined8 FUN_01a73334(long param_1,uint param_2,uint param_3,void *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0xffffffff;
  if (0x14 < param_2) {
    return 0xffffffff;
  }
  lVar3 = *(long *)(param_1 + 0x78);
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar3 + 0xf8) = 0;
    *(undefined8 *)(lVar3 + 0x100) = 0;
    *(undefined8 *)(lVar3 + 0x108) = 0xc00000008;
    break;
  default:
    goto switchD_01a7336c_caseD_1;
  case 8:
    if (*(long *)(lVar3 + 0x140) != 0) {
      if (*(long *)(lVar3 + 0x140) != lVar3) {
        return 0;
      }
      *(long *)(*(long *)((long)param_4 + 0x78) + 0x140) = *(long *)((long)param_4 + 0x78);
    }
    break;
  case 9:
    param_3 = 0xf - param_3;
  case 0x14:
    if (6 < param_3 - 2) {
      return 0;
    }
    *(uint *)(lVar3 + 0x108) = param_3;
    break;
  case 0x10:
    if (*(int *)(param_1 + 0x10) == 0) {
      return 0;
    }
    if (*(int *)(lVar3 + 0x100) == 0) {
      return 0;
    }
    lVar2 = CRYPTO_ccm128_tag(lVar3 + 0x110,param_4,(long)(int)param_3);
    if (lVar2 == 0) {
      return 0;
    }
    *(undefined4 *)(lVar3 + 0xfc) = 0;
    *(undefined8 *)(lVar3 + 0x100) = 0;
    break;
  case 0x11:
    if (0xc < param_3 - 4) {
      return 0;
    }
    if ((param_3 & 1) != 0) {
      return 0;
    }
    if ((param_4 != (void *)0x0) && (*(int *)(param_1 + 0x10) != 0)) {
      return 0;
    }
    if (param_4 != (void *)0x0) {
      *(undefined4 *)(lVar3 + 0x100) = 1;
      memcpy((void *)(param_1 + 0x38),param_4,(long)(int)param_3);
    }
    *(uint *)(lVar3 + 0x10c) = param_3;
  }
  uVar1 = 1;
switchD_01a7336c_caseD_1:
  return uVar1;
}




undefined8 FUN_01a7387c(long param_1,uchar *param_2)

{
  SEED_set_key(param_2,*(SEED_KEY_SCHEDULE **)(param_1 + 0x78));
  return 1;
}




undefined8 FUN_01a738a0(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

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
      SEED_cbc_encrypt(param_3,out,0x4000000000000000,*(SEED_KEY_SCHEDULE **)(param_1 + 0x78),
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
    SEED_cbc_encrypt(param_3,param_2,param_4,*(SEED_KEY_SCHEDULE **)(param_1 + 0x78),
                     (uchar *)(param_1 + 0x28),*(int *)(param_1 + 0x10));
  }
  return 1;
}




undefined8 FUN_01a73a20(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

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
      SEED_ofb128_encrypt(param_3,out,0x4000000000000000,*(SEED_KEY_SCHEDULE **)(param_1 + 0x78),
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
    SEED_ofb128_encrypt(param_3,param_2,param_4,*(SEED_KEY_SCHEDULE **)(param_1 + 0x78),
                        (uchar *)(param_1 + 0x28),(int *)(param_1 + 0x58));
  }
  return 1;
}




undefined8 FUN_01a73b14(long *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(int *)(*param_1 + 4);
  if (uVar1 <= param_4) {
    uVar2 = 0;
    do {
      SEED_ecb_encrypt((uchar *)(param_3 + uVar2),(uchar *)(param_2 + uVar2),
                       (SEED_KEY_SCHEDULE *)param_1[0xf],(int)param_1[2]);
      uVar2 = uVar2 + uVar1;
    } while (uVar2 <= param_4 - uVar1);
  }
  return 1;
}




undefined8 FUN_01a73c1c(long param_1,uchar *param_2,uchar *param_3,ulong param_4)

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
      RC2_cbc_encrypt(param_3,out,0x4000000000000000,(RC2_KEY *)(*(long *)(param_1 + 0x78) + 4),
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
    RC2_cbc_encrypt(param_3,param_2,param_4,(RC2_KEY *)(*(long *)(param_1 + 0x78) + 4),
                    (uchar *)(param_1 + 0x28),*(int *)(param_1 + 0x10));
  }
  return 1;
}




uint FUN_01a73da4(EVP_CIPHER_CTX *param_1,ASN1_TYPE *param_2)

{
  uint max_len;
  uint uVar1;
  int iVar2;
  uchar auStack_40 [16];
  long local_28;
  
  local_28 = 0;
  if (param_2 == (ASN1_TYPE *)0x0) {
    return 0;
  }
  max_len = EVP_CIPHER_CTX_iv_length(param_1);
  if (0x10 < max_len) {
                    /* WARNING: Subroutine does not return */
    OpenSSLDie("e_rc2.c",0xb3,"l <= sizeof(iv)");
  }
  uVar1 = ASN1_TYPE_get_int_octetstring(param_2,&local_28,auStack_40,max_len);
  if (uVar1 == max_len) {
    if ((int)local_28 == 0x3a) {
      uVar1 = 0x80;
    }
    else if ((int)local_28 == 0xa0) {
      uVar1 = 0x28;
    }
    else {
      if ((int)local_28 != 0x78) {
        ERR_put_error(6,0x6d,0x6c,"e_rc2.c",0xa4);
        return 0xffffffff;
      }
      uVar1 = 0x40;
    }
    if (((int)max_len < 1) ||
       (iVar2 = EVP_CipherInit_ex(param_1,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,auStack_40,-1
                                 ), iVar2 != 0)) {
      EVP_CIPHER_CTX_ctrl(param_1,3,uVar1,(void *)0x0);
      EVP_CIPHER_CTX_set_key_length(param_1,uVar1 >> 3);
      return max_len;
    }
  }
  return 0xffffffff;
}

