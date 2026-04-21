// functions/00d8b — 33 functions
#include "libGameKindred.h"




void FUN_00d8b040(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = FUN_00d80ee4();
  lVar2 = *(long *)(*(long *)(param_2 + 0x28) + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1b0) + 1.0) *
          (*(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0));
  if (DAT_031aaac0 <= fVar3) {
    fVar3 = DAT_031aaac0;
  }
  fVar4 = DAT_031aaa00;
  if (DAT_031aaa00 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = (float)FUN_00d5a3d0(uVar1,DAT_031ac018,0,9);
  *(undefined4 *)(param_2 + 8) = 0;
  *(float *)(param_2 + 0x30) = fVar3 * fVar4;
  *(undefined2 *)(param_2 + 0xc) = 8;
  return;
}




void FUN_00d8b0ec(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_00d817bc();
  uVar2 = FUN_00d80f68(param_1);
  FUN_00d5a3d0(uVar2,DAT_031ac018,1,9);
  FUN_00d80ec4(param_1);
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
  uVar2 = FUN_00d8611c(lVar3 + 0x10);
  FUN_00d829f8(uVar2,FUN_00d8b040);
  return;
}




void FUN_00d8b198(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_00d80f68();
  *param_2 = "Effect_Lyra_AA";
  param_2[4] = "Effect_Lyra_AA_Impact";
  param_2[0xc] = "Sound_Lyra_Attack_Light_Impact";
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8((*(float *)(*(long *)(lVar1 + 0x40) + 0x128) + 1.0) * 9.0,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  plVar3 = (long *)FUN_00d84e4c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  FUN_00d84e9c(lVar2 + 0x10);
  return;
}




void FUN_00d8b254(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8b198(param_1,param_2,0);
  return;
}




void FUN_00d8b25c(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8b198(param_1,param_2,2);
  return;
}




void FUN_00d8b264(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d80f68();
  uVar3 = FUN_00d44008(*(undefined4 *)(lVar2 + 0x260),PTR_s_Buff_Lyra_Talent_TwinMissiles_02bee040);
  *param_2 = "Effect_Lyra_AA_Heavy";
  param_2[4] = "Effect_Lyra_AA_Heavy_Impact";
  param_2[0xc] = "Sound_Lyra_Attack_Heavy_Impact";
  lVar2 = param_1 + 0x120;
  if ((uVar3 & 1) == 0) {
    FUN_00e5ff9c(lVar2);
    *(long *)(param_1 + 0x118) = lVar2;
    FUN_00e5ffd8(0x41a80000,lVar2);
  }
  else {
    FUN_00e5e52c(lVar2);
    *(long *)(param_1 + 0x118) = lVar2;
    uVar4 = FUN_00e5e5a0(0x41900000,lVar2,param_1);
    fVar6 = (float)FUN_00d813c0(param_1);
    FUN_00e5e74c(0x3e19999a,fVar6 * 0.8,0x3e4ccccd,uVar4,param_1);
  }
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar5 = (long *)FUN_00d84e4c(lVar2);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5,"HEAVY_ATTACK_DAMAGE");
  (**(code **)(*plVar5 + 0x70))(plVar5,param_3);
  if ((uVar3 & 1) == 0) {
    plVar5 = (long *)FUN_00d84eec(lVar2);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Lyra_HeavyAttackSlow_02bf0bb0);
    local_58 = FUN_00d8b408;
    local_50 = 3;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  }
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8b408(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,1);
  return;
}




void FUN_00d8b414(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8b264(param_1,param_2,0);
  return;
}




void FUN_00d8b41c(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8b264(param_1,param_2,2);
  return;
}




void FUN_00d8b424(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x120;
  param_2[1] = "Effect_Lyra_A_Proj_E";
  *param_2 = "Effect_Lyra_A_Proj_A";
  FUN_00e5e52c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  uVar1 = FUN_00e5e5a0(0x41a00000,lVar2,param_1);
  FUN_00e5e74c(0x3f733333,0,0x3e6147ae,uVar1,param_1);
  lVar2 = FUN_00d85f00(param_1 + 0x100);
  uVar1 = FUN_00d89c00(lVar2 + 0x10);
  FUN_00d836e8(uVar1,"*Lyra_SpiritFlame*",0);
  FUN_00d84e9c(lVar2 + 0x10);
  return;
}




