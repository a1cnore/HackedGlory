// functions/00ded — 14 functions
#include "libGameKindred.h"




void FUN_00ded070(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfad44(auStack_38);
  FUN_00cf2ec0(uVar2,FUN_00decf64);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ded0d4(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_009bc24c();
  *param_2 = uVar1;
  return;
}




int FUN_00ded0f8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  iVar1 = FUN_00cf2ed4();
  if (iVar1 != 0) {
    return iVar1;
  }
  lVar2 = FUN_00d50ef8(param_1);
  lVar4 = *(long *)(lVar2 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  iVar1 = FUN_00d53990(lVar4,0);
  if ((iVar1 != 2) && (iVar1 = FUN_00d53990(lVar4,1), iVar1 != 2)) {
    iVar1 = FUN_00d53990(lVar4,2);
    if (iVar1 == 2) {
      return 2;
    }
    iVar1 = FUN_00d53990(lVar4,8);
    if ((iVar1 != 2) ||
       (uVar3 = FUN_00d44be0(lVar2,PTR_s_Buff_Varya_C_ComboWindow_02bf1358), (uVar3 & 1) != 0)) {
      uVar3 = FUN_00d44be0(lVar2,PTR_s_Buff_Varya_B_Control_02bf12f0);
      if ((uVar3 & 1) != 0) {
        return 2;
      }
      return 0;
    }
  }
  return 2;
}




float FUN_00ded1f4(long param_1)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_00d59f54(param_1,4,5,0x19,0);
  fVar2 = fVar2 + 0.2;
  uVar1 = FUN_00d44008(*(undefined4 *)(param_1 + 0x260),PTR_s_Buff_Varya_Talent_TalentB_02bf2118);
  if ((uVar1 & 1) != 0) {
    fVar3 = (float)FUN_00d5a3d0(param_1,DAT_0320ec1c,0,9);
    fVar2 = fVar2 - fVar3;
    if (fVar2 <= 0.1) {
      fVar2 = 0.1;
    }
  }
  return fVar2;
}




void FUN_00ded280(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar3 = FUN_00cfad44(auStack_48);
  FUN_00cf2ec0(uVar3,FUN_00ded0f8);
  uVar3 = FUN_00cf9f34(auStack_48);
  uVar4 = FUN_00d9ab88();
  FUN_00d9b1c4(uVar4,FUN_00dec410);
  FUN_00d9b0f8(uVar3);
  plVar5 = (long *)FUN_00cf9d3c();
  puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x50))();
  (**(code **)*puVar6)(puVar6,PTR_s_Ability__Varya__C_02bef7b8);
  FUN_00d9b0f8(uVar3);
  FUN_00cf98bc();
  FUN_00d9b0f8(uVar3);
  puVar2 = PTR_s_Buff_Varya_C_ComboWindow_02bf1358;
  uVar4 = FUN_00cf9d84();
  FUN_00cf49b0(uVar4,puVar2);
  FUN_00d9b0f8(uVar3);
  FUN_00cf9eec();
  lVar7 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar7 + 0x10) = 1;
  FUN_00cf98bc(auStack_48);
  puVar2 = PTR_s_Buff_Varya_B_Control_02bf12f0;
  uVar3 = FUN_00cf9ab4(auStack_48);
  uVar3 = FUN_00cf456c(uVar3,puVar2,FUN_00ded4b4,1,0);
  FUN_00cf45d4(uVar3,FUN_00ded0d4);
  puVar2 = PTR_s_Buff_Varya_B_ChargingFx_02bf1320;
  uVar3 = FUN_00cf9ab4(auStack_48);
  uVar3 = FUN_00cf456c(uVar3,puVar2,FUN_00ded1f4,1,0);
  FUN_00cf45d4(uVar3,FUN_00ded0d4);
  FUN_00cf9eec(auStack_48);
  uVar3 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar3,"Ability02",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cf98bc(auStack_48);
  puVar2 = PTR_s_Buff_Varya_B_MoveAvailable_02bf1310;
  uVar3 = FUN_00cf9ab4(auStack_48);
  uVar3 = FUN_00cf456c(uVar3,puVar2,FUN_00ded4b4,1,0);
  FUN_00cf45c4(uVar3,FUN_00deb9a0);
  FUN_00cf9eec(auStack_48);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00da07e0(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ded4b4(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,6,0x19,0);
  return;
}




