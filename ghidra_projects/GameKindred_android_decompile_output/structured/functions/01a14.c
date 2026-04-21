// functions/01a14 — 1 functions
#include "libGameKindred.h"




undefined8 FUN_01a145f0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  EVP_PKEY *b;
  long *plVar4;
  long *plVar5;
  EVP_PKEY *pkey;
  long lVar6;
  
  plVar4 = *(long **)(param_1 + 0x100);
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  plVar5 = (long *)*plVar4;
  if (*plVar5 == 0) {
    return 0;
  }
  if (plVar5[1] == 0) {
    return 0;
  }
  if (((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 200) + 0x70) >> 1 & 1) != 0) &&
     (plVar5[2] == 0)) {
    return 0;
  }
  if (((*(uint *)((long)plVar4 + 0x6c) & 0x30001) == 0) ||
     (uVar3 = tls1_check_chain(param_1,0,0,0,0xfffffffe), (int)uVar3 != 0)) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x80) + 0x3a8) + 0x18) & 6) != 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x130) + 0xa8);
      iVar2 = *(int *)(lVar6 + 8);
      pkey = *(EVP_PKEY **)(**(long **)(param_1 + 0x100) + 8);
      iVar1 = EVP_PKEY_id(pkey);
      if (iVar1 == 0x1c) {
        if ((-1 < iVar2) &&
           (b = X509_get_pubkey(*(X509 **)(lVar6 + (long)iVar2 * 0x38 + 0x18)), b != (EVP_PKEY *)0x0
           )) {
          iVar2 = EVP_PKEY_cmp_parameters(pkey,b);
          EVP_PKEY_free(b);
          if (iVar2 != 1) {
            return 0;
          }
        }
        **(ulong **)(param_1 + 0x80) = **(ulong **)(param_1 + 0x80) | 0x10;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

