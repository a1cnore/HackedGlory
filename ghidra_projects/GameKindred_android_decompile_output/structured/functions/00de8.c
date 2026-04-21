// functions/00de8 — 21 functions
#include "libGameKindred.h"




void FUN_00de803c(void)

{
  FUN_00de7294(0x41bc0000);
  return;
}




void FUN_00de8048(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0xbf800000,uVar2,"Effect_VainCrystal_Node_Death",0,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_38);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar2,"build://Sounds/5v5/SFX/sfx_armory_destroyed.mp3",0,0,
               0xffffffff,0,1);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x40b00000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de8140(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"HitReact",0,1,0,"AttackToIdle");
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de81b8(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  plVar2 = (long *)FUN_00cfab04(auStack_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_VainCrystal_Node_Spawn");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de8240(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  plVar2 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar3,FUN_00cf76f0);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  uVar4 = FUN_00cfab94(auStack_48);
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d09884(*(undefined4 *)(lVar5 + 0x1b4));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Vox_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"Sound_Vox_Attack_2");
  FUN_00cf41bc(uVar4,"Sound_Vox_Attack_3");
  FUN_00cf41bc(uVar4,"Sound_Vox_Attack_4");
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,param_2,param_3);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de837c(void)

{
  FUN_00de8240("Attack",0x73,"BasicAttack_RightHand");
  return;
}




void FUN_00de8394(void)

{
  FUN_00de8240("AltAttack",0x73,"BasicAttack_RightHand");
  return;
}




void FUN_00de83ac(void)

{
  FUN_00de8240("CritAttack",0x74,"BasicAttack_RightHand");
  return;
}




float FUN_00de83c4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = FUN_00d50ef8();
  fVar4 = (float)FUN_00d59f54(uVar1,0,3,0x19,0);
  lVar2 = FUN_00d50ef8(param_1);
  uVar3 = FUN_00d44008(*(undefined4 *)(lVar2 + 0x260),PTR_s_Buff_Vox_Talent_DeepDash_02bee1f8);
  fVar5 = fVar4 + 2.0;
  if ((uVar3 & 1) == 0) {
    fVar5 = fVar4;
  }
  return fVar5;
}




float FUN_00de8430(void)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d50ef8();
  fVar2 = (float)FUN_00d59f54(uVar1,0,4,0x19,0);
  return fVar2 * 0.5;
}




