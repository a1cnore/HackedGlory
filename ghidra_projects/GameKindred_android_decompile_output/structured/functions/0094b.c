// functions/0094b — 23 functions
#include "libGameKindred.h"




void FUN_0094b0b0(undefined8 param_1)

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
    (**(code **)(*plVar2 + 0x128))(plVar2,auStack_548);
  }
  FUN_0094a030(auStack_548);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094b164(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_508 [8];
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  FUN_0094b218(auStack_508,param_1);
  local_500 = 0;
  uStack_4f8 = 0;
  local_4f0 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x130))(plVar2,auStack_508);
  }
  FUN_0094b310(auStack_508);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094b218(undefined8 *param_1,long param_2)

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
  *param_1 = &PTR_FUN_027bb658;
  param_1[2] = uVar5;
  param_1[1] = uVar4;
  FUN_00951dcc(param_1 + 5,param_2 + 0x28);
  FUN_008fcdb8(param_1 + 7,param_2 + 0x38);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  FUN_008fcdb8(param_1 + 0xb,param_2 + 0x58);
  FUN_008fcdb8(param_1 + 0xe,param_2 + 0x70);
  lVar3 = 0;
  do {
    lVar2 = param_2 + lVar3;
    FUN_008fcdb8((long)param_1 + lVar3 + 0x88,lVar2 + 0x88);
    FUN_008fcdb8((long)param_1 + lVar3 + 0xa0,lVar2 + 0xa0);
    uVar4 = *(undefined8 *)(lVar2 + 0xb8);
    lVar1 = lVar3 + 0x40;
    *(undefined8 *)((long)param_1 + lVar3 + 0xc0) = *(undefined8 *)(lVar2 + 0xc0);
    *(undefined8 *)((long)param_1 + lVar3 + 0xb8) = uVar4;
    lVar3 = lVar1;
  } while (lVar1 != 0x400);
  FUN_008fcdb8(param_1 + 0x91,param_2 + 0x488);
  FUN_008fcdb8(param_1 + 0x94,param_2 + 0x4a0);
  *(undefined1 *)((long)param_1 + 0x4bc) = *(undefined1 *)(param_2 + 0x4bc);
  *(undefined4 *)(param_1 + 0x97) = *(undefined4 *)(param_2 + 0x4b8);
  return;
}




void FUN_0094b310(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027bb658;
  if ((*(byte *)(param_1 + 0x94) & 1) != 0) {
    operator_delete((void *)param_1[0x96]);
  }
  if ((*(byte *)(param_1 + 0x91) & 1) != 0) {
    operator_delete((void *)param_1[0x93]);
  }
  lVar1 = 0x400;
  do {
    if ((*(byte *)((long)param_1 + lVar1 + 0x60) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x70));
    }
    if ((*(byte *)((long)param_1 + lVar1 + 0x48) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x58));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != 0);
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    operator_delete((void *)param_1[0x10]);
  }
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    operator_delete((void *)param_1[0xd]);
  }
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[9]);
  }
  FUN_00952050(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094b3d8(long param_1)

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
  local_88 = &PTR_FUN_027bb688;
  FUN_009522dc(auStack_60,param_1 + 0x28);
  local_50 = *(undefined4 *)(param_1 + 0x38);
  local_78 = 0;
  uStack_73 = 0;
  uStack_70 = 0;
  uStack_6b = 0;
  local_80 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x138))(plVar2,&local_88);
  }
  local_88 = &PTR_FUN_027bb688;
  FUN_009528b8(auStack_60,1);
  FUN_00e84dd8(&local_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094b4cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb688;
  FUN_009528b8(param_1 + 5,1);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094b504(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00948c80();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x140))(plVar1);
  }
  return;
}




void FUN_0094b540(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00948c80();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x148))(plVar1,param_1);
  }
  return;
}




