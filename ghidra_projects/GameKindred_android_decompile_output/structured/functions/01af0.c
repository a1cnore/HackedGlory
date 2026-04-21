// functions/01af0 — 5 functions
#include "libGameKindred.h"




undefined8
FUN_01af0188(CONF *param_1,v3_ext_ctx *param_2,int param_3,undefined4 param_4,char *param_5)

{
  int iVar1;
  X509V3_EXT_METHOD *method;
  _STACK *st;
  ASN1_VALUE *val;
  undefined8 uVar2;
  char *pcVar3;
  int line;
  X509V3_EXT_S2I pXVar4;
  
  if (param_3 == 0) {
    iVar1 = 0x82;
    line = 0x7d;
  }
  else {
    method = X509V3_EXT_get_nid(param_3);
    if (method != (X509V3_EXT_METHOD *)0x0) {
      if (method->v2i == (X509V3_EXT_V2I)0x0) {
        pXVar4 = method->s2i;
        if (pXVar4 == (X509V3_EXT_S2I)0x0) {
          pXVar4 = (X509V3_EXT_S2I)method->r2i;
          if (pXVar4 == (X509V3_EXT_S2I)0x0) {
            ERR_put_error(0x22,0x97,0x67,"v3_conf.c",0xa2);
            pcVar3 = OBJ_nid2sn(param_3);
            ERR_add_error_data(2,"name=",pcVar3);
            return 0;
          }
          if ((param_2->db == (void *)0x0) || (param_2->db_meth == (X509V3_CONF_METHOD *)0x0)) {
            iVar1 = 0x88;
            line = 0x9b;
            goto LAB_01af0264;
          }
        }
        val = (*pXVar4)(method,param_2,param_5);
      }
      else {
        if (*param_5 == '@') {
          st = &NCONF_get_section(param_1,param_5 + 1)->stack;
          iVar1 = sk_num(st);
        }
        else {
          st = &X509V3_parse_list(param_5)->stack;
          iVar1 = sk_num(st);
        }
        if (iVar1 < 1) {
          ERR_put_error(0x22,0x97,0x69,"v3_conf.c",0x8c);
          pcVar3 = OBJ_nid2sn(param_3);
          ERR_add_error_data(4,"name=",pcVar3,",section=",param_5);
          return 0;
        }
        val = (*method->v2i)(method,param_2,(stack_st_CONF_VALUE *)st);
        if (*param_5 != '@') {
          sk_pop_free(st,X509V3_conf_free);
        }
      }
      if (val == (ASN1_VALUE *)0x0) {
        return 0;
      }
      uVar2 = FUN_01af0568(method,param_3,param_4,val);
      if (method->it == (ASN1_ITEM *)0x0) {
        (*method->ext_free)(val);
        return uVar2;
      }
      ASN1_item_free(val,method->it);
      return uVar2;
    }
    iVar1 = 0x81;
    line = 0x81;
  }
LAB_01af0264:
  ERR_put_error(0x22,0x97,iVar1,"v3_conf.c",line);
  return 0;
}




X509_EXTENSION * FUN_01af0568(long param_1,int param_2,int param_3,ASN1_VALUE *param_4)

{
  int num;
  ASN1_OCTET_STRING *data;
  X509_EXTENSION *pXVar1;
  uchar *local_48;
  uchar *local_38;
  
  if (*(ASN1_ITEM **)(param_1 + 8) == (ASN1_ITEM *)0x0) {
    num = (**(code **)(param_1 + 0x28))(param_4,0);
    local_38 = CRYPTO_malloc(num,"v3_conf.c",0xc1);
    if (local_38 == (uchar *)0x0) goto LAB_01af0644;
    local_48 = local_38;
    (**(code **)(param_1 + 0x28))(param_4,&local_48);
    data = ASN1_STRING_type_new(4);
  }
  else {
    local_38 = (uchar *)0x0;
    num = ASN1_item_i2d(param_4,&local_38,*(ASN1_ITEM **)(param_1 + 8));
    if (num < 0) goto LAB_01af0644;
    data = ASN1_STRING_type_new(4);
  }
  if (data != (ASN1_OCTET_STRING *)0x0) {
    data->length = num;
    data->data = local_38;
    pXVar1 = X509_EXTENSION_create_by_NID((X509_EXTENSION **)0x0,param_2,param_3,data);
    if (pXVar1 != (X509_EXTENSION *)0x0) {
      ASN1_STRING_free(data);
      return pXVar1;
    }
  }
LAB_01af0644:
  ERR_put_error(0x22,0x87,0x41,"v3_conf.c",0xd3);
  return (X509_EXTENSION *)0x0;
}




_STACK * FUN_01af0ba0(undefined8 param_1,undefined8 param_2,_STACK *param_3)

{
  int iVar1;
  int iVar2;
  _STACK *st;
  undefined8 *puVar3;
  char *s;
  ASN1_OBJECT *data;
  
  st = sk_new_null();
  if (st == (_STACK *)0x0) {
    ERR_put_error(0x22,0x67,0x41,"v3_extku.c",0x81);
  }
  else {
    iVar1 = sk_num(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        puVar3 = sk_value(param_3,iVar1);
        s = (char *)puVar3[2];
        if (s == (char *)0x0) {
          s = (char *)puVar3[1];
        }
        data = OBJ_txt2obj(s,0);
        if (data == (ASN1_OBJECT *)0x0) {
          sk_pop_free(st,ASN1_OBJECT_free);
          ERR_put_error(0x22,0x67,0x6e,"v3_extku.c",0x8e);
          ERR_add_error_data(6,"section:",*puVar3,",name:",puVar3[1],",value:",puVar3[2]);
          return (_STACK *)0x0;
        }
        sk_push(st,data);
        iVar1 = iVar1 + 1;
        iVar2 = sk_num(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return st;
}




void * FUN_01af0cdc(undefined8 param_1,int *param_2)

{
  void *__dest;
  
  if (param_2 == (int *)0x0) {
    return (void *)0x0;
  }
  if (*param_2 != 0) {
    __dest = CRYPTO_malloc(*param_2 + 1,"v3_ia5.c",0x57);
    if (__dest != (void *)0x0) {
      memcpy(__dest,*(void **)(param_2 + 2),(long)*param_2);
      *(undefined1 *)((long)__dest + (long)*param_2) = 0;
      return __dest;
    }
    ERR_put_error(0x22,0x95,0x41,"v3_ia5.c",0x58);
    return (void *)0x0;
  }
  return (void *)0x0;
}




ASN1_STRING * FUN_01af0d90(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  ASN1_STRING *str;
  size_t sVar2;
  int line;
  
  if (param_3 == (char *)0x0) {
    iVar1 = 0x6b;
    line = 0x66;
  }
  else {
    str = ASN1_STRING_type_new(0x16);
    if (str != (ASN1_STRING *)0x0) {
      sVar2 = strlen(param_3);
      iVar1 = ASN1_STRING_set(str,param_3,(int)sVar2);
      if (iVar1 != 0) {
        return str;
      }
      ASN1_STRING_free(str);
    }
    iVar1 = 0x41;
    line = 0x75;
  }
  ERR_put_error(0x22,100,iVar1,"v3_ia5.c",line);
  return (ASN1_STRING *)0x0;
}

