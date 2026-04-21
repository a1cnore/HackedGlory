// functions/00e5c — 30 functions
#include "libGameKindred.h"




void FUN_00e5c07c(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,1);
  return;
}




void FUN_00e5c088(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d634b4();
  lVar2 = FUN_00d4a9f0();
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Karas_PerkApply_02bf1c00);
  local_38 = FUN_00e5c110;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5c110(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,1);
  return;
}




void FUN_00e5c11c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d6592c();
  uVar3 = FUN_00d29f44(lVar2 + 0x10);
  local_38 = FUN_00e5c1a4;
  local_30 = 3;
  FUN_00d47690(uVar3,1,&local_38);
  FUN_00d476e8();
  FUN_00d476f4();
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5c1a4(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,2,1);
  return;
}




void FUN_00e5c1b0(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  FUN_00d39534(lVar1 + 0x10);
  plVar2 = (long *)FUN_00d2b818(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00e5c1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",1);
  return;
}




void FUN_00e5c200(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d65010();
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_00d45f10(lVar1);
  FUN_00d9886c(uVar2,PTR_s_Ability__Karas__A_02bf00b0,PTR_s_Ability__Karas__A_Cancel_02bf00c8);
  uVar2 = FUN_00d3a390(lVar1);
  FUN_00d48198(uVar2,FUN_00d483cc);
  FUN_00e37900(lVar1);
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStart","Ability03_MoveStart");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Idle","Ability03_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleSheath","Ability03_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleCombat","Ability03_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleBrush","Ability03_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStop","Ability03_MoveStop");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Move","Ability03_Move");
  plVar3 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Sprint","Ability03_Move");
  plVar3 = (long *)FUN_00d44e48(lVar1);
  (**(code **)(*plVar3 + 0x38))(plVar3,"Ability03_Idle");
  FUN_00e30f38(lVar1);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e5c3b0(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e5c40c;
  local_30 = 3;
  FUN_00d42c70(param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5c40c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00e5c420(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e5c47c;
  local_30 = 3;
  FUN_00d42c70(param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5c47c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,5,0x19,0);
  return;
}




void FUN_00e5c490(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d66d04(param_1,0x80,1);
  lVar3 = FUN_00d65a7c(param_1);
  plVar4 = (long *)FUN_00d39930(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  local_48[0] = 0;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  lVar3 = FUN_00d65fac(param_1);
  plVar4 = (long *)FUN_00d39930(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  local_48[0] = 0;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d3bc68(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x38))();
  lVar3 = FUN_00d660fc(param_1);
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar5 = FUN_00d2a370(lVar3 + 0x10);
  puVar2 = PTR_s_Buff_Shin_SetFlameMeter_02bf1c28;
  *(undefined4 *)(lVar5 + 0x10) = 4;
  *(undefined **)(lVar5 + 8) = puVar2;
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x88);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Shin_ActivateFlames_02bf1c30);
  plVar4 = (long *)FUN_00d2a160(lVar3 + 0xa0);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Shin_ActivateFlames_02bf1c30);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5c5d4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_00d634b4();
  lVar2 = FUN_00d4aa10(uVar1,PTR_s_Ability__Shin__A_02bf0130);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Shin_SetFlameMeter_02bf1c28);
  uVar1 = FUN_00d634b4(param_1);
  lVar2 = FUN_00d4aa10(uVar1,PTR_s_Ability__Shin__B_02bf0140);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Shin_SetFlameMeter_02bf1c28);
  uVar1 = FUN_00d634b4(param_1);
  lVar2 = FUN_00d4aa10(uVar1,PTR_s_Ability__Shin__C_02bf0150);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e5c678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Shin_SetFlameMeter_02bf1c28);
  return;
}




void FUN_00e5c67c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48 = FUN_00e5c8c0;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x12,1,&local_48);
  uVar4 = FUN_00d45f10(lVar2);
  FUN_00d9886c(uVar4,PTR_s_Ability__Shin__A_02bf0130,PTR_s_Ability__Shin__A1_02bf0138);
  uVar4 = FUN_00d45f10(lVar2);
  FUN_00d9886c(uVar4,PTR_s_Ability__Shin__B_02bf0140,PTR_s_Ability__Shin__B1_02bf0148);
  uVar4 = FUN_00d45f10(lVar2);
  FUN_00d9886c(uVar4,PTR_s_Ability__Shin__C_02bf0150,PTR_s_Ability__Shin__C2_02bf0160);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_UpperShoulder_R");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Shin_UpperShoulder_R");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_UpperShoulder_L");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Shin_UpperShoulder_L");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Leg_R");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Shin_Leg_R");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Leg_L");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Shin_Leg_L");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5c8c0(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00e5c8cc(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e5c928;
  local_30 = 3;
  FUN_00d42c70(param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5c928(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00e5c93c(undefined8 param_1)

{
  FUN_00d42ce8(param_1,0x23,"Effect_Shin_B2_Root",0);
  return;
}




void FUN_00e5c950(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Weapon_Head");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Shin_Weapon_Head");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Wheel_R");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Shin_Wheel_R");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Wheel_L");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Shin_Wheel_L");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e5caa0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d67b78(param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,0,0,1,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4db48(0x40000000,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5cb50(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d67b78(param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,1,1,1,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4db48(0x40400000,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5cc00(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d67b78(param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,1,1,1,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4db48(0x3f800000,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5ccb0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d67b78(param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,0,1,0,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4db48(0x40000000,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5cd60(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d67b78(param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,0,1,0,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4db48(0x3f800000,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5ce10(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e5ce6c;
  local_30 = 3;
  FUN_00d42c70(param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5ce6c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,7,0x19,0);
  return;
}




void FUN_00e5ce80(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Rona_Whirlwind_Impact_Enemy");
                    /* WARNING: Could not recover jumptable at 0x00e5cecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_00e5ced0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2a160(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x48))();
  plVar2 = (long *)FUN_00d2a160(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x50))();
  lVar1 = FUN_00d65010(param_1);
  lVar1 = lVar1 + 0x10;
  uVar3 = FUN_00d29c84(lVar1);
  FUN_00d46b64(uVar3,0x1500);
  plVar2 = (long *)FUN_00d2887c(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Invulnerable_02beb400);
  uVar3 = FUN_00d45f10(lVar1);
  FUN_00d9886c(uVar3,PTR_s_Ability__Maaya__C_02bf0190,PTR_s_Ability__Maaya__C1_02bf0198);
  return;
}




void FUN_00e5cf78(void)

{
  return;
}




void FUN_00e5cf7c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  thunk_FUN_00d086f0(uVar2,0,1);
  FUN_00d67d04(param_1);
  uVar2 = FUN_00d64d7c(param_1);
  lVar3 = FUN_00d4891c(0x3e4ccccd,uVar2,1);
  uVar2 = FUN_00d31490(lVar3 + 0x10);
  FUN_00d9ca38(uVar2,FUN_00e5ccb0);
  plVar4 = (long *)FUN_00d2b818(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE_PER_SEC",0);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"CenterBody");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Hero000_Ring_A_1mr");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_58[0] = 0x3f800000;
  local_50 = 1;
  (**(code **)(*plVar4 + 0xd0))(plVar4,local_58);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"CenterBody");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Hero000_Ring_A_2mr");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_58[0] = 0x3f800000;
  local_50 = 1;
  (**(code **)(*plVar4 + 0xd0))(plVar4,local_58);
  lVar3 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_DelayedKill_02beb3e0);
  local_58[0] = 0x3e99999a;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

