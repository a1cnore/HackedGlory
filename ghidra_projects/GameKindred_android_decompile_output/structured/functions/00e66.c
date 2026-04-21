// functions/00e66 — 44 functions
#include "libGameKindred.h"




void FUN_00e66110(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ea24,0,9);
  return;
}




void FUN_00e66124(void)

{
  return;
}




void FUN_00e66128(void)

{
  return;
}




void FUN_00e6612c(void)

{
  return;
}




void FUN_00e66130(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_30,&local_38);
  uVar2 = FUN_00d66d28(local_30);
  uVar3 = FUN_00daa578(local_38,uVar2);
  if ((uVar3 & 1) != 0) {
    fVar4 = (float)FUN_00d5a3d0(uVar2,DAT_0320ea40,0,9);
    *(float *)(local_38 + 0x54) = fVar4 * *(float *)(local_38 + 0x54);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e661c4(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_00d67b78();
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
          (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
  if (DAT_0320eb10 <= fVar3) {
    fVar3 = DAT_0320eb10;
  }
  fVar5 = DAT_0320ea50;
  if (DAT_0320ea50 <= fVar3) {
    fVar5 = fVar3;
  }
  fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_0320ea40,1,9);
  fVar4 = (float)FUN_00d67b0c(param_1);
  *param_3 = fVar4 * fVar3 * fVar5;
  return;
}




void FUN_00e66264(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onBeforeApplyDamageName_02bed5f8;
  uVar4 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e66130;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  FUN_00d67b04(0x3f800000,param_1);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 0x28);
  FUN_00d3e534();
  uVar6 = FUN_00d29738();
  FUN_00d42654(auStack_50,uVar6);
  FUN_00d402f8(uVar6,FUN_00e661c4);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e66350(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d5a3d0(uVar2,DAT_0320ebc8,0,9);
  FUN_00d40e24(uVar4,0x2b,1);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d5a3d0(uVar2,DAT_0320ebc8,1,9);
  FUN_00d40e24(uVar4,4,2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e66434(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  code *local_50;
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(&local_50,uVar4);
  FUN_00d5a3d0(uVar2,DAT_0320ebd0,0,9);
  FUN_00d40e24(uVar4,0xf,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Ability__Rona__A_02bef3c0);
  plVar5 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_50 = FUN_00e6652c;
  local_48 = 3;
  (**(code **)(*plVar5 + 0x30))(plVar5,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6652c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ebd0,1,9);
  return;
}




void FUN_00e66540(undefined8 param_1)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Rona__C_02bef458);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00e66614;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Rona__C_02bef458,&local_48,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Rona_Whirlwind");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e66628;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e66614(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ebd8,1,9);
  return;
}




void FUN_00e66628(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ebd8,0,9);
  return;
}




void FUN_00e6663c(void)

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
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Taka__C");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38 = FUN_00e666c4;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e666c4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ebe0,0,9);
  return;
}




void FUN_00e666d8(undefined8 param_1)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Taka__B_02bef5e8);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00e667b0;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Taka__B_02bef5e8,&local_48,1);
  uVar2 = FUN_00d634b4(param_1);
  lVar3 = FUN_00d4aa10(uVar2,PTR_s_Ability__Taka__B_02bef5e8);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Taka_Talent_ProtectiveDecoy_02bf20c0);
  local_48 = FUN_00e667c4;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e667b0(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ebe8,1,9);
  return;
}




void FUN_00e667c4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ebe8,0,9);
  return;
}




void FUN_00e667d8(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d29c84(lVar1 + 0x10);
  FUN_00d46b64(uVar2,0x200);
  return;
}




void FUN_00e667f8(undefined8 param_1)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Taka__A_02bef5e0);
  uVar2 = FUN_00da4ee4(lVar3 + 0x10);
  uVar2 = FUN_00d986e0(uVar2,PTR_s_Ability__Taka__A_02bef5e0);
  local_48 = FUN_00e668c8;
  local_40 = 3;
  FUN_00d98704(uVar2,&local_48);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Ability__Taka__A_02bef5e0);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e668dc;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e668c8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ebf4,1,9);
  return;
}




void FUN_00e668dc(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ebf4,0,9);
  return;
}




