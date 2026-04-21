// functions/00e09 — 11 functions
#include "libGameKindred.h"




void FUN_00e09510(void)

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




void FUN_00e09568(undefined8 param_1,undefined8 param_2,int param_3)

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
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,param_1);
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)FUN_00cfac24(auStack_58);
  ppuVar1 = &PTR_s_Sound_Shin_Crit_Attack_1_02bf00e8;
  if (param_3 != 2) {
    ppuVar1 = &PTR_s_Sound_Shin_Basic_Attack_1_02bf00d0;
  }
  ppuVar2 = &PTR_s_Sound_Shin_Crit_Attack_Impact_1_02bf0108;
  if (param_3 != 2) {
    ppuVar2 = &PTR_s_Sound_Shin_Attack_Impact_1_02bf00f8;
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,*ppuVar1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar1[1]);
  lVar5 = FUN_00d09310();
  FUN_00d0a6a0(*(undefined4 *)(lVar5 + 0x708));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar6 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar6,FUN_00cf76f0);
  FUN_00cf7578(uVar6,FUN_00cfb9b0);
  plVar4 = (long *)FUN_00cfab04(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  (**(code **)(*plVar4 + 0x48))(plVar4,param_2);
  plVar4 = (long *)FUN_00cfac24(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,*ppuVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,ppuVar2[1]);
  lVar5 = FUN_00d09310();
  FUN_00d0a6a0(*(undefined4 *)(lVar5 + 0x708));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfa0e4(auStack_58);
  (**(code **)(*plVar4 + 0x58))(plVar4,param_3);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e09730(void)

{
  FUN_00e09568("Attack","Effect_Shin_DefaultAttacks_Static",0);
  return;
}




void FUN_00e09748(void)

{
  FUN_00e09568("AltAttack","Effect_Shin_AltAttacks_Static",0);
  return;
}




void FUN_00e09760(void)

{
  FUN_00e09568("CritAttack","Effect_Shin_CritAttacks_Static",2);
  return;
}




void FUN_00e09778(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  uVar1 = FUN_00d5048c();
  FUN_00d55794(uVar1,in_x3,0);
  return;
}




void FUN_00e097a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *param_4 = CONCAT44(local_58._4_4_ * fVar3 + local_48._4_4_,
                      local_58._0_4_ * fVar3 + local_48._0_4_);
  *(float *)(param_4 + 1) = fVar3 * local_50 + local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e09848(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  uVar2 = FUN_00cfb05c(auStack_a8);
  FUN_00cf7b3c(uVar2,1);
  FUN_00cfa6cc(auStack_a8);
  plVar3 = (long *)FUN_00cfaa2c(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability01");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)FUN_00cfac24(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Shin_Ability_A");
  lVar4 = FUN_00d09310();
  FUN_00d0a6a0(*(undefined4 *)(lVar4 + 0x720));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfab04(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Shin_A_Cast");
  plVar3 = (long *)FUN_00cfac6c(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"ability1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar3 + 0x20))();
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dabc(auStack_98,0x40000);
  uVar2 = FUN_00cfaf3c(auStack_a8);
  FUN_00cf5ac8(0x3fc00000,uVar2,FUN_00e09778,FUN_00e097a0);
  FUN_00cf5ae0(uVar2,auStack_98);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfac24(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Shin_Ability_A_Impact");
  lVar4 = FUN_00d09310();
  FUN_00d0a6a0(*(undefined4 *)(lVar4 + 0x724));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00cfa09c(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Damage",0);
  FUN_00cf9eec(auStack_a8);
  lVar4 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e09aa8(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  uVar2 = FUN_00cfb05c(auStack_a8);
  FUN_00cf7b3c(uVar2,1);
  FUN_00cfa6cc(auStack_a8);
  uVar2 = FUN_00cfa834(auStack_a8);
  FUN_00cf4dc4(uVar2,PTR_s_Buff_Shin_SetFlameMeter_02bf1c28,0xfffffffc,0);
  plVar3 = (long *)FUN_00cfaa2c(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability01");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)FUN_00cfac24(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Shin_Ability_A1");
  lVar4 = FUN_00d09310();
  FUN_00d0a6a0(*(undefined4 *)(lVar4 + 0x728));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfab04(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Shin_A2_Cast");
  plVar3 = (long *)FUN_00cfac24(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Shin_Ability_A1_Impact");
  lVar4 = FUN_00d09310();
  FUN_00d0a6a0(*(undefined4 *)(lVar4 + 0x72c));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00cfac6c(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"ability1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar3 + 0x20))();
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dabc(auStack_98,0x40000);
  uVar2 = FUN_00cfaf3c(auStack_a8);
  FUN_00cf5ac8(0x40000000,uVar2,FUN_00e09778,FUN_00e097a0);
  FUN_00cf5ae0(uVar2,auStack_98);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfa09c(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Damage",3);
  FUN_00cf9eec(auStack_a8);
  lVar4 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e09d28(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b3c(uVar2,1);
  FUN_00cfa6cc(auStack_38);
  plVar3 = (long *)FUN_00cfaa2c(auStack_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability02");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)FUN_00cfac6c(auStack_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"ability2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3dcccccd);
  (**(code **)(*plVar3 + 0x20))();
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfac24(auStack_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Shin_Ability_B_Cast");
  lVar4 = FUN_00d09310();
  FUN_00d0a6a0(*(undefined4 *)(lVar4 + 0x730));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar2,0xe6,"CenterBody");
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e09ea8(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar2,1);
  FUN_00cfa6cc(auStack_48);
  uVar2 = FUN_00cfa834(auStack_48);
  FUN_00cf4dc4(uVar2,PTR_s_Buff_Shin_SetFlameMeter_02bf1c28,0xfffffffc,0);
  plVar3 = (long *)FUN_00cfaa2c(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability02");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)FUN_00cfac6c(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"ability2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3dcccccd);
  (**(code **)(*plVar3 + 0x20))();
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfac24(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Shin_Ability_B1_Cast");
  lVar4 = FUN_00d09310();
  FUN_00d0a6a0(*(undefined4 *)(lVar4 + 0x738));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,0xe7,"CenterBody");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

