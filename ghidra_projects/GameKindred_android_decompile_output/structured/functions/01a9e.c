// functions/01a9e — 3 functions
#include "libGameKindred.h"




undefined8 FUN_01a9e1bc(undefined8 param_1,undefined8 *param_2,BIO *param_3,uint param_4)

{
  BIO_printf(param_3,"%*sPath Length Constraint: ",(ulong)param_4,&DAT_01e277f2);
  if ((ASN1_INTEGER *)*param_2 == (ASN1_INTEGER *)0x0) {
    BIO_printf(param_3,"infinite");
  }
  else {
    i2a_ASN1_INTEGER(param_3,(ASN1_INTEGER *)*param_2);
  }
  BIO_puts(param_3,"\n");
  BIO_printf(param_3,"%*sPolicy Language: ",(ulong)param_4,&DAT_01e277f2);
  i2a_ASN1_OBJECT(param_3,*(ASN1_OBJECT **)param_2[1]);
  BIO_puts(param_3,"\n");
  if ((*(long *)(param_2[1] + 8) != 0) && (*(long *)(*(long *)(param_2[1] + 8) + 8) != 0)) {
    BIO_printf(param_3,"%*sPolicy Text: %s\n",(ulong)param_4,&DAT_01e277f2);
  }
  return 1;
}




PROXY_CERT_INFO_EXTENSION * FUN_01a9e2a8(undefined8 param_1,X509V3_CTX *param_2,char *param_3)

{
  ASN1_OBJECT *pAVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  _STACK *st;
  undefined8 *puVar6;
  _STACK *section;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  PROXY_POLICY *pPVar12;
  PROXY_CERT_INFO_EXTENSION *pPVar13;
  ASN1_OCTET_STRING *local_50;
  ASN1_INTEGER *local_48;
  ASN1_OBJECT *local_38;
  
  local_38 = (ASN1_OBJECT *)0x0;
  local_50 = (ASN1_OCTET_STRING *)0x0;
  local_48 = (ASN1_INTEGER *)0x0;
  st = &X509V3_parse_list(param_3)->stack;
  iVar2 = sk_num(st);
  if (iVar2 < 1) {
LAB_01a9e404:
    ERR_put_error(0x22,0x9b,0x9a,"v3_pci.c",0x112);
    pAVar1 = local_38;
  }
  else {
    iVar2 = 0;
    do {
      puVar6 = sk_value(st,iVar2);
      pcVar11 = (char *)puVar6[1];
      if (pcVar11 == (char *)0x0) {
LAB_01a9e430:
        ERR_put_error(0x22,0x9b,0x99,"v3_pci.c",0xf1);
        uVar8 = *puVar6;
        uVar9 = puVar6[1];
        uVar10 = puVar6[2];
LAB_01a9e47c:
        ERR_add_error_data(6,"section:",uVar8,",name:",uVar9,",value:",uVar10);
        goto joined_r0x01a9e4a0;
      }
      if (*pcVar11 == '@') {
        section = &X509V3_get_section(param_2,pcVar11 + 1)->stack;
        if (section == (_STACK *)0x0) {
          ERR_put_error(0x22,0x9b,0x87,"v3_pci.c",0xfb);
LAB_01a9e474:
          uVar8 = *puVar6;
          uVar9 = puVar6[1];
          uVar10 = puVar6[2];
          goto LAB_01a9e47c;
        }
        iVar4 = 0;
        while (iVar3 = sk_num(section), iVar4 < iVar3) {
          pvVar7 = sk_value(section,iVar4);
          iVar3 = FUN_01a9e560(pvVar7,&local_38,&local_48,&local_50);
          iVar4 = iVar4 + 1;
          if (iVar3 == 0) {
            X509V3_section_free(param_2,(stack_st_CONF_VALUE *)section);
            goto joined_r0x01a9e4a0;
          }
        }
        X509V3_section_free(param_2,(stack_st_CONF_VALUE *)section);
      }
      else {
        if (puVar6[2] == 0) goto LAB_01a9e430;
        iVar4 = FUN_01a9e560(puVar6,&local_38,&local_48,&local_50);
        if (iVar4 == 0) goto LAB_01a9e474;
      }
      iVar2 = iVar2 + 1;
      iVar4 = sk_num(st);
      pAVar1 = local_38;
    } while (iVar2 < iVar4);
    if (local_38 == (ASN1_OBJECT *)0x0) goto LAB_01a9e404;
    uVar5 = OBJ_obj2nid(local_38);
    if (((uVar5 | 2) == 0x29b) && (local_50 != (ASN1_OCTET_STRING *)0x0)) {
      ERR_put_error(0x22,0x9b,0x9f,"v3_pci.c",0x118);
    }
    else {
      pPVar13 = PROXY_CERT_INFO_EXTENSION_new();
      if (pPVar13 != (PROXY_CERT_INFO_EXTENSION *)0x0) {
        pPVar12 = pPVar13->proxyPolicy;
        pPVar12->policyLanguage = pAVar1;
        local_38 = (ASN1_OBJECT *)0x0;
        pPVar12->policy = local_50;
        local_50 = (ASN1_OCTET_STRING *)0x0;
        pPVar13->pcPathLengthConstraint = local_48;
        local_48 = (ASN1_INTEGER *)0x0;
        goto LAB_01a9e4d8;
      }
      ERR_put_error(0x22,0x9b,0x41,"v3_pci.c",0x11e);
    }
joined_r0x01a9e4a0:
    pAVar1 = (ASN1_OBJECT *)0x0;
    if (local_38 != (ASN1_OBJECT *)0x0) {
      ASN1_OBJECT_free(local_38);
      local_38 = (ASN1_OBJECT *)0x0;
      pAVar1 = local_38;
    }
  }
  local_38 = pAVar1;
  if (local_48 != (ASN1_INTEGER *)0x0) {
    ASN1_INTEGER_free(local_48);
    local_48 = (ASN1_INTEGER *)0x0;
  }
  if (local_50 == (ASN1_OCTET_STRING *)0x0) {
    pPVar13 = (PROXY_CERT_INFO_EXTENSION *)0x0;
  }
  else {
    ASN1_OCTET_STRING_free(local_50);
    pPVar13 = (PROXY_CERT_INFO_EXTENSION *)0x0;
    local_50 = (ASN1_OCTET_STRING *)0x0;
  }
LAB_01a9e4d8:
  sk_pop_free(st,X509V3_conf_free);
  return pPVar13;
}




