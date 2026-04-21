// functions/008b4 — 3 functions
#include "libGameKindred.h"




void FUN_008b49cc(void)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (((&DAT_0313d450)[lVar1] & 1) != 0) {
      operator_delete(*(void **)((long)&DAT_0313d460 + lVar1));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0xf0);
  return;
}




void FUN_008b4a10(void)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (((&DAT_0313d548)[lVar1] & 1) != 0) {
      operator_delete(*(void **)((long)&DAT_0313d558 + lVar1));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0xf0);
  return;
}




void FUN_008b4a54(void)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (((&DAT_0313d640)[lVar1] & 1) != 0) {
      operator_delete(*(void **)((long)&DAT_0313d650 + lVar1));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0xf0);
  return;
}

