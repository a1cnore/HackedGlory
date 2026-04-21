// functions/00d93 — 19 functions
#include "libGameKindred.h"




void FUN_00d93054(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1 + 0x120;
  *param_2 = "Effect_Hero052_Shot";
  param_2[4] = "Effect_Hero052_Shot_HitImpact";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41900000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  plVar2 = (long *)FUN_00d84e4c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,0);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d930d8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1 + 0x120;
  *param_2 = "Effect_Hero052_Ball_DefaultAttack";
  param_2[4] = "Effect_Hero052_Shot_HitImpact";
  FUN_00e5ff9c(lVar1);
  *(long *)(param_1 + 0x118) = lVar1;
  FUN_00e5ffd8(0x41900000,lVar1);
  lVar1 = FUN_00d84dfc(param_1 + 0x100);
  plVar2 = (long *)FUN_00d84e4c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,0);
  FUN_00d84e9c(lVar1 + 0x10);
  return;
}




void FUN_00d9315c(long param_1,undefined8 *param_2)

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
  lVar3 = param_1 + 0x120;
  *param_2 = "Effect_Hero052_Shot_B";
  param_2[4] = "Effect_Hero052_Shot_HitImpact";
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00e5fe1c(0x41f00000,lVar3,param_1,2);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar4 = (long *)FUN_00d84e4c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  local_48 = FUN_00d93258;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48,1,2);
  FUN_00d84e9c(lVar3 + 0x10);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d93258(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00d9326c(long param_1,undefined8 *param_2)

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
  lVar3 = param_1 + 0x120;
  *param_2 = "Effect_Hero052_Shot_B";
  param_2[4] = "Effect_Hero052_Shot_HitImpact";
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00e5fe1c(0x41f00000,lVar3,param_1,1);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar4 = (long *)FUN_00d84e4c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  local_48 = FUN_00d93368;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48,1,2);
  FUN_00d84e9c(lVar3 + 0x10);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d93368(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00d9337c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_58;
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Hero052_Ball_DefaultAttack";
  param_2[4] = "Effect_Hero052_Shot_HitImpact";
  FUN_00d80ec4(0x3e4ccccd);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00e5fe1c(0x41c80000,lVar3,param_1,3);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x200000);
  plVar4 = (long *)FUN_00d8c2e0(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  local_48[0] = 0x41f00000;
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,local_48);
  local_58 = FUN_00d9349c;
  local_50 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x28))(plVar4,&local_58);
  (**(code **)(*plVar4 + 0x80))();
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9349c(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,3,0x19,0);
  return;
}




