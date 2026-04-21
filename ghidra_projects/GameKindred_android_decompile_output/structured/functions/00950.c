// functions/00950 — 24 functions
#include "libGameKindred.h"




void FUN_0095003c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbbc8;
  FUN_00956c00(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_00950074(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_e8;
  undefined8 local_e0;
  undefined5 uStack_d8;
  undefined3 local_d3;
  undefined5 uStack_d0;
  undefined3 uStack_cb;
  undefined5 uStack_c8;
  undefined1 auStack_c0 [16];
  byte local_b0 [16];
  void *local_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_cb = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_c8 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_d0 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_e0 = *(undefined8 *)(param_1 + 8);
  uStack_d8 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_d3 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_e8 = &PTR_FUN_027bbbf8;
  FUN_00956c8c(auStack_c0,param_1 + 0x28);
  FUN_008fcdb8(local_b0,param_1 + 0x38);
  FUN_00951ac8(auStack_98,param_1 + 0x50);
  FUN_00951160(auStack_88,param_1 + 0x60);
  FUN_00951160(auStack_78,param_1 + 0x70);
  local_e0 = 0;
  uStack_d8 = 0;
  local_d3 = 0;
  uStack_d0 = 0;
  uStack_cb = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x48))(plVar2,&local_e8);
  }
  local_e8 = &PTR_FUN_027bbbf8;
  FUN_00951534(auStack_78,1);
  FUN_00951534(auStack_88,1);
  FUN_00951cf4(auStack_98,1);
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  FUN_00956edc(auStack_c0,1);
  FUN_00e84dd8(&local_e8);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009501e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbbf8;
  FUN_00951534(param_1 + 0xe,1);
  FUN_00951534(param_1 + 0xc,1);
  FUN_00951cf4(param_1 + 10,1);
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  FUN_00956edc(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0095024c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_118;
  undefined8 local_110;
  undefined5 uStack_108;
  undefined3 local_103;
  undefined5 uStack_100;
  undefined3 uStack_fb;
  undefined5 uStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_fb = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_f8 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_100 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_110 = *(undefined8 *)(param_1 + 8);
  uStack_108 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_103 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_118 = &PTR_FUN_027bbc28;
  FUN_00956f88(auStack_f0,param_1 + 0x28);
  FUN_0095700c(auStack_e0,param_1 + 0x38);
  FUN_00957098(auStack_d0,param_1 + 0x48);
  FUN_00957098(auStack_c0,param_1 + 0x58);
  FUN_00957098(auStack_b0,param_1 + 0x68);
  FUN_00957098(auStack_a0,param_1 + 0x78);
  FUN_00957098(auStack_90,param_1 + 0x88);
  FUN_00957114(auStack_80,param_1 + 0x98);
  local_110 = 0;
  uStack_108 = 0;
  local_103 = 0;
  uStack_100 = 0;
  uStack_fb = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x50))(plVar2,&local_118);
  }
  local_118 = &PTR_FUN_027bbc28;
  FUN_009577b8(auStack_80,1);
  FUN_0095783c(auStack_90,1);
  FUN_0095783c(auStack_a0,1);
  FUN_0095783c(auStack_b0,1);
  FUN_0095783c(auStack_c0,1);
  FUN_0095783c(auStack_d0,1);
  FUN_009578b4(auStack_e0,1);
  FUN_00957938(auStack_f0,1);
  FUN_00e84dd8(&local_118);
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00950418(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbc28;
  FUN_009577b8(param_1 + 0x13,1);
  FUN_0095783c(param_1 + 0x11,1);
  FUN_0095783c(param_1 + 0xf,1);
  FUN_0095783c(param_1 + 0xd,1);
  FUN_0095783c(param_1 + 0xb,1);
  FUN_0095783c(param_1 + 9,1);
  FUN_009578b4(param_1 + 7,1);
  FUN_00957938(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_009504ac(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_90;
  undefined8 local_88;
  undefined5 uStack_80;
  undefined3 local_7b;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_73 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_78 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_88 = *(undefined8 *)(param_1 + 8);
  local_90 = &PTR_FUN_027bbc58;
  uStack_80 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_7b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_64 = *(undefined1 *)(param_1 + 0x2c);
  local_68 = *(undefined4 *)(param_1 + 0x28);
  FUN_008fcdb8(local_60,param_1 + 0x30);
  local_88 = 0;
  uStack_80 = 0;
  local_7b = 0;
  uStack_78 = 0;
  uStack_73 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x58))(plVar2,&local_90);
  }
  local_90 = &PTR_FUN_027bbc58;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  FUN_00e84dd8(&local_90);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009505a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbc58;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_009505e8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_80;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined3 local_6b;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_78 = *(undefined8 *)(param_1 + 8);
  uStack_70 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_6b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_80 = &PTR_FUN_027bbc88;
  FUN_00957a00(auStack_58,param_1 + 0x28);
  local_78 = 0;
  uStack_70 = 0;
  local_6b = 0;
  uStack_68 = 0;
  uStack_63 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_80);
  }
  local_80 = &PTR_FUN_027bbc88;
  FUN_00957b9c(auStack_58,1);
  FUN_00e84dd8(&local_80);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009506d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbc88;
  FUN_00957b9c(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0095070c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_90;
  undefined8 local_88;
  undefined5 uStack_80;
  undefined3 local_7b;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_73 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_78 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_88 = *(undefined8 *)(param_1 + 8);
  local_90 = &PTR_FUN_027bbcb8;
  uStack_80 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_7b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_64 = *(undefined1 *)(param_1 + 0x2c);
  local_68 = *(undefined4 *)(param_1 + 0x28);
  FUN_008fcdb8(local_60,param_1 + 0x30);
  local_88 = 0;
  uStack_80 = 0;
  local_7b = 0;
  uStack_78 = 0;
  uStack_73 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x68))(plVar2,&local_90);
  }
  local_90 = &PTR_FUN_027bbcb8;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  FUN_00e84dd8(&local_90);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00950808(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbcb8;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_00950848(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_90;
  undefined8 local_88;
  undefined5 uStack_80;
  undefined3 local_7b;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_73 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_78 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_88 = *(undefined8 *)(param_1 + 8);
  local_90 = &PTR_FUN_027bbce8;
  uStack_80 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_7b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_64 = *(undefined1 *)(param_1 + 0x2c);
  local_68 = *(undefined4 *)(param_1 + 0x28);
  FUN_008fcdb8(local_60,param_1 + 0x30);
  local_88 = 0;
  uStack_80 = 0;
  local_7b = 0;
  uStack_78 = 0;
  uStack_73 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x70))(plVar2,&local_90);
  }
  local_90 = &PTR_FUN_027bbce8;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  FUN_00e84dd8(&local_90);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00950944(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbce8;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_00950984(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_80;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined3 local_6b;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_78 = *(undefined8 *)(param_1 + 8);
  uStack_70 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_6b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_80 = &PTR_FUN_027bbd18;
  FUN_00957cb4(auStack_58,param_1 + 0x28);
  local_78 = 0;
  uStack_70 = 0;
  local_6b = 0;
  uStack_68 = 0;
  uStack_63 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x78))(plVar2,&local_80);
  }
  local_80 = &PTR_FUN_027bbd18;
  FUN_00958034(auStack_58,1);
  FUN_00e84dd8(&local_80);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00950a70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbd18;
  FUN_00958034(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_00950aa8(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00950d18(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x38;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      uVar6 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
      *(undefined8 *)(lVar4 + 0x28) = uVar6;
      puVar1 = (undefined8 *)(lVar3 + 0x20);
      uVar6 = *(undefined8 *)(lVar3 + 0x18);
      lVar3 = lVar3 + 0x38;
      *(undefined8 *)(lVar4 + 0x20) = *puVar1;
      *(undefined8 *)(lVar4 + 0x18) = uVar6;
      lVar4 = lVar4 + 0x38;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_00950b30(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00950dfc(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x38;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
      puVar1 = (undefined4 *)(lVar3 + 0x30);
      lVar3 = lVar3 + 0x38;
      *(undefined4 *)(lVar4 + 0x30) = *puVar1;
      lVar4 = lVar4 + 0x38;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_00950bbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb448;
  FUN_009515b0(param_1 + 0x10);
  FUN_00951478(param_1 + 0xb,1);
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete__((void *)param_1[10]);
    param_1[9] = 0;
    param_1[10] = 0;
  }
  FUN_0095132c(param_1 + 7,1);
  FUN_009512b0(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_00950c2c(void)

{
  return 8;
}




void FUN_00950c34(long param_1)

{
  FUN_009512b0(param_1 + 0x28,0);
  FUN_0095132c(param_1 + 0x38,0);
  if (*(long *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  FUN_00951478(param_1 + 0x58,0);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_009513b8(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x1b8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1b0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1c4) = 0x3f4000003e800000;
  *(undefined8 *)(param_1 + 0x1bc) = 0;
  *(undefined8 *)(param_1 + 0x1d4) = 0;
  *(undefined8 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1e0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 500) = 0x3f4000003e800000;
  *(undefined8 *)(param_1 + 0x1ec) = 0;
  *(undefined8 *)(param_1 + 0x204) = 0;
  *(undefined8 *)(param_1 + 0x1fc) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x224) = 0x3f4000003e800000;
  *(undefined8 *)(param_1 + 0x21c) = 0;
  *(undefined8 *)(param_1 + 0x22c) = 0;
  *(undefined8 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x240) = 0xffffffff;
  return;
}




void FUN_00950d18(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x38);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x38);
      pvVar5 = pvVar1;
      do {
        FUN_008fcdb8(pvVar5,pvVar2);
        uVar7 = *(undefined8 *)((long)pvVar2 + 0x28);
        *(undefined8 *)((long)pvVar5 + 0x30) = *(undefined8 *)((long)pvVar2 + 0x30);
        *(undefined8 *)((long)pvVar5 + 0x28) = uVar7;
        puVar3 = (undefined8 *)((long)pvVar2 + 0x20);
        uVar7 = *(undefined8 *)((long)pvVar2 + 0x18);
        pvVar2 = (void *)((long)pvVar2 + 0x38);
        *(undefined8 *)((long)pvVar5 + 0x20) = *puVar3;
        *(undefined8 *)((long)pvVar5 + 0x18) = uVar7;
        pvVar5 = (void *)((long)pvVar5 + 0x38);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x38;
        puVar3 = (undefined8 *)((long)pvVar2 + 0x10);
        do {
          if ((*(byte *)(puVar3 + -2) & 1) != 0) {
            operator_delete((void *)*puVar3);
          }
          lVar4 = lVar4 + -0x38;
          puVar3 = puVar3 + 7;
        } while (lVar4 != 0);
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




void FUN_00950dfc(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  byte *pbVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x38);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x38);
      pvVar6 = pvVar2;
      do {
        FUN_008fcdb8(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x18,(long)pvVar3 + 0x18);
        puVar1 = (undefined4 *)((long)pvVar3 + 0x30);
        pvVar3 = (void *)((long)pvVar3 + 0x38);
        *(undefined4 *)((long)pvVar6 + 0x30) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x38);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x38;
        pbVar4 = (byte *)((long)pvVar3 + 0x18);
        do {
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          if ((pbVar4[-0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
          lVar5 = lVar5 + -0x38;
          pbVar4 = pbVar4 + 0x38;
        } while (lVar5 != 0);
        pvVar3 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    *(void **)(param_1 + 2) = pvVar2;
  }
  return;
}




void FUN_00950ef4(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0091f484(param_1,*param_2);
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar4 = (ulong)*param_2 << 2;
    puVar2 = *(undefined4 **)(param_2 + 2);
    puVar3 = *(undefined4 **)(param_1 + 2);
    do {
      lVar4 = lVar4 + -4;
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}




void FUN_00950f54(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0095100c(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x90;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
      FUN_008fcdb8(lVar4 + 0x30,lVar3 + 0x30);
      FUN_008fcdb8(lVar4 + 0x48,lVar3 + 0x48);
      FUN_008fcdb8(lVar4 + 0x60,lVar3 + 0x60);
      *(undefined4 *)(lVar4 + 0x88) = *(undefined4 *)(lVar3 + 0x88);
      puVar1 = (undefined8 *)(lVar3 + 0x80);
      uVar6 = *(undefined8 *)(lVar3 + 0x78);
      lVar3 = lVar3 + 0x90;
      *(undefined8 *)(lVar4 + 0x80) = *puVar1;
      *(undefined8 *)(lVar4 + 0x78) = uVar6;
      lVar4 = lVar4 + 0x90;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}

