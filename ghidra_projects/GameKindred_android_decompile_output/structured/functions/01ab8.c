// functions/01ab8 — 12 functions
#include "libGameKindred.h"




undefined8 FUN_01ab8284(void)

{
  gost_param_free();
  DAT_03218938 = 0;
  DAT_03218930 = 0;
  DAT_03218948 = 0;
  DAT_03218940 = 0;
  DAT_03218928 = 0;
  DAT_03218920 = 0;
  return 1;
}




undefined8 FUN_01ab82c0(long param_1)

{
  void *__s;
  
  __s = *(void **)(param_1 + 0x18);
  memset(__s,0,0x78);
  gost_init((long)__s + 0x78,GostR3411_94_CryptoProParamSet);
  *(long *)((long)__s + 8) = (long)__s + 0x78;
  return 1;
}




uint FUN_01ab85e0(EVP_PKEY_CTX *param_1,int param_2,uint param_3,EVP_MD *param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  void *__dest;
  
  puVar3 = EVP_PKEY_CTX_get_data(param_1);
  switch(param_2) {
  case 1:
    iVar2 = EVP_MD_type(param_4);
    if (iVar2 != 0x329) {
      ERR_GOST_error(0x7d,0x6c,"gost_pmeth.c",0x52);
      return 0;
    }
    *(EVP_MD **)(puVar3 + 2) = param_4;
    return 1;
  case 2:
    if (param_3 < 2) {
      return 1;
    }
    if (param_3 == 3) {
      puVar3[6] = 1;
      return 1;
    }
    if (param_3 == 2) {
      return puVar3[6];
    }
    break;
  case 3:
  case 4:
  case 5:
  case 7:
  case 9:
  case 10:
  case 0xb:
    return 1;
  case 6:
  case 0xc:
    break;
  case 8:
    __dest = CRYPTO_malloc(param_3,"gost_pmeth.c",0x6d);
    *(void **)(puVar3 + 4) = __dest;
    memcpy(__dest,param_4,(long)(int)param_3);
    return 1;
  case 0xd:
    uVar1 = puVar3[3];
    param_4->type = puVar3[2];
    param_4->pkey_type = uVar1;
    return 1;
  default:
    if (param_2 == 0x1001) {
      *puVar3 = param_3;
      return 1;
    }
  }
  return 0xfffffffe;
}




undefined4 FUN_01ab8770(EVP_PKEY_CTX *param_1,char *param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  int *piVar4;
  
  iVar2 = strcmp(param_2,"paramset");
  if (iVar2 != 0) {
    return 0xfffffffe;
  }
  if (param_3 == (byte *)0x0) {
    return 0;
  }
  sVar3 = strlen((char *)param_3);
  if (sVar3 == 2) {
    iVar2 = toupper((uint)*param_3);
    if (iVar2 == 0x58) {
      iVar2 = toupper((uint)param_3[1]);
      if (2 < iVar2 - 0x41U) {
        return 0;
      }
      iVar2 = iVar2 + 0x303;
      goto LAB_01ab884c;
    }
  }
  else if (sVar3 == 1) {
    iVar2 = toupper((uint)*param_3);
    if (3 < iVar2 - 0x41U) {
      return 0;
    }
    iVar2 = iVar2 + 0x2ff;
    goto LAB_01ab884c;
  }
  iVar2 = OBJ_txt2nid((char *)param_3);
  if (iVar2 == 0) {
    return 0;
  }
  piVar4 = &R3410_paramset;
  do {
    iVar1 = *piVar4;
    if (iVar1 == 0) break;
    piVar4 = piVar4 + 8;
  } while (iVar1 != iVar2);
  if (iVar1 == 0) {
    ERR_GOST_error(0x7f,0x70,"gost_pmeth.c",0xb1);
    return 0;
  }
LAB_01ab884c:
  piVar4 = EVP_PKEY_CTX_get_data(param_1);
  *piVar4 = iVar2;
  return 1;
}




undefined8 FUN_01ab8890(EVP_PKEY_CTX *param_1,EVP_PKEY *param_2)

