// functions/01a40 — 1 functions
#include "libGameKindred.h"




long FUN_01a40e14(CRYPTO_THREADID *param_1)

{
  ulong uVar1;
  
  uVar1 = CRYPTO_THREADID_hash(param_1);
  return (uVar1 >> 0xe) * 7 + uVar1 * 0x45bb + (uVar1 >> 4) * 0xfb;
}

