// functions/00e1f — 33 functions
#include "libGameKindred.h"




void FUN_00e1f020(undefined8 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d6a1f8(*param_1);
  *param_3 = fVar1;
  *param_2 = fVar1 * 0.1;
  return;
}




void FUN_00e1f05c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d657dc();
  plVar2 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e1f088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_00e1f020);
  return;
}




undefined8 FUN_00e1f08c(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00d66d28(*param_1);
  uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f;
  if ((uVar1 == 0x1f) || (uVar3 = 0, 1 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_00e1f0d8(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
                    /* WARNING: Could not recover jumptable at 0x00e1f114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Glaive_Attack_Crit_Hit");
  return;
}




void FUN_00e1f118(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d6624c();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Glaive_Dust");
  uVar4 = FUN_00d2d01c(lVar2 + 0x10);
  uVar5 = FUN_00d9b294();
  FUN_00d9b5c0(uVar5,FUN_00e1f08c);
  FUN_00d9b5b0(uVar4);
  FUN_00d39534();
  FUN_00d9b5b0(uVar4);
  plVar3 = (long *)FUN_00d2cf7c();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_38 = FUN_00dbd5a4;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1f1f8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  FUN_00d4b23c(uVar2,PTR_s_Ability__Glaive__B_02beeb10);
  lVar3 = FUN_00d4b280();
  plVar4 = (long *)FUN_00d2a110(lVar3 + 0x10);
  local_58 = FUN_00e1f370;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,0x1e,1,&local_58);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Glaive__BCleave");
  uVar2 = FUN_00d2d01c(lVar3 + 0x10);
  FUN_00d9b650(uVar2,PTR_s_Ability__Glaive__B_02beeb10);
  FUN_00d9b5b0();
  plVar4 = (long *)FUN_00d2b728();
  local_58 = FUN_00e1f384;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Glaive__BasicCleave");
  uVar2 = FUN_00d2d01c(lVar3 + 0x10);
  uVar2 = FUN_00d9b650(uVar2,PTR_s_Ability__Glaive__B_02beeb10);
  FUN_00d9b5b0();
  plVar4 = (long *)FUN_00d2b728();
  local_58 = FUN_00e1f384;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  FUN_00d9b5b8(uVar2);
  plVar4 = (long *)FUN_00d2b728();
  local_58 = FUN_00e1f398;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1f370(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




void FUN_00e1f384(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00e1f398(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,1);
  return;
}




void FUN_00e1f3a4(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 local_9c;
  undefined8 local_98;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    FUN_00d69554(param_1,&local_98,&local_9c);
    lVar8 = FUN_00d66d28(local_98);
    lVar9 = *(long *)(lVar8 + 0x18);
    while ((lVar9 != 0 && (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar9 = *(long *)(lVar9 + 0x20);
    }
    iVar4 = FUN_00d5412c(lVar9,local_9c);
    iVar5 = FUN_00d5401c(lVar9,PTR_s_Ability__Glaive__C_02beeb18);
    puVar3 = PTR_s_Buff_Glaive_AbilityPerk_GrantBlo_02bf06a8;
    if (iVar4 == iVar5) {
      uVar1 = *(undefined4 *)(lVar8 + 0x260);
      uVar6 = FUN_00ceb350();
      FUN_00cfe864(0xbf800000,0,0,auStack_90,uVar1,uVar1,puVar3,uVar6,1,0,0);
      FUN_00ce20fc(auStack_90);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1f4b0(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d69294(param_1,&local_98,&local_a0);
  lVar6 = FUN_00d66d28(local_98);
  uVar4 = FUN_00d66cf4(local_98);
  if (1 < uVar4) {
    if (((*(byte *)(local_a0 + 0xc) >> 2 & 1) != 0) &&
       ((uVar7 = FUN_00daa578(local_a0,lVar6), (uVar7 & 1) != 0 ||
        (((uVar7 = FUN_00daa58c(local_a0,lVar6), (uVar7 & 1) != 0 &&
          (*(long *)(local_a0 + 0x28) != 0)) &&
         ((*(byte *)(*(long *)(local_a0 + 0x28) + 0x2f4) & 1) != 0)))))) {
      puVar3 = PTR_s_Buff_Glaive_AbilityPerk_Bloodson_02bf06b0;
      uVar1 = *(undefined4 *)(lVar6 + 0x260);
      uVar5 = FUN_00ceb350();
      FUN_00cfe864(0xbf800000,0,0,auStack_90,uVar1,uVar1,puVar3,uVar5,1,0,0);
      FUN_00ce20fc(auStack_90);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1f5ac(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = FUN_00d67c60();
  puVar2 = PTR_s_onAbilityUpgradedName_02bed538;
  uVar3 = FUN_00e6a474(PTR_s_onAbilityUpgradedName_02bed538);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e1f3a4;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onAfterApplyDamageName_02bed608;
  uVar3 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e1f4b0;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




void FUN_00e1f684(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d3bc68(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x38))();
  lVar2 = FUN_00d6592c(param_1);
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00e1f768;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x17,1,&local_48);
  (**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00e1f768;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,1,&local_48);
  (**(code **)(*plVar3 + 0x38))();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1f768(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,5,0x19,0);
  return;
}




void FUN_00e1f77c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,6);
  FUN_00d4bc10();
  lVar3 = FUN_00d4bc38();
  FUN_00d2a320(lVar3 + 0x10);
  lVar3 = FUN_00d65010(param_1);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d2945c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_JetEngine");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Glaive_Axe_Jet");
  plVar4 = (long *)FUN_00d2df94(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"Sound_Glaive_Ability_A_Loop3");
  lVar5 = FUN_00d09310();
  FUN_00d094e8(*(undefined4 *)(lVar5 + 0x90));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00d2df44(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,"Idle","Ability01_Idle");
  plVar4 = (long *)FUN_00d2df44(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,"Move","Ability01_Run");
  plVar4 = (long *)FUN_00d2df44(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,"FastMove","Ability01_Run");
  plVar4 = (long *)FUN_00d2df44(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,"Sprint","Ability01_Run");
  plVar4 = (long *)FUN_00d2df44(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,"MoveStart","Ability01_RunStart");
  plVar4 = (long *)FUN_00d2df44(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,"MoveStop","Ability01_RunStop");
  plVar4 = (long *)FUN_00d2a110(lVar3);
  local_48 = FUN_00e1f9b8;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,0x10,1,&local_48);
  uVar2 = FUN_00d29f44(lVar3);
  local_48 = FUN_00e1f9cc;
  local_40 = 3;
  FUN_00d47690(uVar2,1,&local_48);
  plVar4 = (long *)FUN_00d2ccac(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Glaive__A_KnockbackDefA_02beeb08);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1f9b8(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,8,0x19,0);
  return;
}




void FUN_00e1f9cc(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,7,0x19,0);
  return;
}




void FUN_00e1f9e0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  FUN_00d4403c(param_1,1);
  uVar1 = FUN_00d65160(param_1);
  lVar2 = FUN_00d492c4(uVar1,FUN_00e1fa4c);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Glaive_Withdraw");
                    /* WARNING: Could not recover jumptable at 0x00e1fa48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  return;
}




void FUN_00e1fa4c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return;
}




void FUN_00e1fa58(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Grace_Heavy_Impact_01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Grace_Heavy_Impact_02");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Grace_Heavy_Impact_03");
  lVar1 = FUN_00d09310();
  FUN_00d09ec0(*(undefined4 *)(lVar1 + 0x3d4));
                    /* WARNING: Could not recover jumptable at 0x00e1fad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_00e1fad4(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_00d635f4();
  lVar2 = FUN_00d4ac24(uVar1,PTR_s_Ability__Grace__A_02beeb30);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e1fb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Grace_Passive_A_02bf06d8);
  return;
}




void FUN_00e1fb10(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e1fb74;
  local_30 = 3;
  FUN_00d42a20(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1fb74(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,6,1);
  return;
}




void FUN_00e1fb80(void)

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
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  lVar3 = FUN_00d4bc24();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38 = FUN_00e1fbfc;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x40))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1fbfc(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x89,0);
  return;
}




void FUN_00e1fc10(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65e5c();
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d64980(param_1);
  plVar2 = (long *)FUN_00e213ac(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e1fc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Grace__A_02beeb30);
  return;
}




void FUN_00e1fc5c(void)

{
  return;
}




void FUN_00e1fc60(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64980();
  plVar3 = (long *)FUN_00d2b6d8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Grace__A_02beeb30);
  local_48 = (code *)((ulong)local_48._4_4_ << 0x20);
  local_40 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  uVar4 = FUN_00d66d28(param_1);
  uVar5 = FUN_00d44be0(uVar4,PTR_s_Buff_Grace_Talent_DoubleBenedict_02bf1ee8);
  if ((uVar5 & 1) != 0) {
    uVar4 = FUN_00e213fc(lVar2 + 0x10);
    local_48 = FUN_00e1fd38;
    local_40 = 3;
    FUN_00d982b4(uVar4,PTR_s_Ability__Grace__A_02beeb30,&local_48,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00e1fd38(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d5a3d0(param_1,DAT_0320e67c,4,9);
  return (int)fVar1;
}




undefined8 FUN_00e1fd64(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  float fVar9;
  float __y;
  undefined1 auStack_b0 [88];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar6 = FUN_00ceab48();
  if (((uVar6 & 1) != 0) && (uVar6 = FUN_00daa524(param_2), (uVar6 & 1) != 0)) {
    pfVar7 = (float *)FUN_00daa52c(param_2,0);
    fVar9 = *pfVar7;
    __y = pfVar7[1];
    lVar8 = FUN_00d67b78(param_1);
    uVar1 = *(undefined4 *)(lVar8 + 0x260);
    uVar4 = FUN_00d67b84(param_1);
    puVar3 = PTR_s_Buff_Grace_A_GuardHitImpact_02bf0700;
    uVar5 = FUN_00ceb350();
    fVar9 = atan2f(__y,fVar9);
    FUN_00cfe864(0x3e4ccccd,fVar9,0,auStack_b0,uVar4,uVar1,puVar3,uVar5,1,0,0);
    FUN_00ce20fc(auStack_b0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_00e1fe5c(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  undefined8 uVar8;
  
  lVar1 = FUN_00d426b0(*param_1);
  auVar5 = FUN_00d59f54(lVar1,0,7,0x89,0);
  uVar2 = auVar5._0_8_;
  if ((param_1[0x85] != 0) && (lVar3 = *(long *)(param_1[0x85] + 0x28), lVar3 != 0)) {
    fVar4 = auVar5._0_4_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar2 & 0xffffffff;
    if ((*(byte *)(lVar3 + 0x2f5) & 0x10) != 0) {
      auVar5 = ZEXT416((uint)(fVar4 * 0.5));
    }
  }
  uVar8 = auVar5._8_8_;
  uVar7 = auVar5._0_8_;
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),
                       PTR_s_Buff_Grace_Talent_DoubleBenedict_02bf1ee8);
  if ((uVar2 & 1) != 0) {
    fVar4 = (float)FUN_00d5a3d0(lVar1,DAT_0320e67c,0,9);
    uVar7 = (ulong)(uint)(auVar5._0_4_ * fVar4);
    uVar8 = 0;
  }
  auVar6._8_8_ = uVar8;
  auVar6._0_8_ = uVar7;
  return auVar6;
}




void FUN_00e1ff04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  
  lVar1 = FUN_00d66d28(*param_1);
  *param_4 = *(undefined4 *)(lVar1 + 0x260);
  return;
}




void FUN_00e1ff30(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2cc5c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Grace_A_Shielded_01");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Grace_A_Shielded_02");
  lVar4 = FUN_00d09310();
  FUN_00d09ec0(*(undefined4 *)(lVar4 + 0x3d8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00d45354(lVar2);
  plVar5 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"*Grace_A_Guard*",1);
  (**(code **)(*plVar5 + 0x18))(plVar5,"CenterBody");
  plVar5 = (long *)FUN_00e2144c(lVar2);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))
                             (plVar5,PTR_s_Buff_Grace_A_GuardOmniVisuals_02bf0710,plVar3 + 2);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_00e1ff04);
  lVar2 = FUN_00d65010(param_1);
  plVar5 = (long *)FUN_00d2df94(lVar2 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"Sound_Grace_A_ShieldLoop_01");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,"Sound_Grace_A_ShieldLoop_02");
  lVar2 = FUN_00d09310();
  FUN_00d09ec0(*(undefined4 *)(lVar2 + 0x3d8));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  uVar6 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar6,4);
  uVar6 = FUN_00d4bc24();
  lVar2 = FUN_00d4bd2c(uVar6,FUN_00e1fd64);
  plVar5 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_48 = FUN_00e1fe5c;
  local_40 = 4;
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_48);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d64980(param_1);
  uVar6 = FUN_00e2149c(lVar2 + 0x10);
  FUN_00d9c7a8(uVar6,plVar3 + 2);
  FUN_00e214ec(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

