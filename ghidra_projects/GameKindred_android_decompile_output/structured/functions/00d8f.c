// functions/00d8f — 26 functions
#include "libGameKindred.h"




void FUN_00d8f0b4(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8eff0(0x41a00000,param_1,param_2,0);
  return;
}




void FUN_00d8f0c0(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8eff0(0x41f00000,param_1,param_2,2);
  return;
}




void FUN_00d8f0cc(undefined8 param_1,long param_2,float *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = FUN_00d80ee4();
  fVar5 = (float)thunk_FUN_00d086f0(lVar2,0,1);
  iVar1 = FUN_00d5c238(lVar2,1);
  if (iVar1 == 0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = (float)FUN_00d59f54(lVar2,1,2,0x19,0);
  }
  *param_3 = fVar5 + fVar6;
  fVar6 = (float)thunk_FUN_00d086f0(lVar2,1,1);
  lVar4 = *(long *)(lVar2 + 0x40);
  fVar5 = (*(float *)(lVar4 + 0x1b4) + 1.0) *
          (*(float *)(lVar4 + 0x4c) + *(float *)(lVar4 + 0x100) * (*(float *)(lVar4 + 0x268) + 1.0))
  ;
  if (DAT_031ab3c4 <= fVar5) {
    fVar5 = DAT_031ab3c4;
  }
  fVar7 = DAT_031ab300._4_4_;
  if (DAT_031ab300._4_4_ <= fVar5) {
    fVar7 = fVar5;
  }
  *param_3 = *param_3 + fVar6 * fVar7;
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar5 = (float)thunk_FUN_00d086f0(lVar2,3,1);
    *param_3 = fVar5 * *param_3;
  }
  uVar3 = FUN_00d44008(*(undefined4 *)(lVar2 + 0x260),PTR_s_Buff_Vox_Talent_EchoChamber_02bee208);
  if ((uVar3 & 1) != 0) {
    fVar5 = (float)FUN_00d5a3d0(lVar2,DAT_031ac588,0,9);
    *param_3 = fVar5 * *param_3;
  }
  return;
}




void FUN_00d8f224(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d80f68();
  *param_2 = "Effect_Vox_Resonance_Proj";
  param_2[4] = "Effect_Vox_Resonance_Impact";
  param_2[0xd] = "Sound_Vox_Ability_B_Ricochet_Impact_2";
  param_2[0xc] = "Sound_Vox_Ability_B_Ricochet_Impact_1";
  param_2[0xf] = "Sound_Vox_Ability_B_Ricochet_Impact_4";
  param_2[0xe] = "Sound_Vox_Ability_B_Ricochet_Impact_3";
  lVar3 = param_1 + 0x120;
  FUN_00e5ff9c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00e5ffd8(0x41000000,lVar3);
  lVar3 = FUN_00d84dfc(param_1 + 0x100);
  lVar3 = lVar3 + 0x10;
  uVar4 = FUN_00d8611c(lVar3);
  FUN_00d829e8(uVar4,FUN_00d8f0cc,1,1,0);
  plVar5 = (long *)FUN_00d84eec(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Vox_Resonance_02bf1238);
  local_48 = FUN_00d8f3b8;
  local_40 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  uVar6 = FUN_00d44008(*(undefined4 *)(lVar2 + 0x260),PTR_s_Buff_Vox_Talent_EchoChamber_02bee208);
  if ((uVar6 & 1) != 0) {
    plVar5 = (long *)FUN_00d84eec(lVar3);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x38))
                               (plVar5,PTR_s_Buff_Vox_EchoChamber_Bounce_02bee218);
    local_48 = (code *)CONCAT44(local_48._4_4_,0x3dcccccd);
    local_40 = 1;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  }
  FUN_00d84e9c(lVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8f3b8(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,4,1);
  return;
}




