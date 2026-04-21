// functions/01aa4 — 1 functions
#include "libGameKindred.h"




undefined8 FUN_01aa40a0(undefined8 *param_1,int param_2,int param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  X509_ATTRIBUTE *pXVar3;
  _STACK *p_Var4;
  undefined8 uVar5;
  void *pvVar6;
  
  if ((_STACK *)*param_1 == (_STACK *)0x0) {
    p_Var4 = sk_new_null();
    *param_1 = p_Var4;
    if (p_Var4 == (_STACK *)0x0) {
      return 0;
    }
  }
  else {
    iVar1 = sk_num((_STACK *)*param_1);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        pXVar3 = sk_value((_STACK *)*param_1,iVar1);
        iVar2 = OBJ_obj2nid(pXVar3->object);
        if (iVar2 == param_2) {
          X509_ATTRIBUTE_free(pXVar3);
          pXVar3 = X509_ATTRIBUTE_create(param_2,param_3,param_4);
          if (pXVar3 == (X509_ATTRIBUTE *)0x0) {
            return 0;
          }
          pvVar6 = sk_set((_STACK *)*param_1,iVar1,pXVar3);
          if (pvVar6 == (void *)0x0) goto LAB_01aa4184;
          goto LAB_01aa4148;
        }
        iVar1 = iVar1 + 1;
        iVar2 = sk_num((_STACK *)*param_1);
      } while (iVar1 < iVar2);
    }
  }
  pXVar3 = X509_ATTRIBUTE_create(param_2,param_3,param_4);
  uVar5 = 0;
  if (pXVar3 != (X509_ATTRIBUTE *)0x0) {
    iVar1 = sk_push((_STACK *)*param_1,pXVar3);
    if (iVar1 == 0) {
LAB_01aa4184:
      X509_ATTRIBUTE_free(pXVar3);
      uVar5 = 0;
    }
    else {
LAB_01aa4148:
      uVar5 = 1;
    }
  }
  return uVar5;
}

