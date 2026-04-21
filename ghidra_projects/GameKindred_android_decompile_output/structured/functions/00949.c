// functions/00949 — 20 functions
#include "libGameKindred.h"




void FUN_009490ac(undefined8 *param_1)

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
  return;
}




void FUN_00949114(long param_1)

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
  undefined4 local_60;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_80 = *(undefined8 *)(param_1 + 8);
  local_88 = &PTR_FUN_027bb478;
  uStack_78 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_73 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x28);
  FUN_00951654(auStack_58,param_1 + 0x30);
  local_80 = 0;
  uStack_78 = 0;
  local_73 = 0;
  uStack_70 = 0;
  uStack_6b = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_88);
  }
  local_88 = &PTR_FUN_027bb478;
  FUN_00951928(auStack_58,1);
  FUN_00e84dd8(&local_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00949208(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb478;
  FUN_00951928(param_1 + 6,1);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_00949240(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00948c80();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  }
  return;
}




void FUN_00949284(long param_1)

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
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_a8);
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




void FUN_0094939c(long param_1)

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
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_a8);
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




void FUN_009494b4(long param_1)

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
    (**(code **)(*plVar2 + 0x80))(plVar2,&local_88);
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




void FUN_009495a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb4a8;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_009495e8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_88;
  undefined8 local_80;
  undefined5 local_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined1 auStack_60 [16];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_80 = *(undefined8 *)(param_1 + 8);
  local_78 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_73 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_88 = &PTR_FUN_027bb4d8;
  FUN_00951ac8(auStack_60,param_1 + 0x28);
  local_50 = *(undefined4 *)(param_1 + 0x38);
  local_78 = 0;
  uStack_73 = 0;
  uStack_70 = 0;
  uStack_6b = 0;
  local_80 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x90))(plVar2,&local_88);
  }
  local_88 = &PTR_FUN_027bb4d8;
  FUN_00951cf4(auStack_60,1);
  FUN_00e84dd8(&local_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009496dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb4d8;
  FUN_00951cf4(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_00949714(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_88;
  undefined8 local_80;
  undefined5 local_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined1 auStack_60 [16];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_80 = *(undefined8 *)(param_1 + 8);
  local_78 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_73 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_88 = &PTR_FUN_027bb4d8;
  FUN_00951ac8(auStack_60,param_1 + 0x28);
  local_50 = *(undefined4 *)(param_1 + 0x38);
  local_78 = 0;
  uStack_73 = 0;
  uStack_70 = 0;
  uStack_6b = 0;
  local_80 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x98))(plVar2,&local_88);
  }
  local_88 = &PTR_FUN_027bb4d8;
  FUN_00951cf4(auStack_60,1);
  FUN_00e84dd8(&local_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00949808(long param_1)

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
    (**(code **)(*plVar2 + 0xa0))(plVar2,&local_88);
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




void FUN_009498fc(long param_1)

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
    (**(code **)(*plVar2 + 0xa8))(plVar2,&local_88);
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




void FUN_009499f0(long param_1)

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
    (**(code **)(*plVar2 + 0x88))(plVar2,&local_88);
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




void FUN_00949ae4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_68;
  undefined8 uStack_60;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_48 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  local_68 = &PTR_FUN_027bb508;
  uStack_60 = 0;
  local_40 = *(undefined8 *)(param_1 + 0x28);
  local_58 = 0;
  uStack_53 = 0;
  uStack_50 = 0;
  uStack_4b = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0xb0))(plVar2,&local_68);
  }
  FUN_00e84dd8(&local_68);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00949ba8(long param_1)

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
    (**(code **)(*plVar2 + 0xb8))(plVar2,&local_a8);
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




void FUN_00949cc0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_d0;
  undefined8 local_c8;
  undefined5 local_c0;
  undefined3 uStack_bb;
  undefined5 uStack_b8;
  undefined3 uStack_b3;
  undefined5 uStack_b0;
  byte local_a8 [16];
  void *local_98;
  byte local_90 [16];
  void *local_80;
  byte local_78 [16];
  void *local_68;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_b3 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_b0 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_b8 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_c8 = *(undefined8 *)(param_1 + 8);
  local_c0 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_bb = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_d0 = &PTR_FUN_027bb538;
  FUN_008fcdb8(local_a8,param_1 + 0x28);
  FUN_008fcdb8(local_90,param_1 + 0x40);
  FUN_008fcdb8(local_78,param_1 + 0x58);
  FUN_00951dcc(auStack_60,param_1 + 0x70);
  local_50 = *(undefined8 *)(param_1 + 0x80);
  local_c0 = 0;
  uStack_bb = 0;
  uStack_b8 = 0;
  uStack_b3 = 0;
  local_c8 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0xd0))(plVar2,&local_d0);
  }
  local_d0 = &PTR_FUN_027bb538;
  FUN_00952050(auStack_60,1);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  FUN_00e84dd8(&local_d0);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00949e08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb538;
  FUN_00952050(param_1 + 0xe,1);
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




void FUN_00949e70(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_548 [8];
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  FUN_00949f24(auStack_548,param_1);
  local_540 = 0;
  uStack_538 = 0;
  local_530 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0xc0))(plVar2,auStack_548);
  }
  FUN_0094a030(auStack_548);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00949f24(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_02820de0;
  uVar4 = *(undefined8 *)(param_2 + 0x15);
  *(undefined8 *)((long)param_1 + 0x1d) = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)((long)param_1 + 0x15) = uVar4;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 8);
  *param_1 = &PTR_FUN_027bb568;
  param_1[2] = uVar5;
  param_1[1] = uVar4;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  FUN_008fcdb8(param_1 + 6,param_2 + 0x30);
  FUN_008fcdb8(param_1 + 9,param_2 + 0x48);
  lVar3 = 0;
  do {
    lVar2 = param_2 + lVar3;
    FUN_008fcdb8((long)param_1 + lVar3 + 0x60,lVar2 + 0x60);
    FUN_008fcdb8((long)param_1 + lVar3 + 0x78,lVar2 + 0x78);
    uVar4 = *(undefined8 *)(lVar2 + 0x90);
    lVar1 = lVar3 + 0x40;
    *(undefined8 *)((long)param_1 + lVar3 + 0x98) = *(undefined8 *)(lVar2 + 0x98);
    *(undefined8 *)((long)param_1 + lVar3 + 0x90) = uVar4;
    lVar3 = lVar1;
  } while (lVar1 != 0x400);
  FUN_008fcdb8(param_1 + 0x8c,param_2 + 0x460);
  FUN_008fcdb8(param_1 + 0x8f,param_2 + 0x478);
  *(undefined4 *)(param_1 + 0x93) = *(undefined4 *)(param_2 + 0x498);
  param_1[0x92] = *(undefined8 *)(param_2 + 0x490);
  FUN_008fcdb8(param_1 + 0x94,param_2 + 0x4a0);
  FUN_008fcdb8(param_1 + 0x97,param_2 + 0x4b8);
  FUN_008fcdb8(param_1 + 0x9a,param_2 + 0x4d0);
  FUN_008fcdb8(param_1 + 0x9d,param_2 + 0x4e8);
  return;
}

