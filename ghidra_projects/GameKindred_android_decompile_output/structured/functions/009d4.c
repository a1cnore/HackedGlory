// functions/009d4 — 36 functions
#include "libGameKindred.h"




bool FUN_009d4018(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    return (*(ushort *)(*(long *)(param_1 + 0x50) + 100) & 0x38) == 8;
  }
  return false;
}




void FUN_009d403c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_78 [48];
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_2 + 0x18);
  do {
    if (lVar2 == 0) {
LAB_009d40a0:
      FUN_00d58198(param_2,auStack_78);
LAB_009d40ac:
      *param_4 = local_48;
      *(undefined4 *)(param_4 + 1) = local_40;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_0312eae0) {
      uVar3 = FUN_009b3484(lVar2,auStack_78,param_3,1);
      if ((uVar3 & 1) != 0) goto LAB_009d40ac;
      goto LAB_009d40a0;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while( true );
}




void FUN_009d40e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 auStack_68 [48];
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d58298(param_2,param_3,auStack_68);
  *param_4 = local_38;
  *(undefined4 *)(param_4 + 1) = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d414c(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    if ((*(byte *)(param_1 + 0x110) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x110) & 2) == 0) {
        FUN_00f30a40();
        return;
      }
      FUN_00f30a68();
      return;
    }
  }
  return;
}




void FUN_009d4178(long param_1,int param_2)

{
  if ((*(long *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0xb4) == param_2)) {
    FUN_00f30a40();
    return;
  }
  return;
}




void FUN_009d4198(long param_1,int param_2)

{
  if ((*(long *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0xb4) == param_2)) {
    FUN_00f30a68();
    return;
  }
  return;
}




void FUN_009d41b8(long param_1,int param_2)

{
  if ((*(long *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0xb4) == param_2)) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  return;
}




void FUN_009d41d4(long param_1,int param_2)

{
  if ((*(long *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0xb4) == param_2)) {
    FUN_00f30a1c();
    return;
  }
  return;
}




void FUN_009d41f4(long param_1,int param_2)

{
  if ((*(long *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0xb4) == param_2)) {
    FUN_00f30d18();
    return;
  }
  return;
}




void FUN_009d4214(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  if (((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined8 *)0x0)) &&
     (*(int *)(param_1 + 0xb4) == param_2)) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    uVar2 = param_3[6];
    puVar1[7] = param_3[7];
    puVar1[6] = uVar2;
    uVar2 = param_3[4];
    puVar1[5] = param_3[5];
    puVar1[4] = uVar2;
    uVar2 = param_3[2];
    puVar1[3] = param_3[3];
    puVar1[2] = uVar2;
    uVar2 = *param_3;
    puVar1[1] = param_3[1];
    *puVar1 = uVar2;
    uVar2 = param_3[6];
    *(undefined8 *)(param_1 + 0xa0) = param_3[7];
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    uVar2 = param_3[4];
    *(undefined8 *)(param_1 + 0x90) = param_3[5];
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    uVar2 = param_3[2];
    *(undefined8 *)(param_1 + 0x80) = param_3[3];
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    uVar2 = *param_3;
    *(undefined8 *)(param_1 + 0x70) = param_3[1];
    *(undefined8 *)(param_1 + 0x68) = uVar2;
  }
  return;
}




void FUN_009d4274(long param_1,int param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5)

{
  if (*(int *)(param_1 + 0xb4) == param_2) {
    FUN_009d3edc(param_1,param_3,param_4,param_5);
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009d4294(undefined8 *param_1)

{
  uRam000000000312f3b8 = param_1[7];
  _DAT_0312f3b0 = param_1[6];
  uRam000000000312f3a8 = param_1[5];
  _DAT_0312f3a0 = param_1[4];
  uRam000000000312f398 = param_1[3];
  _DAT_0312f390 = param_1[2];
  uRam000000000312f388 = param_1[1];
  _DAT_0312f380 = *param_1;
  return;
}




void FUN_009d42c0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    DAT_0312f4c4 = 1;
    memcpy(&DAT_0312f3c0,param_1,0x104);
    return;
  }
  DAT_0312f4c4 = 0;
  return;
}




long FUN_009d42ec(long param_1)

