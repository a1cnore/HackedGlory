// functions/0094a — 17 functions
#include "libGameKindred.h"




void FUN_0094a030(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027bb568;
  if ((*(byte *)(param_1 + 0x9d) & 1) != 0) {
    operator_delete((void *)param_1[0x9f]);
  }
  if ((*(byte *)(param_1 + 0x9a) & 1) != 0) {
    operator_delete((void *)param_1[0x9c]);
  }
  if ((*(byte *)(param_1 + 0x97) & 1) != 0) {
    operator_delete((void *)param_1[0x99]);
  }
  if ((*(byte *)(param_1 + 0x94) & 1) != 0) {
    operator_delete((void *)param_1[0x96]);
  }
  if ((*(byte *)(param_1 + 0x8f) & 1) != 0) {
    operator_delete((void *)param_1[0x91]);
  }
  if ((*(byte *)(param_1 + 0x8c) & 1) != 0) {
    operator_delete((void *)param_1[0x8e]);
  }
  lVar1 = 0x400;
  do {
    if ((*(byte *)((long)param_1 + lVar1 + 0x38) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x48));
    }
    if ((*(byte *)((long)param_1 + lVar1 + 0x20) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x30));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != 0);
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094a11c(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00948c80();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 200))(plVar1,param_1,param_2,param_3);
  }
  return;
}




void FUN_0094a178(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **local_4b8;
  undefined8 local_4b0;
  undefined5 local_4a8;
  undefined3 uStack_4a3;
  undefined5 uStack_4a0;
  undefined3 uStack_49b;
  undefined5 uStack_498;
  undefined4 local_490;
  undefined1 local_48c;
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined8 local_458 [114];
  byte local_c8 [16];
  undefined8 local_b8;
  byte local_b0 [16];
  undefined8 local_a0 [3];
  byte local_88 [16];
  void *local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  plVar4 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_49b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_498 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_4a0 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_4b0 = *(undefined8 *)(param_1 + 8);
  local_4b8 = &PTR_FUN_027bb598;
  local_4a8 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_4a3 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_48c = *(undefined1 *)(param_1 + 0x2c);
  local_490 = *(undefined4 *)(param_1 + 0x28);
  lVar5 = 0;
  do {
    lVar2 = param_1 + lVar5;
    FUN_008fcdb8(auStack_488 + lVar5,lVar2 + 0x30);
    FUN_008fcdb8(auStack_470 + lVar5,lVar2 + 0x48);
    uVar6 = *(undefined8 *)(lVar2 + 0x60);
    lVar1 = lVar5 + 0x40;
    *(undefined8 *)((long)local_458 + lVar5 + 8) = *(undefined8 *)(lVar2 + 0x68);
    *(undefined8 *)((long)local_458 + lVar5) = uVar6;
    lVar5 = lVar1;
  } while (lVar1 != 0x400);
  FUN_008fcdb8(local_88,param_1 + 0x430);
  local_4a8 = 0;
  uStack_4a3 = 0;
  uStack_4a0 = 0;
  uStack_49b = 0;
  local_4b0 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[2]) {
    (**(code **)(*plVar4 + 0xd8))(plVar4,&local_4b8);
  }
  local_4b8 = &PTR_FUN_027bb598;
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  lVar5 = 0;
  do {
    if ((local_b0[lVar5] & 1) != 0) {
      operator_delete(*(void **)((long)local_a0 + lVar5));
    }
    if ((local_c8[lVar5] & 1) != 0) {
      operator_delete(*(void **)((long)&local_b8 + lVar5));
    }
    lVar5 = lVar5 + -0x40;
  } while (lVar5 != -0x400);
  FUN_00e84dd8(&local_4b8);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094a304(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027bb598;
  if ((*(byte *)(param_1 + 0x86) & 1) != 0) {
    operator_delete((void *)param_1[0x88]);
  }
  lVar1 = 0;
  do {
    if ((*(byte *)((long)param_1 + lVar1 + 0x408) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x418));
    }
    if ((*(byte *)((long)param_1 + lVar1 + 0x3f0) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x400));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x400);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094a384(long param_1)

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
    (**(code **)(*plVar2 + 0xe0))(plVar2,&local_a8);
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




