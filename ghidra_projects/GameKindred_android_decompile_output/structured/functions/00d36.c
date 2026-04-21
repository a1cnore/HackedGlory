// functions/00d36 — 27 functions
#include "libGameKindred.h"




void FUN_00d3601c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_38 = FUN_00d35fcc;
  local_30 = 2;
  (**(code **)(*plVar3 + 0x30))(plVar3,9,1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d36094(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b04(0x3e4ccccd);
  FUN_00d67794(param_1,0);
  uVar2 = FUN_00d6eb50();
  uVar3 = FUN_00d6eb5c(uVar2,PTR_s__Item_DragonsEye__02beb070);
  uVar2 = FUN_00d08524(uVar3,1,1);
  fVar5 = (float)FUN_00d08524(uVar3,2,1);
  FUN_00d43324(0x3f800000,uVar2,param_1,0,0,(int)fVar5);
  lVar4 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar4 + 0x30);
  FUN_00d3e534();
  uVar2 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d08524(uVar3,0,1);
  FUN_00d40e24(uVar2,5,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d361a0(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d361c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Item_DragonsEye_CrystalBonu_02beb890);
  return;
}




void FUN_00d361cc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *local_58;
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  uVar2 = FUN_00d4bce8(uVar2,1);
  lVar3 = FUN_00d4bc48(uVar2,8);
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar4 = FUN_00d396a4(lVar3 + 0x10);
  lVar3 = lVar3 + 0xa0;
  *(undefined4 *)(lVar4 + 8) = 0xcee0d798;
  plVar5 = (long *)FUN_00d2b6d8(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5,3);
  local_48 = FUN_00d3633c;
  local_40 = 2;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,&local_48);
  local_58 = FUN_00d36368;
  local_50 = 2;
  (**(code **)(*plVar5 + 0x50))(plVar5,&local_58);
  plVar5 = (long *)FUN_00d2b6d8(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"Clockwork");
  local_48 = FUN_00d36380;
  local_40 = 2;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
  (**(code **)(*plVar5 + 0x58))();
  plVar5 = (long *)FUN_00d2887c(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Item_Clockwork_ShowPfx_02beb8a8);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3dcccccd);
  local_40 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00d3633c(void)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d085c4(PTR_s__Item_Clockwork__02beb050,1,1);
  return -fVar1;
}




void FUN_00d36368(void)

{
  FUN_00d085c4(PTR_s__Item_Clockwork__02beb050,2,1);
  return;
}




void FUN_00d36380(void)

{
  FUN_00d085c4(PTR_s__Item_Clockwork__02beb050,0,1);
  return;
}




