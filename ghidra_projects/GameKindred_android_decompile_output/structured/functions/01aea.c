// functions/01aea — 2 functions
#include "libGameKindred.h"




/* WARNING: Type propagation algorithm not settling */

ulong FUN_01aea04c(BIO *param_1,uchar **param_2,uint param_3,ASN1_ITEM *param_4,long param_5,
                  long param_6,int param_7,byte *param_8)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  ASN1_TEMPLATE *tt;
  ASN1_VALUE **ppAVar4;
  char *pcVar5;
  char *pcVar6;
  ASN1_OBJECT *o;
  ASN1_TEMPLATE *pAVar7;
  void *pvVar8;
  ASN1_INTEGER *a;
  code *pcVar9;
  long lVar10;
  BIO *local_c8;
  uint local_c0;
  byte *local_b8;
  char acStack_b0 [80];
  
  pvVar8 = param_4->funcs;
  if (pvVar8 != (void *)0x0) {
    pcVar9 = *(code **)((long)pvVar8 + 0x18);
    if (pcVar9 != (code *)0x0) {
      local_c8 = param_1;
      local_c0 = param_3;
      local_b8 = param_8;
    }
    if (*param_2 != (uchar *)0x0) goto LAB_01aea0ac;
LAB_01aea124:
    if ((*param_8 & 1) == 0) goto LAB_01aea478;
    if ((param_7 == 0) &&
       (uVar3 = FUN_01aea908(param_1,param_3,param_5,param_6,param_8), (int)uVar3 == 0)) {
      return uVar3;
    }
    iVar2 = BIO_puts(param_1,"<ABSENT>\n");
    goto joined_r0x01aea314;
  }
  pcVar9 = (code *)0x0;
  if (*param_2 == (uchar *)0x0) goto LAB_01aea124;
