// functions/01a0b — 3 functions
#include "libGameKindred.h"




undefined8 FUN_01a0b62c(EVP_CIPHER_CTX *param_1,uchar *param_2,undefined8 *param_3)

{
  int iVar1;
  EVP_CIPHER *cipher;
  void *__ptr;
  EVP_CIPHER_CTX *ctx;
  undefined8 uVar2;
  
  iVar1 = param_1->key_len;
  if (iVar1 == 0x20) {
    cipher = EVP_aes_256_ecb();
  }
  else if (iVar1 == 0x18) {
    cipher = EVP_aes_192_ecb();
  }
  else {
    if (iVar1 != 0x10) {
      return 0;
    }
    cipher = EVP_aes_128_ecb();
  }
  __ptr = malloc(0x110);
  if (__ptr != (void *)0x0) {
    ctx = malloc(0xa8);
    *(EVP_CIPHER_CTX **)((long)__ptr + 0xf8) = ctx;
    if (ctx != (EVP_CIPHER_CTX *)0x0) {
      iVar1 = EVP_EncryptInit(ctx,cipher,param_2,(uchar *)0x0);
      if (iVar1 == 1) {
        EVP_CIPHER_CTX_set_padding(ctx,0);
        uVar2 = *param_3;
        *(undefined8 *)((long)__ptr + 0x108) = param_3[1];
        *(undefined8 *)((long)__ptr + 0x100) = uVar2;
        EVP_CIPHER_CTX_set_app_data(param_1,__ptr);
        return 1;
      }
      free(ctx);
    }
    free(__ptr);
  }
  return 0;
}




undefined8 FUN_01a0b710(EVP_CIPHER_CTX *param_1,byte *param_2,byte *param_3,long param_4)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  int local_44;
  byte local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;
  byte local_32;
  byte local_31;
  
  pvVar3 = EVP_CIPHER_CTX_get_app_data(param_1);
  uVar4 = 0;
  local_44 = 0;
  if ((param_4 == 0x10) && (pvVar3 != (void *)0x0)) {
    iVar2 = EVP_EncryptUpdate(*(EVP_CIPHER_CTX **)((long)pvVar3 + 0xf8),&local_40,&local_44,
                              (uchar *)((long)pvVar3 + 0x100),0x10);
    uVar4 = 0;
    if (iVar2 == 1) {
      lVar5 = 0;
      uVar4 = 1;
      *param_2 = local_40 ^ *param_3;
      param_2[1] = local_3f ^ param_3[1];
      param_2[2] = local_3e ^ param_3[2];
      param_2[3] = local_3d ^ param_3[3];
      param_2[4] = local_3c ^ param_3[4];
      param_2[5] = local_3b ^ param_3[5];
      param_2[6] = local_3a ^ param_3[6];
      param_2[7] = local_39 ^ param_3[7];
      param_2[8] = local_38 ^ param_3[8];
      param_2[9] = local_37 ^ param_3[9];
      param_2[10] = local_36 ^ param_3[10];
      param_2[0xb] = local_35 ^ param_3[0xb];
      param_2[0xc] = local_34 ^ param_3[0xc];
      param_2[0xd] = local_33 ^ param_3[0xd];
      param_2[0xe] = local_32 ^ param_3[0xe];
      param_2[0xf] = local_31 ^ param_3[0xf];
      do {
        cVar1 = *(char *)((long)pvVar3 + lVar5 + 0x10f);
        *(char *)((long)pvVar3 + lVar5 + 0x10f) = cVar1 + '\x01';
        if (lVar5 == -0xf) {
          return 1;
        }
        lVar5 = lVar5 + -1;
      } while (cVar1 == -1);
    }
  }
  return uVar4;
}




int FUN_01a0b8f4(void *param_1,int param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_4);
  iVar1 = (int)sVar2;
  if (param_2 <= (int)sVar2) {
    iVar1 = param_2 + -1;
  }
  memcpy(param_1,param_4,(long)iVar1);
  *(undefined1 *)((long)param_1 + (long)iVar1) = 0;
  return iVar1;
}