{
  int iVar1;
  int *piVar2;
  DSA *r;
  
  piVar2 = EVP_PKEY_CTX_get_data(param_1);
  if (*piVar2 == 0) {
    ERR_GOST_error(0x8b,0x77,"gost_pmeth.c",0x105);
    return 0;
  }
  r = DSA_new();
  iVar1 = fill_GOST94_params(r,*piVar2);
  if (iVar1 != 0) {
    EVP_PKEY_assign(param_2,0x32c,r);
    EVP_PKEY_get0(param_2);
    gost_sign_keygen();
    return 1;
  }
  DSA_free(r);
  return 0;
}




undefined8
FUN_01ab8930(EVP_PKEY_CTX *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
            undefined4 param_5)

{
  EVP_PKEY *pkey;
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  
  pkey = EVP_PKEY_CTX_get0_pkey(param_1);
  if (param_3 != (undefined8 *)0x0) {
    if (param_2 == 0) {
      *param_3 = 0x40;
      return 1;
    }
    pvVar1 = EVP_PKEY_get0(pkey);
    lVar2 = gost_do_sign(param_4,param_5,pvVar1);
    if (lVar2 != 0) {
      uVar3 = pack_sign_cp(lVar2,0x20,param_2,param_3);
      return uVar3;
    }
  }
  return 0;
}




undefined8 FUN_01ab8a6c(EVP_PKEY_CTX *param_1,EVP_PKEY *param_2)

{
  int iVar1;
  int *piVar2;
  DSA *r;
  
  piVar2 = EVP_PKEY_CTX_get_data(param_1);
  if (*piVar2 == 0) {
    ERR_GOST_error(0x8b,0x77,"gost_pmeth.c",0x105);
    return 0;
  }
  r = DSA_new();
  iVar1 = fill_GOST94_params(r,*piVar2);
  if (iVar1 != 0) {
    EVP_PKEY_assign(param_2,0x32c,r);
    return 1;
  }
  DSA_free(r);
  return 0;
}




undefined4 FUN_01ab8b00(EVP_PKEY_CTX *param_1,char *param_2,byte *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  int *piVar5;
  
  iVar1 = strcmp(param_2,"paramset");
  if (iVar1 == 0) {
    if (param_3 == (byte *)0x0) {
      return 0;
    }
    sVar4 = strlen((char *)param_3);
    if (sVar4 == 2) {
      iVar1 = toupper((uint)*param_3);
      if (iVar1 == 0x58) {
        iVar1 = toupper((uint)param_3[1]);
        if (iVar1 == 0x41) {
          iVar1 = 0x34b;
        }
        else {
          if (iVar1 != 0x42) {
            return 0;
          }
          iVar1 = 0x34c;
        }
        goto switchD_01ab8b84_caseD_41;
      }
    }
    else if (sVar4 == 1) {
      iVar3 = toupper((uint)*param_3);
      uVar2 = 0;
      iVar1 = 0x348;
      switch(iVar3) {
      case 0x30:
        iVar1 = 0x347;
        break;
      default:
        goto switchD_01ab8b84_caseD_31;
      case 0x41:
        break;
      case 0x42:
        iVar1 = 0x349;
        break;
      case 0x43:
        iVar1 = 0x34a;
      }
      goto switchD_01ab8b84_caseD_41;
    }
    iVar1 = OBJ_txt2nid((char *)param_3);
    uVar2 = 0;
    if (iVar1 != 0) {
      piVar5 = &R3410_2001_paramset;
      do {
        iVar3 = *piVar5;
        if (iVar3 == 0) break;
        piVar5 = piVar5 + 0xe;
      } while (iVar3 != iVar1);
      if (iVar3 == 0) {
        ERR_GOST_error(0x7e,0x70,"gost_pmeth.c",0xee);
        return 0;
      }
switchD_01ab8b84_caseD_41:
      piVar5 = EVP_PKEY_CTX_get_data(param_1);
      *piVar5 = iVar1;
      return 1;
    }
  }
  else {
    uVar2 = 0xfffffffe;
  }
switchD_01ab8b84_caseD_31:
  return uVar2;
}




undefined8
FUN_01ab8c58(EVP_PKEY_CTX *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
            undefined4 param_5)

