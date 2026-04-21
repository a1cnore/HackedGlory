// functions/00dfd — 16 functions
#include "libGameKindred.h"




void FUN_00dfd024(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00dfd038(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability02");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  (**(code **)(*plVar4 + 0x10))(0x3f4ccccd);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,0xda,"FireBall");
  FUN_00cf98bc(auStack_48);
  uVar3 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar3,PTR_s_Buff_LanceBall_Lance_HoldingBall_02bf17d8);
  FUN_00cf9eec(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfaa2c(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Idle");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfd1b8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfb05c(auStack_58);
  plVar4 = (long *)FUN_00cfaa2c(auStack_58);
  (**(code **)(*plVar4 + 0x58))(plVar4,param_1);
  plVar4 = (long *)FUN_00cfac24(auStack_58);
  ppuVar1 = &PTR_s_Sound_Sanfeng_Crit_Attack_01_02befcc8;
  if (param_3 != 2) {
    ppuVar1 = &PTR_s_Sound_Sanfeng_Default_Attack_01_02befcb0;
  }
  ppuVar2 = &PTR_s_Sound_Sanfeng_Crit_Impact_01_02befcf8;
  if (param_3 != 2) {
    ppuVar2 = &PTR_s_Sound_Sanfeng_Default_Impact_01_02befce0;
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,*ppuVar1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar1[1]);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar1[2]);
  lVar5 = FUN_00d09310();
  FUN_00d0a400(*(undefined4 *)(lVar5 + 0x5a8));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar6 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar6,FUN_00cf76f0);
  FUN_00cf7578(uVar6,FUN_00cfb9b0);
  plVar4 = (long *)FUN_00cfa0e4(auStack_58);
  (**(code **)(*plVar4 + 0x58))(plVar4,param_3);
  plVar4 = (long *)FUN_00cfac24(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,*ppuVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar2[1]);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar2[2]);
  lVar5 = FUN_00d09310();
  FUN_00d0a400(*(undefined4 *)(lVar5 + 0x5a8));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfab04(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,param_2);
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfd39c(void)

{
  FUN_00dfd1b8("Attack","Effect_Sanfeng_AA",0);
  return;
}




void FUN_00dfd3b4(void)

{
  FUN_00dfd1b8("AltAttack","Effect_Sanfeng_AA_Alt",0);
  return;
}




void FUN_00dfd3cc(void)

{
  FUN_00dfd1b8("CritAttack","Effect_Sanfeng_AA_Crit",2);
  return;
}




void FUN_00dfd3e4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  plVar3 = (long *)FUN_00cfac24(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Sanfeng_A_Stance");
  lVar2 = FUN_00d09310();
  FUN_00d0a400(*(undefined4 *)(lVar2 + 0x5b0));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_00cf9ea4(auStack_58);
  lVar2 = FUN_00cf9f7c(auStack_58);
  lVar4 = FUN_00db4148(lVar2 + 0x10);
  if (PTR_s_Ability__Sanfeng__A_02befd28 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar8 = (uint)(byte)*PTR_s_Ability__Sanfeng__A_02befd28;
    uVar6 = 0x811c9dc5;
    pbVar7 = PTR_s_Ability__Sanfeng__A_02befd28;
    if (*PTR_s_Ability__Sanfeng__A_02befd28 != 0) {
      do {
        uVar9 = (uint)pbVar7[1];
        uVar6 = (uVar6 ^ uVar8) * 0x1000193;
        uVar8 = uVar9;
        pbVar7 = pbVar7 + 1;
      } while (uVar9 != 0);
    }
  }
  *(uint *)(lVar4 + 8) = uVar6;
  plVar3 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Sanfeng_AbilityOverdrive_De_02bf17e8);
  local_48 = FUN_00dfd624;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  plVar3 = (long *)FUN_00cfaa2c(auStack_58);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Ability01_Stance");
  plVar3 = (long *)FUN_00cf9afc(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Sanfeng_PerkDamageReduction_02bf17e0);
  local_48 = FUN_00dfd638;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  plVar3 = (long *)FUN_00cf9afc(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Sanfeng_A_InCounterStance_02bf17f0);
  local_48 = FUN_00dfd644;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfa48c(auStack_58);
  uVar5 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar5,FUN_00dfd644);
  FUN_00cf7578(uVar5,0);
  uVar5 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar5,FUN_00dfd658);
  FUN_00cf7578(uVar5,0);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dfd624(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,5,0x19,0);
  return;
}




