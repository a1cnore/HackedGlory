// functions/00e4f — 27 functions
#include "libGameKindred.h"




void FUN_00e4f000(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,4,0x19,0);
  return;
}




void FUN_00e4f014(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"SECONDARY_DAMAGE",3);
  plVar3 = (long *)FUN_00d2cc5c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Anka_Ability_C_Impact_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Anka_Ability_C_Impact_2");
  lVar4 = FUN_00d09310();
  FUN_00d0a25c(*(undefined4 *)(lVar4 + 0x4e8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Anka_C_Clone_Hit");
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"SECONDARY_DAMAGE",3);
  local_58 = FUN_00e4f188;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x88))(plVar3,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4f188(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,5,0x19,0);
  return;
}




void FUN_00e4f19c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d46828(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Anka_C_Clone__InitialDa_02befae0);
  lVar1 = FUN_00d65010(param_1);
  uVar3 = FUN_00d29c84(lVar1 + 0x10);
  FUN_00d46b64(uVar3,0x1700);
  uVar3 = FUN_00d29a18(lVar1 + 0x10);
  FUN_00d46cdc(uVar3,0x11);
  uVar3 = FUN_00d6483c(param_1);
  lVar1 = FUN_00d48f64(uVar3,FUN_00e4f248);
  plVar2 = (long *)FUN_00d46828(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Anka_C_Clone__FinalDash_02befae8);
  lVar1 = FUN_00d64980(param_1);
  FUN_00d394e4(lVar1 + 0x10);
  return;
}




void FUN_00e4f248(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40266666;
  return;
}




float FUN_00e4f258(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)thunk_FUN_00d086f0(param_1,0,3);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar3 = (*(float *)(lVar1 + 0x1dc) + 1.0) *
          (*(float *)(lVar1 + 0x74) + *(float *)(lVar1 + 0x128) * (*(float *)(lVar1 + 0x290) + 1.0))
  ;
  if (DAT_031bc15c <= fVar3) {
    fVar3 = DAT_031bc15c;
  }
  fVar4 = DAT_031bc09c;
  if (DAT_031bc09c <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = 1.0 / fVar4;
  if (1.0 / fVar4 <= 0.1) {
    fVar3 = 0.1;
  }
  return fVar2 * fVar3;
}




void FUN_00e4f2e8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Silvernail_AmmoCharge_Loadi_02bf1608);
  local_38 = FUN_00e4f258;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4f36c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65e5c();
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d3bc68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
  (**(code **)(*plVar2 + 0x58))(plVar2,1);
  lVar1 = FUN_00d64980(param_1);
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e4f3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Silvernail_AmmoCharge_Loade_02bf1610);
  return;
}




void FUN_00e4f3e0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d3bc68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,2);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Silvernail_AmmoCharge_Loadi_02bf1608);
  local_38 = FUN_00e4f258;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4f494(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d67b84(*param_1);
  *param_3 = uVar1;
  return;
}




undefined1  [16] FUN_00e4f4bc(undefined8 *param_1)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  FUN_00d67b84(*param_1);
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    FUN_00d5cf60();
    lVar1 = FUN_00d9e390();
    if (lVar1 != 0) {
      FUN_00d59f54(lVar1,2,10,0x19,0);
      auVar2._4_4_ = extraout_var;
      auVar2._0_4_ = extraout_s0;
      auVar2._8_8_ = extraout_var_00;
      return auVar2;
    }
  }
  return ZEXT816(0);
}




void FUN_00e4f504(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,10,0x19,0);
  return;
}




