// functions/01a7a — 1 functions
#include "libGameKindred.h"




uint FUN_01a7ab34(code *param_1,undefined8 param_2,X509_NAME *param_3,uint param_4,ulong param_5)

{
  uint uVar1;
  char *pcVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  X509_NAME_ENTRY *ne;
  ASN1_OBJECT *o;
  ASN1_STRING *pAVar13;
  char *__s;
  size_t sVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined *puVar18;
  char *pcVar19;
  int iVar20;
  int local_c8;
  char acStack_b8 [88];
  
  uVar15 = param_4 & ((int)param_4 >> 0x1f ^ 0xffffffffU);
  if (0 < (int)param_4) {
    uVar17 = 0;
    do {
      iVar6 = (*param_1)(param_2,&DAT_01e4a398,1);
      if (iVar6 == 0) {
        return 0xffffffff;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar15);
  }
  local_c8 = 3;
  iVar6 = 1;
  puVar18 = &DAT_01e45aa7;
  pcVar19 = "\n";
  uVar17 = uVar15;
  switch((param_5 & 0xf0000) - 0x10000 >> 0x10) {
  case 0:
    local_c8 = 1;
    iVar6 = 1;
    puVar18 = &DAT_01b9f8c3;
    pcVar19 = ",";
    break;
  case 1:
    uVar17 = 0;
    local_c8 = 3;
    iVar6 = 2;
    puVar18 = &DAT_01e45aa7;
    pcVar19 = ", ";
    goto switchD_01a7abe0_caseD_3;
  case 2:
    local_c8 = 3;
    iVar6 = 2;
    puVar18 = &DAT_01e45aa7;
    pcVar19 = "; ";
    break;
  case 3:
    goto switchD_01a7abe0_caseD_3;
  default:
    return 0xffffffff;
  }
  uVar17 = 0;
switchD_01a7abe0_caseD_3:
  pcVar2 = "=";
  if ((param_5 & 0x800000) != 0) {
    pcVar2 = " = ";
  }
  iVar7 = X509_NAME_entry_count(param_3);
  if (0 < iVar7) {
    uVar1 = (uint)param_5 & 0x600000;
    iVar20 = 0;
    iVar8 = -1;
    uVar4 = (uint)((param_5 & 0x800000) >> 0x16) | 1;
    do {
      iVar9 = iVar20;
      if ((param_5 & 0x100000) != 0) {
        iVar9 = (iVar7 + -1) - iVar20;
      }
      ne = X509_NAME_get_entry(param_3,iVar9);
      if (iVar8 != -1) {
        if (iVar8 == ne->set) {
          iVar8 = (*param_1)(param_2,puVar18,local_c8);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          uVar15 = uVar15 + local_c8;
        }
        else {
          iVar8 = (*param_1)(param_2,pcVar19,iVar6);
          if (iVar8 == 0) {
            return 0xffffffff;
          }
          if (uVar17 != 0) {
            uVar16 = 0;
            do {
              iVar8 = (*param_1)(param_2,&DAT_01e4a398,1);
              if (iVar8 == 0) {
                return 0xffffffff;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar17);
          }
          uVar15 = iVar6 + uVar17 + uVar15;
        }
      }
      iVar8 = ne->set;
      o = X509_NAME_ENTRY_get_object(ne);
      pAVar13 = X509_NAME_ENTRY_get_data(ne);
      iVar9 = OBJ_obj2nid(o);
      if (uVar1 != 0x600000) {
        if ((uVar1 == 0x400000) || (iVar9 == 0)) {
          __s = acStack_b8;
          OBJ_obj2txt(acStack_b8,0x50,o,1);
          iVar12 = 0;
        }
        else if (uVar1 == 0x200000) {
          __s = OBJ_nid2ln(iVar9);
          iVar12 = 0x19;
        }
        else if ((param_5 & 0x600000) == 0) {
          __s = OBJ_nid2sn(iVar9);
          iVar12 = 10;
        }
        else {
          iVar12 = 0;
          __s = "";
        }
        sVar14 = strlen(__s);
        iVar10 = (*param_1)(param_2,__s,sVar14 & 0xffffffff);
        if (iVar10 == 0) {
          return 0xffffffff;
        }
        iVar10 = (int)sVar14;
        if ((((uint)param_5 >> 0x19 & 1) != 0) &&
           (iVar5 = iVar12 - iVar10, iVar5 != 0 && iVar10 <= iVar12)) {
          if (0 < iVar5) {
            iVar12 = 0;
            do {
              iVar11 = (*param_1)(param_2,&DAT_01e4a398,1);
              if (iVar11 == 0) {
                return 0xffffffff;
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < iVar5);
          }
          uVar15 = iVar5 + uVar15;
        }
        iVar12 = (*param_1)(param_2,pcVar2,uVar4);
        if (iVar12 == 0) {
          return 0xffffffff;
        }
        uVar15 = uVar4 + iVar10 + uVar15;
      }
      uVar3 = 0;
      if (iVar9 == 0 && (param_5 & 0x1000000) != 0) {
        uVar3 = 0x80;
      }
      iVar9 = FUN_01a7b00c(param_1,param_2,uVar3 | param_5,pAVar13);
      if (iVar9 < 0) {
        return 0xffffffff;
      }
      iVar20 = iVar20 + 1;
      uVar15 = iVar9 + uVar15;
    } while (iVar20 < iVar7);
  }
  return uVar15;
}