{
  EVP_PKEY *pkey;
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  
  pkey = EVP_PKEY_CTX_get0_pkey(param_1);
  if (param_3 != (undefined8 *)0x0) {
    if (param_2 == 0) {
      *param_3 = 0x40;
      return 1;
    }
    pvVar1 = EVP_PKEY_get0(pkey);
    lVar2 = gost2001_do_sign(param_4,param_5,pvVar1);
    if (lVar2 != 0) {
      uVar3 = pack_sign_cp(lVar2,0x20,param_2,param_3);
      return uVar3;
    }
  }
  return 0;
}




undefined8 FUN_01ab8d7c(EVP_PKEY_CTX *param_1,EVP_PKEY *param_2)

{
  int iVar1;
  int *piVar2;
  EC_KEY *key;
  
  piVar2 = EVP_PKEY_CTX_get_data(param_1);
  if (*piVar2 == 0) {
    ERR_GOST_error(0x8a,0x77,"gost_pmeth.c",0x117);
    return 0;
  }
  key = EC_KEY_new();
  iVar1 = fill_GOST2001_params(key,*piVar2);
  if (iVar1 != 0) {
    EVP_PKEY_assign(param_2,0x32b,key);
    EVP_PKEY_get0(param_2);
    gost2001_keygen();
    return 1;
  }
  EC_KEY_free(key);
  return 0;
}




undefined8 FUN_01ab8e1c(EVP_PKEY_CTX *param_1,EVP_PKEY *param_2)

{
  int iVar1;
  int *piVar2;
  EC_KEY *key;
  
  piVar2 = EVP_PKEY_CTX_get_data(param_1);
  if (*piVar2 == 0) {
    ERR_GOST_error(0x8a,0x77,"gost_pmeth.c",0x117);
    return 0;
  }
  key = EC_KEY_new();
  iVar1 = fill_GOST2001_params(key,*piVar2);
  if (iVar1 != 0) {
    EVP_PKEY_assign(param_2,0x32b,key);
    return 1;
  }
  EC_KEY_free(key);
  return 0;
}




undefined8 FUN_01ab8eb0(EVP_PKEY_CTX *param_1,undefined4 param_2,int param_3,EVP_MD *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  EVP_PKEY *pkey;
  undefined8 uVar7;
  ulong uVar8;
  
  piVar5 = EVP_PKEY_CTX_get_data(param_1);
  switch(param_2) {
  case 1:
    iVar4 = EVP_MD_type(param_4);
    if (iVar4 == 0x32f) {
      *(EVP_MD **)(piVar5 + 2) = param_4;
      return 1;
    }
    uVar6 = 0x6c;
    uVar7 = 0x1be;
    break;
  default:
    return 0xfffffffe;
  case 3:
  case 4:
  case 5:
    return 1;
  case 6:
    if (param_3 == 0x20) {
      uVar8 = param_4->flags;
      *(_func_1078 **)(piVar5 + 10) = param_4->init;
      *(ulong *)(piVar5 + 8) = uVar8;
      iVar4 = param_4->md_size;
      uVar1 = *(undefined4 *)&param_4->field_0xc;
      iVar2 = param_4->type;
      iVar3 = param_4->pkey_type;
      *piVar5 = 1;
      piVar5[6] = iVar4;
      piVar5[7] = uVar1;
      piVar5[4] = iVar2;
      piVar5[5] = iVar3;
      return 1;
    }
    uVar6 = 0x6f;
    uVar7 = 0x1d0;
    break;
  case 7:
    if (*piVar5 != 0) {
      piVar5 = piVar5 + 4;
LAB_01ab8f84:
                    /* WARNING: Could not recover jumptable at 0x01ab8fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(*(long *)param_4 + 0x70))(param_4,0x1004,0x20,piVar5);
      return uVar6;
    }
    pkey = EVP_PKEY_CTX_get0_pkey(param_1);
    if (pkey == (EVP_PKEY *)0x0) {
      uVar6 = 0x74;
      uVar7 = 0x1df;
    }
    else {
      piVar5 = EVP_PKEY_get0(pkey);
      if (piVar5 != (int *)0x0) goto LAB_01ab8f84;
      uVar6 = 0x74;
      uVar7 = 0x1e5;
    }
    break;
  case 0xd:
    iVar4 = piVar5[3];
    param_4->type = piVar5[2];
    param_4->pkey_type = iVar4;
    return 1;
  }
  ERR_GOST_error(0x80,uVar6,"gost_pmeth.c",uVar7);
  return 0;
}

