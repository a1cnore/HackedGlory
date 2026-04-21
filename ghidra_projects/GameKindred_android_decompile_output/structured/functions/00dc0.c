// functions/00dc0 — 13 functions
#include "libGameKindred.h"




void FUN_00dc03d8(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,5,0x19,0);
  return;
}




void FUN_00dc03ec(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,8,0x19,0);
  return;
}




void FUN_00dc0400(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,6,0x89,0);
  return;
}




void FUN_00dc0414(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,7,1);
  return;
}




void FUN_00dc0420(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_4 = 0x40000000;
  *param_3 = 0x40800000;
  return;
}




void FUN_00dc0434(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auStack_c8 [16];
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  lVar2 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfab94(auStack_c8);
  lVar2 = FUN_00d09310();
  uVar10 = FUN_00d09ec0(*(undefined4 *)(lVar2 + 0x3e0));
  FUN_00cf4164(0x3f800000,uVar10,uVar3,"Sound_Grace_B_Buildup_01",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Grace_B_Buildup_02");
  FUN_00cf41bc(uVar3,"Sound_Grace_B_Buildup_03");
  lVar2 = FUN_00cf9f7c(auStack_c8);
  lVar4 = FUN_00db4148(lVar2 + 0x10);
  if (PTR_s_Ability__Grace__B_02beeb38 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar8 = (uint)(byte)*PTR_s_Ability__Grace__B_02beeb38;
    uVar6 = 0x811c9dc5;
    pbVar7 = PTR_s_Ability__Grace__B_02beeb38;
    if (*PTR_s_Ability__Grace__B_02beeb38 != 0) {
      do {
        uVar9 = (uint)pbVar7[1];
        uVar6 = (uVar6 ^ uVar8) * 0x1000193;
        uVar8 = uVar9;
        pbVar7 = pbVar7 + 1;
      } while (uVar9 != 0);
    }
  }
  *(uint *)(lVar4 + 8) = uVar6;
  FUN_00da0f04(0x3f8ccccd,lVar2 + 0xb0,PTR_s_Buff_BlockDebuffs_02beb3c8);
  uVar3 = FUN_00cfa9e4(auStack_c8);
  FUN_00cf3048(uVar3,"Ability02",0,0,0,"AttackToIdleCombat");
  plVar5 = (long *)FUN_00cfab04(auStack_c8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Grace_B_Warning");
  plVar5 = (long *)(**(code **)(*plVar5 + 0xc0))(0x3f800000,0x3f800000,0);
  local_b8[0] = 0x3f666666;
  local_b0 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5,local_b8);
  local_58[0] = 0x40600000;
  local_50 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xd0))(plVar5,local_58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xd8))(0x3e99999a);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  plVar5 = (long *)FUN_00cfab04(auStack_c8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"Bone_Mace");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Grace_B_Cast");
  local_b8[0] = 0x3f666666;
  local_b0 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5,local_b8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  uVar3 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3f666666);
  FUN_00cf7578(uVar3,0);
  plVar5 = (long *)FUN_00cfab04(auStack_c8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Grace_B_Impact");
  plVar5 = (long *)(**(code **)(*plVar5 + 0xc0))(0x3f800000,0,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,0);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  uVar3 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfab94(auStack_c8);
  lVar2 = FUN_00d09310();
  uVar10 = FUN_00d09ec0(*(undefined4 *)(lVar2 + 0x3e0));
  FUN_00cf4164(0x3f800000,uVar10,uVar3,"Sound_Grace_B_Explosion_01",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Grace_B_Explosion_02");
  FUN_00cf41bc(uVar3,"Sound_Grace_B_Explosion_03");
  FUN_00da0a68(auStack_c8,FUN_00dc0938);
  FUN_00cfa09c(auStack_c8);
  FUN_00da10d4(auStack_c8,FUN_00dc094c);
  FUN_00cf9eec(auStack_c8);
  FUN_00d4d9e8(local_b8);
  FUN_00d4dabc(local_b8,0x200000);
  FUN_00d4daf4(local_b8,0,1,0,0);
  uVar3 = FUN_00cfaf84(auStack_c8);
  FUN_00cf5504(uVar3,local_b8,0,FUN_00dc0938,0,1,0);
  uVar3 = FUN_00cf9ab4(auStack_c8);
  FUN_00cf44e8(0x3f800000,uVar3,PTR_s_Buff_Stunned_02beb430,1,0);
  uVar3 = FUN_00cf9bd4(auStack_c8);
  FUN_00cf834c(uVar3,FUN_00dc0420,0,1);
  FUN_00cf9eec(auStack_c8);
  plVar5 = (long *)FUN_00cfb134(auStack_c8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(0x3eb33333);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3f000000);
  (**(code **)(*plVar5 + 0x20))(0x41200000);
  FUN_00cfacb4(auStack_c8);
  FUN_00cf50b0(0x3f000000);
  FUN_00da0f54(auStack_c8,PTR_s_Buff_Grace_PostAbilityBonuses_02bf06e0,FUN_00dc0414);
  uVar3 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00da07e0(auStack_c8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dc0938(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00dc094c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




undefined1  [16] FUN_00dc0960(void)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  
  lVar1 = FUN_00d50ef8();
  auVar4 = FUN_00d59f54(lVar1,2,1,0x19,0);
  uVar6 = auVar4._8_8_;
  uVar5 = auVar4._0_8_;
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Grace_Talent_UnitedFront_02bf1ed8);
  if ((uVar2 & 1) != 0) {
    fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_0320e674,0,9);
    uVar5 = (ulong)(uint)(auVar4._0_4_ * fVar3);
    uVar6 = 0;
  }
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar5;
  return auVar4;
}




bool FUN_00dc09dc(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_00ceab48();
  bVar1 = false;
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00d50ef8(param_1);
    lVar4 = *(long *)(lVar4 + 0x18);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    iVar2 = FUN_00d535a4(lVar4,0);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}




void FUN_00dc0a48(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  undefined1 auStack_78 [16];
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar11 = 0x811c9dc5;
  FUN_00cfb5b4(auStack_78);
  uVar3 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar3,"Ability03",0,0,0,"AttackToIdleCombat");
  uVar4 = FUN_00cfab94(auStack_78);
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d09ec0(*(undefined4 *)(lVar5 + 0x3e4));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Grace_C_Cast_01",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"Sound_Grace_C_Cast_02");
  FUN_00da0ff4(auStack_78,PTR_s_Buff_Grace_C_TargetWarmup_02bf0728,FUN_00dc0edc);
  FUN_00da0f54(auStack_78,PTR_s_Buff_Grace_C_SelfDuringChannel_02bf0738,FUN_00dc0edc);
  lVar5 = FUN_00cf9f7c(auStack_78);
  lVar6 = FUN_00db5fb8(lVar5 + 0x10);
  if (PTR_s_Ability__Grace__A_02beeb30 == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x811c9dc5;
    if (*PTR_s_Ability__Grace__A_02beeb30 != 0) {
      uVar8 = 0x811c9dc5;
      uVar9 = (uint)(byte)*PTR_s_Ability__Grace__A_02beeb30;
      pbVar10 = PTR_s_Ability__Grace__A_02beeb30;
      do {
        pbVar10 = pbVar10 + 1;
        uVar8 = (uVar8 ^ uVar9) * 0x1000193;
        uVar9 = (uint)*pbVar10;
      } while (*pbVar10 != 0);
    }
  }
  lVar5 = lVar5 + 0xb0;
  *(uint *)(lVar6 + 8) = uVar8;
  *(undefined4 *)(lVar6 + 0xc) = 1;
  FUN_00cf98bc(lVar5);
  puVar2 = PTR_s_Buff_Grace_A_GuardOmni_02bf0708;
  uVar3 = FUN_00cf9ab4(lVar5);
  FUN_00cf456c(uVar3,puVar2,FUN_00dc03d8,1,0);
  puVar2 = PTR_s_Buff_Grace_A_Lockout_02bf06e8;
  uVar3 = FUN_00cf9d84(lVar5);
  FUN_00cf49b0(uVar3,puVar2);
  puVar2 = PTR_s_Buff_Grace_A_LockoutOnUltimate_02bf06f0;
  uVar3 = FUN_00cf9d84(lVar5);
  FUN_00cf49b0(uVar3,puVar2);
  puVar2 = PTR_s_Buff_Grace_A_LockoutOnUltimateUs_02bf06f8;
  uVar3 = FUN_00cf9d84(lVar5);
  FUN_00cf49b0(uVar3,puVar2);
  FUN_00cf9eec(lVar5);
  FUN_00cf99dc(lVar5);
  puVar2 = PTR_s_Buff_Grace_A_GuardDirectional_02bf0718;
  uVar3 = FUN_00cf9d84(lVar5);
  FUN_00cf49b0(uVar3,puVar2);
  puVar2 = PTR_s_Buff_Grace_A_GuardOmni_02bf0708;
  uVar3 = FUN_00cf9ab4(lVar5);
  FUN_00cf456c(uVar3,puVar2,FUN_00dc0400,1,0);
  FUN_00cf9eec(lVar5);
  FUN_00cf98bc(lVar5);
  lVar5 = FUN_00cf9f7c(auStack_78);
  lVar6 = FUN_00db4148(lVar5 + 0x10);
  if (PTR_s_Ability__Grace__A_02beeb30 == (undefined *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar8 = (uint)(byte)*PTR_s_Ability__Grace__A_02beeb30;
    pbVar10 = PTR_s_Ability__Grace__A_02beeb30;
    if (*PTR_s_Ability__Grace__A_02beeb30 != 0) {
      do {
        uVar9 = (uint)pbVar10[1];
        uVar11 = (uVar11 ^ uVar8) * 0x1000193;
        uVar8 = uVar9;
        pbVar10 = pbVar10 + 1;
      } while (uVar9 != 0);
    }
  }
  *(uint *)(lVar6 + 8) = uVar11;
  puVar2 = PTR_s_Buff_Grace_A_LockoutOnUltimateUs_02bf06f8;
  uVar3 = FUN_00cf9ab4(lVar5 + 0xb0);
  FUN_00cf456c(uVar3,puVar2,FUN_00dc03d8,1,0);
  puVar2 = PTR_s_Buff_Grace_A_LockoutOnUltimate_02bf06f0;
  uVar3 = FUN_00cf9ab4(lVar5 + 200);
  FUN_00cf456c(uVar3,puVar2,FUN_00dc03d8,1,0);
  FUN_00cf9eec(auStack_78);
  plVar7 = (long *)FUN_00cfab04(auStack_78);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))();
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Grace_C_Charging");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x78))(plVar7,1);
  (**(code **)(*plVar7 + 0xb0))(plVar7,1);
  FUN_00da07ac(auStack_78);
  uVar3 = FUN_00cfa294(auStack_78);
  FUN_00cf7580(uVar3,FUN_00dc0edc);
  FUN_00cf7578(uVar3,0);
  FUN_00da0740(auStack_78);
  FUN_00d9b100();
  uVar4 = FUN_00cfab94();
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d09ec0(*(undefined4 *)(lVar5 + 1000));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Grace_C_End_01",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"Sound_Grace_C_End_02");
  FUN_00cf41bc(uVar4,"Sound_Grace_C_End_03");
  FUN_00cf99dc(auStack_78);
  puVar2 = PTR_s_Buff_Grace_C_TargetImpact_02bf0730;
  uVar3 = FUN_00cf9ab4(auStack_78);
  FUN_00cf44e8(0x3f000000,uVar3,puVar2,1,0);
  FUN_00da06a0(auStack_78,PTR_s_Buff_Grace_Talent_UnitedFront_02bf1ed8);
  FUN_00d9b0f8();
  FUN_00cf98bc();
  local_68 = FUN_00dc0960;
  local_60 = 4;
  uVar3 = FUN_00cfa5ac(auStack_78);
  FUN_00cf6d54(uVar3,&local_68);
  FUN_00cf9eec(auStack_78);
  uVar3 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00da07e0(auStack_78);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dc0edc(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00dc0ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 uint param_5,undefined8 *param_6,uint param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_78);
  FUN_00cfb05c(auStack_78);
  uVar2 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_78);
  uVar7 = *param_4;
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09e18(*(undefined4 *)(lVar4 + 0x3a8));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,uVar7,0,0,0xffffffff,0,1);
  if (1 < param_5) {
    lVar4 = (ulong)param_5 - 1;
    do {
      param_4 = param_4 + 1;
      FUN_00cf41bc(uVar3,*param_4);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  uVar2 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_78);
  FUN_00cf32cc(0,uVar2,param_2,0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar3 = FUN_00cfab94(auStack_78);
  uVar7 = *param_6;
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09e18(*(undefined4 *)(lVar4 + 0x3a8));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,uVar7,0,0,0xffffffff,0,1);
  if (1 < param_7) {
    lVar4 = (ulong)param_7 - 1;
    do {
      param_6 = param_6 + 1;
      FUN_00cf41bc(uVar3,*param_6);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  FUN_00cf99dc(auStack_78);
  lVar4 = FUN_00cf9f7c(auStack_78);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Grumpjaw_B_Frenzy_02bf0760;
  plVar6 = (long *)FUN_00cfa09c(lVar4 + 0xb0);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))();
  (**(code **)(*plVar6 + 0x38))(plVar6,"BONUS_DAMAGE",2);
  uVar2 = FUN_00cfa00c(auStack_78);
  FUN_00cf6bb0(uVar2,param_3);
  FUN_00cfb0a4(auStack_78);
  FUN_00cfb5c4(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

