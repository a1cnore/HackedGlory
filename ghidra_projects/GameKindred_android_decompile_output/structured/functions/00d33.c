// functions/00d33 — 21 functions
#include "libGameKindred.h"




void FUN_00d33048(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBuffIntervalName_02bed520;
    uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d32c00;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    FUN_00d67b04(0x3dcccccd,param_1);
    uVar7 = FUN_00d6eb50();
    lVar6 = FUN_00d6eb5c(uVar7,"*FlareGun*");
    uVar12 = FUN_009bc24c();
    lVar8 = FUN_00d67c60(param_1);
    lVar9 = FUN_00d67c60(param_1);
    uVar4 = FUN_00e6a474("spawnTime");
    uVar4 = FUN_0091ed5c("spawnTime",uVar4,0x12345678);
    uVar4 = (**(code **)(*(long *)(lVar9 + 0x100) + 8))(lVar9 + 0x100,uVar4);
    puVar10 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0x100) + 0x10))(lVar8 + 0x100,uVar4);
    *puVar10 = uVar12;
    lVar8 = FUN_00d67c60(param_1);
    lVar9 = FUN_00d67c60(param_1);
    uVar4 = FUN_00e6a474("bDecloaked");
    uVar4 = FUN_0091ed5c("bDecloaked",uVar4,0x12345678);
    uVar4 = (**(code **)(*(long *)(lVar9 + 0x100) + 8))(lVar9 + 0x100,uVar4);
    puVar11 = (undefined1 *)(**(code **)(*(long *)(lVar8 + 0x100) + 0x10))(lVar8 + 0x100,uVar4);
    *puVar11 = 0;
    lVar8 = FUN_00d67c60(param_1);
    lVar9 = FUN_00d67c60(param_1);
    uVar4 = FUN_00e6a474("bArmed");
    uVar4 = FUN_0091ed5c("bArmed",uVar4,0x12345678);
    uVar4 = (**(code **)(*(long *)(lVar9 + 0x100) + 8))(lVar9 + 0x100,uVar4);
    puVar11 = (undefined1 *)(**(code **)(*(long *)(lVar8 + 0x100) + 0x10))(lVar8 + 0x100,uVar4);
    *puVar11 = 0;
    uVar4 = *(undefined4 *)(lVar6 + 0x144);
    lVar6 = FUN_00d67c60(param_1);
    lVar8 = FUN_00d67c60(param_1);
    uVar12 = FUN_00e6a474("flareVisionRange");
    uVar12 = FUN_0091ed5c("flareVisionRange",uVar12,0x12345678);
    uVar12 = (**(code **)(*(long *)(lVar8 + 0x100) + 8))(lVar8 + 0x100,uVar12);
    puVar10 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x100) + 0x10))(lVar6 + 0x100,uVar12);
    *puVar10 = uVar4;
  }
  uVar7 = FUN_00d6483c(param_1);
  lVar6 = FUN_00d48f64(uVar7,FUN_00d32f9c);
  uVar7 = FUN_00d39a54(lVar6 + 0x10);
  FUN_00d3e604(uVar7,FUN_00d32fdc);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_80,lVar6 + 0x30);
  FUN_00d3e534();
  uVar7 = FUN_00d294ac();
  FUN_00d42654(auStack_80,uVar7);
  uVar7 = FUN_00d47d9c(uVar7);
  uVar7 = FUN_00da2040(uVar7,"Effect_ScoutTrap_Enemy");
  FUN_00da2048(uVar7,"Effect_ScoutTrap");
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d33374(undefined8 param_1)

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
  uVar3 = FUN_00d29f44(lVar2 + 0x10);
  local_48 = FUN_00d33414;
  local_40 = 2;
  FUN_00d47690(uVar3,1,&local_48);
  plVar4 = (long *)FUN_00d2ccfc(lVar2 + 0x10);
  (**(code **)(*plVar4 + 0x38))();
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d33414(void)

