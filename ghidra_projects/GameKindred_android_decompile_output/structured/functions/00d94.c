// functions/00d94 — 24 functions
#include "libGameKindred.h"




void FUN_00d9408c(long param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  
  *param_2 = "Effect_Silvernail_DefaultAttack";
  if (param_3 == 2) {
    param_2[4] = "Effect_Silvernail_CritAttack_Impact";
    param_2[0xc] = "Sound_Silvernail_Crit_Attack_01_Impact";
  }
  else if (param_3 == 0) {
    param_2[4] = "Effect_Silvernail_DefaultAttack_Impact";
    param_2[0xd] = "Sound_Silvernail_Default_Attack_02_Impact";
    param_2[0xc] = "Sound_Silvernail_Default_Attack_01_Impact";
    param_2[0xe] = "Sound_Silvernail_Default_Attack_03_Impact";
  }
  lVar1 = FUN_00d09310();
  uVar3 = FUN_00d0a2b0(*(undefined4 *)(lVar1 + 0x4f0));
  *(undefined4 *)(param_2 + 0x15) = uVar3;
  FUN_00d80ec4(0x3dcccccd,param_1);
  lVar1 = param_1 + 0x120;
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41b00000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  plVar2 = (long *)FUN_00d84e4c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d94190(undefined8 param_1,undefined8 param_2)

{
  FUN_00d9408c(param_1,param_2,0);
  return;
}




void FUN_00d94198(undefined8 param_1,undefined8 param_2)

{
  FUN_00d9408c(param_1,param_2,2);
  return;
}




float FUN_00d941a0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = FUN_00d80f68(*param_1);
  lVar4 = *(long *)(lVar2 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  lVar3 = *(long *)(lVar2 + 0x40);
  fVar5 = (*(float *)(lVar3 + 0x1b0) + 1.0) *
          (*(float *)(lVar3 + 0x48) + *(float *)(lVar3 + 0xfc) * (*(float *)(lVar3 + 0x264) + 1.0));
  if (DAT_031ab840 <= fVar5) {
    fVar5 = DAT_031ab840;
  }
  fVar7 = DAT_031ab780;
  if (DAT_031ab780 <= fVar5) {
    fVar7 = fVar5;
  }
  fVar5 = (float)thunk_FUN_00d086f0(lVar2,1,1);
  iVar1 = FUN_00d535a4(lVar4,4);
  if (iVar1 != 0) {
    fVar6 = (float)FUN_00d59f54(lVar2,4,5,0x19,0);
    fVar5 = fVar5 + fVar6;
  }
  return fVar7 * fVar5;
}




void FUN_00d9428c(long param_1,undefined8 *param_2,int param_3)

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
  *param_2 = "Effect_Silvernail_DefaultAttack";
  if (param_3 == 2) {
    param_2[4] = "Effect_Silvernail_CritAttack_Impact";
    param_2[0xc] = "Sound_Silvernail_Crit_Attack_01_Impact";
  }
  else if (param_3 == 0) {
    param_2[4] = "Effect_Silvernail_DefaultAttack_Impact";
    param_2[0xd] = "Sound_Silvernail_Default_Attack_02_Impact";
    param_2[0xc] = "Sound_Silvernail_Default_Attack_01_Impact";
    param_2[0xe] = "Sound_Silvernail_Default_Attack_03_Impact";
  }
  lVar2 = FUN_00d09310();
  uVar4 = FUN_00d0a2b0(*(undefined4 *)(lVar2 + 0x4f0));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  FUN_00d80ec4(0x3dcccccd,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41b00000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  plVar3 = (long *)FUN_00d84e4c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  local_48 = FUN_00d941a0;
  local_40 = 4;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_48,0,0);
  (**(code **)(*plVar3 + 0x70))(plVar3,param_3);
  FUN_00d84e9c(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d943e8(undefined8 param_1,undefined8 param_2)

{
  FUN_00d9428c(param_1,param_2,0);
  return;
}




void FUN_00d943f0(undefined8 param_1,undefined8 param_2)

{
  FUN_00d9428c(param_1,param_2,2);
  return;
}




void FUN_00d943f8(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_Silvernail_B";
  param_2[4] = "Effect_Silvernail_B_Impact";
  param_2[0xc] = "Sound_Silvernail_B_Impact";
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d0a2b0(*(undefined4 *)(lVar3 + 0x4f8));
  *(undefined4 *)(param_2 + 0x15) = uVar6;
  lVar3 = param_1 + 0x120;
  FUN_00e5e52c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00d59f54(uVar2,3,3,0x19,0);
  uVar4 = FUN_00e5e560(lVar3,param_1);
  FUN_00e5e74c(0x3f000000,0,0x3f32b8c3,uVar4,param_1);
  uVar2 = FUN_00d59f54(uVar2,3,4,0x19,0);
  lVar3 = FUN_00d85f00(param_1 + 0x100);
  lVar3 = lVar3 + 0x10;
  plVar5 = (long *)FUN_00d84e4c(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(uVar2,0x3ee66666,0xbf800000,plVar5,0x40000,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"DAMAGE",3);
  plVar5 = (long *)FUN_00d84eec(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(uVar2,0x3ee66666,plVar5,0x40000,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))
                             (plVar5,PTR_s_Buff_Silvernail_B_DamageOverTime_02bf1678);
  local_68 = FUN_00d94628;
  local_60 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_68);
  plVar5 = (long *)FUN_00d84eec(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(uVar2,0x3ee66666,plVar5,0x40000,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_RevealToBestowersTeam_02bebb00);
  local_68 = FUN_00d94628;
  local_60 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_68);
  FUN_00d84e9c(lVar3);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d94628(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,5,0x19,0);
  return;
}




float FUN_00d9463c(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d81070(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,4,2,0x19,0);
  fVar3 = (float)FUN_00d59f54(uVar1,4,6,0x19,0);
  return fVar2 + fVar3;
}




void FUN_00d9469c(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar6 = FUN_00d80f68(*param_2);
  if (lVar6 == 0) {
    lVar6 = FUN_00d81070(*param_2);
  }
  else {
    lVar6 = FUN_00d80f68(*param_2);
  }
  puVar4 = PTR_s_Buff_Silvernail_C_KnockedIntoWal_02bf1690;
  uVar1 = *(undefined4 *)(lVar6 + 0x260);
  uVar2 = *(undefined4 *)(param_3 + 0x260);
  uVar5 = FUN_00ceb350();
  FUN_00cfe864(param_1,0,0,auStack_a0,uVar1,uVar2,puVar4,uVar5,1,0,0);
  FUN_00ce20fc(auStack_a0);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9476c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_78;
  undefined4 local_70;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_Silvernail_C";
  FUN_00d80ec4(0x3e99999a,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00d59f54(uVar2,4,3,0x19,0);
  FUN_00e5fe1c(lVar3,param_1,4);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d84eec(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Silvernail_C_HitEffect_02bf1688);
  local_68._0_4_ = 0x3dcccccd;
  local_60 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_68);
  plVar4 = (long *)FUN_00d84eec(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_Silvernail_C_BeingKnockedBa_02bf1670);
  local_68 = (code *)CONCAT44(local_68._4_4_,0x3f000000);
  local_60 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_68);
  plVar4 = (long *)FUN_00d8c2e0(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,param_1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,param_1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  local_68 = FUN_00d94970;
  local_60 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,&local_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))();
  local_78 = FUN_00d9463c;
  local_70 = 4;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x28))(plVar4,&local_78);
  (**(code **)(*plVar4 + 0x60))(plVar4,FUN_00d9469c);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d94970(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,3,0x19,0);
  return;
}




