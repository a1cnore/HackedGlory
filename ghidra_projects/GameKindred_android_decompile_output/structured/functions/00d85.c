// functions/00d85 — 29 functions
#include "libGameKindred.h"




void FUN_00d850a0(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,7,0x19,0);
  return;
}




void FUN_00d850b4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cdab8c();
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




void FUN_00d85104(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cda538();
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




void FUN_00d85154(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cd9d74();
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




void FUN_00d851a4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cdad44();
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




float FUN_00d851f4(void)

{
  int iVar1;
  
  iVar1 = rand();
  return (float)iVar1 * 4.656613e-10 * 1.1 + -0.55;
}




float FUN_00d85230(void)

{
  int iVar1;
  
  iVar1 = rand();
  return (float)iVar1 * 4.656613e-10 * 0.9 + 0.05;
}




void FUN_00d8526c(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  *param_2 = "Effect_Baptiste_SoulFragment";
  param_2[4] = "Effect_Baptiste_SoulFragmentImpact";
  param_2[0xc] = "Sound_Baptiste_Reap_Perk";
  *(undefined2 *)((long)param_2 + 0xa4) = 0x8200;
  *(undefined1 *)((long)param_2 + 0xa6) = 0x46;
  FUN_00d80ec4(0x3e4ccccd);
  lVar4 = param_1 + 0x120;
  FUN_00e5e52c(lVar4);
  *(long *)(param_1 + 0x118) = lVar4;
  uVar3 = FUN_00e5e5a0(0x40c00000,lVar4,param_1);
  iVar1 = rand();
  iVar2 = rand();
  FUN_00e5e74c((float)iVar1 * 4.656613e-10 * 0.9 + 0.05,(float)iVar2 * 4.656613e-10 * 1.1 + -0.55,
               0x3e800000,uVar3,param_1);
  lVar4 = FUN_00d84dfc(param_1 + 0x100);
  plVar5 = (long *)FUN_00d84eec(lVar4 + 0x10);
  (**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Baptiste_PerkSoulStacks_02bf02e0);
  FUN_00d84e9c(lVar4 + 0x10);
  FUN_00d82cf0();
  return;
}




undefined1  [16] FUN_00d8538c(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined8 uVar7;
  
  lVar1 = FUN_00d80ee4();
  uVar3 = 3;
  if ((param_4 & 1) != 0) {
    uVar3 = 4;
  }
  auVar5 = FUN_00d59f54(lVar1,0,uVar3,0x19,0);
  if ((param_3 & 1) != 0) {
    fVar4 = (float)thunk_FUN_00d086f0(lVar1,6,1);
    auVar5 = ZEXT416((uint)(auVar5._0_4_ * (fVar4 + 1.0)));
  }
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar4 = (float)FUN_00d59f54(lVar1,0,5,0x19,0);
    auVar5 = ZEXT416((uint)(auVar5._0_4_ * fVar4));
  }
  uVar7 = auVar5._8_8_;
  uVar6 = auVar5._0_8_;
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Baptiste_Talent_BadBadMojo_02bee2a0
                      );
  if ((uVar2 & 1) != 0) {
    fVar4 = (float)FUN_00d5a3d0(lVar1,DAT_031ac758,2,9);
    uVar6 = (ulong)(uint)(auVar5._0_4_ * fVar4);
    uVar7 = 0;
  }
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = uVar6;
  return auVar5;
}




void FUN_00d85468(undefined8 *param_1,undefined8 param_2)

{
  FUN_00d8538c(*param_1,param_2,0,0);
  return;
}




void FUN_00d85478(undefined8 *param_1,undefined8 param_2)

{
  FUN_00d8538c(*param_1,param_2,1,0);
  return;
}




void FUN_00d85488(undefined8 *param_1,undefined8 param_2)

{
  FUN_00d8538c(*param_1,param_2,0,1);
  return;
}




void FUN_00d85498(undefined8 *param_1,undefined8 param_2)

{
  FUN_00d8538c(*param_1,param_2,1,1);
  return;
}




