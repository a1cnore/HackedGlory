// functions/00e52 — 31 functions
#include "libGameKindred.h"




void FUN_00e52084(undefined8 param_1)

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
  uVar2 = FUN_00d639d8();
  lVar3 = FUN_00e5d7a4(uVar2,0x80);
  lVar3 = lVar3 + 0x10;
  FUN_00e52880(lVar3);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Inara_P_MarkedTreant_02bf1758);
  plVar4 = (long *)FUN_00d45354(lVar3);
  uVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,"*Inara_TreantObserver*",0);
  plVar4 = (long *)FUN_00e2144c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Inara_P_TreantObserver_02bf1760,uVar2);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00e51fc8);
  uVar2 = FUN_00d63b38(param_1);
  lVar3 = FUN_00d4b7b0(uVar2,0x80);
  uVar2 = FUN_00e227e4(lVar3 + 0x10);
  FUN_00d9c960(uVar2,PTR_s_Buff_Inara_P_TreantObserver_02bf1760);
  FUN_00d9c2f4();
  uVar2 = FUN_00d9c324();
  local_50 = 4;
  local_58 = FUN_00d44dd8;
  FUN_00d9c304(uVar2,&local_58);
  plVar4 = (long *)FUN_00d2cf7c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_DelayedKill_02beb3e0);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3e4ccccd);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  uVar2 = FUN_00d63b38(param_1);
  FUN_00d4b7b0(uVar2,0x80);
  lVar3 = FUN_00d4b7d8();
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Inara_P_EmpoweredByTreant_02bf1768);
  local_58 = FUN_00e522ac;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  uVar2 = FUN_00d64d7c(param_1);
  lVar3 = FUN_00d4891c(0x3e4ccccd,uVar2,1);
  uVar2 = FUN_00da63b8(lVar3 + 0x10);
  FUN_00d9c89c(uVar2,FUN_00e51fd8);
  plVar4 = (long *)FUN_00d2cf7c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Inara_P_ObserverBonusVision_02bf1770);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x40800000);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e522ac(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,1);
  return;
}




void FUN_00e522b8(undefined8 param_1)

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
  local_38 = FUN_00e52338;
  local_30 = 3;
  FUN_00d47690(uVar3,1,&local_38);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e52338(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,2,1);
  return;
}




void FUN_00e52344(undefined8 param_1)

{
  FUN_00d42ce8(param_1,0x23,"Effect_Inara_P_Root",0);
  return;
}




void FUN_00e52358(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00e2153c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e52380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,FUN_00e60450);
  return;
}




void FUN_00e52384(void)

{
  return;
}




