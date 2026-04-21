// functions/01a33 — 1 functions
#include "libGameKindred.h"




void FUN_01a33208(void)

{
  undefined4 *ptr;
  COMP_METHOD *pCVar1;
  
  CRYPTO_lock(5,0x10,"ssl_ciph.c",0x1db);
  if (DAT_03215970 != (_STACK *)0x0) {
    CRYPTO_lock(6,0x10,"ssl_ciph.c",0x1fb);
    return;
  }
  CRYPTO_lock(6,0x10,"ssl_ciph.c",0x1dd);
  CRYPTO_lock(9,0x10,"ssl_ciph.c",0x1de);
  if (DAT_03215970 == (_STACK *)0x0) {
    CRYPTO_mem_ctrl(3);
    DAT_03215970 = sk_new((cmp *)&LAB_01a3535c);
    if (DAT_03215970 != (_STACK *)0x0) {
      ptr = CRYPTO_malloc(0x18,"ssl_ciph.c",0x1e7);
      if (ptr != (undefined4 *)0x0) {
        pCVar1 = COMP_zlib();
        *(COMP_METHOD **)(ptr + 4) = pCVar1;
        if ((pCVar1 == (COMP_METHOD *)0x0) || (pCVar1->type != 0)) {
          *ptr = 1;
          *(char **)(ptr + 2) = pCVar1->name;
          sk_push(DAT_03215970,ptr);
        }
        else {
          CRYPTO_free(ptr);
        }
      }
      sk_sort(DAT_03215970);
    }
    CRYPTO_mem_ctrl(2);
  }
  CRYPTO_lock(10,0x10,"ssl_ciph.c",0x1f9);
  return;
}

