// functions/00dd7 — 14 functions
#include "libGameKindred.h"




void FUN_00dd71a0(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  plVar2 = (long *)FUN_00cfaa2c(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"AbilityC1");
  (**(code **)(*plVar2 + 0x28))();
  plVar2 = (long *)FUN_00cfac24(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Malene_Transform_GoodToEvil");
  lVar3 = FUN_00d09310();
  FUN_00d0a0b8(*(undefined4 *)(lVar3 + 0x4a8));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  FUN_00cf98bc(auStack_48);
  uVar4 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar4,PTR_s_Buff_Malene_LightFormPFX_02bf0c40);
  plVar2 = (long *)FUN_00cf9afc(auStack_48);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Malene_DarkForm_02bf0c48);
  plVar2 = (long *)FUN_00cf9afc(auStack_48);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Malene_DarkFormAnimOverride_02bf0c50);
  plVar2 = (long *)FUN_00cf9afc(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Malene_DarkEmpoweredAuto_02bf0c60);
  local_38 = FUN_00dd7300;
  local_30 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_38);
  FUN_00cf9eec(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd7300(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,2,0x19,0);
  return;
}




void FUN_00dd7314(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfa444(auStack_48);
  FUN_00cf2fa4(uVar2,PTR_s_Buff_Malene_B2_ShadowWalk_02bf0c80,2);
  plVar3 = (long *)FUN_00cfaa2c(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"AbilityC2");
  (**(code **)(*plVar3 + 0x28))();
  plVar3 = (long *)FUN_00cfac24(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Malene_Transform_EvilToGood");
  lVar4 = FUN_00d09310();
  FUN_00d0a0b8(*(undefined4 *)(lVar4 + 0x4ac));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Malene_DarkForm_02bf0c48);
  uVar2 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Malene_DarkFormAnimOverride_02bf0c50);
  plVar3 = (long *)FUN_00cf9afc(auStack_48);
  (**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Malene_LightFormPFX_02bf0c40);
  plVar3 = (long *)FUN_00cf9afc(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Malene_LightEmpoweredAuto_02bf0c58);
  local_38 = FUN_00dd7488;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  FUN_00cf9eec(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd7488(undefined8 param_1)

{
  FUN_00d59f54(param_1,5,2,0x19,0);
  return;
}




void FUN_00dd749c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfb05c(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_58);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09b24(*(undefined4 *)(lVar3 + 0x28c));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Ozo_BasicAttack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Ozo_BasicAttack_2");
  FUN_00cf41bc(uVar2,"Sound_Ozo_BasicAttack_3");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,param_2,0,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_58);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09b24(*(undefined4 *)(lVar3 + 0x28c));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Sound_Ozo_BasicAttack_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Ozo_BasicAttack_Impact_2");
  FUN_00cf41bc(uVar2,"Sound_Ozo_BasicAttack_Impact_3");
  FUN_00cf99dc(auStack_58);
  uVar2 = FUN_00cfa00c(auStack_58);
  FUN_00cf6bb0(uVar2,param_3);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd767c(void)

{
  FUN_00dd749c("Attack","Effect_Ozo_AA",FUN_00cfb6d0);
  return;
}




void FUN_00dd7698(void)

{
  FUN_00dd749c("AltAttack","Effect_Ozo_AA_Alt",FUN_00cfb6d0);
  return;
}




void FUN_00dd76b4(void)

{
  FUN_00dd749c("CritAttack","Effect_Ozo_AA_Crit",FUN_00cfb8b4);
  return;
}




