// functions/00d86 — 26 functions
#include "libGameKindred.h"




void FUN_00d86090(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x120;
  *param_2 = "Effect_Catherine_ArcaneShield_ReflectShot";
  param_2[4] = "Effect_Catherine_ArcaneShield_ReflectShot_Impact";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41200000,lVar1);
  FUN_00d80ec4(0x3f800000,param_1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d829e8(uVar2,FUN_00d82c30,1,2,0);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d8611c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cd9f38();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00d8616c(undefined8 param_1,long param_2,undefined8 *param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  param_3[1] = "Effect_Celeste_AA_Enemy";
  *param_3 = "Effect_Celeste_AA";
  param_3[4] = "Effect_Celeste_AA_Impact";
  param_3[0xe] = "Sound_Celeste_Basic_Attack_Impact_3";
  *(undefined4 *)(param_3 + 0x15) = 0x3e4ccccd;
  param_3[0xd] = "Sound_Celeste_Basic_Attack_Impact_2";
  param_3[0xc] = "Sound_Celeste_Basic_Attack_Impact_1";
  FUN_00d80edc(0x42700000);
  lVar2 = param_2 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_2 + 0x118) = lVar2;
  FUN_00e5ffd8(param_1,lVar2);
  lVar2 = FUN_00d84dfc(param_2 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d84e4c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,param_4);
  plVar3 = (long *)FUN_00d84eec(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_GloballyVisibleTrueSight_02bebae0);
  local_58 = FUN_00d86330;
  local_50 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  (**(code **)(*plVar3 + 0x60))(plVar3,FUN_00d8633c);
  plVar3 = (long *)FUN_00d84eec(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_ShowGloballyVisible_02bebb20);
  local_58 = FUN_00d86330;
  local_50 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  (**(code **)(*plVar3 + 0x60))(plVar3,FUN_00d8633c);
  FUN_00d84e9c(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d86330(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00d8633c(undefined8 param_1,undefined8 param_2)

{
  FUN_00d9e9fc(param_2);
  return;
}




void FUN_00d86344(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8616c(0x40c00000,param_1,param_2,0);
  return;
}




void FUN_00d86350(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8616c(0x40e00000,param_1,param_2,2);
  return;
}




void FUN_00d8635c(long param_1,undefined8 *param_2)

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
  param_2[1] = "Effect_Celeste_LeadStar_Enemy";
  *param_2 = "Effect_Celeste_LeadStar";
  param_2[5] = "Effect_Celeste_Ult_Impact_Enemy";
  param_2[4] = "Effect_Celeste_Ult_Impact";
  param_2[0xe] = "Sound_Celeste_Ability_C_Impact_3";
  *(undefined4 *)(param_2 + 0x15) = 0x3fb33333;
  param_2[0xd] = "Sound_Celeste_Ability_C_Impact_2";
  param_2[0xc] = "Sound_Celeste_Ability_C_Impact_1";
  FUN_00d80ec4(0x3f8ccccd);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00e5fc5c(0x41a00000,0x435c0000,lVar3,param_1);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar4 = (long *)FUN_00d84e4c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"LeadDamage",2);
  plVar4 = (long *)FUN_00d84eec(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_GloballyVisibleTrueSight_02bebae0);
  local_48[0] = 0x3f800000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d864e0(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  param_2[1] = "Effect_Celeste_EventHorizon_Proj_Enemy";
  *param_2 = "Effect_Celeste_EventHorizon_Proj";
  param_2[5] = "Effect_Celeste_Ult_Impact_Enemy";
  param_2[4] = "Effect_Celeste_Ult_Impact";
  param_2[0xe] = "Sound_Celeste_Ability_C_Impact_3";
  *(undefined4 *)(param_2 + 0x15) = 0x3fb33333;
  param_2[0xd] = "Sound_Celeste_Ability_C_Impact_2";
  param_2[0xc] = "Sound_Celeste_Ability_C_Impact_1";
  FUN_00d80ec4(0x3f8ccccd,param_1);
  lVar4 = param_1 + 0x120;
  FUN_00e5fc3c(lVar4);
  *(long *)(param_1 + 0x118) = lVar4;
  uVar3 = FUN_00e5fe74(lVar4);
  FUN_00e5fc5c(0x41a00000,0x435c0000,uVar3,param_1);
  uVar3 = FUN_00d850b4(param_1 + 0x100);
  lVar4 = FUN_00d84048(uVar3,param_1,0x2000000);
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_00d84e4c(lVar4);
  uVar2 = FUN_00d59f54(uVar2,2,3,0x19,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(uVar2,0xbf800000,0xbf800000,plVar5,0x2000000,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"TrailDamage",2);
  plVar5 = (long *)FUN_00d84eec(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))
                             (plVar5,PTR_s_Buff_GloballyVisibleTrueSight_02bebae0);
  local_58[0] = 0x3f800000;
  local_50 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_58);
  FUN_00d84e9c(lVar4);
  lVar4 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar4 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d866c4(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  FUN_00d817bc();
  uVar2 = FUN_00d80f68(param_1);
  FUN_00d80ec4(0x3f8ccccd,param_1);
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
                    /* WARNING: Could not recover jumptable at 0x00d86774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x38))(plVar4,"Damage",0);
  return;
}




void FUN_00d86778(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = 0x41a00000;
  *param_3 = 0x40000000;
  return;
}




bool FUN_00d8678c(undefined8 *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = FUN_00d81178(*param_1);
    bVar1 = lVar3 == lVar2;
  }
  return bVar1;
}




void FUN_00d867c4(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d81178();
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
  lVar4 = FUN_00d86924(lVar4 + 0x10);
  lVar5 = FUN_00d86974(lVar4 + 0x10);
  *(code **)(lVar5 + 8) = FUN_00d8678c;
  plVar6 = (long *)FUN_00d84eec(lVar4 + 0x70);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Stunned_02beb430);
  local_48 = FUN_00d8690c;
  local_40 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_48);
  plVar6 = (long *)FUN_00d84e4c(lVar4 + 0x70);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
  (**(code **)(*plVar6 + 0x38))(plVar6,"Damage",0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d8690c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abf74,0,9);
  return;
}




void FUN_00d86924(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cda998();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




undefined8 * FUN_00d86974(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *puVar1 = &PTR_FUN_0281ef28;
      puVar1[1] = 0;
      puVar1[-1] = puVar1;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 4;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_00d869d0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00d869d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2);
  return;
}




float FUN_00d869dc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d81070(*param_1);
  uVar2 = FUN_00d9ea34();
  local_2c = 0xffffffff;
  uVar3 = FUN_00d6bbac(uVar2,DAT_031b9a38,&local_2c);
  fVar4 = 0.0;
  if ((uVar3 & 1) != 0) {
    fVar4 = (float)FUN_00d6b9f8(uVar2,local_2c);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    if (fVar4 <= 0.1) {
      fVar4 = 0.1;
    }
    return fVar4 + 0.2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d86a7c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d817bc();
  *(char **)(param_2 + 0x60) = "Sound_Grumpjaw_Ability_C_Impact";
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d09e18(*(undefined4 *)(lVar2 + 0x3b4));
  *(undefined4 *)(param_2 + 0xa8) = uVar6;
  lVar2 = FUN_00d80f68(param_1);
  fVar7 = *(float *)(*(long *)(lVar2 + 0x38) + 100);
  FUN_00d80ec4((*(float *)(*(long *)(lVar2 + 0x38) + 0x68) * (fVar7 + *(float *)(lVar2 + 0x2e8))) /
               fVar7,param_1);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_02820430;
  *(undefined8 *)(param_1 + 0x128) = 0;
  uVar6 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x130) = uVar6;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  uVar3 = FUN_00e5e120(param_1 + 0x120,param_1,lVar2);
  FUN_00e5e22c(uVar3,"AbilityCSelfProjectile");
  uVar3 = FUN_00d850b4(param_1 + 0x100);
  lVar2 = FUN_00d84048(uVar3,param_1,1);
  lVar2 = lVar2 + 0x10;
  plVar4 = (long *)FUN_00d84eec(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Grumpjaw_C_Grabbed_02bf0780);
  local_48 = FUN_00d869dc;
  local_40 = 4;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  plVar4 = (long *)FUN_00d84e4c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"Eat Damage",3);
  lVar2 = FUN_00d86924(lVar2);
  lVar5 = FUN_00d86dc0(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Grumpjaw_Talent_BigAppetite_02bedf50;
  FUN_00d84e9c(lVar2 + 0x70);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d86c14(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  FUN_00d817bc();
  lVar3 = FUN_00d80f68(param_1);
  lVar7 = *(long *)(lVar3 + 0x18);
  while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar7 = *(long *)(lVar7 + 0x20);
  }
  lVar4 = FUN_00d81178(param_1);
  FUN_00d5a3d0(lVar3,DAT_031abf9c,1,9);
  FUN_00d80ec4(param_1);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_02820430;
  *(undefined8 *)(param_1 + 0x128) = 0;
  uVar1 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  FUN_00e5e120(param_1 + 0x120,param_1,lVar3);
  fVar8 = (float)FUN_00d59f54(lVar3,1,3,0x19,0);
  uVar5 = FUN_00d6bbac(lVar7,DAT_031b9a20,0);
  if ((uVar5 & 1) != 0) {
    fVar9 = (float)FUN_00d59f54(lVar3,1,4,0x19,0);
    uVar2 = FUN_00d6bb44(lVar7,DAT_031b9a20);
    fVar8 = fVar8 + fVar9 * (float)uVar2;
  }
  if (*(char *)(lVar4 + 0x2f6) < '\0') {
    fVar9 = (float)FUN_00d59f54(lVar3,1,5,0x19,0);
    fVar8 = fVar8 * fVar9;
  }
  fVar9 = (float)FUN_00d5a3d0(lVar3,DAT_031abf9c,0,9);
  uVar6 = FUN_00d850b4(param_1 + 0x100);
  lVar7 = FUN_00d84048(uVar6,param_1,0x40000);
  uVar6 = FUN_00d8611c(lVar7 + 0x10);
  FUN_00d829d8(fVar8 * fVar9,uVar6,1,2,0);
  return;
}




undefined8 * FUN_00d86dc0(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *(undefined4 *)(puVar1 + 2) = 0;
      *puVar1 = &PTR_FUN_0281ef50;
      puVar1[1] = 0;
      puVar1[-1] = puVar1;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 4;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




bool FUN_00d86e20(long param_1,undefined8 param_2)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = FUN_00d99794(param_2);
  bVar1 = false;
  if (lVar3 != 0) {
    bVar2 = FUN_00d99e94(lVar3,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    bVar1 = (bVar2 & 1) != *(byte *)(param_1 + 0x14);
  }
  return bVar1;
}




void FUN_00d86e64(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x120;
  *param_2 = "Effect_Gwen_AA";
  param_2[4] = "Effect_Gwen_AA_Impact";
  param_2[0xe] = "Sound_Gwen_Attack_Impact_3";
  param_2[0xd] = "Sound_Gwen_Attack_Impact_2";
  param_2[0xc] = "Sound_Gwen_Attack_Impact_1";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41a00000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  uVar2 = FUN_00d8611c(lVar1 + 0x10);
  FUN_00d82a00(uVar2,param_3);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d86f08(undefined8 param_1,undefined8 param_2)

{
  FUN_00d86e64(param_1,param_2,0);
  return;
}




void FUN_00d86f10(undefined8 param_1,undefined8 param_2)

{
  FUN_00d86e64(param_1,param_2,2);
  return;
}




void FUN_00d86f18(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_00d80ee4();
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x240) + 1.0) *
          (*(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0))
  ;
  if (DAT_031aa550 <= fVar3) {
    fVar3 = DAT_031aa550;
  }
  fVar5 = DAT_031aa490;
  if (DAT_031aa490 <= fVar3) {
    fVar5 = fVar3;
  }
  FUN_00d82c54(param_1,param_2);
  fVar3 = (float)thunk_FUN_00d086f0(lVar1,0,1);
  fVar4 = (float)thunk_FUN_00d086f0(lVar1,1,1);
  *(float *)(param_2 + 0x30) =
       *(float *)(param_2 + 0x30) +
       fVar3 + (fVar4 - fVar3) * (((float)(uint)(int)fVar5 + -1.0) / 11.0);
  fVar5 = *(float *)(*(long *)(lVar1 + 0x40) + 0xfc);
  fVar3 = (float)thunk_FUN_00d086f0(lVar1,2,1);
  *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) + fVar5 * fVar3;
  return;
}

