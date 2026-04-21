// functions/00cef — 26 functions
#include "libGameKindred.h"




void FUN_00cef074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  thunk_FUN_00d086f0(param_2,3,1);
  FUN_00cfb9e4(param_2,param_3);
  return;
}




void FUN_00cef0ac(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfb05c(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar3 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09d1c(*(undefined4 *)(lVar4 + 0x350));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Gwen_Empowered_Release",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar2,param_3,param_2);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9ab4(auStack_58);
  FUN_00cf4540(uVar2,PTR_s_Buff_Gwen_PerkTimer_02beb5b0,FUN_00cef074,1,0);
  FUN_00cf9eec(auStack_58);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cef208(void)

{
  FUN_00cef0ac("Attack",&DAT_01bc90fa,0x19);
  return;
}




void FUN_00cef220(void)

{
  FUN_00cef0ac("AltAttack",&DAT_01bc90fa,0x19);
  return;
}




void FUN_00cef238(void)

{
  FUN_00cef0ac("CritAttack","AA_Crit",0x1a);
  return;
}




void FUN_00cef250(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"PerkAttack",0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,0x1b,"AA_Empowered");
  uVar3 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09d1c(*(undefined4 *)(lVar4 + 0x358));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Gwen_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Gwen_Attack_2");
  FUN_00cf41bc(uVar3,"Sound_Gwen_Attack_3");
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Gwen_PerkReady_02beb5a8);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf4540(uVar2,PTR_s_Buff_Gwen_PerkTimer_02beb5b0,FUN_00cef074,1,0);
  FUN_00cf9eec(auStack_48);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cef3e0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [64];
  undefined4 local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  lVar2 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_a8);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_a8);
  FUN_00cf3048(uVar3,"Ability01",0,1,0,"AttackToIdleCombat");
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7580(uVar3,FUN_00cef688);
  FUN_00cf7578(uVar3,0);
  uVar4 = FUN_00cfab94(auStack_a8);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09d1c(*(undefined4 *)(lVar2 + 0x35c));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sounds_Gwen_Ability_A_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"Sounds_Gwen_Ability_A_2");
  FUN_00cf41bc(uVar4,"Sounds_Gwen_Ability_A_3");
  uVar3 = FUN_00cfaa74(auStack_a8);
  FUN_00cf32cc(0x3e4ccccd,uVar3,"Effect_Gwen_Cone",0,0,1,0,0);
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dabc(auStack_98,0x40000);
  FUN_00d4dba0(0x41b40000,auStack_98);
  FUN_00d4dcdc(auStack_98,1);
  local_58 = 0x3f266666;
  uVar3 = FUN_00cfaf84(auStack_a8);
  FUN_00cf5504(uVar3,auStack_98,0,FUN_00cef69c,0,1,0);
  FUN_00cfa09c(auStack_a8);
  uVar3 = FUN_00cf9ab4(auStack_a8);
  FUN_00cf456c(uVar3,PTR_s_Buff_Gwen_Slow_02beb5b8,FUN_00cef6b0,1,0);
  uVar3 = FUN_00cf9ab4(auStack_a8);
  uVar3 = FUN_00cf456c(uVar3,PTR_s_Buff_GloballyVisibleTrueSight_02bebae0,FUN_00cef6b0,1,0);
  FUN_00cf45c4(uVar3,FUN_00cfbf3c);
  uVar3 = FUN_00cf9ab4(auStack_a8);
  uVar3 = FUN_00cf456c(uVar3,PTR_s_Buff_ShowGloballyVisible_02bebb20,FUN_00cef6b0,1,0);
  FUN_00cf45c4(uVar3,FUN_00cfbf3c);
  FUN_00cf9eec(auStack_a8);
  lVar2 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_a8);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cef688(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,5,0x19,0);
  return;
}




