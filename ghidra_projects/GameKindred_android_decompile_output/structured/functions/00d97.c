// functions/00d97 — 31 functions
#include "libGameKindred.h"




void FUN_00d970d0(undefined8 param_1,undefined8 param_2)

{
  FUN_00d96e3c(param_1,param_2,0);
  return;
}




void FUN_00d970d8(undefined8 param_1,undefined8 param_2)

{
  FUN_00d96f18(param_1,param_2,0);
  return;
}




void FUN_00d970e0(undefined8 param_1,undefined8 param_2)

{
  FUN_00d96ff4(param_1,param_2,2);
  return;
}




void FUN_00d970e8(void)

{
  return;
}




void FUN_00d970ec(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_Karas_A_Shot";
  param_2[4] = "Effect_Karas_A_Impact";
  param_2[0xd] = "Sound_Karas_Ability_A_Impact";
  param_2[0xc] = "Sound_Karas_Ability_A_Cast";
  lVar3 = FUN_00d09310();
  uVar7 = FUN_00d0a64c(*(undefined4 *)(lVar3 + 0x6f4));
  *(undefined4 *)(param_2 + 0x15) = uVar7;
  FUN_00d80ec4(0x3f800000,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  uVar4 = FUN_00e5fe74(lVar3);
  FUN_00d59f54(uVar2,0,2,0x19,0);
  FUN_00e5fe1c(uVar4,param_1,0);
  lVar3 = param_1 + 0x100;
  uVar2 = FUN_00d850b4(lVar3);
  lVar5 = FUN_00d84048(uVar2,param_1,1);
  plVar6 = (long *)FUN_00d84eec(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Karas_A_Slow_02bf1c18);
  local_48 = FUN_00d97288;
  local_40 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_48);
  uVar2 = FUN_00d850b4(lVar3);
  lVar5 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar6 = (long *)FUN_00d84e4c(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
  (**(code **)(*plVar6 + 0x38))(plVar6,"Damage",0);
  lVar3 = FUN_00d851a4(lVar3);
  FUN_00d84e9c(lVar3 + 0x10);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d97288(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,5,0x19,0);
  return;
}




void FUN_00d9729c(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  FUN_00d817bc();
  uVar2 = FUN_00d80f68(param_1);
  FUN_00d80ec4(0x3fcccccd,param_1);
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
                    /* WARNING: Could not recover jumptable at 0x00d9734c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",1);
  return;
}




void FUN_00d97350(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_00d80f68();
  *param_2 = "Effect_Karas_C_Shot";
  param_2[4] = "Effect_Karas_C_Impact";
  param_2[0xe] = "Sound_Karas_Ability_C_Impact3";
  param_2[0xd] = "Sound_Karas_Ability_C_Impact2";
  param_2[0xc] = "Sound_Karas_Ability_C_Impact1";
  lVar2 = param_1 + 0x120;
  FUN_00e5fc3c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00d59f54(uVar1,2,3,0x19,0);
  FUN_00e5fe1c(lVar2,param_1,2);
  uVar1 = FUN_00d850b4(param_1 + 0x100);
  lVar2 = FUN_00d84048(uVar1,param_1,0x40000);
  plVar3 = (long *)FUN_00d84e4c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Damage",2);
  FUN_00d84e9c(lVar2 + 0x10);
  lVar2 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  return;
}




void FUN_00d97458(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  
  uVar1 = FUN_00d80f68();
  *param_2 = "Effect_Karas_C_Perk_Shot";
  param_2[4] = "Effect_Karas_C_Perk_Impact";
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d0a64c(*(undefined4 *)(lVar2 + 0x6e4));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  lVar2 = param_1 + 0x120;
  FUN_00e5fc3c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00d59f54(uVar1,2,3,0x19,0);
  FUN_00e5fe1c(lVar2,param_1,2);
  uVar3 = FUN_00d850b4(param_1 + 0x100);
  lVar2 = FUN_00d84048(uVar3,param_1,0x40000);
  plVar4 = (long *)FUN_00d84e4c(lVar2 + 0x10);
  uVar5 = FUN_00d59f54(uVar1,2,2,0x19,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(uVar5,0x3f266666,0xbf800000,plVar4,0x40000,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"BlurPerkAoEDmg",2);
  FUN_00d84e9c(lVar2 + 0x10);
  lVar2 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  return;
}




void FUN_00d97588(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Shin_B1_Shot";
  param_2[4] = "Effect_Shin_B1_Impact";
  param_2[0xc] = "Sound_Shin_Ability_B_Impact";
  lVar2 = FUN_00d09310();
  uVar4 = FUN_00d0a6a0(*(undefined4 *)(lVar2 + 0x734));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  FUN_00d80ec4(0x3f800000,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41700000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d84e4c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x30))(plVar3,1);
  plVar3 = (long *)FUN_00d84eec(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Shin_B_Slow_02bf1c40);
  local_48 = FUN_00d976b0;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d976b0(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00d976c4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Shin_B2_Shot";
  param_2[4] = "Effect_Shin_B2_Impact";
  param_2[0xc] = "Sound_Shin_Ability_B1_Impact";
  lVar2 = FUN_00d09310();
  uVar4 = FUN_00d0a6a0(*(undefined4 *)(lVar2 + 0x73c));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  FUN_00d80ec4(0x3f800000,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41700000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d84e4c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x30))(plVar3,4);
  plVar3 = (long *)FUN_00d84eec(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Shin_B_Root_02bf1c48);
  local_48 = FUN_00d977ec;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d977ec(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,3,0x19,0);
  return;
}




void FUN_00d97800(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d80f68();
  *param_2 = "Effect_Maaya_BasicAttack";
  param_2[4] = "Effect_Maaya_BasicAttack_Impact";
  *(undefined1 *)(param_2 + 0x16) = 1;
  lVar1 = param_1 + 0x120;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41f00000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  plVar2 = (long *)FUN_00d84e4c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d978a0(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d80f68();
  *param_2 = "Effect_Maaya_AltAttack";
  param_2[4] = "Effect_Maaya_BasicAttack_Impact";
  *(undefined1 *)(param_2 + 0x16) = 1;
  lVar1 = param_1 + 0x120;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41f00000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  plVar2 = (long *)FUN_00d84e4c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d97940(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d80f68();
  *param_2 = "Effect_Maaya_CritAttack";
  param_2[4] = "Effect_Maaya_BasicAttack_Impact";
  *(undefined1 *)(param_2 + 0x16) = 1;
  lVar1 = param_1 + 0x120;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41f00000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  plVar2 = (long *)FUN_00d84e4c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d979e0(undefined8 param_1,undefined8 param_2)

{
  FUN_00d97800(param_1,param_2,0);
  return;
}




void FUN_00d979e8(undefined8 param_1,undefined8 param_2)

{
  FUN_00d978a0(param_1,param_2,0);
  return;
}




void FUN_00d979f0(undefined8 param_1,undefined8 param_2)

{
  FUN_00d97940(param_1,param_2,2);
  return;
}




void FUN_00d979f8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d817bc();
  uVar2 = FUN_00d80f68(param_1);
  *(char **)(param_2 + 0x30) = "Effect_Baptiste_Ultimate_GroundFX";
  FUN_00d80ec4(0x3fa66666,param_1);
  lVar4 = param_1 + 0x120;
  FUN_00e5fc3c(lVar4);
  *(long *)(param_1 + 0x118) = lVar4;
  uVar3 = FUN_00e5fe74(lVar4);
  FUN_00d59f54(uVar2,0,6,0x19,0);
  FUN_00e5fe1c(uVar3,param_1,0);
  FUN_00d80c00(param_1,auStack_58);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar4 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar5 = (long *)FUN_00d84eec(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Maaya_A_Debuff_02bf1c58);
  local_48 = FUN_00d97b34;
  local_40 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  lVar4 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar4 + 0x10);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d97b34(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00d97b48(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00d80f68();
  *param_2 = "Effect_Maaya_BasicAttack";
  param_2[4] = "Effect_Lorelai_B_Proj_Hit";
  *(undefined2 *)((long)param_2 + 0xa4) = 0x6400;
  *(undefined1 *)((long)param_2 + 0xa6) = 200;
  FUN_00d80ec4(0x3f000000,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5e52c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00d59f54(uVar1,0,6,0x19,0);
  uVar1 = FUN_00e5e560(lVar2,param_1);
  FUN_00e5e74c(0x3ee66666,0,0x3ee66666,uVar1,param_1);
  lVar2 = FUN_00d85f00(param_1 + 0x100);
  uVar1 = FUN_00d89c00(lVar2 + 0x10);
  FUN_00d836e8(uVar1,"*Maaya_GravityBall*",1);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  return;
}




void FUN_00d97c24(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00d80f68();
  *param_2 = "Effect_Maaya_BasicAttack";
  param_2[4] = "Effect_Lorelai_B_Proj_Hit";
  *(undefined2 *)((long)param_2 + 0xa4) = 0x6400;
  *(undefined1 *)((long)param_2 + 0xa6) = 200;
  FUN_00d80ec4(0x3f000000,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5e52c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00d59f54(uVar1,1,2,0x19,0);
  uVar1 = FUN_00e5e560(lVar2,param_1);
  FUN_00e5e74c(0x3f800000,0,0x3ee66666,uVar1,param_1);
  lVar2 = FUN_00d85f00(param_1 + 0x100);
  uVar1 = FUN_00d89c00(lVar2 + 0x10);
  FUN_00d836e8(uVar1,"*Maaya_GravityDisc*",1);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  return;
}




void FUN_00d97d00(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_0281f018;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}




void FUN_00d97d24(long param_1,byte *param_2,undefined8 *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar3 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar3) * 0x1000193;
        uVar3 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}




void FUN_00d97d7c(long param_1,undefined4 *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}




void FUN_00d97d9c(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_00d66d28(*param_2);
  lVar3 = FUN_00d9f258(uVar2,param_1 + 0x20);
  if (lVar3 != 0) {
    uVar2 = FUN_00d66d28(*param_2);
    uVar4 = FUN_00a83478(param_1 + 0x10,param_2,uVar2);
    iVar1 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    if (iVar1 == 2) {
      FUN_00d6e2f8(lVar3);
      return;
    }
    if (iVar1 == 1) {
      FUN_00d6e2e8(lVar3);
      return;
    }
    if (iVar1 == 0) {
      FUN_00d6e2d8(lVar3);
      return;
    }
  }
  return;
}




void FUN_00d97e54(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00d66d28(*param_2);
  lVar3 = FUN_00d9f258(uVar2,param_1 + 0x20);
  if (lVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 2) {
      FUN_00d6e300();
    }
    else if (iVar1 == 1) {
      FUN_00d6e2e8(1.0 / *(float *)(param_1 + 0x24));
    }
    else if (iVar1 == 0) {
      FUN_00d6e2d8(-*(float *)(param_1 + 0x24));
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}




void FUN_00d97ecc(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = FUN_00d66d28(*param_2);
  lVar3 = FUN_00d9f258(uVar2,param_1 + 0x20);
  if (lVar3 != 0) {
    fVar5 = *(float *)(param_1 + 0x24);
    uVar2 = FUN_00d66d28(*param_2);
    fVar4 = (float)FUN_00a83478(param_1 + 0x10,param_2,uVar2);
    iVar1 = *(int *)(param_1 + 0x28);
    *(float *)(param_1 + 0x24) = fVar4;
    if (iVar1 == 2) {
      FUN_00d6e300(lVar3);
      FUN_00d6e2f8(*(undefined4 *)(param_1 + 0x24),lVar3);
      return;
    }
    if (iVar1 == 1) {
      FUN_00d6e2e8(fVar4 / fVar5,lVar3);
      return;
    }
    if (iVar1 == 0) {
      FUN_00d6e2d8(fVar4 - fVar5,lVar3);
      return;
    }
  }
  return;
}




void FUN_00d97fb0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_0281f058;
  param_1[1] = 0;
  param_1[4] = 0;
  return;
}




void FUN_00d97fd0(long param_1,byte *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  *(uint *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x10) = *param_3;
  return;
}