void FUN_00d8b4c0(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  *param_2 = "Effect_Malene_DefaultAttack";
  param_2[4] = "Effect_Malene_Proj_Hit";
  param_2[0xd] = "Sound_Malene_Good_Auto_Impact_2";
  param_2[0xc] = "Sound_Malene_Good_Auto_Impact_1";
  param_2[0xe] = "Sound_Malene_Good_Auto_Impact_3";
  lVar1 = FUN_00d09310();
  uVar3 = FUN_00d0a0b8(*(undefined4 *)(lVar1 + 0x488));
  *(undefined2 *)((long)param_2 + 0xa4) = 0x3219;
  *(undefined4 *)(param_2 + 0x15) = uVar3;
  *(undefined1 *)((long)param_2 + 0xa6) = 0x4b;
  FUN_00d80ec4(0x3e19999a,param_1);
  lVar1 = param_1 + 0x120;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41600000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  plVar2 = (long *)FUN_00d84e4c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d8b5ac(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8b4c0(param_1,param_2,0);
  return;
}




void FUN_00d8b5b4(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8b4c0(param_1,param_2,0);
  return;
}




void FUN_00d8b5bc(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8b4c0(param_1,param_2,2);
  return;
}




void FUN_00d8b5c4(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  *param_2 = "Effect_Malene_DarkAttack";
  param_2[4] = "Effect_Malene_DarkHit";
  param_2[0xd] = "Sound_Malene_Evil_Auto_Impact_2";
  param_2[0xc] = "Sound_Malene_Evil_Auto_Impact_1";
  param_2[0xe] = "Sound_Malene_Evil_Auto_Impact_3";
  lVar1 = FUN_00d09310();
  uVar3 = FUN_00d0a0b8(*(undefined4 *)(lVar1 + 0x48c));
  *(undefined2 *)((long)param_2 + 0xa4) = 0x199a;
  *(undefined4 *)(param_2 + 0x15) = uVar3;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xe6;
  FUN_00d80ec4(0x3e19999a,param_1);
  lVar1 = param_1 + 0x120;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41600000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  plVar2 = (long *)FUN_00d84e4c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d8b6b0(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8b5c4(param_1,param_2,0);
  return;
}




void FUN_00d8b6b8(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8b5c4(param_1,param_2,0);
  return;
}




void FUN_00d8b6c0(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8b5c4(param_1,param_2,2);
  return;
}




void FUN_00d8b6c8(long param_1,undefined8 *param_2)

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
  *param_2 = "Effect_Malene_LightEmpoweredAttack";
  param_2[4] = "Effect_Malene_LightEmpHit";
  param_2[0xc] = "Sound_Malene_Good_Empowered_Impact";
  lVar2 = FUN_00d09310();
  uVar4 = FUN_00d0a0b8(*(undefined4 *)(lVar2 + 0x490));
  *(undefined2 *)((long)param_2 + 0xa4) = 0x3219;
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined1 *)((long)param_2 + 0xa6) = 0x4b;
  FUN_00d80ec4(0x3e99999a,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41a00000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d84e4c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"LIGHT_EMP_DAMAGE",5);
  (**(code **)(*plVar3 + 0x70))(plVar3,1);
  plVar3 = (long *)FUN_00d84eec(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Malene_LightEmpAutoSlow_02bf0c68)
  ;
  local_48 = FUN_00d8b81c;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8b81c(undefined8 param_1)

{
  FUN_00d59f54(param_1,5,4,0x19,0);
  return;
}




void thunk_FUN_00d8b6c8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  code *pcStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Malene_LightEmpoweredAttack";
  param_2[4] = "Effect_Malene_LightEmpHit";
  param_2[0xc] = "Sound_Malene_Good_Empowered_Impact";
  lVar2 = FUN_00d09310();
  uVar4 = FUN_00d0a0b8(*(undefined4 *)(lVar2 + 0x490));
  *(undefined2 *)((long)param_2 + 0xa4) = 0x3219;
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined1 *)((long)param_2 + 0xa6) = 0x4b;
  FUN_00d80ec4(0x3e99999a,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41a00000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d84e4c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"LIGHT_EMP_DAMAGE",5);
  (**(code **)(*plVar3 + 0x70))(plVar3,1);
  plVar3 = (long *)FUN_00d84eec(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Malene_LightEmpAutoSlow_02bf0c68)
  ;
  pcStack_48 = FUN_00d8b81c;
  uStack_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&pcStack_48);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8b834(long param_1,undefined8 *param_2,undefined4 param_3)

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
  *param_2 = "Effect_Malene_DarkEmpoweredAttack";
  param_2[4] = "Effect_Malene_DarkEmpHit";
  param_2[0xc] = "Sound_Malene_Evil_Empowered_Impact";
  lVar2 = FUN_00d09310();
  uVar4 = FUN_00d0a0b8(*(undefined4 *)(lVar2 + 0x494));
  *(undefined2 *)((long)param_2 + 0xa4) = 0x199a;
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xe6;
  FUN_00d80ec4(0x3e99999a,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41a00000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d84e4c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  plVar3 = (long *)FUN_00d84e4c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  local_48 = FUN_00d8b970;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,1,1);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8b970(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,3,0x19,0);
  return;
}




