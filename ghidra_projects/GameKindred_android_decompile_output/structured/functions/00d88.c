// functions/00d88 — 23 functions
#include "libGameKindred.h"




void FUN_00d880fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1 + 0x120;
  *(char **)(param_2 + 0x30) = "Effect_JMinion_Mine_Proj";
  *(char **)(param_2 + 0x20) = "Effect_JMinion_Mine_Proj_Impact";
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41400000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d8611c(lVar2);
  FUN_00d829e8(uVar3,FUN_00d82c30,3,0,0);
  plVar4 = (long *)FUN_00d84eec(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_SlowDecayingUsingBuffVar_02beb4c8);
  local_48[0] = 0x3fb33333;
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  (**(code **)(*plVar4 + 0x38))(0x3eb33333);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d88208(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1 + 0x120;
  *(char **)(param_2 + 0x30) = "Effect_JMinion_Mine_Proj";
  *(char **)(param_2 + 0x20) = "Effect_JMinion_Mine_Proj_Impact";
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41400000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d8611c(lVar2);
  FUN_00d829e8(uVar3,FUN_00d82c30,3,0,0);
  plVar4 = (long *)FUN_00d84eec(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_SlowDecayingUsingBuffVar_02beb4c8);
  local_48[0] = 0x3fb33333;
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  (**(code **)(*plVar4 + 0x38))(0x3eb33333);
  plVar4 = (long *)FUN_00d84eec(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Blitz_GloballyVisible_02bf0450);
  local_48[0] = 0x40000000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d88350(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1 + 0x120;
  *(char **)(param_2 + 0x30) = "Effect_JMinion_Mine_Proj";
  *(char **)(param_2 + 0x20) = "Effect_JMinion_Mine_Proj_Impact";
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41400000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d8611c(lVar2);
  FUN_00d829e8(uVar3,FUN_00d82c30,3,0,0);
  plVar4 = (long *)FUN_00d84eec(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_SlowDecayingUsingBuffVar_02beb4c8);
  local_48[0] = 0x3fb33333;
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  (**(code **)(*plVar4 + 0x38))(0x3eb33333);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00d8845c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00da2c48();
  uVar2 = 0x41700000;
  if (iVar1 != 2) {
    uVar2 = 0x41400000;
  }
  return uVar2;
}




undefined4 FUN_00d88480(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00da2c48();
  uVar2 = 0x41700000;
  if (iVar1 != 2) {
    uVar2 = 0x41400000;
  }
  return uVar2;
}




void FUN_00d884a4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_JM_TreeEnt_Heal";
  param_2[4] = "Effect_MulledWine_buff";
  param_2[0xc] = "build://Sounds/Treant/tree_ent_heal_impact.mp3";
  FUN_00d80ec4(0x3dcccccd);
  lVar3 = param_1 + 0x120;
  FUN_00e5e52c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  uVar2 = FUN_00e5e560(0x3f4ccccd,lVar3,param_1);
  FUN_00e5e92c(0x3f000000,0,0x40800000,uVar2,param_1);
  FUN_00d84dfc(param_1 + 0x100);
  lVar3 = FUN_00d844fc(0x3e4ccccd);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d84eec(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_JungleMinion_TreeEnt_Restor_02bf0968);
  local_48 = FUN_00d8845c;
  local_40 = 4;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  plVar4 = (long *)FUN_00d84eec(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_JungleMinion_TreeEnt_Barrie_02bf0970);
  local_48 = FUN_00d88480;
  local_40 = 4;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  FUN_00d84e9c(lVar3);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d88600(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_JM_TreeEnt_Heal";
  param_2[4] = "Effect_MulledWine_buff";
  param_2[0xc] = "build://Sounds/Treant/tree_ent_heal_impact.mp3";
  FUN_00d80ec4(0x3dcccccd);
  lVar3 = param_1 + 0x120;
  FUN_00e5e52c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  uVar2 = FUN_00e5e560(0x3f4ccccd,lVar3,param_1);
  FUN_00e5e92c(0x3f000000,0,0x40800000,uVar2,param_1);
  FUN_00d84dfc(param_1 + 0x100);
  lVar3 = FUN_00d844fc(0x3e4ccccd);
  plVar4 = (long *)FUN_00d84eec(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_JungleMinion_TreeEnt_Restor_02bf0968);
  local_48 = FUN_00d8845c;
  local_40 = 4;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  FUN_00d84e9c(lVar3 + 0x10);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8871c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_2[1] = "Effect_JM_CrystalMiner_DeathBuff_E";
  *param_2 = "Effect_JM_CrystalMiner_DeathBuff_A";
  param_2[4] = "Effect_JM_CrystalMiner_DB_Impact";
  FUN_00d80ec4(0x3dcccccd);
  lVar3 = param_1 + 0x120;
  FUN_00e5e52c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  uVar2 = FUN_00e5e560(0x3f99999a,lVar3,param_1);
  FUN_00e5e92c(0x3f000000,0,0x40800000,uVar2,param_1);
  FUN_00d84dfc(param_1 + 0x100);
  lVar3 = FUN_00d844fc(0x3e4ccccd);
  plVar4 = (long *)FUN_00d84eec(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_JungleMinion_CrystalMiner_C_02bf0990);
  local_48[0] = 0x43960000;
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  FUN_00d81070(param_1);
  uVar2 = FUN_00d5bc54();
  (**(code **)(*plVar4 + 0x48))(plVar4,uVar2);
  FUN_00d84e9c(lVar3 + 0x10);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8885c(undefined8 param_1,long param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(param_2 + 0x260);
  return;
}




void FUN_00d88868(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_68 [2];
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_2 = param_3;
  *(undefined4 *)((long)param_2 + 0xac) = 0x3f000000;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x66ff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  FUN_00d80ec4(0x3dcccccd);
  FUN_00d80edc(0x41c80000,param_1);
  lVar5 = param_1 + 0x120;
  FUN_00e5e52c(lVar5);
  *(long *)(param_1 + 0x118) = lVar5;
  uVar2 = FUN_00e5e560(0x3fc00000,lVar5,param_1);
  FUN_00e5e92c(0x3f000000,0,0x40800000,uVar2,param_1);
  lVar5 = param_1 + 0x100;
  uVar2 = FUN_00d850b4(lVar5);
  lVar3 = FUN_00d84048(uVar2,param_1,1);
  plVar4 = (long *)FUN_00d84eec(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,param_4);
  local_68[0] = FUN_00d813c0(param_1);
  local_60 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_68);
  FUN_00d84e9c(lVar3 + 0x10);
  FUN_00d82cf0();
  uVar2 = FUN_00d850b4(lVar5);
  FUN_00d84048(uVar2,param_1,1);
  lVar3 = FUN_00d840ec();
  plVar4 = (long *)FUN_00d84eec(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,param_4);
  local_68[0] = FUN_00d813c0(param_1);
  local_60 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,local_68);
  (**(code **)(*plVar4 + 0x28))(plVar4,FUN_00d8885c);
  FUN_00d84e9c(lVar3 + 0x10);
  FUN_00d82cf0();
  lVar5 = FUN_00d851a4(lVar5);
  FUN_00d84e9c(lVar5 + 0x10);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d88a28(undefined8 param_1,undefined8 param_2)

{
  FUN_00d88868(param_1,param_2,"Effect_Red_Buff",PTR_s_Buff_JungleMinion_5v5_WeaponOrb_02bf09b8);
  return;
}




void FUN_00d88a40(undefined8 param_1,undefined8 param_2)

{
  FUN_00d88868(param_1,param_2,"Effect_Blue_Buff",PTR_s_Buff_JungleMinion_5v5_CrystalOrb_02bf09a8);
  return;
}




void FUN_00d88a58(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00ceab48();
  if (((uVar1 & 1) != 0) && (lVar2 = FUN_00d80f68(*param_1), lVar2 != 0)) {
    *(ushort *)(lVar2 + 0x301) = *(ushort *)(lVar2 + 0x301) | 0x8000;
  }
  return;
}




void FUN_00d88a98(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_2 = "Effect_MinionRanged_Projectile";
  param_2[4] = "Effect_MinionRanged_HitImpact";
  FUN_00d80ec4(0x3f000000);
  lVar2 = param_1 + 0x120;
  FUN_00e5fc3c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5fc5c(0x40d00000,0x41c00000,lVar2,param_1);
  uVar1 = FUN_00d850b4(param_1 + 0x100);
  lVar2 = FUN_00d84048(uVar1,param_1,0x40000);
  uVar1 = FUN_00d8611c(lVar2 + 0x10);
  FUN_00d829e8(uVar1,FUN_00d82c30,4,0,0);
  FUN_00d84e9c(lVar2 + 0x10);
  lVar2 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar2 + 0x10);
  return;
}




