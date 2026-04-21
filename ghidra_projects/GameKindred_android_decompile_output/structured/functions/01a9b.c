// functions/01a9b — 1 functions
#include "libGameKindred.h"




void FUN_01a9b298(X509 *param_1)

{
  ulong *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  EVP_MD *type;
  long lVar6;
  BASIC_CONSTRAINTS *a;
  ASN1_INTEGER *a_00;
  PROXY_CERT_INFO_EXTENSION *a_01;
  ASN1_BIT_STRING *pAVar7;
  _STACK *p_Var8;
  ASN1_OBJECT *pAVar9;
  ASN1_OCTET_STRING *pAVar10;
  AUTHORITY_KEYID *pAVar11;
  X509_NAME *pXVar12;
  X509_NAME *b;
  stack_st_GENERAL_NAME *psVar13;
  NAME_CONSTRAINTS *pNVar14;
  undefined8 *puVar15;
  X509_EXTENSION *ex;
  void *pvVar16;
  ulong uVar17;
  int *piVar18;
  uint *puVar19;
  uint uVar20;
  byte *pbVar21;
  int local_48;
  int local_44;
  
  if ((param_1->ex_flags & 0x100) == 0) {
    puVar1 = &param_1->ex_flags;
    type = EVP_sha1();
    X509_digest(param_1,type,(uchar *)&param_1->rfc3779_addr,(uint *)0x0);
    lVar6 = ASN1_INTEGER_get(param_1->cert_info->version);
    if (lVar6 == 0) {
      *puVar1 = *puVar1 | 0x40;
    }
    a = X509_get_ext_d2i(param_1,0x57,(int *)0x0,(int *)0x0);
    if (a != (BASIC_CONSTRAINTS *)0x0) {
      iVar3 = a->ca;
      if (iVar3 != 0) {
        *puVar1 = *puVar1 | 0x10;
      }
      a_00 = a->pathlen;
      if (a_00 == (ASN1_INTEGER *)0x0) {
        lVar6 = -1;
      }
      else if ((iVar3 == 0) || (a_00->type == 0x102)) {
        lVar6 = 0;
        *puVar1 = *puVar1 | 0x80;
      }
      else {
        lVar6 = ASN1_INTEGER_get(a_00);
      }
      param_1->ex_pathlen = lVar6;
      BASIC_CONSTRAINTS_free(a);
      param_1->ex_flags = param_1->ex_flags | 1;
    }
    a_01 = X509_get_ext_d2i(param_1,0x297,(int *)0x0,(int *)0x0);
    if (a_01 != (PROXY_CERT_INFO_EXTENSION *)0x0) {
      if (((((byte)*puVar1 >> 4 & 1) != 0) ||
          (iVar3 = X509_get_ext_by_NID(param_1,0x55,-1), -1 < iVar3)) ||
         (iVar3 = X509_get_ext_by_NID(param_1,0x56,-1), -1 < iVar3)) {
        *puVar1 = *puVar1 | 0x80;
      }
      if (a_01->pcPathLengthConstraint == (ASN1_INTEGER *)0x0) {
        lVar6 = -1;
      }
      else {
        lVar6 = ASN1_INTEGER_get(a_01->pcPathLengthConstraint);
      }
      param_1->ex_pcpathlen = lVar6;
      PROXY_CERT_INFO_EXTENSION_free(a_01);
      param_1->ex_flags = param_1->ex_flags | 0x400;
    }
    pAVar7 = X509_get_ext_d2i(param_1,0x53,(int *)0x0,(int *)0x0);
    if (pAVar7 != (ASN1_BIT_STRING *)0x0) {
      iVar3 = pAVar7->length;
      if (iVar3 < 1) {
        param_1->ex_kusage = 0;
      }
      else {
        pbVar21 = pAVar7->data;
        bVar2 = *pbVar21;
        param_1->ex_kusage = (ulong)bVar2;
        if (iVar3 != 1) {
          param_1->ex_kusage = (ulong)CONCAT11(pbVar21[1],bVar2);
        }
      }
      *puVar1 = *puVar1 | 2;
      ASN1_BIT_STRING_free(pAVar7);
    }
    param_1->ex_xkusage = 0;
    p_Var8 = X509_get_ext_d2i(param_1,0x7e,(int *)0x0,(int *)0x0);
    if (p_Var8 != (_STACK *)0x0) {
      *puVar1 = *puVar1 | 4;
      local_48 = 0;
      iVar4 = sk_num(p_Var8);
      iVar3 = local_48;
      if (0 < iVar4) {
        iVar3 = 0;
        do {
          pAVar9 = sk_value(p_Var8,iVar3);
          iVar4 = OBJ_obj2nid(pAVar9);
          uVar17 = 1;
          switch(iVar4) {
          case 0x81:
            break;
          case 0x82:
            uVar17 = 2;
            break;
          case 0x83:
            uVar17 = 8;
            break;
          case 0x84:
            uVar17 = 4;
            break;
          case 0x85:
            uVar17 = 0x40;
            break;
          case 0x86:
          case 0x87:
          case 0x88:
          case 0x8a:
          case 0x8c:
          case 0x8d:
          case 0x8e:
          case 0x8f:
          case 0x90:
          case 0x91:
          case 0x92:
          case 0x93:
          case 0x94:
          case 0x95:
          case 0x96:
          case 0x97:
          case 0x98:
          case 0x99:
          case 0x9a:
          case 0x9b:
          case 0x9c:
          case 0x9d:
          case 0x9e:
          case 0x9f:
          case 0xa0:
          case 0xa1:
          case 0xa2:
          case 0xa3:
          case 0xa4:
          case 0xa5:
          case 0xa6:
          case 0xa7:
          case 0xa8:
          case 0xa9:
          case 0xaa:
          case 0xab:
          case 0xac:
          case 0xad:
          case 0xae:
          case 0xaf:
          case 0xb0:
          case 0xb1:
          case 0xb2:
          case 0xb3:
            goto switchD_01a9b4c4_caseD_86;
          case 0x89:
          case 0x8b:
            uVar17 = 0x10;
            break;
          case 0xb4:
            uVar17 = 0x20;
            break;
          default:
            if (iVar4 == 0x129) {
              uVar17 = 0x80;
            }
            else {
              if (iVar4 != 0x38e) goto switchD_01a9b4c4_caseD_86;
              uVar17 = 0x100;
            }
          }
          param_1->ex_xkusage = param_1->ex_xkusage | uVar17;
switchD_01a9b4c4_caseD_86:
          iVar3 = iVar3 + 1;
          iVar4 = sk_num(p_Var8);
        } while (iVar3 < iVar4);
      }
      local_48 = iVar3;
      sk_pop_free(p_Var8,ASN1_OBJECT_free);
    }
    pAVar7 = X509_get_ext_d2i(param_1,0x47,(int *)0x0,(int *)0x0);
    if (pAVar7 != (ASN1_BIT_STRING *)0x0) {
      if (pAVar7->length < 1) {
        uVar17 = 0;
      }
      else {
        uVar17 = (ulong)*pAVar7->data;
      }
      param_1->ex_nscert = uVar17;
      param_1->ex_flags = param_1->ex_flags | 8;
      ASN1_BIT_STRING_free(pAVar7);
    }
    pAVar10 = X509_get_ext_d2i(param_1,0x52,(int *)0x0,(int *)0x0);
    param_1->skid = pAVar10;
    pAVar11 = X509_get_ext_d2i(param_1,0x5a,(int *)0x0,(int *)0x0);
    param_1->akid = pAVar11;
    pXVar12 = X509_get_subject_name(param_1);
    b = X509_get_issuer_name(param_1);
    iVar3 = X509_NAME_cmp(pXVar12,b);
    if (iVar3 == 0) {
      param_1->ex_flags = param_1->ex_flags | 0x20;
      iVar3 = X509_check_akid(param_1,param_1->akid);
      if ((iVar3 == 0) &&
         ((((uint)*puVar1 >> 1 & 1) == 0 || (((byte)param_1->ex_kusage >> 2 & 1) != 0)))) {
        *puVar1 = *puVar1 | 0x2000;
      }
    }
    psVar13 = X509_get_ext_d2i(param_1,0x55,(int *)0x0,(int *)0x0);
    param_1->altname = psVar13;
    pNVar14 = X509_get_ext_d2i(param_1,0x29a,&local_48,(int *)0x0);
    param_1->nc = pNVar14;
    if ((pNVar14 == (NAME_CONSTRAINTS *)0x0) && (local_48 != -1)) {
      *puVar1 = *puVar1 | 0x80;
    }
    p_Var8 = X509_get_ext_d2i(param_1,0x67,(int *)0x0,(int *)0x0);
    param_1->crldp = (stack_st_DIST_POINT *)p_Var8;
    iVar3 = sk_num(p_Var8);
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        puVar15 = sk_value(&param_1->crldp->stack,iVar3);
        piVar18 = (int *)puVar15[1];
        if (piVar18 == (int *)0x0) {
          *(undefined4 *)(puVar15 + 3) = 0x807f;
          piVar18 = (int *)*puVar15;
        }
        else {
          iVar4 = *piVar18;
          if (iVar4 < 1) {
            uVar20 = *(uint *)(puVar15 + 3);
          }
          else {
            pbVar21 = *(byte **)(piVar18 + 2);
            bVar2 = *pbVar21;
            uVar20 = (uint)bVar2;
            puVar19 = (uint *)(puVar15 + 3);
            *puVar19 = (uint)bVar2;
            if (iVar4 != 1) {
              uVar20 = (uint)CONCAT11(pbVar21[1],bVar2);
              *puVar19 = uVar20;
              *puVar19 = uVar20 & 0x807f;
              piVar18 = (int *)*puVar15;
              goto joined_r0x01a9b6f4;
            }
          }
          *(uint *)(puVar15 + 3) = uVar20 & 0x807f;
          piVar18 = (int *)*puVar15;
        }
joined_r0x01a9b6f4:
        if ((piVar18 != (int *)0x0) && (*piVar18 == 1)) {
          iVar4 = sk_num((_STACK *)puVar15[2]);
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              piVar18 = sk_value((_STACK *)puVar15[2],iVar4);
              if (*piVar18 == 4) {
                pXVar12 = *(X509_NAME **)(piVar18 + 2);
                if (pXVar12 != (X509_NAME *)0x0) goto LAB_01a9b778;
                break;
              }
              iVar4 = iVar4 + 1;
              iVar5 = sk_num((_STACK *)puVar15[2]);
            } while (iVar4 < iVar5);
          }
          pXVar12 = X509_get_issuer_name(param_1);
LAB_01a9b778:
          DIST_POINT_set_dpname((DIST_POINT_NAME *)*puVar15,pXVar12);
        }
        iVar3 = iVar3 + 1;
        iVar4 = sk_num(&param_1->crldp->stack);
      } while (iVar3 < iVar4);
    }
    local_48 = 0;
    iVar3 = X509_get_ext_count(param_1);
    if (0 < iVar3) {
      do {
        ex = X509_get_ext(param_1,local_48);
        pAVar9 = X509_EXTENSION_get_object(ex);
        iVar3 = OBJ_obj2nid(pAVar9);
        if (iVar3 == 0x359) {
          *puVar1 = *puVar1 | 0x1000;
        }
        iVar3 = X509_EXTENSION_get_critical(ex);
        if (iVar3 != 0) {
          pAVar9 = X509_EXTENSION_get_object(ex);
          local_44 = OBJ_obj2nid(pAVar9);
          if ((local_44 == 0) ||
             (pvVar16 = OBJ_bsearch_(&local_44,&DAT_01e49f58,0xb,4,(cmp *)&LAB_01a9c824),
             pvVar16 == (void *)0x0)) {
            *puVar1 = *puVar1 | 0x200;
            break;
          }
        }
        iVar3 = local_48 + 1;
        local_48 = iVar3;
        iVar4 = X509_get_ext_count(param_1);
      } while (iVar3 < iVar4);
    }
    *puVar1 = *puVar1 | 0x100;
  }
  return;
}

