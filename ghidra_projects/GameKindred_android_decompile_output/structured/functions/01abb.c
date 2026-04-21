// functions/01abb — 6 functions
#include "libGameKindred.h"




undefined8 FUN_01abb1bc(EVP_PKEY *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  ASN1_OCTET_STRING *str;
  
  str = ASN1_OCTET_STRING_new();
  if (((str != (ASN1_OCTET_STRING *)0x0) &&
      (iVar1 = ASN1_OCTET_STRING_set(str,(void *)*param_2,param_3), iVar1 != 0)) &&
     (iVar1 = EVP_PKEY_assign(param_1,0x357,str), iVar1 != 0)) {
    return 1;
  }
  ASN1_OCTET_STRING_free(str);
  return 0;
}




int FUN_01abb23c(long param_1,long *param_2)

{
  void *__dest;
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (param_2 != (long *)0x0) {
    if ((void *)*param_2 == (void *)0x0) {
      __dest = CRYPTO_malloc(*piVar1,"hm_ameth.c",0x7f);
      *param_2 = (long)__dest;
      memcpy(__dest,*(void **)(piVar1 + 2),(long)*piVar1);
      return *piVar1;
    }
    memcpy((void *)*param_2,*(void **)(piVar1 + 2),(long)*piVar1);
    *param_2 = *param_2 + (long)*piVar1;
  }
  return *piVar1;
}




bool FUN_01abb2bc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = CRYPTO_malloc(0x140,"hm_pmeth.c",0x4e);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0x400000000;
    HMAC_CTX_init((HMAC_CTX *)(puVar1 + 4));
    *(undefined8 **)(param_1 + 0x28) = puVar1;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return puVar1 != (undefined8 *)0x0;
}




undefined4 FUN_01abb310(long param_1,long param_2)

{
  HMAC_CTX *ctx;
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = CRYPTO_malloc(0x140,"hm_pmeth.c",0x4e);
  uVar2 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    ctx = (HMAC_CTX *)(puVar3 + 4);
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = 0;
    puVar3[1] = 0x400000000;
    HMAC_CTX_init(ctx);
    *(undefined8 **)(param_1 + 0x28) = puVar3;
    *(undefined4 *)(param_1 + 0x48) = 0;
    puVar4 = *(undefined8 **)(param_2 + 0x28);
    *puVar3 = *puVar4;
    HMAC_CTX_init(ctx);
    iVar1 = HMAC_CTX_copy(ctx,(HMAC_CTX *)(puVar4 + 4));
    uVar2 = 0;
    if (iVar1 != 0) {
      if ((void *)puVar4[2] != (void *)0x0) {
        iVar1 = ASN1_OCTET_STRING_set
                          ((ASN1_STRING *)(puVar3 + 1),(void *)puVar4[2],*(int *)(puVar4 + 1));
        if (iVar1 == 0) {
          return 0;
        }
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}




undefined8 FUN_01abb520(long param_1,int param_2,int param_3,void *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if (param_2 == 1) {
    *puVar2 = param_4;
    return 1;
  }
  if (param_2 == 7) {
    piVar3 = *(int **)(*(long *)(param_1 + 0x10) + 0x20);
    iVar1 = HMAC_Init_ex((HMAC_CTX *)(puVar2 + 4),*(void **)(piVar3 + 2),*piVar3,(EVP_MD *)*puVar2,
                         *(ENGINE **)(param_1 + 8));
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    if (param_2 != 6) {
      return 0xfffffffe;
    }
    if (param_3 < -1) {
      return 0;
    }
    if ((0 < param_3 && param_4 == (void *)0x0) ||
       (iVar1 = ASN1_OCTET_STRING_set((ASN1_STRING *)(puVar2 + 1),param_4,param_3), iVar1 == 0)) {
      return 0;
    }
  }
  return 1;
}




bool FUN_01abb6d8(long param_1,uchar *param_2,size_t param_3)

{
  int iVar1;
  
  iVar1 = HMAC_Update((HMAC_CTX *)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x20),param_2,
                      param_3);
  return iVar1 != 0;
}

