// functions/01a7f — 3 functions
#include "libGameKindred.h"




undefined4 FUN_01a7f840(ASN1_VALUE **param_1,ASN1_ITEM *param_2,int param_3)

{
  int iVar1;
  ASN1_VALUE *pAVar2;
  ASN1_VALUE **ppAVar3;
  _STACK *p_Var4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ASN1_TEMPLATE *pAVar8;
  code *pcVar9;
  
  puVar5 = param_2->funcs;
  if ((puVar5 == (undefined8 *)0x0) || (pcVar9 = (code *)puVar5[3], pcVar9 == (code *)0x0)) {
    pcVar9 = (code *)0x0;
  }
  switch(param_2->itype) {
  case '\0':
    pAVar8 = param_2->templates;
    if (pAVar8 == (ASN1_TEMPLATE *)0x0) goto switchD_01a7f890_caseD_5;
    uVar7 = pAVar8->flags;
    if ((uVar7 & 1) != 0) {
      FUN_01a7fc18(param_1);
      return 1;
    }
    if ((uVar7 & 0x300) != 0) {
      *param_1 = (ASN1_VALUE *)0x0;
      return 1;
    }
    if ((uVar7 & 6) != 0) {
      p_Var4 = sk_new_null();
      if (p_Var4 != (_STACK *)0x0) {
        *param_1 = (ASN1_VALUE *)p_Var4;
        return 1;
      }
LAB_01a7faf4:
      ERR_put_error(0xd,0x85,0x41,"tasn_new.c",0x115);
      goto LAB_01a7fb10;
    }
    iVar1 = FUN_01a7f840(param_1,pAVar8->item,(uint)uVar7 & 0x400);
    break;
  case '\x01':
  case '\x06':
    if (pcVar9 != (code *)0x0) {
      iVar1 = (*pcVar9)(0,param_1,param_2,0);
      if (iVar1 == 0) goto LAB_01a7fa9c;
      if (iVar1 == 2) {
        return 1;
      }
    }
    if (param_3 == 0) {
      pAVar2 = CRYPTO_malloc((int)param_2->size,"tasn_new.c",0xb3);
      *param_1 = pAVar2;
      if (pAVar2 == (ASN1_VALUE *)0x0) goto LAB_01a7fb10;
      memset(pAVar2,0,param_2->size);
      asn1_do_lock(param_1,0,param_2);
      asn1_enc_init(param_1,param_2);
      lVar6 = param_2->tcount;
    }
    else {
      lVar6 = param_2->tcount;
    }
    if (0 < lVar6) {
      pAVar8 = param_2->templates;
      lVar6 = 0;
      do {
        ppAVar3 = asn1_get_field_ptr(param_1,pAVar8);
        uVar7 = pAVar8->flags;
        if ((uVar7 & 1) == 0) {
          if ((uVar7 & 0x300) == 0) {
            if ((uVar7 & 6) == 0) {
              iVar1 = FUN_01a7f840(ppAVar3,pAVar8->item,(uint)uVar7 & 0x400);
              if (iVar1 == 0) goto LAB_01a7fb10;
            }
            else {
              p_Var4 = sk_new_null();
              if (p_Var4 == (_STACK *)0x0) goto LAB_01a7faf4;
              *ppAVar3 = (ASN1_VALUE *)p_Var4;
            }
          }
          else {
            *ppAVar3 = (ASN1_VALUE *)0x0;
          }
        }
        else {
          FUN_01a7fc18(ppAVar3,pAVar8);
        }
        lVar6 = lVar6 + 1;
        pAVar8 = pAVar8 + 1;
      } while (lVar6 < param_2->tcount);
    }
    goto joined_r0x01a7f964;
  case '\x02':
    if (pcVar9 != (code *)0x0) {
      iVar1 = (*pcVar9)(0,param_1,param_2,0);
      if (iVar1 == 0) goto LAB_01a7fa9c;
      if (iVar1 == 2) {
        return 1;
      }
    }
    if (param_3 == 0) {
      pAVar2 = CRYPTO_malloc((int)param_2->size,"tasn_new.c",0x9a);
      *param_1 = pAVar2;
      if (pAVar2 == (ASN1_VALUE *)0x0) goto LAB_01a7fb10;
      memset(pAVar2,0,param_2->size);
    }
    asn1_set_choice_selector(param_1,-1,param_2);
joined_r0x01a7f964:
    if (pcVar9 == (code *)0x0) {
      return 1;
    }
    iVar1 = (*pcVar9)(1,param_1,param_2,0);
    if (iVar1 != 0) {
      return 1;
    }
LAB_01a7fa9c:
    ERR_put_error(0xd,0x79,100,"tasn_new.c",0xd2);
    ASN1_item_ex_free(param_1,param_2);
    return 0;
  case '\x03':
    if (puVar5 == (undefined8 *)0x0) {
      return 1;
    }
    if ((code *)*puVar5 == (code *)0x0) {
      return 1;
    }
    pAVar2 = (ASN1_VALUE *)(*(code *)*puVar5)();
    *param_1 = pAVar2;
    if (pAVar2 != (ASN1_VALUE *)0x0) {
      return 1;
    }
    goto LAB_01a7fb10;
  case '\x04':
    if (puVar5 == (undefined8 *)0x0) {
      return 1;
    }
    if ((code *)puVar5[1] == (code *)0x0) {
      return 1;
    }
    iVar1 = (*(code *)puVar5[1])(param_1,param_2);
    break;
  case '\x05':
switchD_01a7f890_caseD_5:
    iVar1 = ASN1_primitive_new(param_1,param_2);
    break;
  default:
    goto LAB_01a7fb4c;
  }
  if (iVar1 != 0) {
LAB_01a7fb4c:
    return 1;
  }
LAB_01a7fb10:
  ERR_put_error(0xd,0x79,0x41,"tasn_new.c",0xca);
  return 0;
}




