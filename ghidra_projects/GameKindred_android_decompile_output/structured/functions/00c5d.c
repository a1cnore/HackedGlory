// functions/00c5d — 25 functions
#include "libGameKindred.h"




void thunk_FUN_00c5d8f0(long *param_1)

{
  uint uVar1;
  
  FUN_00c7c87c(param_1[0x739]);
  FUN_00f13f68(param_1 + 0x74d,0);
  FUN_00f13f08(0,0,param_1 + 0x74d);
  (**(code **)(*param_1 + 0xe8))(param_1);
  uVar1 = *(uint *)((long)param_1 + 0x3ba4);
  *(uint *)((long)param_1 + 0x3ba4) = uVar1 & 0xffffffef;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3ba4) = uVar1 & 0xffff806f;
    FUN_0091ada4(param_1 + 0x764);
    return;
  }
  return;
}




void thunk_FUN_00c5d8f0(long *param_1)

{
  uint uVar1;
  
  FUN_00c7c87c(param_1[0x739]);
  FUN_00f13f68(param_1 + 0x74d,0);
  FUN_00f13f08(0,0,param_1 + 0x74d);
  (**(code **)(*param_1 + 0xe8))(param_1);
  uVar1 = *(uint *)((long)param_1 + 0x3ba4);
  *(uint *)((long)param_1 + 0x3ba4) = uVar1 & 0xffffffef;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3ba4) = uVar1 & 0xffff806f;
    FUN_0091ada4(param_1 + 0x764);
    return;
  }
  return;
}




void FUN_00c5d3d0(long param_1)

{
  FUN_00c5c098(param_1 + -0xc0);
  return;
}




void * FUN_00c5d3d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   uint param_5)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = FUN_00b2ebf0(param_1 + 0x23b0,"GUILD");
  if (lVar1 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = operator_new(0x27a0);
    FUN_00c59e2c();
    *(uint *)((long)pvVar2 + 0x84) = *(uint *)((long)pvVar2 + 0x84) | 0x20;
    FUN_00c5a950(pvVar2,param_2,param_3,param_4,param_5 & 1);
    FUN_00b2da78(lVar1,pvVar2);
  }
  return pvVar2;
}




void * FUN_00c5d478(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   uint param_5)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = FUN_00b2ebf0(param_1 + 0x23b0,"TEAM");
  if (lVar1 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = operator_new(0x27a0);
    FUN_00c59e2c();
    *(uint *)((long)pvVar2 + 0x84) = *(uint *)((long)pvVar2 + 0x84) | 0x20;
    FUN_00c5ae84(pvVar2,param_2,param_3,param_4,param_5 & 1);
    FUN_00b2da78(lVar1,pvVar2);
  }
  return pvVar2;
}




void FUN_00c5d518(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = FUN_00b2ebf0(param_1 + 0x23b0,"REQUESTS");
  if (lVar1 != 0) {
    pvVar2 = operator_new(0x27a0);
    FUN_00c59e2c();
    *(uint *)((long)pvVar2 + 0x84) = *(uint *)((long)pvVar2 + 0x84) | 0x20;
    FUN_00c5b09c(pvVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8 & 1);
    FUN_00b2da78(lVar1,pvVar2);
    return;
  }
  return;
}




void FUN_00c5d5d0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = FUN_00b2ebf0(param_1 + 0x23b0,"RECENTS");
  if (lVar1 != 0) {
    pvVar2 = operator_new(0x27a0);
    FUN_00c59e2c();
    *(uint *)((long)pvVar2 + 0x84) = *(uint *)((long)pvVar2 + 0x84) | 0x20;
    FUN_00c5afc4(pvVar2,param_2,param_3,param_4 & 1);
    FUN_00b2da78(lVar1,pvVar2);
    return;
  }
  return;
}




void * FUN_00c5d66c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,
                   undefined4 param_9,undefined4 param_10,undefined4 param_11,byte param_12,
                   byte param_13,byte param_14,undefined4 param_15,byte param_16,undefined4 param_17
                   ,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  long lVar1;
  void *pvVar2;
  char *pcVar3;
  
  param_1 = param_1 + 0x23b0;
  if (param_8 == 0) {
    lVar1 = FUN_00b2ebf0(param_1,"OFFLINE_FRIENDS");
    if (lVar1 == 0) {
      return (void *)0x0;
    }
    pvVar2 = operator_new(0x27a0);
    FUN_00c59e2c();
    *(uint *)((long)pvVar2 + 0x84) = *(uint *)((long)pvVar2 + 0x84) | 0x20;
    FUN_00c5b1a8(pvVar2,param_2,param_3,param_4,param_5,param_6,param_7,0,param_9,param_10,param_11,
                 param_12 & 1,0,param_15,param_16 & 1,param_17,param_18,param_19,param_20);
  }
  else {
    if ((param_14 & 1) == 0) {
      if ((param_13 & 1) == 0) {
        pcVar3 = "ONLINE_FRIENDS";
      }
      else {
        pcVar3 = "GUILD";
      }
      lVar1 = FUN_00b2ebf0(param_1,pcVar3);
      if (lVar1 == 0) {
        return (void *)0x0;
      }
      pvVar2 = operator_new(0x27a0);
      FUN_00c59e2c();
      *(uint *)((long)pvVar2 + 0x84) = *(uint *)((long)pvVar2 + 0x84) | 0x20;
    }
    else {
      lVar1 = FUN_00b2ebf0(param_1,"TEAM");
      if (lVar1 == 0) {
        return (void *)0x0;
      }
      pvVar2 = operator_new(0x27a0);
      FUN_00c59e2c();
      *(uint *)((long)pvVar2 + 0x84) = *(uint *)((long)pvVar2 + 0x84) | 0x20;
    }
    FUN_00c5b1a8(pvVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12 & 1,0,param_15,param_16 & 1,param_17,param_18,param_19,param_20);
  }
  FUN_00b2da78(lVar1,pvVar2);
  return pvVar2;
}




