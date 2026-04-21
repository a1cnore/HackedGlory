// functions/00d8d — 15 functions
#include "libGameKindred.h"




void FUN_00d8d0a8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x120;
  *param_2 = "Effect_Samuel_EnergyReturnShot";
  param_2[4] = "Effect_Samuel_EnergyRestore";
  param_2[0xc] = "Sound_Samuel_attack_empowered_drain";
  *(undefined4 *)(param_2 + 0x15) = 0x3f000000;
  FUN_00e5e52c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  uVar1 = FUN_00e5e560(0x3f4ccccd,lVar2,param_1);
  FUN_00e5e92c(0x3f000000,0,0x40800000,uVar1,param_1);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  uVar1 = FUN_00d8d624(lVar2);
  FUN_00d82e24(uVar1,FUN_00d8ce70);
  uVar1 = FUN_00d89448(lVar2);
  FUN_00d83110(uVar1,0,FUN_00d8cfac);
  FUN_00d84e9c(lVar2);
  return;
}




void FUN_00d8d164(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  param_2[0xd] = "Sound_Samuel_ability_a_hit_2";
  param_2[0xc] = "Sound_Samuel_ability_a_hit_1";
  *param_2 = "Effect_Samuel_A_Shot";
  param_2[4] = "Effect_Samuel_A_Shot_Impact";
  param_2[0xe] = "Sound_Samuel_ability_a_hit_3";
  *(undefined4 *)(param_2 + 0x15) = 0x3f000000;
  FUN_00d80ec4(0x3f000000);
  lVar2 = param_1 + 0x120;
  FUN_00e5fc3c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5fe1c(0x41a00000,lVar2,param_1,1);
  uVar1 = FUN_00d850b4(param_1 + 0x100);
  lVar2 = FUN_00d84048(uVar1,param_1,0x40000);
  plVar3 = (long *)FUN_00d84e4c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Damage",1);
  FUN_00d84e9c(lVar2 + 0x10);
  lVar2 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar2 + 0x10);
  return;
}




void FUN_00d8d250(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  uVar1 = FUN_00d80f68();
  param_2[0xd] = "Sound_Samuel_ability_a_empowered_hit_2";
  param_2[0xc] = "Sound_Samuel_ability_a_empowered_hit_1";
  *param_2 = "Effect_Samuel_A_Empowered_Shot";
  param_2[4] = "Effect_Samuel_A_Empowered_Shot_Impact";
  param_2[0xe] = "Sound_Samuel_ability_a_empowered_hit_3";
  *(undefined4 *)(param_2 + 0x15) = 0x3f000000;
  FUN_00d80ec4(0x3f000000,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00e5fe1c(0x41f00000,lVar3,param_1,2);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d84e4c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"Empowered Damage Primary",1);
  plVar4 = (long *)FUN_00d84e4c(lVar3);
  uVar1 = FUN_00d59f54(uVar1,1,6,0x19,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(uVar1,0xbf800000,0xbf800000,plVar4,0x40000,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"Empowered Damage",1);
  FUN_00d84e9c(lVar3);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  return;
}




undefined1  [16] FUN_00d8d3bc(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  
  lVar1 = FUN_00d80f68(*param_1);
  auVar4 = FUN_00d59f54(lVar1,4,5,0x19,0);
  uVar6 = auVar4._8_8_;
  uVar5 = auVar4._0_8_;
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),
                       PTR_s_Buff_Samuel_Talent_UnwakingNight_02bee240);
  if ((uVar2 & 1) != 0) {
    fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_031ac728,1,9);
    uVar5 = (ulong)(uint)(auVar4._0_4_ * fVar3);
    uVar6 = 0;
  }
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar5;
  return auVar4;
}