undefined8 FUN_01a9e560(CONF_VALUE *param_1,long *param_2,ASN1_INTEGER **param_3,long *param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ASN1_OBJECT *pAVar4;
  uchar *ptr;
  BIO *b;
  size_t __n;
  void *pvVar5;
  int iVar6;
  int *piVar7;
  ASN1_OCTET_STRING *pAVar8;
  char *pcVar9;
  undefined1 auStack_858 [2048];
  size_t local_58;
  
  pcVar9 = param_1->name;
  iVar3 = strcmp(pcVar9,"language");
  if (iVar3 == 0) {
    if (*param_2 == 0) {
      pAVar4 = OBJ_txt2obj(param_1->value,0);
      *param_2 = (long)pAVar4;
      if (pAVar4 != (ASN1_OBJECT *)0x0) {
        return 1;
      }
      iVar3 = 0x6e;
      iVar6 = 0x5b;
    }
    else {
      iVar3 = 0x9b;
      iVar6 = 0x55;
    }
  }
  else {
    iVar3 = strcmp(pcVar9,"pathlen");
    if (iVar3 != 0) {
      iVar3 = strcmp(pcVar9,"policy");
      if (iVar3 != 0) {
        return 1;
      }
      pAVar8 = (ASN1_OCTET_STRING *)*param_4;
      if (pAVar8 == (ASN1_OCTET_STRING *)0x0) {
        pAVar8 = ASN1_OCTET_STRING_new();
        *param_4 = (long)pAVar8;
        if (pAVar8 == (ASN1_OCTET_STRING *)0x0) {
          iVar3 = 0x41;
          iVar6 = 0x72;
          goto LAB_01a9e7c8;
        }
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      pcVar9 = param_1->value;
      iVar3 = strncmp(pcVar9,"hex:",4);
      if (iVar3 == 0) {
        ptr = string_to_hex(pcVar9 + 4,(long *)&local_58);
        if (ptr == (uchar *)0x0) {
          iVar3 = 0x71;
          iVar6 = 0x7e;
        }
        else {
          pvVar5 = CRYPTO_realloc(*(void **)((int *)*param_4 + 2),
                                  *(int *)*param_4 + (int)local_58 + 1,"v3_pci.c",0x84);
          if (pvVar5 != (void *)0x0) {
            *(void **)(*param_4 + 8) = pvVar5;
            memcpy((void *)(*(long *)((int *)*param_4 + 2) + (long)*(int *)*param_4),ptr,local_58);
            piVar7 = (int *)*param_4;
            iVar3 = *piVar7;
            *piVar7 = iVar3 + (int)local_58;
            *(undefined1 *)(*(long *)(piVar7 + 2) + (long)(iVar3 + (int)local_58)) = 0;
            CRYPTO_free(ptr);
            return 1;
          }
          CRYPTO_free(ptr);
          *(undefined8 *)(*param_4 + 8) = 0;
          iVar3 = 0x41;
          iVar6 = 0x93;
          *(undefined4 *)*param_4 = 0;
        }
      }
      else {
        iVar3 = strncmp(pcVar9,"file:",5);
        if (iVar3 == 0) {
          b = BIO_new_file(pcVar9 + 5,"r");
          if (b == (BIO *)0x0) {
            iVar3 = 0x20;
            iVar6 = 0x9d;
          }
          else {
            pvVar5 = (void *)0x0;
            do {
              while (iVar3 = BIO_read(b,auStack_858,0x800), 0 < iVar3) {
                pvVar5 = CRYPTO_realloc(*(void **)((int *)*param_4 + 2),iVar3 + *(int *)*param_4 + 1
                                        ,"v3_pci.c",0xa7);
                if (pvVar5 == (void *)0x0) goto LAB_01a9e980;
                *(void **)(*param_4 + 8) = pvVar5;
                memcpy((void *)(*(long *)((int *)*param_4 + 2) + (long)*(int *)*param_4),auStack_858
                       ,(long)iVar3);
                piVar7 = (int *)*param_4;
                lVar1 = (long)*piVar7 + (long)iVar3;
                *piVar7 = (int)lVar1;
                *(undefined1 *)(*(long *)(piVar7 + 2) + lVar1) = 0;
              }
              if (iVar3 != 0) {
                BIO_free_all(b);
                iVar3 = 0x20;
                iVar6 = 0xb4;
                goto LAB_01a9ea10;
              }
              iVar3 = BIO_test_flags(b,8);
            } while (iVar3 != 0);
LAB_01a9e980:
            BIO_free_all(b);
            if (pvVar5 != (void *)0x0) {
              return 1;
            }
            iVar3 = 0x41;
            iVar6 = 0xd4;
          }
        }
        else {
          iVar3 = strncmp(pcVar9,"text:",5);
          if (iVar3 == 0) {
            __n = strlen(pcVar9 + 5);
            local_58 = __n;
            pvVar5 = CRYPTO_realloc(pAVar8->data,(int)__n + pAVar8->length + 1,"v3_pci.c",0xbb);
            if (pvVar5 != (void *)0x0) {
              *(void **)(*param_4 + 8) = pvVar5;
              memcpy((void *)(*(long *)((int *)*param_4 + 2) + (long)*(int *)*param_4),
                     param_1->value + 5,__n);
              piVar7 = (int *)*param_4;
              iVar3 = *piVar7 + (int)__n;
              *piVar7 = iVar3;
              *(undefined1 *)(*(long *)(piVar7 + 2) + (long)iVar3) = 0;
              return 1;
            }
            *(undefined8 *)(*param_4 + 8) = 0;
            *(undefined4 *)*param_4 = 0;
            iVar3 = 0x41;
            iVar6 = 0xc9;
          }
          else {
            iVar3 = 0x98;
            iVar6 = 0xcf;
          }
        }
      }
LAB_01a9ea10:
      ERR_put_error(0x22,0x96,iVar3,"v3_pci.c",iVar6);
      ERR_add_error_data(6,"section:",param_1->section,",name:",param_1->name,",value:",
                         param_1->value);
      if (!bVar2) {
        return 0;
      }
      ASN1_OCTET_STRING_free((ASN1_OCTET_STRING *)*param_4);
      *param_4 = 0;
      return 0;
    }
    if (*param_3 == (ASN1_INTEGER *)0x0) {
      iVar3 = X509V3_get_value_int(param_1,param_3);
      if (iVar3 != 0) {
        return 1;
      }
      iVar3 = 0x9c;
      iVar6 = 0x68;
    }
    else {
      iVar3 = 0x9d;
      iVar6 = 0x62;
    }
  }
LAB_01a9e7c8:
  ERR_put_error(0x22,0x96,iVar3,"v3_pci.c",iVar6);
  ERR_add_error_data(6,"section:",param_1->section,",name:",param_1->name,",value:",param_1->value);
  return 0;
}