void FUN_00d94984(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d80fec();
  uVar2 = FUN_00d59f54(uVar1,0,5,0x19,0);
  *param_2 = uVar2;
  return;
}




void FUN_00d949bc(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_Hero057_A";
  FUN_00d80ec4(0x3ecccccd,param_1);
  lVar5 = param_1 + 0x120;
  FUN_00e5f128(lVar5);
  *(long *)(param_1 + 0x118) = lVar5;
  uVar6 = FUN_00d59f54(uVar2,0,3,0x19,0);
  uVar2 = FUN_00d59f54(uVar2,0,2,0x19,0);
  uVar2 = FUN_00e5f16c(uVar6,uVar2,lVar5,param_1);
  FUN_00e5f324(0x3f333333,uVar2,0);
  FUN_00e5f410();
  lVar5 = param_1 + 0x100;
  uVar2 = FUN_00d850b4(lVar5);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar4 = (long *)FUN_00d84e4c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  local_58 = FUN_00d94b80;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58,1,2);
  plVar4 = (long *)FUN_00d84e4c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  local_58 = FUN_00d94b94;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58,0,2);
  uVar2 = FUN_00d850b4(lVar5);
  FUN_00d84048(uVar2,param_1,1);
  lVar3 = FUN_00d840ec();
  uVar2 = FUN_00d8d624(lVar3 + 0x10);
  FUN_00d82e24(uVar2,FUN_00d94984);
  lVar5 = FUN_00d85f00(lVar5);
  FUN_00d84e9c(lVar5 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d94b80(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00d94b94(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,4,0);
  return;
}




void FUN_00d94ba8(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  code *local_68;
  undefined4 local_60;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d817bc();
  uVar2 = FUN_00d80f68(param_1);
  *param_2 = "Effect_Yates_A";
  param_2[4] = "Effect_Yates_A_Impact";
  param_2[0xc] = "Sound_Yates_A_Shot_Impact";
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d0a1b4(*(undefined4 *)(lVar3 + 0x508));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  param_2[8] = "Effect_Yates_A_Beam";
  param_2[0xb] = "Bone_Mace";
  *(undefined1 *)(param_2 + 0x16) = 1;
  FUN_00d80ec4(0x3f800000,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00d59f54(uVar2,0,3,0x19,0);
  FUN_00e5fe1c(lVar3,param_1,0);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d8c2e0(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))();
  local_58 = FUN_00d94e20;
  local_50 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,&local_58);
  local_68 = FUN_00d94e34;
  local_60 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x28))(plVar4,&local_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))();
  (**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)FUN_00d84e4c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",0);
  uVar2 = FUN_00d85104(lVar3);
  FUN_00d82fe4(uVar2,1);
  plVar4 = (long *)FUN_00d84eec(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Yates_A_ReturnShot_02bf16f8);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3dcccccd);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  FUN_00d84e9c(lVar3);
  FUN_00d82cf0();
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  lVar3 = lVar3 + 0x10;
  uVar2 = FUN_00d89c00(lVar3);
  FUN_00d836e8(uVar2,"*GenericLocator*",0);
  uVar2 = FUN_00d836fc();
  FUN_00d83774(0x40a00000,uVar2,PTR_s_Buff_Yates_A_ReturnShot_02bf16f8);
  uVar2 = FUN_00d85104(lVar3);
  FUN_00d82fe4(uVar2,1);
  FUN_00d84e9c(lVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d94e20(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,5,0x19,0);
  return;
}




