// functions/01a8b — 1 functions
#include "libGameKindred.h"




undefined8 FUN_01a8b5dc(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  X509 *x;
  X509 *a;
  EVP_PKEY *r;
  undefined8 uVar4;
  X509 *pXVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  time_t *t;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x40);
  iVar2 = sk_num(*(_STACK **)(param_1 + 0xa0));
  iVar8 = iVar2 + -1;
  *(int *)(param_1 + 0xb4) = iVar8;
  x = sk_value(*(_STACK **)(param_1 + 0xa0),iVar8);
  iVar3 = (**(code **)(param_1 + 0x50))(param_1,x,x);
  a = x;
  if (iVar3 == 0) {
    lVar6 = *(long *)(param_1 + 0x28);
    lVar7 = *(long *)(lVar6 + 0x18);
    if (((uint)lVar7 >> 0x13 & 1) != 0) goto LAB_01a8b754;
    if (iVar2 < 2) {
      *(undefined4 *)(param_1 + 0xb8) = 0x15;
      *(X509 **)(param_1 + 0xc0) = x;
                    /* WARNING: Could not recover jumptable at 0x01a8b680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)(0,param_1);
      return uVar4;
    }
    iVar8 = iVar2 + -2;
    *(int *)(param_1 + 0xb4) = iVar8;
    a = sk_value(*(_STACK **)(param_1 + 0xa0),iVar8);
  }
  do {
    if (iVar8 < 0) {
      return 1;
    }
    *(int *)(param_1 + 0xb4) = iVar8;
    if ((a->valid == 0) &&
       ((a != x || ((*(byte *)(*(long *)(param_1 + 0x28) + 0x19) >> 6 & 1) != 0)))) {
      r = X509_get_pubkey(x);
      if (r == (EVP_PKEY *)0x0) {
        *(undefined4 *)(param_1 + 0xb8) = 6;
        *(X509 **)(param_1 + 0xc0) = x;
        uVar4 = (*UNRECOVERED_JUMPTABLE)(0,param_1);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
      }
      else {
        iVar2 = X509_verify(a,r);
        if (iVar2 < 1) {
          *(undefined4 *)(param_1 + 0xb8) = 7;
          *(X509 **)(param_1 + 0xc0) = a;
          iVar2 = (*UNRECOVERED_JUMPTABLE)(0,param_1);
          if (iVar2 == 0) {
            EVP_PKEY_free(r);
            return 0;
          }
        }
      }
      EVP_PKEY_free(r);
    }
    a->valid = 1;
    lVar6 = *(long *)(param_1 + 0x28);
    lVar7 = *(long *)(lVar6 + 0x18);
LAB_01a8b754:
    t = (time_t *)(lVar6 + 8U & (lVar7 << 0x3e) >> 0x3f);
    iVar2 = X509_cmp_time(a->cert_info->validity->notBefore,t);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0xd;
      *(X509 **)(param_1 + 0xc0) = a;
      uVar4 = (**(code **)(param_1 + 0x40))(0,param_1);
      iVar2 = (int)uVar4;
joined_r0x01a8b7c0:
      if (iVar2 == 0) {
        return uVar4;
      }
    }
    else if (0 < iVar2) {
      *(undefined4 *)(param_1 + 0xb8) = 9;
      *(X509 **)(param_1 + 0xc0) = a;
      uVar4 = (**(code **)(param_1 + 0x40))(0,param_1);
      iVar2 = (int)uVar4;
      goto joined_r0x01a8b7c0;
    }
    iVar2 = X509_cmp_time(a->cert_info->validity->notAfter,t);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0xe;
      *(X509 **)(param_1 + 0xc0) = a;
      uVar4 = (**(code **)(param_1 + 0x40))(0,param_1);
      iVar2 = (int)uVar4;
joined_r0x01a8b81c:
      if (iVar2 == 0) {
        return uVar4;
      }
    }
    else if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0xb8) = 10;
      *(X509 **)(param_1 + 0xc0) = a;
      uVar4 = (**(code **)(param_1 + 0x40))(0,param_1);
      iVar2 = (int)uVar4;
      goto joined_r0x01a8b81c;
    }
    *(X509 **)(param_1 + 0xc0) = a;
    *(X509 **)(param_1 + 200) = x;
    uVar4 = (*UNRECOVERED_JUMPTABLE)(1,param_1);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    iVar2 = iVar8 + -1;
    bVar1 = 0 < iVar8;
    iVar8 = iVar2;
    if (bVar1) {
      pXVar5 = sk_value(*(_STACK **)(param_1 + 0xa0),iVar2);
      x = a;
      a = pXVar5;
    }
  } while( true );
}

