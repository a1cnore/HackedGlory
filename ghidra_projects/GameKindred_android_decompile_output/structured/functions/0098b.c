// functions/0098b — 31 functions
#include "libGameKindred.h"




undefined8 * FUN_0098b024(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_FUN_02816b38;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0098b108(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098b134(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098b134(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0dbc0(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0098b208(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098b234(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098b234(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0dc88(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0098b308(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098b334(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098b334(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0de54(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0098b408(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098b434(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098b434(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0e148(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0098b508(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098b534(DAT_02e3efb8);
  return;
}




void * FUN_0098b534(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  void *__s;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    __s = (void *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    __s = (void *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    memset(__s,0,0x50);
    FUN_00d0e24c(__s);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return __s;
}




void FUN_0098b60c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098b638(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098b638(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_FUN_02816bc0;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0098b71c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098b748(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098b748(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00d0e788(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0098b81c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098b848(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098b848(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_FUN_02816de0;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0098b92c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098b958(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098b958(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0ed08(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0098ba2c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098ba58(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098ba58(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_FUN_02816f78;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0098bb3c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098bb68(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098bb68(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_FUN_02816c48;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0098bc4c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098bc78(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098bc78(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_FUN_02816cd0;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0098bd5c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098bd88(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098bd88(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_FUN_02816d58;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0098be6c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098be98(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098be98(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_FUN_02817000;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_0098bf7c(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098bfa8(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098bfa8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c2d0);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x4c2d2)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c2d0) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c2d4) = *(int *)(param_1 + 0x4c2d4) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d0aac4(puVar4);
    *puVar4 = &PTR_FUN_02817088;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}

