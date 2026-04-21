// functions/00e01 — 15 functions
#include "libGameKindred.h"




void FUN_00e0116c(undefined8 param_1,undefined4 param_2,undefined8 param_3)

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
  plVar3 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  plVar3 = (long *)FUN_00cfac24(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Warhawk_Basic_Attack_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Warhawk_Basic_Attack_2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Warhawk_Basic_Attack_3");
  lVar4 = FUN_00d09310();
  FUN_00d0a4fc(*(undefined4 *)(lVar4 + 0x618));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,param_2,param_3);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e012a0(void)

{
  FUN_00e0116c("Attack",0xc4,"Gun");
  return;
}




void FUN_00e012b8(void)

{
  FUN_00e0116c("AltAttack",0xc4,"Gun");
  return;
}




void FUN_00e012d0(void)

{
  FUN_00e0116c("CritAttack",0xc5,"Gun");
  return;
}




void FUN_00e012e8(void)

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
  plVar3 = (long *)FUN_00cfaa2c(auStack_38);
  (**(code **)(*plVar3 + 0x50))(plVar3,"EnhancedAttack");
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  plVar3 = (long *)FUN_00cfac24(auStack_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Warhawk_Enhanced_Basic_Attack");
  lVar4 = FUN_00d09310();
  FUN_00d0a4fc(*(undefined4 *)(lVar4 + 0x618));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar2,0xc6,"GunEmpoweredHigher");
  plVar3 = (long *)FUN_00cf9dcc(auStack_38);
  (**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Warhawk_Enhanced_BasicAttac_02bf18e8);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e01400(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_68);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfac6c(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability1");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3c23d70a);
  (**(code **)(*plVar4 + 0x20))();
  plVar4 = (long *)FUN_00cfac24(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Warhawk_A_Attack_1");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Warhawk_A_Attack_2");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Warhawk_A_Attack_3");
  lVar2 = FUN_00d09310();
  FUN_00d0a4fc(*(undefined4 *)(lVar2 + 0x618));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfaa2c(auStack_68);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability01");
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e051eb8);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfab04(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_LauncherHandle");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Warhawk_A_Backfire");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,0);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3e8a3d71);
  local_40 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4,&local_48);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3d8f5c29);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_68);
  FUN_00cfcad8(uVar3,199,"GunEmpowered");
  lVar2 = FUN_00cf9f7c(auStack_68);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Warhawk_Talent_TalentB_02bf2348;
  plVar4 = (long *)FUN_00cfa12c(lVar2 + 200);
  local_48 = FUN_00e01764;
  local_40 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,&local_48);
  local_58 = FUN_00e01778;
  local_50 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_58);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)FUN_00cfa12c(lVar2 + 0xb0);
  local_48 = FUN_00e0178c;
  local_40 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,&local_48);
  local_58 = FUN_00e017a4;
  local_50 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_58);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_68);
  plVar4 = (long *)FUN_00cf9afc(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Warhawk_Enhanced_BasicAttac_02bf18e8);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x40000000);
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  FUN_00cfacb4(auStack_68);
  FUN_00cf50b0(0x3f333333);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e01764(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,2,0x19,0);
  return;
}




void FUN_00e01778(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00e0178c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed34,2,9);
  return;
}




void FUN_00e017a4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed34,3,9);
  return;
}