{
  return param_1 + -0x40;
}




long FUN_009d42f4(long param_1)

{
  return param_1 + -0x40;
}




void FUN_009d42fc(void)

{
  return;
}




void FUN_009d4300(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x9d4304);
  (*pcVar1)();
}




undefined8 FUN_009d4304(undefined8 param_1)

{
  FUN_009d1c34();
  return param_1;
}




void FUN_009d4328(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009d4330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009d4334(long param_1)

{
  long lVar1;
  
  DAT_0312f1b8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312f1b8 + 1;
  lVar1 = param_1 + (ulong)DAT_0312f1b8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009d4454;
  *(code **)(lVar1 + 0xb8) = FUN_009d446c;
  *(uint *)(lVar1 + 0xa4) = DAT_0312f1b8;
  *(undefined4 *)(lVar1 + 0xa8) = 0x30;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_009d4394(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c30f8;
  param_1[5] = 0;
  return;
}




void FUN_009d43ac(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[5];
  *param_1 = &PTR_FUN_027c30f8;
  if (pvVar1 != (void *)0x0) {
    FUN_01996dbc(pvVar1);
    operator_delete(pvVar1);
    param_1[5] = 0;
  }
  FUN_01985bd0(param_1);
  return;
}




void FUN_009d43f8(void *param_1)

{
  FUN_009d43ac();
  operator_delete(param_1);
  return;
}




void FUN_009d441c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_0312ead4))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00cab74c(lVar1,param_1 + 0x28,param_2);
  return;
}




void FUN_009d4454(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c30f8;
  param_1[5] = 0;
  return;
}




