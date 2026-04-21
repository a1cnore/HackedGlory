// functions/01a6d — 1 functions
#include "libGameKindred.h"




void FUN_01a6db30(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if ((*(void **)((long)param_1 + 0xd0) != (void *)0x0) &&
       ((*(byte *)((long)param_1 + 0x150) & 1) != 0)) {
      CRYPTO_free(*(void **)((long)param_1 + 0xd0));
      *(undefined8 *)((long)param_1 + 0xd0) = 0;
    }
    *(undefined4 *)((long)param_1 + 0x150) = 0;
    if ((*(void **)((long)param_1 + 0xd8) != (void *)0x0) &&
       ((*(byte *)((long)param_1 + 0x154) & 1) != 0)) {
      CRYPTO_free(*(void **)((long)param_1 + 0xd8));
      *(undefined8 *)((long)param_1 + 0xd8) = 0;
    }
    *(undefined4 *)((long)param_1 + 0x154) = 0;
    if ((*(void **)((long)param_1 + 0xe0) != (void *)0x0) &&
       ((*(byte *)((long)param_1 + 0x158) & 1) != 0)) {
      CRYPTO_free(*(void **)((long)param_1 + 0xe0));
      *(undefined8 *)((long)param_1 + 0xe0) = 0;
    }
    *(undefined4 *)((long)param_1 + 0x158) = 0;
    if ((*(void **)((long)param_1 + 0xe8) != (void *)0x0) &&
       ((*(byte *)((long)param_1 + 0x15c) & 1) != 0)) {
      CRYPTO_free(*(void **)((long)param_1 + 0xe8));
      *(undefined8 *)((long)param_1 + 0xe8) = 0;
    }
    *(undefined4 *)((long)param_1 + 0x15c) = 0;
    if ((*(void **)((long)param_1 + 0xf0) != (void *)0x0) &&
       ((*(byte *)((long)param_1 + 0x160) & 1) != 0)) {
      CRYPTO_free(*(void **)((long)param_1 + 0xf0));
      *(undefined8 *)((long)param_1 + 0xf0) = 0;
    }
    *(undefined4 *)((long)param_1 + 0x160) = 0;
    if ((*(void **)((long)param_1 + 0xf8) != (void *)0x0) &&
       ((*(byte *)((long)param_1 + 0x164) & 1) != 0)) {
      CRYPTO_free(*(void **)((long)param_1 + 0xf8));
      *(undefined8 *)((long)param_1 + 0xf8) = 0;
    }
    *(undefined4 *)((long)param_1 + 0x164) = 0;
    if ((*(void **)((long)param_1 + 0x100) != (void *)0x0) &&
       ((*(byte *)((long)param_1 + 0x168) & 1) != 0)) {
      CRYPTO_free(*(void **)((long)param_1 + 0x100));
      *(undefined8 *)((long)param_1 + 0x100) = 0;
    }
    *(undefined4 *)((long)param_1 + 0x168) = 0;
    if ((*(void **)((long)param_1 + 0x108) != (void *)0x0) &&
       ((*(byte *)((long)param_1 + 0x16c) & 1) != 0)) {
      CRYPTO_free(*(void **)((long)param_1 + 0x108));
      *(undefined8 *)((long)param_1 + 0x108) = 0;
    }
    *(undefined4 *)((long)param_1 + 0x16c) = 0;
    if ((*(void **)((long)param_1 + 0x110) != (void *)0x0) &&
       ((*(byte *)((long)param_1 + 0x170) & 1) != 0)) {
      CRYPTO_free(*(void **)((long)param_1 + 0x110));
      *(undefined8 *)((long)param_1 + 0x110) = 0;
    }
    *(undefined4 *)((long)param_1 + 0x170) = 0;
    if ((*(void **)((long)param_1 + 0x118) != (void *)0x0) &&
       ((*(byte *)((long)param_1 + 0x174) & 1) != 0)) {
      CRYPTO_free(*(void **)((long)param_1 + 0x118));
      *(undefined8 *)((long)param_1 + 0x118) = 0;
    }
    *(undefined4 *)((long)param_1 + 0x174) = 0;
    if ((*(void **)((long)param_1 + 0x120) != (void *)0x0) &&
       ((*(byte *)((long)param_1 + 0x178) & 1) != 0)) {
      CRYPTO_free(*(void **)((long)param_1 + 0x120));
      *(undefined8 *)((long)param_1 + 0x120) = 0;
    }
    *(undefined4 *)((long)param_1 + 0x178) = 0;
    if ((*(void **)((long)param_1 + 0x128) != (void *)0x0) &&
       ((*(byte *)((long)param_1 + 0x17c) & 1) != 0)) {
      CRYPTO_free(*(void **)((long)param_1 + 0x128));
      *(undefined8 *)((long)param_1 + 0x128) = 0;
    }
    *(undefined4 *)((long)param_1 + 0x17c) = 0;
    if ((*(void **)((long)param_1 + 0x130) != (void *)0x0) &&
       ((*(byte *)((long)param_1 + 0x180) & 1) != 0)) {
      CRYPTO_free(*(void **)((long)param_1 + 0x130));
      *(undefined8 *)((long)param_1 + 0x130) = 0;
    }
    *(undefined4 *)((long)param_1 + 0x180) = 0;
    if ((*(void **)((long)param_1 + 0x138) != (void *)0x0) &&
       ((*(byte *)((long)param_1 + 0x184) & 1) != 0)) {
      CRYPTO_free(*(void **)((long)param_1 + 0x138));
      *(undefined8 *)((long)param_1 + 0x138) = 0;
    }
    *(undefined4 *)((long)param_1 + 0x184) = 0;
    if ((*(void **)((long)param_1 + 0x140) != (void *)0x0) &&
       ((*(byte *)((long)param_1 + 0x188) & 1) != 0)) {
      CRYPTO_free(*(void **)((long)param_1 + 0x140));
      *(undefined8 *)((long)param_1 + 0x140) = 0;
    }
    *(undefined4 *)((long)param_1 + 0x188) = 0;
    if ((*(void **)((long)param_1 + 0x148) != (void *)0x0) &&
       ((*(byte *)((long)param_1 + 0x18c) & 1) != 0)) {
      CRYPTO_free(*(void **)((long)param_1 + 0x148));
      *(undefined8 *)((long)param_1 + 0x148) = 0;
    }
    *(undefined4 *)((long)param_1 + 0x18c) = 0;
    CRYPTO_free(param_1);
    return;
  }
  return;
}

