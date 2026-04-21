// functions/00e36 — 14 functions
#include "libGameKindred.h"




void FUN_00e36038(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d67b04(0x3dcccccd);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_time_out_of_combat_02bf0e00;
    uVar4 = FUN_00e6a474(PTR_s_time_out_of_combat_02bf0e00);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    (**(code **)(*(long *)(lVar6 + 0x100) + 8))(lVar6 + 0x100,uVar4);
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_time_out_of_combat_02bf0e00;
    uVar4 = FUN_00e6a474(PTR_s_time_out_of_combat_02bf0e00);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x100) + 0x10))(lVar6 + 0x100,uVar4);
    *puVar7 = 0;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onAfterApplyDamageName_02bed608;
    uVar4 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e35b2c;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBuffIntervalName_02bed520;
    uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e35e30;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  }
  uVar8 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,uVar8);
  FUN_00d3e534();
  uVar8 = FUN_00d39980();
  FUN_00d42654(auStack_60,uVar8);
  uVar9 = FUN_00d66d28(param_1);
  thunk_FUN_00d086f0(uVar9,0,1);
  FUN_00d40cd4(uVar8,0x2b,0,1,0);
  FUN_00d3e534();
  uVar8 = FUN_00e0fb7c();
  FUN_00d42654(auStack_60,uVar8);
  FUN_00d411dc(0,uVar8,3,1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3626c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  lVar2 = FUN_00d9e390();
  FUN_00d59f54(lVar2,0,7,0x19,0);
  FUN_00d67d04(param_1);
  lVar3 = FUN_00d63f30(param_1);
  plVar4 = (long *)FUN_00d2cc5c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Rona_Ability_A_Swing");
  lVar5 = FUN_00d09310();
  FUN_00d0992c(*(undefined4 *)(lVar5 + 0x1e8));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Rona_Leap_Land_Enemy");
  lVar3 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Rona_RupturedGround_02bf0e28);
  local_58 = FUN_00e363b4;
  local_50 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  (**(code **)(*plVar4 + 0x30))(plVar4,*(undefined4 *)(lVar2 + 0x260));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e363b4(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,8,0x19,0);
  return;
}




void FUN_00e363c8(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  iVar1 = FUN_00d67bf4();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uVar4 = 0;
    iVar1 = 0;
    do {
      lVar3 = FUN_00d67bdc(param_1,uVar4);
      uVar4 = uVar4 + 1;
      iVar1 = (*(uint *)(lVar3 + 0x2f4) & 1) + iVar1;
      uVar2 = FUN_00d67bf4(param_1);
    } while (uVar4 < uVar2);
  }
  *param_3 = iVar1;
  return;
}




bool FUN_00e36438(void)

{
  int iVar1;
  
  iVar1 = FUN_00d67bf4();
  return iVar1 != 0;
}