{
  FUN_00d085c4(PTR_s__Item_WarTreads__02beb170,0,1);
  return;
}




void FUN_00d3342c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_50;
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d29c34(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,0xd);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Slowed_buff");
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_50 = FUN_00d33570;
  local_48 = 2;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0xf,2,&local_50);
  (**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3e99999a);
  local_48 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0xd,1,&local_50);
  (**(code **)(*plVar3 + 0x40))();
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_50,lVar2 + 8);
  FUN_00d3e534();
  uVar4 = FUN_00d29a68();
  FUN_00d42654(&local_50,uVar4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d33570(void)

{
  FUN_00d085c4(PTR_s__Item_AtlasPauldron__02beb018,0,1);
  return;
}




undefined1 FUN_00d33588(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d66d28(*param_1);
  return *(undefined1 *)(*(long *)(lVar1 + 0x38) + 0x60);
}




void FUN_00d335a8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_ShiverSteel");
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,2);
  FUN_00d4bc10();
  uVar4 = FUN_00d4bc38();
  lVar2 = FUN_00d4bcf8(uVar4,0x100000);
  lVar2 = FUN_00d29e8c(lVar2 + 0x10);
  lVar5 = FUN_00d29edc(lVar2 + 0x10);
  *(code **)(lVar5 + 8) = FUN_00d33588;
  FUN_00d2cf2c(lVar2 + 0x88);
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x88);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Item_ShiversteelMeleeSlow_02beb780);
  local_48 = FUN_00d336f4;
  local_40 = 2;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  FUN_00d2cf2c(lVar2 + 0xa0);
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0xa0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Item_ShiversteelRangedSlow_02beb788);
  local_48 = FUN_00d336f4;
  local_40 = 2;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d336f4(void)

{
  FUN_00d085c4(PTR_s__Item_Shiversteel__02beb118,0,1);
  return;
}




