// functions/009d8 — 45 functions
#include "libGameKindred.h"




undefined8 * FUN_009d803c(undefined8 *param_1)

{
  FUN_009df040();
  *param_1 = &PTR_thunk_FUN_009df4b8_027c34d8;
  FUN_009df57c(param_1,"Horns_bnd");
  return param_1;
}




void FUN_009d8080(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009d8088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009d808c(undefined8 *param_1)

{
  FUN_009d8dfc();
  *param_1 = &PTR_thunk_FUN_009d917c_027c3510;
  FUN_009d80c8(param_1,"u_twirling_silver");
  return;
}




void FUN_009d80c8(long param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40);
  FUN_008fce60(param_1 + 0xa8,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d8134(void *param_1)

{
  FUN_009d917c();
  operator_delete(param_1);
  return;
}




void FUN_009d8158(long param_1)

{
  long lVar1;
  
  DAT_0312eb70 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312eb70 + 1;
  lVar1 = param_1 + (ulong)DAT_0312eb70 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009d8228;
  *(code **)(lVar1 + 0xb8) = FUN_009d826c;
  *(uint *)(lVar1 + 0xa4) = DAT_0312eb70;
  *(undefined4 *)(lVar1 + 0xa8) = 200;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 2;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,3,FUN_009d91e0,0);
  return;
}




undefined4 FUN_009d81c8(void)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  lVar1 = FUN_009d9230();
  lVar1 = *(long *)(lVar1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00d6bbac(lVar1,DAT_0315cf30,0);
  uVar3 = 0x3f800000;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 * FUN_009d8228(undefined8 *param_1)

{
  FUN_009d8dfc();
  *param_1 = &PTR_thunk_FUN_009d917c_027c3510;
  FUN_009d80c8(param_1,"u_twirling_silver");
  return param_1;
}




void FUN_009d826c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009d8274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009d8278(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[5] = &PTR_FUN_027c3578;
  *param_1 = &PTR_FUN_027c3548;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(byte *)((long)param_1 + 0x4c) = *(byte *)((long)param_1 + 0x4c) & 0xfc | 1;
  return;
}




void FUN_009d82d8(long param_1)

{
  long lVar1;
  
  DAT_0312f988 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312f988 + 1;
  lVar1 = param_1 + (ulong)DAT_0312f988 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009d85a4;
  *(code **)(lVar1 + 0xb8) = FUN_009d8608;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(uint *)(lVar1 + 0xa4) = DAT_0312f988;
  *(undefined4 *)(lVar1 + 0xa8) = 0x50;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,3,FUN_009d8348,0);
  return;
}




void FUN_009d8348(long param_1)

{
  if (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_0312f988) {
    param_1 = 0;
  }
  FUN_009d8364(param_1);
  return;
}




void FUN_009d8364(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_8c [4];
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c09220) {
    lVar3 = 0;
  }
  lVar3 = *(long *)(lVar3 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_0312eae0))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  fVar4 = (float)(**(code **)(param_1 + 0x40))();
  if (fVar4 <= 0.0) goto LAB_009d84a8;
  fVar6 = *(float *)(param_1 + 0x48);
  fVar5 = (float)FUN_01988c78();
  fVar4 = fmodf(fVar6 + fVar4 * fVar5,6.2831855);
  *(float *)(param_1 + 0x48) = fVar4;
  FUN_009b37f0(lVar3,&local_88,*(undefined8 *)(param_1 + 0x38));
  bVar1 = *(byte *)(param_1 + 0x4c) & 3;
  if (bVar1 == 2) {
    fVar5 = *(float *)(param_1 + 0x48);
    fVar4 = sinf(fVar5);
    local_88 = 0.0;
    fStack_84 = 0.0;
LAB_009d8484:
    fStack_7c = cosf(fVar5);
    local_80 = fVar4;
  }
  else {
    if (bVar1 == 1) {
      fVar5 = *(float *)(param_1 + 0x48);
      fStack_84 = sinf(fVar5);
      local_88 = 0.0;
LAB_009d8464:
      fVar4 = 0.0;
      goto LAB_009d8484;
    }
    if ((*(byte *)(param_1 + 0x4c) & 3) == 0) {
      fVar5 = *(float *)(param_1 + 0x48);
      local_88 = sinf(fVar5);
      fStack_84 = 0.0;
      goto LAB_009d8464;
    }
  }
  FUN_009b3858(lVar3,&local_88,*(undefined8 *)(param_1 + 0x38),auStack_8c);
LAB_009d84a8:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d84d8(long param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) & 0xfc | param_4 & 3;
  return;
}




void FUN_009d84ec(long param_1)

