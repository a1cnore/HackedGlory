// functions/00e48 — 21 functions
#include "libGameKindred.h"




void FUN_00e48114(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  FUN_00d6a078(*param_1);
  uVar1 = FUN_00d9e390();
  *param_2 = uVar1;
  *param_4 = "Bone_CenterMass";
  return;
}




void FUN_00e48150(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d39a54(lVar2);
  FUN_00d3e604(uVar3,FUN_00e47e38);
  FUN_00d39534(lVar2);
  plVar4 = (long *)FUN_00d2b818(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",0);
  plVar4 = (long *)FUN_00d2cf7c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_RevealToBestowersTeamTrueSi_02bebb08);
  local_38[0] = 0x3f800000;
  local_30 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e48220(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Varya_A_Beam");
  local_48[0] = 0x3ecccccd;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,local_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,1);
  (**(code **)(*plVar3 + 0xa0))(plVar3,FUN_00e48114);
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"BOUNCE_DAMAGE",0);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_RevealToBestowersTeamTrueSi_02bebb08);
  local_48[0] = 0x3f800000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e48358(void)

{
  long lVar1;
  
  lVar1 = FUN_00d65e5c();
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e48370(undefined8 *param_1)

{
  FUN_00d69fc0(*param_1,1);
  return;
}




void FUN_00e4837c(undefined8 *param_1)

{
  FUN_00d6a19c(0x3f800000,*param_1);
  return;
}




void FUN_00e48388(undefined8 *param_1)

{
  FUN_00d69fc0(*param_1,0);
  return;
}




void FUN_00e48394(undefined8 *param_1)

{
  FUN_00d6a01c(*param_1,1);
  return;
}




void FUN_00e483a0(undefined8 *param_1)

{
  FUN_00d6a01c(*param_1,0);
  return;
}




void FUN_00e483ac(undefined8 param_1,float *param_2)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_00d67b84();
  lVar1 = FUN_00d9e390();
  fVar3 = (float)FUN_00d59f54(lVar1,4,5,0x19,0);
  *param_2 = fVar3 + -0.1;
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Varya_Talent_TalentB_02bf2118);
  if ((uVar2 & 1) != 0) {
    fVar5 = *param_2;
    fVar4 = (float)FUN_00d5a3d0(lVar1,DAT_0320ec1c,0,9);
    fVar3 = fVar5 - fVar4;
    if (fVar5 - fVar4 <= 0.1) {
      fVar3 = 0.1;
    }
    *param_2 = fVar3;
  }
  return;
}




bool FUN_00e4844c(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d6a078(*param_1);
  if (iVar1 == -1) {
    FUN_00d69fc0(*param_1,2);
  }
  return iVar1 == -1;
}




