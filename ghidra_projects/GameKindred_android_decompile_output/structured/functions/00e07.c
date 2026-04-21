// functions/00e07 — 12 functions
#include "libGameKindred.h"




void FUN_00e0704c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  plVar3 = (long *)FUN_00cf9afc(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Amael_A_Charge_Control_02bf1bc8);
  local_38 = FUN_00e07128;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  FUN_00cf9ea4(auStack_48);
  plVar3 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Ability01_Idle");
  FUN_00cfb0a4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e07128(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00e0713c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_b8 [16];
  code *local_a8;
  undefined4 local_a0;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  lVar2 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cf98bc(auStack_b8);
  uVar3 = FUN_00cf9d84(auStack_b8);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Amael_A_Charge_Control_02bf1bc8);
  FUN_00cf9eec(auStack_b8);
  plVar4 = (long *)FUN_00cfaa2c(auStack_b8);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability01_Attack");
  plVar4 = (long *)FUN_00cfac24(auStack_b8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Amael_Ability_A_Leap");
  lVar2 = FUN_00d09310();
  FUN_00d0a6f4(*(undefined4 *)(lVar2 + 0x770));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfaa74(auStack_b8);
  FUN_00cf32cc(0,uVar3,"Effect_Amael_Dash_TrailA",1,0,1,0,0);
  uVar3 = FUN_00cfb05c(auStack_b8);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfac6c(auStack_b8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability1");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f666666);
  (**(code **)(*plVar4 + 0x20))();
  plVar4 = (long *)FUN_00cf9afc(auStack_b8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_SelfProjectile_02beb4b8);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0x3f000000);
  local_a0 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_a8);
  (**(code **)(*plVar4 + 0x48))(plVar4,0xd6);
  plVar4 = (long *)FUN_00cfa12c(auStack_b8);
  local_a8 = FUN_00e06df8;
  local_a0 = 4;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,&local_a8);
  local_48 = FUN_00e074e8;
  local_40 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_48);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  FUN_00d4d9e8(&local_a8);
  FUN_00d4daf4(&local_a8,0,1,0,0);
  FUN_00d4dabc(&local_a8,0x40000);
  uVar3 = FUN_00cfaf3c(auStack_b8);
  FUN_00cf5ac8(0x3fc00000,uVar3,FUN_00e06c20,FUN_00e06c48);
  FUN_00cf5ae0(uVar3,&local_a8);
  uVar3 = FUN_00cf9cf4(auStack_b8);
  FUN_00cf2e48(uVar3,FUN_00e06cf0);
  lVar2 = FUN_00cf9f7c(auStack_b8);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  lVar2 = lVar2 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Amael_PowerReady_02bf1be8;
  plVar4 = (long *)FUN_00cf9b44(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_48 = FUN_00e074fc;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  uVar3 = FUN_00cfa294(lVar2);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfa834(lVar2);
  FUN_00cf4dc4(uVar3,PTR_s_Buff_Amael_EmpowerMeter_02bf1bf0,0xfffffffe,0);
  plVar4 = (long *)FUN_00cfac24(auStack_b8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Amael_Ability_A_Hit");
  lVar2 = FUN_00d09310();
  FUN_00d0a6f4(*(undefined4 *)(lVar2 + 0x774));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  FUN_00cfb56c(auStack_b8);
  uVar3 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb0a4(auStack_b8);
  lVar2 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e074e8(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,7,0x19,0);
  return;
}




void FUN_00e074fc(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,2,1);
  return;
}