void FUN_00d934b0(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Hero053_B_Proj";
  param_2[4] = "Effect_Hero053_B_Impact";
  FUN_00d80ec4(0x3e99999a);
  FUN_00d80ecc(0x3e4ccccd,0x3f333333,param_1);
  FUN_00d80edc(0x40c00000,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5e52c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  uVar2 = FUN_00e5e5a0(0x40800000,lVar3,param_1);
  uVar2 = FUN_00e5e560(0x40000000,uVar2,param_1);
  FUN_00e5e74c(0x3e99999a,0xbe99999a,0,uVar2,param_1);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar4 = (long *)FUN_00d84eec(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_48[0] = 0x40000000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d935f4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Hero053_B_Proj";
  param_2[4] = "Effect_Hero053_B_Impact";
  FUN_00d80ec4(0x3e99999a);
  FUN_00d80ecc(0x3e4ccccd,0x3f333333,param_1);
  FUN_00d80edc(0x40c00000,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5e52c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  uVar2 = FUN_00e5e5a0(0x40800000,lVar3,param_1);
  uVar2 = FUN_00e5e560(0x40000000,uVar2,param_1);
  FUN_00e5e74c(0x3e99999a,0xbe99999a,0,uVar2,param_1);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar4 = (long *)FUN_00d84eec(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_48[0] = 0x40000000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d93738(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Hero053_B_Proj";
  param_2[4] = "Effect_Hero053_B_Impact";
  FUN_00d80ec4(0x3e99999a);
  FUN_00d80ecc(0x3e4ccccd,0x3f333333,param_1);
  FUN_00d80edc(0x40c00000,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00e5fc5c(0x40c00000,0x41400000,lVar3,param_1);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar4 = (long *)FUN_00d84eec(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_48[0] = 0x40000000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9385c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Hero053_B_Proj";
  param_2[4] = "Effect_Hero053_B_Impact";
  FUN_00d80ec4(0x3e99999a);
  FUN_00d80ecc(0x3e4ccccd,0x3f333333,param_1);
  FUN_00d80edc(0x40c00000,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5e52c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  uVar2 = FUN_00e5e5a0(0x40800000,lVar3,param_1);
  uVar2 = FUN_00e5e560(0x40000000,uVar2,param_1);
  FUN_00e5e74c(0x3e99999a,0x3e99999a,0,uVar2,param_1);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar4 = (long *)FUN_00d84eec(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_48[0] = 0x40000000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d9399c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Hero053_B_Proj";
  param_2[4] = "Effect_Hero053_B_Impact";
  FUN_00d80ec4(0x3e99999a);
  FUN_00d80ecc(0x3e4ccccd,0x3f333333,param_1);
  FUN_00d80edc(0x40c00000,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5e52c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  uVar2 = FUN_00e5e5a0(0x40800000,lVar3,param_1);
  uVar2 = FUN_00e5e560(0x40000000,uVar2,param_1);
  FUN_00e5e74c(0x3e99999a,0x3e99999a,0,uVar2,param_1);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar4 = (long *)FUN_00d84eec(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_48[0] = 0x40000000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d93adc(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_2 = "Effect_Hero053_B_Proj";
  param_2[4] = "Effect_Hero053_B_Impact";
  FUN_00d80edc(0x40c00000);
  FUN_00d80ec4(0x3f000000,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5f128(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00e5f16c(0x41900000,0x41600000,lVar3,param_1);
  FUN_00e5f410();
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar4 = (long *)FUN_00d84eec(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_48[0] = 0x40000000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  lVar3 = FUN_00d85f00(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d93be4(long param_1,undefined8 *param_2)

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
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_Anka_A_Proj";
  param_2[4] = "Effect_Anka_A_Proj_Hit";
  param_2[0xc] = "Sound_Anka_Ability_A1_Impact";
  FUN_00d80ec4(0x3f19999a,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00d59f54(uVar2,0,5,0x19,0);
  FUN_00e5fe1c(lVar3,param_1,0);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d84e4c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"Damage",0);
  plVar4 = (long *)FUN_00d84eec(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Anka_A_DaggerMark_02bf15b8);
  local_48 = FUN_00d93d4c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  FUN_00d84e9c(lVar3);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d93d4c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,7,0x19,0);
  return;
}




void FUN_00d93d60(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80f68();
  *param_2 = "Effect_Anka_B_Proj";
  param_2[4] = "Effect_Nothing";
  FUN_00d80ec4(0x3e99999a,param_1);
  lVar3 = param_1 + 0x120;
  FUN_00e5fc3c(lVar3);
  *(long *)(param_1 + 0x118) = lVar3;
  FUN_00d59f54(uVar2,2,4,0x19,0);
  FUN_00e5fe1c(lVar3,param_1,2);
  uVar2 = FUN_00d850b4(param_1 + 0x100);
  lVar3 = FUN_00d84048(uVar2,param_1,0x40000);
  plVar4 = (long *)FUN_00d84eec(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Anka_B_KnifeHit_02bf15d8);
  local_48[0] = 0x3e99999a;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  lVar3 = FUN_00d851a4(param_1 + 0x100);
  FUN_00d84e9c(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d93e84(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d81070();
  *param_2 = "Effect_Anka_C_Clone";
  FUN_00d80ec4(0x3f8ccccd,param_1);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_02820430;
  *(undefined8 *)(param_1 + 0x128) = 0;
  uVar2 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x130) = uVar2;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  FUN_00e5e120(param_1 + 0x120,param_1,uVar3);
  uVar3 = FUN_00d850b4(param_1 + 0x100);
  lVar4 = FUN_00d84048(uVar3,param_1,0x40000);
  plVar5 = (long *)FUN_00d84eec(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Anka_C_InitialDashHit_02bf15e8);
  local_48[0] = 0x3f000000;
  local_40 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d93f88(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d81070();
  *param_2 = "Effect_Anka_C_Clone";
  FUN_00d80ec4(0x3f8ccccd,param_1);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_02820430;
  *(undefined8 *)(param_1 + 0x128) = 0;
  uVar2 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x130) = uVar2;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  FUN_00e5e120(param_1 + 0x120,param_1,uVar3);
  uVar3 = FUN_00d850b4(param_1 + 0x100);
  lVar4 = FUN_00d84048(uVar3,param_1,0x40000);
  plVar5 = (long *)FUN_00d84eec(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Anka_C_SecondaryDashHit_02bf15f0)
  ;
  local_48[0] = 0x3f000000;
  local_40 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

