// functions/00e41 — 12 functions
#include "libGameKindred.h"




void FUN_00e41130(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  float fVar9;
  code *local_60;
  undefined4 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar6 = FUN_00d67c60();
  puVar4 = PTR_s_onBeforeApplyDamageName_02bed5f8;
  uVar5 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
  uVar5 = FUN_0091ed5c(puVar4,uVar5,0x12345678);
  *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar5;
  uVar1 = *(uint *)(lVar6 + 0xf8);
  *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e407dc;
  *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  lVar6 = FUN_00d67c60(param_1);
  puVar4 = PTR_s_onBeforeReApplyName_02bed500;
  uVar5 = FUN_00e6a474(PTR_s_onBeforeReApplyName_02bed500);
  uVar5 = FUN_0091ed5c(puVar4,uVar5,0x12345678);
  *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar5;
  uVar1 = *(uint *)(lVar6 + 0xf8);
  *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e40938;
  *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  FUN_00d67b04(0x3e99999a,param_1);
  uVar7 = FUN_00d64d7c(param_1);
  lVar6 = FUN_00d4891c(0x3e99999a,uVar7,0);
  FUN_00d39534(lVar6 + 0x10);
  plVar8 = (long *)FUN_00d39584(lVar6 + 0x10);
  local_60 = FUN_00e40a34;
  local_58 = 5;
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,&local_60);
  (**(code **)(*plVar8 + 0x20))();
  lVar6 = FUN_00d64080(param_1);
  plVar8 = (long *)FUN_00d2887c(lVar6 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))
                             (plVar8,PTR_s_Buff_SpawnStage_MatchStart_Speed_02bf1060);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x41a00000);
  local_58 = 1;
  (**(code **)(*plVar8 + 0x18))(plVar8,&local_60);
  lVar6 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar6 + 0x10);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_60,lVar6 + 0x28);
  lVar6 = FUN_00d66d28(param_1);
  lVar6 = *(long *)(lVar6 + 0x40);
  fVar9 = (*(float *)(lVar6 + 0x1a8) + 1.0) *
          (*(float *)(lVar6 + 0x40) + *(float *)(lVar6 + 0xf4) * (*(float *)(lVar6 + 0x25c) + 1.0));
  if (DAT_031bb1f8 <= fVar9) {
    fVar9 = DAT_031bb1f8;
  }
  fVar3 = DAT_031bb138;
  if (DAT_031bb138 <= fVar9) {
    fVar3 = fVar9;
  }
  FUN_00d3e534();
  lVar6 = FUN_00d29818();
  FUN_00d42654(&local_60,lVar6);
  *(float *)(lVar6 + 0x10) = fVar3 * 0.054000005;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e41390(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Taka_BladesOn");
  lVar2 = FUN_00d09310();
  FUN_00d09734(*(undefined4 *)(lVar2 + 0x138));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LeftHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Taka_Mortal_Buff");
  (**(code **)(*plVar3 + 0x88))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Taka_Mortal_Buff");
  (**(code **)(*plVar3 + 0x88))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LBlade");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Taka_Mortal_Buff_S2_L");
  (**(code **)(*plVar3 + 0x88))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RBlade");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Taka_Mortal_Buff_S2_R");
  (**(code **)(*plVar3 + 0x88))(plVar3,1);
  plVar3 = (long *)FUN_00e429e0(lVar2);
  (**(code **)(*plVar3 + 0x30))
            (plVar3,PTR_s_Ability__Taka__DefaultAttack_02bef5b8,
             PTR_s_Ability__Taka__MortalStrike_02bef5d0,1);
  plVar3 = (long *)FUN_00e429e0(lVar2);
  (**(code **)(*plVar3 + 0x30))
            (plVar3,PTR_s_Ability__Taka__AltAttack_02bef5c0,
             PTR_s_Ability__Taka__MortalStrike_02bef5d0,1);
  plVar3 = (long *)FUN_00e429e0(lVar2);
  (**(code **)(*plVar3 + 0x30))
            (plVar3,PTR_s_Ability__Taka__CritAttack_02bef5c8,
             PTR_s_Ability__Taka__MortalStrike_Crit_02bef5d8,1);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Taka_HeroicPerk_Ki_Control_02bf1090);
  local_58[0] = 0x3f800000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e415fc(undefined8 param_1)

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
  plVar3 = (long *)FUN_00d3bcb8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"u_ambient_T3");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(0x3f800000);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(0x3f800000);
  (**(code **)(*plVar3 + 0x38))(0x3f800000);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Taka_Ki_Aura");
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Taka_Ki_Aura_End");
  local_48[0] = 0x3f800000;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,local_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e41750(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_70 [2];
  undefined4 local_68 [2];
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_60);
  lVar6 = FUN_00d66d28(local_60);
  lVar8 = *(long *)(lVar6 + 0x18);
  while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar8 = *(long *)(lVar8 + 0x20);
  }
  if (((DAT_031bb2b8 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&DAT_031bb2b8),
     puVar2 = PTR_s_Buff_Taka_AssassinsAcceleration_02bf10a0, iVar3 != 0)) {
    uVar5 = FUN_00e6a474(PTR_s_Buff_Taka_AssassinsAcceleration_02bf10a0);
    DAT_031bb2b0 = FUN_0091ed5c(puVar2,uVar5,0x12345678);
    __cxa_guard_release(&DAT_031bb2b8);
  }
  FUN_00d9ff84(local_68,DAT_031bb2b0);
  uVar7 = FUN_00d6bbac(lVar8,local_68[0],0);
  fVar9 = 1.0;
  fVar12 = 0.0;
  if ((uVar7 & 1) != 0) {
    FUN_00d9ff84(local_70,DAT_031bb2b0);
    iVar3 = FUN_00d6b630(lVar8,local_70[0],0xffffffff);
    fVar12 = 0.0;
    if (iVar3 != -1) {
      uVar4 = FUN_00d6bb04(lVar8,iVar3);
      fVar12 = (float)uVar4;
      uVar4 = FUN_00d6bd30(lVar8,iVar3);
      fVar9 = (float)uVar4;
    }
  }
  fVar10 = (float)thunk_FUN_00d086f0(lVar6,0,1);
  fVar11 = (float)thunk_FUN_00d086f0(lVar6,1,1);
  fVar12 = fVar10 * (1.0 - fVar12 / fVar9) + (fVar12 / fVar9) * fVar11;
  FUN_00d67d04(fVar12,local_60);
  FUN_00d67d3c(fVar12,local_60);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e41918(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_98;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_98);
  lVar5 = FUN_00d66d28(local_98);
  uVar6 = FUN_00ceab48();
  puVar3 = PTR_s_Buff_Taka_HeroicPerk_Ki_02bf1088;
  if ((uVar6 & 1) != 0) {
    uVar1 = *(undefined4 *)(lVar5 + 0x260);
    uVar4 = FUN_00ceb350();
    FUN_00cfe864(0xbf800000,0,0,auStack_90,uVar1,uVar1,puVar3,uVar4,1,0,0);
    FUN_00ce20fc(auStack_90);
  }
  FUN_00d67d04(0xbf800000,local_98);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e419d0(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = FUN_00d67c60();
  puVar2 = PTR_s_onBeforeReApplyName_02bed500;
  uVar3 = FUN_00e6a474(PTR_s_onBeforeReApplyName_02bed500);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e41750;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onTimeoutName_02bed530;
  uVar3 = FUN_00e6a474(PTR_s_onTimeoutName_02bed530);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e41918;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  FUN_00d67dcc(param_1,FUN_00d69f90);
  FUN_00d66d04(param_1,0x40,1);
  lVar4 = FUN_00d63f30(param_1);
  plVar5 = (long *)FUN_00d2887c(lVar4 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e41ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Taka_HeroicPerk_Ki_02bf1088);
  return;
}




