// functions/01aeb — 1 functions
#include "libGameKindred.h"




ASN1_TYPE * FUN_01aeb98c(char *param_1,X509V3_CTX *param_2,int param_3,undefined4 *param_4)

{
  uint constructed;
  int iVar1;
  uint uVar2;
  int iVar3;
  _STACK *st;
  _STACK *section;
  void *pvVar4;
  ASN1_TYPE *pAVar5;
  ASN1_STRING *pAVar6;
  ulong mask;
  ASN1_INTEGER *pAVar7;
  uchar *puVar8;
  uchar *puVar9;
  ASN1_OBJECT *pAVar10;
  undefined4 uVar11;
  int iVar12;
  uchar **ppuVar13;
  int *piVar14;
  int iStack_290;
  int iStack_28c;
  long local_288;
  uchar *local_280;
  uchar *local_278;
  uchar *local_270;
  undefined8 local_268;
  uint local_260;
  int local_25c;
  uchar *local_258 [3];
  int local_240 [116];
  int local_70;
  CONF_VALUE local_68;
  
  local_270 = (uchar *)0x0;
  local_268 = 0xffffffffffffffff;
  local_25c = 1;
  local_70 = 0;
  iVar1 = CONF_parse_list(param_1,0x2c,1,(list_cb *)&LAB_01aec1f4,&local_268);
  iVar3 = local_25c;
  if (iVar1 != 0) {
    uVar11 = 0xc2;
    goto LAB_01aeb9ec;
  }
  if ((local_260 & 0xfffffffe) == 0x10) {
    if (param_2 == (X509V3_CTX *)0x0) {
      uVar11 = 0xc0;
LAB_01aeb9ec:
      *param_4 = uVar11;
      return (ASN1_TYPE *)0x0;
    }
    if (0x31 < param_3) {
      uVar11 = 0xb5;
      goto LAB_01aeb9ec;
    }
    local_68.section = (char *)0x0;
    st = sk_new_null();
    if (st == (_STACK *)0x0) {
      pAVar5 = (ASN1_TYPE *)0x0;
      section = (_STACK *)0x0;
      goto joined_r0x01aebc54;
    }
    section = (_STACK *)0x0;
    if (local_258[0] == (uchar *)0x0) {
LAB_01aebbc4:
      if (local_260 == 0x11) {
        iVar3 = i2d_ASN1_SET_ANY((ASN1_SEQUENCE_ANY *)st,(uchar **)&local_68);
      }
      else {
        iVar3 = i2d_ASN1_SEQUENCE_ANY((ASN1_SEQUENCE_ANY *)st,(uchar **)&local_68);
      }
      if (iVar3 < 0) goto LAB_01aebf28;
      pAVar5 = ASN1_TYPE_new();
      if (pAVar5 == (ASN1_TYPE *)0x0) goto joined_r0x01aebc54;
      pAVar6 = ASN1_STRING_type_new(local_260);
      (pAVar5->value).asn1_string = pAVar6;
      if (pAVar6 == (ASN1_STRING *)0x0) goto joined_r0x01aebc54;
      pAVar5->type = local_260;
      pAVar6->data = (uchar *)local_68.section;
      ((pAVar5->value).asn1_string)->length = iVar3;
      local_68.section = (char *)0x0;
    }
    else {
      section = &X509V3_get_section(param_2,(char *)local_258[0])->stack;
      if (section != (_STACK *)0x0) {
        iVar3 = sk_num(section);
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            pvVar4 = sk_value(section,iVar3);
            pvVar4 = (void *)FUN_01aeb98c(*(undefined8 *)((long)pvVar4 + 0x10),param_2,param_3 + 1,
                                          param_4);
            if (pvVar4 == (void *)0x0) goto LAB_01aebf28;
            iVar1 = sk_push(st,pvVar4);
            if (iVar1 == 0) {
              pAVar5 = (ASN1_TYPE *)0x0;
              goto joined_r0x01aebc54;
            }
            iVar3 = iVar3 + 1;
            iVar1 = sk_num(section);
          } while (iVar3 < iVar1);
        }
        goto LAB_01aebbc4;
      }
LAB_01aebf28:
      pAVar5 = (ASN1_TYPE *)0x0;
joined_r0x01aebc54:
      if ((uchar *)local_68.section != (uchar *)0x0) {
        CRYPTO_free(local_68.section);
      }
    }
    if (st != (_STACK *)0x0) {
      sk_pop_free(st,ASN1_TYPE_free);
    }
    if (section != (_STACK *)0x0) {
      X509V3_section_free(param_2,(stack_st_CONF_VALUE *)section);
    }
    goto joined_r0x01aec108;
  }
  pAVar5 = ASN1_TYPE_new();
  if (pAVar5 == (ASN1_TYPE *)0x0) {
    ERR_put_error(0xd,0xb3,0x41,"asn1_gen.c",0x289);
    return (ASN1_TYPE *)0x0;
  }
  puVar9 = "";
  if (local_258[0] != (uchar *)0x0) {
    puVar9 = local_258[0];
  }
  switch(local_260) {
  case 1:
    if (iVar3 == 1) {
      local_68.section = (char *)0x0;
      local_68.name = (char *)0x0;
      local_68.value = (char *)puVar9;
      iVar3 = X509V3_get_value_bool(&local_68,&(pAVar5->value).boolean);
      if (iVar3 != 0) goto LAB_01aebc8c;
      iVar3 = 0xb0;
      iVar1 = 0x2a2;
      break;
    }
    ERR_put_error(0xd,0xb3,0xbe,"asn1_gen.c",0x29b);
    goto LAB_01aec1e0;
  case 2:
  case 10:
    if (iVar3 != 1) {
      ERR_put_error(0xd,0xb3,0xb9,"asn1_gen.c",0x2aa);
      goto LAB_01aec1e0;
    }
    pAVar7 = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,(char *)puVar9);
    (pAVar5->value).integer = pAVar7;
    if (pAVar7 != (ASN1_INTEGER *)0x0) goto LAB_01aebc8c;
    iVar3 = 0xb4;
    iVar1 = 0x2ae;
    break;
  case 3:
  case 4:
    pAVar6 = ASN1_STRING_new();
    (pAVar5->value).asn1_string = pAVar6;
    if (pAVar6 == (ASN1_STRING *)0x0) {
      ERR_put_error(0xd,0xb3,0x41,"asn1_gen.c",0x2f4);
      goto LAB_01aec1e0;
    }
    if (iVar3 != 1) {
      if (iVar3 == 3) {
        puVar8 = string_to_hex((char *)puVar9,(long *)&local_68);
        if (puVar8 != (uchar *)0x0) {
          ((pAVar5->value).asn1_string)->data = puVar8;
          ((pAVar5->value).asn1_string)->length = (int)local_68.section;
          ((pAVar5->value).asn1_string)->type = local_260;
          if (local_260 == 3) goto LAB_01aec0e4;
          goto LAB_01aebc8c;
        }
        iVar3 = 0xb2;
        iVar1 = 0x2fb;
      }
      else {
        if ((local_260 != 3) || (iVar3 != 4)) {
          ERR_put_error(0xd,0xb3,0xaf,"asn1_gen.c",0x30f);
          goto LAB_01aec1e0;
        }
        iVar3 = CONF_parse_list((char *)puVar9,0x2c,1,(list_cb *)&LAB_01aec7b8,pAVar6);
        if (iVar3 != 0) goto LAB_01aebc8c;
        iVar3 = 0xbc;
        iVar1 = 0x309;
      }
      break;
    }
    ASN1_STRING_set(pAVar6,puVar9,-1);
    if (local_260 != 3) goto LAB_01aebc8c;
