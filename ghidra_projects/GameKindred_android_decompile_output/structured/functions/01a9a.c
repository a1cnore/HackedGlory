// functions/01a9a — 6 functions
#include "libGameKindred.h"




undefined8 FUN_01a9a1d4(undefined8 param_1,_STACK *param_2,BIO *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  GENERAL_NAME *pGVar6;
  long lVar7;
  int *piVar8;
  _STACK *p_Var9;
  X509_NAME local_88;
  
  iVar2 = sk_num(param_2);
  if (0 < iVar2) {
    iVar2 = 0;
    uVar1 = param_4 + 2;
    do {
      BIO_puts(param_3,"\n");
      puVar5 = sk_value(param_2,iVar2);
      piVar8 = (int *)*puVar5;
      if (piVar8 == (int *)0x0) {
LAB_01a9a334:
        lVar7 = puVar5[1];
      }
      else {
        if (*piVar8 == 0) {
          BIO_printf(param_3,"%*sFull Name:\n",(ulong)param_4,&DAT_01e277f2);
          p_Var9 = *(_STACK **)(piVar8 + 2);
          iVar3 = sk_num(p_Var9);
          if (0 < iVar3) {
            iVar3 = 0;
            do {
              BIO_printf(param_3,"%*s",(ulong)uVar1,&DAT_01e277f2);
              pGVar6 = sk_value(p_Var9,iVar3);
              GENERAL_NAME_print(param_3,pGVar6);
              BIO_puts(param_3,"\n");
              iVar3 = iVar3 + 1;
              iVar4 = sk_num(p_Var9);
            } while (iVar3 < iVar4);
          }
          goto LAB_01a9a334;
        }
        local_88.entries = *(stack_st_X509_NAME_ENTRY **)(piVar8 + 2);
        BIO_printf(param_3,"%*sRelative Name:\n%*s",(ulong)param_4,&DAT_01e277f2,(ulong)uVar1,
                   &DAT_01e277f2);
        X509_NAME_print_ex(param_3,&local_88,0,0x82031f);
        BIO_puts(param_3,"\n");
        lVar7 = puVar5[1];
      }
      if (lVar7 != 0) {
        FUN_01a9af30(param_3,"Reasons",lVar7,param_4);
      }
      if (puVar5[2] != 0) {
        BIO_printf(param_3,"%*sCRL Issuer:\n",(ulong)param_4,&DAT_01e277f2);
        p_Var9 = (_STACK *)puVar5[2];
        iVar3 = sk_num(p_Var9);
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            BIO_printf(param_3,"%*s",(ulong)uVar1,&DAT_01e277f2);
            pGVar6 = sk_value(p_Var9,iVar3);
            GENERAL_NAME_print(param_3,pGVar6);
            BIO_puts(param_3,"\n");
            iVar3 = iVar3 + 1;
            iVar4 = sk_num(p_Var9);
          } while (iVar3 < iVar4);
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = sk_num(param_2);
    } while (iVar2 < iVar3);
  }
  return 1;
}




undefined8 FUN_01a9aa34(long *param_1,X509V3_CTX *param_2,long param_3)

{
  int iVar1;
  X509_NAME *nm;
  stack_st_CONF_VALUE *dn_sk;
  void *pvVar2;
  ASN1_VALUE *pAVar3;
  _STACK *st;
  _STACK *st_00;
  char *__s1;
  
  __s1 = *(char **)(param_3 + 8);
  iVar1 = strncmp(__s1,"fullname",9);
  if (iVar1 == 0) {
    st_00 = (_STACK *)FUN_01a9ae30(param_2,*(undefined8 *)(param_3 + 0x10));
    if (st_00 == (_STACK *)0x0) {
      return 0xffffffff;
    }
    st = (_STACK *)0x0;
    if (*param_1 == 0) goto LAB_01a9abd8;
LAB_01a9ab50:
    ERR_put_error(0x22,0x9e,0xa0,"v3_crld.c",0x9c);
  }
  else {
    iVar1 = strcmp(__s1,"relativename");
    if (iVar1 != 0) {
      return 0;
    }
    nm = X509_NAME_new();
    if (nm == (X509_NAME *)0x0) {
      return 0xffffffff;
    }
    dn_sk = X509V3_get_section(param_2,*(char **)(param_3 + 0x10));
    if (dn_sk == (stack_st_CONF_VALUE *)0x0) {
      ERR_put_error(0x22,0x9e,0x96,"v3_crld.c",0x84);
      return 0xffffffff;
    }
    iVar1 = X509V3_NAME_from_section(nm,dn_sk,0x1001);
    X509V3_section_free(param_2,dn_sk);
    st = &nm->entries->stack;
    nm->entries = (stack_st_X509_NAME_ENTRY *)0x0;
    X509_NAME_free(nm);
    if ((iVar1 == 0) || (iVar1 = sk_num(st), iVar1 < 1)) goto joined_r0x01a9ab80;
    iVar1 = sk_num(st);
    pvVar2 = sk_value(st,iVar1 + -1);
    if (*(int *)((long)pvVar2 + 0x10) != 0) {
      ERR_put_error(0x22,0x9e,0xa1,"v3_crld.c",0x94);
      goto joined_r0x01a9ab80;
    }
    st_00 = (_STACK *)0x0;
    if (*param_1 != 0) goto LAB_01a9ab50;
LAB_01a9abd8:
    pAVar3 = ASN1_item_new((ASN1_ITEM *)DIST_POINT_NAME_it);
    *param_1 = (long)pAVar3;
    if (pAVar3 != (ASN1_VALUE *)0x0) {
      if (st_00 == (_STACK *)0x0) {
        *(undefined4 *)pAVar3 = 1;
        *(_STACK **)(pAVar3 + 8) = st;
        return 1;
      }
      *(undefined4 *)pAVar3 = 0;
      *(_STACK **)(pAVar3 + 8) = st_00;
      return 1;
    }
  }
  if (st_00 != (_STACK *)0x0) {
    sk_pop_free(st_00,GENERAL_NAME_free);
  }
joined_r0x01a9ab80:
  if (st != (_STACK *)0x0) {
    sk_pop_free(st,X509_NAME_ENTRY_free);
  }
  return 0xffffffff;
}




