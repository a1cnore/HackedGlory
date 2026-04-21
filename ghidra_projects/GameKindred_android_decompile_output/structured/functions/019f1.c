// functions/019f1 — 1 functions
#include "libGameKindred.h"




void FUN_019f1e60(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    do {
      plVar2 = (long *)*plVar1;
      if (*(uint *)(plVar1 + 1) < 2) {
        (*(code *)PTR_free_02bf74b0)(plVar1[2]);
      }
      (*(code *)PTR_free_02bf74b0)(plVar1);
      plVar1 = plVar2;
    } while (plVar2 != (long *)0x0);
    *param_1 = 0;
  }
  return;
}

