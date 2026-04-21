// functions/008f5 — 8 functions
#include "libGameKindred.h"




/* WARNING: Type propagation algorithm not settling */

void FUN_008f5b74(void)

{
  if ((DAT_03219528 & 1) != 0) {
    operator_delete(DAT_03219538);
  }
  if ((DAT_03219510 & 1) != 0) {
    operator_delete(DAT_03219520);
  }
  if ((DAT_032194f8 & 1) != 0) {
    operator_delete(DAT_03219508);
  }
  if ((DAT_032194e0 & 1) != 0) {
    operator_delete(DAT_032194f0);
  }
  if ((DAT_032194c8 & 1) != 0) {
    operator_delete(DAT_032194d8);
  }
  if ((DAT_032194b0 & 1) != 0) {
    operator_delete(DAT_032194c0);
  }
  if ((DAT_03219498 & 1) != 0) {
    operator_delete(DAT_032194a8);
  }
  if ((DAT_03219480 & 1) != 0) {
    operator_delete(DAT_03219490);
  }
  if ((DAT_03219468 & 1) != 0) {
    operator_delete(DAT_03219478);
  }
  if ((DAT_03219450 & 1) != 0) {
    operator_delete(DAT_03219460);
  }
  if ((DAT_03219438 & 1) != 0) {
    operator_delete(DAT_03219448);
  }
  if ((DAT_03219420 & 1) != 0) {
    operator_delete(DAT_03219430);
  }
  if ((DAT_03219408 & 1) != 0) {
    operator_delete(DAT_03219418);
  }
  if ((DAT_032193f0 & 1) == 0) {
    return;
  }
  operator_delete(DAT_03219400);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_008f5ce4(void)

{
  if ((DAT_03219680 & 1) != 0) {
    operator_delete(DAT_03219690);
  }
  if ((DAT_03219668 & 1) != 0) {
    operator_delete(DAT_03219678);
  }
  if ((DAT_03219650 & 1) != 0) {
    operator_delete(DAT_03219660);
  }
  if ((DAT_03219638 & 1) != 0) {
    operator_delete(DAT_03219648);
  }
  if ((DAT_03219620 & 1) != 0) {
    operator_delete(DAT_03219630);
  }
  if ((DAT_03219608 & 1) != 0) {
    operator_delete(DAT_03219618);
  }
  if ((DAT_032195f0 & 1) != 0) {
    operator_delete(DAT_03219600);
  }
  if ((DAT_032195d8 & 1) != 0) {
    operator_delete(DAT_032195e8);
  }
  if ((DAT_032195c0 & 1) != 0) {
    operator_delete(DAT_032195d0);
  }
  if ((DAT_032195a8 & 1) != 0) {
    operator_delete(DAT_032195b8);
  }
  if ((DAT_03219590 & 1) != 0) {
    operator_delete(DAT_032195a0);
  }
  if ((DAT_03219578 & 1) != 0) {
    operator_delete(DAT_03219588);
  }
  if ((DAT_03219560 & 1) != 0) {
    operator_delete(DAT_03219570);
  }
  if ((DAT_03219548 & 1) == 0) {
    return;
  }
  operator_delete(DAT_03219558);
  return;
}




void FUN_008f5e54(void)

{
  long lVar1;
  
  lVar1 = 0x240;
  do {
    if ((*(byte *)(lVar1 + 0x3219688) & 1) != 0) {
      operator_delete(*(void **)(&DAT_03219698 + lVar1));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  return;
}




void FUN_008f5e94(void)

{
  long lVar1;
  
  lVar1 = 0x240;
  do {
    if ((*(byte *)(lVar1 + 0x32198d0) & 1) != 0) {
      operator_delete(*(void **)(&DAT_032198e0 + lVar1));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != 0);
  return;
}




void FUN_008f5ed4(void)

{
  if ((DAT_03219b48 & 1) != 0) {
    operator_delete(DAT_03219b58);
  }
  if ((DAT_03219b30 & 1) == 0) {
    return;
  }
  operator_delete(DAT_03219b40);
  return;
}




void FUN_008f5f20(void)

{
  if ((DAT_03219b80 & 1) != 0) {
    operator_delete(DAT_03219b90);
  }
  if ((DAT_03219b68 & 1) == 0) {
    return;
  }
  operator_delete(DAT_03219b78);
  return;
}




void FUN_008f5f78(void)

{
  return;
}




void FUN_008f5fa8(void)

{
  long lVar1;
  long *plVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  plVar2 = (long *)FUN_00e73e4c();
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}

