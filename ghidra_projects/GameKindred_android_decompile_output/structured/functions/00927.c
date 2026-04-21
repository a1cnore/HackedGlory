// functions/00927 — 36 functions
#include "libGameKindred.h"




uint FUN_00927090(byte param_1)

{
  long lVar1;
  uint uVar2;
  byte local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_1 & 1;
  uVar2 = FUN_009270e8(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_009270e8(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x300;
  local_40[1] = 0xf703;
  local_3c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 5;
  }
  else {
    iVar3 = FUN_00ce2730(3);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,3,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_009271c0(undefined1 param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_1;
  uVar2 = FUN_00927214(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00927214(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x300;
  local_40[1] = 0x8504;
  local_3c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 5;
  }
  else {
    iVar3 = FUN_00ce2730(3);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,3,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_009272ec(undefined1 param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_1;
  uVar2 = FUN_00927340(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00927340(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x300;
  local_40[1] = 0x3604;
  local_3c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 5;
  }
  else {
    iVar3 = FUN_00ce2730(3);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,3,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00927418(undefined1 param_1,byte param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 local_2c;
  byte local_2b;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2b = param_2 & 1;
  local_2c = param_1;
  uVar2 = FUN_00927474(&local_2c,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00927474(undefined2 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [4];
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x400;
  local_40[1] = 0x1404;
  local_40[2] = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 6;
  }
  else {
    iVar3 = FUN_00ce2730(4);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,4,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_0092754c(void)

{
  long lVar1;
  uint uVar2;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = 0;
  uVar2 = FUN_009275a0(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_009275a0(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x300;
  local_40[1] = 0x6e04;
  local_3c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 5;
  }
  else {
    iVar3 = FUN_00ce2730(3);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,3,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00927678(void)

{
  long lVar1;
  uint uVar2;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = 0;
  uVar2 = FUN_009276cc(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_009276cc(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0x300;
  local_40[1] = 0x6d04;
  local_3c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 5;
  }
  else {
    iVar3 = FUN_00ce2730(3);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,3,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_009277a4(void)

{
  long lVar1;
  uint uVar2;
  uint local_30;
  byte local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00cedce4();
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_2c = FUN_009f1f70(0x1c);
  local_2c = local_2c & 1;
  uVar2 = FUN_00927810(&local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00927810(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  ushort local_44 [2];
  undefined4 uStack_40;
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = *(undefined1 *)(param_1 + 1);
  uStack_40 = *param_1;
  local_44[0] = 0x700;
  local_44[1] = 0x7104;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_44;
    uVar5 = 9;
  }
  else {
    iVar3 = FUN_00ce2730(7);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_48 = 0;
    FUN_00ce2768((ulong)local_44 | 2,7,auStack_4e + lVar2,&local_48);
    *puVar6 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009278ec(void)

{
  return 0;
}




undefined8 FUN_009278f4(void)

{
  return 0;
}




undefined8 FUN_009278fc(void)

{
  return 0;
}




uint FUN_00927904(uint param_1)

{
  long lVar1;
  uint uVar2;
  int local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = (param_1 & 1) << 0x18;
  uVar2 = FUN_00927960(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00927960(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined4 uStack_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_3c = *param_1;
  local_40[0] = 0x600;
  local_40[1] = 0x7504;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_40;
    uVar5 = 8;
  }
  else {
    iVar3 = FUN_00ce2730(6);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_44 = 0;
    FUN_00ce2768((ulong)local_40 | 2,6,auStack_4e + lVar2,&local_44);
    *puVar6 = (ushort)local_44 >> 8 | (ushort)local_44 << 8;
  }
  uVar4 = FUN_0094271c(puVar6,uVar5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00927a34(void)

{
  return 0;
}




undefined8 FUN_00927a3c(void)

{
  return 0;
}




undefined8 FUN_00927a44(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d01d20(auStack_50,*param_1,*(undefined1 *)(param_1 + 1),*(undefined1 *)((long)param_1 + 5));
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00927aac(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d07e9c(auStack_48,*param_1);
  local_30 = 1;
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00927b0c(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d019a8(auStack_48,*param_1);
  local_30 = 1;
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00927b6c(undefined4 *param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d002ac(auStack_50,*param_1,param_1[1]);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00927bcc(undefined1 *param_1)

{
  long lVar1;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 1);
  local_58 = *(undefined4 *)(param_1 + 5);
  uStack_5c = 0;
  FUN_00d0565c(auStack_50,*param_1,&local_60);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00927c40(undefined1 *param_1)

{
  long lVar1;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_68 = *(undefined8 *)(param_1 + 1);
  local_60 = *(undefined4 *)(param_1 + 9);
  FUN_00d05c64(auStack_58,*param_1,&local_68,param_1[0xd] == '\x01');
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00927cc0(undefined4 *param_1)

{
  long lVar1;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_68 = *(undefined8 *)(param_1 + 1);
  local_60 = param_1[3];
  FUN_00d0772c(auStack_58,*param_1,&local_68,*(char *)(param_1 + 4) == '\x01');
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00927d40(undefined1 *param_1)

{
  long lVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *(undefined8 *)(param_1 + 1);
  local_68 = *(undefined8 *)(param_1 + 9);
  FUN_009855cc(auStack_58,*param_1,&local_60,&local_68);
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00927db8(undefined4 *param_1)

{
  long lVar1;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 auStack_60 [24];
  undefined1 local_48;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_70 = *(undefined8 *)(param_1 + 2);
  local_68 = param_1[4];
  FUN_00d05850(auStack_60,*param_1,param_1[1],&local_70,0);
  local_48 = 1;
  FUN_00ce20fc(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00927e30(undefined1 *param_1)

{
  long lVar1;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_58 = *(undefined8 *)(param_1 + 1);
  FUN_00984790(auStack_50,*param_1,&local_58);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00927e9c(undefined1 *param_1)

{
  long lVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = *(undefined8 *)(param_1 + 1);
  local_68 = *(undefined8 *)(param_1 + 9);
  FUN_00984598(auStack_58,*param_1,&local_60,&local_68);
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00927f14(undefined1 *param_1)

{
  long lVar1;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_58 = *(undefined8 *)(param_1 + 1);
  FUN_00985b6c(auStack_50,*param_1,&local_58,param_1[9] != '\0');
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00927f8c(undefined1 *param_1)

{
  long lVar1;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  undefined1 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_58 = *(undefined8 *)(param_1 + 1);
  FUN_00985cc8(auStack_50,*param_1,&local_58);
  local_38 = 1;
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00927ff8(undefined4 *param_1)

{
  long lVar1;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 auStack_58 [24];
  undefined1 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_68 = *(undefined8 *)(param_1 + 1);
  local_60 = param_1[3];
  FUN_00d028e8(auStack_58,*param_1,&local_68);
  local_40 = 1;
  FUN_00ce20fc(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint thunk_FUN_0092754c(void)

{
  long lVar1;
  uint uVar2;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  auStack_30[0] = 0;
  uVar2 = FUN_009275a0(auStack_30,0);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

