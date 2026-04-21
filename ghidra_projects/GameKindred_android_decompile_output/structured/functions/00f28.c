// functions/00f28 — 3 functions
#include "libGameKindred.h"




undefined4 FUN_00f28e28(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x38);
  __dest = *(void **)(lVar4 + 0x40);
  if (__dest == (void *)0x0) {
    __dest = (void *)(**(code **)(param_1 + 0x40))
                               (*(undefined8 *)(param_1 + 0x50),
                                1 << (ulong)(*(uint *)(lVar4 + 0x30) & 0x1f),1);
    *(void **)(lVar4 + 0x40) = __dest;
    if (__dest == (void *)0x0) {
      return 1;
    }
  }
  uVar3 = *(uint *)(lVar4 + 0x34);
  if (uVar3 == 0) {
    *(undefined8 *)(lVar4 + 0x38) = 0;
    uVar3 = 1 << (ulong)(*(uint *)(lVar4 + 0x30) & 0x1f);
    *(uint *)(lVar4 + 0x34) = uVar3;
  }
  if (param_3 < uVar3) {
    uVar3 = uVar3 - *(uint *)(lVar4 + 0x3c);
    uVar1 = param_3;
    if (uVar3 <= param_3) {
      uVar1 = uVar3;
    }
    memcpy((void *)((long)__dest + (ulong)*(uint *)(lVar4 + 0x3c)),
           (void *)(param_2 - (ulong)param_3),(ulong)uVar1);
    param_3 = param_3 - uVar1;
    if (param_3 == 0) {
      uVar3 = *(int *)(lVar4 + 0x3c) + uVar1;
      uVar2 = 0;
      if (uVar3 != *(uint *)(lVar4 + 0x34)) {
        uVar2 = uVar3;
      }
      *(uint *)(lVar4 + 0x3c) = uVar2;
      if (*(uint *)(lVar4 + 0x38) < *(uint *)(lVar4 + 0x34)) {
        *(uint *)(lVar4 + 0x38) = *(uint *)(lVar4 + 0x38) + uVar1;
      }
    }
    else {
      memcpy(*(void **)(lVar4 + 0x40),(void *)(param_2 - (ulong)param_3),(ulong)param_3);
      *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar4 + 0x34);
      *(uint *)(lVar4 + 0x3c) = param_3;
    }
  }
  else {
    memcpy(__dest,(void *)(param_2 - (ulong)uVar3),(ulong)uVar3);
    *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(lVar4 + 0x34);
    *(undefined4 *)(lVar4 + 0x3c) = 0;
  }
  return 0;
}




undefined8 FUN_00f28f48(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (((param_1 == 0) || (lVar2 = *(long *)(param_1 + 0x38), lVar2 == 0)) ||
     (pcVar3 = *(code **)(param_1 + 0x48), pcVar3 == (code *)0x0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    if (*(long *)(lVar2 + 0x40) != 0) {
      (*pcVar3)(*(undefined8 *)(param_1 + 0x50),*(long *)(lVar2 + 0x40));
      pcVar3 = *(code **)(param_1 + 0x48);
      lVar2 = *(long *)(param_1 + 0x38);
    }
    (*pcVar3)(*(undefined8 *)(param_1 + 0x50),lVar2);
    uVar1 = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return uVar1;
}




undefined8 FUN_00f28fac(long param_1,void *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_1 == 0) || (lVar2 = *(long *)(param_1 + 0x38), lVar2 == 0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    if ((param_2 != (void *)0x0) && (*(int *)(lVar2 + 0x38) != 0)) {
      memcpy(param_2,(void *)(*(long *)(lVar2 + 0x40) + (ulong)*(uint *)(lVar2 + 0x3c)),
             (ulong)(*(int *)(lVar2 + 0x38) - *(uint *)(lVar2 + 0x3c)));
      memcpy((void *)((long)param_2 +
                     ((ulong)*(uint *)(lVar2 + 0x38) - (ulong)*(uint *)(lVar2 + 0x3c))),
             *(void **)(lVar2 + 0x40),(ulong)*(uint *)(lVar2 + 0x3c));
    }
    if (param_3 == (undefined4 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      *param_3 = *(undefined4 *)(lVar2 + 0x38);
    }
  }
  return uVar1;
}

