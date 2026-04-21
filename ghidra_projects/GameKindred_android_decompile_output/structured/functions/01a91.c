// functions/01a91 — 1 functions
#include "libGameKindred.h"




undefined8 FUN_01a91760(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ASN1_OBJECT *pAVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_2 + 0xb0);
  if (puVar4 == (undefined8 *)0x0) {
    return 3;
  }
  if (((_STACK *)puVar4[1] != (_STACK *)0x0) && (iVar1 = sk_num((_STACK *)puVar4[1]), 0 < iVar1)) {
    iVar1 = 0;
    do {
      pAVar3 = sk_value((_STACK *)puVar4[1],iVar1);
      iVar2 = OBJ_obj2nid(pAVar3);
      if (iVar2 == param_1) {
        return 2;
      }
      iVar1 = iVar1 + 1;
      iVar2 = sk_num((_STACK *)puVar4[1]);
    } while (iVar1 < iVar2);
  }
  if ((_STACK *)*puVar4 != (_STACK *)0x0) {
    iVar1 = sk_num((_STACK *)*puVar4);
    if (iVar1 < 1) {
      return 3;
    }
    iVar1 = 0;
    do {
      pAVar3 = sk_value((_STACK *)*puVar4,iVar1);
      iVar2 = OBJ_obj2nid(pAVar3);
      if (iVar2 == param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = sk_num((_STACK *)*puVar4);
    } while (iVar1 < iVar2);
    return 3;
  }
  return 3;
}

