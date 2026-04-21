// functions/01a9c — 6 functions
#include "libGameKindred.h"




_STACK * FUN_01a9c834(X509V3_EXT_METHOD *param_1,_STACK *param_2,_STACK *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  size_t sVar5;
  size_t sVar6;
  char *dst;
  char acStack_b0 [80];
  
  iVar1 = sk_num(param_2);
  if (iVar1 < 1) {
    if (param_3 == (_STACK *)0x0) {
LAB_01a9c958:
      param_3 = sk_new_null();
    }
  }
  else {
    iVar1 = 0;
    do {
      puVar3 = sk_value(param_2,iVar1);
      param_3 = &i2v_GENERAL_NAME(param_1,(GENERAL_NAME *)puVar3[1],(stack_st_CONF_VALUE *)param_3)
                 ->stack;
      if (param_3 == (_STACK *)0x0) goto LAB_01a9c958;
      pvVar4 = sk_value(param_3,iVar1);
      i2t_ASN1_OBJECT(acStack_b0,0x50,(ASN1_OBJECT *)*puVar3);
      sVar5 = strlen(acStack_b0);
      sVar6 = strlen(*(char **)((long)pvVar4 + 8));
      iVar2 = (int)sVar6 + (int)sVar5 + 5;
      dst = CRYPTO_malloc(iVar2,"v3_info.c",0x7f);
      if (dst == (char *)0x0) {
        ERR_put_error(0x22,0x8a,0x41,"v3_info.c",0x82);
        return (_STACK *)0x0;
      }
      sVar5 = (size_t)iVar2;
      BUF_strlcpy(dst,acStack_b0,sVar5);
      BUF_strlcat(dst," - ",sVar5);
      BUF_strlcat(dst,*(char **)((long)pvVar4 + 8),sVar5);
      CRYPTO_free(*(void **)((long)pvVar4 + 8));
      *(char **)((long)pvVar4 + 8) = dst;
      iVar1 = iVar1 + 1;
      iVar2 = sk_num(param_2);
    } while (iVar1 < iVar2);
  }
  return param_3;
}




_STACK * FUN_01a9c9a8(X509V3_EXT_METHOD *param_1,X509V3_CTX *param_2,_STACK *param_3)

{
  int iVar1;
  int iVar2;
  _STACK *st;
  void *pvVar3;
  ASN1_VALUE *data;
  char *pcVar4;
  GENERAL_NAME *pGVar5;
  ASN1_OBJECT *pAVar6;
  char *__s;
  CONF_VALUE CStack_78;
  
  st = sk_new_null();
  if (st == (_STACK *)0x0) {
    ERR_put_error(0x22,0x8b,0x41,"v3_info.c",0x9d);
  }
  else {
    iVar1 = sk_num(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        pvVar3 = sk_value(param_3,iVar1);
        data = ASN1_item_new((ASN1_ITEM *)ACCESS_DESCRIPTION_it);
        if ((data == (ASN1_VALUE *)0x0) || (iVar2 = sk_push(st,data), iVar2 == 0)) {
          ERR_put_error(0x22,0x8b,0x41,"v3_info.c",0xa5);
LAB_01a9cb90:
          sk_pop_free(st,ACCESS_DESCRIPTION_free);
          return (_STACK *)0x0;
        }
        __s = *(char **)((long)pvVar3 + 8);
        pcVar4 = strchr(__s,0x3b);
        if (pcVar4 == (char *)0x0) {
          ERR_put_error(0x22,0x8b,0x8f,"v3_info.c",0xab);
          goto LAB_01a9cb90;
        }
        CStack_78.name = pcVar4 + 1;
        CStack_78.value = *(char **)((long)pvVar3 + 0x10);
        pGVar5 = v2i_GENERAL_NAME_ex(*(GENERAL_NAME **)(data + 8),param_1,param_2,&CStack_78,0);
        if (pGVar5 == (GENERAL_NAME *)0x0) goto LAB_01a9cb90;
        iVar2 = (int)pcVar4 - (int)__s;
        pcVar4 = CRYPTO_malloc(iVar2 + 1,"v3_info.c",0xb3);
        if (pcVar4 == (char *)0x0) {
          ERR_put_error(0x22,0x8b,0x41,"v3_info.c",0xb5);
          goto LAB_01a9cb90;
        }
        strncpy(pcVar4,*(char **)((long)pvVar3 + 8),(long)iVar2);
        pcVar4[iVar2] = '\0';
        pAVar6 = OBJ_txt2obj(pcVar4,0);
        *(ASN1_OBJECT **)data = pAVar6;
        if (pAVar6 == (ASN1_OBJECT *)0x0) {
          ERR_put_error(0x22,0x8b,0x77,"v3_info.c",0xbd);
          ERR_add_error_data(2,"value=",pcVar4);
          CRYPTO_free(pcVar4);
          goto LAB_01a9cb90;
        }
        CRYPTO_free(pcVar4);
        iVar1 = iVar1 + 1;
        iVar2 = sk_num(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return st;
}




bool FUN_01a9cdfc(undefined8 param_1,ASN1_OBJECT *param_2,BIO *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = BIO_printf(param_3,"%*s",param_4 & 0xffffffff,&DAT_01e277f2);
  if (0 < iVar1) {
    iVar1 = i2a_ASN1_OBJECT(param_3,param_2);
    return 0 < iVar1;
  }
  return false;
}




ulong FUN_01a9cf1c(uint *param_1,long *param_2)

{
  uint uVar1;
  
  if (param_2 != (long *)0x0) {
    memcpy((void *)*param_2,*(void **)(param_1 + 2),(long)(int)*param_1);
    uVar1 = *param_1;
    *param_2 = *param_2 + (long)(int)uVar1;
    return (long)(int)uVar1;
  }
  return (ulong)*param_1;
}




bool FUN_01a9cf70(undefined8 param_1,ASN1_STRING *param_2,BIO *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = BIO_printf(param_3,"%*s",param_4 & 0xffffffff,&DAT_01e277f2);
  if (0 < iVar1) {
    iVar1 = i2a_ASN1_STRING(param_3,param_2,4);
    return 0 < iVar1;
  }
  return false;
}




undefined8 FUN_01a9cfec(undefined8 param_1,undefined8 *param_2,BIO *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  iVar1 = BIO_printf(param_3,"%*sIssuer: ",(ulong)param_4,&DAT_01e277f2);
  if ((iVar1 < 1) ||
     (iVar1 = X509_NAME_print_ex(param_3,(X509_NAME *)*param_2,0,0x82031f), iVar1 < 1)) {
LAB_01a9d108:
    uVar4 = 0;
  }
  else {
    iVar1 = sk_num((_STACK *)param_2[1]);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        puVar3 = sk_value((_STACK *)param_2[1],iVar1);
        iVar2 = BIO_printf(param_3,"\n%*s",(ulong)(param_4 << 1),&DAT_01e277f2);
        if ((((iVar2 < 1) || (iVar2 = i2a_ASN1_OBJECT(param_3,(ASN1_OBJECT *)*puVar3), iVar2 < 1))
            || (iVar2 = BIO_puts(param_3," - "), iVar2 < 1)) ||
           (iVar2 = GENERAL_NAME_print(param_3,(GENERAL_NAME *)puVar3[1]), iVar2 < 1))
        goto LAB_01a9d108;
        iVar1 = iVar1 + 1;
        iVar2 = sk_num((_STACK *)param_2[1]);
      } while (iVar1 < iVar2);
    }
    uVar4 = 1;
  }
  return uVar4;
}

