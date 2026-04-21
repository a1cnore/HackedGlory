// functions/00e4d — 28 functions
#include "libGameKindred.h"




void FUN_00e4d008(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d66d04(param_1,0x80,1);
  lVar2 = FUN_00d65a7c(param_1);
  plVar3 = (long *)FUN_00d39930(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  local_48[0] = 0;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d3bc68(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x38))();
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4d0c4(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e4d120;
  local_30 = 3;
  FUN_00d42c70(param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4d120(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,6,0x19,0);
  return;
}




void FUN_00e4d134(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_StaffEnergy");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kinetic_B_A2_Available");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  uVar4 = FUN_00d6639c(param_1);
  FUN_00d4b23c(uVar4,PTR_s_Ability__Kinetic__A_02bef948);
  lVar2 = FUN_00d4b280();
  uVar4 = FUN_00da4ee4(lVar2 + 0x10);
  uVar4 = FUN_00d986e0(uVar4,PTR_s_Ability__Kinetic__A_02bef948);
  local_58 = FUN_00e4d288;
  local_50 = 3;
  FUN_00d98704(uVar4,&local_58);
  lVar2 = FUN_00d64080(param_1);
  uVar4 = FUN_00d2d01c(lVar2 + 0x10);
  FUN_00d9b650(uVar4,PTR_s_Ability__Kinetic__A_02bef948);
  FUN_00d9b5b0(uVar4);
  plVar3 = (long *)FUN_00d2b6d8();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Kinetic__A_02bef948);
  local_58 = (code *)((ulong)local_58 & 0xffffffff00000000);
  local_50 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4d288(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00e4d29c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  FUN_00d67b84(*param_1);
  uVar1 = FUN_00d9e390();
  *param_2 = uVar1;
  *param_3 = "CenterBody";
  return;
}




void FUN_00e4d2d8(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kinetic_C_Target_Laser");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xa0))(plVar2,FUN_00e4d29c);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00e4d354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb8))(plVar2,1);
  return;
}




void FUN_00e4d358(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28(*param_1);
  FUN_00d5cf60();
  uVar2 = FUN_00d9e390();
  FUN_00d55794(uVar2,&local_48,0);
  *(undefined4 *)(param_4 + 1) = local_40;
  *param_4 = local_48;
  *param_3 = 0x4479c000;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4d3e0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float local_48 [4];
  float local_38 [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28(*param_1);
  FUN_00d5cf60();
  uVar3 = FUN_00d9e390();
  FUN_00d55794(uVar3,local_38,0);
  FUN_00d55794(uVar2,local_48,0);
  fVar4 = (float)local_38._4_8_ - (float)local_48._4_8_;
  fVar5 = SUB84(local_38._4_8_,4) - SUB84(local_48._4_8_,4);
  fVar5 = (local_38[0] - local_48[0]) * (local_38[0] - local_48[0]) + fVar4 * fVar4 + fVar5 * fVar5;
  fVar4 = SQRT(fVar5);
  if (NAN(fVar4)) {
    fVar4 = sqrtf(fVar5);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(14.0 <= fVar4);
  }
  return;
}




void FUN_00e4d49c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d45354(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e4d4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,&UNK_01be9f96,1);
  return;
}




void FUN_00e4d4cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d426b0(*param_1);
  FUN_00d59f54(uVar1,2,3,0x19,0);
  return;
}




