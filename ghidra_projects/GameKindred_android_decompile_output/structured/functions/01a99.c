// functions/01a99 — 2 functions
#include "libGameKindred.h"




_STACK * FUN_01a99244(undefined8 param_1,X509V3_CTX *param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  _STACK *st;
  _STACK *st_00;
  undefined8 *puVar7;
  _STACK *section;
  ASN1_VALUE *val;
  _STACK *p_Var8;
  ASN1_VALUE *pAVar9;
  ASN1_OBJECT *pAVar10;
  ASN1_VALUE *pAVar11;
  _STACK *st_01;
  void *pvVar12;
  ASN1_INTEGER *data;
  size_t sVar13;
  int iVar14;
  long *plVar15;
  char *pcVar16;
  ASN1_STRING *pAVar17;
  ASN1_VALUE *pAVar18;
  _STACK *st_02;
  
  st = sk_new_null();
  if (st == (_STACK *)0x0) {
    ERR_put_error(0x22,0x82,0x41,"v3_cpols.c",0x93);
  }
  else {
    st_00 = &X509V3_parse_list(param_3)->stack;
    if (st_00 == (_STACK *)0x0) {
      iVar2 = 0x22;
      iVar3 = 0x98;
LAB_01a9974c:
      ERR_put_error(0x22,0x82,iVar2,"v3_cpols.c",iVar3);
LAB_01a99a80:
      sk_pop_free(st_00,X509V3_conf_free);
      sk_pop_free(st,POLICYINFO_free);
      st = (_STACK *)0x0;
    }
    else {
      iVar2 = sk_num(st_00);
      if (0 < iVar2) {
        bVar1 = false;
        iVar2 = 0;
LAB_01a992b0:
        puVar7 = sk_value(st_00,iVar2);
        if ((puVar7[2] == 0) && (pcVar16 = (char *)puVar7[1], pcVar16 != (char *)0x0)) {
          iVar3 = strcmp(pcVar16,"ia5org");
          if (iVar3 == 0) {
            bVar1 = true;
LAB_01a996ec:
            iVar2 = iVar2 + 1;
            iVar3 = sk_num(st_00);
            if (iVar3 <= iVar2) goto LAB_01a99700;
            goto LAB_01a992b0;
          }
          if (*pcVar16 != '@') {
            pAVar10 = OBJ_txt2obj(pcVar16,0);
            if (pAVar10 == (ASN1_OBJECT *)0x0) {
              iVar2 = 0x6e;
              iVar3 = 0xb8;
              goto LAB_01a9976c;
            }
            val = ASN1_item_new((ASN1_ITEM *)POLICYINFO_it);
            if (val == (ASN1_VALUE *)0x0) {
              iVar2 = 0x41;
              iVar3 = 0xbe;
            }
            else {
              *(ASN1_OBJECT **)val = pAVar10;
              iVar3 = sk_push(st,val);
              if (iVar3 != 0) goto LAB_01a996ec;
LAB_01a99808:
              ASN1_item_free(val,(ASN1_ITEM *)POLICYINFO_it);
              iVar2 = 0x41;
              iVar3 = 0xc5;
            }
            goto LAB_01a9974c;
          }
          section = &X509V3_get_section(param_2,pcVar16 + 1)->stack;
          if (section != (_STACK *)0x0) {
            val = ASN1_item_new((ASN1_ITEM *)POLICYINFO_it);
            if (val == (ASN1_VALUE *)0x0) {
LAB_01a99a48:
              iVar2 = 0x41;
              iVar3 = 0x11c;
            }
            else {
              iVar3 = sk_num(section);
              if (0 < iVar3) {
                iVar3 = 0;
                iVar14 = 0x1a;
                if (bVar1) {
                  iVar14 = 0x16;
                }
                do {
                  puVar7 = sk_value(section,iVar3);
                  pcVar16 = (char *)puVar7[1];
                  iVar4 = strcmp(pcVar16,"policyIdentifier");
                  if (iVar4 == 0) {
                    pAVar10 = OBJ_txt2obj((char *)puVar7[2],0);
                    if (pAVar10 == (ASN1_OBJECT *)0x0) {
                      iVar2 = 0x6e;
                      iVar3 = 0xe0;
                      goto LAB_01a9992c;
                    }
                    *(ASN1_OBJECT **)val = pAVar10;
                  }
                  else {
                    iVar4 = name_cmp(pcVar16,"CPS");
                    if (iVar4 != 0) {
                      iVar4 = name_cmp((char *)puVar7[1],"userNotice");
                      if (iVar4 == 0) {
                        if (*(char *)puVar7[2] == '@') {
                          p_Var8 = &X509V3_get_section(param_2,(char *)puVar7[2] + 1)->stack;
                          if (p_Var8 != (_STACK *)0x0) {
                            pAVar9 = ASN1_item_new((ASN1_ITEM *)POLICYQUALINFO_it);
                            if (pAVar9 == (ASN1_VALUE *)0x0) {
LAB_01a99980:
                              ERR_put_error(0x22,0x84,0x41,"v3_cpols.c",0x16f);
                            }
                            else {
                              pAVar10 = OBJ_nid2obj(0xa5);
                              *(ASN1_OBJECT **)pAVar9 = pAVar10;
                              if (pAVar10 == (ASN1_OBJECT *)0x0) {
                                ERR_put_error(0x22,0x84,0x44,"v3_cpols.c",0x12e);
                              }
                              else {
                                pAVar11 = ASN1_item_new((ASN1_ITEM *)USERNOTICE_it);
                                if (pAVar11 == (ASN1_VALUE *)0x0) goto LAB_01a99980;
                                *(ASN1_VALUE **)(pAVar9 + 8) = pAVar11;
                                iVar4 = sk_num(p_Var8);
                                if (0 < iVar4) {
                                  iVar4 = 0;
                                  do {
                                    puVar7 = sk_value(p_Var8,iVar4);
                                    pcVar16 = (char *)puVar7[1];
                                    iVar5 = strcmp(pcVar16,"explicitText");
                                    if (iVar5 == 0) {
                                      pAVar17 = ASN1_STRING_type_new(0x1a);
                                      *(ASN1_STRING **)(pAVar11 + 8) = pAVar17;
                                      if (pAVar17 == (ASN1_STRING *)0x0) goto LAB_01a99980;
LAB_01a99544:
                                      pcVar16 = (char *)puVar7[2];
                                      sVar13 = strlen(pcVar16);
                                      iVar5 = ASN1_STRING_set(pAVar17,pcVar16,(int)sVar13);
                                      if (iVar5 == 0) goto LAB_01a99980;
                                    }
                                    else {
                                      iVar5 = strcmp(pcVar16,"organization");
                                      if (iVar5 == 0) {
                                        pAVar18 = *(ASN1_VALUE **)pAVar11;
                                        if (pAVar18 == (ASN1_VALUE *)0x0) {
                                          pAVar18 = ASN1_item_new((ASN1_ITEM *)NOTICEREF_it);
                                          if (pAVar18 == (ASN1_VALUE *)0x0) goto LAB_01a99980;
                                          *(ASN1_VALUE **)pAVar11 = pAVar18;
                                        }
                                        pAVar17 = *(ASN1_STRING **)pAVar18;
                                        pAVar17->type = iVar14;
                                        goto LAB_01a99544;
                                      }
                                      iVar5 = strcmp(pcVar16,"noticeNumbers");
                                      if (iVar5 != 0) {
                                        iVar2 = 0x8a;
                                        iVar3 = 0x15f;
LAB_01a999d4:
                                        ERR_put_error(0x22,0x84,iVar2,"v3_cpols.c",iVar3);
                                        ERR_add_error_data(6,"section:",*puVar7,",name:",puVar7[1],
                                                           ",value:",puVar7[2]);
                                        goto LAB_01a9999c;
                                      }
                                      pAVar18 = *(ASN1_VALUE **)pAVar11;
                                      if (pAVar18 == (ASN1_VALUE *)0x0) {
                                        pAVar18 = ASN1_item_new((ASN1_ITEM *)NOTICEREF_it);
                                        if (pAVar18 == (ASN1_VALUE *)0x0) goto LAB_01a99980;
                                        *(ASN1_VALUE **)pAVar11 = pAVar18;
                                      }
                                      st_01 = &X509V3_parse_list((char *)puVar7[2])->stack;
                                      if ((st_01 == (_STACK *)0x0) ||
                                         (iVar5 = sk_num(st_01), iVar5 == 0)) {
                                        iVar2 = 0x8d;
                                        iVar3 = 0x156;
                                        goto LAB_01a999d4;
                                      }
                                      st_02 = *(_STACK **)(pAVar18 + 8);
                                      iVar5 = sk_num(st_01);
                                      if (0 < iVar5) {
                                        iVar5 = 0;
                                        do {
                                          pvVar12 = sk_value(st_01,iVar5);
                                          data = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,
                                                                  *(char **)((long)pvVar12 + 8));
                                          if (data == (ASN1_INTEGER *)0x0) {
                                            iVar2 = 0x8c;
                                            iVar3 = 0x180;
LAB_01a997d0:
                                            ERR_put_error(0x22,0x85,iVar2,"v3_cpols.c",iVar3);
                                            sk_pop_free(st_02,ASN1_STRING_free);
                                            sk_pop_free(st_01,X509V3_conf_free);
                                            goto LAB_01a9999c;
                                          }
                                          iVar6 = sk_push(st_02,data);
                                          if (iVar6 == 0) {
                                            iVar2 = 0x41;
                                            iVar3 = 0x189;
                                            goto LAB_01a997d0;
                                          }
                                          iVar5 = iVar5 + 1;
                                          iVar6 = sk_num(st_01);
                                        } while (iVar5 < iVar6);
                                      }
                                      sk_pop_free(st_01,X509V3_conf_free);
                                    }
                                    iVar4 = iVar4 + 1;
                                    iVar5 = sk_num(p_Var8);
                                  } while (iVar4 < iVar5);
                                }
                                plVar15 = *(long **)pAVar11;
                                if ((plVar15 == (long *)0x0) ||
                                   ((plVar15[1] != 0 && (*plVar15 != 0)))) {
                                  X509V3_section_free(param_2,(stack_st_CONF_VALUE *)p_Var8);
                                  p_Var8 = *(_STACK **)(val + 8);
                                  if (p_Var8 == (_STACK *)0x0) {
                                    p_Var8 = sk_new_null();
                                    *(_STACK **)(val + 8) = p_Var8;
                                  }
                                  iVar4 = sk_push(p_Var8,pAVar9);
                                  if (iVar4 != 0) goto LAB_01a99660;
                                  goto LAB_01a99a48;
                                }
                                ERR_put_error(0x22,0x84,0x8e,"v3_cpols.c",0x168);
                              }
                            }
LAB_01a9999c:
                            ASN1_item_free(pAVar9,(ASN1_ITEM *)POLICYQUALINFO_it);
                            X509V3_section_free(param_2,(stack_st_CONF_VALUE *)p_Var8);
                            goto LAB_01a99a64;
                          }
                          iVar2 = 0x87;
                          iVar3 = 0x100;
                        }
                        else {
                          iVar2 = 0x89;
                          iVar3 = 0xfa;
                        }
                      }
                      else {
                        iVar2 = 0x8a;
                        iVar3 = 0x10e;
                      }
LAB_01a9992c:
                      ERR_put_error(0x22,0x83,iVar2,"v3_cpols.c",iVar3);
                      ERR_add_error_data(6,"section:",*puVar7,",name:",puVar7[1],",value:",puVar7[2]
                                        );
                      goto LAB_01a99a64;
                    }
                    if (*(long *)(val + 8) == 0) {
                      p_Var8 = sk_new_null();
                      *(_STACK **)(val + 8) = p_Var8;
                    }
                    pAVar9 = ASN1_item_new((ASN1_ITEM *)POLICYQUALINFO_it);
                    if ((pAVar9 == (ASN1_VALUE *)0x0) ||
                       (iVar4 = sk_push(*(_STACK **)(val + 8),pAVar9), iVar4 == 0))
                    goto LAB_01a99a48;
                    pAVar10 = OBJ_nid2obj(0xa4);
                    *(ASN1_OBJECT **)pAVar9 = pAVar10;
                    if (pAVar10 == (ASN1_OBJECT *)0x0) {
                      iVar2 = 0x44;
                      iVar3 = 0xee;
                      goto LAB_01a99a60;
                    }
                    pAVar17 = ASN1_STRING_type_new(0x16);
                    *(ASN1_STRING **)(pAVar9 + 8) = pAVar17;
                    if (pAVar17 == (ASN1_STRING *)0x0) goto LAB_01a99a48;
                    pcVar16 = (char *)puVar7[2];
                    sVar13 = strlen(pcVar16);
                    iVar4 = ASN1_STRING_set(pAVar17,pcVar16,(int)sVar13);
                    if (iVar4 == 0) goto LAB_01a99a48;
                  }
LAB_01a99660:
                  iVar3 = iVar3 + 1;
                  iVar4 = sk_num(section);
                } while (iVar3 < iVar4);
              }
              if (*(long *)val != 0) {
                X509V3_section_free(param_2,(stack_st_CONF_VALUE *)section);
                iVar3 = sk_push(st,val);
                if (iVar3 == 0) goto LAB_01a99808;
                goto LAB_01a996ec;
              }
              iVar2 = 0x8b;
              iVar3 = 0x115;
            }
LAB_01a99a60:
            ERR_put_error(0x22,0x83,iVar2,"v3_cpols.c",iVar3);
LAB_01a99a64:
            ASN1_item_free(val,(ASN1_ITEM *)POLICYINFO_it);
            X509V3_section_free(param_2,(stack_st_CONF_VALUE *)section);
            goto LAB_01a99a80;
          }
          iVar2 = 0x87;
          iVar3 = 0xac;
        }
        else {
          iVar2 = 0x86;
          iVar3 = 0xa0;
        }
LAB_01a9976c:
        ERR_put_error(0x22,0x82,iVar2,"v3_cpols.c",iVar3);
        ERR_add_error_data(6,"section:",*puVar7,",name:",puVar7[1],",value:",puVar7[2]);
        goto LAB_01a99a80;
      }
LAB_01a99700:
      sk_pop_free(st_00,X509V3_conf_free);
    }
  }
  return st;
}




