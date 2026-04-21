// functions/01a98 — 5 functions
#include "libGameKindred.h"




undefined8 FUN_01a9808c(int *param_1,_STACK *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  X509_NAME *name;
  X509_NAME_ENTRY *pXVar3;
  ASN1_STRING *pAVar4;
  GENERAL_NAME *a;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      return 1;
    }
    if (*(X509 **)(param_1 + 4) == (X509 *)0x0) {
      if (*(long **)(param_1 + 6) == (long *)0x0) goto LAB_01a981f0;
      name = *(X509_NAME **)(**(long **)(param_1 + 6) + 0x20);
    }
    else {
      name = X509_get_subject_name(*(X509 **)(param_1 + 4));
    }
    if (param_3 == 0) {
      iVar1 = -1;
      do {
        iVar1 = X509_NAME_get_index_by_NID(name,0x30,iVar1);
        if (iVar1 < 0) {
          return 1;
        }
        pXVar3 = X509_NAME_get_entry(name,iVar1);
        pAVar4 = X509_NAME_ENTRY_get_data(pXVar3);
        pAVar4 = ASN1_STRING_dup(pAVar4);
        if ((pAVar4 == (ASN1_STRING *)0x0) || (a = GENERAL_NAME_new(), a == (GENERAL_NAME *)0x0))
        goto LAB_01a98214;
        (a->d).otherName = (OTHERNAME *)pAVar4;
        a->type = 1;
        iVar2 = sk_push(param_2,a);
      } while (iVar2 != 0);
    }
    else {
      iVar1 = -1;
      do {
        iVar1 = X509_NAME_get_index_by_NID(name,0x30,iVar1);
        if (iVar1 < 0) {
          return 1;
        }
        pXVar3 = X509_NAME_get_entry(name,iVar1);
        pAVar4 = X509_NAME_ENTRY_get_data(pXVar3);
        pAVar4 = ASN1_STRING_dup(pAVar4);
        X509_NAME_delete_entry(name,iVar1);
        X509_NAME_ENTRY_free(pXVar3);
        if ((pAVar4 == (ASN1_STRING *)0x0) || (a = GENERAL_NAME_new(), a == (GENERAL_NAME *)0x0))
        goto LAB_01a98214;
        (a->d).otherName = (OTHERNAME *)pAVar4;
        a->type = 1;
        iVar1 = iVar1 + -1;
        iVar2 = sk_push(param_2,a);
      } while (iVar2 != 0);
    }
    ERR_put_error(0x22,0x7a,0x41,"v3_alt.c",0x180);
    pAVar4 = (ASN1_STRING *)0x0;
    goto LAB_01a98234;
  }
LAB_01a981f0:
  ERR_put_error(0x22,0x7a,0x7d,"v3_alt.c",0x164);
  pAVar4 = (ASN1_STRING *)0x0;
  goto LAB_01a98230;
LAB_01a98214:
  ERR_put_error(0x22,0x7a,0x41,"v3_alt.c",0x179);
LAB_01a98230:
  a = (GENERAL_NAME *)0x0;
LAB_01a98234:
  GENERAL_NAME_free(a);
  ASN1_STRING_free(pAVar4);
  return 0;
}




stack_st_CONF_VALUE *
FUN_01a9849c(undefined8 param_1,undefined8 *param_2,stack_st_CONF_VALUE *param_3)

{
  char *pcVar1;
  int *piVar2;
  stack_st_CONF_VALUE *local_28;
  
  piVar2 = (int *)*param_2;
  local_28 = param_3;
  if (piVar2 != (int *)0x0) {
    pcVar1 = hex_to_string(*(uchar **)(piVar2 + 2),(long)*piVar2);
    X509V3_add_value("keyid",pcVar1,&local_28);
    CRYPTO_free(pcVar1);
  }
  if ((GENERAL_NAMES *)param_2[1] != (GENERAL_NAMES *)0x0) {
    local_28 = i2v_GENERAL_NAMES((X509V3_EXT_METHOD *)0x0,(GENERAL_NAMES *)param_2[1],local_28);
  }
  piVar2 = (int *)param_2[2];
  if (piVar2 != (int *)0x0) {
    pcVar1 = hex_to_string(*(uchar **)(piVar2 + 2),(long)*piVar2);
    X509V3_add_value("serial",pcVar1,&local_28);
    CRYPTO_free(pcVar1);
  }
  return local_28;
}