void FUN_00dfd638(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00dfd644(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,1,0x19,0);
  return;
}




void FUN_00dfd658(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00dfd66c(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined1 auStack_b8 [16];
  code *local_a8;
  undefined4 local_a0;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  plVar2 = (long *)FUN_00cf9d3c(auStack_b8);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x50))();
  (**(code **)*puVar3)(puVar3,PTR_s_Ability__Sanfeng__A_02befd28);
  lVar4 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar4 + 0x10) = 1;
  uVar5 = FUN_00cfb05c(auStack_b8);
  FUN_00cf7b3c(uVar5,1);
  plVar2 = (long *)FUN_00cf9dcc(auStack_b8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Sanfeng_A_PostStanceAttack_02bf1800);
  plVar2 = (long *)FUN_00cfaa2c(auStack_b8);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability01_ParryAndDash");
  plVar2 = (long *)FUN_00cfac24(auStack_b8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Sanfeng_A_DashPrep");
  lVar4 = FUN_00d09310();
  FUN_00d0a400(*(undefined4 *)(lVar4 + 0x5b0));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar5 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar5,0);
  plVar2 = (long *)FUN_00cfab04(auStack_b8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Sanfeng_A_BeginDash");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  lVar4 = FUN_00cf9f7c(auStack_b8);
  lVar6 = FUN_00cefb20(lVar4 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Sanfeng_A_SuccessfulCounter_02bf17f8;
  plVar2 = (long *)FUN_00cfa12c(lVar4 + 0xb0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(0,0x400ccccd,0x40533333,0x40333333);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_a8._0_4_ = 0x42200000;
  local_a0 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xa0))(plVar2,&local_a8);
  (**(code **)(*plVar2 + 0xb8))(0x41700000);
  plVar2 = (long *)FUN_00cfa12c(lVar4 + 200);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(0,0x400ccccd,0x40533333,0x40333333);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0x41c80000);
  local_a0 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xa0))(plVar2,&local_a8);
  (**(code **)(*plVar2 + 0xb8))(0x41700000);
  uVar5 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar5,0);
  FUN_00cfb56c(auStack_b8);
  FUN_00cf99dc(auStack_b8);
  lVar6 = FUN_00cf9f7c(auStack_b8);
  lVar7 = FUN_00cefb20(lVar6 + 0x10);
  lVar4 = lVar6 + 200;
  *(undefined **)(lVar7 + 8) = PTR_s_Buff_Sanfeng_A_SuccessfulCounter_02bf17f8;
  plVar2 = (long *)FUN_00cfaa2c(lVar4);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Attack");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  plVar2 = (long *)FUN_00cfac24(lVar4);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Sanfeng_A_NormalAttack");
  lVar7 = FUN_00d09310();
  FUN_00d0a400(*(undefined4 *)(lVar7 + 0x5b0));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar5 = FUN_00cfa294(lVar4);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar5,0);
  plVar2 = (long *)FUN_00cfa09c(lVar4);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",0);
  (**(code **)(*plVar2 + 0x70))(plVar2,1);
  lVar6 = lVar6 + 0xb0;
  plVar2 = (long *)FUN_00cfaa2c(lVar6);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Ability01_Attack");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  plVar2 = (long *)FUN_00cfab04(lVar6);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Sanfeng_A_CounterAttack");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  iVar8 = 5;
  do {
    plVar2 = (long *)FUN_00cfac24(lVar6);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Sanfeng_A_CounterAttack");
    plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Sanfeng_Default_Impact_01");
    plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Sanfeng_Default_Impact_02");
    plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Sanfeng_Default_Impact_03");
    lVar4 = FUN_00d09310();
    FUN_00d0a400(*(undefined4 *)(lVar4 + 0x5b0));
    (**(code **)(*plVar2 + 0x28))(plVar2);
    plVar2 = (long *)FUN_00cfa09c(lVar6);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",0);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x70))(plVar2,1);
    local_a8 = (code *)CONCAT44(local_a8._4_4_,0x3e4ccccd);
    local_a0 = 1;
    (**(code **)(*plVar2 + 0x88))(plVar2,&local_a8);
    uVar5 = FUN_00cfa294(lVar6);
    FUN_00cf7478(0x3dcccccd);
    FUN_00cf7578(uVar5,0);
    plVar2 = (long *)FUN_00cf9b44(lVar6);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x70))(plVar2,PTR_s_Buff_Stunned_02beb430);
    local_a8 = FUN_00dfdc40;
    local_a0 = 3;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_a8);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  FUN_00cf9eec(auStack_b8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_b8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Sanfeng_A_SuccessfulCounter_02bf17f8);
  lVar4 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfdc40(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,2,0x19,0);
  return;
}




