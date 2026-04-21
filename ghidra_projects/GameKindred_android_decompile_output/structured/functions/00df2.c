// functions/00df2 — 27 functions
#include "libGameKindred.h"




void FUN_00df2078(void)

{
  FUN_00df1f60("Attack",0x94,"CenterBody");
  return;
}




void FUN_00df2090(void)

{
  FUN_00df1f60("AltAttack",0x94,"CenterBody");
  return;
}




void FUN_00df20a8(void)

{
  FUN_00df1f60("CritAttack",0x94,"CenterBody");
  return;
}




void FUN_00df20c0(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_700;
  undefined4 uStack_6fc;
  undefined4 local_6f8;
  undefined4 local_6f0 [2];
  undefined1 auStack_6e8 [112];
  undefined8 local_678 [200];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00d5048c(param_4);
    thunk_FUN_00d9ff34(local_6f0,PTR_s_Buff_Hero049_PetLocator_02bf1518);
    FUN_00d4e934(auStack_6e8,local_6f0[0]);
    FUN_00d4e998(auStack_6e8,0);
    FUN_00d4db40(auStack_6e8,uVar4);
    FUN_00d4daf4(auStack_6e8,1,0,0,0);
    FUN_00d4ddc4(auStack_6e8);
    FUN_00d4dca4(auStack_6e8,"Hero049_Pet",0);
    iVar2 = FUN_00d9e840(auStack_6e8,local_678,200,0);
    if (iVar2 != 0) {
      local_700 = FUN_00d51820(param_4);
      uStack_6fc = param_2;
      local_6f8 = param_3;
      FUN_008ff6f4(local_678[0],1,&local_700);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df21c4(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float local_38;
  float fStack_34;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  FUN_00d55794(uVar2,&local_38,0);
  fVar3 = (float)FUN_00d51820(param_4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((local_38 - fVar3) * (local_38 - fVar3) +
                   (fStack_34 - param_2) * (fStack_34 - param_2) +
                   (local_30 - param_3) * (local_30 - param_3) < 7.0);
}




void FUN_00df2254(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cf9f7c(auStack_48);
  lVar3 = FUN_00cf2970(lVar2 + 0x10);
  *(code **)(lVar3 + 8) = FUN_00df21c4;
  uVar4 = FUN_00cf9874(lVar2 + 0xb0);
  FUN_00cf69ac(uVar4,"Hero049_Pet");
  plVar5 = (long *)FUN_00cf9b44(lVar2 + 0xb0);
  (**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Hero049_PetDistanceCheck_02bf14e0);
  lVar2 = lVar2 + 200;
  uVar4 = FUN_00cf9874(lVar2);
  FUN_00cf69ac(uVar4,"Hero049_Pet");
  uVar4 = FUN_00cf9d84(lVar2);
  FUN_00cf49b0(uVar4,PTR_s_Buff_Hero049_AttachToHero_02bf14f0);
  FUN_00cf9eec(lVar2);
  FUN_00cf98bc(lVar2);
  uVar4 = FUN_00cf9d84(lVar2);
  FUN_00cf49b0(uVar4,PTR_s_Buff_Hero049_PetIsAttached_02bf14f8);
  plVar5 = (long *)FUN_00cf9b44(lVar2);
  (**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Hero049_PetIsDetatched_02bf1500);
  FUN_00cf9eec(lVar2);
  uVar4 = FUN_00cf9874(lVar2);
  FUN_00cf69ac(uVar4,"Hero049_Pet");
  plVar5 = (long *)FUN_00cf9b44(lVar2);
  (**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Hero049_RingPFXForPetRange_02bf1508);
  FUN_00cf9eec(lVar2);
  uVar4 = FUN_00cfa294(lVar2);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar4,0);
  uVar4 = FUN_00cf9cf4(lVar2);
  FUN_00cf2e48(uVar4,FUN_00df20c0);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df23fc(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_700;
  undefined4 uStack_6fc;
  undefined4 local_6f8;
  undefined4 local_6f0 [2];
  undefined1 auStack_6e8 [112];
  undefined8 local_678 [200];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00d5048c(param_4);
    thunk_FUN_00d9ff34(local_6f0,PTR_s_Buff_Hero049_PetLocator_02bf1518);
    FUN_00d4e934(auStack_6e8,local_6f0[0]);
    FUN_00d4e998(auStack_6e8,0);
    FUN_00d4db40(auStack_6e8,uVar4);
    FUN_00d4daf4(auStack_6e8,1,0,0,0);
    FUN_00d4ddc4(auStack_6e8);
    FUN_00d4dca4(auStack_6e8,"Hero049_Pet",0);
    iVar2 = FUN_00d9e840(auStack_6e8,local_678,200,0);
    if (iVar2 != 0) {
      local_700 = FUN_00d51820(param_4);
      uStack_6fc = param_2;
      local_6f8 = param_3;
      FUN_008ff6f4(local_678[0],2,&local_700);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df2500(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cf9cf4(auStack_38);
  FUN_00cf2e48(uVar2,FUN_00df23fc);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df256c(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_2,&local_48,0);
  *(undefined4 *)(param_4 + 1) = local_40;
  *param_4 = local_48;
  *param_3 = 0x4479c000;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00df25e8(undefined8 param_1)

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
    iVar2 = FUN_00d535a4(lVar4,2);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}




void FUN_00df2654(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df26a4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_58);
  plVar3 = (long *)FUN_00cfab04(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,"CenterBody");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero049_PetDash");
  uVar4 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar4,"Move",0,1,0,"AttackToIdle");
  plVar3 = (long *)FUN_00cfa12c(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  local_48[0] = 0x42200000;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa0))(plVar3,local_48);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  FUN_00cfb56c(auStack_58);
  uVar4 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar4,0);
  plVar3 = (long *)FUN_00cfab04(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,"CenterBody");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero049_PetDash");
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df2814(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfb05c(auStack_38);
  FUN_00cf99dc(auStack_38);
  uVar2 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar2,0x95,"CenterBody");
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df2894(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  uVar1 = FUN_00d5048c();
  FUN_00d55794(uVar1,in_x3,0);
  return;
}




void FUN_00df28bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 local_58 [8];
  float local_50;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  FUN_00d55794(uVar2,local_48,0);
  FUN_00d557c4(uVar2,local_58,&DAT_03218f68);
  fVar3 = (float)FUN_00d50cc8(param_1);
  *param_4 = CONCAT44(local_58._4_4_ * fVar3 + local_48._4_4_,
                      local_58._0_4_ * fVar3 + local_48._0_4_);
  *(float *)(param_4 + 1) = fVar3 * local_50 + local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df2964(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_b8 [16];
  code *local_a8;
  undefined4 local_a0;
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  lVar2 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_b8);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfab04(auStack_b8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,"Warning");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Hero049_BeamWarning");
  local_98[0] = 0x3f000000;
  local_90 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,local_98);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xc0))(0x3f800000,0,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xd8))(0x3e4ccccd);
  (**(code **)(*plVar4 + 0xe0))(0x40f00000,0x3fc00000);
  uVar3 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_b8);
  plVar4 = (long *)FUN_00cfab04(auStack_b8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,"CenterBody");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Hero049_Beam");
  FUN_00d4d9e8(local_98);
  FUN_00d4dabc(local_98,0x40000);
  FUN_00d4daf4(local_98,0,1,0,0);
  FUN_00d4dcdc(local_98,1);
  local_58 = 0x3f266666;
  uVar3 = FUN_00cfaf3c(auStack_b8);
  uVar3 = FUN_00cf5ac8(0x3f800000,uVar3,FUN_00df2894,FUN_00df28bc);
  FUN_00cf5ae0(uVar3,local_98);
  plVar4 = (long *)FUN_00cf9b44(auStack_b8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Hero049_PetSlow_02bf14d8);
  local_a8 = FUN_00df2c10;
  local_a0 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_a8);
  plVar4 = (long *)FUN_00cfa09c(auStack_b8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  local_a8 = FUN_00df2c24;
  local_a0 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_a8,1,2);
  FUN_00cf9eec(auStack_b8);
  lVar2 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df2c10(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




void FUN_00df2c24(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00df2c38(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_48 [16];
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cf97e4(auStack_48);
  plVar2 = (long *)FUN_00cfa12c(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(0,0,0,0);
  local_38[0] = 0x42480000;
  local_30 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xa0))(plVar2,local_38);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  FUN_00cf9eec(auStack_48);
  plVar2 = (long *)FUN_00cf9afc(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_SelfProjectile_02beb4b8);
  local_38[0] = 0x3f800000;
  local_30 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,local_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,0x96);
  (**(code **)(*plVar2 + 0x50))(plVar2,2);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df2d50(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar2,param_3,param_2);
  if (param_3 == 0x99) {
    FUN_00cf98bc(auStack_58);
    uVar2 = FUN_00cfa204(auStack_58);
    FUN_00cf4b90(uVar2,PTR_s_Buff_Hero050_StackedDeck_02bf1530,1,1);
    FUN_00cf9eec(auStack_58);
  }
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df2e60(void)

{
  FUN_00df2d50("Attack","CenterBody",0x97);
  return;
}




void FUN_00df2e78(void)

{
  FUN_00df2d50("AltAttack","CenterBody",0x98);
  return;
}




void FUN_00df2e90(void)

{
  FUN_00df2d50("Attack","CenterBody",0x99);
  return;
}




void FUN_00df2ea8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cf9ab4(auStack_38);
  FUN_00cf44e8(0x40800000,uVar2,PTR_s_Buff_Hero050_StackedDeck_02bf1530,4,0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfacb4(auStack_38);
  FUN_00cf50b0(0x3dcccccd);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df2f40(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = 0x40266666;
  return;
}




void FUN_00df2f50(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cf9ab4(auStack_38);
  uVar2 = FUN_00cf4540(uVar2,PTR_s_Buff_Hero050_B_02bf1548,FUN_00df2f40,1,0);
  FUN_00cf45a0(uVar2,FUN_00cfbdbc,1);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df2ff0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar3,"Ability01",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_38);
  uVar3 = FUN_00cfcad8(uVar3,0x9b,"CenterBody");
  FUN_00cfcba8(uVar3,1);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

