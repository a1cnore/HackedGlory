// functions/00e51 — 36 functions
#include "libGameKindred.h"




void FUN_00e51034(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,3,1);
  return;
}




void FUN_00e51040(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,1);
  return;
}




void FUN_00e5104c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  FUN_00d4bc10();
  lVar3 = FUN_00d4bc38();
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d2b728(lVar3);
  local_48 = FUN_00e51178;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x38))(plVar4,&local_48);
  plVar4 = (long *)FUN_00d2887c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Yates_DefaultAttack_C_Speed_02bf16d8);
  local_48 = FUN_00e51184;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  FUN_00d2a320(lVar3);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_Mace");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Yates_AA_Aura_02");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e51178(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,6,1);
  return;
}




void FUN_00e51184(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,4,1);
  return;
}




void FUN_00e51190(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e511f4;
  local_30 = 3;
  FUN_00d42a20(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e511f4(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,2,1);
  return;
}




void FUN_00e51200(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e51264;
  local_30 = 3;
  FUN_00d42a20(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e51264(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,5,1);
  return;
}




void FUN_00e51270(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Yates_DefaultAttack_Impact_A");
                    /* WARNING: Could not recover jumptable at 0x00e512bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_00e512c0(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Yates_DefaultAttack_Impact_B");
                    /* WARNING: Could not recover jumptable at 0x00e5130c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_00e51310(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Yates_DefaultAttack_Impact_C");
                    /* WARNING: Could not recover jumptable at 0x00e5135c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_00e51360(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d63f30();
  FUN_00e0c91c(lVar3 + 0x10);
  plVar4 = (long *)FUN_00d2b7c8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0xba);
  (**(code **)(*plVar4 + 0x18))(plVar4,"CenterBody");
  FUN_00d66d28(param_1);
  iVar2 = FUN_00d5bc54();
  thunk_FUN_00d9ff34(local_40,"GenericLocator");
  if (local_40[0] == iVar2) {
    lVar3 = FUN_00d64980(param_1);
    FUN_00d394e4(lVar3 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5143c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28(*param_1);
  FUN_00d55794(uVar2,auStack_48,0);
  FUN_00d4daf4(param_2,0,1,0,uVar2);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d59f54(uVar2,2,2,0x19,0);
  FUN_00d4db48(param_2,auStack_48);
  FUN_00d4dcdc(param_2,1);
  *(undefined4 *)(param_2 + 0x40) = 0x3f266666;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e51500(undefined8 *param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d67b34(*param_1);
  if (fVar1 <= 0.2) {
    fVar1 = 0.2;
  }
  return fVar1;
}




void FUN_00e51524(undefined8 param_1)

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
  uVar2 = FUN_00d65548();
  lVar3 = FUN_00d4891c(0x3dcccccd,uVar2,0);
  uVar2 = FUN_00d29f44(lVar3 + 0x10);
  local_58 = FUN_00e51884;
  local_50 = 3;
  FUN_00d47690(uVar2,1,&local_58);
  lVar3 = FUN_00d65010(param_1);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d2945c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Yates_B_ChargingRing");
  local_58 = (code *)CONCAT44(local_58._4_4_,0x40600000);
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xd0))(plVar4,&local_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  (**(code **)(*plVar4 + 0x90))();
  plVar4 = (long *)FUN_00d2945c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_CenterMass");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Yates_B_Charging");
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  (**(code **)(*plVar4 + 0x90))();
  plVar4 = (long *)FUN_00d2df94(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"Sound_Yates_B_Charging");
  lVar3 = FUN_00d09310();
  FUN_00d0a1b4(*(undefined4 *)(lVar3 + 0x50c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar2 = FUN_00d64d7c(param_1);
  lVar3 = FUN_00d4891c(0x3dcccccd,uVar2,0);
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar5 = FUN_00d2a370(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Yates_C_IsCasting_02bf1708;
  plVar4 = (long *)FUN_00d467d8(lVar3 + 0x88);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  local_58 = FUN_00e51500;
  local_50 = 4;
  (**(code **)(*plVar4 + 0x10))(plVar4,&local_58);
  lVar3 = FUN_00d6624c(param_1);
  lVar3 = lVar3 + 0x10;
  uVar2 = FUN_00da63b8(lVar3);
  FUN_00d9c89c(uVar2,FUN_00e5143c);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_58 = FUN_00e51898;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  plVar4 = (long *)FUN_00d2b818(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",2);
  plVar4 = (long *)FUN_00d2945c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Yates_B_Cast");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3f800000);
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,&local_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x90))();
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)FUN_00d2cc5c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Yates_B_Finished");
  lVar3 = FUN_00d09310();
  FUN_00d0a1b4(*(undefined4 *)(lVar3 + 0x50c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00e213ac(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Yates__B_02befbe0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e51884(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,5,0x19,0);
  return;
}




void FUN_00e51898(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




void FUN_00e518ac(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2df94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Yates_C_Charging");
  lVar1 = FUN_00d09310();
  FUN_00d0a1b4(*(undefined4 *)(lVar1 + 0x510));
                    /* WARNING: Could not recover jumptable at 0x00e518fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_00e51900(void)

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
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Yates_C_Landing_DamageZone");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0,0);
  local_38[0] = 0x40c00000;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd8))(0x3f4ccccd);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e519d8(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Yates_C_Teleport");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00e51a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_00e51a30(void)

{
  long lVar1;
  
  lVar1 = FUN_00d65010();
  FUN_00d2b688(lVar1 + 0x10);
  return;
}




void FUN_00e51a48(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_00d29c84(lVar1);
  FUN_00d46b64(uVar2,0x1500);
  FUN_00d29fe4(lVar1);
  uVar2 = FUN_00d29a18(lVar1);
  FUN_00d46cdc(uVar2,0x11);
  return;
}




void FUN_00e51a8c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28(*param_1);
  FUN_00d55794(uVar2,auStack_48,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4daf4(param_2,0,1,0,uVar2);
  FUN_00d59f54(uVar2,3,4,0x19,0);
  FUN_00d4db48(param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e51b38(undefined8 *param_1,undefined8 param_2)

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
  FUN_00d59f54(uVar2,3,4,0x19,0);
  FUN_00d4db48(param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e51be4(undefined8 param_1)

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
  lVar2 = FUN_00d64980();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Yates_C_Landing");
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  uVar4 = FUN_00da63b8(lVar2);
  FUN_00d9c89c(uVar4,FUN_00e51a8c);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",3);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Yates_C_Slow_02bf1738);
  local_48 = FUN_00e51d4c;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  lVar2 = FUN_00d64980(param_1);
  uVar4 = FUN_00da63b8(lVar2 + 0x10);
  FUN_00d9c89c(uVar4,FUN_00e51b38);
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Yates_C_Barrier_02bf1740);
  local_48 = FUN_00e51d60;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e51d4c(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,6,0x19,0);
  return;
}




void FUN_00e51d60(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,8,0x19,0);
  return;
}




void FUN_00e51d74(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e51ddc;
  local_30 = 3;
  FUN_00d42b30(0x3e4ccccd,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e51ddc(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,5,0x19,0);
  return;
}




void FUN_00e51df0(undefined8 *param_1,float *param_2,undefined4 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  FUN_00d67b84(*param_1);
  lVar1 = FUN_00d9e390();
  if (lVar1 == 0) {
    fVar5 = 0.0;
  }
  else {
    lVar4 = *(long *)(lVar1 + 0x40);
    fVar8 = *(float *)(lVar4 + 0x38);
    fVar5 = (*(float *)(lVar4 + 0x1a0) + 1.0) *
            (fVar8 + *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0));
    if (DAT_031bc490 <= fVar5) {
      fVar5 = DAT_031bc490;
    }
    fVar6 = DAT_031bc3d0;
    if (DAT_031bc3d0 <= fVar5) {
      fVar6 = fVar5;
    }
    fVar7 = (float)FUN_00d59f54(lVar1,3,9,0x19,0);
    fVar5 = (float)FUN_00d59f54(lVar1,3,7,0x19,0);
    fVar5 = fVar5 + fVar7 * (fVar6 - fVar8);
  }
  uVar2 = FUN_00d67b84(*param_1);
  uVar3 = FUN_00d44008(uVar2,PTR_s_Buff_Yates_Talent_TalentC_02bf2240);
  if ((uVar3 & 1) != 0) {
    fVar8 = (float)FUN_00d5a3d0(lVar1,DAT_0320ecb0,2,9);
    fVar5 = fVar5 * fVar8;
  }
  *param_2 = fVar5;
  *param_3 = 0xbf800000;
  return;
}




void FUN_00e51f10(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d657dc();
  plVar2 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_00e51df0);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e51f5c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  FUN_00d4403c(param_1,1);
  uVar1 = FUN_00d65160(param_1);
  lVar2 = FUN_00d492c4(uVar1,FUN_00e51fb8);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x00e51fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Yates_Withdraw");
  return;
}




void FUN_00e51fb8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x4029999a;
  return;
}




void FUN_00e51fc8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  *param_4 = *(undefined4 *)(*(long *)(param_1 + 0x438) + 0x260);
  return;
}




void FUN_00e51fd8(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28(*param_1);
  FUN_00d55794(uVar2,auStack_48,0);
  FUN_00d4dca4(param_2,"Inara_TreantObserver",0);
  FUN_00d4daf4(param_2,1,0,0,uVar2);
  thunk_FUN_00d086f0(uVar2,3,1);
  FUN_00d4db48(param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

