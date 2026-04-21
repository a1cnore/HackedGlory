// functions/00d8a — 27 functions
#include "libGameKindred.h"




void FUN_00d8a19c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cda464();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00d8a1ec(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,0xb,0x19,0);
  return;
}




undefined8 * FUN_00d8a200(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *puVar1 = &PTR_FUN_0281efa0;
      puVar1[1] = 0;
      puVar1[-1] = puVar1;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 4;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_00d8a25c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00d99794(param_2);
  if (lVar1 != 0) {
    FUN_00d99c88(lVar1,param_1 + 8,*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}




void FUN_00d8a298(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d80ee4();
  uVar2 = FUN_00d59f54(uVar1,2,2,0x19,0);
  *param_3 = uVar2;
  return;
}




void FUN_00d8a2d0(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d80ee4();
  fVar2 = (float)FUN_00d59f54(uVar1,2,2,0x19,0);
  *param_3 = fVar2;
  uVar1 = FUN_00d80fec(param_1);
  fVar2 = (float)FUN_00d5a3d0(uVar1,DAT_031abff0,0,9);
  *param_3 = fVar2 * *param_3;
  return;
}




void FUN_00d8a338(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = FUN_00d80fec();
  fVar2 = (float)FUN_00d59f54(uVar1,2,2,0x19,0);
  *param_3 = fVar2;
  fVar2 = (float)FUN_00d59f54(uVar1,2,7,0x19,0);
  if (0.0 < fVar2) {
    fVar3 = (float)FUN_00d80ed4(param_1);
    if (fVar2 <= fVar3) {
      fVar3 = fVar2;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar4 = sinf((fVar3 * 6.2831855) / fVar2);
    if (fVar2 * 0.5 <= fVar3) {
      fVar4 = 2.0 - fVar4;
    }
    fVar2 = (float)NEON_fminnm(fVar4,0x3fc00000);
    if (fVar2 <= 0.5) {
      fVar2 = 0.5;
    }
    *param_3 = *param_3 * fVar2;
  }
  return;
}




void FUN_00d8a414(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  FUN_00d8a338();
  uVar1 = FUN_00d80fec(param_1);
  fVar2 = (float)FUN_00d5a3d0(uVar1,DAT_031abff0,0,9);
  *param_3 = fVar2 * *param_3;
  return;
}




undefined1  [16] FUN_00d8a464(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined8 uVar7;
  
  uVar1 = FUN_00d81070(*param_1);
  auVar5 = FUN_00d59f54(uVar1,2,4,0x19,0);
  uVar7 = auVar5._8_8_;
  uVar6 = auVar5._0_8_;
  fVar2 = (float)FUN_00d59f54(uVar1,2,7,0x19,0);
  if (0.0 < fVar2) {
    fVar3 = (float)FUN_00d80ed4(*param_1);
    if (fVar2 <= fVar3) {
      fVar3 = fVar2;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar4 = sinf((fVar3 * 6.2831855) / fVar2);
    if (fVar2 * 0.5 <= fVar3) {
      fVar4 = 2.0 - fVar4;
    }
    fVar2 = (float)NEON_fminnm(fVar4,0x3fc00000);
    if (fVar2 <= 0.5) {
      fVar2 = 0.5;
    }
    uVar6 = (ulong)(uint)(auVar5._0_4_ * fVar2);
    uVar7 = 0;
  }
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = uVar6;
  return auVar5;
}




void FUN_00d8a53c(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  undefined4 uVar10;
  code *local_68;
  undefined4 local_60;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d81070();
  *param_2 = "Effect_Hero009_Sword_Spinning";
  param_2[0xc] = "Krul_ability_c_impact_1";
  *(undefined1 *)(param_2 + 0x16) = 1;
  FUN_00d80ec4(0x40000000,param_1);
  uVar4 = FUN_00d44008(*(undefined4 *)(lVar3 + 0x260),PTR_s_Buff_Krul_Talent_CursedBlade_02bedfe0);
  lVar8 = param_1 + 0x120;
  FUN_00e5ebf8(lVar8);
  *(long *)(param_1 + 0x118) = lVar8;
  uVar10 = FUN_00d59f54(lVar3,2,7,0x19,0);
  FUN_00e5ec34(uVar10,0x41400000,lVar8,param_1);
  lVar8 = param_1 + 0x100;
  uVar5 = FUN_00d850b4(lVar8);
  lVar6 = FUN_00d84048(uVar5,param_1,1);
  lVar6 = lVar6 + 0x10;
  uVar5 = FUN_00d8611c(lVar6);
  if ((uVar4 & 1) == 0) {
    FUN_00d829e8(uVar5,FUN_00d8a338,1,2,0);
    plVar7 = (long *)FUN_00d84eec(lVar6);
    plVar7 = (long *)(**(code **)(*plVar7 + 0x38))
                               (plVar7,PTR_s_Buff_Krul_Hellrazor_SkillShotDam_02beba28);
    local_58 = FUN_00d8a464;
    local_50 = 4;
    (**(code **)(*plVar7 + 0x18))(plVar7,&local_58);
    iVar2 = FUN_00d5c238(lVar3,1);
    if (iVar2 != 0) {
      plVar7 = (long *)FUN_00d84eec(lVar6);
      plVar7 = (long *)(**(code **)(*plVar7 + 0x38))
                                 (plVar7,PTR_s_Buff_Krul_Spectral_Smite_Debuf_02beba08);
      local_58 = FUN_00d8a85c;
      local_50 = 3;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,&local_58);
      local_68 = FUN_00d8a89c;
      local_60 = 3;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
    }
    FUN_00d84e9c(lVar6);
    uVar5 = FUN_00d850b4(lVar8);
    lVar6 = FUN_00d84048(uVar5,param_1,0x40000);
    uVar5 = FUN_00d8611c(lVar6 + 0x10);
    pcVar9 = FUN_00d8a298;
  }
  else {
    FUN_00d829e8(uVar5,FUN_00d8a414,1,2,0);
    plVar7 = (long *)FUN_00d84eec(lVar6);
    plVar7 = (long *)(**(code **)(*plVar7 + 0x38))
                               (plVar7,PTR_s_Buff_Krul_Hellrazor_SkillShotDam_02beba28);
    local_58 = FUN_00d8a464;
    local_50 = 4;
    (**(code **)(*plVar7 + 0x18))(plVar7,&local_58);
    iVar2 = FUN_00d5c238(lVar3,1);
    if (iVar2 != 0) {
      plVar7 = (long *)FUN_00d84eec(lVar6);
      plVar7 = (long *)(**(code **)(*plVar7 + 0x38))
                                 (plVar7,PTR_s_Buff_Krul_Spectral_Smite_Debuf_02beba08);
      local_58 = FUN_00d8a85c;
      local_50 = 3;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,&local_58);
      local_68 = FUN_00d8a870;
      local_60 = 3;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
    }
    FUN_00d84e9c(lVar6);
    uVar5 = FUN_00d850b4(lVar8);
    lVar6 = FUN_00d84048(uVar5,param_1,0x40000);
    uVar5 = FUN_00d8611c(lVar6 + 0x10);
    pcVar9 = FUN_00d8a2d0;
  }
  FUN_00d829e8(uVar5,pcVar9,1,2,0);
  lVar8 = FUN_00d85f00(lVar8);
  FUN_00d84e9c(lVar8 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8a85c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,8,0x19,0);
  return;
}




int FUN_00d8a870(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d5a3d0(param_1,DAT_031abff0,2,9);
  return (int)fVar1;
}




int FUN_00d8a89c(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d59f54(param_1,2,8,0x19,0);
  return (int)fVar1;
}




void FUN_00d8a8c4(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1 + 0x120;
  *param_2 = "Effect_Kraken_Attack_Projectile_5v5";
  param_2[4] = "Effect_Kraken_Attack_Impact_5v5";
  *(undefined4 *)((long)param_2 + 0xac) = 0x3f19999a;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x1eff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41100000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d84e4c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(0x40800000,0x3f266666,0xbf800000,plVar3,0x40000,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  plVar3 = (long *)FUN_00d84eec(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(0x40800000,0x3f266666,plVar3,0x40000,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_SlowDecayingUsingBuffVar_02beb4c8);
  local_58[0] = 0x40200000;
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,local_58);
  (**(code **)(*plVar3 + 0x38))(0x3f000000);
  FUN_00d84e9c(lVar2);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8aa3c(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8a8c4(param_1,param_2,0);
  return;
}




void FUN_00d8aa44(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8a8c4(param_1,param_2,2);
  return;
}




void FUN_00d8aa4c(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x120;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  *param_2 = "Effect_Kraken_Attack_Projectile_5v5";
  param_2[4] = "Effect_Kraken_Attack_Impact_5v5";
  *(undefined4 *)((long)param_2 + 0xac) = 0x3f19999a;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x1eff;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41400000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d82a00(uVar2,param_3);
  FUN_00d84e9c(lVar1 + 0x10);
  FUN_00d82cf0();
  return;
}




void FUN_00d8aae4(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8aa4c(param_1,param_2,0);
  return;
}




void FUN_00d8aaec(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8aa4c(param_1,param_2,2);
  return;
}




void FUN_00d8aaf4(undefined8 param_1,long param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_00d80ee4();
  lVar2 = *(long *)(param_2 + 0x40);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar4 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
          (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
  fVar3 = (*(float *)(lVar1 + 0x1b0) + 1.0) *
          (*(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0));
  if (DAT_031aa930 <= fVar4) {
    fVar4 = DAT_031aa930;
  }
  fVar5 = DAT_031aa870;
  if (DAT_031aa870 <= fVar4) {
    fVar5 = fVar4;
  }
  if (DAT_031aa940 <= fVar3) {
    fVar3 = DAT_031aa940;
  }
  fVar4 = DAT_031aa880;
  if (DAT_031aa880 <= fVar3) {
    fVar4 = fVar3;
  }
  *param_3 = fVar5 * 0.02 + fVar4 / 10.0;
  return;
}




void FUN_00d8abc8(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Ghostwing_Attack_Projectile_5v5";
  param_2[4] = "Effect_Ghostwing_Attack_Impact_5v5";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xe178;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xaf;
  param_2[0xc] = "build://Sounds/5v5/SFX/sfx_ghostwing_fireball_impact.mp3";
  param_2[0x15] = 0x3ed1eb853e4ccccd;
  iVar2 = rand();
  lVar4 = param_1 + 0x120;
  FUN_00e5e52c(lVar4);
  *(long *)(param_1 + 0x118) = lVar4;
  uVar3 = FUN_00e5e5a0(0x41780000,lVar4,param_1);
  FUN_00e5e92c(0x3f266666,(float)iVar2 * 4.656613e-10 * 0.7 + -0.35,0x3e4ccccd,uVar3,param_1);
  FUN_00d84dfc(param_1 + 0x100);
  lVar4 = FUN_00d844fc(0x3e4ccccd);
  lVar4 = lVar4 + 0x10;
  uVar3 = FUN_00d8611c(lVar4);
  FUN_00d829e8(uVar3,FUN_00d8aaf4,1,2,0);
  plVar5 = (long *)FUN_00d84eec(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_MortalWound_02beb418);
  local_58[0] = 0x40400000;
  local_50 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_58);
  FUN_00d84e9c(lVar4);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00d8abc8(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 auStack_58 [2];
  undefined4 uStack_50;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Ghostwing_Attack_Projectile_5v5";
  param_2[4] = "Effect_Ghostwing_Attack_Impact_5v5";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xe178;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xaf;
  param_2[0xc] = "build://Sounds/5v5/SFX/sfx_ghostwing_fireball_impact.mp3";
  param_2[0x15] = 0x3ed1eb853e4ccccd;
  iVar2 = rand();
  lVar4 = param_1 + 0x120;
  FUN_00e5e52c(lVar4);
  *(long *)(param_1 + 0x118) = lVar4;
  uVar3 = FUN_00e5e5a0(0x41780000,lVar4,param_1);
  FUN_00e5e92c(0x3f266666,(float)iVar2 * 4.656613e-10 * 0.7 + -0.35,0x3e4ccccd,uVar3,param_1);
  FUN_00d84dfc(param_1 + 0x100);
  lVar4 = FUN_00d844fc(0x3e4ccccd);
  lVar4 = lVar4 + 0x10;
  uVar3 = FUN_00d8611c(lVar4);
  FUN_00d829e8(uVar3,FUN_00d8aaf4,1,2,0);
  plVar5 = (long *)FUN_00d84eec(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_MortalWound_02beb418);
  auStack_58[0] = 0x40400000;
  uStack_50 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,auStack_58);
  FUN_00d84e9c(lVar4);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00d8abc8(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 auStack_58 [2];
  undefined4 uStack_50;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Ghostwing_Attack_Projectile_5v5";
  param_2[4] = "Effect_Ghostwing_Attack_Impact_5v5";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xe178;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xaf;
  param_2[0xc] = "build://Sounds/5v5/SFX/sfx_ghostwing_fireball_impact.mp3";
  param_2[0x15] = 0x3ed1eb853e4ccccd;
  iVar2 = rand();
  lVar4 = param_1 + 0x120;
  FUN_00e5e52c(lVar4);
  *(long *)(param_1 + 0x118) = lVar4;
  uVar3 = FUN_00e5e5a0(0x41780000,lVar4,param_1);
  FUN_00e5e92c(0x3f266666,(float)iVar2 * 4.656613e-10 * 0.7 + -0.35,0x3e4ccccd,uVar3,param_1);
  FUN_00d84dfc(param_1 + 0x100);
  lVar4 = FUN_00d844fc(0x3e4ccccd);
  lVar4 = lVar4 + 0x10;
  uVar3 = FUN_00d8611c(lVar4);
  FUN_00d829e8(uVar3,FUN_00d8aaf4,1,2,0);
  plVar5 = (long *)FUN_00d84eec(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_MortalWound_02beb418);
  auStack_58[0] = 0x40400000;
  uStack_50 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,auStack_58);
  FUN_00d84e9c(lVar4);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8ad50(long param_1)

{
  long lVar1;
  
  FUN_00d80ec4(0x40000000);
  lVar1 = param_1 + 0x120;
  FUN_00e5fc3c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5fc5c(0x41000000,0x40c00000,lVar1,param_1);
  lVar1 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar1 + 0x10);
  FUN_00d82cf0();
  return;
}




void FUN_00d8ada8(undefined8 param_1,long param_2,float *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = FUN_00d80ee4();
  lVar2 = *(long *)(lVar2 + 0x40);
  lVar3 = *(long *)(param_2 + 0x40);
  fVar5 = (*(float *)(lVar2 + 0x1b0) + 1.0) *
          (*(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0));
  fVar6 = (*(float *)(lVar3 + 0x1a0) + 1.0) *
          (*(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0));
  if (DAT_031aa940 <= fVar5) {
    fVar5 = DAT_031aa940;
  }
  uVar1 = *(uint *)(param_2 + 0x2f4);
  fVar4 = DAT_031aa880;
  if (DAT_031aa880 <= fVar5) {
    fVar4 = fVar5;
  }
  if (DAT_031aa930 <= fVar6) {
    fVar6 = DAT_031aa930;
  }
  fVar5 = DAT_031aa870;
  if (DAT_031aa870 <= fVar6) {
    fVar5 = fVar6;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    if ((uVar1 >> 0xd & 1) == 0) {
      if (((uVar1 >> 0xe & 1) == 0) && ((uVar1 >> 0xf & 1) == 0)) {
        fVar6 = 0.045;
      }
      else {
        fVar6 = 0.04;
      }
    }
    else {
      fVar6 = 0.06;
    }
    fVar5 = fVar4 / 9.0 + fVar5 * fVar6;
  }
  else {
    fVar5 = fVar5 * 0.25;
  }
  *param_3 = fVar5;
  return;
}




void FUN_00d8aeb4(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar6 = FUN_00ceab48();
  if ((((uVar6 & 1) != 0) && (param_1[1] != 0)) && (lVar7 = FUN_00d80f68(*param_1), lVar7 != 0)) {
    uVar1 = *(undefined4 *)(param_1[1] + 0x260);
    lVar7 = FUN_00d80f68(*param_1);
    puVar4 = PTR_s_Buff_RevealToBestowersTeam_02bebb00;
    uVar2 = *(undefined4 *)(lVar7 + 0x260);
    uVar5 = FUN_00ceb350();
    FUN_00cfe864(0x40a00000,0,0,auStack_90,uVar1,uVar2,puVar4,uVar5,1,0,0);
    FUN_00ce20fc(auStack_90);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8af74(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_2 = "Effect_Blackclaw_BreathProjectile";
  param_2[6] = "Effect_Blackclaw_BreathGround";
  param_2[4] = "Effect_Blackclaw_BreathImpact";
  FUN_00d80ec4(0x3f800000);
  lVar2 = param_1 + 0x120;
  FUN_00e5fc3c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5fc5c(0x41800000,0x41700000,lVar2,param_1);
  uVar1 = FUN_00d850b4(param_1 + 0x100);
  lVar2 = FUN_00d84048(uVar1,param_1,0x40000);
  uVar1 = FUN_00d8611c(lVar2 + 0x10);
  FUN_00d829e8(uVar1,FUN_00d8ada8,1,2,0);
  uVar1 = FUN_00d8789c(lVar2 + 0x10);
  FUN_00d82598(uVar1,FUN_00d8aeb4);
  lVar2 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  return;
}