undefined4 FUN_01a9ac14(long *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  _STACK *st;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  char *__s2;
  undefined **ppuVar6;
  ASN1_BIT_STRING *a;
  
  st = &X509V3_parse_list(param_2)->stack;
  if (st == (_STACK *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*param_1 == 0) {
      iVar1 = sk_num(st);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          pvVar3 = sk_value(st,iVar1);
          a = (ASN1_BIT_STRING *)*param_1;
          __s2 = *(char **)((long)pvVar3 + 8);
          if (a == (ASN1_BIT_STRING *)0x0) {
            a = ASN1_BIT_STRING_new();
            *param_1 = (long)a;
            if (a != (ASN1_BIT_STRING *)0x0) goto LAB_01a9acb0;
LAB_01a9adfc:
            uVar5 = 0;
            goto LAB_01a9ae00;
          }
LAB_01a9acb0:
          iVar2 = strcmp("unused",__s2);
          if (iVar2 == 0) {
            ppuVar6 = &PTR_s_Unused_02bc45b0;
            piVar4 = &DAT_02bc45a8;
          }
          else {
            iVar2 = strcmp("keyCompromise",__s2);
            if (iVar2 == 0) {
              piVar4 = &DAT_02bc45c0;
              ppuVar6 = &PTR_s_Key_Compromise_02bc45c8;
            }
            else {
              iVar2 = strcmp("CACompromise",__s2);
              if (iVar2 == 0) {
                piVar4 = &DAT_02bc45d8;
                ppuVar6 = &PTR_s_CA_Compromise_02bc45e0;
              }
              else {
                iVar2 = strcmp("affiliationChanged",__s2);
                if (iVar2 == 0) {
                  piVar4 = &DAT_02bc45f0;
                  ppuVar6 = &PTR_s_Affiliation_Changed_02bc45f8;
                }
                else {
                  iVar2 = strcmp("superseded",__s2);
                  if (iVar2 == 0) {
                    piVar4 = &DAT_02bc4608;
                    ppuVar6 = &PTR_s_Superseded_02bc4610;
                  }
                  else {
                    iVar2 = strcmp("cessationOfOperation",__s2);
                    if (iVar2 == 0) {
                      piVar4 = &DAT_02bc4620;
                      ppuVar6 = &PTR_s_Cessation_Of_Operation_02bc4628;
                    }
                    else {
                      iVar2 = strcmp("certificateHold",__s2);
                      if (iVar2 == 0) {
                        piVar4 = &DAT_02bc4638;
                        ppuVar6 = &PTR_s_Certificate_Hold_02bc4640;
                      }
                      else {
                        iVar2 = strcmp("privilegeWithdrawn",__s2);
                        if (iVar2 == 0) {
                          piVar4 = &DAT_02bc4650;
                          ppuVar6 = &PTR_s_Privilege_Withdrawn_02bc4658;
                        }
                        else {
                          iVar2 = strcmp("AACompromise",__s2);
                          if (iVar2 != 0) goto LAB_01a9adfc;
                          piVar4 = &DAT_02bc4668;
                          ppuVar6 = &PTR_s_AA_Compromise_02bc4670;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          iVar2 = ASN1_BIT_STRING_set_bit(a,*piVar4,1);
          if ((iVar2 == 0) || (*ppuVar6 == (undefined *)0x0)) goto LAB_01a9adfc;
          iVar1 = iVar1 + 1;
          iVar2 = sk_num(st);
        } while (iVar1 < iVar2);
      }
      uVar5 = 1;
LAB_01a9ae00:
      sk_pop_free(st,X509V3_conf_free);
    }
  }
  return uVar5;
}




GENERAL_NAMES * FUN_01a9ae30(X509V3_CTX *param_1,char *param_2)

{
  _STACK *st;
  GENERAL_NAMES *pGVar1;
  
  if (*param_2 == '@') {
    st = &X509V3_get_section(param_1,param_2 + 1)->stack;
  }
  else {
    st = &X509V3_parse_list(param_2)->stack;
  }
  if (st == (_STACK *)0x0) {
    ERR_put_error(0x22,0x9c,0x96,"v3_crld.c",0x66);
    pGVar1 = (GENERAL_NAMES *)0x0;
  }
  else {
    pGVar1 = v2i_GENERAL_NAMES((X509V3_EXT_METHOD *)0x0,param_1,(stack_st_CONF_VALUE *)st);
    if (*param_2 == '@') {
      X509V3_section_free(param_1,(stack_st_CONF_VALUE *)st);
    }
    else {
      sk_pop_free(st,X509V3_conf_free);
    }
  }
  return pGVar1;
}




undefined8 FUN_01a9af18(X509_NAME *param_1)

{
  X509_NAME_free(param_1);
  return 1;
}




int FUN_01a9af30(BIO *param_1,undefined8 param_2,ASN1_BIT_STRING *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  char *buf;
  
  BIO_printf(param_1,"%*s%s:\n%*s",(ulong)param_4,&DAT_01e277f2,param_2,(ulong)(param_4 + 2));
  iVar2 = ASN1_BIT_STRING_get_bit(param_3,0);
  bVar1 = iVar2 == 0;
  if (bVar1) {
    iVar2 = ASN1_BIT_STRING_get_bit(param_3,1);
  }
  else {
    BIO_puts(param_1,"Unused");
    iVar2 = ASN1_BIT_STRING_get_bit(param_3,1);
  }
  if (iVar2 != 0) {
    if (!bVar1) {
      BIO_puts(param_1,", ");
    }
    BIO_puts(param_1,"Key Compromise");
    bVar1 = false;
  }
  iVar2 = ASN1_BIT_STRING_get_bit(param_3,2);
  if (iVar2 != 0) {
    if (!bVar1) {
      BIO_puts(param_1,", ");
    }
    BIO_puts(param_1,"CA Compromise");
    bVar1 = false;
  }
  iVar2 = ASN1_BIT_STRING_get_bit(param_3,3);
  if (iVar2 != 0) {
    if (!bVar1) {
      BIO_puts(param_1,", ");
    }
    BIO_puts(param_1,"Affiliation Changed");
    bVar1 = false;
  }
  iVar2 = ASN1_BIT_STRING_get_bit(param_3,4);
  if (iVar2 != 0) {
    if (!bVar1) {
      BIO_puts(param_1,", ");
    }
    BIO_puts(param_1,"Superseded");
    bVar1 = false;
  }
  iVar2 = ASN1_BIT_STRING_get_bit(param_3,5);
  if (iVar2 != 0) {
    if (!bVar1) {
      BIO_puts(param_1,", ");
    }
    BIO_puts(param_1,"Cessation Of Operation");
    bVar1 = false;
  }
  iVar2 = ASN1_BIT_STRING_get_bit(param_3,6);
  if (iVar2 != 0) {
    if (!bVar1) {
      BIO_puts(param_1,", ");
    }
    BIO_puts(param_1,"Certificate Hold");
    bVar1 = false;
  }
  iVar2 = ASN1_BIT_STRING_get_bit(param_3,7);
  if (iVar2 != 0) {
    if (!bVar1) {
      BIO_puts(param_1,", ");
    }
    BIO_puts(param_1,"Privilege Withdrawn");
    bVar1 = false;
  }
  iVar2 = ASN1_BIT_STRING_get_bit(param_3,8);
  if (iVar2 == 0) {
    if (bVar1) {
      buf = "<EMPTY>\n";
      goto LAB_01a9b17c;
    }
  }
  else {
    if (!bVar1) {
      BIO_puts(param_1,", ");
    }
    BIO_puts(param_1,"AA Compromise");
  }
  buf = "\n";
LAB_01a9b17c:
  iVar2 = BIO_puts(param_1,buf);
  return iVar2;
}

