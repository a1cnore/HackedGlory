// functions/01a9d — 4 functions
#include "libGameKindred.h"




ASN1_VALUE * FUN_01a9d40c(undefined8 param_1,undefined8 param_2,_STACK *param_3)

{
  int iVar1;
  int iVar2;
  ASN1_VALUE *val;
  CONF_VALUE *value;
  ASN1_INTEGER *pAVar3;
  char *__s1;
  
  val = ASN1_item_new((ASN1_ITEM *)POLICY_CONSTRAINTS_it);
  if (val == (ASN1_VALUE *)0x0) {
    ERR_put_error(0x22,0x92,0x41,"v3_pcons.c",0x70);
  }
  else {
    iVar1 = sk_num(param_3);
    if (iVar1 < 1) {
      pAVar3 = *(ASN1_INTEGER **)(val + 8);
    }
    else {
      iVar1 = 0;
      do {
        value = sk_value(param_3,iVar1);
        __s1 = value->name;
        iVar2 = strcmp(__s1,"requireExplicitPolicy");
        if (iVar2 == 0) {
          iVar2 = X509V3_get_value_int(value,(ASN1_INTEGER **)val);
        }
        else {
          iVar2 = strcmp(__s1,"inhibitPolicyMapping");
          if (iVar2 != 0) {
            ERR_put_error(0x22,0x92,0x6a,"v3_pcons.c",0x7c);
            ERR_add_error_data(6,"section:",value->section,",name:",value->name,",value:",
                               value->value);
            goto LAB_01a9d574;
          }
          iVar2 = X509V3_get_value_int(value,(ASN1_INTEGER **)(val + 8));
        }
        if (iVar2 == 0) goto LAB_01a9d574;
        iVar1 = iVar1 + 1;
        iVar2 = sk_num(param_3);
      } while (iVar1 < iVar2);
      pAVar3 = *(ASN1_INTEGER **)(val + 8);
    }
    if ((pAVar3 == (ASN1_INTEGER *)0x0) && (*(long *)val == 0)) {
      ERR_put_error(0x22,0x92,0x97,"v3_pcons.c",0x83);
LAB_01a9d574:
      ASN1_item_free(val,(ASN1_ITEM *)POLICY_CONSTRAINTS_it);
      val = (ASN1_VALUE *)0x0;
    }
  }
  return val;
}




undefined8 FUN_01a9d944(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  iVar1 = sk_num((_STACK *)*param_2);
  if (0 < iVar1) {
    iVar3 = 0;
    iVar1 = 0;
    do {
      puVar4 = sk_value((_STACK *)*param_2,iVar1);
      if (*param_1 == *(int *)*puVar4) {
        if (puVar4[1] != 0) {
          return 0x31;
        }
        if (puVar4[2] != 0) {
          return 0x31;
        }
        if (iVar3 != 2) {
          if (iVar3 == 0) {
            iVar3 = 1;
          }
          uVar5 = FUN_01a9ded8(param_1);
          if ((int)uVar5 == 0) {
            iVar3 = 2;
          }
          else if ((int)uVar5 != 0x2f) {
            return uVar5;
          }
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = sk_num((_STACK *)*param_2);
    } while (iVar1 < iVar2);
    if (iVar3 == 1) {
      return 0x2f;
    }
  }
  iVar1 = sk_num((_STACK *)param_2[1]);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar4 = sk_value((_STACK *)param_2[1],iVar1);
      if (*param_1 == *(int *)*puVar4) {
        if (puVar4[1] != 0) {
          return 0x31;
        }
        if (puVar4[2] != 0) {
          return 0x31;
        }
        uVar5 = FUN_01a9ded8(param_1);
        if ((int)uVar5 != 0x2f) {
          if ((int)uVar5 == 0) {
            uVar5 = 0x30;
          }
          return uVar5;
        }
      }
      iVar1 = iVar1 + 1;
      iVar3 = sk_num((_STACK *)param_2[1]);
    } while (iVar1 < iVar3);
  }
  return 0;
}