void FUN_00e017bc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability02");
  plVar4 = (long *)FUN_00cfac24(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Warhawk_B_Throw");
  lVar2 = FUN_00d09310();
  FUN_00d0a4fc(*(undefined4 *)(lVar2 + 0x628));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,200,"CenterBody");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cf9afc(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Warhawk_Enhanced_BasicAttac_02bf18e8);
  local_38 = FUN_00e0190c;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_38);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0190c(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00e01918(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  plVar2 = (long *)FUN_00cfac6c(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"ability2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(0x3ca3d70a);
  (**(code **)(*plVar2 + 0x20))();
  FUN_00cfafcc(auStack_48);
  uVar3 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Warhawk_B_Grenade_02bf18f8);
  FUN_00cf9eec(auStack_48);
  plVar2 = (long *)FUN_00cf9afc(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Warhawk_Enhanced_BasicAttac_02bf18e8);
  local_38 = FUN_00e0190c;
  local_30 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_38);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e01a10(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_148 [16];
  undefined4 local_138 [2];
  undefined4 local_130;
  undefined4 local_128 [2];
  undefined4 local_120;
  undefined4 local_118 [2];
  undefined4 local_110;
  undefined1 auStack_108 [96];
  undefined4 local_a8 [2];
  undefined4 local_a0;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_148);
  plVar2 = (long *)FUN_00cfab04(auStack_148);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Warhawk_B_Grenade_Charging");
  local_a8[0] = 0x40400000;
  local_a0 = 1;
  (**(code **)(*plVar2 + 0xd0))(plVar2,local_a8);
  plVar2 = (long *)FUN_00cfac24(auStack_148);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Warhawk_B_Active");
  lVar3 = FUN_00d09310();
  FUN_00d0a4fc(*(undefined4 *)(lVar3 + 0x62c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar4 = FUN_00cfa294(auStack_148);
  FUN_00cf7478(0x3f666666);
  FUN_00cf7578(uVar4,0);
  plVar2 = (long *)FUN_00cfab04(auStack_148);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))();
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Warhawk_B_Grenade_Explode");
  lVar3 = FUN_00cf9f7c(auStack_148);
  lVar5 = FUN_00ddcc94(lVar3 + 0x10);
  lVar3 = lVar3 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Warhawk_Talent_TalentA_02bf2358;
  plVar2 = (long *)FUN_00cfab04(lVar3);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))();
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Warhawk_B_Heal");
  plVar2 = (long *)FUN_00cfac24(auStack_148);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Warhawk_B_Explode");
  lVar5 = FUN_00d09310();
  FUN_00d0a4fc(*(undefined4 *)(lVar5 + 0x62c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  FUN_00d4d9e8(local_a8);
  FUN_00d4daf4(local_a8,0,1,0,0);
  FUN_00d4dabc(local_a8,0x40000);
  FUN_00d4d9e8(auStack_108);
  FUN_00d4daf4(auStack_108,1,0,1,0);
  FUN_00d4dabc(auStack_108,0x40001);
  uVar4 = FUN_00cfaf84(auStack_148);
  FUN_00cf5460(0x40800000,uVar4,local_a8,0,0,1,0);
  plVar2 = (long *)FUN_00cfa684(auStack_148);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  local_118[0] = 0x42200000;
  local_110 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,local_118);
  local_128[0] = 0xbf800000;
  local_120 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x28))(plVar2,local_128);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  local_138[0] = 0x40666666;
  local_130 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,local_138);
  plVar2 = (long *)FUN_00cf9b44(auStack_148);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))(plVar2,PTR_s_Buff_Warhawk_B_Damage_02bf1908);
  local_118[0] = 0x3dcccccd;
  local_110 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_118);
  FUN_00cf9eec(auStack_148);
  uVar4 = FUN_00cfaf84(lVar3);
  FUN_00cf5460(0x40800000,uVar4,auStack_108,0,0,1,0);
  plVar2 = (long *)FUN_00cf9b44(lVar3);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))(plVar2,PTR_s_Buff_Warhawk_TalentA_Heal_02bf2368);
  local_118[0] = 0x3dcccccd;
  local_110 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_118);
  FUN_00cf9eec(lVar3);
  uVar4 = FUN_00cfa294(auStack_148);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar4,0);
  FUN_00cfa5f4(auStack_148);
  FUN_00cfb5c4(auStack_148);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e01dc8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_58);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability03_Aiming");
  plVar4 = (long *)FUN_00cfab04(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,"Wrist");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Warhawk_C_Wrist");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3e19999a);
  local_40 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4,&local_48);
  plVar4 = (long *)FUN_00cfac6c(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability3");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3dcccccd);
  (**(code **)(*plVar4 + 0x20))();
  plVar4 = (long *)FUN_00cfac24(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Warhawk_C_LockOn");
  lVar2 = FUN_00d09310();
  FUN_00d0a4fc(*(undefined4 *)(lVar2 + 0x62c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfb1c4(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Warhawk_C_Warning*",0);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00e60680);
  plVar4 = (long *)FUN_00cf9afc(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Warhawk_Enhanced_BasicAttac_02bf18e8);
  local_48 = FUN_00e0190c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  lVar2 = FUN_00cf9f7c(auStack_58);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Warhawk_Talent_TalentC_02bf2338;
  plVar4 = (long *)FUN_00cf9afc(lVar2 + 200);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Warhawk_C_Targets_02bf1918);
  local_48._0_4_ = 0x3fc00000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  plVar4 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Warhawk_C_TargetsTalent_02bf1920)
  ;
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3fc00000);
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  plVar4 = (long *)FUN_00cfa75c(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Warhawk__C_Aim_02befec0,3,1);
  (**(code **)(*plVar4 + 0x30))();
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

