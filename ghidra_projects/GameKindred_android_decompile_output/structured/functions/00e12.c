// functions/00e12 — 25 functions
#include "libGameKindred.h"




void FUN_00e120d8(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,4,1);
  return;
}




void FUN_00e120e4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d66d04(param_1,8,1);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Weapon");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Baptiste_Empowered");
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d3bc68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x58))(plVar3,1);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d39930(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Baptiste_PerkSoulStacks_02bf02e0)
  ;
  local_48[0] = 0;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e121ec(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2b7c8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,5);
                    /* WARNING: Could not recover jumptable at 0x00e1223c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,"CenterBody");
  return;
}




void FUN_00e12240(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e122a4;
  local_30 = 3;
  FUN_00d42b30(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e122a4(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,6,0x19,0);
  return;
}




void FUN_00e122b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_1);
  FUN_00d55794(uVar1,param_2,0);
  return;
}




void FUN_00e122e4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2cc5c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Baptiste_Ability_B_Tether");
  lVar4 = FUN_00d09310();
  FUN_00d09e6c(*(undefined4 *)(lVar4 + 0x3c4));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_58 = FUN_00e12604;
  local_50 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58,1,2);
  lVar2 = FUN_00d29e8c(lVar2);
  lVar4 = FUN_00e12bf0(lVar2 + 0x10);
  *(undefined4 *)(lVar4 + 8) = 1;
  plVar3 = (long *)FUN_00d2b7c8(lVar2 + 0x88);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,5);
  (**(code **)(*plVar3 + 0x18))(plVar3,"CenterBody");
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa0))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Baptiste_B_RadiusIndicator");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  (**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Baptiste_B_Beam");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,FUN_00e122b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3dcccccd,0x3f4ccccd,0x3f0ccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  uVar5 = FUN_00d641d0(param_1);
  uVar5 = FUN_00d4a488(uVar5,FUN_00d4a7a0);
  lVar2 = FUN_00d4a490(uVar5,FUN_00e12c50);
  lVar2 = lVar2 + 0x10;
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_58 = FUN_00e1267c;
  local_50 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58,1,2);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Baptiste_B_Tether_CC_02bf0308);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3f800000);
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_58 = FUN_00e126f4;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  FUN_00d2a320(lVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_00e12604(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  
  uVar2 = FUN_00d426b0(*param_1);
  auVar4 = FUN_00d59f54(uVar2,1,3,0x19,0);
  uVar6 = auVar4._8_8_;
  uVar5 = auVar4._0_8_;
  iVar1 = FUN_00d6a078(*param_1);
  if (iVar1 == 1) {
    fVar3 = (float)thunk_FUN_00d086f0(uVar2,6,1);
    uVar5 = (ulong)(uint)(auVar4._0_4_ * (fVar3 + 1.0));
    uVar6 = 0;
  }
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar5;
  return auVar4;
}




undefined1  [16] FUN_00e1267c(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  
  uVar2 = FUN_00d426b0(*param_1);
  auVar4 = FUN_00d59f54(uVar2,1,6,0x19,0);
  uVar6 = auVar4._8_8_;
  uVar5 = auVar4._0_8_;
  iVar1 = FUN_00d6a078(*param_1);
  if (iVar1 == 1) {
    fVar3 = (float)thunk_FUN_00d086f0(uVar2,6,1);
    uVar5 = (ulong)(uint)(auVar4._0_4_ * (fVar3 + 1.0));
    uVar6 = 0;
  }
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar5;
  return auVar4;
}




void FUN_00e126f4(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,7,0x19,0);
  return;
}




void FUN_00e12708(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Baptiste_Ability_B_TetherSnap");
  lVar1 = FUN_00d09310();
  FUN_00d09e6c(*(undefined4 *)(lVar1 + 0x3c4));
                    /* WARNING: Could not recover jumptable at 0x00e12758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




undefined1  [16] FUN_00e1275c(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  
  uVar2 = FUN_00d426b0(*param_1);
  auVar4 = FUN_00d59f54(uVar2,2,3,0x19,0);
  uVar6 = auVar4._8_8_;
  uVar5 = auVar4._0_8_;
  iVar1 = FUN_00d6a078(*param_1);
  if (iVar1 == 1) {
    fVar3 = (float)thunk_FUN_00d086f0(uVar2,6,1);
    uVar5 = (ulong)(uint)(auVar4._0_4_ * (fVar3 + 1.0));
    uVar6 = 0;
  }
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar5;
  return auVar4;
}




void FUN_00e127d4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Baptiste_Ability_C_Impact_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Baptiste_Ability_C_Impact_2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Baptiste_Ability_C_Impact_3");
  lVar2 = FUN_00d09310();
  FUN_00d09e6c(*(undefined4 *)(lVar2 + 0x3c8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3ecccccd,uVar4,1);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))();
  local_48 = FUN_00e1275c;
  local_40 = 4;
  (**(code **)(*plVar3 + 0x10))(plVar3,&local_48,1,0x4a);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e12908(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d63f30();
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_FearDirection_02beb450);
  local_48[0] = FUN_00d67b3c(param_1);
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  FUN_00d6a1f8(param_1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4);
  FUN_00d6a25c(param_1);
  (**(code **)(*plVar4 + 0x40))(plVar4);
  uVar5 = FUN_00d64d7c(param_1);
  lVar3 = FUN_00d4891c(0x3e4ccccd,uVar5,1);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Baptiste_Ultimate_DOT_02bf0310);
  local_48[0] = 0x3ecccccd;
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  uVar2 = FUN_00d6a078(param_1);
  (**(code **)(*plVar4 + 0x48))(plVar4,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e12a50(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined1 local_68 [8];
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d5cf60(param_2);
  uVar2 = FUN_00d9e390();
  FUN_00d55794(param_2,local_68,0);
  fVar3 = (float)FUN_00d6a1f8(*param_1);
  fVar4 = (float)FUN_00d6a25c(*param_1);
  fVar5 = (float)FUN_00d59f98(uVar2,2);
  *param_4 = CONCAT44(local_68._4_4_ + fVar5 * 0.0,local_68._0_4_ + fVar3 * fVar5);
  *(float *)(param_4 + 1) = fVar4 * fVar5 + local_60;
  uVar6 = FUN_00d59f54(uVar2,2,6,0x19,0);
  *param_3 = uVar6;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e12b44(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  
  FUN_00d66d28();
  FUN_00d5cf60();
  uVar1 = FUN_00d9e390();
  fVar4 = (float)FUN_00d59f98(uVar1,2);
  fVar5 = (float)FUN_00d59f54(uVar1,2,6,0x19,0);
  FUN_00d67d04(fVar4 / fVar5 + 0.1,param_1);
  lVar2 = FUN_00d63f30(param_1);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d46878(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,FUN_00e12a50);
  lVar2 = FUN_00d64980(param_1);
  FUN_00d2ab44(lVar2 + 0x10);
  return;
}




undefined8 * FUN_00e12bf0(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *(undefined4 *)(puVar1 + 2) = 0;
      puVar1[1] = 0xffffffff00000000;
      puVar1[-1] = puVar1;
      *puVar1 = &PTR_FUN_0281f2f8;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




void FUN_00e12c50(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d426b0();
  uVar2 = FUN_00d59f54(uVar1,1,4,0x19,0);
  *param_2 = uVar2;
  return;
}




void FUN_00e12c88(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65a7c();
  plVar2 = (long *)FUN_00d2779c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Spawn");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdle");
  lVar1 = FUN_00d65fac(param_1);
  plVar2 = (long *)FUN_00d2779c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Spawn");
                    /* WARNING: Could not recover jumptable at 0x00e12d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdle");
  return;
}




void FUN_00e12d14(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  FUN_00d4b23c(uVar2,PTR_s_Ability__Baron__C_02bee648);
  lVar3 = FUN_00d4b280();
  plVar4 = (long *)FUN_00d2a110(lVar3 + 0x10);
  local_38 = FUN_00e12da0;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,0x10,1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e12da0(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,9,0x19,0);
  return;
}




void FUN_00e12db4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00d69fc0(param_1,1);
    lVar2 = FUN_00d65e5c(param_1);
    uVar3 = FUN_00d314f8(lVar2 + 0x10);
    lVar2 = FUN_00d98a14(uVar3,"__VAR1_INT__");
    *(undefined4 *)(lVar2 + 0x18) = 2;
    *(code **)(lVar2 + 0x30) = FUN_00d98d10;
  }
  return;
}




void FUN_00e12e14(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  FUN_00d66d28();
  FUN_00d5cf60();
  uVar1 = FUN_00d9e390();
  FUN_00d59f54(uVar1,1,5,0x19,0);
  FUN_00d67d04(param_1);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Baron_A_Warning_A");
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_00d64980(param_1);
  FUN_00d394e4(lVar2 + 0x10);
  return;
}




void FUN_00e12ea4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  
  FUN_00d66d28();
  FUN_00d5cf60();
  uVar1 = FUN_00d9e390();
  fVar4 = (float)FUN_00d59f54(uVar1,1,5,0x19,0);
  fVar5 = (float)FUN_00d5a3d0(uVar1,DAT_031abf6c,3,9);
  FUN_00d67d04(fVar4 * (1.0 - fVar5),param_1);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Baron_A_Warning_Talent");
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_00d64980(param_1);
  FUN_00d394e4(lVar2 + 0x10);
  return;
}




void FUN_00e12f6c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00e13af8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3dcccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3f19999a);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  lVar2 = FUN_00d65e5c(param_1);
  plVar3 = (long *)FUN_00e13af8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3dcccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3f666666);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  local_48 = FUN_00d44db8;
  local_40 = 4;
  FUN_00d42b30(0,0x3f800000,param_1,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

