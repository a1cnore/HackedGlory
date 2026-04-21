// functions/00e15 — 20 functions
#include "libGameKindred.h"




void FUN_00e150bc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d2b564();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d59f54(uVar2,2,4,0x19,0);
  FUN_00d40908(uVar4,5);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e15160(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e151c4;
  local_30 = 3;
  FUN_00d42a20(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e151c4(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,7,0x19,0);
  return;
}




void FUN_00e151d8(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e1523c;
  local_30 = 3;
  FUN_00d42a20(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1523c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,5,0x19,0);
  return;
}




void FUN_00e15250(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48[0] = 0x41a00000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,1,1,local_48);
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48[0] = 0x3e800000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,3,2,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e152fc(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b78();
  uVar2 = FUN_00d9ea34();
  uVar3 = FUN_00d6bbac(uVar2,DAT_031b8df4,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_00d6bbac(uVar2,DAT_031b8df8,&local_3c);
    fVar4 = 0.0;
    if ((uVar3 & 1) != 0) {
      fVar4 = (float)FUN_00d6b9f8(0,uVar2,local_3c);
      fVar5 = (float)FUN_00d6b9b8(uVar2,local_3c);
      fVar4 = 1.0 - fVar4 / fVar5;
    }
  }
  else {
    fVar4 = 1.0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar4);
}




void FUN_00e153b0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_38[0] = 0x3f800000;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x12,1,local_38);
  uVar4 = FUN_00d64464(param_1);
  lVar2 = FUN_00d4bbf8(uVar4,4);
  FUN_00d2a320(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e15440(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d66d28();
  lVar2 = *(long *)(lVar2 + 0x40);
  fVar5 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
          (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
  fVar4 = (*(float *)(lVar2 + 0x1a8) + 1.0) *
          (*(float *)(lVar2 + 0x40) + *(float *)(lVar2 + 0xf4) * (*(float *)(lVar2 + 0x25c) + 1.0));
  if (DAT_031b8f20 <= fVar5) {
    fVar5 = DAT_031b8f20;
  }
  fVar6 = DAT_031b8e60;
  if (DAT_031b8e60 <= fVar5) {
    fVar6 = fVar5;
  }
  if (DAT_031b8f28 <= fVar4) {
    fVar4 = DAT_031b8f28;
  }
  fVar5 = DAT_031b8e68;
  if (DAT_031b8e68 <= fVar4) {
    fVar5 = fVar4;
  }
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_50 = 1;
  local_58[0] = fVar6 * 0.125;
  (**(code **)(*plVar3 + 0x30))(plVar3,1,1,local_58);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_50 = 1;
  local_58[0] = fVar5 * 0.125;
  (**(code **)(*plVar3 + 0x30))(plVar3,3,1,local_58);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_JungleHeal_buff");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e155dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_1);
  FUN_00d4dabc(param_2,0x2000);
  FUN_00d4daf4(param_2,1,0,0,uVar1);
  FUN_00d4dc24(param_2,0);
  return;
}




void FUN_00e15630(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d67dcc(param_1,FUN_00e152fc);
  lVar2 = FUN_00d65a7c(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2887c(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Blitz_Revamp_Regeneration_02bf0410);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Blitz_Revamp_SpawnSpeedBoos_02bf0408);
  uVar4 = FUN_00da63b8(lVar2);
  FUN_00d9c89c(uVar4,FUN_00e155dc);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Blitz_Revamp_HealthDecayCon_02bf0420);
  lVar2 = FUN_00d65fac(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Blitz_Revamp_SpawnSpeedBoos_02bf0408);
  lVar2 = FUN_00d634b4(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Blitz_Revamp_RegenCooldown_02bf0428);
  local_58[0] = 0x40800000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_58);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,4);
  lVar2 = FUN_00d4bc10();
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Blitz_Revamp_RegenCooldown_02bf0428);
  local_58[0] = 0x40800000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_58);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,6);
  lVar2 = FUN_00d4bc24();
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Blitz_Revamp_RegenCooldown_02bf0428);
  local_58[0] = 0x40800000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e157f0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2b6d8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))(plVar3,2);
  local_38[0] = 0xbda3d70a;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x38))(plVar3,local_38);
  uVar4 = FUN_00d6483c(param_1);
  lVar2 = FUN_00d48f64(uVar4,FUN_00e17314);
  FUN_00d2a320(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e15890(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2b6d8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))(plVar3,2);
  local_38[0] = 0xbd23d70a;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x38))(plVar3,local_38);
  uVar4 = FUN_00d6483c(param_1);
  lVar2 = FUN_00d48f64(uVar4,FUN_00e17314);
  FUN_00d2a320(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e15930(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_70 [24];
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_70,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(auStack_70,uVar2);
  FUN_00d40cd4(0xbf800000,uVar2,0x15,2,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(auStack_70,uVar2);
  FUN_00d40cd4(0xbf800000,uVar2,0x14,2,0,0);
  uVar2 = FUN_00d64d7c(param_1);
  lVar3 = FUN_00d4891c(0x3f800000,uVar2,0);
  plVar4 = (long *)FUN_00d2b6d8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4,2);
  local_58[0] = 0xbc23d70a;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x38))(plVar4,local_58);
  plVar4 = (long *)FUN_00d2b6d8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4,4);
  local_58[0] = 0xbcf5c28f;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x38))(plVar4,local_58);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2a110(lVar3 + 0x10);
  local_58[0] = 0xbeae147b;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,7,2,local_58);
  plVar4 = (long *)FUN_00d2a110(lVar3 + 0x10);
  local_58[0] = 0xbeae147b;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,8,2,local_58);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  uVar2 = FUN_00d4bce8(uVar2,1);
  lVar3 = FUN_00d4bc48(uVar2,1);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Blitz_Revamp_HitEnemyHero_02bf0430);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  uVar2 = FUN_00d4bce8(uVar2,1);
  lVar3 = FUN_00d4bc48(uVar2,2);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Blitz_Revamp_HitEnemyHero_02bf0430);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,6);
  uVar2 = FUN_00d4bc24();
  lVar3 = FUN_00d4bce8(uVar2,1);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Blitz_Revamp_HeroEngage_02bf0448)
  ;
  local_58[0] = 0x42700000;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_58);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,6);
  lVar3 = FUN_00d4bc24();
  plVar4 = (long *)FUN_00d2a160(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Blitz_Revamp_Regeneration_02bf0410);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,6);
  uVar2 = FUN_00d4bc24();
  uVar2 = FUN_00d4bce8(uVar2,1);
  lVar3 = FUN_00d4bc48(uVar2,1);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Blitz_Revamp_EnemyHeroHitMe_02bf0438);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,6);
  uVar2 = FUN_00d4bc24();
  uVar2 = FUN_00d4bce8(uVar2,1);
  lVar3 = FUN_00d4bc48(uVar2,2);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Blitz_Revamp_EnemyHeroHitMe_02bf0438);
  FUN_00d63b38(param_1);
  uVar2 = FUN_00d4b7a0();
  uVar2 = FUN_00d4b7f8(uVar2,PTR_s_Buff_Blitz_Revamp_HeroEngage_02bf0448);
  lVar3 = FUN_00d4b7b0(uVar2,1);
  plVar4 = (long *)FUN_00d2a464(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))();
  local_58[0] = 0x443b8000;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x10))(plVar4,6,local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e15cc8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2a160(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Blitz_Revamp_Regeneration_02bf0410);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d64980(param_1);
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e15d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Blitz_Revamp_Regeneration_02bf0410);
  return;
}




