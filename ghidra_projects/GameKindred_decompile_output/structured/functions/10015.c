// functions/10015 — 363 functions
#include "GameKindred.h"




void FUN_100150068(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0xb8))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100150158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145b950;
  FUN_100156c78(param_1 + 0xe,1);
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_1001501bc(undefined8 param_1)

{
  long *plVar1;
  undefined1 auStack_530 [8];
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  FUN_100156d38(auStack_530,param_1);
  local_528 = 0;
  uStack_520 = 0;
  local_518 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0xc0))(plVar1,auStack_530);
  }
  FUN_100156e64(auStack_530);
  return;
}




void thunk_FUN_100156e64(void)

{
  FUN_100156e64();
  return;
}




void FUN_100150248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10014f448();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 200))(plVar1,param_1,param_2,param_3);
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1001502a4(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **local_4a8;
  undefined8 local_4a0;
  undefined5 uStack_498;
  undefined3 uStack_493;
  undefined5 local_490;
  undefined3 uStack_48b;
  undefined5 uStack_488;
  undefined4 local_480;
  undefined1 local_47c;
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [24];
  undefined8 local_448 [114];
  undefined8 local_b8 [2];
  char local_a1;
  undefined8 local_a0 [2];
  char local_89 [17];
  void *local_78 [2];
  char local_61;
  
  plVar2 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  lVar3 = 0;
  local_4a0 = *(undefined8 *)(param_1 + 8);
  uStack_498 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_48b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_488 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_493 = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_490 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_4a8 = &PTR_FUN_10145b9b0;
  local_480 = *(undefined4 *)(param_1 + 0x28);
  local_47c = *(undefined1 *)(param_1 + 0x2c);
  do {
    lVar1 = param_1 + lVar3;
    FUN_10003330c(auStack_478 + lVar3,lVar1 + 0x30);
    FUN_10003330c(auStack_460 + lVar3,lVar1 + 0x48);
    uVar4 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)((long)local_448 + lVar3 + 8) = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)((long)local_448 + lVar3) = uVar4;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0x400);
  FUN_10003330c(local_78,param_1 + 0x430);
  local_4a0 = 0;
  uStack_498 = 0;
  uStack_493 = 0;
  local_490 = 0;
  uStack_48b = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0xd8))(plVar2,&local_4a8);
  }
  local_4a8 = &PTR_FUN_10145b9b0;
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  lVar3 = 0;
  do {
    if (local_89[lVar3] < '\0') {
      operator_delete(*(void **)((long)local_a0 + lVar3));
    }
    if ((&local_a1)[lVar3] < '\0') {
      operator_delete(*(void **)((long)local_b8 + lVar3));
    }
    lVar3 = lVar3 + -0x40;
  } while (lVar3 != -0x400);
  FUN_1004f15a8(&local_4a8);
  return;
}




void FUN_100150404(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10145b9b0;
  if (*(char *)((long)param_1 + 0x447) < '\0') {
    operator_delete((void *)param_1[0x86]);
  }
  lVar1 = 0;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0x41f) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x408));
    }
    if (*(char *)((long)param_1 + lVar1 + 0x407) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x3f0));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x400);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100150480(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0xe0))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_100150570(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **local_4a8;
  undefined8 local_4a0;
  undefined5 uStack_498;
  undefined3 uStack_493;
  undefined5 local_490;
  undefined3 uStack_48b;
  undefined5 uStack_488;
  undefined4 local_480;
  undefined1 local_47c;
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [24];
  undefined8 local_448 [114];
  undefined8 local_b8 [2];
  char local_a1;
  undefined8 local_a0 [2];
  char local_89 [17];
  void *local_78 [2];
  char local_61;
  
  plVar2 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  lVar3 = 0;
  local_4a0 = *(undefined8 *)(param_1 + 8);
  uStack_498 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_48b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_488 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_493 = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_490 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_4a8 = &PTR_FUN_10145b9e0;
  local_480 = *(undefined4 *)(param_1 + 0x28);
  local_47c = *(undefined1 *)(param_1 + 0x2c);
  do {
    lVar1 = param_1 + lVar3;
    FUN_10003330c(auStack_478 + lVar3,lVar1 + 0x30);
    FUN_10003330c(auStack_460 + lVar3,lVar1 + 0x48);
    uVar4 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined8 *)((long)local_448 + lVar3 + 8) = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)((long)local_448 + lVar3) = uVar4;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0x400);
  FUN_10003330c(local_78,param_1 + 0x430);
  local_4a0 = 0;
  uStack_498 = 0;
  uStack_493 = 0;
  local_490 = 0;
  uStack_48b = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0xe8))(plVar2,&local_4a8);
  }
  local_4a8 = &PTR_FUN_10145b9e0;
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  lVar3 = 0;
  do {
    if (local_89[lVar3] < '\0') {
      operator_delete(*(void **)((long)local_a0 + lVar3));
    }
    if ((&local_a1)[lVar3] < '\0') {
      operator_delete(*(void **)((long)local_b8 + lVar3));
    }
    lVar3 = lVar3 + -0x40;
  } while (lVar3 != -0x400);
  FUN_1004f15a8(&local_4a8);
  return;
}




void FUN_1001506d0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10145b9e0;
  if (*(char *)((long)param_1 + 0x447) < '\0') {
    operator_delete((void *)param_1[0x86]);
  }
  lVar1 = 0;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0x41f) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x408));
    }
    if (*(char *)((long)param_1 + lVar1 + 0x407) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x3f0));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x400);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_10015074c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **local_4f0;
  undefined8 local_4e8;
  undefined5 uStack_4e0;
  undefined3 uStack_4db;
  undefined5 local_4d8;
  undefined3 uStack_4d3;
  undefined5 uStack_4d0;
  undefined1 auStack_4c8 [24];
  undefined4 local_4b0;
  undefined1 local_4ac;
  undefined1 auStack_4a8 [24];
  undefined1 auStack_490 [24];
  undefined8 local_478 [122];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  plVar2 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_4e8 = *(undefined8 *)(param_1 + 8);
  uStack_4e0 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_4d3 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_4d0 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_4db = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_4d8 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_4f0 = &PTR_thunk_FUN_100157078_10145ba10;
  FUN_10003330c(auStack_4c8,param_1 + 0x28);
  lVar3 = 0;
  local_4b0 = *(undefined4 *)(param_1 + 0x40);
  local_4ac = *(undefined1 *)(param_1 + 0x44);
  do {
    lVar1 = param_1 + lVar3;
    FUN_10003330c(auStack_4a8 + lVar3,lVar1 + 0x48);
    FUN_10003330c(auStack_490 + lVar3,lVar1 + 0x60);
    uVar4 = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)((long)local_478 + lVar3 + 8) = *(undefined8 *)(lVar1 + 0x80);
    *(undefined8 *)((long)local_478 + lVar3) = uVar4;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0x400);
  FUN_10003330c(auStack_a8,param_1 + 0x448);
  FUN_10003330c(auStack_90,param_1 + 0x460);
  FUN_10003330c(auStack_78,param_1 + 0x478);
  local_4e8 = 0;
  uStack_4e0 = 0;
  uStack_4db = 0;
  local_4d8 = 0;
  uStack_4d3 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0xf0))(plVar2,&local_4f0);
  }
  FUN_100157078(&local_4f0);
  return;
}




void thunk_FUN_100157078(void)

{
  FUN_100157078();
  return;
}




void FUN_100150884(undefined8 param_1)

{
  long *plVar1;
  undefined1 auStack_508 [8];
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  FUN_100157120(auStack_508,param_1);
  local_500 = 0;
  uStack_4f8 = 0;
  local_4f0 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0xf8))(plVar1,auStack_508);
  }
  FUN_100157234(auStack_508);
  return;
}




void thunk_FUN_100157234(void)

{
  FUN_100157234();
  return;
}




void FUN_100150910(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x100))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100150a00(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x108))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100150af0(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x110))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100150be0(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x118))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100150cd0(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x120))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100150dc0(undefined8 param_1)

{
  long *plVar1;
  undefined1 auStack_530 [8];
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  FUN_100156d38(auStack_530,param_1);
  local_528 = 0;
  uStack_520 = 0;
  local_518 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x128))(plVar1,auStack_530);
  }
  FUN_100156e64(auStack_530);
  return;
}




void FUN_100150e48(undefined8 param_1)

{
  long *plVar1;
  undefined1 auStack_4f0 [8];
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  FUN_10015730c(auStack_4f0,param_1);
  local_4e8 = 0;
  uStack_4e0 = 0;
  local_4d8 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x130))(plVar1,auStack_4f0);
  }
  FUN_10015741c(auStack_4f0);
  return;
}




void thunk_FUN_10015741c(void)

{
  FUN_10015741c();
  return;
}




void FUN_100150ed4(long param_1)

{
  long *plVar1;
  undefined **local_80;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_78 = *(undefined8 *)(param_1 + 8);
  uStack_70 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_80 = &PTR_FUN_10145baa0;
  FUN_100157520(auStack_58,param_1 + 0x28);
  local_48 = *(undefined4 *)(param_1 + 0x38);
  uStack_70 = 0;
  uStack_6b = 0;
  uStack_68 = 0;
  uStack_63 = 0;
  local_78 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x138))(plVar1,&local_80);
  }
  local_80 = &PTR_FUN_10145baa0;
  FUN_100157a40(auStack_58,1);
  FUN_1004f15a8(&local_80);
  return;
}




void FUN_100150fa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145baa0;
  FUN_100157a40(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100150fd4(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10014f448();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x140))(plVar1);
  }
  return;
}




void FUN_100151010(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10014f448();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x148))(plVar1,param_1);
  }
  return;
}




void FUN_100151054(long param_1)

{
  long *plVar1;
  undefined **local_b8;
  undefined8 local_b0;
  undefined5 uStack_a8;
  undefined3 uStack_a3;
  undefined5 local_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined4 local_90;
  undefined1 local_8c;
  void *local_88 [2];
  char local_71;
  void *local_70 [2];
  char local_59;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_b0 = *(undefined8 *)(param_1 + 8);
  uStack_a8 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_9b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_98 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_a3 = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_a0 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_b8 = &PTR_FUN_10145bad0;
  local_90 = *(undefined4 *)(param_1 + 0x28);
  local_8c = *(undefined1 *)(param_1 + 0x2c);
  FUN_10003330c(local_88,param_1 + 0x30);
  FUN_10003330c(local_70,param_1 + 0x48);
  FUN_10003330c(local_58,param_1 + 0x60);
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a3 = 0;
  local_a0 = 0;
  uStack_9b = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x150))(plVar1,&local_b8);
  }
  local_b8 = &PTR_FUN_10145bad0;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  FUN_1004f15a8(&local_b8);
  return;
}




void FUN_100151160(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bad0;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_1001511bc(long param_1)

{
  long *plVar1;
  undefined **local_d0;
  undefined8 local_c8;
  undefined5 uStack_c0;
  undefined3 uStack_bb;
  undefined5 local_b8;
  undefined3 uStack_b3;
  undefined5 uStack_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  void *local_a0 [2];
  char local_89;
  void *local_88 [2];
  char local_71;
  void *local_70 [2];
  char local_59;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_c8 = *(undefined8 *)(param_1 + 8);
  uStack_c0 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_b3 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_b0 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_bb = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_b8 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_d0 = &PTR_FUN_10145bb00;
  local_a8 = *(undefined4 *)(param_1 + 0x28);
  local_a4 = *(undefined1 *)(param_1 + 0x2c);
  FUN_10003330c(local_a0,param_1 + 0x30);
  FUN_10003330c(local_88,param_1 + 0x48);
  FUN_10003330c(local_70,param_1 + 0x60);
  FUN_10003330c(local_58,param_1 + 0x78);
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_bb = 0;
  local_b8 = 0;
  uStack_b3 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x158))(plVar1,&local_d0);
  }
  local_d0 = &PTR_FUN_10145bb00;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_89 < '\0') {
    operator_delete(local_a0[0]);
  }
  FUN_1004f15a8(&local_d0);
  return;
}




void FUN_1001512e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bb00;
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100151350(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined4 local_78;
  undefined1 local_74;
  void *local_70 [2];
  char local_59;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  uStack_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_10145bb30;
  local_78 = *(undefined4 *)(param_1 + 0x28);
  local_74 = *(undefined1 *)(param_1 + 0x2c);
  FUN_10003330c(local_70,param_1 + 0x30);
  FUN_100157bf4(auStack_58,param_1 + 0x48);
  local_48 = *(undefined4 *)(param_1 + 0x58);
  uStack_90 = 0;
  uStack_8b = 0;
  uStack_88 = 0;
  uStack_83 = 0;
  local_98 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x160))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_10145bb30;
  FUN_100157d54(auStack_58,1);
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100151448(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bb30;
  FUN_100157d54(param_1 + 9,1);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_10015148c(long param_1)

{
  long *plVar1;
  undefined **local_98;
  undefined8 local_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 local_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined4 local_70;
  void *local_68 [2];
  char local_51;
  undefined1 auStack_50 [16];
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_90 = *(undefined8 *)(param_1 + 8);
  uStack_88 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_7b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_78 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_98 = &PTR_FUN_10145bb60;
  local_70 = *(undefined4 *)(param_1 + 0x28);
  FUN_10003330c(local_68,param_1 + 0x30);
  FUN_1000a72a4(auStack_50,param_1 + 0x48);
  local_90 = 0;
  uStack_88 = 0;
  uStack_83 = 0;
  local_80 = 0;
  uStack_7b = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x260))(plVar1,&local_98);
  }
  local_98 = &PTR_FUN_10145bb60;
  FUN_10001629c(auStack_50,1);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  FUN_1004f15a8(&local_98);
  return;
}




void FUN_100151574(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bb60;
  FUN_10001629c(param_1 + 9,1);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_1001515b8(long param_1)

{
  long *plVar1;
  undefined **local_90;
  undefined8 local_88;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *local_50 [2];
  char local_39;
  undefined8 local_38;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_88 = *(undefined8 *)(param_1 + 8);
  uStack_80 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_73 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_7b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  uStack_78 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_90 = &PTR_FUN_10145bb90;
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  local_68 = *(undefined8 *)(param_1 + 0x28);
  local_58 = *(undefined8 *)(param_1 + 0x38);
  FUN_10003330c(local_50,param_1 + 0x40);
  local_38 = *(undefined8 *)(param_1 + 0x58);
  uStack_80 = 0;
  uStack_7b = 0;
  uStack_78 = 0;
  uStack_73 = 0;
  local_88 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x168))(plVar1,&local_90);
  }
  local_90 = &PTR_FUN_10145bb90;
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  FUN_1004f15a8(&local_90);
  return;
}




void FUN_10015168c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bb90;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_1001516c8(long param_1)

{
  long *plVar1;
  undefined **local_68;
  undefined8 local_60;
  undefined5 uStack_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  uStack_48 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  local_68 = &PTR_thunk_FUN_1004f15a8_10145bbc0;
  local_60 = 0;
  local_40 = *(undefined8 *)(param_1 + 0x28);
  local_38 = *(undefined4 *)(param_1 + 0x30);
  uStack_58 = 0;
  uStack_53 = 0;
  uStack_50 = 0;
  uStack_4b = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x170))(plVar1,&local_68);
  }
  FUN_1004f15a8(&local_68);
  return;
}




void FUN_100151770(long param_1)

{
  long *plVar1;
  undefined **local_78;
  undefined8 local_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_70 = *(undefined8 *)(param_1 + 8);
  uStack_68 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x15);
  uStack_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_78 = &PTR_FUN_10145bbf0;
  FUN_10003330c(local_50,param_1 + 0x28);
  local_38 = *(undefined4 *)(param_1 + 0x40);
  uStack_68 = 0;
  uStack_63 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  local_70 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x1e8))(plVar1,&local_78);
  }
  local_78 = &PTR_FUN_10145bbf0;
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  FUN_1004f15a8(&local_78);
  return;
}




void FUN_100151834(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bbf0;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100151870(long param_1)

{
  long *plVar1;
  undefined **local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_53 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_50 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_70 = &PTR_FUN_10145bc20;
  local_4b = *(undefined1 *)(param_1 + 0x25);
  FUN_10003330c(local_48,param_1 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  local_58 = 0;
  uStack_53 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x1f0))(plVar1,&local_70);
  }
  local_70 = &PTR_FUN_10145bc20;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_70);
  return;
}




void FUN_100151934(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bc20;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100151970(long param_1)

{
  long *plVar1;
  undefined **local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_53 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_50 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_70 = &PTR_FUN_10145bc50;
  local_4b = *(undefined1 *)(param_1 + 0x25);
  FUN_10003330c(local_48,param_1 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  local_58 = 0;
  uStack_53 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x1f8))(plVar1,&local_70);
  }
  local_70 = &PTR_FUN_10145bc50;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_70);
  return;
}




void FUN_100151a34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bc50;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100151a70(long param_1)

{
  long *plVar1;
  undefined **local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_53 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_50 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_70 = &PTR_FUN_10145bc80;
  local_4b = *(undefined1 *)(param_1 + 0x25);
  FUN_10003330c(local_48,param_1 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  local_58 = 0;
  uStack_53 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x200))(plVar1,&local_70);
  }
  local_70 = &PTR_FUN_10145bc80;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_70);
  return;
}




void FUN_100151b34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bc80;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100151b70(long param_1)

{
  long *plVar1;
  undefined **local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_53 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_50 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_70 = &PTR_FUN_10145bcb0;
  local_4b = *(undefined1 *)(param_1 + 0x25);
  FUN_10003330c(local_48,param_1 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  local_58 = 0;
  uStack_53 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x208))(plVar1,&local_70);
  }
  local_70 = &PTR_FUN_10145bcb0;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_70);
  return;
}




void FUN_100151c34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bcb0;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100151c70(long param_1)

{
  long *plVar1;
  undefined **local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_53 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_50 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_70 = &PTR_FUN_10145bce0;
  local_4b = *(undefined1 *)(param_1 + 0x25);
  FUN_10003330c(local_48,param_1 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  local_58 = 0;
  uStack_53 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x210))(plVar1,&local_70);
  }
  local_70 = &PTR_FUN_10145bce0;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_70);
  return;
}




void FUN_100151d34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bce0;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100151d70(long param_1)

{
  long *plVar1;
  undefined **local_58;
  undefined8 uStack_50;
  undefined5 local_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  undefined3 uStack_3b;
  undefined5 uStack_38;
  undefined1 local_33;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  uStack_38 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  local_58 = &PTR_thunk_FUN_1004f15a8_10145bd10;
  uStack_50 = 0;
  local_33 = *(undefined1 *)(param_1 + 0x25);
  local_48 = 0;
  uStack_43 = 0;
  uStack_40 = 0;
  uStack_3b = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x218))(plVar1,&local_58);
  }
  FUN_1004f15a8(&local_58);
  return;
}




void FUN_100151e10(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_48;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  uStack_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_10145bd40;
  FUN_10003330c(local_78,param_1 + 0x28);
  FUN_10003330c(local_60,param_1 + 0x40);
  local_48 = *(undefined4 *)(param_1 + 0x58);
  uStack_90 = 0;
  uStack_8b = 0;
  uStack_88 = 0;
  uStack_83 = 0;
  local_98 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x220))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_10145bd40;
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100151ef8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bd40;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100151f44(long param_1)

{
  long *plVar1;
  undefined **local_80;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  undefined1 local_44;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_78 = *(undefined8 *)(param_1 + 8);
  uStack_70 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_80 = &PTR_FUN_10145bd70;
  FUN_1001582e4(auStack_58,param_1 + 0x28);
  local_48 = *(undefined4 *)(param_1 + 0x38);
  local_44 = *(undefined1 *)(param_1 + 0x3c);
  uStack_70 = 0;
  uStack_6b = 0;
  uStack_68 = 0;
  uStack_63 = 0;
  local_78 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x228))(plVar1,&local_80);
  }
  local_80 = &PTR_FUN_10145bd70;
  FUN_1001589f0(auStack_58,1);
  FUN_1004f15a8(&local_80);
  return;
}




void FUN_100152018(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bd70;
  FUN_1001589f0(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_10015204c(long param_1)

{
  long *plVar1;
  undefined **local_80;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  undefined1 local_44;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_78 = *(undefined8 *)(param_1 + 8);
  uStack_70 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_80 = &PTR_FUN_10145bd70;
  FUN_1001582e4(auStack_58,param_1 + 0x28);
  local_48 = *(undefined4 *)(param_1 + 0x38);
  local_44 = *(undefined1 *)(param_1 + 0x3c);
  uStack_70 = 0;
  uStack_6b = 0;
  uStack_68 = 0;
  uStack_63 = 0;
  local_78 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x230))(plVar1,&local_80);
  }
  local_80 = &PTR_FUN_10145bd70;
  FUN_1001589f0(auStack_58,1);
  FUN_1004f15a8(&local_80);
  return;
}




void FUN_100152120(long param_1)

{
  long *plVar1;
  undefined **local_80;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  undefined1 local_44;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_78 = *(undefined8 *)(param_1 + 8);
  uStack_70 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_80 = &PTR_FUN_10145bd70;
  FUN_1001582e4(auStack_58,param_1 + 0x28);
  local_48 = *(undefined4 *)(param_1 + 0x38);
  local_44 = *(undefined1 *)(param_1 + 0x3c);
  uStack_70 = 0;
  uStack_6b = 0;
  uStack_68 = 0;
  uStack_63 = 0;
  local_78 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x238))(plVar1,&local_80);
  }
  local_80 = &PTR_FUN_10145bd70;
  FUN_1001589f0(auStack_58,1);
  FUN_1004f15a8(&local_80);
  return;
}




void FUN_1001521f4(long param_1)

{
  long *plVar1;
  undefined **local_b0;
  undefined8 local_a8;
  undefined5 uStack_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined3 uStack_93;
  undefined5 uStack_90;
  undefined1 auStack_88 [16];
  void *local_78 [2];
  char local_61;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined2 local_48;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_a8 = *(undefined8 *)(param_1 + 8);
  uStack_a0 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_93 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_90 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_9b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  uStack_98 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_b0 = &PTR_FUN_10145bda0;
  FUN_100156704(auStack_88,param_1 + 0x28);
  FUN_10003330c(local_78,param_1 + 0x38);
  FUN_100158b18(auStack_60,param_1 + 0x50);
  local_50 = *(undefined8 *)(param_1 + 0x60);
  local_48 = *(undefined2 *)(param_1 + 0x68);
  uStack_a0 = 0;
  uStack_9b = 0;
  uStack_98 = 0;
  uStack_93 = 0;
  local_a8 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x240))(plVar1,&local_b0);
  }
  local_b0 = &PTR_FUN_10145bda0;
  FUN_100158f50(auStack_60,1);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_10015690c(auStack_88,1);
  FUN_1004f15a8(&local_b0);
  return;
}




void FUN_100152300(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bda0;
  FUN_100158f50(param_1 + 10,1);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  FUN_10015690c(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100152350(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x248))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100152440(long param_1)

{
  long *plVar1;
  undefined **local_60;
  undefined8 local_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  undefined4 local_38;
  undefined2 local_34;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  uStack_40 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  local_60 = &PTR_thunk_FUN_1004f15a8_10145bdd0;
  local_58 = 0;
  local_38 = *(undefined4 *)(param_1 + 0x28);
  local_34 = *(undefined2 *)(param_1 + 0x2c);
  uStack_50 = 0;
  uStack_4b = 0;
  uStack_48 = 0;
  uStack_43 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x250))(plVar1,&local_60);
  }
  FUN_1004f15a8(&local_60);
  return;
}




void FUN_1001524e8(long param_1)

{
  long *plVar1;
  undefined **local_98;
  undefined8 local_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined1 auStack_70 [16];
  void *local_60 [2];
  char local_49;
  undefined4 local_48;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_90 = *(undefined8 *)(param_1 + 8);
  uStack_88 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_7b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_78 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x15);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_98 = &PTR_FUN_10145be00;
  FUN_100159064(auStack_70,param_1 + 0x28);
  FUN_10003330c(local_60,param_1 + 0x38);
  local_48 = *(undefined4 *)(param_1 + 0x50);
  uStack_88 = 0;
  uStack_83 = 0;
  uStack_80 = 0;
  uStack_7b = 0;
  local_90 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x178))(plVar1,&local_98);
  }
  local_98 = &PTR_FUN_10145be00;
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  FUN_1001591f8(auStack_70,1);
  FUN_1004f15a8(&local_98);
  return;
}




void FUN_1001525d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145be00;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  FUN_1001591f8(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100152618(long param_1)

{
  long *plVar1;
  undefined **local_80;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_78 = *(undefined8 *)(param_1 + 8);
  uStack_70 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_80 = &PTR_FUN_10145be30;
  FUN_1001592c4(auStack_58,param_1 + 0x28);
  local_48 = *(undefined4 *)(param_1 + 0x38);
  uStack_70 = 0;
  uStack_6b = 0;
  uStack_68 = 0;
  uStack_63 = 0;
  local_78 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x180))(plVar1,&local_80);
  }
  local_80 = &PTR_FUN_10145be30;
  FUN_10015951c(auStack_58,1);
  FUN_1004f15a8(&local_80);
  return;
}




void FUN_1001526e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145be30;
  FUN_10015951c(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100152718(long param_1)

{
  long *plVar1;
  undefined **local_98;
  undefined8 local_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  void *local_50 [2];
  char local_39;
  undefined8 local_38;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_90 = *(undefined8 *)(param_1 + 8);
  uStack_88 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_7b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_78 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x15);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_98 = &PTR_FUN_10145be60;
  local_70 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = (undefined4)*(undefined8 *)(param_1 + 0x30);
  uStack_5c = *(undefined8 *)(param_1 + 0x3c);
  uStack_64 = (undefined4)*(undefined8 *)(param_1 + 0x34);
  uStack_60 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
  FUN_10003330c(local_50,param_1 + 0x48);
  local_38 = *(undefined8 *)(param_1 + 0x60);
  uStack_88 = 0;
  uStack_83 = 0;
  uStack_80 = 0;
  uStack_7b = 0;
  local_90 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x188))(plVar1,&local_98);
  }
  local_98 = &PTR_FUN_10145be60;
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  FUN_1004f15a8(&local_98);
  return;
}




void FUN_1001527ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145be60;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100152828(long param_1)

{
  long *plVar1;
  undefined **local_98;
  undefined8 local_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  void *local_50 [2];
  char local_39;
  undefined8 local_38;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_90 = *(undefined8 *)(param_1 + 8);
  uStack_88 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_7b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_78 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x15);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_98 = &PTR_FUN_10145be90;
  local_70 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = (undefined4)*(undefined8 *)(param_1 + 0x30);
  uStack_5c = *(undefined8 *)(param_1 + 0x3c);
  uStack_64 = (undefined4)*(undefined8 *)(param_1 + 0x34);
  uStack_60 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
  FUN_10003330c(local_50,param_1 + 0x48);
  local_38 = *(undefined8 *)(param_1 + 0x60);
  uStack_88 = 0;
  uStack_83 = 0;
  uStack_80 = 0;
  uStack_7b = 0;
  local_90 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 400))(plVar1,&local_98);
  }
  local_98 = &PTR_FUN_10145be90;
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  FUN_1004f15a8(&local_98);
  return;
}




void FUN_1001528fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145be90;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100152938(long param_1)

{
  long *plVar1;
  undefined **local_88;
  undefined8 local_80;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  void *local_50 [2];
  char local_39;
  undefined1 local_38;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_80 = *(undefined8 *)(param_1 + 8);
  uStack_78 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_73 = (undefined3)*(undefined8 *)(param_1 + 0x15);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_88 = &PTR_FUN_10145a030;
  local_60 = *(undefined8 *)(param_1 + 0x28);
  local_58 = *(undefined4 *)(param_1 + 0x30);
  FUN_10003330c(local_50,param_1 + 0x38);
  local_38 = *(undefined1 *)(param_1 + 0x50);
  uStack_78 = 0;
  uStack_73 = 0;
  uStack_70 = 0;
  uStack_6b = 0;
  local_80 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x1a0))(plVar1,&local_88);
  }
  local_88 = &PTR_FUN_10145a030;
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  FUN_1004f15a8(&local_88);
  return;
}




void FUN_100152a0c(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x1a8))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100152afc(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x1b0))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100152bec(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x1b8))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100152cdc(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10014f448();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x1c8))(plVar1);
  }
  return;
}




void FUN_100152d18(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10014f448();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x1d0))(plVar1);
  }
  return;
}




void FUN_100152d54(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10014f448();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 600))(plVar1);
  }
  return;
}




void FUN_100152d90(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10014f448();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x198))(plVar1);
  }
  return;
}




void FUN_100152dcc(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10014f448();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x1d8))(plVar1);
  }
  return;
}




void FUN_100152e08(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10014f448();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x1e0))(plVar1);
  }
  return;
}




void FUN_100152e44(undefined8 param_1)

{
  long *plVar1;
  undefined1 auStack_270 [8];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  FUN_100159678(auStack_270,param_1);
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x268))(plVar1,auStack_270);
  }
  FUN_10015a304(auStack_270);
  return;
}




void thunk_FUN_10015a304(void)

{
  FUN_10015a304();
  return;
}




void FUN_100152ed0(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10014f448();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x270))(plVar1);
  }
  return;
}




void FUN_100152f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10014f448();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x278))(plVar1,param_1,param_2,param_3);
  }
  return;
}




void FUN_100152f68(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined4 local_7b;
  undefined3 uStack_77;
  void *local_70 [2];
  char local_59;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_10145bef0;
  local_7b._0_3_ = (undefined3)*(undefined4 *)(param_1 + 0x25);
  local_7b._3_1_ = (undefined1)*(undefined4 *)(param_1 + 0x28);
  uStack_77 = (undefined3)((uint)*(undefined4 *)(param_1 + 0x28) >> 8);
  FUN_10003330c(local_70,param_1 + 0x30);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x280))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_10145bef0;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100153058(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bef0;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_1001530a4(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x288))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100153194(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x290))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100153284(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x298))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100153374(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x2a0))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100153464(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x2a8))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100153554(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100153644(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x2b8))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100153734(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x2c0))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100153824(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x2c8))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100153914(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x2d0))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100153a04(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x2d8))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100153af4(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x2e0))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100153be4(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x2e8))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100153cd4(long param_1)

{
  long *plVar1;
  undefined **local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_53 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_50 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_70 = &PTR_FUN_10145b8c0;
  local_4b = *(undefined1 *)(param_1 + 0x25);
  FUN_10003330c(local_48,param_1 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  local_58 = 0;
  uStack_53 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x2f0))(plVar1,&local_70);
  }
  local_70 = &PTR_FUN_10145b8c0;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_70);
  return;
}




void FUN_100153d98(long param_1)

{
  long *plVar1;
  undefined **local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_53 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_50 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_70 = &PTR_FUN_10145b8c0;
  local_4b = *(undefined1 *)(param_1 + 0x25);
  FUN_10003330c(local_48,param_1 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  local_58 = 0;
  uStack_53 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x2f8))(plVar1,&local_70);
  }
  local_70 = &PTR_FUN_10145b8c0;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_70);
  return;
}




void FUN_100153e5c(long param_1)

{
  long *plVar1;
  undefined **local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_53 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_50 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_70 = &PTR_FUN_10145b8c0;
  local_4b = *(undefined1 *)(param_1 + 0x25);
  FUN_10003330c(local_48,param_1 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  local_58 = 0;
  uStack_53 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x300))(plVar1,&local_70);
  }
  local_70 = &PTR_FUN_10145b8c0;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_70);
  return;
}




void FUN_100153f20(long param_1)

{
  long *plVar1;
  undefined **local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_53 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_50 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_70 = &PTR_FUN_10145b8c0;
  local_4b = *(undefined1 *)(param_1 + 0x25);
  FUN_10003330c(local_48,param_1 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  local_58 = 0;
  uStack_53 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x308))(plVar1,&local_70);
  }
  local_70 = &PTR_FUN_10145b8c0;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_70);
  return;
}




void FUN_100153fe4(long param_1)

{
  long *plVar1;
  undefined **local_130;
  undefined8 local_128;
  undefined5 uStack_120;
  undefined3 uStack_11b;
  undefined5 uStack_118;
  undefined3 uStack_113;
  undefined5 uStack_110;
  void *local_108 [2];
  char local_f1;
  void *local_f0 [2];
  char local_d9;
  void *local_d8 [2];
  char local_c1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 local_78;
  void *local_70 [2];
  char local_59;
  undefined4 local_58;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_128 = *(undefined8 *)(param_1 + 8);
  uStack_120 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_113 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_110 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_11b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  uStack_118 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_130 = &PTR_FUN_10145bf20;
  FUN_10003330c(local_108,param_1 + 0x28);
  FUN_10003330c(local_f0,param_1 + 0x40);
  FUN_10003330c(local_d8,param_1 + 0x58);
  uStack_b8 = *(undefined8 *)(param_1 + 0x78);
  local_c0 = *(undefined8 *)(param_1 + 0x70);
  uStack_a8 = *(undefined8 *)(param_1 + 0x88);
  uStack_b0 = *(undefined8 *)(param_1 + 0x80);
  local_a0 = *(undefined1 *)(param_1 + 0x90);
  FUN_10015a754(auStack_98,param_1 + 0x98);
  FUN_10015a8fc(auStack_88,param_1 + 0xa8);
  local_78 = *(undefined1 *)(param_1 + 0xb8);
  FUN_10003330c(local_70,param_1 + 0xc0);
  local_58 = *(undefined4 *)(param_1 + 0xd8);
  uStack_120 = 0;
  uStack_11b = 0;
  uStack_118 = 0;
  uStack_113 = 0;
  local_128 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x310))(plVar1,&local_130);
  }
  local_130 = &PTR_FUN_10145bf20;
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  FUN_10015ab5c(auStack_88,1);
  FUN_10015aacc(auStack_98,1);
  if (local_c1 < '\0') {
    operator_delete(local_d8[0]);
  }
  if (local_d9 < '\0') {
    operator_delete(local_f0[0]);
  }
  if (local_f1 < '\0') {
    operator_delete(local_108[0]);
  }
  FUN_1004f15a8(&local_130);
  return;
}




void FUN_10015415c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bf20;
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    operator_delete((void *)param_1[0x18]);
  }
  FUN_10015ab5c(param_1 + 0x15,1);
  FUN_10015aacc(param_1 + 0x13,1);
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_1001541e0(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10014f448();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x318))(plVar1);
  }
  return;
}




void FUN_10015421c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10014f448();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 800))(plVar1,param_1,param_2,param_3);
  }
  return;
}




void FUN_100154278(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined4 local_7b;
  undefined3 uStack_77;
  void *local_70 [2];
  char local_59;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_10145bf50;
  local_7b._0_3_ = (undefined3)*(undefined4 *)(param_1 + 0x25);
  local_7b._3_1_ = (undefined1)*(undefined4 *)(param_1 + 0x28);
  uStack_77 = (undefined3)((uint)*(undefined4 *)(param_1 + 0x28) >> 8);
  FUN_10003330c(local_70,param_1 + 0x30);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x328))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_10145bf50;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100154368(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bf50;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_1001543b4(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x330))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_1001544a4(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x338))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100154594(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x340))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100154684(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x350))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100154774(long param_1)

{
  long *plVar1;
  undefined **local_a0;
  undefined8 local_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 local_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  void *local_78 [2];
  char local_61;
  undefined4 local_60;
  undefined1 local_5c;
  void *local_58 [2];
  char local_41;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_98 = *(undefined8 *)(param_1 + 8);
  uStack_90 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_8b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_88 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_a0 = &PTR_FUN_101454740;
  FUN_10003330c(local_78,param_1 + 0x28);
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_5c = *(undefined1 *)(param_1 + 0x44);
  FUN_10003330c(local_58,param_1 + 0x48);
  local_98 = 0;
  uStack_90 = 0;
  uStack_8b = 0;
  local_88 = 0;
  uStack_83 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x358))(plVar1,&local_a0);
  }
  local_a0 = &PTR_FUN_101454740;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_1004f15a8(&local_a0);
  return;
}




void FUN_100154864(long param_1)

{
  long *plVar1;
  undefined **local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_53 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_50 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_70 = &PTR_FUN_10145b8c0;
  local_4b = *(undefined1 *)(param_1 + 0x25);
  FUN_10003330c(local_48,param_1 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  local_58 = 0;
  uStack_53 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x360))(plVar1,&local_70);
  }
  local_70 = &PTR_FUN_10145b8c0;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_70);
  return;
}




void FUN_100154928(long param_1)

{
  long *plVar1;
  undefined **local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_53 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_50 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_70 = &PTR_FUN_10145b8c0;
  local_4b = *(undefined1 *)(param_1 + 0x25);
  FUN_10003330c(local_48,param_1 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  local_58 = 0;
  uStack_53 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x368))(plVar1,&local_70);
  }
  local_70 = &PTR_FUN_10145b8c0;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_70);
  return;
}




void FUN_1001549ec(long param_1)

{
  long *plVar1;
  undefined **local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 local_58;
  undefined3 uStack_53;
  undefined5 uStack_50;
  undefined1 local_4b;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_53 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_50 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_70 = &PTR_FUN_10145b8c0;
  local_4b = *(undefined1 *)(param_1 + 0x25);
  FUN_10003330c(local_48,param_1 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  local_58 = 0;
  uStack_53 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x370))(plVar1,&local_70);
  }
  local_70 = &PTR_FUN_10145b8c0;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_70);
  return;
}




void FUN_100154ab0(long param_1)

{
  long *plVar1;
  undefined **local_78;
  undefined8 local_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 local_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined1 auStack_50 [16];
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_70 = *(undefined8 *)(param_1 + 8);
  uStack_68 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_78 = &PTR_FUN_10145bf80;
  FUN_10015ac90(auStack_50,param_1 + 0x28);
  local_70 = 0;
  uStack_68 = 0;
  uStack_63 = 0;
  local_60 = 0;
  uStack_5b = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x378))(plVar1,&local_78);
  }
  local_78 = &PTR_FUN_10145bf80;
  FUN_10015aff0(auStack_50,1);
  FUN_1004f15a8(&local_78);
  return;
}




void FUN_100154b74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bf80;
  FUN_10015aff0(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100154ba8(long param_1)

{
  long *plVar1;
  undefined **local_80;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 uStack_60;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_78 = *(undefined8 *)(param_1 + 8);
  uStack_70 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_6b = (undefined3)*(undefined8 *)(param_1 + 0x15);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_80 = &PTR_FUN_10145bfb0;
  FUN_10015b0b8(auStack_58,param_1 + 0x28);
  local_48 = *(undefined4 *)(param_1 + 0x38);
  uStack_70 = 0;
  uStack_6b = 0;
  uStack_68 = 0;
  uStack_63 = 0;
  local_78 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x380))(plVar1,&local_80);
  }
  local_80 = &PTR_FUN_10145bfb0;
  FUN_10015bcf8(auStack_58,1);
  FUN_1004f15a8(&local_80);
  return;
}




void FUN_100154c74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bfb0;
  FUN_10015bcf8(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100154ca8(long param_1)

{
  long *plVar1;
  undefined **local_78;
  undefined8 local_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 local_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined1 auStack_50 [16];
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_70 = *(undefined8 *)(param_1 + 8);
  uStack_68 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_78 = &PTR_FUN_10145bfe0;
  FUN_10015be18(auStack_50,param_1 + 0x28);
  local_70 = 0;
  uStack_68 = 0;
  uStack_63 = 0;
  local_60 = 0;
  uStack_5b = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_78);
  }
  local_78 = &PTR_FUN_10145bfe0;
  FUN_10015bf94(auStack_50,1);
  FUN_1004f15a8(&local_78);
  return;
}




void FUN_100154d6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145bfe0;
  FUN_10015bf94(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100154da0(long param_1)

{
  long *plVar1;
  undefined **local_d0;
  undefined8 local_c8;
  undefined5 uStack_c0;
  undefined3 uStack_bb;
  undefined5 local_b8;
  undefined3 uStack_b3;
  undefined5 uStack_b0;
  undefined1 auStack_a8 [16];
  void *local_98 [2];
  char local_81;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_c8 = *(undefined8 *)(param_1 + 8);
  uStack_c0 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_b3 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_b0 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_bb = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_b8 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_d0 = &PTR_FUN_10145c010;
  FUN_10015c094(auStack_a8,param_1 + 0x28);
  FUN_10003330c(local_98,param_1 + 0x38);
  FUN_100156704(auStack_80,param_1 + 0x50);
  FUN_1000a72a4(auStack_70,param_1 + 0x60);
  FUN_1000a72a4(auStack_60,param_1 + 0x70);
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_bb = 0;
  local_b8 = 0;
  uStack_b3 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_d0);
  }
  local_d0 = &PTR_FUN_10145c010;
  FUN_10001629c(auStack_60,1);
  FUN_10001629c(auStack_70,1);
  FUN_10015690c(auStack_80,1);
  if (local_81 < '\0') {
    operator_delete(local_98[0]);
  }
  FUN_10015c28c(auStack_a8,1);
  FUN_1004f15a8(&local_d0);
  return;
}




void FUN_100154edc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c010;
  FUN_10001629c(param_1 + 0xe,1);
  FUN_10001629c(param_1 + 0xc,1);
  FUN_10015690c(param_1 + 10,1);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  FUN_10015c28c(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100154f44(long param_1)

{
  long *plVar1;
  undefined **local_110;
  undefined8 local_108;
  undefined5 uStack_100;
  undefined3 uStack_fb;
  undefined5 local_f8;
  undefined3 uStack_f3;
  undefined5 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [24];
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_108 = *(undefined8 *)(param_1 + 8);
  uStack_100 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_f3 = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_f0 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_fb = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_f8 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_110 = &PTR_FUN_10145c040;
  FUN_10015c3d4(auStack_e8,param_1 + 0x28);
  FUN_10015c528(auStack_d8,param_1 + 0x38);
  FUN_10015c874(auStack_c8,param_1 + 0x48);
  FUN_10015c874(auStack_b8,param_1 + 0x58);
  FUN_10015c874(auStack_a8,param_1 + 0x68);
  FUN_10015c874(auStack_98,param_1 + 0x78);
  FUN_10015c874(auStack_88,param_1 + 0x88);
  FUN_10015c9b8(auStack_78,param_1 + 0x98);
  local_108 = 0;
  uStack_100 = 0;
  uStack_fb = 0;
  local_f8 = 0;
  uStack_f3 = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x50))(plVar1,&local_110);
  }
  local_110 = &PTR_FUN_10145c040;
  FUN_10015cb3c(auStack_78,1);
  FUN_10015cbc0(auStack_88,1);
  FUN_10015cbc0(auStack_98,1);
  FUN_10015cbc0(auStack_a8,1);
  FUN_10015cbc0(auStack_b8,1);
  FUN_10015cbc0(auStack_c8,1);
  FUN_10015cc34(auStack_d8,1);
  FUN_10015ccb8(auStack_e8,1);
  FUN_1004f15a8(&local_110);
  return;
}




void FUN_1001550e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c040;
  FUN_10015cb3c(param_1 + 0x13,1);
  FUN_10015cbc0(param_1 + 0x11,1);
  FUN_10015cbc0(param_1 + 0xf,1);
  FUN_10015cbc0(param_1 + 0xd,1);
  FUN_10015cbc0(param_1 + 0xb,1);
  FUN_10015cbc0(param_1 + 9,1);
  FUN_10015cc34(param_1 + 7,1);
  FUN_10015ccb8(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100155178(long param_1)

{
  long *plVar1;
  undefined **local_78;
  undefined8 local_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 local_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_70 = *(undefined8 *)(param_1 + 8);
  uStack_68 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_78 = &PTR_FUN_10145c070;
  local_50 = *(undefined4 *)(param_1 + 0x28);
  local_4c = *(undefined1 *)(param_1 + 0x2c);
  FUN_10003330c(local_48,param_1 + 0x30);
  local_70 = 0;
  uStack_68 = 0;
  uStack_63 = 0;
  local_60 = 0;
  uStack_5b = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x58))(plVar1,&local_78);
  }
  local_78 = &PTR_FUN_10145c070;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_78);
  return;
}




void FUN_100155244(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c070;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100155280(long param_1)

{
  long *plVar1;
  undefined **local_78;
  undefined8 local_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 local_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined1 auStack_50 [16];
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_70 = *(undefined8 *)(param_1 + 8);
  uStack_68 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_78 = &PTR_FUN_10145c0a0;
  FUN_10015cdb4(auStack_50,param_1 + 0x28);
  local_70 = 0;
  uStack_68 = 0;
  uStack_63 = 0;
  local_60 = 0;
  uStack_5b = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x60))(plVar1,&local_78);
  }
  local_78 = &PTR_FUN_10145c0a0;
  FUN_10015cef8(auStack_50,1);
  FUN_1004f15a8(&local_78);
  return;
}




void FUN_100155344(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c0a0;
  FUN_10015cef8(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100155378(long param_1)

{
  long *plVar1;
  undefined **local_78;
  undefined8 local_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 local_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_70 = *(undefined8 *)(param_1 + 8);
  uStack_68 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_78 = &PTR_FUN_10145c0d0;
  local_50 = *(undefined4 *)(param_1 + 0x28);
  local_4c = *(undefined1 *)(param_1 + 0x2c);
  FUN_10003330c(local_48,param_1 + 0x30);
  local_70 = 0;
  uStack_68 = 0;
  uStack_63 = 0;
  local_60 = 0;
  uStack_5b = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_78);
  }
  local_78 = &PTR_FUN_10145c0d0;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_78);
  return;
}




void FUN_100155444(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c0d0;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100155480(long param_1)

{
  long *plVar1;
  undefined **local_78;
  undefined8 local_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 local_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  void *local_48 [2];
  char local_31;
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_70 = *(undefined8 *)(param_1 + 8);
  uStack_68 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_78 = &PTR_FUN_10145c100;
  local_50 = *(undefined4 *)(param_1 + 0x28);
  local_4c = *(undefined1 *)(param_1 + 0x2c);
  FUN_10003330c(local_48,param_1 + 0x30);
  local_70 = 0;
  uStack_68 = 0;
  uStack_63 = 0;
  local_60 = 0;
  uStack_5b = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x70))(plVar1,&local_78);
  }
  local_78 = &PTR_FUN_10145c100;
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1004f15a8(&local_78);
  return;
}




void FUN_10015554c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c100;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100155588(long param_1)

{
  long *plVar1;
  undefined **local_78;
  undefined8 local_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 local_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined1 auStack_50 [16];
  
  plVar1 = (long *)FUN_10014f448();
  _pthread_mutex_lock(DAT_101e3cef8);
  local_70 = *(undefined8 *)(param_1 + 8);
  uStack_68 = (undefined5)*(undefined8 *)(param_1 + 0x10);
  uStack_5b = (undefined3)*(undefined8 *)(param_1 + 0x1d);
  uStack_58 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x1d) >> 0x18);
  uStack_63 = (undefined3)*(undefined8 *)(param_1 + 0x15);
  local_60 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x15) >> 0x18);
  local_78 = &PTR_FUN_10145c130;
  FUN_10015d03c(auStack_50,param_1 + 0x28);
  local_70 = 0;
  uStack_68 = 0;
  uStack_63 = 0;
  local_60 = 0;
  uStack_5b = 0;
  _pthread_mutex_unlock(DAT_101e3cef8);
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x78))(plVar1,&local_78);
  }
  local_78 = &PTR_FUN_10145c130;
  FUN_10015d368(auStack_50,1);
  FUN_1004f15a8(&local_78);
  return;
}




void FUN_10015564c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145c130;
  FUN_10015d368(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




undefined8 * FUN_100155680(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_10149e3d0;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x15);
  *(undefined8 *)((long)param_1 + 0x1d) = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)((long)param_1 + 0x15) = uVar3;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  *param_1 = &PTR_FUN_10145b860;
  FUN_100155924(param_1 + 5,param_2 + 0x28);
  FUN_100155a84(param_1 + 7,param_2 + 0x38);
  FUN_100155c18(param_1 + 9,param_2 + 0x48);
  FUN_100155c7c(param_1 + 0xb,param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = uVar2;
  param_1[0xd] = uVar1;
  thunk_FUN_1004e439c(param_1 + 0x10,param_2 + 0x80);
  FUN_10003330c(param_1 + 0x12,param_2 + 0x90);
  thunk_FUN_1004e439c(param_1 + 0x15,param_2 + 0xa8);
  thunk_FUN_1004e439c(param_1 + 0x17,param_2 + 0xb8);
  FUN_10003330c(param_1 + 0x19,param_2 + 200);
  thunk_FUN_1004e439c(param_1 + 0x1c,param_2 + 0xe0);
  thunk_FUN_1004e439c(param_1 + 0x1e,param_2 + 0xf0);
  uVar1 = *(undefined8 *)(param_2 + 0x100);
  param_1[0x21] = *(undefined8 *)(param_2 + 0x108);
  param_1[0x20] = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x118);
  uVar1 = *(undefined8 *)(param_2 + 0x110);
  uVar4 = *(undefined8 *)(param_2 + 0x128);
  uVar3 = *(undefined8 *)(param_2 + 0x120);
  uVar5 = *(undefined8 *)(param_2 + 0x130);
  uVar7 = *(undefined8 *)(param_2 + 0x148);
  uVar6 = *(undefined8 *)(param_2 + 0x140);
  param_1[0x27] = *(undefined8 *)(param_2 + 0x138);
  param_1[0x26] = uVar5;
  param_1[0x29] = uVar7;
  param_1[0x28] = uVar6;
  param_1[0x23] = uVar2;
  param_1[0x22] = uVar1;
  param_1[0x25] = uVar4;
  param_1[0x24] = uVar3;
  uVar2 = *(undefined8 *)(param_2 + 0x158);
  uVar1 = *(undefined8 *)(param_2 + 0x150);
  uVar4 = *(undefined8 *)(param_2 + 0x168);
  uVar3 = *(undefined8 *)(param_2 + 0x160);
  uVar6 = *(undefined8 *)(param_2 + 0x178);
  uVar5 = *(undefined8 *)(param_2 + 0x170);
  *(undefined4 *)((long)param_1 + 0x17f) = *(undefined4 *)(param_2 + 0x17f);
  param_1[0x2d] = uVar4;
  param_1[0x2c] = uVar3;
  param_1[0x2f] = uVar6;
  param_1[0x2e] = uVar5;
  param_1[0x2b] = uVar2;
  param_1[0x2a] = uVar1;
  FUN_1000a72a4(param_1 + 0x31,param_2 + 0x188);
  FUN_1000a72a4(param_1 + 0x33,param_2 + 0x198);
  uVar1 = *(undefined8 *)(param_2 + 0x1a8);
  uVar3 = *(undefined8 *)(param_2 + 0x1c0);
  uVar2 = *(undefined8 *)(param_2 + 0x1b8);
  param_1[0x36] = *(undefined8 *)(param_2 + 0x1b0);
  param_1[0x35] = uVar1;
  param_1[0x38] = uVar3;
  param_1[0x37] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x1d0);
  uVar1 = *(undefined8 *)(param_2 + 0x1c8);
  uVar4 = *(undefined8 *)(param_2 + 0x1e0);
  uVar3 = *(undefined8 *)(param_2 + 0x1d8);
  uVar5 = *(undefined8 *)(param_2 + 0x1e8);
  uVar7 = *(undefined8 *)(param_2 + 0x200);
  uVar6 = *(undefined8 *)(param_2 + 0x1f8);
  param_1[0x3e] = *(undefined8 *)(param_2 + 0x1f0);
  param_1[0x3d] = uVar5;
  param_1[0x40] = uVar7;
  param_1[0x3f] = uVar6;
  param_1[0x3a] = uVar2;
  param_1[0x39] = uVar1;
  param_1[0x3c] = uVar4;
  param_1[0x3b] = uVar3;
  uVar2 = *(undefined8 *)(param_2 + 0x210);
  uVar1 = *(undefined8 *)(param_2 + 0x208);
  uVar4 = *(undefined8 *)(param_2 + 0x220);
  uVar3 = *(undefined8 *)(param_2 + 0x218);
  uVar6 = *(undefined8 *)(param_2 + 0x230);
  uVar5 = *(undefined8 *)(param_2 + 0x228);
  uVar7 = *(undefined8 *)(param_2 + 0x234);
  *(undefined8 *)((long)param_1 + 0x23c) = *(undefined8 *)(param_2 + 0x23c);
  *(undefined8 *)((long)param_1 + 0x234) = uVar7;
  param_1[0x44] = uVar4;
  param_1[0x43] = uVar3;
  param_1[0x46] = uVar6;
  param_1[0x45] = uVar5;
  param_1[0x42] = uVar2;
  param_1[0x41] = uVar1;
  return param_1;
}




void FUN_1001557e8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145b860;
  FUN_10015613c(param_1 + 0x10);
  FUN_100156080(param_1 + 0xb,1);
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete__((void *)param_1[10]);
    param_1[9] = 0;
    param_1[10] = 0;
  }
  FUN_100155f24(param_1 + 7,1);
  FUN_100155eac(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100155850(void)

{
  return 8;
}




void FUN_100155858(long param_1)

{
  FUN_100155eac(param_1 + 0x28,0);
  FUN_100155f24(param_1 + 0x38,0);
  if (*(long *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  FUN_100156080(param_1 + 0x58,0);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_100155fb0(param_1 + 0x80);
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
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x210) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x224) = 0x3f4000003e800000;
  *(undefined8 *)(param_1 + 0x21c) = 0;
  *(undefined8 *)(param_1 + 0x234) = 0;
  *(undefined8 *)(param_1 + 0x22c) = 0;
  *(undefined8 *)(param_1 + 0x23c) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x1a8) = 0xffffffffffffffff;
  return;
}




uint * FUN_100155924(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1001559a4(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x38;
    do {
      lVar1 = FUN_10003330c(lVar1,lVar3);
      uVar6 = *(undefined8 *)(lVar3 + 0x20);
      uVar5 = *(undefined8 *)(lVar3 + 0x18);
      uVar7 = *(undefined8 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
      *(undefined8 *)(lVar1 + 0x28) = uVar7;
      *(undefined8 *)(lVar1 + 0x20) = uVar6;
      *(undefined8 *)(lVar1 + 0x18) = uVar5;
      lVar3 = lVar3 + 0x38;
      lVar1 = lVar1 + 0x38;
      lVar4 = lVar4 + -0x38;
    } while (lVar4 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_1001559a4(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x38);
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 * 0x38;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_10003330c(pvVar2,puVar4);
        uVar7 = puVar4[4];
        uVar6 = puVar4[3];
        uVar8 = puVar4[5];
        *(undefined8 *)(lVar3 + 0x30) = puVar4[6];
        *(undefined8 *)(lVar3 + 0x28) = uVar8;
        *(undefined8 *)(lVar3 + 0x20) = uVar7;
        *(undefined8 *)(lVar3 + 0x18) = uVar6;
        puVar4 = puVar4 + 7;
        pvVar2 = (void *)(lVar3 + 0x38);
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x38;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            operator_delete((void *)*puVar4);
          }
          puVar4 = puVar4 + 7;
          lVar5 = lVar5 + -0x38;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




uint * FUN_100155a84(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100155b1c(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_1 + 2) + 0x18;
    lVar4 = (ulong)*param_2 * 0x38;
    lVar3 = *(long *)(param_2 + 2) + 0x18;
    do {
      FUN_10003330c(lVar2 + -0x18,lVar3 + -0x18);
      FUN_10003330c(lVar2,lVar3);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
      lVar2 = lVar2 + 0x38;
      lVar3 = lVar3 + 0x38;
      lVar4 = lVar4 + -0x38;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_100155b1c(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x38);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar4 = (long)pvVar1 + 0x18;
      lVar6 = (ulong)*param_1 * 0x38;
      lVar5 = (long)pvVar2 + 0x18;
      do {
        FUN_10003330c(lVar4 + -0x18,lVar5 + -0x18);
        FUN_10003330c(lVar4,lVar5);
        *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(lVar5 + 0x18);
        lVar4 = lVar4 + 0x38;
        lVar5 = lVar5 + 0x38;
        lVar6 = lVar6 + -0x38;
      } while (lVar6 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        pcVar3 = (char *)((long)pvVar2 + 0x17);
        lVar4 = (ulong)*param_1 * 0x38;
        do {
          if (pcVar3[0x18] < '\0') {
            operator_delete(*(void **)(pcVar3 + 1));
          }
          if (*pcVar3 < '\0') {
            operator_delete(*(void **)(pcVar3 + -0x17));
          }
          pcVar3 = pcVar3 + 0x38;
          lVar4 = lVar4 + -0x38;
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




uint * FUN_100155c18(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100026bb4(param_1,*param_2);
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar4 = (ulong)*param_2 << 2;
    puVar2 = *(undefined4 **)(param_2 + 2);
    puVar3 = *(undefined4 **)(param_1 + 2);
    do {
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -4;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




uint * FUN_100155c7c(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100155d48(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      lVar1 = lVar7 + lVar5;
      lVar2 = lVar6 + lVar5;
      FUN_10003330c(lVar1,lVar2);
      FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
      FUN_10003330c(lVar1 + 0x30,lVar2 + 0x30);
      FUN_10003330c(lVar1 + 0x48,lVar2 + 0x48);
      FUN_10003330c(lVar1 + 0x60,lVar2 + 0x60);
      uVar9 = *(undefined8 *)(lVar2 + 0x80);
      uVar8 = *(undefined8 *)(lVar2 + 0x78);
      *(undefined4 *)(lVar1 + 0x88) = *(undefined4 *)(lVar2 + 0x88);
      *(undefined8 *)(lVar1 + 0x80) = uVar9;
      *(undefined8 *)(lVar1 + 0x78) = uVar8;
      lVar5 = lVar5 + 0x90;
    } while ((ulong)uVar3 * 0x90 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




void FUN_100155eac(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x38;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 7;
        lVar2 = lVar2 + -0x38;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_100155f24(uint *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      pcVar1 = (char *)(*(long *)(param_1 + 2) + 0x17);
      lVar2 = (ulong)*param_1 * 0x38;
      do {
        if (pcVar1[0x18] < '\0') {
          operator_delete(*(void **)(pcVar1 + 1));
        }
        if (*pcVar1 < '\0') {
          operator_delete(*(void **)(pcVar1 + -0x17));
        }
        pcVar1 = pcVar1 + 0x38;
        lVar2 = lVar2 + -0x38;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_100155fb0(long param_1)

{
  FUN_1004e34c8();
  if (*(char *)(param_1 + 0x27) < '\0') {
    **(undefined1 **)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x27) = 0;
  }
  FUN_1004e34c8(param_1 + 0x28);
  FUN_1004e34c8(param_1 + 0x38);
  if (*(char *)(param_1 + 0x5f) < '\0') {
    **(undefined1 **)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(undefined1 *)(param_1 + 0x5f) = 0;
  }
  FUN_1004e34c8(param_1 + 0x60);
  FUN_1004e34c8(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0xfe) = 0;
  *(undefined2 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x102) = 0;
  FUN_10001629c(param_1 + 0x108,0);
  FUN_10001629c(param_1 + 0x118,0);
  return;
}




undefined8 * FUN_10015613c(undefined8 *param_1)

{
  FUN_10001629c(param_1 + 0x23,1);
  FUN_10001629c(param_1 + 0x21,1);
  if ((void *)param_1[0xf] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf]);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    param_1[7] = 0;
    param_1[8] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




void FUN_1001561e4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145b890;
  FUN_100156550(param_1 + 6,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10015621c(void)

{
  return 9;
}




uint * FUN_100156224(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100156364(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      lVar1 = lVar7 + lVar5;
      lVar2 = lVar6 + lVar5;
      FUN_10003330c(lVar1,lVar2);
      *(undefined1 *)(lVar1 + 0x18) = *(undefined1 *)(lVar2 + 0x18);
      FUN_10003330c(lVar1 + 0x20,lVar2 + 0x20);
      *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar2 + 0x38);
      FUN_10003330c(lVar1 + 0x40,lVar2 + 0x40);
      uVar9 = *(undefined8 *)(lVar2 + 0x60);
      uVar8 = *(undefined8 *)(lVar2 + 0x58);
      uVar11 = *(undefined8 *)(lVar2 + 0x70);
      uVar10 = *(undefined8 *)(lVar2 + 0x68);
      uVar12 = *(undefined8 *)(lVar2 + 0x78);
      *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(lVar2 + 0x80);
      *(undefined8 *)(lVar1 + 0x78) = uVar12;
      *(undefined8 *)(lVar1 + 0x70) = uVar11;
      *(undefined8 *)(lVar1 + 0x68) = uVar10;
      *(undefined8 *)(lVar1 + 0x60) = uVar9;
      *(undefined8 *)(lVar1 + 0x58) = uVar8;
      uVar9 = *(undefined8 *)(lVar2 + 0x90);
      uVar8 = *(undefined8 *)(lVar2 + 0x88);
      uVar11 = *(undefined8 *)(lVar2 + 0xa0);
      uVar10 = *(undefined8 *)(lVar2 + 0x98);
      uVar13 = *(undefined8 *)(lVar2 + 0xb0);
      uVar12 = *(undefined8 *)(lVar2 + 0xa8);
      uVar14 = *(undefined8 *)(lVar2 + 0xb8);
      *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(lVar2 + 0xc0);
      *(undefined8 *)(lVar1 + 0xb8) = uVar14;
      *(undefined8 *)(lVar1 + 0xb0) = uVar13;
      *(undefined8 *)(lVar1 + 0xa8) = uVar12;
      *(undefined8 *)(lVar1 + 0xa0) = uVar11;
      *(undefined8 *)(lVar1 + 0x98) = uVar10;
      *(undefined8 *)(lVar1 + 0x90) = uVar9;
      *(undefined8 *)(lVar1 + 0x88) = uVar8;
      uVar9 = *(undefined8 *)(lVar2 + 0xd0);
      uVar8 = *(undefined8 *)(lVar2 + 200);
      uVar11 = *(undefined8 *)(lVar2 + 0xe0);
      uVar10 = *(undefined8 *)(lVar2 + 0xd8);
      uVar13 = *(undefined8 *)(lVar2 + 0xf0);
      uVar12 = *(undefined8 *)(lVar2 + 0xe8);
      uVar14 = *(undefined8 *)(lVar2 + 0xf8);
      *(undefined8 *)(lVar1 + 0x100) = *(undefined8 *)(lVar2 + 0x100);
      *(undefined8 *)(lVar1 + 0xf8) = uVar14;
      *(undefined8 *)(lVar1 + 0xf0) = uVar13;
      *(undefined8 *)(lVar1 + 0xe8) = uVar12;
      *(undefined8 *)(lVar1 + 0xe0) = uVar11;
      *(undefined8 *)(lVar1 + 0xd8) = uVar10;
      *(undefined8 *)(lVar1 + 0xd0) = uVar9;
      *(undefined8 *)(lVar1 + 200) = uVar8;
      FUN_1000a72a4(lVar1 + 0x108,lVar2 + 0x108);
      thunk_FUN_1004e439c(lVar1 + 0x118,lVar2 + 0x118);
      *(undefined8 *)(lVar1 + 0x128) = *(undefined8 *)(lVar2 + 0x128);
      FUN_1000a72a4(lVar1 + 0x130,lVar2 + 0x130);
      uVar8 = *(undefined8 *)(lVar2 + 0x140);
      uVar10 = *(undefined8 *)(lVar2 + 0x158);
      uVar9 = *(undefined8 *)(lVar2 + 0x150);
      *(undefined8 *)(lVar1 + 0x148) = *(undefined8 *)(lVar2 + 0x148);
      *(undefined8 *)(lVar1 + 0x140) = uVar8;
      *(undefined8 *)(lVar1 + 0x158) = uVar10;
      *(undefined8 *)(lVar1 + 0x150) = uVar9;
      lVar5 = lVar5 + 0x160;
    } while ((ulong)uVar3 * 0x160 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




void FUN_100156364(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 * 0x160);
    pvVar6 = *(void **)(param_1 + 2);
    uVar3 = *param_1;
    if (uVar3 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar7 = 0;
      do {
        lVar1 = (long)pvVar4 + lVar7;
        lVar2 = (long)pvVar6 + lVar7;
        FUN_10003330c(lVar1,lVar2);
        *(undefined1 *)(lVar1 + 0x18) = *(undefined1 *)(lVar2 + 0x18);
        FUN_10003330c(lVar1 + 0x20,lVar2 + 0x20);
        *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar2 + 0x38);
        FUN_10003330c(lVar1 + 0x40,lVar2 + 0x40);
        uVar9 = *(undefined8 *)(lVar2 + 0x60);
        uVar8 = *(undefined8 *)(lVar2 + 0x58);
        uVar11 = *(undefined8 *)(lVar2 + 0x70);
        uVar10 = *(undefined8 *)(lVar2 + 0x68);
        uVar12 = *(undefined8 *)(lVar2 + 0x78);
        *(undefined8 *)(lVar1 + 0x80) = *(undefined8 *)(lVar2 + 0x80);
        *(undefined8 *)(lVar1 + 0x78) = uVar12;
        *(undefined8 *)(lVar1 + 0x70) = uVar11;
        *(undefined8 *)(lVar1 + 0x68) = uVar10;
        *(undefined8 *)(lVar1 + 0x60) = uVar9;
        *(undefined8 *)(lVar1 + 0x58) = uVar8;
        uVar9 = *(undefined8 *)(lVar2 + 0x90);
        uVar8 = *(undefined8 *)(lVar2 + 0x88);
        uVar11 = *(undefined8 *)(lVar2 + 0xa0);
        uVar10 = *(undefined8 *)(lVar2 + 0x98);
        uVar13 = *(undefined8 *)(lVar2 + 0xb0);
        uVar12 = *(undefined8 *)(lVar2 + 0xa8);
        uVar14 = *(undefined8 *)(lVar2 + 0xb8);
        *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(lVar2 + 0xc0);
        *(undefined8 *)(lVar1 + 0xb8) = uVar14;
        *(undefined8 *)(lVar1 + 0xb0) = uVar13;
        *(undefined8 *)(lVar1 + 0xa8) = uVar12;
        *(undefined8 *)(lVar1 + 0xa0) = uVar11;
        *(undefined8 *)(lVar1 + 0x98) = uVar10;
        *(undefined8 *)(lVar1 + 0x90) = uVar9;
        *(undefined8 *)(lVar1 + 0x88) = uVar8;
        uVar9 = *(undefined8 *)(lVar2 + 0xd0);
        uVar8 = *(undefined8 *)(lVar2 + 200);
        uVar11 = *(undefined8 *)(lVar2 + 0xe0);
        uVar10 = *(undefined8 *)(lVar2 + 0xd8);
        uVar13 = *(undefined8 *)(lVar2 + 0xf0);
        uVar12 = *(undefined8 *)(lVar2 + 0xe8);
        uVar14 = *(undefined8 *)(lVar2 + 0xf8);
        *(undefined8 *)(lVar1 + 0x100) = *(undefined8 *)(lVar2 + 0x100);
        *(undefined8 *)(lVar1 + 0xf8) = uVar14;
        *(undefined8 *)(lVar1 + 0xf0) = uVar13;
        *(undefined8 *)(lVar1 + 0xe8) = uVar12;
        *(undefined8 *)(lVar1 + 0xe0) = uVar11;
        *(undefined8 *)(lVar1 + 0xd8) = uVar10;
        *(undefined8 *)(lVar1 + 0xd0) = uVar9;
        *(undefined8 *)(lVar1 + 200) = uVar8;
        FUN_1000a72a4(lVar1 + 0x108,lVar2 + 0x108);
        thunk_FUN_1004e439c(lVar1 + 0x118,lVar2 + 0x118);
        *(undefined8 *)(lVar1 + 0x128) = *(undefined8 *)(lVar2 + 0x128);
        FUN_1000a72a4(lVar1 + 0x130,lVar2 + 0x130);
        uVar8 = *(undefined8 *)(lVar2 + 0x140);
        uVar10 = *(undefined8 *)(lVar2 + 0x158);
        uVar9 = *(undefined8 *)(lVar2 + 0x150);
        *(undefined8 *)(lVar1 + 0x148) = *(undefined8 *)(lVar2 + 0x148);
        *(undefined8 *)(lVar1 + 0x140) = uVar8;
        *(undefined8 *)(lVar1 + 0x158) = uVar10;
        *(undefined8 *)(lVar1 + 0x150) = uVar9;
        lVar7 = lVar7 + 0x160;
      } while ((ulong)uVar3 * 0x160 - lVar7 != 0);
      pvVar6 = *(void **)(param_1 + 2);
      uVar3 = *param_1;
      param_1[1] = param_2;
      if (uVar3 != 0) {
        lVar7 = 0;
        do {
          FUN_10001629c((long)pvVar6 + lVar7 + 0x130,1);
          pvVar5 = *(void **)((long)pvVar6 + lVar7 + 0x120);
          if (pvVar5 != (void *)0x0) {
            operator_delete__(pvVar5);
            *(undefined8 *)((long)pvVar6 + lVar7 + 0x118) = 0;
            *(undefined8 *)((long)pvVar6 + lVar7 + 0x120) = 0;
          }
          FUN_10001629c((long)pvVar6 + lVar7 + 0x108,1);
          if (*(char *)((long)pvVar6 + lVar7 + 0x57) < '\0') {
            operator_delete(*(void **)((long)pvVar6 + lVar7 + 0x40));
          }
          if (*(char *)((long)pvVar6 + lVar7 + 0x37) < '\0') {
            operator_delete(*(void **)((long)pvVar6 + lVar7 + 0x20));
          }
          if (*(char *)((long)pvVar6 + lVar7 + 0x17) < '\0') {
            operator_delete(*(void **)((long)pvVar6 + lVar7));
          }
          lVar7 = lVar7 + 0x160;
        } while ((ulong)uVar3 * 0x160 - lVar7 != 0);
        pvVar6 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
    }
    *(void **)(param_1 + 2) = pvVar4;
  }
  return;
}




void FUN_100156550(uint *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 2);
  if (lVar3 != 0) {
    uVar2 = *param_1;
    if (uVar2 != 0) {
      lVar4 = 0;
      do {
        lVar1 = lVar3 + lVar4;
        FUN_10001629c(lVar1 + 0x130,1);
        if (*(void **)(lVar1 + 0x120) != (void *)0x0) {
          operator_delete__(*(void **)(lVar1 + 0x120));
          *(undefined8 *)(lVar1 + 0x118) = 0;
          *(undefined8 *)(lVar1 + 0x120) = 0;
        }
        FUN_10001629c(lVar1 + 0x108,1);
        if (*(char *)(lVar1 + 0x57) < '\0') {
          operator_delete(*(void **)(lVar3 + lVar4 + 0x40));
        }
        lVar1 = lVar3 + lVar4;
        if (*(char *)(lVar1 + 0x37) < '\0') {
          operator_delete(*(void **)(lVar1 + 0x20));
        }
        if (*(char *)(lVar1 + 0x17) < '\0') {
          operator_delete(*(void **)(lVar3 + lVar4));
        }
        lVar4 = lVar4 + 0x160;
      } while ((ulong)uVar2 * 0x160 - lVar4 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_100156628(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100156668(void)

{
  return 3;
}




void FUN_100156670(long param_1)

{
  void *local_38 [2];
  char local_21;
  
  *(undefined1 *)(param_1 + 0x25) = 0;
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 0x28),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_1001566c4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145b8f0;
  FUN_10015690c(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1001566fc(void)

{
  return 0x36;
}




uint * FUN_100156704(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1001567c4(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      lVar1 = lVar7 + lVar5;
      lVar2 = lVar6 + lVar5;
      FUN_10003330c(lVar1,lVar2);
      FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
      FUN_10003330c(lVar1 + 0x30,lVar2 + 0x30);
      FUN_10003330c(lVar1 + 0x48,lVar2 + 0x48);
      uVar9 = *(undefined8 *)(lVar2 + 0x68);
      uVar8 = *(undefined8 *)(lVar2 + 0x60);
      *(undefined1 *)(lVar1 + 0x70) = *(undefined1 *)(lVar2 + 0x70);
      *(undefined8 *)(lVar1 + 0x68) = uVar9;
      *(undefined8 *)(lVar1 + 0x60) = uVar8;
      lVar5 = lVar5 + 0x78;
    } while ((ulong)uVar3 * 0x78 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




void FUN_1001569b8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004f15a8();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1001569cc(void)

{
  return 2;
}




void FUN_1001569d4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145b950;
  FUN_100156c78(param_1 + 0xe,1);
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100156a3c(void)

{
  return 0xd;
}




uint * FUN_100156a44(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100156b10(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      lVar1 = lVar7 + lVar5;
      lVar2 = lVar6 + lVar5;
      FUN_10003330c(lVar1,lVar2);
      thunk_FUN_1004e439c(lVar1 + 0x18,lVar2 + 0x18);
      uVar9 = *(undefined8 *)(lVar2 + 0x30);
      uVar8 = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
      *(undefined8 *)(lVar1 + 0x30) = uVar9;
      *(undefined8 *)(lVar1 + 0x28) = uVar8;
      FUN_10003330c(lVar1 + 0x40,lVar2 + 0x40);
      FUN_10003330c(lVar1 + 0x58,lVar2 + 0x58);
      FUN_10003330c(lVar1 + 0x70,lVar2 + 0x70);
      lVar5 = lVar5 + 0x88;
    } while ((ulong)uVar3 * 0x88 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




undefined8 * FUN_100156d38(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_10149e3d0;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)(param_2 + 0x15);
  *(undefined8 *)((long)param_1 + 0x1d) = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)((long)param_1 + 0x15) = uVar5;
  param_1[2] = uVar4;
  param_1[1] = uVar2;
  *param_1 = &PTR_thunk_FUN_100156e64_10145b980;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  FUN_10003330c(param_1 + 6,param_2 + 0x30);
  FUN_10003330c(param_1 + 9,param_2 + 0x48);
  lVar3 = 0;
  do {
    lVar1 = param_2 + lVar3;
    FUN_10003330c((long)param_1 + lVar3 + 0x60,lVar1 + 0x60);
    FUN_10003330c((long)param_1 + lVar3 + 0x78,lVar1 + 0x78);
    uVar2 = *(undefined8 *)(lVar1 + 0x90);
    *(undefined8 *)((long)param_1 + lVar3 + 0x98) = *(undefined8 *)(lVar1 + 0x98);
    *(undefined8 *)((long)param_1 + lVar3 + 0x90) = uVar2;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0x400);
  FUN_10003330c(param_1 + 0x8c,param_2 + 0x460);
  FUN_10003330c(param_1 + 0x8f,param_2 + 0x478);
  uVar2 = *(undefined8 *)(param_2 + 0x490);
  *(undefined4 *)(param_1 + 0x93) = *(undefined4 *)(param_2 + 0x498);
  param_1[0x92] = uVar2;
  FUN_10003330c(param_1 + 0x94,param_2 + 0x4a0);
  FUN_10003330c(param_1 + 0x97,param_2 + 0x4b8);
  FUN_10003330c(param_1 + 0x9a,param_2 + 0x4d0);
  FUN_10003330c(param_1 + 0x9d,param_2 + 0x4e8);
  return param_1;
}




void FUN_100156e48(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100156e64();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100156e5c(void)

{
  return 0xb;
}




void FUN_100156e64(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_100156e64_10145b980;
  if (*(char *)((long)param_1 + 0x4ff) < '\0') {
    operator_delete((void *)param_1[0x9d]);
  }
  if (*(char *)((long)param_1 + 0x4e7) < '\0') {
    operator_delete((void *)param_1[0x9a]);
  }
  if (*(char *)((long)param_1 + 0x4cf) < '\0') {
    operator_delete((void *)param_1[0x97]);
  }
  if (*(char *)((long)param_1 + 0x4b7) < '\0') {
    operator_delete((void *)param_1[0x94]);
  }
  if (*(char *)((long)param_1 + 0x48f) < '\0') {
    operator_delete((void *)param_1[0x8f]);
  }
  if (*(char *)((long)param_1 + 0x477) < '\0') {
    operator_delete((void *)param_1[0x8c]);
  }
  lVar1 = 0x400;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0x4f) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x38));
    }
    if (*(char *)((long)param_1 + lVar1 + 0x37) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x20));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != 0);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_100156f4c(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145b9b0;
  if (*(char *)((long)param_1 + 0x447) < '\0') {
    operator_delete((void *)param_1[0x86]);
  }
  lVar2 = 0;
  do {
    if (*(char *)((long)param_1 + lVar2 + 0x41f) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar2 + 0x408));
    }
    if (*(char *)((long)param_1 + lVar2 + 0x407) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar2 + 0x3f0));
    }
    lVar2 = lVar2 + -0x40;
  } while (lVar2 != -0x400);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100156fcc(void)

{
  return 0x37;
}




void FUN_100156fd4(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145b9e0;
  if (*(char *)((long)param_1 + 0x447) < '\0') {
    operator_delete((void *)param_1[0x86]);
  }
  lVar2 = 0;
  do {
    if (*(char *)((long)param_1 + lVar2 + 0x41f) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar2 + 0x408));
    }
    if (*(char *)((long)param_1 + lVar2 + 0x407) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar2 + 0x3f0));
    }
    lVar2 = lVar2 + -0x40;
  } while (lVar2 != -0x400);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100157054(void)

{
  return 0x38;
}




void FUN_10015705c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100157078();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100157070(void)

{
  return 0x46;
}




void FUN_100157078(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_100157078_10145ba10;
  if (*(char *)((long)param_1 + 0x48f) < '\0') {
    operator_delete((void *)param_1[0x8f]);
  }
  if (*(char *)((long)param_1 + 0x477) < '\0') {
    operator_delete((void *)param_1[0x8c]);
  }
  if (*(char *)((long)param_1 + 0x45f) < '\0') {
    operator_delete((void *)param_1[0x89]);
  }
  lVar1 = 0x400;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0x37) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x20));
    }
    if (*(char *)((long)param_1 + lVar1 + 0x1f) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 8));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != 0);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




undefined8 * FUN_100157120(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_10149e3d0;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 0x15);
  *(undefined8 *)((long)param_1 + 0x1d) = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)((long)param_1 + 0x15) = uVar6;
  param_1[2] = uVar5;
  param_1[1] = uVar4;
  *param_1 = &PTR_thunk_FUN_100157234_10145ba40;
  FUN_10003330c(param_1 + 5,param_2 + 0x28);
  FUN_10003330c(param_1 + 8,param_2 + 0x40);
  FUN_10003330c(param_1 + 0xb,param_2 + 0x58);
  FUN_10003330c(param_1 + 0xe,param_2 + 0x70);
  FUN_10003330c(param_1 + 0x11,param_2 + 0x88);
  FUN_10003330c(param_1 + 0x14,param_2 + 0xa0);
  lVar3 = 0;
  uVar2 = *(undefined4 *)(param_2 + 0xb8);
  *(undefined1 *)((long)param_1 + 0xbc) = *(undefined1 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x17) = uVar2;
  do {
    lVar1 = param_2 + lVar3;
    FUN_10003330c((long)param_1 + lVar3 + 0xc0,lVar1 + 0xc0);
    FUN_10003330c((long)param_1 + lVar3 + 0xd8,lVar1 + 0xd8);
    uVar4 = *(undefined8 *)(lVar1 + 0xf0);
    *(undefined8 *)((long)param_1 + lVar3 + 0xf8) = *(undefined8 *)(lVar1 + 0xf8);
    *(undefined8 *)((long)param_1 + lVar3 + 0xf0) = uVar4;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0x400);
  FUN_10003330c(param_1 + 0x98,param_2 + 0x4c0);
  return param_1;
}




void FUN_100157218(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100157234();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10015722c(void)

{
  return 0x47;
}




void FUN_100157234(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_100157234_10145ba40;
  if (*(char *)((long)param_1 + 0x4d7) < '\0') {
    operator_delete((void *)param_1[0x98]);
  }
  lVar1 = 0x400;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0xaf) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x98));
    }
    if (*(char *)((long)param_1 + lVar1 + 0x97) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x80));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != 0);
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    operator_delete((void *)param_1[0x14]);
  }
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    operator_delete((void *)param_1[0x11]);
  }
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




undefined8 * FUN_10015730c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_10149e3d0;
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 0x15);
  *(undefined8 *)((long)param_1 + 0x1d) = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)((long)param_1 + 0x15) = uVar6;
  param_1[2] = uVar5;
  param_1[1] = uVar4;
  *param_1 = &PTR_thunk_FUN_10015741c_10145ba70;
  FUN_100156a44(param_1 + 5,param_2 + 0x28);
  FUN_10003330c(param_1 + 7,param_2 + 0x38);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  FUN_10003330c(param_1 + 0xb,param_2 + 0x58);
  FUN_10003330c(param_1 + 0xe,param_2 + 0x70);
  lVar3 = 0;
  do {
    lVar1 = param_2 + lVar3;
    FUN_10003330c((long)param_1 + lVar3 + 0x88,lVar1 + 0x88);
    FUN_10003330c((long)param_1 + lVar3 + 0xa0,lVar1 + 0xa0);
    uVar4 = *(undefined8 *)(lVar1 + 0xb8);
    *(undefined8 *)((long)param_1 + lVar3 + 0xc0) = *(undefined8 *)(lVar1 + 0xc0);
    *(undefined8 *)((long)param_1 + lVar3 + 0xb8) = uVar4;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0x400);
  FUN_10003330c(param_1 + 0x91,param_2 + 0x488);
  FUN_10003330c(param_1 + 0x94,param_2 + 0x4a0);
  uVar2 = *(undefined4 *)(param_2 + 0x4b8);
  *(undefined1 *)((long)param_1 + 0x4bc) = *(undefined1 *)(param_2 + 0x4bc);
  *(undefined4 *)(param_1 + 0x97) = uVar2;
  return param_1;
}




void FUN_100157400(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10015741c();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100157414(void)

{
  return 0x4a;
}




void FUN_10015741c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_10015741c_10145ba70;
  if (*(char *)((long)param_1 + 0x4b7) < '\0') {
    operator_delete((void *)param_1[0x94]);
  }
  if (*(char *)((long)param_1 + 0x49f) < '\0') {
    operator_delete((void *)param_1[0x91]);
  }
  lVar1 = 0x400;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0x77) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x60));
    }
    if (*(char *)((long)param_1 + lVar1 + 0x5f) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x48));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != 0);
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  FUN_100156c78(param_1 + 5,1);
  FUN_1004f15a8(param_1);
  return;
}




void FUN_1001574e0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145baa0;
  FUN_100157a40(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100157518(void)

{
  return 0x15;
}




uint * FUN_100157520(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015758c(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 << 7;
    do {
      lVar1 = FUN_100157664(lVar1,lVar3);
      lVar3 = lVar3 + 0x80;
      lVar1 = lVar1 + 0x80;
      lVar4 = lVar4 + -0x80;
    } while (lVar4 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_10015758c(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 << 7);
    pvVar4 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 << 7;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_100157664(pvVar2,pvVar4);
        pvVar4 = (void *)((long)pvVar4 + 0x80);
        pvVar2 = (void *)(lVar3 + 0x80);
        lVar5 = lVar5 + -0x80;
      } while (lVar5 != 0);
      pvVar4 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar3 = (ulong)*param_1 << 7;
        lVar5 = (long)pvVar4 + 0x68;
        do {
          FUN_1001347f4(lVar5,*(undefined8 *)(lVar5 + 8));
          FUN_10014ea3c(lVar5 + -0x68);
          FUN_10014ea60(lVar5 + -0x40);
          lVar5 = lVar5 + 0x80;
          lVar3 = lVar3 + -0x80;
        } while (lVar3 != 0);
        pvVar4 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_100157664(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0x400;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  puVar2 = operator_new(0x28);
  *puVar2 = 0;
  puVar2[1] = 0x10000;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[2] = 0;
  puVar5 = param_1 + 0xe;
  *puVar5 = 0;
  param_1[3] = puVar2;
  param_1[4] = puVar2;
  puVar2 = param_1 + 0xd;
  *puVar2 = puVar5;
  param_1[0xf] = 0;
  if (param_1 != param_2) {
    FUN_1001347f4(puVar2,0);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xd] = puVar5;
    plVar6 = (long *)param_2[0xd];
    while (plVar6 != param_2 + 0xe) {
      FUN_100157784(puVar2,puVar5,plVar6 + 4,plVar6 + 4);
      plVar3 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar3 = plVar6 + 2;
        bVar1 = *(long **)*plVar3 != plVar6;
        plVar6 = (long *)*plVar3;
        if (bVar1) {
          do {
            lVar4 = *plVar3;
            plVar3 = (long *)(lVar4 + 0x10);
            plVar6 = (long *)*plVar3;
          } while (*plVar6 != lVar4);
        }
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    }
  }
  FUN_100111bb4(param_1,param_2,param_1[3]);
  return;
}




undefined1  [16]
FUN_100157784(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  puVar2 = (undefined8 *)FUN_100157818(param_1,param_2,&local_38,auStack_40,param_3);
  pvVar3 = (void *)*puVar2;
  bVar1 = pvVar3 == (void *)0x0;
  if (bVar1) {
    pvVar3 = operator_new(0x50);
    FUN_10003330c((long)pvVar3 + 0x20,param_4);
    FUN_10003330c((long)pvVar3 + 0x38,param_4 + 0x18);
    FUN_1001349d0(param_1,local_38,puVar2,pvVar3);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = pvVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}




long * FUN_100157818(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1 + 1 != param_2) {
    iVar2 = FUN_1001579c0(param_5,param_2 + 4);
    if (iVar2 == 0) {
      iVar2 = FUN_1001579c0(param_2 + 4,param_5);
      if (iVar2 == 0) {
        *param_3 = (long)param_2;
        *param_4 = (long)param_2;
        return param_4;
      }
      plVar3 = (long *)param_2[1];
      if ((long *)param_2[1] == (long *)0x0) {
        plVar3 = param_2 + 2;
        plVar5 = (long *)*plVar3;
        if ((long *)*plVar5 != param_2) {
          do {
            lVar4 = *plVar3;
            plVar3 = (long *)(lVar4 + 0x10);
            plVar5 = (long *)*plVar3;
          } while (*plVar5 != lVar4);
        }
      }
      else {
        do {
          plVar5 = plVar3;
          plVar3 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      if ((plVar5 == param_1 + 1) || (iVar2 = FUN_1001579c0(param_5,plVar5 + 4), iVar2 != 0)) {
        if (param_2[1] != 0) {
          *param_3 = (long)plVar5;
          return plVar5;
        }
        *param_3 = (long)param_2;
        return param_2 + 1;
      }
      goto LAB_100157978;
    }
  }
  plVar5 = (long *)*param_2;
  plVar3 = param_2;
  if ((long *)*param_1 != param_2) {
    plVar1 = plVar5;
    if (plVar5 == (long *)0x0) {
      plVar3 = param_2 + 2;
      if (*(long **)*plVar3 == param_2) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
        } while (*(long *)*plVar3 == lVar4);
      }
      plVar3 = (long *)*plVar3;
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)plVar3[1];
      } while ((long *)plVar3[1] != (long *)0x0);
    }
    iVar2 = FUN_1001579c0(plVar3 + 4,param_5);
    if (iVar2 == 0) {
LAB_100157978:
      plVar3 = (long *)FUN_100134860(param_1,param_3,param_5);
      return plVar3;
    }
  }
  if (plVar5 == (long *)0x0) {
    *param_3 = (long)param_2;
  }
  else {
    *param_3 = (long)plVar3;
    param_2 = plVar3 + 1;
  }
  return param_2;
}




uint FUN_1001579c0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_100157a30;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_100157a30:
  return uVar8 >> 0x1f;
}




void FUN_100157a40(uint *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 7;
      lVar1 = *(long *)(param_1 + 2) + 0x68;
      do {
        FUN_1001347f4(lVar1,*(undefined8 *)(lVar1 + 8));
        FUN_10014ea3c(lVar1 + -0x68);
        FUN_10014ea60(lVar1 + -0x40);
        lVar1 = lVar1 + 0x80;
        lVar2 = lVar2 + -0x80;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_100157ac4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bad0;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100157b24(void)

{
  return 0x16;
}




void FUN_100157b2c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bb00;
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100157b9c(void)

{
  return 0x1a;
}




void FUN_100157ba4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bb30;
  FUN_100157d54(param_1 + 9,1);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100157bec(void)

{
  return 0x1b;
}




uint * FUN_100157bf4(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100157c74(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x30;
    do {
      lVar1 = FUN_10003330c(lVar1,lVar3);
      uVar6 = *(undefined8 *)(lVar3 + 0x20);
      uVar5 = *(undefined8 *)(lVar3 + 0x18);
      *(undefined2 *)(lVar1 + 0x28) = *(undefined2 *)(lVar3 + 0x28);
      *(undefined8 *)(lVar1 + 0x20) = uVar6;
      *(undefined8 *)(lVar1 + 0x18) = uVar5;
      lVar3 = lVar3 + 0x30;
      lVar1 = lVar1 + 0x30;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_100157c74(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x30);
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 * 0x30;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_10003330c(pvVar2,puVar4);
        uVar7 = puVar4[4];
        uVar6 = puVar4[3];
        *(undefined2 *)(lVar3 + 0x28) = *(undefined2 *)(puVar4 + 5);
        *(undefined8 *)(lVar3 + 0x20) = uVar7;
        *(undefined8 *)(lVar3 + 0x18) = uVar6;
        puVar4 = puVar4 + 6;
        pvVar2 = (void *)(lVar3 + 0x30);
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x30;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            operator_delete((void *)*puVar4);
          }
          puVar4 = puVar4 + 6;
          lVar5 = lVar5 + -0x30;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_100157d54(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x30;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 6;
        lVar2 = lVar2 + -0x30;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_100157dcc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bb60;
  FUN_10001629c(param_1 + 9,1);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100157e14(void)

{
  return 0x21;
}




void FUN_100157e1c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bb90;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100157e5c(void)

{
  return 0x22;
}




void FUN_100157e64(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004f15a8();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100157e78(void)

{
  return 0x23;
}




void FUN_100157e80(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bbf0;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100157ec0(void)

{
  return 0x2b;
}




void FUN_100157ec8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bc20;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100157f08(void)

{
  return 0x2c;
}




void FUN_100157f10(long param_1)

{
  void *local_38 [2];
  char local_21;
  
  *(undefined1 *)(param_1 + 0x25) = 0;
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 0x28),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_100157f64(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bc50;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100157fa4(void)

{
  return 0x2d;
}




void FUN_100157fac(long param_1)

{
  void *local_38 [2];
  char local_21;
  
  *(undefined1 *)(param_1 + 0x25) = 0;
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 0x28),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_100158000(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bc80;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100158040(void)

{
  return 0x2e;
}




void FUN_100158048(long param_1)

{
  void *local_38 [2];
  char local_21;
  
  *(undefined1 *)(param_1 + 0x25) = 0;
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 0x28),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_10015809c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bcb0;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1001580dc(void)

{
  return 0x2f;
}




void FUN_1001580e4(long param_1)

{
  void *local_38 [2];
  char local_21;
  
  *(undefined1 *)(param_1 + 0x25) = 0;
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 0x28),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_100158138(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bce0;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100158178(void)

{
  return 0x30;
}




void FUN_100158180(long param_1)

{
  void *local_38 [2];
  char local_21;
  
  *(undefined1 *)(param_1 + 0x25) = 0;
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 0x28),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_1001581d4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004f15a8();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1001581e8(void)

{
  return 0x31;
}




void FUN_1001581f0(long param_1)

{
  *(undefined1 *)(param_1 + 0x25) = 0;
  return;
}




void FUN_1001581f8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bd40;
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100158248(void)

{
  return 0x32;
}




void FUN_100158250(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bd70;
  FUN_1001589f0(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100158288(void)

{
  return 0x33;
}




void FUN_100158290(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (*(uint *)(param_1 + 0x28) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 0x28) * 0x110;
      do {
        lVar1 = FUN_100158828(lVar1);
        lVar1 = lVar1 + 0x110;
        lVar2 = lVar2 + -0x110;
      } while (lVar2 != 0);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}




uint * FUN_1001582e4(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100158400(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      lVar1 = lVar7 + lVar5;
      lVar2 = lVar6 + lVar5;
      FUN_10003330c(lVar1,lVar2);
      FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
      FUN_10003330c(lVar1 + 0x30,lVar2 + 0x30);
      FUN_10003330c(lVar1 + 0x48,lVar2 + 0x48);
      FUN_10003330c(lVar1 + 0x60,lVar2 + 0x60);
      FUN_10003330c(lVar1 + 0x78,lVar2 + 0x78);
      FUN_10003330c(lVar1 + 0x90,lVar2 + 0x90);
      FUN_10003330c(lVar1 + 0xa8,lVar2 + 0xa8);
      FUN_10003330c(lVar1 + 0xc0,lVar2 + 0xc0);
      FUN_100158568(lVar1 + 0xd8,lVar2 + 0xd8);
      FUN_1001586e4(lVar1 + 0xe8,lVar2 + 0xe8);
      uVar9 = *(undefined8 *)(lVar2 + 0x100);
      uVar8 = *(undefined8 *)(lVar2 + 0xf8);
      *(undefined8 *)(lVar1 + 0x108) = *(undefined8 *)(lVar2 + 0x108);
      *(undefined8 *)(lVar1 + 0x100) = uVar9;
      *(undefined8 *)(lVar1 + 0xf8) = uVar8;
      lVar5 = lVar5 + 0x110;
    } while ((ulong)uVar3 * 0x110 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




void FUN_100158400(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 * 0x110);
    pvVar5 = *(void **)(param_1 + 2);
    uVar3 = *param_1;
    if (uVar3 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = 0;
      do {
        lVar1 = (long)pvVar4 + lVar6;
        lVar2 = (long)pvVar5 + lVar6;
        FUN_10003330c(lVar1,lVar2);
        FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
        FUN_10003330c(lVar1 + 0x30,lVar2 + 0x30);
        FUN_10003330c(lVar1 + 0x48,lVar2 + 0x48);
        FUN_10003330c(lVar1 + 0x60,lVar2 + 0x60);
        FUN_10003330c(lVar1 + 0x78,lVar2 + 0x78);
        FUN_10003330c(lVar1 + 0x90,lVar2 + 0x90);
        FUN_10003330c(lVar1 + 0xa8,lVar2 + 0xa8);
        FUN_10003330c(lVar1 + 0xc0,lVar2 + 0xc0);
        FUN_100158568(lVar1 + 0xd8,lVar2 + 0xd8);
        FUN_1001586e4(lVar1 + 0xe8,lVar2 + 0xe8);
        uVar8 = *(undefined8 *)(lVar2 + 0x100);
        uVar7 = *(undefined8 *)(lVar2 + 0xf8);
        *(undefined8 *)(lVar1 + 0x108) = *(undefined8 *)(lVar2 + 0x108);
        *(undefined8 *)(lVar1 + 0x100) = uVar8;
        *(undefined8 *)(lVar1 + 0xf8) = uVar7;
        lVar6 = lVar6 + 0x110;
      } while ((ulong)uVar3 * 0x110 - lVar6 != 0);
      pvVar5 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 * 0x110;
        do {
          FUN_100158828(pvVar5);
          pvVar5 = (void *)((long)pvVar5 + 0x110);
          lVar6 = lVar6 + -0x110;
        } while (lVar6 != 0);
        pvVar5 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    *(void **)(param_1 + 2) = pvVar4;
  }
  return;
}




uint * FUN_100158568(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1001585f0(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x30;
    do {
      FUN_10003330c(lVar3,lVar2);
      FUN_10003330c(lVar3 + 0x18,lVar2 + 0x18);
      lVar2 = lVar2 + 0x30;
      lVar3 = lVar3 + 0x30;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_1001585f0(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  char *pcVar3;
  void *pvVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x30);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 * 0x30;
      pvVar4 = pvVar1;
      do {
        FUN_10003330c(pvVar4,pvVar2);
        FUN_10003330c((long)pvVar4 + 0x18,(long)pvVar2 + 0x18);
        pvVar2 = (void *)((long)pvVar2 + 0x30);
        pvVar4 = (void *)((long)pvVar4 + 0x30);
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        pcVar3 = (char *)((long)pvVar2 + 0x17);
        lVar5 = (ulong)*param_1 * 0x30;
        do {
          if (pcVar3[0x18] < '\0') {
            operator_delete(*(void **)(pcVar3 + 1));
          }
          if (*pcVar3 < '\0') {
            operator_delete(*(void **)(pcVar3 + -0x17));
          }
          pcVar3 = pcVar3 + 0x30;
          lVar5 = lVar5 + -0x30;
        } while (lVar5 != 0);
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




uint * FUN_1001586e4(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100158758(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 << 5;
    do {
      lVar1 = FUN_10003330c(lVar1,lVar3);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
      lVar3 = lVar3 + 0x20;
      lVar1 = lVar1 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_100158758(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 << 5);
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 << 5;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_10003330c(pvVar2,puVar4);
        *(undefined8 *)(lVar3 + 0x18) = puVar4[3];
        puVar4 = puVar4 + 4;
        pvVar2 = (void *)(lVar3 + 0x20);
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 << 5;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            operator_delete((void *)*puVar4);
          }
          puVar4 = puVar4 + 4;
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




undefined8 * FUN_100158828(undefined8 *param_1)

{
  FUN_1001588f0(param_1 + 0x1d,1);
  FUN_100158964(param_1 + 0x1b,1);
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    operator_delete((void *)param_1[0x18]);
  }
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    operator_delete((void *)param_1[0x15]);
  }
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    operator_delete((void *)param_1[0x12]);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return param_1;
}




void FUN_1001588f0(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 5;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_100158964(uint *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      pcVar1 = (char *)(*(long *)(param_1 + 2) + 0x17);
      lVar2 = (ulong)*param_1 * 0x30;
      do {
        if (pcVar1[0x18] < '\0') {
          operator_delete(*(void **)(pcVar1 + 1));
        }
        if (*pcVar1 < '\0') {
          operator_delete(*(void **)(pcVar1 + -0x17));
        }
        pcVar1 = pcVar1 + 0x30;
        lVar2 = lVar2 + -0x30;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_1001589f0(uint *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x110;
      do {
        lVar1 = FUN_100158828(lVar1);
        lVar1 = lVar1 + 0x110;
        lVar2 = lVar2 + -0x110;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_100158a5c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bda0;
  FUN_100158f50(param_1 + 10,1);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  FUN_10015690c(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100158ab0(void)

{
  return 0x34;
}




void FUN_100158ab8(long param_1)

{
  FUN_10015690c(param_1 + 0x28,0);
  if (*(char *)(param_1 + 0x4f) < '\0') {
    **(undefined1 **)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x4f) = 0;
  }
  FUN_100158f50(param_1 + 0x50,0);
  *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x68) = 0;
  return;
}




uint * FUN_100158b18(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100158ba8(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 << 6;
    do {
      FUN_10003330c(lVar3,lVar2);
      FUN_10003330c(lVar3 + 0x18,lVar2 + 0x18);
      FUN_100158cac(lVar3 + 0x30,lVar2 + 0x30);
      lVar2 = lVar2 + 0x40;
      lVar3 = lVar3 + 0x40;
      lVar4 = lVar4 + -0x40;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




uint * FUN_100158cac(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100158d64(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      lVar1 = lVar7 + lVar5;
      lVar2 = lVar6 + lVar5;
      FUN_10003330c(lVar1,lVar2);
      FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
      FUN_10003330c(lVar1 + 0x30,lVar2 + 0x30);
      FUN_10003330c(lVar1 + 0x48,lVar2 + 0x48);
      *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(lVar2 + 0x60);
      lVar5 = lVar5 + 0x68;
    } while ((ulong)uVar3 * 0x68 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




void FUN_100158fe4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004f15a8();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100158ff8(void)

{
  return 0x35;
}




void FUN_100159000(long param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  return;
}




void FUN_100159010(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145be00;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  FUN_1001591f8(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10015905c(void)

{
  return 0x26;
}




uint * FUN_100159064(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1001590fc(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_1 + 2) + 0x18;
    lVar4 = (ulong)*param_2 * 0x38;
    lVar3 = *(long *)(param_2 + 2) + 0x18;
    do {
      FUN_10003330c(lVar2 + -0x18,lVar3 + -0x18);
      FUN_10003330c(lVar2,lVar3);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
      lVar2 = lVar2 + 0x38;
      lVar3 = lVar3 + 0x38;
      lVar4 = lVar4 + -0x38;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_1001590fc(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x38);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar4 = (long)pvVar1 + 0x18;
      lVar6 = (ulong)*param_1 * 0x38;
      lVar5 = (long)pvVar2 + 0x18;
      do {
        FUN_10003330c(lVar4 + -0x18,lVar5 + -0x18);
        FUN_10003330c(lVar4,lVar5);
        *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(lVar5 + 0x18);
        lVar4 = lVar4 + 0x38;
        lVar5 = lVar5 + 0x38;
        lVar6 = lVar6 + -0x38;
      } while (lVar6 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        pcVar3 = (char *)((long)pvVar2 + 0x17);
        lVar4 = (ulong)*param_1 * 0x38;
        do {
          if (pcVar3[0x18] < '\0') {
            operator_delete(*(void **)(pcVar3 + 1));
          }
          if (*pcVar3 < '\0') {
            operator_delete(*(void **)(pcVar3 + -0x17));
          }
          pcVar3 = pcVar3 + 0x38;
          lVar4 = lVar4 + -0x38;
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




void FUN_1001591f8(uint *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      pcVar1 = (char *)(*(long *)(param_1 + 2) + 0x17);
      lVar2 = (ulong)*param_1 * 0x38;
      do {
        if (pcVar1[0x18] < '\0') {
          operator_delete(*(void **)(pcVar1 + 1));
        }
        if (*pcVar1 < '\0') {
          operator_delete(*(void **)(pcVar1 + -0x17));
        }
        pcVar1 = pcVar1 + 0x38;
        lVar2 = lVar2 + -0x38;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_100159284(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145be30;
  FUN_10015951c(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1001592bc(void)

{
  return 0x27;
}




uint * FUN_1001592c4(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015939c(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      lVar1 = lVar7 + lVar5;
      lVar2 = lVar6 + lVar5;
      FUN_10003330c(lVar1,lVar2);
      FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
      FUN_10003330c(lVar1 + 0x30,lVar2 + 0x30);
      *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(lVar2 + 0x48);
      FUN_10003330c(lVar1 + 0x50,lVar2 + 0x50);
      FUN_10003330c(lVar1 + 0x68,lVar2 + 0x68);
      FUN_10003330c(lVar1 + 0x80,lVar2 + 0x80);
      *(undefined1 *)(lVar1 + 0x98) = *(undefined1 *)(lVar2 + 0x98);
      lVar5 = lVar5 + 0xa0;
    } while ((ulong)uVar3 * 0xa0 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




void FUN_1001595e8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145be60;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100159628(void)

{
  return 0x24;
}




void FUN_100159630(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145be90;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100159670(void)

{
  return 0x25;
}




undefined8 * FUN_100159678(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_10149e3d0;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x15);
  *(undefined8 *)((long)param_1 + 0x1d) = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)((long)param_1 + 0x15) = uVar3;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  *param_1 = &PTR_thunk_FUN_10015a304_10145bec0;
  FUN_10003330c(param_1 + 5,param_2 + 0x28);
  FUN_10003330c(param_1 + 8,param_2 + 0x40);
  FUN_10003330c(param_1 + 0xb,param_2 + 0x58);
  FUN_10003330c(param_1 + 0xe,param_2 + 0x70);
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  param_1[0x11] = uVar1;
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  FUN_10003330c(param_1 + 0x14,param_2 + 0xa0);
  FUN_10003330c(param_1 + 0x17,param_2 + 0xb8);
  FUN_10003330c(param_1 + 0x1a,param_2 + 0xd0);
  FUN_10003330c(param_1 + 0x1d,param_2 + 0xe8);
  FUN_10003330c(param_1 + 0x20,param_2 + 0x100);
  FUN_10003330c(param_1 + 0x23,param_2 + 0x118);
  FUN_10003330c(param_1 + 0x26,param_2 + 0x130);
  FUN_10003330c(param_1 + 0x29,param_2 + 0x148);
  FUN_10003330c(param_1 + 0x2c,param_2 + 0x160);
  *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_2 + 0x178);
  FUN_10003330c(param_1 + 0x30,param_2 + 0x180);
  FUN_10003330c(param_1 + 0x33,param_2 + 0x198);
  uVar2 = *(undefined8 *)(param_2 + 0x1b8);
  uVar1 = *(undefined8 *)(param_2 + 0x1b0);
  uVar4 = *(undefined8 *)(param_2 + 0x1c8);
  uVar3 = *(undefined8 *)(param_2 + 0x1c0);
  param_1[0x3a] = *(undefined8 *)(param_2 + 0x1d0);
  param_1[0x37] = uVar2;
  param_1[0x36] = uVar1;
  param_1[0x39] = uVar4;
  param_1[0x38] = uVar3;
  FUN_1001598e0(param_1 + 0x3b,param_2 + 0x1d8);
  FUN_100159b20(param_1 + 0x3d,param_2 + 0x1e8);
  FUN_100159c64(param_1 + 0x3f,param_2 + 0x1f8);
  FUN_100159df8(param_1 + 0x41,param_2 + 0x208);
  *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_2 + 0x218);
  FUN_10003330c(param_1 + 0x44,param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x47) = *(undefined4 *)(param_2 + 0x238);
  return param_1;
}




void FUN_1001597ec(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10015a304();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_100159800(void)

{
  return 0x10;
}




void FUN_100159808(long param_1)

{
  void *local_38 [2];
  char local_21;
  
  FUN_100159fc8(param_1 + 0x28);
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 0x180),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 0x198),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  FUN_10015a0b0(param_1 + 0x1d8,0);
  *(undefined1 *)(param_1 + 0x218) = 0;
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 0x220),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  return;
}




uint * FUN_1001598e0(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1001599c4(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      lVar1 = lVar7 + lVar5;
      lVar2 = lVar6 + lVar5;
      FUN_10003330c(lVar1,lVar2);
      thunk_FUN_1004e439c(lVar1 + 0x18,lVar2 + 0x18);
      FUN_10003330c(lVar1 + 0x28,lVar2 + 0x28);
      uVar8 = *(undefined8 *)(lVar2 + 0x40);
      *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
      *(undefined8 *)(lVar1 + 0x40) = uVar8;
      uVar9 = *(undefined8 *)(lVar2 + 0x58);
      uVar8 = *(undefined8 *)(lVar2 + 0x50);
      uVar11 = *(undefined8 *)(lVar2 + 0x68);
      uVar10 = *(undefined8 *)(lVar2 + 0x60);
      uVar12 = *(undefined8 *)(lVar2 + 0x70);
      uVar14 = *(undefined8 *)(lVar2 + 0x88);
      uVar13 = *(undefined8 *)(lVar2 + 0x80);
      *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar2 + 0x78);
      *(undefined8 *)(lVar1 + 0x70) = uVar12;
      *(undefined8 *)(lVar1 + 0x88) = uVar14;
      *(undefined8 *)(lVar1 + 0x80) = uVar13;
      *(undefined8 *)(lVar1 + 0x58) = uVar9;
      *(undefined8 *)(lVar1 + 0x50) = uVar8;
      *(undefined8 *)(lVar1 + 0x68) = uVar11;
      *(undefined8 *)(lVar1 + 0x60) = uVar10;
      uVar9 = *(undefined8 *)(lVar2 + 0x98);
      uVar8 = *(undefined8 *)(lVar2 + 0x90);
      uVar11 = *(undefined8 *)(lVar2 + 0xa8);
      uVar10 = *(undefined8 *)(lVar2 + 0xa0);
      uVar12 = *(undefined8 *)(lVar2 + 0xb0);
      uVar14 = *(undefined8 *)(lVar2 + 200);
      uVar13 = *(undefined8 *)(lVar2 + 0xc0);
      *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(lVar2 + 0xb8);
      *(undefined8 *)(lVar1 + 0xb0) = uVar12;
      *(undefined8 *)(lVar1 + 200) = uVar14;
      *(undefined8 *)(lVar1 + 0xc0) = uVar13;
      *(undefined8 *)(lVar1 + 0x98) = uVar9;
      *(undefined8 *)(lVar1 + 0x90) = uVar8;
      *(undefined8 *)(lVar1 + 0xa8) = uVar11;
      *(undefined8 *)(lVar1 + 0xa0) = uVar10;
      uVar9 = *(undefined8 *)(lVar2 + 0xd8);
      uVar8 = *(undefined8 *)(lVar2 + 0xd0);
      uVar11 = *(undefined8 *)(lVar2 + 0xe8);
      uVar10 = *(undefined8 *)(lVar2 + 0xe0);
      uVar13 = *(undefined8 *)(lVar2 + 0xf8);
      uVar12 = *(undefined8 *)(lVar2 + 0xf0);
      *(undefined4 *)(lVar1 + 0xff) = *(undefined4 *)(lVar2 + 0xff);
      *(undefined8 *)(lVar1 + 0xe8) = uVar11;
      *(undefined8 *)(lVar1 + 0xe0) = uVar10;
      *(undefined8 *)(lVar1 + 0xf8) = uVar13;
      *(undefined8 *)(lVar1 + 0xf0) = uVar12;
      *(undefined8 *)(lVar1 + 0xd8) = uVar9;
      *(undefined8 *)(lVar1 + 0xd0) = uVar8;
      lVar5 = lVar5 + 0x108;
    } while ((ulong)uVar3 * 0x108 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




uint * FUN_100159b20(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100159b94(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 << 5;
    do {
      lVar1 = FUN_10003330c(lVar1,lVar3);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
      lVar3 = lVar3 + 0x20;
      lVar1 = lVar1 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_100159b94(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 << 5);
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 << 5;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_10003330c(pvVar2,puVar4);
        *(undefined8 *)(lVar3 + 0x18) = puVar4[3];
        puVar4 = puVar4 + 4;
        pvVar2 = (void *)(lVar3 + 0x20);
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 << 5;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            operator_delete((void *)*puVar4);
          }
          puVar4 = puVar4 + 4;
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




uint * FUN_100159c64(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100159cfc(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_1 + 2) + 0x18;
    lVar4 = (ulong)*param_2 * 0x38;
    lVar3 = *(long *)(param_2 + 2) + 0x18;
    do {
      FUN_10003330c(lVar2 + -0x18,lVar3 + -0x18);
      FUN_10003330c(lVar2,lVar3);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
      lVar2 = lVar2 + 0x38;
      lVar3 = lVar3 + 0x38;
      lVar4 = lVar4 + -0x38;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_100159cfc(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x38);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar4 = (long)pvVar1 + 0x18;
      lVar6 = (ulong)*param_1 * 0x38;
      lVar5 = (long)pvVar2 + 0x18;
      do {
        FUN_10003330c(lVar4 + -0x18,lVar5 + -0x18);
        FUN_10003330c(lVar4,lVar5);
        *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(lVar5 + 0x18);
        lVar4 = lVar4 + 0x38;
        lVar5 = lVar5 + 0x38;
        lVar6 = lVar6 + -0x38;
      } while (lVar6 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        pcVar3 = (char *)((long)pvVar2 + 0x17);
        lVar4 = (ulong)*param_1 * 0x38;
        do {
          if (pcVar3[0x18] < '\0') {
            operator_delete(*(void **)(pcVar3 + 1));
          }
          if (*pcVar3 < '\0') {
            operator_delete(*(void **)(pcVar3 + -0x17));
          }
          pcVar3 = pcVar3 + 0x38;
          lVar4 = lVar4 + -0x38;
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




uint * FUN_100159df8(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100159ea4(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      lVar1 = lVar7 + lVar5;
      lVar2 = lVar6 + lVar5;
      FUN_10003330c(lVar1,lVar2);
      FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
      FUN_10003330c(lVar1 + 0x30,lVar2 + 0x30);
      *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
      lVar5 = lVar5 + 0x50;
    } while ((ulong)uVar3 * 0x50 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




void FUN_100159fc8(string *param_1)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,"");
  std::string::operator=(param_1,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"");
  std::string::operator=(param_1 + 0x18,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"");
  std::string::operator=(param_1 + 0x30,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"");
  std::string::operator=(param_1 + 0x48,(string *)local_38);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  FUN_10015a14c(param_1 + 0x70);
  return;
}




void FUN_10015a14c(undefined8 *param_1)

{
  void *local_38 [2];
  char local_21;
  
  *param_1 = 0;
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 1),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 4),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 7),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 10),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 0xd),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 0x10),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 0x13),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 0x16),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 0x19),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}




void FUN_10015a304(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10015a304_10145bec0;
  if (*(char *)((long)param_1 + 0x237) < '\0') {
    operator_delete((void *)param_1[0x44]);
  }
  FUN_10015a3d8(param_1 + 0x41,1);
  FUN_10015a474(param_1 + 0x3f,1);
  FUN_10015a500(param_1 + 0x3d,1);
  FUN_10015a0b0(param_1 + 0x3b,1);
  if (*(char *)((long)param_1 + 0x1af) < '\0') {
    operator_delete((void *)param_1[0x33]);
  }
  if (*(char *)((long)param_1 + 0x197) < '\0') {
    operator_delete((void *)param_1[0x30]);
  }
  FUN_100143e0c(param_1 + 0x13);
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void FUN_10015a474(uint *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      pcVar1 = (char *)(*(long *)(param_1 + 2) + 0x17);
      lVar2 = (ulong)*param_1 * 0x38;
      do {
        if (pcVar1[0x18] < '\0') {
          operator_delete(*(void **)(pcVar1 + 1));
        }
        if (*pcVar1 < '\0') {
          operator_delete(*(void **)(pcVar1 + -0x17));
        }
        pcVar1 = pcVar1 + 0x38;
        lVar2 = lVar2 + -0x38;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10015a500(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 5;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10015a574(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bef0;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10015a5c4(void)

{
  return 0xf;
}




void FUN_10015a5cc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bf20;
  if (*(char *)((long)param_1 + 0xd7) < '\0') {
    operator_delete((void *)param_1[0x18]);
  }
  FUN_10015ab5c(param_1 + 0x15,1);
  FUN_10015aacc(param_1 + 0x13,1);
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10015a654(void)

{
  return 0x13;
}




void FUN_10015a65c(long param_1)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 0x28),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 0x40),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 0x58),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  FUN_10015aacc(param_1 + 0x98,0);
  *(undefined1 *)(param_1 + 0xb8) = 0;
  FUN_10001549c(local_38,"");
  std::string::operator=((string *)(param_1 + 0xc0),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}




uint * FUN_10015a754(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015a7f4(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_1 + 2) + 0x18;
    lVar5 = (ulong)*param_2 * 0x38;
    lVar4 = *(long *)(param_2 + 2) + 0x18;
    do {
      FUN_10003330c(lVar3 + -0x18,lVar4 + -0x18);
      thunk_FUN_1004e439c(lVar3,lVar4);
      uVar2 = *(undefined8 *)(lVar4 + 0x10);
      *(undefined8 *)(lVar3 + 0x17) = *(undefined8 *)(lVar4 + 0x17);
      *(undefined8 *)(lVar3 + 0x10) = uVar2;
      lVar3 = lVar3 + 0x38;
      lVar4 = lVar4 + 0x38;
      lVar5 = lVar5 + -0x38;
    } while (lVar5 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_10015a7f4(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x38);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (long)pvVar1 + 0x18;
      lVar7 = (ulong)*param_1 * 0x38;
      lVar6 = (long)pvVar2 + 0x18;
      do {
        FUN_10003330c(lVar5 + -0x18,lVar6 + -0x18);
        thunk_FUN_1004e439c(lVar5,lVar6);
        uVar3 = *(undefined8 *)(lVar6 + 0x10);
        *(undefined8 *)(lVar5 + 0x17) = *(undefined8 *)(lVar6 + 0x17);
        *(undefined8 *)(lVar5 + 0x10) = uVar3;
        lVar5 = lVar5 + 0x38;
        lVar6 = lVar6 + 0x38;
        lVar7 = lVar7 + -0x38;
      } while (lVar7 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        pcVar4 = (char *)((long)pvVar2 + 0x17);
        lVar5 = (ulong)*param_1 * 0x38;
        do {
          if (*(void **)(pcVar4 + 9) != (void *)0x0) {
            operator_delete__(*(void **)(pcVar4 + 9));
            pcVar4[9] = '\0';
            pcVar4[10] = '\0';
            pcVar4[0xb] = '\0';
            pcVar4[0xc] = '\0';
            pcVar4[0xd] = '\0';
            pcVar4[0xe] = '\0';
            pcVar4[0xf] = '\0';
            pcVar4[0x10] = '\0';
            pcVar4[1] = '\0';
            pcVar4[2] = '\0';
            pcVar4[3] = '\0';
            pcVar4[4] = '\0';
            pcVar4[5] = '\0';
            pcVar4[6] = '\0';
            pcVar4[7] = '\0';
            pcVar4[8] = '\0';
          }
          if (*pcVar4 < '\0') {
            operator_delete(*(void **)(pcVar4 + -0x17));
          }
          pcVar4 = pcVar4 + 0x38;
          lVar5 = lVar5 + -0x38;
        } while (lVar5 != 0);
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




uint * FUN_10015a8fc(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015a9a8(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      lVar1 = lVar7 + lVar5;
      lVar2 = lVar6 + lVar5;
      FUN_10003330c(lVar1,lVar2);
      FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
      FUN_10003330c(lVar1 + 0x30,lVar2 + 0x30);
      *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
      lVar5 = lVar5 + 0x50;
    } while ((ulong)uVar3 * 0x50 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




void FUN_10015aacc(uint *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      pcVar1 = (char *)(*(long *)(param_1 + 2) + 0x17);
      lVar2 = (ulong)*param_1 * 0x38;
      do {
        if (*(void **)(pcVar1 + 9) != (void *)0x0) {
          operator_delete__(*(void **)(pcVar1 + 9));
          pcVar1[9] = '\0';
          pcVar1[10] = '\0';
          pcVar1[0xb] = '\0';
          pcVar1[0xc] = '\0';
          pcVar1[0xd] = '\0';
          pcVar1[0xe] = '\0';
          pcVar1[0xf] = '\0';
          pcVar1[0x10] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1[4] = '\0';
          pcVar1[5] = '\0';
          pcVar1[6] = '\0';
          pcVar1[7] = '\0';
          pcVar1[8] = '\0';
        }
        if (*pcVar1 < '\0') {
          operator_delete(*(void **)(pcVar1 + -0x17));
        }
        pcVar1 = pcVar1 + 0x38;
        lVar2 = lVar2 + -0x38;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10015abf8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bf50;
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10015ac48(void)

{
  return 0x12;
}




void FUN_10015ac50(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bf80;
  FUN_10015aff0(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10015ac88(void)

{
  return 0x3c;
}




uint * FUN_10015ac90(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015ad28(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_1 + 2) + 0x18;
    lVar4 = (ulong)*param_2 * 0x30;
    lVar3 = *(long *)(param_2 + 2) + 0x18;
    do {
      FUN_10003330c(lVar2 + -0x18,lVar3 + -0x18);
      FUN_10015ae20(lVar2,lVar3);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar3 + 0x10);
      lVar2 = lVar2 + 0x30;
      lVar3 = lVar3 + 0x30;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




uint * FUN_10015ae20(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015ae9c(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 << 6;
    do {
      lVar1 = thunk_FUN_1004e439c(lVar1,lVar3);
      uVar6 = *(undefined8 *)(lVar3 + 0x18);
      uVar5 = *(undefined8 *)(lVar3 + 0x10);
      uVar8 = *(undefined8 *)(lVar3 + 0x28);
      uVar7 = *(undefined8 *)(lVar3 + 0x20);
      uVar9 = *(undefined8 *)(lVar3 + 0x2c);
      *(undefined8 *)(lVar1 + 0x34) = *(undefined8 *)(lVar3 + 0x34);
      *(undefined8 *)(lVar1 + 0x2c) = uVar9;
      *(undefined8 *)(lVar1 + 0x18) = uVar6;
      *(undefined8 *)(lVar1 + 0x10) = uVar5;
      *(undefined8 *)(lVar1 + 0x28) = uVar8;
      *(undefined8 *)(lVar1 + 0x20) = uVar7;
      lVar3 = lVar3 + 0x40;
      lVar1 = lVar1 + 0x40;
      lVar4 = lVar4 + -0x40;
    } while (lVar4 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_10015ae9c(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 << 6);
    pvVar4 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = (ulong)*param_1 << 6;
      pvVar2 = pvVar1;
      do {
        lVar3 = thunk_FUN_1004e439c(pvVar2,pvVar4);
        uVar8 = *(undefined8 *)((long)pvVar4 + 0x18);
        uVar7 = *(undefined8 *)((long)pvVar4 + 0x10);
        uVar10 = *(undefined8 *)((long)pvVar4 + 0x28);
        uVar9 = *(undefined8 *)((long)pvVar4 + 0x20);
        uVar11 = *(undefined8 *)((long)pvVar4 + 0x2c);
        *(undefined8 *)(lVar3 + 0x34) = *(undefined8 *)((long)pvVar4 + 0x34);
        *(undefined8 *)(lVar3 + 0x2c) = uVar11;
        *(undefined8 *)(lVar3 + 0x18) = uVar8;
        *(undefined8 *)(lVar3 + 0x10) = uVar7;
        *(undefined8 *)(lVar3 + 0x28) = uVar10;
        *(undefined8 *)(lVar3 + 0x20) = uVar9;
        pvVar4 = (void *)((long)pvVar4 + 0x40);
        pvVar2 = (void *)(lVar3 + 0x40);
        lVar6 = lVar6 + -0x40;
      } while (lVar6 != 0);
      pvVar4 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 6;
        puVar5 = (undefined8 *)((long)pvVar4 + 8);
        do {
          if ((void *)*puVar5 != (void *)0x0) {
            operator_delete__((void *)*puVar5);
            puVar5[-1] = 0;
            *puVar5 = 0;
          }
          puVar5 = puVar5 + 8;
          lVar6 = lVar6 + -0x40;
        } while (lVar6 != 0);
        pvVar4 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_10015af78(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 6;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 8);
      do {
        if ((void *)*puVar2 != (void *)0x0) {
          operator_delete__((void *)*puVar2);
          puVar2[-1] = 0;
          *puVar2 = 0;
        }
        puVar2 = puVar2 + 8;
        lVar1 = lVar1 + -0x40;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10015b078(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bfb0;
  FUN_10015bcf8(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10015b0b0(void)

{
  return 0x3d;
}




uint * FUN_10015b0b8(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015b194(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      lVar1 = lVar7 + lVar5;
      lVar2 = lVar6 + lVar5;
      FUN_10003330c(lVar1,lVar2);
      FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
      FUN_10003330c(lVar1 + 0x30,lVar2 + 0x30);
      FUN_10015b324(lVar1 + 0x48,lVar2 + 0x48);
      FUN_10015b6ec(lVar1 + 0x58,lVar2 + 0x58);
      FUN_10015b83c(lVar1 + 0x68,lVar2 + 0x68);
      FUN_10015b98c(lVar1 + 0x78,lVar2 + 0x78);
      uVar8 = *(undefined8 *)(lVar2 + 0x88);
      *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(lVar2 + 0x90);
      *(undefined8 *)(lVar1 + 0x88) = uVar8;
      lVar5 = lVar5 + 0x98;
    } while ((ulong)uVar3 * 0x98 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




void FUN_10015b194(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 * 0x98);
    pvVar5 = *(void **)(param_1 + 2);
    uVar3 = *param_1;
    if (uVar3 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = 0;
      do {
        lVar1 = (long)pvVar4 + lVar6;
        lVar2 = (long)pvVar5 + lVar6;
        FUN_10003330c(lVar1,lVar2);
        FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
        FUN_10003330c(lVar1 + 0x30,lVar2 + 0x30);
        FUN_10015b324(lVar1 + 0x48,lVar2 + 0x48);
        FUN_10015b6ec(lVar1 + 0x58,lVar2 + 0x58);
        FUN_10015b83c(lVar1 + 0x68,lVar2 + 0x68);
        FUN_10015b98c(lVar1 + 0x78,lVar2 + 0x78);
        uVar7 = *(undefined8 *)(lVar2 + 0x88);
        *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(lVar2 + 0x90);
        *(undefined8 *)(lVar1 + 0x88) = uVar7;
        lVar6 = lVar6 + 0x98;
      } while ((ulong)uVar3 * 0x98 - lVar6 != 0);
      pvVar5 = *(void **)(param_1 + 2);
      uVar3 = *param_1;
      param_1[1] = param_2;
      if (uVar3 != 0) {
        lVar6 = 0;
        do {
          FUN_10015baec((long)pvVar5 + lVar6 + 0x78,1);
          FUN_10015bb64((long)pvVar5 + lVar6 + 0x68,1);
          FUN_10015bbdc((long)pvVar5 + lVar6 + 0x58,1);
          FUN_10015bc54((long)pvVar5 + lVar6 + 0x48,1);
          if (*(char *)((long)pvVar5 + lVar6 + 0x47) < '\0') {
            operator_delete(*(void **)((long)pvVar5 + lVar6 + 0x30));
          }
          if (*(char *)((long)pvVar5 + lVar6 + 0x2f) < '\0') {
            operator_delete(*(void **)((long)pvVar5 + lVar6 + 0x18));
          }
          if (*(char *)((long)pvVar5 + lVar6 + 0x17) < '\0') {
            operator_delete(*(void **)((long)pvVar5 + lVar6));
          }
          lVar6 = lVar6 + 0x98;
        } while ((ulong)uVar3 * 0x98 - lVar6 != 0);
        pvVar5 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    *(void **)(param_1 + 2) = pvVar4;
  }
  return;
}




uint * FUN_10015b324(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015b3ec(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      puVar1 = (undefined8 *)(lVar6 + lVar5);
      puVar2 = (undefined8 *)(lVar7 + lVar5);
      *puVar2 = *puVar1;
      FUN_10003330c(puVar2 + 1,puVar1 + 1);
      FUN_10003330c(puVar2 + 4,puVar1 + 4);
      FUN_1000a72a4(puVar2 + 7,puVar1 + 7);
      FUN_10015b534(puVar2 + 9,puVar1 + 9);
      lVar5 = lVar5 + 0x58;
    } while ((ulong)uVar3 * 0x58 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




uint * FUN_10015b534(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015b5a8(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 << 5;
    do {
      lVar1 = FUN_10003330c(lVar1,lVar3);
      *(undefined1 *)(lVar1 + 0x18) = *(undefined1 *)(lVar3 + 0x18);
      lVar3 = lVar3 + 0x20;
      lVar1 = lVar1 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_10015b5a8(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 << 5);
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 << 5;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_10003330c(pvVar2,puVar4);
        *(undefined1 *)(lVar3 + 0x18) = *(undefined1 *)(puVar4 + 3);
        puVar4 = puVar4 + 4;
        pvVar2 = (void *)(lVar3 + 0x20);
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 << 5;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            operator_delete((void *)*puVar4);
          }
          puVar4 = puVar4 + 4;
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_10015b678(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 5;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




uint * FUN_10015b6ec(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015b764(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x28;
    do {
      lVar1 = FUN_10003330c(lVar1,lVar3);
      uVar5 = *(undefined8 *)(lVar3 + 0x18);
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 *)(lVar1 + 0x18) = uVar5;
      lVar3 = lVar3 + 0x28;
      lVar1 = lVar1 + 0x28;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_10015b764(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x28);
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 * 0x28;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_10003330c(pvVar2,puVar4);
        uVar6 = puVar4[3];
        *(undefined8 *)(lVar3 + 0x20) = puVar4[4];
        *(undefined8 *)(lVar3 + 0x18) = uVar6;
        puVar4 = puVar4 + 5;
        pvVar2 = (void *)(lVar3 + 0x28);
        lVar5 = lVar5 + -0x28;
      } while (lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x28;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            operator_delete((void *)*puVar4);
          }
          puVar4 = puVar4 + 5;
          lVar5 = lVar5 + -0x28;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




uint * FUN_10015b83c(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015b8b4(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x28;
    do {
      lVar1 = FUN_10003330c(lVar1,lVar3);
      uVar5 = *(undefined8 *)(lVar3 + 0x18);
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 *)(lVar1 + 0x18) = uVar5;
      lVar3 = lVar3 + 0x28;
      lVar1 = lVar1 + 0x28;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_10015b8b4(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x28);
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 * 0x28;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_10003330c(pvVar2,puVar4);
        uVar6 = puVar4[3];
        *(undefined8 *)(lVar3 + 0x20) = puVar4[4];
        *(undefined8 *)(lVar3 + 0x18) = uVar6;
        puVar4 = puVar4 + 5;
        pvVar2 = (void *)(lVar3 + 0x28);
        lVar5 = lVar5 + -0x28;
      } while (lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x28;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            operator_delete((void *)*puVar4);
          }
          puVar4 = puVar4 + 5;
          lVar5 = lVar5 + -0x28;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




uint * FUN_10015b98c(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015ba0c(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar4 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar5 = (ulong)*param_2 * 0x28;
    do {
      lVar1 = FUN_10003330c(lVar1,lVar4);
      uVar3 = *(undefined8 *)(lVar4 + 0x18);
      *(undefined8 *)(lVar1 + 0x1e) = *(undefined8 *)(lVar4 + 0x1e);
      *(undefined8 *)(lVar1 + 0x18) = uVar3;
      lVar4 = lVar4 + 0x28;
      lVar1 = lVar1 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_10015ba0c(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x28);
    puVar5 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = (ulong)*param_1 * 0x28;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_10003330c(pvVar2,puVar5);
        uVar4 = puVar5[3];
        *(undefined8 *)(lVar3 + 0x1e) = *(undefined8 *)((long)puVar5 + 0x1e);
        *(undefined8 *)(lVar3 + 0x18) = uVar4;
        puVar5 = puVar5 + 5;
        pvVar2 = (void *)(lVar3 + 0x28);
        lVar6 = lVar6 + -0x28;
      } while (lVar6 != 0);
      puVar5 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 * 0x28;
        do {
          if (*(char *)((long)puVar5 + 0x17) < '\0') {
            operator_delete((void *)*puVar5);
          }
          puVar5 = puVar5 + 5;
          lVar6 = lVar6 + -0x28;
        } while (lVar6 != 0);
        puVar5 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      operator_delete__(puVar5);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_10015baec(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x28;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 5;
        lVar2 = lVar2 + -0x28;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10015bb64(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x28;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 5;
        lVar2 = lVar2 + -0x28;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10015bbdc(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x28;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 5;
        lVar2 = lVar2 + -0x28;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10015bcf8(uint *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 2);
  if (lVar3 != 0) {
    uVar2 = *param_1;
    if (uVar2 != 0) {
      lVar4 = 0;
      do {
        lVar1 = lVar3 + lVar4;
        FUN_10015baec(lVar1 + 0x78,1);
        FUN_10015bb64(lVar1 + 0x68,1);
        FUN_10015bbdc(lVar1 + 0x58,1);
        FUN_10015bc54(lVar1 + 0x48,1);
        if (*(char *)(lVar1 + 0x47) < '\0') {
          operator_delete(*(void **)(lVar1 + 0x30));
        }
        if (*(char *)(lVar1 + 0x2f) < '\0') {
          operator_delete(*(void **)(lVar3 + lVar4 + 0x18));
        }
        if (*(char *)(lVar3 + lVar4 + 0x17) < '\0') {
          operator_delete(*(void **)(lVar3 + lVar4));
        }
        lVar4 = lVar4 + 0x98;
      } while ((ulong)uVar2 * 0x98 - lVar4 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10015bdd8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145bfe0;
  FUN_10015bf94(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10015be10(void)

{
  return 0x3e;
}




uint * FUN_10015be18(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015bea0(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x30;
    do {
      FUN_10003330c(lVar3,lVar2);
      FUN_10003330c(lVar3 + 0x18,lVar2 + 0x18);
      lVar2 = lVar2 + 0x30;
      lVar3 = lVar3 + 0x30;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_10015bea0(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  char *pcVar3;
  void *pvVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x30);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 * 0x30;
      pvVar4 = pvVar1;
      do {
        FUN_10003330c(pvVar4,pvVar2);
        FUN_10003330c((long)pvVar4 + 0x18,(long)pvVar2 + 0x18);
        pvVar2 = (void *)((long)pvVar2 + 0x30);
        pvVar4 = (void *)((long)pvVar4 + 0x30);
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        pcVar3 = (char *)((long)pvVar2 + 0x17);
        lVar5 = (ulong)*param_1 * 0x30;
        do {
          if (pcVar3[0x18] < '\0') {
            operator_delete(*(void **)(pcVar3 + 1));
          }
          if (*pcVar3 < '\0') {
            operator_delete(*(void **)(pcVar3 + -0x17));
          }
          pcVar3 = pcVar3 + 0x30;
          lVar5 = lVar5 + -0x30;
        } while (lVar5 != 0);
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




void FUN_10015bf94(uint *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      pcVar1 = (char *)(*(long *)(param_1 + 2) + 0x17);
      lVar2 = (ulong)*param_1 * 0x30;
      do {
        if (pcVar1[0x18] < '\0') {
          operator_delete(*(void **)(pcVar1 + 1));
        }
        if (*pcVar1 < '\0') {
          operator_delete(*(void **)(pcVar1 + -0x17));
        }
        pcVar1 = pcVar1 + 0x30;
        lVar2 = lVar2 + -0x30;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10015c020(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145c010;
  FUN_10001629c(param_1 + 0xe,1);
  FUN_10001629c(param_1 + 0xc,1);
  FUN_10015690c(param_1 + 10,1);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  FUN_10015c28c(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10015c08c(void)

{
  return 0x3f;
}




uint * FUN_10015c094(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015c14c(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      lVar1 = lVar7 + lVar5;
      lVar2 = lVar6 + lVar5;
      FUN_10003330c(lVar1,lVar2);
      FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
      FUN_10003330c(lVar1 + 0x30,lVar2 + 0x30);
      FUN_10003330c(lVar1 + 0x48,lVar2 + 0x48);
      *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(lVar2 + 0x60);
      lVar5 = lVar5 + 0x68;
    } while ((ulong)uVar3 * 0x68 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




void FUN_10015c338(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145c040;
  FUN_10015cb3c(param_1 + 0x13,1);
  FUN_10015cbc0(param_1 + 0x11,1);
  FUN_10015cbc0(param_1 + 0xf,1);
  FUN_10015cbc0(param_1 + 0xd,1);
  FUN_10015cbc0(param_1 + 0xb,1);
  FUN_10015cbc0(param_1 + 9,1);
  FUN_10015cc34(param_1 + 7,1);
  FUN_10015ccb8(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10015c3cc(void)

{
  return 0x40;
}




uint * FUN_10015c3d4(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015c450(param_1,*param_2);
  uVar3 = 0;
  if (*param_2 != 0) {
    lVar4 = *(long *)(param_2 + 2);
    lVar2 = *(long *)(param_1 + 2);
    lVar5 = (ulong)*param_2 << 5;
    do {
      lVar2 = FUN_10003330c(lVar2,lVar4);
      uVar1 = *(undefined4 *)(lVar4 + 0x18);
      *(undefined2 *)(lVar2 + 0x1c) = *(undefined2 *)(lVar4 + 0x1c);
      *(undefined4 *)(lVar2 + 0x18) = uVar1;
      lVar4 = lVar4 + 0x20;
      lVar2 = lVar2 + 0x20;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
    uVar3 = *param_2;
  }
  *param_1 = uVar3;
  return param_1;
}




void FUN_10015c450(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 << 5);
    puVar5 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = (ulong)*param_1 << 5;
      pvVar3 = pvVar2;
      do {
        lVar4 = FUN_10003330c(pvVar3,puVar5);
        uVar1 = *(undefined4 *)(puVar5 + 3);
        *(undefined2 *)(lVar4 + 0x1c) = *(undefined2 *)((long)puVar5 + 0x1c);
        *(undefined4 *)(lVar4 + 0x18) = uVar1;
        puVar5 = puVar5 + 4;
        pvVar3 = (void *)(lVar4 + 0x20);
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
      puVar5 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 5;
        do {
          if (*(char *)((long)puVar5 + 0x17) < '\0') {
            operator_delete((void *)*puVar5);
          }
          puVar5 = puVar5 + 4;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
        puVar5 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      operator_delete__(puVar5);
    }
    *(void **)(param_1 + 2) = pvVar2;
  }
  return;
}




uint * FUN_10015c528(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015c5b8(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x30;
    do {
      FUN_10015c6ac(lVar3,lVar2);
      FUN_10003330c(lVar3 + 0x10,lVar2 + 0x10);
      *(undefined2 *)(lVar3 + 0x28) = *(undefined2 *)(lVar2 + 0x28);
      lVar2 = lVar2 + 0x30;
      lVar3 = lVar3 + 0x30;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_10015c5b8(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x30);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar4 = (ulong)*param_1 * 0x30;
      pvVar3 = pvVar1;
      do {
        FUN_10015c6ac(pvVar3,pvVar2);
        FUN_10003330c((long)pvVar3 + 0x10,(long)pvVar2 + 0x10);
        *(undefined2 *)((long)pvVar3 + 0x28) = *(undefined2 *)((long)pvVar2 + 0x28);
        pvVar2 = (void *)((long)pvVar2 + 0x30);
        pvVar3 = (void *)((long)pvVar3 + 0x30);
        lVar4 = lVar4 + -0x30;
      } while (lVar4 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x30;
        do {
          if (*(char *)((long)pvVar2 + 0x27) < '\0') {
            operator_delete(*(void **)((long)pvVar2 + 0x10));
          }
          FUN_10015c800(pvVar2,1);
          pvVar2 = (void *)((long)pvVar2 + 0x30);
          lVar4 = lVar4 + -0x30;
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




uint * FUN_10015c6ac(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015c728(param_1,*param_2);
  uVar3 = 0;
  if (*param_2 != 0) {
    lVar4 = *(long *)(param_2 + 2);
    lVar2 = *(long *)(param_1 + 2);
    lVar5 = (ulong)*param_2 << 5;
    do {
      lVar2 = FUN_10003330c(lVar2,lVar4);
      uVar1 = *(undefined4 *)(lVar4 + 0x18);
      *(undefined1 *)(lVar2 + 0x1c) = *(undefined1 *)(lVar4 + 0x1c);
      *(undefined4 *)(lVar2 + 0x18) = uVar1;
      lVar4 = lVar4 + 0x20;
      lVar2 = lVar2 + 0x20;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
    uVar3 = *param_2;
  }
  *param_1 = uVar3;
  return param_1;
}




void FUN_10015c728(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 << 5);
    puVar5 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = (ulong)*param_1 << 5;
      pvVar3 = pvVar2;
      do {
        lVar4 = FUN_10003330c(pvVar3,puVar5);
        uVar1 = *(undefined4 *)(puVar5 + 3);
        *(undefined1 *)(lVar4 + 0x1c) = *(undefined1 *)((long)puVar5 + 0x1c);
        *(undefined4 *)(lVar4 + 0x18) = uVar1;
        puVar5 = puVar5 + 4;
        pvVar3 = (void *)(lVar4 + 0x20);
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
      puVar5 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 5;
        do {
          if (*(char *)((long)puVar5 + 0x17) < '\0') {
            operator_delete((void *)*puVar5);
          }
          puVar5 = puVar5 + 4;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
        puVar5 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      operator_delete__(puVar5);
    }
    *(void **)(param_1 + 2) = pvVar2;
  }
  return;
}




void FUN_10015c800(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 5;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




uint * FUN_10015c874(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015c8e8(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 << 5;
    do {
      lVar1 = FUN_10003330c(lVar1,lVar3);
      *(undefined2 *)(lVar1 + 0x18) = *(undefined2 *)(lVar3 + 0x18);
      lVar3 = lVar3 + 0x20;
      lVar1 = lVar1 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_10015c8e8(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 << 5);
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 << 5;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_10003330c(pvVar2,puVar4);
        *(undefined2 *)(lVar3 + 0x18) = *(undefined2 *)(puVar4 + 3);
        puVar4 = puVar4 + 4;
        pvVar2 = (void *)(lVar3 + 0x20);
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 << 5;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            operator_delete((void *)*puVar4);
          }
          puVar4 = puVar4 + 4;
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




uint * FUN_10015c9b8(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015ca48(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x30;
    do {
      FUN_10015c6ac(lVar3,lVar2);
      FUN_10003330c(lVar3 + 0x10,lVar2 + 0x10);
      *(undefined2 *)(lVar3 + 0x28) = *(undefined2 *)(lVar2 + 0x28);
      lVar2 = lVar2 + 0x30;
      lVar3 = lVar3 + 0x30;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_10015ca48(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x30);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar4 = (ulong)*param_1 * 0x30;
      pvVar3 = pvVar1;
      do {
        FUN_10015c6ac(pvVar3,pvVar2);
        FUN_10003330c((long)pvVar3 + 0x10,(long)pvVar2 + 0x10);
        *(undefined2 *)((long)pvVar3 + 0x28) = *(undefined2 *)((long)pvVar2 + 0x28);
        pvVar2 = (void *)((long)pvVar2 + 0x30);
        pvVar3 = (void *)((long)pvVar3 + 0x30);
        lVar4 = lVar4 + -0x30;
      } while (lVar4 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x30;
        do {
          if (*(char *)((long)pvVar2 + 0x27) < '\0') {
            operator_delete(*(void **)((long)pvVar2 + 0x10));
          }
          FUN_10015c800(pvVar2,1);
          pvVar2 = (void *)((long)pvVar2 + 0x30);
          lVar4 = lVar4 + -0x30;
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




void FUN_10015cb3c(uint *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x30;
      do {
        if (*(char *)(lVar1 + 0x27) < '\0') {
          operator_delete(*(void **)(lVar1 + 0x10));
        }
        FUN_10015c800(lVar1,1);
        lVar1 = lVar1 + 0x30;
        lVar2 = lVar2 + -0x30;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10015cbc0(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 5;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10015cc34(uint *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x30;
      do {
        if (*(char *)(lVar1 + 0x27) < '\0') {
          operator_delete(*(void **)(lVar1 + 0x10));
        }
        FUN_10015c800(lVar1,1);
        lVar1 = lVar1 + 0x30;
        lVar2 = lVar2 + -0x30;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10015ccb8(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 5;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10015cd2c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145c070;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10015cd6c(void)

{
  return 0x41;
}




void FUN_10015cd74(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145c0a0;
  FUN_10015cef8(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10015cdac(void)

{
  return 0x42;
}




uint * FUN_10015cdb4(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015ce28(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 << 5;
    do {
      lVar1 = FUN_10003330c(lVar1,lVar3);
      *(undefined2 *)(lVar1 + 0x18) = *(undefined2 *)(lVar3 + 0x18);
      lVar3 = lVar3 + 0x20;
      lVar1 = lVar1 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_10015ce28(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 << 5);
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 << 5;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_10003330c(pvVar2,puVar4);
        *(undefined2 *)(lVar3 + 0x18) = *(undefined2 *)(puVar4 + 3);
        puVar4 = puVar4 + 4;
        pvVar2 = (void *)(lVar3 + 0x20);
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 << 5;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            operator_delete((void *)*puVar4);
          }
          puVar4 = puVar4 + 4;
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_10015cef8(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 5;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10015cf6c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145c0d0;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10015cfac(void)

{
  return 0x43;
}




void FUN_10015cfb4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145c100;
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10015cff4(void)

{
  return 0x44;
}




void FUN_10015cffc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145c130;
  FUN_10015d368(param_1 + 5,1);
  pvVar1 = (void *)FUN_1004f15a8(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_10015d034(void)

{
  return 0x45;
}




uint * FUN_10015d03c(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015d0c4(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x28;
    do {
      FUN_10015d1b0(lVar3,lVar2);
      FUN_10003330c(lVar3 + 0x10,lVar2 + 0x10);
      lVar2 = lVar2 + 0x28;
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_10015d0c4(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x28);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar4 = (ulong)*param_1 * 0x28;
      pvVar3 = pvVar1;
      do {
        FUN_10015d1b0(pvVar3,pvVar2);
        FUN_10003330c((long)pvVar3 + 0x10,(long)pvVar2 + 0x10);
        pvVar2 = (void *)((long)pvVar2 + 0x28);
        pvVar3 = (void *)((long)pvVar3 + 0x28);
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x28;
        do {
          if (*(char *)((long)pvVar2 + 0x27) < '\0') {
            operator_delete(*(void **)((long)pvVar2 + 0x10));
          }
          FUN_10015d2f4(pvVar2,1);
          pvVar2 = (void *)((long)pvVar2 + 0x28);
          lVar4 = lVar4 + -0x28;
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




uint * FUN_10015d1b0(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10015d224(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 << 5;
    do {
      lVar1 = FUN_10003330c(lVar1,lVar3);
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
      lVar3 = lVar3 + 0x20;
      lVar1 = lVar1 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_10015d224(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 << 5);
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 << 5;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_10003330c(pvVar2,puVar4);
        *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(puVar4 + 3);
        puVar4 = puVar4 + 4;
        pvVar2 = (void *)(lVar3 + 0x20);
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 << 5;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            operator_delete((void *)*puVar4);
          }
          puVar4 = puVar4 + 4;
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_10015d2f4(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 5;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10015d368(uint *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x28;
      do {
        if (*(char *)(lVar1 + 0x27) < '\0') {
          operator_delete(*(void **)(lVar1 + 0x10));
        }
        FUN_10015d2f4(lVar1,1);
        lVar1 = lVar1 + 0x28;
        lVar2 = lVar2 + -0x28;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




undefined8 FUN_10015d3ec(void)

{
  return DAT_101e3cf00;
}




undefined8 FUN_10015d3f8(void)

{
  undefined8 uVar1;
  
  if (DAT_101e3cf00 != 0) {
    uVar1 = FUN_1004eef10();
    return uVar1;
  }
  return 0;
}




long FUN_10015d410(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)FUN_1004f0a20();
  *puVar2 = &PTR_thunk_FUN_10015ead0_10145c160;
  FUN_100169ba4(puVar2 + 3);
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_10145c190;
  FUN_1004f1580(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10145b860;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_100168aa8(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x1d8) = 0xffffffffffffffff;
  FUN_100169ba4(param_1 + 0x278);
  *(undefined ***)(param_1 + 0x278) = &PTR_FUN_10145c1c8;
  FUN_1004f1580(param_1 + 0x290);
  *(undefined ***)(param_1 + 0x290) = &PTR_FUN_10145b950;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  FUN_1004f1580(param_1 + 0x318);
  *(undefined ***)(param_1 + 0x318) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  FUN_1004f1580(param_1 + 0x378);
  *(undefined ***)(param_1 + 0x378) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  FUN_1004f1580(param_1 + 0x3d8);
  *(undefined ***)(param_1 + 0x3d8) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  FUN_1004f1580(param_1 + 0x438);
  *(undefined ***)(param_1 + 0x438) = &PTR_FUN_10145b890;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  FUN_1004f1580(param_1 + 0x478);
  *(undefined ***)(param_1 + 0x478) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  FUN_1004f1580(param_1 + 0x4b8);
  *(undefined ***)(param_1 + 0x4b8) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  FUN_1004f1580(param_1 + 0x4f8);
  *(undefined ***)(param_1 + 0x4f8) = &PTR_FUN_10145b8f0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  FUN_1004f1580(param_1 + 0x538);
  *(undefined ***)(param_1 + 0x538) = &PTR_FUN_10145b8f0;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  FUN_1004f1580(param_1 + 0x578);
  *(undefined ***)(param_1 + 0x578) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  FUN_1004f1580(param_1 + 0x5b8);
  *(undefined ***)(param_1 + 0x5b8) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x5e0) = 0;
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  *(undefined8 *)(param_1 + 0x5e8) = 0;
  FUN_1004f1580(param_1 + 0x5f8);
  *(undefined ***)(param_1 + 0x5f8) = &PTR_thunk_FUN_1004f15a8_10145b920;
  FUN_1004f1580(param_1 + 0x628);
  *(undefined ***)(param_1 + 0x628) = &PTR_FUN_10145c200;
  *(undefined8 *)(param_1 + 0x658) = 0;
  *(undefined8 *)(param_1 + 0x650) = 0;
  FUN_1004f1580(param_1 + 0x668);
  *(undefined ***)(param_1 + 0x668) = &PTR_thunk_FUN_100156e64_10145b980;
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  *(undefined8 *)(param_1 + 0x698) = 0;
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  *(undefined8 *)(param_1 + 0x6a8) = 0;
  *(undefined8 *)(param_1 + 0x6c0) = 0;
  *(undefined8 *)(param_1 + 0x6b8) = 0;
  lVar3 = 0x6c8;
  do {
    puVar2 = (undefined8 *)(param_1 + lVar3);
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0xac8);
  *(undefined8 *)(param_1 + 0xaf0) = 0;
  *(undefined8 *)(param_1 + 0xae8) = 0;
  *(undefined8 *)(param_1 + 0xae0) = 0;
  *(undefined8 *)(param_1 + 0xad8) = 0;
  *(undefined8 *)(param_1 + 0xad0) = 0;
  *(undefined8 *)(param_1 + 0xac8) = 0;
  *(undefined8 *)(param_1 + 0xb10) = 0;
  *(undefined8 *)(param_1 + 0xb08) = 0;
  *(undefined8 *)(param_1 + 0xb20) = 0;
  *(undefined8 *)(param_1 + 0xb18) = 0;
  *(undefined8 *)(param_1 + 0xb30) = 0;
  *(undefined8 *)(param_1 + 0xb28) = 0;
  *(undefined8 *)(param_1 + 0xb40) = 0;
  *(undefined8 *)(param_1 + 0xb38) = 0;
  *(undefined8 *)(param_1 + 0xb50) = 0;
  *(undefined8 *)(param_1 + 0xb48) = 0;
  *(undefined8 *)(param_1 + 0xb60) = 0;
  *(undefined8 *)(param_1 + 0xb58) = 0;
  FUN_1004f1580(param_1 + 0xb68);
  *(undefined ***)(param_1 + 0xb68) = &PTR_thunk_FUN_1004f15a8_10145c230;
  FUN_1004f1580(param_1 + 0xb98);
  *(undefined ***)(param_1 + 0xb98) = &PTR_FUN_10145b9b0;
  lVar3 = 0xbc8;
  do {
    puVar2 = (undefined8 *)(param_1 + lVar3);
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0xfc8);
  *(undefined8 *)(param_1 + 0xfd8) = 0;
  *(undefined8 *)(param_1 + 0xfd0) = 0;
  *(undefined8 *)(param_1 + 0xfc8) = 0;
  FUN_1004f1580(param_1 + 0xfe0);
  *(undefined ***)(param_1 + 0xfe0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x1008) = 0;
  *(undefined8 *)(param_1 + 0x1018) = 0;
  *(undefined8 *)(param_1 + 0x1010) = 0;
  *(undefined8 *)(param_1 + 0x1028) = 0;
  *(undefined8 *)(param_1 + 0x1038) = 0;
  *(undefined8 *)(param_1 + 0x1030) = 0;
  FUN_1004f1580(param_1 + 0x1040);
  *(undefined ***)(param_1 + 0x1040) = &PTR_thunk_FUN_100157078_10145ba10;
  *(undefined8 *)(param_1 + 0x1068) = 0;
  *(undefined8 *)(param_1 + 0x1078) = 0;
  *(undefined8 *)(param_1 + 0x1070) = 0;
  lVar3 = -0x400;
  do {
    lVar1 = param_1 + lVar3;
    *(undefined8 *)(lVar1 + 0x14a0) = 0;
    *(undefined8 *)(lVar1 + 0x1498) = 0;
    *(undefined8 *)(lVar1 + 0x14b0) = 0;
    *(undefined8 *)(lVar1 + 0x14a8) = 0;
    *(undefined8 *)(lVar1 + 0x1490) = 0;
    *(undefined8 *)(lVar1 + 0x1488) = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x14c8) = 0;
  *(undefined8 *)(param_1 + 0x14b0) = 0;
  *(undefined8 *)(param_1 + 0x14a8) = 0;
  *(undefined8 *)(param_1 + 0x14c0) = 0;
  *(undefined8 *)(param_1 + 0x14b8) = 0;
  *(undefined8 *)(param_1 + 0x1490) = 0;
  *(undefined8 *)(param_1 + 0x1488) = 0;
  *(undefined8 *)(param_1 + 0x14a0) = 0;
  *(undefined8 *)(param_1 + 0x1498) = 0;
  FUN_1004f1580(param_1 + 0x14d0);
  *(undefined ***)(param_1 + 0x14d0) = &PTR_thunk_FUN_100157234_10145ba40;
  *(undefined8 *)(param_1 + 0x1500) = 0;
  *(undefined8 *)(param_1 + 0x14f8) = 0;
  *(undefined8 *)(param_1 + 0x1510) = 0;
  *(undefined8 *)(param_1 + 0x1508) = 0;
  *(undefined8 *)(param_1 + 0x1520) = 0;
  *(undefined8 *)(param_1 + 0x1518) = 0;
  *(undefined8 *)(param_1 + 0x1530) = 0;
  *(undefined8 *)(param_1 + 0x1528) = 0;
  *(undefined8 *)(param_1 + 0x1540) = 0;
  *(undefined8 *)(param_1 + 0x1538) = 0;
  *(undefined8 *)(param_1 + 0x1550) = 0;
  *(undefined8 *)(param_1 + 0x1548) = 0;
  *(undefined8 *)(param_1 + 0x1560) = 0;
  *(undefined8 *)(param_1 + 0x1558) = 0;
  *(undefined8 *)(param_1 + 0x1570) = 0;
  *(undefined8 *)(param_1 + 0x1568) = 0;
  *(undefined8 *)(param_1 + 0x1580) = 0;
  *(undefined8 *)(param_1 + 0x1578) = 0;
  lVar3 = -0x400;
  do {
    lVar1 = param_1 + lVar3;
    *(undefined8 *)(lVar1 + 0x19b8) = 0;
    *(undefined8 *)(lVar1 + 0x19b0) = 0;
    *(undefined8 *)(lVar1 + 0x19a8) = 0;
    *(undefined8 *)(lVar1 + 0x19a0) = 0;
    *(undefined8 *)(lVar1 + 0x1998) = 0;
    *(undefined8 *)(lVar1 + 0x1990) = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  FUN_1004f1580(param_1 + 0x19a8);
  *(undefined ***)(param_1 + 0x19a8) = &PTR_FUN_10145c260;
  *(undefined8 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  lVar3 = -0x400;
  do {
    lVar1 = param_1 + lVar3;
    *(undefined8 *)(lVar1 + 0x1e08) = 0;
    *(undefined8 *)(lVar1 + 0x1e00) = 0;
    *(undefined8 *)(lVar1 + 0x1df8) = 0;
    *(undefined8 *)(lVar1 + 0x1df0) = 0;
    *(undefined8 *)(lVar1 + 0x1de8) = 0;
    *(undefined8 *)(lVar1 + 0x1de0) = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x1df0) = 0;
  *(undefined8 *)(param_1 + 0x1de8) = 0;
  *(undefined8 *)(param_1 + 0x1df8) = 0;
  FUN_1004f1580(param_1 + 0x1e00);
  *(undefined ***)(param_1 + 0x1e00) = &PTR_FUN_10145c290;
  *(undefined8 *)(param_1 + 0x1e28) = 0;
  *(undefined8 *)(param_1 + 0x1e38) = 0;
  *(undefined8 *)(param_1 + 0x1e30) = 0;
  *(undefined8 *)(param_1 + 0x1e48) = 0;
  *(undefined8 *)(param_1 + 0x1e58) = 0;
  *(undefined8 *)(param_1 + 0x1e50) = 0;
  FUN_1004f1580(param_1 + 0x1e60);
  *(undefined ***)(param_1 + 0x1e60) = &PTR_thunk_FUN_10015741c_10145ba70;
  *(undefined8 *)(param_1 + 0x1e90) = 0;
  *(undefined8 *)(param_1 + 0x1e88) = 0;
  *(undefined8 *)(param_1 + 0x1ea0) = 0;
  *(undefined8 *)(param_1 + 0x1e98) = 0;
  *(undefined8 *)(param_1 + 0x1ec0) = 0;
  *(undefined8 *)(param_1 + 0x1eb8) = 0;
  *(undefined8 *)(param_1 + 0x1ed0) = 0;
  *(undefined8 *)(param_1 + 0x1ec8) = 0;
  *(undefined8 *)(param_1 + 0x1ea8) = 0;
  lVar3 = -0x400;
  *(undefined8 *)(param_1 + 0x1ee0) = 0;
  *(undefined8 *)(param_1 + 0x1ed8) = 0;
  do {
    lVar1 = param_1 + lVar3;
    *(undefined8 *)(lVar1 + 0x2300) = 0;
    *(undefined8 *)(lVar1 + 0x22f8) = 0;
    *(undefined8 *)(lVar1 + 0x2310) = 0;
    *(undefined8 *)(lVar1 + 0x2308) = 0;
    *(undefined8 *)(lVar1 + 0x22f0) = 0;
    *(undefined8 *)(lVar1 + 0x22e8) = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x2300) = 0;
  *(undefined8 *)(param_1 + 0x22f8) = 0;
  *(undefined8 *)(param_1 + 0x2310) = 0;
  *(undefined8 *)(param_1 + 0x2308) = 0;
  *(undefined8 *)(param_1 + 0x22f0) = 0;
  *(undefined8 *)(param_1 + 0x22e8) = 0;
  FUN_1004f1580(param_1 + 0x2320);
  *(undefined ***)(param_1 + 0x2320) = &PTR_FUN_10145c260;
  *(undefined8 *)(param_1 + 0x2350) = 0;
  lVar3 = -0x400;
  *(undefined8 *)(param_1 + 0x2348) = 0;
  do {
    lVar1 = param_1 + lVar3;
    *(undefined8 *)(lVar1 + 0x2770) = 0;
    *(undefined8 *)(lVar1 + 0x2768) = 0;
    *(undefined8 *)(lVar1 + 0x2780) = 0;
    *(undefined8 *)(lVar1 + 0x2778) = 0;
    *(undefined8 *)(lVar1 + 0x2760) = 0;
    *(undefined8 *)(lVar1 + 0x2758) = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x2770) = 0;
  *(undefined8 *)(param_1 + 0x2768) = 0;
  *(undefined8 *)(param_1 + 0x2760) = 0;
  FUN_1004f1580(param_1 + 0x2778);
  *(undefined ***)(param_1 + 0x2778) = &PTR_FUN_10145b9e0;
  lVar3 = -0x400;
  do {
    lVar1 = param_1 + lVar3;
    *(undefined8 *)(lVar1 + 0x2bc0) = 0;
    *(undefined8 *)(lVar1 + 0x2bb8) = 0;
    *(undefined8 *)(lVar1 + 0x2bd0) = 0;
    *(undefined8 *)(lVar1 + 0x2bc8) = 0;
    *(undefined8 *)(lVar1 + 0x2bb0) = 0;
    *(undefined8 *)(lVar1 + 0x2ba8) = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x2bb0) = 0;
  *(undefined8 *)(param_1 + 0x2ba8) = 0;
  *(undefined8 *)(param_1 + 0x2bb8) = 0;
  FUN_1004f1580(param_1 + 0x2bc0);
  *(undefined ***)(param_1 + 0x2bc0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x2be8) = 0;
  *(undefined8 *)(param_1 + 0x2bf8) = 0;
  *(undefined8 *)(param_1 + 0x2bf0) = 0;
  *(undefined8 *)(param_1 + 0x2c08) = 0;
  *(undefined8 *)(param_1 + 0x2c18) = 0;
  *(undefined8 *)(param_1 + 0x2c10) = 0;
  FUN_1004f1580(param_1 + 0x2c20);
  *(undefined ***)(param_1 + 0x2c20) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x2c48) = 0;
  *(undefined8 *)(param_1 + 0x2c58) = 0;
  *(undefined8 *)(param_1 + 0x2c50) = 0;
  *(undefined8 *)(param_1 + 0x2c68) = 0;
  *(undefined8 *)(param_1 + 0x2c78) = 0;
  *(undefined8 *)(param_1 + 0x2c70) = 0;
  FUN_1004f1580(param_1 + 0x2c80);
  *(undefined ***)(param_1 + 0x2c80) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x2ca8) = 0;
  *(undefined8 *)(param_1 + 0x2cb8) = 0;
  *(undefined8 *)(param_1 + 0x2cb0) = 0;
  *(undefined8 *)(param_1 + 0x2cc8) = 0;
  *(undefined8 *)(param_1 + 0x2cd8) = 0;
  *(undefined8 *)(param_1 + 0x2cd0) = 0;
  FUN_1004f1580(param_1 + 0x2ce0);
  *(undefined ***)(param_1 + 0x2ce0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x2d08) = 0;
  *(undefined8 *)(param_1 + 0x2d18) = 0;
  *(undefined8 *)(param_1 + 0x2d10) = 0;
  *(undefined8 *)(param_1 + 0x2d28) = 0;
  *(undefined8 *)(param_1 + 0x2d38) = 0;
  *(undefined8 *)(param_1 + 0x2d30) = 0;
  FUN_1004f1580(param_1 + 0x2d40);
  *(undefined ***)(param_1 + 0x2d40) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x2d68) = 0;
  *(undefined8 *)(param_1 + 0x2d78) = 0;
  *(undefined8 *)(param_1 + 0x2d70) = 0;
  *(undefined8 *)(param_1 + 0x2d88) = 0;
  *(undefined8 *)(param_1 + 0x2d98) = 0;
  *(undefined8 *)(param_1 + 0x2d90) = 0;
  FUN_1004f1580(param_1 + 0x2da0);
  *(undefined ***)(param_1 + 0x2da0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x2dc8) = 0;
  *(undefined8 *)(param_1 + 0x2dd8) = 0;
  *(undefined8 *)(param_1 + 0x2dd0) = 0;
  *(undefined8 *)(param_1 + 0x2de8) = 0;
  *(undefined8 *)(param_1 + 0x2df8) = 0;
  *(undefined8 *)(param_1 + 0x2df0) = 0;
  FUN_1004f1580(param_1 + 0x2e00);
  *(undefined ***)(param_1 + 0x2e00) = &PTR_thunk_FUN_100156e64_10145b980;
  *(undefined8 *)(param_1 + 0x2e38) = 0;
  *(undefined8 *)(param_1 + 0x2e30) = 0;
  *(undefined8 *)(param_1 + 0x2e48) = 0;
  *(undefined8 *)(param_1 + 0x2e40) = 0;
  lVar3 = -0x400;
  *(undefined8 *)(param_1 + 0x2e58) = 0;
  *(undefined8 *)(param_1 + 0x2e50) = 0;
  do {
    lVar1 = param_1 + lVar3;
    *(undefined8 *)(lVar1 + 0x3288) = 0;
    *(undefined8 *)(lVar1 + 0x3280) = 0;
    *(undefined8 *)(lVar1 + 0x3278) = 0;
    *(undefined8 *)(lVar1 + 0x3270) = 0;
    *(undefined8 *)(lVar1 + 0x3268) = 0;
    *(undefined8 *)(lVar1 + 0x3260) = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x3288) = 0;
  *(undefined8 *)(param_1 + 0x3280) = 0;
  *(undefined8 *)(param_1 + 0x3278) = 0;
  *(undefined8 *)(param_1 + 0x3270) = 0;
  *(undefined8 *)(param_1 + 0x3268) = 0;
  *(undefined8 *)(param_1 + 0x3260) = 0;
  *(undefined8 *)(param_1 + 0x32a8) = 0;
  *(undefined8 *)(param_1 + 0x32a0) = 0;
  *(undefined8 *)(param_1 + 0x32b8) = 0;
  *(undefined8 *)(param_1 + 0x32b0) = 0;
  *(undefined8 *)(param_1 + 13000) = 0;
  *(undefined8 *)(param_1 + 0x32c0) = 0;
  *(undefined8 *)(param_1 + 0x32d8) = 0;
  *(undefined8 *)(param_1 + 0x32d0) = 0;
  *(undefined8 *)(param_1 + 0x32e8) = 0;
  *(undefined8 *)(param_1 + 0x32e0) = 0;
  *(undefined8 *)(param_1 + 0x32f8) = 0;
  *(undefined8 *)(param_1 + 0x32f0) = 0;
  FUN_1004f1580(param_1 + 0x3300);
  *(undefined ***)(param_1 + 0x3300) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x3328) = 0;
  *(undefined8 *)(param_1 + 0x3338) = 0;
  *(undefined8 *)(param_1 + 0x3330) = 0;
  *(undefined8 *)(param_1 + 0x3348) = 0;
  *(undefined8 *)(param_1 + 0x3358) = 0;
  *(undefined8 *)(param_1 + 0x3350) = 0;
  FUN_1004f1580(param_1 + 0x3360);
  *(undefined ***)(param_1 + 0x3360) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x3388) = 0;
  *(undefined8 *)(param_1 + 0x3398) = 0;
  *(undefined8 *)(param_1 + 0x3390) = 0;
  *(undefined8 *)(param_1 + 0x33a8) = 0;
  *(undefined8 *)(param_1 + 0x33b8) = 0;
  *(undefined8 *)(param_1 + 0x33b0) = 0;
  FUN_1004f1580(param_1 + 0x33c0);
  *(undefined ***)(param_1 + 0x33c0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x33e8) = 0;
  *(undefined8 *)(param_1 + 0x33f8) = 0;
  *(undefined8 *)(param_1 + 0x33f0) = 0;
  *(undefined8 *)(param_1 + 0x3408) = 0;
  *(undefined8 *)(param_1 + 0x3418) = 0;
  *(undefined8 *)(param_1 + 0x3410) = 0;
  FUN_1004f1580(param_1 + 0x3420);
  *(undefined ***)(param_1 + 0x3420) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x3448) = 0;
  *(undefined8 *)(param_1 + 0x3458) = 0;
  *(undefined8 *)(param_1 + 0x3450) = 0;
  *(undefined8 *)(param_1 + 0x3468) = 0;
  *(undefined8 *)(param_1 + 0x3478) = 0;
  *(undefined8 *)(param_1 + 0x3470) = 0;
  FUN_1004f1580(param_1 + 0x3480);
  *(undefined ***)(param_1 + 0x3480) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x34a8) = 0;
  *(undefined8 *)(param_1 + 0x34b8) = 0;
  *(undefined8 *)(param_1 + 0x34b0) = 0;
  *(undefined8 *)(param_1 + 0x34c8) = 0;
  *(undefined8 *)(param_1 + 0x34d8) = 0;
  *(undefined8 *)(param_1 + 0x34d0) = 0;
  FUN_1004f1580(param_1 + 0x34e0);
  *(undefined ***)(param_1 + 0x34e0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x3508) = 0;
  *(undefined8 *)(param_1 + 0x3518) = 0;
  *(undefined8 *)(param_1 + 0x3510) = 0;
  *(undefined8 *)(param_1 + 0x3528) = 0;
  *(undefined8 *)(param_1 + 0x3538) = 0;
  *(undefined8 *)(param_1 + 0x3530) = 0;
  FUN_1004f1580(param_1 + 0x3540);
  *(undefined ***)(param_1 + 0x3540) = &PTR_FUN_10145baa0;
  *(undefined8 *)(param_1 + 0x3570) = 0;
  *(undefined8 *)(param_1 + 0x3568) = 0;
  FUN_1004f1580(param_1 + 0x3580);
  *(undefined ***)(param_1 + 0x3580) = &PTR_FUN_10145bad0;
  *(undefined8 *)(param_1 + 0x35b8) = 0;
  *(undefined8 *)(param_1 + 0x35b0) = 0;
  *(undefined8 *)(param_1 + 0x35c8) = 0;
  *(undefined8 *)(param_1 + 0x35c0) = 0;
  *(undefined8 *)(param_1 + 0x35d8) = 0;
  *(undefined8 *)(param_1 + 0x35d0) = 0;
  *(undefined8 *)(param_1 + 0x35e8) = 0;
  *(undefined8 *)(param_1 + 0x35e0) = 0;
  *(undefined8 *)(param_1 + 0x35f0) = 0;
  FUN_1004f1580(param_1 + 0x35f8);
  *(undefined ***)(param_1 + 0x35f8) = &PTR_FUN_10145a030;
  *(undefined8 *)(param_1 + 0x3640) = 0;
  *(undefined8 *)(param_1 + 0x3638) = 0;
  *(undefined8 *)(param_1 + 0x3630) = 0;
  FUN_1004f1580(param_1 + 0x3650);
  *(undefined ***)(param_1 + 0x3650) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x3678) = 0;
  *(undefined8 *)(param_1 + 0x3688) = 0;
  *(undefined8 *)(param_1 + 0x3680) = 0;
  *(undefined8 *)(param_1 + 0x3698) = 0;
  *(undefined8 *)(param_1 + 0x36a8) = 0;
  *(undefined8 *)(param_1 + 0x36a0) = 0;
  FUN_1004f1580(param_1 + 14000);
  *(undefined ***)(param_1 + 14000) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x36d8) = 0;
  *(undefined8 *)(param_1 + 0x36e8) = 0;
  *(undefined8 *)(param_1 + 0x36e0) = 0;
  *(undefined8 *)(param_1 + 0x36f8) = 0;
  *(undefined8 *)(param_1 + 0x3708) = 0;
  *(undefined8 *)(param_1 + 0x3700) = 0;
  FUN_1004f1580(param_1 + 0x3710);
  *(undefined ***)(param_1 + 0x3710) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x3738) = 0;
  *(undefined8 *)(param_1 + 0x3748) = 0;
  *(undefined8 *)(param_1 + 0x3740) = 0;
  *(undefined8 *)(param_1 + 0x3758) = 0;
  *(undefined8 *)(param_1 + 0x3768) = 0;
  *(undefined8 *)(param_1 + 0x3760) = 0;
  FUN_1004f1580(param_1 + 0x3770);
  *(undefined ***)(param_1 + 0x3770) = &PTR_FUN_10145c2c0;
  *(undefined8 *)(param_1 + 0x3798) = 0;
  *(undefined8 *)(param_1 + 0x37a8) = 0;
  *(undefined8 *)(param_1 + 0x37a0) = 0;
  FUN_1004f1580(param_1 + 0x37b8);
  *(undefined ***)(param_1 + 0x37b8) = &PTR_FUN_10145c2f0;
  *(undefined8 *)(param_1 + 0x37f0) = 0;
  *(undefined8 *)(param_1 + 0x37e8) = 0;
  *(undefined8 *)(param_1 + 0x37e0) = 0;
  FUN_1004f1580(param_1 + 0x3800);
  *(undefined ***)(param_1 + 0x3800) = &PTR_FUN_10145c320;
  *(undefined8 *)(param_1 + 0x3838) = 0;
  *(undefined8 *)(param_1 + 0x3830) = 0;
  *(long *)(param_1 + 0x3828) = param_1 + 0x3830;
  FUN_1004f1580(param_1 + 0x3848);
  *(undefined ***)(param_1 + 0x3848) = &PTR_FUN_10145c350;
  *(undefined8 *)(param_1 + 0x3880) = 0;
  *(undefined8 *)(param_1 + 0x3878) = 0;
  *(undefined8 *)(param_1 + 0x3870) = 0;
  FUN_1004f1580(param_1 + 0x3890);
  *(undefined8 *)(param_1 + 0x38c0) = 0;
  *(undefined8 *)(param_1 + 0x38b8) = 0;
  *(undefined8 *)(param_1 + 0x38d0) = 0;
  *(undefined8 *)(param_1 + 0x38c8) = 0;
  *(undefined ***)(param_1 + 0x3890) = &PTR_FUN_10145bb90;
  *(undefined8 *)(param_1 + 0x38e0) = 0;
  *(undefined8 *)(param_1 + 0x38d8) = 0;
  FUN_1004f1580(param_1 + 0x38f0);
  *(undefined ***)(param_1 + 0x38f0) = &PTR_thunk_FUN_1004f15a8_10145bbc0;
  FUN_1004f1580(param_1 + 0x3928);
  *(undefined ***)(param_1 + 0x3928) = &PTR_FUN_10145be00;
  *(undefined8 *)(param_1 + 0x3958) = 0;
  *(undefined8 *)(param_1 + 0x3950) = 0;
  *(undefined8 *)(param_1 + 0x3968) = 0;
  *(undefined8 *)(param_1 + 0x3960) = 0;
  *(undefined8 *)(param_1 + 0x3970) = 0;
  FUN_1004f1580(param_1 + 0x3980);
  *(undefined ***)(param_1 + 0x3980) = &PTR_FUN_10145be30;
  *(undefined8 *)(param_1 + 0x39b0) = 0;
  *(undefined8 *)(param_1 + 0x39a8) = 0;
  FUN_1004f1580(param_1 + 0x39c0);
  *(undefined ***)(param_1 + 0x39c0) = &PTR_FUN_10145c380;
  *(undefined8 *)(param_1 + 0x39e8) = 0;
  *(undefined8 *)(param_1 + 0x39f8) = 0;
  *(undefined8 *)(param_1 + 0x39f0) = 0;
  FUN_1004f1580(param_1 + 0x3a08);
  *(undefined ***)(param_1 + 0x3a08) = &PTR_FUN_10145c3b0;
  *(undefined8 *)(param_1 + 0x3a40) = 0;
  *(undefined8 *)(param_1 + 0x3a38) = 0;
  *(undefined8 *)(param_1 + 0x3a30) = 0;
  FUN_1004f1580(param_1 + 0x3a50);
  *(undefined ***)(param_1 + 0x3a50) = &PTR_FUN_10145bb60;
  *(undefined8 *)(param_1 + 0x3a88) = 0;
  *(undefined8 *)(param_1 + 0x3a80) = 0;
  *(undefined8 *)(param_1 + 15000) = 0;
  *(undefined8 *)(param_1 + 0x3a90) = 0;
  *(undefined8 *)(param_1 + 0x3aa0) = 0;
  FUN_1004f1580(param_1 + 0x3aa8);
  *(undefined ***)(param_1 + 0x3aa8) = &PTR_FUN_10145be60;
  *(undefined8 *)(param_1 + 0x3ae0) = 0;
  *(undefined8 *)(param_1 + 0x3ad8) = 0;
  *(undefined8 *)(param_1 + 0x3ad0) = 0;
  *(undefined8 *)(param_1 + 0x3b00) = 0;
  *(undefined8 *)(param_1 + 0x3af8) = 0;
  *(undefined8 *)(param_1 + 0x3af0) = 0;
  FUN_1004f1580(param_1 + 0x3b10);
  *(undefined ***)(param_1 + 0x3b10) = &PTR_FUN_10145be90;
  *(undefined8 *)(param_1 + 0x3b38) = 0;
  *(undefined8 *)(param_1 + 0x3b48) = 0;
  *(undefined8 *)(param_1 + 0x3b40) = 0;
  *(undefined8 *)(param_1 + 0x3b58) = 0;
  *(undefined8 *)(param_1 + 0x3b68) = 0;
  *(undefined8 *)(param_1 + 0x3b60) = 0;
  FUN_1004f1580(param_1 + 0x3b78);
  *(undefined ***)(param_1 + 0x3b78) = &PTR_FUN_10145c3e0;
  *(undefined8 *)(param_1 + 0x3ba8) = 0;
  *(undefined8 *)(param_1 + 0x3ba0) = 0;
  FUN_1004f1580(param_1 + 0x3bb8);
  *(undefined ***)(param_1 + 0x3bb8) = &PTR_FUN_10145bbf0;
  *(undefined8 *)(param_1 + 0x3bf0) = 0;
  *(undefined8 *)(param_1 + 0x3be8) = 0;
  *(undefined8 *)(param_1 + 0x3be0) = 0;
  FUN_1004f1580(param_1 + 0x3c00);
  *(undefined ***)(param_1 + 0x3c00) = &PTR_FUN_10145bfe0;
  *(undefined8 *)(param_1 + 0x3c30) = 0;
  *(undefined8 *)(param_1 + 0x3c28) = 0;
  FUN_1004f1580(param_1 + 0x3c38);
  *(undefined ***)(param_1 + 0x3c38) = &PTR_FUN_10145c010;
  *(undefined8 *)(param_1 + 0x3c68) = 0;
  *(undefined8 *)(param_1 + 0x3c60) = 0;
  *(undefined8 *)(param_1 + 0x3c78) = 0;
  *(undefined8 *)(param_1 + 0x3c70) = 0;
  *(undefined8 *)(param_1 + 0x3c88) = 0;
  *(undefined8 *)(param_1 + 0x3c80) = 0;
  *(undefined8 *)(param_1 + 0x3c98) = 0;
  *(undefined8 *)(param_1 + 0x3c90) = 0;
  *(undefined8 *)(param_1 + 0x3ca8) = 0;
  *(undefined8 *)(param_1 + 0x3ca0) = 0;
  *(undefined8 *)(param_1 + 0x3cb0) = 0;
  FUN_1004f1580(param_1 + 0x3cb8);
  *(undefined ***)(param_1 + 0x3cb8) = &PTR_FUN_10145c040;
  *(undefined8 *)(param_1 + 0x3ce8) = 0;
  *(undefined8 *)(param_1 + 0x3ce0) = 0;
  *(undefined8 *)(param_1 + 0x3cf8) = 0;
  *(undefined8 *)(param_1 + 0x3cf0) = 0;
  *(undefined8 *)(param_1 + 0x3d08) = 0;
  *(undefined8 *)(param_1 + 0x3d00) = 0;
  *(undefined8 *)(param_1 + 0x3d18) = 0;
  *(undefined8 *)(param_1 + 0x3d10) = 0;
  *(undefined8 *)(param_1 + 0x3d28) = 0;
  *(undefined8 *)(param_1 + 0x3d20) = 0;
  *(undefined8 *)(param_1 + 0x3d38) = 0;
  *(undefined8 *)(param_1 + 0x3d30) = 0;
  *(undefined8 *)(param_1 + 0x3d48) = 0;
  *(undefined8 *)(param_1 + 0x3d40) = 0;
  *(undefined8 *)(param_1 + 0x3d58) = 0;
  *(undefined8 *)(param_1 + 0x3d50) = 0;
  FUN_1004f1580(param_1 + 0x3d60);
  *(undefined ***)(param_1 + 0x3d60) = &PTR_FUN_10145c070;
  *(undefined8 *)(param_1 + 0x3da0) = 0;
  *(undefined8 *)(param_1 + 0x3d98) = 0;
  *(undefined8 *)(param_1 + 0x3d90) = 0;
  FUN_1004f1580(param_1 + 0x3da8);
  *(undefined ***)(param_1 + 0x3da8) = &PTR_FUN_10145c0a0;
  *(undefined8 *)(param_1 + 0x3dd8) = 0;
  *(undefined8 *)(param_1 + 0x3dd0) = 0;
  FUN_1004f1580(param_1 + 0x3de0);
  *(undefined ***)(param_1 + 0x3de0) = &PTR_FUN_10145c0d0;
  *(undefined8 *)(param_1 + 0x3e20) = 0;
  *(undefined8 *)(param_1 + 0x3e18) = 0;
  *(undefined8 *)(param_1 + 0x3e10) = 0;
  FUN_1004f1580(param_1 + 0x3e28);
  *(undefined ***)(param_1 + 0x3e28) = &PTR_FUN_10145c100;
  *(undefined8 *)(param_1 + 0x3e58) = 0;
  *(undefined8 *)(param_1 + 0x3e68) = 0;
  *(undefined8 *)(param_1 + 0x3e60) = 0;
  FUN_1004f1580(param_1 + 0x3e70);
  *(undefined ***)(param_1 + 0x3e70) = &PTR_FUN_10145c130;
  *(undefined8 *)(param_1 + 0x3ea0) = 0;
  *(undefined8 *)(param_1 + 0x3e98) = 0;
  FUN_1004f1580(param_1 + 0x3ea8);
  *(undefined ***)(param_1 + 0x3ea8) = &PTR_FUN_10145bc20;
  *(undefined8 *)(param_1 + 0x3ee0) = 0;
  *(undefined8 *)(param_1 + 0x3ed8) = 0;
  *(undefined8 *)(param_1 + 0x3ed0) = 0;
  FUN_1004f1580(param_1 + 0x3ee8);
  *(undefined ***)(param_1 + 0x3ee8) = &PTR_FUN_10145bc50;
  *(undefined8 *)(param_1 + 0x3f20) = 0;
  *(undefined8 *)(param_1 + 0x3f18) = 0;
  *(undefined8 *)(param_1 + 0x3f10) = 0;
  FUN_1004f1580(param_1 + 0x3f28);
  *(undefined ***)(param_1 + 0x3f28) = &PTR_FUN_10145bc80;
  *(undefined8 *)(param_1 + 0x3f60) = 0;
  *(undefined8 *)(param_1 + 0x3f58) = 0;
  *(undefined8 *)(param_1 + 0x3f50) = 0;
  FUN_1004f1580(param_1 + 0x3f68);
  *(undefined ***)(param_1 + 0x3f68) = &PTR_FUN_10145bcb0;
  *(undefined8 *)(param_1 + 0x3fa0) = 0;
  *(undefined8 *)(param_1 + 0x3f98) = 0;
  *(undefined8 *)(param_1 + 0x3f90) = 0;
  FUN_1004f1580(param_1 + 0x3fa8);
  *(undefined ***)(param_1 + 0x3fa8) = &PTR_FUN_10145bce0;
  *(undefined8 *)(param_1 + 0x3fe0) = 0;
  *(undefined8 *)(param_1 + 0x3fd8) = 0;
  *(undefined8 *)(param_1 + 0x3fd0) = 0;
  FUN_1004f1580(param_1 + 0x3fe8);
  *(undefined ***)(param_1 + 0x3fe8) = &PTR_thunk_FUN_1004f15a8_10145bd10;
  FUN_1004f1580(param_1 + 0x4010);
  *(undefined8 *)(param_1 + 0x4040) = 0;
  *(undefined8 *)(param_1 + 0x4038) = 0;
  *(undefined8 *)(param_1 + 0x4050) = 0;
  *(undefined8 *)(param_1 + 0x4048) = 0;
  *(undefined ***)(param_1 + 0x4010) = &PTR_FUN_10145bd40;
  *(undefined8 *)(param_1 + 0x4060) = 0;
  *(undefined8 *)(param_1 + 0x4058) = 0;
  FUN_1004f1580(param_1 + 0x4070);
  *(undefined ***)(param_1 + 0x4070) = &PTR_FUN_10145bd70;
  *(undefined8 *)(param_1 + 0x40a0) = 0;
  *(undefined8 *)(param_1 + 0x4098) = 0;
  FUN_1004f1580(param_1 + 0x40b0);
  *(undefined ***)(param_1 + 0x40b0) = &PTR_FUN_10145bd70;
  *(undefined8 *)(param_1 + 0x40e0) = 0;
  *(undefined8 *)(param_1 + 0x40d8) = 0;
  FUN_1004f1580(param_1 + 0x40f0);
  *(undefined ***)(param_1 + 0x40f0) = &PTR_FUN_10145bd70;
  *(undefined8 *)(param_1 + 0x4120) = 0;
  *(undefined8 *)(param_1 + 0x4118) = 0;
  FUN_1004f1580(param_1 + 0x4130);
  *(undefined ***)(param_1 + 0x4130) = &PTR_FUN_10145bda0;
  *(undefined8 *)(param_1 + 0x4160) = 0;
  *(undefined8 *)(param_1 + 0x4158) = 0;
  *(undefined8 *)(param_1 + 0x4170) = 0;
  *(undefined8 *)(param_1 + 0x4168) = 0;
  *(undefined8 *)(param_1 + 0x4180) = 0;
  *(undefined8 *)(param_1 + 0x4178) = 0;
  *(undefined8 *)(param_1 + 0x4188) = 0;
  FUN_1004f1580(param_1 + 0x41a0);
  *(undefined ***)(param_1 + 0x41a0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x41c8) = 0;
  *(undefined8 *)(param_1 + 0x41d8) = 0;
  *(undefined8 *)(param_1 + 0x41d0) = 0;
  *(undefined8 *)(param_1 + 0x41e8) = 0;
  *(undefined8 *)(param_1 + 0x41f8) = 0;
  *(undefined8 *)(param_1 + 0x41f0) = 0;
  FUN_1004f1580(param_1 + 0x4200);
  *(undefined ***)(param_1 + 0x4200) = &PTR_thunk_FUN_1004f15a8_10145bdd0;
  FUN_1004f1580(param_1 + 0x4230);
  *(undefined ***)(param_1 + 0x4230) = &PTR_thunk_FUN_10015a304_10145bec0;
  *(undefined8 *)(param_1 + 0x42d8) = 0;
  *(undefined8 *)(param_1 + 0x42d0) = 0;
  *(undefined8 *)(param_1 + 0x42e8) = 0;
  *(undefined8 *)(param_1 + 0x42e0) = 0;
  *(undefined8 *)(param_1 + 0x42f8) = 0;
  *(undefined8 *)(param_1 + 0x42f0) = 0;
  *(undefined8 *)(param_1 + 0x4308) = 0;
  *(undefined8 *)(param_1 + 0x4300) = 0;
  *(undefined8 *)(param_1 + 0x4318) = 0;
  *(undefined8 *)(param_1 + 0x4310) = 0;
  *(undefined8 *)(param_1 + 0x4328) = 0;
  *(undefined8 *)(param_1 + 0x4320) = 0;
  *(undefined8 *)(param_1 + 0x4338) = 0;
  *(undefined8 *)(param_1 + 0x4330) = 0;
  *(undefined8 *)(param_1 + 0x4348) = 0;
  *(undefined8 *)(param_1 + 0x4340) = 0;
  *(undefined8 *)(param_1 + 0x4358) = 0;
  *(undefined8 *)(param_1 + 0x4350) = 0;
  *(undefined8 *)(param_1 + 0x4368) = 0;
  *(undefined8 *)(param_1 + 0x4360) = 0;
  *(undefined8 *)(param_1 + 0x4378) = 0;
  *(undefined8 *)(param_1 + 0x4370) = 0;
  *(undefined8 *)(param_1 + 0x4388) = 0;
  *(undefined8 *)(param_1 + 0x4380) = 0;
  *(undefined8 *)(param_1 + 0x4398) = 0;
  *(undefined8 *)(param_1 + 0x4390) = 0;
  *(undefined8 *)(param_1 + 0x43a0) = 0;
  *(undefined8 *)(param_1 + 0x4270) = 0;
  *(undefined8 *)(param_1 + 17000) = 0;
  *(undefined8 *)(param_1 + 0x4280) = 0;
  *(undefined8 *)(param_1 + 0x4278) = 0;
  *(undefined8 *)(param_1 + 0x4290) = 0;
  *(undefined8 *)(param_1 + 0x4288) = 0;
  *(undefined8 *)(param_1 + 0x42a0) = 0;
  *(undefined8 *)(param_1 + 0x4298) = 0;
  *(undefined8 *)(param_1 + 0x42b0) = 0;
  *(undefined8 *)(param_1 + 0x42a8) = 0;
  *(undefined8 *)(param_1 + 0x4260) = 0;
  *(undefined8 *)(param_1 + 0x4258) = 0;
  FUN_10015a14c(param_1 + 0x42c8);
  FUN_100159fc8((undefined8 *)(param_1 + 0x4258));
  *(undefined8 *)(param_1 + 0x4460) = 0;
  *(undefined8 *)(param_1 + 0x4458) = 0;
  *(undefined8 *)(param_1 + 0x4450) = 0;
  *(undefined8 *)(param_1 + 0x43b8) = 0;
  *(undefined8 *)(param_1 + 0x43b0) = 0;
  *(undefined8 *)(param_1 + 0x43c8) = 0;
  *(undefined8 *)(param_1 + 0x43c0) = 0;
  *(undefined8 *)(param_1 + 0x43d8) = 0;
  *(undefined8 *)(param_1 + 0x43d0) = 0;
  *(undefined8 *)(param_1 + 0x4410) = 0;
  *(undefined8 *)(param_1 + 0x4408) = 0;
  *(undefined8 *)(param_1 + 0x4420) = 0;
  *(undefined8 *)(param_1 + 0x4418) = 0;
  *(undefined8 *)(param_1 + 0x4430) = 0;
  *(undefined8 *)(param_1 + 0x4428) = 0;
  *(undefined8 *)(param_1 + 0x4440) = 0;
  *(undefined8 *)(param_1 + 0x4438) = 0;
  FUN_1004f1580(param_1 + 0x4470);
  *(undefined ***)(param_1 + 0x4470) = &PTR_FUN_10145c410;
  *(undefined8 *)(param_1 + 0x44a0) = 0;
  *(undefined8 *)(param_1 + 0x4498) = 0;
  *(undefined8 *)(param_1 + 0x44c0) = 0;
  *(undefined8 *)(param_1 + 0x44b8) = 0;
  *(undefined8 *)(param_1 + 0x44b0) = 0;
  FUN_1004f1580(param_1 + 0x44d0);
  *(undefined ***)(param_1 + 0x44d0) = &PTR_FUN_10145bef0;
  *(undefined8 *)(param_1 + 0x4508) = 0;
  *(undefined8 *)(param_1 + 0x4500) = 0;
  *(undefined8 *)(param_1 + 0x4518) = 0;
  *(undefined8 *)(param_1 + 0x4510) = 0;
  *(undefined8 *)(param_1 + 0x4528) = 0;
  *(undefined8 *)(param_1 + 0x4520) = 0;
  FUN_1004f1580(param_1 + 0x4530);
  *(undefined ***)(param_1 + 0x4530) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4558) = 0;
  *(undefined8 *)(param_1 + 0x4568) = 0;
  *(undefined8 *)(param_1 + 0x4560) = 0;
  *(undefined8 *)(param_1 + 0x4578) = 0;
  *(undefined8 *)(param_1 + 0x4588) = 0;
  *(undefined8 *)(param_1 + 0x4580) = 0;
  FUN_1004f1580(param_1 + 0x4590);
  *(undefined ***)(param_1 + 0x4590) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x45b8) = 0;
  *(undefined8 *)(param_1 + 0x45c8) = 0;
  *(undefined8 *)(param_1 + 0x45c0) = 0;
  *(undefined8 *)(param_1 + 0x45d8) = 0;
  *(undefined8 *)(param_1 + 0x45e8) = 0;
  *(undefined8 *)(param_1 + 0x45e0) = 0;
  FUN_1004f1580(param_1 + 0x45f0);
  *(undefined ***)(param_1 + 0x45f0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4618) = 0;
  *(undefined8 *)(param_1 + 0x4628) = 0;
  *(undefined8 *)(param_1 + 0x4620) = 0;
  *(undefined8 *)(param_1 + 0x4638) = 0;
  *(undefined8 *)(param_1 + 0x4648) = 0;
  *(undefined8 *)(param_1 + 0x4640) = 0;
  FUN_1004f1580(param_1 + 18000);
  *(undefined ***)(param_1 + 18000) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4678) = 0;
  *(undefined8 *)(param_1 + 0x4688) = 0;
  *(undefined8 *)(param_1 + 0x4680) = 0;
  *(undefined8 *)(param_1 + 0x4698) = 0;
  *(undefined8 *)(param_1 + 0x46a8) = 0;
  *(undefined8 *)(param_1 + 0x46a0) = 0;
  FUN_1004f1580(param_1 + 0x46b0);
  *(undefined ***)(param_1 + 0x46b0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x46d8) = 0;
  *(undefined8 *)(param_1 + 0x46e8) = 0;
  *(undefined8 *)(param_1 + 0x46e0) = 0;
  *(undefined8 *)(param_1 + 0x46f8) = 0;
  *(undefined8 *)(param_1 + 0x4708) = 0;
  *(undefined8 *)(param_1 + 0x4700) = 0;
  FUN_1004f1580(param_1 + 0x4710);
  *(undefined ***)(param_1 + 0x4710) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4738) = 0;
  *(undefined8 *)(param_1 + 0x4748) = 0;
  *(undefined8 *)(param_1 + 0x4740) = 0;
  *(undefined8 *)(param_1 + 0x4758) = 0;
  *(undefined8 *)(param_1 + 0x4768) = 0;
  *(undefined8 *)(param_1 + 0x4760) = 0;
  FUN_1004f1580(param_1 + 0x4770);
  *(undefined ***)(param_1 + 0x4770) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4798) = 0;
  *(undefined8 *)(param_1 + 0x47a8) = 0;
  *(undefined8 *)(param_1 + 0x47a0) = 0;
  *(undefined8 *)(param_1 + 0x47b8) = 0;
  *(undefined8 *)(param_1 + 0x47c8) = 0;
  *(undefined8 *)(param_1 + 0x47c0) = 0;
  FUN_1004f1580(param_1 + 0x47d0);
  *(undefined ***)(param_1 + 0x47d0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x47f8) = 0;
  *(undefined8 *)(param_1 + 0x4808) = 0;
  *(undefined8 *)(param_1 + 0x4800) = 0;
  *(undefined8 *)(param_1 + 0x4818) = 0;
  *(undefined8 *)(param_1 + 0x4828) = 0;
  *(undefined8 *)(param_1 + 0x4820) = 0;
  FUN_1004f1580(param_1 + 0x4830);
  *(undefined ***)(param_1 + 0x4830) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4858) = 0;
  *(undefined8 *)(param_1 + 0x4868) = 0;
  *(undefined8 *)(param_1 + 0x4860) = 0;
  *(undefined8 *)(param_1 + 0x4878) = 0;
  *(undefined8 *)(param_1 + 0x4888) = 0;
  *(undefined8 *)(param_1 + 0x4880) = 0;
  FUN_1004f1580(param_1 + 0x4890);
  *(undefined ***)(param_1 + 0x4890) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x48b8) = 0;
  *(undefined8 *)(param_1 + 0x48c8) = 0;
  *(undefined8 *)(param_1 + 0x48c0) = 0;
  *(undefined8 *)(param_1 + 0x48d8) = 0;
  *(undefined8 *)(param_1 + 0x48e8) = 0;
  *(undefined8 *)(param_1 + 0x48e0) = 0;
  FUN_1004f1580(param_1 + 0x48f0);
  *(undefined ***)(param_1 + 0x48f0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4918) = 0;
  *(undefined8 *)(param_1 + 0x4928) = 0;
  *(undefined8 *)(param_1 + 0x4920) = 0;
  *(undefined8 *)(param_1 + 0x4938) = 0;
  *(undefined8 *)(param_1 + 0x4948) = 0;
  *(undefined8 *)(param_1 + 0x4940) = 0;
  FUN_1004f1580(param_1 + 0x4950);
  *(undefined ***)(param_1 + 0x4950) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4978) = 0;
  *(undefined8 *)(param_1 + 0x4988) = 0;
  *(undefined8 *)(param_1 + 0x4980) = 0;
  *(undefined8 *)(param_1 + 0x4998) = 0;
  *(undefined8 *)(param_1 + 0x49a8) = 0;
  *(undefined8 *)(param_1 + 0x49a0) = 0;
  FUN_1004f1580(param_1 + 0x49b0);
  *(undefined ***)(param_1 + 0x49b0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x49d8) = 0;
  *(undefined8 *)(param_1 + 0x49e8) = 0;
  *(undefined8 *)(param_1 + 0x49e0) = 0;
  *(undefined8 *)(param_1 + 0x49f8) = 0;
  *(undefined8 *)(param_1 + 0x4a08) = 0;
  *(undefined8 *)(param_1 + 0x4a00) = 0;
  FUN_1004f1580(param_1 + 0x4a10);
  *(undefined ***)(param_1 + 0x4a10) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 19000) = 0;
  *(undefined8 *)(param_1 + 0x4a48) = 0;
  *(undefined8 *)(param_1 + 0x4a40) = 0;
  FUN_1004f1580(param_1 + 0x4a50);
  *(undefined ***)(param_1 + 0x4a50) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x4a78) = 0;
  *(undefined8 *)(param_1 + 0x4a88) = 0;
  *(undefined8 *)(param_1 + 0x4a80) = 0;
  FUN_1004f1580(param_1 + 0x4a90);
  *(undefined ***)(param_1 + 0x4a90) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x4ab8) = 0;
  *(undefined8 *)(param_1 + 0x4ac8) = 0;
  *(undefined8 *)(param_1 + 0x4ac0) = 0;
  FUN_1004f1580(param_1 + 0x4ad0);
  *(undefined ***)(param_1 + 0x4ad0) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x4af8) = 0;
  *(undefined8 *)(param_1 + 0x4b08) = 0;
  *(undefined8 *)(param_1 + 0x4b00) = 0;
  FUN_1004f1580(param_1 + 0x4b10);
  *(undefined ***)(param_1 + 0x4b10) = &PTR_FUN_10145bf20;
  *(undefined8 *)(param_1 + 0x4be0) = 0;
  *(undefined8 *)(param_1 + 0x4bd8) = 0;
  *(undefined8 *)(param_1 + 0x4bd0) = 0;
  *(undefined8 *)(param_1 + 0x4b40) = 0;
  *(undefined8 *)(param_1 + 0x4b38) = 0;
  *(undefined8 *)(param_1 + 0x4b50) = 0;
  *(undefined8 *)(param_1 + 0x4b48) = 0;
  *(undefined8 *)(param_1 + 0x4b60) = 0;
  *(undefined8 *)(param_1 + 0x4b58) = 0;
  *(undefined8 *)(param_1 + 0x4b70) = 0;
  *(undefined8 *)(param_1 + 0x4b68) = 0;
  *(undefined8 *)(param_1 + 0x4bb0) = 0;
  *(undefined8 *)(param_1 + 0x4ba8) = 0;
  *(undefined8 *)(param_1 + 0x4bc0) = 0;
  *(undefined8 *)(param_1 + 0x4bb8) = 0;
  *(undefined8 *)(param_1 + 0x4b78) = 0;
  FUN_1004f1580(param_1 + 0x4bf0);
  *(undefined ***)(param_1 + 0x4bf0) = &PTR_FUN_10145c440;
  *(undefined8 *)(param_1 + 0x4c20) = 0;
  *(undefined8 *)(param_1 + 0x4c18) = 0;
  *(undefined8 *)(param_1 + 0x4c40) = 0;
  *(undefined8 *)(param_1 + 0x4c38) = 0;
  *(undefined8 *)(param_1 + 0x4c30) = 0;
  FUN_1004f1580(param_1 + 0x4c50);
  *(undefined ***)(param_1 + 0x4c50) = &PTR_FUN_10145bf50;
  *(undefined8 *)(param_1 + 0x4c88) = 0;
  *(undefined8 *)(param_1 + 0x4c80) = 0;
  *(undefined8 *)(param_1 + 0x4c98) = 0;
  *(undefined8 *)(param_1 + 0x4c90) = 0;
  *(undefined8 *)(param_1 + 0x4ca8) = 0;
  *(undefined8 *)(param_1 + 0x4ca0) = 0;
  FUN_1004f1580(param_1 + 0x4cb0);
  *(undefined ***)(param_1 + 0x4cb0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4cd8) = 0;
  *(undefined8 *)(param_1 + 0x4ce8) = 0;
  *(undefined8 *)(param_1 + 0x4ce0) = 0;
  *(undefined8 *)(param_1 + 0x4cf8) = 0;
  *(undefined8 *)(param_1 + 0x4d08) = 0;
  *(undefined8 *)(param_1 + 0x4d00) = 0;
  FUN_1004f1580(param_1 + 0x4d10);
  *(undefined ***)(param_1 + 0x4d10) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4d38) = 0;
  *(undefined8 *)(param_1 + 0x4d48) = 0;
  *(undefined8 *)(param_1 + 0x4d40) = 0;
  *(undefined8 *)(param_1 + 0x4d58) = 0;
  *(undefined8 *)(param_1 + 0x4d68) = 0;
  *(undefined8 *)(param_1 + 0x4d60) = 0;
  FUN_1004f1580(param_1 + 0x4d70);
  *(undefined ***)(param_1 + 0x4d70) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4d98) = 0;
  *(undefined8 *)(param_1 + 0x4da8) = 0;
  *(undefined8 *)(param_1 + 0x4da0) = 0;
  *(undefined8 *)(param_1 + 0x4db8) = 0;
  *(undefined8 *)(param_1 + 0x4dc8) = 0;
  *(undefined8 *)(param_1 + 0x4dc0) = 0;
  FUN_1004f1580(param_1 + 0x4dd0);
  *(undefined ***)(param_1 + 0x4dd0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4df8) = 0;
  *(undefined8 *)(param_1 + 0x4e08) = 0;
  *(undefined8 *)(param_1 + 0x4e00) = 0;
  *(undefined8 *)(param_1 + 0x4e18) = 0;
  *(undefined8 *)(param_1 + 0x4e28) = 0;
  *(undefined8 *)(param_1 + 20000) = 0;
  FUN_1004f1580(param_1 + 0x4e30);
  *(undefined ***)(param_1 + 0x4e30) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4e58) = 0;
  *(undefined8 *)(param_1 + 0x4e68) = 0;
  *(undefined8 *)(param_1 + 0x4e60) = 0;
  *(undefined8 *)(param_1 + 0x4e78) = 0;
  *(undefined8 *)(param_1 + 0x4e88) = 0;
  *(undefined8 *)(param_1 + 0x4e80) = 0;
  FUN_1004f1580(param_1 + 0x4e90);
  *(undefined ***)(param_1 + 0x4e90) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4eb8) = 0;
  *(undefined8 *)(param_1 + 0x4ec8) = 0;
  *(undefined8 *)(param_1 + 0x4ec0) = 0;
  *(undefined8 *)(param_1 + 0x4ed8) = 0;
  *(undefined8 *)(param_1 + 0x4ee8) = 0;
  *(undefined8 *)(param_1 + 0x4ee0) = 0;
  FUN_1004f1580(param_1 + 0x4ef0);
  *(undefined ***)(param_1 + 0x4ef0) = &PTR_thunk_FUN_1004f15a8_10145b920;
  FUN_1004f1580(param_1 + 0x4f20);
  *(undefined ***)(param_1 + 0x4f20) = &PTR_thunk_FUN_1004f15a8_10145b920;
  FUN_1004f1580(param_1 + 0x4f50);
  *(undefined ***)(param_1 + 0x4f50) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x4f78) = 0;
  *(undefined8 *)(param_1 + 0x4f88) = 0;
  *(undefined8 *)(param_1 + 0x4f80) = 0;
  FUN_1004f1580(param_1 + 0x4f90);
  *(undefined ***)(param_1 + 0x4f90) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x4fb8) = 0;
  *(undefined8 *)(param_1 + 0x4fc8) = 0;
  *(undefined8 *)(param_1 + 0x4fc0) = 0;
  FUN_1004f1580(param_1 + 0x4fd0);
  *(undefined ***)(param_1 + 0x4fd0) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x4ff8) = 0;
  *(undefined8 *)(param_1 + 0x5008) = 0;
  *(undefined8 *)(param_1 + 0x5000) = 0;
  FUN_1004f1580(param_1 + 0x5010);
  *(undefined ***)(param_1 + 0x5010) = &PTR_FUN_10145bf80;
  *(undefined8 *)(param_1 + 0x5040) = 0;
  *(undefined8 *)(param_1 + 0x5038) = 0;
  FUN_1004f1580(param_1 + 0x5048);
  *(undefined ***)(param_1 + 0x5048) = &PTR_FUN_10145bfb0;
  *(undefined8 *)(param_1 + 0x5078) = 0;
  *(undefined8 *)(param_1 + 0x5070) = 0;
  FUN_1004f1580(param_1 + 0x5088);
  *(undefined ***)(param_1 + 0x5088) = &PTR_thunk_FUN_10015a304_10145bec0;
  *(undefined8 *)(param_1 + 0x5130) = 0;
  *(undefined8 *)(param_1 + 0x5128) = 0;
  *(undefined8 *)(param_1 + 0x5140) = 0;
  *(undefined8 *)(param_1 + 0x5138) = 0;
  *(undefined8 *)(param_1 + 0x5150) = 0;
  *(undefined8 *)(param_1 + 0x5148) = 0;
  *(undefined8 *)(param_1 + 0x5160) = 0;
  *(undefined8 *)(param_1 + 0x5158) = 0;
  *(undefined8 *)(param_1 + 0x5170) = 0;
  *(undefined8 *)(param_1 + 0x5168) = 0;
  *(undefined8 *)(param_1 + 0x5180) = 0;
  *(undefined8 *)(param_1 + 0x5178) = 0;
  *(undefined8 *)(param_1 + 0x5190) = 0;
  *(undefined8 *)(param_1 + 0x5188) = 0;
  *(undefined8 *)(param_1 + 0x51a0) = 0;
  *(undefined8 *)(param_1 + 0x5198) = 0;
  *(undefined8 *)(param_1 + 0x51b0) = 0;
  *(undefined8 *)(param_1 + 0x51a8) = 0;
  *(undefined8 *)(param_1 + 0x51c0) = 0;
  *(undefined8 *)(param_1 + 0x51b8) = 0;
  *(undefined8 *)(param_1 + 0x51d0) = 0;
  *(undefined8 *)(param_1 + 0x51c8) = 0;
  *(undefined8 *)(param_1 + 0x51e0) = 0;
  *(undefined8 *)(param_1 + 0x51d8) = 0;
  *(undefined8 *)(param_1 + 0x51f0) = 0;
  *(undefined8 *)(param_1 + 0x51e8) = 0;
  *(undefined8 *)(param_1 + 0x51f8) = 0;
  *(undefined8 *)(param_1 + 0x50b8) = 0;
  *(undefined8 *)(param_1 + 0x50b0) = 0;
  *(undefined8 *)(param_1 + 0x50c8) = 0;
  *(undefined8 *)(param_1 + 0x50c0) = 0;
  *(undefined8 *)(param_1 + 0x50d8) = 0;
  *(undefined8 *)(param_1 + 0x50d0) = 0;
  *(undefined8 *)(param_1 + 0x50e8) = 0;
  *(undefined8 *)(param_1 + 0x50e0) = 0;
  *(undefined8 *)(param_1 + 0x50f8) = 0;
  *(undefined8 *)(param_1 + 0x50f0) = 0;
  *(undefined8 *)(param_1 + 0x5108) = 0;
  *(undefined8 *)(param_1 + 0x5100) = 0;
  FUN_10015a14c(param_1 + 0x5120);
  FUN_100159fc8(param_1 + 0x50b0);
  *(undefined8 *)(param_1 + 0x52b0) = 0;
  *(undefined8 *)(param_1 + 0x52a8) = 0;
  *(undefined8 *)(param_1 + 0x52b8) = 0;
  *(undefined8 *)(param_1 + 0x5210) = 0;
  *(undefined8 *)(param_1 + 21000) = 0;
  *(undefined8 *)(param_1 + 0x5220) = 0;
  *(undefined8 *)(param_1 + 0x5218) = 0;
  *(undefined8 *)(param_1 + 0x5230) = 0;
  *(undefined8 *)(param_1 + 0x5228) = 0;
  *(undefined8 *)(param_1 + 0x5268) = 0;
  *(undefined8 *)(param_1 + 0x5260) = 0;
  *(undefined8 *)(param_1 + 0x5278) = 0;
  *(undefined8 *)(param_1 + 0x5270) = 0;
  *(undefined8 *)(param_1 + 0x5288) = 0;
  *(undefined8 *)(param_1 + 0x5280) = 0;
  *(undefined8 *)(param_1 + 0x5298) = 0;
  *(undefined8 *)(param_1 + 0x5290) = 0;
  FUN_1004f1580(param_1 + 0x52c8);
  *(undefined ***)(param_1 + 0x52c8) = &PTR_FUN_10145bf20;
  *(undefined8 *)(param_1 + 0x5388) = 0;
  *(undefined8 *)(param_1 + 0x5398) = 0;
  *(undefined8 *)(param_1 + 0x5390) = 0;
  *(undefined8 *)(param_1 + 0x52f8) = 0;
  *(undefined8 *)(param_1 + 0x52f0) = 0;
  *(undefined8 *)(param_1 + 0x5308) = 0;
  *(undefined8 *)(param_1 + 0x5300) = 0;
  *(undefined8 *)(param_1 + 0x5318) = 0;
  *(undefined8 *)(param_1 + 0x5310) = 0;
  *(undefined8 *)(param_1 + 0x5328) = 0;
  *(undefined8 *)(param_1 + 0x5320) = 0;
  *(undefined8 *)(param_1 + 0x5330) = 0;
  *(undefined8 *)(param_1 + 0x5368) = 0;
  *(undefined8 *)(param_1 + 0x5360) = 0;
  *(undefined8 *)(param_1 + 0x5378) = 0;
  *(undefined8 *)(param_1 + 0x5370) = 0;
  *(undefined8 *)(param_1 + 0x53b0) = 0;
  *(undefined8 *)(param_1 + 0x53a8) = 0;
  *(undefined8 *)(param_1 + 0x53c0) = 0;
  *(undefined8 *)(param_1 + 0x53b8) = 0;
  *(undefined8 *)(param_1 + 0x53d0) = 0;
  *(undefined8 *)(param_1 + 0x53c8) = 0;
  *(undefined8 *)(param_1 + 0x53e0) = 0;
  *(undefined8 *)(param_1 + 0x53d8) = 0;
  *(undefined8 *)(param_1 + 0x53f0) = 0;
  *(undefined8 *)(param_1 + 0x53e8) = 0;
  *(undefined8 *)(param_1 + 0x5400) = 0;
  *(undefined8 *)(param_1 + 0x53f8) = 0;
  *(undefined8 *)(param_1 + 0x5410) = 0;
  *(undefined8 *)(param_1 + 0x5408) = 0;
  *(undefined8 *)(param_1 + 0x5420) = 0;
  *(undefined8 *)(param_1 + 0x5418) = 0;
  *(undefined8 *)(param_1 + 0x5430) = 0;
  *(undefined8 *)(param_1 + 0x5428) = 0;
  *(undefined8 *)(param_1 + 0x5440) = 0;
  *(undefined8 *)(param_1 + 0x5438) = 0;
  *(undefined8 *)(param_1 + 0x5450) = 0;
  *(undefined8 *)(param_1 + 0x5448) = 0;
  *(undefined8 *)(param_1 + 0x5460) = 0;
  *(undefined8 *)(param_1 + 0x5458) = 0;
  FUN_1004e313c(param_1 + 0x5468);
  *(undefined8 *)(param_1 + 0x54b8) = 0;
  *(undefined8 *)(param_1 + 0x54a0) = 0;
  *(undefined8 *)(param_1 + 0x5498) = 0;
  *(undefined8 *)(param_1 + 0x54b0) = 0;
  *(undefined8 *)(param_1 + 0x54a8) = 0;
  *(undefined8 *)(param_1 + 0x5480) = 0;
  *(undefined8 *)(param_1 + 0x5478) = 0;
  *(undefined8 *)(param_1 + 0x5490) = 0;
  *(undefined8 *)(param_1 + 0x5488) = 0;
  FUN_10003330c(param_1 + 0x54c0,&DAT_101d91198);
  *(undefined8 *)(param_1 + 0x5548) = 0;
  *(undefined8 *)(param_1 + 0x5530) = 0;
  *(undefined8 *)(param_1 + 0x5528) = 0;
  *(undefined8 *)(param_1 + 0x5540) = 0;
  *(undefined8 *)(param_1 + 0x5538) = 0;
  *(undefined8 *)(param_1 + 0x5510) = 0;
  *(undefined8 *)(param_1 + 0x5508) = 0;
  *(undefined8 *)(param_1 + 0x5520) = 0;
  *(undefined8 *)(param_1 + 0x5518) = 0;
  *(undefined8 *)(param_1 + 0x54f0) = 0;
  *(undefined8 *)(param_1 + 0x54e8) = 0;
  *(undefined8 *)(param_1 + 0x5500) = 0;
  *(undefined8 *)(param_1 + 0x54f8) = 0;
  *(undefined8 *)(param_1 + 0x54e0) = 0;
  *(undefined8 *)(param_1 + 0x54d8) = 0;
  FUN_1004e3004(param_1 + 0x5550);
  FUN_1004e3004(param_1 + 0x5558);
  thunk_FUN_100016500(param_1 + 0x5560,"GUILD.INVITES",1);
  thunk_FUN_100016500(param_1 + 0x5580,"TEAM.INVITES",1);
  *(undefined8 *)(param_1 + 0x55c8) = 0;
  *(undefined8 *)(param_1 + 0x55c0) = 0;
  *(undefined8 *)(param_1 + 0x55b8) = 0;
  *(undefined8 *)(param_1 + 0x55b0) = 0;
  *(undefined8 *)(param_1 + 0x55a8) = 0;
  *(undefined8 *)(param_1 + 0x55a0) = 0;
  *(undefined8 *)(param_1 + 0x55d8) = 0x6300000000;
  *(undefined8 *)(param_1 + 0x55d0) = 1;
  *(undefined8 *)(param_1 + 22000) = 0;
  *(undefined8 *)(param_1 + 0x55e8) = 0;
  *(undefined8 *)(param_1 + 0x5600) = 0;
  *(undefined8 *)(param_1 + 0x55f8) = 0;
  *(undefined4 *)(param_1 + 0x5608) = 1;
  *(undefined8 *)(param_1 + 0x5614) = 0;
  *(undefined8 *)(param_1 + 0x560c) = 0;
  *(undefined4 *)(param_1 + 0x561c) = 0;
  *(undefined8 *)(param_1 + 0x5624) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x5660) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x5650) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x5658) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x5664) = 0;
  *(undefined8 *)(param_1 + 0x566a) = 0;
  *(undefined1 *)(param_1 + 0x567b) = 0;
  *(undefined8 *)(param_1 + 0x5673) = 0;
  *(undefined4 *)(param_1 + 0x567c) = 1;
  *(undefined1 *)(param_1 + 0x5680) = 1;
  DAT_101e3cf00 = param_1;
  *(undefined8 *)(param_1 + 0x5634) = 0;
  *(undefined8 *)(param_1 + 0x562c) = 0;
  *(undefined8 *)(param_1 + 0x5644) = 0;
  *(undefined8 *)(param_1 + 0x563c) = 0;
  *(undefined4 *)(param_1 + 0x564c) = 0;
  *(undefined8 *)(param_1 + 0x5460) = 0;
  *(undefined8 *)(param_1 + 0x5458) = 0;
  *(undefined8 *)(param_1 + 0x5450) = 0;
  return param_1;
}




long thunk_FUN_10015d410(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)FUN_1004f0a20();
  *puVar2 = &PTR_thunk_FUN_10015ead0_10145c160;
  FUN_100169ba4(puVar2 + 3);
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_10145c190;
  FUN_1004f1580(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10145b860;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_100168aa8(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x1d8) = 0xffffffffffffffff;
  FUN_100169ba4(param_1 + 0x278);
  *(undefined ***)(param_1 + 0x278) = &PTR_FUN_10145c1c8;
  FUN_1004f1580(param_1 + 0x290);
  *(undefined ***)(param_1 + 0x290) = &PTR_FUN_10145b950;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  FUN_1004f1580(param_1 + 0x318);
  *(undefined ***)(param_1 + 0x318) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  FUN_1004f1580(param_1 + 0x378);
  *(undefined ***)(param_1 + 0x378) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  FUN_1004f1580(param_1 + 0x3d8);
  *(undefined ***)(param_1 + 0x3d8) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  FUN_1004f1580(param_1 + 0x438);
  *(undefined ***)(param_1 + 0x438) = &PTR_FUN_10145b890;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  FUN_1004f1580(param_1 + 0x478);
  *(undefined ***)(param_1 + 0x478) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  FUN_1004f1580(param_1 + 0x4b8);
  *(undefined ***)(param_1 + 0x4b8) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  FUN_1004f1580(param_1 + 0x4f8);
  *(undefined ***)(param_1 + 0x4f8) = &PTR_FUN_10145b8f0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  FUN_1004f1580(param_1 + 0x538);
  *(undefined ***)(param_1 + 0x538) = &PTR_FUN_10145b8f0;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  FUN_1004f1580(param_1 + 0x578);
  *(undefined ***)(param_1 + 0x578) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  FUN_1004f1580(param_1 + 0x5b8);
  *(undefined ***)(param_1 + 0x5b8) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x5e0) = 0;
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  *(undefined8 *)(param_1 + 0x5e8) = 0;
  FUN_1004f1580(param_1 + 0x5f8);
  *(undefined ***)(param_1 + 0x5f8) = &PTR_thunk_FUN_1004f15a8_10145b920;
  FUN_1004f1580(param_1 + 0x628);
  *(undefined ***)(param_1 + 0x628) = &PTR_FUN_10145c200;
  *(undefined8 *)(param_1 + 0x658) = 0;
  *(undefined8 *)(param_1 + 0x650) = 0;
  FUN_1004f1580(param_1 + 0x668);
  *(undefined ***)(param_1 + 0x668) = &PTR_thunk_FUN_100156e64_10145b980;
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  *(undefined8 *)(param_1 + 0x698) = 0;
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  *(undefined8 *)(param_1 + 0x6a8) = 0;
  *(undefined8 *)(param_1 + 0x6c0) = 0;
  *(undefined8 *)(param_1 + 0x6b8) = 0;
  lVar3 = 0x6c8;
  do {
    puVar2 = (undefined8 *)(param_1 + lVar3);
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0xac8);
  *(undefined8 *)(param_1 + 0xaf0) = 0;
  *(undefined8 *)(param_1 + 0xae8) = 0;
  *(undefined8 *)(param_1 + 0xae0) = 0;
  *(undefined8 *)(param_1 + 0xad8) = 0;
  *(undefined8 *)(param_1 + 0xad0) = 0;
  *(undefined8 *)(param_1 + 0xac8) = 0;
  *(undefined8 *)(param_1 + 0xb10) = 0;
  *(undefined8 *)(param_1 + 0xb08) = 0;
  *(undefined8 *)(param_1 + 0xb20) = 0;
  *(undefined8 *)(param_1 + 0xb18) = 0;
  *(undefined8 *)(param_1 + 0xb30) = 0;
  *(undefined8 *)(param_1 + 0xb28) = 0;
  *(undefined8 *)(param_1 + 0xb40) = 0;
  *(undefined8 *)(param_1 + 0xb38) = 0;
  *(undefined8 *)(param_1 + 0xb50) = 0;
  *(undefined8 *)(param_1 + 0xb48) = 0;
  *(undefined8 *)(param_1 + 0xb60) = 0;
  *(undefined8 *)(param_1 + 0xb58) = 0;
  FUN_1004f1580(param_1 + 0xb68);
  *(undefined ***)(param_1 + 0xb68) = &PTR_thunk_FUN_1004f15a8_10145c230;
  FUN_1004f1580(param_1 + 0xb98);
  *(undefined ***)(param_1 + 0xb98) = &PTR_FUN_10145b9b0;
  lVar3 = 0xbc8;
  do {
    puVar2 = (undefined8 *)(param_1 + lVar3);
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0xfc8);
  *(undefined8 *)(param_1 + 0xfd8) = 0;
  *(undefined8 *)(param_1 + 0xfd0) = 0;
  *(undefined8 *)(param_1 + 0xfc8) = 0;
  FUN_1004f1580(param_1 + 0xfe0);
  *(undefined ***)(param_1 + 0xfe0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x1008) = 0;
  *(undefined8 *)(param_1 + 0x1018) = 0;
  *(undefined8 *)(param_1 + 0x1010) = 0;
  *(undefined8 *)(param_1 + 0x1028) = 0;
  *(undefined8 *)(param_1 + 0x1038) = 0;
  *(undefined8 *)(param_1 + 0x1030) = 0;
  FUN_1004f1580(param_1 + 0x1040);
  *(undefined ***)(param_1 + 0x1040) = &PTR_thunk_FUN_100157078_10145ba10;
  *(undefined8 *)(param_1 + 0x1068) = 0;
  *(undefined8 *)(param_1 + 0x1078) = 0;
  *(undefined8 *)(param_1 + 0x1070) = 0;
  lVar3 = -0x400;
  do {
    lVar1 = param_1 + lVar3;
    *(undefined8 *)(lVar1 + 0x14a0) = 0;
    *(undefined8 *)(lVar1 + 0x1498) = 0;
    *(undefined8 *)(lVar1 + 0x14b0) = 0;
    *(undefined8 *)(lVar1 + 0x14a8) = 0;
    *(undefined8 *)(lVar1 + 0x1490) = 0;
    *(undefined8 *)(lVar1 + 0x1488) = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x14c8) = 0;
  *(undefined8 *)(param_1 + 0x14b0) = 0;
  *(undefined8 *)(param_1 + 0x14a8) = 0;
  *(undefined8 *)(param_1 + 0x14c0) = 0;
  *(undefined8 *)(param_1 + 0x14b8) = 0;
  *(undefined8 *)(param_1 + 0x1490) = 0;
  *(undefined8 *)(param_1 + 0x1488) = 0;
  *(undefined8 *)(param_1 + 0x14a0) = 0;
  *(undefined8 *)(param_1 + 0x1498) = 0;
  FUN_1004f1580(param_1 + 0x14d0);
  *(undefined ***)(param_1 + 0x14d0) = &PTR_thunk_FUN_100157234_10145ba40;
  *(undefined8 *)(param_1 + 0x1500) = 0;
  *(undefined8 *)(param_1 + 0x14f8) = 0;
  *(undefined8 *)(param_1 + 0x1510) = 0;
  *(undefined8 *)(param_1 + 0x1508) = 0;
  *(undefined8 *)(param_1 + 0x1520) = 0;
  *(undefined8 *)(param_1 + 0x1518) = 0;
  *(undefined8 *)(param_1 + 0x1530) = 0;
  *(undefined8 *)(param_1 + 0x1528) = 0;
  *(undefined8 *)(param_1 + 0x1540) = 0;
  *(undefined8 *)(param_1 + 0x1538) = 0;
  *(undefined8 *)(param_1 + 0x1550) = 0;
  *(undefined8 *)(param_1 + 0x1548) = 0;
  *(undefined8 *)(param_1 + 0x1560) = 0;
  *(undefined8 *)(param_1 + 0x1558) = 0;
  *(undefined8 *)(param_1 + 0x1570) = 0;
  *(undefined8 *)(param_1 + 0x1568) = 0;
  *(undefined8 *)(param_1 + 0x1580) = 0;
  *(undefined8 *)(param_1 + 0x1578) = 0;
  lVar3 = -0x400;
  do {
    lVar1 = param_1 + lVar3;
    *(undefined8 *)(lVar1 + 0x19b8) = 0;
    *(undefined8 *)(lVar1 + 0x19b0) = 0;
    *(undefined8 *)(lVar1 + 0x19a8) = 0;
    *(undefined8 *)(lVar1 + 0x19a0) = 0;
    *(undefined8 *)(lVar1 + 0x1998) = 0;
    *(undefined8 *)(lVar1 + 0x1990) = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  FUN_1004f1580(param_1 + 0x19a8);
  *(undefined ***)(param_1 + 0x19a8) = &PTR_FUN_10145c260;
  *(undefined8 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  lVar3 = -0x400;
  do {
    lVar1 = param_1 + lVar3;
    *(undefined8 *)(lVar1 + 0x1e08) = 0;
    *(undefined8 *)(lVar1 + 0x1e00) = 0;
    *(undefined8 *)(lVar1 + 0x1df8) = 0;
    *(undefined8 *)(lVar1 + 0x1df0) = 0;
    *(undefined8 *)(lVar1 + 0x1de8) = 0;
    *(undefined8 *)(lVar1 + 0x1de0) = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x1df0) = 0;
  *(undefined8 *)(param_1 + 0x1de8) = 0;
  *(undefined8 *)(param_1 + 0x1df8) = 0;
  FUN_1004f1580(param_1 + 0x1e00);
  *(undefined ***)(param_1 + 0x1e00) = &PTR_FUN_10145c290;
  *(undefined8 *)(param_1 + 0x1e28) = 0;
  *(undefined8 *)(param_1 + 0x1e38) = 0;
  *(undefined8 *)(param_1 + 0x1e30) = 0;
  *(undefined8 *)(param_1 + 0x1e48) = 0;
  *(undefined8 *)(param_1 + 0x1e58) = 0;
  *(undefined8 *)(param_1 + 0x1e50) = 0;
  FUN_1004f1580(param_1 + 0x1e60);
  *(undefined ***)(param_1 + 0x1e60) = &PTR_thunk_FUN_10015741c_10145ba70;
  *(undefined8 *)(param_1 + 0x1e90) = 0;
  *(undefined8 *)(param_1 + 0x1e88) = 0;
  *(undefined8 *)(param_1 + 0x1ea0) = 0;
  *(undefined8 *)(param_1 + 0x1e98) = 0;
  *(undefined8 *)(param_1 + 0x1ec0) = 0;
  *(undefined8 *)(param_1 + 0x1eb8) = 0;
  *(undefined8 *)(param_1 + 0x1ed0) = 0;
  *(undefined8 *)(param_1 + 0x1ec8) = 0;
  *(undefined8 *)(param_1 + 0x1ea8) = 0;
  lVar3 = -0x400;
  *(undefined8 *)(param_1 + 0x1ee0) = 0;
  *(undefined8 *)(param_1 + 0x1ed8) = 0;
  do {
    lVar1 = param_1 + lVar3;
    *(undefined8 *)(lVar1 + 0x2300) = 0;
    *(undefined8 *)(lVar1 + 0x22f8) = 0;
    *(undefined8 *)(lVar1 + 0x2310) = 0;
    *(undefined8 *)(lVar1 + 0x2308) = 0;
    *(undefined8 *)(lVar1 + 0x22f0) = 0;
    *(undefined8 *)(lVar1 + 0x22e8) = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x2300) = 0;
  *(undefined8 *)(param_1 + 0x22f8) = 0;
  *(undefined8 *)(param_1 + 0x2310) = 0;
  *(undefined8 *)(param_1 + 0x2308) = 0;
  *(undefined8 *)(param_1 + 0x22f0) = 0;
  *(undefined8 *)(param_1 + 0x22e8) = 0;
  FUN_1004f1580(param_1 + 0x2320);
  *(undefined ***)(param_1 + 0x2320) = &PTR_FUN_10145c260;
  *(undefined8 *)(param_1 + 0x2350) = 0;
  lVar3 = -0x400;
  *(undefined8 *)(param_1 + 0x2348) = 0;
  do {
    lVar1 = param_1 + lVar3;
    *(undefined8 *)(lVar1 + 0x2770) = 0;
    *(undefined8 *)(lVar1 + 0x2768) = 0;
    *(undefined8 *)(lVar1 + 0x2780) = 0;
    *(undefined8 *)(lVar1 + 0x2778) = 0;
    *(undefined8 *)(lVar1 + 0x2760) = 0;
    *(undefined8 *)(lVar1 + 0x2758) = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x2770) = 0;
  *(undefined8 *)(param_1 + 0x2768) = 0;
  *(undefined8 *)(param_1 + 0x2760) = 0;
  FUN_1004f1580(param_1 + 0x2778);
  *(undefined ***)(param_1 + 0x2778) = &PTR_FUN_10145b9e0;
  lVar3 = -0x400;
  do {
    lVar1 = param_1 + lVar3;
    *(undefined8 *)(lVar1 + 0x2bc0) = 0;
    *(undefined8 *)(lVar1 + 0x2bb8) = 0;
    *(undefined8 *)(lVar1 + 0x2bd0) = 0;
    *(undefined8 *)(lVar1 + 0x2bc8) = 0;
    *(undefined8 *)(lVar1 + 0x2bb0) = 0;
    *(undefined8 *)(lVar1 + 0x2ba8) = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x2bb0) = 0;
  *(undefined8 *)(param_1 + 0x2ba8) = 0;
  *(undefined8 *)(param_1 + 0x2bb8) = 0;
  FUN_1004f1580(param_1 + 0x2bc0);
  *(undefined ***)(param_1 + 0x2bc0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x2be8) = 0;
  *(undefined8 *)(param_1 + 0x2bf8) = 0;
  *(undefined8 *)(param_1 + 0x2bf0) = 0;
  *(undefined8 *)(param_1 + 0x2c08) = 0;
  *(undefined8 *)(param_1 + 0x2c18) = 0;
  *(undefined8 *)(param_1 + 0x2c10) = 0;
  FUN_1004f1580(param_1 + 0x2c20);
  *(undefined ***)(param_1 + 0x2c20) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x2c48) = 0;
  *(undefined8 *)(param_1 + 0x2c58) = 0;
  *(undefined8 *)(param_1 + 0x2c50) = 0;
  *(undefined8 *)(param_1 + 0x2c68) = 0;
  *(undefined8 *)(param_1 + 0x2c78) = 0;
  *(undefined8 *)(param_1 + 0x2c70) = 0;
  FUN_1004f1580(param_1 + 0x2c80);
  *(undefined ***)(param_1 + 0x2c80) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x2ca8) = 0;
  *(undefined8 *)(param_1 + 0x2cb8) = 0;
  *(undefined8 *)(param_1 + 0x2cb0) = 0;
  *(undefined8 *)(param_1 + 0x2cc8) = 0;
  *(undefined8 *)(param_1 + 0x2cd8) = 0;
  *(undefined8 *)(param_1 + 0x2cd0) = 0;
  FUN_1004f1580(param_1 + 0x2ce0);
  *(undefined ***)(param_1 + 0x2ce0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x2d08) = 0;
  *(undefined8 *)(param_1 + 0x2d18) = 0;
  *(undefined8 *)(param_1 + 0x2d10) = 0;
  *(undefined8 *)(param_1 + 0x2d28) = 0;
  *(undefined8 *)(param_1 + 0x2d38) = 0;
  *(undefined8 *)(param_1 + 0x2d30) = 0;
  FUN_1004f1580(param_1 + 0x2d40);
  *(undefined ***)(param_1 + 0x2d40) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x2d68) = 0;
  *(undefined8 *)(param_1 + 0x2d78) = 0;
  *(undefined8 *)(param_1 + 0x2d70) = 0;
  *(undefined8 *)(param_1 + 0x2d88) = 0;
  *(undefined8 *)(param_1 + 0x2d98) = 0;
  *(undefined8 *)(param_1 + 0x2d90) = 0;
  FUN_1004f1580(param_1 + 0x2da0);
  *(undefined ***)(param_1 + 0x2da0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x2dc8) = 0;
  *(undefined8 *)(param_1 + 0x2dd8) = 0;
  *(undefined8 *)(param_1 + 0x2dd0) = 0;
  *(undefined8 *)(param_1 + 0x2de8) = 0;
  *(undefined8 *)(param_1 + 0x2df8) = 0;
  *(undefined8 *)(param_1 + 0x2df0) = 0;
  FUN_1004f1580(param_1 + 0x2e00);
  *(undefined ***)(param_1 + 0x2e00) = &PTR_thunk_FUN_100156e64_10145b980;
  *(undefined8 *)(param_1 + 0x2e38) = 0;
  *(undefined8 *)(param_1 + 0x2e30) = 0;
  *(undefined8 *)(param_1 + 0x2e48) = 0;
  *(undefined8 *)(param_1 + 0x2e40) = 0;
  lVar3 = -0x400;
  *(undefined8 *)(param_1 + 0x2e58) = 0;
  *(undefined8 *)(param_1 + 0x2e50) = 0;
  do {
    lVar1 = param_1 + lVar3;
    *(undefined8 *)(lVar1 + 0x3288) = 0;
    *(undefined8 *)(lVar1 + 0x3280) = 0;
    *(undefined8 *)(lVar1 + 0x3278) = 0;
    *(undefined8 *)(lVar1 + 0x3270) = 0;
    *(undefined8 *)(lVar1 + 0x3268) = 0;
    *(undefined8 *)(lVar1 + 0x3260) = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0);
  *(undefined8 *)(param_1 + 0x3288) = 0;
  *(undefined8 *)(param_1 + 0x3280) = 0;
  *(undefined8 *)(param_1 + 0x3278) = 0;
  *(undefined8 *)(param_1 + 0x3270) = 0;
  *(undefined8 *)(param_1 + 0x3268) = 0;
  *(undefined8 *)(param_1 + 0x3260) = 0;
  *(undefined8 *)(param_1 + 0x32a8) = 0;
  *(undefined8 *)(param_1 + 0x32a0) = 0;
  *(undefined8 *)(param_1 + 0x32b8) = 0;
  *(undefined8 *)(param_1 + 0x32b0) = 0;
  *(undefined8 *)(param_1 + 13000) = 0;
  *(undefined8 *)(param_1 + 0x32c0) = 0;
  *(undefined8 *)(param_1 + 0x32d8) = 0;
  *(undefined8 *)(param_1 + 0x32d0) = 0;
  *(undefined8 *)(param_1 + 0x32e8) = 0;
  *(undefined8 *)(param_1 + 0x32e0) = 0;
  *(undefined8 *)(param_1 + 0x32f8) = 0;
  *(undefined8 *)(param_1 + 0x32f0) = 0;
  FUN_1004f1580(param_1 + 0x3300);
  *(undefined ***)(param_1 + 0x3300) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x3328) = 0;
  *(undefined8 *)(param_1 + 0x3338) = 0;
  *(undefined8 *)(param_1 + 0x3330) = 0;
  *(undefined8 *)(param_1 + 0x3348) = 0;
  *(undefined8 *)(param_1 + 0x3358) = 0;
  *(undefined8 *)(param_1 + 0x3350) = 0;
  FUN_1004f1580(param_1 + 0x3360);
  *(undefined ***)(param_1 + 0x3360) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x3388) = 0;
  *(undefined8 *)(param_1 + 0x3398) = 0;
  *(undefined8 *)(param_1 + 0x3390) = 0;
  *(undefined8 *)(param_1 + 0x33a8) = 0;
  *(undefined8 *)(param_1 + 0x33b8) = 0;
  *(undefined8 *)(param_1 + 0x33b0) = 0;
  FUN_1004f1580(param_1 + 0x33c0);
  *(undefined ***)(param_1 + 0x33c0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x33e8) = 0;
  *(undefined8 *)(param_1 + 0x33f8) = 0;
  *(undefined8 *)(param_1 + 0x33f0) = 0;
  *(undefined8 *)(param_1 + 0x3408) = 0;
  *(undefined8 *)(param_1 + 0x3418) = 0;
  *(undefined8 *)(param_1 + 0x3410) = 0;
  FUN_1004f1580(param_1 + 0x3420);
  *(undefined ***)(param_1 + 0x3420) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x3448) = 0;
  *(undefined8 *)(param_1 + 0x3458) = 0;
  *(undefined8 *)(param_1 + 0x3450) = 0;
  *(undefined8 *)(param_1 + 0x3468) = 0;
  *(undefined8 *)(param_1 + 0x3478) = 0;
  *(undefined8 *)(param_1 + 0x3470) = 0;
  FUN_1004f1580(param_1 + 0x3480);
  *(undefined ***)(param_1 + 0x3480) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x34a8) = 0;
  *(undefined8 *)(param_1 + 0x34b8) = 0;
  *(undefined8 *)(param_1 + 0x34b0) = 0;
  *(undefined8 *)(param_1 + 0x34c8) = 0;
  *(undefined8 *)(param_1 + 0x34d8) = 0;
  *(undefined8 *)(param_1 + 0x34d0) = 0;
  FUN_1004f1580(param_1 + 0x34e0);
  *(undefined ***)(param_1 + 0x34e0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x3508) = 0;
  *(undefined8 *)(param_1 + 0x3518) = 0;
  *(undefined8 *)(param_1 + 0x3510) = 0;
  *(undefined8 *)(param_1 + 0x3528) = 0;
  *(undefined8 *)(param_1 + 0x3538) = 0;
  *(undefined8 *)(param_1 + 0x3530) = 0;
  FUN_1004f1580(param_1 + 0x3540);
  *(undefined ***)(param_1 + 0x3540) = &PTR_FUN_10145baa0;
  *(undefined8 *)(param_1 + 0x3570) = 0;
  *(undefined8 *)(param_1 + 0x3568) = 0;
  FUN_1004f1580(param_1 + 0x3580);
  *(undefined ***)(param_1 + 0x3580) = &PTR_FUN_10145bad0;
  *(undefined8 *)(param_1 + 0x35b8) = 0;
  *(undefined8 *)(param_1 + 0x35b0) = 0;
  *(undefined8 *)(param_1 + 0x35c8) = 0;
  *(undefined8 *)(param_1 + 0x35c0) = 0;
  *(undefined8 *)(param_1 + 0x35d8) = 0;
  *(undefined8 *)(param_1 + 0x35d0) = 0;
  *(undefined8 *)(param_1 + 0x35e8) = 0;
  *(undefined8 *)(param_1 + 0x35e0) = 0;
  *(undefined8 *)(param_1 + 0x35f0) = 0;
  FUN_1004f1580(param_1 + 0x35f8);
  *(undefined ***)(param_1 + 0x35f8) = &PTR_FUN_10145a030;
  *(undefined8 *)(param_1 + 0x3640) = 0;
  *(undefined8 *)(param_1 + 0x3638) = 0;
  *(undefined8 *)(param_1 + 0x3630) = 0;
  FUN_1004f1580(param_1 + 0x3650);
  *(undefined ***)(param_1 + 0x3650) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x3678) = 0;
  *(undefined8 *)(param_1 + 0x3688) = 0;
  *(undefined8 *)(param_1 + 0x3680) = 0;
  *(undefined8 *)(param_1 + 0x3698) = 0;
  *(undefined8 *)(param_1 + 0x36a8) = 0;
  *(undefined8 *)(param_1 + 0x36a0) = 0;
  FUN_1004f1580(param_1 + 14000);
  *(undefined ***)(param_1 + 14000) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x36d8) = 0;
  *(undefined8 *)(param_1 + 0x36e8) = 0;
  *(undefined8 *)(param_1 + 0x36e0) = 0;
  *(undefined8 *)(param_1 + 0x36f8) = 0;
  *(undefined8 *)(param_1 + 0x3708) = 0;
  *(undefined8 *)(param_1 + 0x3700) = 0;
  FUN_1004f1580(param_1 + 0x3710);
  *(undefined ***)(param_1 + 0x3710) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x3738) = 0;
  *(undefined8 *)(param_1 + 0x3748) = 0;
  *(undefined8 *)(param_1 + 0x3740) = 0;
  *(undefined8 *)(param_1 + 0x3758) = 0;
  *(undefined8 *)(param_1 + 0x3768) = 0;
  *(undefined8 *)(param_1 + 0x3760) = 0;
  FUN_1004f1580(param_1 + 0x3770);
  *(undefined ***)(param_1 + 0x3770) = &PTR_FUN_10145c2c0;
  *(undefined8 *)(param_1 + 0x3798) = 0;
  *(undefined8 *)(param_1 + 0x37a8) = 0;
  *(undefined8 *)(param_1 + 0x37a0) = 0;
  FUN_1004f1580(param_1 + 0x37b8);
  *(undefined ***)(param_1 + 0x37b8) = &PTR_FUN_10145c2f0;
  *(undefined8 *)(param_1 + 0x37f0) = 0;
  *(undefined8 *)(param_1 + 0x37e8) = 0;
  *(undefined8 *)(param_1 + 0x37e0) = 0;
  FUN_1004f1580(param_1 + 0x3800);
  *(undefined ***)(param_1 + 0x3800) = &PTR_FUN_10145c320;
  *(undefined8 *)(param_1 + 0x3838) = 0;
  *(undefined8 *)(param_1 + 0x3830) = 0;
  *(long *)(param_1 + 0x3828) = param_1 + 0x3830;
  FUN_1004f1580(param_1 + 0x3848);
  *(undefined ***)(param_1 + 0x3848) = &PTR_FUN_10145c350;
  *(undefined8 *)(param_1 + 0x3880) = 0;
  *(undefined8 *)(param_1 + 0x3878) = 0;
  *(undefined8 *)(param_1 + 0x3870) = 0;
  FUN_1004f1580(param_1 + 0x3890);
  *(undefined8 *)(param_1 + 0x38c0) = 0;
  *(undefined8 *)(param_1 + 0x38b8) = 0;
  *(undefined8 *)(param_1 + 0x38d0) = 0;
  *(undefined8 *)(param_1 + 0x38c8) = 0;
  *(undefined ***)(param_1 + 0x3890) = &PTR_FUN_10145bb90;
  *(undefined8 *)(param_1 + 0x38e0) = 0;
  *(undefined8 *)(param_1 + 0x38d8) = 0;
  FUN_1004f1580(param_1 + 0x38f0);
  *(undefined ***)(param_1 + 0x38f0) = &PTR_thunk_FUN_1004f15a8_10145bbc0;
  FUN_1004f1580(param_1 + 0x3928);
  *(undefined ***)(param_1 + 0x3928) = &PTR_FUN_10145be00;
  *(undefined8 *)(param_1 + 0x3958) = 0;
  *(undefined8 *)(param_1 + 0x3950) = 0;
  *(undefined8 *)(param_1 + 0x3968) = 0;
  *(undefined8 *)(param_1 + 0x3960) = 0;
  *(undefined8 *)(param_1 + 0x3970) = 0;
  FUN_1004f1580(param_1 + 0x3980);
  *(undefined ***)(param_1 + 0x3980) = &PTR_FUN_10145be30;
  *(undefined8 *)(param_1 + 0x39b0) = 0;
  *(undefined8 *)(param_1 + 0x39a8) = 0;
  FUN_1004f1580(param_1 + 0x39c0);
  *(undefined ***)(param_1 + 0x39c0) = &PTR_FUN_10145c380;
  *(undefined8 *)(param_1 + 0x39e8) = 0;
  *(undefined8 *)(param_1 + 0x39f8) = 0;
  *(undefined8 *)(param_1 + 0x39f0) = 0;
  FUN_1004f1580(param_1 + 0x3a08);
  *(undefined ***)(param_1 + 0x3a08) = &PTR_FUN_10145c3b0;
  *(undefined8 *)(param_1 + 0x3a40) = 0;
  *(undefined8 *)(param_1 + 0x3a38) = 0;
  *(undefined8 *)(param_1 + 0x3a30) = 0;
  FUN_1004f1580(param_1 + 0x3a50);
  *(undefined ***)(param_1 + 0x3a50) = &PTR_FUN_10145bb60;
  *(undefined8 *)(param_1 + 0x3a88) = 0;
  *(undefined8 *)(param_1 + 0x3a80) = 0;
  *(undefined8 *)(param_1 + 15000) = 0;
  *(undefined8 *)(param_1 + 0x3a90) = 0;
  *(undefined8 *)(param_1 + 0x3aa0) = 0;
  FUN_1004f1580(param_1 + 0x3aa8);
  *(undefined ***)(param_1 + 0x3aa8) = &PTR_FUN_10145be60;
  *(undefined8 *)(param_1 + 0x3ae0) = 0;
  *(undefined8 *)(param_1 + 0x3ad8) = 0;
  *(undefined8 *)(param_1 + 0x3ad0) = 0;
  *(undefined8 *)(param_1 + 0x3b00) = 0;
  *(undefined8 *)(param_1 + 0x3af8) = 0;
  *(undefined8 *)(param_1 + 0x3af0) = 0;
  FUN_1004f1580(param_1 + 0x3b10);
  *(undefined ***)(param_1 + 0x3b10) = &PTR_FUN_10145be90;
  *(undefined8 *)(param_1 + 0x3b38) = 0;
  *(undefined8 *)(param_1 + 0x3b48) = 0;
  *(undefined8 *)(param_1 + 0x3b40) = 0;
  *(undefined8 *)(param_1 + 0x3b58) = 0;
  *(undefined8 *)(param_1 + 0x3b68) = 0;
  *(undefined8 *)(param_1 + 0x3b60) = 0;
  FUN_1004f1580(param_1 + 0x3b78);
  *(undefined ***)(param_1 + 0x3b78) = &PTR_FUN_10145c3e0;
  *(undefined8 *)(param_1 + 0x3ba8) = 0;
  *(undefined8 *)(param_1 + 0x3ba0) = 0;
  FUN_1004f1580(param_1 + 0x3bb8);
  *(undefined ***)(param_1 + 0x3bb8) = &PTR_FUN_10145bbf0;
  *(undefined8 *)(param_1 + 0x3bf0) = 0;
  *(undefined8 *)(param_1 + 0x3be8) = 0;
  *(undefined8 *)(param_1 + 0x3be0) = 0;
  FUN_1004f1580(param_1 + 0x3c00);
  *(undefined ***)(param_1 + 0x3c00) = &PTR_FUN_10145bfe0;
  *(undefined8 *)(param_1 + 0x3c30) = 0;
  *(undefined8 *)(param_1 + 0x3c28) = 0;
  FUN_1004f1580(param_1 + 0x3c38);
  *(undefined ***)(param_1 + 0x3c38) = &PTR_FUN_10145c010;
  *(undefined8 *)(param_1 + 0x3c68) = 0;
  *(undefined8 *)(param_1 + 0x3c60) = 0;
  *(undefined8 *)(param_1 + 0x3c78) = 0;
  *(undefined8 *)(param_1 + 0x3c70) = 0;
  *(undefined8 *)(param_1 + 0x3c88) = 0;
  *(undefined8 *)(param_1 + 0x3c80) = 0;
  *(undefined8 *)(param_1 + 0x3c98) = 0;
  *(undefined8 *)(param_1 + 0x3c90) = 0;
  *(undefined8 *)(param_1 + 0x3ca8) = 0;
  *(undefined8 *)(param_1 + 0x3ca0) = 0;
  *(undefined8 *)(param_1 + 0x3cb0) = 0;
  FUN_1004f1580(param_1 + 0x3cb8);
  *(undefined ***)(param_1 + 0x3cb8) = &PTR_FUN_10145c040;
  *(undefined8 *)(param_1 + 0x3ce8) = 0;
  *(undefined8 *)(param_1 + 0x3ce0) = 0;
  *(undefined8 *)(param_1 + 0x3cf8) = 0;
  *(undefined8 *)(param_1 + 0x3cf0) = 0;
  *(undefined8 *)(param_1 + 0x3d08) = 0;
  *(undefined8 *)(param_1 + 0x3d00) = 0;
  *(undefined8 *)(param_1 + 0x3d18) = 0;
  *(undefined8 *)(param_1 + 0x3d10) = 0;
  *(undefined8 *)(param_1 + 0x3d28) = 0;
  *(undefined8 *)(param_1 + 0x3d20) = 0;
  *(undefined8 *)(param_1 + 0x3d38) = 0;
  *(undefined8 *)(param_1 + 0x3d30) = 0;
  *(undefined8 *)(param_1 + 0x3d48) = 0;
  *(undefined8 *)(param_1 + 0x3d40) = 0;
  *(undefined8 *)(param_1 + 0x3d58) = 0;
  *(undefined8 *)(param_1 + 0x3d50) = 0;
  FUN_1004f1580(param_1 + 0x3d60);
  *(undefined ***)(param_1 + 0x3d60) = &PTR_FUN_10145c070;
  *(undefined8 *)(param_1 + 0x3da0) = 0;
  *(undefined8 *)(param_1 + 0x3d98) = 0;
  *(undefined8 *)(param_1 + 0x3d90) = 0;
  FUN_1004f1580(param_1 + 0x3da8);
  *(undefined ***)(param_1 + 0x3da8) = &PTR_FUN_10145c0a0;
  *(undefined8 *)(param_1 + 0x3dd8) = 0;
  *(undefined8 *)(param_1 + 0x3dd0) = 0;
  FUN_1004f1580(param_1 + 0x3de0);
  *(undefined ***)(param_1 + 0x3de0) = &PTR_FUN_10145c0d0;
  *(undefined8 *)(param_1 + 0x3e20) = 0;
  *(undefined8 *)(param_1 + 0x3e18) = 0;
  *(undefined8 *)(param_1 + 0x3e10) = 0;
  FUN_1004f1580(param_1 + 0x3e28);
  *(undefined ***)(param_1 + 0x3e28) = &PTR_FUN_10145c100;
  *(undefined8 *)(param_1 + 0x3e58) = 0;
  *(undefined8 *)(param_1 + 0x3e68) = 0;
  *(undefined8 *)(param_1 + 0x3e60) = 0;
  FUN_1004f1580(param_1 + 0x3e70);
  *(undefined ***)(param_1 + 0x3e70) = &PTR_FUN_10145c130;
  *(undefined8 *)(param_1 + 0x3ea0) = 0;
  *(undefined8 *)(param_1 + 0x3e98) = 0;
  FUN_1004f1580(param_1 + 0x3ea8);
  *(undefined ***)(param_1 + 0x3ea8) = &PTR_FUN_10145bc20;
  *(undefined8 *)(param_1 + 0x3ee0) = 0;
  *(undefined8 *)(param_1 + 0x3ed8) = 0;
  *(undefined8 *)(param_1 + 0x3ed0) = 0;
  FUN_1004f1580(param_1 + 0x3ee8);
  *(undefined ***)(param_1 + 0x3ee8) = &PTR_FUN_10145bc50;
  *(undefined8 *)(param_1 + 0x3f20) = 0;
  *(undefined8 *)(param_1 + 0x3f18) = 0;
  *(undefined8 *)(param_1 + 0x3f10) = 0;
  FUN_1004f1580(param_1 + 0x3f28);
  *(undefined ***)(param_1 + 0x3f28) = &PTR_FUN_10145bc80;
  *(undefined8 *)(param_1 + 0x3f60) = 0;
  *(undefined8 *)(param_1 + 0x3f58) = 0;
  *(undefined8 *)(param_1 + 0x3f50) = 0;
  FUN_1004f1580(param_1 + 0x3f68);
  *(undefined ***)(param_1 + 0x3f68) = &PTR_FUN_10145bcb0;
  *(undefined8 *)(param_1 + 0x3fa0) = 0;
  *(undefined8 *)(param_1 + 0x3f98) = 0;
  *(undefined8 *)(param_1 + 0x3f90) = 0;
  FUN_1004f1580(param_1 + 0x3fa8);
  *(undefined ***)(param_1 + 0x3fa8) = &PTR_FUN_10145bce0;
  *(undefined8 *)(param_1 + 0x3fe0) = 0;
  *(undefined8 *)(param_1 + 0x3fd8) = 0;
  *(undefined8 *)(param_1 + 0x3fd0) = 0;
  FUN_1004f1580(param_1 + 0x3fe8);
  *(undefined ***)(param_1 + 0x3fe8) = &PTR_thunk_FUN_1004f15a8_10145bd10;
  FUN_1004f1580(param_1 + 0x4010);
  *(undefined8 *)(param_1 + 0x4040) = 0;
  *(undefined8 *)(param_1 + 0x4038) = 0;
  *(undefined8 *)(param_1 + 0x4050) = 0;
  *(undefined8 *)(param_1 + 0x4048) = 0;
  *(undefined ***)(param_1 + 0x4010) = &PTR_FUN_10145bd40;
  *(undefined8 *)(param_1 + 0x4060) = 0;
  *(undefined8 *)(param_1 + 0x4058) = 0;
  FUN_1004f1580(param_1 + 0x4070);
  *(undefined ***)(param_1 + 0x4070) = &PTR_FUN_10145bd70;
  *(undefined8 *)(param_1 + 0x40a0) = 0;
  *(undefined8 *)(param_1 + 0x4098) = 0;
  FUN_1004f1580(param_1 + 0x40b0);
  *(undefined ***)(param_1 + 0x40b0) = &PTR_FUN_10145bd70;
  *(undefined8 *)(param_1 + 0x40e0) = 0;
  *(undefined8 *)(param_1 + 0x40d8) = 0;
  FUN_1004f1580(param_1 + 0x40f0);
  *(undefined ***)(param_1 + 0x40f0) = &PTR_FUN_10145bd70;
  *(undefined8 *)(param_1 + 0x4120) = 0;
  *(undefined8 *)(param_1 + 0x4118) = 0;
  FUN_1004f1580(param_1 + 0x4130);
  *(undefined ***)(param_1 + 0x4130) = &PTR_FUN_10145bda0;
  *(undefined8 *)(param_1 + 0x4160) = 0;
  *(undefined8 *)(param_1 + 0x4158) = 0;
  *(undefined8 *)(param_1 + 0x4170) = 0;
  *(undefined8 *)(param_1 + 0x4168) = 0;
  *(undefined8 *)(param_1 + 0x4180) = 0;
  *(undefined8 *)(param_1 + 0x4178) = 0;
  *(undefined8 *)(param_1 + 0x4188) = 0;
  FUN_1004f1580(param_1 + 0x41a0);
  *(undefined ***)(param_1 + 0x41a0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x41c8) = 0;
  *(undefined8 *)(param_1 + 0x41d8) = 0;
  *(undefined8 *)(param_1 + 0x41d0) = 0;
  *(undefined8 *)(param_1 + 0x41e8) = 0;
  *(undefined8 *)(param_1 + 0x41f8) = 0;
  *(undefined8 *)(param_1 + 0x41f0) = 0;
  FUN_1004f1580(param_1 + 0x4200);
  *(undefined ***)(param_1 + 0x4200) = &PTR_thunk_FUN_1004f15a8_10145bdd0;
  FUN_1004f1580(param_1 + 0x4230);
  *(undefined ***)(param_1 + 0x4230) = &PTR_thunk_FUN_10015a304_10145bec0;
  *(undefined8 *)(param_1 + 0x42d8) = 0;
  *(undefined8 *)(param_1 + 0x42d0) = 0;
  *(undefined8 *)(param_1 + 0x42e8) = 0;
  *(undefined8 *)(param_1 + 0x42e0) = 0;
  *(undefined8 *)(param_1 + 0x42f8) = 0;
  *(undefined8 *)(param_1 + 0x42f0) = 0;
  *(undefined8 *)(param_1 + 0x4308) = 0;
  *(undefined8 *)(param_1 + 0x4300) = 0;
  *(undefined8 *)(param_1 + 0x4318) = 0;
  *(undefined8 *)(param_1 + 0x4310) = 0;
  *(undefined8 *)(param_1 + 0x4328) = 0;
  *(undefined8 *)(param_1 + 0x4320) = 0;
  *(undefined8 *)(param_1 + 0x4338) = 0;
  *(undefined8 *)(param_1 + 0x4330) = 0;
  *(undefined8 *)(param_1 + 0x4348) = 0;
  *(undefined8 *)(param_1 + 0x4340) = 0;
  *(undefined8 *)(param_1 + 0x4358) = 0;
  *(undefined8 *)(param_1 + 0x4350) = 0;
  *(undefined8 *)(param_1 + 0x4368) = 0;
  *(undefined8 *)(param_1 + 0x4360) = 0;
  *(undefined8 *)(param_1 + 0x4378) = 0;
  *(undefined8 *)(param_1 + 0x4370) = 0;
  *(undefined8 *)(param_1 + 0x4388) = 0;
  *(undefined8 *)(param_1 + 0x4380) = 0;
  *(undefined8 *)(param_1 + 0x4398) = 0;
  *(undefined8 *)(param_1 + 0x4390) = 0;
  *(undefined8 *)(param_1 + 0x43a0) = 0;
  *(undefined8 *)(param_1 + 0x4270) = 0;
  *(undefined8 *)(param_1 + 17000) = 0;
  *(undefined8 *)(param_1 + 0x4280) = 0;
  *(undefined8 *)(param_1 + 0x4278) = 0;
  *(undefined8 *)(param_1 + 0x4290) = 0;
  *(undefined8 *)(param_1 + 0x4288) = 0;
  *(undefined8 *)(param_1 + 0x42a0) = 0;
  *(undefined8 *)(param_1 + 0x4298) = 0;
  *(undefined8 *)(param_1 + 0x42b0) = 0;
  *(undefined8 *)(param_1 + 0x42a8) = 0;
  *(undefined8 *)(param_1 + 0x4260) = 0;
  *(undefined8 *)(param_1 + 0x4258) = 0;
  FUN_10015a14c(param_1 + 0x42c8);
  FUN_100159fc8((undefined8 *)(param_1 + 0x4258));
  *(undefined8 *)(param_1 + 0x4460) = 0;
  *(undefined8 *)(param_1 + 0x4458) = 0;
  *(undefined8 *)(param_1 + 0x4450) = 0;
  *(undefined8 *)(param_1 + 0x43b8) = 0;
  *(undefined8 *)(param_1 + 0x43b0) = 0;
  *(undefined8 *)(param_1 + 0x43c8) = 0;
  *(undefined8 *)(param_1 + 0x43c0) = 0;
  *(undefined8 *)(param_1 + 0x43d8) = 0;
  *(undefined8 *)(param_1 + 0x43d0) = 0;
  *(undefined8 *)(param_1 + 0x4410) = 0;
  *(undefined8 *)(param_1 + 0x4408) = 0;
  *(undefined8 *)(param_1 + 0x4420) = 0;
  *(undefined8 *)(param_1 + 0x4418) = 0;
  *(undefined8 *)(param_1 + 0x4430) = 0;
  *(undefined8 *)(param_1 + 0x4428) = 0;
  *(undefined8 *)(param_1 + 0x4440) = 0;
  *(undefined8 *)(param_1 + 0x4438) = 0;
  FUN_1004f1580(param_1 + 0x4470);
  *(undefined ***)(param_1 + 0x4470) = &PTR_FUN_10145c410;
  *(undefined8 *)(param_1 + 0x44a0) = 0;
  *(undefined8 *)(param_1 + 0x4498) = 0;
  *(undefined8 *)(param_1 + 0x44c0) = 0;
  *(undefined8 *)(param_1 + 0x44b8) = 0;
  *(undefined8 *)(param_1 + 0x44b0) = 0;
  FUN_1004f1580(param_1 + 0x44d0);
  *(undefined ***)(param_1 + 0x44d0) = &PTR_FUN_10145bef0;
  *(undefined8 *)(param_1 + 0x4508) = 0;
  *(undefined8 *)(param_1 + 0x4500) = 0;
  *(undefined8 *)(param_1 + 0x4518) = 0;
  *(undefined8 *)(param_1 + 0x4510) = 0;
  *(undefined8 *)(param_1 + 0x4528) = 0;
  *(undefined8 *)(param_1 + 0x4520) = 0;
  FUN_1004f1580(param_1 + 0x4530);
  *(undefined ***)(param_1 + 0x4530) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4558) = 0;
  *(undefined8 *)(param_1 + 0x4568) = 0;
  *(undefined8 *)(param_1 + 0x4560) = 0;
  *(undefined8 *)(param_1 + 0x4578) = 0;
  *(undefined8 *)(param_1 + 0x4588) = 0;
  *(undefined8 *)(param_1 + 0x4580) = 0;
  FUN_1004f1580(param_1 + 0x4590);
  *(undefined ***)(param_1 + 0x4590) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x45b8) = 0;
  *(undefined8 *)(param_1 + 0x45c8) = 0;
  *(undefined8 *)(param_1 + 0x45c0) = 0;
  *(undefined8 *)(param_1 + 0x45d8) = 0;
  *(undefined8 *)(param_1 + 0x45e8) = 0;
  *(undefined8 *)(param_1 + 0x45e0) = 0;
  FUN_1004f1580(param_1 + 0x45f0);
  *(undefined ***)(param_1 + 0x45f0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4618) = 0;
  *(undefined8 *)(param_1 + 0x4628) = 0;
  *(undefined8 *)(param_1 + 0x4620) = 0;
  *(undefined8 *)(param_1 + 0x4638) = 0;
  *(undefined8 *)(param_1 + 0x4648) = 0;
  *(undefined8 *)(param_1 + 0x4640) = 0;
  FUN_1004f1580(param_1 + 18000);
  *(undefined ***)(param_1 + 18000) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4678) = 0;
  *(undefined8 *)(param_1 + 0x4688) = 0;
  *(undefined8 *)(param_1 + 0x4680) = 0;
  *(undefined8 *)(param_1 + 0x4698) = 0;
  *(undefined8 *)(param_1 + 0x46a8) = 0;
  *(undefined8 *)(param_1 + 0x46a0) = 0;
  FUN_1004f1580(param_1 + 0x46b0);
  *(undefined ***)(param_1 + 0x46b0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x46d8) = 0;
  *(undefined8 *)(param_1 + 0x46e8) = 0;
  *(undefined8 *)(param_1 + 0x46e0) = 0;
  *(undefined8 *)(param_1 + 0x46f8) = 0;
  *(undefined8 *)(param_1 + 0x4708) = 0;
  *(undefined8 *)(param_1 + 0x4700) = 0;
  FUN_1004f1580(param_1 + 0x4710);
  *(undefined ***)(param_1 + 0x4710) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4738) = 0;
  *(undefined8 *)(param_1 + 0x4748) = 0;
  *(undefined8 *)(param_1 + 0x4740) = 0;
  *(undefined8 *)(param_1 + 0x4758) = 0;
  *(undefined8 *)(param_1 + 0x4768) = 0;
  *(undefined8 *)(param_1 + 0x4760) = 0;
  FUN_1004f1580(param_1 + 0x4770);
  *(undefined ***)(param_1 + 0x4770) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4798) = 0;
  *(undefined8 *)(param_1 + 0x47a8) = 0;
  *(undefined8 *)(param_1 + 0x47a0) = 0;
  *(undefined8 *)(param_1 + 0x47b8) = 0;
  *(undefined8 *)(param_1 + 0x47c8) = 0;
  *(undefined8 *)(param_1 + 0x47c0) = 0;
  FUN_1004f1580(param_1 + 0x47d0);
  *(undefined ***)(param_1 + 0x47d0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x47f8) = 0;
  *(undefined8 *)(param_1 + 0x4808) = 0;
  *(undefined8 *)(param_1 + 0x4800) = 0;
  *(undefined8 *)(param_1 + 0x4818) = 0;
  *(undefined8 *)(param_1 + 0x4828) = 0;
  *(undefined8 *)(param_1 + 0x4820) = 0;
  FUN_1004f1580(param_1 + 0x4830);
  *(undefined ***)(param_1 + 0x4830) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4858) = 0;
  *(undefined8 *)(param_1 + 0x4868) = 0;
  *(undefined8 *)(param_1 + 0x4860) = 0;
  *(undefined8 *)(param_1 + 0x4878) = 0;
  *(undefined8 *)(param_1 + 0x4888) = 0;
  *(undefined8 *)(param_1 + 0x4880) = 0;
  FUN_1004f1580(param_1 + 0x4890);
  *(undefined ***)(param_1 + 0x4890) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x48b8) = 0;
  *(undefined8 *)(param_1 + 0x48c8) = 0;
  *(undefined8 *)(param_1 + 0x48c0) = 0;
  *(undefined8 *)(param_1 + 0x48d8) = 0;
  *(undefined8 *)(param_1 + 0x48e8) = 0;
  *(undefined8 *)(param_1 + 0x48e0) = 0;
  FUN_1004f1580(param_1 + 0x48f0);
  *(undefined ***)(param_1 + 0x48f0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4918) = 0;
  *(undefined8 *)(param_1 + 0x4928) = 0;
  *(undefined8 *)(param_1 + 0x4920) = 0;
  *(undefined8 *)(param_1 + 0x4938) = 0;
  *(undefined8 *)(param_1 + 0x4948) = 0;
  *(undefined8 *)(param_1 + 0x4940) = 0;
  FUN_1004f1580(param_1 + 0x4950);
  *(undefined ***)(param_1 + 0x4950) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4978) = 0;
  *(undefined8 *)(param_1 + 0x4988) = 0;
  *(undefined8 *)(param_1 + 0x4980) = 0;
  *(undefined8 *)(param_1 + 0x4998) = 0;
  *(undefined8 *)(param_1 + 0x49a8) = 0;
  *(undefined8 *)(param_1 + 0x49a0) = 0;
  FUN_1004f1580(param_1 + 0x49b0);
  *(undefined ***)(param_1 + 0x49b0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x49d8) = 0;
  *(undefined8 *)(param_1 + 0x49e8) = 0;
  *(undefined8 *)(param_1 + 0x49e0) = 0;
  *(undefined8 *)(param_1 + 0x49f8) = 0;
  *(undefined8 *)(param_1 + 0x4a08) = 0;
  *(undefined8 *)(param_1 + 0x4a00) = 0;
  FUN_1004f1580(param_1 + 0x4a10);
  *(undefined ***)(param_1 + 0x4a10) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 19000) = 0;
  *(undefined8 *)(param_1 + 0x4a48) = 0;
  *(undefined8 *)(param_1 + 0x4a40) = 0;
  FUN_1004f1580(param_1 + 0x4a50);
  *(undefined ***)(param_1 + 0x4a50) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x4a78) = 0;
  *(undefined8 *)(param_1 + 0x4a88) = 0;
  *(undefined8 *)(param_1 + 0x4a80) = 0;
  FUN_1004f1580(param_1 + 0x4a90);
  *(undefined ***)(param_1 + 0x4a90) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x4ab8) = 0;
  *(undefined8 *)(param_1 + 0x4ac8) = 0;
  *(undefined8 *)(param_1 + 0x4ac0) = 0;
  FUN_1004f1580(param_1 + 0x4ad0);
  *(undefined ***)(param_1 + 0x4ad0) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x4af8) = 0;
  *(undefined8 *)(param_1 + 0x4b08) = 0;
  *(undefined8 *)(param_1 + 0x4b00) = 0;
  FUN_1004f1580(param_1 + 0x4b10);
  *(undefined ***)(param_1 + 0x4b10) = &PTR_FUN_10145bf20;
  *(undefined8 *)(param_1 + 0x4be0) = 0;
  *(undefined8 *)(param_1 + 0x4bd8) = 0;
  *(undefined8 *)(param_1 + 0x4bd0) = 0;
  *(undefined8 *)(param_1 + 0x4b40) = 0;
  *(undefined8 *)(param_1 + 0x4b38) = 0;
  *(undefined8 *)(param_1 + 0x4b50) = 0;
  *(undefined8 *)(param_1 + 0x4b48) = 0;
  *(undefined8 *)(param_1 + 0x4b60) = 0;
  *(undefined8 *)(param_1 + 0x4b58) = 0;
  *(undefined8 *)(param_1 + 0x4b70) = 0;
  *(undefined8 *)(param_1 + 0x4b68) = 0;
  *(undefined8 *)(param_1 + 0x4bb0) = 0;
  *(undefined8 *)(param_1 + 0x4ba8) = 0;
  *(undefined8 *)(param_1 + 0x4bc0) = 0;
  *(undefined8 *)(param_1 + 0x4bb8) = 0;
  *(undefined8 *)(param_1 + 0x4b78) = 0;
  FUN_1004f1580(param_1 + 0x4bf0);
  *(undefined ***)(param_1 + 0x4bf0) = &PTR_FUN_10145c440;
  *(undefined8 *)(param_1 + 0x4c20) = 0;
  *(undefined8 *)(param_1 + 0x4c18) = 0;
  *(undefined8 *)(param_1 + 0x4c40) = 0;
  *(undefined8 *)(param_1 + 0x4c38) = 0;
  *(undefined8 *)(param_1 + 0x4c30) = 0;
  FUN_1004f1580(param_1 + 0x4c50);
  *(undefined ***)(param_1 + 0x4c50) = &PTR_FUN_10145bf50;
  *(undefined8 *)(param_1 + 0x4c88) = 0;
  *(undefined8 *)(param_1 + 0x4c80) = 0;
  *(undefined8 *)(param_1 + 0x4c98) = 0;
  *(undefined8 *)(param_1 + 0x4c90) = 0;
  *(undefined8 *)(param_1 + 0x4ca8) = 0;
  *(undefined8 *)(param_1 + 0x4ca0) = 0;
  FUN_1004f1580(param_1 + 0x4cb0);
  *(undefined ***)(param_1 + 0x4cb0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4cd8) = 0;
  *(undefined8 *)(param_1 + 0x4ce8) = 0;
  *(undefined8 *)(param_1 + 0x4ce0) = 0;
  *(undefined8 *)(param_1 + 0x4cf8) = 0;
  *(undefined8 *)(param_1 + 0x4d08) = 0;
  *(undefined8 *)(param_1 + 0x4d00) = 0;
  FUN_1004f1580(param_1 + 0x4d10);
  *(undefined ***)(param_1 + 0x4d10) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4d38) = 0;
  *(undefined8 *)(param_1 + 0x4d48) = 0;
  *(undefined8 *)(param_1 + 0x4d40) = 0;
  *(undefined8 *)(param_1 + 0x4d58) = 0;
  *(undefined8 *)(param_1 + 0x4d68) = 0;
  *(undefined8 *)(param_1 + 0x4d60) = 0;
  FUN_1004f1580(param_1 + 0x4d70);
  *(undefined ***)(param_1 + 0x4d70) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4d98) = 0;
  *(undefined8 *)(param_1 + 0x4da8) = 0;
  *(undefined8 *)(param_1 + 0x4da0) = 0;
  *(undefined8 *)(param_1 + 0x4db8) = 0;
  *(undefined8 *)(param_1 + 0x4dc8) = 0;
  *(undefined8 *)(param_1 + 0x4dc0) = 0;
  FUN_1004f1580(param_1 + 0x4dd0);
  *(undefined ***)(param_1 + 0x4dd0) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4df8) = 0;
  *(undefined8 *)(param_1 + 0x4e08) = 0;
  *(undefined8 *)(param_1 + 0x4e00) = 0;
  *(undefined8 *)(param_1 + 0x4e18) = 0;
  *(undefined8 *)(param_1 + 0x4e28) = 0;
  *(undefined8 *)(param_1 + 20000) = 0;
  FUN_1004f1580(param_1 + 0x4e30);
  *(undefined ***)(param_1 + 0x4e30) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4e58) = 0;
  *(undefined8 *)(param_1 + 0x4e68) = 0;
  *(undefined8 *)(param_1 + 0x4e60) = 0;
  *(undefined8 *)(param_1 + 0x4e78) = 0;
  *(undefined8 *)(param_1 + 0x4e88) = 0;
  *(undefined8 *)(param_1 + 0x4e80) = 0;
  FUN_1004f1580(param_1 + 0x4e90);
  *(undefined ***)(param_1 + 0x4e90) = &PTR_FUN_101454740;
  *(undefined8 *)(param_1 + 0x4eb8) = 0;
  *(undefined8 *)(param_1 + 0x4ec8) = 0;
  *(undefined8 *)(param_1 + 0x4ec0) = 0;
  *(undefined8 *)(param_1 + 0x4ed8) = 0;
  *(undefined8 *)(param_1 + 0x4ee8) = 0;
  *(undefined8 *)(param_1 + 0x4ee0) = 0;
  FUN_1004f1580(param_1 + 0x4ef0);
  *(undefined ***)(param_1 + 0x4ef0) = &PTR_thunk_FUN_1004f15a8_10145b920;
  FUN_1004f1580(param_1 + 0x4f20);
  *(undefined ***)(param_1 + 0x4f20) = &PTR_thunk_FUN_1004f15a8_10145b920;
  FUN_1004f1580(param_1 + 0x4f50);
  *(undefined ***)(param_1 + 0x4f50) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x4f78) = 0;
  *(undefined8 *)(param_1 + 0x4f88) = 0;
  *(undefined8 *)(param_1 + 0x4f80) = 0;
  FUN_1004f1580(param_1 + 0x4f90);
  *(undefined ***)(param_1 + 0x4f90) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x4fb8) = 0;
  *(undefined8 *)(param_1 + 0x4fc8) = 0;
  *(undefined8 *)(param_1 + 0x4fc0) = 0;
  FUN_1004f1580(param_1 + 0x4fd0);
  *(undefined ***)(param_1 + 0x4fd0) = &PTR_FUN_10145b8c0;
  *(undefined8 *)(param_1 + 0x4ff8) = 0;
  *(undefined8 *)(param_1 + 0x5008) = 0;
  *(undefined8 *)(param_1 + 0x5000) = 0;
  FUN_1004f1580(param_1 + 0x5010);
  *(undefined ***)(param_1 + 0x5010) = &PTR_FUN_10145bf80;
  *(undefined8 *)(param_1 + 0x5040) = 0;
  *(undefined8 *)(param_1 + 0x5038) = 0;
  FUN_1004f1580(param_1 + 0x5048);
  *(undefined ***)(param_1 + 0x5048) = &PTR_FUN_10145bfb0;
  *(undefined8 *)(param_1 + 0x5078) = 0;
  *(undefined8 *)(param_1 + 0x5070) = 0;
  FUN_1004f1580(param_1 + 0x5088);
  *(undefined ***)(param_1 + 0x5088) = &PTR_thunk_FUN_10015a304_10145bec0;
  *(undefined8 *)(param_1 + 0x5130) = 0;
  *(undefined8 *)(param_1 + 0x5128) = 0;
  *(undefined8 *)(param_1 + 0x5140) = 0;
  *(undefined8 *)(param_1 + 0x5138) = 0;
  *(undefined8 *)(param_1 + 0x5150) = 0;
  *(undefined8 *)(param_1 + 0x5148) = 0;
  *(undefined8 *)(param_1 + 0x5160) = 0;
  *(undefined8 *)(param_1 + 0x5158) = 0;
  *(undefined8 *)(param_1 + 0x5170) = 0;
  *(undefined8 *)(param_1 + 0x5168) = 0;
  *(undefined8 *)(param_1 + 0x5180) = 0;
  *(undefined8 *)(param_1 + 0x5178) = 0;
  *(undefined8 *)(param_1 + 0x5190) = 0;
  *(undefined8 *)(param_1 + 0x5188) = 0;
  *(undefined8 *)(param_1 + 0x51a0) = 0;
  *(undefined8 *)(param_1 + 0x5198) = 0;
  *(undefined8 *)(param_1 + 0x51b0) = 0;
  *(undefined8 *)(param_1 + 0x51a8) = 0;
  *(undefined8 *)(param_1 + 0x51c0) = 0;
  *(undefined8 *)(param_1 + 0x51b8) = 0;
  *(undefined8 *)(param_1 + 0x51d0) = 0;
  *(undefined8 *)(param_1 + 0x51c8) = 0;
  *(undefined8 *)(param_1 + 0x51e0) = 0;
  *(undefined8 *)(param_1 + 0x51d8) = 0;
  *(undefined8 *)(param_1 + 0x51f0) = 0;
  *(undefined8 *)(param_1 + 0x51e8) = 0;
  *(undefined8 *)(param_1 + 0x51f8) = 0;
  *(undefined8 *)(param_1 + 0x50b8) = 0;
  *(undefined8 *)(param_1 + 0x50b0) = 0;
  *(undefined8 *)(param_1 + 0x50c8) = 0;
  *(undefined8 *)(param_1 + 0x50c0) = 0;
  *(undefined8 *)(param_1 + 0x50d8) = 0;
  *(undefined8 *)(param_1 + 0x50d0) = 0;
  *(undefined8 *)(param_1 + 0x50e8) = 0;
  *(undefined8 *)(param_1 + 0x50e0) = 0;
  *(undefined8 *)(param_1 + 0x50f8) = 0;
  *(undefined8 *)(param_1 + 0x50f0) = 0;
  *(undefined8 *)(param_1 + 0x5108) = 0;
  *(undefined8 *)(param_1 + 0x5100) = 0;
  FUN_10015a14c(param_1 + 0x5120);
  FUN_100159fc8(param_1 + 0x50b0);
  *(undefined8 *)(param_1 + 0x52b0) = 0;
  *(undefined8 *)(param_1 + 0x52a8) = 0;
  *(undefined8 *)(param_1 + 0x52b8) = 0;
  *(undefined8 *)(param_1 + 0x5210) = 0;
  *(undefined8 *)(param_1 + 21000) = 0;
  *(undefined8 *)(param_1 + 0x5220) = 0;
  *(undefined8 *)(param_1 + 0x5218) = 0;
  *(undefined8 *)(param_1 + 0x5230) = 0;
  *(undefined8 *)(param_1 + 0x5228) = 0;
  *(undefined8 *)(param_1 + 0x5268) = 0;
  *(undefined8 *)(param_1 + 0x5260) = 0;
  *(undefined8 *)(param_1 + 0x5278) = 0;
  *(undefined8 *)(param_1 + 0x5270) = 0;
  *(undefined8 *)(param_1 + 0x5288) = 0;
  *(undefined8 *)(param_1 + 0x5280) = 0;
  *(undefined8 *)(param_1 + 0x5298) = 0;
  *(undefined8 *)(param_1 + 0x5290) = 0;
  FUN_1004f1580(param_1 + 0x52c8);
  *(undefined ***)(param_1 + 0x52c8) = &PTR_FUN_10145bf20;
  *(undefined8 *)(param_1 + 0x5388) = 0;
  *(undefined8 *)(param_1 + 0x5398) = 0;
  *(undefined8 *)(param_1 + 0x5390) = 0;
  *(undefined8 *)(param_1 + 0x52f8) = 0;
  *(undefined8 *)(param_1 + 0x52f0) = 0;
  *(undefined8 *)(param_1 + 0x5308) = 0;
  *(undefined8 *)(param_1 + 0x5300) = 0;
  *(undefined8 *)(param_1 + 0x5318) = 0;
  *(undefined8 *)(param_1 + 0x5310) = 0;
  *(undefined8 *)(param_1 + 0x5328) = 0;
  *(undefined8 *)(param_1 + 0x5320) = 0;
  *(undefined8 *)(param_1 + 0x5330) = 0;
  *(undefined8 *)(param_1 + 0x5368) = 0;
  *(undefined8 *)(param_1 + 0x5360) = 0;
  *(undefined8 *)(param_1 + 0x5378) = 0;
  *(undefined8 *)(param_1 + 0x5370) = 0;
  *(undefined8 *)(param_1 + 0x53b0) = 0;
  *(undefined8 *)(param_1 + 0x53a8) = 0;
  *(undefined8 *)(param_1 + 0x53c0) = 0;
  *(undefined8 *)(param_1 + 0x53b8) = 0;
  *(undefined8 *)(param_1 + 0x53d0) = 0;
  *(undefined8 *)(param_1 + 0x53c8) = 0;
  *(undefined8 *)(param_1 + 0x53e0) = 0;
  *(undefined8 *)(param_1 + 0x53d8) = 0;
  *(undefined8 *)(param_1 + 0x53f0) = 0;
  *(undefined8 *)(param_1 + 0x53e8) = 0;
  *(undefined8 *)(param_1 + 0x5400) = 0;
  *(undefined8 *)(param_1 + 0x53f8) = 0;
  *(undefined8 *)(param_1 + 0x5410) = 0;
  *(undefined8 *)(param_1 + 0x5408) = 0;
  *(undefined8 *)(param_1 + 0x5420) = 0;
  *(undefined8 *)(param_1 + 0x5418) = 0;
  *(undefined8 *)(param_1 + 0x5430) = 0;
  *(undefined8 *)(param_1 + 0x5428) = 0;
  *(undefined8 *)(param_1 + 0x5440) = 0;
  *(undefined8 *)(param_1 + 0x5438) = 0;
  *(undefined8 *)(param_1 + 0x5450) = 0;
  *(undefined8 *)(param_1 + 0x5448) = 0;
  *(undefined8 *)(param_1 + 0x5460) = 0;
  *(undefined8 *)(param_1 + 0x5458) = 0;
  FUN_1004e313c(param_1 + 0x5468);
  *(undefined8 *)(param_1 + 0x54b8) = 0;
  *(undefined8 *)(param_1 + 0x54a0) = 0;
  *(undefined8 *)(param_1 + 0x5498) = 0;
  *(undefined8 *)(param_1 + 0x54b0) = 0;
  *(undefined8 *)(param_1 + 0x54a8) = 0;
  *(undefined8 *)(param_1 + 0x5480) = 0;
  *(undefined8 *)(param_1 + 0x5478) = 0;
  *(undefined8 *)(param_1 + 0x5490) = 0;
  *(undefined8 *)(param_1 + 0x5488) = 0;
  FUN_10003330c(param_1 + 0x54c0,&DAT_101d91198);
  *(undefined8 *)(param_1 + 0x5548) = 0;
  *(undefined8 *)(param_1 + 0x5530) = 0;
  *(undefined8 *)(param_1 + 0x5528) = 0;
  *(undefined8 *)(param_1 + 0x5540) = 0;
  *(undefined8 *)(param_1 + 0x5538) = 0;
  *(undefined8 *)(param_1 + 0x5510) = 0;
  *(undefined8 *)(param_1 + 0x5508) = 0;
  *(undefined8 *)(param_1 + 0x5520) = 0;
  *(undefined8 *)(param_1 + 0x5518) = 0;
  *(undefined8 *)(param_1 + 0x54f0) = 0;
  *(undefined8 *)(param_1 + 0x54e8) = 0;
  *(undefined8 *)(param_1 + 0x5500) = 0;
  *(undefined8 *)(param_1 + 0x54f8) = 0;
  *(undefined8 *)(param_1 + 0x54e0) = 0;
  *(undefined8 *)(param_1 + 0x54d8) = 0;
  FUN_1004e3004(param_1 + 0x5550);
  FUN_1004e3004(param_1 + 0x5558);
  thunk_FUN_100016500(param_1 + 0x5560,"GUILD.INVITES",1);
  thunk_FUN_100016500(param_1 + 0x5580,"TEAM.INVITES",1);
  *(undefined8 *)(param_1 + 0x55c8) = 0;
  *(undefined8 *)(param_1 + 0x55c0) = 0;
  *(undefined8 *)(param_1 + 0x55b8) = 0;
  *(undefined8 *)(param_1 + 0x55b0) = 0;
  *(undefined8 *)(param_1 + 0x55a8) = 0;
  *(undefined8 *)(param_1 + 0x55a0) = 0;
  *(undefined8 *)(param_1 + 0x55d8) = 0x6300000000;
  *(undefined8 *)(param_1 + 0x55d0) = 1;
  *(undefined8 *)(param_1 + 22000) = 0;
  *(undefined8 *)(param_1 + 0x55e8) = 0;
  *(undefined8 *)(param_1 + 0x5600) = 0;
  *(undefined8 *)(param_1 + 0x55f8) = 0;
  *(undefined4 *)(param_1 + 0x5608) = 1;
  *(undefined8 *)(param_1 + 0x5614) = 0;
  *(undefined8 *)(param_1 + 0x560c) = 0;
  *(undefined4 *)(param_1 + 0x561c) = 0;
  *(undefined8 *)(param_1 + 0x5624) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x5660) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x5650) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x5658) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x5664) = 0;
  *(undefined8 *)(param_1 + 0x566a) = 0;
  *(undefined1 *)(param_1 + 0x567b) = 0;
  *(undefined8 *)(param_1 + 0x5673) = 0;
  *(undefined4 *)(param_1 + 0x567c) = 1;
  *(undefined1 *)(param_1 + 0x5680) = 1;
  DAT_101e3cf00 = param_1;
  *(undefined8 *)(param_1 + 0x5634) = 0;
  *(undefined8 *)(param_1 + 0x562c) = 0;
  *(undefined8 *)(param_1 + 0x5644) = 0;
  *(undefined8 *)(param_1 + 0x563c) = 0;
  *(undefined4 *)(param_1 + 0x564c) = 0;
  *(undefined8 *)(param_1 + 0x5460) = 0;
  *(undefined8 *)(param_1 + 0x5458) = 0;
  *(undefined8 *)(param_1 + 0x5450) = 0;
  return param_1;
}




void FUN_10015ead0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_10015ead0_10145c160;
  DAT_101e3cf00 = 0;
  thunk_FUN_10001653c(param_1 + 0xab0);
  thunk_FUN_10001653c(param_1 + 0xaac);
  if (*(char *)((long)param_1 + 0x554f) < '\0') {
    operator_delete((void *)param_1[0xaa7]);
  }
  if (*(char *)((long)param_1 + 0x5537) < '\0') {
    operator_delete((void *)param_1[0xaa4]);
  }
  if (*(char *)((long)param_1 + 0x551f) < '\0') {
    operator_delete((void *)param_1[0xaa1]);
  }
  if (*(char *)((long)param_1 + 0x5507) < '\0') {
    operator_delete((void *)param_1[0xa9e]);
  }
  if (*(char *)((long)param_1 + 0x54ef) < '\0') {
    operator_delete((void *)param_1[0xa9b]);
  }
  if (*(char *)((long)param_1 + 0x54d7) < '\0') {
    operator_delete((void *)param_1[0xa98]);
  }
  if (*(char *)((long)param_1 + 0x54bf) < '\0') {
    operator_delete((void *)param_1[0xa95]);
  }
  if (*(char *)((long)param_1 + 0x54a7) < '\0') {
    operator_delete((void *)param_1[0xa92]);
  }
  if (*(char *)((long)param_1 + 0x548f) < '\0') {
    operator_delete((void *)param_1[0xa8f]);
  }
  if ((void *)param_1[0xa8e] != (void *)0x0) {
    operator_delete__((void *)param_1[0xa8e]);
    param_1[0xa8e] = 0;
    param_1[0xa8d] = 0;
  }
  FUN_10001629c(param_1 + 0xa88,1);
  FUN_1001641a4(param_1 + 0xa7d,1);
  FUN_100164138(param_1 + 0xa7b,1);
  FUN_100164960(param_1 + 0xa79,1);
  FUN_10001629c(param_1 + 0xa77,1);
  FUN_10001629c(param_1 + 0xa75,1);
  param_1[0xa59] = &PTR_FUN_10145bf20;
  if (*(char *)((long)param_1 + 0x539f) < '\0') {
    operator_delete((void *)param_1[0xa71]);
  }
  FUN_10015ab5c(param_1 + 0xa6e,1);
  FUN_10015aacc(param_1 + 0xa6c,1);
  if (*(char *)((long)param_1 + 0x5337) < '\0') {
    operator_delete((void *)param_1[0xa64]);
  }
  if (*(char *)((long)param_1 + 0x531f) < '\0') {
    operator_delete((void *)param_1[0xa61]);
  }
  if (*(char *)((long)param_1 + 0x5307) < '\0') {
    operator_delete((void *)param_1[0xa5e]);
  }
  FUN_1004f15a8(param_1 + 0xa59);
  FUN_10015a304(param_1 + 0xa11);
  param_1[0xa09] = &PTR_FUN_10145bfb0;
  FUN_10015bcf8(param_1 + 0xa0e,1);
  FUN_1004f15a8(param_1 + 0xa09);
  param_1[0xa02] = &PTR_FUN_10145bf80;
  FUN_10015aff0(param_1 + 0xa07,1);
  FUN_1004f15a8(param_1 + 0xa02);
  param_1[0x9fa] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x500f) < '\0') {
    operator_delete((void *)param_1[0x9ff]);
  }
  FUN_1004f15a8(param_1 + 0x9fa);
  param_1[0x9f2] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x4fcf) < '\0') {
    operator_delete((void *)param_1[0x9f7]);
  }
  FUN_1004f15a8(param_1 + 0x9f2);
  param_1[0x9ea] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x4f8f) < '\0') {
    operator_delete((void *)param_1[0x9ef]);
  }
  FUN_1004f15a8(param_1 + 0x9ea);
  FUN_1004f15a8(param_1 + 0x9e4);
  FUN_1004f15a8(param_1 + 0x9de);
  param_1[0x9d2] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x4eef) < '\0') {
    operator_delete((void *)param_1[0x9db]);
  }
  if (*(char *)((long)param_1 + 0x4ecf) < '\0') {
    operator_delete((void *)param_1[0x9d7]);
  }
  FUN_1004f15a8(param_1 + 0x9d2);
  param_1[0x9c6] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x4e8f) < '\0') {
    operator_delete((void *)param_1[0x9cf]);
  }
  if (*(char *)((long)param_1 + 0x4e6f) < '\0') {
    operator_delete((void *)param_1[0x9cb]);
  }
  FUN_1004f15a8(param_1 + 0x9c6);
  param_1[0x9ba] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x4e2f) < '\0') {
    operator_delete((void *)param_1[0x9c3]);
  }
  if (*(char *)((long)param_1 + 0x4e0f) < '\0') {
    operator_delete((void *)param_1[0x9bf]);
  }
  FUN_1004f15a8(param_1 + 0x9ba);
  param_1[0x9ae] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x4dcf) < '\0') {
    operator_delete((void *)param_1[0x9b7]);
  }
  if (*(char *)((long)param_1 + 0x4daf) < '\0') {
    operator_delete((void *)param_1[0x9b3]);
  }
  FUN_1004f15a8(param_1 + 0x9ae);
  param_1[0x9a2] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x4d6f) < '\0') {
    operator_delete((void *)param_1[0x9ab]);
  }
  if (*(char *)((long)param_1 + 0x4d4f) < '\0') {
    operator_delete((void *)param_1[0x9a7]);
  }
  FUN_1004f15a8(param_1 + 0x9a2);
  param_1[0x996] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x4d0f) < '\0') {
    operator_delete((void *)param_1[0x99f]);
  }
  if (*(char *)((long)param_1 + 0x4cef) < '\0') {
    operator_delete((void *)param_1[0x99b]);
  }
  FUN_1004f15a8(param_1 + 0x996);
  param_1[0x98a] = &PTR_FUN_10145bf50;
  if (*(char *)((long)param_1 + 0x4caf) < '\0') {
    operator_delete((void *)param_1[0x993]);
  }
  if (*(char *)((long)param_1 + 0x4c97) < '\0') {
    operator_delete((void *)param_1[0x990]);
  }
  FUN_1004f15a8(param_1 + 0x98a);
  param_1[0x97e] = &PTR_FUN_10145c440;
  if (*(char *)((long)param_1 + 0x4c47) < '\0') {
    operator_delete((void *)param_1[0x986]);
  }
  FUN_100168f84(param_1 + 0x983,1);
  FUN_1004f15a8(param_1 + 0x97e);
  param_1[0x962] = &PTR_FUN_10145bf20;
  if (*(char *)((long)param_1 + 0x4be7) < '\0') {
    operator_delete((void *)param_1[0x97a]);
  }
  FUN_10015ab5c(param_1 + 0x977,1);
  FUN_10015aacc(param_1 + 0x975,1);
  if (*(char *)((long)param_1 + 0x4b7f) < '\0') {
    operator_delete((void *)param_1[0x96d]);
  }
  if (*(char *)((long)param_1 + 0x4b67) < '\0') {
    operator_delete((void *)param_1[0x96a]);
  }
  if (*(char *)((long)param_1 + 0x4b4f) < '\0') {
    operator_delete((void *)param_1[0x967]);
  }
  FUN_1004f15a8(param_1 + 0x962);
  param_1[0x95a] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x4b0f) < '\0') {
    operator_delete((void *)param_1[0x95f]);
  }
  FUN_1004f15a8(param_1 + 0x95a);
  param_1[0x952] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x4acf) < '\0') {
    operator_delete((void *)param_1[0x957]);
  }
  FUN_1004f15a8(param_1 + 0x952);
  param_1[0x94a] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x4a8f) < '\0') {
    operator_delete((void *)param_1[0x94f]);
  }
  FUN_1004f15a8(param_1 + 0x94a);
  param_1[0x942] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x4a4f) < '\0') {
    operator_delete((void *)param_1[0x947]);
  }
  FUN_1004f15a8(param_1 + 0x942);
  param_1[0x936] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x4a0f) < '\0') {
    operator_delete((void *)param_1[0x93f]);
  }
  if (*(char *)((long)param_1 + 0x49ef) < '\0') {
    operator_delete((void *)param_1[0x93b]);
  }
  FUN_1004f15a8(param_1 + 0x936);
  param_1[0x92a] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x49af) < '\0') {
    operator_delete((void *)param_1[0x933]);
  }
  if (*(char *)((long)param_1 + 0x498f) < '\0') {
    operator_delete((void *)param_1[0x92f]);
  }
  FUN_1004f15a8(param_1 + 0x92a);
  param_1[0x91e] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x494f) < '\0') {
    operator_delete((void *)param_1[0x927]);
  }
  if (*(char *)((long)param_1 + 0x492f) < '\0') {
    operator_delete((void *)param_1[0x923]);
  }
  FUN_1004f15a8(param_1 + 0x91e);
  param_1[0x912] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x48ef) < '\0') {
    operator_delete((void *)param_1[0x91b]);
  }
  if (*(char *)((long)param_1 + 0x48cf) < '\0') {
    operator_delete((void *)param_1[0x917]);
  }
  FUN_1004f15a8(param_1 + 0x912);
  param_1[0x906] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x488f) < '\0') {
    operator_delete((void *)param_1[0x90f]);
  }
  if (*(char *)((long)param_1 + 0x486f) < '\0') {
    operator_delete((void *)param_1[0x90b]);
  }
  FUN_1004f15a8(param_1 + 0x906);
  param_1[0x8fa] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x482f) < '\0') {
    operator_delete((void *)param_1[0x903]);
  }
  if (*(char *)((long)param_1 + 0x480f) < '\0') {
    operator_delete((void *)param_1[0x8ff]);
  }
  FUN_1004f15a8(param_1 + 0x8fa);
  param_1[0x8ee] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x47cf) < '\0') {
    operator_delete((void *)param_1[0x8f7]);
  }
  if (*(char *)((long)param_1 + 0x47af) < '\0') {
    operator_delete((void *)param_1[0x8f3]);
  }
  FUN_1004f15a8(param_1 + 0x8ee);
  param_1[0x8e2] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x476f) < '\0') {
    operator_delete((void *)param_1[0x8eb]);
  }
  if (*(char *)((long)param_1 + 0x474f) < '\0') {
    operator_delete((void *)param_1[0x8e7]);
  }
  FUN_1004f15a8(param_1 + 0x8e2);
  param_1[0x8d6] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x470f) < '\0') {
    operator_delete((void *)param_1[0x8df]);
  }
  if (*(char *)((long)param_1 + 0x46ef) < '\0') {
    operator_delete((void *)param_1[0x8db]);
  }
  FUN_1004f15a8(param_1 + 0x8d6);
  param_1[0x8ca] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x46af) < '\0') {
    operator_delete((void *)param_1[0x8d3]);
  }
  if (*(char *)((long)param_1 + 0x468f) < '\0') {
    operator_delete((void *)param_1[0x8cf]);
  }
  FUN_1004f15a8(param_1 + 0x8ca);
  param_1[0x8be] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 17999) < '\0') {
    operator_delete((void *)param_1[0x8c7]);
  }
  if (*(char *)((long)param_1 + 0x462f) < '\0') {
    operator_delete((void *)param_1[0x8c3]);
  }
  FUN_1004f15a8(param_1 + 0x8be);
  param_1[0x8b2] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x45ef) < '\0') {
    operator_delete((void *)param_1[0x8bb]);
  }
  if (*(char *)((long)param_1 + 0x45cf) < '\0') {
    operator_delete((void *)param_1[0x8b7]);
  }
  FUN_1004f15a8(param_1 + 0x8b2);
  param_1[0x8a6] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x458f) < '\0') {
    operator_delete((void *)param_1[0x8af]);
  }
  if (*(char *)((long)param_1 + 0x456f) < '\0') {
    operator_delete((void *)param_1[0x8ab]);
  }
  FUN_1004f15a8(param_1 + 0x8a6);
  param_1[0x89a] = &PTR_FUN_10145bef0;
  if (*(char *)((long)param_1 + 0x452f) < '\0') {
    operator_delete((void *)param_1[0x8a3]);
  }
  if (*(char *)((long)param_1 + 0x4517) < '\0') {
    operator_delete((void *)param_1[0x8a0]);
  }
  FUN_1004f15a8(param_1 + 0x89a);
  param_1[0x88e] = &PTR_FUN_10145c410;
  if (*(char *)((long)param_1 + 0x44c7) < '\0') {
    operator_delete((void *)param_1[0x896]);
  }
  FUN_10016904c(param_1 + 0x893,1);
  FUN_1004f15a8(param_1 + 0x88e);
  FUN_10015a304(param_1 + 0x846);
  FUN_1004f15a8(param_1 + 0x840);
  param_1[0x834] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x41ff) < '\0') {
    operator_delete((void *)param_1[0x83d]);
  }
  if (*(char *)((long)param_1 + 0x41df) < '\0') {
    operator_delete((void *)param_1[0x839]);
  }
  FUN_1004f15a8(param_1 + 0x834);
  param_1[0x826] = &PTR_FUN_10145bda0;
  FUN_100158f50(param_1 + 0x830,1);
  if (*(char *)((long)param_1 + 0x417f) < '\0') {
    operator_delete((void *)param_1[0x82d]);
  }
  FUN_10015690c(param_1 + 0x82b,1);
  FUN_1004f15a8(param_1 + 0x826);
  param_1[0x81e] = &PTR_FUN_10145bd70;
  FUN_1001589f0(param_1 + 0x823,1);
  FUN_1004f15a8(param_1 + 0x81e);
  param_1[0x816] = &PTR_FUN_10145bd70;
  FUN_1001589f0(param_1 + 0x81b,1);
  FUN_1004f15a8(param_1 + 0x816);
  param_1[0x80e] = &PTR_FUN_10145bd70;
  FUN_1001589f0(param_1 + 0x813,1);
  FUN_1004f15a8(param_1 + 0x80e);
  param_1[0x802] = &PTR_FUN_10145bd40;
  if (*(char *)((long)param_1 + 0x4067) < '\0') {
    operator_delete((void *)param_1[0x80a]);
  }
  if (*(char *)((long)param_1 + 0x404f) < '\0') {
    operator_delete((void *)param_1[0x807]);
  }
  FUN_1004f15a8(param_1 + 0x802);
  FUN_1004f15a8(param_1 + 0x7fd);
  param_1[0x7f5] = &PTR_FUN_10145bce0;
  if (*(char *)((long)param_1 + 0x3fe7) < '\0') {
    operator_delete((void *)param_1[0x7fa]);
  }
  FUN_1004f15a8(param_1 + 0x7f5);
  param_1[0x7ed] = &PTR_FUN_10145bcb0;
  if (*(char *)((long)param_1 + 0x3fa7) < '\0') {
    operator_delete((void *)param_1[0x7f2]);
  }
  FUN_1004f15a8(param_1 + 0x7ed);
  param_1[0x7e5] = &PTR_FUN_10145bc80;
  if (*(char *)((long)param_1 + 0x3f67) < '\0') {
    operator_delete((void *)param_1[0x7ea]);
  }
  FUN_1004f15a8(param_1 + 0x7e5);
  param_1[0x7dd] = &PTR_FUN_10145bc50;
  if (*(char *)((long)param_1 + 0x3f27) < '\0') {
    operator_delete((void *)param_1[0x7e2]);
  }
  FUN_1004f15a8(param_1 + 0x7dd);
  param_1[0x7d5] = &PTR_FUN_10145bc20;
  if (*(char *)((long)param_1 + 0x3ee7) < '\0') {
    operator_delete((void *)param_1[0x7da]);
  }
  FUN_1004f15a8(param_1 + 0x7d5);
  param_1[0x7ce] = &PTR_FUN_10145c130;
  FUN_10015d368(param_1 + 0x7d3,1);
  FUN_1004f15a8(param_1 + 0x7ce);
  param_1[0x7c5] = &PTR_FUN_10145c100;
  if (*(char *)((long)param_1 + 0x3e6f) < '\0') {
    operator_delete((void *)param_1[0x7cb]);
  }
  FUN_1004f15a8(param_1 + 0x7c5);
  param_1[0x7bc] = &PTR_FUN_10145c0d0;
  if (*(char *)((long)param_1 + 0x3e27) < '\0') {
    operator_delete((void *)param_1[0x7c2]);
  }
  FUN_1004f15a8(param_1 + 0x7bc);
  param_1[0x7b5] = &PTR_FUN_10145c0a0;
  FUN_10015cef8(param_1 + 0x7ba,1);
  FUN_1004f15a8(param_1 + 0x7b5);
  param_1[0x7ac] = &PTR_FUN_10145c070;
  if (*(char *)((long)param_1 + 0x3da7) < '\0') {
    operator_delete((void *)param_1[0x7b2]);
  }
  FUN_1004f15a8(param_1 + 0x7ac);
  param_1[0x797] = &PTR_FUN_10145c040;
  FUN_10015cb3c(param_1 + 0x7aa,1);
  FUN_10015cbc0(param_1 + 0x7a8,1);
  FUN_10015cbc0(param_1 + 0x7a6,1);
  FUN_10015cbc0(param_1 + 0x7a4,1);
  FUN_10015cbc0(param_1 + 0x7a2,1);
  FUN_10015cbc0(param_1 + 0x7a0,1);
  FUN_10015cc34(param_1 + 0x79e,1);
  FUN_10015ccb8(param_1 + 0x79c,1);
  FUN_1004f15a8(param_1 + 0x797);
  param_1[0x787] = &PTR_FUN_10145c010;
  FUN_10001629c(param_1 + 0x795,1);
  FUN_10001629c(param_1 + 0x793,1);
  FUN_10015690c(param_1 + 0x791,1);
  if (*(char *)((long)param_1 + 0x3c87) < '\0') {
    operator_delete((void *)param_1[0x78e]);
  }
  FUN_10015c28c(param_1 + 0x78c,1);
  FUN_1004f15a8(param_1 + 0x787);
  param_1[0x780] = &PTR_FUN_10145bfe0;
  FUN_10015bf94(param_1 + 0x785,1);
  FUN_1004f15a8(param_1 + 0x780);
  param_1[0x777] = &PTR_FUN_10145bbf0;
  if (*(char *)((long)param_1 + 0x3bf7) < '\0') {
    operator_delete((void *)param_1[0x77c]);
  }
  FUN_1004f15a8(param_1 + 0x777);
  param_1[0x76f] = &PTR_FUN_10145c3e0;
  if ((void *)param_1[0x775] != (void *)0x0) {
    operator_delete__((void *)param_1[0x775]);
    param_1[0x775] = 0;
    param_1[0x774] = 0;
  }
  FUN_1004f15a8(param_1 + 0x76f);
  param_1[0x762] = &PTR_FUN_10145be90;
  if (*(char *)((long)param_1 + 0x3b6f) < '\0') {
    operator_delete((void *)param_1[0x76b]);
  }
  FUN_1004f15a8(param_1 + 0x762);
  param_1[0x755] = &PTR_FUN_10145be60;
  if (*(char *)((long)param_1 + 0x3b07) < '\0') {
    operator_delete((void *)param_1[0x75e]);
  }
  FUN_1004f15a8(param_1 + 0x755);
  param_1[0x74a] = &PTR_FUN_10145bb60;
  FUN_10001629c(param_1 + 0x753,1);
  if (*(char *)((long)param_1 + 14999) < '\0') {
    operator_delete((void *)param_1[0x750]);
  }
  FUN_1004f15a8(param_1 + 0x74a);
  param_1[0x741] = &PTR_FUN_10145c3b0;
  if (*(char *)((long)param_1 + 0x3a47) < '\0') {
    operator_delete((void *)param_1[0x746]);
  }
  FUN_1004f15a8(param_1 + 0x741);
  param_1[0x738] = &PTR_FUN_10145c380;
  if (*(char *)((long)param_1 + 0x39ff) < '\0') {
    operator_delete((void *)param_1[0x73d]);
  }
  FUN_1004f15a8(param_1 + 0x738);
  param_1[0x730] = &PTR_FUN_10145be30;
  FUN_10015951c(param_1 + 0x735,1);
  FUN_1004f15a8(param_1 + 0x730);
  param_1[0x725] = &PTR_FUN_10145be00;
  if (*(char *)((long)param_1 + 0x3977) < '\0') {
    operator_delete((void *)param_1[0x72c]);
  }
  FUN_1001591f8(param_1 + 0x72a,1);
  FUN_1004f15a8(param_1 + 0x725);
  FUN_1004f15a8(param_1 + 0x71e);
  param_1[0x712] = &PTR_FUN_10145bb90;
  if (*(char *)((long)param_1 + 0x38e7) < '\0') {
    operator_delete((void *)param_1[0x71a]);
  }
  FUN_1004f15a8(param_1 + 0x712);
  param_1[0x709] = &PTR_FUN_10145c350;
  if (*(char *)((long)param_1 + 0x3887) < '\0') {
    operator_delete((void *)param_1[0x70e]);
  }
  FUN_1004f15a8(param_1 + 0x709);
  param_1[0x700] = &PTR_FUN_10145c320;
  FUN_10014ebf8(param_1 + 0x705,param_1[0x706]);
  FUN_1004f15a8(param_1 + 0x700);
  param_1[0x6f7] = &PTR_FUN_10145c2f0;
  if (*(char *)((long)param_1 + 0x37f7) < '\0') {
    operator_delete((void *)param_1[0x6fc]);
  }
  FUN_1004f15a8(param_1 + 0x6f7);
  param_1[0x6ee] = &PTR_FUN_10145c2c0;
  if (*(char *)((long)param_1 + 0x37af) < '\0') {
    operator_delete((void *)param_1[0x6f3]);
  }
  FUN_1004f15a8(param_1 + 0x6ee);
  param_1[0x6e2] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x376f) < '\0') {
    operator_delete((void *)param_1[0x6eb]);
  }
  if (*(char *)((long)param_1 + 0x374f) < '\0') {
    operator_delete((void *)param_1[0x6e7]);
  }
  FUN_1004f15a8(param_1 + 0x6e2);
  param_1[0x6d6] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x370f) < '\0') {
    operator_delete((void *)param_1[0x6df]);
  }
  if (*(char *)((long)param_1 + 0x36ef) < '\0') {
    operator_delete((void *)param_1[0x6db]);
  }
  FUN_1004f15a8(param_1 + 0x6d6);
  param_1[0x6ca] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 13999) < '\0') {
    operator_delete((void *)param_1[0x6d3]);
  }
  if (*(char *)((long)param_1 + 0x368f) < '\0') {
    operator_delete((void *)param_1[0x6cf]);
  }
  FUN_1004f15a8(param_1 + 0x6ca);
  param_1[0x6bf] = &PTR_FUN_10145a030;
  if (*(char *)((long)param_1 + 0x3647) < '\0') {
    operator_delete((void *)param_1[0x6c6]);
  }
  FUN_1004f15a8(param_1 + 0x6bf);
  param_1[0x6b0] = &PTR_FUN_10145bad0;
  if (*(char *)((long)param_1 + 0x35f7) < '\0') {
    operator_delete((void *)param_1[0x6bc]);
  }
  if (*(char *)((long)param_1 + 0x35df) < '\0') {
    operator_delete((void *)param_1[0x6b9]);
  }
  if (*(char *)((long)param_1 + 0x35c7) < '\0') {
    operator_delete((void *)param_1[0x6b6]);
  }
  FUN_1004f15a8(param_1 + 0x6b0);
  param_1[0x6a8] = &PTR_FUN_10145baa0;
  FUN_100157a40(param_1 + 0x6ad,1);
  FUN_1004f15a8(param_1 + 0x6a8);
  param_1[0x69c] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x353f) < '\0') {
    operator_delete((void *)param_1[0x6a5]);
  }
  if (*(char *)((long)param_1 + 0x351f) < '\0') {
    operator_delete((void *)param_1[0x6a1]);
  }
  FUN_1004f15a8(param_1 + 0x69c);
  param_1[0x690] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x34df) < '\0') {
    operator_delete((void *)param_1[0x699]);
  }
  if (*(char *)((long)param_1 + 0x34bf) < '\0') {
    operator_delete((void *)param_1[0x695]);
  }
  FUN_1004f15a8(param_1 + 0x690);
  param_1[0x684] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x347f) < '\0') {
    operator_delete((void *)param_1[0x68d]);
  }
  if (*(char *)((long)param_1 + 0x345f) < '\0') {
    operator_delete((void *)param_1[0x689]);
  }
  FUN_1004f15a8(param_1 + 0x684);
  param_1[0x678] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x341f) < '\0') {
    operator_delete((void *)param_1[0x681]);
  }
  if (*(char *)((long)param_1 + 0x33ff) < '\0') {
    operator_delete((void *)param_1[0x67d]);
  }
  FUN_1004f15a8(param_1 + 0x678);
  param_1[0x66c] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x33bf) < '\0') {
    operator_delete((void *)param_1[0x675]);
  }
  if (*(char *)((long)param_1 + 0x339f) < '\0') {
    operator_delete((void *)param_1[0x671]);
  }
  FUN_1004f15a8(param_1 + 0x66c);
  param_1[0x660] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x335f) < '\0') {
    operator_delete((void *)param_1[0x669]);
  }
  if (*(char *)((long)param_1 + 0x333f) < '\0') {
    operator_delete((void *)param_1[0x665]);
  }
  FUN_1004f15a8(param_1 + 0x660);
  FUN_100156e64(param_1 + 0x5c0);
  param_1[0x5b4] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x2dff) < '\0') {
    operator_delete((void *)param_1[0x5bd]);
  }
  if (*(char *)((long)param_1 + 0x2ddf) < '\0') {
    operator_delete((void *)param_1[0x5b9]);
  }
  FUN_1004f15a8(param_1 + 0x5b4);
  param_1[0x5a8] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x2d9f) < '\0') {
    operator_delete((void *)param_1[0x5b1]);
  }
  if (*(char *)((long)param_1 + 0x2d7f) < '\0') {
    operator_delete((void *)param_1[0x5ad]);
  }
  FUN_1004f15a8(param_1 + 0x5a8);
  param_1[0x59c] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x2d3f) < '\0') {
    operator_delete((void *)param_1[0x5a5]);
  }
  if (*(char *)((long)param_1 + 0x2d1f) < '\0') {
    operator_delete((void *)param_1[0x5a1]);
  }
  FUN_1004f15a8(param_1 + 0x59c);
  param_1[0x590] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x2cdf) < '\0') {
    operator_delete((void *)param_1[0x599]);
  }
  if (*(char *)((long)param_1 + 0x2cbf) < '\0') {
    operator_delete((void *)param_1[0x595]);
  }
  FUN_1004f15a8(param_1 + 0x590);
  param_1[0x584] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x2c7f) < '\0') {
    operator_delete((void *)param_1[0x58d]);
  }
  if (*(char *)((long)param_1 + 0x2c5f) < '\0') {
    operator_delete((void *)param_1[0x589]);
  }
  FUN_1004f15a8(param_1 + 0x584);
  param_1[0x578] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x2c1f) < '\0') {
    operator_delete((void *)param_1[0x581]);
  }
  if (*(char *)((long)param_1 + 0x2bff) < '\0') {
    operator_delete((void *)param_1[0x57d]);
  }
  FUN_1004f15a8(param_1 + 0x578);
  param_1[0x4ef] = &PTR_FUN_10145b9e0;
  if (*(char *)((long)param_1 + 0x2bbf) < '\0') {
    operator_delete((void *)param_1[0x575]);
  }
  lVar1 = 0;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0x2b97) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x2b80));
    }
    if (*(char *)((long)param_1 + lVar1 + 0x2b7f) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x2b68));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x400);
  FUN_1004f15a8(param_1 + 0x4ef);
  param_1[0x464] = &PTR_FUN_10145c260;
  if (*(char *)((long)param_1 + 0x2777) < '\0') {
    operator_delete((void *)param_1[0x4ec]);
  }
  lVar1 = 0;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0x2747) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x2730));
    }
    if (*(char *)((long)param_1 + lVar1 + 0x272f) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x2718));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x400);
  FUN_100156c78(param_1 + 0x469,1);
  FUN_1004f15a8(param_1 + 0x464);
  FUN_10015741c(param_1 + 0x3cc);
  param_1[0x3c0] = &PTR_FUN_10145c290;
  if (*(char *)((long)param_1 + 0x1e5f) < '\0') {
    operator_delete((void *)param_1[0x3c9]);
  }
  if (*(char *)((long)param_1 + 0x1e3f) < '\0') {
    operator_delete((void *)param_1[0x3c5]);
  }
  FUN_1004f15a8(param_1 + 0x3c0);
  param_1[0x335] = &PTR_FUN_10145c260;
  if (*(char *)((long)param_1 + 0x1dff) < '\0') {
    operator_delete((void *)param_1[0x3bd]);
  }
  lVar1 = 0;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0x1dcf) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x1db8));
    }
    if (*(char *)((long)param_1 + lVar1 + 0x1db7) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x1da0));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x400);
  FUN_100156c78(param_1 + 0x33a,1);
  FUN_1004f15a8(param_1 + 0x335);
  FUN_100157234(param_1 + 0x29a);
  FUN_100157078(param_1 + 0x208);
  param_1[0x1fc] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x103f) < '\0') {
    operator_delete((void *)param_1[0x205]);
  }
  if (*(char *)((long)param_1 + 0x101f) < '\0') {
    operator_delete((void *)param_1[0x201]);
  }
  FUN_1004f15a8(param_1 + 0x1fc);
  param_1[0x173] = &PTR_FUN_10145b9b0;
  if (*(char *)((long)param_1 + 0xfdf) < '\0') {
    operator_delete((void *)param_1[0x1f9]);
  }
  lVar1 = 0;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0xfb7) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 4000));
    }
    if (*(char *)((long)param_1 + lVar1 + 3999) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0xf88));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x400);
  FUN_1004f15a8(param_1 + 0x173);
  FUN_1004f15a8(param_1 + 0x16d);
  FUN_100156e64(param_1 + 0xcd);
  param_1[0xc5] = &PTR_FUN_10145c200;
  FUN_100169150(param_1 + 0xca,1);
  FUN_1004f15a8(param_1 + 0xc5);
  FUN_1004f15a8(param_1 + 0xbf);
  param_1[0xb7] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x5f7) < '\0') {
    operator_delete((void *)param_1[0xbc]);
  }
  FUN_1004f15a8(param_1 + 0xb7);
  param_1[0xaf] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x5b7) < '\0') {
    operator_delete((void *)param_1[0xb4]);
  }
  FUN_1004f15a8(param_1 + 0xaf);
  param_1[0xa7] = &PTR_FUN_10145b8f0;
  FUN_10015690c(param_1 + 0xac,1);
  FUN_1004f15a8(param_1 + 0xa7);
  param_1[0x9f] = &PTR_FUN_10145b8f0;
  FUN_10015690c(param_1 + 0xa4,1);
  FUN_1004f15a8(param_1 + 0x9f);
  param_1[0x97] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x4f7) < '\0') {
    operator_delete((void *)param_1[0x9c]);
  }
  FUN_1004f15a8(param_1 + 0x97);
  param_1[0x8f] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x4b7) < '\0') {
    operator_delete((void *)param_1[0x94]);
  }
  FUN_1004f15a8(param_1 + 0x8f);
  param_1[0x87] = &PTR_FUN_10145b890;
  FUN_100156550(param_1 + 0x8d,1);
  FUN_1004f15a8(param_1 + 0x87);
  param_1[0x7b] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x437) < '\0') {
    operator_delete((void *)param_1[0x84]);
  }
  if (*(char *)((long)param_1 + 0x417) < '\0') {
    operator_delete((void *)param_1[0x80]);
  }
  FUN_1004f15a8(param_1 + 0x7b);
  param_1[0x6f] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x3d7) < '\0') {
    operator_delete((void *)param_1[0x78]);
  }
  if (*(char *)((long)param_1 + 0x3b7) < '\0') {
    operator_delete((void *)param_1[0x74]);
  }
  FUN_1004f15a8(param_1 + 0x6f);
  param_1[99] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x377) < '\0') {
    operator_delete((void *)param_1[0x6c]);
  }
  if (*(char *)((long)param_1 + 0x357) < '\0') {
    operator_delete((void *)param_1[0x68]);
  }
  FUN_1004f15a8(param_1 + 99);
  param_1[0x4f] = &PTR_FUN_10145c1c8;
  param_1[0x52] = &PTR_FUN_10145b950;
  FUN_100156c78(param_1 + 0x60,1);
  if (*(char *)((long)param_1 + 0x2ff) < '\0') {
    operator_delete((void *)param_1[0x5d]);
  }
  if (*(char *)((long)param_1 + 0x2e7) < '\0') {
    operator_delete((void *)param_1[0x5a]);
  }
  if (*(char *)((long)param_1 + 0x2cf) < '\0') {
    operator_delete((void *)param_1[0x57]);
  }
  FUN_1004f15a8(param_1 + 0x52);
  param_1[6] = &PTR_FUN_10145b860;
  param_1[3] = &PTR_FUN_10145c190;
  FUN_10015613c(param_1 + 0x16);
  FUN_100156080(param_1 + 0x11,1);
  if ((void *)param_1[0x10] != (void *)0x0) {
    operator_delete__((void *)param_1[0x10]);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
  }
  FUN_100155f24(param_1 + 0xd,1);
  FUN_100155eac(param_1 + 0xb,1);
  FUN_1004f15a8(param_1 + 6);
  FUN_1004f0a9c(param_1);
  return;
}




void thunk_FUN_10015ead0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_10015ead0_10145c160;
  DAT_101e3cf00 = 0;
  thunk_FUN_10001653c(param_1 + 0xab0);
  thunk_FUN_10001653c(param_1 + 0xaac);
  if (*(char *)((long)param_1 + 0x554f) < '\0') {
    operator_delete((void *)param_1[0xaa7]);
  }
  if (*(char *)((long)param_1 + 0x5537) < '\0') {
    operator_delete((void *)param_1[0xaa4]);
  }
  if (*(char *)((long)param_1 + 0x551f) < '\0') {
    operator_delete((void *)param_1[0xaa1]);
  }
  if (*(char *)((long)param_1 + 0x5507) < '\0') {
    operator_delete((void *)param_1[0xa9e]);
  }
  if (*(char *)((long)param_1 + 0x54ef) < '\0') {
    operator_delete((void *)param_1[0xa9b]);
  }
  if (*(char *)((long)param_1 + 0x54d7) < '\0') {
    operator_delete((void *)param_1[0xa98]);
  }
  if (*(char *)((long)param_1 + 0x54bf) < '\0') {
    operator_delete((void *)param_1[0xa95]);
  }
  if (*(char *)((long)param_1 + 0x54a7) < '\0') {
    operator_delete((void *)param_1[0xa92]);
  }
  if (*(char *)((long)param_1 + 0x548f) < '\0') {
    operator_delete((void *)param_1[0xa8f]);
  }
  if ((void *)param_1[0xa8e] != (void *)0x0) {
    operator_delete__((void *)param_1[0xa8e]);
    param_1[0xa8e] = 0;
    param_1[0xa8d] = 0;
  }
  FUN_10001629c(param_1 + 0xa88,1);
  FUN_1001641a4(param_1 + 0xa7d,1);
  FUN_100164138(param_1 + 0xa7b,1);
  FUN_100164960(param_1 + 0xa79,1);
  FUN_10001629c(param_1 + 0xa77,1);
  FUN_10001629c(param_1 + 0xa75,1);
  param_1[0xa59] = &PTR_FUN_10145bf20;
  if (*(char *)((long)param_1 + 0x539f) < '\0') {
    operator_delete((void *)param_1[0xa71]);
  }
  FUN_10015ab5c(param_1 + 0xa6e,1);
  FUN_10015aacc(param_1 + 0xa6c,1);
  if (*(char *)((long)param_1 + 0x5337) < '\0') {
    operator_delete((void *)param_1[0xa64]);
  }
  if (*(char *)((long)param_1 + 0x531f) < '\0') {
    operator_delete((void *)param_1[0xa61]);
  }
  if (*(char *)((long)param_1 + 0x5307) < '\0') {
    operator_delete((void *)param_1[0xa5e]);
  }
  FUN_1004f15a8(param_1 + 0xa59);
  FUN_10015a304(param_1 + 0xa11);
  param_1[0xa09] = &PTR_FUN_10145bfb0;
  FUN_10015bcf8(param_1 + 0xa0e,1);
  FUN_1004f15a8(param_1 + 0xa09);
  param_1[0xa02] = &PTR_FUN_10145bf80;
  FUN_10015aff0(param_1 + 0xa07,1);
  FUN_1004f15a8(param_1 + 0xa02);
  param_1[0x9fa] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x500f) < '\0') {
    operator_delete((void *)param_1[0x9ff]);
  }
  FUN_1004f15a8(param_1 + 0x9fa);
  param_1[0x9f2] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x4fcf) < '\0') {
    operator_delete((void *)param_1[0x9f7]);
  }
  FUN_1004f15a8(param_1 + 0x9f2);
  param_1[0x9ea] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x4f8f) < '\0') {
    operator_delete((void *)param_1[0x9ef]);
  }
  FUN_1004f15a8(param_1 + 0x9ea);
  FUN_1004f15a8(param_1 + 0x9e4);
  FUN_1004f15a8(param_1 + 0x9de);
  param_1[0x9d2] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x4eef) < '\0') {
    operator_delete((void *)param_1[0x9db]);
  }
  if (*(char *)((long)param_1 + 0x4ecf) < '\0') {
    operator_delete((void *)param_1[0x9d7]);
  }
  FUN_1004f15a8(param_1 + 0x9d2);
  param_1[0x9c6] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x4e8f) < '\0') {
    operator_delete((void *)param_1[0x9cf]);
  }
  if (*(char *)((long)param_1 + 0x4e6f) < '\0') {
    operator_delete((void *)param_1[0x9cb]);
  }
  FUN_1004f15a8(param_1 + 0x9c6);
  param_1[0x9ba] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x4e2f) < '\0') {
    operator_delete((void *)param_1[0x9c3]);
  }
  if (*(char *)((long)param_1 + 0x4e0f) < '\0') {
    operator_delete((void *)param_1[0x9bf]);
  }
  FUN_1004f15a8(param_1 + 0x9ba);
  param_1[0x9ae] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x4dcf) < '\0') {
    operator_delete((void *)param_1[0x9b7]);
  }
  if (*(char *)((long)param_1 + 0x4daf) < '\0') {
    operator_delete((void *)param_1[0x9b3]);
  }
  FUN_1004f15a8(param_1 + 0x9ae);
  param_1[0x9a2] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x4d6f) < '\0') {
    operator_delete((void *)param_1[0x9ab]);
  }
  if (*(char *)((long)param_1 + 0x4d4f) < '\0') {
    operator_delete((void *)param_1[0x9a7]);
  }
  FUN_1004f15a8(param_1 + 0x9a2);
  param_1[0x996] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x4d0f) < '\0') {
    operator_delete((void *)param_1[0x99f]);
  }
  if (*(char *)((long)param_1 + 0x4cef) < '\0') {
    operator_delete((void *)param_1[0x99b]);
  }
  FUN_1004f15a8(param_1 + 0x996);
  param_1[0x98a] = &PTR_FUN_10145bf50;
  if (*(char *)((long)param_1 + 0x4caf) < '\0') {
    operator_delete((void *)param_1[0x993]);
  }
  if (*(char *)((long)param_1 + 0x4c97) < '\0') {
    operator_delete((void *)param_1[0x990]);
  }
  FUN_1004f15a8(param_1 + 0x98a);
  param_1[0x97e] = &PTR_FUN_10145c440;
  if (*(char *)((long)param_1 + 0x4c47) < '\0') {
    operator_delete((void *)param_1[0x986]);
  }
  FUN_100168f84(param_1 + 0x983,1);
  FUN_1004f15a8(param_1 + 0x97e);
  param_1[0x962] = &PTR_FUN_10145bf20;
  if (*(char *)((long)param_1 + 0x4be7) < '\0') {
    operator_delete((void *)param_1[0x97a]);
  }
  FUN_10015ab5c(param_1 + 0x977,1);
  FUN_10015aacc(param_1 + 0x975,1);
  if (*(char *)((long)param_1 + 0x4b7f) < '\0') {
    operator_delete((void *)param_1[0x96d]);
  }
  if (*(char *)((long)param_1 + 0x4b67) < '\0') {
    operator_delete((void *)param_1[0x96a]);
  }
  if (*(char *)((long)param_1 + 0x4b4f) < '\0') {
    operator_delete((void *)param_1[0x967]);
  }
  FUN_1004f15a8(param_1 + 0x962);
  param_1[0x95a] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x4b0f) < '\0') {
    operator_delete((void *)param_1[0x95f]);
  }
  FUN_1004f15a8(param_1 + 0x95a);
  param_1[0x952] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x4acf) < '\0') {
    operator_delete((void *)param_1[0x957]);
  }
  FUN_1004f15a8(param_1 + 0x952);
  param_1[0x94a] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x4a8f) < '\0') {
    operator_delete((void *)param_1[0x94f]);
  }
  FUN_1004f15a8(param_1 + 0x94a);
  param_1[0x942] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x4a4f) < '\0') {
    operator_delete((void *)param_1[0x947]);
  }
  FUN_1004f15a8(param_1 + 0x942);
  param_1[0x936] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x4a0f) < '\0') {
    operator_delete((void *)param_1[0x93f]);
  }
  if (*(char *)((long)param_1 + 0x49ef) < '\0') {
    operator_delete((void *)param_1[0x93b]);
  }
  FUN_1004f15a8(param_1 + 0x936);
  param_1[0x92a] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x49af) < '\0') {
    operator_delete((void *)param_1[0x933]);
  }
  if (*(char *)((long)param_1 + 0x498f) < '\0') {
    operator_delete((void *)param_1[0x92f]);
  }
  FUN_1004f15a8(param_1 + 0x92a);
  param_1[0x91e] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x494f) < '\0') {
    operator_delete((void *)param_1[0x927]);
  }
  if (*(char *)((long)param_1 + 0x492f) < '\0') {
    operator_delete((void *)param_1[0x923]);
  }
  FUN_1004f15a8(param_1 + 0x91e);
  param_1[0x912] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x48ef) < '\0') {
    operator_delete((void *)param_1[0x91b]);
  }
  if (*(char *)((long)param_1 + 0x48cf) < '\0') {
    operator_delete((void *)param_1[0x917]);
  }
  FUN_1004f15a8(param_1 + 0x912);
  param_1[0x906] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x488f) < '\0') {
    operator_delete((void *)param_1[0x90f]);
  }
  if (*(char *)((long)param_1 + 0x486f) < '\0') {
    operator_delete((void *)param_1[0x90b]);
  }
  FUN_1004f15a8(param_1 + 0x906);
  param_1[0x8fa] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x482f) < '\0') {
    operator_delete((void *)param_1[0x903]);
  }
  if (*(char *)((long)param_1 + 0x480f) < '\0') {
    operator_delete((void *)param_1[0x8ff]);
  }
  FUN_1004f15a8(param_1 + 0x8fa);
  param_1[0x8ee] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x47cf) < '\0') {
    operator_delete((void *)param_1[0x8f7]);
  }
  if (*(char *)((long)param_1 + 0x47af) < '\0') {
    operator_delete((void *)param_1[0x8f3]);
  }
  FUN_1004f15a8(param_1 + 0x8ee);
  param_1[0x8e2] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x476f) < '\0') {
    operator_delete((void *)param_1[0x8eb]);
  }
  if (*(char *)((long)param_1 + 0x474f) < '\0') {
    operator_delete((void *)param_1[0x8e7]);
  }
  FUN_1004f15a8(param_1 + 0x8e2);
  param_1[0x8d6] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x470f) < '\0') {
    operator_delete((void *)param_1[0x8df]);
  }
  if (*(char *)((long)param_1 + 0x46ef) < '\0') {
    operator_delete((void *)param_1[0x8db]);
  }
  FUN_1004f15a8(param_1 + 0x8d6);
  param_1[0x8ca] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x46af) < '\0') {
    operator_delete((void *)param_1[0x8d3]);
  }
  if (*(char *)((long)param_1 + 0x468f) < '\0') {
    operator_delete((void *)param_1[0x8cf]);
  }
  FUN_1004f15a8(param_1 + 0x8ca);
  param_1[0x8be] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 17999) < '\0') {
    operator_delete((void *)param_1[0x8c7]);
  }
  if (*(char *)((long)param_1 + 0x462f) < '\0') {
    operator_delete((void *)param_1[0x8c3]);
  }
  FUN_1004f15a8(param_1 + 0x8be);
  param_1[0x8b2] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x45ef) < '\0') {
    operator_delete((void *)param_1[0x8bb]);
  }
  if (*(char *)((long)param_1 + 0x45cf) < '\0') {
    operator_delete((void *)param_1[0x8b7]);
  }
  FUN_1004f15a8(param_1 + 0x8b2);
  param_1[0x8a6] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x458f) < '\0') {
    operator_delete((void *)param_1[0x8af]);
  }
  if (*(char *)((long)param_1 + 0x456f) < '\0') {
    operator_delete((void *)param_1[0x8ab]);
  }
  FUN_1004f15a8(param_1 + 0x8a6);
  param_1[0x89a] = &PTR_FUN_10145bef0;
  if (*(char *)((long)param_1 + 0x452f) < '\0') {
    operator_delete((void *)param_1[0x8a3]);
  }
  if (*(char *)((long)param_1 + 0x4517) < '\0') {
    operator_delete((void *)param_1[0x8a0]);
  }
  FUN_1004f15a8(param_1 + 0x89a);
  param_1[0x88e] = &PTR_FUN_10145c410;
  if (*(char *)((long)param_1 + 0x44c7) < '\0') {
    operator_delete((void *)param_1[0x896]);
  }
  FUN_10016904c(param_1 + 0x893,1);
  FUN_1004f15a8(param_1 + 0x88e);
  FUN_10015a304(param_1 + 0x846);
  FUN_1004f15a8(param_1 + 0x840);
  param_1[0x834] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x41ff) < '\0') {
    operator_delete((void *)param_1[0x83d]);
  }
  if (*(char *)((long)param_1 + 0x41df) < '\0') {
    operator_delete((void *)param_1[0x839]);
  }
  FUN_1004f15a8(param_1 + 0x834);
  param_1[0x826] = &PTR_FUN_10145bda0;
  FUN_100158f50(param_1 + 0x830,1);
  if (*(char *)((long)param_1 + 0x417f) < '\0') {
    operator_delete((void *)param_1[0x82d]);
  }
  FUN_10015690c(param_1 + 0x82b,1);
  FUN_1004f15a8(param_1 + 0x826);
  param_1[0x81e] = &PTR_FUN_10145bd70;
  FUN_1001589f0(param_1 + 0x823,1);
  FUN_1004f15a8(param_1 + 0x81e);
  param_1[0x816] = &PTR_FUN_10145bd70;
  FUN_1001589f0(param_1 + 0x81b,1);
  FUN_1004f15a8(param_1 + 0x816);
  param_1[0x80e] = &PTR_FUN_10145bd70;
  FUN_1001589f0(param_1 + 0x813,1);
  FUN_1004f15a8(param_1 + 0x80e);
  param_1[0x802] = &PTR_FUN_10145bd40;
  if (*(char *)((long)param_1 + 0x4067) < '\0') {
    operator_delete((void *)param_1[0x80a]);
  }
  if (*(char *)((long)param_1 + 0x404f) < '\0') {
    operator_delete((void *)param_1[0x807]);
  }
  FUN_1004f15a8(param_1 + 0x802);
  FUN_1004f15a8(param_1 + 0x7fd);
  param_1[0x7f5] = &PTR_FUN_10145bce0;
  if (*(char *)((long)param_1 + 0x3fe7) < '\0') {
    operator_delete((void *)param_1[0x7fa]);
  }
  FUN_1004f15a8(param_1 + 0x7f5);
  param_1[0x7ed] = &PTR_FUN_10145bcb0;
  if (*(char *)((long)param_1 + 0x3fa7) < '\0') {
    operator_delete((void *)param_1[0x7f2]);
  }
  FUN_1004f15a8(param_1 + 0x7ed);
  param_1[0x7e5] = &PTR_FUN_10145bc80;
  if (*(char *)((long)param_1 + 0x3f67) < '\0') {
    operator_delete((void *)param_1[0x7ea]);
  }
  FUN_1004f15a8(param_1 + 0x7e5);
  param_1[0x7dd] = &PTR_FUN_10145bc50;
  if (*(char *)((long)param_1 + 0x3f27) < '\0') {
    operator_delete((void *)param_1[0x7e2]);
  }
  FUN_1004f15a8(param_1 + 0x7dd);
  param_1[0x7d5] = &PTR_FUN_10145bc20;
  if (*(char *)((long)param_1 + 0x3ee7) < '\0') {
    operator_delete((void *)param_1[0x7da]);
  }
  FUN_1004f15a8(param_1 + 0x7d5);
  param_1[0x7ce] = &PTR_FUN_10145c130;
  FUN_10015d368(param_1 + 0x7d3,1);
  FUN_1004f15a8(param_1 + 0x7ce);
  param_1[0x7c5] = &PTR_FUN_10145c100;
  if (*(char *)((long)param_1 + 0x3e6f) < '\0') {
    operator_delete((void *)param_1[0x7cb]);
  }
  FUN_1004f15a8(param_1 + 0x7c5);
  param_1[0x7bc] = &PTR_FUN_10145c0d0;
  if (*(char *)((long)param_1 + 0x3e27) < '\0') {
    operator_delete((void *)param_1[0x7c2]);
  }
  FUN_1004f15a8(param_1 + 0x7bc);
  param_1[0x7b5] = &PTR_FUN_10145c0a0;
  FUN_10015cef8(param_1 + 0x7ba,1);
  FUN_1004f15a8(param_1 + 0x7b5);
  param_1[0x7ac] = &PTR_FUN_10145c070;
  if (*(char *)((long)param_1 + 0x3da7) < '\0') {
    operator_delete((void *)param_1[0x7b2]);
  }
  FUN_1004f15a8(param_1 + 0x7ac);
  param_1[0x797] = &PTR_FUN_10145c040;
  FUN_10015cb3c(param_1 + 0x7aa,1);
  FUN_10015cbc0(param_1 + 0x7a8,1);
  FUN_10015cbc0(param_1 + 0x7a6,1);
  FUN_10015cbc0(param_1 + 0x7a4,1);
  FUN_10015cbc0(param_1 + 0x7a2,1);
  FUN_10015cbc0(param_1 + 0x7a0,1);
  FUN_10015cc34(param_1 + 0x79e,1);
  FUN_10015ccb8(param_1 + 0x79c,1);
  FUN_1004f15a8(param_1 + 0x797);
  param_1[0x787] = &PTR_FUN_10145c010;
  FUN_10001629c(param_1 + 0x795,1);
  FUN_10001629c(param_1 + 0x793,1);
  FUN_10015690c(param_1 + 0x791,1);
  if (*(char *)((long)param_1 + 0x3c87) < '\0') {
    operator_delete((void *)param_1[0x78e]);
  }
  FUN_10015c28c(param_1 + 0x78c,1);
  FUN_1004f15a8(param_1 + 0x787);
  param_1[0x780] = &PTR_FUN_10145bfe0;
  FUN_10015bf94(param_1 + 0x785,1);
  FUN_1004f15a8(param_1 + 0x780);
  param_1[0x777] = &PTR_FUN_10145bbf0;
  if (*(char *)((long)param_1 + 0x3bf7) < '\0') {
    operator_delete((void *)param_1[0x77c]);
  }
  FUN_1004f15a8(param_1 + 0x777);
  param_1[0x76f] = &PTR_FUN_10145c3e0;
  if ((void *)param_1[0x775] != (void *)0x0) {
    operator_delete__((void *)param_1[0x775]);
    param_1[0x775] = 0;
    param_1[0x774] = 0;
  }
  FUN_1004f15a8(param_1 + 0x76f);
  param_1[0x762] = &PTR_FUN_10145be90;
  if (*(char *)((long)param_1 + 0x3b6f) < '\0') {
    operator_delete((void *)param_1[0x76b]);
  }
  FUN_1004f15a8(param_1 + 0x762);
  param_1[0x755] = &PTR_FUN_10145be60;
  if (*(char *)((long)param_1 + 0x3b07) < '\0') {
    operator_delete((void *)param_1[0x75e]);
  }
  FUN_1004f15a8(param_1 + 0x755);
  param_1[0x74a] = &PTR_FUN_10145bb60;
  FUN_10001629c(param_1 + 0x753,1);
  if (*(char *)((long)param_1 + 14999) < '\0') {
    operator_delete((void *)param_1[0x750]);
  }
  FUN_1004f15a8(param_1 + 0x74a);
  param_1[0x741] = &PTR_FUN_10145c3b0;
  if (*(char *)((long)param_1 + 0x3a47) < '\0') {
    operator_delete((void *)param_1[0x746]);
  }
  FUN_1004f15a8(param_1 + 0x741);
  param_1[0x738] = &PTR_FUN_10145c380;
  if (*(char *)((long)param_1 + 0x39ff) < '\0') {
    operator_delete((void *)param_1[0x73d]);
  }
  FUN_1004f15a8(param_1 + 0x738);
  param_1[0x730] = &PTR_FUN_10145be30;
  FUN_10015951c(param_1 + 0x735,1);
  FUN_1004f15a8(param_1 + 0x730);
  param_1[0x725] = &PTR_FUN_10145be00;
  if (*(char *)((long)param_1 + 0x3977) < '\0') {
    operator_delete((void *)param_1[0x72c]);
  }
  FUN_1001591f8(param_1 + 0x72a,1);
  FUN_1004f15a8(param_1 + 0x725);
  FUN_1004f15a8(param_1 + 0x71e);
  param_1[0x712] = &PTR_FUN_10145bb90;
  if (*(char *)((long)param_1 + 0x38e7) < '\0') {
    operator_delete((void *)param_1[0x71a]);
  }
  FUN_1004f15a8(param_1 + 0x712);
  param_1[0x709] = &PTR_FUN_10145c350;
  if (*(char *)((long)param_1 + 0x3887) < '\0') {
    operator_delete((void *)param_1[0x70e]);
  }
  FUN_1004f15a8(param_1 + 0x709);
  param_1[0x700] = &PTR_FUN_10145c320;
  FUN_10014ebf8(param_1 + 0x705,param_1[0x706]);
  FUN_1004f15a8(param_1 + 0x700);
  param_1[0x6f7] = &PTR_FUN_10145c2f0;
  if (*(char *)((long)param_1 + 0x37f7) < '\0') {
    operator_delete((void *)param_1[0x6fc]);
  }
  FUN_1004f15a8(param_1 + 0x6f7);
  param_1[0x6ee] = &PTR_FUN_10145c2c0;
  if (*(char *)((long)param_1 + 0x37af) < '\0') {
    operator_delete((void *)param_1[0x6f3]);
  }
  FUN_1004f15a8(param_1 + 0x6ee);
  param_1[0x6e2] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x376f) < '\0') {
    operator_delete((void *)param_1[0x6eb]);
  }
  if (*(char *)((long)param_1 + 0x374f) < '\0') {
    operator_delete((void *)param_1[0x6e7]);
  }
  FUN_1004f15a8(param_1 + 0x6e2);
  param_1[0x6d6] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x370f) < '\0') {
    operator_delete((void *)param_1[0x6df]);
  }
  if (*(char *)((long)param_1 + 0x36ef) < '\0') {
    operator_delete((void *)param_1[0x6db]);
  }
  FUN_1004f15a8(param_1 + 0x6d6);
  param_1[0x6ca] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 13999) < '\0') {
    operator_delete((void *)param_1[0x6d3]);
  }
  if (*(char *)((long)param_1 + 0x368f) < '\0') {
    operator_delete((void *)param_1[0x6cf]);
  }
  FUN_1004f15a8(param_1 + 0x6ca);
  param_1[0x6bf] = &PTR_FUN_10145a030;
  if (*(char *)((long)param_1 + 0x3647) < '\0') {
    operator_delete((void *)param_1[0x6c6]);
  }
  FUN_1004f15a8(param_1 + 0x6bf);
  param_1[0x6b0] = &PTR_FUN_10145bad0;
  if (*(char *)((long)param_1 + 0x35f7) < '\0') {
    operator_delete((void *)param_1[0x6bc]);
  }
  if (*(char *)((long)param_1 + 0x35df) < '\0') {
    operator_delete((void *)param_1[0x6b9]);
  }
  if (*(char *)((long)param_1 + 0x35c7) < '\0') {
    operator_delete((void *)param_1[0x6b6]);
  }
  FUN_1004f15a8(param_1 + 0x6b0);
  param_1[0x6a8] = &PTR_FUN_10145baa0;
  FUN_100157a40(param_1 + 0x6ad,1);
  FUN_1004f15a8(param_1 + 0x6a8);
  param_1[0x69c] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x353f) < '\0') {
    operator_delete((void *)param_1[0x6a5]);
  }
  if (*(char *)((long)param_1 + 0x351f) < '\0') {
    operator_delete((void *)param_1[0x6a1]);
  }
  FUN_1004f15a8(param_1 + 0x69c);
  param_1[0x690] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x34df) < '\0') {
    operator_delete((void *)param_1[0x699]);
  }
  if (*(char *)((long)param_1 + 0x34bf) < '\0') {
    operator_delete((void *)param_1[0x695]);
  }
  FUN_1004f15a8(param_1 + 0x690);
  param_1[0x684] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x347f) < '\0') {
    operator_delete((void *)param_1[0x68d]);
  }
  if (*(char *)((long)param_1 + 0x345f) < '\0') {
    operator_delete((void *)param_1[0x689]);
  }
  FUN_1004f15a8(param_1 + 0x684);
  param_1[0x678] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x341f) < '\0') {
    operator_delete((void *)param_1[0x681]);
  }
  if (*(char *)((long)param_1 + 0x33ff) < '\0') {
    operator_delete((void *)param_1[0x67d]);
  }
  FUN_1004f15a8(param_1 + 0x678);
  param_1[0x66c] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x33bf) < '\0') {
    operator_delete((void *)param_1[0x675]);
  }
  if (*(char *)((long)param_1 + 0x339f) < '\0') {
    operator_delete((void *)param_1[0x671]);
  }
  FUN_1004f15a8(param_1 + 0x66c);
  param_1[0x660] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x335f) < '\0') {
    operator_delete((void *)param_1[0x669]);
  }
  if (*(char *)((long)param_1 + 0x333f) < '\0') {
    operator_delete((void *)param_1[0x665]);
  }
  FUN_1004f15a8(param_1 + 0x660);
  FUN_100156e64(param_1 + 0x5c0);
  param_1[0x5b4] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x2dff) < '\0') {
    operator_delete((void *)param_1[0x5bd]);
  }
  if (*(char *)((long)param_1 + 0x2ddf) < '\0') {
    operator_delete((void *)param_1[0x5b9]);
  }
  FUN_1004f15a8(param_1 + 0x5b4);
  param_1[0x5a8] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x2d9f) < '\0') {
    operator_delete((void *)param_1[0x5b1]);
  }
  if (*(char *)((long)param_1 + 0x2d7f) < '\0') {
    operator_delete((void *)param_1[0x5ad]);
  }
  FUN_1004f15a8(param_1 + 0x5a8);
  param_1[0x59c] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x2d3f) < '\0') {
    operator_delete((void *)param_1[0x5a5]);
  }
  if (*(char *)((long)param_1 + 0x2d1f) < '\0') {
    operator_delete((void *)param_1[0x5a1]);
  }
  FUN_1004f15a8(param_1 + 0x59c);
  param_1[0x590] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x2cdf) < '\0') {
    operator_delete((void *)param_1[0x599]);
  }
  if (*(char *)((long)param_1 + 0x2cbf) < '\0') {
    operator_delete((void *)param_1[0x595]);
  }
  FUN_1004f15a8(param_1 + 0x590);
  param_1[0x584] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x2c7f) < '\0') {
    operator_delete((void *)param_1[0x58d]);
  }
  if (*(char *)((long)param_1 + 0x2c5f) < '\0') {
    operator_delete((void *)param_1[0x589]);
  }
  FUN_1004f15a8(param_1 + 0x584);
  param_1[0x578] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x2c1f) < '\0') {
    operator_delete((void *)param_1[0x581]);
  }
  if (*(char *)((long)param_1 + 0x2bff) < '\0') {
    operator_delete((void *)param_1[0x57d]);
  }
  FUN_1004f15a8(param_1 + 0x578);
  param_1[0x4ef] = &PTR_FUN_10145b9e0;
  if (*(char *)((long)param_1 + 0x2bbf) < '\0') {
    operator_delete((void *)param_1[0x575]);
  }
  lVar1 = 0;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0x2b97) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x2b80));
    }
    if (*(char *)((long)param_1 + lVar1 + 0x2b7f) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x2b68));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x400);
  FUN_1004f15a8(param_1 + 0x4ef);
  param_1[0x464] = &PTR_FUN_10145c260;
  if (*(char *)((long)param_1 + 0x2777) < '\0') {
    operator_delete((void *)param_1[0x4ec]);
  }
  lVar1 = 0;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0x2747) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x2730));
    }
    if (*(char *)((long)param_1 + lVar1 + 0x272f) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x2718));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x400);
  FUN_100156c78(param_1 + 0x469,1);
  FUN_1004f15a8(param_1 + 0x464);
  FUN_10015741c(param_1 + 0x3cc);
  param_1[0x3c0] = &PTR_FUN_10145c290;
  if (*(char *)((long)param_1 + 0x1e5f) < '\0') {
    operator_delete((void *)param_1[0x3c9]);
  }
  if (*(char *)((long)param_1 + 0x1e3f) < '\0') {
    operator_delete((void *)param_1[0x3c5]);
  }
  FUN_1004f15a8(param_1 + 0x3c0);
  param_1[0x335] = &PTR_FUN_10145c260;
  if (*(char *)((long)param_1 + 0x1dff) < '\0') {
    operator_delete((void *)param_1[0x3bd]);
  }
  lVar1 = 0;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0x1dcf) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x1db8));
    }
    if (*(char *)((long)param_1 + lVar1 + 0x1db7) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x1da0));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x400);
  FUN_100156c78(param_1 + 0x33a,1);
  FUN_1004f15a8(param_1 + 0x335);
  FUN_100157234(param_1 + 0x29a);
  FUN_100157078(param_1 + 0x208);
  param_1[0x1fc] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x103f) < '\0') {
    operator_delete((void *)param_1[0x205]);
  }
  if (*(char *)((long)param_1 + 0x101f) < '\0') {
    operator_delete((void *)param_1[0x201]);
  }
  FUN_1004f15a8(param_1 + 0x1fc);
  param_1[0x173] = &PTR_FUN_10145b9b0;
  if (*(char *)((long)param_1 + 0xfdf) < '\0') {
    operator_delete((void *)param_1[0x1f9]);
  }
  lVar1 = 0;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0xfb7) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 4000));
    }
    if (*(char *)((long)param_1 + lVar1 + 3999) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0xf88));
    }
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x400);
  FUN_1004f15a8(param_1 + 0x173);
  FUN_1004f15a8(param_1 + 0x16d);
  FUN_100156e64(param_1 + 0xcd);
  param_1[0xc5] = &PTR_FUN_10145c200;
  FUN_100169150(param_1 + 0xca,1);
  FUN_1004f15a8(param_1 + 0xc5);
  FUN_1004f15a8(param_1 + 0xbf);
  param_1[0xb7] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x5f7) < '\0') {
    operator_delete((void *)param_1[0xbc]);
  }
  FUN_1004f15a8(param_1 + 0xb7);
  param_1[0xaf] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x5b7) < '\0') {
    operator_delete((void *)param_1[0xb4]);
  }
  FUN_1004f15a8(param_1 + 0xaf);
  param_1[0xa7] = &PTR_FUN_10145b8f0;
  FUN_10015690c(param_1 + 0xac,1);
  FUN_1004f15a8(param_1 + 0xa7);
  param_1[0x9f] = &PTR_FUN_10145b8f0;
  FUN_10015690c(param_1 + 0xa4,1);
  FUN_1004f15a8(param_1 + 0x9f);
  param_1[0x97] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x4f7) < '\0') {
    operator_delete((void *)param_1[0x9c]);
  }
  FUN_1004f15a8(param_1 + 0x97);
  param_1[0x8f] = &PTR_FUN_10145b8c0;
  if (*(char *)((long)param_1 + 0x4b7) < '\0') {
    operator_delete((void *)param_1[0x94]);
  }
  FUN_1004f15a8(param_1 + 0x8f);
  param_1[0x87] = &PTR_FUN_10145b890;
  FUN_100156550(param_1 + 0x8d,1);
  FUN_1004f15a8(param_1 + 0x87);
  param_1[0x7b] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x437) < '\0') {
    operator_delete((void *)param_1[0x84]);
  }
  if (*(char *)((long)param_1 + 0x417) < '\0') {
    operator_delete((void *)param_1[0x80]);
  }
  FUN_1004f15a8(param_1 + 0x7b);
  param_1[0x6f] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x3d7) < '\0') {
    operator_delete((void *)param_1[0x78]);
  }
  if (*(char *)((long)param_1 + 0x3b7) < '\0') {
    operator_delete((void *)param_1[0x74]);
  }
  FUN_1004f15a8(param_1 + 0x6f);
  param_1[99] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x377) < '\0') {
    operator_delete((void *)param_1[0x6c]);
  }
  if (*(char *)((long)param_1 + 0x357) < '\0') {
    operator_delete((void *)param_1[0x68]);
  }
  FUN_1004f15a8(param_1 + 99);
  param_1[0x4f] = &PTR_FUN_10145c1c8;
  param_1[0x52] = &PTR_FUN_10145b950;
  FUN_100156c78(param_1 + 0x60,1);
  if (*(char *)((long)param_1 + 0x2ff) < '\0') {
    operator_delete((void *)param_1[0x5d]);
  }
  if (*(char *)((long)param_1 + 0x2e7) < '\0') {
    operator_delete((void *)param_1[0x5a]);
  }
  if (*(char *)((long)param_1 + 0x2cf) < '\0') {
    operator_delete((void *)param_1[0x57]);
  }
  FUN_1004f15a8(param_1 + 0x52);
  param_1[6] = &PTR_FUN_10145b860;
  param_1[3] = &PTR_FUN_10145c190;
  FUN_10015613c(param_1 + 0x16);
  FUN_100156080(param_1 + 0x11,1);
  if ((void *)param_1[0x10] != (void *)0x0) {
    operator_delete__((void *)param_1[0x10]);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
  }
  FUN_100155f24(param_1 + 0xd,1);
  FUN_100155eac(param_1 + 0xb,1);
  FUN_1004f15a8(param_1 + 6);
  FUN_1004f0a9c(param_1);
  return;
}

