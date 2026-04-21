// functions/01a8d — 1 functions
#include "libGameKindred.h"




undefined4 FUN_01a8d27c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  _STACK *p_Var4;
  
  p_Var4 = *(_STACK **)(param_2 + 0x30);
  iVar1 = sk_num(p_Var4);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      pvVar3 = sk_value(p_Var4,iVar1);
      iVar2 = (**(code **)(param_2 + 0x50))(param_2,param_3,pvVar3);
      if (iVar2 != 0) {
        *param_1 = pvVar3;
        if (pvVar3 != (void *)0x0) {
          CRYPTO_add_lock((int *)((long)pvVar3 + 0x1c),1,3,"x509_vfy.c",0x231);
          return 1;
        }
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = sk_num(p_Var4);
    } while (iVar1 < iVar2);
  }
  *param_1 = 0;
  return 0;
}