void FUN_00e4848c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  code *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00d69fc0(param_1,0xffffffff);
  lVar2 = FUN_00d65010(param_1);
  FUN_00d29be4(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2df94(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Varya_Ability_B_Hum_Loop_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Varya_Ability_B_Hum_Loop_2");
  lVar2 = FUN_00d09310();
  FUN_00d0a010(*(undefined4 *)(lVar2 + 0x464));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_Combo_A_SwapInIcon_02bf12f8);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Varya_Ability_B_Activation_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Varya_Ability_B_Activation_2");
  lVar2 = FUN_00d09310();
  FUN_00d0a010(*(undefined4 *)(lVar2 + 0x464));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  uVar4 = FUN_00d6483c(param_1);
  lVar2 = FUN_00d48f64(uVar4,FUN_00e4a4f0);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_Combo_A_Pressable_02bf1300);
  uVar4 = FUN_00d6483c(param_1);
  lVar2 = FUN_00d48f64(uVar4,FUN_00e483ac);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Varya_Ability_B_Fully_Charged_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Varya_Ability_B_Fully_Charged_2");
  lVar5 = FUN_00d09310();
  FUN_00d0a010(*(undefined4 *)(lVar5 + 0x464));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_00d2d01c(lVar2 + 0x10);
  FUN_00d9b5c0(uVar4,FUN_00e4844c);
  FUN_00d9b5b0();
  plVar3 = (long *)FUN_00d2887c();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_DoubleDash_02bf1308);
  local_78 = FUN_00ded4b4;
  local_70 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_78);
  uVar4 = FUN_00d634b4(param_1);
  lVar2 = FUN_00d4aa10(uVar4,PTR_s_Ability__Varya__A_Queue_02bef7d0);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_Combo_A_SwapInIcon_02bf12f8);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_Combo_A_Pressable_02bf1300);
  uVar4 = FUN_00d39a54(lVar2);
  FUN_00d3e604(uVar4,FUN_00e48394);
  uVar4 = FUN_00d634b4(param_1);
  lVar2 = FUN_00d4aa10(uVar4,PTR_s_Ability__Varya__A_02bef7b0);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_MoveAvailable_02bf1310);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_MoveDefaultAvailabl_02bf1318);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_Control_02bf12f0);
  local_78 = FUN_00decf50;
  local_70 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_78);
  uVar4 = FUN_00d39a54(lVar2);
  FUN_00d3e604(uVar4,FUN_00e483a0);
  uVar4 = FUN_00d634b4(param_1);
  lVar2 = FUN_00d4aa10(uVar4,PTR_s_Ability__Varya__B_Move_Charged_02bef7e8);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_MoveAvailable_02bf1310);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_ChargingFx_02bf1320);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_DoubleDash_02bf1308);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Varya_A_QuickSpearAvailable_02bf12e8);
  local_78 = FUN_00e48b60;
  local_70 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_78);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_Control_02bf12f0);
  local_78 = FUN_00decf50;
  local_70 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_78);
  uVar4 = FUN_00d39a54(lVar2);
  FUN_00d3e604(uVar4,FUN_00e48370);
  uVar4 = FUN_00d39a54(lVar2);
  FUN_00d3e604(uVar4,FUN_00e4837c);
  uVar4 = FUN_00d634b4(param_1);
  lVar2 = FUN_00d4aa10(uVar4,PTR_s_Ability__Varya__B_Move_Default_02bef7f0);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_ChargingFx_02bf1320);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_MoveDefaultAvailabl_02bf1318);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_MoveAvailable_02bf1310);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Varya_A_QuickSpearAvailable_02bf12e8);
  local_78 = FUN_00e48b60;
  local_70 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_78);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_Control_02bf12f0);
  local_78 = FUN_00decf50;
  local_70 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_78);
  uVar4 = FUN_00d39a54(lVar2);
  FUN_00d3e604(uVar4,FUN_00e48388);
  uVar4 = FUN_00d39a54(lVar2);
  FUN_00d3e604(uVar4,FUN_00e4837c);
  lVar2 = FUN_00d63ddc(param_1);
  uVar4 = FUN_00d2d01c(lVar2 + 0x10);
  FUN_00d9b5c0(uVar4,FUN_00e475b0);
  FUN_00d9b5b0();
  FUN_00d2a320();
  uVar4 = FUN_00d63734(param_1);
  lVar2 = FUN_00d4b5ac(uVar4,PTR_s_Ability__Varya__B_Move_Charged_02bef7e8);
  FUN_00d2a320(lVar2 + 0x10);
  uVar4 = FUN_00d63734(param_1);
  lVar2 = FUN_00d4b5ac(uVar4,PTR_s_Ability__Varya__B_Move_Default_02bef7f0);
  FUN_00d2a320(lVar2 + 0x10);
  lVar2 = FUN_00d64980(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00e213ac(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Varya__B_02bef7d8);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_Combo_A_SwapInIcon_02bf12f8);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_Combo_A_Pressable_02bf1300);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_ChargingFx_02bf1320);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_DoubleDash_02bf1308);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_MoveAvailable_02bf1310);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_MoveDefaultAvailabl_02bf1318);
  plVar3 = (long *)FUN_00e17ea8(lVar2);
  puVar6 = (undefined8 *)(**(code **)(*plVar3 + 0x30))();
  (**(code **)*puVar6)(puVar6,PTR_s_Ability__Varya__A_Queue_02bef7d0);
  plVar3 = (long *)FUN_00d44df8(lVar2);
  (**(code **)(*plVar3 + 0x40))(plVar3,PTR_s_Ability__Varya__B_02bef7d8);
  plVar3 = (long *)FUN_00d44df8(lVar2);
  (**(code **)(*plVar3 + 0x40))(plVar3,PTR_s_Ability__Varya__B_Move_Default_02bef7f0);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e48b60(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,10,0x19,0);
  return;
}