void FUN_00e668f0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  FUN_00d4b23c(uVar2,PTR_s_Ability__Lorelai__B_02bef778);
  lVar3 = FUN_00d4b280();
  lVar3 = lVar3 + 0x10;
  uVar2 = FUN_00d2dea4(lVar3);
  local_48 = FUN_00e669f8;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Lorelai__B_02bef778,&local_48,1);
  uVar2 = FUN_00d2dea4(lVar3);
  local_48 = FUN_00e66a0c;
  local_40 = 3;
  FUN_00d97d24(uVar2,"Lorelai_B_RecastDelay",&local_48,2);
  uVar2 = FUN_00d39b2c(lVar3);
  local_48 = FUN_00e66a20;
  local_40 = 3;
  FUN_00d97fd0(uVar2,PTR_s_Ability__Lorelai__B_02bef778,&local_48);
  uVar2 = FUN_00da4b70(lVar3);
  local_48 = FUN_00e66a48;
  local_40 = 3;
  FUN_00d98490(uVar2,PTR_s_Ability__Lorelai__B_02bef778,&local_48);
  FUN_00d984c8();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e669f8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ebfc,2,0x41);
  return;
}




void FUN_00e66a0c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ebfc,1,9);
  return;
}




int FUN_00e66a20(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d5a3d0(param_1,DAT_0320ebfc,0,9);
  return (int)fVar1;
}




void FUN_00e66a48(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ebfc,3,9);
  return;
}




void FUN_00e66a5c(void)

{
  return;
}




void FUN_00e66a60(void)

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
  FUN_00d4b23c(uVar2,PTR_s_Ability__Lorelai__C_02bef780);
  lVar3 = FUN_00d4b280();
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_38 = FUN_00e66ae4;
  local_30 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Lorelai__C_02bef780,&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e66ae4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec0c,1,9);
  return;
}




void FUN_00e66af8(void)

{
  return;
}




void FUN_00e66afc(void)

{
  return;
}




void FUN_00e66b00(undefined8 param_1)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Varya__A_02bef7b0);
  uVar2 = FUN_00da4ee4(lVar3 + 0x10);
  uVar2 = FUN_00d986e0(uVar2,PTR_s_Ability__Varya__A_02bef7b0);
  local_58 = FUN_00e66c68;
  local_50 = 3;
  FUN_00d98704(uVar2,&local_58);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Varya__AImpact");
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d2b728(lVar3);
  local_58 = FUN_00e66c7c;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  FUN_00d2cf2c(lVar3);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_58 = FUN_00e66c90;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Varya__AChain");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_58 = FUN_00e66c7c;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e66c68(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec24,0,9);
  return;
}




void FUN_00e66c7c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec24,1,9);
  return;
}




void FUN_00e66c90(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec24,2,9);
  return;
}




void FUN_00e66ca4(undefined8 param_1)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Kensei__C_02bef890);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00e66d7c;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Kensei__C_02bef890,&local_48,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Buff_Kensei_C_EffectOnHit_02bf1408);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e66d90;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e66d7c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec2c,1,9);
  return;
}




void FUN_00e66d90(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec2c,0,9);
  return;
}




void FUN_00e66da4(undefined8 param_1)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Kensei__B_02bef888);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00e66e68;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Kensei__B_02bef888,&local_48,1);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2a110(lVar3 + 0x10);
  local_48 = FUN_00e66e7c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,4,2,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e66e68(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec34,1,9);
  return;
}




void FUN_00e66e7c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ec34,0,9);
  return;
}




void FUN_00e66e90(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_48[0] = 0;
  local_40 = 1;
  FUN_00d97d24(uVar3,PTR_s_Ability__Kensei__C_02bef890,local_48,2);
  uVar3 = FUN_00d634b4(param_1);
  lVar2 = FUN_00d4aa10(uVar3,PTR_s_Ability__Kensei__C_02bef890);
  FUN_00d2a320(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e66f24(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_58 [2];
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00e6702c;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xf,1,&local_48);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,3);
  uVar4 = FUN_00d4bc10();
  uVar4 = FUN_00d4bc58(uVar4,0x10);
  lVar2 = FUN_00d4bcf0(uVar4,0x301);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Kensei_PassiveBehaviors_Con_02bf13a0);
  local_48 = FUN_00e4a7f8;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  local_58[0] = 2;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

