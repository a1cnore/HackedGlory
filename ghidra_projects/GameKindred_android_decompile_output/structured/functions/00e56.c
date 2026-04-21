// functions/00e56 — 22 functions
#include "libGameKindred.h"




void FUN_00e5607c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64ad0();
  plVar3 = (long *)FUN_00e5683c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)(**(code **)(*plVar3 + 8))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x28))();
  local_38[0] = 0x3f800000;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))
                             (plVar3,PTR_s_Buff_Miho_Wave_ProjectileKillPFX_02bf19b0,local_38);
  local_48[0] = 0x40400000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x38))(plVar3,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e56154(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Miho_C_Projectile_Destroyed");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,
                              "build://Sounds/Miho/SFX/Default/miho_ability_c_projectile_kill.mp3");
                    /* WARNING: Could not recover jumptable at 0x00e561dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(0x3dcccccd);
  return;
}




void FUN_00e561e0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  
  FUN_00d66d28();
  FUN_00d5cf60();
  uVar1 = FUN_00d9e390();
  fVar4 = (float)FUN_00d59f98(uVar1,2);
  fVar5 = (float)FUN_00d59f54(uVar1,2,2,0x19,0);
  FUN_00d67d04(fVar4 / fVar5 + 0.1,param_1);
  lVar2 = FUN_00d63f30(param_1);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d46878(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,FUN_00e55f88);
  lVar2 = FUN_00d64980(param_1);
  FUN_00d2ab44(lVar2 + 0x10);
  return;
}




void FUN_00e5628c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = FUN_00d65010();
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_00d29c84(lVar1);
  FUN_00d46b64(uVar2,0x4005);
  uVar2 = FUN_00d45f10(lVar1);
  FUN_00d9886c(uVar2,PTR_s_Ability__Miho__C_02beff70,PTR_s_Ability__Miho__B_CancelStance_02beff68);
  uVar2 = FUN_00d45f10(lVar1);
  FUN_00d9886c(uVar2,PTR_s_Ability__Miho__B_02beff58,PTR_s_Ability__Miho__B_Slash_02beff60);
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Idle","Ability02_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleCombat","Ability02_Idle");
  plVar3 = (long *)FUN_00d2945c(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Miho_B_Stance_Warning");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2df94(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Miho_AbilityB_Aura");
  lVar1 = FUN_00d09310();
  FUN_00d0a550(*(undefined4 *)(lVar1 + 0x648));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00d63734(param_1);
  lVar1 = FUN_00d4b5ac(uVar2,PTR_s_Ability__Miho__C_02beff70);
  FUN_00d2a320(lVar1 + 0x10);
  lVar1 = FUN_00d64080(param_1);
  lVar1 = FUN_00d29e8c(lVar1 + 0x10);
  lVar4 = FUN_00e546dc(lVar1 + 0x10);
  *(undefined4 *)(lVar4 + 0x10) = 1;
  *(undefined4 *)(lVar4 + 8) = 0x41c80000;
  *(undefined8 *)(lVar4 + 0x18) = 0x300000002;
  FUN_00d2a320(lVar1 + 0x88);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d64980(param_1);
  lVar1 = lVar1 + 0x10;
  plVar3 = (long *)FUN_00d44df8(lVar1);
  (**(code **)(*plVar3 + 0x40))(plVar3,PTR_s_Ability__Miho__B_Slash_02beff60);
  plVar3 = (long *)FUN_00d44df8(lVar1);
  (**(code **)(*plVar3 + 0x40))(plVar3,PTR_s_Ability__Miho__B_02beff58);
  plVar3 = (long *)FUN_00e213ac(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00e56498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Miho__B_02beff58);
  return;
}




void FUN_00e5649c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",0);
  (**(code **)(*plVar3 + 0x70))(plVar3,1);
  lVar2 = FUN_00d29e8c(lVar2);
  lVar4 = FUN_00d2a370(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Miho_Perk_ExposeCooldown_02bf1980;
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0xa0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Miho_Perk_Expose_02bf1978);
  local_38 = FUN_00e56588;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e56588(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,3,1);
  return;
}




void FUN_00e56594(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64080();
  lVar2 = lVar2 + 0x10;
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",1);
  lVar2 = FUN_00d29e8c(lVar2);
  lVar4 = FUN_00d2a370(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Miho_Perk_ExposeCooldown_02bf1980;
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0xa0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Miho_Perk_Expose_02bf1978);
  local_38 = FUN_00e56588;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e56670(void)

{
  return;
}




void FUN_00e56674(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",2);
  lVar2 = FUN_00d29e8c(lVar2);
  lVar4 = FUN_00d2a370(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Miho_Perk_ExposeCooldown_02bf1980;
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0xa0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Miho_Perk_Expose_02bf1978);
  local_38 = FUN_00e56588;
  local_30 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  local_48[0] = 3;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5676c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Miho_C_Shot");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3d75c28f,0x3f7ae148,0x3e75c28f);
  local_38[0] = 0x40200000;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5683c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099d2fc();
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




void FUN_00e5688c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x98))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_Ring_12mr");
  uVar3 = FUN_00d635f4(param_1);
  lVar1 = FUN_00d4ac24(uVar3,PTR_s_Ability__Ishtar__B_02beffb0);
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Ishtar_Passive_B_AttackSpee_02bf19e8);
  lVar1 = FUN_00d65fac(param_1);
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e56934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Ishtar_OnDeath_02bf19f0);
  return;
}




void FUN_00e56938(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d64980();
  uVar2 = FUN_00d44ee8(lVar1 + 0x10);
  FUN_00d9c6a8(uVar2,"Ishtar_Minion");
  plVar3 = (long *)FUN_00d2cf7c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e56980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Ishtar_Minion_KillMyself_02bf19f8);
  return;
}




void FUN_00e56984(void)

{
  long lVar1;
  
  lVar1 = FUN_00d64080();
  FUN_00d2ab44(lVar1 + 0x10);
  return;
}




void FUN_00e5699c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d6592c();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_38 = FUN_00e56a14;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xf,1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e56a14(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00e56a28(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float local_48 [4];
  float local_38 [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28(*param_1);
  FUN_00d5cf60();
  uVar3 = FUN_00d9e390();
  FUN_00d55794(uVar3,local_38,0);
  FUN_00d55794(uVar2,local_48,0);
  fVar4 = (float)local_38._4_8_ - (float)local_48._4_8_;
  fVar5 = SUB84(local_38._4_8_,4) - SUB84(local_48._4_8_,4);
  fVar5 = (local_38[0] - local_48[0]) * (local_38[0] - local_48[0]) + fVar4 * fVar4 + fVar5 * fVar5;
  fVar4 = SQRT(fVar5);
  if (NAN(fVar4)) {
    fVar4 = sqrtf(fVar5);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(14.0 <= fVar4);
  }
  return;
}




void FUN_00e56ae4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_MinionShadow");
  (**(code **)(*plVar3 + 0x88))(plVar3,1);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00e4c798(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Ishtar_MinionTracker_02bf1a08);
  plVar3 = (long *)FUN_00d2779c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Spawn");
  (**(code **)(*plVar3 + 0x28))();
  lVar2 = FUN_00d64980(param_1);
  lVar2 = lVar2 + 0x10;
  FUN_00e0c91c(lVar2);
  plVar3 = (long *)FUN_00e58154(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Ishtar_MinionTracker_02bf1a08);
  local_58[0] = 0xffffffff;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_58);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_MinionDespawn");
  (**(code **)(*plVar3 + 0x88))(plVar3,1);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3dcccccd,uVar4,0);
  FUN_00d2d01c(lVar2 + 0x10);
  uVar4 = FUN_00d9b294();
  FUN_00d9b5c0(uVar4,FUN_00e56a28);
  FUN_00d9b5b0();
  FUN_00d2ab44();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e56c90(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_30,&local_38);
  uVar2 = FUN_00d66d28(local_30);
  uVar3 = FUN_00daa578(local_38,uVar2);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(local_38 + 0x5c) = 0;
    *(undefined4 *)(local_38 + 0x38) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e56d04(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    FUN_00d69294(param_1,&local_40,&local_48);
    lVar4 = FUN_00d66d28(local_40);
    FUN_00d5cf60();
    uVar5 = FUN_00d9e390();
    uVar3 = FUN_00daa58c(local_48,lVar4);
    if (((uVar3 & 1) != 0) && (*(long *)(local_48 + 0x28) != 0)) {
      uVar1 = *(uint *)(*(long *)(local_48 + 0x28) + 0x2f4);
      if ((uVar1 >> 0xd & 1) == 0) {
        if (((uVar1 >> 0x16 & 1) == 0) || ((*(byte *)(local_48 + 0xc) >> 2 & 1) == 0))
        goto LAB_00e56e64;
        fVar6 = (float)thunk_FUN_00d086f0(uVar5,0,1);
        lVar4 = *(long *)(lVar4 + 0x40);
        fVar8 = (*(float *)(lVar4 + 0x1a0) + 1.0) *
                (*(float *)(lVar4 + 0x38) +
                *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0));
        if (DAT_031bcac0 <= fVar8) {
          fVar8 = DAT_031bcac0;
        }
        fVar7 = DAT_031bca00;
        if (DAT_031bca00 <= fVar8) {
          fVar7 = fVar8;
        }
        fVar8 = fVar7 / fVar6 + 1.0;
      }
      else {
        lVar4 = *(long *)(lVar4 + 0x40);
        fVar8 = (*(float *)(lVar4 + 0x1a0) + 1.0) *
                (*(float *)(lVar4 + 0x38) +
                *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0));
        if (DAT_031bcac0 <= fVar8) {
          fVar8 = DAT_031bcac0;
        }
        fVar6 = DAT_031bca00;
        if (DAT_031bca00 <= fVar8) {
          fVar6 = fVar8;
        }
        fVar8 = (float)thunk_FUN_00d086f0(uVar5,3,1);
        fVar8 = fVar8 * fVar6;
      }
      *(float *)(local_48 + 0x54) = fVar8;
    }
  }
LAB_00e56e64:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e56e90(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = FUN_00d67c60();
  puVar2 = PTR_s_onBeforeApplyDamageName_02bed5f8;
  uVar3 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e56d04;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onAfterApplyDamageName_02bed608;
  uVar3 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e56c90;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




void FUN_00e56f68(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_90 [24];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d66d28();
  FUN_00d5cf60();
  lVar3 = FUN_00d9e390();
  uVar4 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_90,uVar4);
  lVar5 = *(long *)(lVar3 + 0x40);
  fVar6 = (*(float *)(lVar5 + 0x1a0) + 1.0) *
          (*(float *)(lVar5 + 0x38) + *(float *)(lVar5 + 0xec) * (*(float *)(lVar5 + 0x254) + 1.0));
  if (DAT_031bcac0 <= fVar6) {
    fVar6 = DAT_031bcac0;
  }
  fVar9 = DAT_031bca00;
  if (DAT_031bca00 <= fVar6) {
    fVar9 = fVar6;
  }
  fVar7 = (float)thunk_FUN_00d086f0(lVar3,1,1);
  lVar5 = *(long *)(lVar3 + 0x40);
  fVar6 = fVar7 * fVar9;
  if (fVar7 * fVar9 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar9 = (*(float *)(lVar5 + 0x1bc) + 1.0) *
          (*(float *)(lVar5 + 0x54) + *(float *)(lVar5 + 0x108) * (*(float *)(lVar5 + 0x270) + 1.0))
  ;
  if (DAT_031bcadc <= fVar9) {
    fVar9 = DAT_031bcadc;
  }
  fVar7 = DAT_031bca1c;
  if (DAT_031bca1c <= fVar9) {
    fVar7 = fVar9;
  }
  fVar8 = (float)thunk_FUN_00d086f0(lVar3,1,1);
  lVar5 = *(long *)(lVar3 + 0x40);
  fVar9 = fVar8 * fVar7;
  if (fVar8 * fVar7 <= 0.0) {
    fVar9 = 0.0;
  }
  fVar7 = (*(float *)(lVar5 + 0x1c0) + 1.0) *
          (*(float *)(lVar5 + 0x58) + *(float *)(lVar5 + 0x10c) * (*(float *)(lVar5 + 0x274) + 1.0))
  ;
  if (DAT_031bcae0 <= fVar7) {
    fVar7 = DAT_031bcae0;
  }
  fVar8 = DAT_031bca20;
  if (DAT_031bca20 <= fVar7) {
    fVar8 = fVar7;
  }
  fVar7 = (float)thunk_FUN_00d086f0(lVar3,1,1);
  FUN_00d3e534();
  uVar4 = FUN_00d39980();
  FUN_00d42654(auStack_90,uVar4);
  thunk_FUN_00d086f0(lVar3,2,1);
  FUN_00d40cd4(uVar4,0,0,1,0);
  FUN_00d3e534();
  uVar4 = FUN_00d39980();
  FUN_00d42654(auStack_90,uVar4);
  FUN_00d40cd4(fVar6,uVar4,0,1,0,0);
  FUN_00d3e534();
  uVar4 = FUN_00d39980();
  FUN_00d42654(auStack_90,uVar4);
  FUN_00d40cd4(fVar9,uVar4,7,1,0,0);
  FUN_00d3e534();
  uVar4 = FUN_00d39980();
  FUN_00d42654(auStack_90,uVar4);
  FUN_00d40cd4(fVar7 * fVar8,uVar4,8,1,0,0);
  FUN_00d3e534();
  uVar4 = FUN_00d39980();
  FUN_00d42654(auStack_90,uVar4);
  FUN_00d40cd4(0xbf800000,uVar4,0x23,1,1,0);
  FUN_00d3e534();
  uVar4 = FUN_00e0fb7c();
  FUN_00d42654(auStack_90,uVar4);
  lVar2 = *(long *)(lVar2 + 0x40);
  fVar6 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
          (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
  if (DAT_031bcac0 <= fVar6) {
    fVar6 = DAT_031bcac0;
  }
  fVar9 = DAT_031bca00;
  if (DAT_031bca00 <= fVar6) {
    fVar9 = fVar6;
  }
  FUN_00d411dc(fVar9,uVar4,0,0);
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