void FUN_00d8f3c4(undefined8 param_1,long param_2,float *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = FUN_00d80ee4();
  fVar4 = (float)thunk_FUN_00d086f0(lVar2,0,1);
  iVar1 = FUN_00d5c238(lVar2,1);
  if (iVar1 == 0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (float)FUN_00d59f54(lVar2,1,2,0x19,0);
  }
  *param_3 = fVar4 + fVar5;
  fVar5 = (float)thunk_FUN_00d086f0(lVar2,1,1);
  lVar3 = *(long *)(lVar2 + 0x40);
  fVar4 = (*(float *)(lVar3 + 0x1b4) + 1.0) *
          (*(float *)(lVar3 + 0x4c) + *(float *)(lVar3 + 0x100) * (*(float *)(lVar3 + 0x268) + 1.0))
  ;
  if (DAT_031ab3c4 <= fVar4) {
    fVar4 = DAT_031ab3c4;
  }
  fVar6 = DAT_031ab300._4_4_;
  if (DAT_031ab300._4_4_ <= fVar4) {
    fVar6 = fVar4;
  }
  *param_3 = *param_3 + fVar5 * fVar6;
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar4 = (float)thunk_FUN_00d086f0(lVar2,3,1);
    *param_3 = fVar4 * *param_3;
  }
  fVar4 = (float)FUN_00d5a3d0(lVar2,DAT_031ac588,0,9);
  *param_3 = fVar4 * *param_3;
  return;
}




void FUN_00d8f504(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = param_1 + 0x120;
  *param_2 = "Effect_Vox_Resonance_Proj";
  param_2[4] = "Effect_Vox_Resonance_Impact";
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41000000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d8611c(lVar2);
  FUN_00d829e8(uVar3,FUN_00d8f3c4,1,1,0);
  plVar4 = (long *)FUN_00d84eec(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Vox_Resonance_02bf1238);
  local_48 = FUN_00d8f3b8;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8f5fc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d80f68(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,0,2,0x19,0);
  *(float *)(param_2 + 0x30) = fVar2 * *(float *)(param_2 + 0x30);
  return;
}




void FUN_00d8f640(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1 + 0x120;
  *param_2 = "Effect_Vox_Proj";
  param_2[4] = "Effect_Vox_Proj_Impact";
  param_2[0xe] = "Sound_Vox_Attack_Impact_3";
  param_2[0xd] = "Sound_Vox_Attack_Impact_2";
  param_2[0xc] = "Sound_Vox_Attack_Impact_1";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41200000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  plVar2 = (long *)FUN_00d84e4c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"BASE_DAMAGE",0);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d8f6f4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Vox_Ult_Shot";
  param_2[4] = "Effect_Vox_Proj_Impact";
  param_2[0xc] = "Sound_Vox_Ability_C_FirstShot_Impact";
  FUN_00d80ec4(0x3e99999a);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00e5fe1c(0x41f00000,lVar3,param_1,2);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar4 = (long *)FUN_00d84eec(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Vox_Resonance_02bf1238);
  local_48 = FUN_00d8f3b8;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  plVar4 = (long *)FUN_00d84e4c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"InitialShockDamage",2);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8f830(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d80ee4();
  uVar2 = FUN_00d59f54(uVar1,2,2,0x19,0);
  *param_3 = uVar2;
  return;
}




