// functions/00a2a — 9 functions
#include "libGameKindred.h"




void thunk_FUN_00a2afac(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 auStack_78 [48];
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  FUN_00ed8868(auStack_78,DAT_03210c64,0,0);
  FUN_00f04760(param_1,auStack_78,1);
  uVar2 = 3;
  plVar3 = (long *)(param_1 + 0xc20);
  do {
    uVar2 = uVar2 - 1;
    (**(code **)(*plVar3 + 0x138))((float)(uVar2 & 0xffffffff) * 0.05 + 0.25,plVar3,0,1,1);
    plVar3 = plVar3 + 0x19;
  } while (uVar2 != 0);
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a2a210(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027c8f50;
  FUN_00a29080(param_1 + 0x5af);
  lVar2 = -0x4b0;
  puVar1 = param_1 + 0x591;
  do {
    *puVar1 = &PTR_FUN_028266f0;
    puVar1[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar1 + 0x1a);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + 0xf0;
    puVar1 = puVar1 + -0x1e;
  } while (lVar2 != 0);
  FUN_00f01868(param_1 + 0x508);
  puVar1 = param_1 + 0x4e2;
  lVar2 = -0x1c80;
  do {
    FUN_00f0d3a4(puVar1);
    FUN_00f0d3a4(puVar1 + -0x26);
    lVar2 = lVar2 + 0x260;
    puVar1 = puVar1 + -0x4c;
  } while (lVar2 != 0);
  FUN_00f01868(param_1 + 0x167);
  FUN_00f0d3a4(param_1 + 0x141);
  FUN_00ed00e0(param_1 + 0x9a);
  FUN_00f13d08(param_1 + 0x66);
  FUN_00f01868(param_1 + 0x55);
  FUN_00f0d3a4(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00a2a31c(void *param_1)

{
  FUN_00a29f2c();
  operator_delete(param_1);
  return;
}




void FUN_00a2a340(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x106e8) = param_2;
  lVar3 = *(long *)(param_2 + 0x38);
  FUN_00a2b854(param_1 + 0x1280,param_2,*(undefined4 *)(lVar3 + 0xd0),0);
  FUN_00a2b854(param_1 + 0x4c00,*(undefined8 *)(param_1 + 0x106e8),*(undefined4 *)(lVar3 + 0xd4),1);
  FUN_00a2b854(param_1 + 0x8580,*(undefined8 *)(param_1 + 0x106e8),*(undefined4 *)(lVar3 + 0xd8),2);
  uVar2 = FUN_00e6ce7c(*(undefined8 *)(lVar3 + 0x40),0);
  FUN_00f0d75c(param_1 + 0xc140,uVar2);
  uVar2 = FUN_00e6ce7c(*(undefined8 *)(lVar3 + 0x48),0);
  thunk_FUN_00e7051c(&local_48,uVar2);
  FUN_00cb2a10(&local_48,lVar3);
  FUN_00cb6444(&local_48);
  FUN_00f0d75c(param_1 + 0xc948,&local_48);
  FUN_00ed0418(param_1 + 0xc410,1);
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




void FUN_00a2a45c(long *param_1,uint param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  FUN_00b89d24(0x3e19999a,param_1 + 0x3b,param_2 & 1,1,1);
  uVar2 = 0;
  plVar1 = param_1 + 0x250;
  plVar3 = param_1 + 0x184;
  do {
    (**(code **)(*plVar3 + 0x138))((float)(uVar2 & 0xffffffff) * 0.05 + 0.25,plVar3,param_2 & 1,1,1)
    ;
    FUN_00a2c0a0(plVar1);
    uVar2 = uVar2 + 1;
    plVar1 = plVar1 + 0x730;
    plVar3 = plVar3 + 0x19;
  } while (uVar2 != 3);
  FUN_00a2a528(param_1);
                    /* WARNING: Could not recover jumptable at 0x00a2a524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00a2a528(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  long local_90 [4];
  
  lVar2 = tpidr_el0;
  local_90[2] = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e6ce7c("STAT_TABLE_HEALTH_SMALL",0);
  puVar6 = auStack_160;
  thunk_FUN_00e7051c(auStack_160,uVar3);
  uVar3 = FUN_00e6ce7c("STAT_TABLE_ENERGY_SMALL",0);
  thunk_FUN_00e7051c(auStack_150,uVar3);
  uVar3 = FUN_00e6ce7c("STAT_TABLE_ARMOR_SMALL",0);
  thunk_FUN_00e7051c(auStack_140,uVar3);
  uVar3 = FUN_00e6ce7c("STAT_TABLE_SHIELD_SMALL",0);
  thunk_FUN_00e7051c(auStack_130,uVar3);
  uVar3 = FUN_00e6ce7c("STAT_TABLE_WEAPON_SMALL",0);
  thunk_FUN_00e7051c(auStack_120,uVar3);
  uVar3 = FUN_00e6ce7c("STAT_TABLE_ATKSPD_SMALL",0);
  thunk_FUN_00e7051c(auStack_110,uVar3);
  uVar3 = FUN_00e6ce7c("STAT_TABLE_CRIT_C_SMALL",0);
  thunk_FUN_00e7051c(auStack_100,uVar3);
  uVar3 = FUN_00e6ce7c("STAT_TABLE_CRIT_D_SMALL",0);
  thunk_FUN_00e7051c(auStack_f0,uVar3);
  uVar3 = FUN_00e6ce7c("STAT_TABLE_ARMPRC_SMALL",0);
  thunk_FUN_00e7051c(auStack_e0,uVar3);
  uVar3 = FUN_00e6ce7c("STAT_TABLE_WVAMP_SMALL",0);
  thunk_FUN_00e7051c(auStack_d0,uVar3);
  uVar3 = FUN_00e6ce7c("STAT_TABLE_CYSTAL_SMALL",0);
  thunk_FUN_00e7051c(auStack_c0,uVar3);
  uVar3 = FUN_00e6ce7c("STAT_TABLE_CLDN_SMALL",0);
  thunk_FUN_00e7051c(auStack_b0,uVar3);
  uVar3 = FUN_00e6ce7c("STAT_TABLE_SHDPRC_SMALL",0);
  thunk_FUN_00e7051c(auStack_a0,uVar3);
  uVar3 = FUN_00e6ce7c("STAT_TABLE_CVAMP_SMALL",0);
  thunk_FUN_00e7051c(local_90,uVar3);
  lVar9 = 0;
  plVar8 = (long *)(param_1 + 0xe5a8);
  lVar7 = param_1 + 0xf648;
  do {
    (**(code **)(*plVar8 + 0x138))(plVar8,puVar6);
    uVar5 = (ulong)*(uint *)((long)&DAT_01b9f7d8 + lVar9);
    lVar1 = *(long *)(*(long *)(param_1 + 0x106e8) + 0x40) + uVar5 * 4;
    fVar10 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
             (*(float *)(lVar1 + 0x38) +
             *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
    if (*(float *)(&DAT_03131810 + uVar5 * 4) <= fVar10) {
      fVar10 = *(float *)(&DAT_03131810 + uVar5 * 4);
    }
    fVar11 = *(float *)(&DAT_03131750 + uVar5 * 4);
    if (*(float *)(&DAT_03131750 + uVar5 * 4) <= fVar10) {
      fVar11 = fVar10;
    }
    FUN_00cb1d0c(fVar11,*(undefined4 *)((long)&DAT_01b9f810 + lVar9),param_1 + 0x106f0,0);
    (**(code **)(plVar8[0x214] + 0x138))(lVar7,param_1 + 0x106f0);
    lVar9 = lVar9 + 4;
    puVar6 = puVar6 + 0x10;
    plVar8 = plVar8 + 0x26;
    lVar7 = lVar7 + 0x130;
  } while (lVar9 != 0x38);
  lVar9 = 0;
  do {
    pvVar4 = *(void **)((long)local_90 + lVar9 + 8);
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
      *(undefined8 *)((long)local_90 + lVar9) = 0;
      *(undefined8 *)((long)local_90 + lVar9 + 8) = 0;
    }
    lVar9 = lVar9 + -0x10;
  } while (lVar9 != -0xe0);
  if (*(long *)(lVar2 + 0x28) == local_90[2]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a2a870(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a2a878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00a2a87c(long param_1)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined8 local_b0;
  long local_a8;
  
  lVar5 = tpidr_el0;
  local_a8 = *(long *)(lVar5 + 0x28);
  FUN_00f0025c(&local_b4,&local_b8);
  FUN_00f00298(&local_bc,&local_c0);
  fVar16 = local_b4 - local_bc;
  fVar14 = (local_b8 - local_c0) * 0.5;
  fVar13 = fVar16 * -0.5;
  fVar15 = local_b8 - (fVar14 + fVar14 + 310.0);
  fVar17 = (local_b8 * 0.5 - fVar15 * 0.5) + 2.0;
  lVar1 = param_1 + 0x2a0;
  if ((*(float *)(param_1 + 0x2e0) != fVar13) || (*(float *)(param_1 + 0x2e4) != fVar14 + 140.0)) {
    *(float *)(param_1 + 0x2e0) = fVar13;
    *(float *)(param_1 + 0x2e4) = fVar14 + 140.0;
    FUN_0091ada4(lVar1);
  }
  FUN_00f13f08(local_b4,fVar15,lVar1);
  lVar7 = param_1 + 0x628;
  fVar13 = (float)FUN_00f13e54(lVar7);
  fVar14 = -26.0;
  fVar18 = (local_b4 - fVar13 * 0.5) + -26.0;
  FUN_00f13e54(lVar7);
  fVar13 = (fVar17 - fVar14 * 0.5) + -20.0;
  if ((*(float *)(param_1 + 0x668) != fVar18) || (*(float *)(param_1 + 0x66c) != fVar13)) {
    *(float *)(param_1 + 0x668) = fVar18;
    *(float *)(param_1 + 0x66c) = fVar13;
    FUN_0091ada4(lVar7);
  }
  local_b0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x628) + 0x28))(lVar7,&local_b0);
  if ((*(float *)(param_1 + 0x670) != 1.5) || (*(float *)(param_1 + 0x674) != 1.5)) {
    uVar12 = NEON_fmov(0x3fc00000,4);
    *(undefined8 *)(param_1 + 0x670) = uVar12;
    FUN_0091ada4(lVar7);
  }
  FUN_00f07940(-(fVar16 * 0.5 + 16.0),0x42100000,lVar7,2,lVar1,1);
  fVar13 = local_bc * 0.5;
  uVar6 = 0;
  lVar7 = 0;
  lVar8 = 0x1280;
  lVar10 = 0x12c8;
  lVar11 = 0x12cc;
  do {
    if ((*(float *)(param_1 + lVar10) != 1.35) || (*(float *)(param_1 + lVar11) != 1.35)) {
      *(undefined8 *)(param_1 + lVar10) = 0x3faccccd3faccccd;
      FUN_0091ada4(param_1 + lVar8);
    }
    lVar2 = param_1 + lVar7;
    (**(code **)(*(long *)(lVar2 + 0xe78) + 0x138))(lVar2 + 0xe78);
    fVar16 = *(float *)(lVar2 + 0xeb8);
    fVar14 = (float)uVar6 * 120.0 + fVar13 + -1155.0 + (float)uVar6 * 690.0;
    if ((fVar16 != fVar14) || (fVar16 = *(float *)(lVar2 + 0xebc), fVar16 != fVar17 + -72.0)) {
      *(float *)(lVar2 + 0xeb8) = fVar14;
      *(float *)(lVar2 + 0xebc) = fVar17 + -72.0;
      FUN_0091ada4(lVar2 + 0xe78);
    }
    lVar7 = lVar7 + 0x158;
    lVar8 = lVar8 + 0x3980;
    lVar10 = lVar10 + 0x3980;
    lVar11 = lVar11 + 0x3980;
    uVar6 = uVar6 + 1;
  } while (lVar7 != 0x408);
  pfVar3 = (float *)(param_1 + 0xbfd0);
  if ((*pfVar3 != 1.35) || (*(float *)(param_1 + 0xbfd4) != 1.35)) {
    pfVar3[0] = 1.35;
    pfVar3[1] = 1.35;
    FUN_0091ada4(param_1 + 0xbf88);
  }
  lVar8 = param_1 + 0xc010;
  lVar7 = param_1 + 0xe78;
  FUN_00f07b18(0x41400000,lVar8,0,lVar7,2);
  FUN_00f07b18(0,lVar8,3,lVar7,3);
  lVar10 = param_1 + 0xc140;
  FUN_00f0dad0(0x438c0000,lVar10,1);
  FUN_00f07b18(0,lVar10,0,lVar8,2);
  FUN_00f07b18(0,lVar10,3,lVar8,3);
  FUN_00f080a0(lVar10,0,lVar1,3);
  FUN_00f13f08(0x44f64000,fVar16 + -12.0,param_1 + 0xc270);
  FUN_00f07940(0x43a00000,0,param_1 + 0xc270,0,lVar8,0);
  FUN_00f0dad0(0x44a42aab,param_1 + 0xc948,1);
  FUN_00ed0418(param_1 + 0xc410,1);
  pfVar3 = (float *)(param_1 + 0xe078);
  if ((*pfVar3 != 0.0) || (*(float *)(param_1 + 0xe07c) != 0.0)) {
    pfVar3[0] = 0.0;
    pfVar3[1] = 0.0;
    FUN_0091ada4(param_1 + 0xe038);
  }
  pfVar3 = (float *)(param_1 + 0xe1a8);
  if ((*pfVar3 != 472.0) || (*(float *)(param_1 + 0xe1ac) != 0.0)) {
    pfVar3[0] = 472.0;
    pfVar3[1] = 0.0;
    FUN_0091ada4(param_1 + 0xe168);
  }
  pfVar3 = (float *)(param_1 + 0xe2d8);
  if ((*pfVar3 != 1180.0) || (*(float *)(param_1 + 0xe2dc) != 0.0)) {
    pfVar3[0] = 1180.0;
    pfVar3[1] = 0.0;
    FUN_0091ada4(param_1 + 0xe298);
  }
  lVar8 = 0;
  uVar9 = 0;
  lVar10 = param_1 + 0xf68c;
  do {
    fVar13 = (float)((uint)(uVar9 >> 1) & 0x7fffffff) * 236.0;
    fVar14 = (float)((uint)uVar9 & 1) * 38.0 + 38.0;
    if ((*(float *)(param_1 + 0xe5e8 + lVar8) != fVar13) ||
       (*(float *)(param_1 + 0xe5ec + lVar8) != fVar14)) {
      *(float *)(param_1 + 0xe5e8 + lVar8) = fVar13;
      *(float *)(param_1 + 0xe5ec + lVar8) = fVar14;
      FUN_0091ada4(param_1 + 0xe5a8 + lVar8);
    }
    fVar13 = (float)((uint)uVar9 + 2 >> 1) * 236.0 + -50.0;
    lVar11 = param_1 + 0xf648 + lVar8;
    if ((*(float *)(lVar10 + lVar8 + -4) != fVar13) || (*(float *)(lVar10 + lVar8) != fVar14)) {
      *(float *)(lVar10 + lVar8 + -4) = fVar13;
      *(float *)(lVar10 + lVar8) = fVar14;
      FUN_0091ada4(lVar11);
    }
    local_b0 = 0x3f800000;
    (**(code **)(*(long *)(param_1 + 0xf648 + lVar8) + 0x28))(lVar11,&local_b0);
    uVar9 = uVar9 + 1;
    lVar8 = lVar8 + 0x130;
  } while (uVar9 != 0xe);
  lVar8 = param_1 + 0xe450;
  if ((*(float *)(param_1 + 0xe498) != 1.5) || (*(float *)(param_1 + 0xe49c) != 1.5)) {
    uVar12 = NEON_fmov(0x3fc00000,4);
    *(undefined8 *)(param_1 + 0xe498) = uVar12;
    FUN_0091ada4(lVar8);
  }
  FUN_00f13238(lVar8);
  FUN_00f07b18(0,lVar8,3,lVar7,3);
  FUN_00f07b18(0xc2000000,lVar8,2,lVar1,2);
  plVar4 = (long *)(param_1 + 0xca78);
  if ((*(float *)(param_1 + 0xcac0) != 1.5) || (*(float *)(param_1 + 0xcac4) != 1.5)) {
    uVar12 = NEON_fmov(0x3fc00000,4);
    *(undefined8 *)(param_1 + 0xcac0) = uVar12;
    FUN_0091ada4(plVar4);
  }
  fVar13 = (fVar15 + fVar17 + -2.0 + local_c0) * 0.5 + -5.0;
  if ((*(float *)(param_1 + 0xcab8) != local_bc * 0.5) || (*(float *)(param_1 + 0xcabc) != fVar13))
  {
    *(float *)(param_1 + 0xcab8) = local_bc * 0.5;
    *(float *)(param_1 + 0xcabc) = fVar13;
    FUN_0091ada4(plVar4);
  }
  local_b0 = 0x3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_b0);
  if (*(long *)(lVar5 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a2afac(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00ed8868(auStack_78,DAT_03210c64,0,0);
  FUN_00f04760(param_1,auStack_78,1);
  uVar2 = 3;
  plVar3 = (long *)(param_1 + 0xc20);
  do {
    uVar2 = uVar2 - 1;
    (**(code **)(*plVar3 + 0x138))((float)(uVar2 & 0xffffffff) * 0.05 + 0.25,plVar3,0,1,1);
    plVar3 = plVar3 + 0x19;
  } while (uVar2 != 0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