void FUN_00de8460(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00de8474(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d50ef8();
  FUN_00d59f54(uVar1,0,4,0x19,0);
  return;
}




long FUN_00de8498(undefined8 param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auStack_6a0 [40];
  long local_678 [200];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00d4eb08(auStack_6a0,param_3,200,1);
  uVar4 = FUN_00d9e840(param_1,local_678,200,auStack_6a0);
  if (param_2 != 0) {
    uVar2 = *(ushort *)(param_2 + 0x88) & 0x1f;
    if (uVar2 == 0x1f) {
      bVar1 = true;
    }
    else {
      bVar1 = 1 < *(ushort *)(param_2 + (ulong)uVar2 * 0x38 + 0x90) - 3;
    }
    if ((uVar4 != 0) && (bVar1)) {
      uVar5 = 0;
      do {
        if (*(int *)(local_678[uVar5] + 0x260) == *(int *)(param_2 + 0x260)) goto LAB_00de8568;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
  }
  param_2 = 0;
  if (uVar4 != 0) {
    param_2 = local_678[0];
  }
LAB_00de8568:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de8594(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined4 local_190;
  undefined4 uStack_18c;
  float local_188;
  undefined1 auStack_158 [56];
  undefined4 local_120 [2];
  undefined8 local_118;
  float local_110;
  undefined1 local_108 [8];
  float local_100;
  long local_f8;
  undefined4 local_f0;
  undefined1 auStack_e8 [112];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uVar8 = FUN_00ceab48();
  if ((uVar8 & 1) != 0) {
    FUN_00d51974(param_4);
    lVar9 = FUN_00d5048c(param_4);
    FUN_00d55794(lVar9,local_108,0);
    fVar15 = (float)FUN_00d51820(param_4);
    fVar15 = fVar15 - local_108._0_4_;
    param_2 = param_2 - local_108._4_4_;
    param_3 = param_3 - local_100;
    fVar17 = fVar15 * fVar15 + param_2 * param_2 + param_3 * param_3;
    uVar18 = DAT_03218f30;
    fVar16 = DAT_03218f38;
    if (1e-10 <= fVar17) {
      fVar16 = SQRT(fVar17);
      if (NAN(fVar16)) {
        fVar16 = sqrtf(fVar17);
      }
      uVar18 = CONCAT44(param_2 / fVar16,fVar15 / fVar16);
      fVar16 = param_3 / fVar16;
    }
    fVar15 = (float)FUN_00d59f54(lVar9,0,3,0x19,0);
    local_118 = CONCAT44((float)((ulong)uVar18 >> 0x20) * fVar15 + local_108._4_4_,
                         (float)uVar18 * fVar15 + local_108._0_4_);
    local_110 = fVar16 * fVar15 + local_100;
    lVar14 = *(long *)(lVar9 + 0x40);
    fVar16 = (*(float *)(lVar14 + 0x1e0) + 1.0) *
             (*(float *)(lVar14 + 0x78) +
             *(float *)(lVar14 + 300) * (*(float *)(lVar14 + 0x294) + 1.0));
    if (DAT_031b20a0 <= fVar16) {
      fVar16 = DAT_031b20a0;
    }
    fVar15 = (float)DAT_031b1fe0;
    if ((float)DAT_031b1fe0 <= fVar16) {
      fVar15 = fVar16;
    }
    fVar16 = (float)DAT_031b1fe0;
    fVar17 = (float)FUN_00d59f54(lVar9,0,6,0x19,0);
    fVar17 = fVar17 + fVar15;
    uVar8 = FUN_00d44be0(lVar9,PTR_s_Buff_Vox_Talent_DeepDash_02bee1f8);
    if ((uVar8 & 1) != 0) {
      fVar15 = (float)FUN_00d5a3d0(lVar9,DAT_031ac580,0,9);
      fVar17 = fVar17 + fVar15;
    }
    if (((DAT_031b1f80 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&DAT_031b1f80), puVar3 = PTR_s_Buff_Vox_Resonance_02bf1238,
       iVar7 != 0)) {
      uVar5 = FUN_00e6a474(PTR_s_Buff_Vox_Resonance_02bf1238);
      DAT_031b1f7c = FUN_0091ed5c(puVar3,uVar5,0x12345678);
      __cxa_guard_release(&DAT_031b1f80);
    }
    FUN_00d9ff84(local_120,DAT_031b1f7c);
    FUN_00d4e934(auStack_e8,local_120[0]);
    FUN_00d4daf4(auStack_e8,0,1,0,lVar9);
    FUN_00d4db48(fVar17,auStack_e8,&local_118);
    FUN_00d4dabc(auStack_e8,0x40000);
    FUN_00d4dc44(auStack_e8,1);
    lVar14 = *(long *)(lVar9 + 0x18);
    while ((lVar14 != 0 && (*(int *)(*(long *)(lVar14 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar14 = *(long *)(lVar14 + 0x20);
    }
    uVar4 = FUN_00d6b630(lVar14,DAT_031bb804,0xffffffff);
    puVar3 = PTR_s_lastAttackedGuid_02bf1210;
    lVar10 = FUN_00d6b5b0(lVar14,uVar4);
    uVar5 = FUN_00e6a474(puVar3);
    uVar5 = FUN_0091ed5c(puVar3,uVar5,0x12345678);
    puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar10 + 0x168) + 0x18))(lVar10 + 0x168,uVar5);
    puVar3 = PTR_s_lastAttackedTime_02bf1218;
    uVar5 = *puVar11;
    lVar14 = FUN_00d6b5b0(lVar14,uVar4);
    uVar4 = FUN_00e6a474(puVar3);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar14 + 0x168) + 0x18))(lVar14 + 0x168,uVar4);
    fVar19 = *pfVar12;
    fVar15 = (float)FUN_009bc24c();
    uVar4 = 0x40400000;
    lVar14 = 0;
    if (fVar15 - fVar19 < 3.0) {
      uVar4 = 0x40400000;
      lVar14 = FUN_00d9e390(uVar5);
    }
    lVar10 = FUN_00de8498(auStack_e8,lVar14,&local_118);
    if (((lVar10 == 0) || ((lVar10 != lVar14 && (lVar14 != 0)))) ||
       ((lVar14 == 0 && ((*(byte *)(lVar10 + 0x2f4) & 1) == 0)))) {
      FUN_00d4db48(fVar17,auStack_e8,local_108);
      lVar13 = FUN_00de8498(auStack_e8,lVar14,local_108);
      if ((lVar13 != 0) &&
         ((lVar13 == lVar14 ||
          (((*(byte *)(lVar13 + 0x2f4) & 1) != 0 &&
           ((lVar10 == 0 || ((*(byte *)(lVar10 + 0x2f4) & 1) != 0)))))))) {
        lVar10 = lVar13;
      }
    }
    lVar14 = FUN_00d5048c(param_4);
    lVar14 = *(long *)(lVar14 + 0x18);
    while ((lVar14 != 0 && (*(int *)(*(long *)(lVar14 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar14 = *(long *)(lVar14 + 0x20);
    }
    if (lVar10 == 0) {
      uVar5 = FUN_00d5401c(lVar14,PTR_s_Ability__Vox__DashToLocation_02bef6d8);
      uVar8 = FUN_00d5867c(lVar9,uVar5);
      if ((uVar8 & 1) != 0) {
        uVar6 = *(undefined4 *)(lVar9 + 0x260);
        local_190 = FUN_00d51820(param_4);
        uStack_18c = uVar4;
        local_188 = fVar16;
        FUN_00cfdc4c(auStack_158,uVar6,&local_190,uVar5);
        FUN_00ce20fc(auStack_158);
        local_190 = FUN_00d51820(param_4);
        uStack_18c = uVar4;
        local_188 = fVar16;
        FUN_00d58bd8(lVar9,uVar5,&local_190);
      }
    }
    else {
      local_f8 = lVar10 + 0x28;
      local_f0 = *(undefined4 *)(lVar10 + 0x30);
      uVar5 = FUN_00d5401c(lVar14,PTR_s_Ability__Vox__DashAndFire_Dash_02bef6c8);
      uVar6 = FUN_00d5401c(lVar14,PTR_s_Ability__Vox__DashAndFire_Animat_02bef6d0);
      uVar8 = FUN_00d5867c(lVar9,uVar5);
      if (((uVar8 & 1) != 0) && (uVar8 = FUN_00d5867c(lVar9,uVar6), (uVar8 & 1) != 0)) {
        uVar1 = *(undefined4 *)(lVar9 + 0x260);
        local_190 = FUN_00d51820(param_4);
        uStack_18c = uVar4;
        local_188 = fVar16;
        FUN_00cfdc4c(auStack_158,uVar1,&local_190,uVar5);
        FUN_00ce20fc(auStack_158);
        local_190 = FUN_00d51820(param_4);
        uStack_18c = uVar4;
        local_188 = fVar16;
        FUN_00d58bd8(lVar9,uVar5,&local_190);
        FUN_00cfdc1c(&local_190,*(undefined4 *)(lVar9 + 0x260),*(undefined4 *)(lVar10 + 0x260),uVar6
                    );
        FUN_00ce20fc(&local_190);
        FUN_00d58a68(lVar9,uVar6,&local_f8);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00de8b44(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00cf9cf4();
  FUN_00cf2e48(uVar1,FUN_00de8594);
  return;
}




void FUN_00de8b60(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cf9cf4(auStack_38);
  FUN_00cf2e48(uVar2,FUN_00de8594);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de8bc4(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,0,4,0x19,0);
  *param_3 = fVar2 * 0.5;
  return;
}




void FUN_00de8c04(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_68);
  uVar3 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar3,"Ability01_Forward",0,1,0,"AttackToIdleCombat");
  uVar3 = FUN_00cfaa74(auStack_68);
  FUN_00cf32cc(0x3f000000,uVar3,"Effect_Vox_Dash",0,0,1,0,0);
  uVar3 = FUN_00cfaa74(auStack_68);
  FUN_00cf32cc(0x3e99999a,uVar3,"Effect_Vox_Dash_Trail",1,0,1,0,0);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7580(uVar3,FUN_00de8e28);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfab94(auStack_68);
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d09884(*(undefined4 *)(lVar2 + 0x1b4));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"Sound_Vox_Ability_A_Cast",0,0,0xffffffff,0,1);
  plVar4 = (long *)FUN_00cfa12c(auStack_68);
  local_48 = FUN_00de83c4;
  local_40 = 4;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,&local_48);
  local_58 = FUN_00de8430;
  local_50 = 4;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_58);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7570(uVar3,FUN_00de8bc4);
  FUN_00cfb56c(auStack_68);
  uVar3 = FUN_00cfaa74(auStack_68);
  FUN_00cf32cc(0x3f000000,uVar3,"Effect_Vox_Dash_End",0,0,1,0,0);
  FUN_00cfacb4(auStack_68);
  FUN_00cf50b0(0x3f333333);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de8e28(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,5,0x19,0);
  return;
}




void FUN_00de8e3c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfaa74(auStack_68);
  FUN_00cf32cc(0x3f000000,uVar3,"Effect_Vox_Dash",0,0,1,0,0);
  plVar4 = (long *)FUN_00cfa12c(auStack_68);
  local_48 = FUN_00de83c4;
  local_40 = 4;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,&local_48);
  local_58 = FUN_00de8474;
  local_50 = 4;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_58);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7580(uVar3,FUN_00de8460);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_68);
  uVar3 = FUN_00cfaa74(auStack_68);
  FUN_00cf32cc(0x3f000000,uVar3,"Effect_Vox_Dash_End",0,0,1,0,0);
  FUN_00cfacb4(auStack_68);
  FUN_00cf50b0(0x3f333333);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de8fa8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  FUN_00cfa6cc(auStack_68);
  FUN_00cfb05c(auStack_68);
  FUN_00cf98bc(auStack_68);
  uVar2 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar2,"Ability01_Attack",0,1,0,"AttackToIdleCombat");
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_68);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09884(*(undefined4 *)(lVar3 + 0x1b4));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Vox_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Vox_Attack_2");
  FUN_00cf41bc(uVar2,"Sound_Vox_Attack_3");
  uVar2 = FUN_00cfb17c(auStack_68);
  FUN_00cfcad8(uVar2,0x77,"BasicAttack_RightHand");
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_68);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09884(*(undefined4 *)(lVar3 + 0x1b4));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Vox_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Vox_Attack_2");
  FUN_00cf41bc(uVar2,"Sound_Vox_Attack_3");
  uVar2 = FUN_00cfb17c(auStack_68);
  FUN_00cfcad8(uVar2,0x77,"BasicAttack_RightHand");
  lVar3 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cf9eec(auStack_68);
  FUN_00cf9994(auStack_68);
  FUN_00cfacb4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