void FUN_0094b584(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_c0;
  undefined8 local_b8;
  undefined5 uStack_b0;
  undefined3 local_ab;
  undefined5 uStack_a8;
  undefined3 uStack_a3;
  undefined5 uStack_a0;
  undefined4 local_98;
  undefined1 local_94;
  byte local_90 [16];
  void *local_80;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_a3 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_a0 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_a8 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_b8 = *(undefined8 *)(param_1 + 8);
  local_c0 = &PTR_FUN_027bb6b8;
  uStack_b0 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_ab = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_94 = *(undefined1 *)(param_1 + 0x2c);
  local_98 = *(undefined4 *)(param_1 + 0x28);
  FUN_008fcdb8(local_90,param_1 + 0x30);
  FUN_008fcdb8(local_78,param_1 + 0x48);
  FUN_008fcdb8(local_60,param_1 + 0x60);
  local_b8 = 0;
  uStack_b0 = 0;
  local_ab = 0;
  uStack_a8 = 0;
  uStack_a3 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x150))(plVar2,&local_c0);
  }
  local_c0 = &PTR_FUN_027bb6b8;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  FUN_00e84dd8(&local_c0);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094b6b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb6b8;
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    operator_delete((void *)param_1[0xe]);
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094b718(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_d8;
  undefined8 local_d0;
  undefined5 uStack_c8;
  undefined3 local_c3;
  undefined5 uStack_c0;
  undefined3 uStack_bb;
  undefined5 uStack_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  byte local_a8 [16];
  void *local_98;
  byte local_90 [16];
  void *local_80;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_bb = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_b8 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_c0 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_d0 = *(undefined8 *)(param_1 + 8);
  local_d8 = &PTR_FUN_027bb6e8;
  uStack_c8 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_c3 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_ac = *(undefined1 *)(param_1 + 0x2c);
  local_b0 = *(undefined4 *)(param_1 + 0x28);
  FUN_008fcdb8(local_a8,param_1 + 0x30);
  FUN_008fcdb8(local_90,param_1 + 0x48);
  FUN_008fcdb8(local_78,param_1 + 0x60);
  FUN_008fcdb8(local_60,param_1 + 0x78);
  local_d0 = 0;
  uStack_c8 = 0;
  local_c3 = 0;
  uStack_c0 = 0;
  uStack_bb = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x158))(plVar2,&local_d8);
  }
  local_d8 = &PTR_FUN_027bb6e8;
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  FUN_00e84dd8(&local_d8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094b868(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb6e8;
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    operator_delete((void *)param_1[0x11]);
  }
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    operator_delete((void *)param_1[0xe]);
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094b8d8(long param_1)

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
  undefined4 local_80;
  undefined1 local_7c;
  byte local_78 [16];
  void *local_68;
  undefined1 auStack_60 [16];
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
  local_a8 = &PTR_FUN_027bb718;
  local_98 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_93 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_7c = *(undefined1 *)(param_1 + 0x2c);
  local_80 = *(undefined4 *)(param_1 + 0x28);
  FUN_008fcdb8(local_78,param_1 + 0x30);
  FUN_00952a2c(auStack_60,param_1 + 0x48);
  local_50 = *(undefined4 *)(param_1 + 0x58);
  local_98 = 0;
  uStack_93 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_a0 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x160))(plVar2,&local_a8);
  }
  local_a8 = &PTR_FUN_027bb718;
  FUN_00952bf0(auStack_60,1);
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




void FUN_0094b9f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb718;
  FUN_00952bf0(param_1 + 9,1);
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094ba40(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 local_8b;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined4 local_78;
  byte local_70 [16];
  void *local_60;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_98 = *(undefined8 *)(param_1 + 8);
  local_a0 = &PTR_FUN_027bb748;
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  local_8b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_78 = *(undefined4 *)(param_1 + 0x28);
  FUN_008fcdb8(local_70,param_1 + 0x30);
  FUN_00951160(auStack_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  local_8b = 0;
  uStack_88 = 0;
  uStack_83 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x260))(plVar2,&local_a0);
  }
  local_a0 = &PTR_FUN_027bb748;
  FUN_00951534(auStack_58,1);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  FUN_00e84dd8(&local_a0);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094bb50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb748;
  FUN_00951534(param_1 + 9,1);
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094bb98(long param_1)

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
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  byte local_68 [16];
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_90 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = *(undefined8 *)(param_1 + 8);
  local_a8 = &PTR_FUN_027bb778;
  local_98 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_93 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_70 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = *(undefined8 *)(param_1 + 0x30);
  local_80 = *(undefined8 *)(param_1 + 0x28);
  FUN_008fcdb8(local_68,param_1 + 0x40);
  local_50 = *(undefined8 *)(param_1 + 0x58);
  local_98 = 0;
  uStack_93 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_a0 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x168))(plVar2,&local_a8);
  }
  local_a8 = &PTR_FUN_027bb778;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_00e84dd8(&local_a8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094bc9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb778;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094bcdc(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_70;
  undefined8 uStack_68;
  undefined5 local_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_50 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  local_70 = &PTR_FUN_027bb7a8;
  uStack_68 = 0;
  local_40 = *(undefined4 *)(param_1 + 0x30);
  local_48 = *(undefined8 *)(param_1 + 0x28);
  local_60 = 0;
  uStack_5b = 0;
  uStack_58 = 0;
  uStack_53 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x170))(plVar2,&local_70);
  }
  FUN_00e84dd8(&local_70);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094bda8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_90;
  undefined8 local_88;
  undefined5 local_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  byte local_68 [16];
  void *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_73 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_78 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_88 = *(undefined8 *)(param_1 + 8);
  local_80 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_7b = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_90 = &PTR_FUN_027bb7d8;
  FUN_008fcdb8(local_68,param_1 + 0x28);
  local_50 = *(undefined4 *)(param_1 + 0x40);
  local_80 = 0;
  uStack_7b = 0;
  uStack_78 = 0;
  uStack_73 = 0;
  local_88 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x1e8))(plVar2,&local_90);
  }
  local_90 = &PTR_FUN_027bb7d8;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_00e84dd8(&local_90);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094be9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb7d8;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094bedc(long param_1)

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
  local_88 = &PTR_FUN_027bb808;
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
    (**(code **)(*plVar2 + 0x1f0))(plVar2,&local_88);
  }
  local_88 = &PTR_FUN_027bb808;
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




void FUN_0094bfd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bb808;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}

