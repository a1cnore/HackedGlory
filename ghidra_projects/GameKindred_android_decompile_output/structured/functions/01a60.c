// functions/01a60 — 1 functions
#include "libGameKindred.h"




bool FUN_01a601cc(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = BN_cmp(*(BIGNUM **)(*(long *)(param_1 + 0x20) + 8),
                 *(BIGNUM **)(*(long *)(param_2 + 0x20) + 8));
  bVar1 = false;
  if (iVar2 == 0) {
    iVar2 = BN_cmp(*(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x10),
                   *(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x10));
    bVar1 = false;
    if (iVar2 == 0) {
      if ((*(undefined1 **)(param_1 + 0x10) == dhx_asn1_meth) &&
         (iVar2 = BN_cmp(*(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x40),
                         *(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x40)), iVar2 != 0)) {
        return false;
      }
      iVar2 = BN_cmp(*(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x20),
                     *(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x20));
      bVar1 = iVar2 == 0;
    }
  }
  return bVar1;
}