void FUN_00c5d8f0(long *param_1)

{
  uint uVar1;
  
  FUN_00c7c87c(param_1[0x739]);
  FUN_00f13f68(param_1 + 0x74d,0);
  FUN_00f13f08(0,0,param_1 + 0x74d);
  (**(code **)(*param_1 + 0xe8))(param_1);
  uVar1 = *(uint *)((long)param_1 + 0x3ba4);
  *(uint *)((long)param_1 + 0x3ba4) = uVar1 & 0xffffffef;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3ba4) = uVar1 & 0xffff806f;
    FUN_0091ada4(param_1 + 0x764);
    return;
  }
  return;
}




void FUN_00c5d97c(void)

{
  return;
}




void FUN_00c5d980(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c5d990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
    return;
  }
  return;
}




void FUN_00c5d998(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c5d9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
    return;
  }
  return;
}




void FUN_00c5d9b0(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c5d9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
    return;
  }
  return;
}




void FUN_00c5d9c8(void)

{
  return;
}




void FUN_00c5d9cc(long *param_1,undefined8 param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float local_50;
  undefined1 auStack_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_4c,&local_50);
  fVar3 = local_50;
  fVar2 = (float)FUN_00f04924(param_2);
  FUN_00f13f68(param_1 + 0x74d,(ulong)(uint)(int)(fVar3 * fVar2) << 0x20);
  fVar3 = (float)FUN_00f04924(param_2);
  FUN_00f13f08(0,local_50 * fVar3,param_1 + 0x74d);
  (**(code **)(*param_1 + 0xe8))(param_1);
  uVar4 = *(uint *)((long)param_1 + 0x3ba4);
  if ((uVar4 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x3ba4) = uVar4 & 0xffff807f | 0x3f80;
    FUN_0091ada4(param_1 + 0x764);
    uVar4 = *(uint *)((long)param_1 + 0x3ba4);
  }
  *(uint *)((long)param_1 + 0x3ba4) = uVar4 | 0x10;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c5d8f0(long *param_1)

{
  uint uVar1;
  
  FUN_00c7c87c(param_1[0x739]);
  FUN_00f13f68(param_1 + 0x74d,0);
  FUN_00f13f08(0,0,param_1 + 0x74d);
  (**(code **)(*param_1 + 0xe8))(param_1);
  uVar1 = *(uint *)((long)param_1 + 0x3ba4);
  *(uint *)((long)param_1 + 0x3ba4) = uVar1 & 0xffffffef;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3ba4) = uVar1 & 0xffff806f;
    FUN_0091ada4(param_1 + 0x764);
    return;
  }
  return;
}




void thunk_FUN_00c5d8f0(long *param_1)

{
  uint uVar1;
  
  FUN_00c7c87c(param_1[0x739]);
  FUN_00f13f68(param_1 + 0x74d,0);
  FUN_00f13f08(0,0,param_1 + 0x74d);
  (**(code **)(*param_1 + 0xe8))(param_1);
  uVar1 = *(uint *)((long)param_1 + 0x3ba4);
  *(uint *)((long)param_1 + 0x3ba4) = uVar1 & 0xffffffef;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3ba4) = uVar1 & 0xffff806f;
    FUN_0091ada4(param_1 + 0x764);
    return;
  }
  return;
}




void FUN_00c5dacc(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  FUN_00c5c138(param_1,0);
  return;
}




