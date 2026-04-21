// functions/00ce4 — 23 functions
#include "libGameKindred.h"




uint FUN_00ce40e0(uint param_1,uint param_2,uint param_3,uint param_4,undefined1 param_5,
                 undefined8 *param_6)

{
  long lVar1;
  uint uVar2;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  undefined1 local_38;
  undefined8 local_37;
  undefined4 local_2f;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_48 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_44 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  local_40 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
  uStack_3c = uVar2 >> 0x10 | uVar2 << 0x10;
  local_2f = *(undefined4 *)(param_6 + 1);
  local_37 = *param_6;
  local_38 = param_5;
  uVar2 = FUN_00ce415c(&local_48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce415c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort local_60;
  undefined1 auStack_5e [2];
  ushort local_5c [2];
  undefined8 uStack_58;
  undefined5 uStack_50;
  undefined3 local_4b;
  undefined5 uStack_48;
  undefined8 uStack_43;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_5c[0] = 0x1f00;
  local_5c[1] = 0x8b04;
  uStack_43 = *(undefined8 *)((long)param_1 + 0x15);
  uStack_48 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xd) >> 0x18);
  uStack_58 = *param_1;
  uStack_50 = (undefined5)param_1[1];
  local_4b = (undefined3)((ulong)param_1[1] >> 0x28);
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_5c;
    uVar5 = 0x21;
  }
  else {
    iVar3 = FUN_00ce2730(0x1f);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&local_60 + lVar2);
    _local_60 = 0;
    FUN_00ce2768((ulong)local_5c | 2,0x1f,auStack_5e + lVar2,&local_60);
    *puVar6 = local_60 >> 8 | local_60 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x8b04);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce4244(uint param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint local_30;
  uint uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_2c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce42a0(&local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce42a0(undefined8 *param_1,ulong param_2)

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
  undefined8 local_40;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_44[0] = 0xa00;
  local_44[1] = 0x4504;
  local_40 = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_44;
    uVar5 = 0xc;
  }
  else {
    iVar3 = FUN_00ce2730(10);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_48 = 0;
    FUN_00ce2768((ulong)local_44 | 2,10,auStack_4e + lVar2,&local_48);
    *puVar6 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x4504);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce4380(uint param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint local_30;
  uint uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_2c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce43dc(&local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce43dc(undefined8 *param_1,ulong param_2)

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
  undefined8 local_40;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_44[0] = 0xa00;
  local_44[1] = 0x4604;
  local_40 = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_44;
    uVar5 = 0xc;
  }
  else {
    iVar3 = FUN_00ce2730(10);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_48 = 0;
    FUN_00ce2768((ulong)local_44 | 2,10,auStack_4e + lVar2,&local_48);
    *puVar6 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x4604);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce44bc(uint param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint local_38;
  uint uStack_34;
  uint local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce4520(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce4520(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [2];
  undefined4 local_4c;
  ushort local_48 [2];
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48[0] = 0xe00;
  local_48[1] = 0x4704;
  local_3c = *(undefined4 *)(param_1 + 1);
  local_44 = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_48;
    uVar5 = 0x10;
  }
  else {
    iVar3 = FUN_00ce2730(0xe);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_4c = 0;
    FUN_00ce2768((ulong)local_48 | 2,0xe,auStack_4e + lVar2,&local_4c);
    *puVar6 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x4704);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce4608(uint param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint local_30;
  uint uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  uStack_2c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce4668(&local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce4668(undefined8 *param_1,ulong param_2)

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
  undefined8 local_40;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_44[0] = 0xa00;
  local_44[1] = 0x3304;
  local_40 = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_44;
    uVar5 = 0xc;
  }
  else {
    iVar3 = FUN_00ce2730(10);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_48 = 0;
    FUN_00ce2768((ulong)local_44 | 2,10,auStack_4e + lVar2,&local_48);
    *puVar6 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x3304);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce4748(uint param_1,uint param_2,undefined1 param_3,undefined1 param_4,byte param_5,
                 uint param_6)

{
  long lVar1;
  uint uVar2;
  uint local_38;
  uint uStack_34;
  uint local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  byte local_2a;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_6 & 0xff00ff00) >> 8 | (param_6 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_2a = param_5 & 1;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_2c = param_3;
  local_2b = param_4;
  uVar2 = FUN_00ce47c0(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce47c0(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort local_50;
  undefined1 auStack_4e [2];
  ushort local_4c [2];
  undefined7 uStack_48;
  undefined1 local_41;
  undefined7 uStack_40;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_4c[0] = 0x1100;
  local_4c[1] = 0x1c04;
  uStack_40 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 7) >> 8);
  uStack_48 = (undefined7)*param_1;
  local_41 = (undefined1)((ulong)*param_1 >> 0x38);
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_4c;
    uVar5 = 0x13;
  }
  else {
    iVar3 = FUN_00ce2730(0x11);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&local_50 + lVar2);
    _local_50 = 0;
    FUN_00ce2768((ulong)local_4c | 2,0x11,auStack_4e + lVar2,&local_50);
    *puVar6 = local_50 >> 8 | local_50 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x1c04);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce48a8(uint param_1,uint param_2,undefined1 param_3,byte param_4,byte param_5,
                 byte param_6)

{
  long lVar1;
  uint uVar2;
  uint local_38;
  uint uStack_34;
  undefined1 local_30;
  byte local_2f;
  byte local_2e;
  byte local_2d;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_2f = param_4 & 1;
  local_2e = param_5 & 1;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_2d = param_6 & 1;
  local_30 = param_3;
  uVar2 = FUN_00ce4924(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce4924(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_50;
  undefined1 auStack_4e [2];
  undefined4 local_4c;
  ushort local_48 [2];
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48[0] = 0xe00;
  local_48[1] = 0x1d04;
  local_3c = *(undefined4 *)(param_1 + 1);
  local_44 = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_48;
    uVar5 = 0x10;
  }
  else {
    iVar3 = FUN_00ce2730(0xe);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_4c = 0;
    FUN_00ce2768((ulong)local_48 | 2,0xe,auStack_4e + lVar2,&local_4c);
    *puVar6 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x1d04);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce4a0c(uint param_1,uint param_2,uint param_3,undefined1 param_4,uint param_5,
                 byte param_6)

{
  long lVar1;
  uint uVar2;
  uint local_38;
  uint uStack_34;
  uint local_30;
  ushort local_2c;
  undefined1 local_2a;
  byte local_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = (ushort)(param_5 >> 8) & 0xff | (ushort)((param_5 & 0xff00ff) << 8);
  local_29 = param_6 & 1;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_2a = param_4;
  uVar2 = FUN_00ce4a8c(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce4a8c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort local_50;
  undefined1 auStack_4e [2];
  ushort local_4c [2];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_4c[0] = 0x1200;
  local_4c[1] = 0x1e04;
  uStack_40 = param_1[1];
  local_48 = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_4c;
    uVar5 = 0x14;
  }
  else {
    iVar3 = FUN_00ce2730(0x12);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&local_50 + lVar2);
    _local_50 = 0;
    FUN_00ce2768((ulong)local_4c | 2,0x12,auStack_4e + lVar2,&local_50);
    *puVar6 = local_50 >> 8 | local_50 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x1e04);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce4b6c(uint param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint local_30;
  uint uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_2c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce4bc8(&local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce4bc8(undefined8 *param_1,ulong param_2)

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
  undefined8 local_40;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_44[0] = 0xa00;
  local_44[1] = 0x1f04;
  local_40 = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_44;
    uVar5 = 0xc;
  }
  else {
    iVar3 = FUN_00ce2730(10);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_48 = 0;
    FUN_00ce2768((ulong)local_44 | 2,10,auStack_4e + lVar2,&local_48);
    *puVar6 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x1f04);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce4ca8(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,undefined1 param_8)

{
  long lVar1;
  uint uVar2;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  undefined1 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_6 & 0xff00ff00) >> 8 | (param_6 & 0xff00ff) << 8;
  local_48 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_7 & 0xff00ff00) >> 8 | (param_7 & 0xff00ff) << 8;
  uStack_44 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_40 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_3c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_5 & 0xff00ff00) >> 8 | (param_5 & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_2c = param_8;
  uVar2 = FUN_00ce4d3c(&local_48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce4d3c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort local_60;
  undefined1 auStack_5e [2];
  ushort local_5c [2];
  undefined8 uStack_58;
  undefined5 uStack_50;
  undefined3 local_4b;
  undefined5 uStack_48;
  undefined8 uStack_43;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_5c[0] = 0x1f00;
  local_5c[1] = 0x2004;
  uStack_43 = *(undefined8 *)((long)param_1 + 0x15);
  uStack_48 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xd) >> 0x18);
  uStack_58 = *param_1;
  uStack_50 = (undefined5)param_1[1];
  local_4b = (undefined3)((ulong)param_1[1] >> 0x28);
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_5c;
    uVar5 = 0x21;
  }
  else {
    iVar3 = FUN_00ce2730(0x1f);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&local_60 + lVar2);
    _local_60 = 0;
    FUN_00ce2768((ulong)local_5c | 2,0x1f,auStack_5e + lVar2,&local_60);
    *puVar6 = local_60 >> 8 | local_60 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x2004);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce4e24(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 undefined1 param_7)

{
  long lVar1;
  uint uVar2;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
  local_48 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_5 & 0xff00ff00) >> 8 | (param_5 & 0xff00ff) << 8;
  uStack_44 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_6 & 0xff00ff00) >> 8 | (param_6 & 0xff00ff) << 8;
  local_40 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  uStack_3c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_30 = param_7;
  uVar2 = FUN_00ce4ea8(&local_48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce4ea8(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_60;
  undefined1 auStack_5e [2];
  undefined4 local_5c;
  ushort local_58 [2];
  undefined8 uStack_54;
  undefined1 uStack_4c;
  undefined7 local_4b;
  undefined1 uStack_44;
  undefined8 uStack_43;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58[0] = 0x1b00;
  local_58[1] = 0x2104;
  uStack_43 = *(undefined8 *)((long)param_1 + 0x11);
  uStack_44 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 9) >> 0x38);
  uStack_54 = *param_1;
  uStack_4c = (undefined1)param_1[1];
  local_4b = (undefined7)((ulong)param_1[1] >> 8);
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_58;
    uVar5 = 0x1d;
  }
  else {
    iVar3 = FUN_00ce2730(0x1b);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_60 + lVar2);
    local_5c = 0;
    FUN_00ce2768((ulong)local_58 | 2,0x1b,auStack_5e + lVar2,&local_5c);
    *puVar6 = (ushort)local_5c >> 8 | (ushort)local_5c << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x2104);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce4f90(uint param_1,uint param_2,uint *param_3,uint *param_4)

{
  long lVar1;
  uint uVar2;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_40 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_3c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_3[1] & 0xff00ff00) >> 8 | (param_3[1] & 0xff00ff) << 8;
  local_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (*param_4 & 0xff00ff00) >> 8 | (*param_4 & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_4[1] & 0xff00ff00) >> 8 | (param_4[1] & 0xff00ff) << 8;
  local_2c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce501c(&local_40,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

