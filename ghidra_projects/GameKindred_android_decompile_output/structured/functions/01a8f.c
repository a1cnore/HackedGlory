// functions/01a8f — 2 functions
#include "libGameKindred.h"




int FUN_01a8f474(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)*param_1;
  piVar4 = (int *)*param_2;
  iVar1 = *piVar3;
  iVar2 = iVar1 - *piVar4;
  if (iVar2 == 0) {
    if (iVar1 == 2) {
      iVar2 = X509_CRL_cmp(*(X509_CRL **)(piVar3 + 2),*(X509_CRL **)(piVar4 + 2));
      return iVar2;
    }
    iVar2 = 0;
    if (iVar1 == 1) {
      iVar2 = X509_subject_name_cmp(*(X509 **)(piVar3 + 2),*(X509 **)(piVar4 + 2));
      return iVar2;
    }
  }
  return iVar2;
}




int FUN_01a8fec8(_STACK *param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int *local_178;
  undefined1 auStack_170 [16];
  undefined8 auStack_160 [3];
  undefined8 local_148 [8];
  undefined1 *local_108 [23];
  int local_50 [2];
  undefined1 **local_48;
  void *local_38;
  
  if (param_2 == 2) {
    puVar3 = auStack_160;
  }
  else {
    if (param_2 != 1) {
      return -1;
    }
    puVar3 = local_148;
  }
  local_48 = local_108;
  local_108[0] = auStack_170;
  *puVar3 = param_3;
  local_50[0] = param_2;
  iVar1 = sk_find(param_1,local_50);
  if ((param_4 != (int *)0x0) && (-1 < iVar1)) {
    local_178 = local_50;
    iVar4 = iVar1 + 1;
    *param_4 = 1;
    iVar2 = sk_num(param_1);
    if (iVar4 < iVar2) {
      do {
        local_38 = sk_value(param_1,iVar4);
        iVar2 = FUN_01a8f474(&local_38,&local_178);
        if (iVar2 != 0) {
          return iVar1;
        }
        iVar4 = iVar4 + 1;
        *param_4 = *param_4 + 1;
        iVar2 = sk_num(param_1);
      } while (iVar4 < iVar2);
    }
  }
  return iVar1;
}

