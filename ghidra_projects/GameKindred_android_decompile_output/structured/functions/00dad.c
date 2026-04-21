// functions/00dad — 17 functions
#include "libGameKindred.h"




void FUN_00dad198(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [16];
  code *local_a8;
  undefined4 local_a0;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  lVar2 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cf9cf4(auStack_b8);
  FUN_00cf2e48(uVar3,FUN_00dacfdc);
  uVar3 = FUN_00cfb05c(auStack_b8);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_b8);
  FUN_00cf3048(uVar3,"Ability02",0,1,0,"AttackToIdle");
  FUN_00cf98bc(auStack_b8);
  uVar3 = FUN_00cf9ab4(auStack_b8);
  FUN_00cf4540(uVar3,PTR_s_Buff_Alpha_ThrusterPfx_02bf0240,FUN_00dacd20,1,0);
  FUN_00cf9eec(auStack_b8);
  uVar3 = FUN_00cfab94(auStack_b8);
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d09b78(*(undefined4 *)(lVar2 + 0x2c4));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"Sound_Alpha_Ability_B_Dash",0,0,0xffffffff,0,1);
  plVar4 = (long *)FUN_00cfa12c(auStack_b8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(0x3f800000,0xbf000000,0,0xbe4ccccd);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_a8 = FUN_00dace80;
  local_a0 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa0))(plVar4,&local_a8);
  (**(code **)(*plVar4 + 0xb8))(0x41700000);
  uVar3 = FUN_00cfa294(auStack_b8);
  FUN_00cf7570(uVar3,FUN_00dacd20);
  FUN_00cfb56c(auStack_b8);
  uVar3 = FUN_00cfa9e4(auStack_b8);
  FUN_00cf3048(uVar3,"Ability02_End",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_b8);
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d09b78(*(undefined4 *)(lVar2 + 0x2c4));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"Sound_Alpha_Ability_B_Attack",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfaa74(auStack_b8);
  FUN_00cf32cc(0,uVar3,"Effect_Alpha_B_Hit",0,0,1,0,0);
  uVar3 = FUN_00cfaa74(auStack_b8);
  FUN_00cf3428(0x40400000,uVar3,"Effect_Alpha_Blade",1,"Bone_Sword",0,1,0,0);
  FUN_00cf99dc(auStack_b8);
  plVar4 = (long *)FUN_00cfa09c(auStack_b8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,"Damage");
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  FUN_00cf9eec(auStack_b8);
  FUN_00cf98bc(auStack_b8);
  uVar3 = FUN_00cf9ab4(auStack_b8);
  FUN_00cf456c(uVar3,PTR_s_Buff_Alpha_B_Stacks_Buff_02bf0200,FUN_00dad5c8,1,0);
  uVar3 = FUN_00cf9ab4(auStack_b8);
  FUN_00cf456c(uVar3,PTR_s_Buff_Alpha_B_Stacks_Debuff_02bf0208,FUN_00dad5c8,1,0);
  FUN_00cf9eec(auStack_b8);
  FUN_00d4d9e8(&local_a8);
  FUN_00d4dabc(&local_a8,0x40000);
  FUN_00d4daf4(&local_a8,0,1,0,0);
  uVar3 = FUN_00cfaf3c(auStack_b8);
  uVar3 = FUN_00cf5ac8(0x3f800000,uVar3,FUN_00dace94,FUN_00dacf38);
  uVar3 = FUN_00cf5ae0(uVar3,&local_a8);
  FUN_00cf5b20(uVar3,1);
  plVar4 = (long *)FUN_00cfa09c(auStack_b8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x20))(plVar4,"AOEDamage");
  FUN_00cf9eec(auStack_b8);
  uVar3 = FUN_00cfa294(auStack_b8);
  FUN_00cf7580(uVar3,FUN_00dad5dc);
  FUN_00cf7578(uVar3,0);
  FUN_00cfacb4(auStack_b8);
  FUN_00cf50b0(0x3f000000);
  lVar2 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_b8);
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dad5c8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,9,0x19,0);
  return;
}




void FUN_00dad5dc(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,8,0x19,0);
  return;
}




uint FUN_00dad5f0(void)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_00d50ef8();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar1 = FUN_00d6bbac(lVar2,DAT_031b8210,0);
  return ~uVar1 & 1;
}




void FUN_00dad648(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,2,1,0x19,0);
  fVar3 = (float)thunk_FUN_00d086f0(uVar1,0,1);
  *param_3 = fVar2 + fVar3 + -0.29;
  return;
}




void FUN_00dad6b0(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,1,0x19,0);
  return;
}




