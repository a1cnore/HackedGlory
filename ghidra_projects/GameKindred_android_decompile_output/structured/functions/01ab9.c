// functions/01ab9 — 5 functions
#include "libGameKindred.h"




undefined8 FUN_01ab91cc(EVP_PKEY_CTX *param_1,EVP_PKEY *param_2)

{
  int *piVar1;
  undefined8 *key;
  undefined8 uVar2;
  
  piVar1 = EVP_PKEY_CTX_get_data(param_1);
  if (*piVar1 != 0) {
    key = CRYPTO_malloc(0x20,"gost_pmeth.c",0x217);
    uVar2 = *(undefined8 *)(piVar1 + 4);
    key[1] = *(undefined8 *)(piVar1 + 6);
    *key = uVar2;
    uVar2 = *(undefined8 *)(piVar1 + 8);
    key[3] = *(undefined8 *)(piVar1 + 10);
    key[2] = uVar2;
    EVP_PKEY_assign(param_2,0x32f,key);
    return 1;
  }
  ERR_GOST_error(0x82,0x74,"gost_pmeth.c",0x214);
  return 0;
}




void FUN_01ab92a8(EVP_PKEY_CTX *param_1)

{
  void *ptr;
  
  ptr = EVP_PKEY_CTX_get_data(param_1);
  CRYPTO_free(ptr);
  return;
}




bool FUN_01ab92bc(EVP_PKEY_CTX *param_1,EVP_PKEY_CTX *param_2)

{
  undefined8 *data;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  data = CRYPTO_malloc(0x30,"gost_pmeth.c",0x19a);
  if (data != (undefined8 *)0x0) {
    data[3] = 0;
    data[2] = 0;
    data[5] = 0;
    data[4] = 0;
    data[1] = 0;
    *data = 0;
    EVP_PKEY_CTX_set_data(param_1,data);
    puVar1 = EVP_PKEY_CTX_get_data(param_2);
    puVar2 = EVP_PKEY_CTX_get_data(param_1);
    uVar3 = *puVar1;
    puVar2[1] = puVar1[1];
    *puVar2 = uVar3;
    uVar3 = puVar1[2];
    puVar2[3] = puVar1[3];
    puVar2[2] = uVar3;
    uVar3 = puVar1[4];
    puVar2[5] = puVar1[5];
    puVar2[4] = uVar3;
  }
  return data != (undefined8 *)0x0;
}




undefined8 FUN_01ab933c(EVP_PKEY_CTX *param_1)

{
  int iVar1;
  EVP_PKEY *pkey;
  int *data;
  void *pvVar2;
  EC_KEY *key;
  EC_GROUP *group;
  undefined8 uVar3;
  
  pkey = EVP_PKEY_CTX_get0_pkey(param_1);
  data = CRYPTO_malloc(0x20,"gost_pmeth.c",0x1a);
  uVar3 = 0;
  if (data != (int *)0x0) {
    data[2] = 0;
    data[3] = 0;
    data[0] = 0;
    data[1] = 0;
    data[6] = 0;
    data[7] = 0;
    data[4] = 0;
    data[5] = 0;
    if ((pkey != (EVP_PKEY *)0x0) && (pvVar2 = EVP_PKEY_get0(pkey), pvVar2 != (void *)0x0)) {
      iVar1 = EVP_PKEY_base_id(pkey);
      if (iVar1 == 0x32b) {
        key = EVP_PKEY_get0(pkey);
        group = EC_KEY_get0_group(key);
        iVar1 = EC_GROUP_get_curve_name(group);
      }
      else {
        if (iVar1 != 0x32c) {
          return 0;
        }
        EVP_PKEY_get0(pkey);
        iVar1 = gost94_nid_by_params();
      }
      *data = iVar1;
    }
    EVP_PKEY_CTX_set_data(param_1,data);
    uVar3 = 1;
  }
  return uVar3;
}




undefined8 FUN_01ab941c(EVP_PKEY_CTX *param_1,EVP_PKEY_CTX *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_01ab933c();
  if ((int)uVar1 != 0) {
    puVar2 = EVP_PKEY_CTX_get_data(param_2);
    puVar3 = EVP_PKEY_CTX_get_data(param_1);
    uVar1 = puVar2[2];
    puVar3[3] = puVar2[3];
    puVar3[2] = uVar1;
    uVar1 = *puVar2;
    puVar3[1] = puVar2[1];
    *puVar3 = uVar1;
    if (puVar2[2] != 0) {
      puVar3[2] = 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

