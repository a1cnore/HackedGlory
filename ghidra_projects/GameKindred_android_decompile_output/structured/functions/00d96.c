// functions/00d96 — 22 functions
#include "libGameKindred.h"




void FUN_00d96024(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d817bc();
  uVar3 = FUN_00d80f68(param_1);
  FUN_00d80ec4(0x3fcccccd,param_1);
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
  lVar4 = FUN_00d84048(uVar3,param_1,0x40000);
  plVar5 = (long *)FUN_00d84eec(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Miho_A_ApplyDamage_02bf19c0);
  local_48[0] = 0x3f000000;
  local_40 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d96120(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 auStack_68 [16];
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d817bc();
  uVar2 = FUN_00d80f68(param_1);
  *(char **)(param_2 + 0x20) = "Effect_Miho_C_ShotImpact";
  *(undefined2 *)(param_2 + 0xa4) = 0x5a00;
  *(undefined1 *)(param_2 + 0xa6) = 0x82;
  FUN_00d80ec4(0x40400000,param_1);
  lVar8 = param_1 + 0x120;
  FUN_00e5fc3c(lVar8);
  *(long *)(param_1 + 0x118) = lVar8;
  uVar3 = FUN_00e5fe74(lVar8);
  FUN_00d59f54(uVar2,2,2,0x19,0);
  FUN_00e5fe1c(uVar3,param_1,2);
  FUN_00d80c00(param_1,auStack_68);
  lVar8 = param_1 + 0x100;
  uVar2 = FUN_00d850b4(lVar8);
  lVar4 = FUN_00d84048(uVar2,param_1,0x40000);
  lVar5 = FUN_00d86924(lVar4 + 0x10);
  lVar6 = FUN_00d86dc0(lVar5 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Miho_Talent_TalentA_02bee380;
  plVar7 = (long *)FUN_00d84eec(lVar5 + 0x58);
  (**(code **)(*plVar7 + 0x38))(plVar7,PTR_s_Buff_Miho_TalentA_Marker_02bee3b0);
  plVar7 = (long *)FUN_00d84eec(lVar4 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,PTR_s_Buff_Miho_C_ApplyDamage_02bf19d0);
  local_58[0] = 0x3f800000;
  local_50 = 1;
  (**(code **)(*plVar7 + 0x18))(plVar7,local_58);
  uVar2 = FUN_00d850b4(lVar8);
  FUN_00d84048(uVar2,param_1,1);
  lVar4 = FUN_00d840ec();
  lVar4 = FUN_00d86924(lVar4 + 0x10);
  lVar5 = FUN_00d86dc0(lVar4 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Miho_Talent_TalentB_02bee390;
  plVar7 = (long *)FUN_00d84eec(lVar4 + 0x58);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,PTR_s_Buff_Miho_TalentB_Heal_02bee3b8);
  local_58[0] = 0x3f800000;
  local_50 = 1;
  (**(code **)(*plVar7 + 0x18))(plVar7,local_58);
  lVar8 = FUN_00d851a4(lVar8);
  FUN_00d84e9c(lVar8 + 0x10);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d96328(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  *param_2 = "Effect_Ishtar_BasicAttack";
  param_2[4] = "Effect_Ishtar_BasicAttack_Impact";
  param_2[0xd] = "Sound_Ishtar_Default_Impact_02";
  param_2[0xc] = "Sound_Ishtar_Default_Impact_01";
  param_2[0xe] = "Sound_Ishtar_Default_Impact_03";
  lVar1 = FUN_00d09310();
  uVar3 = FUN_00d0a5a4(*(undefined4 *)(lVar1 + 0x668));
  *(undefined4 *)(param_2 + 0x15) = uVar3;
  lVar1 = param_1 + 0x120;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41a00000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  plVar2 = (long *)FUN_00d84e4c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d963f4(undefined8 param_1,undefined8 *param_2)

{
  FUN_00d96328(param_1,param_2,0);
  *param_2 = "Effect_Ishtar_BasicAttack_Alt";
  param_2[4] = "Effect_Ishtar_BasicAttack_Impact";
  return;
}




void FUN_00d96430(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  FUN_00d96328(param_1,param_2,2);
  *param_2 = "Effect_Ishtar_BasicAttack_Crit";
  param_2[4] = "Effect_Ishtar_BasicAttack_Impact";
  param_2[0xd] = "Sound_Ishtar_Crit_Attack_02";
  param_2[0xc] = "Sound_Ishtar_Crit_Attack_01";
  param_2[0xe] = "Sound_Ishtar_Crit_Attack_03";
  lVar1 = FUN_00d09310();
  uVar2 = FUN_00d0a5a4(*(undefined4 *)(lVar1 + 0x670));
  *(undefined4 *)(param_2 + 0x15) = uVar2;
  return;
}




void FUN_00d964a4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  *param_2 = "Effect_Ishtar_BasicAttack_Empowered";
  param_2[4] = "Effect_Ishtar_BasicAttack_Impact";
  param_2[0xd] = "Sound_Ishtar_Empowered_Impact_02";
  param_2[0xc] = "Sound_Ishtar_Empowered_Impact_01";
  param_2[0xe] = "Sound_Ishtar_Empowered_Impact_03";
  lVar1 = FUN_00d09310();
  uVar3 = FUN_00d0a5a4(*(undefined4 *)(lVar1 + 0x678));
  *(undefined4 *)(param_2 + 0x15) = uVar3;
  lVar1 = param_1 + 0x120;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41a00000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  plVar2 = (long *)FUN_00d84e4c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",2);
  (**(code **)(*plVar2 + 0x70))(plVar2,1);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d9657c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d817bc();
  *(char **)(param_2 + 0x20) = "Effect_Ishtar_BasicAttack_Impact";
  *(char **)(param_2 + 0x68) = "Sound_Ishtar_AbilityA_Impact_02";
  *(char **)(param_2 + 0x60) = "Sound_Ishtar_AbilityA_Impact_01";
  *(char **)(param_2 + 0x70) = "Sound_Ishtar_AbilityA_Impact_03";
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d0a5a4(*(undefined4 *)(lVar2 + 0x688));
  *(undefined4 *)(param_2 + 0xa8) = uVar5;
  uVar3 = FUN_00d80f68(param_1);
  FUN_00d80ec4(0x3fc00000,param_1);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_02820430;
  *(undefined8 *)(param_1 + 0x128) = 0;
  uVar5 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x130) = uVar5;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  FUN_00e5e120(param_1 + 0x120,param_1,uVar3);
  uVar3 = FUN_00d850b4(param_1 + 0x100);
  lVar2 = FUN_00d84048(uVar3,param_1,0x40000);
  plVar4 = (long *)FUN_00d84eec(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_Ishtar_Minion_A_DashDamage_02bf1a38);
  local_48[0] = 0x3f000000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d966bc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Ishtar_Minion_BasicAttack";
  param_2[4] = "Effect_Ishtar_Minion_BasicAttack_Impact";
  param_2[0xd] = "build://Sounds/Ishtar/SFX/Default/ishtar_blade_basic_attack_2.mp3";
  param_2[0xc] = "build://Sounds/Ishtar/SFX/Default/ishtar_blade_basic_attack_1.mp3";
  param_2[0xe] = "build://Sounds/Ishtar/SFX/Default/ishtar_blade_basic_attack_3.mp3";
  lVar2 = FUN_00d09310();
  uVar4 = FUN_00d0a5a4(*(undefined4 *)(lVar2 + 0x680));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  FUN_00d80ec4(0x3e99999a,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x420c0000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  plVar3 = (long *)FUN_00d84eec(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_Ishtar_Minion_BasicAttackDa_02bf1a28);
  local_48[0] = 0x3e4ccccd;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  lVar2 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d96800(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  *param_2 = "Effect_Viola_BasicAttack";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xff00;
  param_2[4] = "Effect_Viola_BasicAttack_Impact";
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  param_2[0xd] = "Sound_Viola_Basic_Attack_Impact_02";
  param_2[0xc] = "Sound_Viola_Basic_Attack_Impact_01";
  param_2[0xe] = "Sound_Viola_Basic_Attack_Impact_03";
  lVar1 = FUN_00d09310();
  uVar3 = FUN_00d0a5f8(*(undefined4 *)(lVar1 + 0x6a8));
  *(undefined4 *)(param_2 + 0x15) = uVar3;
  lVar1 = param_1 + 0x120;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41a00000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  plVar2 = (long *)FUN_00d84e4c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d968d8(undefined8 param_1,undefined8 param_2)

{
  FUN_00d96800(param_1,param_2,0);
  return;
}




void FUN_00d968e0(undefined8 param_1,undefined8 param_2)

{
  FUN_00d96800(param_1,param_2,2);
  return;
}




void FUN_00d968e8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d80f68();
  *(undefined2 *)((long)param_2 + 0xa4) = 0;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  *param_2 = "Effect_Viola_A_Shot";
  param_2[4] = "Effect_Viola_A_Impact";
  param_2[0xc] = "Sound_Viola_A_Impact";
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d0a5f8(*(undefined4 *)(lVar2 + 0x6b8));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  FUN_00d80ec4(0x3f333333,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5fc3c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5fe1c(0x41c00000,lVar2,param_1,0);
  uVar3 = FUN_00d850b4(param_1 + 0x100);
  FUN_00d84048(uVar3,param_1,1);
  lVar2 = FUN_00d840ec();
  plVar4 = (long *)FUN_00d84eec(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Viola_A_Shield_02bf1b78);
  local_48 = FUN_00d96a1c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  lVar2 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d96a1c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00d96a30(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d80f68();
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  *param_2 = "Effect_Viola_B_Shot";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xff;
  param_2[4] = "Effect_Viola_B_Impact";
  param_2[0xc] = "Sound_Viola_B_Impact";
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d0a5f8(*(undefined4 *)(lVar2 + 0x6c0));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  FUN_00d80ec4(0x3f333333,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5fc3c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5fe1c(0x41c00000,lVar2,param_1,1);
  uVar3 = FUN_00d850b4(param_1 + 0x100);
  lVar2 = FUN_00d84048(uVar3,param_1,0x40000);
  lVar2 = lVar2 + 0x10;
  plVar4 = (long *)FUN_00d84e4c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",1);
  plVar4 = (long *)FUN_00d84eec(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Viola_B_Slow_02bf1b80);
  local_48 = FUN_00d96b9c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  FUN_00d84e9c(lVar2);
  lVar2 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d96b9c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00d96bb0(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  FUN_00d817bc();
  uVar2 = FUN_00d80f68(param_1);
  FUN_00d80ec4(0x3f800000,param_1);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_02820430;
  *(undefined8 *)(param_1 + 0x128) = 0;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  FUN_00e5e120(param_1 + 0x120,param_1,uVar2);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar4 = (long *)FUN_00d84e4c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",1);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  FUN_00d82cf0();
  return;
}




void FUN_00d96c78(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_78 [2];
  undefined4 local_70;
  code *local_68;
  undefined4 local_60;
  code *local_58;
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d817bc();
  *(char **)(param_2 + 0x20) = "Effect_Amael_Ability01_Impact";
  uVar3 = FUN_00d80f68(param_1);
  FUN_00d80b90(param_1,uVar3,0);
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
  lVar4 = FUN_00d84048(uVar3,param_1,0x200000);
  plVar5 = (long *)FUN_00d84e4c(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"DAMAGE",0);
  plVar5 = (long *)FUN_00d8c2e0(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  local_48[0] = 0x42700000;
  local_40 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,local_48);
  local_58 = FUN_00d96e14;
  local_50 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,&local_58);
  local_68 = FUN_00d96e28;
  local_60 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x28))(plVar5,&local_68);
  local_78[0] = 0x41200000;
  local_70 = 1;
  (**(code **)(*plVar5 + 0x30))(plVar5,local_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d96e14(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,0xb,0x19,0);
  return;
}




void FUN_00d96e28(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,9,0x19,0);
  return;
}




void FUN_00d96e3c(long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00d80f68();
  *param_2 = "Effect_Karas_BasicAttack";
  param_2[4] = "Effect_Karas_BasicAttack_Impact";
  param_2[0xd] = "Sound_Karas_Attack_Impact_2";
  param_2[0xc] = "Sound_Karas_Attack_Impact_1";
  lVar2 = FUN_00d09310();
  uVar4 = FUN_00d0a64c(*(undefined4 *)(lVar2 + 0x6e4));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined1 *)(param_2 + 0x16) = 1;
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  thunk_FUN_00d086f0(uVar1,0,1);
  FUN_00e5ffd8(lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  plVar3 = (long *)FUN_00d84e4c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  FUN_00d84e9c(lVar2 + 0x10);
  return;
}




void FUN_00d96f18(long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00d80f68();
  *param_2 = "Effect_Karas_AltAttack";
  param_2[4] = "Effect_Karas_BasicAttack_Impact";
  param_2[0xd] = "Sound_Karas_Attack_Impact_2";
  param_2[0xc] = "Sound_Karas_Attack_Impact_1";
  lVar2 = FUN_00d09310();
  uVar4 = FUN_00d0a64c(*(undefined4 *)(lVar2 + 0x6e4));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined1 *)(param_2 + 0x16) = 1;
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  thunk_FUN_00d086f0(uVar1,0,1);
  FUN_00e5ffd8(lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  plVar3 = (long *)FUN_00d84e4c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  FUN_00d84e9c(lVar2 + 0x10);
  return;
}




void FUN_00d96ff4(long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00d80f68();
  *param_2 = "Effect_Karas_CritAttack";
  param_2[4] = "Effect_Karas_BasicAttack_Impact";
  param_2[0xd] = "Sound_Karas_Attack_Impact_2";
  param_2[0xc] = "Sound_Karas_Attack_Impact_1";
  lVar2 = FUN_00d09310();
  uVar4 = FUN_00d0a64c(*(undefined4 *)(lVar2 + 0x6e4));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined1 *)(param_2 + 0x16) = 1;
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  thunk_FUN_00d086f0(uVar1,0,1);
  FUN_00e5ffd8(lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  plVar3 = (long *)FUN_00d84e4c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  FUN_00d84e9c(lVar2 + 0x10);
  return;
}

