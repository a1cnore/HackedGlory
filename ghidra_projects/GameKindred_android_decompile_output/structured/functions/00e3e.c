// functions/00e3e — 14 functions
#include "libGameKindred.h"




void FUN_00e3e038(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_30);
  lVar2 = FUN_00d66d28(local_30);
  lVar3 = *(long *)(lVar2 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  uVar4 = FUN_00d6bbac(lVar3,DAT_031bb08c,0);
  if ((uVar4 & 1) == 0) {
    lVar3 = *(long *)(lVar2 + 0x18);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_0314f724))) {
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    FUN_00d60bd0();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3e0f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_00d66d28(*param_1);
  uVar1 = FUN_00da01e4();
  *param_2 = uVar1;
  return;
}




void FUN_00e3e120(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = FUN_00d67c60();
  puVar2 = PTR_s_onApplyName_02bed4f8;
  uVar3 = FUN_00e6a474(PTR_s_onApplyName_02bed4f8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e3df6c;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onEndName_02bed518;
  uVar3 = FUN_00e6a474(PTR_s_onEndName_02bed518);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e3e038;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d65010(param_1);
  plVar5 = (long *)FUN_00d2df44(lVar4 + 0x10);
  (**(code **)(*plVar5 + 0x30))(plVar5,"Idle","StrafeIdle");
  lVar4 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar4 + 0x10);
  return;
}




float FUN_00e3e230(undefined8 *param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00d67b34(*param_1);
  fVar2 = (float)thunk_FUN_00d086f0(param_2,2,1);
  if (fVar2 <= fVar1) {
    fVar1 = fVar2;
  }
  return fVar1;
}




void FUN_00e3e278(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00d66d28(*param_1);
  uVar2 = FUN_00d44be0(uVar1,PTR_s_Buff_Skye_Barrage_02bf0fe0);
  uVar3 = 0x3f000000;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0x3f800000;
  }
  *param_2 = uVar3;
  return;
}




void FUN_00e3e2bc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65d0c();
  FUN_00d2a320(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Skye_JumpJets_02bf0ff0);
  local_48 = FUN_00e3e230;
  local_40 = 5;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  (**(code **)(*plVar3 + 0x58))(plVar3,FUN_00e3e278);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e3e37c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar5 = (float)thunk_FUN_00d086f0(param_2,8,1);
  uVar2 = FUN_00d44be0(param_2,PTR_s_Buff_Skye_CircleStrafing_02bf0fd0);
  if (((uVar2 & 1) != 0) ||
     (uVar2 = FUN_00d44be0(param_2,PTR_s_Buff_Skye_Barrage_02bf0fe0), fVar6 = fVar5,
     (uVar2 & 1) != 0)) {
    pfVar3 = (float *)FUN_00da2cf8(param_2);
    fVar8 = pfVar3[1];
    fVar7 = pfVar3[2];
    fVar9 = *pfVar3;
    if ((1.1920929e-07 <= ABS(fVar7)) ||
       ((1.1920929e-07 <= ABS(fVar9) || (fVar6 = 0.0, 1.1920929e-07 <= ABS(fVar8))))) {
      FUN_00d557c4(param_2,&local_68,&DAT_03218f68);
      fVar8 = fVar9 * local_68 + fVar8 * fStack_64 + fVar7 * local_60;
      fVar6 = (float)thunk_FUN_00d086f0(param_2,10,1);
      fVar7 = cosf((fVar6 * -0.5 + 90.0) * 0.017453292);
      if (-fVar7 <= fVar8) {
        fVar6 = fVar5;
        if (fVar8 <= fVar7) goto LAB_00e3e508;
        fVar6 = (1.0 - fVar8) / (1.0 - fVar7);
        uVar4 = 7;
      }
      else {
        fVar6 = (fVar8 + 1.0) / (fVar7 + 1.0);
        uVar4 = 9;
      }
      fVar7 = (float)thunk_FUN_00d086f0(param_2,uVar4,1);
      fVar6 = fVar5 * fVar6 + (1.0 - fVar6) * fVar7;
    }
  }