void FUN_00e15d30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43250000;
  return;
}




void FUN_00e15d3c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_1);
  FUN_00d4dabc(param_2,1);
  FUN_00d4daf4(param_2,0,1,0,uVar1);
  FUN_00d4d354(param_2,1);
  FUN_00d4d364(param_2,1);
  FUN_00d4dc24(param_2,0);
  return;
}




void FUN_00e15da8(void)

{
  long lVar1;
  
  lVar1 = FUN_00d65e5c();
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e15dc0(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_00d6483c();
  lVar2 = FUN_00d48f64(uVar1,FUN_00e15d30);
  lVar2 = lVar2 + 0x10;
  uVar1 = FUN_00da63b8(lVar2);
  FUN_00d9c89c(uVar1,FUN_00e15d3c);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Blitz_GloballyVisible_02bf0450);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00e15e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Blitz_Revamp_HealthDecay_02bf0458);
  return;
}




void FUN_00e15e34(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Blitz_Revamp_RegenControl_02bf0418);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Blitz_Revamp_RegenCooldown_02bf0428);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Blitz_Revamp_Regeneration_02bf0410);
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_58[0] = 0xbf800000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x23,2,local_58);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_58[0] = 0xbf800000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,1,2,local_58);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_58[0] = 0xbf800000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x17,2,local_58);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_58[0] = 0xbf800000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x18,2,local_58);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_58[0] = 0xbf800000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x20,2,local_58);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_58[0] = 0xbf800000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x21,1,local_58);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_58[0] = 0x3f800000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x12,1,local_58);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3e4ccccd,uVar4,0);
  lVar2 = lVar2 + 0x10;
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x80))();
  local_58[0] = 0x3d23d70a;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_58,2,3);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Blitz_Revamp_Regeneration_02bf0410);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_Lifespring_02beb648);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_UnifiedVamp_Control_02beb870);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_BookOfEulogies_Control_02beb850);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_SerpentMask_Control_02beb678);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_EveOfHarvest_Control_02beb688);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

