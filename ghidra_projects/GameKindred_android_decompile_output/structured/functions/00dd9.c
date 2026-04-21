// functions/00dd9 — 19 functions
#include "libGameKindred.h"




void FUN_00dd90a4(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,0x11,0x19,0);
  return;
}




void FUN_00dd90b8(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,4,0x19,0);
  return;
}




void FUN_00dd90cc(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,0xb,0x19,0);
  return;
}




void FUN_00dd90e0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa444(auStack_38);
  FUN_00cf2fa4(uVar2,PTR_s_Buff_Ozo_Rolling_02bf0d10,0x400);
  FUN_00dd8b50(auStack_38,0);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd9158(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = FUN_00d5048c(param_1);
  lVar3 = *(long *)(lVar3 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  uVar2 = FUN_00d6bbac(lVar3,DAT_031ba918,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00d5048c(param_1);
    lVar3 = *(long *)(lVar3 + 0x18);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    iVar1 = FUN_00d53990(lVar3,3);
    if (iVar1 == 2) {
      return;
    }
    iVar1 = FUN_00d53990(lVar3,5);
    if (iVar1 == 2) {
      return;
    }
    iVar1 = FUN_00d53990(lVar3,6);
    if (iVar1 == 2) {
      return;
    }
  }
  FUN_00d5089c(param_1);
  return;
}




void FUN_00dd9240(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  uVar2 = FUN_00cfa444(auStack_a8);
  FUN_00cf2fa4(uVar2,PTR_s_Buff_Ozo_Rolling_02bf0d10,0x400);
  uVar2 = FUN_00cf9cf4(auStack_a8);
  FUN_00cf2e48(uVar2,FUN_00dd9158);
  uVar2 = FUN_00cfab94(auStack_a8);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09b24(*(undefined4 *)(lVar3 + 0x298));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"build://Sounds/UI.assetbundle/sfx__social_cheers.mp3",1,0,
               0xffffffff,0,1);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,1,1,1,0);
  uVar2 = FUN_00cfadd4(auStack_a8);
  FUN_00cf5df8(uVar2,PTR_s_Buff_Ozo_BounceTarget_02bf0cc8,auStack_98,0,1);
  uVar2 = FUN_00cf9d84(auStack_a8);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Ozo_BounceTarget_02bf0cc8);
  FUN_00cf9eec(auStack_a8);
  FUN_00cf98bc(auStack_a8);
  uVar2 = FUN_00cf9d84(auStack_a8);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Ozo_BounceAvailable_02bf0cd0);
  uVar2 = FUN_00cf9ab4(auStack_a8);
  FUN_00cf44e8(0x40a00000,uVar2,PTR_s_Buff_Ozo_BounceQueued_02bf0cd8,1,0);
  FUN_00cf9eec(auStack_a8);
  FUN_00cf99dc(auStack_a8);
  uVar2 = FUN_00cf9ab4(auStack_a8);
  FUN_00cf44e8(0x40a00000,uVar2,PTR_s_Buff_Ozo_NextBounceTarget_02bf0ce0,1,0);
  FUN_00cf9eec(auStack_a8);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd93ec(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00dd8b50(auStack_38,1);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd9448(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00dd8b50(auStack_38,2);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd94a4(undefined8 param_1,long param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = FUN_00d5048c();
  lVar4 = *(long *)(lVar2 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  fVar5 = (float)FUN_00d59f54(lVar2,3,7,0x19,0);
  uVar1 = FUN_00d6bb44(lVar4,DAT_031ba924);
  fVar6 = (float)FUN_00d59f54(lVar2,3,8,0x19,0);
  *param_3 = fVar5 + fVar6 * (float)uVar1;
  uVar3 = FUN_00d44008(*(undefined4 *)(lVar2 + 0x260),PTR_s_Buff_Ozo_Talent_SecondWind_02bf1fd0);
  if ((uVar3 & 1) != 0) {
    fVar5 = (float)FUN_00d5a3d0(lVar2,DAT_0320e9f0,0,9);
    *param_3 = fVar5 * *param_3;
  }
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar5 = (float)FUN_00d59f54(lVar2,3,9,0x19,0);
    *param_3 = fVar5 * *param_3;
  }
  *param_4 = 2;
  *param_5 = 1;
  return;
}




void FUN_00dd95ec(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d5048c(param_1);
    lVar7 = *(long *)(lVar6 + 0x18);
    while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar7 = *(long *)(lVar7 + 0x20);
    }
    uVar5 = FUN_00d6bbac(lVar7,DAT_031ba924,0);
    puVar3 = PTR_s_Buff_Ozo_BounceSpeed_02bf0d00;
    if ((uVar5 & 1) != 0) {
      uVar1 = *(undefined4 *)(lVar6 + 0x260);
      fVar8 = (float)FUN_00d59f54(lVar6,3,0xe,0x19,0);
      fVar9 = (float)FUN_00d59f54(lVar6,3,0xe,4,0);
      fVar10 = (float)FUN_00d59f54(lVar6,3,0xf,0x19,0);
      fVar11 = fVar8 + fVar9;
      if (fVar10 <= fVar8 + fVar9) {
        fVar11 = fVar10;
      }
      uVar4 = FUN_00ceb350();
      FUN_00cfe864(fVar11,0,0,auStack_a0,uVar1,uVar1,puVar3,uVar4,1,0,0);
      FUN_00ce20fc(auStack_a0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd9738(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_98);
  FUN_00cfa6cc(auStack_98);
  uVar2 = FUN_00cfa9e4(auStack_98);
  FUN_00cf3048(uVar2,"Ability02_Land",0,0,0,"AttackToIdleCombat");
  FUN_00d4d9e8(auStack_88);
  FUN_00d4dabc(auStack_88,0x40000);
  FUN_00d4daf4(auStack_88,0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_98);
  FUN_00cf32cc(0,uVar2,"Effect_Ozo_B_Land",0,0,1,0,0);
  uVar3 = FUN_00cfab94(auStack_98);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09b24(*(undefined4 *)(lVar4 + 0x2a0));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Ozo_Ability_B_Slash",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfaf84(auStack_98);
  FUN_00cf5504(uVar2,auStack_88,0,FUN_00dd98dc,0,0,0);
  uVar2 = FUN_00cfa00c(auStack_98);
  FUN_00cf6bb0(uVar2,FUN_00dd94a4);
  FUN_00cf9eec(auStack_98);
  uVar2 = FUN_00cfa294(auStack_98);
  FUN_00cf7580(uVar2,FUN_00dd98f0);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cf9cf4(auStack_98);
  FUN_00cf2e48(uVar2,FUN_00dd95ec);
  lVar4 = FUN_00cfa6cc(auStack_98);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_98);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd98dc(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,5,0x19,0);
  return;
}




void FUN_00dd98f0(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,3,0x19,0);
  return;
}




void FUN_00dd9904(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,8,2,0x19,0);
  uVar1 = FUN_00d5048c(param_1);
  fVar3 = (float)FUN_00d59f54(uVar1,8,3,0x19,0);
  *param_3 = fVar2 + fVar3 + 0.5;
  return;
}