void FUN_00d854a8(long param_1,undefined8 *param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *local_88;
  undefined4 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00d80f68();
  *param_2 = "Effect_Baptiste_A_Projectile";
  param_2[4] = "Effect_Baptiste_A_ProjectileImpact";
  param_2[0xc] = "Sound_Baptiste_Ability_A_Impact";
  *(undefined2 *)((long)param_2 + 0xa4) = 0x5a00;
  *(undefined1 *)((long)param_2 + 0xa6) = 0x82;
  FUN_00d80ec4(0x3f000000,param_1);
  lVar5 = param_1 + 0x120;
  FUN_00e5fc3c(lVar5);
  *(long *)(param_1 + 0x118) = lVar5;
  FUN_00d59f54(uVar4,0,8,0x19,0);
  FUN_00e5fe1c(lVar5,param_1,0);
  lVar5 = FUN_00d80f68(param_1);
  uVar3 = FUN_00d44008(*(undefined4 *)(lVar5 + 0x260),PTR_s_Buff_Baptiste_Talent_TheReaper_02bee290)
  ;
  uVar4 = FUN_00d850b4(param_1 + 0x100);
  lVar5 = FUN_00d84048(uVar4,param_1,0x40000);
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_00d84e4c(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
  local_88 = FUN_00d85478;
  if ((param_3 & 1) == 0) {
    local_88 = FUN_00d85468;
  }
  local_80 = 5;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_88,1,2);
  plVar6 = (long *)FUN_00d84eec(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Baptiste_A_CC_02bf02f8);
  local_88 = FUN_00d85848;
  local_80 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_88);
  uVar3 = uVar3 | param_3 ^ 1;
  if ((uVar3 & 1) != 0) {
    plVar6 = (long *)FUN_00d84eec(lVar5);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(0x40000000,0x3f266666,plVar6,1,0);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                               (plVar6,PTR_s_Buff_Baptiste_PerkSoulSender_02bf02f0);
    local_88 = (code *)CONCAT44(local_88._4_4_,0x3dcccccd);
    local_80 = 1;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,&local_88);
    (**(code **)(*plVar6 + 0x60))(plVar6,FUN_00d84918);
  }
  plVar6 = (long *)FUN_00d84e4c(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(0x40000000,0x3f266666,0xbf800000,plVar6,0x40000,1);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
  pcVar1 = FUN_00d85498;
  if ((param_3 & 1) == 0) {
    pcVar1 = FUN_00d85488;
  }
  local_80 = 5;
  local_88 = pcVar1;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_88,1,2);
  FUN_00d84e9c(lVar5);
  FUN_00d82cf0();
  lVar5 = FUN_00d851a4(param_1 + 0x100);
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_00d84e4c(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(0x40000000,0x3f266666,0xbf800000,plVar6,0x40000,1);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
  local_80 = 5;
  local_88 = pcVar1;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_88,1,2);
  if ((uVar3 & 1) != 0) {
    plVar6 = (long *)FUN_00d84eec(lVar5);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(0x40000000,0x3f266666,plVar6,1,0);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                               (plVar6,PTR_s_Buff_Baptiste_PerkSoulSender_02bf02f0);
    local_88 = (code *)CONCAT44(local_88._4_4_,0x3dcccccd);
    local_80 = 1;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_88);
  }
  FUN_00d84e9c(lVar5);
  FUN_00d82cf0();
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d85848(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,7,0x19,0);
  return;
}




void FUN_00d8585c(undefined8 param_1,undefined8 param_2)

{
  FUN_00d854a8(param_1,param_2,0);
  return;
}




void FUN_00d85864(undefined8 param_1,undefined8 param_2)

{
  FUN_00d854a8(param_1,param_2,1);
  return;
}




