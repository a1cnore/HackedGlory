// functions/0094d — 25 functions
#include "libGameKindred.h"




void FUN_0094d034(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_b0;
  undefined8 local_a8;
  undefined5 local_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined3 uStack_93;
  undefined5 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  byte local_68 [16];
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_93 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_90 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_98 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a8 = *(undefined8 *)(param_1 + 8);
  local_b0 = &PTR_FUN_027bba48;
  local_a0 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_9b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  uStack_74 = *(undefined8 *)(param_1 + 0x3c);
  uStack_78 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = (undefined4)*(undefined8 *)(param_1 + 0x30);
  local_7c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  FUN_008fcdb8(local_68,param_1 + 0x48);
  local_50 = *(undefined8 *)(param_1 + 0x60);
  local_a0 = 0;
  uStack_9b = 0;
  uStack_98 = 0;
  uStack_93 = 0;
  local_a8 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x188))(plVar2,&local_b0);
  }
  local_b0 = &PTR_FUN_027bba48;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_00e84dd8(&local_b0);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094d138(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bba48;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094d178(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_b0;
  undefined8 local_a8;
  undefined5 local_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined3 uStack_93;
  undefined5 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  byte local_68 [16];
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_93 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_90 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_98 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a8 = *(undefined8 *)(param_1 + 8);
  local_b0 = &PTR_FUN_027bba78;
  local_a0 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_9b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  uStack_74 = *(undefined8 *)(param_1 + 0x3c);
  uStack_78 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = (undefined4)*(undefined8 *)(param_1 + 0x30);
  local_7c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  FUN_008fcdb8(local_68,param_1 + 0x48);
  local_50 = *(undefined8 *)(param_1 + 0x60);
  local_a0 = 0;
  uStack_9b = 0;
  uStack_98 = 0;
  uStack_93 = 0;
  local_a8 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 400))(plVar2,&local_b0);
  }
  local_b0 = &PTR_FUN_027bba78;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_00e84dd8(&local_b0);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094d27c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bba78;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094d2bc(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 local_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  byte local_68 [16];
  void *local_58;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_98 = *(undefined8 *)(param_1 + 8);
  local_a0 = &PTR_FUN_027b9fd8;
  local_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_8b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_70 = *(undefined4 *)(param_1 + 0x30);
  local_78 = *(undefined8 *)(param_1 + 0x28);
  FUN_008fcdb8(local_68,param_1 + 0x38);
  local_50 = *(undefined1 *)(param_1 + 0x50);
  local_90 = 0;
  uStack_8b = 0;
  uStack_88 = 0;
  uStack_83 = 0;
  local_98 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x1a0))(plVar2,&local_a0);
  }
  local_a0 = &PTR_FUN_027b9fd8;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_00e84dd8(&local_a0);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094d3c0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_a8;
  undefined8 local_a0;
  undefined5 uStack_98;
  undefined3 local_93;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  byte local_80 [16];
  void *local_70;
  undefined4 local_68;
  undefined1 local_64;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_90 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = *(undefined8 *)(param_1 + 8);
  uStack_98 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_93 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_a8 = &PTR_FUN_027b99b0;
  FUN_008fcdb8(local_80,param_1 + 0x28);
  local_64 = *(undefined1 *)(param_1 + 0x44);
  local_68 = *(undefined4 *)(param_1 + 0x40);
  FUN_008fcdb8(local_60,param_1 + 0x48);
  local_a0 = 0;
  uStack_98 = 0;
  local_93 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x1a8))(plVar2,&local_a8);
  }
  local_a8 = &PTR_FUN_027b99b0;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  FUN_00e84dd8(&local_a8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094d4d8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_a8;
  undefined8 local_a0;
  undefined5 uStack_98;
  undefined3 local_93;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  byte local_80 [16];
  void *local_70;
  undefined4 local_68;
  undefined1 local_64;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_90 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = *(undefined8 *)(param_1 + 8);
  uStack_98 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_93 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_a8 = &PTR_FUN_027b99b0;
  FUN_008fcdb8(local_80,param_1 + 0x28);
  local_64 = *(undefined1 *)(param_1 + 0x44);
  local_68 = *(undefined4 *)(param_1 + 0x40);
  FUN_008fcdb8(local_60,param_1 + 0x48);
  local_a0 = 0;
  uStack_98 = 0;
  local_93 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x1b0))(plVar2,&local_a8);
  }
  local_a8 = &PTR_FUN_027b99b0;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  FUN_00e84dd8(&local_a8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094d5f0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_a8;
  undefined8 local_a0;
  undefined5 uStack_98;
  undefined3 local_93;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  byte local_80 [16];
  void *local_70;
  undefined4 local_68;
  undefined1 local_64;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_90 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = *(undefined8 *)(param_1 + 8);
  uStack_98 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_93 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_a8 = &PTR_FUN_027b99b0;
  FUN_008fcdb8(local_80,param_1 + 0x28);
  local_64 = *(undefined1 *)(param_1 + 0x44);
  local_68 = *(undefined4 *)(param_1 + 0x40);
  FUN_008fcdb8(local_60,param_1 + 0x48);
  local_a0 = 0;
  uStack_98 = 0;
  local_93 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x1b8))(plVar2,&local_a8);
  }
  local_a8 = &PTR_FUN_027b99b0;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  FUN_00e84dd8(&local_a8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094d708(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00948c80();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x1c0))(plVar1);
  }
  return;
}




