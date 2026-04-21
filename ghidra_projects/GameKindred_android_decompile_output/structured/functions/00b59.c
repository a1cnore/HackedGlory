// functions/00b59 — 1 functions
#include "libGameKindred.h"




void FUN_00b59fe4(long param_1,uint param_2)

{
  uint uVar1;
  
  *(uint *)(param_1 + 0x2d2c) =
       *(uint *)(param_1 + 0x2d2c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x2d2c) & 3 | (~param_2 & 1) << 2;
  *(uint *)(param_1 + 0x7de4) =
       *(uint *)(param_1 + 0x7de4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x7de4) & 3 | (param_2 & 1) << 2;
  uVar1 = FUN_0093dbe8();
  *(uint *)(param_1 + 0x25644) =
       *(uint *)(param_1 + 0x25644) & 0xfffffff8 |
       *(uint *)(param_1 + 0x25644) & 3 | (param_2 & (uVar1 ^ 0xffffffff) & 1) << 2;
  return;
}