LAB_00e3e508:
  fVar5 = (float)FUN_00d6a1f8(*param_1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return fVar6 * fVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3e548(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d6568c();
  uVar3 = FUN_00d29f44(lVar2 + 0x10);
  local_48 = FUN_00e3e37c;
  local_40 = 5;
  FUN_00d47690(uVar3,1,&local_48);
  FUN_00d476f4();
  lVar2 = FUN_00d63f30(param_1);
  plVar4 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Skye_Perk");
  lVar2 = FUN_00d09310();
  FUN_00d09980(*(undefined4 *)(lVar2 + 0x204));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  plVar4 = (long *)FUN_00d2945c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_wingJet_L");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Skye_Thruster_WL");
  plVar4 = (long *)FUN_00d2945c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_wingJet_R");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Skye_Thruster_WR");
  plVar4 = (long *)FUN_00d2945c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_Footjet_L");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Skye_Thruster_FL");
  plVar4 = (long *)FUN_00d2945c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_Footjet_R");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Skye_Thruster_FR");
  plVar4 = (long *)FUN_00d2945c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_S2_LFan");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Skye_LFan");
  plVar4 = (long *)FUN_00d2945c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_S2_RFan");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Skye_RFan");
  uVar3 = FUN_00d66d28(param_1);
  uVar5 = FUN_00d44be0(uVar3,PTR_s_Buff_Skye_Barrage_02bf0fe0);
  if ((uVar5 & 1) == 0) {
    plVar4 = (long *)FUN_00d2df44(lVar2);
    (**(code **)(*plVar4 + 0x30))(plVar4,"StrafeForward","StrafeFastForward");
    plVar4 = (long *)FUN_00d2df44(lVar2);
    (**(code **)(*plVar4 + 0x30))(plVar4,"StrafeForwardStart","StrafeFastForward");
    plVar4 = (long *)FUN_00d2df44(lVar2);
    (**(code **)(*plVar4 + 0x30))(plVar4,"StrafeBack","StrafeFastBack");
    plVar4 = (long *)FUN_00d2df44(lVar2);
    (**(code **)(*plVar4 + 0x30))(plVar4,"StrafeBackStart","StrafeFastBack");
    plVar4 = (long *)FUN_00d2df44(lVar2);
    (**(code **)(*plVar4 + 0x30))(plVar4,"StrafeRight","StrafeFastRight");
    plVar4 = (long *)FUN_00d2df44(lVar2);
    (**(code **)(*plVar4 + 0x30))(plVar4,"StrafeRightStart","StrafeFastRight");
    plVar4 = (long *)FUN_00d2df44(lVar2);
    (**(code **)(*plVar4 + 0x30))(plVar4,"StrafeLeft","StrafeFastLeft");
    plVar4 = (long *)FUN_00d2df44(lVar2);
    (**(code **)(*plVar4 + 0x30))(plVar4,"StrafeLeftStart","StrafeFastLeft");
  }
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3e87c(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 local_c0 [2];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_a0);
  uVar5 = FUN_00d66d28(local_a0);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    FUN_00d55794(uVar5,auStack_b0,0);
    FUN_00d5810c(uVar5,auStack_b8,&DAT_03218f20);
    uVar2 = FUN_00d5ba88(uVar5);
    uVar3 = FUN_00d5ba88(uVar5);
    local_c0[0] = 0x259fd523;
    uVar4 = FUN_00ceb350();
    FUN_00d02b18(0,auStack_98,uVar2,uVar3,auStack_b8,0x6e,auStack_b0,auStack_b8,local_c0,uVar4);
    FUN_00ce20fc(auStack_98);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3e964(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00d66d28();
  fVar8 = (float)FUN_00d59f54(uVar5,0,5,0x19,0);
  FUN_00d67b04(1.0 / fVar8,param_1);
  lVar6 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onBuffIntervalName_02bed520;
  uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar6 + 0xf8);
  *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e3e87c;
  *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  lVar6 = FUN_00d65010(param_1);
  lVar6 = lVar6 + 0x10;
  FUN_00e37900(lVar6);
  uVar5 = FUN_00d3a390(lVar6);
  uVar5 = FUN_00d48198(uVar5,FUN_00d48354);
  FUN_00d481d4(uVar5,200);
  uVar5 = FUN_00d45f10(lVar6);
  FUN_00d9886c(uVar5,PTR_s_Ability__Skye__A_02bef588,PTR_s_Ability__Skye__A_Cancel_02bef590);
  plVar7 = (long *)FUN_00d2945c(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x60))();
  (**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Skye_Barrage_MF");
  plVar7 = (long *)FUN_00d2df94(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,"Sound_Skye_Ability_A_Barrage_Loop_1");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,"Sound_Skye_Ability_A_Barrage_Loop_2");
  lVar6 = FUN_00d09310();
  FUN_00d09980(*(undefined4 *)(lVar6 + 0x20c));
  (**(code **)(*plVar7 + 0x28))(plVar7);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar6 + 0x30);
  FUN_00d3e534();
  uVar5 = FUN_00e37830();
  FUN_00d42654(auStack_60,uVar5);
  FUN_00d3f09c(uVar5,"Idle","BarrageIdle");
  FUN_00d3e534();
  uVar5 = FUN_00e37830();
  FUN_00d42654(auStack_60,uVar5);
  FUN_00d3f09c(uVar5,"IdleCombat","BarrageIdle");
  FUN_00d3e534();
  uVar5 = FUN_00e37830();
  FUN_00d42654(auStack_60,uVar5);
  FUN_00d3f09c(uVar5,"MoveStop","BarrageIdle");
  FUN_00d3e534();
  uVar5 = FUN_00e37830();
  FUN_00d42654(auStack_60,uVar5);
  FUN_00d3f09c(uVar5,"StrafeForward","BarrageForward");
  FUN_00d3e534();
  uVar5 = FUN_00e37830();
  FUN_00d42654(auStack_60,uVar5);
  FUN_00d3f09c(uVar5,"StrafeBack","BarrageBack");
  FUN_00d3e534();
  uVar5 = FUN_00e37830();
  FUN_00d42654(auStack_60,uVar5);
  FUN_00d3f09c(uVar5,"StrafeRight","BarrageRight");
  FUN_00d3e534();
  uVar5 = FUN_00e37830();
  FUN_00d42654(auStack_60,uVar5);
  FUN_00d3f09c(uVar5,"StrafeLeft","BarrageLeft");
  FUN_00d3e534();
  uVar5 = FUN_00e37830();
  FUN_00d42654(auStack_60,uVar5);
  FUN_00d3f09c(uVar5,"StrafeBackStart","BarrageBackStart");
  FUN_00d3e534();
  uVar5 = FUN_00e37830();
  FUN_00d42654(auStack_60,uVar5);
  FUN_00d3f09c(uVar5,"StrafeRightStart","BarrageRightStart");
  FUN_00d3e534();
  uVar5 = FUN_00e37830();
  FUN_00d42654(auStack_60,uVar5);
  FUN_00d3f09c(uVar5,"StrafeLeftStart","BarrageLeftStart");
  FUN_00d634b4(param_1);
  lVar6 = FUN_00d4aa00();
  FUN_00d2a320(lVar6 + 0x10);
  lVar6 = FUN_00d64980(param_1);
  plVar7 = (long *)FUN_00e213ac(lVar6 + 0x10);
  (**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Ability__Skye__A_02bef588);
  plVar7 = (long *)FUN_00d2cc5c(lVar6 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,"Sound_Skye_Ability_A_Barrage_End_1");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,"Sound_Skye_Ability_A_Barrage_End_2");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,"Sound_Skye_Ability_A_Barrage_End_3");
  lVar6 = FUN_00d09310();
  FUN_00d09980(*(undefined4 *)(lVar6 + 0x20c));
  (**(code **)(*plVar7 + 0x28))(plVar7);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3ed9c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar3 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d29584();
  FUN_00d42654(auStack_60,uVar4);
  fVar5 = (float)FUN_00d59f54(uVar2,0,10,5,0);
  fVar6 = (float)FUN_00d59f54(uVar2,0,0xb,0x19,0);
  if (fVar6 <= fVar5) {
    fVar5 = fVar6;
  }
  uVar4 = FUN_00d472ec(fVar5,uVar4,2);
  FUN_00d472f8(uVar4,uVar2,1);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar3 + 8);
  FUN_00d3e534();
  uVar2 = FUN_00d29a68();
  FUN_00d42654(auStack_60,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined * FUN_00e3eea4(uint param_1)

{
  if (param_1 < 4) {
    return (&PTR_s_Ability02_DashForward_0281fde0)[(int)param_1];
  }
  return (undefined *)0x0;
}




undefined * FUN_00e3eec4(int param_1)

{
  if (param_1 - 1U < 3) {
    return (&PTR_s_Ability02_DashAcross_Stop_0281fe00)[(int)(param_1 - 1U)];
  }
  return (undefined *)0x0;
}




void FUN_00e3eee8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float __x;
  ulong local_70;
  float local_68;
  float local_60 [2];
  float local_58;
  float local_50 [2];
  float local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_40);
  lVar2 = FUN_00d66d28(local_40);
  lVar3 = FUN_00da01e4();
  if (lVar3 != 0) {
    FUN_00d55794(lVar2,local_50,0);
    FUN_00d55794(lVar3,local_60,0);
    local_60[0] = local_60[0] - local_50[0];
    local_68 = local_58 - local_48;
    __x = local_60[0] * local_60[0] + 0.0 + local_68 * local_68;
    local_70 = (ulong)(uint)local_60[0];
    if (1e-08 <= __x) {
      fVar4 = SQRT(__x);
      if (NAN(fVar4)) {
        fVar4 = sqrtf(__x);
      }
      local_70 = CONCAT44((float)(local_70 >> 0x20) / fVar4,(float)local_70 / fVar4);
      local_68 = local_68 / fVar4;
    }
    else {
      local_68 = DAT_03218f70;
      local_70 = DAT_03218f68;
    }
    lVar2 = *(long *)(lVar2 + 0x18);
    while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_0314f724))) {
      lVar2 = *(long *)(lVar2 + 0x20);
    }
    FUN_00d60b0c(lVar2,&local_70,1);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

