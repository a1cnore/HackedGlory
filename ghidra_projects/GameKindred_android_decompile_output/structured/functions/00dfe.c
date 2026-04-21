// functions/00dfe — 16 functions
#include "libGameKindred.h"




void FUN_00dfe140(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00dfe154(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




undefined4 FUN_00dfe168(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_00d50ef8();
  uVar2 = FUN_00d44be0(uVar1,PTR_s_Buff_Sanfeng_Talent_TalentA_02bf22c0);
  uVar1 = 0x40000000;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0xc0000000;
  }
  return uVar1;
}




void FUN_00dfe19c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d50ef8();
  FUN_00d5a3d0(uVar1,DAT_0320ecf0,2,9);
  return;
}




void FUN_00dfe1c4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined1 auStack_130 [16];
  undefined4 local_120 [2];
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  code *local_f0;
  undefined4 local_e8;
  undefined4 local_b0;
  long local_90;
  
  lVar1 = tpidr_el0;
  local_90 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_130);
  lVar2 = FUN_00cfa6cc(auStack_130);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cf9ea4(auStack_130);
  plVar3 = (long *)FUN_00cfaa2c(auStack_130);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability03");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)FUN_00cfac24(auStack_130);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Sanfeng_C_Channel");
  lVar2 = FUN_00d09310();
  FUN_00d0a400(*(undefined4 *)(lVar2 + 0x5bc));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00cfab04(auStack_130);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Sanfeng_C_BeginChannel");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00cf9afc(auStack_130);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Sanfeng_PerkDamageReduction_02bf17e0);
  iVar6 = 3;
  local_f0 = FUN_00dfd638;
  local_e8 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_f0);
  plVar3 = (long *)FUN_00cf9afc(auStack_130);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Sanfeng_C_Charging_02bf1810);
  local_f0 = FUN_00dfeb4c;
  local_e8 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_f0);
  uVar4 = FUN_00cfa294(auStack_130);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar4,0);
  plVar3 = (long *)FUN_00cfac24(auStack_130);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Sanfeng_C_Attack");
  lVar2 = FUN_00d09310();
  FUN_00d0a400(*(undefined4 *)(lVar2 + 0x5bc));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_00cfa294(auStack_130);
  FUN_00cf7478(0x3f666666);
  FUN_00cf7578(uVar4,0);
  plVar3 = (long *)FUN_00cfab04(auStack_130);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Sanfeng_C_PullInAndStun");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  FUN_00d4d9e8(&local_f0);
  FUN_00d4dabc(&local_f0,0x40000);
  FUN_00d4daf4(&local_f0,0,1,0,0);
  FUN_00d4dcdc(&local_f0,1);
  local_b0 = 0x3f266666;
  plVar3 = (long *)FUN_00cf9afc(auStack_130);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Sanfeng_PerkDamageReduction_02bf17e0);
  local_100 = 0x3ecccccd;
  local_f8 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_100);
  uVar4 = FUN_00cfaf84(auStack_130);
  FUN_00cf5504(uVar4,&local_f0,0,FUN_00dfeb60,0,0,0);
  plVar3 = (long *)FUN_00cfa684(auStack_130);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_100 = 0x42700000;
  local_f8 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_100);
  local_110._0_4_ = 0xdfe168;
  local_110._4_4_ = 0;
  local_108 = 4;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x28))(plVar3,&local_110);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))();
  (**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)FUN_00cfa09c(auStack_130);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",2);
  _local_100 = CONCAT44(uStack_fc,0x3eb33333);
  local_f8 = 1;
  (**(code **)(*plVar3 + 0x88))(plVar3,&local_100);
  plVar3 = (long *)FUN_00cf9b44(auStack_130);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_100 = 0xdfeb74;
  uStack_fc = 0;
  local_f8 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_100);
  plVar3 = (long *)FUN_00cfb134(auStack_130);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3df5c28f);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar3 + 0x20))(0x41400000);
  FUN_00cf9eec(auStack_130);
  uVar4 = FUN_00cfa294(auStack_130);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar4,0);
  plVar3 = (long *)FUN_00cfab04(auStack_130);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Sanfeng_C_Attacking");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  (**(code **)(*plVar3 + 0x90))();
  do {
    plVar3 = (long *)FUN_00cfac24(auStack_130);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Sanfeng_C_Suction");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Sanfeng_Default_Impact_01");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Sanfeng_Crit_Impact_01");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Sanfeng_Default_Impact_02");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Sanfeng_Crit_Impact_02");
    lVar2 = FUN_00d09310();
    FUN_00d0a400(*(undefined4 *)(lVar2 + 0x5c0));
    (**(code **)(*plVar3 + 0x28))(plVar3);
    uVar4 = FUN_00cfaf84(auStack_130);
    FUN_00cf5504(uVar4,&local_f0,0,FUN_00dfeb60,0,0,0);
    plVar3 = (long *)FUN_00cfa684(auStack_130);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
    local_100 = 0x42200000;
    local_f8 = 1;
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_100);
    local_110._0_4_ = 0x3e19999a;
    local_108 = 1;
    plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(plVar3,&local_110);
    local_120[0] = 0x41200000;
    local_118 = 1;
    (**(code **)(*plVar3 + 0x30))(plVar3,local_120);
    plVar3 = (long *)FUN_00cfa09c(auStack_130);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
    plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",2);
    local_100 = 0x3dcccccd;
    local_f8 = 1;
    (**(code **)(*plVar3 + 0x88))(plVar3,&local_100);
    plVar3 = (long *)FUN_00cfb134(auStack_130);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
    plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3df5c28f);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3e4ccccd);
    (**(code **)(*plVar3 + 0x20))(0x41400000);
    FUN_00cf9eec(auStack_130);
    uVar4 = FUN_00cfa294(auStack_130);
    FUN_00cf7478(0x3e99999a);
    FUN_00cf7578(uVar4,0);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  plVar3 = (long *)FUN_00cfab04(auStack_130);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Sanfeng_C_PushBackOut");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00cfac24(auStack_130);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Sanfeng_C_Finish");
  lVar2 = FUN_00d09310();
  FUN_00d0a400(*(undefined4 *)(lVar2 + 0x5c0));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_00cfaf84(auStack_130);
  FUN_00cf5504(uVar4,&local_f0,0,FUN_00dfeb60,0,0,0);
  lVar2 = FUN_00cf9f7c(auStack_130);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Sanfeng_Talent_TalentA_02bf22c0;
  plVar3 = (long *)FUN_00cfa684(lVar2 + 200);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_100 = 0x42200000;
  local_f8 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_100);
  local_110 = (code *)CONCAT44(local_110._4_4_,0x3fc00000);
  local_108 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_110);
  plVar3 = (long *)FUN_00cfa684(lVar2 + 0xb0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_100 = 0x42200000;
  local_f8 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_100);
  local_110 = FUN_00dfe19c;
  local_108 = 4;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(plVar3,&local_110);
  (**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)FUN_00cf9b44(auStack_130);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_100 = 0x3e99999a;
  local_f8 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_100);
  plVar3 = (long *)FUN_00cfa09c(auStack_130);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",2);
  _local_100 = CONCAT44(uStack_fc,0x3eb33333);
  local_f8 = 1;
  (**(code **)(*plVar3 + 0x88))(plVar3,&local_100);
  plVar3 = (long *)FUN_00cfb134(auStack_130);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3e99999a);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar3 + 0x20))(0x41400000);
  FUN_00cf9eec(auStack_130);
  uVar4 = FUN_00cfa294(auStack_130);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar4,0);
  lVar2 = FUN_00cfa6cc(auStack_130);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_130);
  if (*(long *)(lVar1 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfeb4c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,1,0x19,0);
  return;
}