void FUN_00ded4c8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfad44(auStack_48);
  FUN_00cf2ec0(uVar2,FUN_00cf2ed4);
  lVar3 = FUN_00cf9f7c(auStack_48);
  lVar4 = FUN_00cefb20(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Varya_B_DoubleDash_02bf1308;
  uVar2 = FUN_00cf9634(lVar3 + 0xb0);
  uVar2 = FUN_00cfc5fc(uVar2,PTR_s_Ability__Varya__B_Move_Charged_02bef7e8);
  FUN_00cfc614(uVar2,FUN_00cfc7e4);
  uVar2 = FUN_00cf9634(lVar3 + 200);
  uVar2 = FUN_00cfc5fc(uVar2,PTR_s_Ability__Varya__B_Move_Default_02bef7f0);
  FUN_00cfc614(uVar2,FUN_00cfc7e4);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ded598(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  undefined8 uVar11;
  undefined1 auStack_798 [16];
  undefined1 auStack_788 [88];
  undefined1 auStack_730 [40];
  undefined1 auStack_708 [96];
  long alStack_6a8 [200];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_00d5048c(param_1);
    uVar1 = *(undefined4 *)(lVar8 + 0x260);
    fVar10 = (float)FUN_00d59f54(lVar8,4,9,0x19,0);
    uVar11 = FUN_00d59f54(lVar8,4,8,0x19,0);
    FUN_00d55794(lVar8,auStack_798,0);
    FUN_00d4d9e8(auStack_708);
    FUN_00d4dabc(auStack_708,0x40000);
    FUN_00d4db40(auStack_708,lVar8);
    FUN_00d4daf4(auStack_708,0,1,0,0);
    FUN_00d4dc24(auStack_708,1);
    FUN_00d4d354(auStack_708,0);
    FUN_00d4db48(uVar11,auStack_708,auStack_798);
    FUN_00d4eb08(auStack_730,auStack_798,(int)fVar10,0);
    uVar5 = FUN_00d9e840(auStack_708,alStack_6a8,200,auStack_730);
    if (uVar5 != 0) {
      uVar7 = (ulong)uVar5;
      plVar9 = alStack_6a8;
      do {
        puVar4 = PTR_s_Buff_Varya_B_DamageBeam_02bf1338;
        uVar2 = *(undefined4 *)(*plVar9 + 0x260);
        uVar6 = FUN_00ceb350();
        FUN_00cfe864(0x3e99999a,0,0,auStack_788,uVar1,uVar2,puVar4,uVar6,1,uVar1,0);
        FUN_00ce20fc(auStack_788);
        uVar7 = uVar7 - 1;
        plVar9 = plVar9 + 1;
      } while (uVar7 != 0);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ded74c(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00d50ef8();
  lVar4 = *(long *)(lVar4 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  thunk_FUN_00d9ff34(&local_30,PTR_s_Buff_Varya_B_Control_02bf12f0);
  uVar5 = FUN_00d6bbac(lVar4,local_30,&local_2c);
  bVar2 = false;
  if ((uVar5 & 1) != 0) {
    iVar3 = FUN_00d6bfa8(lVar4,local_2c);
    bVar2 = iVar3 == 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




void FUN_00ded7fc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  uVar3 = FUN_00cfad44(auStack_58);
  FUN_00cf2ec0(uVar3,FUN_00cf2ed4);
  FUN_00da0778(auStack_58);
  uVar3 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar6 = FUN_00d0a010(*(undefined4 *)(lVar4 + 0x464));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Varya_Ability_B_Dash_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Varya_Ability_B_Dash_2");
  uVar3 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar3,"Ability02_DashAFinal",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar3,"Effect_Varya_B_Dash_Trail",1,0,1,0,0);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  plVar5 = (long *)FUN_00cfa12c(auStack_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x88))();
  local_48[0] = 0x3e4ccccd;
  local_40 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa8))(plVar5,local_48);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar3,0);
  FUN_00cfacb4(auStack_58);
  FUN_00cf50b0(0);
  uVar3 = FUN_00cf9cf4(auStack_58);
  FUN_00cf2e48(uVar3,FUN_00ded598);
  uVar3 = FUN_00cf9f34(auStack_58);
  uVar6 = FUN_00d9ab88();
  FUN_00d9b1c4(uVar6,FUN_00ded74c);
  FUN_00d9b0f8(uVar3);
  FUN_00cf98bc();
  FUN_00d9b0f8(uVar3);
  puVar2 = PTR_s_Buff_Varya_B_Combo_A_Activate_02bf1328;
  uVar6 = FUN_00cf9ab4();
  FUN_00cf44e8(0x3f800000,uVar6,puVar2,1,0);
  FUN_00d9b0f8(uVar3);
  FUN_00cf9eec();
  FUN_00cf98bc(auStack_58);
  puVar2 = PTR_s_Buff_SpeedDecayingUsingBuffVar_02beb4d0;
  uVar3 = FUN_00cf9ab4(auStack_58);
  uVar3 = FUN_00cf456c(uVar3,puVar2,FUN_00dec1c0,1,0);
  FUN_00cf45d4(uVar3,FUN_00debda0);
  puVar2 = PTR_s_Buff_Varya_B_Control_02bf12f0;
  uVar3 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar3,puVar2);
  FUN_00cf9eec(auStack_58);
  FUN_00da07e0(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00deda9c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  uVar3 = FUN_00cfad44(auStack_58);
  FUN_00cf2ec0(uVar3,FUN_00cf2ed4);
  FUN_00da0778(auStack_58);
  uVar4 = FUN_00cfab94(auStack_58);
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d0a010(*(undefined4 *)(lVar5 + 0x464));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Varya_Ability_B_Dash_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"Sound_Varya_Ability_B_Dash_2");
  uVar3 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar3,"Ability02_DashB",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar3,"Effect_Varya_B_Dash_Trail",1,0,1,0,0);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  plVar6 = (long *)FUN_00cfa12c(auStack_58);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x88))();
  local_48[0] = 0x3e4ccccd;
  local_40 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0xa8))(plVar6,local_48);
  (**(code **)(*plVar6 + 0xb0))(plVar6,1);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cf9cf4(auStack_58);
  FUN_00cf2e48(uVar3,FUN_00ded598);
  FUN_00cf98bc(auStack_58);
  puVar2 = PTR_s_Buff_Varya_B_MoveDefaultAvailabl_02bf1318;
  uVar3 = FUN_00cf9ab4(auStack_58);
  FUN_00cf456c(uVar3,puVar2,FUN_00decf50,1,0);
  FUN_00cf9eec(auStack_58);
  FUN_00da07e0(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00dedc98(void)

{
  return 0x10;
}




void FUN_00dedca0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfad44(auStack_38);
  FUN_00cf2ec0(uVar2,FUN_00dedc98);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dedd04(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auStack_68 [16];
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  uVar3 = FUN_00cfa444(auStack_68);
  FUN_00cf2fa4(uVar3,PTR_s_Buff_Varya_C_Control_02bf1340,2);
  lVar4 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar4 + 0x10) = 1;
  uVar5 = FUN_00cfab94(auStack_68);
  lVar4 = FUN_00d09310();
  uVar3 = FUN_00d0a010(*(undefined4 *)(lVar4 + 0x468));
  FUN_00cf4164(0x3f800000,uVar3,uVar5,"Sound_Varya_Ability_C_Activation_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar5,"Sound_Varya_Ability_C_Activation_2");
  uVar3 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar3,"Ability03",0,1,0,"AttackToIdle");
  FUN_00cf98bc(auStack_68);
  puVar2 = PTR_s_Buff_Varya_C_Casting_02bf1350;
  uVar3 = FUN_00cf9ab4(auStack_68);
  uVar3 = FUN_00cf456c(uVar3,puVar2,FUN_00dee018,1,0);
  FUN_00cf45d4(uVar3,FUN_00ded0d4);
  puVar2 = PTR_s_Buff_Varya_C_Control_02bf1340;
  uVar3 = FUN_00cf9ab4(auStack_68);
  FUN_00cf44e8(0x41200000,uVar3,puVar2,1,0);
  FUN_00cf9eec(auStack_68);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  plVar6 = (long *)FUN_00cfab04(auStack_68);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(plVar6,"Bone_RightHand");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Varya_C_Cast");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,1);
  plVar6 = (long *)(**(code **)(*plVar6 + 0xb0))(plVar6,1);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x90))();
  local_58[0] = 0x4019999a;
  local_50 = 1;
  (**(code **)(*plVar6 + 0x60))(plVar6,local_58);
  plVar6 = (long *)FUN_00cfab04(auStack_68);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(plVar6,"Bone_LeftHand");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Varya_C_Cast");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,1);
  plVar6 = (long *)(**(code **)(*plVar6 + 0xb0))(plVar6,1);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x90))();
  local_58[0] = 0x4019999a;
  local_50 = 1;
  (**(code **)(*plVar6 + 0x60))(plVar6,local_58);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7580(uVar3,FUN_00dee018);
  FUN_00cf7578(uVar3,0);
  FUN_00cf98bc(auStack_68);
  puVar2 = PTR_s_Buff_SpeedDecayingUsingBuffVar_02beb4d0;
  uVar3 = FUN_00cf9ab4(auStack_68);
  uVar3 = FUN_00cf456c(uVar3,puVar2,FUN_00dec1c0,1,0);
  FUN_00cf45d4(uVar3,FUN_00debda0);
  FUN_00cf9eec(auStack_68);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00da07e0(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

