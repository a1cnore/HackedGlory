// functions/00e04 — 8 functions
#include "libGameKindred.h"




void FUN_00e041b0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_b8 [16];
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  lVar2 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  plVar3 = (long *)FUN_00cf9afc(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Ishtar_Minion_WarningPFX_02bf1a20);
  local_98[0] = 0x3f666666;
  local_90 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_98);
  plVar3 = (long *)FUN_00cfaa2c(auStack_b8);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Ability02");
  plVar3 = (long *)FUN_00cfab04(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_Minion_B");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)FUN_00cfac24(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ishtar_AbilityB_02");
  lVar2 = FUN_00d09310();
  FUN_00d0a5a4(*(undefined4 *)(lVar2 + 0x694));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar4,0);
  FUN_00d4d9e8(local_98);
  FUN_00d4daf4(local_98,0,1,0,0);
  FUN_00d4dabc(local_98,0x40000);
  FUN_00d4dcdc(local_98,1);
  local_58 = 0x3f266666;
  uVar4 = FUN_00cfaf84(auStack_b8);
  FUN_00cf5504(uVar4,local_98,0,FUN_00e04468,0,1,0);
  plVar3 = (long *)FUN_00cf9b44(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Ishtar_Minion_B_Damage_02bf1a50);
  local_a8[0] = 0x3dcccccd;
  local_a0 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_a8);
  lVar2 = FUN_00cf9f7c(auStack_b8);
  lVar5 = FUN_00ddcc94(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Ishtar_Talent_TalentB_02bf2388;
  plVar3 = (long *)FUN_00cf9b44(lVar2 + 0xb0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))
                             (plVar3,PTR_s_Buff_Ishtar_TalentB_Immobilize_02bf23b0);
  local_a8[0] = 0x3f800000;
  local_a0 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_a8);
  FUN_00cf9eec(auStack_b8);
  uVar4 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar4,0);
  lVar2 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e04468(undefined8 param_1)

{
  FUN_00d092ac(param_1,1,9,9,1);
  return;
}