void FUN_00e48b74(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d45f10(lVar1 + 0x10);
  FUN_00d9886c(uVar2,PTR_s_Ability__Varya__A_02bef7b0,PTR_s_Ability__Varya__A_Queue_02bef7d0);
  return;
}




void FUN_00e48ba8(void)

{
  return;
}




void FUN_00e48bac(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d44df8(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e48be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Varya__A_02bef7b0,0,0);
  return;
}




void FUN_00e48be4(undefined8 *param_1)

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
  lVar4 = FUN_00d66d28(*param_1);
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




void FUN_00e48c94(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d63f30();
  uVar2 = FUN_00d2d01c(lVar1 + 0x10);
  FUN_00d9b5c0(uVar2,FUN_00e48be4);
  FUN_00d9b744();
  FUN_00d9b5b8();
  plVar3 = (long *)FUN_00d44df8();
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Varya__B_Move_02bef7e0,3,1);
  uVar2 = FUN_00d64d7c(param_1);
  lVar1 = FUN_00d4891c(0x3dcccccd,uVar2,1);
  uVar2 = FUN_00d2d01c(lVar1 + 0x10);
  FUN_00d9b5c0(uVar2,FUN_00e48be4);
  FUN_00d9b744();
  FUN_00d9b5b0();
  plVar3 = (long *)FUN_00d44df8();
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Varya__A_02bef7b0,0,0);
  lVar1 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d44df8(lVar1 + 0x10);
  (**(code **)(*plVar3 + 0x40))(plVar3,PTR_s_Ability__Varya__B_Move_02bef7e0);
  lVar1 = FUN_00d6624c(param_1);
  plVar3 = (long *)FUN_00d2a160(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e48d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_Control_02bf12f0);
  return;
}




void FUN_00e48d94(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d63f30();
  uVar2 = FUN_00d2d01c(lVar1 + 0x10);
  FUN_00d9b5c0(uVar2,FUN_00e48be4);
  FUN_00d9b744();
  FUN_00d9b5b8();
  plVar3 = (long *)FUN_00d44df8();
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Varya__B_Move_Default_02bef7f0,3,1);
  uVar2 = FUN_00d64d7c(param_1);
  lVar1 = FUN_00d4891c(0x3dcccccd,uVar2,1);
  uVar2 = FUN_00d2d01c(lVar1 + 0x10);
  FUN_00d9b5c0(uVar2,FUN_00e48be4);
  FUN_00d9b744();
  FUN_00d9b5b0();
  plVar3 = (long *)FUN_00d44df8();
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Varya__A_02bef7b0,0,0);
  lVar1 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d44df8(lVar1 + 0x10);
  (**(code **)(*plVar3 + 0x40))(plVar3,PTR_s_Ability__Varya__B_Move_Default_02bef7f0);
  lVar1 = FUN_00d6624c(param_1);
  plVar3 = (long *)FUN_00d2a160(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e48e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_B_Control_02bf12f0);
  return;
}




void FUN_00e48e94(undefined8 param_1,float *param_2)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_00d67b84();
  lVar1 = FUN_00d9e390();
  fVar3 = (float)FUN_00d59f54(lVar1,4,5,0x19,0);
  *param_2 = fVar3;
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Varya_Talent_TalentB_02bf2118);
  if ((uVar2 & 1) != 0) {
    fVar5 = *param_2;
    fVar4 = (float)FUN_00d5a3d0(lVar1,DAT_0320ec1c,0,9);
    fVar3 = fVar5 - fVar4;
    if (fVar5 - fVar4 <= 0.1) {
      fVar3 = 0.1;
    }
    *param_2 = fVar3;
  }
  return;
}




void FUN_00e48f28(undefined8 param_1)

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
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Varya_B_Charging");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,0);
  (**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)FUN_00d3bc68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))();
  (**(code **)(*plVar3 + 0x58))(plVar3,1);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Varya_B_RepeatableChargeFlash");
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  uVar4 = FUN_00d6483c(param_1);
  lVar2 = FUN_00d48f64(uVar4,FUN_00e48e94);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Varya_B_RepeatableChargeFlash");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,0);
  local_58[0] = 0x3dcccccd;
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0x3f800000,0x3f666666);
  (**(code **)(*plVar3 + 0xd8))(0x3f800000);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