void FUN_0094d744(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00948c80();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x1c8))(plVar1);
  }
  return;
}




void FUN_0094d780(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00948c80();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x1d0))(plVar1);
  }
  return;
}




void FUN_0094d7bc(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00948c80();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 600))(plVar1);
  }
  return;
}




void FUN_0094d7f8(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00948c80();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x198))(plVar1);
  }
  return;
}




void FUN_0094d834(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00948c80();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x1d8))(plVar1);
  }
  return;
}




void FUN_0094d870(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00948c80();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x1e0))(plVar1);
  }
  return;
}




void FUN_0094d8ac(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_288 [8];
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  FUN_0094d960(auStack_288,param_1);
  local_280 = 0;
  uStack_278 = 0;
  local_270 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x268))(plVar2,auStack_288);
  }
  FUN_0094dae0(auStack_288);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094d960(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_02820de0;
  uVar1 = *(undefined8 *)(param_2 + 0x15);
  *(undefined8 *)((long)param_1 + 0x1d) = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)((long)param_1 + 0x15) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *param_1 = &PTR_FUN_027bbaa8;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  FUN_008fcdb8(param_1 + 5,param_2 + 0x28);
  FUN_008fcdb8(param_1 + 8,param_2 + 0x40);
  FUN_008fcdb8(param_1 + 0xb,param_2 + 0x58);
  FUN_008fcdb8(param_1 + 0xe,param_2 + 0x70);
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  param_1[0x11] = uVar1;
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  FUN_008fcdb8(param_1 + 0x14,param_2 + 0xa0);
  FUN_008fcdb8(param_1 + 0x17,param_2 + 0xb8);
  FUN_008fcdb8(param_1 + 0x1a,param_2 + 0xd0);
  FUN_008fcdb8(param_1 + 0x1d,param_2 + 0xe8);
  FUN_008fcdb8(param_1 + 0x20,param_2 + 0x100);
  FUN_008fcdb8(param_1 + 0x23,param_2 + 0x118);
  FUN_008fcdb8(param_1 + 0x26,param_2 + 0x130);
  FUN_008fcdb8(param_1 + 0x29,param_2 + 0x148);
  FUN_008fcdb8(param_1 + 0x2c,param_2 + 0x160);
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_2 + 0x178);
  FUN_008fcdb8(param_1 + 0x30,param_2 + 0x180);
  FUN_008fcdb8(param_1 + 0x33,param_2 + 0x198);
  param_1[0x3a] = *(undefined8 *)(param_2 + 0x1d0);
  uVar1 = *(undefined8 *)(param_2 + 0x1c0);
  param_1[0x39] = *(undefined8 *)(param_2 + 0x1c8);
  param_1[0x38] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x1b0);
  param_1[0x37] = *(undefined8 *)(param_2 + 0x1b8);
  param_1[0x36] = uVar1;
  FUN_009545b8(param_1 + 0x3b,param_2 + 0x1d8);
  FUN_00954658(param_1 + 0x3d,param_2 + 0x1e8);
  FUN_009546d4(param_1 + 0x3f,param_2 + 0x1f8);
  FUN_00954760(param_1 + 0x41,param_2 + 0x208);
  *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_2 + 0x218);
  FUN_008fcdb8(param_1 + 0x44,param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x47) = *(undefined4 *)(param_2 + 0x238);
  return;
}