undefined8 FUN_00e0447c(void)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_00d50ef8();
  lVar1 = FUN_00d9eb64();
  if ((lVar1 == 0) || (uVar2 = FUN_00d53990(lVar1,0), (int)uVar2 != 2)) {
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_00e044ac(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar3 + 0x58))(plVar3,"Attack");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  lVar4 = FUN_00cf9f7c(auStack_48);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  lVar6 = lVar4 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Ishtar_C_Empowerment_02bf1a80;
  uVar2 = FUN_00cfb17c(lVar6);
  FUN_00cfcad8(uVar2,0xcc,"EmpoweredShot_1");
  uVar2 = FUN_00cfb17c(lVar6);
  FUN_00cfcad8(uVar2,0xcc,"EmpoweredShot_2");
  plVar3 = (long *)FUN_00cfac24(lVar6);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ishtar_Empowered_Attack_01");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Ishtar_Empowered_Attack_02");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Ishtar_Empowered_Attack_03");
  lVar6 = FUN_00d09310();
  FUN_00d0a5a4(*(undefined4 *)(lVar6 + 0x674));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfb17c(lVar4 + 200);
  FUN_00cfcad8(uVar2,0xca,"Left_Hand");
  plVar3 = (long *)FUN_00cfac24(lVar4 + 200);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ishtar_Default_Attack_01");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Ishtar_Default_Attack_02");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Ishtar_Default_Attack_03");
  lVar6 = FUN_00d09310();
  FUN_00d0a5a4(*(undefined4 *)(lVar6 + 0x664));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cf9cf4(auStack_48);
  FUN_00cf2e48(uVar2,FUN_00e03d08);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e046b0(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar3 + 0x58))(plVar3,"AltAttack");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  lVar4 = FUN_00cf9f7c(auStack_48);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  lVar6 = lVar4 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Ishtar_C_Empowerment_02bf1a80;
  uVar2 = FUN_00cfb17c(lVar6);
  FUN_00cfcad8(uVar2,0xcc,"EmpoweredShot_1");
  uVar2 = FUN_00cfb17c(lVar6);
  FUN_00cfcad8(uVar2,0xcc,"EmpoweredShot_2");
  plVar3 = (long *)FUN_00cfac24(lVar6);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ishtar_Empowered_Attack_01");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Ishtar_Empowered_Attack_02");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Ishtar_Empowered_Attack_03");
  lVar6 = FUN_00d09310();
  FUN_00d0a5a4(*(undefined4 *)(lVar6 + 0x674));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfb17c(lVar4 + 200);
  FUN_00cfcad8(uVar2,0xca,"Right_Hand");
  plVar3 = (long *)FUN_00cfac24(lVar4 + 200);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ishtar_Default_Attack_01");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Ishtar_Default_Attack_02");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Ishtar_Default_Attack_03");
  lVar6 = FUN_00d09310();
  FUN_00d0a5a4(*(undefined4 *)(lVar6 + 0x664));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cf9cf4(auStack_48);
  FUN_00cf2e48(uVar2,FUN_00e03d08);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e048b4(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar3 + 0x58))(plVar3,"CritAttack");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  lVar4 = FUN_00cf9f7c(auStack_48);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  lVar6 = lVar4 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Ishtar_C_Empowerment_02bf1a80;
  uVar2 = FUN_00cfb17c(lVar6);
  FUN_00cfcad8(uVar2,0xcc,"EmpoweredShot_1");
  uVar2 = FUN_00cfb17c(lVar6);
  FUN_00cfcad8(uVar2,0xcc,"EmpoweredShot_2");
  plVar3 = (long *)FUN_00cfac24(lVar6);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ishtar_Empowered_Attack_01");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Ishtar_Empowered_Attack_02");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Ishtar_Empowered_Attack_03");
  lVar6 = FUN_00d09310();
  FUN_00d0a5a4(*(undefined4 *)(lVar6 + 0x674));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfb17c(lVar4 + 200);
  FUN_00cfcad8(uVar2,0xcb,"CenterBody");
  plVar3 = (long *)FUN_00cfac24(lVar4 + 200);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ishtar_Crit_Attack_01");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Ishtar_Crit_Attack_02");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Ishtar_Crit_Attack_03");
  lVar6 = FUN_00d09310();
  FUN_00d0a5a4(*(undefined4 *)(lVar6 + 0x66c));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cf9cf4(auStack_48);
  FUN_00cf2e48(uVar2,FUN_00e03d08);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e04ab8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_68 [16];
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  uVar3 = FUN_00cfad44(auStack_68);
  FUN_00cf2ec0(uVar3,FUN_00e0447c);
  FUN_00cf98bc(auStack_68);
  uVar3 = FUN_00cf9ab4(auStack_68);
  FUN_00cf44e8(0x3f000000,uVar3,PTR_s_Buff_Ishtar_A_Strafing_02bf1a70,1,0);
  FUN_00cf4600();
  FUN_00cf9eec(auStack_68);
  lVar4 = FUN_00cf9f7c(auStack_68);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Ishtar_C_Empowerment_02bf1a80;
  plVar6 = (long *)FUN_00cfaa2c(lVar4 + 200);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"Ability01");
  (**(code **)(*plVar6 + 0x28))();
  plVar6 = (long *)FUN_00cfaa2c(lVar4 + 0xb0);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"Ability01_Empowered");
  (**(code **)(*plVar6 + 0x28))();
  plVar6 = (long *)FUN_00cfac24(auStack_68);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6,"Sound_Ishtar_AbilityA_01");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,"Sound_Ishtar_AbilityA_02");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,"Sound_Ishtar_AbilityA_03");
  lVar4 = FUN_00d09310();
  FUN_00d0a5a4(*(undefined4 *)(lVar4 + 0x684));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  lVar4 = FUN_00cf9f7c(auStack_68);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  puVar2 = PTR_s_Buff_Ishtar_MinionTracker_02bf1a08;
  lVar4 = lVar4 + 200;
  *(undefined4 *)(lVar5 + 0x10) = 4;
  *(undefined **)(lVar5 + 8) = puVar2;
  plVar6 = (long *)FUN_00cfb1c4(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"*Ishtar_Minion*",1);
  uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"CenterBody");
  lVar5 = FUN_00cf9f7c(lVar4);
  lVar7 = FUN_00cefb20(lVar5 + 0x10);
  *(undefined **)(lVar7 + 8) = PTR_s_Buff_Ishtar_Talent_TalentC_02bf2398;
  plVar6 = (long *)FUN_00cf9afc(lVar5 + 0xb0);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,PTR_s_Buff_Ishtar_TalentC_AtkSpeed_02bf23b8)
  ;
  local_58[0] = 0x41200000;
  local_50 = 1;
  (**(code **)(*plVar6 + 0x18))(plVar6,local_58);
  plVar6 = (long *)FUN_00cf9b8c(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))
                             (plVar6,PTR_s_Buff_Ishtar_Minion_UseSelfShot_02bf1a40,uVar3);
  local_58[0] = 0x3dcccccd;
  local_50 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,local_58);
  (**(code **)(*plVar6 + 0x20))(plVar6,FUN_00e6047c);
  uVar3 = FUN_00cfafcc(auStack_68);
  FUN_00cf52e0(uVar3,"Ishtar_Minion");
  plVar6 = (long *)FUN_00cf9b44(auStack_68);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x70))
                             (plVar6,PTR_s_Buff_Ishtar_Minion_UseSelfShot_02bf1a40);
  local_58[0] = 0x3dcccccd;
  local_50 = 1;
  (**(code **)(*plVar6 + 0x18))(plVar6,local_58);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e04df8(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_c8 [16];
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  uVar2 = FUN_00cfafcc(auStack_c8);
  FUN_00cf52e0(uVar2,"Ishtar_Minion");
  plVar3 = (long *)FUN_00cf9b44(auStack_c8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Ishtar_Minion_UseB_02bf1a48);
  local_a8[0] = 0x3dcccccd;
  local_a0 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_a8);
  FUN_00cf9eec(auStack_c8);
  FUN_00cf98bc(auStack_c8);
  uVar2 = FUN_00cf9ab4(auStack_c8);
  FUN_00cf44e8(0x3f19999a,uVar2,PTR_s_Buff_Ishtar_B_Strafing_02bf1a78,1,0);
  FUN_00cf9eec(auStack_c8);
  lVar4 = FUN_00cf9f7c(auStack_c8);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  lVar6 = lVar4 + 200;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Ishtar_C_Empowerment_02bf1a80;
  plVar3 = (long *)FUN_00cfaa2c(lVar6);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability02");
  (**(code **)(*plVar3 + 0x28))();
  plVar3 = (long *)FUN_00cfab04(lVar6);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_B");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)FUN_00cfac24(lVar6);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ishtar_AbilityB_01");
  lVar6 = FUN_00d09310();
  FUN_00d0a5a4(*(undefined4 *)(lVar6 + 0x68c));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar4 = lVar4 + 0xb0;
  plVar3 = (long *)FUN_00cfaa2c(lVar4);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability02_Empowered");
  (**(code **)(*plVar3 + 0x28))();
  plVar3 = (long *)FUN_00cfab04(lVar4);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_B_Empowered");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)FUN_00cfac24(lVar4);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ishtar_AbilityB_Empowered_01");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Ishtar_AbilityB_Empowered_02");
  lVar6 = FUN_00d09310();
  FUN_00d0a5a4(*(undefined4 *)(lVar6 + 0x690));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00d4d9e8(local_a8);
  FUN_00d4daf4(local_a8,0,1,0,0);
  FUN_00d4dabc(local_a8,0x40000);
  FUN_00d4dcdc(local_a8,1);
  local_68 = 0x3f266666;
  uVar2 = FUN_00cfaf84(auStack_c8);
  FUN_00cf5504(uVar2,local_a8,0,FUN_00e051bc,0,1,0);
  plVar3 = (long *)FUN_00cf9b44(auStack_c8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Ishtar_Minion_B_Damage_02bf1a50);
  local_b8[0] = 0x3dcccccd;
  local_b0 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_b8);
  lVar6 = FUN_00cf9f7c(auStack_c8);
  lVar4 = FUN_00cefb20(lVar6 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Ishtar_Talent_TalentB_02bf2388;
  plVar3 = (long *)FUN_00cf9b44(lVar6 + 0xb0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))
                             (plVar3,PTR_s_Buff_Ishtar_TalentB_Immobilize_02bf23b0);
  local_b8[0] = 0x3f800000;
  local_b0 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_b8);
  FUN_00cf9eec(auStack_c8);
  uVar2 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb5c4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