LAB_01aec0e4:
    ((pAVar5->value).asn1_string)->flags = ((pAVar5->value).asn1_string)->flags & 0xfffffffffffffff0
    ;
    ((pAVar5->value).asn1_string)->flags = ((pAVar5->value).asn1_string)->flags | 8;
    pAVar5->type = local_260;
    goto joined_r0x01aec108;
  case 5:
    if (*puVar9 != '\0') {
      ERR_put_error(0xd,0xb3,0xb6,"asn1_gen.c",0x294);
      goto LAB_01aec1e0;
    }
LAB_01aebc8c:
    pAVar5->type = local_260;
    goto joined_r0x01aec108;
  case 6:
    if (iVar3 != 1) {
      ERR_put_error(0xd,0xb3,0xbf,"asn1_gen.c",0x2b5);
      goto LAB_01aec1e0;
    }
    pAVar10 = OBJ_txt2obj((char *)puVar9,0);
    (pAVar5->value).object = pAVar10;
    if (pAVar10 != (ASN1_OBJECT *)0x0) goto LAB_01aebc8c;
    iVar3 = 0xb7;
    iVar1 = 0x2b9;
    break;
  default:
    iVar3 = 0xc4;
    iVar1 = 0x31c;
    break;
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1e:
    if (iVar3 == 1) {
      iVar3 = 0x1001;
    }
    else {
      if (iVar3 != 2) {
        ERR_put_error(0xd,0xb3,0xb1,"asn1_gen.c",0x2e3);
        goto LAB_01aec1e0;
      }
      iVar3 = 0x1000;
    }
    mask = ASN1_tag2bit(local_260);
    iVar3 = ASN1_mbstring_copy(&(pAVar5->value).asn1_string,puVar9,-1,iVar3,mask);
    if (0 < iVar3) goto LAB_01aebc8c;
    iVar3 = 0x41;
    iVar1 = 0x2e9;
    break;
  case 0x17:
  case 0x18:
    if (iVar3 != 1) {
      ERR_put_error(0xd,0xb3,0xc1,"asn1_gen.c",0x2c1);
      goto LAB_01aec1e0;
    }
    pAVar6 = ASN1_STRING_new();
    (pAVar5->value).asn1_string = pAVar6;
    if (pAVar6 == (ASN1_STRING *)0x0) {
      iVar3 = 0x41;
      iVar1 = 0x2c5;
    }
    else {
      iVar3 = ASN1_STRING_set(pAVar6,puVar9,-1);
      if (iVar3 == 0) {
        iVar3 = 0x41;
        iVar1 = 0x2c9;
      }
      else {
        ((pAVar5->value).asn1_string)->type = local_260;
        iVar3 = ASN1_TIME_check((pAVar5->value).asn1_string);
        if (iVar3 != 0) goto LAB_01aebc8c;
        iVar3 = 0xb8;
        iVar1 = 0x2ce;
      }
    }
  }
  ERR_put_error(0xd,0xb3,iVar3,"asn1_gen.c",iVar1);
  ERR_add_error_data(2,"string=",puVar9);