void FUN_00e4f518(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  undefined4 local_758 [2];
  undefined1 auStack_750 [88];
  undefined1 auStack_6f8 [112];
  long local_688 [200];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar8 = FUN_00ceab48();
  if ((uVar8 & 1) != 0) {
    lVar9 = FUN_00d66d28(*param_1);
    fVar12 = (float)FUN_00d59f54(lVar9,2,6,0x19,0);
    thunk_FUN_00d9ff34(local_758,PTR_s_Buff_Silvernail_A_ActiveTripwire_02bf1618);
    FUN_00d4e934(auStack_6f8,local_758[0]);
    FUN_00d4e998(auStack_6f8,1);
    FUN_00d4db40(auStack_6f8,lVar9);
    FUN_00d4daf4(auStack_6f8,1,0,0,0);
    FUN_00d4ddc4(auStack_6f8);
    FUN_00d4dca4(auStack_6f8,"Silvernail_GroundedBolt",0);
    uVar6 = FUN_00d9e840(auStack_6f8,local_688,200,0);
    puVar4 = PTR_s_Buff_DelayedKill_02beb3e0;
    if ((uint)(int)fVar12 < uVar6) {
      lVar10 = 0;
      uVar8 = (ulong)uVar6;
      bVar5 = true;
      plVar11 = local_688;
      do {
        if ((bVar5) || (*(uint *)(*plVar11 + 0x260) < *(uint *)(lVar10 + 0x260))) {
          lVar10 = *plVar11;
        }
        bVar5 = lVar10 == 0;
        uVar8 = uVar8 - 1;
        plVar11 = plVar11 + 1;
      } while (uVar8 != 0);
      if (lVar10 != 0) {
        uVar1 = *(undefined4 *)(lVar10 + 0x260);
        uVar2 = *(undefined4 *)(lVar9 + 0x260);
        uVar7 = FUN_00ceb350();
        FUN_00cfe864(0x3dcccccd,0,0,auStack_750,uVar2,uVar1,puVar4,uVar7,1,0,0);
        FUN_00ce20fc(auStack_750);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4f6b4(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d64980();
  uVar2 = FUN_00d39a54(lVar1 + 0x10);
  FUN_00d3e604(uVar2,FUN_00e4f518);
  return;
}




void FUN_00e4f6d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67b78();
  FUN_00d55794(uVar2,auStack_58,0);
  FUN_00d5cf60(uVar2);
  uVar3 = FUN_00d9e390();
  fVar5 = (float)FUN_00d59f54(uVar3,2,5,0x19,0);
  uVar4 = FUN_00d44be0(uVar3,PTR_s_Buff_Silvernail_Talent_TalentC_02bf2210);
  if ((uVar4 & 1) != 0) {
    fVar6 = (float)FUN_00d5a3d0(uVar3,DAT_0320ec98,2,9);
    fVar5 = fVar5 + fVar6;
  }
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,1,0,0,0);
  FUN_00d4dca4(param_2,"Silvernail_GroundedBolt",0);
  FUN_00d4db48(fVar5 + 0.01,param_2,auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4f7f0(void)

{
  long lVar1;
  
  lVar1 = FUN_00d65010();
  FUN_00d2b688(lVar1 + 0x10);
  return;
}




void FUN_00e4f808(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00d66d28(*param_1);
  uVar1 = FUN_00d5cf60();
  FUN_00d44008(uVar1,PTR_s_Buff_Silvernail_Talent_TalentC_02bf2210);
  return;
}




undefined4 FUN_00e4f830(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00d67b84(*param_1);
  lVar1 = FUN_00d9e390();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_00d59f54(lVar1,2,5,0x19,0);
    uVar2 = FUN_00d44be0(lVar1,PTR_s_Buff_Silvernail_Talent_TalentC_02bf2210);
    uVar4 = 0;
    if ((uVar2 & 1) == 0) {
      uVar4 = uVar3;
    }
  }
  return uVar4;
}




undefined1  [16] FUN_00e4f8a8(undefined8 param_1)

{
  ulong uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined8 uVar5;
  
  auVar3 = FUN_00d59f54(param_1,2,7,0x19,0);
  uVar5 = auVar3._8_8_;
  uVar4 = auVar3._0_8_;
  uVar1 = FUN_00d44be0(param_1,PTR_s_Buff_Silvernail_Talent_TalentC_02bf2210);
  if ((uVar1 & 1) != 0) {
    fVar2 = (float)FUN_00d5a3d0(param_1,DAT_0320ec98,1,9);
    uVar4 = (ulong)(uint)(auVar3._0_4_ * fVar2);
    uVar5 = 0;
  }
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = uVar4;
  return auVar3;
}




void FUN_00e4f920(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00e4a500(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Silvernail_A_Shot_Impact");
  lVar4 = FUN_00d09310();
  FUN_00d0a2b0(*(undefined4 *)(lVar4 + 0x4f4));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Silvernail_Stake_Impact");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Silvernail_A_Tower_Hide_Mes_02bf1628);
  local_68 = (code *)CONCAT44(local_68._4_4_,0x3ecccccd);
  local_60 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_68);
  uVar5 = FUN_00d39b7c(lVar2);
  uVar5 = FUN_00d9cef8(uVar5,FUN_00e4f6d8);
  FUN_00d9cb40(uVar5,PTR_s_Buff_Silvernail_A_Tower_AttachPo_02bf1630);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Silvernail_A_ActiveTripwire_02bf1638);
  lVar4 = FUN_00d66d28(param_1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,*(undefined4 *)(lVar4 + 0x260));
  local_68 = FUN_00e4f504;
  local_60 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_68);
  lVar4 = FUN_00d29e8c(lVar2);
  lVar6 = FUN_00e19450(lVar4 + 0x10);
  *(undefined4 *)(lVar6 + 0x18) = 0;
  *(undefined4 *)(lVar6 + 8) = 0;
  *(undefined4 *)(lVar6 + 0x10) = 1;
  FUN_00d39534(lVar4 + 0x88);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Silvernail_A_ActiveTripwire_02bf1640);
  lVar4 = FUN_00d66d28(param_1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,*(undefined4 *)(lVar4 + 0x260));
  local_68 = FUN_00e4f504;
  local_60 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_68);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Silvernail_A_ActiveTripwire_02bf1618);
  lVar4 = FUN_00d66d28(param_1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,*(undefined4 *)(lVar4 + 0x260));
  local_68 = FUN_00e4f8a8;
  local_60 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_68);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_RevealToBestowersEnemiesTea_02bebb10);
  lVar2 = FUN_00d29e8c(lVar2);
  lVar4 = FUN_00d29edc(lVar2 + 0x10);
  *(code **)(lVar4 + 8) = FUN_00e4f808;
  plVar3 = (long *)FUN_00d2cfcc(lVar2 + 0xa0);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Silvernail_A_Tower_AttachPo_02bf1630);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x98))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))
                             (plVar3,"Effect_Silvernail_Tripwire_AttachAvail_Ring");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  local_68 = FUN_00e4f830;
  local_60 = 4;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,&local_68);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4fc6c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  
  FUN_00d67b84(*param_1);
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    *param_2 = lVar1;
    *param_3 = "ActorBase";
  }
  return;
}




