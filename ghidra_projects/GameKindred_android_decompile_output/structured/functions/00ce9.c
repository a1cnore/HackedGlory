// functions/00ce9 — 34 functions
#include "libGameKindred.h"




uint thunk_FUN_00ce9388(void)

{
  long lVar1;
  uint uVar2;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  auStack_30[0] = 0;
  uVar2 = FUN_00ce93dc(auStack_30,0);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce9044(undefined4 *param_1,ulong param_2)

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
  local_40[1] = 0x5104;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x5104);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce9120(double param_1)

{
  long lVar1;
  uint uVar2;
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = ((uint)(float)param_1 & 0xff00ff00) >> 8 | ((uint)(float)param_1 & 0xff00ff) << 8;
  local_30[0] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce9180(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce9180(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort *puVar6;
  ushort uStack_50;
  undefined1 auStack_4e [10];
  undefined4 local_44;
  ushort local_40 [2];
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_3c = *param_1;
  local_40[0] = 0x600;
  local_40[1] = 0;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce9254(undefined1 param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = param_1;
  uVar2 = FUN_00ce92a8(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce92a8(undefined1 *param_1,ulong param_2)

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
  local_40[1] = 0x7204;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x7204);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce9388(void)

{
  long lVar1;
  uint uVar2;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = 0;
  uVar2 = FUN_00ce93dc(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce93dc(undefined1 *param_1,ulong param_2)

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
  local_40[1] = 0x7404;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x7404);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce94bc(uint param_1,uint param_2,undefined1 param_3,byte param_4)

{
  long lVar1;
  uint uVar2;
  uint local_38;
  uint uStack_34;
  undefined1 local_30;
  byte local_2f;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  uStack_34 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_38 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_2f = param_4 & 1;
  local_30 = param_3;
  uVar2 = FUN_00ce9524(&local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce9524(undefined8 *param_1,ulong param_2)

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
  local_48[1] = 0x8904;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x8904);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce960c(uint param_1,undefined1 param_2,undefined1 param_3)

{
  long lVar1;
  uint uVar2;
  uint local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_30 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_2c = param_2;
  local_2b = param_3;
  uVar2 = FUN_00ce966c(&local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce966c(undefined4 *param_1,ulong param_2)

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
  undefined2 local_3c;
  long local_38;
  ushort *puVar6;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = *(undefined2 *)(param_1 + 1);
  uStack_40 = *param_1;
  local_44[0] = 0x800;
  local_44[1] = 0x8104;
  uVar5 = FUN_00ce271c();
  if (((uVar5 & 1) == 0) || ((param_2 & 1) != 0)) {
    puVar6 = local_44;
    uVar5 = 10;
  }
  else {
    iVar3 = FUN_00ce2730(8);
    uVar5 = (ulong)(iVar3 + 2);
    lVar2 = -(uVar5 + 0xf & 0x1fffffff0);
    puVar6 = (ushort *)((long)&uStack_50 + lVar2);
    local_48 = 0;
    FUN_00ce2768((ulong)local_44 | 2,8,auStack_4e + lVar2,&local_48);
    *puVar6 = (ushort)local_48 >> 8 | (ushort)local_48 << 8;
  }
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x8104);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce9750(uint param_1)

{
  long lVar1;
  uint uVar2;
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_30[0] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce97a8(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce97a8(undefined4 *param_1,ulong param_2)

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
  local_40[1] = 0x8204;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x8204);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce9884(uint param_1)

{
  long lVar1;
  uint uVar2;
  uint local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_30[0] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = FUN_00ce98dc(local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce98dc(undefined4 *param_1,ulong param_2)

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
  local_40[1] = 0x8304;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x8304);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce99b8(uint param_1,uint param_2)

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
  uVar2 = FUN_00ce9a14(&local_30,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ce9a14(undefined8 *param_1,ulong param_2)

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
  local_44[1] = 0x9004;
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
  uVar4 = thunk_FUN_0094271c(puVar6,uVar5,0x9004);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ce9af4(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_01988718();
  lVar2 = FUN_01987114(uVar1,0,"*HeroManifest*",0);
  if (lVar2 != 0) {
    return;
  }
  FUN_01988700(0,"build://Levels/HeroManifest.def");
  uVar1 = FUN_01988718();
  FUN_01987114(uVar1,0,"*HeroManifest*",0);
  return;
}




long FUN_00ce9b48(char *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (param_1 != (char *)0x0) {
    plVar2 = (long *)FUN_00ce9af4();
    puVar3 = *(undefined8 **)*plVar2;
    plVar2 = (long *)*plVar2;
    while (puVar3 != (undefined8 *)0x0) {
      iVar1 = strcmp(param_1,(char *)*puVar3);
      if (iVar1 == 0) {
        return *plVar2;
      }
      puVar3 = (undefined8 *)plVar2[1];
      plVar2 = plVar2 + 1;
    }
  }
  return 0;
}




undefined8 FUN_00ce9ba0(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0xffff) {
    return 0;
  }
  uVar1 = FUN_00d6eb50();
  FUN_00d6eb3c(uVar1,*param_1);
  uVar1 = FUN_00ce9b48();
  return uVar1;
}




undefined8 FUN_00ce9bf0(char *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (long *)FUN_00ce9af4();
  plVar2 = (long *)*plVar2;
  puVar3 = (undefined8 *)*plVar2;
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    plVar2 = plVar2 + 1;
    iVar1 = strcmp(param_1,(char *)*puVar3);
    if (iVar1 == 0) break;
    puVar3 = (undefined8 *)*plVar2;
  }
  return 1;
}




uint FUN_00ce9c44(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = strcmp(*(char **)(param_1 + 0x10),*(char **)(param_2 + 0x10));
  return uVar1 >> 0x1f;
}




int FUN_00ce9c64(ulong param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_00ce9af4();
  plVar2 = (long *)*plVar2;
  lVar3 = *plVar2;
  if (lVar3 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      plVar2 = plVar2 + 1;
      if (((param_1 & 1) == 0) || (*(char *)(lVar3 + 8) != '\0')) {
        iVar1 = iVar1 + 1;
      }
      lVar3 = *plVar2;
    } while (lVar3 != 0);
  }
  return iVar1;
}




void FUN_00ce9cb8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_01988718();
  lVar2 = FUN_01987114(uVar1,0,param_1,0);
  if (lVar2 != 0) {
    return;
  }
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6ea80(uVar1,param_1);
  FUN_01988700(0,uVar1);
  uVar1 = FUN_01988718();
  FUN_01987114(uVar1,0,param_1,0);
  return;
}




void FUN_00ce9d20(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_01988718();
  lVar2 = FUN_01987114(uVar1,0,param_1,0);
  if (lVar2 != 0) {
    return;
  }
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6ea80(uVar1,param_1);
  FUN_01988700(0,uVar1);
  uVar1 = FUN_01988718();
  FUN_01987114(uVar1,0,param_1,0);
  return;
}




void FUN_00ce9d88(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_01988718();
  lVar2 = FUN_01987114(uVar1,0,param_1,0);
  if (lVar2 == 0) {
    uVar1 = FUN_00d6eb50();
    uVar1 = FUN_00d6ea80(uVar1,param_1);
    FUN_01988700(0,uVar1);
    uVar1 = FUN_01988718();
    lVar2 = FUN_01987114(uVar1,0,param_1,0);
  }
  *param_2 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + (long)*(int *)(lVar2 + 0xd0) * 8);
  param_2[1] = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + (long)*(int *)(lVar2 + 0xd4) * 8);
  param_2[2] = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + (long)*(int *)(lVar2 + 0xd8) * 8);
  return;
}




uint * FUN_00ce9e1c(byte *param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  if (param_1 == (byte *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar4 = (uint)*param_1;
    uVar2 = 0x811c9dc5;
    if (*param_1 != 0) {
      do {
        param_1 = param_1 + 1;
        uVar2 = (uVar2 ^ uVar4) * 0x1000193;
        uVar4 = (uint)*param_1;
      } while (*param_1 != 0);
    }
  }
  if (uVar2 != *(uint *)(param_2 + 0x238)) {
    puVar3 = *(undefined8 **)(param_2 + 0x230);
    puVar1 = (uint *)*puVar3;
    while ((puVar1 != (uint *)0x0 && (puVar3 = puVar3 + 1, uVar2 != *puVar1))) {
      puVar1 = (uint *)*puVar3;
    }
    return puVar1;
  }
  return (uint *)(param_2 + 0x238);
}




void FUN_00ce9e94(byte *param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  if (param_1 == (byte *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar4 = (uint)*param_1;
    uVar2 = 0x811c9dc5;
    if (*param_1 != 0) {
      do {
        param_1 = param_1 + 1;
        uVar2 = (uVar2 ^ uVar4) * 0x1000193;
        uVar4 = (uint)*param_1;
      } while (*param_1 != 0);
    }
  }
  puVar3 = *(undefined8 **)(param_2 + 0xa8);
  puVar1 = (uint *)*puVar3;
  while ((puVar1 != (uint *)0x0 && (puVar3 = puVar3 + 1, uVar2 != *puVar1))) {
    puVar1 = (uint *)*puVar3;
  }
  return;
}




void FUN_00ce9ef8(byte *param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  if (param_1 == (byte *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar4 = (uint)*param_1;
    uVar2 = 0x811c9dc5;
    if (*param_1 != 0) {
      do {
        param_1 = param_1 + 1;
        uVar2 = (uVar2 ^ uVar4) * 0x1000193;
        uVar4 = (uint)*param_1;
      } while (*param_1 != 0);
    }
  }
  puVar3 = *(undefined8 **)(param_2 + 0x1b0);
  puVar1 = (uint *)*puVar3;
  while ((puVar1 != (uint *)0x0 && (puVar3 = puVar3 + 1, uVar2 != *puVar1))) {
    puVar1 = (uint *)*puVar3;
  }
  return;
}




undefined8 FUN_00ce9f5c(char *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = 0;
    do {
      iVar1 = strcasecmp(param_1,(char *)*puVar2);
      if (iVar1 == 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)lVar3;
        }
        return param_2[lVar3];
      }
      puVar2 = (undefined8 *)param_2[lVar3 + 1];
      lVar3 = lVar3 + 1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return 0;
}




void FUN_00ce9fc8(undefined8 param_1,long param_2)

{
  FUN_00ce9f5c(param_1,*(undefined8 *)(param_2 + 0xb0));
  return;
}




void FUN_00ce9fd0(undefined8 param_1,long param_2)

{
  FUN_00ce9f5c(param_1,*(undefined8 *)(param_2 + 0x28));
  return;
}




undefined8 FUN_00ce9fd8(char *param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = *(undefined8 **)(param_2 + 0x228);
  puVar2 = (undefined8 *)*puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = 0;
    do {
      iVar1 = strcasecmp(param_1,(char *)*puVar2);
      if (iVar1 == 0) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = (int)lVar4;
        }
        return puVar3[lVar4];
      }
      puVar2 = (undefined8 *)puVar3[lVar4 + 1];
      lVar4 = lVar4 + 1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return 0;
}