void FUN_01a9dae8(_STACK *param_1,BIO *param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  GENERAL_NAME *gen;
  ASN1_STRING *pAVar4;
  
  iVar1 = sk_num(param_1);
  if (0 < iVar1) {
    BIO_printf(param_2,"%*s%s:\n",(ulong)param_3,&DAT_01e277f2,param_4);
  }
  iVar1 = sk_num(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar3 = sk_value(param_1,iVar1);
      BIO_printf(param_2,"%*s",(ulong)(param_3 + 2),&DAT_01e277f2);
      gen = (GENERAL_NAME *)*puVar3;
      if (gen->type == 7) {
        iVar2 = *(int *)&((gen->d).ediPartyName)->nameAssigner;
        pAVar4 = ((gen->d).ediPartyName)->partyName;
        BIO_puts(param_2,"IP:");
        if (iVar2 == 0x20) {
          BIO_printf(param_2,"%X",
                     (ulong)CONCAT11((char)pAVar4->length,*(undefined1 *)((long)&pAVar4->length + 1)
                                    ));
          BIO_puts(param_2,":");
          BIO_printf(param_2,"%X",
                     (ulong)CONCAT11(*(undefined1 *)((long)&pAVar4->length + 2),
                                     *(undefined1 *)((long)&pAVar4->length + 3)));
          BIO_puts(param_2,":");
          BIO_printf(param_2,"%X",
                     (ulong)CONCAT11((char)pAVar4->type,*(undefined1 *)((long)&pAVar4->type + 1)));
          BIO_puts(param_2,":");
          BIO_printf(param_2,"%X",
                     (ulong)CONCAT11(*(undefined1 *)((long)&pAVar4->type + 2),
                                     *(undefined1 *)((long)&pAVar4->type + 3)));
          BIO_puts(param_2,":");
          BIO_printf(param_2,"%X",
                     (ulong)CONCAT11(*(undefined1 *)&pAVar4->data,
                                     *(undefined1 *)((long)&pAVar4->data + 1)));
          BIO_puts(param_2,":");
          BIO_printf(param_2,"%X",
                     (ulong)CONCAT11(*(undefined1 *)((long)&pAVar4->data + 2),
                                     *(undefined1 *)((long)&pAVar4->data + 3)));
          BIO_puts(param_2,":");
          BIO_printf(param_2,"%X",
                     (ulong)CONCAT11(*(undefined1 *)((long)&pAVar4->data + 4),
                                     *(undefined1 *)((long)&pAVar4->data + 5)));
          BIO_puts(param_2,":");
          BIO_printf(param_2,"%X",
                     (ulong)CONCAT11(*(undefined1 *)((long)&pAVar4->data + 6),
                                     *(undefined1 *)((long)&pAVar4->data + 7)));
          BIO_puts(param_2,"/");
          BIO_printf(param_2,"%X",
                     (ulong)CONCAT11((char)pAVar4->flags,*(undefined1 *)((long)&pAVar4->flags + 1)))
          ;
          BIO_puts(param_2,":");
          BIO_printf(param_2,"%X",
                     (ulong)CONCAT11(*(undefined1 *)((long)&pAVar4->flags + 2),
                                     *(undefined1 *)((long)&pAVar4->flags + 3)));
          BIO_puts(param_2,":");
          BIO_printf(param_2,"%X",
                     (ulong)CONCAT11(*(undefined1 *)((long)&pAVar4->flags + 4),
                                     *(undefined1 *)((long)&pAVar4->flags + 5)));
          BIO_puts(param_2,":");
          BIO_printf(param_2,"%X",
                     (ulong)CONCAT11(*(undefined1 *)((long)&pAVar4->flags + 6),
                                     *(undefined1 *)((long)&pAVar4->flags + 7)));
          BIO_puts(param_2,":");
          BIO_printf(param_2,"%X",
                     (ulong)CONCAT11((char)pAVar4[1].length,
                                     *(undefined1 *)((long)&pAVar4[1].length + 1)));
          BIO_puts(param_2,":");
          BIO_printf(param_2,"%X",
                     (ulong)CONCAT11(*(undefined1 *)((long)&pAVar4[1].length + 2),
                                     *(undefined1 *)((long)&pAVar4[1].length + 3)));
          BIO_puts(param_2,":");
          BIO_printf(param_2,"%X",
                     (ulong)CONCAT11((char)pAVar4[1].type,*(undefined1 *)((long)&pAVar4[1].type + 1)
                                    ));
          BIO_puts(param_2,":");
          BIO_printf(param_2,"%X",
                     (ulong)CONCAT11(*(undefined1 *)((long)&pAVar4[1].type + 2),
                                     *(undefined1 *)((long)&pAVar4[1].type + 3)));
        }
        else if (iVar2 == 8) {
          BIO_printf(param_2,"%d.%d.%d.%d/%d.%d.%d.%d",(ulong)(byte)pAVar4->length,
                     (ulong)*(byte *)((long)&pAVar4->length + 1),
                     (ulong)*(byte *)((long)&pAVar4->length + 2),
                     (ulong)*(byte *)((long)&pAVar4->length + 3),(ulong)(byte)pAVar4->type,
                     (ulong)*(byte *)((long)&pAVar4->type + 1),
                     (uint)*(byte *)((long)&pAVar4->type + 2),
                     (uint)*(byte *)((long)&pAVar4->type + 3));
        }
        else {
          BIO_printf(param_2,"IP Address:<invalid>");
        }
      }
      else {
        GENERAL_NAME_print(param_2,gen);
      }
      BIO_puts(param_2,"\n");
      iVar1 = iVar1 + 1;
      iVar2 = sk_num(param_1);
    } while (iVar1 < iVar2);
  }
  return;
}