void FUN_00cef69c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00cef6b0(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




undefined1  [16] FUN_00cef6c4(long param_1)

{
  ulong uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined8 uVar5;
  
  auVar3 = FUN_00d59f54(param_1,2,2,0x19,0);
  uVar5 = auVar3._8_8_;
  uVar4 = auVar3._0_8_;
  uVar1 = FUN_00d44008(*(undefined4 *)(param_1 + 0x260),PTR_s_Buff_Gwen_Talent_Skedaddling_02bedf80)
  ;
  if ((uVar1 & 1) != 0) {
    fVar2 = (float)FUN_00d5a3d0(param_1,DAT_031abfc0,0,9);
    uVar4 = (ulong)(uint)(auVar3._0_4_ + fVar2);
    uVar5 = 0;
  }
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = uVar4;
  return auVar3;
}




undefined1  [16] FUN_00cef73c(long param_1)

{
  ulong uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined8 uVar5;
  
  auVar3 = FUN_00d59f54(param_1,2,4,0x19,0);
  uVar5 = auVar3._8_8_;
  uVar4 = auVar3._0_8_;
  uVar1 = FUN_00d44008(*(undefined4 *)(param_1 + 0x260),PTR_s_Buff_Gwen_Talent_Skedaddling_02bedf80)
  ;
  if ((uVar1 & 1) != 0) {
    fVar2 = (float)FUN_00d5a3d0(param_1,DAT_031abfc0,0,9);
    uVar4 = (ulong)(uint)(auVar3._0_4_ + fVar2);
    uVar5 = 0;
  }
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = uVar4;
  return auVar3;
}




void FUN_00cef7b4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  uVar3 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d09d1c(*(undefined4 *)(lVar4 + 0x360));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"Sound_Gwen_Ability_B",0,0,0xffffffff,0,1);
  FUN_00cf98bc(auStack_58);
  puVar2 = PTR_s_Buff_Gwen_SelfCleanse_02beb5c0;
  uVar5 = FUN_00cf9ab4(auStack_58);
  FUN_00cf456c(uVar5,puVar2,FUN_00cef6c4,1,0);
  puVar2 = PTR_s_Buff_Gwen_B_ActiveSpeed_02beb5c8;
  uVar5 = FUN_00cf9ab4(auStack_58);
  FUN_00cf456c(uVar5,puVar2,FUN_00cef73c,1,0);
  FUN_00cf9eec(auStack_58);
  FUN_00da06a0(auStack_58,PTR_s_Buff_Gwen_Talent_SpeedLoader_02bedf60);
  FUN_00d9b0f8();
  puVar2 = PTR_s_Ability__Gwen__A_02beaef0;
  plVar6 = (long *)FUN_00cfa8c4();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,puVar2);
  local_48[0] = 0;
  local_40 = 1;
  (**(code **)(*plVar6 + 0x20))(plVar6,local_48);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cef908(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_48);
  uVar3 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar3,"Ability03",0,1,0,"AttackToIdleCombat");
  uVar3 = FUN_00cfaa74(auStack_48);
  FUN_00cf3428(0x3f19999a,uVar3,"Effect_Gwen_C_Charge",1,"Bone_RightHand",0,1,0,0);
  uVar4 = FUN_00cfab94(auStack_48);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09d1c(*(undefined4 *)(lVar2 + 0x364));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Gwen_Ability_C_Release",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7580(uVar3,FUN_00cefb0c);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  uVar3 = FUN_00cfcad8(uVar3,0x1c,&DAT_01e239e7);
  FUN_00cfcba8(uVar3,1);
  lVar2 = FUN_00cf9f7c(auStack_48);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Gwen_Talent_ThreeOfAKind_02bedf70;
  uVar3 = FUN_00cfb17c(lVar2 + 0xb0);
  uVar3 = FUN_00cfcad8(uVar3,0x1c,&DAT_01e239e7);
  FUN_00cfcba8(uVar3,1);
  FUN_00cfcbc4(0xc1c80000);
  uVar3 = FUN_00cfb17c(lVar2 + 0xb0);
  uVar3 = FUN_00cfcad8(uVar3,0x1c,&DAT_01e239e7);
  FUN_00cfcba8(uVar3,1);
  FUN_00cfcbc4(0x41c80000);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cefb0c(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,5,0x19,0);
  return;
}




