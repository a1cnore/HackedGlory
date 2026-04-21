// functions/00e2c — 19 functions
#include "libGameKindred.h"




void FUN_00e2c048(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47dec(uVar3,"Bone_Weapon");
  uVar3 = FUN_00da2040(uVar3,"Effect_Lance_Empowered_AA_Available");
  FUN_00da20dc(uVar3,1);
  FUN_00d3e534();
  uVar3 = FUN_00e2d174();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3f364(uVar3,PTR_s_Ability__Lance__EmpoweredAttack_02bef100);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d29a68();
  FUN_00d42654(auStack_50,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2c134(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2a414(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,5);
  lVar1 = FUN_00d65010(param_1);
  FUN_00d29be4(lVar1 + 0x10);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d64980(param_1);
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Lance_Ability_A_End");
  lVar1 = FUN_00d09310();
  FUN_00d09bcc(*(undefined4 *)(lVar1 + 0x2dc));
                    /* WARNING: Could not recover jumptable at 0x00e2c1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_00e2c1cc(float param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  float __x;
  float __y;
  float local_c0 [2];
  float local_b8;
  undefined1 auStack_b0 [88];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00daa58c(param_3,param_2);
  if (((uVar5 & 1) != 0) && (uVar5 = FUN_00daa524(param_3), (uVar5 & 1) != 0)) {
    FUN_00d557c4(param_2,local_c0,&DAT_03218f68);
    pfVar6 = (float *)FUN_00daa52c(param_3,0);
    __x = *pfVar6;
    __y = pfVar6[1];
    fVar7 = (float)FUN_00d59f54(param_2,1,0xc,0x19,0);
    if (local_c0[0] * __x + local_b8 * __y < fVar7 / 180.0 + -1.0) {
      *(float *)(param_3 + 0x50) = *(float *)(param_3 + 0x50) - param_1;
      fVar7 = atan2f(__y,__x);
      puVar3 = PTR_s_Buff_Lance_PlayGuardImpactPfx_02bf0ac8;
      uVar1 = *(undefined4 *)(param_2 + 0x260);
      uVar4 = FUN_00ceb350();
      FUN_00cfe864(0x3dcccccd,fVar7,0,auStack_b0,uVar1,uVar1,puVar3,uVar4,1,0,0);
      FUN_00ce20fc(auStack_b0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2c328(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_40,&local_48);
  uVar2 = FUN_00d66d28(local_40);
  fVar3 = (float)FUN_00d59f54(uVar2,1,0x10,0x19,0);
  fVar4 = (float)FUN_00d59f54(uVar2,1,0x11,0x19,0);
  if (fVar4 <= fVar3) {
    fVar3 = fVar4;
  }
  if ((*(long *)(local_48 + 0x28) != 0) &&
     ((*(byte *)(*(long *)(local_48 + 0x28) + 0x2f5) >> 4 & 1) != 0)) {
    fVar4 = (float)FUN_00d59f54(uVar2,1,0xf,0x19,0);
    fVar3 = fVar3 * fVar4;
  }
  FUN_00e2c1cc(fVar3,uVar2,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2c400(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 local_58;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_58);
  lVar4 = FUN_00d66d28(local_58);
  uVar1 = *(undefined4 *)(lVar4 + 0x260);
  uVar3 = FUN_00d66d34(local_58);
  FUN_00d009d0(auStack_50,uVar1,uVar3);
  FUN_00ce20fc(auStack_50);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2c474(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [96];
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
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e2c328;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onActorMoveName_02bed558;
    uVar4 = FUN_00e6a474(PTR_s_onActorMoveName_02bed558);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e2c400;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onAbilityTriggeredName_02bed548;
    uVar4 = FUN_00e6a474(PTR_s_onAbilityTriggeredName_02bed548);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e2c400;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  }
  uVar7 = FUN_00d66d28(param_1);
  uVar8 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_c0,uVar8);
  uVar8 = FUN_00d67b84(param_1);
  uVar5 = FUN_00d44008(uVar8,PTR_s_Buff_Lance_Talent_ReinforcedWall_02bee000);
  if ((uVar5 & 1) != 0) {
    FUN_00d4d9e8(auStack_a8);
    FUN_00d4daf4(auStack_a8,1,0,1,0);
    FUN_00d4dabc(auStack_a8,1);
    FUN_00d4db48(0x41000000,auStack_a8,&DAT_03218f30);
    FUN_00d3e534();
    uVar8 = FUN_00d3940c();
    FUN_00d42654(auStack_c0,uVar8);
    FUN_00d3fad8(uVar8,auStack_a8,0,1);
    FUN_00d3e534();
    uVar8 = FUN_00d2cb84();
    FUN_00d42654(auStack_c0,uVar8);
    puVar3 = PTR_s_Buff_Lance_ReinforcedWalls_Barri_02bee010;
    uVar4 = FUN_00d5a3d0(uVar7,DAT_031ac00c,1,9);
    FUN_00d3e888(uVar4,0,0,uVar8,puVar3,1,0xffffffff,0,0);
    FUN_00d3e534();
    uVar7 = FUN_00d2a6c0();
    FUN_00d42654(auStack_c0,uVar7);
  }
  uVar7 = FUN_00d66d28(param_1);
  uVar5 = FUN_00d5c248(uVar7,1);
  if ((uVar5 & 1) != 0) {
    FUN_00d3e534();
    uVar7 = FUN_00d2a504();
    FUN_00d42654(auStack_c0,uVar7);
    FUN_00d3e534();
    uVar7 = FUN_00d2cb84();
    FUN_00d42654(auStack_c0,uVar7);
    FUN_00d3e888(0xbf800000,0,0,uVar7,PTR_s_Buff_Lance_GuardOverdrive_02bf0ad8,1,0xffffffff,0,0);
    FUN_00d3e534();
    uVar7 = FUN_00d2a6c0();
    FUN_00d42654(auStack_c0,uVar7);
  }
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_a8,lVar6 + 0x18);
  FUN_00d3e534();
  uVar7 = FUN_00d2a504();
  FUN_00d42654(auStack_a8,uVar7);
  FUN_00d3e534();
  uVar7 = FUN_00d2a994();
  FUN_00d42654(auStack_a8,uVar7);
  FUN_00d46fc0(uVar7,PTR_s_Buff_Lance_GuardOverdrive_02bf0ad8);
  FUN_00d3e534();
  uVar7 = FUN_00d2a6c0();
  FUN_00d42654(auStack_a8,uVar7);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_a8,lVar6 + 0x30);
  FUN_00d3e534();
  uVar7 = FUN_00d294ac();
  FUN_00d42654(auStack_a8,uVar7);
  uVar7 = FUN_00d47dec(uVar7,"Bone_Shield");
  uVar7 = FUN_00da2040(uVar7,"Effect_Lance_DirShield");
  FUN_00da20dc(uVar7,1);
  FUN_00d3e534();
  uVar7 = FUN_00d294ac();
  FUN_00d42654(auStack_a8,uVar7);
  uVar7 = FUN_00d47d9c(uVar7);
  uVar7 = FUN_00da2040(uVar7,"Effect_Lance_Shield_Ground");
  FUN_00da20dc(uVar7,1);
  FUN_00d3e534();
  uVar8 = FUN_00e11d14();
  FUN_00d42654(auStack_a8,uVar8);
  lVar6 = FUN_00d09310();
  uVar7 = FUN_00d09bcc(*(undefined4 *)(lVar6 + 0x2e0));
  FUN_00d3ecf4(0x3f800000,uVar7,uVar8,"Sound_Lance_Block",0,1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2c8b8(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d29a18(lVar1 + 0x10);
  FUN_00d46cdc(uVar2,0x11);
  return;
}




void FUN_00e2c8d8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    *param_3 = 0x3f800000;
  }
  return;
}




void FUN_00e2c904(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Lance_Shield_Impact");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Lance_Shield_Damage");
  lVar1 = FUN_00d09310();
  FUN_00d09bcc(*(undefined4 *)(lVar1 + 0x2d8));
                    /* WARNING: Could not recover jumptable at 0x00e2c9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_00e2c9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 uint param_5)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,param_3);
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  if (param_4 != (undefined8 *)0x0) {
    plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,*param_4);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x28))(param_1);
    if (param_5 != 0) {
      uVar3 = (ulong)param_5;
      do {
        (**(code **)(*plVar2 + 0x18))(plVar2,*param_4);
        uVar3 = uVar3 - 1;
        param_4 = param_4 + 1;
      } while (uVar3 != 0);
    }
  }
  return;
}




void FUN_00e2ca84(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d09310();
  FUN_00d09bcc(*(undefined4 *)(lVar1 + 0x2d0));
  FUN_00e2c9a8(param_1,"Effect_Lance_AA_Impact",&PTR_s_Sound_Lance_Impact_1_02bf0ae8,3);
  return;
}




void FUN_00e2cac4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d09310();
  FUN_00d09bcc(*(undefined4 *)(lVar1 + 0x2d4));
  FUN_00e2c9a8(param_1,"Effect_Lance_AA_Impact_Crit",&PTR_s_Sound_Lance_Crit_Impact_1_02bf0b08,2);
  return;
}




void FUN_00e2cb04(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d09310();
  FUN_00d09bcc(*(undefined4 *)(lVar1 + 0x2d0));
  FUN_00e2c9a8(param_1,"Effect_Lance_Empowered_AA_Impact",&PTR_s_Sound_Lance_Impact_1_02bf0ae8,3);
  return;
}




void FUN_00e2cb44(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_40,&local_48);
  uVar2 = FUN_00d66d28(local_40);
  fVar3 = (float)FUN_00d59f54(uVar2,1,0xd,0x19,0);
  fVar4 = (float)FUN_00d59f54(uVar2,1,0xe,0x19,0);
  if (fVar4 <= fVar3) {
    fVar3 = fVar4;
  }
  if ((*(long *)(local_48 + 0x28) != 0) &&
     ((*(byte *)(*(long *)(local_48 + 0x28) + 0x2f5) >> 4 & 1) != 0)) {
    fVar4 = (float)FUN_00d59f54(uVar2,1,0xf,0x19,0);
    fVar3 = fVar3 * fVar4;
  }
  FUN_00e2c1cc(fVar3,uVar2,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00e2cc1c(undefined8 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_58 [4];
  float local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00d66d28(*param_1);
  FUN_00d6a078(*param_1);
  lVar5 = FUN_00d9e390();
  if ((lVar5 == 0) ||
     ((uVar3 = *(ushort *)(lVar5 + 0x88) & 0x1f, uVar3 != 0x1f &&
      (*(ushort *)(lVar5 + (ulong)uVar3 * 0x38 + 0x90) - 3 < 2)))) {
    uVar3 = 1;
  }
  else {
    FUN_00d55794(uVar4,local_48,0);
    FUN_00d55794(lVar5,local_58,0);
    uVar3 = 1;
    fVar6 = (float)FUN_00d59f54(uVar4,1,0xb,0x19,0);
    fVar7 = (float)local_48._4_8_ - (float)local_58._4_8_;
    fVar8 = SUB84(local_48._4_8_,4) - SUB84(local_58._4_8_,4);
    if ((local_48[0] - local_58[0]) * (local_48[0] - local_58[0]) + fVar7 * fVar7 + fVar8 * fVar8 <=
        fVar6 * fVar6) {
      uVar2 = FUN_00d55870(uVar4);
      uVar3 = FUN_00d7d0a0(*(undefined8 *)(lVar5 + 0x80),uVar2);
      uVar3 = uVar3 ^ 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2cd54(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onPreCalculateDamageExchangeName_02bed5e8;
    uVar3 = FUN_00e6a474(PTR_s_onPreCalculateDamageExchangeName_02bed5e8);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e2cb44;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  lVar5 = FUN_00d65e5c(param_1);
  FUN_00e2d248(lVar5 + 0x10);
  FUN_00d29f94(lVar5 + 0x10);
  lVar5 = FUN_00d657dc(param_1);
  uVar6 = FUN_00d3a390(lVar5 + 0x10);
  FUN_00d481b8(uVar6,FUN_00d483fc);
  lVar5 = FUN_00d65010(param_1);
  lVar5 = lVar5 + 0x10;
  plVar7 = (long *)FUN_00d2df44(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,"Idle","StrafeIdle");
  plVar7 = (long *)FUN_00d2df44(lVar5);
  (**(code **)(*plVar7 + 0x30))(plVar7,"IdleCombat","StrafeIdle");
  plVar7 = (long *)FUN_00d2945c(lVar5);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x78))(plVar7,"Bone_Shield");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Lance_Shield_Attack");
  (**(code **)(*plVar7 + 0xb0))(plVar7,1);
  plVar7 = (long *)FUN_00d2945c(lVar5);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x60))();
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Lance_Shield_Ground");
  (**(code **)(*plVar7 + 0xb0))(plVar7,1);
  uVar6 = FUN_00d64d7c(param_1);
  lVar5 = FUN_00d4891c(0x3dcccccd,uVar6,0);
  lVar5 = FUN_00d29e8c(lVar5 + 0x10);
  lVar8 = FUN_00d29edc(lVar5 + 0x10);
  *(code **)(lVar8 + 8) = FUN_00e2cc1c;
  FUN_00d2a320(lVar5 + 0x88);
  return;
}




void FUN_00e2cf20(undefined8 param_1)

{
  FUN_00d42ce8(param_1,0x23,"Effect_Lance_Immobilize",0);
  return;
}




void FUN_00e2cf34(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d09310();
  FUN_00d09bcc(*(undefined4 *)(lVar1 + 0x2e0));
  FUN_00e2c9a8(param_1,"Effect_Lance_B_Burst_Impact",0,1);
  return;
}




void FUN_00e2cf70(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d426b0();
  fVar5 = (float)FUN_00d59f54(uVar2,1,8,0x19,0);
  fVar6 = (float)FUN_00d59f54(uVar2,1,9,0x19,0);
  local_58[0] = fVar5;
  if (fVar6 <= fVar5) {
    local_58[0] = fVar6;
  }
  lVar3 = FUN_00d6624c(param_1);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

