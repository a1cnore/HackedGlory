// functions/01a80 — 3 functions
#include "libGameKindred.h"




int FUN_01a803e0(ASN1_VALUE *param_1,uchar **param_2,ASN1_ITEM *param_3,int param_4)

{
  int num;
  uchar *puVar1;
  uchar *local_48;
  ASN1_VALUE *pAStack_38;
  
  pAStack_38 = param_1;
  if ((param_2 == (uchar **)0x0) || (*param_2 != (uchar *)0x0)) {
    num = ASN1_item_ex_i2d(&pAStack_38,param_2,param_3,-1,param_4);
  }
  else {
    num = ASN1_item_ex_i2d(&pAStack_38,(uchar **)0x0,param_3,-1,param_4);
    if (0 < num) {
      puVar1 = CRYPTO_malloc(num,"tasn_enc.c",0x6d);
      if (puVar1 == (uchar *)0x0) {
        num = -1;
      }
      else {
        local_48 = puVar1;
        ASN1_item_ex_i2d(&pAStack_38,&local_48,param_3,-1,param_4);
        *param_2 = puVar1;
      }
    }
  }
  return num;
}




int FUN_01a80840(ASN1_VALUE **param_1,uchar **param_2,uint *param_3,uint param_4,uint param_5)

{
  uint aclass;
  uint xclass;
  uint uVar1;
  uint tag;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *ptr;
  uchar *ptr_00;
  uint uVar7;
  _STACK *p_Var8;
  undefined8 *puVar9;
  uint xclass_00;
  ASN1_ITEM *it;
  ASN1_VALUE *local_78;
  uchar *local_70;
  ASN1_VALUE *local_68;
  
  uVar1 = *param_3;
  if ((uVar1 & 0x18) == 0) {
    xclass_00 = param_5 & 0xc0;
    if (param_4 == 0xffffffff) {
      xclass_00 = 0;
    }
  }
  else {
    if (param_4 != 0xffffffff) {
      return -1;
    }
    param_4 = param_3[2];
    xclass_00 = uVar1 & 0xc0;
  }
  aclass = param_5 & 0xffffff3f;
  iVar6 = ((uVar1 & param_5) >> 0xb & 1) + 1;
  if ((uVar1 & 6) == 0) {
    if ((uVar1 >> 4 & 1) == 0) {
      iVar6 = ASN1_item_ex_i2d(param_1,param_2,*(ASN1_ITEM **)(param_3 + 8),param_4,
                               xclass_00 | aclass);
      return iVar6;
    }
    iVar4 = ASN1_item_ex_i2d(param_1,(uchar **)0x0,*(ASN1_ITEM **)(param_3 + 8),-1,aclass);
    iVar2 = 0;
    if ((iVar4 != 0) && (iVar2 = ASN1_object_size(iVar6,iVar4,param_4), param_2 != (uchar **)0x0)) {
      ASN1_put_object(param_2,iVar6,iVar4,param_4,xclass_00);
      ASN1_item_ex_i2d(param_1,param_2,*(ASN1_ITEM **)(param_3 + 8),-1,aclass);
      if (iVar6 == 2) {
        ASN1_put_eoc(param_2);
      }
    }
  }
  else {
    p_Var8 = (_STACK *)*param_1;
    if (p_Var8 == (_STACK *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar4 = 0;
      if ((uVar1 >> 1 & 1) != 0) {
        iVar4 = (uVar1 >> 2 & 1) + 1;
      }
      uVar7 = 0x10;
      if (iVar4 != 0) {
        uVar7 = 0x11;
      }
      xclass = xclass_00;
      tag = param_4;
      if ((uVar1 & 0x10) != 0 || param_4 == 0xffffffff) {
        xclass = 0;
        tag = uVar7;
      }
      iVar2 = sk_num(p_Var8);
      iVar5 = 0;
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          local_78 = sk_value(p_Var8,iVar2);
          iVar3 = ASN1_item_ex_i2d(&local_78,(uchar **)0x0,*(ASN1_ITEM **)(param_3 + 8),-1,aclass);
          iVar5 = iVar3 + iVar5;
          iVar2 = iVar2 + 1;
          iVar3 = sk_num(p_Var8);
        } while (iVar2 < iVar3);
      }
      iVar3 = ASN1_object_size(iVar6,iVar5,tag);
      iVar2 = iVar3;
      if ((uVar1 >> 4 & 1) != 0) {
        iVar2 = ASN1_object_size(iVar6,iVar3,param_4);
      }
      if (param_2 != (uchar **)0x0) {
        if ((uVar1 >> 4 & 1) != 0) {
          ASN1_put_object(param_2,iVar6,iVar3,param_4,xclass_00);
        }
        ASN1_put_object(param_2,iVar6,iVar5,tag,xclass);
        it = *(ASN1_ITEM **)(param_3 + 8);
        local_70 = (uchar *)0x0;
        if ((iVar4 == 0) || (iVar3 = sk_num(p_Var8), iVar3 < 2)) {
          iVar4 = sk_num(p_Var8);
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              local_68 = sk_value(p_Var8,iVar4);
              ASN1_item_ex_i2d(&local_68,param_2,it,-1,aclass);
              iVar4 = iVar4 + 1;
              iVar5 = sk_num(p_Var8);
            } while (iVar4 < iVar5);
          }
        }
        else {
          iVar3 = sk_num(p_Var8);
          ptr = CRYPTO_malloc(iVar3 * 0x18,"tasn_enc.c",0x1b2);
          if (ptr != (undefined8 *)0x0) {
            ptr_00 = CRYPTO_malloc(iVar5,"tasn_enc.c",0x1b5);
            if (ptr_00 == (uchar *)0x0) {
              CRYPTO_free(ptr);
            }
            else {
              local_70 = ptr_00;
              iVar5 = sk_num(p_Var8);
              if (0 < iVar5) {
                iVar5 = 0;
                puVar9 = ptr;
                do {
                  local_68 = sk_value(p_Var8,iVar5);
                  *puVar9 = local_70;
                  iVar3 = ASN1_item_ex_i2d(&local_68,&local_70,it,-1,aclass);
                  *(int *)(puVar9 + 1) = iVar3;
                  iVar5 = iVar5 + 1;
                  puVar9[2] = local_68;
                  iVar3 = sk_num(p_Var8);
                  puVar9 = puVar9 + 3;
                } while (iVar5 < iVar3);
              }
              iVar5 = sk_num(p_Var8);
              qsort(ptr,(long)iVar5,0x18,(__compar_fn_t)&LAB_01a80fe0);
              local_70 = *param_2;
              iVar5 = sk_num(p_Var8);
              if (0 < iVar5) {
                iVar5 = 0;
                puVar9 = ptr;
                do {
                  memcpy(local_70,(void *)*puVar9,(long)*(int *)(puVar9 + 1));
                  iVar5 = iVar5 + 1;
                  local_70 = local_70 + *(int *)(puVar9 + 1);
                  iVar3 = sk_num(p_Var8);
                  puVar9 = puVar9 + 3;
                } while (iVar5 < iVar3);
              }
              *param_2 = local_70;
              if ((iVar4 == 2) && (iVar4 = sk_num(p_Var8), 0 < iVar4)) {
                iVar4 = 0;
                puVar9 = ptr + 2;
                do {
                  sk_set(p_Var8,iVar4,(void *)*puVar9);
                  iVar4 = iVar4 + 1;
                  iVar5 = sk_num(p_Var8);
                  puVar9 = puVar9 + 3;
                } while (iVar4 < iVar5);
              }
              CRYPTO_free(ptr);
              CRYPTO_free(ptr_00);
            }
          }
        }
        if ((iVar6 == 2) && (ASN1_put_eoc(param_2), (uVar1 >> 4 & 1) != 0)) {
          ASN1_put_eoc(param_2);
        }
      }
    }
  }
  return iVar2;
}




