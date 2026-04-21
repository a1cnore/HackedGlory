// functions/00ce5 — 24 functions
#include "libGameKindred.h"




uint FUN_00ce501c(undefined8 *param_1,ulong param_2)

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
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_54[0] = 0x1a00;
  local_54[1] = 0x2204;
  local_40 = param_1[2];
  uStack_48 = param_1[1];
  local_50 = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_54;
    uVar5 = 0x1c;
  }
  else {
    iVar3 = FUN_00ce2730(0x1a);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_60 + lVar2);
    local_58 = 0;
    FUN_00ce2768((ulong)local_54 | 2,0x1a,auStack_5e + lVar2,&local_58);
    *puVar6 = (ushort)local_58 >> 8 | (ushort)local_58 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x2204);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce5104(uint param_1)

{
  long lVar1;
  uint uVar2;
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_30[0] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce515c(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce515c(undefined4 *param_1,ulong param_2)

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
  local_40[1] = 0x2304;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x2304);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce5238(uint param_1,uint param_2,byte param_3)

{
  long lVar1;
  uint uVar2;
  uint local_38;
  uint uStack_34;
  byte local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_3 & 1;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce529c(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce529c(undefined8 *param_1,ulong param_2)

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
  local_48[1] = 0x2704;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x2704);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce5384(uint param_1,uint param_2,uint param_3,byte param_4)

{
  long lVar1;
  uint uVar2;
  uint local_38;
  uint uStack_34;
  uint local_30;
  byte local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_4 & 1;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce53f4(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce53f4(undefined8 *param_1,ulong param_2)

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
  local_4c[1] = 0x2804;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x2804);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce54dc(uint param_1,uint param_2,uint param_3,byte param_4)

{
  long lVar1;
  uint uVar2;
  uint local_38;
  uint uStack_34;
  uint local_30;
  byte local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_4 & 1;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce5548(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce5548(undefined8 *param_1,ulong param_2)

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
  local_4c[1] = 0x2904;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x2904);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce5630(uint param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  long lVar1;
  uint uVar2;
  uint local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_2c = param_2;
  local_2b = param_3;
  local_2a = param_4;
  local_29 = param_5;
  uVar2 = FUN_00ce5698(&local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce5698(undefined8 *param_1,ulong param_2)

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
  local_44[1] = 0x2b04;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x2b04);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce5778(undefined1 param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 local_38;
  uint local_37;
  uint local_33;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  local_37 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  local_33 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_38 = param_1;
  uVar2 = FUN_00ce57e4(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce57e4(undefined8 *param_1,ulong param_2)

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
  local_48[1] = 0xf803;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0xf803);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce58cc(undefined1 param_1,uint *param_2,byte param_3)

{
  long lVar1;
  uint uVar2;
  undefined1 local_38;
  uint local_37;
  uint local_33;
  uint local_2f;
  byte local_2b;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2b = param_3 & 1;
  uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  local_37 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  local_33 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  local_2f = uVar2 >> 0x10 | uVar2 << 0x10;
  local_38 = param_1;
  uVar2 = FUN_00ce594c(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce594c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort local_50;
  undefined1 auStack_4e [2];
  ushort local_4c [2];
  undefined6 uStack_48;
  undefined2 local_42;
  undefined6 uStack_40;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_4c[0] = 0x1000;
  local_4c[1] = 0xf903;
  uStack_40 = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 6) >> 0x10);
  uStack_48 = (undefined6)*param_1;
  local_42 = (undefined2)((ulong)*param_1 >> 0x30);
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_4c;
    uVar5 = 0x12;
  }
  else {
    iVar3 = FUN_00ce2730(0x10);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&local_50 + lVar2);
    _local_50 = 0;
    FUN_00ce2768((ulong)local_4c | 2,0x10,auStack_4e + lVar2,&local_50);
    *puVar6 = local_50 >> 8 | local_50 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0xf903);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce5a34(uint param_1,uint *param_2,byte param_3)

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
  uVar2 = FUN_00ce5ab4(&local_40,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce5ab4(undefined8 *param_1,ulong param_2)

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
  local_50[1] = 0xfb03;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0xfb03);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce5b9c(uint param_1,uint param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
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
  uVar2 = FUN_00ce5c1c(&local_40,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce5c1c(undefined8 *param_1,ulong param_2)

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
  undefined4 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = 0x1600;
  local_50[1] = 0xfa03;
  local_3c = *(undefined4 *)(param_1 + 2);
  uStack_44 = param_1[1];
  local_4c = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_50;
    uVar5 = 0x18;
  }
  else {
    iVar3 = FUN_00ce2730(0x16);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_60 + lVar2);
    local_54 = 0;
    FUN_00ce2768((ulong)local_50 | 2,0x16,auStack_5e + lVar2,&local_54);
    *puVar6 = (ushort)local_54 >> 8 | (ushort)local_54 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0xfa03);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce5d04(uint param_1,uint *param_2)

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
  uVar2 = FUN_00ce5d7c(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce5d7c(undefined8 *param_1,ulong param_2)

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
  local_4c[1] = 0x104;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x104);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce5e5c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  uint local_38;
  uint uStack_34;
  uint local_30;
  int iStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  iStack_2c = (param_4 & 1) << 0x18;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce5ed0(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce5ed0(undefined8 *param_1,ulong param_2)

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
  local_4c[1] = 0x204;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x204);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce5fb0(uint param_1,uint param_2,uint *param_3,byte param_4)

{
  long lVar1;
  uint uVar2;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  byte local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_40 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  uStack_3c = uVar2 >> 0x10 | uVar2 << 0x10;
  local_2c = param_4 & 1;
  uVar2 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_3[1] & 0xff00ff00) >> 8 | (param_3[1] & 0xff00ff) << 8;
  local_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_3[2] & 0xff00ff00) >> 8 | (param_3[2] & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce603c(&local_40,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