void FUN_01a7fc18(undefined8 *param_1,ushort *param_2)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    if ((*param_2 & 0x306) != 0) goto switchD_01a7fc70_caseD_1;
    pcVar1 = *(char **)(param_2 + 0x10);
    if (*pcVar1 != '\0') {
      switch(*pcVar1) {
      case '\x01':
      case '\x02':
      case '\x03':
      case '\x06':
        break;
      case '\x04':
        if ((*(long *)(pcVar1 + 0x20) != 0) &&
           (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(pcVar1 + 0x20) + 0x18),
           UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01a7fc84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        break;
      case '\x05':
        if (((pcVar1 != (char *)0x0) && (*(long *)(pcVar1 + 0x20) != 0)) &&
           (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(pcVar1 + 0x20) + 0x20),
           UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01a7fcb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        break;
      default:
        goto switchD_01a7fc70_default;
      }
      goto switchD_01a7fc70_caseD_1;
    }
    param_2 = *(ushort **)(pcVar1 + 0x10);
  } while (param_2 != (ushort *)0x0);
  if (*(long *)(pcVar1 + 0x20) == 0) {
    if (*(int *)(pcVar1 + 8) == 1) {
      *(int *)param_1 = (int)*(undefined8 *)(pcVar1 + 0x28);
      return;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(pcVar1 + 0x20) + 0x20);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01a7fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
switchD_01a7fc70_caseD_1:
  *param_1 = 0;
switchD_01a7fc70_default:
  return;
}




void FUN_01a7fe10(ASN1_VALUE **param_1,ASN1_ITEM *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  ASN1_TEMPLATE *tt;
  ASN1_VALUE **ppAVar3;
  void *pvVar4;
  ulong uVar5;
  _STACK *p_Var6;
  ASN1_TEMPLATE *pAVar7;
  code *pcVar8;
  long lVar9;
  void *local_68 [13];
  
code_r0x01a7fe10:
  if (param_1 == (ASN1_VALUE **)0x0) {
    return;
  }
  pvVar4 = param_2->funcs;
  if ((param_2->itype != '\0') && (*param_1 == (ASN1_VALUE *)0x0)) {
    return;
  }
  if ((pvVar4 == (void *)0x0) || (pcVar8 = *(code **)((long)pvVar4 + 0x18), pcVar8 == (code *)0x0))
  {
    pcVar8 = (code *)0x0;
  }
  switch(param_2->itype) {
  case '\0':
    pAVar7 = param_2->templates;
    if (pAVar7 == (ASN1_TEMPLATE *)0x0) goto switchD_01a7fe7c_caseD_5;
    if ((pAVar7->flags & 6) == 0) goto LAB_01a80174;
    p_Var6 = (_STACK *)*param_1;
    iVar1 = sk_num(p_Var6);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        local_68[0] = sk_value(p_Var6,iVar1);
        FUN_01a7fe10(local_68,pAVar7->item,0);
        iVar1 = iVar1 + 1;
        iVar2 = sk_num(p_Var6);
      } while (iVar1 < iVar2);
    }
    sk_free(p_Var6);
    goto LAB_01a801dc;
  case '\x01':
  case '\x06':
    break;
  case '\x02':
    if ((pcVar8 != (code *)0x0) && (iVar1 = (*pcVar8)(2,param_1,param_2,0), iVar1 == 2)) {
      return;
    }
    iVar1 = asn1_get_choice_selector(param_1,param_2);
    if ((-1 < iVar1) && (lVar9 = (long)iVar1, lVar9 < param_2->tcount)) {
      pAVar7 = param_2->templates;
      ppAVar3 = asn1_get_field_ptr(param_1,pAVar7 + lVar9);
      uVar5 = pAVar7[lVar9].flags;
      if ((uVar5 & 6) == 0) {
        FUN_01a7fe10(ppAVar3,pAVar7[lVar9].item,(uint)uVar5 & 0x400);
      }
      else {
        p_Var6 = (_STACK *)*ppAVar3;
        iVar1 = sk_num(p_Var6);
        if (0 < iVar1) {
          iVar1 = 0;
          do {
            local_68[0] = sk_value(p_Var6,iVar1);
            FUN_01a7fe10(local_68,pAVar7[lVar9].item,0);
            iVar1 = iVar1 + 1;
            iVar2 = sk_num(p_Var6);
          } while (iVar1 < iVar2);
        }
        sk_free(p_Var6);
        *ppAVar3 = (ASN1_VALUE *)0x0;
      }
    }
    goto joined_r0x01a80108;
  case '\x03':
    if (pvVar4 == (void *)0x0) {
      return;
    }
    if (*(code **)((long)pvVar4 + 8) == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x01a8013c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((long)pvVar4 + 8))(*param_1);
    return;
  case '\x04':
    if (pvVar4 == (void *)0x0) {
      return;
    }
    if (*(code **)((long)pvVar4 + 0x10) == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x01a80170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((long)pvVar4 + 0x10))(param_1,param_2);
    return;
  case '\x05':
switchD_01a7fe7c_caseD_5:
    ASN1_primitive_free(param_1,param_2);
    return;
  default:
    return;
  }
  iVar1 = asn1_do_lock(param_1,-1,param_2);
  if (0 < iVar1) {
    return;
  }
  if ((pcVar8 != (code *)0x0) && (iVar1 = (*pcVar8)(2,param_1,param_2,0), iVar1 == 2)) {
    return;
  }
  asn1_enc_free(param_1,param_2);
  if (param_2->tcount < 1) goto joined_r0x01a80108;
  lVar9 = 0;
  pAVar7 = param_2->templates + param_2->tcount;