void FUN_00d88b48(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1 + 0x120;
  *param_2 = "Effect_WitchDoctor_Heal_Core";
  param_2[4] = "Effect_WitchDoctor_Heal_Impact";
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41700000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  plVar3 = (long *)FUN_00d84eec(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Horde_WitchDoctorHeal_02bf0550);
  local_48[0] = 0x3f800000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  FUN_00d84e9c(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d88c1c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1 + 0x120;
  *param_2 = "Effect_FrostMage_FrostBolt_Core";
  param_2[4] = "Effect_FrostMage_FrostBolt_Impact";
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x40900000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d8611c(lVar2);
  FUN_00d829e8(uVar3,FUN_00d82c30,1,2,0);
  plVar4 = (long *)FUN_00d84eec(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Slow_02beb440);
  local_48[0] = 0x40000000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d88d10(undefined8 param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d80ee4();
  fVar2 = (float)thunk_FUN_00d086f0(uVar1,6,1);
  *param_2 = -fVar2;
  return;
}




void FUN_00d88d44(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d80ee4();
  fVar3 = *(float *)(*(long *)(lVar1 + 0x40) + 0xfc);
  fVar2 = (float)thunk_FUN_00d086f0(lVar1,9,1);
  fVar3 = fVar3 * fVar2;
  if (fVar3 <= 1.0) {
    fVar3 = 1.0;
  }
  *param_3 = fVar3;
  return;
}




void FUN_00d88d90(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d80ee4();
  *param_3 = 0.0;
  fVar2 = (float)thunk_FUN_00d086f0(lVar1,0xe,3);
  *param_3 = fVar2;
  fVar3 = *(float *)(*(long *)(lVar1 + 0x40) + 0x100);
  fVar2 = (float)thunk_FUN_00d086f0(lVar1,8,1);
  *param_3 = *param_3 + fVar3 * fVar2;
  return;
}




void FUN_00d88df8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  lVar1 = FUN_00d80f68();
  *param_2 = "Effect_Idris_AA_Chakram";
  param_2[4] = "Effect_Idris_AA_Chakram_Impact";
  param_2[0xc] = "Sound_Idras_Ranged_Attack_Impact_2";
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d09dc4(*(undefined4 *)(lVar2 + 0x38c));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41600000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  uVar3 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),
                       PTR_s_Buff_Idris_Talent_PathOfTheSeeke_02bedfb0);
  lVar2 = lVar2 + 0x10;
  uVar4 = FUN_00d8611c(lVar2);
  if ((uVar3 & 1) == 0) {
    FUN_00d829e8(uVar4,FUN_00d88d44,0,0,0);
  }
  else {
    FUN_00d82a00(uVar4,1);
  }
  uVar4 = FUN_00d8611c(lVar2);
  FUN_00d829e8(uVar4,FUN_00d88d90,1,1,0);
  FUN_00d84e9c(lVar2);
  return;
}