{
  FUN_0198931c(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009d8514(void *param_1)

{
  FUN_0198931c((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009d8544(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_009d8568(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




long FUN_009d8594(long param_1)

{
  return param_1 + -0x28;
}




long FUN_009d859c(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_009d85a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[5] = &PTR_FUN_027c3578;
  *param_1 = &PTR_FUN_027c3548;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(byte *)((long)param_1 + 0x4c) = *(byte *)((long)param_1 + 0x4c) & 0xfc | 1;
  return param_1;
}




void FUN_009d8608(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009d8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009d8614(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027c35a8;
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x3f800000;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = DAT_03214ce8;
  param_1[0xe] = DAT_03218f30;
  *(undefined4 *)(param_1 + 0xf) = DAT_03218f38;
  uVar2 = FUN_01985d44(param_1,DAT_0312ead4);
  param_1[7] = uVar2;
  FUN_01995ebc(auStack_50);
  local_40 = 0x42fc0000;
  local_48 = 0x42e0000042c00000;
  FUN_01996270(auStack_50,0,&local_48,3,1,"u_indicator_color");
  uVar2 = FUN_019962e8(auStack_50);
  param_1[8] = uVar2;
  FUN_01995ef4(auStack_50);
  FUN_01995ebc(auStack_50);
  local_40 = 0;
  local_48 = 0x42c00000;
  FUN_01996270(auStack_50,0,&local_48,3,1,"u_indicator_color");
  uVar2 = FUN_019962e8(auStack_50);
  param_1[9] = uVar2;
  FUN_01995ef4(auStack_50);
  FUN_01995ebc(auStack_50);
  local_40 = 0x42e20000;
  local_48 = 0x42ca000042ac0000;
  FUN_01996270(auStack_50,0,&local_48,3,1,"u_indicator_color");
  uVar2 = FUN_019962e8(auStack_50);
  param_1[10] = uVar2;
  FUN_01995ef4(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d87c4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[8];
  *param_1 = &PTR_FUN_027c35a8;
  if (pvVar1 != (void *)0x0) {
    FUN_01996dbc(pvVar1);
    operator_delete(pvVar1);
    param_1[8] = 0;
  }
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    FUN_01996dbc(pvVar1);
    operator_delete(pvVar1);
    param_1[9] = 0;
  }
  pvVar1 = (void *)param_1[10];
  if (pvVar1 != (void *)0x0) {
    FUN_01996dbc(pvVar1);
    operator_delete(pvVar1);
    param_1[10] = 0;
  }
  FUN_01985bd0(param_1);
  return;
}




void FUN_009d8848(void *param_1)

{
  FUN_009d87c4();
  operator_delete(param_1);
  return;
}




void FUN_009d886c(long param_1)

{
  long lVar1;
  
  DAT_0312eaf0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312eaf0 + 1;
  lVar1 = param_1 + (ulong)DAT_0312eaf0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009d8dcc;
  *(code **)(lVar1 + 0xb8) = FUN_009d8df0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 800;
  *(uint *)(lVar1 + 0xa4) = DAT_0312eaf0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x80;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_009d8910,0);
  FUN_019867cc(param_1,0x36de0632,FUN_009d8928,0);
  return;
}




void FUN_009d8910(long param_1)

{
  if ((*(char *)(param_1 + 0x59) != '\0') && (*(char *)(param_1 + 0x58) != '\0')) {
    FUN_009d8a00();
    return;
  }
  return;
}




void FUN_009d8a00(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_78;
  float local_70;
  float local_68 [6];
  undefined8 local_50;
  undefined8 uStack_48;
  float local_40;
  long local_3c;
  float fStack_34;
  float fStack_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x60);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x68) == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
      FUN_00d55794(uVar3,&local_78,0);
      fVar4 = (float)local_78 + (float)*(undefined8 *)(param_1 + 0x70);
      fVar5 = (float)((ulong)local_78 >> 0x20) +
              (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
      local_78 = CONCAT44(fVar5,fVar4);
      local_70 = local_70 + *(float *)(param_1 + 0x78);
      local_68[3] = 0.0;
      local_68[4] = 0.0;
      local_68[1] = 0.0;
      local_68[2] = 0.0;
      uStack_48 = 0;
      local_50 = 0;
      local_68[0] = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x5c);
      local_2c = 0x3f800000;
      local_3c = (ulong)(uint)(fVar4 + 0.0) << 0x20;
      _fStack_34 = CONCAT44(local_70 + 0.0,
                            fVar5 + *(float *)(*(long *)(param_1 + 0x30) + 0x14) + 0.0);
      local_68[5] = local_68[0];
      local_40 = local_68[0];
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_00e7ca50(*(long *)(param_1 + 0x38),local_68);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d8b0c(float param_1,long param_2,undefined8 *param_3,undefined8 param_4,long param_5)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_5 + 0x10) * 0.5;
  if (param_1 != -1.0) {
    fVar3 = param_1;
  }
  *(float *)(param_2 + 0x5c) = fVar3;
  *(undefined8 *)(param_2 + 0x60) = *param_3;
  uVar1 = *(undefined4 *)(param_3 + 1);
  *(long *)(param_2 + 0x30) = param_5;
  *(undefined4 *)(param_2 + 0x68) = uVar1;
  if (*(long *)(param_2 + 0x38) != 0) {
    iVar2 = FUN_00e6a474(param_4);
    if (iVar2 != 0) {
      (**(code **)(**(long **)(param_2 + 0x38) + 0x20))(*(long **)(param_2 + 0x38),param_4);
      *(undefined1 *)(*(long *)(param_2 + 0x38) + 0x33) = 0xb;
      FUN_00e7cdd0(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40));
    }
    if (*(long *)(param_2 + 0x38) != 0) {
      FUN_00e7ce38();
    }
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}




void FUN_009d8ba8(long param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x70) = *param_2;
  return;
}




void FUN_009d8bbc(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x5c) = param_1;
  return;
}




void FUN_009d8bc4(long param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 1;
  FUN_009d8bd0();
  return;
}




void FUN_009d8bd0(long param_1)

{
  if ((*(char *)(param_1 + 0x59) == '\0') || (*(char *)(param_1 + 0x58) == '\0')) {
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_00e7ce38();
      return;
    }
  }
  else {
    FUN_009d8a00(param_1);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_00e7cdd8();
      return;
    }
  }
  return;
}