void FUN_00dfeb60(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00dfeb74(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00dfeb88(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  plVar2 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar3,FUN_00cf76f0);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  plVar2 = (long *)FUN_00cfa0e4(auStack_48);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfec50(undefined8 param_1,undefined8 param_2)

{
  FUN_00dfeb88("Attack",param_2,0);
  return;
}




void FUN_00dfec60(undefined8 param_1,undefined8 param_2)

{
  FUN_00dfeb88("AltAttack",param_2,0);
  return;
}




void FUN_00dfec70(undefined8 param_1,undefined8 param_2)

{
  FUN_00dfeb88("CritAttack",param_2,2);
  return;
}




void FUN_00dfec80(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfecd8(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfed30(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dfed88(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_a8 [16];
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 local_58;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00cfb05c(auStack_a8);
  plVar3 = (long *)FUN_00cfaa2c(auStack_a8);
  (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
  plVar3 = (long *)FUN_00cfab04(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_Sword");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Leo_Sword_Jets");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,0);
  local_98[0] = 0x3f000000;
  local_90 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_98);
  plVar3 = (long *)FUN_00cfab04(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,param_2);
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  uVar4 = FUN_00cfa294(auStack_a8);
  FUN_00cf7570(uVar4,FUN_00cf76f0);
  FUN_00cf7578(uVar4,FUN_00cfb9b0);
  ppuVar1 = &PTR_s_Sound_Leo_Crit_Attack_01_02befd90;
  if (param_3 != 2) {
    ppuVar1 = &PTR_s_Sound_Leo_Default_Attack_01_02befd78;
  }
  plVar3 = (long *)FUN_00cfac24(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,*ppuVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,ppuVar1[1]);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,ppuVar1[2]);
  lVar5 = FUN_00d09310();
  FUN_00d0a4a8(*(undefined4 *)(lVar5 + 0x5fc));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_00cf99dc(auStack_a8);
  plVar3 = (long *)FUN_00cfa09c(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  FUN_00cf9eec(auStack_a8);
  FUN_00d4d9e8(local_98);
  FUN_00d4daf4(local_98,0,1,0,0);
  FUN_00d4dba0(0x42700000,local_98);
  FUN_00d4dabc(local_98,0x40000);
  FUN_00d4dcdc(local_98,1);
  local_58 = 0x3f266666;
  uVar4 = FUN_00cfaf84(auStack_a8);
  FUN_00cf5460(0x40800000,uVar4,local_98,0,1,1,0);
  plVar3 = (long *)FUN_00cfa09c(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(plVar3,"DEFAULT_ATTACK_AOE");
  (**(code **)(*plVar3 + 0x70))(plVar3,param_3);
  FUN_00cfb0a4(auStack_a8);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

