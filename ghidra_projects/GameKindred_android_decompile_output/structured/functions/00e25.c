// functions/00e25 — 22 functions
#include "libGameKindred.h"




void FUN_00e25028(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d66d28(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,0,8,5,0);
  *(float *)(param_1[0x85] + 0x4c) = fVar2 + *(float *)(param_1[0x85] + 0x4c);
  return;
}




void FUN_00e25070(undefined8 param_1)

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
  local_48 = FUN_00e251a4;
  local_40 = 3;
  FUN_00d42a20(0,0x3f800000,param_1,&local_48);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,2);
  FUN_00d4bc10();
  lVar3 = FUN_00d4bc38();
  uVar2 = FUN_00d39a54(lVar3 + 0x10);
  FUN_00d3e604(uVar2,FUN_00e25028);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2df94(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"Sound_Tony_Ability_A_Loop");
  lVar3 = FUN_00d09310();
  FUN_00d0a064(*(undefined4 *)(lVar3 + 0x478));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00d2cc5c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Tony_Ability_A_End");
  lVar3 = FUN_00d09310();
  FUN_00d0a064(*(undefined4 *)(lVar3 + 0x474));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e251a4(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,9,0x19,0);
  return;
}




void FUN_00e251b8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Tony_Attack_Impact_01");
  lVar1 = FUN_00d09310();
  FUN_00d0a064(*(undefined4 *)(lVar1 + 0x474));
  plVar2 = (long *)(**(code **)(*plVar2 + 0x28))(plVar2);
  (**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Tony_Attack_Impact_02");
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d2df94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Tony_Ability_B_Taunted_loop");
  lVar1 = FUN_00d09310();
  FUN_00d0a064(*(undefined4 *)(lVar1 + 0x474));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_00d65e5c(param_1);
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Tony_Ability_B_End");
  lVar1 = FUN_00d09310();
  FUN_00d0a064(*(undefined4 *)(lVar1 + 0x474));
                    /* WARNING: Could not recover jumptable at 0x00e252a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_00e252ac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64080();
  plVar3 = (long *)FUN_00d2a160(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Tony_Perk_BarrierControl_02bf0858);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,4);
  lVar2 = FUN_00d4bc24();
  plVar3 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_38 = FUN_00e25360;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x40))(plVar3,&local_38);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e25360(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,5,0x19,0);
  return;
}




void FUN_00e25374(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d64ad0();
  FUN_00e255b0(lVar1 + 0x10);
  lVar1 = FUN_00d63f30(param_1);
  FUN_00d29b94(lVar1 + 0x10);
  return;
}




void FUN_00e253a8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d67d04(0x3f800000);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tony_C_Warning");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_00d64980(param_1);
  FUN_00d394e4(lVar1 + 0x10);
  return;
}




void FUN_00e25418(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d4403c(param_1,1);
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Rightjet");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Tony_W_R_Thruster");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  local_48[0] = 0x3fc00000;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,local_48);
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Leftjet");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Tony_W_L_Thruster");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  local_48[0] = 0x3fc00000;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,local_48);
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Tony_Withdraw");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  local_48[0] = 0x3fc00000;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,local_48);
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e255b0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a3bac();
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




void FUN_00e25600(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  thunk_FUN_00d69294(param_1,&local_a8,&local_b0);
  lVar6 = FUN_00d67b78(local_a8);
  iVar4 = FUN_00d5c238(lVar6,0);
  if (((iVar4 != 0) && (uVar7 = FUN_00daa58c(local_b0,lVar6), (uVar7 & 1) != 0)) &&
     ((*(byte *)(local_b0 + 0xc) >> 4 & 1) == 0)) {
    fVar8 = (float)FUN_00d59f54(lVar6,0,7,0x19,0);
    fVar10 = *(float *)(*(long *)(lVar6 + 0x40) + 0xfc);
    fVar9 = (float)FUN_00d59f54(lVar6,0,8,0x19,0);
    puVar3 = PTR_s_Buff_Idris_A_BarrierLockout_02bf08b8;
    fVar8 = fVar8 - fVar10 * fVar9;
    if (0.0 < fVar8) {
      uVar1 = *(undefined4 *)(lVar6 + 0x260);
      uVar5 = FUN_00ceb350();
      FUN_00cfe864(fVar8,0,0,auStack_a0,uVar1,uVar1,puVar3,uVar5,1,0,0);
      FUN_00ce20fc(auStack_a0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e25724(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  FUN_00d67b04(0x3dcccccd);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onAfterApplyDamageName_02bed608;
    uVar3 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e25600;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  uVar6 = FUN_00d6639c(param_1);
  lVar5 = FUN_00d4b23c(uVar6,PTR_s_Ability__Idris__A_02beedc0);
  plVar7 = (long *)FUN_00d3bc68(lVar5 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e257dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x38))();
  return;
}




void FUN_00e257e0(void)

{
  long lVar1;
  
  lVar1 = FUN_00d65e5c();
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e257f8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float *local_88;
  undefined4 local_80;
  int local_7c;
  undefined8 local_78;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d69a50(param_1,&local_78,&local_7c,&local_80,&local_88);
    if (local_7c == 2) {
      lVar3 = FUN_00d66d28(local_78);
      fVar5 = *local_88;
      fVar4 = (float)thunk_FUN_00d086f0(lVar3,1,1);
      FUN_00d041e4(fVar5 * fVar4,auStack_70,*(undefined4 *)(lVar3 + 0x260),0x2b,local_80,0,
                   0xffffffff);
      FUN_00ce20fc(auStack_70);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e258c0(undefined8 param_1,float *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00d66d28(param_1);
    lVar3 = *(long *)(lVar2 + 0x18);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    *param_2 = 0.0;
    uVar1 = FUN_00d6bbac(lVar3,DAT_031b9e18,0);
    if ((uVar1 & 1) == 0) {
      fVar4 = (float)thunk_FUN_00d086f0(lVar2,2,1);
      *param_2 = fVar4;
      lVar3 = *(long *)(lVar2 + 0x40);
      fVar4 = (*(float *)(lVar3 + 0x1ac) + 1.0) *
              (*(float *)(lVar3 + 0x44) +
              *(float *)(lVar3 + 0xf8) * (*(float *)(lVar3 + 0x260) + 1.0));
      if (DAT_031b9f2c <= fVar4) {
        fVar4 = DAT_031b9f2c;
      }
      fVar5 = DAT_031b9e6c;
      if (DAT_031b9e6c <= fVar4) {
        fVar5 = fVar4;
      }
      fVar4 = (float)thunk_FUN_00d086f0(lVar2,3,1);
      *param_2 = *param_2 + fVar4 * fVar5;
      fVar4 = (float)FUN_00d67b0c(param_1);
      *param_2 = fVar4 * *param_2;
    }
  }
  return;
}




void FUN_00e259e0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d67b04(0x3dcccccd);
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onActorAttributesChangedName_02bed568;
  uVar4 = FUN_00e6a474(PTR_s_onActorAttributesChangedName_02bed568);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e257f8;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  uVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,uVar6);
  FUN_00d3e534();
  uVar6 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar6);
  uVar7 = FUN_00d66d28(param_1);
  thunk_FUN_00d086f0(uVar7,0,1);
  FUN_00d40cd4(uVar6,0x2b,0,1,0);
  FUN_00d3e534();
  uVar6 = FUN_00e0fb7c();
  FUN_00d42654(auStack_50,uVar6);
  uVar7 = FUN_00d66d28(param_1);
  thunk_FUN_00d086f0(uVar7,0,1);
  FUN_00d411dc(uVar6,3,1);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 0x28);
  FUN_00d3e534();
  uVar6 = FUN_00e0fb7c();
  FUN_00d42654(auStack_50,uVar6);
  FUN_00d411f0(uVar6,3,FUN_00e258c0,0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e25b6c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d29a68();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e25bd0(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceb350();
  FUN_00cfe864(0xbf800000,0,0,auStack_90,param_1,param_1,param_2,uVar2,1,0,0);
  FUN_00ce20fc(auStack_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e25c5c(undefined4 param_1,undefined4 param_2)

{
  long lVar1;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d009d0(auStack_50,param_1,param_2);
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e25cb4(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 auStack_b0 [40];
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  uVar8 = FUN_00ceab48();
  if ((uVar8 & 1) == 0) goto LAB_00e25f38;
  lVar9 = FUN_00d66d28(param_1);
  lVar12 = *(long *)(lVar9 + 0x18);
  uVar1 = *(undefined4 *)(lVar9 + 0x260);
  while ((lVar12 != 0 && (*(int *)(*(long *)(lVar12 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar12 = *(long *)(lVar12 + 0x20);
  }
  fVar13 = (float)thunk_FUN_00d086f0(lVar9,5,1);
  lVar11 = *(long *)(lVar9 + 0x40);
  fVar16 = *(float *)(lVar11 + 0xfc);
  fVar14 = (*(float *)(lVar11 + 0x1b4) + 1.0) *
           (*(float *)(lVar11 + 0x4c) +
           *(float *)(lVar11 + 0x100) * (*(float *)(lVar11 + 0x268) + 1.0));
  if (DAT_031b9f34 <= fVar14) {
    fVar14 = DAT_031b9f34;
  }
  fVar15 = DAT_031b9e70._4_4_;
  if (DAT_031b9e70._4_4_ <= fVar14) {
    fVar15 = fVar14;
  }
  uVar8 = FUN_00d44be0(lVar9,PTR_s_Buff_Idris_Talent_PathOfTheSeeke_02bedfb0);
  uVar5 = FUN_00d6bbac(lVar12,DAT_031b9e20,&local_b4);
  puVar3 = PTR_s_Buff_Idris_Perk_HybridPath_02bf08e0;
  uVar6 = FUN_00d6bbac(lVar12,DAT_031b9e24,&local_b8);
  uVar6 = uVar5 | uVar6;
  uVar7 = FUN_00d6bbac(lVar12,DAT_031b9e28,&local_bc);
  puVar10 = PTR_s_Buff_Idris_Perk_CrystalPath_02bf08f0;
  puVar4 = PTR_s_Buff_Idris_Perk_WeaponPath_02bf08e8;
  uVar7 = uVar5 | uVar7;
  if ((uVar8 & 1) == 0) {
    fVar13 = fVar13 + -1.0;
    if ((fVar13 < fVar16) && (fVar15 > fVar13)) goto LAB_00e25e30;
    if ((uVar5 & 1) == 0) {
      if ((fVar16 <= fVar13) && (((uVar6 ^ 1) & 1) == 0)) {
        FUN_00d009d0(auStack_b0,uVar1,local_b8);
        FUN_00ce20fc(auStack_b0);
      }
      if ((fVar15 <= fVar13) && (((uVar7 ^ 1) & 1) == 0)) {
        FUN_00d009d0(auStack_b0,uVar1,local_bc);
        FUN_00ce20fc(auStack_b0);
      }
      if ((uVar6 & 1) == 0 && fVar13 < fVar16) {
        FUN_00e25bd0(uVar1,puVar4);
      }
      if ((uVar7 & 1) != 0 || fVar15 <= fVar13) goto LAB_00e25f38;
    }
    else {
      FUN_00d009d0(auStack_b0,uVar1,local_b4);
      FUN_00ce20fc(auStack_b0);
      if (fVar13 < fVar16) {
        FUN_00e25bd0(uVar1,puVar4);
      }
      if (fVar15 <= fVar13) goto LAB_00e25f38;
    }
  }
  else {
LAB_00e25e30:
    if ((uVar6 & 1) != 0) {
      FUN_00d009d0(auStack_b0,uVar1,local_b8);
      FUN_00ce20fc(auStack_b0);
    }
    if ((uVar7 & 1) != 0) {
      FUN_00d009d0(auStack_b0,uVar1,local_bc);
      FUN_00ce20fc(auStack_b0);
    }
    puVar10 = puVar3;
    if ((uVar5 & 1) != 0) goto LAB_00e25f38;
  }
  FUN_00e25bd0(uVar1,puVar10);
LAB_00e25f38:
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e25f74(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [4];
  uint local_34;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d69a50(param_1,&local_30,&local_34,auStack_38,auStack_40);
    if ((local_34 | 1) == 5) {
      FUN_00e25cb4(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e25ff0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onActorAttributesChangedName_02bed568;
  uVar4 = FUN_00e6a474(PTR_s_onActorAttributesChangedName_02bed568);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e25f74;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  FUN_00d67b04(0x40200000,param_1);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 0x28);
  FUN_00d3e534();
  uVar6 = FUN_00d2a200();
  FUN_00d42654(auStack_50,uVar6);
  FUN_00d3e5d0(uVar6,FUN_00e25cb4);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 8);
  FUN_00d3e534();
  uVar6 = FUN_00d2a200();
  FUN_00d42654(auStack_50,uVar6);
  FUN_00d3e5d0(uVar6,FUN_00e25cb4);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

