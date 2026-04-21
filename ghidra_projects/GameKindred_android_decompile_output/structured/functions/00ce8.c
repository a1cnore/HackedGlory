// functions/00ce8 — 23 functions
#include "libGameKindred.h"




uint FUN_00ce807c(uint param_1,undefined1 param_2,undefined1 param_3,uint *param_4,uint param_5,
                 uint *param_6,uint param_7)

{
  long lVar1;
  uint uVar2;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  ushort local_30;
  undefined1 local_2e;
  undefined1 local_2d;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_7 & 0xff00ff00) >> 8 | (param_7 & 0xff00ff) << 8;
  local_48 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_30 = (ushort)(param_5 >> 8) & 0xff | (ushort)((param_5 & 0xff00ff) << 8);
  uVar2 = (*param_6 & 0xff00ff00) >> 8 | (*param_6 & 0xff00ff) << 8;
  uStack_44 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (*param_4 & 0xff00ff00) >> 8 | (*param_4 & 0xff00ff) << 8;
  local_40 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_4[1] & 0xff00ff00) >> 8 | (param_4[1] & 0xff00ff) << 8;
  local_3c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_4[2] & 0xff00ff00) >> 8 | (param_4[2] & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_2e = param_2;
  local_2d = param_3;
  uVar2 = FUN_00ce811c(&local_48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce811c(undefined8 *param_1,ulong param_2)

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
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58[0] = 0x1e00;
  local_58[1] = 0xe04;
  uStack_40 = *(undefined8 *)((long)param_1 + 0x14);
  uStack_44 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0xc) >> 0x20);
  uStack_54 = *param_1;
  uStack_4c = (undefined4)param_1[1];
  local_48 = (undefined4)((ulong)param_1[1] >> 0x20);
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_58;
    uVar5 = 0x20;
  }
  else {
    iVar3 = FUN_00ce2730(0x1e);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_60 + lVar2);
    local_5c = 0;
    FUN_00ce2768((ulong)local_58 | 2,0x1e,auStack_5e + lVar2,&local_5c);
    *puVar6 = (ushort)local_5c >> 8 | (ushort)local_5c << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0xe04);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce8204(uint param_1,undefined1 param_2,undefined1 param_3,uint *param_4,uint *param_5,
                 uint *param_6,uint param_7,uint *param_8,uint param_9)