void FUN_00e4fcac(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = FUN_00d64980();
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Silvernail_A_ActiveTripwire_02bf1648);
  uVar1 = FUN_00d67b84(param_1);
  (**(code **)(*plVar3 + 0x30))(plVar3,uVar1);
  lVar2 = FUN_00d29e8c(lVar2 + 0x10);
  lVar4 = FUN_00d29edc(lVar2 + 0x10);
  lVar2 = lVar2 + 0x88;
  *(code **)(lVar4 + 8) = FUN_00e4f808;
  FUN_00d39534(lVar2);
  FUN_00e0c91c(lVar2);
  plVar3 = (long *)FUN_00d2cfcc(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00e4fd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Silvernail_A_Tower_AttachPo_02bf1630);
  return;
}




void FUN_00e4fd60(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"ActorBase");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Silvernail_Tripwire_Preactive_Wire")
  ;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  (**(code **)(*plVar2 + 0xa0))(plVar2,FUN_00e4fc6c);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_FX");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Silvernail_Tripwire_Preactive");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  lVar1 = FUN_00d64980(param_1);
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e4fe34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Silvernail_A_ActiveTripwire_02bf1650);
  return;
}




void FUN_00e4fe38(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  
  FUN_00d67b84(*param_1);
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    *param_2 = lVar1;
    *param_4 = "Bone_FX";
  }
  return;
}




void FUN_00e4fe78(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2df94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Silvernail_A_Tripwire_Loop");
  lVar1 = FUN_00d09310();
  FUN_00d0a2b0(*(undefined4 *)(lVar1 + 0x4f4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_00d64980(param_1);
  plVar2 = (long *)FUN_00e4a500(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Silvernail_A_Tripwire_End");
  lVar1 = FUN_00d09310();
  FUN_00d0a2b0(*(undefined4 *)(lVar1 + 0x4f4));
                    /* WARNING: Could not recover jumptable at 0x00e4ff10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_00e4ff14(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Silvernail_A_ActiveTripwire_02bf1658);
  FUN_00d66d28(param_1);
  uVar1 = FUN_00d5cf60();
  (**(code **)(*plVar3 + 0x30))(plVar3,uVar1);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_FX");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Silvernail_Tripwire_Ally");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00e4ffc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0xa0))(plVar3,FUN_00e4fe38);
  return;
}




void FUN_00e4ffcc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = FUN_00d67b78();
  FUN_00d55794(uVar1,param_2,0);
  FUN_00d67b84(param_1);
  lVar2 = FUN_00d9e390();
  if (lVar2 != 0) {
    FUN_00d55794(lVar2,param_3,0);
    return;
  }
  fVar4 = *(float *)(param_2 + 1);
  fVar3 = DAT_03218f70 * 0.001;
  *param_3 = CONCAT44((float)((ulong)DAT_03218f68 >> 0x20) * 0.001 +
                      (float)((ulong)*param_2 >> 0x20),(float)DAT_03218f68 * 0.001 + (float)*param_2
                     );
  *(float *)(param_3 + 1) = fVar3 + fVar4;
  return;
}