void FUN_00e07508(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_d8 [16];
  code *local_c8;
  undefined4 local_c0;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_d8);
  lVar2 = FUN_00cfa6cc(auStack_d8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_d8);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_d8);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability02_Run_Back");
  plVar4 = (long *)FUN_00cfac24(auStack_d8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Amael_Ability_B_Back_Run");
  lVar2 = FUN_00d09310();
  FUN_00d0a6f4(*(undefined4 *)(lVar2 + 0x778));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfa294(auStack_d8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfa12c(auStack_d8);
  local_c8 = FUN_00e07ae8;
  local_c0 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,&local_c8);
  local_68 = FUN_00e07afc;
  local_60 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_68);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar3 = FUN_00cfa294(auStack_d8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_d8);
  uVar3 = FUN_00cfa294(auStack_d8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfaa2c(auStack_d8);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability02_Attack");
  plVar4 = (long *)FUN_00cfac24(auStack_d8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Amael_Ability_B_Forward_Run");
  lVar2 = FUN_00d09310();
  FUN_00d0a6f4(*(undefined4 *)(lVar2 + 0x77c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfaa74(auStack_d8);
  FUN_00cf32cc(0,uVar3,"Effect_Amael_Dash_TrailB",1,0,1,0,0);
  plVar4 = (long *)FUN_00cfab04(auStack_d8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_RightArm");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Amael_Ability02_RightArm");
  plVar4 = (long *)(**(code **)(*plVar4 + 0xc0))(0x3f800000,0,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)FUN_00cfab04(auStack_d8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_LeftArm");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Amael_Ability02_LeftArm");
  plVar4 = (long *)(**(code **)(*plVar4 + 0xc0))(0x3f800000,0,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)FUN_00cfac6c(auStack_d8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability2");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar4 + 0x20))();
  plVar4 = (long *)FUN_00cf9afc(auStack_d8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_SelfProjectile_02beb4b8);
  local_c8 = (code *)CONCAT44(local_c8._4_4_,0x3f19999a);
  local_c0 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_c8);
  (**(code **)(*plVar4 + 0x48))(plVar4,0xd5);
  plVar4 = (long *)FUN_00cfa12c(auStack_d8);
  local_c8 = FUN_00e06f68;
  local_c0 = 4;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,&local_c8);
  local_68 = FUN_00e07b10;
  local_60 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_68);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  FUN_00d4d9e8(&local_c8);
  FUN_00d4daf4(&local_c8,0,1,0,0);
  FUN_00d4dabc(&local_c8,0x40000);
  uVar3 = FUN_00cfaf3c(auStack_d8);
  FUN_00cf5ac8(0x3fc00000,uVar3,FUN_00e06c20,FUN_00e06c48);
  FUN_00cf5ae0(uVar3,&local_c8);
  uVar3 = FUN_00cf9cf4(auStack_d8);
  FUN_00cf2e48(uVar3,FUN_00e06cf0);
  lVar2 = FUN_00cf9f7c(auStack_d8);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  lVar2 = lVar2 + 0xb0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Amael_PowerReady_02bf1be8;
  plVar4 = (long *)FUN_00cf9b44(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_68 = FUN_00e074fc;
  local_60 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_68);
  uVar3 = FUN_00cfa294(lVar2);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfa834(lVar2);
  FUN_00cf4dc4(uVar3,PTR_s_Buff_Amael_EmpowerMeter_02bf1bf0,0xfffffffe,0);
  plVar4 = (long *)FUN_00cfac24(auStack_d8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Amael_Ability_B_Hit");
  lVar2 = FUN_00d09310();
  FUN_00d0a6f4(*(undefined4 *)(lVar2 + 0x780));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfa294(auStack_d8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_d8);
  uVar3 = FUN_00cfa294(auStack_d8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfab04(auStack_d8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Amael_Ability02_Impact");
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  lVar2 = FUN_00cfa6cc(auStack_d8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_d8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e07ae8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00e07afc(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00e07b10(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,6,0x19,0);
  return;
}




void FUN_00e07b24(void)

{
  long lVar1;
  
  lVar1 = FUN_00d517cc();
  if (lVar1 != 0) {
    FUN_00d58594();
    return;
  }
  return;
}




void FUN_00e07b44(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_4 = 0x40a00000;
  *param_3 = 0x40c00000;
  return;
}




void FUN_00e07b58(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_110 [16];
  code *local_100;
  undefined4 local_f8;
  undefined1 auStack_f0 [96];
  long local_90;
  
  lVar1 = tpidr_el0;
  local_90 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_110);
  lVar2 = FUN_00cfa6cc(auStack_110);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_110);
  FUN_00cf9ea4(auStack_110);
  lVar3 = FUN_00cf9f7c(auStack_110);
  lVar2 = FUN_00cf2970(lVar3 + 0x10);
  *(code **)(lVar2 + 8) = FUN_00e07b24;
  FUN_00d4d9e8(auStack_f0);
  FUN_00d4dabc(auStack_f0,0x200000);
  FUN_00d4daf4(auStack_f0,0,1,0,0);
  lVar2 = lVar3 + 0xb0;
  plVar4 = (long *)FUN_00cfaa2c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability03");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)FUN_00cfac24(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Amael_Ability_C_Dash");
  lVar5 = FUN_00d09310();
  FUN_00d0a6f4(*(undefined4 *)(lVar5 + 0x784));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfac6c(auStack_110);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability3");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f000000);
  (**(code **)(*plVar4 + 0x20))();
  uVar6 = FUN_00cfa294(lVar2);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar6,0);
  plVar4 = (long *)FUN_00cfa12c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(0x3f000000,0x3f800000,0x40133333,0x3fe66666);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_100._0_4_ = 0x3e99999a;
  local_f8 = 1;
  (**(code **)(*plVar4 + 0xa8))(plVar4,&local_100);
  plVar4 = (long *)FUN_00cfaa2c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability03_Attack_02");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)FUN_00cfac24(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Amael_Ability_C_Elbow_Drop");
  lVar5 = FUN_00d09310();
  FUN_00d0a6f4(*(undefined4 *)(lVar5 + 0x788));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar6 = FUN_00cfaa74(lVar2);
  FUN_00cf32cc(0,uVar6,"Effect_Amael_Dash_TrailC",1,0,1,0,0);
  uVar6 = FUN_00cfa294(lVar2);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar6,0);
  uVar6 = FUN_00cfaf84(lVar2);
  FUN_00cf5460(0x41000000,uVar6,auStack_f0,0,0,1,0);
  uVar6 = FUN_00cf9bd4(lVar2);
  FUN_00cf834c(uVar6,FUN_00e07b44,0,1);
  plVar4 = (long *)FUN_00cfab04(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Amael_Ability03_Attack_02");
  (**(code **)(*plVar4 + 0x78))(plVar4,0);
  plVar4 = (long *)FUN_00cfb134(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3f19999a);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f000000);
  (**(code **)(*plVar4 + 0x20))(0x41700000);
  plVar4 = (long *)FUN_00cfa09c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"AoEDamage",2);
  uVar6 = FUN_00cf9cf4(lVar2);
  FUN_00cf2e48(uVar6,FUN_00e06cf0);
  lVar3 = lVar3 + 200;
  plVar4 = (long *)FUN_00cfaa2c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability03");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)FUN_00cfac24(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Amael_Ability_C_Dash");
  lVar2 = FUN_00d09310();
  FUN_00d0a6f4(*(undefined4 *)(lVar2 + 0x784));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfa12c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(0x3f000000,0x3f800000,0x40133333,0x3fe66666);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_100 = (code *)CONCAT44(local_100._4_4_,0x3e99999a);
  local_f8 = 1;
  (**(code **)(*plVar4 + 0xa8))(plVar4,&local_100);
  FUN_00cf99dc(lVar3);
  plVar4 = (long *)FUN_00cfaa2c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability03_Attack_01");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)FUN_00cfac24(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Amael_Ability_C_Super_Kick");
  lVar2 = FUN_00d09310();
  FUN_00d0a6f4(*(undefined4 *)(lVar2 + 0x78c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar6 = FUN_00cfaa74(lVar3);
  FUN_00cf32cc(0,uVar6,"Effect_Amael_Dash_TrailC",1,0,1,0,0);
  uVar6 = FUN_00cfa294(lVar3);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar6,0);
  plVar4 = (long *)FUN_00cfab04(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Amael_Ability03_Attack_01");
  (**(code **)(*plVar4 + 0x78))(plVar4,0);
  uVar6 = FUN_00cf9bd4(lVar3);
  FUN_00cf834c(uVar6,FUN_00e07b44,0,1);
  plVar4 = (long *)FUN_00cfa09c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,"DAMAGE");
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  uVar6 = FUN_00cf9cf4(lVar3);
  FUN_00cf2e48(uVar6,FUN_00e06cf0);
  lVar2 = FUN_00cf9f7c(auStack_110);
  lVar3 = FUN_00cefb20(lVar2 + 0x10);
  lVar2 = lVar2 + 0xb0;
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Amael_PowerReady_02bf1be8;
  plVar4 = (long *)FUN_00cf9b44(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_100 = FUN_00e074fc;
  local_f8 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_100);
  uVar6 = FUN_00cfa294(lVar2);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar6,0);
  uVar6 = FUN_00cfa834(lVar2);
  FUN_00cf4dc4(uVar6,PTR_s_Buff_Amael_EmpowerMeter_02bf1bf0,0xfffffffe,0);
  uVar6 = FUN_00cfa294(auStack_110);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar6,0);
  FUN_00cfb56c(auStack_110);
  lVar2 = FUN_00cfa6cc(auStack_110);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_110);
  FUN_00cfb5c4(auStack_110);
  if (*(long *)(lVar1 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

