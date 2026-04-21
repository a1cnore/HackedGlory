// functions/00a79 — 8 functions
#include "libGameKindred.h"




void FUN_00a79978(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00a7b59c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void * FUN_00a79a00(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x898);
  FUN_00a7b2c8();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00a79a6c(long param_1)

{
  *(undefined1 *)(param_1 + 0x5365) = 1;
  FUN_00a7b098();
  return;
}




void FUN_00a79a84(long param_1)

{
  if (*(char *)(param_1 + 0x5364) != '\0') {
    FUN_00a7b058();
    return;
  }
  FUN_00a7b098();
  return;
}




void FUN_00a79aa0(long param_1,undefined4 *param_2)

{
  long lVar1;
  char *pcVar2;
  float fVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)param_2[1];
  *(float *)(param_1 + 0x890) = fVar3;
  *(undefined1 *)(param_1 + 0x894) = *(undefined1 *)(param_2 + 2);
  switch(*param_2) {
  case 0:
    pcVar2 = "hud_pingicon_action_turret";
    break;
  case 1:
    pcVar2 = "hud_pingicon_action_kraken";
    break;
  case 2:
    pcVar2 = "hud_pingicon_action_gold_miner";
    break;
  case 3:
    pcVar2 = "hud_pingicon_action_vain_crystal";
    break;
  case 4:
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfffffffb;
    *(uint *)(param_1 + 0x734) = *(uint *)(param_1 + 0x734) & 0xfffffffb;
    *(uint *)(param_1 + 0x824) = *(uint *)(param_1 + 0x824) | 4;
    goto LAB_00a79b60;
  default:
    goto switchD_00a79aec_default;
  }
  FUN_00f0e578(param_1 + 0x590,pcVar2);
  fVar3 = *(float *)(param_1 + 0x890);
LAB_00a79b60:
  fVar3 = fVar3 + -1.75;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)(param_1 + 0x890) = fVar3;
switchD_00a79aec_default:
  local_2c = 0xffbc9c44;
  if (*(char *)(param_1 + 0x894) != '\x01') {
    local_2c = 0xff1166f2;
  }
  FUN_00f0e670(param_1 + 0x590,&local_2c,2);
  FUN_00f0e670(param_1 + 0x3b0,&local_2c,2);
  FUN_00f0e670(param_1 + 0x6b0,&local_2c,2);
  FUN_00f0e670(param_1 + 0x7a0,&local_2c,2);
  *(byte *)(param_1 + 0x878) =
       *(byte *)(param_1 + 0x878) & 0xfd | (*(char *)(param_1 + 0x894) == '\x02') << 1;
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a79c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a7b284(param_1,param_2,param_5);
  return;
}




