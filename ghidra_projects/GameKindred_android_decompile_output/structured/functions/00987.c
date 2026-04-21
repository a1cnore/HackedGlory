// functions/00987 — 32 functions
#include "libGameKindred.h"




undefined8 * FUN_0098700c(long param_1)

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
    FUN_00998c14(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009870e0(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098710c(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098710c(long param_1)

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
    FUN_00998c74(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009871e0(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098720c(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098720c(long param_1)

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
    FUN_0099bae0(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009872e0(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_0098730c(DAT_02e3efb8);
  return;
}




undefined8 * FUN_0098730c(long param_1)

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
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00d18958(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009873e4(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00987410(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00987410(long param_1)

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
    *puVar4 = &PTR_FUN_0281a640;
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009874f4(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00987520(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00987520(long param_1)

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
    FUN_00d188a8(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009875f4(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00987620(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00987620(long param_1)

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
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00999dd4(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009876f4(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00987720(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00987720(long param_1)

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
    FUN_00998d10(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009877f4(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00987820(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00987820(long param_1)

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
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00999c38(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009878f8(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00987924(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00987924(long param_1)

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
    FUN_00d2035c(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_009879f8(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00987a24(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00987a24(long param_1)

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
    FUN_00998df4(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00987af8(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00987b24(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00987b24(long param_1)

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
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00d1f530(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00987bfc(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00987c28(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00987c28(long param_1)

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
    FUN_00d1e508(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00987cfc(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00987d28(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00987d28(long param_1)

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
    FUN_0099a05c(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00987dfc(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00987e28(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00987e28(long param_1)

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
    FUN_00d20e4c(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00987efc(void)

{
  if (DAT_02e3efb8 == 0) {
    FUN_00e6a2fc();
  }
  FUN_00987f28(DAT_02e3efb8);
  return;
}




undefined8 * FUN_00987f28(long param_1)

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
    FUN_00d1e578(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c2e0) + 1;
    *(uint *)(param_1 + 0x4c2e0) = uVar1;
    if (*(uint *)(param_1 + 0x4c2e4) < uVar1) {
      *(uint *)(param_1 + 0x4c2e4) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00987ffc(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_00986770();
  FUN_009867b0(param_1);
  FUN_00986730(param_1);
  FUN_009867f0(param_1);
  uVar1 = FUN_009986b8();
  FUN_00d0aaac(param_1,uVar1);
  FUN_0099b918(uVar1,param_2);
  uVar1 = FUN_00986ddc();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d181b8(uVar1,param_3,1);
  FUN_00d0aa9c(param_1);
  FUN_009867f0(param_1);
  FUN_00986830(param_1);
  uVar1 = FUN_009986b8();
  FUN_00d0aaac(param_1,uVar1);
  FUN_0099b918(uVar1,param_2);
  FUN_00d0aa9c(param_1);
  uVar1 = FUN_00986ddc();
  FUN_00d0aaac(param_1,uVar1);
  FUN_00d181b8(uVar1,param_3,0);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  FUN_00d0aa9c(param_1);
  return;
}