void FUN_0094a49c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **local_4b8;
  undefined8 local_4b0;
  undefined5 local_4a8;
  undefined3 uStack_4a3;
  undefined5 uStack_4a0;
  undefined3 uStack_49b;
  undefined5 uStack_498;
  undefined4 local_490;
  undefined1 local_48c;
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined8 local_458 [114];
  byte local_c8 [16];
  undefined8 local_b8;
  byte local_b0 [16];
  undefined8 local_a0 [3];
  byte local_88 [16];
  void *local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  plVar4 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_49b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_498 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_4a0 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_4b0 = *(undefined8 *)(param_1 + 8);
  local_4b8 = &PTR_FUN_027bb5c8;
  local_4a8 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_4a3 = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_48c = *(undefined1 *)(param_1 + 0x2c);
  local_490 = *(undefined4 *)(param_1 + 0x28);
  lVar5 = 0;
  do {
    lVar2 = param_1 + lVar5;
    FUN_008fcdb8(auStack_488 + lVar5,lVar2 + 0x30);
    FUN_008fcdb8(auStack_470 + lVar5,lVar2 + 0x48);
    uVar6 = *(undefined8 *)(lVar2 + 0x60);
    lVar1 = lVar5 + 0x40;
    *(undefined8 *)((long)local_458 + lVar5 + 8) = *(undefined8 *)(lVar2 + 0x68);
    *(undefined8 *)((long)local_458 + lVar5) = uVar6;
    lVar5 = lVar1;
  } while (lVar1 != 0x400);
  FUN_008fcdb8(local_88,param_1 + 0x430);
  local_4a8 = 0;
  uStack_4a3 = 0;
  uStack_4a0 = 0;
  uStack_49b = 0;
  local_4b0 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[2]) {
    (**(code **)(*plVar4 + 0xe8))(plVar4,&local_4b8);
  }
  local_4b8 = &PTR_FUN_027bb5c8;
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  lVar5 = 0;
  do {
    if ((local_b0[lVar5] & 1) != 0) {
      operator_delete(*(void **)((long)local_a0 + lVar5));
    }
    if ((local_c8[lVar5] & 1) != 0) {
      operator_delete(*(void **)((long)&local_b8 + lVar5));
    }
    lVar5 = lVar5 + -0x40;
  } while (lVar5 != -0x400);
  FUN_00e84dd8(&local_4b8);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094a628(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027bb5c8;
  if ((*(byte *)(param_1 + 0x86) & 1) != 0) {
    operator_delete((void *)param_1[0x88]);
  }
  lVar1 = 0;
  do {
    if ((*(byte *)((long)param_1 + lVar1 + 0x408) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x418));
    }
    if ((*(byte *)((long)param_1 + lVar1 + 0x3f0) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x400));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x400);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094a6a8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **local_500;
  undefined8 local_4f8;
  undefined5 local_4f0;
  undefined3 uStack_4eb;
  undefined5 uStack_4e8;
  undefined3 uStack_4e3;
  undefined5 uStack_4e0;
  undefined1 auStack_4d8 [24];
  undefined4 local_4c0;
  undefined1 local_4bc;
  undefined1 auStack_4b8 [24];
  undefined1 auStack_4a0 [24];
  undefined8 local_488 [122];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  plVar4 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  uStack_4e3 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_4e0 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_4e8 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_4f8 = *(undefined8 *)(param_1 + 8);
  local_4f0 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_4eb = (undefined3)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x28);
  local_500 = &PTR_FUN_027bb5f8;
  FUN_008fcdb8(auStack_4d8,param_1 + 0x28);
  local_4bc = *(undefined1 *)(param_1 + 0x44);
  local_4c0 = *(undefined4 *)(param_1 + 0x40);
  lVar5 = 0;
  do {
    lVar2 = param_1 + lVar5;
    FUN_008fcdb8(auStack_4b8 + lVar5,lVar2 + 0x48);
    FUN_008fcdb8(auStack_4a0 + lVar5,lVar2 + 0x60);
    uVar6 = *(undefined8 *)(lVar2 + 0x78);
    lVar1 = lVar5 + 0x40;
    *(undefined8 *)((long)local_488 + lVar5 + 8) = *(undefined8 *)(lVar2 + 0x80);
    *(undefined8 *)((long)local_488 + lVar5) = uVar6;
    lVar5 = lVar1;
  } while (lVar1 != 0x400);
  FUN_008fcdb8(auStack_b8,param_1 + 0x448);
  FUN_008fcdb8(auStack_a0,param_1 + 0x460);
  FUN_008fcdb8(auStack_88,param_1 + 0x478);
  local_4f0 = 0;
  uStack_4eb = 0;
  uStack_4e8 = 0;
  uStack_4e3 = 0;
  local_4f8 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar4 = (long *)*plVar4; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[2]) {
    (**(code **)(*plVar4 + 0xf0))(plVar4,&local_500);
  }
  FUN_0094a804(&local_500);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094a804(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027bb5f8;
  if ((*(byte *)(param_1 + 0x8f) & 1) != 0) {
    operator_delete((void *)param_1[0x91]);
  }
  if ((*(byte *)(param_1 + 0x8c) & 1) != 0) {
    operator_delete((void *)param_1[0x8e]);
  }
  if ((*(byte *)(param_1 + 0x89) & 1) != 0) {
    operator_delete((void *)param_1[0x8b]);
  }
  lVar1 = 0x400;
  do {
    if ((*(byte *)((long)param_1 + lVar1 + 0x20) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x30));
    }
    if ((*(byte *)((long)param_1 + lVar1 + 8) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x18));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != 0);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_0094a8b0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_520 [8];
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00948c80();
  pthread_mutex_lock(DAT_02c7ecf8);
  FUN_0094a964(auStack_520,param_1);
  local_518 = 0;
  uStack_510 = 0;
  local_508 = 0;
  pthread_mutex_unlock(DAT_02c7ecf8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0xf8))(plVar2,auStack_520);
  }
  FUN_0094aa5c(auStack_520);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0094a964(undefined8 *param_1,long param_2)

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
  *param_1 = &PTR_FUN_027bb628;
  param_1[2] = uVar5;
  param_1[1] = uVar4;
  FUN_008fcdb8(param_1 + 5,param_2 + 0x28);
  FUN_008fcdb8(param_1 + 8,param_2 + 0x40);
  FUN_008fcdb8(param_1 + 0xb,param_2 + 0x58);
  FUN_008fcdb8(param_1 + 0xe,param_2 + 0x70);
  FUN_008fcdb8(param_1 + 0x11,param_2 + 0x88);
  FUN_008fcdb8(param_1 + 0x14,param_2 + 0xa0);
  *(undefined1 *)((long)param_1 + 0xbc) = *(undefined1 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
  lVar3 = 0;
  do {
    lVar2 = param_2 + lVar3;
    FUN_008fcdb8((long)param_1 + lVar3 + 0xc0,lVar2 + 0xc0);
    FUN_008fcdb8((long)param_1 + lVar3 + 0xd8,lVar2 + 0xd8);
    uVar4 = *(undefined8 *)(lVar2 + 0xf0);
    lVar1 = lVar3 + 0x40;
    *(undefined8 *)((long)param_1 + lVar3 + 0xf8) = *(undefined8 *)(lVar2 + 0xf8);
    *(undefined8 *)((long)param_1 + lVar3 + 0xf0) = uVar4;
    lVar3 = lVar1;
  } while (lVar1 != 0x400);
  FUN_008fcdb8(param_1 + 0x98,param_2 + 0x4c0);
  return;
}




void FUN_0094aa5c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027bb628;
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    operator_delete((void *)param_1[0x9a]);
  }
  lVar1 = 0x400;
  do {
    if ((*(byte *)((long)param_1 + lVar1 + 0x98) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0xa8));
    }
    if ((*(byte *)((long)param_1 + lVar1 + 0x80) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x90));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != 0);
  if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
    operator_delete((void *)param_1[0x16]);
  }
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    operator_delete((void *)param_1[0x13]);
  }
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




void FUN_0094ab38(long param_1)

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
    (**(code **)(*plVar2 + 0x100))(plVar2,&local_a8);
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




void FUN_0094ac50(long param_1)

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
    (**(code **)(*plVar2 + 0x108))(plVar2,&local_a8);
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




void FUN_0094ad68(long param_1)

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
    (**(code **)(*plVar2 + 0x110))(plVar2,&local_a8);
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




void FUN_0094ae80(long param_1)

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
    (**(code **)(*plVar2 + 0x118))(plVar2,&local_a8);
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




void FUN_0094af98(long param_1)

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
    (**(code **)(*plVar2 + 0x120))(plVar2,&local_a8);
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