void FUN_00e36454(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_130 [2];
  undefined4 local_128;
  undefined1 auStack_118 [96];
  undefined1 auStack_b8 [96];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  lVar3 = FUN_00d9e390();
  FUN_00d67b04(0x3dcccccd,param_1);
  FUN_00d4d9e8(auStack_b8);
  FUN_00d4dabc(auStack_b8,1);
  FUN_00d4daf4(auStack_b8,0,1,0,lVar3);
  FUN_00d4db48(0x40400000,auStack_b8,&DAT_03218f30);
  FUN_00d4d9e8(auStack_118);
  FUN_00d4dabc(auStack_118,0x40000);
  FUN_00d4daf4(auStack_118,0,1,0,lVar3);
  FUN_00d4db48(0x40400000,auStack_118,&DAT_03218f30);
  lVar4 = FUN_00d63f30(param_1);
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_00d2cc5c(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,"Sound_Rona_Ability_A_Impact");
  lVar6 = FUN_00d09310();
  (**(code **)(*plVar5 + 0x28))(*(undefined4 *)(lVar6 + 0x1ec),plVar5);
  plVar5 = (long *)FUN_00d2b778(lVar4);
  local_130[0] = 0x40400000;
  local_128 = 1;
  (**(code **)(*plVar5 + 0x30))(plVar5,local_130);
  plVar5 = (long *)FUN_00d2b818(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"RupturedGroundDamage",0);
  uVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(local_130,uVar7);
  FUN_00d3e534();
  uVar7 = FUN_00d3940c();
  FUN_00d42654(local_130,uVar7);
  FUN_00d3fad8(uVar7,auStack_b8,0,1);
  FUN_00d3e534();
  uVar7 = FUN_00d2cb84();
  FUN_00d42654(local_130,uVar7);
  puVar2 = PTR_s_Buff_Rona_RupturedGround_Fortifi_02bf0e30;
  uVar8 = FUN_00d59f54(lVar3,0,6,0x19,0);
  uVar7 = FUN_00d3e8d0(uVar8,0,0,uVar7,puVar2,FUN_00e363c8,0xffffffff,0);
  uVar7 = FUN_00d3e8ec(uVar7,FUN_00e36438);
  FUN_00d3e8f4(uVar7,*(undefined4 *)(lVar3 + 0x260));
  FUN_00d3e534();
  uVar7 = FUN_00d2a6c0();
  FUN_00d42654(local_130,uVar7);
  lVar4 = FUN_00d67c60(param_1);
  FUN_00d425ec(local_130,lVar4 + 0x28);
  FUN_00d3e534();
  uVar7 = FUN_00d3940c();
  FUN_00d42654(local_130,uVar7);
  FUN_00d3fad8(uVar7,auStack_118,0,1);
  FUN_00d3e534();
  uVar7 = FUN_00d2cb84();
  FUN_00d42654(local_130,uVar7);
  FUN_00d3e888(0x3e4ccccd,0,0,uVar7,PTR_s_Buff_Rona_StandingOnRupturedGrou_02bf0e38,1,
               *(undefined4 *)(lVar3 + 0x260),0,0);
  FUN_00d3e534();
  uVar7 = FUN_00d2a6c0();
  FUN_00d42654(local_130,uVar7);
  lVar4 = FUN_00d67c60(param_1);
  FUN_00d425ec(local_130,lVar4 + 0x18);
  FUN_00d3e534();
  uVar7 = FUN_00d29cd4();
  FUN_00d42654(local_130,uVar7);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e36784(undefined8 param_1)

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
  FUN_00d59f54(uVar2,0,5,0x19,0);
  FUN_00d40908(uVar4,5);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 8);
  FUN_00d3e534();
  uVar2 = FUN_00d2965c();
  FUN_00d42654(auStack_50,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e36850(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  uVar4 = FUN_00d59f54(uVar2,0,9,0x19,0);
  FUN_00d3e534();
  uVar2 = FUN_00d29584();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d472ec(uVar4,uVar2,2);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 8);
  FUN_00d3e534();
  uVar2 = FUN_00d2965c();
  FUN_00d42654(auStack_50,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e36930(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00e2d174();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3f364(uVar3,PTR_s_Ability__Rona__BAttackOverride_02bef440);
  FUN_00d3e534();
  uVar3 = FUN_00e37830();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3f09c(uVar3,"Idle","Ability02_Idle");
  FUN_00d3e534();
  uVar3 = FUN_00e37830();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3f09c(uVar3,"IdleCombat","Ability02_Idle");
  FUN_00d3e534();
  uVar3 = FUN_00e37830();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3f09c(uVar3,"Move","Ability02_Run");
  FUN_00d3e534();
  uVar3 = FUN_00e37830();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3f09c(uVar3,"MoveCombat","Ability02_Run");
  FUN_00d3e534();
  uVar3 = FUN_00e37830();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3f09c(uVar3,"MoveStart","Ability02_MoveStart");
  FUN_00d3e534();
  uVar3 = FUN_00e37830();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3f09c(uVar3,"MoveStartCombat","Ability02_MoveStart");
  FUN_00d3e534();
  uVar3 = FUN_00e37830();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3f09c(uVar3,"MoveStop","Ability02_MoveStop");
  FUN_00d3e534();
  uVar3 = FUN_00e37830();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3f09c(uVar3,"MoveStopCombat","Ability02_MoveStop");
  FUN_00d3e534();
  uVar3 = FUN_00d29584();
  FUN_00d42654(auStack_50,uVar3);
  uVar4 = FUN_00d66d28(param_1);
  FUN_00d59f54(uVar4,1,4,0x19,0);
  FUN_00d472ec(uVar3,1);
  FUN_00d3e534();
  uVar3 = FUN_00e32c58();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d416e4(uVar3,PTR_s_Ability__Rona__B_02bef450,PTR_s_Ability__Rona__B_FollowUp_02bef460);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47dec(uVar3,"Bone_LeftAxe");
  FUN_00da2040(uVar3,"Effect_Rona_Weapon");
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47dec(uVar3,"Bone_RightAxe");
  FUN_00da2040(uVar3,"Effect_Rona_Weapon2");
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e36c18(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 local_98;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00d69224(param_1,&local_98);
  lVar5 = FUN_00d66d28(local_98);
  fVar6 = (float)FUN_00d59f54(lVar5,2,3,0x19,0);
  fVar7 = (float)FUN_00d67b0c(local_98);
  fVar6 = fVar6 * fVar7;
  bVar1 = *(float *)(*(long *)(lVar5 + 0x40) + 0x314) <= fVar6;
  if (bVar1) {
    uVar2 = *(undefined4 *)(lVar5 + 0x260);
    uVar4 = FUN_00d66d34(local_98);
    FUN_00d009d0(auStack_60,uVar2,uVar4);
    FUN_00ce20fc(auStack_60);
    uVar2 = *(undefined4 *)(lVar5 + 0x260);
    fVar6 = 0.0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar5 + 0x260);
    fVar6 = -fVar6;
  }
  FUN_00d043c0(fVar6,auStack_90,uVar2,3,bVar1);
  FUN_00ce20fc(auStack_90);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e36d0c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar3);
  uVar4 = FUN_00d66d28(param_1);
  FUN_00d59f54(uVar4,1,8,0x19,0);
  FUN_00d40e24(uVar3,0xf,1);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d2965c();
  FUN_00d42654(auStack_50,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e36dd4(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00d66d28(*param_1);
    lVar5 = *(long *)(lVar4 + 0x18);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar5 = *(long *)(lVar5 + 0x20);
    }
    uVar3 = FUN_00d6bbac(lVar5,DAT_031baccc,&local_3c);
    if ((uVar3 & 1) != 0) {
      uVar1 = *(undefined4 *)(lVar4 + 0x260);
      FUN_00d59f54(lVar4,2,6,0x19,0);
      FUN_00d04628(auStack_68,uVar1,local_3c);
      FUN_00ce20fc(auStack_68);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e36ea8(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28(*param_1);
  FUN_00d55794(uVar2,auStack_48,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4daf4(param_2,0,1,0,uVar2);
  FUN_00d59f54(uVar2,2,1,0x19,0);
  FUN_00d4db48(param_2,auStack_48);
  FUN_00d4dcdc(param_2,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e36f60(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  undefined4 local_d0 [2];
  undefined4 local_c8;
  undefined1 auStack_b8 [96];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00d66d28();
  fVar11 = (float)FUN_00d59f54(uVar5,2,2,0x19,0);
  FUN_00d67b04(1.0 / fVar11,param_1);
  FUN_00d4d9e8(auStack_b8);
  FUN_00d4dabc(auStack_b8,0x40000);
  FUN_00d4daf4(auStack_b8,0,1,0,uVar5);
  FUN_00d59f54(uVar5,2,1,0x19,0);
  FUN_00d4db48(auStack_b8,&DAT_03218f30);
  FUN_00d4dcdc(auStack_b8,1);
  lVar6 = FUN_00d63f30(param_1);
  lVar6 = lVar6 + 0x10;
  plVar7 = (long *)FUN_00d2b6d8(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,"CancelWhirlwind");
  local_d0[0] = 0x3f800000;
  local_c8 = 1;
  (**(code **)(*plVar7 + 0x20))(plVar7,local_d0);
  plVar7 = (long *)FUN_00d2779c(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,"Whirlwind");
  (**(code **)(*plVar7 + 0x20))();
  plVar7 = (long *)FUN_00d2887c(lVar6);
  (**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Buff_Rona_Whirlwind_FortifiedHea_02bf0e58);
  lVar6 = FUN_00d64980(param_1);
  plVar7 = (long *)FUN_00e213ac(lVar6 + 0x10);
  (**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Ability__Rona__C_02bef458);
  uVar8 = FUN_00d39a54(lVar6 + 0x10);
  FUN_00d3e604(uVar8,FUN_00e36dd4);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(local_d0,lVar6 + 0x30);
  uVar8 = FUN_00d67b84(param_1);
  uVar9 = FUN_00d44008(uVar8,PTR_s_Buff_Rona_Talent_FastWhirlwind_02bf2090);
  FUN_00d3e534();
  uVar8 = FUN_00d29584();
  FUN_00d42654(local_d0,uVar8);
  if ((uVar9 & 1) == 0) {
    FUN_00d59f54(uVar5,2,4,0x19,0);
    uVar5 = 2;
  }
  else {
    FUN_00d5a3d0(uVar5,DAT_0320ebd8,2,9);
    uVar5 = 1;
  }
  FUN_00d472ec(uVar8,uVar5);
  lVar6 = FUN_00d65010(param_1);
  lVar6 = lVar6 + 0x10;
  uVar5 = FUN_00d3a390(lVar6);
  FUN_00d48198(uVar5,FUN_00d483cc);
  plVar7 = (long *)FUN_00e13b48(lVar6);
  (**(code **)(*plVar7 + 0x30))(plVar7,"Whirlwind");
  FUN_00e30f38(lVar6);
  plVar7 = (long *)FUN_00d2945c(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x60))();
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Rona_Spinning_Enemy");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7,"Effect_Rona_Spinning");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x90))();
  (**(code **)(*plVar7 + 0xb0))(plVar7,1);
  plVar7 = (long *)FUN_00d2945c(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x78))(plVar7,"Bone_LeftAxe");
  (**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Rona_Weapon");
  plVar7 = (long *)FUN_00d2945c(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x78))(plVar7,"Bone_RightAxe");
  (**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Rona_Weapon2");
  plVar7 = (long *)FUN_00d2df94(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,"Sound_Rona_Ability_C_SpinLoop");
  lVar10 = FUN_00d09310();
  FUN_00d0992c(*(undefined4 *)(lVar10 + 0x1f8));
  (**(code **)(*plVar7 + 0x28))(plVar7);
  uVar5 = FUN_00d45f10(lVar6);
  FUN_00d9886c(uVar5,PTR_s_Ability__Rona__C_02bef458,PTR_s_Ability__Rona__CancelWhirlwind_02bef468);
  FUN_00e37900(lVar6);
  uVar5 = FUN_00d29a18(lVar6);
  FUN_00d46cdc(uVar5,0x12);
  plVar7 = (long *)FUN_00d2945c(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x78))(plVar7,"Bone_CenterMass");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Rona_DebuffBlock");
  (**(code **)(*plVar7 + 0x78))(plVar7,1);
  uVar5 = FUN_00d64d7c(param_1);
  lVar6 = FUN_00d4891c(1.0 / fVar11,uVar5,0);
  lVar6 = lVar6 + 0x10;
  uVar5 = FUN_00da63b8(lVar6);
  FUN_00d9c89c(uVar5,FUN_00e36ea8);
  plVar7 = (long *)FUN_00d2cc5c(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))();
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,"Sound_Rona_Ability_C_Impact_1");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,"Sound_Rona_Ability_C_Impact_2");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,"Sound_Rona_Ability_C_Impact_3");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,"Sound_Rona_Ability_C_Impact_4");
  lVar10 = FUN_00d09310();
  plVar7 = (long *)(**(code **)(*plVar7 + 0x28))(*(undefined4 *)(lVar10 + 0x1fc),plVar7);
  (**(code **)(*plVar7 + 0x38))();
  plVar7 = (long *)FUN_00d2b818(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x40))();
  (**(code **)(*plVar7 + 0x38))(plVar7,"DamagePerSecond",2);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(local_d0,lVar6 + 0x28);
  FUN_00d3e534();
  uVar5 = FUN_00d3940c();
  FUN_00d42654(local_d0,uVar5);
  FUN_00d3fad8(uVar5,auStack_b8,0,0);
  FUN_00d3e534();
  uVar5 = FUN_00e37950();
  FUN_00d42654(local_d0,uVar5);
  uVar5 = FUN_00e5d510(uVar5,"CenterBody");
  uVar5 = FUN_00da2040(uVar5,"Effect_Rona_Whirlwind_Impact_Enemy");
  uVar5 = FUN_00da2048(uVar5,"Effect_Rona_Whirlwind_Impact");
  FUN_00da2070(uVar5,1);
  FUN_00d3e534();
  uVar5 = FUN_00d2a6c0();
  FUN_00d42654(local_d0,uVar5);
  uVar9 = FUN_00ceab48();
  if ((uVar9 & 1) != 0) {
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBuffIntervalName_02bed520;
    uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e36c18;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