LAB_01aea0ac:
  switch(param_4->itype) {
  case '\0':
    if (param_4->templates == (ASN1_TEMPLATE *)0x0) goto switchD_01aea0c8_caseD_5;
    uVar3 = asn1_template_print_ctx(param_1,param_2,param_3,param_4->templates,param_8);
    iVar2 = (int)uVar3;
    break;
  case '\x01':
  case '\x06':
    if ((param_7 == 0) &&
       (uVar3 = FUN_01aea908(param_1,param_3,param_5,param_6,param_8), (int)uVar3 == 0)) {
      return uVar3;
    }
    if (param_5 != 0 || param_6 != 0) {
      if ((*param_8 >> 1 & 1) == 0) {
        iVar2 = BIO_puts(param_1,"\n");
      }
      else {
        iVar2 = BIO_puts(param_1," {\n");
      }
      if (iVar2 < 1) {
        return 0;
      }
    }
    if (pcVar9 != (code *)0x0) {
      uVar3 = (*pcVar9)(8,param_2,param_4,&local_c8);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      if ((int)uVar3 == 2) goto LAB_01aea478;
    }
    if (0 < param_4->tcount) {
      pAVar7 = param_4->templates;
      lVar10 = 0;
      do {
        tt = asn1_do_adb((ASN1_VALUE **)param_2,pAVar7,1);
        if (tt == (ASN1_TEMPLATE *)0x0) {
          return 0;
        }
        ppAVar4 = asn1_get_field_ptr((ASN1_VALUE **)param_2,tt);
        uVar3 = asn1_template_print_ctx(param_1,ppAVar4,param_3 + 2,tt,param_8);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
        lVar10 = lVar10 + 1;
        pAVar7 = pAVar7 + 1;
      } while (lVar10 < param_4->tcount);
    }
    if (((*param_8 >> 1 & 1) != 0) &&
       (iVar2 = BIO_printf(param_1,"%*s}\n",(ulong)param_3,&DAT_01e277f2), iVar2 < 0)) {
      return 0;
    }
    if (pcVar9 == (code *)0x0) goto LAB_01aea478;
    uVar3 = (*pcVar9)(9,param_2,param_4,&local_c8);
    iVar2 = (int)uVar3;
    break;
  case '\x02':
    iVar2 = asn1_get_choice_selector((ASN1_VALUE **)param_2,param_4);
    if ((iVar2 < 0) || (param_4->tcount <= (long)iVar2)) {
      iVar2 = BIO_printf(param_1,"ERROR: selector [%d] invalid\n");
      return (ulong)(0 < iVar2);
    }
    pAVar7 = param_4->templates;
    ppAVar4 = asn1_get_field_ptr((ASN1_VALUE **)param_2,pAVar7 + iVar2);
    uVar3 = asn1_template_print_ctx(param_1,ppAVar4,param_3,pAVar7 + iVar2,param_8);
    iVar2 = (int)uVar3;
    break;
  default:
    BIO_printf(param_1,"Unprocessed type %d\n");
    return 0;
  case '\x04':
    if (param_7 == 0) {
      uVar3 = FUN_01aea908(param_1,param_3,param_5,param_6,param_8);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      pvVar8 = param_4->funcs;
    }
    if ((pvVar8 == (void *)0x0) || (*(code **)((long)pvVar8 + 0x30) == (code *)0x0)) {
      if (param_6 != 0) {
        iVar2 = BIO_printf(param_1,":EXTERNAL TYPE %s\n",param_6);
        goto joined_r0x01aea314;
      }
      goto LAB_01aea478;
    }
    uVar3 = (**(code **)((long)pvVar8 + 0x30))(param_1,param_2,param_3,&DAT_01e277f2,param_8);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if ((int)uVar3 != 2) goto LAB_01aea478;
    goto LAB_01aea2a4;
  case '\x05':
switchD_01aea0c8_caseD_5:
    uVar3 = FUN_01aea908(param_1,param_3,param_5,param_6,param_8);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if ((pvVar8 != (void *)0x0) && (*(code **)((long)pvVar8 + 0x38) != (code *)0x0)) {
      uVar3 = (**(code **)((long)pvVar8 + 0x38))(param_1,param_2,param_4,param_3,param_8);
      iVar2 = (int)uVar3;
      break;
    }
    a = (ASN1_INTEGER *)*param_2;
    if (param_4->itype == '\x05') {
      uVar3 = (long)a->type & 0xfffffffffffffeff;
LAB_01aea444:
      if ((*param_8 >> 3 & 1) == 0) {
        pcVar6 = (char *)0x0;
      }
      else {
        pcVar6 = ASN1_tag2str((int)uVar3);
      }
    }
    else {
      uVar3 = param_4->utype;
      if (uVar3 != 0xfffffffffffffffc) goto LAB_01aea444;
      piVar1 = &a->length;
      uVar3 = (ulong)*piVar1;
      param_2 = &a->data;
      a = (ASN1_INTEGER *)*param_2;
      if ((*param_8 >> 4 & 1) == 0) {
        pcVar6 = ASN1_tag2str(*piVar1);
      }
      else {
        pcVar6 = (char *)0x0;
      }
    }
    if (uVar3 == 5) {
      iVar2 = BIO_puts(param_1,"NULL\n");
      if (iVar2 < 1) {
        return (ulong)(0 < iVar2);
      }
      goto LAB_01aea478;
    }
    if (pcVar6 != (char *)0x0) {
      iVar2 = BIO_puts(param_1,pcVar6);
      if (iVar2 < 1) {
        return 0;
      }
      iVar2 = BIO_puts(param_1,":");
      if (iVar2 < 1) {
        return 0;
      }
    }
    switch(uVar3) {
    case 1:
      iVar2 = *(int *)param_2;
      if (iVar2 == -1) {
        iVar2 = (int)param_4->size;
      }
      pcVar6 = "FALSE";
      if (iVar2 != 0) {
        pcVar6 = "TRUE";
      }
      pcVar5 = "BOOL ABSENT";
      if (iVar2 != -1) {
        pcVar5 = pcVar6;
      }
      iVar2 = BIO_puts(param_1,pcVar5);
      goto joined_r0x01aea674;
    case 2:
    case 10:
      pcVar6 = i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,a);
      iVar2 = BIO_puts(param_1,pcVar6);
      CRYPTO_free(pcVar6);
      goto joined_r0x01aea674;
    case 3:
    case 4:
      if (a->type == 3) {
        iVar2 = BIO_printf(param_1," (%ld unused bits)\n",a->flags & 7);
      }
      else {
        iVar2 = BIO_puts(param_1,"\n");
      }
      if (iVar2 < 1) {
        return 0;
      }
      if (a->length < 1) goto LAB_01aea478;
      iVar2 = BIO_dump_indent(param_1,(char *)a->data,a->length,param_3 + 2);
      goto joined_r0x01aea314;
    case 6:
      o = (ASN1_OBJECT *)*param_2;
      iVar2 = OBJ_obj2nid(o);
      pcVar5 = OBJ_nid2ln(iVar2);
      pcVar6 = "";
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5;
      }
      OBJ_obj2txt(acStack_b0,0x50,o,1);
      iVar2 = BIO_printf(param_1,"%s (%s)",pcVar6,acStack_b0);
