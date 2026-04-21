// functions/0089b — 1 functions
#include "libGameKindred.h"




void FUN_0089be9c(void)

{
  long lVar1;
  
  lVar1 = 0x400;
  do {
    if ((*(byte *)(lVar1 + 0x2c7e700) & 1) != 0) {
      operator_delete(*(void **)(lVar1 + 0x2c7e710));
    }
    if ((*(byte *)(lVar1 + 0x2c7e6e8) & 1) != 0) {
      operator_delete(*(void **)(lVar1 + 0x2c7e6f8));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != 0);
  return;
}