void FUN_00d36398(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Clockwork_Burst");
                    /* WARNING: Could not recover jumptable at 0x00d363e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




float FUN_00d363e8(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d66d28(*param_1);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
          (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
  fVar4 = *(float *)((long)param_1 + 0x454);
  if (DAT_0315ce30 <= fVar2) {
    fVar2 = DAT_0315ce30;
  }
  fVar3 = DAT_0315cd70;
  if (DAT_0315cd70 <= fVar2) {
    fVar3 = fVar2;
  }
  fVar2 = (float)FUN_00d67b3c(*param_1);
  return -((fVar4 * fVar3) / fVar2);
}




void FUN_00d36478(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  long local_38;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,auStack_30,&local_38);
  *(undefined4 *)(local_38 + 8) = 2;
  *(undefined4 *)(local_38 + 0x5c) = 0;
  uVar2 = 0;
  if ((*(ushort *)(local_38 + 0xc) & 4) != 0) {
    uVar2 = 0x3f800000;
  }
  *(undefined4 *)(local_38 + 0x54) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d364ec(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined **ppuVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00d426b0();
  uVar6 = FUN_00d44be0(uVar5,PTR_s_Buff_Item_SuperScout2000_Control_02beb8b8);
  if ((uVar6 & 1) == 0) {
    uVar5 = FUN_00d426b0(param_1);
    uVar6 = FUN_00d44be0(uVar5,PTR_s_Buff_Item_ScoutTuff_Control_02beb8c0);
    if ((uVar6 & 1) == 0) {
      FUN_00d085c4(PTR_s__Item_VisionTotem__02beb188,0,1);
      FUN_00d67d04(param_1);
      fVar10 = 0.0;
      goto LAB_00d365cc;
    }
    ppuVar9 = &PTR_s__Item_ScoutTuff__02beb198;
  }
  else {
    ppuVar9 = &PTR_s__Item_SuperScout2000__02beb1a0;
  }
  fVar10 = (float)FUN_00d085c4(*ppuVar9,0,1);
  fVar10 = fVar10 + 0.0;
  fVar11 = (float)FUN_00d085c4(PTR_s__Item_VisionTotem__02beb188,0,1);
  fVar12 = (float)FUN_00d085c4(*ppuVar9,1,1);
  FUN_00d67d04(fVar11 + fVar12,param_1);
LAB_00d365cc:
  FUN_00d6a140(fVar10,param_1);
  lVar7 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onBeforeApplyDamageName_02bed5f8;
  uVar4 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar7 + 0x38 + (ulong)*(uint *)(lVar7 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar7 + 0xf8);
  *(code **)(lVar7 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d36478;
  *(uint *)(lVar7 + 0xf8) = uVar1 + 1;
  lVar7 = FUN_00d63f30(param_1);
  plVar8 = (long *)FUN_00d39aa4(lVar7 + 0x10);
  (**(code **)(*plVar8 + 0x30))(plVar8,"u_visionTotem_status");
  uVar5 = FUN_00d64d7c(param_1);
  lVar7 = FUN_00d4891c(0x3f800000,uVar5,0);
  plVar8 = (long *)FUN_00d2a464(lVar7 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x48))();
  local_58 = FUN_00d363e8;
  local_50 = 4;
  (**(code **)(*plVar8 + 0x10))(plVar8,0,&local_58);
  uVar5 = FUN_00d6483c(param_1);
  lVar7 = FUN_00d48f64(uVar5,FUN_00d39af4);
  plVar8 = (long *)FUN_00d2887c(lVar7 + 0x10);
  (**(code **)(*plVar8 + 0x30))(plVar8,PTR_s_Buff_Stealth_02bebaf0);
  lVar7 = FUN_00d65010(param_1);
  plVar8 = (long *)FUN_00d2a110(lVar7 + 0x10);
  local_50 = 4;
  local_58 = FUN_00d44db8;
  (**(code **)(*plVar8 + 0x30))(plVar8,0,1,&local_58);
  plVar8 = (long *)FUN_00d2945c(lVar7 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x68))(plVar8,"OverHead");
  plVar8 = (long *)(**(code **)(*plVar8 + 0x48))(plVar8,"Effect_Totem_TrueVision");
  (**(code **)(*plVar8 + 0xb0))(plVar8,1);
  lVar7 = FUN_00d64980(param_1);
  FUN_00d394e4(lVar7 + 0x10);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d36794(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_48 = FUN_00d3683c;
  local_40 = 2;
  FUN_00d97d24(uVar3,PTR_s_Ability__Item__VisionTotem_02beafb8,&local_48,0);
  uVar3 = FUN_00d39b2c(lVar2 + 0x10);
  local_48 = FUN_00d3688c;
  local_40 = 2;
  FUN_00d97fd0(uVar3,PTR_s_Ability__Item__VisionTotem_02beafb8,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00d3683c(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00d085c4(PTR_s__Item_SuperScout2000__02beb1a0,3,1);
  fVar2 = (float)FUN_00d085c4(PTR_s__Item_ScoutPak__02beb190,1,1);
  return fVar2 - fVar1;
}




int FUN_00d3688c(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00d085c4(PTR_s__Item_SuperScout2000__02beb1a0,2,1);
  fVar2 = (float)FUN_00d085c4(PTR_s__Item_ScoutPak__02beb190,0,1);
  return (int)(fVar1 - fVar2);
}




void FUN_00d368e0(void)

{
  return;
}




void FUN_00d368e4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_48 = FUN_00d3698c;
  local_40 = 2;
  FUN_00d97d24(uVar3,PTR_s_Ability__Item__VisionTotem_02beafb8,&local_48,0);
  uVar3 = FUN_00d39b2c(lVar2 + 0x10);
  local_48 = FUN_00d369b8;
  local_40 = 2;
  FUN_00d97fd0(uVar3,PTR_s_Ability__Item__VisionTotem_02beafb8,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00d3698c(void)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d085c4(PTR_s__Item_ScoutPak__02beb190,1,1);
  return -fVar1;
}




int FUN_00d369b8(void)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d085c4(PTR_s__Item_ScoutPak__02beb190,0,1);
  return (int)fVar1;
}




void FUN_00d369e4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d29f44(lVar2 + 0x10);
  local_38 = FUN_00d36a50;
  local_30 = 2;
  FUN_00d47690(uVar3,0,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d36a50(void)

{
  FUN_00d085c4(PTR_s__Item_TeleportBoots__02beb150,0,1);
  return;
}




void FUN_00d36a68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d67b78();
  FUN_00d4db40(param_2,uVar1);
  FUN_00d4daf4(param_2,1,0,0,0);
  FUN_00d4ddc4(param_2);
  return;
}




void FUN_00d36ab0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d66d04(param_1,8,1);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2df94(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,"build://Sounds/Environment.assetbundle/sfx_teleport.mp3");
  (**(code **)(*plVar3 + 0x28))(0x3f666666);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Withdraw_Ping_02beb460);
  local_58[0] = FUN_00d67b3c(param_1);
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_58);
  lVar2 = FUN_00d64314(param_1);
  uVar4 = FUN_00d39b7c(lVar2 + 0x10);
  uVar4 = FUN_00d9cef8(uVar4,FUN_00d36a68);
  FUN_00d9cb40(uVar4,PTR_s_Buff_Item_TeleportBoots_EndPoint_02beb8e0);
  plVar3 = (long *)FUN_00d2cfcc(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_TeleportBoots_EndPoint_02beb8e0);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2a160(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Withdraw_Ping_02beb460);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d36c00(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d66d04(param_1,8,1);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Teleport_Channel");
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2df94(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,"build://Sounds/Environment.assetbundle/sfx_teleport.mp3");
  (**(code **)(*plVar3 + 0x28))(0x3f666666);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Withdraw_Ping_02beb460);
  local_48[0] = FUN_00d67b3c(param_1);
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  uVar4 = FUN_00d6483c(param_1);
  lVar2 = FUN_00d48f64(uVar4,FUN_00d39bcc);
  FUN_00d2ab44(lVar2 + 0x10);
  lVar2 = FUN_00d6624c(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,"build://Sounds/Environment.assetbundle/sfx_teleport_land.mp3")
  ;
  (**(code **)(*plVar3 + 0x28))(0x3f4ccccd);
  lVar2 = FUN_00d64980(param_1);
  FUN_00d2ab44(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d36d84(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *param_3 = 0x44160000;
  uVar1 = FUN_00d085c4(PTR_s__Item_TeleportBoots__02beb150,2,1);
  *param_2 = uVar1;
  return;
}




void FUN_00d36dc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42f00000;
  return;
}




void FUN_00d36dd0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_00d36d84);
  lVar1 = FUN_00d66d28(param_1);
  if ((*(byte *)(lVar1 + 0x2f5) >> 4 & 1) == 0) {
    FUN_00d42ce8(param_1,0x1f,"Effect_Teleport_TargetIndicator","CenterBody");
    return;
  }
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Teleport_StructureIndicator");
                    /* WARNING: Could not recover jumptable at 0x00d36e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_00d36e88(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_58 = FUN_00d3714c;
  local_50 = 2;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x12,2,&local_58);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3f000000,uVar4,1);
  lVar2 = FUN_00d29e8c(lVar2 + 0x10);
  lVar5 = FUN_00d396a4(lVar2 + 0x10);
  *(undefined4 *)(lVar5 + 8) = 0x891ec0a0;
  lVar2 = FUN_00d29e8c(lVar2 + 0xa0);
  FUN_00d39bdc(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b778(lVar2 + 0x88);
  local_58 = FUN_00d37164;
  local_50 = 2;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,&local_58);
  (**(code **)(*plVar3 + 0x48))(plVar3,0x1000);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x88);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"DAMAGE_BURN",PTR_s__Item_Pulseweave__02beb0f0);
  uVar4 = FUN_00d64464(param_1);
  uVar4 = FUN_00d4bbf8(uVar4,3);
  uVar4 = FUN_00d4bce8(uVar4,1);
  FUN_00d4bc58(uVar4,0x10);
  lVar2 = FUN_00d4bc24();
  lVar2 = FUN_00d29e8c(lVar2 + 0x10);
  lVar5 = FUN_00d396a4(lVar2 + 0x10);
  *(undefined4 *)(lVar5 + 8) = 0x891ec0a0;
  plVar3 = (long *)FUN_00d2b6d8(lVar2 + 0xa0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Pulseweave");
  local_58 = FUN_00d3717c;
  local_50 = 2;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0xa0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_Pulseweave_Active_02beb8f8);
  local_58 = FUN_00d37194;
  local_50 = 2;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  uVar4 = FUN_00d646fc(param_1);
  FUN_00d4ad80(uVar4,"Pulseweave");
  lVar2 = FUN_00d4adc4();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3ecccccd,0x3e4ccccd,0x3e4ccccd);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3f99999a);
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,&local_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Pulseweave_Available");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