joined_r0x01aea674:
      if (iVar2 < 1) {
        return 0;
      }
      goto LAB_01aea2a4;
    case 0x17:
      iVar2 = ASN1_UTCTIME_print(param_1,a);
      break;
    case 0x18:
      iVar2 = ASN1_GENERALIZEDTIME_print(param_1,a);
      break;
    case 0xfffffffffffffffd:
    case 0x10:
    case 0x11:
      iVar2 = BIO_puts(param_1,"\n");
      if (iVar2 < 1) {
        return 0;
      }
      iVar2 = ASN1_parse_dump(param_1,a->data,(long)a->length,param_3,0);
      goto joined_r0x01aea314;
    default:
      iVar2 = ASN1_STRING_print_ex(param_1,a,*(ulong *)(param_8 + 0x20));
    }
    if (iVar2 == 0) {
      return 0;
    }
LAB_01aea2a4:
    iVar2 = BIO_puts(param_1,"\n");
joined_r0x01aea314:
    if (iVar2 < 1) {
      return 0;
    }
    goto LAB_01aea478;
  }
  if (iVar2 != 0) {
LAB_01aea478:
    uVar3 = 1;
  }
  return uVar3;
}




bool FUN_01aea908(BIO *param_1,int param_2,char *param_3,char *param_4,ulong *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  if (0x14 < param_2) {
    do {
      iVar2 = BIO_write(param_1,s__02c07968,0x14);
      if (iVar2 != 0x14) goto LAB_01aeaa28;
      iVar2 = param_2 + -0x14;
      bVar1 = 0x28 < param_2;
      param_2 = iVar2;
    } while (bVar1);
  }
  iVar3 = BIO_write(param_1,s__02c07968,iVar2);
  if (iVar3 != iVar2) {
    return false;
  }
  if ((*param_5 & 0x100) != 0) {
    param_4 = (char *)0x0;
  }
  if ((*param_5 & 0x40) != 0) {
    param_3 = (char *)0x0;
  }
  if (param_4 == (char *)0x0 && param_3 == (char *)0x0) {
    return true;
  }
  if ((param_3 == (char *)0x0) || (iVar2 = BIO_puts(param_1,param_3), 0 < iVar2)) {
    if (param_4 != (char *)0x0) {
      if (param_3 == (char *)0x0) {
        iVar2 = BIO_puts(param_1,param_4);
      }
      else {
        iVar2 = BIO_printf(param_1," (%s)",param_4);
      }
      if (iVar2 < 1) goto LAB_01aeaa28;
    }
    iVar2 = BIO_write(param_1,": ",2);
    bVar1 = iVar2 == 2;
  }
  else {
LAB_01aeaa28:
    bVar1 = false;
  }
  return bVar1;
}

