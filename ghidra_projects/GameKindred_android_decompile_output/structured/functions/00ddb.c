// functions/00ddb — 15 functions
#include "libGameKindred.h"




void FUN_00ddb08c(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  float fVar2;
  
  *param_4 = 0x3fc00000;
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,1,3,0x19,0);
  *param_3 = 1.5 / fVar2;
  return;
}




void FUN_00ddb0d4(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00ddb0e8(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,1,3,0x19,0);
  *param_3 = fVar2 * 0.9;
  return;
}




void FUN_00ddb12c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d59f54(param_2,1,8,0x19,0);
  *param_3 = uVar1;
  return;
}




void FUN_00ddb164(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  uVar2 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar2,"Ability02",0,0,0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_68);
  FUN_00cf32cc(0,uVar2,"Effect_Petal_Jump",0,0,1,0,0);
  uVar3 = FUN_00cfab94(auStack_68);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09590(*(undefined4 *)(lVar4 + 0xcc));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Petal_ability_2_jump_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Petal_ability_2_jump_2");
  FUN_00cf41bc(uVar3,"Sound_Petal_ability_2_jump_3");
  plVar5 = (long *)FUN_00cfb1c4(auStack_68);
  (**(code **)(*plVar5 + 0x50))(plVar5,"*PetalSeed*",1);
  lVar4 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar4 + 0x10) = 1;
  FUN_00cf98bc(auStack_68);
  lVar4 = FUN_00cf9f7c(auStack_68);
  lVar6 = FUN_00cefb20(lVar4 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Petal_Talent_Bouncer_02bf2008;
  uVar2 = FUN_00cf9ab4(lVar4 + 0xb0);
  FUN_00cf4540(uVar2,PTR_s_Buff_Petal_Talent_Bouncer_Energy_02bf2000,FUN_00ddb12c,1,0);
  plVar5 = (long *)FUN_00cfa12c(auStack_68);
  local_48 = FUN_00ddb3c8;
  local_40 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x80))(plVar5,&local_48);
  local_58 = FUN_00ddb0d4;
  local_50 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa8))(plVar5,&local_58);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  uVar2 = FUN_00cf9bd4(auStack_68);
  FUN_00cf834c(uVar2,FUN_00ddb08c,0,0);
  uVar2 = FUN_00cf9ab4(auStack_68);
  FUN_00cf4540(uVar2,PTR_s_Buff_Petal_B_Amp_02bf0d40,FUN_00ddb12c,1,0);
  FUN_00cf9eec(auStack_68);
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7570(uVar2,FUN_00ddb0e8);
  FUN_00cfb56c(auStack_68);
  lVar4 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddb3c8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00ddb3dc(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_a0 [112];
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d4e934(auStack_a0,DAT_031ba958);
  FUN_00d4e998(auStack_a0,1);
  uVar3 = FUN_00d50ef8(param_1);
  FUN_00d4daf4(auStack_a0,1,0,0,uVar3);
  FUN_00d4ddc4(auStack_a0);
  FUN_00d4dca4(auStack_a0,"PetalMinion",0);
  iVar2 = FUN_00d9e840(auStack_a0,auStack_30,1,0);
  uVar4 = 0;
  if (iVar2 < 1) {
    uVar4 = 0x400;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00ddb49c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_720 [16];
  undefined1 auStack_710 [40];
  undefined1 auStack_6e8 [112];
  undefined8 local_678 [200];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00d5048c(param_1);
    iVar2 = FUN_00d51964(param_1);
    if ((iVar2 == 0) || (lVar5 = FUN_00d51954(param_1,0), lVar5 == 0)) {
      FUN_00d55794(uVar4,auStack_720,0);
    }
    else {
      uVar6 = FUN_00d51954(param_1,0);
      FUN_00d55794(uVar6,auStack_720,0);
      FUN_00d51974(param_1);
    }
    FUN_00d4e934(auStack_6e8,DAT_031ba958);
    FUN_00d4e998(auStack_6e8,1);
    FUN_00d4db40(auStack_6e8,uVar4);
    FUN_00d4daf4(auStack_6e8,1,0,0,0);
    FUN_00d4ddc4(auStack_6e8);
    FUN_00d4dca4(auStack_6e8,"PetalMinion",0);
    FUN_00d4db48(0x47c35000,auStack_6e8,auStack_720);
    FUN_00d4eb08(auStack_710,auStack_720,200,0);
    iVar2 = FUN_00d9e840(auStack_6e8,local_678,200,auStack_710);
    if (iVar2 != 0) {
      FUN_00d518f4(param_1,local_678[0]);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddb5f8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_868;
  undefined4 uStack_864;
  undefined4 local_860;
  undefined1 auStack_858 [16];
  undefined1 auStack_848 [88];
  undefined1 auStack_7f0 [88];
  undefined1 auStack_798 [88];
  undefined1 auStack_740 [40];
  undefined1 auStack_718 [112];
  long local_6a8 [200];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar8 = FUN_00ceab48();
  if ((uVar8 & 1) != 0) {
    lVar9 = FUN_00d5048c(param_1);
    FUN_00d4e934(auStack_718,DAT_031ba958);
    FUN_00d4e998(auStack_718,1);
    FUN_00d4db40(auStack_718,lVar9);
    FUN_00d4daf4(auStack_718,1,0,0,0);
    FUN_00d4ddc4(auStack_718);
    FUN_00d4dca4(auStack_718,"PetalMinion",0);
    FUN_00d4eb08(auStack_740,auStack_858,200,0);
    iVar6 = FUN_00d9e840(auStack_718,local_6a8,200,auStack_740);
    lVar5 = local_6a8[0];
    puVar4 = PTR_s_Buff_PetalMinion_ThornstormLitFu_02bf0d50;
    if (iVar6 != 0) {
      uVar1 = *(undefined4 *)(lVar9 + 0x260);
      uVar2 = *(undefined4 *)(local_6a8[0] + 0x260);
      uVar7 = FUN_00ceb350();
      FUN_00cfe864(0x3f99999a,0,0,auStack_798,uVar1,uVar2,puVar4,uVar7,1,0,0);
      FUN_00ce20fc(auStack_798);
      puVar4 = PTR_s_Buff_PetalMinion_ThornstormLitOn_02bf0d58;
      uVar1 = *(undefined4 *)(lVar9 + 0x260);
      uVar2 = *(undefined4 *)(lVar5 + 0x260);
      uVar7 = FUN_00ceb350();
      FUN_00cfe864(0x41200000,0,0,auStack_7f0,uVar1,uVar2,puVar4,uVar7,1,0,0);
      FUN_00ce20fc(auStack_7f0);
      puVar4 = PTR_s_Buff_Invulnerable_02beb400;
      uVar1 = *(undefined4 *)(lVar9 + 0x260);
      uVar2 = *(undefined4 *)(lVar5 + 0x260);
      uVar7 = FUN_00ceb350();
      uVar10 = 0;
      uVar11 = 0;
      FUN_00cfe864(0x41200000,auStack_848,uVar1,uVar2,puVar4,uVar7,1,0,0);
      FUN_00ce20fc(auStack_848);
      local_868 = FUN_00d51820(param_1);
      uStack_864 = uVar10;
      local_860 = uVar11;
      FUN_008ff6f4(local_6a8[0],5,&local_868);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddb818(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfad44(auStack_38);
  FUN_00cf2ec0(uVar2,FUN_00ddb3dc);
  plVar3 = (long *)FUN_00cfaa2c(auStack_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability03");
  (**(code **)(*plVar3 + 0x28))();
  uVar4 = FUN_00cfab94(auStack_38);
  lVar5 = FUN_00d09310();
  uVar2 = FUN_00d09590(*(undefined4 *)(lVar5 + 0xd4));
  FUN_00cf4164(0x3f800000,uVar2,uVar4,"Sound_Petal_ability_3_start_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"Sound_Petal_ability_3_start_2");
  FUN_00cf41bc(uVar4,"Sound_Petal_ability_3_start_3");
  uVar2 = FUN_00cf9cf4(auStack_38);
  FUN_00cf2e48(uVar2,FUN_00ddb5f8);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddb924(void)

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
  FUN_00cf97e4(auStack_38);
  uVar2 = FUN_00cf9ab4(auStack_38);
  FUN_00cf44e8(0,uVar2,PTR_s_Buff_Petal_Perk_SpawnMunion_02bf0d68,1,1);
  FUN_00cf9eec(auStack_38);
  uVar3 = FUN_00cfab94(auStack_38);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09590(*(undefined4 *)(lVar4 + 0xd0));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Petal_ability_2_transform_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Petal_ability_2_transform_2");
  FUN_00cf41bc(uVar3,"Sound_Petal_ability_2_transform_3");
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Spawn",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar2,"Effect_Petal_Minion_Spawn",0,0,1,0,0);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddba68(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3fee147b);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddbb08(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d5048c();
  uVar2 = FUN_00d092ac(uVar1,0,4,9,1);
  *param_3 = uVar2;
  *param_4 = 1;
  *param_5 = 1;
  return;
}




void FUN_00ddbb5c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09590(*(undefined4 *)(lVar3 + 0xe0));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Petal_minion_attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Petal_minion_attack_2");
  FUN_00cf41bc(uVar2,"Sound_Petal_minion_attack_3");
  FUN_00cf41bc(uVar2,"Sound_Petal_minion_attack_4");
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09590(*(undefined4 *)(lVar3 + 0xe4));
  FUN_00cf4164(0x3e99999a,uVar4,uVar2,"Sound_Petal_minion_vo_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Petal_minion_vo_2");
  FUN_00cf41bc(uVar2,"Sound_Petal_minion_vo_3");
  FUN_00cf41bc(uVar2,"Sound_Petal_minion_vo_4");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f0ccccd);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_PetalMinion_HitImpact",0,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09590(*(undefined4 *)(lVar3 + 0xe0));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Petal_minion_attack_impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Petal_minion_attack_impact_2");
  FUN_00cf41bc(uVar2,"Sound_Petal_minion_attack_impact_3");
  FUN_00cf41bc(uVar2,"Sound_Petal_minion_attack_impact_4");
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,FUN_00ddbb08);
  FUN_00cf6bb8(uVar2,FUN_00dda944);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddbde0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"AltAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09590(*(undefined4 *)(lVar3 + 0xe0));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Petal_minion_attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Petal_minion_attack_2");
  FUN_00cf41bc(uVar2,"Sound_Petal_minion_attack_3");
  FUN_00cf41bc(uVar2,"Sound_Petal_minion_attack_4");
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09590(*(undefined4 *)(lVar3 + 0xe4));
  FUN_00cf4164(0x3e99999a,uVar4,uVar2,"Sound_Petal_minion_vo_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Petal_minion_vo_2");
  FUN_00cf41bc(uVar2,"Sound_Petal_minion_vo_3");
  FUN_00cf41bc(uVar2,"Sound_Petal_minion_vo_4");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f0ccccd);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_PetalMinion_HitImpact",0,0,1,0,0);
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,FUN_00ddbb08);
  FUN_00cf6bb8(uVar2,FUN_00dda944);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09590(*(undefined4 *)(lVar3 + 0xe0));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Petal_minion_attack_impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Petal_minion_attack_impact_2");
  FUN_00cf41bc(uVar2,"Sound_Petal_minion_attack_impact_3");
  FUN_00cf41bc(uVar2,"Sound_Petal_minion_attack_impact_4");
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

