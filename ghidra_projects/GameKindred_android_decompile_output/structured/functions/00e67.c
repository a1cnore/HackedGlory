// functions/00e67 — 49 functions
#include "libGameKindred.h"




void FUN_00e6702c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec44,0,9);
  return;
}




void FUN_00e67040(void)

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
  local_38 = FUN_00e670b8;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xf,1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e670b8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec4c,0,9);
  return;
}




void FUN_00e670cc(void)

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
  FUN_00d4bbf8(uVar2,4);
  lVar3 = FUN_00d4bc10();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38[0] = 0;
  local_30 = 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e67140(void)

{
  return;
}




void FUN_00e67144(void)

{
  return;
}




void FUN_00e67148(void)

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
  uVar2 = FUN_00d4bc10();
  uVar2 = FUN_00d4bce8(uVar2,1);
  lVar3 = FUN_00d4bc48(uVar2,8);
  plVar4 = (long *)FUN_00d2b6d8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4,3);
  local_38 = FUN_00e671e4;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x40))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e671e4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec68,0,9);
  return;
}




void FUN_00e671f8(void)

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
  local_38 = FUN_00e67270;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xf,1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e67270(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec70,0,9);
  return;
}




void FUN_00e67284(void)

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
  lVar3 = FUN_00e5d9b0(uVar2,PTR_s_Buff_Magnus_Perk_SpellMark_02bf1480);
  plVar4 = (long *)FUN_00d467d8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  local_38 = FUN_00e67324;
  local_30 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_38);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00d44d9c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e67324(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec78,0,9);
  return;
}




void FUN_00e67338(undefined8 param_1)

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
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Anka__A_02befac0);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00e67440;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Anka__A_02befac0,&local_48,1);
  uVar2 = FUN_00d6639c(param_1);
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Anka__A_02befac0);
  uVar2 = FUN_00da4ee4(lVar3 + 0x10);
  uVar2 = FUN_00d986e0(uVar2,PTR_s_Ability__Anka__A_02befac0);
  local_48 = FUN_00e67454;
  local_40 = 3;
  FUN_00d98704(uVar2,&local_48);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Ability__Anka__A_02befac0);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e67468;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e67440(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec80,1,9);
  return;
}




void FUN_00e67454(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec80,0,9);
  return;
}




void FUN_00e67468(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec80,2,9);
  return;
}




void FUN_00e6747c(undefined8 param_1)

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
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00e6758c;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,5,1,&local_48);
  uVar4 = FUN_00d63b38(param_1);
  FUN_00d4b7b0(uVar4,1);
  lVar2 = FUN_00d4b7d8();
  plVar3 = (long *)FUN_00d2b6d8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Anka__B_02befad0);
  local_48 = (code *)((ulong)local_48 & 0xffffffff00000000);
  local_40 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  plVar3 = (long *)FUN_00d2b6d8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Anka__C_02befad8);
  local_48 = (code *)((ulong)local_48 & 0xffffffff00000000);
  local_40 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6758c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec88,0,9);
  return;
}




float FUN_00e675a0(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d426b0(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,0,4,0x19,0);
  fVar3 = (float)FUN_00d5a3d0(uVar1,DAT_0320ec90,2,9);
  return fVar2 + fVar3;
}




void FUN_00e67600(undefined8 param_1)

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
  lVar3 = FUN_00e5d9b0(uVar2,PTR_s_Buff_Anka_A_BlinkedSpeedBoost_02bf15c8);
  plVar4 = (long *)FUN_00d467d8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  local_38 = FUN_00e675a0;
  local_30 = 4;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,&local_38);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_00d44d9c);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Ability__Anka__A_02befac0);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38 = FUN_00e676f4;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e676f4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec90,0,9);
  return;
}




void FUN_00e67708(undefined8 param_1)

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
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Silvernail__A");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38 = FUN_00e677d4;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
  uVar2 = FUN_00d6639c(param_1);
  FUN_00d4b23c(uVar2,PTR_s_Ability__Silvernail__A_02befb18);
  lVar3 = FUN_00d4b280();
  uVar2 = FUN_00d39b2c(lVar3 + 0x10);
  local_38 = (code *)CONCAT44(local_38._4_4_,0xffffffff);
  local_30 = 1;
  FUN_00d97fd0(uVar2,PTR_s_Ability__Silvernail__A_02befb18,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e677d4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec98,0,9);
  return;
}