void FUN_0094dae0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbaa8;
  if ((*(byte *)(param_1 + 0x44) & 1) != 0) {
    operator_delete((void *)param_1[0x46]);
  }
  FUN_00955098(param_1 + 0x41,1);
  FUN_00955134(param_1 + 0x3f,1);
  FUN_009551c0(param_1 + 0x3d,1);
  FUN_00954e24(param_1 + 0x3b,1);
  if ((*(byte *)(param_1 + 0x33) & 1) != 0) {
    operator_delete((void *)param_1[0x35]);
  }
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    operator_delete((void *)param_1[0x32]);
  }
  FUN_00936630(param_1 + 0x13);
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    operator_delete((void *)param_1[0x10]);
  }
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    operator_delete((void *)param_1[0xd]);
  }
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094dbb8(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00948c80();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x270))(plVar1);
  }
  return;
}




void FUN_0094dbf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00948c80();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x278))(plVar1,param_1,param_2,param_3);
  }
  return;
}




void FUN_0094dc50(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_a8;
  undefined8 local_a0;
  undefined5 uStack_98;
  undefined3 local_93;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined4 local_83;
  undefined2 local_7f;
  undefined1 local_7d;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_90 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = *(undefined8 *)(param_1 + 8);
  local_a8 = &PTR_FUN_027bbad8;
  uStack_98 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_93 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_7d = *(undefined1 *)(param_1 + 0x2b);
  local_7f = *(undefined2 *)(param_1 + 0x29);
  local_83 = *(undefined4 *)(param_1 + 0x25);
  FUN_008fcdb8(local_78,param_1 + 0x30);
  FUN_008fcdb8(local_60,param_1 + 0x48);
  local_a0 = 0;
  uStack_98 = 0;
  local_93 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x280))(plVar2,&local_a8);
  }
  local_a8 = &PTR_FUN_027bbad8;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  FUN_00e84dd8(&local_a8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094dd70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bbad8;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094ddc0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_a8;
  undefined8 local_a0;
  undefined5 uStack_98;
  undefined3 local_93;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  byte local_80 [16];
  void *local_70;
  undefined4 local_68;
  undefined1 local_64;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_90 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = *(undefined8 *)(param_1 + 8);
  uStack_98 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_93 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_a8 = &PTR_FUN_027b99b0;
  FUN_008fcdb8(local_80,param_1 + 0x28);
  local_64 = *(undefined1 *)(param_1 + 0x44);
  local_68 = *(undefined4 *)(param_1 + 0x40);
  FUN_008fcdb8(local_60,param_1 + 0x48);
  local_a0 = 0;
  uStack_98 = 0;
  local_93 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x288))(plVar2,&local_a8);
  }
  local_a8 = &PTR_FUN_027b99b0;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  FUN_00e84dd8(&local_a8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094ded8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_a8;
  undefined8 local_a0;
  undefined5 uStack_98;
  undefined3 local_93;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  byte local_80 [16];
  void *local_70;
  undefined4 local_68;
  undefined1 local_64;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_90 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = *(undefined8 *)(param_1 + 8);
  uStack_98 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_93 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_a8 = &PTR_FUN_027b99b0;
  FUN_008fcdb8(local_80,param_1 + 0x28);
  local_64 = *(undefined1 *)(param_1 + 0x44);
  local_68 = *(undefined4 *)(param_1 + 0x40);
  FUN_008fcdb8(local_60,param_1 + 0x48);
  local_a0 = 0;
  uStack_98 = 0;
  local_93 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x290))(plVar2,&local_a8);
  }
  local_a8 = &PTR_FUN_027b99b0;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  FUN_00e84dd8(&local_a8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094dff0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_a8;
  undefined8 local_a0;
  undefined5 uStack_98;
  undefined3 local_93;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  byte local_80 [16];
  void *local_70;
  undefined4 local_68;
  undefined1 local_64;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_90 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = *(undefined8 *)(param_1 + 8);
  uStack_98 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_93 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_a8 = &PTR_FUN_027b99b0;
  FUN_008fcdb8(local_80,param_1 + 0x28);
  local_64 = *(undefined1 *)(param_1 + 0x44);
  local_68 = *(undefined4 *)(param_1 + 0x40);
  FUN_008fcdb8(local_60,param_1 + 0x48);
  local_a0 = 0;
  uStack_98 = 0;
  local_93 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x298))(plVar2,&local_a8);
  }
  local_a8 = &PTR_FUN_027b99b0;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  FUN_00e84dd8(&local_a8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

