// functions/10012 — 403 functions
#include "GameKindred.h"




void thunk_FUN_100121ac0(void)

{
  undefined1 auStack_18 [8];
  
  auStack_18[0] = 0;
  FUN_100121ae8(auStack_18,0);
  return;
}




void FUN_100120040(void)

{
  if ((DAT_10184db00 & 1) == 0) {
    DAT_10184daf8 = DAT_101872e38;
    DAT_10184db00 = 1;
  }
  return;
}




void FUN_10012006c(void)

{
  if ((DAT_10184e118 & 1) == 0) {
    DAT_10184e110 = DAT_101872e38;
    DAT_10184e118 = 1;
  }
  return;
}




void FUN_100120098(void)

{
  if ((DAT_10184dea8 & 1) == 0) {
    DAT_10184dea0 = DAT_101872e38;
    DAT_10184dea8 = 1;
  }
  return;
}




void FUN_1001200c4(void)

{
  if ((DAT_10184dd70 & 1) == 0) {
    DAT_10184dd68 = DAT_101872e38;
    DAT_10184dd70 = 1;
  }
  return;
}




void FUN_1001200f0(void)

{
  if ((DAT_10184dab0 & 1) == 0) {
    DAT_10184daa8 = DAT_101872e38;
    DAT_10184dab0 = 1;
  }
  return;
}




void FUN_10012011c(void)

{
  if ((DAT_10184e3c0 & 1) == 0) {
    DAT_10184e3b8 = DAT_101872e38;
    DAT_10184e3c0 = 1;
  }
  return;
}




void FUN_100120148(void)

{
  DAT_101df9e70 = 0xff;
  DAT_101df9e72 = 0xffff;
  DAT_101df9e74 = 0xffff;
  FUN_10001549c(&DAT_101df9e78,"test007");
  ___cxa_atexit(FUN_1000e6204,&DAT_101df9e78,0x100000000);
  FUN_10001549c(&DAT_101df9e90,"replayManifest.txt");
  ___cxa_atexit(FUN_1000e6204,&DAT_101df9e90,0x100000000);
  FUN_10034d074(&DAT_101df9ea8);
  ___cxa_atexit(FUN_10034d0c0,&DAT_101df9ea8,0x100000000);
  DAT_101e3a018 = 0;
  DAT_101e3a020 = 0;
  ___cxa_atexit(FUN_10011cf9c,&DAT_101e3a018,0x100000000);
  DAT_101e3a028 = 0;
  DAT_101e3a030 = 0;
  ___cxa_atexit(FUN_10011cfcc,&DAT_101e3a028,0x100000000);
  DAT_101e3a048 = 0;
  DAT_101e3a040 = 0;
  DAT_101e3a038 = &DAT_101e3a040;
  ___cxa_atexit(FUN_10011cffc,&DAT_101e3a038,0x100000000);
  return;
}




undefined8 FUN_10012026c(void)

{
  return 0;
}




undefined8 FUN_100120274(void)

{
  return 0;
}




void FUN_10012027c(undefined1 param_1)

{
  undefined1 local_18 [8];
  
  local_18[0] = param_1;
  FUN_1001202a4(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1001202a4(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0x7b040300;
  local_3a = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 5;
  }
  else {
    iVar2 = FUN_100346764(3);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3c,3,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100120384(void)

{
  undefined1 local_18 [8];
  
  local_18[0] = 0;
  FUN_1001203ac(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1001203ac(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0x55040300;
  local_3a = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 5;
  }
  else {
    iVar2 = FUN_100346764(3);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3c,3,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012048c(void)

{
  undefined1 local_18 [8];
  
  local_18[0] = 0;
  FUN_1001204b4(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1001204b4(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0x56040300;
  local_3a = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 5;
  }
  else {
    iVar2 = FUN_100346764(3);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3c,3,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100120594(void)

{
  undefined1 local_18 [8];
  
  local_18[0] = 0;
  FUN_1001205bc(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1001205bc(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0x58040300;
  local_3a = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 5;
  }
  else {
    iVar2 = FUN_100346764(3);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3c,3,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012069c(uint param_1)

{
  uint uVar1;
  uint local_18 [2];
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_18[0] = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_1001206c8(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1001206c8(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40;
  undefined1 auStack_3e [2];
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_3c = *param_1;
  _local_40 = 0x5d040600;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_40;
    uVar4 = 8;
  }
  else {
    iVar2 = FUN_100346764(6);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3e,6,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1001207a4(uint param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint local_28;
  uint local_24;
  
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_28 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar1 = FUN_1004d2524(param_2);
  uVar2 = FUN_100015208(param_2,uVar1,0x12345678);
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  local_24 = uVar2 >> 0x10 | uVar2 << 0x10;
  FUN_100120800(&local_28,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100120800(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0x5e040a00;
  local_40 = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = FUN_100346764(10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    FUN_100346794(auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1001208e0(undefined8 param_1)

{
  uint uVar1;
  uint local_20 [2];
  uint local_18 [2];
  
  FUN_10034cb1c(local_20,param_1);
  uVar1 = (local_20[0] & 0xff00ff00) >> 8 | (local_20[0] & 0xff00ff) << 8;
  local_18[0] = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_10012091c(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10012091c(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40;
  undefined1 auStack_3e [2];
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_3c = *param_1;
  _local_40 = 0x5f040600;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_40;
    uVar4 = 8;
  }
  else {
    iVar2 = FUN_100346764(6);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3e,6,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1001209f8(undefined1 param_1)

{
  undefined1 local_18 [8];
  
  local_18[0] = param_1;
  FUN_100120a20(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100120a20(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0x61040300;
  local_3a = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 5;
  }
  else {
    iVar2 = FUN_100346764(3);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3c,3,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100120b00(undefined1 param_1)

{
  undefined1 local_18 [8];
  
  local_18[0] = param_1;
  FUN_100120b28(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100120b28(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0x62040300;
  local_3a = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 5;
  }
  else {
    iVar2 = FUN_100346764(3);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3c,3,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100120c08(void)

{
  undefined1 local_18 [8];
  
  local_18[0] = 0;
  FUN_100120c30(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100120c30(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0x63040300;
  local_3a = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 5;
  }
  else {
    iVar2 = FUN_100346764(3);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3c,3,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100120d10(uint param_1)

{
  uint uVar1;
  uint local_18 [2];
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_18[0] = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_100120d3c(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100120d3c(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40;
  undefined1 auStack_3e [2];
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_3c = *param_1;
  _local_40 = 0x64040600;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_40;
    uVar4 = 8;
  }
  else {
    iVar2 = FUN_100346764(6);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3e,6,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100120e18(void)

{
  undefined1 local_18 [8];
  
  local_18[0] = 0;
  FUN_100120e40(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100120e40(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0x65040300;
  local_3a = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 5;
  }
  else {
    iVar2 = FUN_100346764(3);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3c,3,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100120f20(undefined4 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = param_1;
  FUN_100120f48(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100120f48(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40;
  undefined1 auStack_3e [2];
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_3c = *param_1;
  _local_40 = 0x66040600;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_40;
    uVar4 = 8;
  }
  else {
    iVar2 = FUN_100346764(6);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3e,6,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100121024(undefined1 param_1,undefined1 param_2)

{
  undefined1 local_12;
  undefined1 local_11;
  
  local_12 = param_1;
  local_11 = param_2;
  FUN_100121050(&local_12,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100121050(undefined2 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined2 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0x67040400;
  local_3a = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 6;
  }
  else {
    iVar2 = FUN_100346764(4);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3c,4,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100121130(undefined1 param_1,undefined1 param_2)

{
  undefined1 local_12;
  undefined1 local_11;
  
  local_12 = param_1;
  local_11 = param_2;
  FUN_10012115c(&local_12,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10012115c(undefined2 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined2 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0x68040400;
  local_3a = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 6;
  }
  else {
    iVar2 = FUN_100346764(4);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3c,4,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012123c(void)

{
  undefined1 local_18 [8];
  
  local_18[0] = 0;
  FUN_100121264(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100121264(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0x6b040300;
  local_3a = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 5;
  }
  else {
    iVar2 = FUN_100346764(3);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3c,3,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100121344(uint param_1,undefined1 param_2)

{
  uint uVar1;
  uint local_18;
  undefined1 local_14;
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  local_14 = param_2;
  FUN_100121374(&local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100121374(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_42;
  undefined1 auStack_40 [2];
  undefined4 local_3e;
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_3e = *param_1;
  _local_42 = 0x24040700;
  local_3a = *(undefined1 *)(param_1 + 1);
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_42;
    uVar4 = 9;
  }
  else {
    iVar2 = FUN_100346764(7);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    FUN_100346794(auStack_40,7,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012145c(uint param_1,uint param_2)

{
  uint uVar1;
  uint local_18;
  uint uStack_14;
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_100121494(&local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100121494(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0xf4030a00;
  local_40 = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = FUN_100346764(10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    FUN_100346794(auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100121574(uint param_1,uint param_2)

{
  uint uVar1;
  uint local_18;
  uint uStack_14;
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_1001215ac(&local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1001215ac(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0xf5030a00;
  local_40 = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = FUN_100346764(10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    FUN_100346794(auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012168c(uint param_1,uint param_2)

{
  uint uVar1;
  uint local_18;
  uint uStack_14;
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_1001216c4(&local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1001216c4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_44 = 0xf6030a00;
  local_40 = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_44;
    uVar4 = 0xc;
  }
  else {
    iVar2 = FUN_100346764(10);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    FUN_100346794(auStack_42,10,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1001217a4(undefined1 param_1)

{
  undefined1 local_18 [8];
  
  local_18[0] = param_1;
  FUN_1001217cc(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1001217cc(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0x85040300;
  local_3a = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 5;
  }
  else {
    iVar2 = FUN_100346764(3);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3c,3,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1001218ac(undefined1 param_1)

{
  undefined1 local_18 [8];
  
  local_18[0] = param_1;
  FUN_1001218d4(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1001218d4(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0x36040300;
  local_3a = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 5;
  }
  else {
    iVar2 = FUN_100346764(3);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3c,3,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1001219b4(undefined1 param_1,undefined1 param_2)

{
  undefined1 local_12;
  undefined1 local_11;
  
  local_12 = param_1;
  local_11 = param_2;
  FUN_1001219e0(&local_12,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1001219e0(undefined2 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined2 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0x14040400;
  local_3a = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 6;
  }
  else {
    iVar2 = FUN_100346764(4);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3c,4,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100121ac0(void)

{
  undefined1 local_18 [8];
  
  local_18[0] = 0;
  FUN_100121ae8(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100121ae8(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0x6e040300;
  local_3a = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 5;
  }
  else {
    iVar2 = FUN_100346764(3);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3c,3,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100121bc8(void)

{
  undefined1 local_18 [8];
  
  local_18[0] = 0;
  FUN_100121bf0(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100121bf0(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_3e;
  undefined1 auStack_3c [2];
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  _local_3e = 0x6d040300;
  local_3a = *param_1;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_3e;
    uVar4 = 5;
  }
  else {
    iVar2 = FUN_100346764(3);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3c,3,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100121cd0(void)

{
  uint uVar1;
  uint local_18;
  undefined1 local_14;
  
  uVar1 = FUN_10034ee90();
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  local_18 = uVar1 >> 0x10 | uVar1 << 0x10;
  local_14 = FUN_10031615c(0x1c);
  FUN_100121d0c(&local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100121d0c(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_42;
  undefined1 auStack_40 [2];
  undefined4 local_3e;
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_3e = *param_1;
  _local_42 = 0x71040700;
  local_3a = *(undefined1 *)(param_1 + 1);
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_42;
    uVar4 = 9;
  }
  else {
    iVar2 = FUN_100346764(7);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_48 = 0;
    FUN_100346794(auStack_40,7,auStack_4e + lVar1,&local_48);
    *puVar3 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100121df4(void)

{
  return 0;
}




undefined8 FUN_100121dfc(void)

{
  return 0;
}




undefined8 FUN_100121e04(void)

{
  return 0;
}




void FUN_100121e0c(uint param_1)

{
  uint uVar1;
  uint local_18 [2];
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_18[0] = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_100121e38(local_18,0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100121e38(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40;
  undefined1 auStack_3e [2];
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_3c = *param_1;
  _local_40 = 0x75040600;
  iVar2 = FUN_100346750();
  if ((iVar2 == 0) || ((param_2 & 1) != 0)) {
    puVar3 = &local_40;
    uVar4 = 8;
  }
  else {
    iVar2 = FUN_100346764(6);
    uVar4 = (ulong)(iVar2 + 2);
    lVar1 = -(uVar4 + 0xf & 0x1fffffff0);
    puVar3 = (ushort *)((long)&uStack_50 + lVar1);
    local_44 = 0;
    FUN_100346794(auStack_3e,6,auStack_4e + lVar1,&local_44);
    *puVar3 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  FUN_100147938(puVar3,uVar4);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100121f14(void)

{
  return 0;
}




undefined8 FUN_100121f1c(void)

{
  return 0;
}




undefined8 FUN_100121f24(undefined1 *param_1)

{
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 auStack_38 [24];
  undefined1 local_20;
  
  local_48 = *(undefined4 *)(param_1 + 1);
  local_40 = *(undefined4 *)(param_1 + 5);
  local_44 = 0;
  FUN_1003dcd9c(auStack_38,*param_1,&local_48);
  local_20 = 1;
  FUN_100345498(auStack_38);
  return 1;
}




undefined8 FUN_100121f74(undefined1 *param_1)

{
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_40 [24];
  undefined1 local_28;
  
  local_50 = *(undefined8 *)(param_1 + 1);
  local_48 = *(undefined4 *)(param_1 + 9);
  FUN_1003dd430(auStack_40,*param_1,&local_50,param_1[0xd] == '\x01');
  local_28 = 1;
  FUN_100345498(auStack_40);
  return 1;
}




undefined8 FUN_100121fcc(undefined4 *param_1)

{
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_40 [24];
  undefined1 local_28;
  
  local_50 = *(undefined8 *)(param_1 + 1);
  local_48 = param_1[3];
  FUN_1003dedc0(auStack_40,*param_1,&local_50,*(char *)(param_1 + 4) == '\x01');
  local_28 = 1;
  FUN_100345498(auStack_40);
  return 1;
}




undefined8 FUN_100122024(undefined1 *param_1)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [24];
  undefined1 local_28;
  
  uStack_48 = *(undefined8 *)(param_1 + 1);
  local_50 = *(undefined8 *)(param_1 + 9);
  FUN_100011918(auStack_40,*param_1,&uStack_48,&local_50);
  local_28 = 1;
  FUN_100345498(auStack_40);
  return 1;
}




undefined8 FUN_100122070(undefined4 *param_1)

{
  undefined8 local_58;
  undefined4 local_50;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  
  local_58 = *(undefined8 *)(param_1 + 2);
  local_50 = param_1[4];
  FUN_1003dcfe4(auStack_48,*param_1,param_1[1],&local_58,0);
  local_30 = 1;
  FUN_100345498(auStack_48);
  return 1;
}




undefined8 FUN_1001220c0(undefined1 *param_1)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [24];
  undefined1 local_28;
  
  uStack_48 = *(undefined8 *)(param_1 + 1);
  local_50 = *(undefined8 *)(param_1 + 9);
  FUN_100010aac(auStack_40,*param_1,&uStack_48,&local_50);
  local_28 = 1;
  FUN_100345498(auStack_40);
  return 1;
}




undefined8 FUN_10012210c(undefined1 *param_1)

{
  undefined8 local_40;
  undefined1 auStack_38 [24];
  undefined1 local_20;
  
  local_40 = *(undefined8 *)(param_1 + 1);
  FUN_100011ebc(auStack_38,*param_1,&local_40,param_1[9] != '\0');
  local_20 = 1;
  FUN_100345498(auStack_38);
  return 1;
}




undefined8 FUN_10012215c(undefined4 *param_1)

{
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_40 [24];
  undefined1 local_28;
  
  local_50 = *(undefined8 *)(param_1 + 1);
  local_48 = param_1[3];
  FUN_1003d95ac(auStack_40,*param_1,&local_50);
  local_28 = 1;
  FUN_100345498(auStack_40);
  return 1;
}




undefined8 FUN_1001221a8(undefined4 *param_1)

{
  undefined8 local_58;
  undefined4 local_50;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  
  local_58 = *(undefined8 *)(param_1 + 2);
  local_50 = param_1[4];
  FUN_1003d56b4(param_1[1],auStack_48,*param_1,&local_58,*(char *)(param_1 + 5) != '\0');
  local_30 = 1;
  FUN_100345498(auStack_48);
  return 1;
}




undefined8 FUN_100122204(undefined1 *param_1)

{
  undefined8 local_50;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  
  local_50 = *(undefined8 *)(param_1 + 1);
  FUN_10001045c(*(undefined4 *)(param_1 + 9),auStack_48,*param_1,&local_50,param_1[0xd],
                param_1[0xe] != '\0');
  local_30 = 1;
  FUN_100345498(auStack_48);
  return 1;
}




undefined8 FUN_10012225c(undefined1 *param_1)

{
  undefined1 auStack_48 [24];
  undefined1 local_30;
  
  FUN_100010588(*(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5),
                *(undefined4 *)(param_1 + 9),*(undefined4 *)(param_1 + 0xd),
                *(undefined4 *)(param_1 + 0x11),auStack_48,*param_1);
  local_30 = 1;
  FUN_100345498(auStack_48);
  return 1;
}




undefined8 FUN_1001222a8(undefined4 *param_1)

{
  undefined8 local_70;
  undefined4 local_68;
  undefined1 auStack_60 [24];
  undefined1 local_48;
  
  local_70 = *(undefined8 *)(param_1 + 5);
  local_68 = param_1[7];
  FUN_1003d5510(param_1[1],param_1[2],auStack_60,*param_1,param_1[3],&local_70);
  FUN_1003d5544(auStack_60,param_1[4]);
  local_48 = 1;
  FUN_100345498(auStack_60);
  return 1;
}




undefined8 FUN_100122314(undefined4 *param_1)

{
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_40 [24];
  undefined1 local_28;
  
  local_50 = *(undefined8 *)(param_1 + 1);
  local_48 = param_1[3];
  FUN_1003d5c8c(auStack_40,*param_1,&local_50);
  local_28 = 1;
  FUN_100345498(auStack_40);
  return 1;
}




undefined8 FUN_100122360(undefined4 *param_1)

{
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_40 [24];
  undefined1 local_28;
  
  local_50 = *(undefined8 *)(param_1 + 1);
  local_48 = param_1[3];
  FUN_1003df07c(auStack_40,*param_1,&local_50,*(char *)(param_1 + 4) != '\0');
  local_28 = 1;
  FUN_100345498(auStack_40);
  return 1;
}




undefined8 FUN_1001223b8(undefined1 *param_1)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [24];
  undefined1 local_28;
  
  uStack_48 = *(undefined8 *)(param_1 + 1);
  local_50 = *(undefined8 *)(param_1 + 9);
  FUN_100012314(auStack_40,*param_1,&uStack_48,&local_50);
  local_28 = 1;
  FUN_100345498(auStack_40);
  return 1;
}




undefined8 FUN_100122404(undefined4 *param_1)

{
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_40 [24];
  undefined1 local_28;
  
  local_50 = param_1[1];
  local_48 = param_1[2];
  local_4c = 0;
  FUN_1003dd1b4(auStack_40,*param_1,&local_50);
  local_28 = 1;
  FUN_100345498(auStack_40);
  return 1;
}




undefined8 FUN_100122450(undefined4 *param_1)

{
  undefined1 auStack_48 [24];
  undefined1 local_30;
  
  if (param_1[1] == -1) {
    FUN_1003d3610(auStack_48,*param_1,*(undefined1 *)(param_1 + 2));
  }
  else {
    FUN_1003c132c(auStack_48,*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  }
  local_30 = 1;
  FUN_100345498(auStack_48);
  return 1;
}




undefined8 FUN_1001224b8(undefined4 *param_1)

{
  undefined8 local_58;
  undefined4 local_50;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  
  local_58 = *(undefined8 *)(param_1 + 1);
  local_50 = param_1[3];
  FUN_1003c11bc(auStack_48,*param_1,&local_58,*(undefined1 *)(param_1 + 4));
  local_30 = 1;
  FUN_100345498(auStack_48);
  return 1;
}




undefined8 FUN_100122508(undefined4 *param_1)

{
  undefined8 local_58;
  undefined4 local_50;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  
  local_58 = *(undefined8 *)(param_1 + 2);
  local_50 = param_1[4];
  FUN_1003d3644(auStack_48,*param_1,param_1[1],&local_58,*(undefined1 *)(param_1 + 5));
  local_30 = 1;
  FUN_100345498(auStack_48);
  return 1;
}




undefined8 FUN_100122558(undefined4 *param_1)

{
  undefined1 auStack_58 [24];
  undefined1 local_40;
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = *(undefined8 *)(param_1 + 2);
  local_18 = param_1[4];
  FUN_100010e6c(param_1[5],auStack_58,*param_1,param_1[1],&local_20);
  local_40 = 1;
  FUN_100345498(auStack_58);
  return 1;
}




undefined8 FUN_1001225a4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 local_730;
  undefined4 local_728;
  undefined8 local_720;
  undefined4 local_718;
  undefined4 local_710 [2];
  undefined4 local_708 [15];
  undefined4 local_6cc;
  undefined4 local_6c0;
  undefined4 local_688;
  undefined4 local_668;
  undefined4 local_654;
  undefined4 local_618;
  undefined4 local_60c;
  undefined4 local_5a0;
  undefined4 local_564;
  undefined4 local_558;
  undefined4 local_438;
  undefined4 local_428;
  ulong local_3f8;
  undefined1 auStack_3f0 [24];
  undefined1 local_3d8;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1003c5e30(local_708);
  if (*(char *)((long)param_1 + 0x75) == '\0') {
    local_654 = param_1[0xb];
    local_5a0 = param_1[0xc];
    local_6c0 = param_1[0xd];
    local_60c = param_1[0xe];
    local_558 = param_1[0xf];
    local_6cc = param_1[0x10];
    local_438 = param_1[9];
    local_708[0] = param_1[10];
    local_618 = param_1[0x11];
    local_564 = param_1[0x12];
    local_428 = param_1[0x13];
    local_688 = param_1[0x14];
    local_668 = param_1[0x15];
    local_3f8 = local_3f8 | 0x10100048001;
  }
  uVar1 = *param_1;
  FUN_1003ba954(local_710,param_1[1]);
  local_720 = *(undefined8 *)(param_1 + 3);
  local_718 = param_1[5];
  local_730 = *(undefined8 *)(param_1 + 6);
  local_728 = param_1[8];
  FUN_1003d7e78(auStack_3f0,uVar1,local_710[0],param_1[2],*(undefined1 *)(param_1 + 0x1d),
                *(undefined1 *)((long)param_1 + 0x79),&local_720,&local_730,local_708,
                *(char *)((long)param_1 + 0x75) != '\0',*(undefined1 *)(param_1 + 0x1e),0,0xffff,
                param_1 + 0x16,param_1 + 0x18,param_1 + 0x1a,param_1[0x1c],0,0xffffffff,0);
  local_3d8 = 1;
  FUN_100345498(auStack_3f0);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100122744(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_928;
  undefined4 local_920;
  undefined8 local_918;
  undefined4 local_910;
  undefined4 local_908 [2];
  undefined4 local_900 [2];
  undefined4 local_8f8;
  undefined4 local_8f0;
  undefined4 local_8ec;
  undefined4 local_8e8;
  undefined4 local_8e4;
  undefined4 local_8e0;
  undefined4 local_8dc;
  undefined4 local_8d8;
  undefined4 local_8d4;
  undefined4 local_8d0;
  undefined4 local_8c4;
  undefined4 local_8b8;
  undefined4 local_89c;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_880;
  undefined4 local_864;
  undefined8 local_860;
  undefined4 local_858;
  undefined4 local_854;
  undefined4 local_850;
  undefined4 local_84c;
  undefined4 local_844;
  undefined4 local_83c;
  undefined4 local_838;
  undefined4 local_834;
  undefined4 local_830;
  undefined4 local_82c;
  undefined4 local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_810;
  undefined4 local_804;
  undefined4 local_7e8;
  undefined4 local_7d4;
  undefined4 local_7d0;
  undefined4 local_7a0;
  undefined4 local_79c;
  undefined4 local_798;
  undefined4 local_790;
  undefined4 local_788;
  undefined4 local_784;
  undefined4 local_780;
  undefined4 local_77c;
  undefined4 local_778;
  undefined4 local_774;
  undefined4 local_770;
  undefined4 local_76c;
  undefined4 local_768;
  undefined4 local_75c;
  undefined4 local_750;
  undefined4 local_734;
  undefined4 local_720;
  undefined4 local_71c;
  undefined4 local_6ec;
  undefined4 local_6e8;
  undefined4 local_630;
  undefined4 local_62c;
  undefined4 local_628;
  undefined4 local_624;
  undefined4 local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 local_614;
  undefined4 local_610;
  undefined4 local_604;
  undefined4 local_5f8;
  ulong local_5f0;
  undefined1 auStack_5e8 [24];
  undefined1 local_5d0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1003c5e30(local_900);
  if (*(int *)((long)param_1 + 0x146) == 0) {
    local_900[0] = *(undefined4 *)((long)param_1 + 0x2e);
    local_84c = *(undefined4 *)((long)param_1 + 0x32);
    local_798 = *(undefined4 *)((long)param_1 + 0x36);
    local_850 = *(undefined4 *)((long)param_1 + 0x3e);
    local_79c = *(undefined4 *)((long)param_1 + 0x42);
    local_6e8 = *(undefined4 *)((long)param_1 + 0x46);
    local_8b8 = *(undefined4 *)((long)param_1 + 0x4a);
    local_804 = *(undefined4 *)((long)param_1 + 0x4e);
    local_750 = *(undefined4 *)((long)param_1 + 0x52);
    local_8c4 = *(undefined4 *)((long)param_1 + 0x62);
    local_810 = *(undefined4 *)((long)param_1 + 0x66);
    local_75c = *(undefined4 *)((long)param_1 + 0x6a);
    local_888 = *(undefined4 *)((long)param_1 + 0x6e);
    local_7d4 = *(undefined4 *)((long)param_1 + 0x72);
    local_720 = *(undefined4 *)((long)param_1 + 0x76);
    local_8f8 = *(undefined4 *)((long)param_1 + 0x7e);
    local_844 = *(undefined4 *)((long)param_1 + 0x82);
    local_790 = *(undefined4 *)((long)param_1 + 0x86);
    local_854 = *(undefined4 *)((long)param_1 + 0x8e);
    local_7a0 = *(undefined4 *)((long)param_1 + 0x92);
    local_6ec = *(undefined4 *)((long)param_1 + 0x96);
    local_8ec = *(undefined4 *)((long)param_1 + 0x9a);
    local_838 = *(undefined4 *)((long)param_1 + 0x9e);
    local_784 = *(undefined4 *)((long)param_1 + 0xa2);
    local_8e8 = *(undefined4 *)((long)param_1 + 0xa6);
    local_834 = *(undefined4 *)((long)param_1 + 0xaa);
    local_780 = *(undefined4 *)((long)param_1 + 0xae);
    local_89c = *(undefined4 *)((long)param_1 + 0xb2);
    local_7e8 = *(undefined4 *)((long)param_1 + 0xb6);
    local_734 = *(undefined4 *)((long)param_1 + 0xba);
    local_8e4 = *(undefined4 *)((long)param_1 + 0xbe);
    local_830 = *(undefined4 *)((long)param_1 + 0xc2);
    local_77c = *(undefined4 *)((long)param_1 + 0xc6);
    local_8e0 = *(undefined4 *)((long)param_1 + 0xca);
    local_82c = *(undefined4 *)((long)param_1 + 0xce);
    local_778 = *(undefined4 *)((long)param_1 + 0xd2);
    local_8f0 = *(undefined4 *)((long)param_1 + 0xd6);
    local_83c = *(undefined4 *)((long)param_1 + 0xda);
    local_788 = *(undefined4 *)((long)param_1 + 0xde);
    local_884 = *(undefined4 *)((long)param_1 + 0xe2);
    local_7d0 = *(undefined4 *)((long)param_1 + 0xe6);
    local_71c = *(undefined4 *)((long)param_1 + 0xea);
    local_8dc = *(undefined4 *)((long)param_1 + 0xee);
    local_828 = *(undefined4 *)((long)param_1 + 0xf2);
    local_774 = *(undefined4 *)((long)param_1 + 0xf6);
    local_8d8 = *(undefined4 *)((long)param_1 + 0xfa);
    local_824 = *(undefined4 *)((long)param_1 + 0xfe);
    local_770 = *(undefined4 *)((long)param_1 + 0x102);
    local_8d4 = *(undefined4 *)((long)param_1 + 0x106);
    local_820 = *(undefined4 *)((long)param_1 + 0x10a);
    local_76c = *(undefined4 *)((long)param_1 + 0x10e);
    local_8d0 = *(undefined4 *)((long)param_1 + 0x112);
    local_81c = *(undefined4 *)((long)param_1 + 0x116);
    local_768 = *(undefined4 *)((long)param_1 + 0x11a);
    local_618 = *(undefined4 *)((long)param_1 + 0x11e);
    local_860 = *(undefined8 *)((long)param_1 + 0x126);
    local_858 = *(undefined4 *)((long)param_1 + 0x12e);
    local_604 = *(undefined4 *)((long)param_1 + 0x132);
    local_5f8 = *(undefined4 *)((long)param_1 + 0x136);
    local_88c = *(undefined4 *)((long)param_1 + 0x13a);
    local_610 = *(undefined4 *)((long)param_1 + 0x13e);
    local_864 = *(undefined4 *)((long)param_1 + 0x142);
    local_620 = *(undefined4 *)((long)param_1 + 0x152);
    local_880 = *(undefined4 *)((long)param_1 + 0x156);
    local_630 = *(undefined4 *)((long)param_1 + 0x2a);
    local_62c = *(undefined4 *)((long)param_1 + 0x3a);
    local_61c = *(undefined4 *)((long)param_1 + 0x15a);
    local_628 = *(undefined4 *)((long)param_1 + 0x7a);
    local_624 = *(undefined4 *)((long)param_1 + 0x8a);
    local_614 = *(undefined4 *)((long)param_1 + 0x122);
    local_5f0 = local_5f0 | 0x1f81e2049ff5;
  }
  FUN_1000320fc();
  iVar2 = param_1[2];
  iVar3 = FUN_10034ee90();
  if (iVar2 == iVar3) {
    FUN_10034e694(param_1[2],*(undefined1 *)(param_1 + 3));
  }
  uStack_88 = *(undefined8 *)((long)param_1 + 0x242);
  local_80 = *(undefined4 *)((long)param_1 + 0x24a);
  uStack_a8 = *(undefined8 *)((long)param_1 + 0x1e2);
  local_b0 = *(undefined8 *)((long)param_1 + 0x1da);
  uStack_98 = *(undefined8 *)((long)param_1 + 0x1f2);
  uStack_a0 = *(undefined8 *)((long)param_1 + 0x1ea);
  local_90 = *(undefined8 *)((long)param_1 + 0x1fa);
  uVar1 = *param_1;
  FUN_1003ba954(local_908,param_1[1]);
  local_918 = *(undefined8 *)((long)param_1 + 0x12);
  local_910 = *(undefined4 *)((long)param_1 + 0x1a);
  local_928 = *(undefined8 *)((long)param_1 + 0x1e);
  local_920 = *(undefined4 *)((long)param_1 + 0x26);
  FUN_1003da7c0(*(undefined4 *)((long)param_1 + 0x14e),auStack_5e8,uVar1,local_908[0],param_1[2],
                *(undefined1 *)((long)param_1 + 0x2e9),*(undefined1 *)(param_1 + 3),
                *(undefined1 *)(param_1 + 4),*(undefined1 *)((long)param_1 + 0x11),&local_918,
                &local_928,local_900,*(int *)((long)param_1 + 0x146) != 0,(long)param_1 + 0x162,
                (long)param_1 + 0x18a,(long)param_1 + 0x1b2,&local_b0,(long)param_1 + 0x202,
                *(undefined4 *)((long)param_1 + 0x15e),(long)param_1 + 0x22a,(long)param_1 + 0x236,
                &uStack_88,(long)param_1 + 0x24e,*(undefined4 *)((long)param_1 + 0x251),
                *(undefined4 *)((long)param_1 + 0x2c1),0,0xff,0,
                *(undefined4 *)((long)param_1 + 0x255),(long)param_1 + 0x259,(long)param_1 + 0x279,
                (long)param_1 + 0x299,*(undefined4 *)((long)param_1 + 0x2b9),(long)param_1 + 0x2c9,
                (long)param_1 + 0x2d1,(long)param_1 + 0x2d9,*(undefined4 *)((long)param_1 + 0x2e5),
                FUN_10003378c,0xffffffff);
  local_5d0 = 1;
  FUN_100345498(auStack_5e8);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100122b9c(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint local_d0;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_4c;
  undefined8 uStack_44;
  uint local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  if (param_1 != 0) {
    FUN_1004d25b8(&local_150,0x80,param_1);
  }
  uStack_64 = uStack_f8;
  local_6c = uStack_100;
  uStack_54 = uStack_e8;
  local_5c = local_f0;
  uStack_44 = uStack_d8;
  local_4c = uStack_e0;
  uStack_a4 = uStack_138;
  local_ac = uStack_140;
  uStack_94 = uStack_128;
  local_9c = local_130;
  uStack_84 = uStack_118;
  local_8c = uStack_120;
  uStack_74 = uStack_108;
  local_7c = local_110;
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_d0 = uVar1 >> 0x10 | uVar1 << 0x10;
  local_c0 = 0x5008600;
  uStack_b4 = uStack_148;
  local_bc = local_150;
  local_3c = local_d0;
  FUN_100346750();
  FUN_100147938(&local_c0,0x88);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100122c7c(void)

{
  uint uVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  long lVar4;
  string *psVar5;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1004ef16c(&local_38);
  iVar3 = FUN_10034cb58();
  if (iVar3 != 0) {
    lVar4 = FUN_10034cba0();
    uVar1 = *(uint *)(lVar4 + 8);
    if (-1 < (char)*(byte *)(lVar4 + 0x17)) {
      uVar1 = (uint)*(byte *)(lVar4 + 0x17);
    }
    if (uVar1 != 0) {
      psVar5 = (string *)FUN_10034cba0();
      std::string::operator=((string *)&local_38,psVar5);
    }
  }
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < local_28) {
    pppuVar2 = &local_38;
  }
  FUN_100346824(pppuVar2);
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return 1;
}




undefined8 FUN_100122d0c(undefined4 *param_1)

{
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_40 [24];
  undefined1 local_28;
  
  local_50 = *(undefined8 *)(param_1 + 1);
  local_48 = param_1[3];
  FUN_1003d48d4(auStack_40,*param_1,&local_50);
  local_28 = 1;
  FUN_100345498(auStack_40);
  return 1;
}




undefined8 FUN_100122d58(undefined4 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 local_f0 [2];
  void *local_e8;
  undefined4 local_e0;
  char local_d1;
  undefined4 local_5c;
  undefined4 local_58;
  ulong local_2c;
  
  FUN_10001549c(&local_e8,param_1 + 8);
  FUN_10034cc50(&local_e8);
  if (local_d1 < '\0') {
    operator_delete(local_e8);
  }
  FUN_10034cd08(param_1[0x18]);
  FUN_10034cc6c();
  uVar1 = FUN_10034cb58();
  if ((uVar1 & 1) == 0) {
    thunk_FUN_10034d7b8(&local_e8);
    local_e0 = *param_1;
    local_2c = local_2c & 0xfff0000000000000 |
               local_2c & 0xffffffffffff | (ulong)(*(byte *)(param_1 + 0x19) & 0xf) << 0x30;
    local_5c = param_1[2];
    FUN_1003ba954(local_f0,param_1[3]);
    local_58 = local_f0[0];
    local_2c = local_2c | 0x2000000ffffffff;
    FUN_10034dbfc(&local_e8);
    thunk_FUN_10034d848(&local_e8);
  }
  uVar2 = FUN_1001148bc();
  FUN_10011618c(uVar2,param_1[1] != 0);
  return 1;
}




undefined8 FUN_100122e30(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_108 [8];
  undefined4 local_100;
  undefined1 auStack_f8 [184];
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar2 = FUN_10034cb58();
  if ((uVar2 & 1) == 0) {
    FUN_1004e313c(auStack_40);
    FUN_1004e321c(auStack_40,param_1);
    iVar1 = FUN_1003458ec(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 == 0) {
      thunk_FUN_10034d7b8(auStack_108);
      local_100 = *(undefined4 *)(param_1 + 0x44);
      FUN_1000153b4(auStack_f8,auStack_40);
      FUN_10034dbfc(auStack_108);
      thunk_FUN_10034d848(auStack_108);
    }
    else {
      FUN_10034ddfc(*(undefined4 *)(param_1 + 0x44),auStack_40);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return 1;
}




undefined8 FUN_100122ed4(undefined4 *param_1)

{
  undefined1 auStack_b8 [24];
  undefined1 local_a0;
  
  FUN_1003de37c(auStack_b8,*param_1,param_1 + 1,*(undefined1 *)(param_1 + 0x18),
                *(undefined1 *)((long)param_1 + 0x62),param_1 + 0x15,
                *(undefined1 *)((long)param_1 + 0x61));
  local_a0 = 1;
  FUN_100345498(auStack_b8);
  return 1;
}




undefined8 FUN_100122f20(undefined1 *param_1)

{
  undefined1 auStack_38 [24];
  undefined1 local_20;
  
  FUN_100011a74(*(undefined4 *)(param_1 + 2),auStack_38,*param_1,param_1[6],param_1[1],param_1[7]);
  local_20 = 1;
  FUN_100345498(auStack_38);
  return 1;
}




undefined8 FUN_100122f68(undefined4 *param_1)

{
  undefined1 auStack_40 [24];
  undefined1 local_28;
  
  FUN_10001214c(param_1[2],param_1[3],auStack_40,*param_1,param_1[1],*(undefined1 *)(param_1 + 4),
                *(undefined1 *)((long)param_1 + 0x11),*(undefined1 *)((long)param_1 + 0x12),
                *(char *)((long)param_1 + 0x13) == '\x01',*(char *)(param_1 + 5) == '\x01',
                *(char *)((long)param_1 + 0x15) == '\x01');
  local_28 = 1;
  FUN_100345498(auStack_40);
  return 1;
}




undefined8 FUN_100122fd8(char *param_1)

{
  ulong uVar1;
  short sVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  void *local_38;
  ulong local_30;
  ulong local_28;
  
  iVar3 = FUN_1004eef10();
  if (iVar3 != 0) {
    local_38 = (void *)0x0;
    local_30 = 0;
    local_28 = 0;
    FUN_1004ef16c(&local_38);
    sVar4 = _strlen(param_1);
    uVar1 = local_30;
    if (-1 < (long)local_28) {
      uVar1 = local_28 >> 0x38;
    }
    if ((sVar4 == uVar1) &&
       (iVar3 = std::string::compare((ulong)&local_38,0,(char *)0xffffffffffffffff,(ulong)param_1),
       iVar3 == 0)) {
      sVar2 = *(short *)(param_1 + 0x40);
      uVar5 = FUN_1001148bc();
      FUN_100115fc0(uVar5,sVar2 == 0);
    }
    if ((long)local_28 < 0) {
      operator_delete(local_38);
    }
  }
  return 1;
}




undefined8 FUN_100123080(undefined4 *param_1)

{
  undefined4 local_48 [2];
  undefined4 local_40 [2];
  undefined1 auStack_38 [24];
  undefined1 local_20;
  
  local_40[0] = *param_1;
  local_48[0] = param_1[1];
  FUN_100011d4c(auStack_38,local_40,local_48);
  local_20 = 1;
  FUN_100345498(auStack_38);
  return 1;
}




bool FUN_1001230c8(undefined4 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100345d90(*param_1);
  if (lVar1 != 0) {
    FUN_1000320fc();
    uVar2 = FUN_100033428();
    FUN_10002e6b4(0,0,0,uVar2,lVar1,0);
    FUN_1000320fc();
    FUN_100033428();
    FUN_10002e8e0();
    FUN_10034cb78(*(undefined4 *)(lVar1 + 0x260));
  }
  return lVar1 != 0;
}




undefined8 FUN_1001234d4(undefined4 *param_1)

{
  undefined1 auStack_48 [24];
  undefined1 local_30;
  
  FUN_1003db5e4(auStack_48,*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
  local_30 = 1;
  FUN_100345498(auStack_48);
  return 1;
}




undefined8 FUN_100123514(undefined4 *param_1)

{
  undefined4 local_78 [2];
  undefined1 auStack_70 [24];
  undefined1 local_58;
  
  local_78[0] = param_1[1];
  FUN_1003bc058(param_1[2],auStack_70,*(undefined1 *)((long)param_1 + 0xe),
                *(undefined1 *)((long)param_1 + 0xf),*(undefined1 *)(param_1 + 4),
                *(undefined2 *)(param_1 + 3),local_78,*param_1);
  local_58 = 1;
  FUN_100345498(auStack_70);
  return 1;
}




undefined8 FUN_100123568(undefined4 *param_1)

{
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined1 auStack_70 [24];
  undefined1 local_58;
  
  local_80 = *(undefined8 *)(param_1 + 2);
  local_78 = param_1[4];
  local_88[0] = param_1[1];
  FUN_1003d3188(param_1[5],auStack_70,*(undefined1 *)((long)param_1 + 0x1a),
                *(undefined1 *)((long)param_1 + 0x1b),&local_80,*(undefined2 *)(param_1 + 6),
                local_88,*param_1);
  local_58 = 1;
  FUN_100345498(auStack_70);
  return 1;
}




undefined8 FUN_1001235c8(undefined4 *param_1)

{
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 auStack_70 [24];
  undefined1 local_58;
  
  local_78 = *(undefined8 *)(param_1 + 7);
  local_98[0] = param_1[1];
  uStack_88 = *(undefined8 *)(param_1 + 2);
  local_80 = param_1[4];
  local_90 = *(undefined8 *)(param_1 + 5);
  FUN_1003d31dc(param_1[9],auStack_70,*(undefined1 *)((long)param_1 + 0x2a),
                *(undefined1 *)((long)param_1 + 0x2b),&local_78,*(undefined2 *)(param_1 + 10),
                &uStack_88,&local_90,local_98,*param_1);
  local_58 = 1;
  FUN_100345498(auStack_70);
  return 1;
}




undefined8 FUN_100123644(undefined4 *param_1)

{
  undefined8 local_50;
  undefined4 local_48;
  undefined1 auStack_40 [24];
  undefined1 local_28;
  
  local_50 = *(undefined8 *)(param_1 + 1);
  local_48 = param_1[3];
  FUN_1003d67d0(auStack_40,*param_1,&local_50,*(char *)(param_1 + 4) != '\0');
  local_28 = 1;
  FUN_100345498(auStack_40);
  return 1;
}




undefined8 FUN_10012369c(undefined4 *param_1)

{
  undefined1 auStack_48 [24];
  undefined1 local_30;
  
  FUN_1003c4f68(param_1[2],auStack_48,*param_1,*(undefined1 *)(param_1 + 3),
                *(undefined1 *)((long)param_1 + 0xd),*(char *)((long)param_1 + 0xe) != '\0',
                param_1[1]);
  local_30 = 1;
  FUN_100345498(auStack_48);
  return 1;
}




undefined8 FUN_1001236ec(undefined4 *param_1)

{
  undefined1 auStack_50 [24];
  undefined1 local_38;
  
  FUN_1003a34f4(param_1[1],auStack_50,*param_1,*(undefined1 *)(param_1 + 2),
                *(char *)((long)param_1 + 9) != '\0');
  if (*(char *)((long)param_1 + 10) == '\0') {
    FUN_1003db98c(auStack_50);
  }
  if (*(char *)((long)param_1 + 0xb) != '\0') {
    FUN_1003db994(auStack_50);
  }
  local_38 = 1;
  FUN_100345498(auStack_50);
  return 1;
}




undefined8 FUN_100123764(undefined4 *param_1)

{
  undefined1 auStack_50 [24];
  undefined1 local_38;
  
  FUN_1003d6c80(param_1[2],auStack_50,*param_1,*(undefined1 *)((long)param_1 + 0xe),
                *(undefined2 *)(param_1 + 3),*(undefined1 *)((long)param_1 + 0xf),param_1[1],1);
  local_38 = 1;
  FUN_100345498(auStack_50);
  return 1;
}




undefined8 FUN_1001237b8(undefined4 *param_1)

{
  undefined1 auStack_68 [24];
  undefined1 local_50;
  
  FUN_1003d62b8(param_1[2],0,param_1[3],param_1[4],param_1[5],param_1[6],auStack_68,*param_1,
                param_1[1],*(undefined1 *)(param_1 + 7));
  local_50 = 1;
  FUN_100345498(auStack_68);
  return 1;
}




undefined8 FUN_100123804(undefined4 *param_1)

{
  undefined1 auStack_68 [24];
  undefined1 local_50;
  
  FUN_1003d62f4(param_1[3],param_1[4],param_1[5],auStack_68,*param_1,param_1[1],param_1[2],
                *(undefined1 *)(param_1 + 6));
  local_50 = 1;
  FUN_100345498(auStack_68);
  return 1;
}




undefined8 FUN_10012384c(undefined4 *param_1)

{
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined1 local_50;
  
  uStack_70 = *(undefined8 *)(param_1 + 2);
  local_78 = *(undefined8 *)(param_1 + 4);
  FUN_1003d634c(auStack_68,*param_1,param_1[1],&uStack_70,&local_78);
  local_50 = 1;
  FUN_100345498(auStack_68);
  return 1;
}




undefined8 FUN_100123894(undefined4 *param_1)

{
  undefined1 auStack_38 [24];
  undefined1 local_20;
  
  FUN_1003b4a2c(auStack_38,*param_1,param_1[1],*(char *)(param_1 + 2) != '\0',
                *(char *)((long)param_1 + 9) != '\0');
  local_20 = 1;
  FUN_100345498(auStack_38);
  return 1;
}




undefined8 FUN_1001238e4(undefined4 *param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  float fVar4;
  undefined1 auStack_78 [24];
  undefined1 local_60;
  
  uVar2 = *(ushort *)(param_1 + 2);
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  FUN_1003c2c30(fVar4,0,0,auStack_78,param_1[1],*param_1,*(undefined2 *)((long)param_1 + 0xe),
                *(undefined4 *)((long)param_1 + 10),1,0,0);
  local_60 = 1;
  FUN_100345498(auStack_78);
  return 1;
}




undefined8 FUN_1001239b0(undefined4 *param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  float fVar4;
  undefined1 auStack_68 [24];
  undefined1 local_50;
  
  uVar2 = *(ushort *)(param_1 + 2);
  uVar1 = (uVar2 & 0x8000) << 0x10;
  uVar3 = uVar2 >> 10 & 0x1f;
  if (uVar3 == 0x1f) {
    fVar4 = (float)(uVar1 | (uVar2 & 0x3ff) != 0 | 0x7f800000);
  }
  else if ((uVar2 >> 10 & 0x1f) == 0) {
    fVar4 = (float)(uVar2 & 0x3ff);
    if ((short)uVar2 < 0) {
      fVar4 = -fVar4;
    }
    fVar4 = fVar4 * 5.9604645e-08;
  }
  else {
    fVar4 = (float)(uVar3 * 0x800000 + 0x38000000 | (uVar2 & 0x3ff) << 0xd | uVar1);
  }
  FUN_1003c2c30(fVar4,*(undefined4 *)((long)param_1 + 0x12),*(undefined4 *)((long)param_1 + 0x16),
                auStack_68,param_1[1],*param_1,*(undefined2 *)((long)param_1 + 0xe),
                *(undefined4 *)((long)param_1 + 10),*(undefined2 *)(param_1 + 4),
                *(undefined4 *)((long)param_1 + 0x1a),*(undefined4 *)((long)param_1 + 0x1e));
  local_50 = 1;
  FUN_100345498(auStack_68);
  return 1;
}




undefined8 FUN_100123a74(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 local_70 [2];
  undefined1 auStack_68 [24];
  undefined1 local_50;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = *param_1;
  FUN_1003ba954(local_70,param_1[2]);
  FUN_1003dc090(auStack_68,uVar1,local_70[0],param_1[1]);
  if (param_1[3] != -1) {
    FUN_1003dc0b8(auStack_68);
  }
  switch(*(undefined1 *)(param_1 + 4)) {
  case 1:
    FUN_1003dc304(*(undefined4 *)((long)param_1 + 0x11),auStack_68);
    break;
  case 2:
    FUN_1003dc314(auStack_68,*(undefined4 *)((long)param_1 + 0x11));
    break;
  case 3:
    FUN_1003dc320(auStack_68,*(undefined4 *)((long)param_1 + 0x11));
    break;
  case 5:
    FUN_1003dc32c(auStack_68,(long)param_1 + 0x11);
  }
  local_50 = 1;
  FUN_100345498(auStack_68);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100123b80(undefined4 *param_1)

{
  byte bVar1;
  byte local_48 [24];
  undefined1 local_30;
  
  bVar1 = *(byte *)((long)param_1 + 5);
  FUN_10034cbd4(local_48);
  FUN_1000109cc(local_48,*param_1,*(undefined1 *)(param_1 + 1),local_48[0] & 0xfc | bVar1 & 3);
  local_30 = 1;
  FUN_100345498(local_48);
  return 1;
}




undefined8 FUN_100123be0(undefined4 *param_1)

{
  undefined1 auStack_50 [24];
  undefined1 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_10034cbe4(&local_28);
  local_28 = param_1[1];
  uStack_24 = CONCAT31(uStack_24._1_3_,(byte)uStack_24 & 0xfc | *(byte *)(param_1 + 2) & 3);
  FUN_100011b80(auStack_50,*param_1,CONCAT44(uStack_24,local_28));
  local_38 = 1;
  FUN_100345498(auStack_50);
  return 1;
}




undefined8 FUN_100123c48(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1003458ec(*param_1);
  if (iVar1 != 0) {
    FUN_10034e138(*param_1,0);
    FUN_10034e1f0(*param_1,0);
  }
  return 1;
}




undefined8 FUN_100123c8c(undefined4 *param_1)

{
  undefined8 local_58;
  undefined4 local_50;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  
  local_58 = *(undefined8 *)(param_1 + 2);
  local_50 = param_1[4];
  FUN_1003dd83c(auStack_48,*param_1,param_1[1],&local_58,*(undefined1 *)(param_1 + 5),
                *(undefined1 *)((long)param_1 + 0x15));
  local_30 = 1;
  FUN_100345498(auStack_48);
  return 1;
}




undefined8 FUN_100123ce0(undefined4 *param_1)

{
  char cVar1;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  
  cVar1 = *(char *)(param_1 + 5);
  if (cVar1 == '\0') {
    FUN_1003d75a8(auStack_48,*param_1,param_1[1],param_1[2]);
  }
  else if (cVar1 == '\x01') {
    local_50 = *(undefined8 *)(param_1 + 3);
    FUN_1003d75d0(auStack_48,*param_1,param_1[1],&local_50);
  }
  else {
    if (cVar1 != '\x02') {
      return 1;
    }
    FUN_1003d7578(auStack_48,*param_1,param_1[1]);
  }
  local_30 = 1;
  FUN_100345498(auStack_48);
  return 1;
}




undefined8 FUN_100123d60(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000320e8();
  if (iVar1 != 0) {
    FUN_1000320fc();
    FUN_100033420(*param_1);
  }
  return 1;
}




undefined8 FUN_100123d94(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar1 = FUN_1003da398();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0x7b2a736) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0x7b2a736];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0x7b2a737)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return 1;
}




undefined8 FUN_100123e30(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = (undefined4 *)(param_1 + lVar2);
    if (*(char *)(puVar1 + 1) != '\0') {
      FUN_10034e254(*puVar1,*(char *)((long)puVar1 + 5) != '\0');
    }
    lVar2 = lVar2 + 6;
  } while (lVar2 != 0x60);
  return 1;
}




undefined8 FUN_100123e80(long param_1)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_1000320fc();
  FUN_10001549c(local_38,param_1);
  FUN_100033210(*(undefined4 *)(param_1 + 0x40),uVar1,local_38,*(char *)(param_1 + 0x44) != '\0');
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return 1;
}




undefined8 FUN_100123ee8(char *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1001148bc();
  FUN_100116214(uVar1,*param_1 != '\0');
  FUN_1000320fc();
  FUN_1000333b0();
  return 1;
}




undefined8 FUN_100123f24(undefined4 *param_1)

{
  undefined1 auStack_d8 [24];
  undefined1 local_c0;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1003defc0(*param_1,auStack_d8,*(undefined1 *)(param_1 + 0x25),
                *(undefined1 *)((long)param_1 + 0x95),param_1 + 1,param_1 + 0x11,param_1 + 0x15,
                *(undefined1 *)((long)param_1 + 0x96));
  local_c0 = 1;
  FUN_100345498(auStack_d8);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_18) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100123fa0(ushort *param_1,undefined8 param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint3 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint *puVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint local_a68;
  uint uStack_a64;
  undefined4 local_a60;
  undefined8 uStack_a5c;
  undefined1 uStack_a54;
  undefined1 uStack_a53;
  undefined1 uStack_a52;
  undefined1 uStack_a51;
  undefined1 uStack_a50;
  undefined1 uStack_a4f;
  undefined1 auStack_a4e [2];
  undefined1 uStack_a4c;
  undefined1 uStack_a4b;
  ushort uStack_a4a;
  undefined1 uStack_a48;
  undefined1 uStack_a47;
  ushort uStack_a46;
  undefined1 uStack_a44;
  undefined1 uStack_a43;
  ushort uStack_a42;
  undefined2 uStack_a40;
  undefined2 uStack_a3e;
  undefined2 uStack_a3c;
  undefined2 uStack_a3a;
  ushort uStack_a38;
  undefined2 uStack_a36;
  undefined2 uStack_a34;
  undefined2 uStack_a32;
  undefined2 local_a30;
  undefined2 uStack_a2e;
  undefined2 uStack_a2c;
  undefined2 uStack_a2a;
  undefined2 uStack_a28;
  ushort uStack_a26;
  undefined1 uStack_a24;
  undefined1 uStack_a23;
  ushort uStack_a22;
  ushort uStack_a20;
  ushort uStack_a1e;
  undefined1 uStack_a1c;
  undefined1 uStack_a1b;
  ushort uStack_a1a;
  undefined2 uStack_a18;
  ushort uStack_a16;
  undefined1 uStack_a14;
  undefined1 uStack_a13;
  ushort uStack_a12;
  undefined1 local_a10;
  undefined1 uStack_a0f;
  ushort uStack_a0e;
  undefined1 auStack_a0c [6];
  undefined4 uStack_a06;
  undefined1 uStack_a02;
  undefined1 uStack_a01;
  byte bStack_a00;
  undefined1 uStack_9ff;
  undefined1 uStack_9fe;
  undefined1 uStack_9fd;
  undefined1 uStack_9fc;
  undefined1 uStack_9fb;
  undefined2 uStack_9fa;
  undefined2 uStack_9f8;
  uint uStack_9f6;
  undefined2 uStack_9f2;
  undefined2 uStack_9f0;
  undefined2 local_9ee;
  undefined2 uStack_9ec;
  undefined2 local_9ea;
  undefined2 uStack_9e8;
  uint local_9e6;
  undefined2 local_9e2;
  undefined2 uStack_9e0;
  uint uStack_9de;
  undefined2 uStack_9da;
  undefined2 uStack_9d8;
  uint uStack_9d6;
  undefined1 uStack_9d2;
  undefined1 uStack_9d1;
  ushort uStack_9d0;
  uint uStack_9ce;
  undefined1 uStack_9ca;
  undefined1 uStack_9c9;
  ushort uStack_9c8;
  uint local_9c6;
  undefined2 local_9c2;
  undefined2 uStack_9c0;
  undefined2 uStack_9be;
  undefined2 uStack_9bc;
  undefined2 uStack_9ba;
  uint uStack_9b8;
  uint uStack_9b4;
  undefined2 uStack_9b0;
  undefined2 local_9ae;
  undefined2 uStack_9ac;
  undefined2 local_9aa;
  undefined2 uStack_9a8;
  undefined2 local_9a6;
  undefined2 uStack_9a4;
  undefined2 local_9a2;
  undefined2 uStack_9a0;
  undefined2 uStack_99e;
  undefined2 uStack_99c;
  undefined2 uStack_99a;
  undefined2 uStack_998;
  undefined2 uStack_996;
  undefined2 uStack_994;
  undefined2 uStack_992;
  undefined2 uStack_990;
  uint uStack_98e;
  undefined2 local_98a;
  undefined2 uStack_988;
  uint local_986;
  uint local_982;
  uint local_97e;
  uint local_97a;
  uint local_976;
  uint local_972;
  uint local_96e;
  uint local_96a;
  uint local_966;
  uint local_962;
  uint local_95e;
  uint uStack_95a;
  uint local_956;
  undefined1 auStack_952 [4];
  undefined4 uStack_94e;
  uint uStack_94a;
  uint local_946;
  uint uStack_942;
  uint local_93e;
  uint uStack_93a;
  uint local_936;
  uint uStack_932;
  uint local_92e;
  uint uStack_92a;
  uint local_926;
  uint uStack_922;
  uint local_91e;
  uint uStack_91a;
  uint local_916;
  uint uStack_912;
  uint local_90e;
  uint uStack_90a;
  uint local_906;
  uint uStack_902;
  uint local_8fe [10];
  uint local_8d6 [10];
  uint local_8ae [10];
  uint local_886 [10];
  uint local_85e [10];
  uint local_836 [9];
  uint local_80f;
  uint local_80b;
  uint local_807 [8];
  uint local_7e7 [8];
  uint local_7c7 [8];
  uint local_7a7;
  uint uStack_7a3;
  uint local_79f;
  uint uStack_79b;
  uint local_77f;
  uint uStack_77b;
  uint local_214;
  uint local_210;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  puVar16 = (uint *)(param_1 + 1);
  uVar3 = *param_1 >> 8 | *param_1 << 8;
  iVar8 = FUN_10011f120();
  if (iVar8 != 0) {
    FUN_10011e8f4(param_1,param_2);
  }
  iVar8 = FUN_100346750();
  if (iVar8 != 0) {
    FUN_10014796c();
  }
  switch(uVar3) {
  case 0x3e9:
    uVar12 = *(undefined8 *)(param_1 + 0x25);
    uVar15 = *(undefined8 *)(param_1 + 0x21);
    uVar19 = *(undefined8 *)(param_1 + 0x29);
    uStack_a18 = (undefined2)uVar12;
    uStack_a16 = (ushort)((ulong)uVar12 >> 0x10);
    uStack_a14 = (undefined1)((ulong)uVar12 >> 0x20);
    uStack_a13 = (undefined1)((ulong)uVar12 >> 0x28);
    uStack_a12 = (ushort)((ulong)uVar12 >> 0x30);
    uStack_a20 = (ushort)uVar15;
    uStack_a1e = (ushort)((ulong)uVar15 >> 0x10);
    uStack_a1c = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_a1b = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a1a = (ushort)((ulong)uVar15 >> 0x30);
    auStack_a0c._4_2_ = (undefined2)*(undefined8 *)(param_1 + 0x2d);
    local_a10 = (undefined1)uVar19;
    uStack_a0f = (undefined1)((ulong)uVar19 >> 8);
    uStack_a0e = (ushort)((ulong)uVar19 >> 0x10);
    auStack_a0c._0_2_ = (undefined2)((ulong)uVar19 >> 0x20);
    auStack_a0c._2_2_ = (undefined2)((ulong)uVar19 >> 0x30);
    uVar15 = *(undefined8 *)((long)param_1 + 0x5f);
    uStack_a06._0_3_ = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x2d) >> 0x10);
    uStack_a06._3_1_ = (undefined1)uVar15;
    uStack_a02 = (undefined1)((ulong)uVar15 >> 8);
    uStack_a01 = (undefined1)((ulong)uVar15 >> 0x10);
    uStack_9fc = (undefined1)((ulong)uVar15 >> 0x38);
    uVar19 = *(undefined8 *)(param_1 + 0xd);
    uVar12 = *(undefined8 *)(param_1 + 9);
    uStack_a48 = (undefined1)uVar19;
    uStack_a47 = (undefined1)((ulong)uVar19 >> 8);
    uStack_a46 = (ushort)((ulong)uVar19 >> 0x10);
    uStack_a44 = (undefined1)((ulong)uVar19 >> 0x20);
    uStack_a43 = (undefined1)((ulong)uVar19 >> 0x28);
    uStack_a42 = (ushort)((ulong)uVar19 >> 0x30);
    uStack_a50 = (undefined1)uVar12;
    uStack_a4f = (undefined1)((ulong)uVar12 >> 8);
    auStack_a4e = SUB82((ulong)uVar12 >> 0x10,0);
    uStack_a4c = (undefined1)((ulong)uVar12 >> 0x20);
    uStack_a4b = (undefined1)((ulong)uVar12 >> 0x28);
    uStack_a4a = (ushort)((ulong)uVar12 >> 0x30);
    uVar21 = *(undefined8 *)(param_1 + 0x15);
    uVar20 = *(undefined8 *)(param_1 + 0x11);
    uVar19 = *(undefined8 *)(param_1 + 0x1d);
    uVar12 = *(undefined8 *)(param_1 + 0x19);
    uStack_a38 = (ushort)uVar21;
    uStack_a36 = (undefined2)((ulong)uVar21 >> 0x10);
    uStack_a34 = (undefined2)((ulong)uVar21 >> 0x20);
    uStack_a32 = (undefined2)((ulong)uVar21 >> 0x30);
    uStack_a40 = (undefined2)uVar20;
    uStack_a3e = (undefined2)((ulong)uVar20 >> 0x10);
    uStack_a3c = (undefined2)((ulong)uVar20 >> 0x20);
    uStack_a3a = (undefined2)((ulong)uVar20 >> 0x30);
    uStack_a28 = (undefined2)uVar19;
    uStack_a26 = (ushort)((ulong)uVar19 >> 0x10);
    uStack_a24 = (undefined1)((ulong)uVar19 >> 0x20);
    uStack_a23 = (undefined1)((ulong)uVar19 >> 0x28);
    uStack_a22 = (ushort)((ulong)uVar19 >> 0x30);
    local_a30 = (undefined2)uVar12;
    uStack_a2e = (undefined2)((ulong)uVar12 >> 0x10);
    uStack_a2c = (undefined2)((ulong)uVar12 >> 0x20);
    uStack_a2a = (undefined2)((ulong)uVar12 >> 0x30);
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    uVar11 = (uint)((ulong)uVar15 >> 0x18);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    bStack_a00 = (byte)(uVar9 >> 0x18);
    uStack_9ff = (undefined1)(uVar11 >> 0x10);
    uStack_9fe = (undefined1)(uVar9 >> 8);
    uStack_9fd = (undefined1)uVar11;
    iVar8 = FUN_10011f114();
    if (iVar8 != 0) {
      uStack_a5c._0_1_ = 0;
      uStack_a5c._1_1_ = 0;
      uStack_a5c._2_1_ = 0;
      uStack_a5c._3_1_ = 0;
    }
    FUN_100122d58(&local_a60);
    break;
  case 0x3ea:
    uVar9 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    iVar8 = FUN_1003458ec(uVar9);
    if (iVar8 != 0) {
      if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
        FUN_10034e138(uVar9,1);
        return;
      }
      goto LAB_100125e98;
    }
    break;
  case 0x3eb:
    uVar9 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    iVar8 = FUN_1003458ec(uVar9);
    if (iVar8 != 0) {
      if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
        FUN_10034e1f0(uVar9,1);
        return;
      }
      goto LAB_100125e98;
    }
    break;
  case 0x3ec:
    uVar9 = *puVar16 & 0xff00ff00;
    uVar11 = *puVar16 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar11 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar11 >> 0x10);
    FUN_100123c48(&local_a60);
    break;
  case 0x3ed:
    uVar12 = *(undefined8 *)(param_1 + 0x15);
    uVar15 = *(undefined8 *)(param_1 + 0x11);
    uVar20 = *(undefined8 *)(param_1 + 0x1d);
    uVar19 = *(undefined8 *)(param_1 + 0x19);
    uStack_a38 = (ushort)uVar12;
    uStack_a36 = (undefined2)((ulong)uVar12 >> 0x10);
    uStack_a34 = (undefined2)((ulong)uVar12 >> 0x20);
    uStack_a32 = (undefined2)((ulong)uVar12 >> 0x30);
    uStack_a40 = (undefined2)uVar15;
    uStack_a3e = (undefined2)((ulong)uVar15 >> 0x10);
    uStack_a3c = (undefined2)((ulong)uVar15 >> 0x20);
    uStack_a3a = (undefined2)((ulong)uVar15 >> 0x30);
    uStack_a28 = (undefined2)uVar20;
    uStack_a26 = (ushort)((ulong)uVar20 >> 0x10);
    uStack_a24 = (undefined1)((ulong)uVar20 >> 0x20);
    uStack_a23 = (undefined1)((ulong)uVar20 >> 0x28);
    uStack_a22 = (ushort)((ulong)uVar20 >> 0x30);
    local_a30 = (undefined2)uVar19;
    uStack_a2e = (undefined2)((ulong)uVar19 >> 0x10);
    uStack_a2c = (undefined2)((ulong)uVar19 >> 0x20);
    uStack_a2a = (undefined2)((ulong)uVar19 >> 0x30);
    uVar20 = *(undefined8 *)(param_1 + 5);
    uVar19 = *(undefined8 *)puVar16;
    uVar12 = *(undefined8 *)(param_1 + 0xd);
    uVar15 = *(undefined8 *)(param_1 + 9);
    uStack_a5c._4_1_ = (undefined1)uVar20;
    uStack_a5c._5_1_ = (undefined1)((ulong)uVar20 >> 8);
    uStack_a5c._6_2_ = (ushort)((ulong)uVar20 >> 0x10);
    uStack_a54 = (undefined1)((ulong)uVar20 >> 0x20);
    uStack_a53 = (undefined1)((ulong)uVar20 >> 0x28);
    uStack_a52 = (undefined1)((ulong)uVar20 >> 0x30);
    uStack_a51 = (undefined1)((ulong)uVar20 >> 0x38);
    local_a60._0_1_ = (undefined1)uVar19;
    local_a60._1_1_ = (undefined1)((ulong)uVar19 >> 8);
    local_a60._2_2_ = (ushort)((ulong)uVar19 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)((ulong)uVar19 >> 0x20);
    uStack_a5c._1_1_ = (undefined1)((ulong)uVar19 >> 0x28);
    uStack_a5c._2_1_ = (undefined1)((ulong)uVar19 >> 0x30);
    uStack_a5c._3_1_ = (undefined1)((ulong)uVar19 >> 0x38);
    uStack_a48 = (undefined1)uVar12;
    uStack_a47 = (undefined1)((ulong)uVar12 >> 8);
    uStack_a46 = (ushort)((ulong)uVar12 >> 0x10);
    uStack_a44 = (undefined1)((ulong)uVar12 >> 0x20);
    uStack_a43 = (undefined1)((ulong)uVar12 >> 0x28);
    uStack_a42 = (ushort)((ulong)uVar12 >> 0x30);
    uStack_a50 = (undefined1)uVar15;
    uStack_a4f = (undefined1)((ulong)uVar15 >> 8);
    auStack_a4e = SUB82((ulong)uVar15 >> 0x10,0);
    uStack_a4c = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_a4b = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a4a = (ushort)((ulong)uVar15 >> 0x30);
    uVar9 = (uint)*(undefined8 *)(param_1 + 0x21);
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar10 = (uint)((ulong)*(undefined8 *)(param_1 + 0x21) >> 0x20);
    uVar11 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a1a = (ushort)(uVar11 >> 8) | (ushort)(uVar10 << 8);
    uStack_a20 = (ushort)(uVar9 >> 0x10);
    uStack_a1e = (ushort)uVar9;
    uStack_a1c = (undefined1)(uVar11 >> 0x18);
    uStack_a1b = (undefined1)(uVar10 >> 0x10);
    FUN_100122e30(&local_a60);
    break;
  case 0x3ee:
    uVar12 = *(undefined8 *)(param_1 + 0x65);
    uStack_994 = (undefined2)((ulong)uVar12 >> 0x20);
    uStack_992 = (undefined2)((ulong)uVar12 >> 0x30);
    uVar15 = *(undefined8 *)(param_1 + 0x69);
    uStack_990 = (undefined2)uVar15;
    uStack_98e = (uint)((ulong)uVar15 >> 0x10);
    local_98a = (undefined2)((ulong)uVar15 >> 0x30);
    uVar19 = *(undefined8 *)(param_1 + 0x35);
    uVar15 = *(undefined8 *)(param_1 + 0x31);
    uVar21 = *(undefined8 *)(param_1 + 0x3d);
    uVar20 = *(undefined8 *)(param_1 + 0x39);
    uStack_9f8 = (undefined2)uVar19;
    uStack_9f6 = (uint)((ulong)uVar19 >> 0x10);
    uStack_9f2 = (undefined2)((ulong)uVar19 >> 0x30);
    bStack_a00 = (byte)uVar15;
    uStack_9ff = (undefined1)((ulong)uVar15 >> 8);
    uStack_9fe = (undefined1)((ulong)uVar15 >> 0x10);
    uStack_9fd = (undefined1)((ulong)uVar15 >> 0x18);
    uStack_9fc = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_9fb = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_9fa = (undefined2)((ulong)uVar15 >> 0x30);
    uStack_9e8 = (undefined2)uVar21;
    local_9e6 = (uint)((ulong)uVar21 >> 0x10);
    local_9e2 = (undefined2)((ulong)uVar21 >> 0x30);
    uStack_9f0 = (undefined2)uVar20;
    local_9ee = (undefined2)((ulong)uVar20 >> 0x10);
    uStack_9ec = (undefined2)((ulong)uVar20 >> 0x20);
    local_9ea = (undefined2)((ulong)uVar20 >> 0x30);
    uVar19 = *(undefined8 *)(param_1 + 0x45);
    uVar15 = *(undefined8 *)(param_1 + 0x41);
    uVar21 = *(undefined8 *)(param_1 + 0x4d);
    uVar20 = *(undefined8 *)(param_1 + 0x49);
    uStack_9d8 = (undefined2)uVar19;
    uStack_9d6 = (uint)((ulong)uVar19 >> 0x10);
    uStack_9d2 = (undefined1)((ulong)uVar19 >> 0x30);
    uStack_9d1 = (undefined1)((ulong)uVar19 >> 0x38);
    uStack_9e0 = (undefined2)uVar15;
    uStack_9de = (uint)((ulong)uVar15 >> 0x10);
    uStack_9da = (undefined2)((ulong)uVar15 >> 0x30);
    uStack_9c8 = (ushort)uVar21;
    local_9c6 = (uint)((ulong)uVar21 >> 0x10);
    local_9c2 = (undefined2)((ulong)uVar21 >> 0x30);
    uStack_9d0 = (ushort)uVar20;
    uStack_9ce = (uint)((ulong)uVar20 >> 0x10);
    uStack_9ca = (undefined1)((ulong)uVar20 >> 0x30);
    uStack_9c9 = (undefined1)((ulong)uVar20 >> 0x38);
    uVar19 = *(undefined8 *)(param_1 + 0x15);
    uVar15 = *(undefined8 *)(param_1 + 0x11);
    uVar21 = *(undefined8 *)(param_1 + 0x1d);
    uVar20 = *(undefined8 *)(param_1 + 0x19);
    uStack_a38 = (ushort)uVar19;
    uStack_a36 = (undefined2)((ulong)uVar19 >> 0x10);
    uStack_a34 = (undefined2)((ulong)uVar19 >> 0x20);
    uStack_a32 = (undefined2)((ulong)uVar19 >> 0x30);
    uStack_a40 = (undefined2)uVar15;
    uStack_a3e = (undefined2)((ulong)uVar15 >> 0x10);
    uStack_a3c = (undefined2)((ulong)uVar15 >> 0x20);
    uStack_a3a = (undefined2)((ulong)uVar15 >> 0x30);
    uStack_a28 = (undefined2)uVar21;
    uStack_a26 = (ushort)((ulong)uVar21 >> 0x10);
    uStack_a24 = (undefined1)((ulong)uVar21 >> 0x20);
    uStack_a23 = (undefined1)((ulong)uVar21 >> 0x28);
    uStack_a22 = (ushort)((ulong)uVar21 >> 0x30);
    local_a30 = (undefined2)uVar20;
    uStack_a2e = (undefined2)((ulong)uVar20 >> 0x10);
    uStack_a2c = (undefined2)((ulong)uVar20 >> 0x20);
    uStack_a2a = (undefined2)((ulong)uVar20 >> 0x30);
    uVar19 = *(undefined8 *)(param_1 + 0x25);
    uVar15 = *(undefined8 *)(param_1 + 0x21);
    uVar21 = *(undefined8 *)(param_1 + 0x2d);
    uVar20 = *(undefined8 *)(param_1 + 0x29);
    uStack_a18 = (undefined2)uVar19;
    uStack_a16 = (ushort)((ulong)uVar19 >> 0x10);
    uStack_a14 = (undefined1)((ulong)uVar19 >> 0x20);
    uStack_a13 = (undefined1)((ulong)uVar19 >> 0x28);
    uStack_a12 = (ushort)((ulong)uVar19 >> 0x30);
    uStack_a20 = (ushort)uVar15;
    uStack_a1e = (ushort)((ulong)uVar15 >> 0x10);
    uStack_a1c = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_a1b = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a1a = (ushort)((ulong)uVar15 >> 0x30);
    auStack_a0c._4_2_ = (undefined2)uVar21;
    uStack_a06 = (uint)((ulong)uVar21 >> 0x10);
    uStack_a02 = (undefined1)((ulong)uVar21 >> 0x30);
    uStack_a01 = (undefined1)((ulong)uVar21 >> 0x38);
    local_a10 = (undefined1)uVar20;
    uStack_a0f = (undefined1)((ulong)uVar20 >> 8);
    uStack_a0e = (ushort)((ulong)uVar20 >> 0x10);
    auStack_a0c._0_2_ = (undefined2)((ulong)uVar20 >> 0x20);
    auStack_a0c._2_2_ = (undefined2)((ulong)uVar20 >> 0x30);
    uVar19 = *(undefined8 *)(param_1 + 5);
    uVar15 = *(undefined8 *)puVar16;
    uVar21 = *(undefined8 *)(param_1 + 0xd);
    uVar20 = *(undefined8 *)(param_1 + 9);
    uStack_a5c._4_1_ = (undefined1)uVar19;
    uStack_a5c._5_1_ = (undefined1)((ulong)uVar19 >> 8);
    uStack_a5c._6_2_ = (ushort)((ulong)uVar19 >> 0x10);
    uStack_a54 = (undefined1)((ulong)uVar19 >> 0x20);
    uStack_a53 = (undefined1)((ulong)uVar19 >> 0x28);
    uStack_a52 = (undefined1)((ulong)uVar19 >> 0x30);
    uStack_a51 = (undefined1)((ulong)uVar19 >> 0x38);
    local_a60._0_1_ = (undefined1)uVar15;
    local_a60._1_1_ = (undefined1)((ulong)uVar15 >> 8);
    local_a60._2_2_ = (ushort)((ulong)uVar15 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_a5c._1_1_ = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a5c._2_1_ = (undefined1)((ulong)uVar15 >> 0x30);
    uStack_a5c._3_1_ = (undefined1)((ulong)uVar15 >> 0x38);
    uStack_a48 = (undefined1)uVar21;
    uStack_a47 = (undefined1)((ulong)uVar21 >> 8);
    uStack_a46 = (ushort)((ulong)uVar21 >> 0x10);
    uStack_a44 = (undefined1)((ulong)uVar21 >> 0x20);
    uStack_a43 = (undefined1)((ulong)uVar21 >> 0x28);
    uStack_a42 = (ushort)((ulong)uVar21 >> 0x30);
    uStack_a50 = (undefined1)uVar20;
    uStack_a4f = (undefined1)((ulong)uVar20 >> 8);
    auStack_a4e = SUB82((ulong)uVar20 >> 0x10,0);
    uStack_a4c = (undefined1)((ulong)uVar20 >> 0x20);
    uStack_a4b = (undefined1)((ulong)uVar20 >> 0x28);
    uStack_a4a = (ushort)((ulong)uVar20 >> 0x30);
    uVar9 = (uint)*(undefined8 *)(param_1 + 0x51);
    uVar11 = (uint)((ulong)*(undefined8 *)(param_1 + 0x51) >> 0x20);
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uStack_9c0 = (undefined2)(uVar9 >> 0x10);
    uStack_9be = (undefined2)uVar9;
    uStack_9bc = (undefined2)(uVar11 >> 0x10);
    uStack_9ba = (undefined2)uVar11;
    uStack_9b8 = (uint)*(undefined8 *)(param_1 + 0x55);
    uStack_9b4 = (uint)((ulong)*(undefined8 *)(param_1 + 0x55) >> 0x20);
    uVar9 = (uStack_9b8 & 0xff00ff00) >> 8 | (uStack_9b8 & 0xff00ff) << 8;
    uVar11 = (uStack_9b4 & 0xff00ff00) >> 8 | (uStack_9b4 & 0xff00ff) << 8;
    _uStack_9b8 = CONCAT44(uVar11 >> 0x10 | uVar11 << 0x10,uVar9 >> 0x10 | uVar9 << 0x10);
    uVar9 = (uint)*(undefined8 *)(param_1 + 0x59);
    uVar11 = (uint)((ulong)*(undefined8 *)(param_1 + 0x59) >> 0x20);
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uStack_9b0 = (undefined2)(uVar9 >> 0x10);
    local_9ae = (undefined2)uVar9;
    uStack_9ac = (undefined2)(uVar11 >> 0x10);
    local_9aa = (undefined2)uVar11;
    uVar9 = (uint)*(undefined8 *)(param_1 + 0x5d);
    uVar11 = (uint)((ulong)*(undefined8 *)(param_1 + 0x5d) >> 0x20);
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uStack_9a8 = (undefined2)(uVar9 >> 0x10);
    local_9a6 = (undefined2)uVar9;
    uStack_9a4 = (undefined2)(uVar11 >> 0x10);
    local_9a2 = (undefined2)uVar11;
    uVar9 = (uint)*(undefined8 *)(param_1 + 0x61);
    uVar11 = (uint)((ulong)*(undefined8 *)(param_1 + 0x61) >> 0x20);
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uStack_9a0 = (undefined2)(uVar9 >> 0x10);
    uStack_99e = (undefined2)uVar9;
    uStack_99c = (undefined2)(uVar11 >> 0x10);
    uStack_99a = (undefined2)uVar11;
    uVar9 = ((uint)uVar12 & 0xff00ff00) >> 8 | ((uint)uVar12 & 0xff00ff) << 8;
    uStack_998 = (undefined2)(uVar9 >> 0x10);
    uStack_996 = (undefined2)uVar9;
    FUN_100123130(&local_a60);
    break;
  case 0x3ef:
    FUN_1003deafc(&local_a60);
    goto LAB_100125e24;
  case 0x3f0:
    FUN_1003dea9c(&local_a60);
    goto LAB_100125e24;
  case 0x3f1:
    FUN_1003d7ac4(&local_a60,*(undefined1 *)((long)param_1 + 5),(char)param_1[3]);
    goto LAB_100125e24;
  case 0x3f2:
    uVar15 = *(undefined8 *)(param_1 + 0x2d);
    auStack_a0c._4_2_ = (undefined2)uVar15;
    uStack_a06 = (uint)((ulong)uVar15 >> 0x10);
    uStack_a02 = (undefined1)((ulong)uVar15 >> 0x30);
    uStack_a01 = (undefined1)((ulong)uVar15 >> 0x38);
    uVar15 = *(undefined8 *)(param_1 + 0x31);
    uStack_9f8 = (undefined2)*(undefined8 *)(param_1 + 0x35);
    bStack_a00 = (byte)uVar15;
    uStack_9ff = (undefined1)((ulong)uVar15 >> 8);
    uStack_9fe = (undefined1)((ulong)uVar15 >> 0x10);
    uStack_9fd = (undefined1)((ulong)uVar15 >> 0x18);
    uStack_9fc = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_9fb = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_9fa = (undefined2)((ulong)uVar15 >> 0x30);
    uVar12 = *(undefined8 *)(param_1 + 0x3a);
    uVar15 = *(undefined8 *)(param_1 + 0x36);
    local_9ee = (undefined2)uVar12;
    uStack_9ec = (undefined2)((ulong)uVar12 >> 0x10);
    local_9ea = (undefined2)((ulong)uVar12 >> 0x20);
    uStack_9e8 = (undefined2)((ulong)uVar12 >> 0x30);
    uStack_9f6 = (uint)uVar15;
    uStack_9f2 = (undefined2)((ulong)uVar15 >> 0x20);
    uStack_9f0 = (undefined2)((ulong)uVar15 >> 0x30);
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 9);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 9) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8));
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a4a = (ushort)(uVar11 >> 8) | (ushort)(uVar6 << 8);
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar10 >> 0x10);
    uStack_a4c = (undefined1)(uVar11 >> 0x18);
    uStack_a4b = (undefined1)(uVar6 >> 0x10);
    uVar10 = (uint)*(undefined8 *)(param_1 + 0xd);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 0xd) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a46 = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a42 = (ushort)(uVar11 >> 8) | (ushort)(uVar6 << 8);
    uStack_a48 = (undefined1)(uVar9 >> 0x18);
    uStack_a47 = (undefined1)(uVar10 >> 0x10);
    uStack_a44 = (undefined1)(uVar11 >> 0x18);
    uStack_a43 = (undefined1)(uVar6 >> 0x10);
    uVar9 = (uint)*(undefined8 *)(param_1 + 0x11);
    uVar11 = (uint)((ulong)*(undefined8 *)(param_1 + 0x11) >> 0x20);
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uStack_a40 = (undefined2)(uVar9 >> 0x10);
    uStack_a3e = (undefined2)uVar9;
    uStack_a3c = (undefined2)(uVar11 >> 0x10);
    uStack_a3a = (undefined2)uVar11;
    uVar9 = (uint)*(undefined8 *)(param_1 + 0x15);
    uVar11 = (uint)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x20);
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uStack_a38 = (ushort)(uVar9 >> 0x10);
    uStack_a36 = (undefined2)uVar9;
    uStack_a34 = (undefined2)(uVar11 >> 0x10);
    uStack_a32 = (undefined2)uVar11;
    uVar9 = (uint)*(undefined8 *)(param_1 + 0x19);
    uVar11 = (uint)((ulong)*(undefined8 *)(param_1 + 0x19) >> 0x20);
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    local_a30 = (undefined2)(uVar9 >> 0x10);
    uStack_a2e = (undefined2)uVar9;
    uStack_a2c = (undefined2)(uVar11 >> 0x10);
    uStack_a2a = (undefined2)uVar11;
    uVar9 = (uint)*(undefined8 *)(param_1 + 0x1d);
    uVar10 = (uint)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x20);
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar11 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a22 = (ushort)(uVar11 >> 8) | (ushort)(uVar10 << 8);
    uStack_a28 = (undefined2)(uVar9 >> 0x10);
    uStack_a26 = (ushort)uVar9;
    uStack_a24 = (undefined1)(uVar11 >> 0x18);
    uStack_a23 = (undefined1)(uVar10 >> 0x10);
    uVar9 = (uint)*(undefined8 *)(param_1 + 0x21);
    uVar10 = (uint)((ulong)*(undefined8 *)(param_1 + 0x21) >> 0x20);
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar11 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a1a = (ushort)(uVar11 >> 8) | (ushort)(uVar10 << 8);
    uStack_a20 = (ushort)(uVar9 >> 0x10);
    uStack_a1e = (ushort)uVar9;
    uStack_a1c = (undefined1)(uVar11 >> 0x18);
    uStack_a1b = (undefined1)(uVar10 >> 0x10);
    uVar9 = (uint)*(undefined8 *)(param_1 + 0x25);
    uVar10 = (uint)((ulong)*(undefined8 *)(param_1 + 0x25) >> 0x20);
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar11 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a12 = (ushort)(uVar11 >> 8) | (ushort)(uVar10 << 8);
    uStack_a18 = (undefined2)(uVar9 >> 0x10);
    uStack_a16 = (ushort)uVar9;
    uStack_a14 = (undefined1)(uVar11 >> 0x18);
    uStack_a13 = (undefined1)(uVar10 >> 0x10);
    uVar10 = (uint)*(undefined8 *)(param_1 + 0x29);
    uVar9 = (uint)((ulong)*(undefined8 *)(param_1 + 0x29) >> 0x20);
    uVar11 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a0e = (ushort)(uVar11 >> 8) | (ushort)(uVar10 << 8);
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    local_a10 = (undefined1)(uVar11 >> 0x18);
    uStack_a0f = (undefined1)(uVar10 >> 0x10);
    auStack_a0c._0_2_ = (undefined2)(uVar9 >> 0x10);
    auStack_a0c._2_2_ = (undefined2)uVar9;
    uVar9 = (CONCAT22(local_9ee,uStack_9f0) & 0xff00ff00) >> 8 |
            (CONCAT22(local_9ee,uStack_9f0) & 0xff00ff) << 8;
    uStack_9f0 = (undefined2)(uVar9 >> 0x10);
    local_9ee = (undefined2)uVar9;
    FUN_1001225a4(&local_a60);
    break;
  case 0x3f3:
    _memcpy(&local_a60,puVar16,0x2ea);
    uVar4 = uStack_902;
    uVar10 = CONCAT22(local_a60._2_2_,CONCAT11(local_a60._1_1_,(undefined1)local_a60));
    uVar7 = CONCAT12(uStack_a5c._2_1_,CONCAT11(uStack_a5c._1_1_,(undefined1)uStack_a5c));
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = CONCAT13(uStack_a5c._3_1_,uVar7) & 0xff00ff00;
    uVar6 = uVar7 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = CONCAT22(uStack_a5c._6_2_,CONCAT11(uStack_a5c._5_1_,uStack_a5c._4_1_));
    uVar7 = CONCAT12(uStack_a52,CONCAT11(uStack_a53,uStack_a54));
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = CONCAT13(uStack_a51,uVar7) & 0xff00ff00;
    uVar6 = uVar7 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    uVar9 = CONCAT13(uStack_a4b,CONCAT12(uStack_a4c,auStack_a4e)) & 0xff00ff00;
    uVar11 = CONCAT12(uStack_a4c,auStack_a4e) & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar11 >> 8));
    uStack_a4c = (undefined1)(uVar9 >> 8);
    uStack_a4b = (undefined1)uVar11;
    uVar9 = CONCAT13(uStack_a47,CONCAT12(uStack_a48,uStack_a4a)) & 0xff00ff00;
    uVar11 = CONCAT12(uStack_a48,uStack_a4a) & 0xff00ff;
    uStack_a4a = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar11 >> 8);
    uStack_a48 = (undefined1)(uVar9 >> 8);
    uStack_a47 = (undefined1)uVar11;
    uVar9 = CONCAT13(uStack_a43,CONCAT12(uStack_a44,uStack_a46)) & 0xff00ff00;
    uVar11 = CONCAT12(uStack_a44,uStack_a46) & 0xff00ff;
    uStack_a46 = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar11 >> 8);
    uStack_a44 = (undefined1)(uVar9 >> 8);
    uStack_a43 = (undefined1)uVar11;
    uVar9 = (CONCAT22(uStack_a40,uStack_a42) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a40,uStack_a42) & 0xff00ff) << 8;
    uStack_a42 = (ushort)(uVar9 >> 0x10);
    uStack_a40 = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_a3c,uStack_a3e) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a3c,uStack_a3e) & 0xff00ff) << 8;
    uStack_a3e = (undefined2)(uVar9 >> 0x10);
    uStack_a3c = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_a38,uStack_a3a) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a38,uStack_a3a) & 0xff00ff) << 8;
    uStack_a3a = (undefined2)(uVar9 >> 0x10);
    uStack_a38 = (ushort)uVar9;
    uVar9 = (CONCAT22(uStack_a34,uStack_a36) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a34,uStack_a36) & 0xff00ff) << 8;
    uStack_a36 = (undefined2)(uVar9 >> 0x10);
    uStack_a34 = (undefined2)uVar9;
    uVar9 = (CONCAT22(local_a30,uStack_a32) & 0xff00ff00) >> 8 |
            (CONCAT22(local_a30,uStack_a32) & 0xff00ff) << 8;
    uStack_a32 = (undefined2)(uVar9 >> 0x10);
    local_a30 = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_a2c,uStack_a2e) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a2c,uStack_a2e) & 0xff00ff) << 8;
    uStack_a2e = (undefined2)(uVar9 >> 0x10);
    uStack_a2c = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_a28,uStack_a2a) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a28,uStack_a2a) & 0xff00ff) << 8;
    uStack_a2a = (undefined2)(uVar9 >> 0x10);
    uStack_a28 = (undefined2)uVar9;
    uVar9 = CONCAT13(uStack_a23,CONCAT12(uStack_a24,uStack_a26)) & 0xff00ff00;
    uVar11 = CONCAT12(uStack_a24,uStack_a26) & 0xff00ff;
    uStack_a26 = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar11 >> 8);
    uStack_a24 = (undefined1)(uVar9 >> 8);
    uStack_a23 = (undefined1)uVar11;
    uVar9 = (CONCAT22(uStack_a20,uStack_a22) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a20,uStack_a22) & 0xff00ff) << 8;
    uStack_a22 = (ushort)(uVar9 >> 0x10);
    uStack_a20 = (ushort)uVar9;
    uVar9 = CONCAT13(uStack_a1b,CONCAT12(uStack_a1c,uStack_a1e)) & 0xff00ff00;
    uVar11 = CONCAT12(uStack_a1c,uStack_a1e) & 0xff00ff;
    uStack_a1e = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar11 >> 8);
    uStack_a1c = (undefined1)(uVar9 >> 8);
    uStack_a1b = (undefined1)uVar11;
    uVar9 = (CONCAT22(uStack_a18,uStack_a1a) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_a18,uStack_a1a) & 0xff00ff) << 8;
    uStack_a1a = (ushort)(uVar9 >> 0x10);
    uStack_a18 = (undefined2)uVar9;
    uVar9 = (local_90e & 0xff00ff00) >> 8 | (local_90e & 0xff00ff) << 8;
    uVar11 = (uStack_90a & 0xff00ff00) >> 8 | (uStack_90a & 0xff00ff) << 8;
    local_90e = uVar9 >> 0x10 | uVar9 << 0x10;
    uStack_90a = uVar11 >> 0x10 | uVar11 << 0x10;
    uVar11 = (local_906 & 0xff00ff00) >> 8 | (local_906 & 0xff00ff) << 8;
    uVar9 = CONCAT13(uStack_a13,CONCAT12(uStack_a14,uStack_a16)) & 0xff00ff00;
    uVar10 = CONCAT12(uStack_a14,uStack_a16) & 0xff00ff;
    uStack_a16 = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar10 >> 8);
    uStack_a14 = (undefined1)(uVar9 >> 8);
    uStack_a13 = (undefined1)uVar10;
    uVar9 = CONCAT13(uStack_a0f,CONCAT12(local_a10,uStack_a12)) & 0xff00ff00;
    uVar10 = CONCAT12(local_a10,uStack_a12) & 0xff00ff;
    uStack_a12 = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar10 >> 8);
    local_a10 = (undefined1)(uVar9 >> 8);
    uStack_a0f = (undefined1)uVar10;
    uVar9 = (CONCAT22(auStack_a0c._0_2_,uStack_a0e) & 0xff00ff00) >> 8 |
            (CONCAT22(auStack_a0c._0_2_,uStack_a0e) & 0xff00ff) << 8;
    uStack_a0e = (ushort)(uVar9 >> 0x10);
    auStack_a0c._0_2_ = (undefined2)uVar9;
    uVar9 = (CONCAT22(auStack_a0c._4_2_,auStack_a0c._2_2_) & 0xff00ff00) >> 8 |
            (CONCAT22(auStack_a0c._4_2_,auStack_a0c._2_2_) & 0xff00ff) << 8;
    auStack_a0c._2_2_ = (undefined2)(uVar9 >> 0x10);
    auStack_a0c._4_2_ = (undefined2)uVar9;
    uVar9 = (uStack_a06 & 0xff00ff00) >> 8 | (uStack_a06 & 0xff00ff) << 8;
    uStack_a06 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar7 = CONCAT12(bStack_a00,CONCAT11(uStack_a01,uStack_a02));
    uVar9 = CONCAT13(uStack_9ff,uVar7) & 0xff00ff00;
    uVar10 = uVar7 & 0xff00ff;
    uStack_a02 = (undefined1)(uVar9 >> 0x18);
    uStack_a01 = (undefined1)(uVar10 >> 0x10);
    bStack_a00 = (byte)(uVar9 >> 8);
    uStack_9ff = (undefined1)uVar10;
    uVar7 = CONCAT12(uStack_9fc,CONCAT11(uStack_9fd,uStack_9fe));
    uVar9 = CONCAT13(uStack_9fb,uVar7) & 0xff00ff00;
    uVar10 = uVar7 & 0xff00ff;
    uStack_9fe = (undefined1)(uVar9 >> 0x18);
    uStack_9fd = (undefined1)(uVar10 >> 0x10);
    uStack_9fc = (undefined1)(uVar9 >> 8);
    uStack_9fb = (undefined1)uVar10;
    uVar9 = (CONCAT22(uStack_9f8,uStack_9fa) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9f8,uStack_9fa) & 0xff00ff) << 8;
    uStack_9fa = (undefined2)(uVar9 >> 0x10);
    uStack_9f8 = (undefined2)uVar9;
    uVar9 = (uStack_9f6 & 0xff00ff00) >> 8 | (uStack_9f6 & 0xff00ff) << 8;
    uStack_9f6 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (CONCAT22(uStack_9f0,uStack_9f2) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9f0,uStack_9f2) & 0xff00ff) << 8;
    uStack_9f2 = (undefined2)(uVar9 >> 0x10);
    uStack_9f0 = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_9ec,local_9ee) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9ec,local_9ee) & 0xff00ff) << 8;
    local_9ee = (undefined2)(uVar9 >> 0x10);
    uStack_9ec = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_9e8,local_9ea) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9e8,local_9ea) & 0xff00ff) << 8;
    local_9ea = (undefined2)(uVar9 >> 0x10);
    uStack_9e8 = (undefined2)uVar9;
    uVar9 = (local_9e6 & 0xff00ff00) >> 8 | (local_9e6 & 0xff00ff) << 8;
    local_9e6 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (CONCAT22(uStack_9e0,local_9e2) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9e0,local_9e2) & 0xff00ff) << 8;
    local_9e2 = (undefined2)(uVar9 >> 0x10);
    uStack_9e0 = (undefined2)uVar9;
    uVar9 = (uStack_9de & 0xff00ff00) >> 8 | (uStack_9de & 0xff00ff) << 8;
    uStack_9de = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (CONCAT22(uStack_9d8,uStack_9da) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9d8,uStack_9da) & 0xff00ff) << 8;
    uStack_9da = (undefined2)(uVar9 >> 0x10);
    uStack_9d8 = (undefined2)uVar9;
    uVar9 = (uStack_9d6 & 0xff00ff00) >> 8 | (uStack_9d6 & 0xff00ff) << 8;
    uStack_9d6 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar10 = CONCAT22(uStack_9d0,CONCAT11(uStack_9d1,uStack_9d2));
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_9d0 = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uStack_9d2 = (undefined1)(uVar9 >> 0x18);
    uStack_9d1 = (undefined1)(uVar10 >> 0x10);
    uVar9 = (uStack_9ce & 0xff00ff00) >> 8 | (uStack_9ce & 0xff00ff) << 8;
    uStack_9ce = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar10 = CONCAT22(uStack_9c8,CONCAT11(uStack_9c9,uStack_9ca));
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_9c8 = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uStack_9ca = (undefined1)(uVar9 >> 0x18);
    uStack_9c9 = (undefined1)(uVar10 >> 0x10);
    uVar9 = (local_9c6 & 0xff00ff00) >> 8 | (local_9c6 & 0xff00ff) << 8;
    local_9c6 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (CONCAT22(uStack_9c0,local_9c2) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9c0,local_9c2) & 0xff00ff) << 8;
    local_9c2 = (undefined2)(uVar9 >> 0x10);
    uStack_9c0 = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_9bc,uStack_9be) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9bc,uStack_9be) & 0xff00ff) << 8;
    uStack_9be = (undefined2)(uVar9 >> 0x10);
    uStack_9bc = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_9ac,local_9ae) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9ac,local_9ae) & 0xff00ff) << 8;
    local_9ae = (undefined2)(uVar9 >> 0x10);
    uStack_9ac = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_9a8,local_9aa) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9a8,local_9aa) & 0xff00ff) << 8;
    local_9aa = (undefined2)(uVar9 >> 0x10);
    uStack_9a8 = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_9a4,local_9a6) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9a4,local_9a6) & 0xff00ff) << 8;
    local_9a6 = (undefined2)(uVar9 >> 0x10);
    uStack_9a4 = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_9a0,local_9a2) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_9a0,local_9a2) & 0xff00ff) << 8;
    local_9a2 = (undefined2)(uVar9 >> 0x10);
    uStack_9a0 = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_99c,uStack_99e) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_99c,uStack_99e) & 0xff00ff) << 8;
    uStack_99e = (undefined2)(uVar9 >> 0x10);
    uStack_99c = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_998,uStack_99a) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_998,uStack_99a) & 0xff00ff) << 8;
    uStack_99a = (undefined2)(uVar9 >> 0x10);
    uStack_998 = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_994,uStack_996) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_994,uStack_996) & 0xff00ff) << 8;
    uStack_996 = (undefined2)(uVar9 >> 0x10);
    uStack_994 = (undefined2)uVar9;
    uVar9 = (CONCAT22(uStack_990,uStack_992) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_990,uStack_992) & 0xff00ff) << 8;
    uStack_992 = (undefined2)(uVar9 >> 0x10);
    uStack_990 = (undefined2)uVar9;
    uVar9 = (uStack_98e & 0xff00ff00) >> 8 | (uStack_98e & 0xff00ff) << 8;
    uStack_98e = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (CONCAT22(uStack_988,local_98a) & 0xff00ff00) >> 8 |
            (CONCAT22(uStack_988,local_98a) & 0xff00ff) << 8;
    local_98a = (undefined2)(uVar9 >> 0x10);
    uStack_988 = (undefined2)uVar9;
    uVar9 = (local_986 & 0xff00ff00) >> 8 | (local_986 & 0xff00ff) << 8;
    local_986 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_982 & 0xff00ff00) >> 8 | (local_982 & 0xff00ff) << 8;
    local_982 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_97e & 0xff00ff00) >> 8 | (local_97e & 0xff00ff) << 8;
    local_97e = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_97a & 0xff00ff00) >> 8 | (local_97a & 0xff00ff) << 8;
    local_97a = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_976 & 0xff00ff00) >> 8 | (local_976 & 0xff00ff) << 8;
    local_976 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_972 & 0xff00ff00) >> 8 | (local_972 & 0xff00ff) << 8;
    local_972 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_96e & 0xff00ff00) >> 8 | (local_96e & 0xff00ff) << 8;
    local_96e = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_96a & 0xff00ff00) >> 8 | (local_96a & 0xff00ff) << 8;
    local_96a = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_966 & 0xff00ff00) >> 8 | (local_966 & 0xff00ff) << 8;
    local_966 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_962 & 0xff00ff00) >> 8 | (local_962 & 0xff00ff) << 8;
    local_962 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_95e & 0xff00ff00) >> 8 | (local_95e & 0xff00ff) << 8;
    uVar10 = (uStack_95a & 0xff00ff00) >> 8 | (uStack_95a & 0xff00ff) << 8;
    local_95e = uVar9 >> 0x10 | uVar9 << 0x10;
    uStack_95a = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar9 = (local_956 & 0xff00ff00) >> 8 | (local_956 & 0xff00ff) << 8;
    uVar10 = ((uint)auStack_952 & 0xff00ff00) >> 8 | ((uint)auStack_952 & 0xff00ff) << 8;
    local_956 = uVar9 >> 0x10 | uVar9 << 0x10;
    auStack_952 = (undefined1  [4])(uVar10 >> 0x10 | uVar10 << 0x10);
    uVar9 = (uStack_94e & 0xff00ff00) >> 8 | (uStack_94e & 0xff00ff) << 8;
    uVar10 = (uStack_94a & 0xff00ff00) >> 8 | (uStack_94a & 0xff00ff) << 8;
    uStack_94e = uVar9 >> 0x10 | uVar9 << 0x10;
    uStack_94a = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar9 = (local_946 & 0xff00ff00) >> 8 | (local_946 & 0xff00ff) << 8;
    uVar10 = (uStack_942 & 0xff00ff00) >> 8 | (uStack_942 & 0xff00ff) << 8;
    local_946 = uVar9 >> 0x10 | uVar9 << 0x10;
    uStack_942 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar9 = (local_93e & 0xff00ff00) >> 8 | (local_93e & 0xff00ff) << 8;
    uVar10 = (uStack_93a & 0xff00ff00) >> 8 | (uStack_93a & 0xff00ff) << 8;
    local_93e = uVar9 >> 0x10 | uVar9 << 0x10;
    uStack_93a = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar9 = (local_936 & 0xff00ff00) >> 8 | (local_936 & 0xff00ff) << 8;
    uVar10 = (uStack_932 & 0xff00ff00) >> 8 | (uStack_932 & 0xff00ff) << 8;
    local_936 = uVar9 >> 0x10 | uVar9 << 0x10;
    uStack_932 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar9 = (local_92e & 0xff00ff00) >> 8 | (local_92e & 0xff00ff) << 8;
    uVar10 = (uStack_92a & 0xff00ff00) >> 8 | (uStack_92a & 0xff00ff) << 8;
    local_92e = uVar9 >> 0x10 | uVar9 << 0x10;
    uStack_92a = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar9 = (local_926 & 0xff00ff00) >> 8 | (local_926 & 0xff00ff) << 8;
    uVar10 = (uStack_922 & 0xff00ff00) >> 8 | (uStack_922 & 0xff00ff) << 8;
    local_926 = uVar9 >> 0x10 | uVar9 << 0x10;
    uStack_922 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar9 = (local_91e & 0xff00ff00) >> 8 | (local_91e & 0xff00ff) << 8;
    uVar10 = (uStack_91a & 0xff00ff00) >> 8 | (uStack_91a & 0xff00ff) << 8;
    local_91e = uVar9 >> 0x10 | uVar9 << 0x10;
    uStack_91a = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar9 = (local_916 & 0xff00ff00) >> 8 | (local_916 & 0xff00ff) << 8;
    uVar10 = (uStack_912 & 0xff00ff00) >> 8 | (uStack_912 & 0xff00ff) << 8;
    local_916 = uVar9 >> 0x10 | uVar9 << 0x10;
    uStack_912 = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar9 = (uStack_902 & 0xff00ff00) >> 8 | (uStack_902 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    local_906 = uVar11 >> 0x10 | uVar11 << 0x10;
    uStack_902 = uVar9;
    uVar11 = (local_80f & 0xff00ff00) >> 8 | (local_80f & 0xff00ff) << 8;
    local_80f = uVar11 >> 0x10 | uVar11 << 0x10;
    uVar11 = (local_79f & 0xff00ff00) >> 8 | (local_79f & 0xff00ff) << 8;
    uVar10 = (uStack_79b & 0xff00ff00) >> 8 | (uStack_79b & 0xff00ff) << 8;
    local_79f = uVar11 >> 0x10 | uVar11 << 0x10;
    uStack_79b = uVar10 >> 0x10 | uVar10 << 0x10;
    uVar11 = (local_77f & 0xff00ff00) >> 8 | (local_77f & 0xff00ff) << 8;
    uVar10 = (uStack_77b & 0xff00ff00) >> 8 | (uStack_77b & 0xff00ff) << 8;
    local_77f = uVar11 >> 0x10 | uVar11 << 0x10;
    uStack_77b = uVar10 >> 0x10 | uVar10 << 0x10;
    if (uVar4 != 0) {
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      uVar14 = (ulong)uVar9;
      puVar16 = local_8ae;
      do {
        uVar9 = (puVar16[-0x14] & 0xff00ff00) >> 8 | (puVar16[-0x14] & 0xff00ff) << 8;
        puVar16[-0x14] = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = (puVar16[-10] & 0xff00ff00) >> 8 | (puVar16[-10] & 0xff00ff) << 8;
        puVar16[-10] = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
        *puVar16 = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = (puVar16[10] & 0xff00ff00) >> 8 | (puVar16[10] & 0xff00ff) << 8;
        puVar16[10] = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = (puVar16[0x14] & 0xff00ff00) >> 8 | (puVar16[0x14] & 0xff00ff) << 8;
        puVar16[0x14] = uVar9 >> 0x10 | uVar9 << 0x10;
        puVar16 = puVar16 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (local_80f != 0) {
      uVar14 = 0;
      do {
        uVar9 = local_836[uVar14];
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        local_836[uVar14] = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = local_836[uVar14 + 3];
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        local_836[uVar14 + 3] = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = local_836[uVar14 + 6];
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        local_836[uVar14 + 6] = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar14 = uVar14 + 1;
      } while (uVar14 < local_80f);
    }
    uVar14 = (ulong)local_80b;
    if (local_80b != 0) {
      puVar16 = local_7c7;
      do {
        uVar9 = (puVar16[-0x10] & 0xff00ff00) >> 8 | (puVar16[-0x10] & 0xff00ff) << 8;
        puVar16[-0x10] = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = (puVar16[-8] & 0xff00ff00) >> 8 | (puVar16[-8] & 0xff00ff) << 8;
        puVar16[-8] = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar9 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
        *puVar16 = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar14 = uVar14 - 1;
        puVar16 = puVar16 + 1;
      } while (uVar14 != 0);
    }
    uVar9 = (local_7a7 & 0xff00ff00) >> 8 | (local_7a7 & 0xff00ff) << 8;
    local_7a7 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (uStack_7a3 & 0xff00ff00) >> 8 | (uStack_7a3 & 0xff00ff) << 8;
    uStack_7a3 = uVar9 >> 0x10 | uVar9 << 0x10;
    FUN_100122744(&local_a60);
    break;
  case 0x3f4:
  case 0x3f5:
  case 0x3f6:
  case 0x3f7:
  case 0x40c:
  case 0x411:
  case 0x412:
  case 0x413:
  case 0x414:
  case 0x424:
  case 0x426:
  case 0x42a:
  case 0x42d:
  case 0x436:
  case 0x438:
  case 0x448:
  case 0x449:
  case 0x44a:
  case 0x450:
  case 0x455:
  case 0x456:
  case 0x457:
  case 0x458:
  case 0x45d:
  case 0x45e:
  case 0x45f:
  case 0x460:
  case 0x461:
  case 0x462:
  case 0x463:
  case 0x464:
  case 0x465:
  case 0x466:
  case 0x467:
  case 0x468:
  case 0x469:
  case 0x46a:
  case 0x46b:
  case 0x46d:
  case 0x46e:
  case 0x472:
  case 0x474:
  case 0x47a:
  case 0x47b:
  case 0x484:
  case 0x485:
  case 0x486:
  case 0x48e:
    break;
  case 0x3f8:
    uVar15 = *(undefined8 *)puVar16;
    local_a60._0_1_ = (undefined1)uVar15;
    uVar11 = (uint)((ulong)uVar15 >> 8);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    local_a60._2_2_ = (ushort)(byte)(uVar11 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    local_a60._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._0_1_ = (undefined1)uVar11;
    uVar7 = (uint3)((ulong)uVar15 >> 0x28);
    uVar9 = CONCAT13((char)param_1[5],uVar7) & 0xff00ff00;
    uVar11 = uVar7 & 0xff00ff;
    uStack_a5c._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 0x10);
    uStack_a5c._3_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._4_1_ = (undefined1)uVar11;
    FUN_100121f24(&local_a60);
    break;
  case 0x3f9:
    uVar15 = *(undefined8 *)puVar16;
    local_a60._0_1_ = (undefined1)uVar15;
    uStack_a5c._1_1_ = (undefined1)((ulong)uVar15 >> 0x28);
    uVar12 = *(undefined8 *)(param_1 + 4);
    uStack_a5c._2_1_ = (undefined1)uVar12;
    uStack_a5c._3_1_ = (undefined1)((ulong)uVar12 >> 8);
    uStack_a5c._4_1_ = (undefined1)((ulong)uVar12 >> 0x10);
    uStack_a53 = (undefined1)((ulong)uVar12 >> 0x38);
    uVar11 = (uint)((ulong)uVar15 >> 8);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    local_a60._2_2_ = (ushort)(byte)(uVar11 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    local_a60._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._0_1_ = (undefined1)uVar11;
    uVar7 = CONCAT12(uStack_a5c._3_1_,CONCAT11(uStack_a5c._2_1_,uStack_a5c._1_1_));
    uVar9 = CONCAT13(uStack_a5c._4_1_,uVar7) & 0xff00ff00;
    uVar11 = uVar7 & 0xff00ff;
    uStack_a5c._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 0x10);
    uStack_a5c._3_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._4_1_ = (undefined1)uVar11;
    uVar11 = (uint)((ulong)uVar12 >> 0x18);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(byte)(uVar11 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    uStack_a5c._5_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a54 = (undefined1)uVar11;
    FUN_100121f74(&local_a60);
    break;
  case 0x3fa:
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    uVar9 = *(uint *)(param_1 + 9) & 0xff00ff00;
    uVar11 = *(uint *)(param_1 + 9) & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar11 << 8));
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar11 >> 0x10);
    FUN_100122070(&local_a60);
    break;
  case 0x3fb:
    uStack_a50 = (undefined1)param_1[9];
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    FUN_100121fcc(&local_a60);
    break;
  case 0x3fc:
    uVar12 = *(undefined8 *)(param_1 + 5);
    uVar15 = *(undefined8 *)puVar16;
    uStack_a5c._4_1_ = (undefined1)uVar12;
    local_a60._0_1_ = (undefined1)uVar15;
    uVar11 = (uint)((ulong)uVar15 >> 8);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    local_a60._2_2_ = (ushort)(byte)(uVar11 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    local_a60._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._0_1_ = (undefined1)uVar11;
    uVar7 = (uint3)((ulong)uVar15 >> 0x28);
    uVar9 = CONCAT13(uStack_a5c._4_1_,uVar7) & 0xff00ff00;
    uVar11 = uVar7 & 0xff00ff;
    uStack_a5c._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 0x10);
    uStack_a5c._3_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._4_1_ = (undefined1)uVar11;
    uVar11 = (uint)((ulong)uVar12 >> 8);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(byte)(uVar11 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    uStack_a5c._5_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a54 = (undefined1)uVar11;
    uVar7 = (uint3)((ulong)uVar12 >> 0x28);
    uVar9 = CONCAT13((char)param_1[9],uVar7) & 0xff00ff00;
    uVar11 = uVar7 & 0xff00ff;
    uStack_a53 = (undefined1)(uVar9 >> 0x18);
    uStack_a52 = (undefined1)(uVar11 >> 0x10);
    uStack_a51 = (undefined1)(uVar9 >> 8);
    uStack_a50 = (undefined1)uVar11;
    FUN_100122024(&local_a60);
    break;
  case 0x3fd:
    uVar9 = (*(uint *)((long)param_1 + 3) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_1 + 3) & 0xff00ff) << 8;
    local_a68 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (*(uint *)((long)param_1 + 7) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_1 + 7) & 0xff00ff) << 8;
    uStack_a64 = uVar9 >> 0x10 | uVar9 << 0x10;
    FUN_100010cfc(&local_a60,(char)param_1[1],&local_a68);
    goto LAB_100125e24;
  case 0x3fe:
    uVar12 = *(undefined8 *)(param_1 + 5);
    uVar15 = *(undefined8 *)puVar16;
    uStack_a5c._4_1_ = (undefined1)uVar12;
    local_a60._0_1_ = (undefined1)uVar15;
    uVar11 = (uint)((ulong)uVar15 >> 8);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    local_a60._2_2_ = (ushort)(byte)(uVar11 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    local_a60._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._0_1_ = (undefined1)uVar11;
    uVar7 = (uint3)((ulong)uVar15 >> 0x28);
    uVar9 = CONCAT13(uStack_a5c._4_1_,uVar7) & 0xff00ff00;
    uVar11 = uVar7 & 0xff00ff;
    uStack_a5c._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 0x10);
    uStack_a5c._3_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._4_1_ = (undefined1)uVar11;
    uVar11 = (uint)((ulong)uVar12 >> 8);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(byte)(uVar11 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    uStack_a5c._5_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a54 = (undefined1)uVar11;
    uVar7 = (uint3)((ulong)uVar12 >> 0x28);
    uVar9 = CONCAT13((char)param_1[9],uVar7) & 0xff00ff00;
    uVar11 = uVar7 & 0xff00ff;
    uStack_a53 = (undefined1)(uVar9 >> 0x18);
    uStack_a52 = (undefined1)(uVar11 >> 0x10);
    uStack_a51 = (undefined1)(uVar9 >> 8);
    uStack_a50 = (undefined1)uVar11;
    FUN_1001220c0(&local_a60);
    break;
  case 0x3ff:
    uVar15 = *(undefined8 *)puVar16;
    local_a60._0_1_ = (undefined1)uVar15;
    uStack_a5c._4_1_ = (undefined1)param_1[5];
    uStack_a5c._5_1_ = (undefined1)(param_1[5] >> 8);
    uVar11 = (uint)((ulong)uVar15 >> 8);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    local_a60._2_2_ = (ushort)(byte)(uVar11 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    local_a60._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._0_1_ = (undefined1)uVar11;
    uVar7 = (uint3)((ulong)uVar15 >> 0x28);
    uVar9 = CONCAT13(uStack_a5c._4_1_,uVar7) & 0xff00ff00;
    uVar11 = uVar7 & 0xff00ff;
    uStack_a5c._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 0x10);
    uStack_a5c._3_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._4_1_ = (undefined1)uVar11;
    FUN_10012210c(&local_a60);
    break;
  case 0x400:
    uVar9 = (*(uint *)((long)param_1 + 3) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_1 + 3) & 0xff00ff) << 8;
    local_a68 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (*(uint *)((long)param_1 + 7) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_1 + 7) & 0xff00ff) << 8;
    uStack_a64 = uVar9 >> 0x10 | uVar9 << 0x10;
    FUN_100012010(&local_a60,(char)param_1[1],&local_a68);
    goto LAB_100125e24;
  case 0x401:
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    FUN_10012215c(&local_a60);
    break;
  case 0x402:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar10 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    FUN_1003a82d8(uVar11 >> 0x10 | uVar11 << 0x10,uVar10 >> 0x10 | uVar10 << 0x10,&local_a60,
                  uVar9 >> 0x10 | uVar9 << 0x10,*(int *)(param_1 + 7) != 0);
    goto LAB_100125e24;
  case 0x403:
    uStack_a54 = (undefined1)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar15 = *(undefined8 *)((long)param_1 + 0xf);
    uStack_a53 = (undefined1)uVar15;
    uStack_a52 = (undefined1)((ulong)uVar15 >> 8);
    uStack_a51 = (undefined1)((ulong)uVar15 >> 0x10);
    uStack_a4c = (undefined1)((ulong)uVar15 >> 0x38);
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar7 = CONCAT12(uStack_a52,CONCAT11(uStack_a53,uStack_a54));
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = CONCAT13(uStack_a51,uVar7) & 0xff00ff00;
    uVar6 = uVar7 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    uVar11 = (uint)((ulong)uVar15 >> 0x18);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar11 << 8));
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar11 >> 0x10);
    FUN_1001221a8(&local_a60);
    break;
  case 0x404:
    uVar15 = *(undefined8 *)puVar16;
    local_a60._0_1_ = (undefined1)uVar15;
    uVar12 = *(undefined8 *)((long)param_1 + 9);
    uStack_a5c._3_1_ = (undefined1)uVar12;
    uStack_a5c._4_1_ = (undefined1)((ulong)uVar12 >> 8);
    uStack_a53 = (undefined1)((ulong)uVar12 >> 0x30);
    uStack_a52 = (undefined1)((ulong)uVar12 >> 0x38);
    uVar11 = (uint)((ulong)uVar15 >> 8);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    local_a60._2_2_ = (ushort)(byte)(uVar11 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    local_a60._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._0_1_ = (undefined1)uVar11;
    uVar7 = CONCAT12(uStack_a5c._3_1_,(short)((ulong)uVar15 >> 0x28));
    uVar9 = CONCAT13(uStack_a5c._4_1_,uVar7) & 0xff00ff00;
    uVar11 = uVar7 & 0xff00ff;
    uStack_a5c._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 0x10);
    uStack_a5c._3_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._4_1_ = (undefined1)uVar11;
    uVar11 = (uint)((ulong)uVar12 >> 0x10);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(byte)(uVar11 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    uStack_a5c._5_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a54 = (undefined1)uVar11;
    FUN_100122204(&local_a60);
    break;
  case 0x405:
    uVar15 = *(undefined8 *)puVar16;
    uStack_a5c._4_1_ = (undefined1)*(undefined8 *)(param_1 + 5);
    local_a60._0_1_ = (undefined1)uVar15;
    uVar11 = (uint)((ulong)uVar15 >> 8);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    local_a60._2_2_ = (ushort)(byte)(uVar11 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    local_a60._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._0_1_ = (undefined1)uVar11;
    uVar7 = (uint3)((ulong)uVar15 >> 0x28);
    uVar9 = CONCAT13(uStack_a5c._4_1_,uVar7) & 0xff00ff00;
    uVar11 = uVar7 & 0xff00ff;
    uStack_a5c._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 0x10);
    uStack_a5c._3_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._4_1_ = (undefined1)uVar11;
    uVar11 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 8);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(byte)(uVar11 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    uStack_a5c._5_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a54 = (undefined1)uVar11;
    uVar11 = (uint)*(undefined8 *)((long)param_1 + 0xf);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    uStack_a53 = (undefined1)(uVar9 >> 0x18);
    uStack_a52 = (undefined1)(uVar11 >> 0x10);
    uStack_a51 = (undefined1)(uVar9 >> 8);
    uStack_a50 = (undefined1)uVar11;
    uVar11 = (uint)((ulong)*(undefined8 *)((long)param_1 + 0xf) >> 0x20);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    auStack_a4e = (undefined1  [2])
                  ((ushort)(byte)(uVar11 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8));
    uStack_a4f = (undefined1)(uVar9 >> 0x18);
    uStack_a4c = (undefined1)uVar11;
    FUN_10012225c(&local_a60);
    break;
  case 0x406:
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 9);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 9) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8));
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a4a = (ushort)(uVar11 >> 8) | (ushort)(uVar6 << 8);
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar10 >> 0x10);
    uStack_a4c = (undefined1)(uVar11 >> 0x18);
    uStack_a4b = (undefined1)(uVar6 >> 0x10);
    uVar10 = (uint)*(undefined8 *)(param_1 + 0xd);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 0xd) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a46 = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a42 = (ushort)(uVar11 >> 8) | (ushort)(uVar6 << 8);
    uStack_a48 = (undefined1)(uVar9 >> 0x18);
    uStack_a47 = (undefined1)(uVar10 >> 0x10);
    uStack_a44 = (undefined1)(uVar11 >> 0x18);
    uStack_a43 = (undefined1)(uVar6 >> 0x10);
    FUN_1001222a8(&local_a60);
    break;
  case 0x407:
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    FUN_100122314(&local_a60);
    break;
  case 0x408:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    local_a68 = uVar9 >> 0x10 | uVar9 << 0x10;
    FUN_100010314(&local_a60,(char)param_1[3],*(undefined1 *)((long)param_1 + 7),&local_a68);
    goto LAB_100125e24;
  case 0x409:
    uStack_a50 = (undefined1)param_1[9];
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    FUN_100122360(&local_a60);
    break;
  case 0x40a:
    uVar12 = *(undefined8 *)(param_1 + 5);
    uVar15 = *(undefined8 *)puVar16;
    uStack_a5c._4_1_ = (undefined1)uVar12;
    local_a60._0_1_ = (undefined1)uVar15;
    uVar11 = (uint)((ulong)uVar15 >> 8);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    local_a60._2_2_ = (ushort)(byte)(uVar11 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    local_a60._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._0_1_ = (undefined1)uVar11;
    uVar7 = (uint3)((ulong)uVar15 >> 0x28);
    uVar9 = CONCAT13(uStack_a5c._4_1_,uVar7) & 0xff00ff00;
    uVar11 = uVar7 & 0xff00ff;
    uStack_a5c._1_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 0x10);
    uStack_a5c._3_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._4_1_ = (undefined1)uVar11;
    uVar11 = (uint)((ulong)uVar12 >> 8);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(byte)(uVar11 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    uStack_a5c._5_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a54 = (undefined1)uVar11;
    uVar7 = (uint3)((ulong)uVar12 >> 0x28);
    uVar9 = CONCAT13((char)param_1[9],uVar7) & 0xff00ff00;
    uVar11 = uVar7 & 0xff00ff;
    uStack_a53 = (undefined1)(uVar9 >> 0x18);
    uStack_a52 = (undefined1)(uVar11 >> 0x10);
    uStack_a51 = (undefined1)(uVar9 >> 8);
    uStack_a50 = (undefined1)uVar11;
    FUN_1001223b8(&local_a60);
    break;
  case 0x40b:
    uVar9 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
    thunk_FUN_1003d7af8(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10);
    goto LAB_100125e24;
  case 0x40d:
    uVar15 = *(undefined8 *)(param_1 + 5);
    uStack_a52 = (undefined1)((ulong)uVar15 >> 0x30);
    uStack_a51 = (undefined1)((ulong)uVar15 >> 0x38);
    uStack_a50 = (undefined1)param_1[9];
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar9 = (uint)uVar15 & 0xff00ff00;
    uVar11 = (uint)uVar15 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar11 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar11 >> 0x10);
    uStack_a54 = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a53 = (undefined1)((ulong)uVar15 >> 0x20);
    FUN_100123514(&local_a60);
    break;
  case 0x40e:
    uVar15 = *(undefined8 *)(param_1 + 0xb);
    uStack_a46 = (ushort)((ulong)uVar15 >> 0x30);
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar6 = (uint)*(undefined8 *)(param_1 + 7);
    uVar9 = (uint)*(undefined8 *)(param_1 + 5) & 0xff00ff00;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5) & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    uVar10 = (uint)((ulong)*(undefined8 *)(param_1 + 7) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8));
    uVar11 = (uint)uVar15 & 0xff00ff00;
    uVar6 = (uint)uVar15 & 0xff00ff;
    uStack_a4a = (ushort)(uVar11 >> 8) | (ushort)(uVar6 << 8);
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar10 >> 0x10);
    uStack_a4c = (undefined1)(uVar11 >> 0x18);
    uStack_a4b = (undefined1)(uVar6 >> 0x10);
    uStack_a48 = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a47 = (undefined1)((ulong)uVar15 >> 0x20);
    FUN_100123568(&local_a60);
    break;
  case 0x40f:
    uVar15 = *(undefined8 *)(param_1 + 0x13);
    uStack_a38 = (ushort)((ulong)uVar15 >> 0x20);
    uStack_a36 = (undefined2)((ulong)uVar15 >> 0x30);
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 9);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 9) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8));
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a4a = (ushort)(uVar11 >> 8) | (ushort)(uVar6 << 8);
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar10 >> 0x10);
    uStack_a4c = (undefined1)(uVar11 >> 0x18);
    uStack_a4b = (undefined1)(uVar6 >> 0x10);
    uVar6 = (uint)*(undefined8 *)(param_1 + 0xf);
    uVar9 = (uint)*(undefined8 *)(param_1 + 0xd) & 0xff00ff00;
    uVar10 = (uint)*(undefined8 *)(param_1 + 0xd) & 0xff00ff;
    uStack_a46 = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a42 = (ushort)(uVar11 >> 8) | (ushort)(uVar6 << 8);
    uStack_a48 = (undefined1)(uVar9 >> 0x18);
    uStack_a47 = (undefined1)(uVar10 >> 0x10);
    uStack_a44 = (undefined1)(uVar11 >> 0x18);
    uStack_a43 = (undefined1)(uVar6 >> 0x10);
    uVar9 = (uint)((ulong)*(undefined8 *)(param_1 + 0xf) >> 0x20);
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar11 = ((uint)uVar15 & 0xff00ff00) >> 8 | ((uint)uVar15 & 0xff00ff) << 8;
    uStack_a40 = (undefined2)(uVar9 >> 0x10);
    uStack_a3e = (undefined2)uVar9;
    uStack_a3c = (undefined2)(uVar11 >> 0x10);
    uStack_a3a = (undefined2)uVar11;
    uStack_a38 = uStack_a38 >> 8 | uStack_a38 << 8;
    FUN_1001235c8(&local_a60);
    break;
  case 0x410:
    uStack_a50 = (undefined1)param_1[9];
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    FUN_100123644(&local_a60);
    break;
  case 0x415:
    uStack_a5c._4_1_ = (undefined1)param_1[5];
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    FUN_100122450(&local_a60);
    break;
  case 0x416:
    uStack_a50 = (undefined1)param_1[9];
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    FUN_1001224b8(&local_a60);
    break;
  case 0x417:
    uStack_a54 = (undefined1)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar15 = *(undefined8 *)((long)param_1 + 0xf);
    uStack_a53 = (undefined1)uVar15;
    uStack_a52 = (undefined1)((ulong)uVar15 >> 8);
    uStack_a51 = (undefined1)((ulong)uVar15 >> 0x10);
    uStack_a4c = (undefined1)((ulong)uVar15 >> 0x38);
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar7 = CONCAT12(uStack_a52,CONCAT11(uStack_a53,uStack_a54));
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = CONCAT13(uStack_a51,uVar7) & 0xff00ff00;
    uVar6 = uVar7 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    uVar11 = (uint)((ulong)uVar15 >> 0x18);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar11 << 8));
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar11 >> 0x10);
    FUN_100122508(&local_a60);
    break;
  case 0x418:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_1003ddcc0(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10);
    goto LAB_100125e24;
  case 0x419:
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 9);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8));
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 9) >> 0x20);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a4a = (ushort)(uVar11 >> 8) | (ushort)(uVar6 << 8);
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar10 >> 0x10);
    uStack_a4c = (undefined1)(uVar11 >> 0x18);
    uStack_a4b = (undefined1)(uVar6 >> 0x10);
    FUN_100122558(&local_a60);
    break;
  case 0x41a:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar10 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    FUN_1003dd560(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10,
                  uVar10 >> 0x10 | uVar10 << 0x10,(char)param_1[7] != '\0');
    goto LAB_100125e24;
  case 0x41b:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_1003d5ed8(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10);
    goto LAB_100125e24;
  case 0x41c:
    uVar15 = *(undefined8 *)((long)param_1 + 9);
    uStack_a5c._3_1_ = (undefined1)uVar15;
    uStack_a54 = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a53 = (undefined1)((ulong)uVar15 >> 0x30);
    uStack_a52 = (undefined1)((ulong)uVar15 >> 0x38);
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar7 = (uint3)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar4 = (uint)((ulong)uVar15 >> 8);
    uVar11 = CONCAT13(uStack_a5c._3_1_,uVar7) & 0xff00ff00;
    uVar6 = uVar7 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar9 = uVar4 & 0xff00ff00;
    uVar4 = uVar4 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar4 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar4 >> 0x10);
    FUN_10012369c(&local_a60);
    break;
  case 0x41d:
    uVar2 = *(undefined4 *)(param_1 + 5);
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uStack_a5c._4_1_ = (undefined1)uVar2;
    uStack_a5c._5_1_ = (undefined1)((uint)uVar2 >> 8);
    uStack_a5c._6_2_ = (ushort)((uint)uVar2 >> 0x10);
    FUN_1001236ec(&local_a60);
    break;
  case 0x41e:
    uVar15 = *(undefined8 *)(param_1 + 5);
    uStack_a52 = (undefined1)((ulong)uVar15 >> 0x30);
    uStack_a51 = (undefined1)((ulong)uVar15 >> 0x38);
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar9 = (uint)uVar15 & 0xff00ff00;
    uVar11 = (uint)uVar15 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar11 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar11 >> 0x10);
    uStack_a54 = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a53 = (undefined1)((ulong)uVar15 >> 0x20);
    FUN_100123764(&local_a60);
    break;
  case 0x41f:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_1003dc7e4(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10,0);
    goto LAB_100125e24;
  case 0x420:
    uStack_a54 = (undefined1)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar12 = *(undefined8 *)((long)param_1 + 0x17);
    uVar15 = *(undefined8 *)((long)param_1 + 0xf);
    uStack_a4b = (undefined1)uVar12;
    uStack_a4a = (ushort)((ulong)uVar12 >> 8);
    uStack_a44 = (undefined1)((ulong)uVar12 >> 0x38);
    uStack_a53 = (undefined1)uVar15;
    uStack_a52 = (undefined1)((ulong)uVar15 >> 8);
    uStack_a51 = (undefined1)((ulong)uVar15 >> 0x10);
    uStack_a4c = (undefined1)((ulong)uVar15 >> 0x38);
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar7 = CONCAT12(uStack_a52,CONCAT11(uStack_a53,uStack_a54));
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = CONCAT13(uStack_a51,uVar7) & 0xff00ff00;
    uVar6 = uVar7 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    uVar10 = (uint)((ulong)uVar15 >> 0x18);
    uVar6 = CONCAT22(uStack_a4a,CONCAT11(uStack_a4b,uStack_a4c));
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8));
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a4a = (ushort)(uVar11 >> 8) | (ushort)(uVar6 << 8);
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar10 >> 0x10);
    uStack_a4c = (undefined1)(uVar11 >> 0x18);
    uStack_a4b = (undefined1)(uVar6 >> 0x10);
    uVar11 = (uint)((ulong)uVar12 >> 0x18);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    uStack_a46 = (ushort)(uVar9 >> 8) | (ushort)(uVar11 << 8);
    uStack_a48 = (undefined1)(uVar9 >> 0x18);
    uStack_a47 = (undefined1)(uVar11 >> 0x10);
    FUN_1001237b8(&local_a60);
    break;
  case 0x421:
    uStack_a5c._4_1_ = (undefined1)*(undefined8 *)(param_1 + 5);
    uVar12 = *(undefined8 *)((long)param_1 + 0x13);
    uVar15 = *(undefined8 *)((long)param_1 + 0xb);
    uStack_a4f = (undefined1)uVar12;
    auStack_a4e = SUB82((ulong)uVar12 >> 8,0);
    uStack_a48 = (undefined1)((ulong)uVar12 >> 0x38);
    uStack_a5c._5_1_ = (undefined1)uVar15;
    uStack_a5c._6_2_ = (ushort)((ulong)uVar15 >> 8);
    uStack_a50 = (undefined1)((ulong)uVar15 >> 0x38);
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = CONCAT22(uStack_a5c._6_2_,CONCAT11(uStack_a5c._5_1_,uStack_a5c._4_1_));
    uVar6 = (uint)((ulong)uVar15 >> 0x18);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    uVar10 = CONCAT22(auStack_a4e,CONCAT11(uStack_a4f,uStack_a50));
    uVar6 = (uint)((ulong)uVar12 >> 0x18);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8));
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a4a = (ushort)(uVar11 >> 8) | (ushort)(uVar6 << 8);
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar10 >> 0x10);
    uStack_a4c = (undefined1)(uVar11 >> 0x18);
    uStack_a4b = (undefined1)(uVar6 >> 0x10);
    FUN_100123804(&local_a60);
    break;
  case 0x422:
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 9);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8));
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 9) >> 0x20);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a4a = (ushort)(uVar11 >> 8) | (ushort)(uVar6 << 8);
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar10 >> 0x10);
    uStack_a4c = (undefined1)(uVar11 >> 0x18);
    uStack_a4b = (undefined1)(uVar6 >> 0x10);
    FUN_10012384c(&local_a60);
    break;
  case 0x423:
    uVar9 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
    FUN_1003d66ac(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10);
    goto LAB_100125e24;
  case 0x425:
    uVar9 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
    FUN_1000108a4(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10);
    goto LAB_100125e24;
  case 0x427:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_1003dd69c(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10,
                  (char)param_1[5] != '\0');
    goto LAB_100125e24;
  case 0x428:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar10 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    FUN_1003ab348(uVar10 >> 0x10 | uVar10 << 0x10,&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,
                  uVar11 >> 0x10 | uVar11 << 0x10,(char)param_1[7] != '\0');
    goto LAB_100125e24;
  case 0x429:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar10 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    FUN_1003b2c9c(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10,
                  uVar10 >> 0x10 | uVar10 << 0x10,(char)param_1[7] != '\0');
    goto LAB_100125e24;
  case 0x42b:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    FUN_1003dcba4(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,(char)param_1[3],
                  *(undefined1 *)((long)param_1 + 7),(char)param_1[4],
                  *(undefined1 *)((long)param_1 + 9));
    goto LAB_100125e24;
  case 0x42c:
    uStack_a5c._0_1_ = (undefined1)param_1[3];
    uStack_a5c._1_1_ = (undefined1)(param_1[3] >> 8);
    uVar9 = *puVar16 & 0xff00ff00;
    uVar11 = *puVar16 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar11 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar11 >> 0x10);
    FUN_100123b80(&local_a60);
    break;
  case 0x42e:
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar9 = *(uint *)(param_1 + 5) & 0xff00ff00;
    uVar11 = *(uint *)(param_1 + 5) & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar11 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar11 >> 0x10);
    FUN_100122404(&local_a60);
    break;
  case 0x42f:
    uVar9 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
    FUN_1003d4c58(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10);
    goto LAB_100125e24;
  case 0x430:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_1003d4580(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10);
    goto LAB_100125e24;
  case 0x431:
    uVar9 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
    FUN_1003c6194(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10);
    goto LAB_100125e24;
  case 0x432:
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    FUN_100122d0c(&local_a60);
    break;
  case 0x433:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_1003decf0(uVar11 >> 0x10 | uVar11 << 0x10,&local_a60,uVar9 >> 0x10 | uVar9 << 0x10);
    goto LAB_100125e24;
  case 0x434:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_1003db55c(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10);
    goto LAB_100125e24;
  case 0x435:
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 9);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8));
    uVar6 = (uint)((ulong)*(undefined8 *)(param_1 + 9) >> 0x20);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a4a = (ushort)(uVar11 >> 8) | (ushort)(uVar6 << 8);
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar10 >> 0x10);
    uStack_a4c = (undefined1)(uVar11 >> 0x18);
    uStack_a4b = (undefined1)(uVar6 >> 0x10);
    FUN_1001234d4(&local_a60);
    break;
  case 0x437:
    uVar9 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
    FUN_1003dde00(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10);
    goto LAB_100125e24;
  case 0x439:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_1003d5a90(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10);
    goto LAB_100125e24;
  case 0x43a:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_1003d9ccc(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10);
    goto LAB_100125e24;
  case 0x43b:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_1003a756c(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10);
    goto LAB_100125e24;
  case 0x43c:
    uStack_a5c._4_1_ = (undefined1)param_1[5];
    uStack_a5c._5_1_ = (undefined1)(param_1[5] >> 8);
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    FUN_100123894(&local_a60);
    break;
  case 0x43d:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar10 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    FUN_1003da11c(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10,
                  uVar10 >> 0x10 | uVar10 << 0x10);
    goto LAB_100125e24;
  case 0x43e:
    uVar15 = *(undefined8 *)(param_1 + 5);
    uVar6 = (uint)*(undefined8 *)puVar16;
    uVar10 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar11 >> 8) | (ushort)(uVar6 << 8);
    local_a60._0_1_ = (undefined1)(uVar11 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar10;
    uStack_a5c._4_1_ = (undefined1)((ulong)uVar15 >> 8);
    uStack_a5c._5_1_ = (undefined1)uVar15;
    uVar11 = (uint)((ulong)uVar15 >> 0x10);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar11 >> 8);
    uStack_a54 = (undefined1)(uVar9 >> 8);
    uStack_a53 = (undefined1)uVar11;
    uStack_a52 = (undefined1)((ulong)uVar15 >> 0x38);
    uStack_a51 = (undefined1)((ulong)uVar15 >> 0x30);
    FUN_1001238e4(&local_a60);
    break;
  case 0x43f:
    uVar15 = *(undefined8 *)(param_1 + 5);
    uVar19 = *(undefined8 *)(param_1 + 0xd);
    uVar12 = *(undefined8 *)(param_1 + 9);
    uStack_a48 = (undefined1)uVar19;
    uStack_a47 = (undefined1)((ulong)uVar19 >> 8);
    uStack_a42 = (ushort)((ulong)uVar19 >> 0x30);
    uStack_a4a = (ushort)((ulong)uVar12 >> 0x30);
    uVar6 = (uint)*(undefined8 *)puVar16;
    uVar10 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar11 >> 8) | (ushort)(uVar6 << 8);
    local_a60._0_1_ = (undefined1)(uVar11 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar10;
    uStack_a5c._4_1_ = (undefined1)((ulong)uVar15 >> 8);
    uStack_a5c._5_1_ = (undefined1)uVar15;
    uVar11 = (uint)((ulong)uVar15 >> 0x10);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar11 >> 8);
    uStack_a54 = (undefined1)(uVar9 >> 8);
    uStack_a53 = (undefined1)uVar11;
    uStack_a52 = (undefined1)((ulong)uVar15 >> 0x38);
    uStack_a51 = (undefined1)((ulong)uVar15 >> 0x30);
    uStack_a50 = (undefined1)((ulong)uVar12 >> 8);
    uStack_a4f = (undefined1)uVar12;
    uVar11 = (uint)((ulong)uVar12 >> 0x10);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar11 >> 8));
    uStack_a4c = (undefined1)(uVar9 >> 8);
    uStack_a4b = (undefined1)uVar11;
    uVar9 = CONCAT13(uStack_a47,CONCAT12(uStack_a48,uStack_a4a)) & 0xff00ff00;
    uVar11 = CONCAT12(uStack_a48,uStack_a4a) & 0xff00ff;
    uStack_a4a = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar11 >> 8);
    uStack_a48 = (undefined1)(uVar9 >> 8);
    uStack_a47 = (undefined1)uVar11;
    uVar11 = (uint)((ulong)uVar19 >> 0x10);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    uStack_a46 = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar11 >> 8);
    uStack_a44 = (undefined1)(uVar9 >> 8);
    uStack_a43 = (undefined1)uVar11;
    uVar9 = (CONCAT22(param_1[0x11],uStack_a42) & 0xff00ff00) >> 8 |
            (CONCAT22(param_1[0x11],uStack_a42) & 0xff00ff) << 8;
    uStack_a42 = (ushort)(uVar9 >> 0x10);
    uStack_a40 = (undefined2)uVar9;
    FUN_1001239b0(&local_a60);
    break;
  case 0x440:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
    FUN_1003d52f4(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,param_1[3] >> 8 | param_1[3] << 8,
                  uVar11 >> 0x10 | uVar11 << 0x10);
    goto LAB_100125e24;
  case 0x441:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar10 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    FUN_1003d2610(uVar10 >> 0x10 | uVar10 << 0x10,&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,
                  uVar11 >> 0x10 | uVar11 << 0x10);
    goto LAB_100125e24;
  case 0x442:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar10 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    FUN_1003dbd80(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10,
                  uVar10 >> 0x10 | uVar10 << 0x10);
    goto LAB_100125e24;
  case 0x443:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar10 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    FUN_1003c3284(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10,
                  uVar10 >> 0x10 | uVar10 << 0x10,1);
    goto LAB_100125e24;
  case 0x444:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar10 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    FUN_1003dcac8(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10,
                  uVar10 >> 0x10 | uVar10 << 0x10);
    goto LAB_100125e24;
  case 0x445:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_1003af2b0(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10);
    goto LAB_100125e24;
  case 0x446:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_1003df2d8(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10);
    goto LAB_100125e24;
  case 0x447:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    uVar10 = (*(uint *)(param_1 + 5) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 5) & 0xff00ff) << 8;
    FUN_1003c3100(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10,
                  uVar10 >> 0x10 | uVar10 << 0x10);
    goto LAB_100125e24;
  case 1099:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_1003d6014(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10,
                  param_1[5] != 0);
    goto LAB_100125e24;
  case 0x44c:
    uStack_a54 = (undefined1)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar15 = *(undefined8 *)((long)param_1 + 0xf);
    uStack_a53 = (undefined1)uVar15;
    uStack_a52 = (undefined1)((ulong)uVar15 >> 8);
    uStack_a51 = (undefined1)((ulong)uVar15 >> 0x10);
    uStack_a4c = (undefined1)((ulong)uVar15 >> 0x38);
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar7 = CONCAT12(uStack_a52,CONCAT11(uStack_a53,uStack_a54));
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = CONCAT13(uStack_a51,uVar7) & 0xff00ff00;
    uVar6 = uVar7 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    uVar11 = (uint)((ulong)uVar15 >> 0x18);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar11 << 8));
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar11 >> 0x10);
    FUN_100123ce0(&local_a60);
    break;
  case 0x44d:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_1003de208(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10);
    goto LAB_100125e24;
  case 0x44e:
    uVar15 = *(undefined8 *)(param_1 + 8);
    uStack_a52 = (undefined1)uVar15;
    uStack_a51 = (undefined1)((ulong)uVar15 >> 8);
    uStack_a4c = (undefined1)((ulong)uVar15 >> 0x30);
    uStack_a4b = (undefined1)((ulong)uVar15 >> 0x38);
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar7 = CONCAT12(uStack_a52,(short)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20));
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = CONCAT13(uStack_a51,uVar7) & 0xff00ff00;
    uVar6 = uVar7 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    uVar11 = (uint)((ulong)uVar15 >> 0x10);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    auStack_a4e = (undefined1  [2])((ushort)(uVar9 >> 8) | (ushort)(uVar11 << 8));
    uStack_a50 = (undefined1)(uVar9 >> 0x18);
    uStack_a4f = (undefined1)(uVar11 >> 0x10);
    FUN_100123c8c(&local_a60);
    break;
  case 0x44f:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)((long)param_1 + 7) & 0xff00ff00) >> 8 |
             (*(uint *)((long)param_1 + 7) & 0xff00ff) << 8;
    uVar10 = (*(uint *)((long)param_1 + 0xb) & 0xff00ff00) >> 8 |
             (*(uint *)((long)param_1 + 0xb) & 0xff00ff) << 8;
    uVar6 = (*(uint *)((long)param_1 + 0xf) & 0xff00ff00) >> 8 |
            (*(uint *)((long)param_1 + 0xf) & 0xff00ff) << 8;
    FUN_1000106d8(uVar10 >> 0x10 | uVar10 << 0x10,&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,
                  (char)param_1[3],uVar11 >> 0x10 | uVar11 << 0x10,uVar6 >> 0x10 | uVar6 << 0x10);
    goto LAB_100125e24;
  case 0x451:
    uVar9 = *puVar16 & 0xff00ff00;
    uVar11 = *puVar16 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar11 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar11 >> 0x10);
    FUN_100123d60(&local_a60);
    break;
  case 0x452:
    if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
      FUN_100123d94();
      return;
    }
    goto LAB_100125e98;
  case 0x453:
    uVar12 = *(undefined8 *)(param_1 + 5);
    uVar15 = *(undefined8 *)puVar16;
    uVar20 = *(undefined8 *)(param_1 + 0xd);
    uVar19 = *(undefined8 *)(param_1 + 9);
    uStack_a5c._4_1_ = (undefined1)uVar12;
    uStack_a5c._5_1_ = (undefined1)((ulong)uVar12 >> 8);
    uStack_a5c._6_2_ = (ushort)((ulong)uVar12 >> 0x10);
    uStack_a54 = (undefined1)((ulong)uVar12 >> 0x20);
    uStack_a53 = (undefined1)((ulong)uVar12 >> 0x28);
    uStack_a52 = (undefined1)((ulong)uVar12 >> 0x30);
    uStack_a51 = (undefined1)((ulong)uVar12 >> 0x38);
    local_a60._0_1_ = (undefined1)uVar15;
    local_a60._1_1_ = (undefined1)((ulong)uVar15 >> 8);
    local_a60._2_2_ = (ushort)((ulong)uVar15 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_a5c._1_1_ = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a5c._2_1_ = (undefined1)((ulong)uVar15 >> 0x30);
    uStack_a5c._3_1_ = (undefined1)((ulong)uVar15 >> 0x38);
    uStack_a48 = (undefined1)uVar20;
    uStack_a47 = (undefined1)((ulong)uVar20 >> 8);
    uStack_a46 = (ushort)((ulong)uVar20 >> 0x10);
    uStack_a44 = (undefined1)((ulong)uVar20 >> 0x20);
    uStack_a43 = (undefined1)((ulong)uVar20 >> 0x28);
    uStack_a42 = (ushort)((ulong)uVar20 >> 0x30);
    uStack_a50 = (undefined1)uVar19;
    uStack_a4f = (undefined1)((ulong)uVar19 >> 8);
    auStack_a4e = SUB82((ulong)uVar19 >> 0x10,0);
    uStack_a4c = (undefined1)((ulong)uVar19 >> 0x20);
    uStack_a4b = (undefined1)((ulong)uVar19 >> 0x28);
    uStack_a4a = (ushort)((ulong)uVar19 >> 0x30);
    FUN_100308330(&local_a60);
    break;
  case 0x454:
    uVar12 = *(undefined8 *)(param_1 + 5);
    uVar15 = *(undefined8 *)puVar16;
    uVar20 = *(undefined8 *)(param_1 + 0xd);
    uVar19 = *(undefined8 *)(param_1 + 9);
    uStack_a5c._4_1_ = (undefined1)uVar12;
    uStack_a5c._5_1_ = (undefined1)((ulong)uVar12 >> 8);
    uStack_a5c._6_2_ = (ushort)((ulong)uVar12 >> 0x10);
    uStack_a54 = (undefined1)((ulong)uVar12 >> 0x20);
    uStack_a53 = (undefined1)((ulong)uVar12 >> 0x28);
    uStack_a52 = (undefined1)((ulong)uVar12 >> 0x30);
    uStack_a51 = (undefined1)((ulong)uVar12 >> 0x38);
    uStack_a5c._0_1_ = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_a5c._1_1_ = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a5c._2_1_ = (undefined1)((ulong)uVar15 >> 0x30);
    uStack_a5c._3_1_ = (undefined1)((ulong)uVar15 >> 0x38);
    uStack_a48 = (undefined1)uVar20;
    uStack_a47 = (undefined1)((ulong)uVar20 >> 8);
    uStack_a46 = (ushort)((ulong)uVar20 >> 0x10);
    uStack_a44 = (undefined1)((ulong)uVar20 >> 0x20);
    uStack_a43 = (undefined1)((ulong)uVar20 >> 0x28);
    uStack_a42 = (ushort)((ulong)uVar20 >> 0x30);
    uStack_a50 = (undefined1)uVar19;
    uStack_a4f = (undefined1)((ulong)uVar19 >> 8);
    auStack_a4e = SUB82((ulong)uVar19 >> 0x10,0);
    uStack_a4c = (undefined1)((ulong)uVar19 >> 0x20);
    uStack_a4b = (undefined1)((ulong)uVar19 >> 0x28);
    uStack_a4a = (ushort)((ulong)uVar19 >> 0x30);
    uVar19 = *(undefined8 *)(param_1 + 0x15);
    uVar12 = *(undefined8 *)(param_1 + 0x11);
    uVar21 = *(undefined8 *)(param_1 + 0x1d);
    uVar20 = *(undefined8 *)(param_1 + 0x19);
    uStack_a38 = (ushort)uVar19;
    uStack_a36 = (undefined2)((ulong)uVar19 >> 0x10);
    uStack_a34 = (undefined2)((ulong)uVar19 >> 0x20);
    uStack_a32 = (undefined2)((ulong)uVar19 >> 0x30);
    uStack_a40 = (undefined2)uVar12;
    uStack_a3e = (undefined2)((ulong)uVar12 >> 0x10);
    uStack_a3c = (undefined2)((ulong)uVar12 >> 0x20);
    uStack_a3a = (undefined2)((ulong)uVar12 >> 0x30);
    uStack_a28 = (undefined2)uVar21;
    uStack_a26 = (ushort)((ulong)uVar21 >> 0x10);
    uStack_a24 = (undefined1)((ulong)uVar21 >> 0x20);
    uStack_a23 = (undefined1)((ulong)uVar21 >> 0x28);
    uStack_a22 = (ushort)((ulong)uVar21 >> 0x30);
    local_a30 = (undefined2)uVar20;
    uStack_a2e = (undefined2)((ulong)uVar20 >> 0x10);
    uStack_a2c = (undefined2)((ulong)uVar20 >> 0x20);
    uStack_a2a = (undefined2)((ulong)uVar20 >> 0x30);
    uStack_a20 = (ushort)*(undefined4 *)(param_1 + 0x21);
    uStack_a1e = (ushort)((uint)*(undefined4 *)(param_1 + 0x21) >> 0x10);
    uVar9 = (uint)uVar15 & 0xff00ff00;
    uVar11 = (uint)uVar15 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar11 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar11 >> 0x10);
    FUN_100308350(&local_a60);
    break;
  case 0x459:
    _memcpy(&local_a60,puVar16,0xa18);
    lVar13 = 0;
    uVar10 = CONCAT22(local_a60._2_2_,CONCAT11(local_a60._1_1_,(undefined1)local_a60));
    uVar7 = CONCAT12(uStack_a5c._2_1_,CONCAT11(uStack_a5c._1_1_,(undefined1)uStack_a5c));
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = CONCAT13(uStack_a5c._3_1_,uVar7) & 0xff00ff00;
    uVar6 = uVar7 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    do {
      *(ushort *)(&uStack_a4f + lVar13) =
           *(ushort *)(&uStack_a4f + lVar13) >> 8 | *(ushort *)(&uStack_a4f + lVar13) << 8;
      *(ushort *)(auStack_a4e + lVar13 + 1) =
           *(ushort *)(auStack_a4e + lVar13 + 1) >> 8 | *(ushort *)(auStack_a4e + lVar13 + 1) << 8;
      lVar13 = lVar13 + 0xa1;
    } while (lVar13 != 0xa10);
    FUN_100308370(&local_a60);
    break;
  case 0x45a:
    _memcpy(&local_a60,puVar16,0xa18);
    lVar13 = 0;
    uVar10 = CONCAT22(local_a60._2_2_,CONCAT11(local_a60._1_1_,(undefined1)local_a60));
    uVar7 = CONCAT12(uStack_a5c._2_1_,CONCAT11(uStack_a5c._1_1_,(undefined1)uStack_a5c));
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = CONCAT13(uStack_a5c._3_1_,uVar7) & 0xff00ff00;
    uVar6 = uVar7 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    do {
      *(ushort *)(&uStack_a4f + lVar13) =
           *(ushort *)(&uStack_a4f + lVar13) >> 8 | *(ushort *)(&uStack_a4f + lVar13) << 8;
      *(ushort *)(auStack_a4e + lVar13 + 1) =
           *(ushort *)(auStack_a4e + lVar13 + 1) >> 8 | *(ushort *)(auStack_a4e + lVar13 + 1) << 8;
      lVar13 = lVar13 + 0xa1;
    } while (lVar13 != 0xa10);
    FUN_100308390(&local_a60);
    break;
  case 0x45b:
    _memcpy(&local_a60,puVar16,0x856);
    uVar9 = (local_210 & 0xff00ff00) >> 8 | (local_210 & 0xff00ff) << 8;
    local_210 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = (local_214 & 0xff00ff00) >> 8 | (local_214 & 0xff00ff) << 8;
    local_214 = uVar9 >> 0x10 | uVar9 << 0x10;
    lVar13 = 4;
    do {
      uVar15 = NEON_rev32(*(undefined8 *)((long)&local_a60 + lVar13),1);
      *(undefined8 *)((long)&local_a60 + lVar13) = uVar15;
      lVar13 = lVar13 + 8;
    } while (lVar13 != 0x14);
    lVar13 = 0;
    do {
      uVar3 = *(ushort *)(auStack_952 + lVar13 + 3);
      *(ushort *)(auStack_952 + lVar13 + 3) = uVar3 >> 8 | uVar3 << 8;
      puVar1 = (ushort *)((long)&uStack_94e + lVar13 + 1);
      uVar3 = *puVar1;
      *puVar1 = uVar3 >> 8 | uVar3 << 8;
      lVar13 = lVar13 + 0xa6;
    } while (lVar13 != 0x67c);
    lVar13 = 0;
    puVar17 = &uStack_a48;
    do {
      lVar18 = 0;
      do {
        uVar9 = (*(uint *)(puVar17 + lVar18) & 0xff00ff00) >> 8 |
                (*(uint *)(puVar17 + lVar18) & 0xff00ff) << 8;
        *(uint *)(puVar17 + lVar18) = uVar9 >> 0x10 | uVar9 << 0x10;
        lVar18 = lVar18 + 4;
      } while (lVar18 != 0x18);
      lVar13 = lVar13 + 1;
      puVar17 = puVar17 + 0x18;
    } while (lVar13 != 10);
    FUN_1003083b0(&local_a60);
    break;
  case 0x45c:
    lVar13 = 0;
    uVar12 = *(undefined8 *)(param_1 + 0x15);
    uVar15 = *(undefined8 *)(param_1 + 0x11);
    uVar20 = *(undefined8 *)(param_1 + 0x1d);
    uVar19 = *(undefined8 *)(param_1 + 0x19);
    uStack_a38 = (ushort)uVar12;
    uStack_a36 = (undefined2)((ulong)uVar12 >> 0x10);
    uStack_a34 = (undefined2)((ulong)uVar12 >> 0x20);
    uStack_a32 = (undefined2)((ulong)uVar12 >> 0x30);
    uStack_a40 = (undefined2)uVar15;
    uStack_a3e = (undefined2)((ulong)uVar15 >> 0x10);
    uStack_a3c = (undefined2)((ulong)uVar15 >> 0x20);
    uStack_a3a = (undefined2)((ulong)uVar15 >> 0x30);
    uStack_a28 = (undefined2)uVar20;
    uStack_a26 = (ushort)((ulong)uVar20 >> 0x10);
    uStack_a24 = (undefined1)((ulong)uVar20 >> 0x20);
    uStack_a23 = (undefined1)((ulong)uVar20 >> 0x28);
    uStack_a22 = (ushort)((ulong)uVar20 >> 0x30);
    local_a30 = (undefined2)uVar19;
    uStack_a2e = (undefined2)((ulong)uVar19 >> 0x10);
    uStack_a2c = (undefined2)((ulong)uVar19 >> 0x20);
    uStack_a2a = (undefined2)((ulong)uVar19 >> 0x30);
    uVar12 = *(undefined8 *)(param_1 + 0x25);
    uVar15 = *(undefined8 *)(param_1 + 0x21);
    uVar20 = *(undefined8 *)(param_1 + 0x2d);
    uVar19 = *(undefined8 *)(param_1 + 0x29);
    uStack_a18 = (undefined2)uVar12;
    uStack_a16 = (ushort)((ulong)uVar12 >> 0x10);
    uStack_a14 = (undefined1)((ulong)uVar12 >> 0x20);
    uStack_a13 = (undefined1)((ulong)uVar12 >> 0x28);
    uStack_a12 = (ushort)((ulong)uVar12 >> 0x30);
    uStack_a20 = (ushort)uVar15;
    uStack_a1e = (ushort)((ulong)uVar15 >> 0x10);
    uStack_a1c = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_a1b = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a1a = (ushort)((ulong)uVar15 >> 0x30);
    auStack_a0c._4_2_ = (undefined2)uVar20;
    uStack_a06 = (uint)((ulong)uVar20 >> 0x10);
    uStack_a02 = (undefined1)((ulong)uVar20 >> 0x30);
    uStack_a01 = (undefined1)((ulong)uVar20 >> 0x38);
    local_a10 = (undefined1)uVar19;
    uStack_a0f = (undefined1)((ulong)uVar19 >> 8);
    uStack_a0e = (ushort)((ulong)uVar19 >> 0x10);
    auStack_a0c._0_2_ = (undefined2)((ulong)uVar19 >> 0x20);
    auStack_a0c._2_2_ = (undefined2)((ulong)uVar19 >> 0x30);
    uVar12 = *(undefined8 *)(param_1 + 5);
    uVar15 = *(undefined8 *)puVar16;
    uVar20 = *(undefined8 *)(param_1 + 0xd);
    uVar19 = *(undefined8 *)(param_1 + 9);
    uStack_a5c._4_1_ = (undefined1)uVar12;
    uStack_a5c._5_1_ = (undefined1)((ulong)uVar12 >> 8);
    uStack_a5c._6_2_ = (ushort)((ulong)uVar12 >> 0x10);
    uStack_a54 = (undefined1)((ulong)uVar12 >> 0x20);
    uStack_a53 = (undefined1)((ulong)uVar12 >> 0x28);
    uStack_a52 = (undefined1)((ulong)uVar12 >> 0x30);
    uStack_a51 = (undefined1)((ulong)uVar12 >> 0x38);
    local_a60._0_1_ = (undefined1)uVar15;
    local_a60._1_1_ = (undefined1)((ulong)uVar15 >> 8);
    local_a60._2_2_ = (ushort)((ulong)uVar15 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_a5c._1_1_ = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a5c._2_1_ = (undefined1)((ulong)uVar15 >> 0x30);
    uStack_a5c._3_1_ = (undefined1)((ulong)uVar15 >> 0x38);
    uStack_a48 = (undefined1)uVar20;
    uStack_a47 = (undefined1)((ulong)uVar20 >> 8);
    uStack_a46 = (ushort)((ulong)uVar20 >> 0x10);
    uStack_a44 = (undefined1)((ulong)uVar20 >> 0x20);
    uStack_a43 = (undefined1)((ulong)uVar20 >> 0x28);
    uStack_a42 = (ushort)((ulong)uVar20 >> 0x30);
    uStack_a50 = (undefined1)uVar19;
    uStack_a4f = (undefined1)((ulong)uVar19 >> 8);
    auStack_a4e = SUB82((ulong)uVar19 >> 0x10,0);
    uStack_a4c = (undefined1)((ulong)uVar19 >> 0x20);
    uStack_a4b = (undefined1)((ulong)uVar19 >> 0x28);
    uStack_a4a = (ushort)((ulong)uVar19 >> 0x30);
    do {
      uVar9 = (*(uint *)((long)&local_a60 + lVar13) & 0xff00ff00) >> 8 |
              (*(uint *)((long)&local_a60 + lVar13) & 0xff00ff) << 8;
      *(uint *)((long)&local_a60 + lVar13) = uVar9 >> 0x10 | uVar9 << 0x10;
      lVar13 = lVar13 + 6;
    } while (lVar13 != 0x60);
    FUN_100123e30(&local_a60);
    break;
  case 0x46c:
    local_a60._0_1_ = (undefined1)*puVar16;
    FUN_1003083f0(&local_a60);
    break;
  case 0x46f:
    uStack_a1c = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x3f) >> 0x38);
    uVar12 = *(undefined8 *)(param_1 + 0x15);
    uVar15 = *(undefined8 *)(param_1 + 0x11);
    uVar20 = *(undefined8 *)(param_1 + 0x1d);
    uVar19 = *(undefined8 *)(param_1 + 0x19);
    uStack_a38 = (ushort)uVar12;
    uStack_a36 = (undefined2)((ulong)uVar12 >> 0x10);
    uStack_a34 = (undefined2)((ulong)uVar12 >> 0x20);
    uStack_a32 = (undefined2)((ulong)uVar12 >> 0x30);
    uStack_a40 = (undefined2)uVar15;
    uStack_a3e = (undefined2)((ulong)uVar15 >> 0x10);
    uStack_a3c = (undefined2)((ulong)uVar15 >> 0x20);
    uStack_a3a = (undefined2)((ulong)uVar15 >> 0x30);
    uStack_a28 = (undefined2)uVar20;
    uStack_a26 = (ushort)((ulong)uVar20 >> 0x10);
    uStack_a24 = (undefined1)((ulong)uVar20 >> 0x20);
    uStack_a23 = (undefined1)((ulong)uVar20 >> 0x28);
    uStack_a22 = (ushort)((ulong)uVar20 >> 0x30);
    local_a30 = (undefined2)uVar19;
    uStack_a2e = (undefined2)((ulong)uVar19 >> 0x10);
    uStack_a2c = (undefined2)((ulong)uVar19 >> 0x20);
    uStack_a2a = (undefined2)((ulong)uVar19 >> 0x30);
    uVar20 = *(undefined8 *)(param_1 + 5);
    uVar19 = *(undefined8 *)puVar16;
    uVar12 = *(undefined8 *)(param_1 + 0xd);
    uVar15 = *(undefined8 *)(param_1 + 9);
    uStack_a5c._4_1_ = (undefined1)uVar20;
    uStack_a5c._5_1_ = (undefined1)((ulong)uVar20 >> 8);
    uStack_a5c._6_2_ = (ushort)((ulong)uVar20 >> 0x10);
    uStack_a54 = (undefined1)((ulong)uVar20 >> 0x20);
    uStack_a53 = (undefined1)((ulong)uVar20 >> 0x28);
    uStack_a52 = (undefined1)((ulong)uVar20 >> 0x30);
    uStack_a51 = (undefined1)((ulong)uVar20 >> 0x38);
    local_a60._0_1_ = (undefined1)uVar19;
    local_a60._1_1_ = (undefined1)((ulong)uVar19 >> 8);
    local_a60._2_2_ = (ushort)((ulong)uVar19 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)((ulong)uVar19 >> 0x20);
    uStack_a5c._1_1_ = (undefined1)((ulong)uVar19 >> 0x28);
    uStack_a5c._2_1_ = (undefined1)((ulong)uVar19 >> 0x30);
    uStack_a5c._3_1_ = (undefined1)((ulong)uVar19 >> 0x38);
    uStack_a48 = (undefined1)uVar12;
    uStack_a47 = (undefined1)((ulong)uVar12 >> 8);
    uStack_a46 = (ushort)((ulong)uVar12 >> 0x10);
    uStack_a44 = (undefined1)((ulong)uVar12 >> 0x20);
    uStack_a43 = (undefined1)((ulong)uVar12 >> 0x28);
    uStack_a42 = (ushort)((ulong)uVar12 >> 0x30);
    uStack_a50 = (undefined1)uVar15;
    uStack_a4f = (undefined1)((ulong)uVar15 >> 8);
    auStack_a4e = SUB82((ulong)uVar15 >> 0x10,0);
    uStack_a4c = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_a4b = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a4a = (ushort)((ulong)uVar15 >> 0x30);
    uVar9 = (uint)((ulong)*(undefined8 *)((long)param_1 + 0x3f) >> 0x18);
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uStack_a20 = (ushort)(uVar9 >> 0x10);
    uStack_a1e = (ushort)uVar9;
    FUN_100123e80(&local_a60);
    break;
  case 0x470:
    local_a60._0_1_ = (undefined1)*puVar16;
    FUN_100123ee8(&local_a60);
    break;
  case 0x471:
    if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
      uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
      FUN_10034e2b8(uVar9 >> 0x10 | uVar9 << 0x10,(char)param_1[3] != '\0');
      return;
    }
    goto LAB_100125e98;
  case 0x473:
    lVar13 = 0;
    uVar20 = *(undefined8 *)(param_1 + 0x3d);
    uVar19 = *(undefined8 *)(param_1 + 0x39);
    uVar12 = *(undefined8 *)(param_1 + 0x45);
    uVar15 = *(undefined8 *)(param_1 + 0x41);
    uStack_9d8 = (undefined2)uVar12;
    uStack_9d6 = (uint)((ulong)uVar12 >> 0x10);
    uStack_9d2 = (undefined1)((ulong)uVar12 >> 0x30);
    uStack_9e0 = (undefined2)uVar15;
    uStack_9de = (uint)((ulong)uVar15 >> 0x10);
    uStack_9da = (undefined2)((ulong)uVar15 >> 0x30);
    uVar15 = *(undefined8 *)((long)param_1 + 0x91);
    uStack_9d1 = (undefined1)uVar15;
    uStack_9d0 = (ushort)((ulong)uVar15 >> 8);
    uStack_9ce = (uint)((ulong)uVar15 >> 0x18);
    uStack_9ca = (undefined1)((ulong)uVar15 >> 0x38);
    uVar12 = *(undefined8 *)(param_1 + 0x35);
    uVar15 = *(undefined8 *)(param_1 + 0x31);
    uStack_9f8 = (undefined2)uVar12;
    uStack_9f6 = (uint)((ulong)uVar12 >> 0x10);
    uStack_9f2 = (undefined2)((ulong)uVar12 >> 0x30);
    bStack_a00 = (byte)uVar15;
    uStack_9ff = (undefined1)((ulong)uVar15 >> 8);
    uStack_9fe = (undefined1)((ulong)uVar15 >> 0x10);
    uStack_9fd = (undefined1)((ulong)uVar15 >> 0x18);
    uStack_9fc = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_9fb = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_9fa = (undefined2)((ulong)uVar15 >> 0x30);
    uStack_9e8 = (undefined2)uVar20;
    local_9e6 = (uint)((ulong)uVar20 >> 0x10);
    local_9e2 = (undefined2)((ulong)uVar20 >> 0x30);
    uStack_9f0 = (undefined2)uVar19;
    local_9ee = (undefined2)((ulong)uVar19 >> 0x10);
    uStack_9ec = (undefined2)((ulong)uVar19 >> 0x20);
    local_9ea = (undefined2)((ulong)uVar19 >> 0x30);
    uVar12 = *(undefined8 *)(param_1 + 0x15);
    uVar15 = *(undefined8 *)(param_1 + 0x11);
    uVar20 = *(undefined8 *)(param_1 + 0x1d);
    uVar19 = *(undefined8 *)(param_1 + 0x19);
    uStack_a38 = (ushort)uVar12;
    uStack_a36 = (undefined2)((ulong)uVar12 >> 0x10);
    uStack_a34 = (undefined2)((ulong)uVar12 >> 0x20);
    uStack_a32 = (undefined2)((ulong)uVar12 >> 0x30);
    uStack_a40 = (undefined2)uVar15;
    uStack_a3e = (undefined2)((ulong)uVar15 >> 0x10);
    uStack_a3c = (undefined2)((ulong)uVar15 >> 0x20);
    uStack_a3a = (undefined2)((ulong)uVar15 >> 0x30);
    uStack_a28 = (undefined2)uVar20;
    uStack_a26 = (ushort)((ulong)uVar20 >> 0x10);
    uStack_a24 = (undefined1)((ulong)uVar20 >> 0x20);
    uStack_a23 = (undefined1)((ulong)uVar20 >> 0x28);
    uStack_a22 = (ushort)((ulong)uVar20 >> 0x30);
    local_a30 = (undefined2)uVar19;
    uStack_a2e = (undefined2)((ulong)uVar19 >> 0x10);
    uStack_a2c = (undefined2)((ulong)uVar19 >> 0x20);
    uStack_a2a = (undefined2)((ulong)uVar19 >> 0x30);
    uVar12 = *(undefined8 *)(param_1 + 0x25);
    uVar15 = *(undefined8 *)(param_1 + 0x21);
    uVar20 = *(undefined8 *)(param_1 + 0x2d);
    uVar19 = *(undefined8 *)(param_1 + 0x29);
    uStack_a18 = (undefined2)uVar12;
    uStack_a16 = (ushort)((ulong)uVar12 >> 0x10);
    uStack_a14 = (undefined1)((ulong)uVar12 >> 0x20);
    uStack_a13 = (undefined1)((ulong)uVar12 >> 0x28);
    uStack_a12 = (ushort)((ulong)uVar12 >> 0x30);
    uStack_a20 = (ushort)uVar15;
    uStack_a1e = (ushort)((ulong)uVar15 >> 0x10);
    uStack_a1c = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_a1b = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a1a = (ushort)((ulong)uVar15 >> 0x30);
    auStack_a0c._4_2_ = (undefined2)uVar20;
    uStack_a06 = (uint)((ulong)uVar20 >> 0x10);
    uStack_a02 = (undefined1)((ulong)uVar20 >> 0x30);
    uStack_a01 = (undefined1)((ulong)uVar20 >> 0x38);
    local_a10 = (undefined1)uVar19;
    uStack_a0f = (undefined1)((ulong)uVar19 >> 8);
    uStack_a0e = (ushort)((ulong)uVar19 >> 0x10);
    auStack_a0c._0_2_ = (undefined2)((ulong)uVar19 >> 0x20);
    auStack_a0c._2_2_ = (undefined2)((ulong)uVar19 >> 0x30);
    uVar12 = *(undefined8 *)(param_1 + 5);
    uVar15 = *(undefined8 *)puVar16;
    uVar20 = *(undefined8 *)(param_1 + 0xd);
    uVar19 = *(undefined8 *)(param_1 + 9);
    uStack_a5c._4_1_ = (undefined1)uVar12;
    uStack_a5c._5_1_ = (undefined1)((ulong)uVar12 >> 8);
    uStack_a5c._6_2_ = (ushort)((ulong)uVar12 >> 0x10);
    uStack_a54 = (undefined1)((ulong)uVar12 >> 0x20);
    uStack_a53 = (undefined1)((ulong)uVar12 >> 0x28);
    uStack_a52 = (undefined1)((ulong)uVar12 >> 0x30);
    uStack_a51 = (undefined1)((ulong)uVar12 >> 0x38);
    uStack_a5c._0_1_ = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_a5c._1_1_ = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a5c._2_1_ = (undefined1)((ulong)uVar15 >> 0x30);
    uStack_a5c._3_1_ = (undefined1)((ulong)uVar15 >> 0x38);
    uStack_a48 = (undefined1)uVar20;
    uStack_a47 = (undefined1)((ulong)uVar20 >> 8);
    uStack_a46 = (ushort)((ulong)uVar20 >> 0x10);
    uStack_a44 = (undefined1)((ulong)uVar20 >> 0x20);
    uStack_a43 = (undefined1)((ulong)uVar20 >> 0x28);
    uStack_a42 = (ushort)((ulong)uVar20 >> 0x30);
    uStack_a50 = (undefined1)uVar19;
    uStack_a4f = (undefined1)((ulong)uVar19 >> 8);
    auStack_a4e = SUB82((ulong)uVar19 >> 0x10,0);
    uStack_a4c = (undefined1)((ulong)uVar19 >> 0x20);
    uStack_a4b = (undefined1)((ulong)uVar19 >> 0x28);
    uStack_a4a = (ushort)((ulong)uVar19 >> 0x30);
    uVar9 = (uint)uVar15 & 0xff00ff00;
    uVar11 = (uint)uVar15 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar11 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar11 >> 0x10);
    do {
      uVar15 = NEON_rev32(*(undefined8 *)((long)&uStack_a5c + lVar13),1);
      *(undefined8 *)((long)&uStack_a5c + lVar13) = uVar15;
      uVar15 = NEON_rev32(*(undefined8 *)(auStack_a0c + lVar13),1);
      *(undefined8 *)(auStack_a0c + lVar13) = uVar15;
      lVar13 = lVar13 + 8;
    } while (lVar13 != 0x40);
    FUN_100123f24(&local_a60);
    break;
  case 0x475:
    FUN_1003dd634(&local_a60,*puVar16 != 0);
    goto LAB_100125e24;
  case 0x476:
    uVar9 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
    FUN_1003de86c(uVar9 >> 0x10 | uVar9 << 0x10,&local_a60);
    goto LAB_100125e24;
  case 0x477:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    FUN_1003de8ac(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,(char)param_1[3] != '\0');
    goto LAB_100125e24;
  case 0x478:
    uStack_a5c._4_1_ = (undefined1)param_1[5];
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    FUN_100123be0(&local_a60);
    break;
  case 0x479:
    uVar12 = *(undefined8 *)(param_1 + 0x15);
    uVar15 = *(undefined8 *)(param_1 + 0x11);
    uVar20 = *(undefined8 *)(param_1 + 0x1d);
    uVar19 = *(undefined8 *)(param_1 + 0x19);
    uStack_a38 = (ushort)uVar12;
    uStack_a36 = (undefined2)((ulong)uVar12 >> 0x10);
    uStack_a34 = (undefined2)((ulong)uVar12 >> 0x20);
    uStack_a32 = (undefined2)((ulong)uVar12 >> 0x30);
    uStack_a40 = (undefined2)uVar15;
    uStack_a3e = (undefined2)((ulong)uVar15 >> 0x10);
    uStack_a3c = (undefined2)((ulong)uVar15 >> 0x20);
    uStack_a3a = (undefined2)((ulong)uVar15 >> 0x30);
    uStack_a28 = (undefined2)uVar20;
    uStack_a26 = (ushort)((ulong)uVar20 >> 0x10);
    uStack_a24 = (undefined1)((ulong)uVar20 >> 0x20);
    uStack_a23 = (undefined1)((ulong)uVar20 >> 0x28);
    uStack_a22 = (ushort)((ulong)uVar20 >> 0x30);
    local_a30 = (undefined2)uVar19;
    uStack_a2e = (undefined2)((ulong)uVar19 >> 0x10);
    uStack_a2c = (undefined2)((ulong)uVar19 >> 0x20);
    uStack_a2a = (undefined2)((ulong)uVar19 >> 0x30);
    uVar20 = *(undefined8 *)(param_1 + 5);
    uVar19 = *(undefined8 *)puVar16;
    uVar12 = *(undefined8 *)(param_1 + 0xd);
    uVar15 = *(undefined8 *)(param_1 + 9);
    uStack_a5c._4_1_ = (undefined1)uVar20;
    uStack_a5c._5_1_ = (undefined1)((ulong)uVar20 >> 8);
    uStack_a5c._6_2_ = (ushort)((ulong)uVar20 >> 0x10);
    uStack_a54 = (undefined1)((ulong)uVar20 >> 0x20);
    uStack_a53 = (undefined1)((ulong)uVar20 >> 0x28);
    uStack_a52 = (undefined1)((ulong)uVar20 >> 0x30);
    uStack_a51 = (undefined1)((ulong)uVar20 >> 0x38);
    local_a60._0_1_ = (undefined1)uVar19;
    local_a60._1_1_ = (undefined1)((ulong)uVar19 >> 8);
    local_a60._2_2_ = (ushort)((ulong)uVar19 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)((ulong)uVar19 >> 0x20);
    uStack_a5c._1_1_ = (undefined1)((ulong)uVar19 >> 0x28);
    uStack_a5c._2_1_ = (undefined1)((ulong)uVar19 >> 0x30);
    uStack_a5c._3_1_ = (undefined1)((ulong)uVar19 >> 0x38);
    uStack_a48 = (undefined1)uVar12;
    uStack_a47 = (undefined1)((ulong)uVar12 >> 8);
    uStack_a46 = (ushort)((ulong)uVar12 >> 0x10);
    uStack_a44 = (undefined1)((ulong)uVar12 >> 0x20);
    uStack_a43 = (undefined1)((ulong)uVar12 >> 0x28);
    uStack_a42 = (ushort)((ulong)uVar12 >> 0x30);
    uStack_a50 = (undefined1)uVar15;
    uStack_a4f = (undefined1)((ulong)uVar15 >> 8);
    auStack_a4e = SUB82((ulong)uVar15 >> 0x10,0);
    uStack_a4c = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_a4b = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a4a = (ushort)((ulong)uVar15 >> 0x30);
    uStack_a20 = param_1[0x21] >> 8 | param_1[0x21] << 8;
    FUN_100122fd8(&local_a60);
    break;
  case 0x47c:
    uVar9 = *puVar16;
    uVar15 = FUN_1001148bc();
    if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
      FUN_100116214(uVar15,(char)uVar9 != '\0');
      return;
    }
    goto LAB_100125e98;
  case 0x47d:
    FUN_10001244c(&local_a60,*puVar16);
    goto LAB_100125e24;
  case 0x47e:
    uVar15 = *(undefined8 *)puVar16;
    uStack_a5c._0_1_ = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_a5c._1_1_ = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a5c._2_1_ = (undefined1)((ulong)uVar15 >> 0x30);
    uStack_a5c._3_1_ = (undefined1)((ulong)uVar15 >> 0x38);
    uVar9 = (uint)uVar15 & 0xff00ff00;
    uVar11 = (uint)uVar15 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar11 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar11 >> 0x10);
    FUN_100123080(&local_a60);
    break;
  case 0x47f:
    uVar9 = *puVar16 & 0xff00ff00;
    uVar11 = *puVar16 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar11 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar11 >> 0x10);
    FUN_1001230c8(&local_a60);
    break;
  case 0x480:
    uVar20 = *(undefined8 *)(param_1 + 0x1d);
    uVar19 = *(undefined8 *)(param_1 + 0x19);
    uVar12 = *(undefined8 *)(param_1 + 0x25);
    uVar15 = *(undefined8 *)(param_1 + 0x21);
    uStack_a28 = (undefined2)uVar20;
    uStack_a26 = (ushort)((ulong)uVar20 >> 0x10);
    uStack_a24 = (undefined1)((ulong)uVar20 >> 0x20);
    uStack_a23 = (undefined1)((ulong)uVar20 >> 0x28);
    uStack_a22 = (ushort)((ulong)uVar20 >> 0x30);
    local_a30 = (undefined2)uVar19;
    uStack_a2e = (undefined2)((ulong)uVar19 >> 0x10);
    uStack_a2c = (undefined2)((ulong)uVar19 >> 0x20);
    uStack_a2a = (undefined2)((ulong)uVar19 >> 0x30);
    uStack_a18 = (undefined2)uVar12;
    uStack_a16 = (ushort)((ulong)uVar12 >> 0x10);
    uStack_a14 = (undefined1)((ulong)uVar12 >> 0x20);
    uStack_a20 = (ushort)uVar15;
    uStack_a1e = (ushort)((ulong)uVar15 >> 0x10);
    uStack_a1c = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_a1b = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a1a = (ushort)((ulong)uVar15 >> 0x30);
    local_a10 = (undefined1)param_1[0x29];
    uStack_a0f = (undefined1)(param_1[0x29] >> 8);
    uVar21 = *(undefined8 *)(param_1 + 0xd);
    uVar20 = *(undefined8 *)(param_1 + 9);
    uVar19 = *(undefined8 *)(param_1 + 0x15);
    uVar15 = *(undefined8 *)(param_1 + 0x11);
    uStack_a48 = (undefined1)uVar21;
    uStack_a47 = (undefined1)((ulong)uVar21 >> 8);
    uStack_a46 = (ushort)((ulong)uVar21 >> 0x10);
    uStack_a44 = (undefined1)((ulong)uVar21 >> 0x20);
    uStack_a43 = (undefined1)((ulong)uVar21 >> 0x28);
    uStack_a42 = (ushort)((ulong)uVar21 >> 0x30);
    uStack_a50 = (undefined1)uVar20;
    uStack_a4f = (undefined1)((ulong)uVar20 >> 8);
    auStack_a4e = SUB82((ulong)uVar20 >> 0x10,0);
    uStack_a4c = (undefined1)((ulong)uVar20 >> 0x20);
    uStack_a4b = (undefined1)((ulong)uVar20 >> 0x28);
    uStack_a4a = (ushort)((ulong)uVar20 >> 0x30);
    uStack_a38 = (ushort)uVar19;
    uStack_a36 = (undefined2)((ulong)uVar19 >> 0x10);
    uStack_a34 = (undefined2)((ulong)uVar19 >> 0x20);
    uStack_a32 = (undefined2)((ulong)uVar19 >> 0x30);
    uStack_a40 = (undefined2)uVar15;
    uStack_a3e = (undefined2)((ulong)uVar15 >> 0x10);
    uStack_a3c = (undefined2)((ulong)uVar15 >> 0x20);
    uStack_a3a = (undefined2)((ulong)uVar15 >> 0x30);
    uVar15 = *(undefined8 *)(param_1 + 5);
    uStack_a54 = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_a53 = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a52 = (undefined1)((ulong)uVar15 >> 0x30);
    uStack_a51 = (undefined1)((ulong)uVar15 >> 0x38);
    uVar7 = (uint3)((ulong)uVar12 >> 0x28);
    uVar9 = CONCAT13(local_a10,uVar7) & 0xff00ff00;
    uVar11 = uVar7 & 0xff00ff;
    uStack_a12 = (ushort)(byte)(uVar11 >> 0x10) | (ushort)(((uVar9 >> 8) << 0x10) >> 8);
    uStack_a13 = (undefined1)(uVar9 >> 0x18);
    local_a10 = (undefined1)uVar11;
    uVar5 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = (uint)uVar15 & 0xff00ff00;
    uVar6 = (uint)uVar15 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar6 << 8);
    uVar4 = (uint)*(undefined8 *)puVar16;
    uVar11 = uVar4 & 0xff00ff00;
    uVar4 = uVar4 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar11 >> 8) | (ushort)(uVar4 << 8);
    uVar10 = uVar5 & 0xff00ff00;
    uVar5 = uVar5 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar11 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar4 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar10 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar5 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar10 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar5;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar6 >> 0x10);
    FUN_1003083d0(&local_a60);
    break;
  case 0x481:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    FUN_1003d7938(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,(char)param_1[3],
                  *(undefined1 *)((long)param_1 + 7));
    goto LAB_100125e24;
  case 0x482:
    uVar9 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
    FUN_1003df38c(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10);
    goto LAB_100125e24;
  case 0x483:
    uVar9 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
    FUN_1003d74dc(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10);
    goto LAB_100125e24;
  case 0x487:
    uVar2 = *(undefined4 *)((long)param_1 + 0x61);
    bStack_a00 = (byte)((uint)uVar2 >> 8);
    uStack_9ff = (undefined1)((uint)uVar2 >> 0x10);
    uStack_9fe = (undefined1)((uint)uVar2 >> 0x18);
    uVar12 = *(undefined8 *)(param_1 + 0x25);
    uVar15 = *(undefined8 *)(param_1 + 0x21);
    uVar20 = *(undefined8 *)(param_1 + 0x2d);
    uVar19 = *(undefined8 *)(param_1 + 0x29);
    uStack_a18 = (undefined2)uVar12;
    uStack_a16 = (ushort)((ulong)uVar12 >> 0x10);
    uStack_a14 = (undefined1)((ulong)uVar12 >> 0x20);
    uStack_a13 = (undefined1)((ulong)uVar12 >> 0x28);
    uStack_a12 = (ushort)((ulong)uVar12 >> 0x30);
    uStack_a20 = (ushort)uVar15;
    uStack_a1e = (ushort)((ulong)uVar15 >> 0x10);
    uStack_a1c = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_a1b = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a1a = (ushort)((ulong)uVar15 >> 0x30);
    auStack_a0c._4_2_ = (undefined2)uVar20;
    uStack_a06 = (uint)((ulong)uVar20 >> 0x10);
    uStack_a02 = (undefined1)((ulong)uVar20 >> 0x30);
    uStack_a01 = (undefined1)((ulong)uVar20 >> 0x38);
    local_a10 = (undefined1)uVar19;
    uStack_a0f = (undefined1)((ulong)uVar19 >> 8);
    uStack_a0e = (ushort)((ulong)uVar19 >> 0x10);
    auStack_a0c._0_2_ = (undefined2)((ulong)uVar19 >> 0x20);
    auStack_a0c._2_2_ = (undefined2)((ulong)uVar19 >> 0x30);
    uVar12 = *(undefined8 *)(param_1 + 5);
    uVar15 = *(undefined8 *)puVar16;
    uVar20 = *(undefined8 *)(param_1 + 0xd);
    uVar19 = *(undefined8 *)(param_1 + 9);
    uStack_a5c._4_1_ = (undefined1)uVar12;
    uStack_a5c._5_1_ = (undefined1)((ulong)uVar12 >> 8);
    uStack_a5c._6_2_ = (ushort)((ulong)uVar12 >> 0x10);
    uStack_a54 = (undefined1)((ulong)uVar12 >> 0x20);
    uStack_a53 = (undefined1)((ulong)uVar12 >> 0x28);
    uStack_a52 = (undefined1)((ulong)uVar12 >> 0x30);
    uStack_a51 = (undefined1)((ulong)uVar12 >> 0x38);
    uStack_a5c._0_1_ = (undefined1)((ulong)uVar15 >> 0x20);
    uStack_a5c._1_1_ = (undefined1)((ulong)uVar15 >> 0x28);
    uStack_a5c._2_1_ = (undefined1)((ulong)uVar15 >> 0x30);
    uStack_a5c._3_1_ = (undefined1)((ulong)uVar15 >> 0x38);
    uStack_a48 = (undefined1)uVar20;
    uStack_a47 = (undefined1)((ulong)uVar20 >> 8);
    uStack_a46 = (ushort)((ulong)uVar20 >> 0x10);
    uStack_a44 = (undefined1)((ulong)uVar20 >> 0x20);
    uStack_a43 = (undefined1)((ulong)uVar20 >> 0x28);
    uStack_a42 = (ushort)((ulong)uVar20 >> 0x30);
    uStack_a50 = (undefined1)uVar19;
    uStack_a4f = (undefined1)((ulong)uVar19 >> 8);
    auStack_a4e = SUB82((ulong)uVar19 >> 0x10,0);
    uStack_a4c = (undefined1)((ulong)uVar19 >> 0x20);
    uStack_a4b = (undefined1)((ulong)uVar19 >> 0x28);
    uStack_a4a = (ushort)((ulong)uVar19 >> 0x30);
    uVar21 = *(undefined8 *)(param_1 + 0x15);
    uVar20 = *(undefined8 *)(param_1 + 0x11);
    uVar19 = *(undefined8 *)(param_1 + 0x1d);
    uVar12 = *(undefined8 *)(param_1 + 0x19);
    uStack_a38 = (ushort)uVar21;
    uStack_a36 = (undefined2)((ulong)uVar21 >> 0x10);
    uStack_a34 = (undefined2)((ulong)uVar21 >> 0x20);
    uStack_a32 = (undefined2)((ulong)uVar21 >> 0x30);
    uStack_a40 = (undefined2)uVar20;
    uStack_a3e = (undefined2)((ulong)uVar20 >> 0x10);
    uStack_a3c = (undefined2)((ulong)uVar20 >> 0x20);
    uStack_a3a = (undefined2)((ulong)uVar20 >> 0x30);
    uStack_a28 = (undefined2)uVar19;
    uStack_a26 = (ushort)((ulong)uVar19 >> 0x10);
    uStack_a24 = (undefined1)((ulong)uVar19 >> 0x20);
    uStack_a23 = (undefined1)((ulong)uVar19 >> 0x28);
    uStack_a22 = (ushort)((ulong)uVar19 >> 0x30);
    local_a30 = (undefined2)uVar12;
    uStack_a2e = (undefined2)((ulong)uVar12 >> 0x10);
    uStack_a2c = (undefined2)((ulong)uVar12 >> 0x20);
    uStack_a2a = (undefined2)((ulong)uVar12 >> 0x30);
    uVar9 = (uint)uVar15 & 0xff00ff00;
    uVar11 = (uint)uVar15 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar11 << 8);
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar11 >> 0x10);
    uVar14 = (ulong)bStack_a00;
    if (uVar14 != 0) {
      puVar16 = (uint *)((ulong)&local_a60 | 4);
      do {
        uVar9 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
        *puVar16 = uVar9 >> 0x10 | uVar9 << 0x10;
        uVar14 = uVar14 - 1;
        puVar16 = puVar16 + 1;
      } while (uVar14 != 0);
    }
    FUN_100122ed4(&local_a60);
    break;
  case 0x488:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    FUN_1003de60c(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,(char)param_1[3]);
    goto LAB_100125e24;
  case 0x489:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_1003deee8(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10,
                  (char)param_1[5],*(char *)((long)param_1 + 0xb) != '\0');
    goto LAB_100125e24;
  case 0x48a:
    uVar15 = *(undefined8 *)(param_1 + 8);
    uStack_a52 = (undefined1)uVar15;
    uStack_a51 = (undefined1)((ulong)uVar15 >> 8);
    uStack_a50 = (undefined1)((ulong)uVar15 >> 0x10);
    uStack_a4f = (undefined1)((ulong)uVar15 >> 0x18);
    auStack_a4e = SUB82((ulong)uVar15 >> 0x20,0);
    uStack_a4c = (undefined1)((ulong)uVar15 >> 0x30);
    uStack_a4b = (undefined1)((ulong)uVar15 >> 0x38);
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    uVar10 = (uint)*(undefined8 *)(param_1 + 5);
    uVar7 = CONCAT12(uStack_a52,(short)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20));
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = CONCAT13(uStack_a51,uVar7) & 0xff00ff00;
    uVar6 = uVar7 & 0xff00ff;
    uStack_a5c._4_1_ = (undefined1)(uVar9 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a54 = (undefined1)(uVar11 >> 0x18);
    uStack_a53 = (undefined1)(uVar6 >> 0x10);
    uStack_a52 = (undefined1)(uVar11 >> 8);
    uStack_a51 = (undefined1)uVar6;
    FUN_100122f68(&local_a60);
    break;
  case 0x48b:
    uStack_a54 = (undefined1)((ulong)*(undefined8 *)(param_1 + 5) >> 0x20);
    uVar12 = *(undefined8 *)((long)param_1 + 0x17);
    uVar15 = *(undefined8 *)((long)param_1 + 0xf);
    uStack_a4b = (undefined1)uVar12;
    uStack_a4a = (ushort)((ulong)uVar12 >> 8);
    uStack_a48 = (undefined1)((ulong)uVar12 >> 0x18);
    uStack_a47 = (undefined1)((ulong)uVar12 >> 0x20);
    uStack_a46 = (ushort)((ulong)uVar12 >> 0x28);
    uStack_a44 = (undefined1)((ulong)uVar12 >> 0x38);
    uStack_a53 = (undefined1)uVar15;
    uStack_a52 = (undefined1)((ulong)uVar15 >> 8);
    uStack_a51 = (undefined1)((ulong)uVar15 >> 0x10);
    uStack_a50 = (undefined1)((ulong)uVar15 >> 0x18);
    uStack_a4f = (undefined1)((ulong)uVar15 >> 0x20);
    auStack_a4e = SUB82((ulong)uVar15 >> 0x28,0);
    uStack_a4c = (undefined1)((ulong)uVar15 >> 0x38);
    uVar6 = (uint)*(undefined8 *)(param_1 + 5);
    uVar7 = CONCAT12(uStack_a52,CONCAT11(uStack_a53,uStack_a54));
    uVar9 = CONCAT13(uStack_a51,uVar7) & 0xff00ff00;
    uVar10 = uVar7 & 0xff00ff;
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    uStack_a5c._6_2_ = (ushort)(uVar11 >> 8) | (ushort)(uVar6 << 8);
    uStack_a5c._4_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._5_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a54 = (undefined1)(uVar9 >> 0x18);
    uStack_a53 = (undefined1)(uVar10 >> 0x10);
    uStack_a52 = (undefined1)(uVar9 >> 8);
    uStack_a51 = (undefined1)uVar10;
    uVar10 = (uint)*(undefined8 *)puVar16;
    uVar6 = (uint)((ulong)*(undefined8 *)puVar16 >> 0x20);
    uVar9 = uVar10 & 0xff00ff00;
    uVar10 = uVar10 & 0xff00ff;
    local_a60._2_2_ = (ushort)(uVar9 >> 8) | (ushort)(uVar10 << 8);
    uVar11 = uVar6 & 0xff00ff00;
    uVar6 = uVar6 & 0xff00ff;
    local_a60._0_1_ = (undefined1)(uVar9 >> 0x18);
    local_a60._1_1_ = (undefined1)(uVar10 >> 0x10);
    uStack_a5c._0_1_ = (undefined1)(uVar11 >> 0x18);
    uStack_a5c._1_1_ = (undefined1)(uVar6 >> 0x10);
    uStack_a5c._2_1_ = (undefined1)(uVar11 >> 8);
    uStack_a5c._3_1_ = (undefined1)uVar6;
    FUN_100123a74(&local_a60);
    break;
  case 0x48c:
    uVar15 = *(undefined8 *)puVar16;
    local_a60._0_1_ = (undefined1)uVar15;
    local_a60._1_1_ = (undefined1)((ulong)uVar15 >> 8);
    uStack_a5c._2_1_ = (undefined1)((ulong)uVar15 >> 0x30);
    uStack_a5c._3_1_ = (undefined1)((ulong)uVar15 >> 0x38);
    uVar11 = (uint)((ulong)uVar15 >> 0x10);
    uVar9 = uVar11 & 0xff00ff00;
    uVar11 = uVar11 & 0xff00ff;
    local_a60._2_2_ = (ushort)(byte)(uVar9 >> 0x18) | (ushort)(uVar11 >> 8);
    uStack_a5c._0_1_ = (undefined1)(uVar9 >> 8);
    uStack_a5c._1_1_ = (undefined1)uVar11;
    FUN_100122f20(&local_a60);
    break;
  case 0x48d:
    FUN_100125e9c(&local_a60);
    _memcpy(&local_a60,puVar16,0x64c);
    FUN_100118dc8(&local_a60);
    break;
  case 0x48f:
    uStack_a5c._4_1_ = 0;
    uStack_a5c._5_1_ = 0;
    uStack_a5c._6_2_ = 0;
    uStack_a54 = 0;
    uStack_a53 = 0;
    uStack_a52 = 0;
    uStack_a51 = 0;
    uStack_a50 = 0;
    uStack_a4f = 0;
    auStack_a4e = (undefined1  [2])0x0;
    uStack_a4c = 0;
    uStack_a4b = 0;
    uStack_a4a = 0;
    local_a60._0_1_ = 0xe8;
    local_a60._1_1_ = 0x8e;
    local_a60._2_2_ = 0x144;
    uStack_a5c._0_1_ = 1;
    uStack_a5c._1_1_ = 0;
    uStack_a5c._2_1_ = 0;
    uStack_a5c._3_1_ = 0;
    goto LAB_100125e24;
  case 0x490:
    uVar9 = (*(uint *)(param_1 + 1) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 1) & 0xff00ff) << 8;
    uVar11 = (*(uint *)(param_1 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 3) & 0xff00ff) << 8;
    FUN_1003d5800(&local_a60,uVar9 >> 0x10 | uVar9 << 0x10,uVar11 >> 0x10 | uVar11 << 0x10);
LAB_100125e24:
    uStack_a48 = 1;
    FUN_100345498(&local_a60);
    break;
  default:
    if (uVar3 == 0) {
      if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
        uVar9 = (*puVar16 & 0xff00ff00) >> 8 | (*puVar16 & 0xff00ff) << 8;
        FUN_1001479fc(uVar9 >> 0x10 | uVar9 << 0x10);
        return;
      }
      goto LAB_100125e98;
    }
    if (uVar3 == 6) {
      FUN_100147954(1);
      if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
        FUN_100122c7c();
        return;
      }
      goto LAB_100125e98;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
LAB_100125e98:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void * FUN_100125e9c(void *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  _bzero(param_1,0x64c);
  lVar1 = 0;
  pvVar2 = param_1;
  do {
    lVar3 = 0;
    *(undefined4 *)((long)param_1 + lVar1 * 4) = 0xffffffff;
    *(undefined1 *)((long)param_1 + lVar1 + 0x40) = 0xff;
    uVar4 = 0;
    uVar5 = 1;
    do {
      if (uVar4 < 10) {
        *(undefined4 *)((long)pvVar2 + lVar3 + 0x300) = 0xffff0000;
      }
      if (uVar5 < 10) {
        *(undefined4 *)((long)pvVar2 + lVar3 + 0x304) = 0xffff0000;
      }
      uVar4 = uVar4 + 2;
      uVar5 = uVar5 + 2;
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0x28);
    lVar1 = lVar1 + 1;
    pvVar2 = (void *)((long)pvVar2 + 0x28);
  } while (lVar1 != 0x10);
  *(undefined2 *)((long)param_1 + 0x62c) = 0xffff;
  return param_1;
}




void FUN_100125f80(void)

{
  return;
}




void FUN_100125f84(void)

{
  if (DAT_101d23320 != (void *)0x0) {
    operator_delete(DAT_101d23320);
  }
  DAT_101d23320 = (void *)0x0;
  return;
}




void FUN_100125fb0(void)

{
  return;
}




void FUN_100125fb4(undefined8 param_1)

{
  if (DAT_101d23320 != (undefined8 *)0x0) {
    *DAT_101d23320 = param_1;
  }
  return;
}




void FUN_100125fc8(void)

{
  if (DAT_101d23320 != (undefined8 *)0x0) {
    *DAT_101d23320 = 0;
  }
  return;
}




void FUN_100125fdc(void)

{
  if (DAT_101d23320 != (undefined8 *)0x0) {
    FUN_100119e18(*DAT_101d23320);
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100125ff4(void)

{
  DAT_101e3a068 = 0x100;
  DAT_101e3a06a = 0;
  DAT_101e3a06b = 0x1010101;
  DAT_101e3a06f = 0;
  DAT_101e3a070 = 0x1010101;
  DAT_101e3a074 = 0x100;
  DAT_101e3a077 = 0x1000101;
  DAT_101e3a07c = NEON_fmov(0x3f800000,4);
  DAT_101e3a08c = 0;
  DAT_101e3a084 = 0;
  _DAT_101e3a09c = 0x200000000;
  _DAT_101e3a094 = 1;
  DAT_101e3a0a4 = 0;
  FUN_100126050();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10012642c(void)

{
  DAT_101e3a068 = 0x100;
  DAT_101e3a06a = 0;
  DAT_101e3a06b = 0x1010101;
  DAT_101e3a06f = 0;
  DAT_101e3a070 = 0x1010101;
  DAT_101e3a074 = 0x100;
  DAT_101e3a077 = 0x1000101;
  DAT_101e3a07c = NEON_fmov(0x3f800000,4);
  DAT_101e3a08c = 0;
  DAT_101e3a084 = 0;
  _DAT_101e3a09c = 0x200000000;
  _DAT_101e3a094 = 1;
  return;
}




void FUN_100126480(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  char acStack_138 [255];
  undefined1 local_39;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004d2628(acStack_138,param_1,0xff);
  local_39 = 0;
  pcVar2 = _strtok(acStack_138," ");
  if (pcVar2 != (char *)0x0) {
    uVar3 = FUN_1004d2524("en");
    iVar1 = FUN_1004d2640(pcVar2,"en",uVar3);
    if (iVar1 != 0) {
      uVar3 = FUN_1004d2524("de");
      iVar1 = FUN_1004d2640(pcVar2,"de",uVar3);
      if (iVar1 == 0) {
        DAT_101e3a08c._0_4_ = 1;
        goto LAB_100126694;
      }
      uVar3 = FUN_1004d2524("es");
      iVar1 = FUN_1004d2640(pcVar2,"es",uVar3);
      if (iVar1 == 0) {
        DAT_101e3a08c._0_4_ = 2;
        goto LAB_100126694;
      }
      uVar3 = FUN_1004d2524("fr");
      iVar1 = FUN_1004d2640(pcVar2,"fr",uVar3);
      if (iVar1 == 0) {
        DAT_101e3a08c._0_4_ = 3;
        goto LAB_100126694;
      }
      uVar3 = FUN_1004d2524("ja");
      iVar1 = FUN_1004d2640(pcVar2,"ja",uVar3);
      if (iVar1 == 0) {
        DAT_101e3a08c._0_4_ = 6;
        goto LAB_100126694;
      }
      uVar3 = FUN_1004d2524("ko");
      iVar1 = FUN_1004d2640(pcVar2,"ko",uVar3);
      if (iVar1 == 0) {
        DAT_101e3a08c._0_4_ = 8;
        goto LAB_100126694;
      }
      uVar3 = FUN_1004d2524("ru");
      iVar1 = FUN_1004d2640(pcVar2,"ru",uVar3);
      if (iVar1 == 0) {
        DAT_101e3a08c._0_4_ = 0xb;
        goto LAB_100126694;
      }
      uVar3 = FUN_1004d2524("vi");
      iVar1 = FUN_1004d2640(pcVar2,"vi",uVar3);
      if (iVar1 == 0) {
        DAT_101e3a08c._0_4_ = 0xe;
        goto LAB_100126694;
      }
      uVar3 = FUN_1004d2524("zh-Hans");
      iVar1 = FUN_1004d2640(pcVar2,"zh-Hans",uVar3);
      if (iVar1 != 0) {
        uVar3 = FUN_1004d2524("zh-chs");
        iVar1 = FUN_1004d2640(pcVar2,"zh-chs",uVar3);
        if (iVar1 != 0) {
          uVar3 = FUN_1004d2524("zh-cn");
          iVar1 = FUN_1004d2640(pcVar2,"zh-cn",uVar3);
          if (iVar1 != 0) {
            uVar3 = FUN_1004d2524("zh-SG");
            iVar1 = FUN_1004d2640(pcVar2,"zh-SG",uVar3);
            if (iVar1 != 0) {
              _strtok((char *)0x0," ");
              goto LAB_100126690;
            }
          }
        }
      }
      DAT_101e3a08c._0_4_ = 0xf;
      goto LAB_100126694;
    }
  }
LAB_100126690:
  DAT_101e3a08c._0_4_ = 0;
LAB_100126694:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012670c(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _strcasecmp(param_1,"energy_savings");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = _strcasecmp(param_1,"default");
    uVar2 = 1;
    if (iVar1 != 0) {
      iVar1 = _strcasecmp(param_1,"best_performance");
      uVar2 = 1;
      if (iVar1 == 0) {
        uVar2 = 2;
      }
    }
  }
  DAT_101e3a094 = uVar2;
  return;
}




void FUN_100126778(char *param_1)

{
  int iVar1;
  
  iVar1 = _strcasecmp(param_1,"default_layout");
  if (iVar1 != 0) {
    iVar1 = _strcasecmp(param_1,"right_phone_items_and_abilities");
    if (iVar1 == 0) {
      DAT_101e3a0a0 = 6;
      return;
    }
    iVar1 = _strcasecmp(param_1,"right_phone_items_only");
    if (iVar1 == 0) {
      DAT_101e3a0a0 = 2;
      return;
    }
    iVar1 = _strcasecmp(param_1,"right_phone_abilities_only");
    if (iVar1 == 0) {
      DAT_101e3a0a0 = 4;
      return;
    }
    iVar1 = FUN_1004e2f38(&DAT_101d911b0);
    if (iVar1 != 2) {
      iVar1 = FUN_1004e2f38(&DAT_101d911b0);
      DAT_101e3a0a0 = (uint)(iVar1 != 3) << 1;
      return;
    }
  }
  DAT_101e3a0a0 = 0;
  return;
}




void FUN_100126834(char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _strcasecmp(param_1,"small");
  if (iVar1 == 0) {
    DAT_101e3a098 = 0;
    return;
  }
  iVar1 = _strcasecmp(param_1,"medium");
  if (iVar1 == 0) {
    DAT_101e3a098 = 1;
    return;
  }
  iVar1 = _strcasecmp(param_1,"large");
  if (iVar1 == 0) {
LAB_1001268c0:
    DAT_101e3a098 = 2;
  }
  else {
    iVar1 = _strcasecmp(param_1,"huge");
    if (iVar1 != 0) {
      if (param_2 == 0) {
        iVar1 = FUN_1004e2f38(&DAT_101d911b0);
        DAT_101e3a098 = (uint)(iVar1 == 2);
        return;
      }
      if (param_2 == 1) goto LAB_1001268c0;
      if (param_2 != 2) {
        DAT_101e3a098 = 0;
        return;
      }
    }
    DAT_101e3a098 = 3;
  }
  return;
}




undefined1 FUN_1001268f0(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return (undefined1)DAT_101e3a068;
}




undefined1 FUN_100126918(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return DAT_101e3a068._1_1_;
}




undefined1 FUN_100126940(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return DAT_101e3a06a;
}




undefined1 FUN_100126968(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return (undefined1)DAT_101e3a06b;
}




undefined1 FUN_100126990(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return DAT_101e3a06b._1_1_;
}




undefined1 FUN_1001269b8(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return DAT_101e3a06b._2_1_;
}




undefined1 FUN_1001269e0(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return DAT_101e3a06b._3_1_;
}




undefined1 FUN_100126a08(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return DAT_101e3a06f;
}




byte FUN_100126a30(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return (byte)DAT_101e3a0a0 >> 1 & 1;
}




undefined1 FUN_100126a5c(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return (undefined1)DAT_101e3a077;
}




undefined1 FUN_100126a84(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return DAT_101e3a077._1_1_;
}




undefined1 FUN_100126aac(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return DAT_101e3a070._3_1_;
}




undefined1 FUN_100126ad4(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return (undefined1)DAT_101e3a074;
}




undefined1 FUN_100126afc(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return DAT_101e3a074._1_1_;
}




undefined1 FUN_100126b24(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return DAT_101e3a076;
}




void FUN_100126b4c(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  FUN_100130f30();
  return;
}




void FUN_100126b6c(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  FUN_100130f38();
  return;
}




byte FUN_100126b8c(void)

{
  byte bVar1;
  int iVar2;
  
  if (((DAT_101e3a0a8 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_101e3a0a8), iVar2 != 0)) {
    iVar2 = FUN_10052bc18();
    bVar1 = 0;
    if (iVar2 != 0) {
      bVar1 = FUN_10052bc20();
    }
    DAT_101e3a0a5 = bVar1;
    ___cxa_guard_release(&DAT_101e3a0a8);
  }
  bVar1 = FUN_10052bc18();
  return DAT_101e3a0a5 & bVar1;
}




undefined8 FUN_100126bf4(void)

{
  return 1;
}




bool FUN_100126bfc(void)

{
  int iVar1;
  
  iVar1 = FUN_100126c18();
  return iVar1 == 1;
}




void FUN_100126c18(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  if (DAT_101e3a08c._4_4_ != 0) {
    return;
  }
  FUN_100126f48();
  return;
}




bool FUN_100126c4c(void)

{
  int iVar1;
  
  iVar1 = FUN_100126c18();
  return iVar1 - 1U < 2;
}




bool FUN_100126c6c(void)

{
  return 0x20000000 < DAT_101d911c8;
}




bool FUN_100126c88(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return DAT_101e3a098 == 0;
}




bool FUN_100126cb8(float param_1,float param_2)

{
  return 1.5 < param_1 / param_2 || ABS(param_1 / param_2 + -1.5) < 0.05;
}




ulong FUN_100126cec(void)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_1004e2f38(&DAT_101d911b0);
  if ((int)uVar2 != 1) {
    iVar1 = FUN_1004e2f38(&DAT_101d911b0);
    uVar2 = (ulong)(iVar1 == 4);
  }
  return uVar2;
}




bool FUN_100126d24(void)

{
  int iVar1;
  
  iVar1 = FUN_1004e2f38(&DAT_101d911b0);
  return iVar1 == 2;
}




undefined1 FUN_100126d48(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return DAT_101e3a077._3_1_;
}




undefined4 FUN_100126d70(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return (undefined4)DAT_101e3a08c;
}




void FUN_100126d98(undefined8 param_1)

{
  char *pcVar1;
  
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  if ((int)DAT_101e3a08c - 1U < 0x10) {
    pcVar1 = (&PTR_s_de_101459e08)[(int)((int)DAT_101e3a08c - 1U)];
  }
  else {
    pcVar1 = "en";
  }
  FUN_10001549c(param_1,pcVar1);
  return;
}




char * FUN_100126df4(void)

{
  char *pcVar1;
  
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  if ((uint)DAT_101e3a08c < 0x11) {
    pcVar1 = (&PTR_s_English_101459e88)[(int)(uint)DAT_101e3a08c];
  }
  else {
    pcVar1 = "languageUnknown";
  }
  return pcVar1;
}




void FUN_100126e3c(string *param_1)

{
  char *pcVar1;
  void *local_38 [2];
  char local_21;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  switch((undefined4)DAT_101e3a08c) {
  case 1:
    pcVar1 = ".de";
    break;
  case 2:
    pcVar1 = ".es";
    break;
  case 3:
    pcVar1 = ".fr";
    break;
  default:
    goto switchD_100126e90_caseD_4;
  case 5:
    pcVar1 = ".it";
    break;
  case 6:
    pcVar1 = ".ja";
    break;
  case 8:
    pcVar1 = ".ko";
    break;
  case 10:
    pcVar1 = ".pt";
    break;
  case 0xb:
    pcVar1 = ".ru";
    break;
  case 0xd:
    pcVar1 = ".tr";
    break;
  case 0xf:
    pcVar1 = ".zh";
    break;
  case 0x10:
    pcVar1 = ".zh-Hant";
  }
  FUN_10001549c(local_38,pcVar1);
  std::string::operator=(param_1,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
switchD_100126e90_caseD_4:
  return;
}




undefined4 FUN_100126f48(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar3 = FUN_1004e2f38(&DAT_101d911b0);
  iVar4 = FUN_1004e2f40(&DAT_101d911b0);
  if ((iVar3 == 3) || (iVar4 == 0)) {
    return 1;
  }
  if (iVar4 == 0x19) {
    iVar3 = FUN_1004e221c(&DAT_101d911b0);
    if (iVar3 == 1) {
      return 1;
    }
    uVar5 = 1;
    if (iVar3 < 0x52) {
      uVar5 = 2;
    }
    bVar1 = SBORROW4(iVar3,0x32);
    bVar2 = iVar3 + -0x32 < 0;
  }
  else if (iVar3 == 1) {
    uVar5 = 1;
    if (iVar4 < 6) {
      uVar5 = 2;
    }
    bVar1 = SBORROW4(iVar4,4);
    bVar2 = iVar4 + -4 < 0;
  }
  else {
    if (iVar3 == 4) {
      uVar5 = 1;
      if (iVar4 == 0xd) {
        uVar5 = 2;
      }
      if (iVar4 < 0xd) {
        return 3;
      }
      return uVar5;
    }
    if (iVar3 != 2) {
      return 1;
    }
    uVar5 = 1;
    if (iVar4 < 0x14) {
      uVar5 = 2;
    }
    bVar1 = SBORROW4(iVar4,0x12);
    bVar2 = iVar4 + -0x12 < 0;
  }
  uVar6 = 3;
  if (bVar2 == bVar1) {
    uVar6 = uVar5;
  }
  return uVar6;
}




undefined4 FUN_10012702c(void)

{
  return DAT_101e3a08c._4_4_;
}




undefined4 FUN_100127038(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1004e2f40(&DAT_101d911b0);
  uVar2 = 0x3f200000;
  if (iVar1 != 0x11) {
    uVar2 = 0x3f800000;
  }
  return uVar2;
}




int FUN_100127064(void)

{
  int iVar1;
  
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  iVar1 = 2 - DAT_101e3a094;
  if (2 < DAT_101e3a094) {
    iVar1 = 0;
  }
  return iVar1;
}




undefined4 FUN_10012709c(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return DAT_101e3a09c;
}




undefined4 FUN_1001270c4(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return DAT_101e3a098;
}




undefined8 * FUN_1001270ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101459fe8;
  FUN_1004f0a20(param_1 + 1);
  *param_1 = &PTR_thunk_FUN_1001271fc_101459f20;
  param_1[1] = &PTR_FUN_101459f70;
  FUN_1004e4464(param_1 + 4,0);
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  FUN_1004f1580(param_1 + 0x16);
  param_1[0x16] = &PTR_FUN_10145a030;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x21] = param_1 + 0x22;
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xe0;
  FUN_1001271a8(param_1);
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,thunk_FUN_1001271a8,0);
  return param_1;
}




void FUN_1001271a8(undefined8 param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  FUN_100136d04(&local_30);
  if ((int)local_30 != 0) {
    FUN_1001279dc(param_1,&local_30);
  }
  FUN_100127a80(&local_30,1);
  return;
}




void thunk_FUN_1001271a8(void)

{
  FUN_1001271a8();
  return;
}




undefined8 * FUN_1001271fc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001271fc_101459f20;
  param_1[1] = &PTR_FUN_101459f70;
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x9d2c9b16);
  FUN_100128504(param_1 + 0x21,param_1[0x22]);
  param_1[0x16] = &PTR_FUN_10145a030;
  if (*(char *)((long)param_1 + 0xff) < '\0') {
    operator_delete((void *)param_1[0x1d]);
  }
  FUN_1004f15a8(param_1 + 0x16);
  FUN_100127a80(param_1 + 0x14,1);
  FUN_100128554(param_1 + 0x12,1);
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 4));
  FUN_1004f0a9c(param_1 + 1);
  return param_1;
}




void FUN_1001272d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145a030;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void thunk_FUN_1001271fc(void)

{
  FUN_1001271fc();
  return;
}




void FUN_100127310(long param_1)

{
  FUN_1001271fc(param_1 + -8);
  return;
}




void FUN_100127318(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001271fc();
  operator_delete(pvVar1);
  return;
}




void FUN_10012732c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001271fc(param_1 + -8);
  operator_delete(pvVar1);
  return;
}




void FUN_1001276f0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  lVar1 = FUN_100128a60(param_1 + 0x108);
  if (param_1 + 0x110 == lVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(lVar1 + 0x38);
  }
  plVar2 = (long *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x8f) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_100104440(uVar3,plVar2);
  return;
}




void FUN_10012773c(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1001285e0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x30;
  FUN_10003330c(lVar4 + -0x30,param_2);
  FUN_10003330c(lVar4 + -0x18,param_2 + 0x18);
  return;
}




void FUN_1001277cc(void)

{
  undefined8 ***pppuVar1;
  undefined8 **local_38 [2];
  char local_21;
  
  FUN_10052b2e4(local_38);
  pppuVar1 = (undefined8 ***)local_38[0];
  if (-1 < local_21) {
    pppuVar1 = local_38;
  }
  FUN_100102198("storefront",pppuVar1,1);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void thunk_FUN_1001277cc(void)

{
  undefined8 ***pppuVar1;
  undefined8 **appuStack_38 [2];
  char cStack_21;
  
  FUN_10052b2e4(appuStack_38);
  pppuVar1 = (undefined8 ***)appuStack_38[0];
  if (-1 < cStack_21) {
    pppuVar1 = appuStack_38;
  }
  FUN_100102198("storefront",pppuVar1,1);
  if (cStack_21 < '\0') {
    operator_delete(appuStack_38[0]);
  }
  return;
}




long FUN_10012782c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_1001286d4(param_1,&local_38,param_2);
  pvVar2 = (void *)*puVar1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = operator_new(0x40);
    FUN_10003330c((long)pvVar2 + 0x20,param_2);
    *(undefined4 *)((long)pvVar2 + 0x38) = 0;
    FUN_100128778(param_1,local_38,puVar1,pvVar2);
  }
  return (long)pvVar2 + 0x38;
}




undefined8 FUN_1001278a8(long param_1,string *param_2,string *param_3)

{
  string *psVar1;
  string *psVar2;
  string sVar3;
  string sVar4;
  size_t sVar5;
  size_t sVar6;
  string *psVar7;
  size_t sVar8;
  int iVar9;
  undefined8 uVar10;
  string *psVar11;
  string *psVar12;
  
  if ((*(byte *)(param_1 + 0x120) >> 4 & 1) == 0) {
    sVar3 = param_2[0x17];
    psVar2 = *(string **)param_2;
    sVar6 = *(size_t *)(param_2 + 8);
    if (-1 < (char)sVar3) {
      psVar2 = param_2;
      sVar6 = (ulong)(byte)sVar3;
    }
    if (*(uint *)(param_1 + 0xa0) != 0) {
      psVar11 = *(string **)(param_1 + 0xa8);
      psVar12 = psVar11 + (ulong)*(uint *)(param_1 + 0xa0) * 0x58;
      do {
        sVar4 = psVar11[0x17];
        sVar5 = *(size_t *)(psVar11 + 8);
        if (-1 < (char)sVar4) {
          sVar5 = (ulong)(byte)sVar4;
        }
        if (sVar6 == sVar5) {
          psVar1 = *(string **)psVar11;
          if (-1 < (char)sVar4) {
            psVar1 = psVar11;
          }
          sVar5 = (ulong)(byte)sVar3;
          psVar7 = param_2;
          sVar8 = sVar6;
          if ((char)sVar3 < '\0') {
            if ((sVar6 == 0) || (iVar9 = _memcmp(psVar2,psVar1,sVar6), iVar9 == 0)) {
LAB_100127980:
              std::string::operator=(param_3,psVar11);
              FUN_1000153b4(param_3 + 0x18,psVar11 + 0x18);
              FUN_1000153b4(param_3 + 0x28,psVar11 + 0x28);
              FUN_1000153b4(param_3 + 0x38,psVar11 + 0x38);
              uVar10 = *(undefined8 *)(psVar11 + 0x48);
              *(undefined4 *)(param_3 + 0x50) = *(undefined4 *)(psVar11 + 0x50);
              *(undefined8 *)(param_3 + 0x48) = uVar10;
              return 1;
            }
          }
          else {
            while( true ) {
              if (sVar8 == 0) goto LAB_100127980;
              if (*psVar7 != *psVar1) break;
              psVar1 = psVar1 + 1;
              sVar5 = sVar5 - 1;
              psVar7 = psVar7 + 1;
              sVar8 = sVar5;
            }
          }
        }
        psVar11 = psVar11 + 0x58;
      } while (psVar11 != psVar12);
    }
  }
  return 0;
}




void FUN_1001279dc(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  
  FUN_100127a80(param_1 + 0xa0,0);
  FUN_10012884c(param_1 + 0xa0,param_2);
  *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) | 0x10;
  if (*(int *)(param_1 + 0xa0) != 0) {
    lVar2 = *(long *)(param_1 + 0xa8);
    do {
      uVar3 = *(undefined4 *)(lVar2 + 0x48);
      puVar1 = (undefined4 *)FUN_10012782c(param_1 + 0x108,lVar2);
      *puVar1 = uVar3;
      lVar2 = lVar2 + 0x58;
    } while (lVar2 != *(long *)(param_1 + 0xa8) + (ulong)*(uint *)(param_1 + 0xa0) * 0x58);
  }
  FUN_10052b304(param_2);
  return;
}




int FUN_100127b2c(long param_1,uint *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x20));
  uVar9 = *param_2;
  if (uVar9 != 0) {
    uVar15 = 0;
    do {
      uVar4 = *(uint *)(param_1 + 0xa0);
      if (uVar4 != 0) {
        uVar17 = 0;
        lVar16 = *(long *)(param_2 + 2);
        puVar13 = (undefined8 *)(lVar16 + uVar15 * 0x58);
        pbVar10 = (byte *)(lVar16 + uVar15 * 0x58);
        lVar14 = *(long *)(param_1 + 0xa8);
        bVar5 = *(byte *)((long)puVar13 + 0x17);
        sVar1 = *(size_t *)(pbVar10 + 8);
        if (-1 < (char)bVar5) {
          sVar1 = (ulong)bVar5;
        }
        do {
          pbVar12 = (byte *)(lVar14 + uVar17 * 0x58);
          bVar6 = pbVar12[0x17];
          sVar2 = *(size_t *)(pbVar12 + 8);
          if (-1 < (char)bVar6) {
            sVar2 = (ulong)bVar6;
          }
          if (sVar1 == sVar2) {
            puVar3 = (void *)*puVar13;
            if (-1 < (char)bVar5) {
              puVar3 = puVar13;
            }
            pbVar11 = *(byte **)pbVar12;
            if (-1 < (char)bVar6) {
              pbVar11 = pbVar12;
            }
            if ((char)bVar5 < '\0') {
              if ((sVar1 == 0) || (iVar8 = _memcmp(puVar3,pbVar11,sVar1), iVar8 == 0))
              goto LAB_100127c58;
            }
            else {
              if (sVar1 == 0) {
LAB_100127c58:
                lVar14 = lVar14 + (uVar17 & 0xffffffff) * 0x58;
                lVar16 = lVar16 + uVar15 * 0x58;
                FUN_1000153b4(lVar14 + 0x18,lVar16 + 0x18);
                FUN_1000153b4(lVar14 + 0x28,lVar16 + 0x28);
                FUN_1000153b4(lVar14 + 0x38,lVar16 + 0x38);
                *(undefined4 *)(lVar14 + 0x4c) = *(undefined4 *)(lVar16 + 0x4c);
                uVar9 = *param_2;
                break;
              }
              pbVar12 = pbVar10;
              uVar7 = (ulong)bVar5;
              if ((uint)*pbVar11 == ((uint)(void *)*puVar13 & 0xff)) {
                do {
                  pbVar12 = pbVar12 + 1;
                  pbVar11 = pbVar11 + 1;
                  if (uVar7 - 1 == 0) goto LAB_100127c58;
                  uVar7 = uVar7 - 1;
                } while (*pbVar12 == *pbVar11);
              }
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar4);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < uVar9);
  }
  *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) & 0xef | 1;
  iVar8 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x20));
  return iVar8;
}




int FUN_100127cdc(long param_1,string *param_2,string *param_3)

{
  size_t sVar1;
  uint uVar2;
  string sVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  string *psVar8;
  undefined8 *puVar9;
  string *psVar10;
  string *psVar11;
  string *psVar12;
  ulong uVar13;
  long lVar14;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  void *pvStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x20));
  uVar2 = *(uint *)(param_1 + 0x90);
  psVar12 = *(string **)param_2;
  sVar5 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    psVar12 = param_2;
    sVar5 = (ulong)(byte)param_2[0x17];
  }
  if (uVar2 != 0) {
    uVar13 = 0;
    lVar14 = *(long *)(param_1 + 0x98);
    psVar10 = (string *)(lVar14 + 1);
    do {
      puVar9 = (undefined8 *)(lVar14 + uVar13 * 0x30);
      bVar4 = *(byte *)((long)puVar9 + 0x17);
      uVar7 = (ulong)bVar4;
      sVar1 = puVar9[1];
      if (-1 < (char)bVar4) {
        sVar1 = uVar7;
      }
      if (sVar1 == sVar5) {
        if ((char)bVar4 < '\0') {
          if ((sVar5 == 0) || (iVar6 = _memcmp((void *)*puVar9,psVar12,sVar5), iVar6 == 0))
          goto LAB_100127eb4;
        }
        else {
          if (sVar5 == 0) goto LAB_100127eb4;
          psVar11 = psVar10;
          psVar8 = psVar12;
          if ((uint)(byte)*psVar12 == ((uint)(void *)*puVar9 & 0xff)) {
            do {
              psVar8 = psVar8 + 1;
              uVar7 = uVar7 - 1;
              if (uVar7 == 0) goto LAB_100127eb4;
              sVar3 = *psVar11;
              psVar11 = psVar11 + 1;
            } while (sVar3 == *psVar8);
          }
        }
      }
      uVar13 = uVar13 + 1;
      psVar10 = psVar10 + 0x30;
    } while (uVar13 != uVar2);
  }
  bVar4 = *(byte *)(param_1 + 0x77);
  uVar13 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 0x68);
  if (-1 < (char)bVar4) {
    sVar1 = uVar13;
  }
  if (sVar1 == sVar5) {
    if ((char)bVar4 < '\0') {
      if ((sVar5 == 0) || (iVar6 = _memcmp(*(void **)(param_1 + 0x60),psVar12,sVar5), iVar6 == 0))
      goto LAB_100127eb4;
    }
    else {
      if (sVar5 == 0) goto LAB_100127eb4;
      if ((uint)(byte)*psVar12 == ((uint)*(void **)(param_1 + 0x60) & 0xff)) {
        psVar10 = (string *)(param_1 + 0x61);
        do {
          uVar13 = uVar13 - 1;
          psVar12 = psVar12 + 1;
          if (uVar13 == 0) goto LAB_100127eb4;
          sVar3 = *psVar10;
          psVar10 = psVar10 + 1;
        } while (sVar3 == *psVar12);
      }
    }
  }
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = (void *)0x0;
  std::string::operator=((string *)&local_90,param_2);
  std::string::operator=((string *)&pvStack_78,param_3);
  FUN_10012773c((uint *)(param_1 + 0x90),&local_90);
  if (lStack_68 < 0) {
    operator_delete(pvStack_78);
  }
  if (local_80 < 0) {
    operator_delete(local_90);
  }
LAB_100127eb4:
  iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x20));
  return iVar6;
}




int FUN_100127edc(long param_1,string *param_2)

{
  size_t sVar1;
  uint uVar2;
  string sVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  string *psVar8;
  undefined8 *puVar9;
  string *psVar10;
  string *psVar11;
  string *psVar12;
  ulong uVar13;
  long lVar14;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  void *pvStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x20));
  uVar2 = *(uint *)(param_1 + 0x90);
  psVar12 = *(string **)param_2;
  sVar5 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    psVar12 = param_2;
    sVar5 = (ulong)(byte)param_2[0x17];
  }
  if (uVar2 != 0) {
    uVar13 = 0;
    lVar14 = *(long *)(param_1 + 0x98);
    psVar10 = (string *)(lVar14 + 1);
    do {
      puVar9 = (undefined8 *)(lVar14 + uVar13 * 0x30);
      bVar4 = *(byte *)((long)puVar9 + 0x17);
      uVar7 = (ulong)bVar4;
      sVar1 = puVar9[1];
      if (-1 < (char)bVar4) {
        sVar1 = uVar7;
      }
      if (sVar1 == sVar5) {
        if ((char)bVar4 < '\0') {
          if ((sVar5 == 0) || (iVar6 = _memcmp((void *)*puVar9,psVar12,sVar5), iVar6 == 0))
          goto LAB_1001280c0;
        }
        else {
          if (sVar5 == 0) goto LAB_1001280c0;
          psVar11 = psVar10;
          psVar8 = psVar12;
          if ((uint)(byte)*psVar12 == ((uint)(void *)*puVar9 & 0xff)) {
            do {
              psVar8 = psVar8 + 1;
              uVar7 = uVar7 - 1;
              if (uVar7 == 0) goto LAB_1001280c0;
              sVar3 = *psVar11;
              psVar11 = psVar11 + 1;
            } while (sVar3 == *psVar8);
          }
        }
      }
      uVar13 = uVar13 + 1;
      psVar10 = psVar10 + 0x30;
    } while (uVar13 != uVar2);
  }
  bVar4 = *(byte *)(param_1 + 0x77);
  uVar13 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 0x68);
  if (-1 < (char)bVar4) {
    sVar1 = uVar13;
  }
  if (sVar1 == sVar5) {
    if ((char)bVar4 < '\0') {
      if ((sVar5 == 0) || (iVar6 = _memcmp(*(void **)(param_1 + 0x60),psVar12,sVar5), iVar6 == 0))
      goto LAB_1001280c0;
    }
    else {
      if (sVar5 == 0) goto LAB_1001280c0;
      if ((uint)(byte)*psVar12 == ((uint)*(void **)(param_1 + 0x60) & 0xff)) {
        psVar10 = (string *)(param_1 + 0x61);
        do {
          uVar13 = uVar13 - 1;
          psVar12 = psVar12 + 1;
          if (uVar13 == 0) goto LAB_1001280c0;
          sVar3 = *psVar10;
          psVar10 = psVar10 + 1;
        } while (sVar3 == *psVar12);
      }
    }
  }
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = (void *)0x0;
  std::string::operator=((string *)&local_90,param_2);
  std::string::operator=((string *)&pvStack_78,(string *)&DAT_101d91198);
  FUN_10012773c((uint *)(param_1 + 0x90),&local_90);
  *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) | 2;
  if (lStack_68 < 0) {
    operator_delete(pvStack_78);
  }
  if (local_80 < 0) {
    operator_delete(local_90);
  }
LAB_1001280c0:
  iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x20));
  return iVar6;
}




int FUN_1001280e8(long param_1)

{
  int iVar1;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x20));
  *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) | 4;
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x20));
  return iVar1;
}




int FUN_100128120(long param_1)

{
  int iVar1;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x20));
  *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) | 8;
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x20));
  return iVar1;
}




undefined8 * FUN_100128158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101459fa0;
  FUN_100128188();
  return param_1;
}




void FUN_100128188(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = DAT_101d23328 + -8;
  if (DAT_101d23328 != 0 && lVar2 != 0) {
    do {
      if (lVar2 == param_1) {
        FUN_100128430(&DAT_101d23328);
        return;
      }
      plVar1 = (long *)(lVar2 + 8);
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar2 = *plVar1 + -8;
      }
    } while (lVar2 != 0);
  }
  return;
}




undefined8 * FUN_1001281d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101459fa0;
  FUN_100128188();
  return param_1;
}




void FUN_100128200(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101459fa0;
  FUN_100128188();
  operator_delete(param_1);
  return;
}




void FUN_100128230(void)

{
  int iVar1;
  
  operator_new(0x128);
  DAT_101e3a228 = FUN_1001270ec();
  iVar1 = FUN_10052b2f4();
  if (iVar1 != 0) {
    FUN_10052b2fc(DAT_101e3a228);
    return;
  }
  return;
}




void FUN_100128274(void)

{
  FUN_10052b300();
  if (DAT_101e3a228 != (long *)0x0) {
    (**(code **)(*DAT_101e3a228 + 8))();
  }
  DAT_101e3a228 = (long *)0x0;
  return;
}




void FUN_1001282ac(void)

{
  if (DAT_101e3a228 != 0) {
    FUN_100127344();
    return;
  }
  return;
}




undefined8 FUN_1001282c0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  void *local_f0 [2];
  char local_d9;
  void *local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [88];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101e3a228 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_10015d3ec();
    local_d8 = (void *)0x0;
    uStack_d0 = 0;
    local_c8 = 0;
    uVar1 = *(uint *)(lVar2 + 0x5510);
    if (-1 < (char)*(byte *)(lVar2 + 0x551f)) {
      uVar1 = (uint)*(byte *)(lVar2 + 0x551f);
    }
    if (uVar1 != 0) {
      FUN_1004e07d8(auStack_80);
      FUN_1004e0800(auStack_80,lVar2 + 0x5508);
      thunk_FUN_1004e13c8(auStack_80,auStack_90);
      local_a0 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      FUN_1004e0828(auStack_90,&local_c0,0);
      FUN_10001549c(local_f0,&local_c0);
      std::string::operator=((string *)&local_d8,(string *)local_f0);
      if (local_d9 < '\0') {
        operator_delete(local_f0[0]);
      }
    }
    uVar3 = FUN_10052b308(param_1,&local_d8,lVar2 + 0x5508);
    if (local_c8 < 0) {
      operator_delete(local_d8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1001283e4(undefined8 param_1,undefined8 param_2)

{
  if (DAT_101e3a228 != 0) {
    FUN_1001278a8(DAT_101e3a228,param_1,param_2);
    return;
  }
  return;
}




void FUN_100128400(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar2 = 0;
  puVar1 = &DAT_101d23328;
  if (DAT_101d23328 != 0) {
    puVar1 = DAT_101d23330;
  }
  *puVar1 = puVar2;
  DAT_101d23330 = puVar2;
  DAT_101d23338 = DAT_101d23338 + 1;
  return;
}




void FUN_100128430(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 8);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_10012848c(void)

{
  return;
}




void FUN_100128490(void)

{
  return;
}




void FUN_100128494(void)

{
  return;
}




void FUN_100128498(void)

{
  return;
}




void FUN_10012849c(void)

{
  return;
}




void FUN_1001284a0(void)

{
  return;
}




void FUN_1001284a8(void)

{
  return;
}




void FUN_1001284ac(void)

{
  return;
}




void FUN_1001284b0(void)

{
  return;
}




void FUN_1001284b4(void)

{
  return;
}




void FUN_1001284b8(void)

{
  return;
}




void FUN_1001284bc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145a030;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1001284fc(void)

{
  return 0x18;
}




void FUN_100128504(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_100128504(param_1,*param_2);
    FUN_100128504(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_100128554(uint *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      pcVar1 = (char *)(*(long *)(param_1 + 2) + 0x17);
      lVar2 = (ulong)*param_1 * 0x30;
      do {
        if (pcVar1[0x18] < '\0') {
          operator_delete(*(void **)(pcVar1 + 1));
        }
        if (*pcVar1 < '\0') {
          operator_delete(*(void **)(pcVar1 + -0x17));
        }
        pcVar1 = pcVar1 + 0x30;
        lVar2 = lVar2 + -0x30;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_1001285e0(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  char *pcVar3;
  void *pvVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x30);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 * 0x30;
      pvVar4 = pvVar1;
      do {
        FUN_10003330c(pvVar4,pvVar2);
        FUN_10003330c((long)pvVar4 + 0x18,(long)pvVar2 + 0x18);
        pvVar2 = (void *)((long)pvVar2 + 0x30);
        pvVar4 = (void *)((long)pvVar4 + 0x30);
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        pcVar3 = (char *)((long)pvVar2 + 0x17);
        lVar5 = (ulong)*param_1 * 0x30;
        do {
          if (pcVar3[0x18] < '\0') {
            operator_delete(*(void **)(pcVar3 + 1));
          }
          if (*pcVar3 < '\0') {
            operator_delete(*(void **)(pcVar3 + -0x17));
          }
          pcVar3 = pcVar3 + 0x30;
          lVar5 = lVar5 + -0x30;
        } while (lVar5 != 0);
        pvVar2 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




long * FUN_1001286d4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    *param_2 = plVar2;
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    do {
      while( true ) {
        plVar4 = plVar3;
        iVar1 = FUN_1001287cc(param_3,plVar4 + 4);
        if (iVar1 == 0) break;
        plVar2 = plVar4;
        plVar3 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          *param_2 = plVar4;
          return plVar4;
        }
      }
      iVar1 = FUN_1001287cc(plVar4 + 4,param_3);
      if (iVar1 == 0) break;
      plVar2 = plVar4 + 1;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *param_2 = plVar4;
  }
  return plVar2;
}




void FUN_100128778(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




uint FUN_1001287cc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_10012883c;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_10012883c:
  return uVar8 >> 0x1f;
}




void FUN_10012884c(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 != param_2) {
    FUN_100127a80(param_1,1);
    FUN_100128918(param_1,*param_2);
    uVar3 = *param_2;
    uVar4 = 0;
    if (uVar3 != 0) {
      lVar6 = 0;
      lVar7 = *(long *)(param_2 + 2);
      lVar8 = *(long *)(param_1 + 2);
      do {
        lVar1 = lVar8 + lVar6;
        lVar2 = lVar7 + lVar6;
        FUN_10003330c(lVar1,lVar2);
        thunk_FUN_1004e439c(lVar1 + 0x18,lVar2 + 0x18);
        thunk_FUN_1004e439c(lVar1 + 0x28,lVar2 + 0x28);
        thunk_FUN_1004e439c(lVar1 + 0x38,lVar2 + 0x38);
        uVar5 = *(undefined8 *)(lVar2 + 0x48);
        *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(lVar2 + 0x50);
        *(undefined8 *)(lVar1 + 0x48) = uVar5;
        lVar6 = lVar6 + 0x58;
      } while ((ulong)uVar3 * 0x58 - lVar6 != 0);
      uVar4 = *param_2;
    }
    *param_1 = uVar4;
  }
  return;
}




long * FUN_100128a60(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      iVar2 = FUN_1001287cc(plVar5 + 4,param_2);
      lVar1 = 8;
      if (iVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_1001287cc(param_2,plVar4 + 4), iVar2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}




void FUN_100128ae0(void)

{
  DAT_101e3a0b0 = 0xffbc9c44;
  DAT_101e3a0b4 = 0xff1166f2;
  DAT_101e3a0b8 = 0xffe0e0e0;
  DAT_101e3a0bc = 0xffa0a0a0;
  DAT_101e3a0c0 = 0xff8c8c8c;
  DAT_101e3a0c4 = 0xff322213;
  DAT_101e3a0c8 = 0xff091911;
  DAT_101e3a0cc = 0xff170c19;
  DAT_101e3a0d0 = 0xff241a14;
  DAT_101e3a0d4 = 0xff14171c;
  DAT_101e3a0d8 = 0xff221911;
  DAT_101e3a0dc = 0xff1a1416;
  DAT_101e3a0e0 = 0xff121414;
  DAT_101e3a0e4 = 0xff1a1809;
  DAT_101e3a0e8 = 0xff141414;
  DAT_101e3a0ec = 0xff141414;
  DAT_101e3a0f0 = 0xff2929c0;
  DAT_101e3a0f4 = 0xff283082;
  DAT_101e3a0fc = 0xff283082;
  DAT_101e3a0f8 = 0xff5262cc;
  DAT_101e3a100 = 0xff5262cc;
  DAT_101e3a104 = 0xff745c42;
  DAT_101e3a108 = 0xff184155;
  DAT_101e3a10c = 0xff92665e;
  DAT_101e3a110 = 0xffbc9c44;
  DAT_101e3a114 = 0xffbbae56;
  DAT_101e3a118 = 0xff8b7b01;
  DAT_101e3a11c = 0xff90b3ef;
  DAT_101e3a120 = 0xff728ebe;
  DAT_101e3a124 = 0xff19459d;
  DAT_101e3a128 = 0xff9d877b;
  DAT_101e3a12c = 0xffcbb1a3;
  DAT_101e3a130 = 0xff3f6fb5;
  DAT_101e3a134 = 0xffc5c5c5;
  DAT_101e3a138 = 0xff4fc1f1;
  DAT_101e3a13c = 0xff606060;
  DAT_101e3a140 = 0xffc5ff7b;
  DAT_101e3a144 = 0xff5271eb;
  DAT_101e3a148 = 0xfffae076;
  DAT_101e3a14c = 0xff3ac8f6;
  DAT_101e3a150 = 0xffaaaaaa;
  DAT_101e3a154 = 0xffe19400;
  DAT_101e3a158 = 0xffe19400;
  DAT_101e3a15c = 0xffe550b2;
  DAT_101e3a160 = 0xfff22ae8;
  DAT_101e3a164 = 0xff005ae1;
  DAT_101e3a168 = 0xff1addfa;
  DAT_101e3a16c = 0xff2424b3;
  DAT_101e3a170 = 0xff2424b3;
  DAT_101e3a174 = 0xff646464;
  DAT_101e3a178 = 0xff92665e;
  DAT_101e3a17c = 0xff646037;
  DAT_101e3a184 = 0xff1111a1;
  DAT_101e3a180 = 0xffffffff;
  DAT_101e3a18c = 0xffc8c8c8;
  DAT_101e3a188 = 0xff321ee1;
  DAT_101e3a190 = 0xff321ee1;
  DAT_101e3a194 = 0xff7fe801;
  DAT_101e3a198 = 0xffffffff;
  DAT_101e3a19c = 0xff6259b3;
  DAT_101e3a1a0 = 0xff506e73;
  DAT_101e3a1a4 = 0xff9dbf86;
  DAT_101e3a1a8 = 0xffa35244;
  DAT_101e3a1ac = 0xffca828e;
  DAT_101e3a1b0 = 0xffa6a6a6;
  DAT_101e3a1b4 = 0xffa6a6a6;
  DAT_101e3a1b8 = 0xffffffff;
  DAT_101e3a1bc = 0xff88ea2f;
  DAT_101e3a1c0 = 0xff8c8c8c;
  DAT_101e3a1c4 = 0xffffb400;
  DAT_101e3a1c8 = 0xffff00ff;
  DAT_101e3a1cc = 0xff00aded;
  DAT_101e3a1d0 = 0xff33d3ff;
  DAT_101e3a1d4 = 0xff7fe801;
  DAT_101e3a1d8 = 0xff282828;
  DAT_101e3a1dc = 0xfff0f0f0;
  DAT_101e3a1e0 = 0xffa4781e;
  DAT_101e3a1e4 = 0xffa6654b;
  DAT_101e3a1e8 = 0xff93435b;
  DAT_101e3a1ec = 0xff387f9c;
  DAT_101e3a1f0 = 0xffa3781e;
  DAT_101e3a1f4 = 0xffffd18a;
  DAT_101e3a1f8 = 0xffff61f7;
  DAT_101e3a1fc = 0xff5de1f2;
  DAT_101e3a200 = 0xff80eaff;
  DAT_101e3a204 = 0xff32e00e;
  DAT_101e3a208 = 0xff5a3c10;
  DAT_101e3a20c = 0xff330b03;
  DAT_101e3a210 = 0xff33031d;
  DAT_101e3a214 = 0xff032433;
  DAT_101e3a218 = 0xff9e8e8d;
  DAT_101e3a21c = 0xff;
  DAT_101e3a21e = 0xffff;
  DAT_101e3a220 = 0xffff;
  DAT_101d23328 = 0;
  DAT_101d23330 = 0;
  DAT_101d23338 = 0;
  return;
}




void FUN_1001291a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001291b4(param_1,param_1,param_2);
  return;
}




void FUN_1001291b4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  uVar1 = (**(code **)(*param_3 + 0x138))(param_3);
  uVar2 = (**(code **)(*param_3 + 0x140))(param_3);
  FUN_1010b3974(auStack_78,uVar1,uVar2);
  FUN_1010b3af8(0,0,0,0x3f800000,auStack_78);
  FUN_1010b3b18(0x3f800000,auStack_78);
  FUN_1010b36cc(param_2,auStack_78,1);
  return;
}




long FUN_10012924c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_1001168e4_1014599e8;
  thunk_FUN_100652c08(puVar1 + 0x17);
  thunk_FUN_100652c08(param_1 + 0x1a8);
  *(undefined1 *)(param_1 + 0x298) = 0;
  return param_1;
}




void FUN_10012928c(float param_1,long *param_2,undefined1 param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 local_58 [4];
  
  plVar1 = param_2 + 0x17;
  (**(code **)(*param_2 + 0x78))(param_2,plVar1,1);
  plVar2 = param_2 + 0x35;
  (**(code **)(*param_2 + 0x78))(param_2,plVar2,1);
  uVar6 = FUN_100641440();
  uVar7 = FUN_10064144c();
  FUN_10064e47c(uVar6,uVar7,param_2);
  plVar5 = (long *)thunk_FUN_10064dde8();
  FUN_10064e524(param_2,plVar5);
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_gradient_horizontal");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar3 = *(uint *)((long)param_2 + 0x13c);
  if ((uVar3 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_2 + 0x13c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5900;
    FUN_1000200a0(plVar1);
  }
  bVar4 = false;
  if ((*(float *)(param_2 + 0x20) == param_1) &&
     (bVar4 = false, !NAN(*(float *)((long)param_2 + 0x104)) && !NAN(param_1))) {
    bVar4 = *(float *)((long)param_2 + 0x104) == param_1;
  }
  if (!bVar4) {
    *(float *)(param_2 + 0x20) = param_1;
    *(float *)((long)param_2 + 0x104) = param_1;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_gradient_horizontal");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  *(byte *)(param_2 + 0x50) = *(byte *)(param_2 + 0x50) | 1;
  uVar3 = *(uint *)((long)param_2 + 0x22c);
  if ((uVar3 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_2 + 0x22c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5900;
    FUN_1000200a0(plVar2);
  }
  if ((*(float *)(param_2 + 0x3e) != param_1) || (*(float *)((long)param_2 + 500) != param_1)) {
    *(float *)(param_2 + 0x3e) = param_1;
    *(float *)((long)param_2 + 500) = param_1;
    FUN_1000200a0(plVar2);
  }
  local_58[0] = 0xd0;
  FUN_10064e5b8(plVar1,local_58);
  FUN_10064e5b8(plVar2,local_58);
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar1,0,10);
  (**(code **)(*plVar5 + 0x68))(plVar5,plVar2,0,0x12);
  *(undefined1 *)(param_2 + 0x53) = param_3;
  *(uint *)((long)param_2 + 0x84) = *(uint *)((long)param_2 + 0x84) & 0xfffffff7;
  return;
}




long FUN_10012949c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006543ec();
  *puVar1 = &PTR_FUN_10145a060;
  thunk_FUN_100119a20(puVar1 + 0x34);
  FUN_10064e264(param_1 + 0x970);
  thunk_FUN_1006543ec(param_1 + 0xa28);
  FUN_10012924c(param_1 + 0xbc8);
  thunk_FUN_100534008(param_1 + 0xe68);
  thunk_FUN_10026a50c(param_1 + 0x10e0);
  *(code **)(param_1 + 0x188) = FUN_1001291a8;
  *(long *)(param_1 + 400) = param_1;
  FUN_100654488(param_1,1);
  return param_1;
}




long thunk_FUN_10012949c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006543ec();
  *puVar1 = &PTR_FUN_10145a060;
  thunk_FUN_100119a20(puVar1 + 0x34);
  FUN_10064e264(param_1 + 0x970);
  thunk_FUN_1006543ec(param_1 + 0xa28);
  FUN_10012924c(param_1 + 0xbc8);
  thunk_FUN_100534008(param_1 + 0xe68);
  thunk_FUN_10026a50c(param_1 + 0x10e0);
  *(code **)(param_1 + 0x188) = FUN_1001291a8;
  *(long *)(param_1 + 400) = param_1;
  FUN_100654488(param_1,1);
  return param_1;
}




void FUN_10012951c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_70 [40];
  undefined4 local_48;
  undefined1 local_44;
  
  FUN_100641550(param_1,1);
  uVar3 = FUN_1004d2524("root-layer");
  uVar4 = FUN_100015208("root-layer",uVar3,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar4 & 0xffff) << 0xf;
  plVar6 = param_1 + 0x34;
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  plVar1 = param_1 + 0x12e;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x145;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,param_1 + 0x1cd,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x179,1);
  *(uint *)((long)param_1 + 0x224) = *(uint *)((long)param_1 + 0x224) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x9f4) = *(uint *)((long)param_1 + 0x9f4) | 4;
  FUN_10016ac70(auStack_70);
  FUN_100119b74(plVar6,auStack_70);
  plVar5 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar5 + 0x58))(plVar5,plVar6);
  (**(code **)(*plVar5 + 0x58))(plVar5,plVar1);
  FUN_10064e524(param_1,plVar5);
  plVar6 = (long *)thunk_FUN_10064dde8();
  (**(code **)(*plVar6 + 0x58))(plVar6,plVar2);
  FUN_10064e524(plVar1,plVar6);
  FUN_10016ad64(auStack_70,plVar5);
  FUN_10016add0(auStack_70,plVar6);
  uVar3 = FUN_1004d2524("frontend-ui");
  uVar4 = FUN_100015208("frontend-ui",uVar3,0x1234);
  *(uint *)((long)param_1 + 0xaac) =
       *(uint *)((long)param_1 + 0xaac) & 0x80000000 |
       *(uint *)((long)param_1 + 0xaac) & 0x7fff | (uVar4 & 0xffff) << 0xf;
  FUN_100129704(param_1);
  FUN_10012928c(local_48,param_1 + 0x179,local_44);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x21c,1);
  return;
}




void FUN_100129704(long *param_1)

{
  float fVar1;
  float local_28;
  undefined4 uStack_24;
  
  FUN_10064142c(&uStack_24,&local_28);
  FUN_10064e47c(uStack_24,local_28,param_1);
  FUN_10064e47c(uStack_24,local_28,param_1 + 0x179);
  (**(code **)(*param_1 + 0x90))(param_1);
  fVar1 = (float)FUN_10012977c(param_1);
  FUN_100641458((int)fVar1,(int)local_28);
  return;
}




void FUN_100129770(long param_1)

{
  FUN_100534314(param_1 + 0xe68);
  return;
}




void thunk_FUN_100129704(void)

{
  FUN_100129704();
  return;
}




void FUN_10012977c(long param_1)

{
  if ((*(byte *)(param_1 + 0x9f4) >> 2 & 1) == 0) {
    FUN_100119eac(param_1 + 0x1a0);
    return;
  }
  FUN_10064e3cc(param_1 + 0xa28);
  return;
}




void FUN_100129794(long param_1)

{
  FUN_100119e88(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) & 0xfffffffb;
  *(uint *)(param_1 + 0x9f4) = *(uint *)(param_1 + 0x9f4) | 4;
  if (*(char *)(param_1 + 0xe60) != '\0') {
    *(uint *)(param_1 + 0xc4c) = *(uint *)(param_1 + 0xc4c) & 0xfffffff7;
  }
  FUN_100129704(param_1);
  return;
}




void FUN_1001297e8(long param_1)

{
  FUN_100119e54(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 4;
  *(uint *)(param_1 + 0x9f4) = *(uint *)(param_1 + 0x9f4) & 0xfffffffb;
  if (*(char *)(param_1 + 0xe60) != '\0') {
    *(uint *)(param_1 + 0xc4c) = *(uint *)(param_1 + 0xc4c) | 8;
  }
  FUN_100129704(param_1);
  return;
}




void FUN_10012983c(long param_1)

{
  FUN_10026a880(param_1 + 0x10e0);
  return;
}




long FUN_100129848(long param_1)

{
  return param_1 + 0xe68;
}




void FUN_100129850(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145a060;
  FUN_1001299c0(param_1 + 0x21c);
  thunk_FUN_100534090(param_1 + 0x1cd);
  FUN_1001168e4(param_1 + 0x179);
  FUN_10064e2bc(param_1 + 0x145);
  thunk_FUN_10064e2bc(param_1 + 0x12e);
  thunk_FUN_100119aa4(param_1 + 0x34);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001298b0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145a060;
  param_1[0x21c] = &PTR_FUN_10147d238;
  thunk_FUN_100651068(param_1 + 0x287);
  param_1[0x269] = &PTR_FUN_1014a7108;
  param_1[0x280] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x283);
  FUN_10064e2bc(param_1 + 0x269);
  param_1[0x24b] = &PTR_FUN_1014a7108;
  param_1[0x262] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x265);
  FUN_10064e2bc(param_1 + 0x24b);
  param_1[0x22d] = &PTR_FUN_1014a7108;
  param_1[0x244] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x247);
  FUN_10064e2bc(param_1 + 0x22d);
  FUN_10064221c(param_1 + 0x21c);
  thunk_FUN_100534090(param_1 + 0x1cd);
  FUN_1001168e4(param_1 + 0x179);
  FUN_10064e2bc(param_1 + 0x145);
  thunk_FUN_10064e2bc(param_1 + 0x12e);
  thunk_FUN_100119aa4(param_1 + 0x34);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001299c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10147d238;
  thunk_FUN_100651068(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_1014a7108;
  param_1[100] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x67);
  FUN_10064e2bc(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_1014a7108;
  param_1[0x46] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x49);
  FUN_10064e2bc(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_100129a64(void)

{
  return;
}




void FUN_100129a68(void)

{
  operator_new(0x88);
  DAT_101d23340 = thunk_FUN_10012a260();
  return;
}




void FUN_100129a8c(void)

{
  if (DAT_101d23340 != 0) {
    FUN_10012a4d4();
    return;
  }
  return;
}




void FUN_100129aa0(void)

{
  if (DAT_101d23340 != (long *)0x0) {
    (**(code **)(*DAT_101d23340 + 8))();
  }
  DAT_101d23340 = (long *)0x0;
  return;
}




void FUN_100129ad4(void)

{
  if (DAT_101d23340 != 0) {
    FUN_10012a3d0();
    return;
  }
  return;
}




void FUN_100129ae8(undefined8 param_1)

{
  if (DAT_101d23340 != 0) {
    FUN_10012ade8(DAT_101d23340,param_1);
    return;
  }
  return;
}




void FUN_100129b00(undefined8 param_1)

{
  if (DAT_101d23340 != 0) {
    FUN_10012ae50(DAT_101d23340,param_1);
    return;
  }
  return;
}




void FUN_100129b18(undefined8 param_1)

{
  if (DAT_101d23340 != 0) {
    FUN_10012ae98(DAT_101d23340,param_1);
    return;
  }
  return;
}




void FUN_100129b30(undefined8 param_1,undefined8 param_2)

{
  if (DAT_101d23340 != 0) {
    FUN_10012a858(DAT_101d23340,param_1,param_2);
    return;
  }
  return;
}




ulong FUN_100129b4c(void)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  
  uVar7 = FUN_10015d3f8();
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  lVar8 = FUN_10015d3ec();
  if (*(char *)(lVar8 + 0x567a) == '\0') {
    return 0;
  }
  lVar8 = FUN_10015d3ec();
  bVar4 = *(byte *)(lVar8 + 0x54d7);
  uVar7 = (ulong)bVar4;
  sVar1 = *(size_t *)(lVar8 + 0x54c8);
  if (-1 < (char)bVar4) {
    sVar1 = uVar7;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 != sVar2) {
    return 1;
  }
  pvVar11 = *(void **)(lVar8 + 0x54c0);
  puVar3 = pvVar11;
  if (-1 < (char)bVar4) {
    puVar3 = (undefined8 *)(lVar8 + 0x54c0);
  }
  pbVar10 = DAT_101d91198;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    pbVar10 = (byte *)&DAT_101d91198;
  }
  if ((char)bVar4 < '\0') {
    if (sVar1 == 0) {
      return 0;
    }
    iVar6 = _memcmp(puVar3,pbVar10,sVar1);
    bVar5 = iVar6 == 0;
  }
  else {
    if (sVar1 == 0) {
      return 0;
    }
    if ((uint)*pbVar10 != ((uint)pvVar11 & 0xff)) {
      return 1;
    }
    pbVar9 = (byte *)(lVar8 + 0x54c1);
    do {
      uVar7 = uVar7 - 1;
      pbVar10 = pbVar10 + 1;
      if (uVar7 == 0) break;
      bVar4 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar4 == *pbVar10);
    bVar5 = uVar7 == 0;
  }
  return (ulong)!bVar5;
}




void FUN_100129c44(void)

{
  if (DAT_101d23340 != 0) {
    FUN_10012a978();
    return;
  }
  return;
}




void FUN_100129c58(undefined8 param_1)

{
  if (DAT_101d23340 != 0) {
    FUN_10012a980(DAT_101d23340,param_1);
    return;
  }
  return;
}




void FUN_100129c70(void)

{
  if (DAT_101d23340 != 0) {
    FUN_10012ad48();
    return;
  }
  return;
}




void FUN_100129c84(undefined8 param_1)

{
  if (DAT_101d23340 != 0) {
    FUN_10012ada4(DAT_101d23340,param_1);
    return;
  }
  return;
}




void FUN_100129c9c(void)

{
  int iVar1;
  long lVar2;
  undefined8 *****pppppuVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  void *local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  char local_79;
  undefined8 ****local_70;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  iVar1 = FUN_10052bc30();
  if ((iVar1 == 0) || (iVar1 = FUN_100129b4c(), iVar1 == 0)) goto LAB_100129dec;
  lVar2 = FUN_10015d3ec();
  if ((char)*(byte *)(lVar2 + 0x54d7) < '\0') {
    uVar4 = *(ulong *)(lVar2 + 0x54c8);
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_100129f2c();
    }
    pvVar5 = *(void **)(lVar2 + 0x54c0);
  }
  else {
    pvVar5 = (void *)(lVar2 + 0x54c0);
    uVar4 = (ulong)*(byte *)(lVar2 + 0x54d7);
  }
  if (uVar4 < 0x17) {
    pppppuVar3 = &local_70;
    uStack_60 = CONCAT17((char)uVar4,(undefined7)uStack_60);
    if (uVar4 != 0) goto LAB_100129d40;
  }
  else {
    uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
    pppppuVar3 = operator_new(uVar6);
    uStack_60 = uVar6 | 0x8000000000000000;
    local_70 = pppppuVar3;
    local_68 = uVar4;
LAB_100129d40:
    _memcpy(pppppuVar3,pvVar5,uVar4);
  }
  *(undefined1 *)((long)pppppuVar3 + uVar4) = 0;
  FUN_10034cb58();
  FUN_1004d2698(&local_58,"_%u");
  local_79 = '\x10';
  uStack_88 = uStack_50;
  local_90 = local_58;
  local_80 = 0;
  std::string::append((char *)&local_70,(ulong)&local_90);
  if (local_79 < '\0') {
    operator_delete(local_90);
  }
  if (DAT_101d23340 != 0) {
    pppppuVar3 = (undefined8 *****)local_70;
    if (-1 < (long)uStack_60) {
      pppppuVar3 = &local_70;
    }
    FUN_10012ada4(DAT_101d23340,pppppuVar3);
  }
  if ((long)uStack_60 < 0) {
    operator_delete(local_70);
  }
LAB_100129dec:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100129e28(undefined8 param_1)

{
  if (DAT_101d23340 != 0) {
    FUN_10012aec8(DAT_101d23340,param_1);
    return;
  }
  return;
}




void FUN_100129e40(void)

{
  if (DAT_101d23340 != 0) {
    FUN_10012aef4();
    return;
  }
  return;
}




void FUN_100129e54(undefined8 param_1,undefined8 param_2)

{
  if (DAT_101d23340 != 0) {
    FUN_10012aefc(DAT_101d23340,param_1,param_2);
    return;
  }
  return;
}




void FUN_100129e70(undefined8 param_1)

{
  if (DAT_101d23340 != 0) {
    FUN_10012afb0(DAT_101d23340,param_1);
    return;
  }
  return;
}




void FUN_100129e88(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_101d23340;
  if (DAT_101d23340 != 0) {
    uVar2 = FUN_10012a924(DAT_101d23340);
    FUN_10012aefc(lVar1,uVar2,param_1);
    return;
  }
  return;
}




undefined8 FUN_100129ed0(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_101d23340;
  if (DAT_101d23340 != 0) {
    uVar2 = FUN_10012a924(DAT_101d23340);
    uVar2 = FUN_10012afb0(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}




void FUN_100129f14(undefined8 param_1)

{
  if (DAT_101d23340 != 0) {
    FUN_10012aff4(DAT_101d23340,param_1);
    return;
  }
  return;
}




void FUN_100129f2c(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined8 * FUN_100129f38(void)

{
  void *pvVar1;
  
  if (DAT_101e3a230 == (undefined8 *)0x0) {
    DAT_101e3a230 = operator_new(0x18);
    *DAT_101e3a230 = 0;
    DAT_101e3a230[1] = 0;
    *(undefined4 *)(DAT_101e3a230 + 2) = 0;
    pvVar1 = operator_new(0x40);
    FUN_1004e4464(pvVar1,0);
    DAT_101e3a238 = pvVar1;
  }
  return DAT_101e3a230;
}




undefined8 * FUN_100129f90(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  pthread_mutex_t *ppVar4;
  long *plVar5;
  
  *param_1 = &PTR_thunk_FUN_10012a00c_10145a1c0;
  plVar5 = (long *)FUN_100129f38();
  ppVar4 = DAT_101e3a238;
  _pthread_mutex_lock(DAT_101e3a238);
  lVar2 = *plVar5;
  lVar3 = plVar5[1];
  param_1[1] = lVar3;
  param_1[2] = 0;
  plVar1 = plVar5;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar3 + 0x10);
  }
  *plVar1 = (long)param_1;
  plVar5[1] = (long)param_1;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  _pthread_mutex_unlock(ppVar4);
  return param_1;
}




undefined8 * FUN_10012a00c(undefined8 *param_1)

{
  pthread_mutex_t *ppVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_10012a00c_10145a1c0;
  uVar2 = FUN_100129f38();
  ppVar1 = DAT_101e3a238;
  _pthread_mutex_lock(DAT_101e3a238);
  FUN_10012a06c(uVar2,param_1);
  _pthread_mutex_unlock(ppVar1);
  return param_1;
}




void FUN_10012a06c(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x10);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 8);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 8);
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(*(long *)(param_2 + 0x10) + 8) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void thunk_FUN_10012a00c(void)

{
  FUN_10012a00c();
  return;
}




void FUN_10012a0d0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10012a00c();
  operator_delete(pvVar1);
  return;
}




int FUN_10012a0e4(undefined8 param_1)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_100129f38();
  ppVar1 = DAT_101e3a238;
  _pthread_mutex_lock(DAT_101e3a238);
  for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[2]) {
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
  }
  iVar2 = _pthread_mutex_unlock(ppVar1);
  return iVar2;
}




int FUN_10012a148(undefined8 param_1)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_100129f38();
  ppVar1 = DAT_101e3a238;
  _pthread_mutex_lock(DAT_101e3a238);
  for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[2]) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
  }
  iVar2 = _pthread_mutex_unlock(ppVar1);
  return iVar2;
}




int FUN_10012a1ac(void)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_100129f38();
  ppVar1 = DAT_101e3a238;
  _pthread_mutex_lock(DAT_101e3a238);
  for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[2]) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  iVar2 = _pthread_mutex_unlock(ppVar1);
  return iVar2;
}




int FUN_10012a200(void)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_100129f38();
  ppVar1 = DAT_101e3a238;
  _pthread_mutex_lock(DAT_101e3a238);
  for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[2]) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  iVar2 = _pthread_mutex_unlock(ppVar1);
  return iVar2;
}




void FUN_10012a254(void)

{
  return;
}




void FUN_10012a258(void)

{
  return;
}




void FUN_10012a25c(void)

{
  return;
}




undefined8 * FUN_10012a260(undefined8 *param_1)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined8 *local_40;
  code *pcStack_38;
  
  lVar1 = FUN_10052bd48();
  FUN_10014f4a0(lVar1 + 0x18);
  *param_1 = &PTR_thunk_FUN_10012a328_10145a200;
  param_1[3] = &PTR_FUN_10145a258;
  FUN_1004e3004(param_1 + 6);
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = param_1 + 8;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = 0;
  FUN_10003330c(param_1 + 0xd,&DAT_101d91198);
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_1004e3004(param_1 + 6);
  FUN_1000e713c(param_1 + 10,0x10);
  lVar1 = FUN_10032523c();
  local_50 = 0;
  pcStack_38 = thunk_FUN_10012b728;
  puStack_48 = param_1;
  local_40 = param_1;
  FUN_100031f58(lVar1 + 0x40,&local_50);
  return param_1;
}




undefined8 * thunk_FUN_10012a260(undefined8 *param_1)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  code *pcStack_38;
  
  lVar1 = FUN_10052bd48();
  FUN_10014f4a0(lVar1 + 0x18);
  *param_1 = &PTR_thunk_FUN_10012a328_10145a200;
  param_1[3] = &PTR_FUN_10145a258;
  FUN_1004e3004(param_1 + 6);
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = param_1 + 8;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = 0;
  FUN_10003330c(param_1 + 0xd,&DAT_101d91198);
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_1004e3004(param_1 + 6);
  FUN_1000e713c(param_1 + 10,0x10);
  lVar1 = FUN_10032523c();
  uStack_50 = 0;
  pcStack_38 = thunk_FUN_10012b728;
  puStack_48 = param_1;
  puStack_40 = param_1;
  FUN_100031f58(lVar1 + 0x40,&uStack_50);
  return param_1;
}




void FUN_10012a328(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_thunk_FUN_10012a328_10145a200;
  param_1[3] = &PTR_FUN_10145a258;
  FUN_10012a3d0();
  lVar2 = FUN_10032523c();
  if (*(uint *)(lVar2 + 0x40) != 0) {
    lVar3 = *(long *)(lVar2 + 0x48);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x40) << 5;
    do {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_100031ee8();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    operator_delete((void *)param_1[0xd]);
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    operator_delete__((void *)param_1[0xb]);
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  FUN_10012b8d4(param_1 + 7,param_1[8]);
  FUN_10014f51c(param_1 + 3);
  FUN_10052bdc4(param_1);
  return;
}




void FUN_10012a3d0(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x38);
  while (plVar5 != (long *)(param_1 + 0x40)) {
    pvVar4 = (void *)plVar5[5];
    if (pvVar4 != (void *)0x0) {
      if (*(void **)((long)pvVar4 + 8) != (void *)0x0) {
        operator_delete__(*(void **)((long)pvVar4 + 8));
      }
      operator_delete(pvVar4);
    }
    plVar2 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar2 = plVar5 + 2;
      bVar1 = *(long **)*plVar2 != plVar5;
      plVar5 = (long *)*plVar2;
      if (bVar1) {
        do {
          lVar3 = *plVar2;
          plVar2 = (long *)(lVar3 + 0x10);
          plVar5 = (long *)*plVar2;
        } while (*plVar5 != lVar3);
      }
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  FUN_10012b8d4((undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(long **)(param_1 + 0x38) = (long *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}




void thunk_FUN_10012a328(void)

{
  FUN_10012a328();
  return;
}




void FUN_10012a4a0(long param_1)

{
  FUN_10012a328(param_1 + -0x18);
  return;
}




void FUN_10012a4a8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10012a328();
  operator_delete(pvVar1);
  return;
}




void FUN_10012a4bc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10012a328(param_1 + -0x18);
  operator_delete(pvVar1);
  return;
}




void FUN_10012a4d4(long param_1)

{
  uint64_t uVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  uVar1 = _mach_absolute_time();
  if (*(long **)(param_1 + 0x38) != (long *)(param_1 + 0x40)) {
    bVar2 = false;
    uVar4 = (uVar1 - *(long *)(param_1 + 0x30)) * DAT_101d91638;
    plVar3 = *(long **)(param_1 + 0x38);
    do {
      lVar5 = plVar3[5];
      if (((lVar5 != 0) && (*(char *)(lVar5 + 0x22) != '\0')) &&
         (*(double *)(lVar5 + 0x10) < (double)uVar4 * 1e-09)) {
        *(undefined1 *)(lVar5 + 0x22) = 0;
        *(undefined4 *)(lVar5 + 0x1c) = 0;
        bVar2 = true;
      }
      plVar6 = (long *)plVar3[1];
      if ((long *)plVar3[1] == (long *)0x0) {
        plVar6 = plVar3 + 2;
        plVar7 = (long *)*plVar6;
        if ((long *)*plVar7 != plVar3) {
          do {
            lVar5 = *plVar6;
            plVar6 = (long *)(lVar5 + 0x10);
            plVar7 = (long *)*plVar6;
          } while (*plVar7 != lVar5);
        }
      }
      else {
        do {
          plVar7 = plVar6;
          plVar6 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      plVar3 = plVar7;
    } while (plVar7 != (long *)(param_1 + 0x40));
    if (bVar2) {
      FUN_10012a200();
      return;
    }
  }
  return;
}




void FUN_10012a5bc(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long *plVar8;
  int iVar9;
  int local_50 [2];
  long local_48;
  
  uVar2 = FUN_10012a6e4(param_2);
  plVar4 = (long *)(param_1 + 0x40);
  plVar6 = (long *)*plVar4;
  iVar9 = (int)uVar2;
  plVar8 = plVar4;
  if (plVar6 != (long *)0x0) {
    do {
      if (iVar9 <= (int)plVar6[4]) {
        plVar8 = plVar6;
      }
      plVar6 = (long *)plVar6[(int)plVar6[4] < iVar9];
    } while (plVar6 != (long *)0x0);
    if ((plVar8 != plVar4) && ((int)plVar8[4] <= iVar9)) {
      if (param_3 == 0) {
        return;
      }
      *(int *)(param_1 + 0x60) = iVar9;
      return;
    }
  }
  pvVar3 = operator_new(0x28);
  local_48 = thunk_FUN_1004e439c(pvVar3,param_2);
  *(undefined8 *)(local_48 + 0x10) = 0;
  *(int *)(local_48 + 0x18) = iVar9;
  *(undefined4 *)(local_48 + 0x1c) = 0;
  *(undefined4 *)(local_48 + 0x1f) = 0;
  local_50[0] = iVar9;
  FUN_10012b918((undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x38),local_50,local_50);
  if (param_3 != 0) {
    *(int *)(param_1 + 0x60) = iVar9;
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  if (uVar1 != 0) {
    lVar5 = (ulong)uVar1 << 2;
    piVar7 = *(int **)(param_1 + 0x58);
    do {
      if (*piVar7 == iVar9) {
        FUN_10012bb98((uint *)(param_1 + 0x50),piVar7,piVar7 + 1);
        FUN_10052bce0(uVar2,0);
        *(undefined1 *)((long)pvVar3 + 0x21) = 1;
        return;
      }
      lVar5 = lVar5 + -4;
      piVar7 = piVar7 + 1;
    } while (lVar5 != 0);
  }
  return;
}




undefined8 FUN_10012a6e4(undefined8 param_1)

{
  undefined8 ****ppppuVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 ***local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = (undefined8 ****)0x0;
  uStack_30 = 0;
  local_28 = 0;
  std::string::resize((ulong)&local_38,'@');
  FUN_1004e357c(param_1,&local_38);
  ppppuVar1 = (undefined8 ****)local_38;
  if (-1 < local_28) {
    ppppuVar1 = &local_38;
  }
  uVar2 = FUN_1004d2524(ppppuVar1);
  uVar3 = FUN_100015208(ppppuVar1,uVar2,0x12345678);
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return uVar3;
}




void FUN_10012a774(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  iVar2 = FUN_10012a6e4(param_2);
  plVar3 = (long *)(param_1 + 0x40);
  plVar5 = (long *)*plVar3;
  plVar7 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      if (iVar2 <= (int)plVar5[4]) {
        plVar7 = plVar5;
      }
      plVar5 = (long *)plVar5[(int)plVar5[4] < iVar2];
    } while (plVar5 != (long *)0x0);
    if ((plVar7 != plVar3) && ((int)plVar7[4] <= iVar2)) {
      puVar8 = (undefined8 *)plVar7[5];
      if (puVar8 != (undefined8 *)0x0) {
        if ((void *)puVar8[1] != (void *)0x0) {
          operator_delete__((void *)puVar8[1]);
          *puVar8 = 0;
          puVar8[1] = 0;
        }
        operator_delete(puVar8);
      }
      FUN_10012bc08(param_1 + 0x38,plVar7);
      return;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 << 2;
    piVar6 = *(int **)(param_1 + 0x58);
    do {
      if (*piVar6 == iVar2) {
        FUN_10012bb98((uint *)(param_1 + 0x50),piVar6,piVar6 + 1);
        return;
      }
      lVar4 = lVar4 + -4;
      piVar6 = piVar6 + 1;
    } while (lVar4 != 0);
  }
  return;
}




ulong FUN_10012a858(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x48) != 0)) {
    if (*(long **)(param_1 + 0x38) != (long *)(param_1 + 0x40) && param_3 != 0) {
      uVar1 = 0;
      plVar5 = *(long **)(param_1 + 0x38);
      do {
        uVar6 = uVar1;
        if (plVar5[5] != 0) {
          uVar6 = (ulong)((int)uVar1 + 1);
          FUN_1004e3470(param_2 + uVar1 * 0x10);
        }
        plVar2 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) {
          plVar2 = plVar5 + 2;
          plVar3 = (long *)*plVar2;
          if ((long *)*plVar3 != plVar5) {
            do {
              lVar4 = *plVar2;
              plVar2 = (long *)(lVar4 + 0x10);
              plVar3 = (long *)*plVar2;
            } while (*plVar3 != lVar4);
          }
        }
        else {
          do {
            plVar3 = plVar2;
            plVar2 = (long *)*plVar3;
          } while ((long *)*plVar3 != (long *)0x0);
        }
        uVar1 = uVar6;
        plVar5 = plVar3;
      } while (plVar3 != (long *)(param_1 + 0x40) && (uint)uVar6 < param_3);
      return uVar6;
    }
  }
  return 0;
}




undefined8 * FUN_10012a924(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 0x40);
  plVar4 = (long *)*plVar2;
  if (plVar4 != (long *)0x0) {
    iVar1 = *(int *)(param_1 + 0x60);
    plVar3 = plVar2;
    do {
      if (iVar1 <= (int)plVar4[4]) {
        plVar3 = plVar4;
      }
      plVar4 = (long *)plVar4[(int)plVar4[4] < iVar1];
    } while (plVar4 != (long *)0x0);
    if (((plVar3 != plVar2) && ((int)plVar3[4] <= iVar1)) &&
       ((undefined8 *)plVar3[5] != (undefined8 *)0x0)) {
      return (undefined8 *)plVar3[5];
    }
  }
  return &DAT_101d91650;
}




undefined8 FUN_10012a978(void)

{
  return 1;
}




void FUN_10012a980(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  void *local_90;
  void *local_88;
  char local_79;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  iVar1 = FUN_10052bc18();
  if (iVar1 != 0) {
    uVar2 = FUN_10012ab04(param_1);
    if ((uVar2 & 1) == 0) {
      thunk_FUN_10052f7d0(2);
      FUN_100101450(1,1);
      FUN_1000fe308(1,1);
    }
    FUN_1004e313c(auStack_40);
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0xffffffff;
    iVar1 = FUN_10015d3f8();
    if (iVar1 == 0) {
      iVar1 = FUN_1004e2e9c(&DAT_101d911b0,"--playerID");
      if (iVar1 == 0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)FUN_1004e2e24(&DAT_101d911b0,"--playerID");
      }
      FUN_1004e3120(&local_90,pcVar4);
      FUN_1000153b4(auStack_40,&local_90);
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
      }
    }
    else {
      FUN_10015d3ec();
      uVar3 = FUN_100164f34();
      FUN_1000153b4(auStack_40,uVar3);
    }
    local_78[0] = 0xf14ae9c3;
    FUN_10001549c(&local_90,"Unused");
    FUN_10012abd4(&local_70,local_78,&local_90);
    if (local_79 < '\0') {
      operator_delete(local_90);
    }
    uVar3 = FUN_10012a6e4(auStack_40);
    FUN_10012a5bc(param_1,auStack_40,1);
    FUN_10052bc28(param_2,uVar3,&local_70);
    FUN_10012c020(&local_70);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}




bool FUN_10012ab04(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  void *pvVar10;
  
  bVar4 = *(byte *)(param_1 + 0x7f);
  uVar8 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 0x70);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 != sVar2) {
    return true;
  }
  pvVar10 = *(void **)(param_1 + 0x68);
  puVar3 = pvVar10;
  if (-1 < (char)bVar4) {
    puVar3 = (undefined8 *)(param_1 + 0x68);
  }
  pbVar9 = DAT_101d91198;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    pbVar9 = (byte *)&DAT_101d91198;
  }
  if ((char)bVar4 < '\0') {
    if (sVar1 == 0) {
      return false;
    }
    iVar6 = _memcmp(puVar3,pbVar9,sVar1);
    bVar5 = iVar6 == 0;
  }
  else {
    if (sVar1 == 0) {
      return false;
    }
    if ((uint)*pbVar9 != ((uint)pvVar10 & 0xff)) {
      return true;
    }
    pbVar7 = (byte *)(param_1 + 0x69);
    do {
      uVar8 = uVar8 - 1;
      pbVar9 = pbVar9 + 1;
      if (uVar8 == 0) break;
      bVar4 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar4 == *pbVar9);
    bVar5 = uVar8 == 0;
  }
  return !bVar5;
}




void FUN_10012abd4(uint *param_1,uint *param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 local_40;
  void *local_38;
  
  uVar5 = *param_2;
  uVar9 = param_1[4];
  param_1[4] = uVar9 + 1;
  uVar7 = *param_1;
  if (uVar7 >> 1 < uVar9 + 1) {
    local_40 = 0;
    local_38 = (void *)0x0;
    FUN_10002690c(&local_40,(uVar7 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar9 = *param_1;
    uVar7 = (uint)local_40;
    uVar10 = uVar9 - 1;
    if ((int)uVar10 < 0) {
      pvVar6 = *(void **)(param_1 + 2);
    }
    else {
      pvVar6 = *(void **)(param_1 + 2);
      do {
        uVar9 = *(uint *)((long)pvVar6 + (ulong)uVar10 * 8 + 4);
        if (uVar9 != 0xffffffff) {
          uVar3 = *(uint *)((long)pvVar6 + (ulong)uVar10 * 8);
          uVar4 = 0;
          if ((uint)local_40 != 0) {
            uVar4 = uVar3 / (uint)local_40;
          }
          uVar11 = (ulong)(uVar3 - uVar4 * (uint)local_40);
          iVar2 = *(int *)((long)local_38 + uVar11 * 8 + 4);
          while (iVar2 != -1) {
            uVar4 = (uint)local_40;
            if (0 < (int)(uint)uVar11) {
              uVar4 = (uint)uVar11;
            }
            uVar11 = (ulong)(uVar4 - 1);
            iVar2 = *(int *)((long)local_38 + uVar11 * 8 + 4);
          }
          puVar1 = (uint *)((long)local_38 + uVar11 * 8);
          *puVar1 = uVar3;
          puVar1[1] = uVar9;
        }
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
      uVar9 = *param_1;
    }
    uVar10 = param_1[1];
    *param_1 = (uint)local_40;
    param_1[1] = local_40._4_4_;
    local_40 = CONCAT44(uVar10,uVar9);
    *(void **)(param_1 + 2) = local_38;
    local_38 = pvVar6;
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
      uVar7 = *param_1;
    }
  }
  uVar9 = 0;
  if (uVar7 != 0) {
    uVar9 = uVar5 / uVar7;
  }
  uVar11 = (ulong)(uVar5 - uVar9 * uVar7);
  lVar8 = *(long *)(param_1 + 2);
  iVar2 = *(int *)(lVar8 + uVar11 * 8 + 4);
  while (iVar2 != -1) {
    uVar9 = uVar7;
    if (0 < (int)(uint)uVar11) {
      uVar9 = (uint)uVar11;
    }
    uVar11 = (ulong)(uVar9 - 1);
    iVar2 = *(int *)(lVar8 + uVar11 * 8 + 4);
  }
  puVar1 = (uint *)(lVar8 + uVar11 * 8);
  *puVar1 = uVar5;
  uVar5 = FUN_10012c108(param_1,param_3);
  puVar1[1] = uVar5;
  return;
}




void FUN_10012ad48(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_10052bc18();
  if (iVar1 != 0) {
    FUN_10052bc2c();
    uVar2 = FUN_10012ab04(param_1);
    if ((uVar2 & 1) == 0) {
      FUN_1000fe308(0,1);
      FUN_100101450(0,1);
      thunk_FUN_10052f7d0(1);
      return;
    }
  }
  return;
}




void FUN_10012ada4(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10052bc18();
  if (iVar1 != 0) {
    std::string::assign((char *)(param_1 + 0x68));
    FUN_10012ad48(param_1);
    return;
  }
  return;
}




long FUN_10012ade8(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  iVar1 = FUN_10012a6e4(param_2);
  plVar4 = (long *)(param_1 + 0x40);
  plVar3 = (long *)*plVar4;
  plVar2 = plVar4;
  if (plVar3 != (long *)0x0) {
    do {
      if (iVar1 <= (int)plVar3[4]) {
        plVar2 = plVar3;
      }
      plVar3 = (long *)plVar3[(int)plVar3[4] < iVar1];
    } while (plVar3 != (long *)0x0);
    if ((plVar2 != plVar4) && ((int)plVar2[4] <= iVar1)) {
      return plVar2[5];
    }
  }
  return 0;
}




long FUN_10012ae50(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 0x40);
  plVar3 = (long *)*plVar1;
  plVar2 = plVar1;
  if (plVar3 != (long *)0x0) {
    do {
      if (param_2 <= (int)plVar3[4]) {
        plVar2 = plVar3;
      }
      plVar3 = (long *)plVar3[(int)plVar3[4] < param_2];
    } while (plVar3 != (long *)0x0);
    if ((plVar2 != plVar1) && ((int)plVar2[4] <= param_2)) {
      return plVar2[5];
    }
  }
  return 0;
}




bool FUN_10012ae98(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_10012a6e4(param_2);
  return iVar1 == *(int *)(param_1 + 0x60);
}




void FUN_10012aec8(long param_1,undefined8 param_2)

{
  FUN_10052bcd8(param_2);
  *(char *)(param_1 + 0x80) = (char)param_2;
  return;
}




undefined1 FUN_10012aef4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}




void FUN_10012aefc(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  iVar1 = FUN_10052bc18();
  if (iVar1 != 0) {
    uVar3 = FUN_10012a6e4(param_2);
    plVar4 = (long *)(param_1 + 0x40);
    plVar5 = (long *)*plVar4;
    plVar6 = plVar4;
    if (plVar5 != (long *)0x0) {
      do {
        iVar1 = (int)uVar3;
        if (iVar1 <= (int)plVar5[4]) {
          plVar6 = plVar5;
        }
        plVar5 = (long *)plVar5[(int)plVar5[4] < iVar1];
      } while (plVar5 != (long *)0x0);
      if ((plVar6 != plVar4) && ((int)plVar6[4] <= iVar1)) {
        iVar2 = FUN_10052bc30();
        if (iVar2 != 0) {
          if (iVar1 == *(int *)(param_1 + 0x60)) {
            FUN_10052bcdc(param_3);
          }
          else {
            FUN_10052bce0(uVar3,param_3);
          }
        }
        if (plVar6[5] != 0) {
          *(char *)(plVar6[5] + 0x20) = (char)param_3;
        }
      }
    }
  }
  return;
}




ulong FUN_10012afb0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_10052bc18();
  if (((int)uVar1 != 0) && (lVar2 = FUN_10012ade8(param_1,param_2), uVar1 = 0, lVar2 != 0)) {
    uVar1 = (ulong)(*(char *)(lVar2 + 0x20) != '\0');
  }
  return uVar1;
}




ulong FUN_10012aff4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_10052bc18();
  if (((int)uVar1 != 0) && (lVar2 = FUN_10012ade8(param_1,param_2), uVar1 = 0, lVar2 != 0)) {
    uVar1 = (ulong)(*(char *)(lVar2 + 0x22) != '\0');
  }
  return uVar1;
}




void FUN_10012b038(long param_1,undefined8 param_2)

{
  string *this;
  size_t sVar1;
  size_t sVar2;
  string *psVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  long local_38;
  
  local_38 = param_1 + 0x40;
  iVar6 = FUN_10012b194(param_1,param_2,&local_38);
  if (iVar6 == 0) {
    FUN_10052bce0(param_2,1);
    return;
  }
  lVar10 = *(long *)(local_38 + 0x28);
  *(undefined1 *)(lVar10 + 0x21) = 1;
  if (*(int *)(param_1 + 0x60) != (int)param_2) {
    FUN_10052bce0(*(undefined4 *)(lVar10 + 0x18),*(undefined1 *)(lVar10 + 0x20));
    goto LAB_10012b17c;
  }
  uVar4 = *(undefined1 *)(param_1 + 0x80);
  FUN_10052bcd8(uVar4);
  *(undefined1 *)(param_1 + 0x80) = uVar4;
  this = (string *)(param_1 + 0x68);
  bVar5 = *(byte *)(param_1 + 0x7f);
  uVar7 = (ulong)bVar5;
  sVar1 = *(size_t *)(param_1 + 0x70);
  if (-1 < (char)bVar5) {
    sVar1 = uVar7;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    psVar3 = *(string **)this;
    if (-1 < (char)bVar5) {
      psVar3 = this;
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar1 != 0) && (iVar6 = _memcmp(psVar3,pbVar9,sVar1), iVar6 != 0)) goto LAB_10012b160;
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar9 == ((uint)*(string **)this & 0xff)) {
        pbVar8 = (byte *)(param_1 + 0x69);
        do {
          uVar7 = uVar7 - 1;
          pbVar9 = pbVar9 + 1;
          if (uVar7 == 0) goto LAB_10012b174;
          bVar5 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar5 == *pbVar9);
      }
      goto LAB_10012b160;
    }
  }
  else {
LAB_10012b160:
    std::string::operator=(this,(string *)&DAT_101d91198);
    FUN_10012a1ac();
  }
LAB_10012b174:
  FUN_10052bcdc(*(undefined1 *)(lVar10 + 0x20));
LAB_10012b17c:
  FUN_10012a0e4(lVar10);
  return;
}




undefined8 FUN_10012b194(long param_1,int param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  int local_14;
  
  plVar2 = (long *)(param_1 + 0x40);
  plVar6 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar6 != (long *)0x0) {
    do {
      if (param_2 <= (int)plVar6[4]) {
        plVar4 = plVar6;
      }
      plVar6 = (long *)plVar6[(int)plVar6[4] < param_2];
    } while (plVar6 != (long *)0x0);
    if ((plVar4 != plVar2) && ((int)plVar4[4] <= param_2)) {
      *param_3 = (long)plVar4;
      return 1;
    }
  }
  *param_3 = (long)plVar2;
  uVar1 = *(uint *)(param_1 + 0x50);
  if (uVar1 != 0) {
    lVar5 = (ulong)uVar1 << 2;
    piVar3 = *(int **)(param_1 + 0x58);
    do {
      if (*piVar3 == param_2) {
        return 0;
      }
      lVar5 = lVar5 + -4;
      piVar3 = piVar3 + 1;
    } while (lVar5 != 0);
  }
  local_14 = param_2;
  FUN_1000e6a60((uint *)(param_1 + 0x50),&local_14);
  return 0;
}




void FUN_10012b22c(long param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  long *local_38;
  
  local_38 = (long *)(param_1 + 0x40);
  iVar3 = FUN_10012b194(param_1,param_2,&local_38);
  if (iVar3 == 0) {
    uVar1 = *(uint *)(param_1 + 0x50);
    if (uVar1 != 0) {
      lVar7 = (ulong)uVar1 << 2;
      piVar6 = *(int **)(param_1 + 0x58);
      do {
        if (*piVar6 == (int)param_2) {
          FUN_10012bb98((uint *)(param_1 + 0x50),piVar6,piVar6 + 1);
          return;
        }
        lVar7 = lVar7 + -4;
        piVar6 = piVar6 + 1;
      } while (lVar7 != 0);
    }
    return;
  }
  if ((*(int *)(param_1 + 0x60) == (int)param_2) && (iVar3 = FUN_10012ab04(param_1), iVar3 != 0)) {
    plVar4 = *(long **)(param_1 + 0x38);
    while (plVar4 != (long *)(param_1 + 0x40)) {
      *(undefined1 *)(plVar4[5] + 0x21) = 0;
      plVar5 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        plVar5 = plVar4 + 2;
        bVar2 = *(long **)*plVar5 != plVar4;
        plVar4 = (long *)*plVar5;
        if (bVar2) {
          do {
            lVar7 = *plVar5;
            plVar5 = (long *)(lVar7 + 0x10);
            plVar4 = (long *)*plVar5;
          } while (*plVar4 != lVar7);
        }
      }
      else {
        do {
          plVar4 = plVar5;
          plVar5 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
    }
    plVar4 = (long *)(param_1 + 0x68);
    if (*(char *)(param_1 + 0x7f) < '\0') {
      plVar4 = (long *)*plVar4;
    }
    FUN_10012a980(param_1,plVar4);
    return;
  }
  *(undefined1 *)(local_38[5] + 0x21) = 0;
  FUN_10012a148();
  return;
}




void FUN_10012b37c(void)

{
  return;
}




void FUN_10012b380(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  
  uVar3 = _mach_absolute_time();
  if (*(long **)(param_1 + 0x38) != (long *)(param_1 + 0x40)) {
    bVar4 = false;
    uVar6 = (uVar3 - *(long *)(param_1 + 0x30)) * DAT_101d91638;
    lVar7 = *(long *)(param_2 + 2);
    uVar1 = *param_2;
    plVar5 = *(long **)(param_1 + 0x38);
    do {
      if (uVar1 != 0) {
        lVar8 = plVar5[5];
        piVar12 = (int *)(lVar7 + 4);
        lVar11 = (ulong)uVar1 << 3;
        do {
          if (((*(int *)(lVar8 + 0x18) == piVar12[-1]) ||
              ((piVar12[-1] == 0 && (*(int *)(lVar8 + 0x18) == *(int *)(param_1 + 0x60))))) &&
             (iVar2 = *piVar12, 0 < iVar2)) {
            bVar4 = true;
            *(undefined1 *)(lVar8 + 0x22) = 1;
            *(int *)(lVar8 + 0x1c) = iVar2;
            *(double *)(lVar8 + 0x10) = (double)uVar6 * 1e-09 + 1.0;
            break;
          }
          piVar12 = piVar12 + 2;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
      }
      plVar9 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        plVar9 = plVar5 + 2;
        plVar10 = (long *)*plVar9;
        if ((long *)*plVar10 != plVar5) {
          do {
            lVar11 = *plVar9;
            plVar9 = (long *)(lVar11 + 0x10);
            plVar10 = (long *)*plVar9;
          } while (*plVar10 != lVar11);
        }
      }
      else {
        do {
          plVar10 = plVar9;
          plVar9 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      plVar5 = plVar10;
    } while (plVar10 != (long *)(param_1 + 0x40));
    if (bVar4) {
      FUN_10012a200();
      return;
    }
  }
  return;
}




void FUN_10012b4b8(void)

{
  return;
}




void FUN_10012b4bc(void)

{
  return;
}




void FUN_10012b4c0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long local_68;
  ulong local_60;
  undefined8 *local_58;
  undefined8 *puVar8;
  
  if (*(int *)(param_2 + 0x84) != 0) {
    return;
  }
  iVar1 = FUN_1004f1680(param_2);
  if (iVar1 != 0) {
    uVar3 = (ulong)*(uint *)(param_2 + 0x70);
    if (*(uint *)(param_2 + 0x70) != 0) {
      uVar9 = 0;
      lVar10 = 0x2c;
      do {
        if (*(int *)(*(long *)(param_2 + 0x78) + lVar10) == 1) {
          iVar1 = FUN_10015d3f8();
          if (iVar1 == 0) {
            uVar2 = 0;
          }
          else {
            lVar4 = *(long *)(param_2 + 0x78);
            FUN_10015d3ec();
            uVar2 = FUN_100164f34();
            uVar2 = FUN_1004e3654(lVar4 + lVar10 + -0x14,uVar2);
          }
          FUN_10012a5bc(param_1,*(long *)(param_2 + 0x78) + lVar10 + -0x14,uVar2);
          uVar3 = (ulong)*(uint *)(param_2 + 0x70);
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x88;
      } while (uVar9 < uVar3);
    }
    local_60 = 0;
    local_58 = (undefined8 *)0x0;
    plVar11 = *(long **)(param_1 + 0x38);
    if (*(long **)(param_1 + 0x38) != (long *)(param_1 + 0x40)) {
      do {
        lVar10 = plVar11[5];
        if ((int)uVar3 != 0) {
          uVar3 = 0;
          lVar4 = 0x18;
          do {
            uVar9 = FUN_1004e3654(lVar10,*(long *)(param_2 + 0x78) + lVar4);
            if ((uVar9 & 1) != 0) goto LAB_10012b5d0;
            uVar3 = uVar3 + 1;
            lVar4 = lVar4 + 0x88;
          } while (uVar3 < *(uint *)(param_2 + 0x70));
        }
        local_68 = lVar10;
        FUN_10012b6a0(&local_60,&local_68);
LAB_10012b5d0:
        plVar5 = (long *)plVar11[1];
        if ((long *)plVar11[1] == (long *)0x0) {
          plVar5 = plVar11 + 2;
          plVar6 = (long *)*plVar5;
          if ((long *)*plVar6 != plVar11) {
            do {
              lVar10 = *plVar5;
              plVar5 = (long *)(lVar10 + 0x10);
              plVar6 = (long *)*plVar5;
            } while (*plVar6 != lVar10);
          }
        }
        else {
          do {
            plVar6 = plVar5;
            plVar5 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
        if (plVar6 == (long *)(param_1 + 0x40)) goto LAB_10012b62c;
        uVar3 = (ulong)*(uint *)(param_2 + 0x70);
        plVar11 = plVar6;
      } while( true );
    }
  }
LAB_10012b668:
  if ((*(int *)(param_1 + 0x48) == 1) && (iVar1 = FUN_10052bc30(), iVar1 != 0)) {
    FUN_10012ad48(param_1);
  }
  return;
LAB_10012b62c:
  puVar7 = local_58;
  if ((int)local_60 != 0) {
    do {
      puVar8 = puVar7 + 1;
      FUN_10012a774(param_1,*puVar7);
      puVar7 = puVar8;
    } while (puVar8 != local_58 + (local_60 & 0xffffffff));
  }
  if (local_58 != (undefined8 *)0x0) {
    operator_delete__(local_58);
  }
  goto LAB_10012b668;
}




void FUN_10012b6a0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10012c2cc(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10012b720(long param_1)

{
  FUN_10012b4c0(param_1 + -0x18);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10012b728(undefined8 param_1)

{
  size_t sVar1;
  undefined8 *******pppppppuVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 *******local_38;
  size_t local_30;
  byte local_21;
  
  FUN_10032523c();
  iVar6 = FUN_1003252f0();
  if (iVar6 != 0) {
    FUN_10032523c();
    iVar6 = FUN_1003252f0();
    if (iVar6 != 1) {
      FUN_10032523c();
      iVar6 = FUN_1003252f0();
      if (iVar6 != 2) {
        return;
      }
    }
  }
  FUN_10032523c();
  iVar6 = FUN_1003252f8();
  if (iVar6 != 3) {
    return;
  }
  iVar6 = FUN_10015d3f8();
  if (iVar6 == 0) {
    iVar6 = FUN_10052bc30();
LAB_10012b850:
    if (iVar6 == 0) {
      return;
    }
    FUN_10012ad48(param_1);
    return;
  }
  lVar7 = FUN_10015d3ec();
  cVar3 = *(char *)(lVar7 + 0x567a);
  iVar6 = FUN_10052bc30();
  if (cVar3 == '\0') goto LAB_10012b850;
  if (iVar6 == 0) {
    return;
  }
  FUN_10052bc38(&local_38);
  lVar7 = FUN_10015d3ec();
  uVar10 = (ulong)local_21;
  bVar4 = *(byte *)(lVar7 + 0x54d7);
  if (-1 < (char)local_21) {
    local_30 = uVar10;
  }
  sVar1 = *(size_t *)(lVar7 + 0x54c8);
  if (-1 < (char)bVar4) {
    sVar1 = (ulong)bVar4;
  }
  if (local_30 == sVar1) {
    pppppppuVar2 = local_38;
    if (-1 < (char)local_21) {
      pppppppuVar2 = &local_38;
    }
    pbVar11 = *(byte **)(lVar7 + 0x54c0);
    if (-1 < (char)bVar4) {
      pbVar11 = (byte *)(lVar7 + 0x54c0);
    }
    if (-1 < (char)local_21) {
      if (local_30 == 0) {
        return;
      }
      if ((uint)*pbVar11 != ((uint)local_38 & 0xff)) goto LAB_10012b868;
      pbVar9 = (byte *)((ulong)&local_38 | 1);
      do {
        uVar10 = uVar10 - 1;
        pbVar11 = pbVar11 + 1;
        if (uVar10 == 0) break;
        bVar4 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar4 == *pbVar11);
      bVar5 = uVar10 != 0;
      goto LAB_10012b86c;
    }
    if (local_30 == 0) {
      operator_delete(local_38);
      return;
    }
    iVar6 = _memcmp(pppppppuVar2,pbVar11,local_30);
    bVar5 = iVar6 != 0;
  }
  else {
LAB_10012b868:
    bVar5 = true;
LAB_10012b86c:
    if (-1 < (char)local_21) goto joined_r0x00010012b870;
  }
  operator_delete(local_38);
joined_r0x00010012b870:
  if (!bVar5) {
    return;
  }
  lVar8 = FUN_10015d3ec();
  lVar7 = *(long *)(lVar8 + 0x54c0);
  if (-1 < *(char *)(lVar8 + 0x54d7)) {
    lVar7 = lVar8 + 0x54c0;
  }
  FUN_10012ada4(param_1,lVar7);
  return;
}




void FUN_10012b8d4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10012b8d4(param_1,*param_2);
    FUN_10012b8d4(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

void thunk_FUN_10012b728(undefined8 param_1)

{
  size_t sVar1;
  undefined8 *******pppppppuVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 *******pppppppuStack_38;
  size_t sStack_30;
  byte bStack_21;
  
  FUN_10032523c();
  iVar6 = FUN_1003252f0();
  if (iVar6 != 0) {
    FUN_10032523c();
    iVar6 = FUN_1003252f0();
    if (iVar6 != 1) {
      FUN_10032523c();
      iVar6 = FUN_1003252f0();
      if (iVar6 != 2) {
        return;
      }
    }
  }
  FUN_10032523c();
  iVar6 = FUN_1003252f8();
  if (iVar6 != 3) {
    return;
  }
  iVar6 = FUN_10015d3f8();
  if (iVar6 == 0) {
    iVar6 = FUN_10052bc30();
LAB_10012b850:
    if (iVar6 == 0) {
      return;
    }
    FUN_10012ad48(param_1);
    return;
  }
  lVar7 = FUN_10015d3ec();
  cVar3 = *(char *)(lVar7 + 0x567a);
  iVar6 = FUN_10052bc30();
  if (cVar3 == '\0') goto LAB_10012b850;
  if (iVar6 == 0) {
    return;
  }
  FUN_10052bc38(&pppppppuStack_38);
  lVar7 = FUN_10015d3ec();
  uVar10 = (ulong)bStack_21;
  bVar4 = *(byte *)(lVar7 + 0x54d7);
  if (-1 < (char)bStack_21) {
    sStack_30 = uVar10;
  }
  sVar1 = *(size_t *)(lVar7 + 0x54c8);
  if (-1 < (char)bVar4) {
    sVar1 = (ulong)bVar4;
  }
  if (sStack_30 == sVar1) {
    pppppppuVar2 = pppppppuStack_38;
    if (-1 < (char)bStack_21) {
      pppppppuVar2 = &pppppppuStack_38;
    }
    pbVar11 = *(byte **)(lVar7 + 0x54c0);
    if (-1 < (char)bVar4) {
      pbVar11 = (byte *)(lVar7 + 0x54c0);
    }
    if (-1 < (char)bStack_21) {
      if (sStack_30 == 0) {
        return;
      }
      if ((uint)*pbVar11 != ((uint)pppppppuStack_38 & 0xff)) goto LAB_10012b868;
      pbVar9 = (byte *)((ulong)&pppppppuStack_38 | 1);
      do {
        uVar10 = uVar10 - 1;
        pbVar11 = pbVar11 + 1;
        if (uVar10 == 0) break;
        bVar4 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar4 == *pbVar11);
      bVar5 = uVar10 != 0;
      goto LAB_10012b86c;
    }
    if (sStack_30 == 0) {
      operator_delete(pppppppuStack_38);
      return;
    }
    iVar6 = _memcmp(pppppppuVar2,pbVar11,sStack_30);
    bVar5 = iVar6 != 0;
  }
  else {
LAB_10012b868:
    bVar5 = true;
LAB_10012b86c:
    if (-1 < (char)bStack_21) goto joined_r0x00010012b870;
  }
  operator_delete(pppppppuStack_38);
joined_r0x00010012b870:
  if (!bVar5) {
    return;
  }
  lVar8 = FUN_10015d3ec();
  lVar7 = *(long *)(lVar8 + 0x54c0);
  if (-1 < *(char *)(lVar8 + 0x54d7)) {
    lVar7 = lVar8 + 0x54c0;
  }
  FUN_10012ada4(param_1,lVar7);
  return;
}




undefined1  [16]
FUN_10012b918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  puVar2 = (undefined8 *)FUN_10012b99c(param_1,param_2,&local_38,auStack_40,param_3);
  pvVar3 = (void *)*puVar2;
  bVar1 = pvVar3 == (void *)0x0;
  if (bVar1) {
    pvVar3 = operator_new(0x30);
    uVar4 = *param_4;
    *(undefined8 *)((long)pvVar3 + 0x28) = param_4[1];
    *(undefined8 *)((long)pvVar3 + 0x20) = uVar4;
    FUN_10012badc(param_1,local_38,puVar2,pvVar3);
  }
  auVar5[8] = bVar1;
  auVar5._0_8_ = pvVar3;
  auVar5._9_7_ = 0;
  return auVar5;
}




long * FUN_10012b99c(undefined8 *param_1,long *param_2,long *param_3,long *param_4,int *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 + 1 != param_2) {
    iVar1 = *param_5;
    if ((int)param_2[4] <= iVar1) {
      if (iVar1 <= (int)param_2[4]) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar3 = (long *)param_2[1];
      if ((long *)param_2[1] == (long *)0x0) {
        plVar3 = param_2 + 2;
        plVar4 = (long *)*plVar3;
        if ((long *)*plVar4 != param_2) {
          do {
            lVar5 = *plVar3;
            plVar3 = (long *)(lVar5 + 0x10);
            plVar4 = (long *)*plVar3;
          } while (*plVar4 != lVar5);
        }
      }
      else {
        do {
          plVar4 = plVar3;
          plVar3 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
      if ((plVar4 == param_1 + 1) || (iVar1 < (int)plVar4[4])) {
        if (param_2[1] != 0) {
          *param_3 = (long)plVar4;
          return plVar4;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      goto LAB_10012bac0;
    }
  }
  plVar4 = (long *)*param_2;
  plVar3 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar2 = plVar4;
    if (plVar4 == (long *)0x0) {
      plVar3 = param_2 + 2;
      if (*(long **)*plVar3 == param_2) {
        do {
          lVar5 = *plVar3;
          plVar3 = (long *)(lVar5 + 0x10);
        } while (*(long *)*plVar3 == lVar5);
      }
      plVar3 = (long *)*plVar3;
    }
    else {
      do {
        plVar3 = plVar2;
        plVar2 = (long *)plVar3[1];
      } while ((long *)plVar3[1] != (long *)0x0);
    }
    if (*param_5 <= (int)plVar3[4]) {
LAB_10012bac0:
      plVar3 = (long *)FUN_10012bb30(param_1,param_3,param_5);
      return plVar3;
    }
  }
  if (plVar4 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar3;
    param_2 = plVar3 + 1;
  }
  return param_2;
}




void FUN_10012badc(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




long * FUN_10012bb30(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 8);
  if ((long *)*plVar1 == (long *)0x0) {
    *param_2 = (long)plVar1;
    return plVar1;
  }
  plVar2 = (long *)(param_1 + 8);
  plVar1 = (long *)*plVar1;
  do {
    while (plVar3 = plVar1, *param_3 < (int)plVar3[4]) {
      plVar2 = plVar3;
      plVar1 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) {
        *param_2 = (long)plVar3;
        return plVar3;
      }
    }
    if (*param_3 <= (int)plVar3[4]) break;
    plVar2 = plVar3 + 1;
    plVar1 = (long *)*plVar2;
  } while ((long *)*plVar2 != (long *)0x0);
  *param_2 = (long)plVar3;
  return plVar2;
}




void FUN_10012bb98(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 2);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 4);
    if (puVar1 != param_3) {
      do {
        puVar2 = param_3 + 1;
        *param_2 = *param_3;
        param_2 = param_2 + 1;
        param_3 = puVar2;
      } while (puVar2 != puVar1);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




long * FUN_10012bc08(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_10012bc9c(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




void FUN_10012bc9c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  lVar2 = *param_2;
  plVar7 = param_2;
  if ((lVar2 != 0) && (plVar4 = (long *)param_2[1], (long *)param_2[1] != (long *)0x0)) {
    do {
      plVar7 = plVar4;
      plVar4 = (long *)*plVar7;
    } while (plVar4 != (long *)0x0);
    lVar2 = 0;
  }
  plVar4 = (long *)plVar7[lVar2 == 0];
  if (plVar4 != (long *)0x0) {
    plVar4[2] = plVar7[2];
  }
  puVar6 = (undefined8 *)plVar7[2];
  plVar3 = (long *)*puVar6;
  if (plVar3 == plVar7) {
    *puVar6 = plVar4;
    if (plVar7 == param_1) {
      plVar3 = (long *)0x0;
      param_1 = plVar4;
    }
    else {
      plVar3 = (long *)puVar6[1];
    }
  }
  else {
    puVar6[1] = plVar4;
  }
  lVar2 = plVar7[3];
  plVar8 = param_1;
  if (plVar7 != param_2) {
    lVar9 = param_2[2];
    plVar7[2] = lVar9;
    *(long **)(lVar9 + (ulong)(*(long **)param_2[2] != param_2) * 8) = plVar7;
    lVar9 = *param_2;
    lVar1 = param_2[1];
    *(long **)(lVar9 + 0x10) = plVar7;
    *plVar7 = lVar9;
    plVar7[1] = lVar1;
    if (lVar1 != 0) {
      *(long **)(lVar1 + 0x10) = plVar7;
    }
    *(char *)(plVar7 + 3) = (char)param_2[3];
    plVar8 = plVar7;
    if (param_1 != param_2) {
      plVar8 = param_1;
    }
  }
  if (((char)lVar2 != '\0') && (plVar8 != (long *)0x0)) {
    if (plVar4 == (long *)0x0) {
      while( true ) {
        plVar4 = (long *)plVar3[2];
        plVar7 = plVar8;
        if ((long *)*plVar4 == plVar3) break;
        if ((char)plVar3[3] == '\0') {
          *(undefined1 *)(plVar3 + 3) = 1;
          *(undefined1 *)(plVar4 + 3) = 0;
          plVar7 = (long *)plVar4[1];
          lVar2 = *plVar7;
          plVar4[1] = lVar2;
          if (lVar2 != 0) {
            *(long **)(lVar2 + 0x10) = plVar4;
          }
          plVar7[2] = plVar4[2];
          ((undefined8 *)plVar4[2])[*(long **)plVar4[2] != plVar4] = plVar7;
          *plVar7 = (long)plVar4;
          plVar4[2] = (long)plVar7;
          plVar7 = plVar3;
          if (plVar8 != (long *)*plVar3) {
            plVar7 = plVar8;
          }
          plVar3 = (long *)((long *)*plVar3)[1];
        }
        plVar4 = (long *)*plVar3;
        if ((plVar4 != (long *)0x0) && ((char)plVar4[3] == '\0')) {
          plVar8 = (long *)plVar3[1];
          if (plVar8 != (long *)0x0) goto LAB_10012bed0;
LAB_10012bed8:
          *(undefined1 *)(plVar4 + 3) = 1;
          *(undefined1 *)(plVar3 + 3) = 0;
          lVar2 = plVar4[1];
          *plVar3 = lVar2;
          if (lVar2 != 0) {
            *(long **)(lVar2 + 0x10) = plVar3;
          }
          plVar4[2] = plVar3[2];
          ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = plVar4;
          plVar4[1] = (long)plVar3;
          plVar3[2] = (long)plVar4;
          plVar5 = plVar4;
          plVar8 = plVar3;
LAB_10012bf24:
          plVar7 = (long *)plVar5[2];
          *(char *)(plVar5 + 3) = (char)plVar7[3];
          *(undefined1 *)(plVar7 + 3) = 1;
          *(undefined1 *)(plVar8 + 3) = 1;
          plVar4 = (long *)plVar7[1];
          lVar2 = *plVar4;
          plVar7[1] = lVar2;
          if (lVar2 != 0) {
            *(long **)(lVar2 + 0x10) = plVar7;
          }
          plVar4[2] = plVar7[2];
          ((undefined8 *)plVar7[2])[*(long **)plVar7[2] != plVar7] = plVar4;
          *plVar4 = (long)plVar7;
LAB_10012c018:
          plVar7[2] = (long)plVar4;
          return;
        }
        plVar8 = (long *)plVar3[1];
        if ((plVar8 != (long *)0x0) && ((char)plVar8[3] == '\0')) {
LAB_10012bed0:
          plVar5 = plVar3;
          if ((char)plVar8[3] != '\0') goto LAB_10012bed8;
          goto LAB_10012bf24;
        }
        *(undefined1 *)(plVar3 + 3) = 0;
        plVar3 = (long *)plVar3[2];
        plVar4 = plVar7;
        if ((plVar3 == plVar7) || (plVar4 = plVar3, (char)plVar3[3] == '\0')) goto LAB_10012bebc;
LAB_10012bea0:
        plVar3 = (long *)((undefined8 *)plVar3[2])[*(long **)plVar3[2] == plVar3];
        plVar8 = plVar7;
      }
      if ((char)plVar3[3] == '\0') {
        *(undefined1 *)(plVar3 + 3) = 1;
        *(undefined1 *)(plVar4 + 3) = 0;
        lVar2 = plVar3[1];
        *plVar4 = lVar2;
        if (lVar2 != 0) {
          *(long **)(lVar2 + 0x10) = plVar4;
        }
        plVar3[2] = plVar4[2];
        ((undefined8 *)plVar4[2])[*(long **)plVar4[2] != plVar4] = plVar3;
        plVar3[1] = (long)plVar4;
        plVar4[2] = (long)plVar3;
        plVar7 = plVar3;
        if (plVar8 != plVar4) {
          plVar7 = plVar8;
        }
        plVar3 = (long *)*plVar4;
      }
      plVar8 = (long *)*plVar3;
      plVar4 = plVar3;
      if ((plVar8 == (long *)0x0) || ((char)plVar8[3] != '\0')) {
        plVar5 = (long *)plVar3[1];
        if ((plVar5 == (long *)0x0) || ((char)plVar5[3] != '\0')) {
          *(undefined1 *)(plVar3 + 3) = 0;
          plVar3 = (long *)plVar3[2];
          plVar4 = plVar3;
          if ((char)plVar3[3] != '\0' && plVar3 != plVar7) goto LAB_10012bea0;
LAB_10012bebc:
          *(undefined1 *)(plVar4 + 3) = 1;
          return;
        }
        if ((plVar8 == (long *)0x0) || ((char)plVar8[3] != '\0')) {
          *(undefined1 *)(plVar5 + 3) = 1;
          *(undefined1 *)(plVar3 + 3) = 0;
          lVar2 = *plVar5;
          plVar3[1] = lVar2;
          if (lVar2 != 0) {
            *(long **)(lVar2 + 0x10) = plVar3;
          }
          plVar5[2] = plVar3[2];
          ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = plVar5;
          *plVar5 = (long)plVar3;
          plVar3[2] = (long)plVar5;
          plVar4 = plVar5;
          plVar8 = plVar3;
        }
      }
      plVar7 = (long *)plVar4[2];
      *(char *)(plVar4 + 3) = (char)plVar7[3];
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(plVar8 + 3) = 1;
      plVar4 = (long *)*plVar7;
      lVar2 = plVar4[1];
      *plVar7 = lVar2;
      if (lVar2 != 0) {
        *(long **)(lVar2 + 0x10) = plVar7;
      }
      plVar4[2] = plVar7[2];
      ((undefined8 *)plVar7[2])[*(long **)plVar7[2] != plVar7] = plVar4;
      plVar4[1] = (long)plVar7;
      goto LAB_10012c018;
    }
    *(undefined1 *)(plVar4 + 3) = 1;
  }
  return;
}




uint * FUN_10012c020(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      if (*(int *)(*(long *)(param_1 + 2) + lVar3) != -1) {
        FUN_10012c0a4(param_1);
        uVar1 = (ulong)*param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar1);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_10012c0a4(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + (ulong)param_2 * 0x18 + 0x17) < '\0') {
    operator_delete(*(void **)(lVar1 + (ulong)param_2 * 0x18));
  }
  *(undefined4 *)(lVar1 + (ulong)param_2 * 0x18) = *(undefined4 *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = param_2;
  return;
}




ulong FUN_10012c108(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_50 [24];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_10012c1b4(param_1 + 0x18,auStack_50);
    uVar2 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar1 + uVar2 * 0x18);
  }
  FUN_10003330c(lVar1 + uVar2 * 0x18,param_2);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012c1b4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10012c240(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x18;
  uVar6 = param_2[1];
  uVar5 = *param_2;
  *(undefined8 *)(lVar4 + -8) = param_2[2];
  *(undefined8 *)(lVar4 + -0x10) = uVar6;
  *(undefined8 *)(lVar4 + -0x18) = uVar5;
  return;
}




void FUN_10012c240(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x18);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x18;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar7 = puVar5[1];
        uVar6 = *puVar5;
        puVar4[2] = puVar5[2];
        puVar4[1] = uVar7;
        *puVar4 = uVar6;
        puVar5 = puVar5 + 3;
        lVar3 = lVar3 + -0x18;
        puVar4 = puVar4 + 3;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10012c2cc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10012c348(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_168 [2];
  char local_151;
  undefined8 **local_150 [2];
  char local_139;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_150);
  pppuVar1 = (undefined8 ***)local_150[0];
  if (-1 < local_139) {
    pppuVar1 = local_150;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_10012c538(local_168);
  pppuVar1 = (undefined8 ***)local_168[0];
  if (-1 < local_151) {
    pppuVar1 = local_168;
  }
  FUN_1004d2d74(auStack_138,pppuVar1,param_1,param_2);
  if (local_151 < '\0') {
    operator_delete(local_168[0]);
  }
  if (local_139 < '\0') {
    operator_delete(local_150[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012c414(string *param_1)

{
  string sVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  string *psVar6;
  void *local_38 [2];
  char local_21;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar3 = FUN_1004e2e9c(&DAT_101d911b0,"--userdata");
  if (iVar3 != 0) {
    uVar4 = FUN_1004e2e24(&DAT_101d911b0,"--userdata");
    iVar3 = FUN_1004d28e4();
    if (iVar3 != 0) {
      FUN_10001549c(local_38,uVar4);
      std::string::operator=(param_1,(string *)local_38);
      if (-1 < local_21) {
        return;
      }
      operator_delete(local_38[0]);
      return;
    }
  }
  FUN_1004e96fc();
  FUN_1004e9574(local_38);
  std::string::operator=(param_1,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  sVar1 = param_1[0x17];
  if ((char)sVar1 < '\0') {
    uVar5 = *(ulong *)(param_1 + 8);
    if (uVar5 == 0) goto LAB_10012c500;
    psVar6 = *(string **)param_1;
  }
  else {
    uVar5 = (ulong)(byte)sVar1;
    psVar6 = param_1;
    if (sVar1 == (string)0x0) goto LAB_10012c500;
  }
  if (psVar6[uVar5 - 1] != (string)0x2f) {
    std::string::append((char *)param_1);
  }
LAB_10012c500:
  puVar2 = DAT_101d23348;
  if (-1 < DAT_101d2335f) {
    puVar2 = &DAT_101d23348;
  }
  std::string::append((char *)param_1,(ulong)puVar2);
  return;
}




void FUN_10012c538(string *param_1)

{
  void *local_58 [2];
  char local_41;
  undefined1 auStack_3c [4];
  void *local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_10012cb84(&local_38,auStack_3c);
  std::operator+("environment: ",(string *)&local_38);
  std::string::string(param_1,(string *)local_58);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}




void FUN_10012c5b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_168 [2];
  char local_151;
  undefined8 **local_150 [2];
  char local_139;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_150);
  pppuVar1 = (undefined8 ***)local_150[0];
  if (-1 < local_139) {
    pppuVar1 = local_150;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_10012c538(local_168);
  pppuVar1 = (undefined8 ***)local_168[0];
  if (-1 < local_151) {
    pppuVar1 = local_168;
  }
  FUN_1004d2da8(auStack_138,pppuVar1,param_1,param_2);
  if (local_151 < '\0') {
    operator_delete(local_168[0]);
  }
  if (local_139 < '\0') {
    operator_delete(local_150[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012c67c(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_178 [2];
  char local_161;
  undefined8 **local_160 [2];
  char local_149;
  undefined1 auStack_148 [256];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_160);
  pppuVar1 = (undefined8 ***)local_160[0];
  if (-1 < local_149) {
    pppuVar1 = local_160;
  }
  FUN_1004d2cc8(auStack_148,pppuVar1);
  FUN_10012c538(local_178);
  pppuVar1 = (undefined8 ***)local_178[0];
  if (-1 < local_161) {
    pppuVar1 = local_178;
  }
  FUN_1004d2ddc(param_1,auStack_148,pppuVar1,param_2);
  if (local_161 < '\0') {
    operator_delete(local_178[0]);
  }
  if (local_149 < '\0') {
    operator_delete(local_160[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012c750(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_168 [2];
  char local_151;
  undefined8 **local_150 [2];
  char local_139;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_150);
  pppuVar1 = (undefined8 ***)local_150[0];
  if (-1 < local_139) {
    pppuVar1 = local_150;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_10012c538(local_168);
  pppuVar1 = (undefined8 ***)local_168[0];
  if (-1 < local_151) {
    pppuVar1 = local_168;
  }
  FUN_1004d2e08(auStack_138,pppuVar1,param_1,param_2);
  if (local_151 < '\0') {
    operator_delete(local_168[0]);
  }
  if (local_139 < '\0') {
    operator_delete(local_150[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10012c81c(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_168 [2];
  char local_151;
  undefined8 **local_150 [2];
  char local_139;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_150);
  pppuVar1 = (undefined8 ***)local_150[0];
  if (-1 < local_139) {
    pppuVar1 = local_150;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_10012c538(local_168);
  pppuVar1 = (undefined8 ***)local_168[0];
  if (-1 < local_151) {
    pppuVar1 = local_168;
  }
  uVar2 = FUN_1004d2cec(auStack_138,pppuVar1,param_1,param_2);
  if (local_151 < '\0') {
    operator_delete(local_168[0]);
  }
  if (local_139 < '\0') {
    operator_delete(local_150[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10012c8f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_168 [2];
  char local_151;
  undefined8 **local_150 [2];
  char local_139;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_150);
  pppuVar1 = (undefined8 ***)local_150[0];
  if (-1 < local_139) {
    pppuVar1 = local_150;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_10012c538(local_168);
  pppuVar1 = (undefined8 ***)local_168[0];
  if (-1 < local_151) {
    pppuVar1 = local_168;
  }
  uVar2 = FUN_1004d2d1c(auStack_138,pppuVar1,param_1,param_2);
  if (local_151 < '\0') {
    operator_delete(local_168[0]);
  }
  if (local_139 < '\0') {
    operator_delete(local_150[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined1  [16] FUN_10012c9c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 **local_178 [2];
  char local_161;
  undefined8 **local_160 [2];
  char local_149;
  undefined1 auStack_148 [256];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_160);
  pppuVar1 = (undefined8 ***)local_160[0];
  if (-1 < local_149) {
    pppuVar1 = local_160;
  }
  FUN_1004d2cc8(auStack_148,pppuVar1);
  FUN_10012c538(local_178);
  pppuVar1 = (undefined8 ***)local_178[0];
  if (-1 < local_161) {
    pppuVar1 = local_178;
  }
  auVar2 = FUN_1004d2d48(param_1,auStack_148,pppuVar1,param_2);
  uVar3 = auVar2._8_8_;
  if (local_161 < '\0') {
    operator_delete(local_178[0]);
  }
  if (local_149 < '\0') {
    operator_delete(local_160[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    auVar2._8_8_ = uVar3;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012caa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  undefined8 **local_178 [2];
  char local_161;
  undefined8 **local_160 [2];
  char local_149;
  undefined1 auStack_148 [256];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_160);
  pppuVar1 = (undefined8 ***)local_160[0];
  if (-1 < local_149) {
    pppuVar1 = local_160;
  }
  FUN_1004d2cc8(auStack_148,pppuVar1);
  FUN_10012c538(local_178);
  pppuVar1 = (undefined8 ***)local_178[0];
  if (-1 < local_161) {
    pppuVar1 = local_178;
  }
  FUN_1004d2d5c(auStack_148,pppuVar1,param_1,param_2,param_3,param_4);
  if (local_161 < '\0') {
    operator_delete(local_178[0]);
  }
  if (local_149 < '\0') {
    operator_delete(local_160[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012cb84(string *param_1,undefined4 *param_2)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,"platform.superevil.net");
  std::string::operator=(param_1,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *param_2 = 8000;
  return;
}




void FUN_10012cbe0(byte *param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined1 auStack_32 [10];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10001549c(param_1,"http://preauth.superevil.net/kindred/live/[REVISION]-status-redirect");
  bVar3 = param_1[0x17];
  uVar5 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_1 + 8);
  if (-1 < (char)bVar3) {
    sVar1 = uVar5;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pbVar6 = *(byte **)param_1;
    if (-1 < (char)bVar3) {
      pbVar6 = param_1;
    }
    pbVar7 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar7 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar4 = _memcmp(pbVar6,pbVar7,sVar1), iVar4 == 0)) goto LAB_10012cd20;
    }
    else {
      if (sVar1 == 0) goto LAB_10012cd20;
      pbVar6 = param_1;
      if ((uint)*pbVar7 == ((uint)*(byte **)param_1 & 0xff)) {
        do {
          uVar5 = uVar5 - 1;
          pbVar7 = pbVar7 + 1;
          pbVar6 = pbVar6 + 1;
          if (uVar5 == 0) goto LAB_10012cd20;
        } while (*pbVar6 == *pbVar7);
      }
    }
  }
  FUN_1004d26c0(auStack_32,10,"%d");
  FUN_10001549c(local_50,"[REVISION]");
  FUN_10001549c(local_68,auStack_32);
  FUN_10012cd4c(param_1,local_50,local_68);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
LAB_10012cd20:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10012cd4c(undefined8 *param_1,byte *param_2,undefined8 *param_3)

{
  void *pvVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar8 = 0;
  bVar3 = (char)param_2[0x17] < '\0';
  uVar12 = *(ulong *)(param_2 + 8);
  uVar13 = (ulong)param_2[0x17];
  uVar10 = uVar12;
  pbVar9 = *(byte **)param_2;
  if (!bVar3) {
    uVar10 = uVar13;
    pbVar9 = param_2;
  }
  uVar6 = param_1[1];
  puVar11 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar6 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar11 = param_1;
  }
  do {
    if (uVar10 != 0) {
      pvVar5 = (void *)((long)puVar11 + uVar8);
      pvVar1 = (void *)((long)puVar11 + uVar6);
      lVar7 = (long)pvVar1 - (long)pvVar5;
      if (lVar7 < (long)uVar10) {
        return;
      }
      bVar2 = *pbVar9;
      while( true ) {
        if (0xfffffffffffffffe < lVar7 - uVar10) {
          return;
        }
        pvVar5 = _memchr(pvVar5,(uint)bVar2,(lVar7 - uVar10) + 1);
        if (pvVar5 == (void *)0x0) {
          return;
        }
        iVar4 = _memcmp(pvVar5,pbVar9,uVar10);
        if (iVar4 == 0) break;
        pvVar5 = (void *)((long)pvVar5 + 1);
        lVar7 = (long)pvVar1 - (long)pvVar5;
        if (lVar7 < (long)uVar10) {
          return;
        }
      }
      if (pvVar5 == pvVar1) {
        return;
      }
      uVar8 = (long)pvVar5 - (long)puVar11;
    }
    if (uVar8 == 0xffffffffffffffff) {
      return;
    }
    if (!bVar3) {
      uVar12 = uVar13;
    }
    puVar11 = (undefined8 *)*param_3;
    if (-1 < *(char *)((long)param_3 + 0x17)) {
      puVar11 = param_3;
    }
    std::string::replace((ulong)param_1,uVar8,(char *)(uVar12 & 0xffffffff),(ulong)puVar11);
    uVar12 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar12 = (ulong)*(byte *)((long)param_3 + 0x17);
    }
    uVar8 = uVar8 + (uVar12 & 0xffffffff);
    bVar3 = (char)param_2[0x17] < '\0';
    uVar12 = *(ulong *)(param_2 + 8);
    uVar13 = (ulong)param_2[0x17];
    uVar10 = uVar12;
    pbVar9 = *(byte **)param_2;
    if (!bVar3) {
      uVar10 = uVar13;
      pbVar9 = param_2;
    }
    uVar6 = param_1[1];
    puVar11 = (undefined8 *)*param_1;
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      uVar6 = (ulong)*(byte *)((long)param_1 + 0x17);
      puVar11 = param_1;
    }
  } while (uVar8 <= uVar6);
  return;
}




bool FUN_10012ced4(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_10016a9c8();
  if (iVar2 == 7) {
    bVar1 = true;
  }
  else {
    iVar2 = FUN_100126d70();
    bVar1 = iVar2 == 0xf;
  }
  return bVar1;
}




undefined8 FUN_10012cf04(void)

{
  return 1;
}




bool FUN_10012cf0c(void)

{
  int iVar1;
  
  iVar1 = FUN_100126d70();
  return iVar1 == 0xf;
}




char * FUN_10012cf28(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_10016a9c8();
  if ((iVar1 == 7) || (iVar1 = FUN_100126d70(), iVar1 == 0xf)) {
    pcVar2 = "vaingloryservice@163.com";
  }
  else {
    pcVar2 = "support@superevilmegacorp.com";
  }
  return pcVar2;
}




char * FUN_10012cf64(void)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = FUN_1004e2f90(&DAT_101d911b0,0);
  pcVar1 = "itms-apps://itunes.apple.com/app/id671464704";
  if (uVar3 != 7) {
    pcVar1 = 
    "itms-apps://itunes.apple.com/WebObjects/MZStore.woa/wa/viewContentsUserReviews?id=671464704&onlyLatestVersion=true&pageNumber=0&sortOrdering=1&type=Purple+Software"
    ;
  }
  pcVar2 = 
  "itms-apps://ax.itunes.apple.com/WebObjects/MZStore.woa/wa/viewContentsUserReviews?type=Purple+Software&id=671464704"
  ;
  if (6 < uVar3) {
    pcVar2 = pcVar1;
  }
  return pcVar2;
}




void FUN_10012d198(void)

{
  char *****pppppcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  FILE *pFVar6;
  FILE *pFVar7;
  void *local_4c8 [2];
  char local_4b1;
  void *local_4b0 [2];
  char local_499;
  void *local_498 [2];
  char local_481;
  char ****local_480 [2];
  char local_469;
  char ****local_468 [2];
  char local_451;
  void *local_450 [2];
  char local_439;
  void *local_438 [2];
  char local_421;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = FUN_1004e2e18(&DAT_101d911b0,0);
  FUN_10001549c(local_450,uVar3);
  std::string::rfind((char)local_450,0x2f);
  lVar4 = std::string::rfind((char)local_450,0x2f);
  std::string::string((string *)local_498,(string *)local_450,0,lVar4 + 1,(allocator *)local_450);
  FUN_10001549c(local_4b0,"Library/");
  FUN_1000e8b18(local_480,local_498,local_4b0);
  FUN_10003330c(local_4c8,&DAT_101d23348);
  FUN_1000e8b18(local_438,local_480,local_4c8);
  std::string::string((string *)local_468,(string *)local_438);
  if (local_421 < '\0') {
    operator_delete(local_438[0]);
  }
  if (local_4b1 < '\0') {
    operator_delete(local_4c8[0]);
  }
  if (local_469 < '\0') {
    operator_delete(local_480[0]);
  }
  if (local_499 < '\0') {
    operator_delete(local_4b0[0]);
  }
  if (local_481 < '\0') {
    operator_delete(local_498[0]);
  }
  FUN_10012c414(local_480);
  pppppcVar1 = (char *****)local_468[0];
  if (-1 < local_451) {
    pppppcVar1 = local_468;
  }
  iVar2 = FUN_1004d28e4(pppppcVar1);
  if (iVar2 != 0) {
    pppppcVar1 = (char *****)local_480[0];
    if (-1 < local_469) {
      pppppcVar1 = local_480;
    }
    uVar5 = FUN_1004d28e4(pppppcVar1);
    if ((uVar5 & 1) == 0) {
      pppppcVar1 = (char *****)local_468[0];
      if (-1 < local_451) {
        pppppcVar1 = local_468;
      }
      pFVar6 = _fopen((char *)pppppcVar1,"r");
      pppppcVar1 = (char *****)local_480[0];
      if (-1 < local_469) {
        pppppcVar1 = local_480;
      }
      pFVar7 = _fopen((char *)pppppcVar1,"w");
      uVar3 = FUN_1004d28a8(local_438,0x400,1,pFVar6);
      iVar2 = (int)uVar3;
      while (0 < iVar2) {
        FUN_1004d28c8(local_438,uVar3,1,pFVar7);
        uVar3 = FUN_1004d28a8(local_438,0x400,1,pFVar6);
        iVar2 = (int)uVar3;
      }
      _fclose(pFVar6);
      _fclose(pFVar7);
      pppppcVar1 = (char *****)local_468[0];
      if (-1 < local_451) {
        pppppcVar1 = local_468;
      }
      _unlink((char *)pppppcVar1);
    }
  }
  if (local_469 < '\0') {
    operator_delete(local_480[0]);
  }
  if (local_451 < '\0') {
    operator_delete(local_468[0]);
  }
  if (local_439 < '\0') {
    operator_delete(local_450[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012d408(undefined8 param_1,string *param_2,string *param_3,string *param_4)

{
  undefined8 ***pppuVar1;
  int iVar2;
  ulong uVar3;
  void *local_1c0 [2];
  char local_1a9;
  void *local_1a8 [2];
  char local_191;
  void *local_190 [2];
  char local_179;
  void *local_178 [2];
  char local_161;
  undefined8 **local_160 [2];
  char local_149;
  undefined1 auStack_148 [256];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = FUN_10052b78c();
  if ((uVar3 & 1) == 0) {
    FUN_10012c414(local_160);
    pppuVar1 = (undefined8 ***)local_160[0];
    if (-1 < local_149) {
      pppuVar1 = local_160;
    }
    FUN_1004d2cc8(auStack_148,pppuVar1);
    FUN_10001549c(local_190,param_1);
    FUN_10001549c(local_1a8,"username");
    FUN_10001549c(local_1c0,"");
    FUN_1004d2e64(local_178,auStack_148,local_190,local_1a8,local_1c0);
    std::string::operator=(param_2,(string *)local_178);
    if (local_161 < '\0') {
      operator_delete(local_178[0]);
    }
    if (local_1a9 < '\0') {
      operator_delete(local_1c0[0]);
    }
    if (local_191 < '\0') {
      operator_delete(local_1a8[0]);
    }
    if (local_179 < '\0') {
      operator_delete(local_190[0]);
    }
    FUN_10001549c(local_190,param_1);
    FUN_10001549c(local_1a8,"password");
    FUN_10001549c(local_1c0,"");
    FUN_1004d2e64(local_178,auStack_148,local_190,local_1a8,local_1c0);
    std::string::operator=(param_3,(string *)local_178);
    if (local_161 < '\0') {
      operator_delete(local_178[0]);
    }
    if (local_1a9 < '\0') {
      operator_delete(local_1c0[0]);
    }
    if (local_191 < '\0') {
      operator_delete(local_1a8[0]);
    }
    if (local_179 < '\0') {
      operator_delete(local_190[0]);
    }
    FUN_10001549c(local_190,param_1);
    FUN_10001549c(local_1a8,"uuid");
    FUN_10001549c(local_1c0,"");
    FUN_1004d2e64(local_178,auStack_148,local_190,local_1a8,local_1c0);
    std::string::operator=(param_4,(string *)local_178);
    if (local_161 < '\0') {
      operator_delete(local_178[0]);
    }
    if (local_1a9 < '\0') {
      operator_delete(local_1c0[0]);
    }
    if (local_191 < '\0') {
      operator_delete(local_1a8[0]);
    }
    if (local_179 < '\0') {
      operator_delete(local_190[0]);
    }
    FUN_10003330c(local_178,param_3);
    iVar2 = FUN_10052b464();
    if (iVar2 != 0) {
      FUN_10052b4d4("password",param_1,param_3);
    }
    if (local_161 < '\0') {
      operator_delete(local_178[0]);
    }
    if (local_149 < '\0') {
      operator_delete(local_160[0]);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012d698(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  void *local_1b0 [2];
  char local_199;
  undefined8 ***local_198 [2];
  char local_181;
  undefined8 ***local_180;
  long local_178;
  undefined8 local_170;
  undefined8 ***local_168;
  ulong local_160;
  ulong local_158;
  undefined8 ***local_150;
  long local_148;
  undefined8 local_140;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = FUN_10052b78c();
  if ((uVar2 & 1) != 0) goto LAB_10012d89c;
  local_150 = (undefined8 ****)0x0;
  local_148 = 0;
  local_140 = 0;
  local_168 = (undefined8 ****)0x0;
  local_160 = 0;
  local_158 = 0;
  local_180 = (undefined8 ****)0x0;
  local_178 = 0;
  local_170 = 0;
  FUN_10012d408(param_1,&local_150,&local_168,&local_180);
  FUN_10012c414(local_198);
  ppppuVar3 = (undefined8 ****)local_198[0];
  if (-1 < local_181) {
    ppppuVar3 = local_198;
  }
  FUN_1004d2cc8(auStack_138,ppppuVar3);
  if (local_140 < 0) {
    ppppuVar3 = (undefined8 ****)local_150;
    if (local_148 != 0) goto LAB_10012d73c;
  }
  else if (local_140._7_1_ != '\0') {
    ppppuVar3 = &local_150;
LAB_10012d73c:
    FUN_1004d2e08(auStack_138,param_2,"username",ppppuVar3);
    FUN_1004d2e38(auStack_138,param_1,"username");
  }
  if (local_170 < 0) {
    ppppuVar3 = (undefined8 ****)local_180;
    if (local_178 != 0) goto LAB_10012d784;
  }
  else if (local_170._7_1_ != '\0') {
    ppppuVar3 = &local_180;
LAB_10012d784:
    FUN_1004d2e08(auStack_138,param_2,"uuid",ppppuVar3);
    FUN_1004d2e38(auStack_138,param_1,"uuid");
  }
  uVar2 = local_160;
  if (-1 < (long)local_158) {
    uVar2 = local_158 >> 0x38;
  }
  if (uVar2 != 0) {
    iVar1 = FUN_10052b464();
    if (iVar1 == 0) {
      ppppuVar3 = (undefined8 ****)local_168;
      if (-1 < (long)local_158) {
        ppppuVar3 = &local_168;
      }
      FUN_1004d2e08(auStack_138,param_2,"password",ppppuVar3);
      FUN_1004d2e38(auStack_138,param_1,"password");
    }
    else {
      ppppuVar3 = (undefined8 ****)local_168;
      if (-1 < (long)local_158) {
        ppppuVar3 = &local_168;
      }
      FUN_10001549c(local_1b0,ppppuVar3);
      FUN_10052b46c("password",param_2,local_1b0);
      if (local_199 < '\0') {
        operator_delete(local_1b0[0]);
      }
      FUN_10052b53c("password",param_1);
    }
  }
  if (local_181 < '\0') {
    operator_delete(local_198[0]);
  }
  if (local_170 < 0) {
    operator_delete(local_180);
  }
  if ((long)local_158 < 0) {
    operator_delete(local_168);
  }
  if (local_140 < 0) {
    operator_delete(local_150);
  }
LAB_10012d89c:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10012d8cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  undefined8 **local_48;
  ulong local_40;
  byte local_31;
  
  FUN_10012cb84();
  FUN_10012c538(&local_48);
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < (char)local_31) {
    pppuVar2 = &local_48;
  }
  FUN_10012d408(pppuVar2,param_3,param_4,param_5);
  uVar1 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_3 + 0x17);
  }
  if (uVar1 == 0) {
    uVar1 = *(ulong *)(param_5 + 8);
    if (-1 < (char)*(byte *)(param_5 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_5 + 0x17);
    }
    if (uVar1 == 0) {
      if (-1 < (char)local_31) {
        local_40 = (ulong)local_31;
      }
      if (local_40 == 0x23) {
        iVar3 = std::string::compare((ulong)&local_48,0,(char *)0xffffffffffffffff,0x1013dc3ea);
        if (iVar3 == 0) {
          pppuVar2 = (undefined8 ***)local_48;
          if (-1 < (char)local_31) {
            pppuVar2 = &local_48;
          }
          FUN_10012d698("environment: platform.superevilmegacorp.net",pppuVar2);
          pppuVar2 = (undefined8 ***)local_48;
          if (-1 < (char)local_31) {
            pppuVar2 = &local_48;
          }
          FUN_10012d408(pppuVar2,param_3,param_4,param_5);
        }
      }
    }
  }
  if ((char)local_31 < '\0') {
    operator_delete(local_48);
  }
  return;
}




void FUN_10012d9ec(char *param_1,undefined8 param_2,char *param_3,int param_4)

{
  undefined8 ***pppuVar1;
  int iVar2;
  ulong uVar3;
  void *local_1a8 [2];
  char local_191;
  void *local_190 [2];
  char local_179;
  undefined8 **local_178 [2];
  char local_161;
  undefined8 **local_160 [2];
  char local_149;
  undefined1 auStack_148 [256];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = FUN_10052b78c();
  if ((uVar3 & 1) != 0) goto LAB_10012dc4c;
  FUN_10012c414(local_160);
  pppuVar1 = (undefined8 ***)local_160[0];
  if (-1 < local_149) {
    pppuVar1 = local_160;
  }
  FUN_1004d2cc8(auStack_148,pppuVar1);
  FUN_10012c538(local_178);
  iVar2 = std::string::compare(param_1);
  if (iVar2 == 0) {
    iVar2 = std::string::compare(param_3);
    if ((iVar2 != 0) || (param_4 != 0)) {
      pppuVar1 = (undefined8 ***)local_178[0];
      if (-1 < local_161) {
        pppuVar1 = local_178;
      }
      FUN_10001549c(local_190,pppuVar1);
      FUN_10001549c(local_1a8,"uuid");
      FUN_1004d2f00(auStack_148,local_190,local_1a8,param_3);
      if (local_191 < '\0') {
        operator_delete(local_1a8[0]);
      }
      if (local_179 < '\0') {
        operator_delete(local_190[0]);
      }
    }
  }
  else {
    pppuVar1 = (undefined8 ***)local_178[0];
    if (-1 < local_161) {
      pppuVar1 = local_178;
    }
    FUN_10001549c(local_190,pppuVar1);
    FUN_10001549c(local_1a8,"username");
    FUN_1004d2f00(auStack_148,local_190,local_1a8,param_1);
    if (local_191 < '\0') {
      operator_delete(local_1a8[0]);
    }
    if (local_179 < '\0') {
      operator_delete(local_190[0]);
    }
    iVar2 = FUN_10052b464();
    if (iVar2 == 0) {
LAB_10012db20:
      pppuVar1 = (undefined8 ***)local_178[0];
      if (-1 < local_161) {
        pppuVar1 = local_178;
      }
      FUN_10001549c(local_190,pppuVar1);
      FUN_10001549c(local_1a8,"password");
      FUN_1004d2f00(auStack_148,local_190,local_1a8,param_2);
      if (local_191 < '\0') {
        operator_delete(local_1a8[0]);
      }
      if (local_179 < '\0') {
        operator_delete(local_190[0]);
      }
    }
    else {
      pppuVar1 = (undefined8 ***)local_178[0];
      if (-1 < local_161) {
        pppuVar1 = local_178;
      }
      iVar2 = FUN_10052b46c("password",pppuVar1,param_2);
      if (iVar2 == 0) goto LAB_10012db20;
      pppuVar1 = (undefined8 ***)local_178[0];
      if (-1 < local_161) {
        pppuVar1 = local_178;
      }
      FUN_1004d2e38(auStack_148,pppuVar1,"password");
    }
    if (param_4 != 0) {
      pppuVar1 = (undefined8 ***)local_178[0];
      if (-1 < local_161) {
        pppuVar1 = local_178;
      }
      FUN_1004d2e08(auStack_148,pppuVar1,"uuid","");
    }
  }
  if (local_161 < '\0') {
    operator_delete(local_178[0]);
  }
  if (local_149 < '\0') {
    operator_delete(local_160[0]);
  }
LAB_10012dc4c:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012dc80(void)

{
  undefined8 ***pppuVar1;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1004ef16c(&local_38);
  std::string::append((char *)&local_38);
  pppuVar1 = (undefined8 ***)local_38;
  if (-1 < local_28) {
    pppuVar1 = &local_38;
  }
  FUN_10012c348(pppuVar1,1);
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return;
}




undefined8 FUN_10012dcec(void)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = (undefined8 ***)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1004ef16c(&local_38);
  std::string::append((char *)&local_38);
  pppuVar1 = (undefined8 ***)local_38;
  if (-1 < local_28) {
    pppuVar1 = &local_38;
  }
  uVar2 = FUN_10012c81c(pppuVar1,0);
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return uVar2;
}




void FUN_10012dd60(void)

{
  undefined8 ***pppuVar1;
  int iVar2;
  ulong uVar3;
  undefined8 **local_168 [2];
  char local_151;
  undefined8 **local_150 [2];
  char local_139;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = FUN_10052b78c();
  if ((uVar3 & 1) == 0) {
    FUN_10012c414(local_150);
    pppuVar1 = (undefined8 ***)local_150[0];
    if (-1 < local_139) {
      pppuVar1 = local_150;
    }
    FUN_1004d2cc8(auStack_138,pppuVar1);
    FUN_10012c538(local_168);
    pppuVar1 = (undefined8 ***)local_168[0];
    if (-1 < local_151) {
      pppuVar1 = local_168;
    }
    FUN_1004d2e08(auStack_138,pppuVar1,"username","");
    pppuVar1 = (undefined8 ***)local_168[0];
    if (-1 < local_151) {
      pppuVar1 = local_168;
    }
    FUN_1004d2e08(auStack_138,pppuVar1,"password","");
    iVar2 = FUN_10052b464();
    if (iVar2 != 0) {
      pppuVar1 = (undefined8 ***)local_168[0];
      if (-1 < local_151) {
        pppuVar1 = local_168;
      }
      FUN_10052b53c("password",pppuVar1);
    }
    if (local_151 < '\0') {
      operator_delete(local_168[0]);
    }
    if (local_139 < '\0') {
      operator_delete(local_150[0]);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012de80(void)

{
  undefined8 ***pppuVar1;
  undefined8 **local_158 [2];
  char local_141;
  undefined8 **local_140 [2];
  char local_129;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_140);
  pppuVar1 = (undefined8 ***)local_140[0];
  if (-1 < local_129) {
    pppuVar1 = local_140;
  }
  FUN_1004d2cc8(auStack_128,pppuVar1);
  FUN_10012c538(local_158);
  pppuVar1 = (undefined8 ***)local_158[0];
  if (-1 < local_141) {
    pppuVar1 = local_158;
  }
  FUN_1004d2e08(auStack_128,pppuVar1,"uuid","");
  if (local_141 < '\0') {
    operator_delete(local_158[0]);
  }
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012df44(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_1e0 [2];
  char local_1c9;
  void *local_1c8 [2];
  char local_1b1;
  void *local_1b0 [2];
  char local_199;
  void *local_198 [2];
  char local_181;
  undefined8 local_180;
  undefined8 **local_178;
  undefined8 uStack_170;
  long local_168;
  undefined8 **local_160 [2];
  char local_149;
  undefined1 auStack_148 [256];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012cfa8(local_160);
  pppuVar1 = (undefined8 ***)local_160[0];
  if (-1 < local_149) {
    pppuVar1 = local_160;
  }
  FUN_1004d2cc8(auStack_148,pppuVar1);
  if (param_1 != (undefined4 *)0x0) {
    uVar3 = FUN_1004d2d48(0xbf800000,auStack_148,"Settings","sound");
    *param_1 = uVar3;
  }
  if (param_2 != (undefined4 *)0x0) {
    uVar3 = FUN_1004d2d48(0xbf800000,auStack_148,"Settings","music");
    *param_2 = uVar3;
  }
  if (param_3 != (undefined4 *)0x0) {
    local_178 = (undefined8 ***)0x0;
    uStack_170 = 0;
    local_168 = 0;
    local_180 = 0;
    FUN_10001549c(local_1b0,"Settings");
    FUN_10001549c(local_1c8,"resolution");
    FUN_10001549c(local_1e0,"1334x750");
    FUN_1004d2e64(local_198,auStack_148,local_1b0,local_1c8,local_1e0);
    std::string::operator=((string *)&local_178,(string *)local_198);
    if (local_181 < '\0') {
      operator_delete(local_198[0]);
    }
    if (local_1c9 < '\0') {
      operator_delete(local_1e0[0]);
    }
    if (local_1b1 < '\0') {
      operator_delete(local_1c8[0]);
    }
    if (local_199 < '\0') {
      operator_delete(local_1b0[0]);
    }
    pppuVar1 = (undefined8 ***)local_178;
    if (-1 < local_168) {
      pppuVar1 = &local_178;
    }
    iVar2 = FUN_1004d2864(pppuVar1,"%dx%d");
    if (iVar2 == 2) {
      *param_3 = local_180._4_4_;
      param_3[1] = (undefined4)local_180;
    }
    if (local_168 < 0) {
      operator_delete(local_178);
    }
  }
  if (local_149 < '\0') {
    operator_delete(local_160[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012e118(string *param_1,string *param_2,string *param_3,string *param_4,string *param_5,
                  string *param_6)

{
  size_t sVar1;
  undefined8 ****ppppuVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  void *local_240 [2];
  char local_229;
  void *local_228 [2];
  char local_211;
  void *local_210 [2];
  char local_1f9;
  void *local_1f8 [2];
  char local_1e1;
  undefined8 ***local_1e0;
  size_t local_1d8;
  byte local_1c9;
  undefined8 ***local_1c8;
  size_t local_1c0;
  byte local_1b1;
  undefined8 ***local_1b0;
  size_t local_1a8;
  byte local_199;
  undefined8 ***local_198;
  size_t local_190;
  byte local_181;
  undefined8 ***local_180 [2];
  char local_169;
  undefined1 auStack_168 [256];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012cfa8(local_180);
  ppppuVar2 = (undefined8 ****)local_180[0];
  if (-1 < local_169) {
    ppppuVar2 = local_180;
  }
  FUN_1004d2cc8(auStack_168,ppppuVar2);
  FUN_10003330c(&local_198,&DAT_101d91198);
  FUN_10003330c(&local_1b0,&DAT_101d91198);
  FUN_10003330c(&local_1c8,&DAT_101d91198);
  FUN_10003330c(&local_1e0,&DAT_101d91198);
  if (param_2 != (string *)0x0) {
    uVar5 = FUN_10015d3ec();
    FUN_10001549c(local_1f8,"newsUrl");
    FUN_1001649d4(uVar5,local_1f8,&local_198);
    if (local_1e1 < '\0') {
      operator_delete(local_1f8[0]);
    }
  }
  if (param_3 != (string *)0x0) {
    uVar5 = FUN_10015d3ec();
    FUN_10001549c(local_1f8,"academyUrl");
    FUN_1001649d4(uVar5,local_1f8,&local_1b0);
    if (local_1e1 < '\0') {
      operator_delete(local_1f8[0]);
    }
  }
  if (param_4 != (string *)0x0) {
    uVar5 = FUN_10015d3ec();
    FUN_10001549c(local_1f8,"marketUrl");
    FUN_1001649d4(uVar5,local_1f8,&local_1c8);
    if (local_1e1 < '\0') {
      operator_delete(local_1f8[0]);
    }
  }
  if (param_6 != (string *)0x0) {
    uVar5 = FUN_10015d3ec();
    FUN_10001549c(local_1f8,"staticContentUrl");
    FUN_1001649d4(uVar5,local_1f8,&local_1e0);
    if (local_1e1 < '\0') {
      operator_delete(local_1f8[0]);
    }
  }
  if (param_1 != (string *)0x0) {
    FUN_10001549c(local_210,"Updates");
    FUN_10001549c(local_228,"appurl");
    FUN_10001549c(local_240,"https://itunes.apple.com/app/vainglory/id671464704");
    FUN_1004d2e64(local_1f8,auStack_168,local_210,local_228,local_240);
    std::string::operator=(param_1,(string *)local_1f8);
    if (local_1e1 < '\0') {
      operator_delete(local_1f8[0]);
    }
    if (local_229 < '\0') {
      operator_delete(local_240[0]);
    }
    if (local_211 < '\0') {
      operator_delete(local_228[0]);
    }
    if (local_1f9 < '\0') {
      operator_delete(local_210[0]);
    }
  }
  if (param_5 != (string *)0x0) {
    FUN_10001549c(local_1f8,"http://gamefeeds.superevilmegacorp.net/server-status-redirect.[LANG]");
    std::string::operator=(param_5,(string *)local_1f8);
    if (local_1e1 < '\0') {
      operator_delete(local_1f8[0]);
    }
  }
  if (param_2 == (string *)0x0) goto LAB_10012e420;
  uVar6 = (ulong)local_181;
  if (-1 < (char)local_181) {
    local_190 = uVar6;
  }
  sVar1 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar1 = (ulong)DAT_101d911a8._7_1_;
  }
  if (local_190 == sVar1) {
    ppppuVar2 = (undefined8 ****)local_198;
    if (-1 < (char)local_181) {
      ppppuVar2 = &local_198;
    }
    pbVar8 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar8 = (byte *)&DAT_101d91198;
    }
    if ((char)local_181 < '\0') {
      if ((local_190 != 0) && (iVar4 = _memcmp(ppppuVar2,pbVar8,local_190), iVar4 != 0))
      goto LAB_10012e414;
    }
    else if (local_190 != 0) {
      if ((uint)*pbVar8 == ((uint)local_198 & 0xff)) {
        pbVar7 = (byte *)((ulong)&local_198 | 1);
        do {
          uVar6 = uVar6 - 1;
          pbVar8 = pbVar8 + 1;
          if (uVar6 == 0) goto LAB_10012e420;
          bVar3 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar3 == *pbVar8);
      }
      goto LAB_10012e414;
    }
  }
  else {
LAB_10012e414:
    std::string::operator=(param_2,(string *)&local_198);
  }
LAB_10012e420:
  if (param_3 == (string *)0x0) goto LAB_10012e4cc;
  uVar6 = (ulong)local_199;
  if (-1 < (char)local_199) {
    local_1a8 = uVar6;
  }
  sVar1 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar1 = (ulong)DAT_101d911a8._7_1_;
  }
  if (local_1a8 == sVar1) {
    ppppuVar2 = (undefined8 ****)local_1b0;
    if (-1 < (char)local_199) {
      ppppuVar2 = &local_1b0;
    }
    pbVar8 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar8 = (byte *)&DAT_101d91198;
    }
    if ((char)local_199 < '\0') {
      if ((local_1a8 != 0) && (iVar4 = _memcmp(ppppuVar2,pbVar8,local_1a8), iVar4 != 0))
      goto LAB_10012e4c0;
    }
    else if (local_1a8 != 0) {
      if ((uint)*pbVar8 == ((uint)local_1b0 & 0xff)) {
        pbVar7 = (byte *)((ulong)&local_1b0 | 1);
        do {
          uVar6 = uVar6 - 1;
          pbVar8 = pbVar8 + 1;
          if (uVar6 == 0) goto LAB_10012e4cc;
          bVar3 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar3 == *pbVar8);
      }
      goto LAB_10012e4c0;
    }
  }
  else {
LAB_10012e4c0:
    std::string::operator=(param_3,(string *)&local_1b0);
  }
LAB_10012e4cc:
  if (param_4 == (string *)0x0) goto LAB_10012e578;
  uVar6 = (ulong)local_1b1;
  if (-1 < (char)local_1b1) {
    local_1c0 = uVar6;
  }
  sVar1 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar1 = (ulong)DAT_101d911a8._7_1_;
  }
  if (local_1c0 == sVar1) {
    ppppuVar2 = (undefined8 ****)local_1c8;
    if (-1 < (char)local_1b1) {
      ppppuVar2 = &local_1c8;
    }
    pbVar8 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar8 = (byte *)&DAT_101d91198;
    }
    if ((char)local_1b1 < '\0') {
      if ((local_1c0 != 0) && (iVar4 = _memcmp(ppppuVar2,pbVar8,local_1c0), iVar4 != 0))
      goto LAB_10012e56c;
    }
    else if (local_1c0 != 0) {
      if ((uint)*pbVar8 == ((uint)local_1c8 & 0xff)) {
        pbVar7 = (byte *)((ulong)&local_1c8 | 1);
        do {
          uVar6 = uVar6 - 1;
          pbVar8 = pbVar8 + 1;
          if (uVar6 == 0) goto LAB_10012e578;
          bVar3 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar3 == *pbVar8);
      }
      goto LAB_10012e56c;
    }
  }
  else {
LAB_10012e56c:
    std::string::operator=(param_4,(string *)&local_1c8);
  }
LAB_10012e578:
  if (param_6 == (string *)0x0) goto LAB_10012e624;
  uVar6 = (ulong)local_1c9;
  if (-1 < (char)local_1c9) {
    local_1d8 = uVar6;
  }
  sVar1 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar1 = (ulong)DAT_101d911a8._7_1_;
  }
  if (local_1d8 == sVar1) {
    ppppuVar2 = (undefined8 ****)local_1e0;
    if (-1 < (char)local_1c9) {
      ppppuVar2 = &local_1e0;
    }
    pbVar8 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar8 = (byte *)&DAT_101d91198;
    }
    if ((char)local_1c9 < '\0') {
      if ((local_1d8 == 0) || (iVar4 = _memcmp(ppppuVar2,pbVar8,local_1d8), iVar4 == 0))
      goto LAB_10012e624;
    }
    else {
      if (local_1d8 == 0) goto LAB_10012e624;
      if ((uint)*pbVar8 == ((uint)local_1e0 & 0xff)) {
        pbVar7 = (byte *)((ulong)&local_1e0 | 1);
        do {
          uVar6 = uVar6 - 1;
          pbVar8 = pbVar8 + 1;
          if (uVar6 == 0) goto LAB_10012e624;
          bVar3 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar3 == *pbVar8);
      }
    }
  }
  std::string::operator=(param_6,(string *)&local_1e0);
LAB_10012e624:
  if ((((param_2 != (string *)0x0) || (param_3 != (string *)0x0)) || (param_4 != (string *)0x0)) ||
     (param_5 != (string *)0x0)) {
    if (param_2 != (string *)0x0) {
      FUN_10012e6f0(param_2);
    }
    if (param_3 != (string *)0x0) {
      FUN_10012e6f0(param_3);
    }
    if (param_4 != (string *)0x0) {
      FUN_10012e6f0(param_4);
    }
    if (param_5 != (string *)0x0) {
      FUN_10012e6f0(param_5);
    }
  }
  if ((char)local_1c9 < '\0') {
    operator_delete(local_1e0);
  }
  if ((char)local_1b1 < '\0') {
    operator_delete(local_1c8);
  }
  if ((char)local_199 < '\0') {
    operator_delete(local_1b0);
  }
  if ((char)local_181 < '\0') {
    operator_delete(local_198);
  }
  if (local_169 < '\0') {
    operator_delete(local_180[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10012e9ac(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined1 *param_7,undefined1 *param_8)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0x3f800000;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0x3f800000;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0x3f800000;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0x42c80000;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = 0;
  }
  if (param_8 != (undefined1 *)0x0) {
    *param_8 = 0;
  }
  return;
}




char * FUN_10012ea00(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_100126d70();
  if (iVar1 - 1U < 0x10) {
    pcVar2 = (&PTR_s_de_10145a5e0)[(int)(iVar1 - 1U)];
  }
  else {
    pcVar2 = "en";
  }
  return pcVar2;
}




void FUN_10012ea38(undefined8 *param_1)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  void *local_1d8 [2];
  char local_1c1;
  undefined8 **local_1c0 [2];
  char local_1a9;
  void *local_1a8 [2];
  char local_191;
  void *local_190 [2];
  char local_179;
  undefined8 **local_178 [2];
  char local_161;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_178);
  pppuVar1 = (undefined8 ***)local_178[0];
  if (-1 < local_161) {
    pppuVar1 = local_178;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  if (local_161 < '\0') {
    operator_delete(local_178[0]);
  }
  FUN_100102450(local_178,"%lld");
  FUN_10001549c(local_190,"feedTabLastVisited_");
  puVar2 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    puVar2 = param_1;
  }
  std::string::append((char *)local_190,(ulong)puVar2);
  FUN_10012c538(local_1c0);
  pppuVar1 = (undefined8 ***)local_1c0[0];
  if (-1 < local_1a9) {
    pppuVar1 = local_1c0;
  }
  FUN_10001549c(local_1a8,pppuVar1);
  FUN_10001549c(local_1d8,local_178);
  FUN_1004d2f00(auStack_138,local_1a8,local_190,local_1d8);
  if (local_1c1 < '\0') {
    operator_delete(local_1d8[0]);
  }
  if (local_191 < '\0') {
    operator_delete(local_1a8[0]);
  }
  if (local_1a9 < '\0') {
    operator_delete(local_1c0[0]);
  }
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void * FUN_10012eb90(undefined8 *param_1)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *local_1b0 [2];
  char local_199;
  undefined8 **local_198 [2];
  char local_181;
  void *local_180 [2];
  char local_169;
  undefined8 **local_168 [2];
  char local_151;
  undefined8 **local_150 [2];
  char local_139;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_150);
  pppuVar1 = (undefined8 ***)local_150[0];
  if (-1 < local_139) {
    pppuVar1 = local_150;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  if (local_139 < '\0') {
    operator_delete(local_150[0]);
  }
  FUN_10001549c(local_150,"feedTabLastVisited_");
  puVar2 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    puVar2 = param_1;
  }
  std::string::append((char *)local_150,(ulong)puVar2);
  FUN_10012c538(local_198);
  pppuVar1 = (undefined8 ***)local_198[0];
  if (-1 < local_181) {
    pppuVar1 = local_198;
  }
  FUN_10001549c(local_180,pppuVar1);
  FUN_10001549c(local_1b0,"0");
  FUN_1004d2e64(local_168,auStack_138,local_180,local_150,local_1b0);
  if (local_199 < '\0') {
    operator_delete(local_1b0[0]);
  }
  if (local_169 < '\0') {
    operator_delete(local_180[0]);
  }
  if (local_181 < '\0') {
    operator_delete(local_198[0]);
  }
  pppuVar1 = (undefined8 ***)local_168[0];
  if (-1 < local_151) {
    pppuVar1 = local_168;
  }
  FUN_1004d2864(pppuVar1,"%lld");
  if (local_180[0] == (void *)0x0) {
    local_180[0] = (void *)FUN_1004f1a74(0);
  }
  pvVar3 = local_180[0];
  if (local_151 < '\0') {
    operator_delete(local_168[0]);
  }
  if (local_139 < '\0') {
    operator_delete(local_150[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pvVar3;
}




void FUN_10012ed2c(void)

{
  undefined8 ***pppuVar1;
  void *local_1d8 [2];
  char local_1c1;
  undefined8 **local_1c0 [2];
  char local_1a9;
  void *local_1a8 [2];
  char local_191;
  void *local_190 [2];
  char local_179;
  undefined8 **local_178 [2];
  char local_161;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_178);
  pppuVar1 = (undefined8 ***)local_178[0];
  if (-1 < local_161) {
    pppuVar1 = local_178;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  if (local_161 < '\0') {
    operator_delete(local_178[0]);
  }
  FUN_100102450(local_178,"%lld");
  FUN_10001549c(local_190,"eventsPopupLastVisited");
  FUN_10012c538(local_1c0);
  pppuVar1 = (undefined8 ***)local_1c0[0];
  if (-1 < local_1a9) {
    pppuVar1 = local_1c0;
  }
  FUN_10001549c(local_1a8,pppuVar1);
  FUN_10001549c(local_1d8,local_178);
  FUN_1004d2f00(auStack_138,local_1a8,local_190,local_1d8);
  if (local_1c1 < '\0') {
    operator_delete(local_1d8[0]);
  }
  if (local_191 < '\0') {
    operator_delete(local_1a8[0]);
  }
  if (local_1a9 < '\0') {
    operator_delete(local_1c0[0]);
  }
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void * FUN_10012ee60(void)

{
  undefined8 ***pppuVar1;
  void *pvVar2;
  void *local_1a0 [2];
  char local_189;
  undefined8 **local_188 [2];
  char local_171;
  void *local_170 [2];
  char local_159;
  undefined8 **local_158 [2];
  char local_141;
  undefined8 **local_140 [2];
  char local_129;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_140);
  pppuVar1 = (undefined8 ***)local_140[0];
  if (-1 < local_129) {
    pppuVar1 = local_140;
  }
  FUN_1004d2cc8(auStack_128,pppuVar1);
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  FUN_10001549c(local_140,"eventsPopupLastVisited");
  FUN_10012c538(local_188);
  pppuVar1 = (undefined8 ***)local_188[0];
  if (-1 < local_171) {
    pppuVar1 = local_188;
  }
  FUN_10001549c(local_170,pppuVar1);
  FUN_10001549c(local_1a0,"0");
  FUN_1004d2e64(local_158,auStack_128,local_170,local_140,local_1a0);
  if (local_189 < '\0') {
    operator_delete(local_1a0[0]);
  }
  if (local_159 < '\0') {
    operator_delete(local_170[0]);
  }
  if (local_171 < '\0') {
    operator_delete(local_188[0]);
  }
  pppuVar1 = (undefined8 ***)local_158[0];
  if (-1 < local_141) {
    pppuVar1 = local_158;
  }
  FUN_1004d2864(pppuVar1,"%lld");
  if (local_170[0] == (void *)0x0) {
    local_170[0] = (void *)FUN_1004f1a74(0);
  }
  pvVar2 = local_170[0];
  if (local_141 < '\0') {
    operator_delete(local_158[0]);
  }
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012efd0(undefined8 *param_1)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  void *local_1d8 [2];
  char local_1c1;
  undefined8 **local_1c0 [2];
  char local_1a9;
  void *local_1a8 [2];
  char local_191;
  void *local_190 [2];
  char local_179;
  undefined8 **local_178 [2];
  char local_161;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_178);
  pppuVar1 = (undefined8 ***)local_178[0];
  if (-1 < local_161) {
    pppuVar1 = local_178;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  if (local_161 < '\0') {
    operator_delete(local_178[0]);
  }
  FUN_100102450(local_178,"%d");
  FUN_10001549c(local_190,"talentUpgradeVisited_");
  puVar2 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    puVar2 = param_1;
  }
  std::string::append((char *)local_190,(ulong)puVar2);
  FUN_10012c538(local_1c0);
  pppuVar1 = (undefined8 ***)local_1c0[0];
  if (-1 < local_1a9) {
    pppuVar1 = local_1c0;
  }
  FUN_10001549c(local_1a8,pppuVar1);
  FUN_10001549c(local_1d8,local_178);
  FUN_1004d2f00(auStack_138,local_1a8,local_190,local_1d8);
  if (local_1c1 < '\0') {
    operator_delete(local_1d8[0]);
  }
  if (local_191 < '\0') {
    operator_delete(local_1a8[0]);
  }
  if (local_1a9 < '\0') {
    operator_delete(local_1c0[0]);
  }
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




bool FUN_10012f12c(undefined8 *param_1)

{
  undefined8 ****ppppuVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  void *local_1b0 [2];
  char local_199;
  undefined8 ***local_198 [2];
  char local_181;
  void *local_180 [2];
  char local_169;
  void *local_168;
  ulong local_160;
  byte local_151;
  undefined8 ***local_150 [2];
  char local_139;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_150);
  ppppuVar1 = (undefined8 ****)local_150[0];
  if (-1 < local_139) {
    ppppuVar1 = local_150;
  }
  FUN_1004d2cc8(auStack_138,ppppuVar1);
  if (local_139 < '\0') {
    operator_delete(local_150[0]);
  }
  FUN_10001549c(local_150,"talentUpgradeVisited_");
  puVar2 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    puVar2 = param_1;
  }
  std::string::append((char *)local_150,(ulong)puVar2);
  FUN_10012c538(local_198);
  ppppuVar1 = (undefined8 ****)local_198[0];
  if (-1 < local_181) {
    ppppuVar1 = local_198;
  }
  FUN_10001549c(local_180,ppppuVar1);
  FUN_10001549c(local_1b0,"0");
  FUN_1004d2e64(&local_168,auStack_138,local_180,local_150,local_1b0);
  if (local_199 < '\0') {
    operator_delete(local_1b0[0]);
  }
  if (local_169 < '\0') {
    operator_delete(local_180[0]);
  }
  if (local_181 < '\0') {
    operator_delete(local_198[0]);
  }
  if (-1 < (char)local_151) {
    local_160 = (ulong)local_151;
  }
  if (local_160 == 1) {
    iVar4 = std::string::compare((ulong)&local_168,0,(char *)0xffffffffffffffff,0x1013d0b7e);
    bVar3 = iVar4 != 0;
    if (-1 < (char)local_151) goto LAB_10012f290;
  }
  else {
    bVar3 = true;
    if (((uint)(int)(char)local_151 >> 7 & 1) == 0) goto LAB_10012f290;
  }
  operator_delete(local_168);
LAB_10012f290:
  if (local_139 < '\0') {
    operator_delete(local_150[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012f2d4(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined8 **local_168 [2];
  char local_151;
  undefined8 **local_150 [2];
  char local_139;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_150);
  pppuVar1 = (undefined8 ***)local_150[0];
  if (-1 < local_139) {
    pppuVar1 = local_150;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_10012c538(local_168);
  pppuVar1 = (undefined8 ***)local_168[0];
  if (-1 < local_151) {
    pppuVar1 = local_168;
  }
  FUN_1004d2d74(auStack_138,pppuVar1,"firstGameKeyhole",param_1);
  if (local_151 < '\0') {
    operator_delete(local_168[0]);
  }
  if (local_139 < '\0') {
    operator_delete(local_150[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10012f3a0(void)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_158 [2];
  char local_141;
  undefined8 **local_140 [2];
  char local_129;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_140);
  pppuVar1 = (undefined8 ***)local_140[0];
  if (-1 < local_129) {
    pppuVar1 = local_140;
  }
  FUN_1004d2cc8(auStack_128,pppuVar1);
  FUN_10012c538(local_158);
  pppuVar1 = (undefined8 ***)local_158[0];
  if (-1 < local_141) {
    pppuVar1 = local_158;
  }
  uVar2 = FUN_1004d2cec(auStack_128,pppuVar1,"sizzleVideoSeen",0);
  if (local_141 < '\0') {
    operator_delete(local_158[0]);
  }
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012f468(void)

{
  undefined8 ***pppuVar1;
  undefined8 **local_158 [2];
  char local_141;
  undefined8 **local_140 [2];
  char local_129;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_140);
  pppuVar1 = (undefined8 ***)local_140[0];
  if (-1 < local_129) {
    pppuVar1 = local_140;
  }
  FUN_1004d2cc8(auStack_128,pppuVar1);
  FUN_10012c538(local_158);
  pppuVar1 = (undefined8 ***)local_158[0];
  if (-1 < local_141) {
    pppuVar1 = local_158;
  }
  FUN_1004d2d74(auStack_128,pppuVar1,"sizzleVideoSeen",1);
  if (local_141 < '\0') {
    operator_delete(local_158[0]);
  }
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10012f528(void)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_158 [2];
  char local_141;
  undefined8 **local_140 [2];
  char local_129;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_140);
  pppuVar1 = (undefined8 ***)local_140[0];
  if (-1 < local_129) {
    pppuVar1 = local_140;
  }
  FUN_1004d2cc8(auStack_128,pppuVar1);
  FUN_10012c538(local_158);
  pppuVar1 = (undefined8 ***)local_158[0];
  if (-1 < local_141) {
    pppuVar1 = local_158;
  }
  uVar2 = FUN_1004d2cec(auStack_128,pppuVar1,"firstLaunchCompleted",0);
  if (local_141 < '\0') {
    operator_delete(local_158[0]);
  }
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012f5f0(void)

{
  undefined8 ***pppuVar1;
  undefined8 **local_158 [2];
  char local_141;
  undefined8 **local_140 [2];
  char local_129;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_140);
  pppuVar1 = (undefined8 ***)local_140[0];
  if (-1 < local_129) {
    pppuVar1 = local_140;
  }
  FUN_1004d2cc8(auStack_128,pppuVar1);
  FUN_10012c538(local_158);
  pppuVar1 = (undefined8 ***)local_158[0];
  if (-1 < local_141) {
    pppuVar1 = local_158;
  }
  FUN_1004d2d74(auStack_128,pppuVar1,"starFollowTutorialSeen",1);
  if (local_141 < '\0') {
    operator_delete(local_158[0]);
  }
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10012f6b0(void)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_158 [2];
  char local_141;
  undefined8 **local_140 [2];
  char local_129;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_140);
  pppuVar1 = (undefined8 ***)local_140[0];
  if (-1 < local_129) {
    pppuVar1 = local_140;
  }
  FUN_1004d2cc8(auStack_128,pppuVar1);
  FUN_10012c538(local_158);
  pppuVar1 = (undefined8 ***)local_158[0];
  if (-1 < local_141) {
    pppuVar1 = local_158;
  }
  uVar2 = FUN_1004d2cec(auStack_128,pppuVar1,"starFollowTutorialSeen",0);
  if (local_141 < '\0') {
    operator_delete(local_158[0]);
  }
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012f778(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined8 **local_168 [2];
  char local_151;
  undefined8 **local_150 [2];
  char local_139;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_150);
  pppuVar1 = (undefined8 ***)local_150[0];
  if (-1 < local_139) {
    pppuVar1 = local_150;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_10012c538(local_168);
  pppuVar1 = (undefined8 ***)local_168[0];
  if (-1 < local_151) {
    pppuVar1 = local_168;
  }
  FUN_1004d2d74(auStack_138,pppuVar1,"tutorialCompletePopupShown",param_1);
  if (local_151 < '\0') {
    operator_delete(local_168[0]);
  }
  if (local_139 < '\0') {
    operator_delete(local_150[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10012f844(void)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_158 [2];
  char local_141;
  undefined8 **local_140 [2];
  char local_129;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_140);
  pppuVar1 = (undefined8 ***)local_140[0];
  if (-1 < local_129) {
    pppuVar1 = local_140;
  }
  FUN_1004d2cc8(auStack_128,pppuVar1);
  FUN_10012c538(local_158);
  pppuVar1 = (undefined8 ***)local_158[0];
  if (-1 < local_141) {
    pppuVar1 = local_158;
  }
  uVar2 = FUN_1004d2cec(auStack_128,pppuVar1,"tutorialCompletePopupShown",0);
  if (local_141 < '\0') {
    operator_delete(local_158[0]);
  }
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012f90c(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined8 **local_168 [2];
  char local_151;
  undefined8 **local_150 [2];
  char local_139;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_150);
  pppuVar1 = (undefined8 ***)local_150[0];
  if (-1 < local_139) {
    pppuVar1 = local_150;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_10012c538(local_168);
  pppuVar1 = (undefined8 ***)local_168[0];
  if (-1 < local_151) {
    pppuVar1 = local_168;
  }
  FUN_1004d2d74(auStack_138,pppuVar1,"InGameReminderSettingsPopupShown",param_1);
  if (local_151 < '\0') {
    operator_delete(local_168[0]);
  }
  if (local_139 < '\0') {
    operator_delete(local_150[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10012f9d8(void)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_158 [2];
  char local_141;
  undefined8 **local_140 [2];
  char local_129;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_140);
  pppuVar1 = (undefined8 ***)local_140[0];
  if (-1 < local_129) {
    pppuVar1 = local_140;
  }
  FUN_1004d2cc8(auStack_128,pppuVar1);
  FUN_10012c538(local_158);
  pppuVar1 = (undefined8 ***)local_158[0];
  if (-1 < local_141) {
    pppuVar1 = local_158;
  }
  uVar2 = FUN_1004d2cec(auStack_128,pppuVar1,"InGameReminderSettingsPopupShown",0);
  if (local_141 < '\0') {
    operator_delete(local_158[0]);
  }
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012faa0(void)

{
  undefined8 ***pppuVar1;
  void *local_1f0 [2];
  char local_1d9;
  undefined8 **local_1d8 [2];
  char local_1c1;
  void *local_1c0 [2];
  char local_1a9;
  void *local_1a8 [2];
  char local_191;
  undefined8 **local_190 [2];
  char local_179;
  undefined1 auStack_178 [64];
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_190);
  pppuVar1 = (undefined8 ***)local_190[0];
  if (-1 < local_179) {
    pppuVar1 = local_190;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_100102450(auStack_178,"%lld");
  FUN_10001549c(local_1a8,auStack_178);
  FUN_10012c538(local_1d8);
  pppuVar1 = (undefined8 ***)local_1d8[0];
  if (-1 < local_1c1) {
    pppuVar1 = local_1d8;
  }
  FUN_10001549c(local_1c0,pppuVar1);
  FUN_10001549c(local_1f0,"lastAutoPresenceBroadcast");
  FUN_1004d2f00(auStack_138,local_1c0,local_1f0,local_1a8);
  if (local_1d9 < '\0') {
    operator_delete(local_1f0[0]);
  }
  if (local_1a9 < '\0') {
    operator_delete(local_1c0[0]);
  }
  if (local_1c1 < '\0') {
    operator_delete(local_1d8[0]);
  }
  if (local_191 < '\0') {
    operator_delete(local_1a8[0]);
  }
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void * FUN_10012fbd4(void)

{
  undefined8 ***pppuVar1;
  void *local_1b8 [2];
  char local_1a1;
  void *local_1a0 [2];
  char local_189;
  undefined8 **local_188 [2];
  char local_171;
  void *local_170 [2];
  char local_159;
  undefined8 **local_158 [2];
  char local_141;
  undefined8 **local_140 [2];
  char local_129;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_140);
  pppuVar1 = (undefined8 ***)local_140[0];
  if (-1 < local_129) {
    pppuVar1 = local_140;
  }
  FUN_1004d2cc8(auStack_128,pppuVar1);
  FUN_10012c538(local_188);
  pppuVar1 = (undefined8 ***)local_188[0];
  if (-1 < local_171) {
    pppuVar1 = local_188;
  }
  FUN_10001549c(local_170,pppuVar1);
  FUN_10001549c(local_1a0,"lastAutoPresenceBroadcast");
  FUN_10001549c(local_1b8,"0");
  FUN_1004d2e64(local_158,auStack_128,local_170,local_1a0,local_1b8);
  if (local_1a1 < '\0') {
    operator_delete(local_1b8[0]);
  }
  if (local_189 < '\0') {
    operator_delete(local_1a0[0]);
  }
  if (local_159 < '\0') {
    operator_delete(local_170[0]);
  }
  if (local_171 < '\0') {
    operator_delete(local_188[0]);
  }
  pppuVar1 = (undefined8 ***)local_158[0];
  if (-1 < local_141) {
    pppuVar1 = local_158;
  }
  FUN_1004d2864(pppuVar1,"%lld");
  if (local_141 < '\0') {
    operator_delete(local_158[0]);
  }
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return local_170[0];
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012fd30(void)

{
  undefined8 ***pppuVar1;
  void *local_1f0 [2];
  char local_1d9;
  undefined8 **local_1d8 [2];
  char local_1c1;
  void *local_1c0 [2];
  char local_1a9;
  void *local_1a8 [2];
  char local_191;
  undefined8 **local_190 [2];
  char local_179;
  undefined1 auStack_178 [64];
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_190);
  pppuVar1 = (undefined8 ***)local_190[0];
  if (-1 < local_179) {
    pppuVar1 = local_190;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_100102450(auStack_178,"%lld");
  FUN_10001549c(local_1a8,auStack_178);
  FUN_10012c538(local_1d8);
  pppuVar1 = (undefined8 ***)local_1d8[0];
  if (-1 < local_1c1) {
    pppuVar1 = local_1d8;
  }
  FUN_10001549c(local_1c0,pppuVar1);
  FUN_10001549c(local_1f0,"lastTivView");
  FUN_1004d2f00(auStack_138,local_1c0,local_1f0,local_1a8);
  if (local_1d9 < '\0') {
    operator_delete(local_1f0[0]);
  }
  if (local_1a9 < '\0') {
    operator_delete(local_1c0[0]);
  }
  if (local_1c1 < '\0') {
    operator_delete(local_1d8[0]);
  }
  if (local_191 < '\0') {
    operator_delete(local_1a8[0]);
  }
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void * FUN_10012fe64(void)

{
  undefined8 ***pppuVar1;
  void *local_1b8 [2];
  char local_1a1;
  void *local_1a0 [2];
  char local_189;
  undefined8 **local_188 [2];
  char local_171;
  void *local_170 [2];
  char local_159;
  undefined8 **local_158 [2];
  char local_141;
  undefined8 **local_140 [2];
  char local_129;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_140);
  pppuVar1 = (undefined8 ***)local_140[0];
  if (-1 < local_129) {
    pppuVar1 = local_140;
  }
  FUN_1004d2cc8(auStack_128,pppuVar1);
  FUN_10012c538(local_188);
  pppuVar1 = (undefined8 ***)local_188[0];
  if (-1 < local_171) {
    pppuVar1 = local_188;
  }
  FUN_10001549c(local_170,pppuVar1);
  FUN_10001549c(local_1a0,"lastTivView");
  FUN_10001549c(local_1b8,"0");
  FUN_1004d2e64(local_158,auStack_128,local_170,local_1a0,local_1b8);
  if (local_1a1 < '\0') {
    operator_delete(local_1b8[0]);
  }
  if (local_189 < '\0') {
    operator_delete(local_1a0[0]);
  }
  if (local_159 < '\0') {
    operator_delete(local_170[0]);
  }
  if (local_171 < '\0') {
    operator_delete(local_188[0]);
  }
  pppuVar1 = (undefined8 ***)local_158[0];
  if (-1 < local_141) {
    pppuVar1 = local_158;
  }
  FUN_1004d2864(pppuVar1,"%lld");
  if (local_141 < '\0') {
    operator_delete(local_158[0]);
  }
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return local_170[0];
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10012ffc0(void)

{
  undefined8 ***pppuVar1;
  void *local_1f0 [2];
  char local_1d9;
  undefined8 **local_1d8 [2];
  char local_1c1;
  void *local_1c0 [2];
  char local_1a9;
  void *local_1a8 [2];
  char local_191;
  undefined8 **local_190 [2];
  char local_179;
  undefined1 auStack_178 [64];
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_190);
  pppuVar1 = (undefined8 ***)local_190[0];
  if (-1 < local_179) {
    pppuVar1 = local_190;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_100102450(auStack_178,"%lld");
  FUN_10001549c(local_1a8,auStack_178);
  FUN_10012c538(local_1d8);
  pppuVar1 = (undefined8 ***)local_1d8[0];
  if (-1 < local_1c1) {
    pppuVar1 = local_1d8;
  }
  FUN_10001549c(local_1c0,pppuVar1);
  FUN_10001549c(local_1f0,"lastManualPresenceBroadcast");
  FUN_1004d2f00(auStack_138,local_1c0,local_1f0,local_1a8);
  if (local_1d9 < '\0') {
    operator_delete(local_1f0[0]);
  }
  if (local_1a9 < '\0') {
    operator_delete(local_1c0[0]);
  }
  if (local_1c1 < '\0') {
    operator_delete(local_1d8[0]);
  }
  if (local_191 < '\0') {
    operator_delete(local_1a8[0]);
  }
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined1 thunk_FUN_100126ad4(void)

{
  if ((DAT_101e3a0a4 & 1) == 0) {
    FUN_100126050();
  }
  return (undefined1)DAT_101e3a074;
}




void thunk_FUN_10012dd60(void)

{
  undefined8 ***pppuVar1;
  int iVar2;
  ulong uVar3;
  undefined8 **appuStack_168 [2];
  char cStack_151;
  undefined8 **appuStack_150 [2];
  char cStack_139;
  undefined1 auStack_138 [256];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = FUN_10052b78c();
  if ((uVar3 & 1) == 0) {
    FUN_10012c414(appuStack_150);
    pppuVar1 = (undefined8 ***)appuStack_150[0];
    if (-1 < cStack_139) {
      pppuVar1 = appuStack_150;
    }
    FUN_1004d2cc8(auStack_138,pppuVar1);
    FUN_10012c538(appuStack_168);
    pppuVar1 = (undefined8 ***)appuStack_168[0];
    if (-1 < cStack_151) {
      pppuVar1 = appuStack_168;
    }
    FUN_1004d2e08(auStack_138,pppuVar1,"username","");
    pppuVar1 = (undefined8 ***)appuStack_168[0];
    if (-1 < cStack_151) {
      pppuVar1 = appuStack_168;
    }
    FUN_1004d2e08(auStack_138,pppuVar1,"password","");
    iVar2 = FUN_10052b464();
    if (iVar2 != 0) {
      pppuVar1 = (undefined8 ***)appuStack_168[0];
      if (-1 < cStack_151) {
        pppuVar1 = appuStack_168;
      }
      FUN_10052b53c("password",pppuVar1);
    }
    if (cStack_151 < '\0') {
      operator_delete(appuStack_168[0]);
    }
    if (cStack_139 < '\0') {
      operator_delete(appuStack_150[0]);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void thunk_FUN_100120c08(void)

{
  undefined1 auStack_18 [8];
  
  auStack_18[0] = 0;
  FUN_100120c30(auStack_18,0);
  return;
}




void thunk_FUN_100120e18(void)

{
  undefined1 auStack_18 [8];
  
  auStack_18[0] = 0;
  FUN_100120e40(auStack_18,0);
  return;
}




void thunk_FUN_10012048c(void)

{
  undefined1 auStack_18 [8];
  
  auStack_18[0] = 0;
  FUN_1001204b4(auStack_18,0);
  return;
}




undefined8 thunk_FUN_10012cf04(void)

{
  return 1;
}




undefined8 thunk_FUN_10012cf04(void)

{
  return 1;
}




undefined8 thunk_FUN_10012cf04(void)

{
  return 1;
}




undefined8 thunk_FUN_10012cf04(void)

{
  return 1;
}

