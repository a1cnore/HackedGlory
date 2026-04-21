// functions/00e61 — 42 functions
#include "libGameKindred.h"




void FUN_00e61020(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e598,1,9);
  return;
}




void FUN_00e61034(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e598,0,9);
  return;
}




void FUN_00e61048(void)

{
  return;
}




float FUN_00e6104c(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d426b0(*param_1);
  fVar2 = (float)thunk_FUN_00d086f0(uVar1,3,1);
  fVar3 = (float)FUN_00d5a3d0(uVar1,DAT_0320e5a8,2,9);
  return fVar2 + fVar3;
}




void FUN_00e610a4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  code *local_50;
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2a110(lVar3 + 0x10);
  local_50 = FUN_00e611ec;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,0xf,1,&local_50);
  uVar5 = FUN_00d63c7c(param_1);
  lVar3 = FUN_00e5d9b0(uVar5,PTR_s_Buff_Blackfeather_HeartThrob_02bf03c0);
  plVar4 = (long *)FUN_00d467d8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  local_50 = FUN_00e6104c;
  local_48 = 4;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,&local_50);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00d44d9c);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar5 = FUN_00d395d4();
  FUN_00d42654(&local_50,uVar5);
  FUN_00d5a3d0(uVar2,DAT_0320e5a8,1,9);
  FUN_00d40e24(uVar5,4,2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e611ec(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e5a8,0,9);
  return;
}




void FUN_00e61200(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d426b0(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,2,1,0x19,0);
  fVar3 = (float)FUN_00d5a3d0(uVar1,DAT_0320e5b0,3,9);
  *param_2 = fVar2 * fVar3;
  return;
}




void FUN_00e61268(undefined8 param_1)

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
  FUN_00d4b23c(uVar2,PTR_s_Ability__Blackfeather__C_02bee748);
  lVar3 = FUN_00d4b280();
  uVar2 = FUN_00d39b2c(lVar3 + 0x10);
  local_58 = FUN_00e6136c;
  local_50 = 3;
  FUN_00d97fd0(uVar2,PTR_s_Ability__Blackfeather__C_02bee748,&local_58);
  uVar2 = FUN_00da4b70(lVar3 + 0x10);
  local_58 = FUN_00e61394;
  local_50 = 3;
  FUN_00d98490(uVar2,PTR_s_Ability__Blackfeather__C_02bee748,&local_58);
  FUN_00d984c8();
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Ability__Blackfeather__C_02bee748);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_58 = FUN_00e613a8;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00e6136c(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d5a3d0(param_1,DAT_0320e5b0,1,9);
  return (int)fVar1;
}




void FUN_00e61394(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e5b0,2,9);
  return;
}




void FUN_00e613a8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e5b0,0,9);
  return;
}




void FUN_00e613bc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d6592c();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00e6149c;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,4,2,&local_48);
  (**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00e614b0;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,5,2,&local_48);
  (**(code **)(*plVar3 + 0x38))();
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6149c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e5bc,1,9);
  return;
}




void FUN_00e614b0(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e5bc,2,9);
  return;
}




void FUN_00e614c4(void)

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
  uVar2 = FUN_00d63ddc();
  lVar3 = FUN_00e5d9b0(uVar2,PTR_s_Buff_Catherine_HeroicPerk_Captai_02bf04d8);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Catherine_Talent_CaptainOfT_02bf1d60);
  local_38 = FUN_00e61558;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e61558(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e5bc,0,9);
  return;
}




void FUN_00e6156c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,6);
  FUN_00d4bc10();
  lVar3 = FUN_00d4bc38();
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar4 = FUN_00d2a370(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Catherine_Stormguard_02bf04e0;
  plVar5 = (long *)FUN_00d2b6d8(lVar3 + 0x88);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Ability__Catherine__A_02bee770);
  local_48 = FUN_00e61674;
  local_40 = 3;
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_48);
  plVar5 = (long *)FUN_00d2b6d8(lVar3 + 0x88);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Ability__Catherine__C_02bee788);
  local_48 = FUN_00e61688;
  local_40 = 3;
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e61674(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e5c4,0,9);
  return;
}




void FUN_00e61688(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e5c4,1,9);
  return;
}




void FUN_00e6169c(undefined8 param_1)

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
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_48 = FUN_00e61764;
  local_40 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Catherine__C_02bee788,&local_48,1);
  uVar3 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar3,3);
  uVar3 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc60(uVar3,PTR_s_Ability__Catherine__C_02bee788);
  plVar4 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_48 = FUN_00e61778;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e61764(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e5cc,2,9);
  return;
}




void FUN_00e61778(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e5cc,3,9);
  return;
}




void FUN_00e6178c(void)

{
  return;
}




float FUN_00e61790(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d426b0(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,0,0xb,0x19,0);
  fVar3 = (float)FUN_00d5a3d0(uVar1,DAT_0320e5dc,2,9);
  return fVar2 + fVar3;
}




void FUN_00e617f0(void)

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
  uVar2 = FUN_00d63c7c();
  lVar3 = FUN_00e5d9b0(uVar2,PTR_s_Buff_Celeste_Star_02bf0508);
  plVar4 = (long *)FUN_00d467d8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  local_38 = FUN_00e61790;
  local_30 = 4;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,&local_38);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00d44d9c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e61890(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Celeste__B_02bee7b0);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_38 = FUN_00e61910;
  local_30 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Celeste__B_02bee7b0,&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e61910(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e5e4,1,9);
  return;
}




void FUN_00e61924(void)

{
  return;
}




void FUN_00e61928(void)

{
  return;
}




void FUN_00e6192c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d40e24(0x3f99999a,uVar3,0x12,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e619ac(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d40e24(0x40200000,uVar3,0x10,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e61a28(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40e24(0x42a00000,uVar3,7,1);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40e24(0x42a00000,uVar3,8,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e61ae0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d40e24(0x3f400000,uVar3,0x19,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e61b5c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d40e24(0x3f400000,uVar3,0xf,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e61bd8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d40e24(0x42480000,uVar3,4,1);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d40e24(0x3f19999a,uVar3,0xf,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e61c88(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d40e24(0x42c80000,uVar3,4,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e61d08(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d40e24(0x42c80000,uVar3,5,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e61d88(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d40e24(0x3e800000,uVar3,9,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e61e04(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d40e24(0x3e800000,uVar3,0xb,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e61e80(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d40e24(0x3f000000,uVar3,0x1e,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e61efc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d40e24(0x3f000000,uVar3,0x1f,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e61f78(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40e24(0x3eb33333,uVar3,0x1e,1);
  FUN_00d3e534();
  uVar3 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40e24(0x3eb33333,uVar3,0x1f,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