void FUN_00dd9974(undefined8 param_1)

{
  FUN_00d59f54(param_1,8,2,0x19,0);
  return;
}




void FUN_00dd9988(undefined8 param_1)

{
  FUN_00d59f54(param_1,8,3,0x19,0);
  return;
}




void FUN_00dd999c(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_00d5048c();
  lVar5 = FUN_00d51778(param_1);
  if (lVar5 != 0) {
    uVar6 = FUN_00ceab48();
    if ((uVar6 & 1) != 0) {
      uVar2 = *(undefined4 *)(lVar5 + 0x260);
      uVar8 = 0x10000;
      lVar5 = lVar4;
LAB_00dd9a64:
      do {
        do {
          lVar7 = lVar5;
          if ((lVar7 != lVar4) &&
             (lVar5 = FUN_019865b4(*(undefined8 *)(lVar7 + 8),0x8a2209e7), lVar5 != 0)) {
            (**(code **)(lVar5 + 8))(lVar7,uVar2);
          }
          if (((uVar8 & 0xffff) < uVar8 >> 0x10) && (lVar5 = *(long *)(lVar7 + 0x18), lVar5 != 0)) {
            uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
            goto LAB_00dd9a64;
          }
          if ((uVar8 & 0xffff) == 0) goto LAB_00dd9ac0;
          lVar5 = *(long *)(lVar7 + 0x20);
        } while (*(long *)(lVar7 + 0x20) != 0);
        lVar7 = *(long *)(lVar7 + 0x10);
        if ((lVar7 == 0) || (uVar1 = uVar8 - 1 & 0xffff, uVar1 == 0)) goto LAB_00dd9ac0;
        uVar8 = uVar1 | uVar8 & 0xffff0000;
        while (lVar5 = *(long *)(lVar7 + 0x20), lVar5 == 0) {
          if ((uVar8 - 1 & 0xffff) == 0) goto LAB_00dd9ac0;
          lVar7 = *(long *)(lVar7 + 0x10);
          uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
          if (lVar7 == 0) goto LAB_00dd9ac0;
        }
      } while( true );
    }
    FUN_00d55794(lVar5,auStack_68,0);
    FUN_00d5763c(lVar4,auStack_68,0,0,1);
  }
LAB_00dd9ac0:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dd9af0(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfa444(auStack_48);
  FUN_00cf2fa4(uVar2,PTR_s_Buff_Ozo_Rolling_02bf0d10,2);
  FUN_00cfb05c(auStack_48);
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf4540(uVar2,PTR_s_Buff_Ozo_RollPrimaryTarget_02bf0d18,FUN_00dd9904,1,0);
  FUN_00cf9eec(auStack_48);
  FUN_00cfa6cc(auStack_48);
  plVar3 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Ability03_Start");
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Ozo_C_Windup",0,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d09b24(*(undefined4 *)(lVar4 + 0x2a4));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Ozo_Ability_C_Charge",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d09b24(*(undefined4 *)(lVar4 + 0x2a4));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Ozo_Ability_C_Roll_Start",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7580(uVar2,FUN_00dd9974);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9cf4(auStack_48);
  FUN_00cf2e48(uVar2,FUN_00dd999c);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf456c(uVar2,PTR_s_Buff_Ozo_Rolling_02bf0d10,FUN_00dd9988,1,0);
  FUN_00cf45dc();
  FUN_00cf9eec(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd9d00(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_78 [16];
  undefined4 local_68 [2];
  undefined4 local_60;
  code *local_58;
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_78);
  FUN_00cfa6cc(auStack_78);
  uVar2 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar2,"Ability03_Travel",1,1,0,0);
  uVar2 = FUN_00cfb05c(auStack_78);
  FUN_00cf7b2c(uVar2,1);
  FUN_00cf98bc(auStack_78);
  uVar2 = FUN_00cf9d84(auStack_78);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Ozo_Rolling_02bf0d10);
  FUN_00cf9eec(auStack_78);
  plVar3 = (long *)FUN_00cfa12c(auStack_78);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(0,0x40000000,0,0);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3dcccccd);
  local_40 = 1;
  (**(code **)(*plVar3 + 0xa8))(plVar3,&local_48);
  uVar2 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(auStack_78);
  uVar2 = FUN_00cfb05c(auStack_78);
  uVar2 = FUN_00cf7b2c(uVar2,2);
  FUN_00cf7b3c(uVar2,2);
  uVar2 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar2,"Ability03_Attack",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_78);
  FUN_00cf3428(0x3ecccccd,uVar2,"Effect_Ozo_A_Ring",1,"Bone_Ring",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_78);
  FUN_00cf32cc(0,uVar2,"Effect_Ozo_C_Slide",1,0,1,0,0);
  uVar4 = FUN_00cfab94(auStack_78);
  lVar5 = FUN_00d09310();
  uVar2 = FUN_00d09b24(*(undefined4 *)(lVar5 + 0x2a4));
  FUN_00cf4164(0x3f800000,uVar2,uVar4,"Sound_Ozo_Ability_C_Knock_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"Sound_Ozo_Ability_C_Knock_2");
  FUN_00cf41bc(uVar4,"Sound_Ozo_Ability_C_Knock_3");
  FUN_00cf99dc(auStack_78);
  plVar3 = (long *)FUN_00cfa09c(auStack_78);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"PrimaryTargetDamage",8);
  plVar3 = (long *)FUN_00cfa684(auStack_78);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))();
  local_48 = FUN_00dda048;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x28))(plVar3,&local_48);
  local_58 = FUN_00dda05c;
  local_50 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  local_68[0] = 0x40c00000;
  local_60 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,local_68);
  uVar2 = FUN_00cf9ab4(auStack_78);
  FUN_00cf456c(uVar2,PTR_s_Buff_Stunned_02beb430,FUN_00dda070,1,0);
  FUN_00cf9eec(auStack_78);
  uVar2 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  lVar5 = FUN_00cfa6cc(auStack_78);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  FUN_00cfb5c4(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