void FUN_00d88ef8(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d80ee4();
  fVar3 = *(float *)(*(long *)(lVar1 + 0x40) + 0xfc);
  fVar2 = (float)thunk_FUN_00d086f0(lVar1,9,1);
  fVar3 = fVar3 * fVar2;
  if (fVar3 <= 1.0) {
    fVar3 = 1.0;
  }
  *param_3 = fVar3;
  fVar2 = (float)FUN_00d59f54(lVar1,0,2,0x19,0);
  *param_3 = *param_3 * (fVar2 + 1.0);
  return;
}




void FUN_00d88f70(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d80ee4();
  FUN_00d82c54(param_1,param_2);
  fVar2 = (float)FUN_00d59f54(uVar1,0,2,0x19,0);
  *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) * (fVar2 + 1.0);
  return;
}




void FUN_00d88fd8(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d80ee4();
  *param_3 = 0.0;
  fVar2 = (float)thunk_FUN_00d086f0(lVar1,0xe,3);
  *param_3 = fVar2;
  fVar3 = *(float *)(*(long *)(lVar1 + 0x40) + 0x100);
  fVar2 = (float)thunk_FUN_00d086f0(lVar1,8,1);
  *param_3 = *param_3 + fVar3 * fVar2;
  fVar2 = (float)FUN_00d59f54(lVar1,0,2,0x19,0);
  *param_3 = *param_3 * (fVar2 + 1.0);
  return;
}