void FUN_00e52388(undefined8 param_1)

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
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Inara_Perk_Spirit_Appear");
  lVar2 = FUN_00d09310();
  FUN_00d0a358(*(undefined4 *)(lVar2 + 0x528));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Inara_Perk_Spirit_Disappear");
  lVar2 = FUN_00d09310();
  FUN_00d0a358(*(undefined4 *)(lVar2 + 0x528));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48[0] = 0x41000000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x11,1,local_48);
  plVar3 = (long *)FUN_00e528d0(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"*InaraSpirit*");
  (**(code **)(*plVar3 + 0x38))();
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e524cc(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e52530;
  local_30 = 3;
  FUN_00d42b30(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e52530(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00e52544(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00e528d0(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"*InaraSpirit*");
                    /* WARNING: Could not recover jumptable at 0x00e52578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))();
  return;
}




void FUN_00e5257c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64980();
  plVar2 = (long *)FUN_00d2a160(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e525a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Inara_B_IsMarkedHero_02bf1788);
  return;
}




void FUN_00e525a8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d65548();
  lVar3 = FUN_00d4891c(0x3dcccccd,uVar2,0);
  uVar2 = FUN_00d29f44(lVar3 + 0x10);
  local_38 = FUN_00e52638;
  local_30 = 3;
  FUN_00d47690(uVar2,1,&local_38);
  FUN_00d476e0(0x3f99999a,0x3f19999a);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e52638(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00e5264c(void)

{
  return;
}




void FUN_00e52650(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d65e5c();
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d65010(param_1);
  uVar2 = FUN_00d45f10(lVar1 + 0x10);
  FUN_00d9886c(uVar2,PTR_s_Ability__Inara__C_02befc70,PTR_s_Ability__Inara__C2_02befc78);
  plVar3 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Inara_C_CanDash");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar1 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00e213ac(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e52724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Inara__C_02befc70);
  return;
}




void FUN_00e52728(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28(*param_1);
  FUN_00d55794(uVar2,auStack_48,0);
  FUN_00d4dabc(param_2,1);
  FUN_00d4daf4(param_2,1,0,1,uVar2);
  FUN_00d59f54(uVar2,2,2,0x19,0);
  FUN_00d4db48(param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e527d4(void)

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
  uVar2 = FUN_00d64d7c();
  lVar3 = FUN_00d4891c(0x3e4ccccd,uVar2,0);
  uVar2 = FUN_00da63b8(lVar3 + 0x10);
  FUN_00d9c89c(uVar2,FUN_00e52728);
  plVar4 = (long *)FUN_00d2cf7c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Inara_C_SpeedBoost_02bf1798);
  local_38 = FUN_00dfbce0;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e52880(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a1208();
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




void FUN_00e528d0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a1f14();
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




void FUN_00e52920(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_LanceBall_Lance_AA_Impact");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_LanceBall_Lance_Attack_Impact_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_LanceBall_Lance_Attack_Impact_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_LanceBall_Lance_Attack_Impact_3");
  lVar1 = FUN_00d09310();
  FUN_00d0a304(*(undefined4 *)(lVar1 + 0x518));
                    /* WARNING: Could not recover jumptable at 0x00e529e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_00e529ec(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2a414(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,5);
  lVar1 = FUN_00d65010(param_1);
  FUN_00d29be4(lVar1 + 0x10);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d64980(param_1);
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_LanceBall_Lance_Ability_A_End");
  lVar1 = FUN_00d09310();
  FUN_00d0a304(*(undefined4 *)(lVar1 + 0x51c));
                    /* WARNING: Could not recover jumptable at 0x00e52a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_00e52a84(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_LanceBall_Lance_A_Warning");
                    /* WARNING: Could not recover jumptable at 0x00e52ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_00e52acc(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_LanceBall_Lance_B_Burst_Impact");
                    /* WARNING: Could not recover jumptable at 0x00e52b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_00e52b28(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00d55794(param_2,param_3,0);
  *(undefined4 *)(param_3 + 4) = 0x3fb33333;
  return;
}




void FUN_00e52b60(undefined8 param_1)

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
  local_58[0] = 0x3e99999a;
  local_50 = 1;
  FUN_00d42c70(param_1,local_58);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"OverHead");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_LanceBall_Lance_HoldingBall");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_58[0] = 0x3f000000;
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_58);
  (**(code **)(*plVar3 + 0xc0))(0x3f800000,0x3ecccccd,0);
  uVar4 = FUN_00d45f10(lVar2 + 0x10);
  FUN_00d9886c(uVar4,PTR_s_Ability__LanceBall_Lance__C_02befca0,
               PTR_s_Ability__LanceBall_Lance__ThrowB_02befca8);
  FUN_00d63b38(param_1);
  lVar2 = FUN_00d4b770();
  plVar3 = (long *)FUN_00d2b7c8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0xdb);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"OverHead");
  (**(code **)(*plVar3 + 0x30))(plVar3,FUN_00e52b28);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e52ce0(undefined8 *param_1,float *param_2,undefined4 *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d66d28(*param_1);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1a0) + 1.0) *
          (*(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0));
  if (DAT_031bc670 <= fVar2) {
    fVar2 = DAT_031bc670;
  }
  fVar3 = DAT_031bc5b0;
  if (DAT_031bc5b0 <= fVar2) {
    fVar3 = fVar2;
  }
  *param_2 = fVar3;
  *param_3 = 0xbf800000;
  return;
}




void FUN_00e52d60(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,5,FUN_00e52ce0);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e52dac(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d29a18(lVar1 + 0x10);
  FUN_00d46cdc(uVar2,0x11);
  plVar3 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Sanfeng_AbilityOverdrive_Block");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e52e2c(undefined8 param_1)

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
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,2);
  uVar2 = FUN_00d4bc24();
  uVar2 = FUN_00d4bce8(uVar2,1);
  lVar3 = FUN_00d4bc50(uVar2,0xc);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Sanfeng_A_SuccessfulCounter_02bf17f8);
  local_58 = FUN_00dfd658;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  FUN_00d2a320(lVar3 + 0x10);
  lVar3 = FUN_00d65010(param_1);
  lVar3 = lVar3 + 0x10;
  FUN_00d29be4(lVar3);
  plVar4 = (long *)FUN_00d29c34(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,10);
  plVar4 = (long *)FUN_00d2945c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Sanfeng_A_InCounterStance");
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  FUN_00e37900(lVar3);
  lVar3 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Sanfeng_A_PostStanceAttack_02bf1800);
  local_58 = FUN_00dfd658;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e52f94(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Sanfeng_A_Countered");
  lVar2 = FUN_00d09310();
  (**(code **)(*plVar3 + 0x28))(*(undefined4 *)(lVar2 + 0x5b0),plVar3);
  lVar2 = FUN_00d64980(param_1);
  lVar2 = FUN_00d29e8c(lVar2 + 0x10);
  lVar4 = FUN_00d2a370(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Sanfeng_Talent_TalentC_02bf22a0;
  plVar3 = (long *)FUN_00d2b6d8(lVar2 + 0x88);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Sanfeng__A_02befd28);
  local_48 = (code *)((ulong)local_48._4_4_ << 0x20);
  local_40 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  uVar5 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar5,4);
  uVar5 = FUN_00d4bc10();
  uVar5 = FUN_00d4bca4(uVar5,1);
  lVar2 = FUN_00d4bc60(uVar5,"Ability__Sanfeng__A");
  plVar3 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_48 = FUN_00e53128;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x38))(plVar3,&local_48);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Sanfeng_A_SuccessfulCounter");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