LAB_01aec1e0:
  ASN1_TYPE_free(pAVar5);
  pAVar5 = (ASN1_TYPE *)0x0;
joined_r0x01aec108:
  if (pAVar5 == (ASN1_TYPE *)0x0) {
    return (ASN1_TYPE *)0x0;
  }
  if (((uint)local_268 == -1) && (local_70 == 0)) {
    return pAVar5;
  }
  iVar3 = i2d_ASN1_TYPE(pAVar5,&local_270);
  ASN1_TYPE_free(pAVar5);
  local_68.section = (char *)local_270;
  if ((uint)local_268 == -1) {
    uVar2 = 0;
    iVar1 = iVar3;
  }
  else {
    uVar2 = ASN1_get_object((uchar **)&local_68,&local_288,&iStack_28c,&iStack_290,(long)iVar3);
    if ((uVar2 >> 7 & 1) != 0) {
      pAVar5 = (ASN1_TYPE *)0x0;
      puVar9 = (uchar *)0x0;
      goto joined_r0x01aebf14;
    }
    iVar3 = iVar3 + ((int)local_270 - (int)local_68.section);
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar2 & 0x20;
    }
    else {
      local_288._0_4_ = 0;
      local_288 = 0;
      uVar2 = 2;
    }
    iVar1 = ASN1_object_size(0,(int)local_288,(uint)local_268);
  }
  if (0 < local_70) {
    iVar12 = 0;
    ppuVar13 = local_258 + (long)local_70 * 3;
    do {
      puVar9 = (uchar *)((long)*(int *)((long)ppuVar13 + -4) + (long)iVar1);
      *ppuVar13 = puVar9;
      iVar1 = ASN1_object_size(0,(int)puVar9,*(int *)(ppuVar13 + -2));
      iVar12 = iVar12 + 1;
      ppuVar13 = ppuVar13 + -3;
    } while (iVar12 < local_70);
  }
  puVar9 = CRYPTO_malloc(iVar1,"asn1_gen.c",0xf5);
  if (puVar9 == (uchar *)0x0) {
    pAVar5 = (ASN1_TYPE *)0x0;
  }
  else {
    local_278 = puVar9;
    if (0 < local_70) {
      iVar12 = 0;
      piVar14 = local_240;
      do {
        ASN1_put_object(&local_278,piVar14[-2],*piVar14,piVar14[-4],piVar14[-3]);
        if (piVar14[-1] != 0) {
          *local_278 = '\0';
          local_278 = local_278 + 1;
        }
        iVar12 = iVar12 + 1;
        piVar14 = piVar14 + 6;
      } while (iVar12 < local_70);
    }
    if ((uint)local_268 != 0xffffffff) {
      constructed = 0x20;
      if (local_268._4_4_ != 0 || ((uint)local_268 & 0xfffffffe) != 0x10) {
        constructed = uVar2;
      }
      ASN1_put_object(&local_278,constructed,(int)local_288,(uint)local_268,local_268._4_4_);
    }
    memcpy(local_278,local_68.section,(long)iVar3);
    local_280 = puVar9;
    pAVar5 = d2i_ASN1_TYPE((ASN1_TYPE **)0x0,&local_280,(long)iVar1);
  }
joined_r0x01aebf14:
  if (local_270 != (uchar *)0x0) {
    CRYPTO_free(local_270);
  }
  if (puVar9 != (uchar *)0x0) {
    CRYPTO_free(puVar9);
  }
  return pAVar5;
}