void FUN_00e677e8(undefined8 param_1)

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
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Silvernail__B_02befb20);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00e678bc;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Silvernail__B_02befb20,&local_48,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Silvernail__B");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e678d0;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e678bc(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320eca0,0,9);
  return;
}




void FUN_00e678d0(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320eca0,1,9);
  return;
}




void FUN_00e678e4(undefined8 param_1)

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
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Silvernail__C_02befb28);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00e679f0;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Silvernail__C_02befb28,&local_48,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Silvernail__C");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e67a04;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  uVar2 = FUN_00d6639c(param_1);
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Silvernail__C_02befb28);
  uVar2 = FUN_00da4ee4(lVar3 + 0x10);
  uVar2 = FUN_00d986e0(uVar2,PTR_s_Ability__Silvernail__C_02befb28);
  local_48 = FUN_00e67a18;
  local_40 = 3;
  FUN_00d98704(uVar2,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e679f0(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320eca8,0,9);
  return;
}




void FUN_00e67a04(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320eca8,1,9);
  return;
}




void FUN_00e67a18(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320eca8,2,9);
  return;
}




void FUN_00e67a2c(undefined8 param_1)

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
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Yates__C_02befbe8);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00e67b00;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Yates__C_02befbe8,&local_48,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Yates__C");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e67b14;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e67b00(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ecb0,0,9);
  return;
}




void FUN_00e67b14(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ecb0,1,9);
  return;
}




void FUN_00e67b28(undefined8 param_1)

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
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00e67bf4;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xf,1,&local_48);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,4);
  uVar4 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc60(uVar4,"Yates_DefaultAttackC_Damage");
  plVar3 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_48 = FUN_00e67c08;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e67bf4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ecb8,1,9);
  return;
}




void FUN_00e67c08(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ecb8,0,9);
  return;
}




void FUN_00e67c1c(undefined8 param_1)

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
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Yates__A_02befbd0);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00e67d28;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Yates__A_02befbd0,&local_48,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Yates__A");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e67d3c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  uVar2 = FUN_00d6639c(param_1);
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Yates__A_02befbd0);
  uVar2 = FUN_00da4ee4(lVar3 + 0x10);
  uVar2 = FUN_00d986e0(uVar2,PTR_s_Ability__Yates__A_02befbd0);
  local_48 = FUN_00e67d50;
  local_40 = 3;
  FUN_00d98704(uVar2,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e67d28(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ecc0,0,9);
  return;
}




void FUN_00e67d3c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ecc0,1,9);
  return;
}




void FUN_00e67d50(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ecc0,2,9);
  return;
}




void FUN_00e67d64(void)

{
  return;
}




void FUN_00e67d68(void)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Inara__B_02befc68);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_38 = FUN_00e67de8;
  local_30 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Inara__B_02befc68,&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e67de8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ecd0,1,9);
  return;
}




void FUN_00e67dfc(void)

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
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Ability__Inara__A_02befc60);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38 = FUN_00e67e88;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e67e88(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ecd8,1,9);
  return;
}




void FUN_00e67e9c(undefined8 param_1)

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
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Sanfeng__A_02befd28);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00e67f70;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Sanfeng__A_02befd28,&local_48,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Sanfeng__A");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e67f84;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e67f70(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ece0,1,9);
  return;
}




void FUN_00e67f84(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ece0,0,9);
  return;
}




void FUN_00e67f98(undefined8 param_1)

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
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Sanfeng__B_02befd38);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00e680cc;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Sanfeng__B_02befd38,&local_48,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Sanfeng__B");
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d2b728(lVar3);
  local_48 = FUN_00e680e0;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  FUN_00d2cf2c(lVar3);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_SlowUsingBuffVar_02beb4c0);
  local_48 = FUN_00e680f4;
  local_40 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  (**(code **)(*plVar4 + 0x38))(0x3eb33333);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

