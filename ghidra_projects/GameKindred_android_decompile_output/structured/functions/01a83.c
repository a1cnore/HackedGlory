// functions/01a83 — 1 functions
#include "libGameKindred.h"




/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_01a83b80(BIO *param_1,ulong *param_2,long param_3,int param_4,uint param_5,int param_6,
            int param_7)

{
  uchar *puVar1;
  uint uVar2;
  byte bVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ASN1_OBJECT *pAVar11;
  ASN1_INTEGER *a;
  ASN1_OCTET_STRING *a_00;
  undefined4 uVar12;
  long lVar13;
  uchar *puVar14;
  ASN1_OBJECT *local_88;
  int local_80;
  int local_7c;
  uchar *local_78;
  uchar *local_70;
  uchar *local_68;
  
  local_88 = (ASN1_OBJECT *)0x0;
  if (0x80 < (int)param_5) {
    BIO_puts(param_1,"BAD RECURSION DEPTH\n");
    return 0;
  }
  local_68 = (uchar *)*param_2;
  if (param_3 < 1) {
LAB_01a843b8:
    uVar12 = 1;
    a_00 = (ASN1_OCTET_STRING *)0x0;
joined_r0x01a84484:
    if (local_88 != (ASN1_OBJECT *)0x0) {
      ASN1_OBJECT_free(local_88);
    }
    if (a_00 != (ASN1_STRING *)0x0) {
      ASN1_STRING_free(a_00);
    }
    *param_2 = (ulong)local_68;
    return uVar12;
  }
  puVar1 = local_68 + param_3;
  uVar2 = 0;
  if (param_6 != 0) {
    uVar2 = param_5;
  }
LAB_01a83c1c:
  puVar6 = local_68;
  uVar8 = ASN1_get_object(&local_68,(long *)&local_78,&local_7c,&local_80,param_3);
  if ((uVar8 >> 7 & 1) != 0) {
    BIO_write(param_1,"Error in encoding\n",0x12);
    goto LAB_01a84438;
  }
  iVar10 = (int)local_68;
  iVar9 = BIO_printf(param_1,"%5ld:",puVar6 + ((long)param_4 - *param_2));
  if (iVar9 < 1) {
LAB_01a8440c:
    a_00 = (ASN1_OCTET_STRING *)0x0;
    goto joined_r0x01a8441c;
  }
  lVar13 = (long)(iVar10 - (int)puVar6);
  if (uVar8 != 0x21) {
    iVar10 = BIO_printf(param_1,"d=%-2d hl=%ld l=%4ld ",(ulong)param_5,lVar13,local_78);
    if ((0 < iVar10) && (iVar10 = FUN_01a84504(param_1,local_7c,local_80,uVar8,uVar2), iVar10 != 0))
    goto LAB_01a83cb8;
    goto LAB_01a84438;
  }
  iVar10 = BIO_printf(param_1,"d=%-2d hl=%ld l=inf  ",(ulong)param_5,lVar13);
  if ((iVar10 < 1) || (iVar10 = FUN_01a84504(param_1,local_7c,local_80,0x21,uVar2), iVar10 == 0))
  goto LAB_01a84438;
LAB_01a83cb8:
  puVar7 = local_68;
  puVar5 = local_78;
  param_3 = param_3 - lVar13;
  if ((uVar8 >> 5 & 1) != 0) {
    iVar10 = BIO_write(param_1,"\n",1);
    puVar14 = local_68;
    if (iVar10 < 1) goto LAB_01a8440c;
    if ((long)local_78 <= param_3) {
      if ((uVar8 == 0x21) && (local_78 == (uchar *)0x0)) {
        do {
          iVar10 = FUN_01a83b80(param_1,&local_68,(long)puVar1 - (long)local_68,
                                ((int)local_68 - (int)*param_2) + param_4,param_5 + 1,param_6,
                                param_7);
          uVar12 = 0;
          if (iVar10 == 0) goto joined_r0x01a84484;
        } while ((iVar10 != 2) && (local_68 < puVar1));
        local_78 = local_68 + -(long)puVar14;
      }
      else {
        puVar14 = local_78;
        puVar4 = local_68;
        while (local_68 = puVar4, puVar4 < puVar7 + (long)puVar5) {
          iVar10 = FUN_01a83b80(param_1,&local_68,puVar14,((int)puVar4 - (int)*param_2) + param_4,
                                param_5 + 1,param_6,param_7);
          if (iVar10 == 0) goto LAB_01a84438;
          puVar14 = (uchar *)((long)puVar4 + ((long)puVar14 - (long)local_68));
          puVar4 = local_68;
        }
      }
      goto joined_r0x01a83e50;
    }
    BIO_printf(param_1,"length is greater than %ld\n",param_3);
    uVar12 = 0;
    goto joined_r0x01a84484;
  }
  if (local_80 != 0) {
    local_68 = local_68 + (long)local_78;
    iVar10 = BIO_write(param_1,"\n",1);
    if (iVar10 < 1) goto LAB_01a84438;
    goto joined_r0x01a83e50;
  }
  switch(local_7c) {
  case 1:
    local_70 = puVar6;
    uVar8 = d2i_ASN1_BOOLEAN((int *)0x0,&local_70,(long)(local_78 + lVar13));
    if ((-1 < (int)uVar8) || (iVar10 = BIO_write(param_1,"Bad boolean\n",0xc), 0 < iVar10)) {
      BIO_printf(param_1,":%d",(ulong)uVar8);
      goto switchD_01a83e78_caseD_1e;
    }
    break;
  case 2:
    local_70 = puVar6;
    a = d2i_ASN1_INTEGER((ASN1_INTEGER **)0x0,&local_70,(long)(local_78 + lVar13));
    if (a == (ASN1_INTEGER *)0x0) {
      iVar10 = BIO_write(param_1,"BAD INTEGER",0xb);
joined_r0x01a8425c:
      if (iVar10 < 1) break;
    }
    else {
      iVar10 = BIO_write(param_1,":",1);
      if ((iVar10 < 1) ||
         ((a->type == 0x102 &&
          (iVar10 = BIO_write(param_1,(void *)((long)&DAT_01e21c13 + 7),1), iVar10 < 1)))) break;
      iVar10 = a->length;
      if (0 < iVar10) {
        lVar13 = 0;
        do {
          iVar10 = BIO_printf(param_1,"%02X",(ulong)a->data[lVar13]);
          if (iVar10 < 1) goto LAB_01a8440c;
          iVar10 = a->length;
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar10);
      }
LAB_01a84220:
      if (iVar10 == 0) {
        iVar10 = BIO_write(param_1,&DAT_01bbbc05,2);
        goto joined_r0x01a8425c;
      }
    }
    ASN1_STRING_free(a);
    goto switchD_01a83e78_caseD_1e;
  default:
    if ((param_7 == 0) || ((long)local_78 < 1)) goto switchD_01a83e78_caseD_1e;
    iVar10 = BIO_write(param_1,"\n",1);
    if (iVar10 < 1) break;
    iVar10 = (int)local_78;
    if ((long)param_7 <= (long)local_78 && param_7 != -1) {
      iVar10 = param_7;
    }
    iVar10 = BIO_dump_indent(param_1,(char *)local_68,iVar10,6);
    if (iVar10 < 1) break;
    goto LAB_01a84308;
  case 4:
    local_70 = puVar6;
    a_00 = d2i_ASN1_OCTET_STRING((ASN1_OCTET_STRING **)0x0,&local_70,(long)(local_78 + lVar13));
    if (a_00 == (ASN1_OCTET_STRING *)0x0) goto switchD_01a83e78_caseD_1e;
    if (0 < a_00->length) {
      local_70 = a_00->data;
      lVar13 = 0;
      do {
        bVar3 = local_70[lVar13];
        if (bVar3 < 0x20) {
          if ((0xd < bVar3) || ((1 << (ulong)(bVar3 & 0x1f) & 0x2600U) == 0)) goto LAB_01a840cc;
        }
        else if (0x7e < bVar3) {
LAB_01a840cc:
          if (param_7 == 0) {
            iVar10 = BIO_write(param_1,"[HEX DUMP]:",0xb);
            if (iVar10 < 1) goto joined_r0x01a8441c;
            if (a_00->length < 1) goto LAB_01a842e0;
            lVar13 = 0;
            goto LAB_01a84380;
          }
          iVar10 = BIO_write(param_1,"\n",1);
          if (iVar10 < 1) goto LAB_01a8448c;
          iVar10 = a_00->length;
          if (param_7 <= a_00->length && param_7 != -1) {
            iVar10 = param_7;
          }
          iVar10 = BIO_dump_indent(param_1,(char *)local_70,iVar10,6);
          if (iVar10 < 1) goto LAB_01a8448c;
          ASN1_STRING_free(a_00);
          goto LAB_01a84308;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < a_00->length);
      iVar10 = BIO_write(param_1,":",1);
      if (0 < iVar10) {
        iVar10 = BIO_write(param_1,local_70,a_00->length);
        if (iVar10 < 1) goto joined_r0x01a8441c;
        goto LAB_01a842e0;
      }
LAB_01a8448c:
      uVar12 = 0;
      goto joined_r0x01a84484;
    }
    goto LAB_01a842e0;
  case 6:
    local_70 = puVar6;
    pAVar11 = d2i_ASN1_OBJECT(&local_88,&local_70,(long)(local_78 + lVar13));
    if (pAVar11 == (ASN1_OBJECT *)0x0) {
      iVar10 = BIO_write(param_1,":BAD OBJECT",0xb);
      if (0 < iVar10) goto switchD_01a83e78_caseD_1e;
    }
    else {
      iVar10 = BIO_write(param_1,":",1);
      if (0 < iVar10) {
        i2a_ASN1_OBJECT(param_1,local_88);
        goto switchD_01a83e78_caseD_1e;
      }
    }
    break;
  case 10:
    local_70 = puVar6;
    a = d2i_ASN1_ENUMERATED((ASN1_ENUMERATED **)0x0,&local_70,(long)(local_78 + lVar13));
    if (a == (ASN1_ENUMERATED *)0x0) {
      iVar10 = BIO_write(param_1,"BAD ENUMERATED",0xe);
      goto joined_r0x01a8425c;
    }
    iVar10 = BIO_write(param_1,":",1);
    if ((0 < iVar10) &&
       ((a->type != 0x10a ||
        (iVar10 = BIO_write(param_1,(void *)((long)&DAT_01e21c13 + 7),1), 0 < iVar10)))) {
      iVar10 = a->length;
      if (0 < iVar10) {
        lVar13 = 0;
        do {
          iVar10 = BIO_printf(param_1,"%02X",(ulong)a->data[lVar13]);
          if (iVar10 < 1) goto LAB_01a8440c;
          iVar10 = a->length;
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar10);
      }
      goto LAB_01a84220;
    }
    break;
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1a:
    iVar10 = BIO_write(param_1,":",1);
    if (0 < iVar10) {
      if (0 < (long)local_78) {
        iVar10 = BIO_write(param_1,local_68,(int)local_78);
        if (iVar10 != (int)local_78) break;
      }
      goto switchD_01a83e78_caseD_1e;
    }
    break;
  case 0x1e:
    goto switchD_01a83e78_caseD_1e;
  }
LAB_01a84438:
  a_00 = (ASN1_OCTET_STRING *)0x0;
joined_r0x01a8441c:
  uVar12 = 0;
  goto joined_r0x01a84484;
  while (lVar13 = lVar13 + 1, lVar13 < a_00->length) {
LAB_01a84380:
    iVar10 = BIO_printf(param_1,"%02X",(ulong)local_70[lVar13]);
    if (iVar10 < 1) goto joined_r0x01a8441c;
  }
LAB_01a842e0:
  ASN1_STRING_free(a_00);
switchD_01a83e78_caseD_1e:
  iVar10 = BIO_write(param_1,"\n",1);
  if (0 < iVar10) {
LAB_01a84308:
    local_68 = local_68 + (long)local_78;
    if (local_80 == 0 && local_7c == 0) {
      uVar12 = 2;
    }
    else {
joined_r0x01a83e50:
      uVar12 = 1;
      if (local_68 < puVar1) {
        param_3 = param_3 - (long)local_78;
        if (local_68 <= puVar6) goto LAB_01a843b8;
        goto LAB_01a83c1c;
      }
    }
joined_r0x01a84484:
    a_00 = (ASN1_OCTET_STRING *)0x0;
    goto joined_r0x01a84484;
  }
  goto LAB_01a84438;
}

