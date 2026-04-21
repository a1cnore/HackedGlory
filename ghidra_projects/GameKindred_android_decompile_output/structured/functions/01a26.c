// functions/01a26 — 2 functions
#include "libGameKindred.h"




void FUN_01a265d8(long param_1,undefined4 param_2,undefined8 param_3)

{
  dtls1_set_message_header
            (param_1,*(undefined8 *)(*(long *)(param_1 + 0x50) + 8),param_2,param_3,0,param_3);
  *(int *)(param_1 + 0x60) = (int)param_3 + 0xc;
  *(undefined4 *)(param_1 + 100) = 0;
  dtls1_buffer_message(param_1,0);
  return;
}




void FUN_01a267c4(long param_1)

{
  pitem *ppVar1;
  void *pvVar2;
  
  ppVar1 = pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x88) + 0x248));
  while (ppVar1 != (pitem *)0x0) {
    pvVar2 = ppVar1->data;
    if (*(void **)((long)pvVar2 + 0x10) != (void *)0x0) {
      CRYPTO_free(*(void **)((long)pvVar2 + 0x10));
      pvVar2 = ppVar1->data;
    }
    CRYPTO_free(pvVar2);
    pitem_free(ppVar1);
    ppVar1 = pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x88) + 0x248));
  }
  ppVar1 = pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x88) + 600));
  while (ppVar1 != (pitem *)0x0) {
    pvVar2 = ppVar1->data;
    if (*(void **)((long)pvVar2 + 0x10) != (void *)0x0) {
      CRYPTO_free(*(void **)((long)pvVar2 + 0x10));
      pvVar2 = ppVar1->data;
    }
    CRYPTO_free(pvVar2);
    pitem_free(ppVar1);
    ppVar1 = pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x88) + 600));
  }
  ppVar1 = pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x88) + 0x260));
  while (ppVar1 != (pitem *)0x0) {
    dtls1_hm_fragment_free(ppVar1->data);
    pitem_free(ppVar1);
    ppVar1 = pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x88) + 0x260));
  }
  ppVar1 = pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x88) + 0x268));
  while (ppVar1 != (pitem *)0x0) {
    dtls1_hm_fragment_free(ppVar1->data);
    pitem_free(ppVar1);
    ppVar1 = pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x88) + 0x268));
  }
  ppVar1 = pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x88) + 0x278));
  while (ppVar1 != (pitem *)0x0) {
    pvVar2 = ppVar1->data;
    if (*(void **)((long)pvVar2 + 0x10) != (void *)0x0) {
      CRYPTO_free(*(void **)((long)pvVar2 + 0x10));
      pvVar2 = ppVar1->data;
    }
    CRYPTO_free(pvVar2);
    pitem_free(ppVar1);
    ppVar1 = pqueue_pop(*(pqueue *)(*(long *)(param_1 + 0x88) + 0x278));
  }
  return;
}