void FUN_00d8d43c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_Samuel_NightmareShot";
  param_2[4] = "Effect_Samuel_C_Detonate";
  param_2[0xc] = "Sound_Samuel_ability_c_hit";
  FUN_00d80ec4(0x3f000000,param_1);
  lVar4 = param_1 + 0x120;
  FUN_00e5e52c(lVar4);
  *(long *)(param_1 + 0x118) = lVar4;
  FUN_00d59f54(uVar2,4,3,0x19,0);
  uVar3 = FUN_00e5e560(lVar4,param_1);
  FUN_00e5e74c(0x3f733333,0,0x3e6147ae,uVar3,param_1);
  lVar4 = FUN_00d85f00(param_1 + 0x100);
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_00d84e4c(lVar4);
  uVar6 = FUN_00d59f54(uVar2,4,4,0x19,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(uVar6,0xbf800000,0xbf800000,plVar5,0x40000,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"Damage",4);
  plVar5 = (long *)FUN_00d84eec(lVar4);
  uVar6 = FUN_00d59f54(uVar2,4,4,0x19,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(uVar6,0xbf800000,plVar5,0x40000,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Samuel_C_Nightmare_02bf0ed0);
  local_58 = FUN_00d8d3bc;
  local_50 = 4;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  FUN_00d84e9c(lVar4);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8d624(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cda1cc();
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




void FUN_00d8d674(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_SAW_Projectile";
  *(undefined1 *)(param_2 + 0x16) = 1;
  lVar2 = FUN_00d80f68();
  uVar3 = FUN_00d44008(*(undefined4 *)(lVar2 + 0x260),PTR_s_Buff_SAW_Talent_PiercingBullets_02bee130
                      );
  if ((uVar3 & 1) == 0) {
    param_2[4] = "Effect_SAW_Projectile_Impact";
    lVar2 = param_1 + 0x120;
    FUN_00e5ff9c(lVar2);
    *(long *)(param_1 + 0x118) = lVar2;
    FUN_00e5ffd8(0x41f00000,lVar2);
    lVar2 = FUN_00d84dfc(param_1 + 0x100);
    uVar5 = FUN_00d8611c(lVar2 + 0x10);
    FUN_00d82a00(uVar5,param_3);
    FUN_00d84e9c(lVar2 + 0x10);
  }
  else {
    FUN_00d80ec4(0x3e19999a,param_1);
    lVar2 = param_1 + 0x120;
    FUN_00e5fc3c(lVar2);
    *(long *)(param_1 + 0x118) = lVar2;
    lVar4 = FUN_00d80f68(param_1);
    fVar7 = *(float *)(*(long *)(lVar4 + 0x40) + 0x78);
    uVar5 = FUN_00d80f68(param_1);
    fVar8 = (float)FUN_00d5a3d0(uVar5,DAT_031ac518,0,9);
    FUN_00e5fc5c(0x42340000,fVar7 + 1.8 + fVar8,lVar2,param_1);
    uVar5 = FUN_00d850b4(param_1 + 0x100);
    lVar2 = FUN_00d84048(uVar5,param_1,0x40000);
    uVar5 = FUN_00d8611c(lVar2 + 0x10);
    FUN_00d82a00(uVar5,param_3);
    plVar6 = (long *)FUN_00d84eec(lVar2 + 0x10);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                               (plVar6,PTR_s_Buff_SAW_PiercingBullets_ImpactP_02bee140);
    local_58[0] = 0x3f000000;
    local_50 = 1;
    (**(code **)(*plVar6 + 0x18))(plVar6,local_58);
    lVar2 = FUN_00d851a4(param_1 + 0x100);
    FUN_00d84e9c(lVar2 + 0x10);
    FUN_00d82cf0();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8d848(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8d674(param_1,param_2,0);
  return;
}




void FUN_00d8d850(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8d674(param_1,param_2,2);
  return;
}




void FUN_00d8d858(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  
  uVar1 = FUN_00d80f68();
  *param_2 = "Effect_SAW_Projectile_Explosive";
  param_2[4] = "Effect_SAW_Projectile_Explosive_Impact";
  *(undefined1 *)(param_2 + 0x16) = 1;
  FUN_00d80ec4(0x3f000000,param_1);
  lVar2 = FUN_00d80f68(param_1);
  uVar3 = FUN_00d44008(*(undefined4 *)(lVar2 + 0x260),PTR_s_Buff_SAW_Talent_PiercingBullets_02bee130
                      );
  lVar2 = param_1 + 0x120;
  FUN_00e5fc3c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5fe1c(0x41b00000,lVar2,param_1,3);
  lVar2 = param_1 + 0x100;
  uVar4 = FUN_00d850b4(lVar2);
  lVar5 = FUN_00d84048(uVar4,param_1,0x40000);
  plVar6 = (long *)FUN_00d84e4c(lVar5 + 0x10);
  if ((uVar3 & 1) == 0) {
    uVar7 = FUN_00d59f54(uVar1,3,5,0x19,0);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(uVar7,0xbf800000,0xbf800000,plVar6,0x40000,0);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
    (**(code **)(*plVar6 + 0x38))(plVar6,"DAMAGE",3);
    FUN_00d84e9c(lVar5 + 0x10);
    lVar2 = FUN_00d851a4(lVar2);
    lVar2 = lVar2 + 0x10;
    plVar6 = (long *)FUN_00d84e4c(lVar2);
    uVar7 = FUN_00d59f54(uVar1,3,5,0x19,0);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(uVar7,0xbf800000,0xbf800000,plVar6,0x40000,0);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
    lVar5 = *plVar6;
  }
  else {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6);
    (**(code **)(*plVar6 + 0x38))(plVar6,"DAMAGE",3);
    lVar2 = FUN_00d851a4(lVar2);
    lVar2 = lVar2 + 0x10;
    plVar6 = (long *)FUN_00d84e4c(lVar2);
    uVar7 = FUN_00d59f54(uVar1,3,5,0x19,0);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(uVar7,0xbf800000,0xbf800000,plVar6,0x40000,0);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
    lVar5 = *plVar6;
  }
  (**(code **)(lVar5 + 0x38))(plVar6,"DAMAGE",3);
  FUN_00d84e9c(lVar2);
  FUN_00d82cf0();
  return;
}




void FUN_00d8dab4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x120;
  *param_2 = "Effect_Hero010_FireBall";
  param_2[4] = "Effect_Hero010_FireBall_Impact";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41600000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d82a00(uVar2,0);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d8db24(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x120;
  *param_2 = "Effect_Hero010_Fireball_Crit";
  param_2[4] = "Effect_Hero010_Fireball_Impact_Crit";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41c80000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d82a00(uVar2,2);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d8db94(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x120;
  *param_2 = "Effect_Hero010_Fireball_Crit";
  param_2[4] = "Effect_Hero010_Fireball_Impact_Crit";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41c80000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d82a00(uVar2,1);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d8dc04(undefined8 param_1,long param_2,float *param_3)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  
  lVar1 = FUN_00d80ee4();
  fVar3 = (float)FUN_00d59f54(lVar1,0,0,0x19,0);
  *param_3 = fVar3;
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),
                       PTR_s_Buff_Skaarf_Talent_FlamingSludge_02bee188);
  if ((uVar2 & 1) != 0) {
    fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_031ac544,0,9);
    *param_3 = fVar3 * *param_3;
  }
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar3 = (float)FUN_00d59f54(lVar1,0,6,0x19,0);
    *param_3 = fVar3 * *param_3;
  }
  fVar3 = (float)FUN_00d813c0(param_1);
  *param_3 = fVar3 * *param_3;
  return;
}




void FUN_00d8dcd0(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_88;
  undefined4 local_80;
  code *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d80f68();
  *param_2 = "Effect_Hero010_FireBall_Ground";
  param_2[4] = "Effect_Hero010_FireBall_Impact";
  param_2[0xc] = "Sound_Skaarf_Ability_A_Impact";
  FUN_00d80ec4(0x3e99999a,param_1);
  FUN_00d813c8(0x3f800000,param_1);
  uVar4 = FUN_00d44008(*(undefined4 *)(lVar3 + 0x260),
                       PTR_s_Buff_Skaarf_Talent_FlamingSludge_02bee188);
  uVar5 = FUN_00d44008(*(undefined4 *)(lVar3 + 0x260),PTR_s_Buff_Skaarf_Talent_Splitfire_02bee168);
  lVar9 = param_1 + 0x120;
  FUN_00e5fc3c(lVar9);
  *(long *)(param_1 + 0x118) = lVar9;
  FUN_00d59f54(lVar3,0,3,0x19,0);
  FUN_00e5fe1c(lVar9,param_1,0);
  lVar9 = param_1 + 0x100;
  local_88 = 0xffffffff00440000;
  local_80 = 0x100;
  uVar6 = FUN_00d850b4(lVar9);
  lVar7 = FUN_00d84078(uVar6,param_1,&local_88);
  lVar7 = lVar7 + 0x10;
  if ((uVar5 & 1) == 0) {
    uVar6 = FUN_00d8611c(lVar7);
    FUN_00d829e8(uVar6,FUN_00d8dc04,1,2,0);
  }
  plVar8 = (long *)FUN_00d84eec(lVar7);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x38))(plVar8,PTR_s_Buff_Skaarf_Burn_02bf0f20);
  local_78 = FUN_00d8e0e0;
  local_70 = 3;
  (**(code **)(*plVar8 + 0x18))(plVar8,&local_78);
  if (((uVar5 & 1) != 0) && (iVar2 = FUN_00d5c238(lVar3,0), iVar2 != 0)) {
    plVar8 = (long *)FUN_00d84eec(lVar7);
    plVar8 = (long *)(**(code **)(*plVar8 + 0x38))
                               (plVar8,PTR_s_Buff_Skaarf_Talent_Splitfire_Hit_02bee158);
    local_78 = (code *)CONCAT44(local_78._4_4_,0x3f800000);
    local_70 = 1;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_78);
  }
  if (((uVar4 & 1) != 0) && (iVar2 = FUN_00d5c238(lVar3,1), iVar2 != 0)) {
    uVar6 = FUN_00d89c00(lVar7);
    uVar6 = FUN_00d836e8(uVar6,PTR_s__SkaarfGoopPool__02bf01b0,1);
    FUN_00d83774(0xbf800000,uVar6,PTR_s_Buff_Skaarf_GoopPoolOnFire_02bf0f48);
  }
  FUN_00d84e9c(lVar7);
  uVar6 = FUN_00d850b4(lVar9);
  lVar7 = FUN_00d84048(uVar6,param_1,0x40000);
  lVar7 = lVar7 + 0x10;
  if ((uVar5 & 1) == 0) {
    uVar6 = FUN_00d8611c(lVar7);
    FUN_00d829e8(uVar6,FUN_00d8dc04,1,2,0);
  }
  plVar8 = (long *)FUN_00d84eec(lVar7);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x38))(plVar8,PTR_s_Buff_Skaarf_Burn_02bf0f20);
  local_78 = FUN_00d8e0e0;
  local_70 = 3;
  (**(code **)(*plVar8 + 0x18))(plVar8,&local_78);
  if (((uVar5 & 1) != 0) && (iVar2 = FUN_00d5c238(lVar3,0), iVar2 != 0)) {
    plVar8 = (long *)FUN_00d84eec(lVar7);
    plVar8 = (long *)(**(code **)(*plVar8 + 0x38))
                               (plVar8,PTR_s_Buff_Skaarf_Talent_Splitfire_Hit_02bee158);
    local_78 = (code *)CONCAT44(local_78._4_4_,0x3f800000);
    local_70 = 1;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_78);
  }
  uVar6 = FUN_00d8e0ec(lVar7);
  FUN_00d59f54(lVar3,0,4,0x19,0);
  FUN_00d83218(uVar6,2);
  uVar6 = FUN_00d850b4(lVar9);
  FUN_00d840b4(uVar6,param_1,PTR_s_SkaarfGoopPool_02bf01a8);
  lVar7 = FUN_00d840ec();
  iVar2 = FUN_00d5c238(lVar3,1);
  if (iVar2 != 0) {
    uVar6 = FUN_00d85154(lVar7 + 0x10);
    FUN_00d825d8(uVar6,PTR_s_Buff_Skaarf_GoopPool_02bf0f50);
    plVar8 = (long *)FUN_00d84eec(lVar7 + 0x10);
    (**(code **)(*plVar8 + 0x38))(plVar8,PTR_s_Buff_Skaarf_GoopPoolOnFire_02bf0f48);
  }
  lVar9 = FUN_00d851a4(lVar9);
  if (((uVar4 & 1) != 0) && (iVar2 = FUN_00d5c238(lVar3,1), iVar2 != 0)) {
    uVar6 = FUN_00d89c00(lVar9 + 0x10);
    uVar6 = FUN_00d836e8(uVar6,PTR_s__SkaarfGoopPool__02bf01b0,1);
    FUN_00d83774(0xbf800000,uVar6,PTR_s_Buff_Skaarf_GoopPoolOnFire_02bf0f48);
  }
  FUN_00d84e9c(lVar9 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