void FUN_00d8586c(long param_1,long param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_68 [2];
  undefined4 local_60;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d817bc();
  uVar2 = FUN_00d80f68(param_1);
  *(char **)(param_2 + 0x30) = "Effect_Baptiste_Ultimate_GroundFX";
  *(char **)(param_2 + 0x60) = "Sound_Baptiste_Ability_C_Impact";
  *(undefined2 *)(param_2 + 0xa4) = 0x5a00;
  *(undefined1 *)(param_2 + 0xa6) = 0x82;
  FUN_00d80ec4(0x3fa66666,param_1);
  lVar7 = param_1 + 0x120;
  FUN_00e5fc3c(lVar7);
  *(long *)(param_1 + 0x118) = lVar7;
  uVar3 = FUN_00e5fe74(lVar7);
  FUN_00d59f54(uVar2,2,6,0x19,0);
  FUN_00e5fe1c(uVar3,param_1,2);
  FUN_00d80c00(param_1,local_68);
  lVar7 = param_1 + 0x100;
  uVar2 = FUN_00d850b4(lVar7);
  lVar4 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar5 = (long *)FUN_00d84eec(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Baptiste_Ultimate_CC_02bf0318);
  local_58 = FUN_00d85ad4;
  local_50 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(local_68[0]);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))(local_60);
  (**(code **)(*plVar5 + 0x48))(plVar5,param_3 & 1);
  plVar5 = (long *)FUN_00d84eec(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Baptiste_Ultimate_DOT_02bf0310);
  local_58._0_4_ = 0x3e4ccccd;
  local_50 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  (**(code **)(*plVar5 + 0x48))(plVar5,param_3 & 1);
  lVar4 = FUN_00d80f68(param_1);
  uVar6 = FUN_00d44008(*(undefined4 *)(lVar4 + 0x260),PTR_s_Buff_Baptiste_Talent_TheReaper_02bee290)
  ;
  if (((uVar6 & 1) != 0) || ((param_3 & 1) == 0)) {
    uVar2 = FUN_00d850b4(lVar7);
    lVar4 = FUN_00d84048(uVar2,param_1,1);
    plVar5 = (long *)FUN_00d84eec(lVar4 + 0x10);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x38))
                               (plVar5,PTR_s_Buff_Baptiste_PerkSoulSender_02bf02f0);
    local_58._0_4_ = 0x3dcccccd;
    local_50 = 1;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
  }
  lVar7 = FUN_00d851a4(lVar7);
  FUN_00d84e9c(lVar7 + 0x10);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d85ad4(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




void FUN_00d85ae8(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8586c(param_1,param_2,0);
  return;
}




void FUN_00d85af0(undefined8 param_1,undefined8 param_2)

{
  FUN_00d8586c(param_1,param_2,1);
  return;
}




void FUN_00d85af8(long param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00d80f68();
  *param_2 = "Effect_Baron_DefaultAttack";
  param_2[4] = "Effect_Baron_DefaultAttack_Impact";
  param_2[0xc] = "Sound_Baron_Rocket_Impact";
  lVar2 = param_1 + 0x120;
  FUN_00e5ff9c(lVar2);
  *(long *)(param_1 + 0x118) = lVar2;
  FUN_00e5ffd8(0x41880000,lVar2);
  lVar2 = FUN_00d84dfc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d84e4c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  (**(code **)(*plVar3 + 0x68))(plVar3,param_4);
  plVar3 = (long *)FUN_00d84e4c(lVar2);
  uVar4 = thunk_FUN_00d086f0(uVar1,0,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(uVar4,0xbf800000,0xbf800000,plVar3,0x40000,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(plVar3,"DEFAULT_ATTACK_SPLASH_DAMAGE");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,param_3);
  (**(code **)(*plVar3 + 0x68))(plVar3,param_4);
  FUN_00d84e9c(lVar2);
  FUN_00d82cf0();
  return;
}




void FUN_00d85c3c(undefined8 param_1,undefined8 param_2)

{
  FUN_00d85af8(param_1,param_2,0,0);
  return;
}




void FUN_00d85c48(undefined8 param_1,undefined8 param_2)

{
  FUN_00d85af8(param_1,param_2,2,0);
  return;
}




void FUN_00d85c54(undefined8 param_1,undefined8 param_2)

{
  FUN_00d85af8(param_1,param_2,1,"Baron_QuickAttack");
  return;
}




void FUN_00d85c64(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d80f68();
  *param_2 = "Effect_Baron_A_Shot";
  param_2[4] = "Effect_Baron_A_Shot_Impact";
  param_2[0xc] = "Sound_Baron_Ability_A_Impact";
  uVar3 = FUN_00d44008(*(undefined4 *)(lVar2 + 0x260),
                       PTR_s_Buff_Baron_Talent_EndlessMortars_02beded8);
  if ((uVar3 & 1) == 0) {
    FUN_00e5e52c(param_1 + 0x120);
    *(long *)(param_1 + 0x118) = param_1 + 0x120;
    uVar3 = FUN_00d59f54(lVar2,1,5,0x19,0);
  }
  else {
    fVar6 = (float)FUN_00d59f54(lVar2,1,5,0x19,0);
    fVar7 = (float)FUN_00d5a3d0(lVar2,DAT_031abf6c,3,9);
    uVar3 = (ulong)(uint)(fVar6 * (1.0 - fVar7));
    FUN_00e5e52c(param_1 + 0x120);
    *(long *)(param_1 + 0x118) = param_1 + 0x120;
  }
  uVar4 = FUN_00e5e560(uVar3,param_1 + 0x120,param_1);
  FUN_00e5e74c(0x3f000000,0,0x3f123a14,uVar4,param_1);
  uVar4 = FUN_00d59f54(lVar2,1,6,0x19,0);
  fVar6 = (float)FUN_00d59f54(lVar2,1,9,5,0);
  fVar7 = (float)FUN_00d59f54(lVar2,1,10,0x19,0);
  if (fVar7 <= fVar6) {
    fVar6 = fVar7;
  }
  lVar2 = FUN_00d85f00(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar5 = (long *)FUN_00d84e4c(lVar2);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(uVar4,0x3ee66666,0xbf800000,plVar5,0x40000,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x30))(plVar5,1);
  plVar5 = (long *)FUN_00d84eec(lVar2);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(uVar4,0x3ee66666,plVar5,0x40000,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Baron_A_Slow_02bf0350);
  local_68 = FUN_00d85eec;
  local_60 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_68);
  (**(code **)(*plVar5 + 0x38))(fVar6);
  FUN_00d84e9c(lVar2);
  FUN_00d82cf0();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d85eec(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,0xb,0x19,0);
  return;
}




void FUN_00d85f00(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_00cdae1c();
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




void FUN_00d85f50(long param_1)

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
  plVar5 = (long *)FUN_00d84e4c(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,"Damage",2);
  (**(code **)(*plVar5 + 0x70))(plVar5,1);
  plVar5 = (long *)FUN_00d84eec(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))
                             (plVar5,PTR_s_Buff_Blackfeather_HitByRoseOffen_02bf03e0);
  local_48[0] = 0x3dcccccd;
  local_40 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

