// functions/00d8c — 24 functions
#include "libGameKindred.h"




void FUN_00d8c024(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  iVar1 = rand();
  puVar6 = (&PTR_s_Effect_TurretCore_0281efb8)[iVar1 % 10];
  param_2[4] = "Effect_Skye_C_Explosion";
  *param_2 = puVar6;
  lVar5 = param_1 + 0x120;
  FUN_00e5e52c(lVar5);
  *(long *)(param_1 + 0x118) = lVar5;
  iVar1 = rand();
  uVar4 = FUN_00e5e5a0((float)iVar1 * 4.656613e-10 * 5.0 + 5.0,lVar5,param_1);
  iVar1 = rand();
  iVar2 = rand();
  iVar3 = rand();
  FUN_00e5e92c((float)iVar1 * 4.656613e-10 * 0.20000002 + 0.4,
               (float)iVar2 * 4.656613e-10 * 1.0471976 + -0.5235988,
               (float)iVar3 * 4.656613e-10 * 5.0 + 2.0,uVar4,param_1);
  lVar5 = FUN_00d85f00(param_1 + 0x100);
  FUN_00d84e9c(lVar5 + 0x10);
  FUN_00d82cf0();
  return;
}




void FUN_00d8c170(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *local_58;
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d817bc();
  uVar3 = FUN_00d80f68(param_1);
  FUN_00d80ec4(0x3f800000,param_1);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_02820430;
  *(undefined8 *)(param_1 + 0x128) = 0;
  uVar2 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x130) = uVar2;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  FUN_00e5e120(param_1 + 0x120,param_1,uVar3);
  uVar3 = FUN_00d850b4(param_1 + 0x100);
  uVar3 = FUN_00d84048(uVar3,param_1,0x200000);
  lVar4 = FUN_00d840e4(uVar3,PTR_s_Buff_Ozo_RollPrimaryTarget_02bf0d18);
  plVar5 = (long *)FUN_00d84e4c(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"SecondaryTargetDamage",8);
  plVar5 = (long *)FUN_00d8c2e0(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))();
  local_48[0] = 0x41700000;
  local_40 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,local_48);
  local_58 = FUN_00d8c2cc;
  local_50 = 3;
  (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8c2cc(undefined8 param_1)

{
  FUN_00d59f54(param_1,8,8,0x19,0);
  return;
}




void FUN_00d8c2e0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cda2ac();
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




void FUN_00d8c330(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_2 = "Effect_Petal_Projectile";
  param_2[0x10] = "Sound_Petal_basic_attack_impact_5";
  lVar1 = param_1 + 0x120;
  param_2[4] = "Effect_Petal_Projectile_Imp";
  param_2[0xd] = "Sound_Petal_basic_attack_impact_2";
  param_2[0xc] = "Sound_Petal_basic_attack_impact_1";
  param_2[0xf] = "Sound_Petal_basic_attack_impact_4";
  param_2[0xe] = "Sound_Petal_basic_attack_impact_3";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41880000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d82a00(uVar2,0);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d8c3e0(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x120;
  *param_2 = "Effect_Petal_Projectile_Crit";
  param_2[4] = "Effect_Petal_Projectile_Crit_Imp";
  param_2[0xc] = "Sound_Petal_crit_attack_impact";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41500000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d82a00(uVar2,2);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d8c45c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  code *local_58;
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d817bc();
  uVar2 = FUN_00d80f68(param_1);
  FUN_00d80b90(param_1,uVar2,0);
  *(char **)(param_2 + 0x30) = "Effect_Phinn_C_Sparks";
  FUN_00d80ec4(0x3fc00000,param_1);
  lVar5 = param_1 + 0x120;
  FUN_00e5ff9c(lVar5);
  *(long *)(param_1 + 0x118) = lVar5;
  FUN_00e5ffd8(0x41d80000,lVar5);
  lVar5 = param_1 + 0x100;
  uVar2 = FUN_00d850b4(lVar5);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar4 = (long *)FUN_00d84e4c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"Damage",2);
  uVar2 = FUN_00d850b4(lVar5);
  lVar3 = FUN_00d84048(uVar2,param_1,0x200000);
  plVar4 = (long *)FUN_00d8c2e0(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  local_48[0] = 0x41d80000;
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,local_48);
  local_58 = FUN_00d8c600;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_58);
  uVar2 = FUN_00d85154(lVar3 + 0x10);
  FUN_00d825d8(uVar2,PTR_s_Buff_Phinn_WhiffedWithPull_02bf05a0);
  FUN_00d825e0();
  lVar5 = FUN_00d85f00(lVar5);
  FUN_00d84e9c(lVar5 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8c600(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00d8c614(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar1 = FUN_00d80f68();
  *(char **)(param_2 + 0x30) = "Effect_Reim_A_Ground";
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00d59f54(lVar1,0,4,0x19,0);
  FUN_00e5ffe0(lVar2);
  lVar2 = FUN_00d85f00(param_1 + 0x100);
  uVar3 = FUN_00d89c00(lVar2 + 0x10);
  FUN_00d836e8(uVar3,"*Reim_A*",0);
  FUN_00d84e9c(lVar2 + 0x10);
  uVar4 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Reim_Talent_CreepingCold_02bee098);
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_00d850b4(param_1 + 0x100);
    lVar2 = FUN_00d84048(uVar3,param_1,0x40000);
    plVar5 = (long *)FUN_00d84e4c(lVar2 + 0x10);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
    plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,"Damage First Hit",0);
    (**(code **)(*plVar5 + 0x68))(plVar5,"Ability__Reim__A_Passthrough");
  }
  return;
}