void FUN_00c5db00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fe378;
  if ((void *)param_1[0x30c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x30c]);
    param_1[0x30c] = 0;
    param_1[0x30b] = 0;
  }
  FUN_00aad654(param_1 + 0x191);
  FUN_00aad654(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c5db58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fe378;
  if ((void *)param_1[0x30c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x30c]);
    param_1[0x30c] = 0;
    param_1[0x30b] = 0;
  }
  FUN_00aad654(param_1 + 0x191);
  FUN_00aad654(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c5dbb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fe4c0;
  if ((*(byte *)(param_1 + 0x30b) & 1) != 0) {
    operator_delete((void *)param_1[0x30d]);
  }
  FUN_00aad654(param_1 + 0x191);
  FUN_00aad654(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c5dc0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fe4c0;
  if ((*(byte *)(param_1 + 0x30b) & 1) != 0) {
    operator_delete((void *)param_1[0x30d]);
  }
  FUN_00aad654(param_1 + 0x191);
  FUN_00aad654(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c5dc68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fe608;
  FUN_00ab3254(param_1 + 0x10b);
  FUN_00f0d3a4(param_1 + 0xe5);
  FUN_00f13d08(param_1 + 0xce);
  FUN_00ab3254(param_1 + 0x54);
  FUN_00f0d3a4(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c5dccc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fe608;
  FUN_00ab3254(param_1 + 0x10b);
  FUN_00f0d3a4(param_1 + 0xe5);
  FUN_00f13d08(param_1 + 0xce);
  FUN_00ab3254(param_1 + 0x54);
  FUN_00f0d3a4(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c5dd38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fe750;
  if ((*(byte *)(param_1 + 0x4f1) & 1) != 0) {
    operator_delete((void *)param_1[0x4f3]);
  }
  FUN_0090eb54(param_1 + 0x4ee,1);
  if ((*(byte *)(param_1 + 0x4e9) & 1) != 0) {
    operator_delete((void *)param_1[0x4eb]);
  }
  if ((*(byte *)(param_1 + 0x4e6) & 1) != 0) {
    operator_delete((void *)param_1[0x4e8]);
  }
  if ((*(byte *)(param_1 + 0x4e3) & 1) != 0) {
    operator_delete((void *)param_1[0x4e5]);
  }
  if ((*(byte *)(param_1 + 0x4e0) & 1) != 0) {
    operator_delete((void *)param_1[0x4e2]);
  }
  FUN_00f13d08(param_1 + 0x4c9);
  param_1[0x349] = &PTR_FUN_027d8d40;
  param_1[0x4a9] = &PTR_FUN_028266f0;
  param_1[0x4c0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4c3);
  FUN_00f13d08(param_1 + 0x4a9);
  param_1[0x48b] = &PTR_FUN_028266f0;
  param_1[0x4a2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4a5);
  FUN_00f13d08(param_1 + 0x48b);
  FUN_00ac6220(param_1 + 0x420);
  FUN_00ac6220(param_1 + 0x3b5);
  FUN_00f0d3a4(param_1 + 0x38f);
  param_1[0x371] = &PTR_FUN_028266f0;
  param_1[0x388] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x38b);
  FUN_00f13d08(param_1 + 0x371);
  FUN_00f01868(param_1 + 0x360);
  FUN_00f13d08(param_1 + 0x349);
  param_1[0x32b] = &PTR_FUN_028266f0;
  param_1[0x342] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x345);
  FUN_00f13d08(param_1 + 0x32b);
  param_1[0x30a] = &PTR_FUN_028266f0;
  param_1[0x321] = &PTR_FUN_02826850;
  param_1[0x1aa] = &PTR_FUN_027d6650;
  FUN_00f0a79c(param_1 + 0x324);
  FUN_00f13d08(param_1 + 0x30a);
  param_1[0x2ec] = &PTR_FUN_028266f0;
  param_1[0x303] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x306);
  FUN_00f13d08(param_1 + 0x2ec);
  FUN_00ac6220(param_1 + 0x281);
  FUN_00ac6220(param_1 + 0x216);
  FUN_00f0d3a4(param_1 + 0x1f0);
  param_1[0x1d2] = &PTR_FUN_028266f0;
  param_1[0x1e9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1ec);
  FUN_00f13d08(param_1 + 0x1d2);
  FUN_00f01868(param_1 + 0x1c1);
  FUN_00f13d08(param_1 + 0x1aa);
  param_1[0x18c] = &PTR_FUN_028266f0;
  param_1[0x1a3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a6);
  FUN_00f13d08(param_1 + 0x18c);
  FUN_00f13d08(param_1 + 0x175);
  FUN_00f0d3a4(param_1 + 0x14f);
  param_1[0xf3] = &PTR_FUN_027d8bf8;
  FUN_00f0d3a4(param_1 + 0x128);
  param_1[0x10a] = &PTR_FUN_028266f0;
  param_1[0x121] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x124);
  FUN_00f13d08(param_1 + 0x10a);
  FUN_00f13d08(param_1 + 0xf3);
  param_1[0xd5] = &PTR_FUN_028266f0;
  param_1[0xec] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xef);
  FUN_00f13d08(param_1 + 0xd5);
  FUN_00f13d08(param_1 + 0xbe);
  FUN_00f13d08(param_1 + 0xa7);
  param_1[0x89] = &PTR_FUN_028266f0;
  param_1[0xa0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa3);
  FUN_00f13d08(param_1 + 0x89);
  param_1[0x6b] = &PTR_FUN_028266f0;
  param_1[0x82] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x85);
  FUN_00f13d08(param_1 + 0x6b);
  FUN_00f13d08(param_1 + 0x54);
  param_1[0x36] = &PTR_FUN_028266f0;
  param_1[0x4d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x50);
  FUN_00f13d08(param_1 + 0x36);
  param_1[0x18] = &PTR_FUN_028266f0;
  param_1[0x2f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00b2cfd4(param_1);
  return;
}