undefined4 FUN_01a9ded8(long param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  undefined4 uVar7;
  int *piVar8;
  char *__s;
  X509_NAME *a;
  char *pcVar9;
  X509_NAME *a_00;
  int *piVar10;
  
  uVar7 = 0x33;
  switch(*param_2) {
  case 1:
    piVar8 = *(int **)(param_2 + 2);
    piVar10 = *(int **)(param_1 + 8);
    pcVar4 = *(char **)(piVar8 + 2);
    __s = *(char **)(piVar10 + 2);
    pcVar5 = strchr(pcVar4,0x40);
    pcVar9 = strchr(__s,0x40);
    if (pcVar9 == (char *)0x0) goto LAB_01a9e140;
    if (pcVar5 == (char *)0x0) {
      if (*pcVar4 == '.') {
        iVar3 = *piVar10;
        iVar1 = *piVar8;
        iVar2 = iVar3 - iVar1;
        if (iVar2 == 0 || iVar3 < iVar1) {
          return 0x2f;
        }
        iVar3 = strcasecmp(pcVar4,__s + iVar2);
        if (iVar3 != 0) {
          return 0x2f;
        }
        return 0;
      }
    }
    else {
      sVar6 = (long)pcVar5 - (long)pcVar4;
      if ((sVar6 != 0) &&
         ((sVar6 != (long)pcVar9 - (long)__s || (iVar3 = strncmp(pcVar4,__s,sVar6), iVar3 != 0)))) {
        return 0x2f;
      }
      pcVar4 = pcVar5 + 1;
    }
    pcVar9 = pcVar9 + 1;
    break;
  case 2:
    pcVar4 = *(char **)(*(int **)(param_2 + 2) + 2);
    if (*pcVar4 == '\0') {
      return 0;
    }
    iVar3 = **(int **)(param_2 + 2);
    iVar1 = **(int **)(param_1 + 8);
    pcVar9 = *(char **)(*(int **)(param_1 + 8) + 2);
    iVar2 = iVar1 - iVar3;
    if (((iVar2 != 0 && iVar3 <= iVar1) && (pcVar9 = pcVar9 + iVar2, *pcVar4 != '.')) &&
       (pcVar9[-1] != '.')) {
      return 0x2f;
    }
    break;
  default:
    goto switchD_01a9df14_caseD_3;
  case 4:
    a = *(X509_NAME **)(param_1 + 8);
    a_00 = *(X509_NAME **)(param_2 + 2);
    if (((a->modified != 0) && (iVar3 = i2d_X509_NAME(a,(uchar **)0x0), iVar3 < 0)) ||
       ((a_00->modified != 0 && (iVar3 = i2d_X509_NAME(a_00,(uchar **)0x0), iVar3 < 0)))) {
      return 0x11;
    }
    if (a->canon_enclen < a_00->canon_enclen) {
      return 0x2f;
    }
    iVar3 = memcmp(a_00->canon_enc,a->canon_enc,(long)a_00->canon_enclen);
LAB_01a9e018:
    if (iVar3 != 0) {
      return 0x2f;
    }
    return 0;
  case 6:
    piVar8 = *(int **)(param_2 + 2);
    pcVar9 = *(char **)(piVar8 + 2);
    pcVar4 = strchr(*(char **)(*(long *)(param_1 + 8) + 8),0x3a);
    if (((pcVar4 != (char *)0x0) && (pcVar4[1] == '/')) && (pcVar4[2] == '/')) {
      pcVar4 = pcVar4 + 3;
      pcVar5 = strchr(pcVar4,0x3a);
      if ((pcVar5 == (char *)0x0) && (pcVar5 = strchr(pcVar4,0x2f), pcVar5 == (char *)0x0)) {
        sVar6 = strlen(pcVar4);
        iVar3 = (int)sVar6;
      }
      else {
        iVar3 = (int)pcVar5 - (int)pcVar4;
      }
      if (iVar3 != 0) {
        iVar1 = *piVar8;
        if (*pcVar9 == '.') {
          if (iVar3 <= iVar1) {
            return 0x2f;
          }
          iVar3 = strncasecmp(pcVar4 + ((long)iVar3 - (long)iVar1),pcVar9,(long)iVar1);
          if (iVar3 == 0) {
            return 0;
          }
          return 0x2f;
        }
        if (iVar1 != iVar3) {
          return 0x2f;
        }
        iVar3 = strncasecmp(pcVar4,pcVar9,(long)iVar3);
        goto LAB_01a9e018;
      }
    }
LAB_01a9e140:
    uVar7 = 0x35;
    goto switchD_01a9df14_caseD_3;
  }
  iVar3 = strcasecmp(pcVar4,pcVar9);
  uVar7 = 0;
  if (iVar3 != 0) {
    uVar7 = 0x2f;
  }
switchD_01a9df14_caseD_3:
  return uVar7;
}