{
  long lVar1;
  uint uVar2;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  ushort local_30;
  undefined1 local_2e;
  undefined1 local_2d;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_9 & 0xff00ff00) >> 8 | (param_9 & 0xff00ff) << 8;
  local_58 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_30 = (ushort)(param_7 >> 8) & 0xff | (ushort)((param_7 & 0xff00ff) << 8);
  uVar2 = (*param_8 & 0xff00ff00) >> 8 | (*param_8 & 0xff00ff) << 8;
  uStack_54 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (*param_4 & 0xff00ff00) >> 8 | (*param_4 & 0xff00ff) << 8;
  local_50 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_4[1] & 0xff00ff00) >> 8 | (param_4[1] & 0xff00ff) << 8;
  local_4c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_4[2] & 0xff00ff00) >> 8 | (param_4[2] & 0xff00ff) << 8;
  local_48 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (*param_5 & 0xff00ff00) >> 8 | (*param_5 & 0xff00ff) << 8;
  local_44 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_5[1] & 0xff00ff00) >> 8 | (param_5[1] & 0xff00ff) << 8;
  local_40 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (*param_6 & 0xff00ff00) >> 8 | (*param_6 & 0xff00ff) << 8;
  local_3c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_6[1] & 0xff00ff00) >> 8 | (param_6[1] & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_2e = param_2;
  local_2d = param_3;
  uVar2 = FUN_00ce82d4(&local_58,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce82d4(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort uStack_70;
  undefined1 auStack_6e [2];
  undefined4 local_6c;
  ushort local_68 [2];
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_68[0] = 0x2e00;
  local_68[1] = 0xf04;
  uStack_40 = *(undefined8 *)((long)param_1 + 0x24);
  uStack_44 = (undefined4)((ulong)*(undefined8 *)((long)param_1 + 0x1c) >> 0x20);
  uStack_54 = param_1[2];
  uStack_4c = (undefined4)param_1[3];
  local_48 = (undefined4)((ulong)param_1[3] >> 0x20);
  uStack_5c = param_1[1];
  local_64 = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_68;
    uVar5 = 0x30;
  }
  else {
    iVar3 = FUN_00ce2730(0x2e);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_70 + lVar2);
    local_6c = 0;
    FUN_00ce2768((ulong)local_68 | 2,0x2e,auStack_6e + lVar2,&local_6c);
    *puVar6 = (ushort)local_6c >> 8 | (ushort)local_6c << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0xf04);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce83c4(uint param_1,uint param_2,uint param_3,uint *param_4)

{
  long lVar1;
  uint uVar2;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_40 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_3 & 0xff00ff00) >> 8 | (param_3 & 0xff00ff) << 8;
  uStack_3c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  uStack_2c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (*param_4 & 0xff00ff00) >> 8 | (*param_4 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_4[1] & 0xff00ff00) >> 8 | (param_4[1] & 0xff00ff) << 8;
  local_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_4[2] & 0xff00ff00) >> 8 | (param_4[2] & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce844c(&local_40,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce844c(undefined8 *param_1,ulong param_2)

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
  local_54[1] = 0x1904;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x1904);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce8534(uint param_1,uint *param_2,byte param_3)

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
  uVar2 = FUN_00ce85b4(&local_40,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce85b4(undefined8 *param_1,ulong param_2)

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
  local_50[1] = 0x1004;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x1004);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce869c(uint param_1)

{
  long lVar1;
  uint uVar2;
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_30[0] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce86f4(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce86f4(undefined4 *param_1,ulong param_2)

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
  local_40[1] = 0x4804;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x4804);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce87d0(uint param_1,uint param_2)

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
  uVar2 = FUN_00ce882c(&local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce882c(undefined8 *param_1,ulong param_2)

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
  local_44[1] = 0x4904;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x4904);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce890c(uint *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint local_38;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_2c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  local_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce8984(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce8984(undefined8 *param_1,ulong param_2)

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
  local_4c[1] = 0x4a04;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x4a04);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce8a64(uint param_1,uint param_2,ushort param_3)

{
  long lVar1;
  uint uVar2;
  uint local_38;
  uint uStack_34;
  short local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_30 = (param_3 & 1) << 8;
  uVar2 = FUN_00ce8acc(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce8acc(undefined8 *param_1,ulong param_2)

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
  undefined2 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48[0] = 0xc00;
  local_48[1] = 0x4b04;
  local_3c = *(undefined2 *)(param_1 + 1);
  local_44 = *param_1;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_48;
    uVar5 = 0xe;
  }
  else {
    iVar3 = FUN_00ce2730(0xc);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_4c = 0;
    FUN_00ce2768((ulong)local_48 | 2,0xc,auStack_4e + lVar2,&local_4c);
    *puVar6 = (ushort)local_4c >> 8 | (ushort)local_4c << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x4b04);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce8bb4(uint param_1,uint param_2,undefined1 param_3,uint param_4,uint *param_5)

{
  long lVar1;
  uint uVar2;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  undefined1 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_40 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_3c = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (*param_5 & 0xff00ff00) >> 8 | (*param_5 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_5[1] & 0xff00ff00) >> 8 | (param_5[1] & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_2c = param_3;
  uVar2 = FUN_00ce8c30(&local_40,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce8c30(undefined8 *param_1,ulong param_2)

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
  local_54[1] = 0x4c04;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x4c04);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce8d18(uint param_1,uint param_2,uint *param_3,undefined1 param_4,undefined1 param_5)

{
  long lVar1;
  uint uVar2;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined1 local_2c;
  undefined1 local_2b;
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
  local_2b = param_5;
  uVar2 = FUN_00ce8da0(&local_40,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce8da0(undefined8 *param_1,ulong param_2)

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
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined6 uStack_40;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_54[0] = 0x1800;
  local_54[1] = 0x4e04;
  uStack_40 = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 0xe) >> 0x10);
  local_50 = *param_1;
  uStack_48 = (undefined6)param_1[1];
  uStack_42 = (undefined2)((ulong)param_1[1] >> 0x30);
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_54;
    uVar5 = 0x1a;
  }
  else {
    iVar3 = FUN_00ce2730(0x18);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_60 + lVar2);
    local_58 = 0;
    FUN_00ce2768((ulong)local_54 | 2,0x18,auStack_5e + lVar2,&local_58);
    *puVar6 = (ushort)local_58 >> 8 | (ushort)local_58 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x4e04);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce8e88(uint param_1,uint param_2,undefined1 param_3,uint param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  uint local_40;
  undefined1 local_3c;
  uint local_3b;
  uint local_37;
  uint local_33;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  local_40 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_4 & 0xff00ff00) >> 8 | (param_4 & 0xff00ff) << 8;
  local_3b = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_5 & 0xff00ff00) >> 8 | (param_5 & 0xff00ff) << 8;
  local_33 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_37 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_3c = param_3;
  uVar2 = FUN_00ce8f00(&local_40,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce8f00(undefined8 *param_1,ulong param_2)

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
  local_50[1] = 0x4f04;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x4f04);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce8fe8(uint param_1)

{
  long lVar1;
  uint uVar2;
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_30[0] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce9044(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