LAB_01a7fee0:
  pAVar7 = pAVar7 + -1;
  tt = asn1_do_adb(param_1,pAVar7,0);
  if (tt == (ASN1_TEMPLATE *)0x0) {
LAB_01a7ff70:
    lVar9 = lVar9 + 1;
    if (param_2->tcount <= lVar9) goto joined_r0x01a80108;
    goto LAB_01a7fee0;
  }
  ppAVar3 = asn1_get_field_ptr(param_1,tt);
  if ((tt->flags & 6) != 0) {
    p_Var6 = (_STACK *)*ppAVar3;
    iVar1 = sk_num(p_Var6);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        local_68[0] = sk_value(p_Var6,iVar1);
        FUN_01a7fe10(local_68,tt->item,0);
        iVar1 = iVar1 + 1;
        iVar2 = sk_num(p_Var6);
      } while (iVar1 < iVar2);
    }
    sk_free(p_Var6);
    *ppAVar3 = (ASN1_VALUE *)0x0;
    goto LAB_01a7ff70;
  }
  FUN_01a7fe10(ppAVar3,tt->item,(uint)tt->flags & 0x400);
  lVar9 = lVar9 + 1;
  if (param_2->tcount <= lVar9) {
joined_r0x01a80108:
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(3,param_1,param_2,0);
    }
    if (param_3 == 0) {
      CRYPTO_free(*param_1);
LAB_01a801dc:
      *param_1 = (ASN1_VALUE *)0x0;
    }
    return;
  }
  goto LAB_01a7fee0;
LAB_01a80174:
  param_2 = pAVar7->item;
  param_3 = (uint)pAVar7->flags & 0x400;
  goto code_r0x01a7fe10;
}