void FUN_00d3370c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_Shiversteel__02beb118);
  local_48[0] = FUN_00d08524(uVar2,1,1);
  local_40 = 1;
  FUN_00d42c70(param_1,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d33790(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_Shiversteel__02beb118);
  local_48[0] = FUN_00d08524(uVar2,2,1);
  local_40 = 1;
  FUN_00d42c70(param_1,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d33814(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00d69294(param_1,&uStack_a8,&local_b0);
  lVar9 = *(long *)(local_b0 + 0x20);
  lVar6 = FUN_00d66d28(uStack_a8);
  uVar7 = FUN_00daa578(local_b0,lVar6);
  if (((uVar7 & 1) != 0) && ((*(byte *)(local_b0 + 0xc) >> 2 & 1) != 0)) {
    uVar8 = FUN_00d6eb50();
    uVar8 = FUN_00d6eb5c(uVar8,PTR_s__Item_Bonesaw__02beb028);
    puVar4 = PTR_s_Buff_Item_BonesawDebuff_02beb790;
    uVar1 = *(undefined4 *)(lVar6 + 0x260);
    uVar2 = *(undefined4 *)(lVar9 + 0x260);
    uVar8 = FUN_00d08524(uVar8,2,1);
    uVar5 = FUN_00ceb350();
    FUN_00cfe864(uVar8,0,0,auStack_a0,uVar1,uVar2,puVar4,uVar5,1,0,0);
    FUN_00ce20fc(auStack_a0);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d33910(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = FUN_00d67c60();
  puVar2 = PTR_s_onAfterApplyDamageName_02bed608;
  uVar3 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d33814;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




void FUN_00d33980(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_30);
  uVar2 = FUN_00d66cf4(local_30);
  if (1 < uVar2) {
    FUN_00d67d3c(0x3f000000,local_30);
    FUN_00d67d04(0x3f000000,local_30);
    FUN_00d671f8(local_30,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d33a08(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00d6eb50();
  uVar5 = FUN_00d6eb5c(uVar5,PTR_s__Item_Bonesaw__02beb028);
  lVar6 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onTimeoutName_02bed530;
  uVar4 = FUN_00e6a474(PTR_s_onTimeoutName_02bed530);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar6 + 0xf8);
  *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d33980;
  *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar6 + 8);
  FUN_00d3e534();
  uVar7 = FUN_00d2965c();
  FUN_00d42654(auStack_60,uVar7);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar6 + 0x30);
  FUN_00d3e534();
  uVar7 = FUN_00d395d4();
  FUN_00d42654(auStack_60,uVar7);
  fVar8 = (float)FUN_00d08524(uVar5,1,1);
  FUN_00d40e24(-fVar8,uVar7,7,2);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d33b48(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d646fc();
  FUN_00d4ad80(uVar2,"TensionBow");
  lVar3 = FUN_00d4adc4();
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_LeftHand");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Tension");
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_RightHand");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Tension");
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,2);
  FUN_00d4bc10();
  uVar2 = FUN_00d4bc38();
  lVar3 = FUN_00d4bcf8(uVar2,0x100000);
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar5 = FUN_00d396a4(lVar3 + 0x10);
  lVar3 = lVar3 + 0xa0;
  *(undefined4 *)(lVar5 + 8) = 0x646f4313;
  FUN_00d2cf2c(lVar3);
  plVar4 = (long *)FUN_00d33d18(lVar3);
  local_58 = FUN_00d33d68;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Item_ShowTensionBowHitEffec_02beb7a8);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3dcccccd);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  plVar4 = (long *)FUN_00d2b6d8(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"TensionBow");
  local_58 = FUN_00d33d80;
  local_50 = 2;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  (**(code **)(*plVar4 + 0x58))();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d33d18(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099d3e0();
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




void FUN_00d33d68(undefined8 param_1)

{
  FUN_00d09208(param_1,PTR_s__Item_TensionBow__02beb158,2,9);
  return;
}




void FUN_00d33d80(void)

{
  FUN_00d085c4(PTR_s__Item_TensionBow__02beb158,1,1);
  return;
}




void FUN_00d33d98(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tension_Proc");
                    /* WARNING: Could not recover jumptable at 0x00d33de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_00d33de8(undefined8 *param_1,float *param_2,undefined4 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = 0.0;
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00d66d28(*param_1);
    uVar3 = FUN_00d6eb50();
    uVar3 = FUN_00d6eb5c(uVar3,PTR_s__Item_ReflexBlock__02beb0f8);
    fVar4 = (float)FUN_00d08524(uVar3,0,1);
    lVar2 = *(long *)(lVar2 + 0x40);
    fVar5 = (*(float *)(lVar2 + 0x240) + 1.0) *
            (*(float *)(lVar2 + 0xd8) +
            *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0));
    if (DAT_0315ced0 <= fVar5) {
      fVar5 = DAT_0315ced0;
    }
    fVar6 = DAT_0315ce10;
    if (DAT_0315ce10 <= fVar5) {
      fVar6 = fVar5;
    }
    fVar5 = (float)FUN_00d08524(uVar3,1,1);
    fVar7 = (float)FUN_00d08524(uVar3,0,1);
    fVar4 = fVar4 + ((fVar5 - fVar7) / 11.0) * (fVar6 + -1.0);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
  }
  *param_2 = fVar4;
  *param_3 = 0xbf800000;
  return;
}




void FUN_00d33f0c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00ceacf4();
  if (iVar2 == 0x1c) {
    FUN_00d66d28(param_1);
    iVar2 = FUN_00d5bc54();
    thunk_FUN_00d9ff34(local_40,"Reza");
    if (local_40[0] == iVar2) goto LAB_00d3403c;
  }
  FUN_00d66d04(param_1,8,1);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_CenterMass");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_ReflexBlock_Loop");
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)FUN_00d2dfe4(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,4,FUN_00d33de8);
  lVar3 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_CenterMass");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_ReflexBlock_End");
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
LAB_00d3403c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

