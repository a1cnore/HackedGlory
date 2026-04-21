// functions/00d63 — 27 functions
#include "libGameKindred.h"




void FUN_00d631d8(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 local_228 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_2 + 8);
  puVar3 = (undefined8 *)*plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      local_228[uVar2 & 0xffffffff] = *puVar3;
      puVar3 = (undefined8 *)plVar4[uVar2 + 1];
      uVar2 = uVar2 + 1;
    } while (puVar3 != (undefined8 *)0x0);
  }
  FUN_00d7fc7c(0xff7fffff,*(long *)(param_1 + 0x28) + 0x28,local_228,uVar2);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d6326c(long param_1)

{
  FUN_00d7fd50(*(long *)(param_1 + 0x28) + 0x28);
  return;
}




void FUN_00d63278(long param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)(param_1 + 0x38);
  do {
    if (*(long *)(piVar1 + -2) == 0) {
LAB_00d632c0:
      *(long *)(piVar1 + -2) = param_3 + 0x28;
      *piVar1 = *(int *)(param_3 + 0x30);
      *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + 1;
      return;
    }
    if (*piVar1 != *(int *)(*(long *)(piVar1 + -2) + 8)) {
      piVar1[-2] = 0;
      piVar1[-1] = 0;
      *piVar1 = DAT_03214ce8;
      goto LAB_00d632c0;
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 4;
    if (0x1f < uVar2) {
      return;
    }
  } while( true );
}




void FUN_00d632e0(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if (param_3 != 0) {
    uVar4 = 0;
    piVar5 = (int *)(param_1 + 0x38);
    do {
      if (*(int *)(param_1 + 0x230) == 0) {
        return;
      }
      plVar2 = *(long **)(piVar5 + -2);
      if (plVar2 != (long *)0x0) {
        if (*piVar5 == (int)plVar2[1]) {
          lVar3 = (**(code **)(*plVar2 + 0x10))();
          iVar1 = DAT_03214ce8;
          if (lVar3 == param_3) {
            piVar5[-2] = 0;
            piVar5[-1] = 0;
            *piVar5 = iVar1;
            *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + -1;
          }
        }
        else {
          piVar5[-2] = 0;
          piVar5[-1] = 0;
          *piVar5 = DAT_03214ce8;
        }
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < 0x20);
  }
  return;
}




void FUN_00d63390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  float fVar2;
  float __x;
  float local_58 [2];
  float local_50;
  undefined8 local_48;
  undefined4 local_40;
  float local_38 [2];
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_48 = 0x3f8000003c23d70a;
  local_40 = 0x3c23d70a;
  FUN_00d55794(param_3,local_58,1);
  FUN_00ef00a0(1,local_58,local_38,&local_48);
  __x = (local_58[0] - local_38[0]) * (local_58[0] - local_38[0]) +
        (local_50 - local_30) * (local_50 - local_30);
  fVar2 = SQRT(__x);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(__x);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0.1 <= fVar2);
  }
  return;
}




void FUN_00d63454(undefined8 param_1,undefined8 param_2)

{
  FUN_00d63390(param_1,param_2,param_2);
  return;
}




void FUN_00d63460(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




undefined8 FUN_00d63484(undefined8 param_1)

{
  FUN_00d62cdc();
  return param_1;
}




void FUN_00d634a8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d634b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d634b4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d63520(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d63520(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d4a9ac(puVar4);
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d635f4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d63660(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d63660(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00d4abec(puVar4);
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d63734(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d637a0(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d637a0(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00e5d640(puVar4);
    *(undefined4 *)(puVar4 + 5) = 0;
    *puVar4 = &PTR_FUN_0281d408;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d63888(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d638f4(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d638f4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00e5d640(puVar4);
    *puVar4 = &PTR_FUN_02820040;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d639d8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d63a44(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d63a44(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00e5d640(puVar4);
    *(undefined4 *)(puVar4 + 6) = 0;
    puVar4[5] = 0xffffffff00000000;
    *puVar4 = &PTR_FUN_0281ff70;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d63b38(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d63ba4(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void * FUN_00d63ba4(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    memset(__s,0,0x68);
    FUN_00d4b71c(__s);
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return __s;
}




void FUN_00d63c7c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d63ce8(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d63ce8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00e5d640(puVar4);
    *puVar4 = &PTR_FUN_02820110;
    puVar4[6] = 0xffffffff;
    puVar4[5] = 0;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d63ddc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d63e48(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d63e48(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00e5d640(puVar4);
    *(undefined4 *)(puVar4 + 5) = 0;
    *puVar4 = &PTR_FUN_028201e0;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d63f30(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d63f9c(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d63f9c(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00e5d640(puVar4);
    *puVar4 = &PTR_FUN_0281c128;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}

