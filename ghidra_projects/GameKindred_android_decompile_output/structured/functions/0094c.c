// functions/0094c — 23 functions
#include "libGameKindred.h"




void FUN_0094c010(long param_1)

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
  local_88 = &PTR_FUN_027bb838;
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
    (**(code **)(*plVar2 + 0x1f8))(plVar2,&local_88);
  }
  local_88 = &PTR_FUN_027bb838;
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




void FUN_0094c104(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb838;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094c144(long param_1)

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
  local_88 = &PTR_FUN_027bb868;
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
    (**(code **)(*plVar2 + 0x200))(plVar2,&local_88);
  }
  local_88 = &PTR_FUN_027bb868;
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




void FUN_0094c238(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb868;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094c278(long param_1)

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
  local_88 = &PTR_FUN_027bb898;
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
    (**(code **)(*plVar2 + 0x208))(plVar2,&local_88);
  }
  local_88 = &PTR_FUN_027bb898;
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




void FUN_0094c36c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb898;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094c3ac(long param_1)

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
  local_88 = &PTR_FUN_027bb8c8;
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
    (**(code **)(*plVar2 + 0x210))(plVar2,&local_88);
  }
  local_88 = &PTR_FUN_027bb8c8;
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




void FUN_0094c4a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb8c8;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094c4e0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_60;
  undefined8 uStack_58;
  undefined5 local_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  undefined1 local_3b;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_40 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  local_60 = &PTR_FUN_027bb8f8;
  uStack_58 = 0;
  local_3b = *(undefined1 *)(param_1 + 0x25);
  local_50 = 0;
  uStack_4b = 0;
  uStack_48 = 0;
  uStack_43 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x218))(plVar2,&local_60);
  }
  FUN_00e84dd8(&local_60);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094c5a4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_a8;
  undefined8 local_a0;
  undefined5 local_98;
  undefined3 uStack_93;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_90 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = *(undefined8 *)(param_1 + 8);
  local_98 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_93 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_a8 = &PTR_FUN_027bb928;
  FUN_008fcdb8(local_80,param_1 + 0x28);
  FUN_008fcdb8(local_68,param_1 + 0x40);
  local_50 = *(undefined4 *)(param_1 + 0x58);
  local_98 = 0;
  uStack_93 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_a0 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x220))(plVar2,&local_a8);
  }
  local_a8 = &PTR_FUN_027bb928;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
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




