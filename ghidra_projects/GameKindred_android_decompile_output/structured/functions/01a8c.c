// functions/01a8c — 2 functions
#include "libGameKindred.h"




bool FUN_01a8c19c(X509_CRL *param_1,X509_CRL *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  X509_EXTENSION *pXVar4;
  ASN1_OCTET_STRING *a;
  ASN1_OCTET_STRING *b;
  
  iVar2 = X509_CRL_get_ext_by_NID(param_1,param_3,-1);
  if (iVar2 < 0) {
    a = (ASN1_STRING *)0x0;
  }
  else {
    iVar3 = X509_CRL_get_ext_by_NID(param_1,param_3,iVar2);
    if (iVar3 != -1) {
      return false;
    }
    pXVar4 = X509_CRL_get_ext(param_1,iVar2);
    a = X509_EXTENSION_get_data(pXVar4);
  }
  iVar2 = X509_CRL_get_ext_by_NID(param_2,param_3,-1);
  if (iVar2 < 0) {
    b = (ASN1_STRING *)0x0;
    if (a == (ASN1_STRING *)0x0) {
      return true;
    }
  }
  else {
    iVar3 = X509_CRL_get_ext_by_NID(param_2,param_3,iVar2);
    if (iVar3 != -1) {
      return false;
    }
    pXVar4 = X509_CRL_get_ext(param_2,iVar2);
    b = X509_EXTENSION_get_data(pXVar4);
    if (a == (ASN1_STRING *)0x0 && b == (ASN1_OCTET_STRING *)0x0) {
      return true;
    }
  }
  if (a != (ASN1_STRING *)0x0) {
    bVar1 = false;
    if (b != (ASN1_STRING *)0x0) {
      iVar2 = ASN1_OCTET_STRING_cmp(a,b);
      bVar1 = iVar2 == 0;
    }
    return bVar1;
  }
  return false;
}




undefined8 FUN_01a8c9bc(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  X509 *a;
  undefined8 uVar4;
  X509_NAME *pXVar5;
  _STACK *st;
  uint uVar6;
  X509_CRL *a_00;
  int unaff_w24;
  int iVar7;
  int iVar8;
  X509_CRL *local_88;
  X509_CRL *local_80;
  X509_CRL *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  
  uVar6 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
  if ((uVar6 >> 2 & 1) != 0) {
    if ((uVar6 >> 3 & 1) == 0) {
      if (*(long *)(param_1 + 0xe0) != 0) {
        return 1;
      }
      iVar7 = 0;
    }
    else {
      iVar2 = sk_num(*(_STACK **)(param_1 + 0xa0));
      iVar7 = iVar2 + -1;
      if (iVar2 < 1) {
        return 1;
      }
    }
    iVar2 = 0;
    do {
      *(int *)(param_1 + 0xb4) = iVar2;
      local_88 = (X509_CRL *)0x0;
      a = sk_value(*(_STACK **)(param_1 + 0xa0),iVar2);
      *(X509 **)(param_1 + 0xc0) = a;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      iVar8 = 0;
      do {
        if (iVar8 == 0x807f) goto LAB_01a8cbf8;
        if (*(code **)(param_1 + 0x60) == (code *)0x0) {
          local_68 = 0;
          local_6c = 0;
          local_80 = (X509_CRL *)0x0;
          local_78 = (X509_CRL *)0x0;
          pXVar5 = X509_get_issuer_name(a);
          local_70 = *(undefined4 *)(param_1 + 0xdc);
          iVar3 = FUN_01a8d3ec(param_1,&local_78,&local_80,&local_68,&local_6c,&local_70,
                               *(undefined8 *)(param_1 + 0x20));
          if (iVar3 == 0) {
            st = (_STACK *)(**(code **)(param_1 + 0x88))(param_1,pXVar5);
            if ((st != (_STACK *)0x0) || (local_78 == (X509_CRL *)0x0)) {
              FUN_01a8d3ec(param_1,&local_78,&local_80,&local_68,&local_6c,&local_70,st);
              sk_pop_free(st,X509_CRL_free);
              goto joined_r0x01a8cb20;
            }
          }
          else {
joined_r0x01a8cb20:
            if (local_78 == (X509_CRL *)0x0) {
              uVar4 = 0;
              goto LAB_01a8cc08;
            }
          }
          *(undefined8 *)(param_1 + 200) = local_68;
          *(undefined4 *)(param_1 + 0xd8) = local_6c;
          *(undefined4 *)(param_1 + 0xdc) = local_70;
          a_00 = local_80;
          local_88 = local_78;
        }
        else {
          uVar4 = (**(code **)(param_1 + 0x60))(param_1,&local_88,a);
          a_00 = (X509_CRL *)0x0;
          if ((int)uVar4 == 0) {
LAB_01a8cc08:
            a_00 = (X509_CRL *)0x0;
            *(undefined4 *)(param_1 + 0xb8) = 3;
            unaff_w24 = (**(code **)(param_1 + 0x40))(uVar4,param_1);
            goto LAB_01a8cc1c;
          }
        }
        *(X509_CRL **)(param_1 + 0xd0) = local_88;
        iVar3 = (**(code **)(param_1 + 0x68))(param_1);
        if (iVar3 == 0) {
LAB_01a8cc00:
          unaff_w24 = 0;
          goto LAB_01a8cc1c;
        }
        if (a_00 == (X509_CRL *)0x0) {
LAB_01a8cba0:
          unaff_w24 = (**(code **)(param_1 + 0x70))(param_1,local_88,a);
          if (unaff_w24 == 0) goto LAB_01a8cc1c;
        }
        else {
          iVar3 = (**(code **)(param_1 + 0x68))(param_1,a_00);
          if (iVar3 == 0) goto LAB_01a8cc00;
          unaff_w24 = (**(code **)(param_1 + 0x70))(param_1,a_00,a);
          if (unaff_w24 != 2) {
            if (unaff_w24 != 0) goto LAB_01a8cba0;
            goto LAB_01a8cc1c;
          }
        }
        X509_CRL_free(local_88);
        X509_CRL_free(a_00);
        local_88 = (X509_CRL *)0x0;
        bVar1 = iVar8 != *(int *)(param_1 + 0xdc);
        iVar8 = *(int *)(param_1 + 0xdc);
      } while (bVar1);
      *(undefined4 *)(param_1 + 0xb8) = 3;
      unaff_w24 = (**(code **)(param_1 + 0x40))(0,param_1);
LAB_01a8cbf8:
      a_00 = (X509_CRL *)0x0;
LAB_01a8cc1c:
      X509_CRL_free(local_88);
      X509_CRL_free(a_00);
      *(undefined8 *)(param_1 + 0xd0) = 0;
      if (unaff_w24 == 0) {
        return 0;
      }
      bVar1 = iVar2 < iVar7;
      iVar2 = iVar2 + 1;
    } while (bVar1);
  }
  return 1;
}