undefined4 FUN_00dad6c4(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  FUN_00d50ef8();
  uVar1 = FUN_00d9ea34();
  uVar2 = FUN_00d6bbac(uVar1,DAT_031b8220,0);
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_00d6bbac(uVar1,DAT_031b8218,0), (uVar2 & 1) == 0)) {
    uVar2 = FUN_00d6bbac(uVar1,DAT_031b8210,0);
    uVar3 = 4;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}




void FUN_00dad748(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfad44(auStack_38);
  FUN_00cf2ec0(uVar2,FUN_00dad6c4);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cf9ab4(auStack_38);
  FUN_00cf456c(uVar2,PTR_s_Buff_Alpha_SelfDestruct_02bf0218,FUN_00dad6b0,1,0);
  FUN_00cf9eec(auStack_38);
  uVar3 = FUN_00cfab94(auStack_38);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09b78(*(undefined4 *)(lVar4 + 0x2c8));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Alpha_Ability_C_Start",0,0,0xffffffff,0,1);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dad830(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  lVar2 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  plVar3 = (long *)FUN_00cf9d3c(auStack_a8);
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x50))();
  (**(code **)*puVar4)(puVar4,PTR_s_Ability__Alpha__A_02bee458);
  plVar3 = (long *)FUN_00cf9d3c(auStack_a8);
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x50))();
  (**(code **)*puVar4)(puVar4,PTR_s_Ability__Alpha__Dash_02bee460);
  plVar3 = (long *)FUN_00cf9d3c(auStack_a8);
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x50))();
  (**(code **)*puVar4)(puVar4,PTR_s_Ability__Alpha__B_02bee468);
  uVar5 = FUN_00cfab94(auStack_a8);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d09b78(*(undefined4 *)(lVar2 + 0x2c8));
  FUN_00cf4164(0x3f800000,uVar6,uVar5,"Sound_Alpha_Ability_C_Explode",0,0,0xffffffff,0,1);
  uVar5 = FUN_00cfaa74(auStack_a8);
  FUN_00cf32cc(0x3f800000,uVar5,"Effect_Alpha_C_CriticalMass",0,0,1,0,0);
  uVar5 = FUN_00cfa9e4(auStack_a8);
  FUN_00cf3048(uVar5,"Ability03",0,1,0,0);
  uVar5 = FUN_00cfa294(auStack_a8);
  FUN_00cf7580(uVar5,FUN_00dada94);
  FUN_00cf7578(uVar5,0);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dabc(auStack_98,0x40000);
  uVar5 = FUN_00cfaf84(auStack_a8);
  FUN_00cf5504(uVar5,auStack_98,0,FUN_00dadaa8,0,1,0);
  plVar3 = (long *)FUN_00cfa09c(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Damage",2);
  FUN_00cf9eec(auStack_a8);
  uVar5 = FUN_00cfaa74(auStack_a8);
  FUN_00cf32cc(0x3f800000,uVar5,"Effect_Alpha_C_Explosion",0,0,1,0,0);
  FUN_00cfa5f4(auStack_a8);
  lVar2 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dada94(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00dadaa8(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00dadabc(void)

{
  FUN_00cfc038(PTR_s_Buff_Alpha_Withdraw_02bf0248);
  return;
}




void FUN_00dadacc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
                 undefined8 *param_5,uint param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_78);
  FUN_00cfb05c(auStack_78);
  uVar2 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  if (0 < (int)param_4) {
    uVar3 = FUN_00cfab94(auStack_78);
    uVar7 = *param_3;
    lVar4 = FUN_00d09310();
    uVar2 = FUN_00d097dc(*(undefined4 *)(lVar4 + 0x164));
    FUN_00cf4164(0x3f800000,uVar2,uVar3,uVar7,0,0,0xffffffff,0,1);
    if (param_4 != 1) {
      lVar4 = (ulong)param_4 - 1;
      do {
        param_3 = param_3 + 1;
        FUN_00cf41bc(uVar3,*param_3);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  plVar5 = (long *)FUN_00cfac6c(auStack_78);
  (**(code **)(*plVar5 + 0x50))(plVar5,"autoAttackVO");
  uVar2 = FUN_00cfa294(auStack_78);
  uVar6 = FUN_00ceab48();
  uVar8 = 0x3e99999a;
  if ((uVar6 & 1) == 0) {
    uVar8 = 0x3e6b8520;
  }
  FUN_00cf7478(uVar8,uVar2);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_78);
  FUN_00cf32cc(0,uVar2,param_2,1,0,1,0,0);
  if (0 < (int)param_6) {
    uVar3 = FUN_00cfab94(auStack_78);
    uVar7 = *param_5;
    lVar4 = FUN_00d09310();
    uVar2 = FUN_00d097dc(*(undefined4 *)(lVar4 + 0x164));
    FUN_00cf4164(0x3f800000,uVar2,uVar3,uVar7,0,0,0xffffffff,0,1);
    if (param_6 != 1) {
      lVar4 = (ulong)param_6 - 1;
      do {
        param_5 = param_5 + 1;
        FUN_00cf41bc(uVar3,*param_5);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) == 0) {
    uVar2 = FUN_00cfa294(auStack_78);
    FUN_00cf7478(0x3d8f5c29);
    FUN_00cf7578(uVar2,FUN_00cfb9b0);
  }
  FUN_00cf99dc(auStack_78);
  uVar2 = FUN_00cfa00c(auStack_78);
  FUN_00cf6bb0(uVar2,param_7);
  FUN_00cfb0a4(auStack_78);
  FUN_00cfb5c4(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dadd44(void)

{
  FUN_00dadacc("Attack","Effect_Ardan_Attack",&PTR_s_Sound_Ardan_Hook_1_02bee488,3,
               &PTR_s_Sound_Ardan_Basic_Impact_1_02bee4d0,4,FUN_00cfb6d0);
  return;
}




void FUN_00dadd78(void)

{
  FUN_00dadacc("AltAttack","Effect_Ardan_AltAttack",&PTR_s_Sound_Ardan_GutPunch_1_02bee4a0,3,
               &PTR_s_Sound_Ardan_Basic_Impact_5_02bee4f0,4,FUN_00cfb6d0);
  return;
}




void FUN_00daddac(void)

{
  FUN_00dadacc("CritAttack","Effect_Ardan_CritAttack",&PTR_s_Sound_Ardan_StraightPunch_1_02bee4b8,3,
               &PTR_s_Sound_Ardan_Basic_Impact_3_02bee510,4,FUN_00cfb8b4);
  return;
}




void FUN_00dadde0(undefined1 param_1 [16],undefined4 param_2,float param_3,undefined8 param_4,
                 long param_5,undefined4 *param_6,undefined8 *param_7)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d5048c();
  uVar6 = FUN_00d59f54(uVar3,0,0xe,0x19,0);
  *param_6 = uVar6;
  FUN_00d55794(param_5,&local_98,0);
  uVar6 = FUN_00d51830(param_4);
  local_88 = CONCAT44(param_2,uVar6);
  local_80 = param_3;
  lVar4 = FUN_00d51778(param_4);
  if (lVar4 == 0) {
    fVar11 = 0.8;
  }
  else {
    lVar4 = FUN_00d51778(param_4);
    fVar11 = *(float *)(&DAT_01bd33d4 + (ulong)((*(byte *)(lVar4 + 0x2f4) & 1) == 0) * 4);
  }
  lVar4 = FUN_00d51778(param_4);
  if (lVar4 == 0) {
    fVar10 = 0.0;
  }
  else {
    lVar4 = FUN_00d51778(param_4);
    fVar10 = 0.0;
    if ((*(byte *)(lVar4 + 0x2f5) & 0x10) != 0) {
      fVar10 = 0.5;
    }
  }
  fVar2 = local_80;
  fVar12 = (float)local_88;
  fVar14 = (float)local_98 - fVar12;
  fVar13 = (float)((ulong)local_88 >> 0x20);
  fVar15 = (float)((ulong)local_98 >> 0x20) - fVar13;
  fVar16 = local_90 - local_80;
  fVar8 = fVar14 * fVar14 + fVar15 * fVar15 + fVar16 * fVar16;
  if (0.01 < fVar8) {
    fVar7 = SQRT(fVar8);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar8);
    }
    lVar4 = *(long *)(param_5 + 0x40);
    local_b8 = 0x4000000040000000;
    fVar8 = (*(float *)(lVar4 + 0x1e0) + 1.0) *
            (*(float *)(lVar4 + 0x78) + *(float *)(lVar4 + 300) * (*(float *)(lVar4 + 0x294) + 1.0))
    ;
    if (DAT_031afe50 <= fVar8) {
      fVar8 = DAT_031afe50;
    }
    fVar9 = DAT_031afd90;
    if (DAT_031afd90 <= fVar8) {
      fVar9 = fVar8;
    }
    fVar10 = fVar10 + fVar11 + fVar9;
    local_80 = fVar2 + (fVar16 / fVar7) * fVar10;
    local_88 = CONCAT44(fVar13 + (fVar15 / fVar7) * fVar10,fVar12 + (fVar14 / fVar7) * fVar10);
    local_b0 = 0x40000000;
    uVar3 = FUN_00da2eb4(param_5);
    uVar5 = FUN_00ef00a0(uVar3,&local_88,&local_a8,&local_b8);
    if ((uVar5 & 1) != 0) {
      *(undefined4 *)(param_7 + 1) = local_a0;
      goto LAB_00dadfd8;
    }
  }
  *(float *)(param_7 + 1) = local_90;
  local_a8 = local_98;
LAB_00dadfd8:
  *param_7 = local_a8;
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