AUTHORITY_KEYID * FUN_01a98548(undefined8 param_1,int *param_2,_STACK *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  X509_EXTENSION *ext;
  ASN1_STRING *a;
  AUTHORITY_KEYID *pAVar5;
  _STACK *st;
  GENERAL_NAME *data;
  int iVar6;
  X509 *x;
  ASN1_INTEGER *pAVar7;
  X509_NAME *pXVar8;
  char *__s1;
  
  iVar1 = sk_num(param_3);
  if (iVar1 < 1) {
    iVar1 = 0;
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    iVar1 = 0;
    iVar3 = 0;
    do {
      pvVar4 = sk_value(param_3,iVar3);
      __s1 = *(char **)((long)pvVar4 + 8);
      iVar2 = strcmp(__s1,"keyid");
      if (iVar2 == 0) {
        if (*(char **)((long)pvVar4 + 0x10) == (char *)0x0) {
          iVar6 = 1;
        }
        else {
          iVar2 = strcmp(*(char **)((long)pvVar4 + 0x10),"always");
          iVar6 = 1;
          if (iVar2 == 0) {
            iVar6 = 2;
          }
        }
      }
      else {
        iVar1 = strcmp(__s1,"issuer");
        if (iVar1 != 0) {
          ERR_put_error(0x22,0x77,0x78,"v3_akey.c",0x8f);
          ERR_add_error_data(2,"name=",*(undefined8 *)((long)pvVar4 + 8));
          return (AUTHORITY_KEYID *)0x0;
        }
        if (*(char **)((long)pvVar4 + 0x10) == (char *)0x0) {
          iVar1 = 1;
        }
        else {
          iVar2 = strcmp(*(char **)((long)pvVar4 + 0x10),"always");
          iVar1 = 1;
          if (iVar2 == 0) {
            iVar1 = 2;
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar2 = sk_num(param_3);
    } while (iVar3 < iVar2);
  }
  if (param_2 == (int *)0x0) {
LAB_01a98728:
    ERR_put_error(0x22,0x77,0x79,"v3_akey.c",0x99);
    return (AUTHORITY_KEYID *)0x0;
  }
  x = *(X509 **)(param_2 + 2);
  if (x == (X509 *)0x0) {
    if (*param_2 == 1) {
      pAVar5 = AUTHORITY_KEYID_new();
      return pAVar5;
    }
    goto LAB_01a98728;
  }
  if (iVar6 == 0) {
    a = (ASN1_STRING *)0x0;
  }
  else {
    iVar3 = X509_get_ext_by_NID(x,0x52,-1);
    if ((iVar3 < 0) || (ext = X509_get_ext(x,iVar3), ext == (X509_EXTENSION *)0x0)) {
      a = (ASN1_STRING *)0x0;
    }
    else {
      a = X509V3_EXT_d2i(ext);
    }
    if ((iVar6 == 2) && (a == (ASN1_STRING *)0x0)) {
      ERR_put_error(0x22,0x77,0x7b,"v3_akey.c",0xa5);
      return (AUTHORITY_KEYID *)0x0;
    }
  }
  if ((iVar1 == 2) || (iVar1 != 0 && a == (ASN1_STRING *)0x0)) {
    pXVar8 = X509_get_issuer_name(x);
    pXVar8 = X509_NAME_dup(pXVar8);
    pAVar7 = X509_get_serialNumber(x);
    pAVar7 = ASN1_STRING_dup(pAVar7);
    if ((pXVar8 != (X509_NAME *)0x0) && (pAVar7 != (ASN1_STRING *)0x0)) {
      pAVar5 = AUTHORITY_KEYID_new();
      goto joined_r0x01a98804;
    }
    iVar1 = 0x7a;
    iVar6 = 0xaf;
  }
  else {
    pXVar8 = (X509_NAME *)0x0;
    pAVar7 = (ASN1_INTEGER *)0x0;
    pAVar5 = AUTHORITY_KEYID_new();
joined_r0x01a98804:
    if (pAVar5 == (AUTHORITY_KEYID *)0x0) goto LAB_01a98844;
    if (pXVar8 == (X509_NAME *)0x0) {
      st = (_STACK *)0x0;
LAB_01a98868:
      pAVar5->keyid = a;
      pAVar5->issuer = (GENERAL_NAMES *)st;
      pAVar5->serial = pAVar7;
      return pAVar5;
    }
    st = sk_new_null();
    if (((st != (_STACK *)0x0) && (data = GENERAL_NAME_new(), data != (GENERAL_NAME *)0x0)) &&
       (iVar1 = sk_push(st,data), iVar1 != 0)) {
      data->type = 4;
      (data->d).directoryName = pXVar8;
      goto LAB_01a98868;
    }
    iVar1 = 0x41;
    iVar6 = 0xbb;
  }
  ERR_put_error(0x22,0x77,iVar1,"v3_akey.c",iVar6);
LAB_01a98844:
  X509_NAME_free(pXVar8);
  ASN1_STRING_free(pAVar7);
  ASN1_STRING_free(a);
  return (AUTHORITY_KEYID *)0x0;
}




undefined8 FUN_01a98894(undefined8 param_1,long *param_2,BIO *param_3,ulong param_4)

{
  long lVar1;
  
  BIO_printf(param_3,"%*s",param_4 & 0xffffffff,&DAT_01e277f2);
  if (*param_2 == 0) {
    lVar1 = param_2[1];
  }
  else {
    BIO_write(param_3,"Not Before: ",0xc);
    ASN1_GENERALIZEDTIME_print(param_3,(ASN1_GENERALIZEDTIME *)*param_2);
    if (param_2[1] == 0) {
      return 1;
    }
    BIO_write(param_3,", ",2);
    lVar1 = param_2[1];
  }
  if (lVar1 != 0) {
    BIO_write(param_3,"Not After: ",0xb);
    ASN1_GENERALIZEDTIME_print(param_3,(ASN1_GENERALIZEDTIME *)param_2[1]);
  }
  return 1;
}




undefined8 FUN_01a98ad0(undefined8 param_1,undefined8 *param_2,BIO *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  char *ptr;
  
  lVar3 = ASN1_INTEGER_get((ASN1_INTEGER *)*param_2);
  BIO_printf(param_3,"%*sVersion: %ld (0x%lX)",(ulong)param_4,&DAT_01e277f2,lVar3 + 1,lVar3);
  iVar1 = sk_num((_STACK *)param_2[1]);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar4 = sk_value((_STACK *)param_2[1],iVar1);
      ptr = i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,(ASN1_INTEGER *)*puVar4);
      BIO_printf(param_3,"\n%*sZone: %s, User: ",(ulong)param_4,&DAT_01e277f2,ptr);
      CRYPTO_free(ptr);
      ASN1_STRING_print(param_3,(ASN1_STRING *)puVar4[1]);
      iVar1 = iVar1 + 1;
      iVar2 = sk_num((_STACK *)param_2[1]);
    } while (iVar1 < iVar2);
  }
  return 1;
}