void FUN_00dd76d0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_798 [64];
  undefined1 auStack_758 [16];
  undefined1 auStack_748 [64];
  undefined1 auStack_708 [96];
  long local_6a8 [200];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00d5048c(param_1);
    iVar2 = FUN_00d51964(param_1);
    if (iVar2 != 0) {
      uVar5 = 0;
      fVar13 = 0.0;
      do {
        lVar8 = FUN_00d51954(param_1,uVar5);
        fVar11 = (float)FUN_00d59f54(lVar7,0,2,0x19,0);
        if ((lVar8 == 0) || (fVar12 = 1.0, (*(byte *)(lVar8 + 0x2f4) & 1) == 0)) {
          fVar12 = (float)FUN_00d59f54(lVar7,0,3,0x19,0);
        }
        fVar13 = fVar13 + fVar11 * fVar12;
        uVar5 = uVar5 + 1;
        uVar3 = FUN_00d51964(param_1);
      } while (uVar5 < uVar3);
      if (0.0 < fVar13) {
        uVar9 = FUN_00d9eb64(lVar7);
        uVar4 = FUN_00d540f0(uVar9,param_1);
        FUN_00daa4a4(fVar13,auStack_748,*(undefined4 *)(lVar7 + 0x260),
                     *(undefined4 *)(lVar7 + 0x260),0xffffffff,uVar4,0xee,0xffffffff);
        FUN_00910c0c(auStack_748);
        uVar6 = FUN_00d44008(*(undefined4 *)(lVar7 + 0x260),
                             PTR_s_Buff_Ozo_Talent_RingLeader_02bf1fe0);
        if ((uVar6 & 1) != 0) {
          FUN_00d4d9e8(auStack_708);
          FUN_00d4db40(auStack_708,lVar7);
          FUN_00d4daf4(auStack_708,1,0,0,0);
          FUN_00d55794(lVar7,auStack_758,0);
          FUN_00d5a3d0(lVar7,DAT_0320e9f8,0,9);
          FUN_00d4db48(auStack_708,auStack_758);
          FUN_00d4dabc(auStack_708,1);
          fVar11 = (float)FUN_00d5a3d0(lVar7,DAT_0320e9f8,1,9);
          uVar5 = FUN_00d9e840(auStack_708,local_6a8,200,0);
          if (uVar5 != 0) {
            uVar6 = (ulong)uVar5;
            plVar10 = local_6a8;
            do {
              if (*plVar10 != 0) {
                FUN_00daa4a4(fVar13 * fVar11,auStack_798,*(undefined4 *)(lVar7 + 0x260),
                             *(undefined4 *)(*plVar10 + 0x260),0xffffffff,uVar4,0xee,0xffffffff);
                FUN_00910c0c(auStack_798);
              }
              uVar6 = uVar6 - 1;
              plVar10 = plVar10 + 1;
            } while (uVar6 != 0);
          }
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd7930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00d55794(param_2,param_4,0);
  return;
}




void FUN_00dd7940(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float __x;
  undefined8 uVar4;
  undefined1 local_58 [8];
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_5,local_58,0);
  fVar2 = (float)FUN_00d51830(param_4);
  fVar2 = fVar2 - local_58._0_4_;
  param_2 = param_2 - local_58._4_4_;
  param_3 = param_3 - local_50;
  __x = fVar2 * fVar2 + param_2 * param_2 + param_3 * param_3;
  uVar4 = DAT_03218f68;
  fVar3 = DAT_03218f70;
  if (1e-08 <= __x) {
    fVar3 = SQRT(__x);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(__x);
    }
    uVar4 = CONCAT44(param_2 / fVar3,fVar2 / fVar3);
    fVar3 = param_3 / fVar3;
  }
  fVar2 = (float)FUN_00d50cc8(param_4);
  *param_7 = CONCAT44(local_58._4_4_ + (float)((ulong)uVar4 >> 0x20) * fVar2,
                      local_58._0_4_ + (float)uVar4 * fVar2);
  *(float *)(param_7 + 1) = fVar3 * fVar2 + local_50;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dd7a48(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  uVar2 = FUN_00cfa444(auStack_a8);
  FUN_00cf2fa4(uVar2,PTR_s_Buff_Ozo_Rolling_02bf0d10,0x400);
  FUN_00cfa6cc(auStack_a8);
  uVar2 = FUN_00cfb05c(auStack_a8);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa9e4(auStack_a8);
  FUN_00cf3048(uVar2,"Ability01_First",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_a8);
  FUN_00cf32cc(0,uVar2,"Effect_Ozo_A_1",0,0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_a8);
  FUN_00cf3428(0x3e4ccccd,uVar2,"Effect_Ozo_A_Ring",1,"Bone_Ring",0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_a8);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d09b24(*(undefined4 *)(lVar3 + 0x290));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Ozo_Ability_A_Attack_1",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_a8);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d09b24(*(undefined4 *)(lVar3 + 0x290));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Ozo_Ability_A_Impact_1",0,0,0xffffffff,0,1);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4dabc(auStack_98,0x40000);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00cf99dc(auStack_a8);
  plVar4 = (long *)FUN_00cfa09c(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"FirstHitDamage_Primary",0);
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  FUN_00cf9eec(auStack_a8);
  uVar2 = FUN_00cfaf3c(auStack_a8);
  uVar2 = FUN_00cf5ac8(0x3f800000,uVar2,FUN_00dd7930,FUN_00dd7940);
  uVar2 = FUN_00cf5ae0(uVar2,auStack_98);
  FUN_00cf5b20(uVar2,1);
  plVar4 = (long *)FUN_00cfa09c(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"FirstHitDamage",0);
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  FUN_00cf99dc(auStack_a8);
  uVar2 = FUN_00cf9cf4(auStack_a8);
  FUN_00cf2e48(uVar2,FUN_00dd76d0);
  FUN_00cf9eec(auStack_a8);
  FUN_00cf98bc(auStack_a8);
  uVar2 = FUN_00cf9ab4(auStack_a8);
  FUN_00cf456c(uVar2,PTR_s_Buff_Ozo_A2_Available_02bf0cb0,FUN_00dd7d6c,1,0);
  FUN_00cf9eec(auStack_a8);
  FUN_00cfacb4(auStack_a8);
  FUN_00cf50b0(0x3f000000);
  lVar3 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd7d6c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00dd7d80(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [16];
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_78);
  uVar2 = FUN_00cfa444(auStack_78);
  FUN_00cf2fa4(uVar2,PTR_s_Buff_Ozo_Rolling_02bf0d10,0x400);
  plVar3 = (long *)FUN_00cfb404(auStack_78);
  (**(code **)(*plVar3 + 0x50))
            (plVar3,PTR_s_Buff_Ozo_A2_Available_02bf0cb0,PTR_s_Buff_Ozo_A3_Available_02bf0cb8);
  FUN_00cfa6cc(auStack_78);
  uVar2 = FUN_00cfb05c(auStack_78);
  uVar2 = FUN_00cf7b2c(uVar2,2);
  FUN_00cf7b3c(uVar2,2);
  uVar2 = FUN_00cfaa74(auStack_78);
  FUN_00cf32cc(0,uVar2,"Effect_Ozo_A_2",1,0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_78);
  FUN_00cf3428(0x3ecccccd,uVar2,"Effect_Ozo_A_Ring",1,"Bone_Ring",0,1,0,0);
  uVar2 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar2,"Ability01_Second",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfab94(auStack_78);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d09b24(*(undefined4 *)(lVar4 + 0x290));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Ozo_Ability_A_Attack_2",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfa12c(auStack_78);
  local_58[0] = 0x40000000;
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x98))(plVar3,local_58,0);
  local_68[0] = 0x3e99999a;
  local_60 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,local_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  (**(code **)(*plVar3 + 0xb8))(0x41700000);
  uVar2 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_78);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d09b24(*(undefined4 *)(lVar4 + 0x290));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Ozo_Ability_A_Impact_2",0,0,0xffffffff,0,1);
  FUN_00cf99dc(auStack_78);
  plVar3 = (long *)FUN_00cfa09c(auStack_78);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"SecondHitDamage",0);
  (**(code **)(*plVar3 + 0x70))(plVar3,1);
  uVar2 = FUN_00cf9cf4(auStack_78);
  FUN_00cf2e48(uVar2,FUN_00dd76d0);
  FUN_00cf9eec(auStack_78);
  uVar2 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(auStack_78);
  FUN_00cfacb4(auStack_78);
  FUN_00cf50b0(0x3f000000);
  lVar4 = FUN_00cfa6cc(auStack_78);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