void FUN_00d8f868(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Vox_Ult_Proj";
  param_2[4] = "Effect_Vox_Proj_Impact";
  param_2[0xc] = "Sound_Vox_Ability_C_SecondShot_Impact";
  FUN_00d80ec4(0x3f800000);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00e5fe1c(0x41f00000,lVar3,param_1,2);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  lVar3 = lVar3 + 0x10;
  uVar2 = FUN_00d8611c(lVar3);
  FUN_00d829e8(uVar2,FUN_00d8f830,1,2,0);
  plVar4 = (long *)FUN_00d84eec(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Vox_Resonance_Proc_02bf1248);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3dcccccd);
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  (**(code **)(*plVar4 + 0x60))(plVar4,FUN_00d8633c);
  plVar4 = (long *)FUN_00d84eec(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Silence_02beb428);
  local_48 = FUN_00d8fa00;
  local_40 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  (**(code **)(*plVar4 + 0x60))(plVar4,FUN_00d8633c);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8fa00(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00d8fa14(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  code *local_68;
  undefined4 local_60;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_HeroPLU_TossEngineProjectile";
  param_2[4] = "Effect_HeroPLU_Explosion";
  param_2[0xc] = "Sound_HeroPLU_KABOOM";
  lVar4 = param_1 + 0x120;
  FUN_00e5e52c(lVar4);
  *(long *)(param_1 + 0x118) = lVar4;
  FUN_00d59f54(uVar2,7,6,0x19,0);
  uVar3 = FUN_00e5e560(lVar4,param_1);
  FUN_00e5e74c(0x3e4ccccd,0,0x3f123a14,uVar3,param_1);
  lVar4 = FUN_00d85f00(param_1 + 0x100);
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_00d84e4c(lVar4);
  uVar6 = FUN_00d59f54(uVar2,7,2,0x19,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(uVar6,0xbf800000,0xbf800000,plVar5,0x40000,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  local_58 = FUN_00d8fc04;
  local_50 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_58,1,2);
  plVar5 = (long *)FUN_00d8c2e0(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(0x40e00000,0xbf800000,0xbf800000,plVar5,0x200000);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  local_58 = FUN_00d8fc18;
  local_50 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
  local_68 = FUN_00d8fc2c;
  local_60 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,&local_68);
  (**(code **)(*plVar5 + 0x48))();
  FUN_00d84e9c(lVar4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8fc04(undefined8 param_1)

{
  FUN_00d59f54(param_1,7,3,0x19,0);
  return;
}




void FUN_00d8fc18(undefined8 param_1)

{
  FUN_00d59f54(param_1,7,4,0x19,0);
  return;
}




void FUN_00d8fc2c(undefined8 param_1)

{
  FUN_00d59f54(param_1,7,5,0x19,0);
  return;
}




void FUN_00d8fc40(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_HeroPLU_DebrisProjectile";
  param_2[4] = "Effect_HeroPLU_DebrisProjectileImpact";
  param_2[0xc] = "Sound_HeroPLU_Debris_Impact";
  FUN_00d59f54(uVar2,8,5,0x19,0);
  FUN_00d80ec4(param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00d59f54(uVar2,8,6,0x19,0);
  FUN_00e5fe1c(lVar3,param_1,8);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x440000);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d84e4c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  local_48 = FUN_00d8fdc4;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48,2,2);
  plVar4 = (long *)FUN_00d84eec(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_48 = FUN_00d8fdd8;
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




void FUN_00d8fdc4(undefined8 param_1)

{
  FUN_00d59f54(param_1,8,2,0x19,0);
  return;
}




void FUN_00d8fdd8(undefined8 param_1)

{
  FUN_00d59f54(param_1,8,4,0x19,0);
  return;
}




void FUN_00d8fdec(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  FUN_00d80f68();
  *param_2 = "Effect_Lorelai_Proj";
  param_2[4] = "Effect_Lorelai_Proj_Hit";
  param_2[0xc] = "Sound_Lorelai_Basic_Impact";
  lVar1 = FUN_00d09310();
  uVar3 = FUN_00d09fbc(*(undefined4 *)(lVar1 + 0x430));
  *(undefined4 *)(param_2 + 0x15) = uVar3;
  *(undefined2 *)((long)param_2 + 0xa4) = 0;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xff;
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




void FUN_00d8feac(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8fdec(param_1,param_2,0);
  return;
}




void FUN_00d8feb4(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8fdec(param_1,param_2,0);
  return;
}




void FUN_00d8febc(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8fdec(param_1,param_2,2);
  return;
}




void FUN_00d8fec4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00d80f68();
  *param_2 = "Effect_Lorelai_B_Proj";
  param_2[4] = "Effect_Lorelai_B_Proj_Hit";
  *(undefined2 *)((long)param_2 + 0xa4) = 0x6400;
  *(undefined1 *)((long)param_2 + 0xa6) = 200;
  FUN_00d80ec4(0x3f000000,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5e52c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00d59f54(uVar1,1,7,0x19,0);
  uVar1 = FUN_00e5e560(lVar2,param_1);
  FUN_00e5e74c(0x3f4ccccd,0,0x3e4ccccd,uVar1,param_1);
  lVar2 = FUN_00d85f00(param_1 + 0x100);
  uVar1 = FUN_00d89c00(lVar2 + 0x10);
  FUN_00d836e8(uVar1,"*Lorelai_Splashdown*",1);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  return;
}




void FUN_00d8ffa4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00d80f68();
  *param_2 = "Effect_Lorelai_B_Emp_Proj";
  param_2[4] = "Effect_Lorelai_B_Proj_Hit";
  *(undefined2 *)((long)param_2 + 0xa4) = 0x6400;
  *(undefined1 *)((long)param_2 + 0xa6) = 200;
  FUN_00d80ec4(0x3f000000,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5e52c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00d59f54(uVar1,1,8,0x19,0);
  uVar1 = FUN_00e5e560(lVar2,param_1);
  FUN_00e5e74c(0,0,0,uVar1,param_1);
  lVar2 = FUN_00d85f00(param_1 + 0x100);
  uVar1 = FUN_00d89c00(lVar2 + 0x10);
  FUN_00d836e8(uVar1,"*Lorelai_Splashdown*",1);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  return;
}