void FUN_00d8b984(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8b834(param_1,param_2,1);
  return;
}




void FUN_00d8b98c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_Malene_A1Projectile";
  param_2[4] = "Effect_Malene_A1Hit";
  param_2[0xc] = "Sound_Malene_Good_Ability_A_Impact";
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d0a0b8(*(undefined4 *)(lVar3 + 0x498));
  *(undefined2 *)((long)param_2 + 0xa4) = 0x3219;
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  *(undefined1 *)((long)param_2 + 0xa6) = 0x4b;
  FUN_00d80ec4(0x3f19999a,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00d59f54(uVar2,0,4,0x19,0);
  FUN_00e5fe1c(lVar3,param_1,0);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d84e4c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"Damage",0);
  plVar4 = (long *)FUN_00d84eec(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Malene_A1_Immobilize_02bf0c70);
  local_48 = FUN_00d8bb14;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  FUN_00d84e9c(lVar3);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8bb14(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,5,0x19,0);
  return;
}




void FUN_00d8bb28(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uVar7;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d80f68();
  *param_2 = "Effect_Malene_A2Projectile";
  param_2[4] = "Effect_Malene_A2Hit";
  param_2[0xc] = "Sound_Malene_Evil_Ability_A_Impact";
  lVar3 = FUN_00d09310();
  uVar7 = FUN_00d0a0b8(*(undefined4 *)(lVar3 + 0x49c));
  *(undefined2 *)((long)param_2 + 0xa4) = 0x199a;
  *(undefined4 *)(param_2 + 0x15) = uVar7;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xe6;
  FUN_00d80ec4(0x3e99999a,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  uVar4 = FUN_00e5fe74(lVar3);
  FUN_00d59f54(lVar2,1,4,0x19,0);
  FUN_00e5fe1c(uVar4,param_1,1);
  uVar4 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar4,param_1,0x40000);
  plVar5 = (long *)FUN_00d84e4c(lVar3 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"Damage",1);
  uVar6 = FUN_00d44008(*(undefined4 *)(lVar2 + 0x260),PTR_s_Buff_Malene_Talent_TalentB_02bee078);
  if ((uVar6 & 1) != 0) {
    plVar5 = (long *)FUN_00d84eec(lVar3 + 0x10);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Fear_02beb448);
    local_48 = FUN_00d8bccc;
    local_40 = 3;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  }
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8bccc(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac340,1,9);
  return;
}




void FUN_00d8bce4(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d817bc();
  uVar3 = FUN_00d80f68(param_1);
  FUN_00d80ec4(0x3f8ccccd,param_1);
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
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Malene_B2_ShadowSlow_02bf0c88);
  local_48 = FUN_00d8bde4;
  local_40 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8bde4(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,6,0x19,0);
  return;
}




void FUN_00d8bdf8(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_00d80edc(0x41700000);
  *param_2 = "Effect_MinionRanged_Projectile";
  param_2[4] = "Effect_MinionRanged_HitImpact";
  lVar1 = param_1 + 0x120;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x40c00000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d829e8(uVar2,FUN_00d82c30,4,0,0);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d8be84(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_00d80edc(0x41700000);
  *param_2 = "Effect_MinionLead_Proj";
  param_2[4] = "Effect_MinionLead_Proj_Hit";
  lVar1 = param_1 + 0x120;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x40c00000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d829e8(uVar2,FUN_00d82c30,4,0,0);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d8bf10(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d80edc(0x40400000);
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  *param_2 = "Effect_FireHands";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xffff;
  *(undefined4 *)((long)param_2 + 0xac) = 0x3d75c28f;
  lVar3 = param_1 + 0x120;
  FUN_00e5e52c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  uVar2 = FUN_00e5e560(0x3f800000,lVar3,param_1);
  FUN_00e5e74c(0x3f400000,0,0x3f123a14,uVar2,param_1);
  lVar3 = FUN_00d84dfc(param_1 + 0x100);
  plVar4 = (long *)FUN_00d84eec(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Minion_CaptainBuff_02bf0b88);
  local_48[0] = 0x40900000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