void FUN_009d8c2c(long param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 0;
  FUN_009d8bd0();
  return;
}




float FUN_009d8c34(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  float local_38 [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x60);
  uVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x68) == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x60) = 0;
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0x68) = DAT_03214ce8;
    }
  }
  FUN_00d55794(uVar3,local_38,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return local_38[0] + *(float *)(param_1 + 0x70);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d8ce0(long param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00e7ca48(*(undefined8 *)(param_1 + 0x38));
    FUN_0198aba0();
    FUN_00e7cdd0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}




void FUN_009d8d1c(long param_1)

{
  if (*(int *)(param_1 + 0x28) != 1) {
    FUN_00e7ca48(*(undefined8 *)(param_1 + 0x38));
    FUN_0198aba0();
    FUN_00e7cdd0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  return;
}




void FUN_009d8d64(long param_1)

{
  if (*(int *)(param_1 + 0x28) != 2) {
    FUN_00e7ca48(*(undefined8 *)(param_1 + 0x38));
    FUN_0198aba0();
    FUN_00e7cdd0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  return;
}




void FUN_009d8dac(long param_1,byte *param_2)

{
  *(bool *)(param_1 + 0x59) = (byte)((*param_2 & 0x1f) - 1) < 2;
  FUN_009d8bd0();
  return;
}




undefined8 FUN_009d8dcc(undefined8 param_1)

{
  FUN_009d8614();
  return param_1;
}




void FUN_009d8df0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009d8df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009d8dfc(undefined8 *param_1)

{
  ushort *puVar1;
  
  *param_1 = &PTR_FUN_027c35d8;
  puVar1 = (ushort *)(param_1 + 5);
  *(undefined4 *)(param_1 + 0xd) = 1;
  param_1[0xe] = FUN_009d8f04;
  param_1[0x13] = 0;
  param_1[0x14] = param_1;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[7] = FUN_009d8ea4;
  param_1[8] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *puVar1 = *puVar1 & 0x8000 | 0xbff;
  FUN_009d8fbc(puVar1,0,1);
  FUN_009d9044(puVar1,0,0,0);
  return;
}




void FUN_009d8ea4(long param_1)

{
  long lVar1;
  
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + 0xa4) == DAT_02c09220)) &&
     (lVar1 = FUN_00d5bae0(), lVar1 != 0)) {
    FUN_009d9044(param_1 + 0x28,1,0,0);
    return;
  }
  return;
}




void FUN_009d8f04(long *param_1)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  
  lVar3 = param_1[2];
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c09220) {
    lVar3 = 0;
  }
  fVar4 = (float)(**(code **)(*param_1 + 0x20))(param_1);
  pfVar2 = (float *)(param_1 + 0x18);
  if (fVar4 != *pfVar2) {
    *pfVar2 = fVar4;
    for (lVar3 = *(long *)(lVar3 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_0312e4a8) {
        if ((*(byte *)(param_1 + 0x15) & 1) == 0) {
          lVar1 = (long)param_1 + 0xa9;
        }
        else {
          lVar1 = param_1[0x17];
        }
        FUN_009ad804(lVar3,lVar1,pfVar2,1);
        return;
      }
    }
  }
  return;
}




void FUN_009d8fbc(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar1 = *param_1 >> 10;
  if ((uVar1 & 0x1f) != 0) {
    uVar2 = 0;
    puVar4 = param_1 + 4;
    do {
      if (*puVar4 == param_2) goto LAB_009d8ff0;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_009d8ff0:
    if ((uVar1 & 0x1f) != 0) {
      uVar3 = 0;
      puVar4 = param_1 + 4;
      do {
        if (*puVar4 == param_3) {
          if (uVar2 == 0xffffffff) {
            return;
          }
          param_1[(long)(int)uVar2 * 0x1c + 5] =
               param_1[(long)(int)uVar2 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar3 & 0x1f));
          return;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 0x1c;
      } while (uVar3 < (uVar1 & 0x1f));
    }
  }
  return;
}

