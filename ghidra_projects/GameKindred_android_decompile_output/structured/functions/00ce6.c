// functions/00ce6 — 23 functions
#include "libGameKindred.h"




uint FUN_00ce603c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_60;
  undefined1 auStack_5e [6];
  undefined4 local_58;
  ushort local_54 [2];
  undefined8 local_50;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_54[0] = 0x1700;
  local_54[1] = 0x304;
  uStack_40 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xd) >> 0x18);
  local_50 = *param_1;
  uStack_48 = (undefined5)param_1[1];
  uStack_43 = (undefined3)((ulong)param_1[1] >> 0x28);
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_54;
    uVar5 = 0x19;
  }
  else {
    iVar3 = FUN_00ce2730(0x17);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_60 + lVar2);
    local_58 = 0;
    FUN_00ce2768((ulong)local_54 | 2,0x17,auStack_5e + lVar2,&local_58);
    *puVar6 = (ushort)local_58 >> 8 | (ushort)local_58 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x304);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce6124(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5,uint param_6)

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
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  local_48 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
  uStack_3c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_6 & 0xff00ff00) >> 8 | (param_6 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  uStack_44 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_40 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (*param_5 & 0xff00ff00) >> 8 | (*param_5 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_5[1] & 0xff00ff00) >> 8 | (param_5[1] & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_5[2] & 0xff00ff00) >> 8 | (param_5[2] & 0xff00ff) << 8;
  local_2c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce61bc(&local_48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce61bc(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort local_60;
  undefined1 auStack_5e [2];
  ushort local_5c [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_5c[0] = 0x2200;
  local_5c[1] = 0x604;
  uStack_40 = param_1[3];
  local_48 = param_1[2];
  uStack_50 = param_1[1];
  local_58 = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_5c;
    uVar5 = 0x24;
  }
  else {
    iVar3 = FUN_00ce2730(0x22);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&local_60 + lVar2);
    _local_60 = 0;
    FUN_00ce2768((ulong)local_5c | 2,0x22,auStack_5e + lVar2,&local_60);
    *puVar6 = local_60 >> 8 | local_60 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x604);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce62a4(uint param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  local_2c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce631c(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce631c(undefined8 *param_1,ulong param_2)

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
  local_4c[1] = 0x704;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x704);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce63fc(uint param_1,uint *param_2,byte param_3)

{
  long lVar1;
  uint uVar2;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  byte local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_40 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uStack_3c = uVar2 >> 0x10 | uVar2 << 0x10;
  local_30 = param_3 & 1;
  uVar2 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  local_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce647c(&local_40,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce647c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_60;
  undefined1 auStack_5e [10];
  undefined4 local_54;
  ushort local_50 [2];
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = 0x1300;
  local_50[1] = 0x904;
  local_3c = *(undefined1 *)(param_1 + 2);
  uStack_44 = param_1[1];
  local_4c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_50;
    uVar5 = 0x15;
  }
  else {
    iVar3 = FUN_00ce2730(0x13);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_60 + lVar2);
    local_54 = 0;
    FUN_00ce2768((ulong)local_50 | 2,0x13,auStack_5e + lVar2,&local_54);
    *puVar6 = (ushort)local_54 >> 8 | (ushort)local_54 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x904);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce6564(uint param_1,uint *param_2)

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
  uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce65d0(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce65d0(undefined8 *param_1,ulong param_2)

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
  local_48[1] = 0x2e04;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x2e04);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce66b8(uint param_1,undefined1 param_2)

{
  long lVar1;
  uint uVar2;
  uint local_30;
  undefined1 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_2c = param_2;
  uVar2 = FUN_00ce6714(&local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce6714(undefined4 *param_1,ulong param_2)

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
  local_44[1] = 0x1104;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x1104);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce67f8(uint *param_1,undefined1 param_2)

{
  long lVar1;
  uint uVar2;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined1 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  local_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_2c = param_2;
  uVar2 = FUN_00ce6870(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce6870(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort local_50;
  undefined1 auStack_4e [2];
  ushort local_4c [2];
  undefined5 uStack_48;
  undefined3 local_43;
  undefined5 uStack_40;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_4c[0] = 0xf00;
  local_4c[1] = 0x1204;
  uStack_40 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 5) >> 0x18);
  uStack_48 = (undefined5)*param_1;
  local_43 = (undefined3)((ulong)*param_1 >> 0x28);
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_4c;
    uVar5 = 0x11;
  }
  else {
    iVar3 = FUN_00ce2730(0xf);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&local_50 + lVar2);
    _local_50 = 0;
    FUN_00ce2768((ulong)local_4c | 2,0xf,auStack_4e + lVar2,&local_50);
    *puVar6 = local_50 >> 8 | local_50 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x1204);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce6958(uint param_1,uint *param_2,undefined1 param_3)

{
  long lVar1;
  uint uVar2;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_40 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uStack_3c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  local_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_30 = param_3;
  uVar2 = FUN_00ce69d4(&local_40,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce69d4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_60;
  undefined1 auStack_5e [10];
  undefined4 local_54;
  ushort local_50 [2];
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = 0x1300;
  local_50[1] = 0x1304;
  local_3c = *(undefined1 *)(param_1 + 2);
  uStack_44 = param_1[1];
  local_4c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_50;
    uVar5 = 0x15;
  }
  else {
    iVar3 = FUN_00ce2730(0x13);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_60 + lVar2);
    local_54 = 0;
    FUN_00ce2768((ulong)local_50 | 2,0x13,auStack_5e + lVar2,&local_54);
    *puVar6 = (ushort)local_54 >> 8 | (ushort)local_54 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x1304);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce6abc(uint param_1,uint param_2,undefined1 param_3)

{
  long lVar1;
  uint uVar2;
  uint local_38;
  uint uStack_34;
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_30 = param_3;
  uVar2 = FUN_00ce6b1c(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce6b1c(undefined8 *param_1,ulong param_2)

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
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48[0] = 0xb00;
  local_48[1] = 0x1504;
  local_3c = *(undefined1 *)(param_1 + 1);
  local_44 = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_48;
    uVar5 = 0xd;
  }
  else {
    iVar3 = FUN_00ce2730(0xb);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_4c = 0;
    FUN_00ce2768((ulong)local_48 | 2,0xb,auStack_4e + lVar2,&local_4c);
    *puVar6 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x1504);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce6c04(uint param_1,uint *param_2,undefined1 param_3)

{
  long lVar1;
  uint uVar2;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_40 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uStack_3c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  local_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_30 = param_3;
  uVar2 = FUN_00ce6c80(&local_40,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce6c80(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_60;
  undefined1 auStack_5e [10];
  undefined4 local_54;
  ushort local_50 [2];
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined1 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = 0x1300;
  local_50[1] = 0x1604;
  local_3c = *(undefined1 *)(param_1 + 2);
  uStack_44 = param_1[1];
  local_4c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_50;
    uVar5 = 0x15;
  }
  else {
    iVar3 = FUN_00ce2730(0x13);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_60 + lVar2);
    local_54 = 0;
    FUN_00ce2768((ulong)local_50 | 2,0x13,auStack_5e + lVar2,&local_54);
    *puVar6 = (ushort)local_54 >> 8 | (ushort)local_54 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x1604);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce6d68(uint param_1,uint param_2,uint *param_3,undefined1 param_4)

{
  long lVar1;
  uint uVar2;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined1 local_2c;
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
  uVar2 = (param_3[2] & 0xff00ff00) >> 8 | (param_3[2] & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_2c = param_4;
  uVar2 = FUN_00ce6dec(&local_40,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce6dec(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_60;
  undefined1 auStack_5e [6];
  undefined4 local_58;
  ushort local_54 [2];
  undefined8 local_50;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_54[0] = 0x1700;
  local_54[1] = 0x1704;
  uStack_40 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xd) >> 0x18);
  local_50 = *param_1;
  uStack_48 = (undefined5)param_1[1];
  uStack_43 = (undefined3)((ulong)param_1[1] >> 0x28);
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_54;
    uVar5 = 0x19;
  }
  else {
    iVar3 = FUN_00ce2730(0x17);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_60 + lVar2);
    local_58 = 0;
    FUN_00ce2768((ulong)local_54 | 2,0x17,auStack_5e + lVar2,&local_58);
    *puVar6 = (ushort)local_58 >> 8 | (ushort)local_58 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x1704);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce6ed4(uint param_1,uint param_2)

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
  uVar2 = FUN_00ce6f30(&local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce6f30(undefined8 *param_1,ulong param_2)

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
  local_44[1] = 0x1804;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x1804);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

