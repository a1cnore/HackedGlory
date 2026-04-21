// functions/01a95 — 2 functions
#include "libGameKindred.h"




undefined8 FUN_01a95774(X509_NAME *param_1,_STACK *param_2)

{
  int iVar1;
  int iVar2;
  X509_NAME_ENTRY *ne;
  ASN1_STRING *pAVar3;
  int *piVar4;
  undefined8 local_28;
  
  iVar1 = -1;
  local_28 = 0;
  while (iVar1 = X509_NAME_get_index_by_NID(param_1,0x30,iVar1), -1 < iVar1) {
    ne = X509_NAME_get_entry(param_1,iVar1);
    pAVar3 = X509_NAME_ENTRY_get_data(ne);
    iVar2 = FUN_01a95918(&local_28,pAVar3);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar1 = sk_num(param_2);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      piVar4 = sk_value(param_2,iVar1);
      if ((*piVar4 == 1) &&
         (iVar2 = FUN_01a95918(&local_28,*(undefined8 *)(piVar4 + 2)), iVar2 == 0)) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = sk_num(param_2);
    } while (iVar1 < iVar2);
  }
  return local_28;
}




undefined8 FUN_01a95918(undefined8 *param_1,int *param_2)

{
  int iVar1;
  _STACK *st;
  char *data;
  
  if (param_2[1] != 0x16) {
    return 1;
  }
  if (*(void **)(param_2 + 2) == (void *)0x0) {
    return 1;
  }
  if (*param_2 == 0) {
    return 1;
  }
  if ((_STACK *)*param_1 == (_STACK *)0x0) {
    st = sk_new((cmp *)&LAB_01a964d0);
    *param_1 = st;
    if (st == (_STACK *)0x0) {
      return 0;
    }
    iVar1 = sk_find(st,*(void **)(param_2 + 2));
  }
  else {
    iVar1 = sk_find((_STACK *)*param_1,*(void **)(param_2 + 2));
  }
  if (iVar1 == -1) {
    data = BUF_strdup(*(char **)(param_2 + 2));
    if ((data != (char *)0x0) && (iVar1 = sk_push((_STACK *)*param_1,data), iVar1 != 0)) {
      return 1;
    }
    sk_pop_free((_STACK *)*param_1,(func *)&LAB_01a95a98);
    *param_1 = 0;
    return 0;
  }
  return 1;
}