void FUN_00d8c71c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x120;
  *param_2 = "Effect_Ringo_Shot";
  param_2[4] = "Effect_Ringo_Shot_HitImpact";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41900000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d82a00(uVar2,0);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d8c78c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x120;
  *param_2 = "Effect_Ringo_CritShot";
  param_2[4] = "Effect_Ringo_CritShot_HitImpact";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41900000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d82a00(uVar2,2);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d8c7fc(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x120;
  *param_2 = "Effect_Ringo_B_Projectile";
  param_2[4] = "Effect_Ringo_B_Impact";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41900000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d82a00(uVar2,0);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d8c86c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x120;
  *param_2 = "Effect_Ringo_B_Projectile";
  param_2[4] = "Effect_Ringo_B_Impact";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41900000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d82a00(uVar2,2);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d8c8dc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Ringo_Ability01_Shot";
  param_2[4] = "Effect_Ringo_Ability01_Impact";
  FUN_00d80ec4(0x3f800000);
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41b40000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d84e4c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x30))(plVar3,0);
  plVar3 = (long *)FUN_00d84eec(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Ringo_AchillesShot_Slow_02beba48)
  ;
  local_48 = FUN_00d8c9e4;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8c9e4(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00d8c9f8(undefined8 param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_720 [16];
  undefined1 auStack_710 [40];
  undefined1 auStack_6e8 [96];
  long local_688 [200];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d80ee4();
  lVar5 = FUN_00d810f4(param_1);
  *param_2 = -1;
  if (lVar5 != 0) {
    FUN_00d4d9e8(auStack_6e8);
    FUN_00d4db40(auStack_6e8,uVar4);
    FUN_00d4daf4(auStack_6e8,0,1,0,0);
    FUN_00d55794(lVar5,auStack_720,0);
    FUN_00d5a3d0(uVar4,DAT_031ac4f8,2,9);
    FUN_00d4db48(auStack_6e8,auStack_720);
    FUN_00d4dabc(auStack_6e8,1);
    FUN_00d4eb08(auStack_710,auStack_720,200,1);
    uVar3 = FUN_00d9e840(auStack_6e8,local_688,200,auStack_710);
    if (uVar3 != 0) {
      uVar6 = 0;
      do {
        if ((local_688[uVar6] != 0) &&
           (iVar1 = *(int *)(local_688[uVar6] + 0x260), iVar1 != *(int *)(lVar5 + 0x260))) {
          *param_2 = iVar1;
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d8cb4c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d80f68();
  *(char **)(param_2 + 0x30) = "Effect_Ringo_Ability03_Fireball";
  *(char **)(param_2 + 0x20) = "Effect_Ringo_Ability03_Impact";
  *(char **)(param_2 + 0x60) = "Sound_Ringo_Ability_C_Impact";
  FUN_00d80ec4(0,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5ff9c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00e5ffd8(0x40f00000,lVar3);
  lVar3 = FUN_00d84dfc(param_1 + 0x100);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d84e4c(lVar3);
  uVar7 = FUN_00d59f54(lVar2,2,3,0x19,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(uVar7,0xbf800000,0xbf800000,plVar4,0x40000,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"ImpactDamage",2);
  plVar4 = (long *)FUN_00d84eec(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Ringo_HellfireBrew_Burn_02beba58)
  ;
  local_58 = FUN_00d8cd3c;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  uVar5 = FUN_00d44008(*(undefined4 *)(lVar2 + 0x260),PTR_s_Buff_Ringo_Talent_SpikedBrew_02bee0f0);
  if ((uVar5 & 1) != 0) {
    lVar2 = FUN_00d81178(param_1);
    fVar8 = (float)FUN_00d813c0(param_1);
    if ((lVar2 != 0) && (ABS(fVar8) < 0.01)) {
      uVar6 = FUN_00d8cd50(lVar3);
      uVar7 = FUN_00d80bb0(param_1);
      uVar6 = FUN_00d83398(uVar6,uVar7,"CenterBody",FUN_00d8c9f8);
      FUN_00d8343c(uVar6,*(undefined4 *)(lVar2 + 0x260));
      FUN_00d83444(0x3f800000);
    }
  }
  FUN_00d84e9c(lVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8cd3c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,5,0x19,0);
  return;
}




void FUN_00d8cd50(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cda7d0();
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




void FUN_00d8cda0(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_2 = "Effect_Samuel_AA";
  param_2[0xd] = "Sound_Samuel_attack_hit_2";
  param_2[0xc] = "Sound_Samuel_attack_hit_1";
  param_2[0xf] = "Sound_Samuel_attack_hit_4";
  param_2[0xe] = "Sound_Samuel_attack_hit_3";
  param_2[4] = "Effect_Samuel_AA_Impact";
  *(undefined4 *)(param_2 + 0x15) = 0x3f000000;
  FUN_00d80ec4(0x3f000000);
  lVar1 = param_1 + 0x120;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41a00000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d82a00(uVar2,param_3);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d8ce60(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8cda0(param_1,param_2,0);
  return;
}




void FUN_00d8ce68(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8cda0(param_1,param_2,2);
  return;
}




void FUN_00d8ce70(undefined8 param_1,float *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = FUN_00d80ee4();
  fVar4 = (float)thunk_FUN_00d086f0(lVar1,1,1);
  fVar5 = (float)thunk_FUN_00d086f0(lVar1,2,1);
  lVar3 = *(long *)(lVar1 + 0x40);
  fVar6 = (*(float *)(lVar3 + 0x240) + 1.0) *
          (*(float *)(lVar3 + 0xd8) + *(float *)(lVar3 + 0x18c) * (*(float *)(lVar3 + 0x2f4) + 1.0))
  ;
  if (DAT_031aae50 <= fVar6) {
    fVar6 = DAT_031aae50;
  }
  fVar7 = DAT_031aad90;
  if (DAT_031aad90 <= fVar6) {
    fVar7 = fVar6;
  }
  *param_2 = fVar4 + (fVar5 - fVar4) * ((fVar7 + -1.0) / 11.0);
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Samuel_Talent_PowerSiphon_02bee270)
  ;
  if ((uVar2 & 1) != 0) {
    fVar6 = (float)FUN_00d5a3d0(lVar1,DAT_031ac740,0,9);
    *param_2 = fVar6 * *param_2;
  }
  lVar3 = FUN_00d80fec(param_1);
  if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x2f4) & 1) == 0)) {
    fVar6 = (float)thunk_FUN_00d086f0(lVar1,5,1);
    *param_2 = fVar6 * *param_2;
  }
  return;
}




void FUN_00d8cfac(undefined8 param_1,float *param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = FUN_00d80ee4();
  fVar3 = (float)thunk_FUN_00d086f0(lVar1,3,1);
  fVar4 = (float)thunk_FUN_00d086f0(lVar1,4,1);
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar5 = (*(float *)(lVar2 + 0x240) + 1.0) *
          (*(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0))
  ;
  if (DAT_031aae50 <= fVar5) {
    fVar5 = DAT_031aae50;
  }
  fVar6 = DAT_031aad90;
  if (DAT_031aad90 <= fVar5) {
    fVar6 = fVar5;
  }
  *param_2 = fVar3 + (fVar4 - fVar3) * ((fVar6 + -1.0) / 11.0);
  lVar2 = FUN_00d80fec(param_1);
  if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x2f4) & 1) == 0)) {
    fVar5 = (float)thunk_FUN_00d086f0(lVar1,5,1);
    *param_2 = fVar5 * *param_2;
  }
  return;
}