int FUN_01a80ce4(ASN1_VALUE **param_1,uchar **param_2,ASN1_ITEM *param_3,int param_4,int param_5)

{
  int tag;
  bool bVar1;
  int length;
  int constructed;
  int local_54;
  
  local_54 = (int)param_3->utype;
  length = asn1_ex_i2c(param_1,(uchar *)0x0,&local_54,param_3);
  if ((0x14 < local_54 + 3U) ||
     (bVar1 = false, (1 << (ulong)(local_54 + 3U & 0x1f) & 0x180001U) == 0)) {
    bVar1 = true;
  }
  if (length == -1) {
    length = 0;
  }
  else {
    constructed = 0;
    if (length == -2) {
      length = 0;
      constructed = 2;
    }
    tag = local_54;
    if (param_4 != -1) {
      tag = param_4;
    }
    if (param_2 != (uchar **)0x0) {
      if (bVar1) {
        ASN1_put_object(param_2,constructed,length,tag,param_5);
      }
      asn1_ex_i2c(param_1,*param_2,&local_54,param_3);
      if (constructed == 0) {
        *param_2 = *param_2 + length;
      }
      else {
        ASN1_put_eoc(param_2);
      }
    }
    if (bVar1) {
      length = ASN1_object_size(constructed,length,tag);
    }
  }
  return length;
}