_STACK * FUN_01a99f0c(X509V3_EXT_METHOD *param_1,X509V3_CTX *param_2,_STACK *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  _STACK *st;
  CONF_VALUE *cnf;
  GENERAL_NAME *a;
  _STACK *p_Var4;
  ASN1_VALUE *pAVar5;
  ASN1_VALUE *pAVar6;
  void *pvVar7;
  long lVar8;
  char *__s1;
  
  st = sk_new_null();
  if (st == (_STACK *)0x0) {
LAB_01a9a168:
    p_Var4 = (_STACK *)0x0;
LAB_01a9a16c:
    a = (GENERAL_NAME *)0x0;
LAB_01a9a170:
    ERR_put_error(0x22,0x86,0x41,"v3_crld.c",0x150);
LAB_01a9a18c:
    GENERAL_NAME_free(a);
    GENERAL_NAMES_free((GENERAL_NAMES *)p_Var4);
    sk_pop_free(st,DIST_POINT_free);
    st = (_STACK *)0x0;
  }
  else {
    iVar1 = sk_num(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        cnf = sk_value(param_3,iVar1);
        if (cnf->value == (char *)0x0) {
          p_Var4 = &X509V3_get_section(param_2,cnf->name)->stack;
          if (p_Var4 != (_STACK *)0x0) {
            pAVar5 = ASN1_item_new((ASN1_ITEM *)DIST_POINT_it);
            if (pAVar5 != (ASN1_VALUE *)0x0) {
              iVar2 = sk_num(p_Var4);
              if (0 < iVar2) {
                iVar2 = 0;
                do {
                  pvVar7 = sk_value(p_Var4,iVar2);
                  iVar3 = FUN_01a9aa34(pAVar5,param_2,pvVar7);
                  if (iVar3 < 1) {
                    if (iVar3 < 0) {
LAB_01a9a114:
                      ASN1_item_free(pAVar5,(ASN1_ITEM *)DIST_POINT_it);
                      goto LAB_01a9a124;
                    }
                    __s1 = *(char **)((long)pvVar7 + 8);
                    iVar3 = strcmp(__s1,"reasons");
                    if (iVar3 == 0) {
                      iVar3 = FUN_01a9ac14(pAVar5 + 8,*(undefined8 *)((long)pvVar7 + 0x10));
                      if (iVar3 == 0) goto LAB_01a9a114;
                    }
                    else {
                      iVar3 = strcmp(__s1,"CRLissuer");
                      if (iVar3 == 0) {
                        lVar8 = FUN_01a9ae30(param_2,*(undefined8 *)((long)pvVar7 + 0x10));
                        *(long *)(pAVar5 + 0x10) = lVar8;
                        if (lVar8 == 0) goto LAB_01a9a114;
                      }
                    }
                  }
                  iVar2 = iVar2 + 1;
                  iVar3 = sk_num(p_Var4);
                } while (iVar2 < iVar3);
              }
              X509V3_section_free(param_2,(stack_st_CONF_VALUE *)p_Var4);
              iVar2 = sk_push(st,pAVar5);
              if (iVar2 != 0) goto LAB_01a9a0fc;
              ASN1_item_free(pAVar5,(ASN1_ITEM *)DIST_POINT_it);
              goto LAB_01a9a168;
            }
LAB_01a9a124:
            X509V3_section_free(param_2,(stack_st_CONF_VALUE *)p_Var4);
          }
          p_Var4 = (_STACK *)0x0;
          a = (GENERAL_NAME *)0x0;
          goto LAB_01a9a18c;
        }
        a = v2i_GENERAL_NAME(param_1,param_2,cnf);
        if (a == (GENERAL_NAME *)0x0) {
          p_Var4 = (_STACK *)0x0;
          goto LAB_01a9a18c;
        }
        p_Var4 = &GENERAL_NAMES_new()->stack;
        if ((p_Var4 == (_STACK *)0x0) || (iVar2 = sk_push(p_Var4,a), iVar2 == 0)) goto LAB_01a9a170;
        pAVar5 = ASN1_item_new((ASN1_ITEM *)DIST_POINT_it);
        a = (GENERAL_NAME *)0x0;
        if (pAVar5 == (ASN1_VALUE *)0x0) goto LAB_01a9a170;
        iVar2 = sk_push(st,pAVar5);
        if (iVar2 == 0) {
          ASN1_item_free(pAVar5,(ASN1_ITEM *)DIST_POINT_it);
          goto LAB_01a9a16c;
        }
        pAVar6 = ASN1_item_new((ASN1_ITEM *)DIST_POINT_NAME_it);
        *(ASN1_VALUE **)pAVar5 = pAVar6;
        if (pAVar6 == (ASN1_VALUE *)0x0) goto LAB_01a9a16c;
        *(_STACK **)(pAVar6 + 8) = p_Var4;
        **(undefined4 **)pAVar5 = 0;
LAB_01a9a0fc:
        iVar1 = iVar1 + 1;
        iVar2 = sk_num(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return st;
}