void FUN_009d446c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009d4474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009d4478(undefined8 *param_1)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_02baef70;
  FUN_00f017e8(param_1 + 5);
  *param_1 = &PTR_FUN_027c3128;
  param_1[5] = &PTR_FUN_027c3160;
  FUN_00f0d25c(param_1 + 0x16,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70);
  FUN_00f0d25c(param_1 + 0x3c,PTR_s_build___Fonts_Brandon_Bold_24_fo_02be9c68);
  FUN_00f0e4a8(param_1 + 0x62);
  FUN_00a3fdfc(param_1 + 0x80);
  FUN_00a6d9e4(param_1 + 0xa9);
  FUN_00f0bdbc(param_1 + 0x10d,0);
  param_1[0x127] = 0;
  param_1[0x126] = 0;
  param_1[0x10d] = &PTR_FUN_027c3260;
  FUN_00f0e4a8(param_1 + 0x128);
  FUN_00f0e4a8(param_1 + 0x146);
  FUN_00f0d160(param_1 + 0x164);
  param_1[0x18b] = 0;
  param_1[0x18a] = 0;
  FUN_00e70510(param_1 + 0x18c);
  *(undefined4 *)(param_1 + 0x18e) = 0xff000000;
  *(undefined8 *)((long)param_1 + 0xc74) = 0xbf80000000000000;
  *(undefined8 *)((long)param_1 + 0xc7c) = _DAT_03218ef8;
  FUN_00ceabec((long)param_1 + 0xc8c);
  *(ushort *)(param_1 + 0x192) = *(ushort *)(param_1 + 0x192) & 0xfe00 | 2;
  local_48 = 0x3f0000003f000000;
  (**(code **)(param_1[5] + 0x28))(param_1 + 5,&local_48);
  *(uint *)((long)param_1 + 0xac) = *(uint *)((long)param_1 + 0xac) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x264) = *(uint *)((long)param_1 + 0x264) & 0xfffffffb;
  FUN_00e705c8(&local_48,"1");
  FUN_00f0d75c(param_1 + 0x3c,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d462c(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  *param_1 = &PTR_FUN_027c3128;
  param_1[5] = &PTR_FUN_027c3160;
  uVar2 = *(uint *)(param_1 + 0x126);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(param_1[0x127] + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(param_1[0x127] + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x126);
        puVar3 = (undefined8 *)(param_1[0x127] + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (param_1[0x127] != 0) {
    *(undefined4 *)(param_1 + 0x126) = 0;
  }
  if ((void *)param_1[0x18d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18d]);
    param_1[0x18d] = 0;
    param_1[0x18c] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x164);
  param_1[0x146] = &PTR_FUN_028266f0;
  param_1[0x15d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x160);
  FUN_00f13d08(param_1 + 0x146);
  param_1[0x128] = &PTR_FUN_028266f0;
  param_1[0x13f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x142);
  FUN_00f13d08(param_1 + 0x128);
  if ((void *)param_1[0x127] != (void *)0x0) {
    operator_delete__((void *)param_1[0x127]);
    param_1[0x126] = 0;
    param_1[0x127] = 0;
  }
  FUN_00f13d08(param_1 + 0x10d);
  param_1[0xef] = &PTR_FUN_028266f0;
  param_1[0x106] = &PTR_FUN_02826850;
  param_1[0xa9] = &PTR_FUN_027c33a8;
  FUN_00f0a79c(param_1 + 0x109);
  FUN_00f13d08(param_1 + 0xef);
  param_1[0xd1] = &PTR_FUN_028266f0;
  param_1[0xe8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xeb);
  FUN_00f13d08(param_1 + 0xd1);
  FUN_00f01868(param_1 + 0xa9);
  FUN_00a3fed0(param_1 + 0x80);
  param_1[0x62] = &PTR_FUN_028266f0;
  param_1[0x79] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7c);
  FUN_00f13d08(param_1 + 0x62);
  FUN_00f0d3a4(param_1 + 0x3c);
  FUN_00f0d3a4(param_1 + 0x16);
  FUN_00f01868(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009d47e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c33a8;
  param_1[0x46] = &PTR_FUN_028266f0;
  param_1[0x5d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x60);
  FUN_00f13d08(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_028266f0;
  param_1[0x3f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1);
  return;
}




void FUN_009d4864(long param_1)

{
  FUN_009d462c(param_1 + -0x28);
  return;
}




void FUN_009d486c(void *param_1)

{
  FUN_009d462c();
  operator_delete(param_1);
  return;
}




void FUN_009d4890(long param_1)

{
  FUN_009d462c((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_009d48b8(long param_1)

{
  long lVar1;
  
  DAT_0312e4b8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312e4b8 + 1;
  lVar1 = param_1 + (ulong)DAT_0312e4b8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009d6dc8;
  *(code **)(lVar1 + 0xb8) = FUN_009d6dec;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(uint *)(lVar1 + 0xa4) = DAT_0312e4b8;
  *(undefined4 *)(lVar1 + 0xa8) = 0xc98;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,5,FUN_009d4978,0);
  FUN_019867cc(param_1,0x36de0632,FUN_009d4a58,0);
  FUN_019867cc(param_1,0x22ef04a2,FUN_009d4b14,0);
  return;
}




void FUN_009d4978(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  
  if (*(long *)(param_1 + 0xc58) != 0) {
    FUN_009d6744(param_1);
  }
  if (0.0 <= *(float *)(param_1 + 0xc78)) {
    fVar6 = (float)FUN_01988c78();
    *(float *)(param_1 + 0xc78) = *(float *)(param_1 + 0xc78) - fVar6;
  }
  else {
    *(uint *)(param_1 + 0x9c4) = *(uint *)(param_1 + 0x9c4) & 0xfffffffb;
    *(uint *)(param_1 + 0xab4) = *(uint *)(param_1 + 0xab4) & 0xfffffffb;
    *(uint *)(param_1 + 0xba4) = *(uint *)(param_1 + 0xba4) & 0xfffffffb;
  }
  uVar3 = FUN_0092e5c4();
  uVar1 = 0;
  if ((uVar3 & 1) == 0) {
    uVar1 = FUN_009f1f70(0x13);
    uVar1 = uVar1 ^ 1;
  }
  lVar5 = *(long *)(param_1 + 0xc50);
  uVar3 = FUN_0094276c();
  if ((uVar3 & 1) == 0) {
    uVar1 = (uVar1 & 1 | (uint)(lVar5 != 0)) << 2;
    uVar4 = *(uint *)(param_1 + 0x134) & 0xfffffffb;
  }
  else {
    iVar2 = FUN_00a21d4c();
    uVar4 = (uint)(iVar2 != 1) << 2;
    uVar1 = *(uint *)(param_1 + 0x134) & 0xfffffffb;
  }
  *(uint *)(param_1 + 0x134) = uVar4 | uVar1;
  return;
}




void FUN_009d4bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009d4c08(param_1,param_2,0,param_3);
  return;
}




void FUN_009d4c08(undefined8 param_1,long param_2,long param_3,uint param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined4 uVar15;
  long *plVar16;
  char *pcVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  long *local_a0 [2];
  undefined8 local_90;
  long local_88;
  
  lVar8 = tpidr_el0;
  local_88 = *(long *)(lVar8 + 0x28);
  plVar1 = (long *)(param_2 + 0xb0);
  FUN_00f018bc(plVar1,1);
  plVar2 = (long *)(param_2 + 0x1e0);
  FUN_00f018bc(plVar2,1);
  *(long *)(param_2 + 0xc58) = param_3;
  *(int *)(param_2 + 0xc74) = (int)param_1;
  uVar13 = FUN_0092ea9c();
  lVar3 = param_2 + 0x28;
  if ((uVar13 & 1) == 0) {
    if ((*(float *)(param_2 + 0x70) != 1.4) || (*(float *)(param_2 + 0x74) != 1.4)) {
      uVar22 = 0x3fb333333fb33333;
      goto LAB_009d4cd0;
    }
  }
  else if ((*(float *)(param_2 + 0x70) != 1.5) || (*(float *)(param_2 + 0x74) != 1.5)) {
    uVar22 = NEON_fmov(0x3fc00000,4);
LAB_009d4cd0:
    *(undefined8 *)(param_2 + 0x70) = uVar22;
    FUN_0091ada4(lVar3);
  }
  if (param_4 != 6) {
    lVar14 = param_2 + 0x400;
    FUN_00a3ff9c(param_1,lVar14,param_3,param_4,0,0);
    fVar18 = 12.0;
    if (param_4 != 0) {
      fVar18 = 0.0;
    }
    if ((*(float *)(param_2 + 0x440) != fVar18) || (*(float *)(param_2 + 0x444) != 0.0)) {
      *(float *)(param_2 + 0x440) = fVar18;
      *(undefined4 *)(param_2 + 0x444) = 0;
      FUN_0091ada4(lVar14);
    }
    FUN_00f02408(lVar14,lVar3,0);
    *(ushort *)(param_2 + 0xc90) = *(ushort *)(param_2 + 0xc90) | 1;
  }
  uVar9 = FUN_00ced270(*(undefined4 *)(param_3 + 0x260));
  uVar10 = FUN_00d9e99c(param_3);
  puVar4 = (undefined8 *)(param_2 + 0xc7c);
  *puVar4 = 0xc230000000000000;
  FUN_00f0d7fc(plVar1,&DAT_0312f648);
  *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) & 0xfffffffb;
  local_a0[0] = (long *)0x3f0000003f000000;
  if ((*(float *)(param_2 + 0xf0) != *(float *)(param_2 + 0xc7c)) ||
     (*(float *)(param_2 + 0xf4) != *(float *)(param_2 + 0xc80))) {
    *(undefined8 *)(param_2 + 0xf0) = *puVar4;
    FUN_0091ada4(plVar1);
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,local_a0);
  FUN_00f0da58(plVar1,1);
  FUN_00f02408(plVar1,lVar3,0);
  if (param_4 != 0) {
    if ((param_4 < 6) && ((1 << (ulong)(param_4 & 0x1f) & 0x34U) != 0)) {
      fVar18 = *(float *)(param_2 + 0xc80) + 14.0;
      *(float *)(param_2 + 0xc80) = fVar18;
      local_a0[0] = (long *)0x3f0000003f000000;
      if ((*(float *)(param_2 + 0xf0) != *(float *)(param_2 + 0xc7c)) ||
         (*(float *)(param_2 + 0xf4) != fVar18)) {
        *(undefined8 *)(param_2 + 0xf0) = *puVar4;
        FUN_0091ada4(plVar1);
      }
      (**(code **)(*plVar1 + 0x28))(plVar1,local_a0);
      uVar13 = FUN_009bbf9c();
      if ((uVar13 & 1) != 0) {
        FUN_00ceace8();
        uVar13 = FUN_00ceb054();
        if ((uVar13 & 1) != 0) {
          plVar2 = (long *)(param_2 + 0x868);
          (**(code **)(*(long *)(param_2 + 0x28) + 0x78))(lVar3,plVar2,1);
          lVar14 = FUN_00d70a78();
          plVar16 = *(long **)(lVar14 + 0xe8);
          lVar14 = *plVar16;
          while (lVar14 != 0) {
            iVar11 = FUN_00d5bc54(param_3);
            thunk_FUN_00d9ff34(local_a0,*(undefined8 *)*plVar16);
            if ((int)local_a0[0] == iVar11) {
              iVar11 = *(int *)(*plVar16 + 8);
              if (0 < iVar11) {
                pcVar17 = "hud_blitz_coin_friendly";
                if ((uVar10 & 1) == 0) {
                  pcVar17 = "hud_blitz_coin_enemy";
                }
                do {
                  plVar16 = operator_new(0xf0);
                  FUN_00f0e4a8();
                  local_a0[0] = plVar16;
                  FUN_00f0e548(plVar16,PTR_s_build___HUDPartsCommon_atlas_02be3440,pcVar17);
                  if ((*(float *)(local_a0[0] + 9) != 0.4) ||
                     (*(float *)((long)local_a0[0] + 0x4c) != 0.4)) {
                    local_a0[0][9] = 0x3ecccccd3ecccccd;
                    FUN_0091ada4();
                  }
                  local_90 = 0x3f0000003f000000;
                  (**(code **)(*local_a0[0] + 0x28))(local_a0[0],&local_90);
                  FUN_009d6990(param_2 + 0x930,local_a0);
                  FUN_00f023ec(plVar2,local_a0[0],1);
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
                FUN_00f0bc10(0,0x3f000000,0xc1000000,local_a0);
                FUN_00f0c168(plVar2,local_a0);
                (**(code **)(*plVar2 + 0x90))(plVar2);
                if (param_4 == 2) {
                  local_a0[0] = (long *)0x3f0000003f000000;
                  if ((*(float *)(param_2 + 0x8a8) != *(float *)(param_2 + 0xc7c)) ||
                     (*(float *)(param_2 + 0x8ac) != *(float *)(param_2 + 0xc80))) {
                    *(undefined8 *)(param_2 + 0x8a8) = *puVar4;
                    FUN_0091ada4(plVar2);
                  }
                }
                else {
                  fVar18 = *(float *)(param_2 + 0xc80) + -24.0;
                  if ((*(float *)(param_2 + 0x8a8) != *(float *)(param_2 + 0xc7c)) ||
                     (*(float *)(param_2 + 0x8ac) != fVar18)) {
                    *(float *)(param_2 + 0x8a8) = *(float *)(param_2 + 0xc7c);
                    *(float *)(param_2 + 0x8ac) = fVar18;
                    FUN_0091ada4(plVar2);
                  }
                  local_a0[0] = (long *)0x3f0000003f000000;
                }
                (**(code **)(*plVar2 + 0x28))(plVar2,local_a0);
              }
              break;
            }
            plVar16 = plVar16 + 1;
            lVar14 = *plVar16;
          }
        }
      }
    }
    goto joined_r0x009d53e0;
  }
  uVar22 = DAT_03218f00;
  if ((uVar9 & 1) == 0) {
    uVar22 = CONCAT44((float)((ulong)DAT_03218f00 >> 0x20) * 0.9,(float)DAT_03218f00 * 0.9);
  }
  lVar14 = param_2 + 0x400;
  fVar18 = (float)uVar22;
  fVar21 = (float)((ulong)uVar22 >> 0x20);
  if ((*(float *)(param_2 + 0x448) != fVar18) || (*(float *)(param_2 + 0x44c) != fVar21)) {
    *(undefined8 *)(param_2 + 0x448) = uVar22;
    FUN_0091ada4(lVar14);
  }
  fVar23 = (float)uVar22;
  fVar19 = (float)FUN_00a4064c(lVar14);
  fVar20 = (float)FUN_00a406e0(lVar14);
  fVar23 = fVar23 * fVar21;
  fVar20 = fVar20 * fVar18;
  *(float *)(param_2 + 0xc7c) = fVar20 * 30.0;
  *(float *)(param_2 + 0xc80) = fVar23 * -57.0;
  local_a0[0] = (long *)0x3f0000003f000000;
  if ((*(float *)(param_2 + 0xf0) != fVar20 * 30.0) ||
     (*(float *)(param_2 + 0xf4) != fVar23 * -57.0)) {
    *(undefined8 *)(param_2 + 0xf0) = *puVar4;
    FUN_0091ada4(plVar1);
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,local_a0);
  if (*(char *)(*(long *)(param_3 + 0x38) + 0x1ad) != '\0') {
    FUN_00f02408(plVar2,lVar3,1);
    fVar21 = fVar20 * 44.0 + fVar19 * fVar18 * -0.5;
    *(uint *)(param_2 + 0x264) = *(uint *)(param_2 + 0x264) | 4;
    if ((*(float *)(param_2 + 0x220) != fVar21) || (*(float *)(param_2 + 0x224) != -2.0)) {
      *(float *)(param_2 + 0x220) = fVar21;
      *(undefined4 *)(param_2 + 0x224) = 0xc0000000;
      FUN_0091ada4(plVar2);
    }
    local_a0[0] = (long *)0x3f0000003f000000;
    (**(code **)(*plVar2 + 0x28))(plVar2,local_a0);
  }
  local_90._0_4_ = 0xff000000;
  uVar12 = *(uint *)(param_3 + 0x2f4);
  if ((uVar10 & 1) == 0) {
    uVar15 = DAT_0312f654;
    if (((uVar12 >> 1 & 1) != 0) &&
       (uVar13 = FUN_00ced528(*(undefined4 *)(param_3 + 0x260)), uVar15 = DAT_0312f654,
       (uVar13 & 1) != 0)) {
      uVar15 = DAT_0312f65c;
    }
  }
  else {
    uVar15 = DAT_0312f64c;
    if ((((uVar12 & 2) == 0 || ((uVar9 ^ 0xffffffff) & 1) != 0) &&
        (uVar15 = DAT_0312f650, (uVar12 >> 1 & 1) != 0)) &&
       (uVar13 = FUN_00ced528(*(undefined4 *)(param_3 + 0x260)), uVar15 = DAT_0312f650,
       (uVar13 & 1) != 0)) {
      uVar15 = DAT_0312f658;
    }
  }
  local_90 = CONCAT44(local_90._4_4_,uVar15);
  FUN_00f0d7fc(plVar1,&local_90);
  FUN_00f0d7fc(plVar2,&local_90);
  lVar14 = param_2 + 0x548;
  *(undefined4 *)(param_2 + 0xc70) = (undefined4)local_90;
  if ((uVar10 & 1) == 0) {
    uVar12 = FUN_00ceab64();
    uVar12 = (uVar12 & 1) << 2;
  }
  else {
    uVar12 = 4;
  }
  *(uint *)(param_2 + 0x5cc) = *(uint *)(param_2 + 0x5cc) & 0xfffffffb | uVar12;
  FUN_00a6dd94(lVar14);
  fVar21 = fVar19 * fVar18 * -0.5;
  fVar18 = fVar21 + fVar20 * 4.0;
  if ((*(float *)(param_2 + 0x588) != fVar18) || (*(float *)(param_2 + 0x58c) != fVar23 * -17.0)) {
    *(float *)(param_2 + 0x588) = fVar18;
    *(float *)(param_2 + 0x58c) = fVar23 * -17.0;
    FUN_0091ada4(lVar14);
  }
  FUN_00f02408(lVar14,lVar3,1);
  if ((*(float *)(param_2 + 0x590) != fVar20) || (*(float *)(param_2 + 0x594) != fVar23)) {
    *(float *)(param_2 + 0x590) = fVar20;
    *(float *)(param_2 + 0x594) = fVar23;
    FUN_0091ada4(lVar14);
  }
  uVar13 = FUN_009580c4();
  if (((uVar13 & 1) != 0) && (lVar14 = FUN_009580b8(), *(uint *)(lVar14 + 0x55e0) < 6)) {
    iVar11 = FUN_00d5e86c(param_3);
    pcVar17 = (char *)0x0;
    switch(iVar11) {
    case 0:
    case 7:
switchD_009d5210_caseD_0:
      pcVar17 = "role_captain";
      break;
    case 1:
      pcVar17 = "role_jungler";
      break;
    case 2:
    case 3:
    case 4:
    case 5:
      pcVar17 = "role_carry";
      break;
    case 6:
      break;
    default:
      if (iVar11 == 0xff) goto switchD_009d5210_caseD_0;
    }
    lVar14 = param_2 + 0x310;
    FUN_00f02408(lVar14,lVar3,1);
    FUN_00f0e548(lVar14,PTR_s_build___HUDPartsCommon_atlas_02be3440,pcVar17);
    puVar5 = &DAT_0312f650;
    if ((uVar10 & 1) == 0) {
      puVar5 = &DAT_0312f654;
    }
    puVar6 = &DAT_0312f64c;
    if ((uVar9 & 1) == 0) {
      puVar6 = puVar5;
    }
    FUN_00f0e670(lVar14,puVar6,2);
    fVar21 = fVar21 + fVar20 * -25.0;
    if ((*(float *)(param_2 + 0x350) != fVar21) || (*(float *)(param_2 + 0x354) != 0.0)) {
      *(float *)(param_2 + 0x350) = fVar21;
      *(undefined4 *)(param_2 + 0x354) = 0;
      FUN_0091ada4(lVar14);
    }
    local_a0[0] = (long *)0x3f0000003f000000;
    (**(code **)(*(long *)(param_2 + 0x310) + 0x28))(lVar14,local_a0);
    if ((*(float *)(param_2 + 0x358) != fVar20) || (*(float *)(param_2 + 0x35c) != fVar23)) {
      *(float *)(param_2 + 0x358) = fVar20;
      *(float *)(param_2 + 0x35c) = fVar23;
      FUN_0091ada4(lVar14);
    }
  }
  FUN_00f02408(param_2 + 0x940,lVar3,1);
  FUN_00f02408(param_2 + 0xa30,lVar3,1);
  FUN_00f02408(param_2 + 0xb20,lVar3,1);
  FUN_00f0e548(param_2 + 0x940,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_plaque_level_box");
  FUN_00f0d92c(param_2 + 0xb20,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78,&DAT_01bee7fa);
joined_r0x009d53e0:
  if (param_5 != 0) {
    FUN_00910394(param_2 + 0xc60,param_5);
    FUN_009d5954(param_2);
    *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | 4;
  }
  FUN_00ceace8();
  uVar13 = FUN_00ceb0ac();
  if ((uVar13 & 1) != 0) {
    uVar22 = FUN_00e6ce7c(*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x30),0);
    FUN_00910394(param_2 + 0xc60,uVar22);
    FUN_009d5954(param_2);
    *(uint *)(param_2 + 0x134) = *(uint *)(param_2 + 0x134) | 4;
  }
  if (param_4 != 0) {
    local_a0[0] = (long *)CONCAT44(local_a0[0]._4_4_,0xff88bed1);
    FUN_00f0d7fc(plVar1,local_a0);
  }
  uVar13 = FUN_00d9e9d0(param_3);
  pcVar17 = "plaques-hero";
  if (param_4 != 0) {
    pcVar17 = "plaques-all";
  }
  pcVar7 = "plaques-player";
  if ((uVar13 & 1) == 0) {
    pcVar7 = pcVar17;
  }
  uVar22 = FUN_00f00438(pcVar7);
  (**(code **)(*(long *)(param_2 + 0x28) + 0x80))(lVar3,uVar22,0);
  uVar10 = *(uint *)(param_2 + 0xac);
  uVar9 = uVar10 & 3 | (uint)((*(byte *)(param_3 + 0x2fc) & 0x1f) != 0) << 2;
  *(uint *)(param_2 + 0xac) = uVar10 & 0xfffffff8 | uVar9;
  *(uint *)(param_2 + 0xac) =
       uVar10 & 0xfffffff0 | uVar9 | (uint)((*(byte *)(param_3 + 0x2fc) & 0x1f) != 0) << 3;
  FUN_00f0025c(param_2 + 0xc84,param_2 + 0xc88);
  FUN_009d6744(param_2);
  if (*(long *)(lVar8 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