void FUN_00e41ae8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar8 = FUN_00ceab48();
  if ((uVar8 & 1) != 0) {
    FUN_00d69294(param_1,&local_a8,&local_b0);
    FUN_00d67b84(local_a8);
    lVar9 = FUN_00d9e390();
    lVar11 = *(long *)(lVar9 + 0x18);
    while ((lVar11 != 0 && (*(int *)(*(long *)(lVar11 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar11 = *(long *)(lVar11 + 0x20);
    }
    iVar1 = *(int *)(local_b0 + 0x10);
    iVar4 = FUN_00d67b84(local_a8);
    if (((iVar1 == iVar4) &&
        (iVar1 = *(int *)(local_b0 + 0x18), lVar10 = FUN_00d66d28(local_a8),
        iVar1 == *(int *)(lVar10 + 0x260))) && ((*(byte *)(local_b0 + 0xc) >> 2 & 1) != 0)) {
      uVar5 = FUN_00d427f4(PTR_s_Buff_Taka_HeroicPerk_Ki_02bf1088);
      uVar8 = FUN_00d6bbac(lVar11,uVar5,0);
      if ((uVar8 & 1) != 0) {
        uVar6 = FUN_00d67b84(local_a8);
        lVar11 = FUN_00d66d28(local_a8);
        puVar3 = PTR_s_Buff_Taka_MortalWound_02bf10a8;
        uVar5 = *(undefined4 *)(lVar11 + 0x260);
        uVar12 = FUN_00d59f54(lVar9,2,4,0x19,0);
        uVar7 = FUN_00ceb350();
        FUN_00cfe864(uVar12,0,0,auStack_a0,uVar6,uVar5,puVar3,uVar7,1,0,0);
        FUN_00ce20fc(auStack_a0);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e41c68(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onPreCalculateDamageExchangeName_02bed5e8;
    uVar4 = FUN_00e6a474(PTR_s_onPreCalculateDamageExchangeName_02bed5e8);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e41ae8;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    FUN_00d67ae4(param_1);
  }
  uVar7 = FUN_00d64d7c(param_1);
  lVar6 = FUN_00d4891c(0x3f000000,uVar7,0);
  FUN_00d39534(lVar6 + 0x10);
  plVar8 = (long *)FUN_00d2b818(lVar6 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x40))();
  (**(code **)(*plVar8 + 0x38))(plVar8,"WoundDamagePerSecond",2);
  lVar6 = FUN_00d63f30(param_1);
  plVar8 = (long *)FUN_00d2887c(lVar6 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,PTR_s_Buff_MortalWound_02beb418);
  local_58[0] = FUN_00d67b3c(param_1);
  local_50 = 1;
  (**(code **)(*plVar8 + 0x18))(plVar8,local_58);
  lVar6 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar6 + 0x10);
  plVar8 = (long *)FUN_00d2887c(lVar6 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,PTR_s_Buff_MortalWound_02beb418);
  local_58[0] = FUN_00d67b3c(param_1);
  local_50 = 1;
  plVar8 = (long *)(**(code **)(*plVar8 + 0x18))(plVar8,local_58);
  local_68[0] = 0;
  local_60 = 1;
  (**(code **)(*plVar8 + 0x20))(plVar8,local_68);
  lVar6 = FUN_00d65010(param_1);
  plVar8 = (long *)FUN_00d2df94(lVar6 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,"Sounds_Taka_Perk");
  lVar6 = FUN_00d09310();
  FUN_00d09734(*(undefined4 *)(lVar6 + 0x138));
  (**(code **)(*plVar8 + 0x28))(plVar8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e41e78(undefined8 param_1)

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
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d29f44(lVar2);
  local_48 = FUN_00e41f6c;
  local_40 = 3;
  FUN_00d47690(uVar3,1,&local_48);
  plVar4 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,"Move","KiRun");
  plVar4 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,"MoveStart","KiRun");
  plVar4 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,"MoveStartCombat","KiRun");
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e41f6c(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,5,1);
  return;
}




bool FUN_00e41f78(float param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_009bc24c();
  fVar2 = (float)FUN_00d5a3d0(param_2,DAT_0320ebe8,0,9);
  return fVar1 - param_1 <= fVar2;
}




bool FUN_00e41fcc(float param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_009bc24c();
  fVar2 = (float)FUN_00d59f54(param_2,1,4,0x19,0);
  return fVar1 - param_1 <= fVar2;
}