void FUN_00d94e34(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00d94e48(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00d80f68();
  *param_2 = "Effect_Yates_A_Return";
  param_2[0xc] = "Sound_Yates_A_Shot_Impact";
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d0a1b4(*(undefined4 *)(lVar2 + 0x508));
  param_2[8] = "Effect_Yates_A_Beam";
  *(undefined4 *)(param_2 + 0x15) = uVar3;
  param_2[0xb] = "Bone_Mace";
  *(undefined2 *)(param_2 + 0x16) = 0x101;
  FUN_00d80ec4(0x3dcccccd,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00d59f54(uVar1,0,5,0x19,0);
  FUN_00e5ffd8(lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  lVar2 = FUN_00d85f00(param_1 + 0x100);
  FUN_00d84e9c(lVar2 + 0x10);
  return;
}




void FUN_00d94f24(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00d94fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",3);
  return;
}




void FUN_00d94fd4(undefined8 param_1,long param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(param_2 + 0x260);
  return;
}




void FUN_00d94fe0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_00d80f68();
  *param_2 = "Effect_LanceBall_Lance_HoldingBall";
  *(undefined4 *)((long)param_2 + 0xac) = 0x3f000000;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x66ff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  FUN_00d80ec4(0x3dcccccd,param_1);
  FUN_00d80edc(0x45610000,param_1);
  lVar2 = param_1 + 0x120;
  FUN_00e5fc3c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00d59f54(uVar1,3,2,0x19,0);
  FUN_00e5fe1c(lVar2,param_1,3);
  uVar1 = FUN_00d850b4(param_1 + 0x100);
  lVar2 = FUN_00d84048(uVar1,param_1,1);
  plVar3 = (long *)FUN_00d84eec(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_LanceBall_Lance_HoldingBall_02bf17d8);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  uVar1 = FUN_00d850b4(param_1 + 0x100);
  FUN_00d84048(uVar1,param_1,1);
  lVar2 = FUN_00d840ec();
  plVar3 = (long *)FUN_00d84eec(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_LanceBall_Lance_HoldingBall_02bf17d8);
  (**(code **)(*plVar3 + 0x28))(plVar3,FUN_00d94fd4);
  FUN_00d84e9c(lVar2 + 0x10);
  FUN_00d82cf0();
  return;
}

