// functions/0094e — 15 functions
#include "libGameKindred.h"




void FUN_0094e108(long param_1)

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
    (**(code **)(*plVar2 + 0x2a0))(plVar2,&local_a8);
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




void FUN_0094e220(long param_1)

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
    (**(code **)(*plVar2 + 0x2a8))(plVar2,&local_a8);
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




void FUN_0094e338(long param_1)

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
    (**(code **)(*plVar2 + 0x2b0))(plVar2,&local_a8);
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




void FUN_0094e450(long param_1)

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
    (**(code **)(*plVar2 + 0x2b8))(plVar2,&local_a8);
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




void FUN_0094e568(long param_1)

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
    (**(code **)(*plVar2 + 0x2c0))(plVar2,&local_a8);
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




void FUN_0094e680(long param_1)

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
    (**(code **)(*plVar2 + 0x2c8))(plVar2,&local_a8);
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




void FUN_0094e798(long param_1)

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
    (**(code **)(*plVar2 + 0x2d0))(plVar2,&local_a8);
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




void FUN_0094e8b0(long param_1)

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
    (**(code **)(*plVar2 + 0x2d8))(plVar2,&local_a8);
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




void FUN_0094e9c8(long param_1)

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
    (**(code **)(*plVar2 + 0x2e0))(plVar2,&local_a8);
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




void FUN_0094eae0(long param_1)

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
    (**(code **)(*plVar2 + 0x2e8))(plVar2,&local_a8);
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




void FUN_0094ebf8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_88;
  undefined8 local_80;
  undefined5 uStack_78;
  undefined3 local_73;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined1 local_63;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_80 = *(undefined8 *)(param_1 + 8);
  local_88 = &PTR_FUN_027bb4a8;
  uStack_78 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_73 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_63 = *(undefined1 *)(param_1 + 0x25);
  FUN_008fcdb8(local_60,param_1 + 0x28);
  local_80 = 0;
  uStack_78 = 0;
  local_73 = 0;
  uStack_70 = 0;
  uStack_6b = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x2f0))(plVar2,&local_88);
  }
  local_88 = &PTR_FUN_027bb4a8;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  FUN_00e84dd8(&local_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094ecec(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_88;
  undefined8 local_80;
  undefined5 uStack_78;
  undefined3 local_73;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined1 local_63;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_80 = *(undefined8 *)(param_1 + 8);
  local_88 = &PTR_FUN_027bb4a8;
  uStack_78 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_73 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_63 = *(undefined1 *)(param_1 + 0x25);
  FUN_008fcdb8(local_60,param_1 + 0x28);
  local_80 = 0;
  uStack_78 = 0;
  local_73 = 0;
  uStack_70 = 0;
  uStack_6b = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x2f8))(plVar2,&local_88);
  }
  local_88 = &PTR_FUN_027bb4a8;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  FUN_00e84dd8(&local_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094ede0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_88;
  undefined8 local_80;
  undefined5 uStack_78;
  undefined3 local_73;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined1 local_63;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_80 = *(undefined8 *)(param_1 + 8);
  local_88 = &PTR_FUN_027bb4a8;
  uStack_78 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_73 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_63 = *(undefined1 *)(param_1 + 0x25);
  FUN_008fcdb8(local_60,param_1 + 0x28);
  local_80 = 0;
  uStack_78 = 0;
  local_73 = 0;
  uStack_70 = 0;
  uStack_6b = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x300))(plVar2,&local_88);
  }
  local_88 = &PTR_FUN_027bb4a8;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  FUN_00e84dd8(&local_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094eed4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_88;
  undefined8 local_80;
  undefined5 uStack_78;
  undefined3 local_73;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined1 local_63;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_80 = *(undefined8 *)(param_1 + 8);
  local_88 = &PTR_FUN_027bb4a8;
  uStack_78 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_73 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_63 = *(undefined1 *)(param_1 + 0x25);
  FUN_008fcdb8(local_60,param_1 + 0x28);
  local_80 = 0;
  uStack_78 = 0;
  local_73 = 0;
  uStack_70 = 0;
  uStack_6b = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x308))(plVar2,&local_88);
  }
  local_88 = &PTR_FUN_027bb4a8;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  FUN_00e84dd8(&local_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094efc8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_128;
  undefined8 local_120;
  undefined5 local_118;
  undefined3 uStack_113;
  undefined5 uStack_110;
  undefined3 uStack_10b;
  undefined5 uStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 local_70;
  undefined1 auStack_68 [24];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_10b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_108 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_110 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_120 = *(undefined8 *)(param_1 + 8);
  local_118 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_113 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_128 = &PTR_FUN_027bbb08;
  FUN_008fcdb8(auStack_100,param_1 + 0x28);
  FUN_008fcdb8(auStack_e8,param_1 + 0x40);
  FUN_008fcdb8(auStack_d0,param_1 + 0x58);
  local_98 = *(undefined1 *)(param_1 + 0x90);
  uStack_a0 = *(undefined8 *)(param_1 + 0x88);
  local_a8 = *(undefined8 *)(param_1 + 0x80);
  uStack_b0 = *(undefined8 *)(param_1 + 0x78);
  local_b8 = *(undefined8 *)(param_1 + 0x70);
  FUN_00955298(auStack_90,param_1 + 0x98);
  FUN_0095532c(auStack_80,param_1 + 0xa8);
  local_70 = *(undefined1 *)(param_1 + 0xb8);
  FUN_008fcdb8(auStack_68,param_1 + 0xc0);
  local_50 = *(undefined4 *)(param_1 + 0xd8);
  local_118 = 0;
  uStack_113 = 0;
  uStack_110 = 0;
  uStack_10b = 0;
  local_120 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x310))(plVar2,&local_128);
  }
  FUN_0094f104(&local_128);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