void FUN_00e4d4f4(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e4d4cc;
  local_30 = 4;
  FUN_00d42b30(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4d558(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64080();
  lVar2 = lVar2 + 0x10;
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Hero049_DashToHero_02bf14e8);
  local_48[0] = 0x3dcccccd;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero049_Proj_Hit");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_48[0] = 0x40400000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0xd0))(plVar3,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4d65c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  lVar1 = lVar1 + 0x10;
  FUN_00e0c91c(lVar1);
  plVar2 = (long *)FUN_00d2cf7c(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Hero049_PetIsAttached_02bf14f8);
  plVar2 = (long *)FUN_00d2cfcc(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Hero049_PetIsDetatched_02bf1500);
  lVar1 = FUN_00d64080(param_1);
  FUN_00d39534(lVar1 + 0x10);
  plVar2 = (long *)FUN_00d2cfcc(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e4d6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Hero049_RingPFXForPetRange_02bf1508);
  return;
}




void FUN_00e4d6ec(void)

{
  return;
}




void FUN_00e4d6f0(void)

{
  return;
}




void FUN_00e4d6f4(undefined8 param_1)

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
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d46878(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,FUN_00e4d358);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero049_B_DashFx");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_48[0] = 0x40400000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0xd0))(plVar3,local_48);
  lVar2 = FUN_00d64980(param_1);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Hero049_AttachToHero_02bf14f0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4d814(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d46828(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e4d840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Hero049_Pet__DashToHero_02bef9a8);
  return;
}




void FUN_00e4d844(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_50 [24];
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero049_PetAttackCircle");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd8))(0x3e4ccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0,0,0);
  local_38[0] = 0x41600000;
  local_30 = 1;
  (**(code **)(*plVar3 + 0xd0))(plVar3,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4d93c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [24];
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_60,lVar2 + 0x30);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Pet_Model_Placeholder");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_48[0] = 0x40400000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0xd0))(plVar3,local_48);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3dcccccd,uVar4,0);
  FUN_00d2d01c(lVar2 + 0x10);
  uVar4 = FUN_00d9b294();
  uVar4 = FUN_00d9b5c0(uVar4,FUN_00e4d3e0);
  FUN_00d9b5b0();
  plVar3 = (long *)FUN_00d2887c();
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Hero049_PetDistanceCheck_02bf14e0);
  FUN_00d9b5b0(uVar4);
  FUN_00d39534();
  FUN_00d9b5b0(uVar4);
  plVar3 = (long *)FUN_00d2cfcc();
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Hero049_RingPFXForPetRange_02bf1508);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4da8c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,6);
  lVar3 = FUN_00d4bcc0();
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Hero050_GamblersRush_02bf1528);
  local_38[0] = 0x40400000;
  local_30 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4db18(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d65548();
  lVar3 = FUN_00d4891c(0x3dcccccd,uVar2,0);
  uVar2 = FUN_00d29f44(lVar3 + 0x10);
  local_38[0] = 0x3fc00000;
  local_30 = 1;
  FUN_00d47690(uVar2,1,local_38);
  FUN_00d476e0(0,0x3f800000);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4dbb0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero050_StackedDeck");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3dcccccd,0x3e4ccccd,0x3e99999a);
  local_38[0] = 0x3e99999a;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_38);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4dc7c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  float __x;
  float fVar3;
  float local_50 [4];
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_40);
  lVar2 = FUN_00d66d28(local_40);
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_0314f724))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  __x = (float)FUN_00d6a1f8(local_40);
  fVar3 = cosf(__x);
  local_50[2] = sinf(__x);
  local_50[1] = 0.0;
  local_50[0] = fVar3;
  FUN_00d60bf8(lVar2,local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4dd30(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_98;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    FUN_00d69224(param_1,&local_98);
    lVar6 = FUN_00d66d28(local_98);
    puVar3 = PTR_s_Buff_Hero050_B_Segment_02bf1540;
    uVar1 = *(undefined4 *)(lVar6 + 0x260);
    uVar4 = FUN_00ceb350();
    FUN_00cfe864(0x3f19999a,0,0,auStack_90,uVar1,uVar1,puVar3,uVar4,1,0,0);
    FUN_00ce20fc(auStack_90);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4dde4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_30);
  lVar2 = FUN_00d66d28(local_30);
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_0314f724))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  FUN_00d60bd0();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4de60(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  float local_c8;
  float local_c0 [4];
  undefined1 local_b0 [8];
  float local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_a0);
  uVar5 = FUN_00d66d28(local_a0);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    FUN_00d55794(uVar5,local_b0,0);
    FUN_00d557c4(uVar5,local_c0,&DAT_03218f68);
    local_c8 = local_c0[2] * 100.0 + local_a8;
    local_d0 = CONCAT44(local_b0._4_4_ + 0.0,local_c0[0] * 100.0 + local_b0._0_4_);
    local_c0[1] = 0.0;
    uVar2 = FUN_00d5ba88(uVar5);
    uVar3 = FUN_00d5ba88(uVar5);
    local_d8[0] = 0x16370c0d;
    uVar4 = FUN_00ceb350();
    FUN_00d02ac0(0,auStack_98,uVar2,uVar3,&local_d0,0x9a,local_d8,uVar4);
    FUN_00ce20fc(auStack_98);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4df78(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  FUN_00d67b04(0x3f800000);
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_initial_facing_02bf1538;
  uVar3 = FUN_00e6a474(PTR_s_initial_facing_02bf1538);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  (**(code **)(*(long *)(lVar4 + 0x100) + 8))(lVar4 + 0x100,uVar3);
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onApplyName_02bed4f8;
  uVar3 = FUN_00e6a474(PTR_s_onApplyName_02bed4f8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e4dc7c;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onBuffIntervalName_02bed520;
  uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e4dd30;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onEndName_02bed518;
  uVar3 = FUN_00e6a474(PTR_s_onEndName_02bed518);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e4dde4;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}