undefined8 * FUN_00cefb20(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *(undefined4 *)(puVar1 + 2) = 0;
      *puVar1 = &PTR_FUN_0280f2b8;
      puVar1[1] = 0;
      puVar1[-1] = puVar1;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 9;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




bool FUN_00cefb80(long param_1,undefined8 param_2)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = FUN_00d99344(param_2);
  bVar1 = false;
  if (lVar3 != 0) {
    bVar2 = FUN_00d99e94(lVar3,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    bVar1 = (bVar2 & 1) != *(byte *)(param_1 + 0x14);
  }
  return bVar1;
}




void FUN_00cefbc4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(param_1,uVar2,param_2,1,0);
  FUN_00cf9eec(auStack_48);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cefc58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_00cf98bc();
  uVar1 = FUN_00cf9ab4(param_2);
  FUN_00cf44e8(param_1,uVar1,param_3,1,0);
  FUN_00cf9eec(param_2);
  FUN_00cfb0a4(param_2);
  FUN_00cfb5c4(param_2);
  return;
}




void FUN_00cefcb8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d6eb50();
  uVar3 = FUN_00d6eb5c(uVar3,PTR_s__Item_HealingFlask__02beb0b0);
  FUN_00cfb5b4(auStack_48);
  FUN_00cf98bc(auStack_48);
  uVar4 = FUN_00cf9ab4(auStack_48);
  puVar2 = PTR_s_Buff_Item_HealingFlask_02beb6b0;
  FUN_00d08524(uVar3,0,1);
  FUN_00cf44e8(uVar4,puVar2,1,0);
  FUN_00cf9eec(auStack_48);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cefd7c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_SprintBoots__02beb138);
  puVar1 = PTR_s_Buff_Item_SprintBootsSprint_02beb728;
  FUN_00d08524(uVar2,2,1);
  FUN_00cefbc4(puVar1);
  return;
}




void FUN_00cefdc4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_TravelBoots__02beb168);
  puVar1 = PTR_s_Buff_Item_TravelBootsSprint_02beb730;
  FUN_00d08524(uVar2,3,1);
  FUN_00cefbc4(puVar1);
  return;
}




void FUN_00cefe0c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_JourneyBoots__02beb0b8);
  puVar1 = PTR_s_Buff_Item_JourneyBootsSprint_02beb738;
  FUN_00d08524(uVar2,3,1);
  FUN_00cefbc4(puVar1);
  return;
}




void FUN_00cefe54(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_HalcyonChargers__02beb0a8);
  puVar1 = PTR_s_Buff_Item_HalcyonChargersSprint_02beb740;
  FUN_00d08524(uVar2,3,1);
  FUN_00cefbc4(puVar1);
  return;
}




void FUN_00cefe9c(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6eb5c(uVar1,PTR_s__Item_MinionCandy__02beb0c8);
  uVar2 = FUN_00d08524(uVar1,*(uint *)(param_2 + 0x2f4) >> 9 & 1,1);
  *param_3 = uVar2;
  return;
}




long FUN_00cefee4(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [112];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_MinionCandy__02beb0c8);
  FUN_00d4e934(auStack_b0,DAT_0315cbdc);
  uVar3 = FUN_00d50ef8(param_1);
  FUN_00d4db40(auStack_b0,uVar3);
  FUN_00d4daf4(auStack_b0,1,0,0,0);
  FUN_00d4dac4(auStack_b0,0x210);
  FUN_00d4e998(auStack_b0,1);
  uVar3 = FUN_00d50ef8(param_1);
  FUN_00d55794(uVar3,auStack_c0,0);
  FUN_00d08524(uVar2,2,1);
  FUN_00d4db48(auStack_b0,auStack_c0);
  iVar1 = FUN_00d9e840(auStack_b0,auStack_40,1,0);
  if (iVar1 == 0) {
    FUN_00d4e934(auStack_b0,DAT_0315cbdc);
    FUN_00d4dad4(auStack_b0,0);
    FUN_00d4daf4(auStack_b0,1,0,0,0);
    FUN_00d4dabc(auStack_b0,0x200);
    FUN_00d4e998(auStack_b0,1);
    uVar3 = FUN_00d50ef8(param_1);
    FUN_00d55794(uVar3,auStack_c0,0);
    FUN_00d08524(uVar2,2,1);
    FUN_00d4db48(auStack_b0,auStack_c0);
    iVar1 = FUN_00d9e840(auStack_b0,auStack_40,1,0);
    if (*(long *)(lVar4 + 0x28) != local_38) goto LAB_00cf0094;
    lVar4 = (ulong)(iVar1 == 0) << 10;
  }
  else {
    if (*(long *)(lVar4 + 0x28) != local_38) {
LAB_00cf0094:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar4 = 0;
  }
  return lVar4;
}