void FUN_00dfdc54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  FUN_00d557c4(uVar2,local_48,&DAT_03218f68);
  uVar2 = FUN_00d5048c(param_1);
  FUN_00d55794(uVar2,param_4,0);
  *(float *)(param_4 + 1) = local_40 * 3.0 + *(float *)(param_4 + 1);
  *param_4 = CONCAT44(local_48._4_4_ * 0.0 + (float)((ulong)*param_4 >> 0x20),
                      local_48._0_4_ * 3.0 + (float)*param_4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfdd00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 local_58 [8];
  float local_50;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  FUN_00d55794(uVar2,local_48,0);
  FUN_00d557c4(uVar2,local_58,&DAT_03218f68);
  fVar3 = (float)FUN_00d50cc8(param_1);
  *param_4 = CONCAT44((local_58._4_4_ * fVar3 + local_48._4_4_) - local_58._4_4_ * 0.0,
                      (local_58._0_4_ * fVar3 + local_48._0_4_) - local_58._0_4_ * 3.0);
  *(float *)(param_4 + 1) = fVar3 * local_50 + local_40 + local_50 * -3.0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfddc4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_a8 [16];
  code *local_98;
  undefined4 local_90;
  undefined4 local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  lVar2 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_a8);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfab04(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Sanfeng_B_Warning");
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar2 = FUN_00cf9f7c(auStack_a8);
  lVar5 = FUN_00db4148(lVar2 + 0x10);
  if (PTR_s_Ability__Sanfeng__B_02befd38 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar8 = (uint)(byte)*PTR_s_Ability__Sanfeng__B_02befd38;
    uVar6 = 0x811c9dc5;
    pbVar7 = PTR_s_Ability__Sanfeng__B_02befd38;
    if (*PTR_s_Ability__Sanfeng__B_02befd38 != 0) {
      do {
        uVar9 = (uint)pbVar7[1];
        uVar6 = (uVar6 ^ uVar8) * 0x1000193;
        uVar8 = uVar9;
        pbVar7 = pbVar7 + 1;
      } while (uVar9 != 0);
    }
  }
  *(uint *)(lVar5 + 8) = uVar6;
  plVar4 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Sanfeng_AbilityOverdrive_De_02bf17e8);
  local_98 = FUN_00dfe140;
  local_90 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_98);
  plVar4 = (long *)FUN_00cf9afc(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Sanfeng_PerkDamageReduction_02bf17e0);
  local_98 = FUN_00dfd638;
  local_90 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_98);
  plVar4 = (long *)FUN_00cf9afc(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Sanfeng_B_Charging_02bf1808);
  local_98 = FUN_00dfe154;
  local_90 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_98);
  plVar4 = (long *)FUN_00cfaa2c(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability02");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)FUN_00cfac24(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Sanfeng_B_Channel");
  lVar2 = FUN_00d09310();
  FUN_00d0a400(*(undefined4 *)(lVar2 + 0x5b8));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7580(uVar3,FUN_00dfe154);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfab04(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Sanfeng_B_Impact");
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  FUN_00d4d9e8(&local_98);
  FUN_00d4daf4(&local_98,0,1,0,0);
  FUN_00d4dabc(&local_98,0x40000);
  FUN_00d4dcdc(&local_98,1);
  local_58 = 0x3f400000;
  uVar3 = FUN_00cfaf3c(auStack_a8);
  uVar3 = FUN_00cf5ac8(0x40533333,uVar3,FUN_00dfdc54,FUN_00dfdd00);
  FUN_00cf5ae0(uVar3,&local_98);
  plVar4 = (long *)FUN_00cfa09c(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",1);
  FUN_00cf9eec(auStack_a8);
  plVar4 = (long *)FUN_00cfac24(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Sanfeng_B_Attack");
  lVar2 = FUN_00d09310();
  FUN_00d0a400(*(undefined4 *)(lVar2 + 0x5b8));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar2 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