void FUN_00a79c1c(undefined1 param_1 [16],float param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined8 local_68;
  float local_60;
  undefined1 auStack_5c [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(auStack_5c,&local_60);
  lVar3 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efdc08(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  if ((param_4 & 1) == 0) {
    local_68 = (ulong)(uint)local_60 << 0x20;
    FUN_00efdc50(puVar6,&local_68);
    FUN_00efcac4(0x3e4ccccd,puVar6);
    FUN_00efcb24(puVar6,FUN_009a71a4);
    FUN_00f01980(param_3 + 0x160);
    FUN_00f022a0(param_3 + 0x160,puVar6);
    lVar3 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efdc08(puVar6);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    uVar1 = *(undefined4 *)(param_3 + 0x3c48);
    FUN_00f01fcc(param_3 + 0x3c08,1,0,1,1);
    local_68 = CONCAT44(local_60 + param_2 * -0.5 + -16.0,uVar1);
    FUN_00efdc50(puVar6,&local_68);
    FUN_00efcac4(0x3e4ccccd,puVar6);
    pcVar4 = FUN_0091aa80;
  }
  else {
    local_68 = 0;
    FUN_00efdc50(puVar6,&local_68);
    FUN_00efcac4(0x3e4ccccd,puVar6);
    FUN_00efcb24(puVar6,FUN_0091aa80);
    FUN_00f01980(param_3 + 0x160);
    FUN_00f022a0(param_3 + 0x160,puVar6);
    lVar3 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_00efdc08(puVar6);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    uVar1 = *(undefined4 *)(param_3 + 0x3c48);
    FUN_00f01fcc(param_3 + 0x3c08,1,0,1,1);
    local_68 = CONCAT44(local_60 + param_2 * 0.5,uVar1);
    FUN_00efdc50(puVar6,&local_68);
    FUN_00efcac4(0x3e4ccccd,puVar6);
    pcVar4 = FUN_009a71a4;
  }
  FUN_00efcb24(puVar6,pcVar4);
  FUN_00f01980(param_3 + 0x3c08);
  FUN_00f022a0(param_3 + 0x3c08,puVar6);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a79f9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cdbc0;
  if ((void *)param_1[0xa6b] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xa6a) = 0;
    operator_delete__((void *)param_1[0xa6b]);
    param_1[0xa6a] = 0;
    param_1[0xa6b] = 0;
  }
  FUN_009c7fa8(param_1 + 0x7b2);
  FUN_00a29250(param_1 + 0x792);
  FUN_00f01868(param_1 + 0x781);
  param_1[0x6c2] = &PTR_FUN_027d5388;
  param_1[0x75d] = &PTR_FUN_028266f0;
  param_1[0x774] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x777);
  FUN_00f13d08(param_1 + 0x75d);
  param_1[0x73f] = &PTR_FUN_028266f0;
  param_1[0x756] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x759);
  FUN_00f13d08(param_1 + 0x73f);
  param_1[0x721] = &PTR_FUN_028266f0;
  param_1[0x738] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x73b);
  FUN_00f13d08(param_1 + 0x721);
  FUN_00f01868(param_1 + 0x710);
  FUN_009c825c(param_1 + 0x6c2);
  FUN_009c7fa8(param_1 + 0x40a);
  FUN_00f13d08(param_1 + 0x3f1);
  FUN_00f0d3a4(param_1 + 0x3cb);
  FUN_009c825c(param_1 + 0x37d);
  param_1[0x35f] = &PTR_FUN_028266f0;
  param_1[0x376] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x379);
  FUN_00f13d08(param_1 + 0x35f);
  param_1[0x341] = &PTR_FUN_028266f0;
  param_1[0x358] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x35b);
  FUN_00f13d08(param_1 + 0x341);
  param_1[0x323] = &PTR_FUN_028266f0;
  param_1[0x33a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x33d);
  FUN_00f13d08(param_1 + 0x323);
  param_1[0x305] = &PTR_FUN_028266f0;
  param_1[0x31c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 799);
  FUN_00f13d08(param_1 + 0x305);
  FUN_00f0d3a4(param_1 + 0x2df);
  FUN_00f13d08(param_1 + 0x2c8);
  param_1[0x209] = &PTR_FUN_027d5388;
  param_1[0x2a4] = &PTR_FUN_028266f0;
  param_1[699] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2be);
  FUN_00f13d08(param_1 + 0x2a4);
  param_1[0x286] = &PTR_FUN_028266f0;
  param_1[0x29d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2a0);
  FUN_00f13d08(param_1 + 0x286);
  param_1[0x268] = &PTR_FUN_028266f0;
  param_1[0x27f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x282);
  FUN_00f13d08(param_1 + 0x268);
  FUN_00f01868(param_1 + 599);
  FUN_009c825c(param_1 + 0x209);
  param_1[0x14a] = &PTR_FUN_027d5388;
  param_1[0x1e5] = &PTR_FUN_028266f0;
  param_1[0x1fc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1ff);
  FUN_00f13d08(param_1 + 0x1e5);
  param_1[0x1c7] = &PTR_FUN_028266f0;
  param_1[0x1de] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1e1);
  FUN_00f13d08(param_1 + 0x1c7);
  param_1[0x1a9] = &PTR_FUN_028266f0;
  param_1[0x1c0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1c3);
  FUN_00f13d08(param_1 + 0x1a9);
  FUN_00f01868(param_1 + 0x198);
  FUN_009c825c(param_1 + 0x14a);
  FUN_00f13d08(param_1 + 0x131);
  FUN_00f01868(param_1 + 0x120);
  param_1[0x102] = &PTR_FUN_028266f0;
  param_1[0x119] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x11c);
  FUN_00f13d08(param_1 + 0x102);
  param_1[0xe4] = &PTR_FUN_028266f0;
  param_1[0xfb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfe);
  FUN_00f13d08(param_1 + 0xe4);
  param_1[0xc6] = &PTR_FUN_028266f0;
  param_1[0xdd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe0);
  FUN_00f13d08(param_1 + 0xc6);
  FUN_00f01868(param_1 + 0xb5);
  param_1[0x97] = &PTR_FUN_028266f0;
  param_1[0xae] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb1);
  FUN_00f13d08(param_1 + 0x97);
  param_1[0x79] = &PTR_FUN_028266f0;
  param_1[0x90] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x93);
  FUN_00f13d08(param_1 + 0x79);
  param_1[0x5b] = &PTR_FUN_028266f0;
  param_1[0x72] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x75);
  FUN_00f13d08(param_1 + 0x5b);
  param_1[0x3d] = &PTR_FUN_028266f0;
  param_1[0x54] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x57);
  FUN_00f13d08(param_1 + 0x3d);
  FUN_00f01868(param_1 + 0x2c);
  if ((void *)param_1[0x2b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2b]);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
  }
  FUN_00f01868(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}