void FUN_0094c6b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb928;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094c704(long param_1)

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
  undefined1 local_4c;
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
  local_88 = &PTR_FUN_027bb958;
  FUN_009531f8(auStack_60,param_1 + 0x28);
  local_4c = *(undefined1 *)(param_1 + 0x3c);
  local_50 = *(undefined4 *)(param_1 + 0x38);
  local_78 = 0;
  uStack_73 = 0;
  uStack_70 = 0;
  uStack_6b = 0;
  local_80 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x228))(plVar2,&local_88);
  }
  local_88 = &PTR_FUN_027bb958;
  FUN_00953988(auStack_60,1);
  FUN_00e84dd8(&local_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094c800(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb958;
  FUN_00953988(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094c838(long param_1)

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
  undefined1 local_4c;
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
  local_88 = &PTR_FUN_027bb958;
  FUN_009531f8(auStack_60,param_1 + 0x28);
  local_4c = *(undefined1 *)(param_1 + 0x3c);
  local_50 = *(undefined4 *)(param_1 + 0x38);
  local_78 = 0;
  uStack_73 = 0;
  uStack_70 = 0;
  uStack_6b = 0;
  local_80 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x230))(plVar2,&local_88);
  }
  local_88 = &PTR_FUN_027bb958;
  FUN_00953988(auStack_60,1);
  FUN_00e84dd8(&local_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094c934(long param_1)

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
  undefined1 local_4c;
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
  local_88 = &PTR_FUN_027bb958;
  FUN_009531f8(auStack_60,param_1 + 0x28);
  local_4c = *(undefined1 *)(param_1 + 0x3c);
  local_50 = *(undefined4 *)(param_1 + 0x38);
  local_78 = 0;
  uStack_73 = 0;
  uStack_70 = 0;
  uStack_6b = 0;
  local_80 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x238))(plVar2,&local_88);
  }
  local_88 = &PTR_FUN_027bb958;
  FUN_00953988(auStack_60,1);
  FUN_00e84dd8(&local_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094ca30(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_c8;
  undefined8 local_c0;
  undefined5 local_b8;
  undefined3 uStack_b3;
  undefined5 uStack_b0;
  undefined3 uStack_ab;
  undefined5 uStack_a8;
  undefined1 auStack_a0 [16];
  byte local_90 [16];
  void *local_80;
  undefined1 auStack_78 [16];
  undefined8 local_68;
  undefined2 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_ab = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_a8 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_b0 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_c0 = *(undefined8 *)(param_1 + 8);
  local_b8 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_b3 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_c8 = &PTR_FUN_027bb988;
  FUN_00951ac8(auStack_a0,param_1 + 0x28);
  FUN_008fcdb8(local_90,param_1 + 0x38);
  FUN_009539f8(auStack_78,param_1 + 0x50);
  local_60 = *(undefined2 *)(param_1 + 0x68);
  local_68 = *(undefined8 *)(param_1 + 0x60);
  local_b8 = 0;
  uStack_b3 = 0;
  uStack_b0 = 0;
  uStack_ab = 0;
  local_c0 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x240))(plVar2,&local_c8);
  }
  local_c8 = &PTR_FUN_027bb988;
  FUN_00953ec8(auStack_78,1);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  FUN_00951cf4(auStack_a0,1);
  FUN_00e84dd8(&local_c8);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094cb6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb988;
  FUN_00953ec8(param_1 + 10,1);
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  FUN_00951cf4(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094cbc0(long param_1)

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
    (**(code **)(*plVar2 + 0x248))(plVar2,&local_a8);
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




void FUN_0094ccd8(long param_1)

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
  undefined4 local_40;
  undefined2 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_48 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  local_68 = &PTR_FUN_027bb9b8;
  uStack_60 = 0;
  local_3c = *(undefined2 *)(param_1 + 0x2c);
  local_40 = *(undefined4 *)(param_1 + 0x28);
  local_58 = 0;
  uStack_53 = 0;
  uStack_50 = 0;
  uStack_4b = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x250))(plVar2,&local_68);
  }
  FUN_00e84dd8(&local_68);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094cda4(long param_1)

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
  undefined1 auStack_88 [16];
  byte local_78 [16];
  void *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_93 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_90 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_98 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a8 = *(undefined8 *)(param_1 + 8);
  local_a0 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_9b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_b0 = &PTR_FUN_027bb9e8;
  FUN_00953f98(auStack_88,param_1 + 0x28);
  FUN_008fcdb8(local_78,param_1 + 0x38);
  local_60 = *(undefined4 *)(param_1 + 0x50);
  local_a0 = 0;
  uStack_9b = 0;
  uStack_98 = 0;
  uStack_93 = 0;
  local_a8 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x178))(plVar2,&local_b0);
  }
  local_b0 = &PTR_FUN_027bb9e8;
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  FUN_00954178(auStack_88,1);
  FUN_00e84dd8(&local_b0);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094cebc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb9e8;
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  FUN_00954178(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094cf08(long param_1)

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
  local_88 = &PTR_FUN_027bba18;
  FUN_00954204(auStack_60,param_1 + 0x28);
  local_50 = *(undefined4 *)(param_1 + 0x38);
  local_78 = 0;
  uStack_73 = 0;
  uStack_70 = 0;
  uStack_6b = 0;
  local_80 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x180))(plVar2,&local_88);
  }
  local_88 = &PTR_FUN_027bba18;
  FUN_009544a8(auStack_60,1);
  FUN_00e84dd8(&local_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094cffc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bba18;
  FUN_009544a8(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  return;
}

