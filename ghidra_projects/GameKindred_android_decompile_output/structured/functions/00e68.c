// functions/00e68 — 47 functions
#include "libGameKindred.h"




void FUN_00e680cc(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ece8,1,9);
  return;
}




void FUN_00e680e0(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ece8,0,9);
  return;
}




void FUN_00e680f4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ece8,2,9);
  return;
}




void FUN_00e68108(undefined8 param_1)

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
  local_48 = FUN_00e681dc;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Sanfeng__A_02befd28,&local_48,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Sanfeng__C");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e681f0;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e681dc(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ecf0,1,9);
  return;
}




void FUN_00e681f0(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ecf0,0,9);
  return;
}




void FUN_00e68204(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d634b4();
  lVar2 = FUN_00d4a9f0();
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Leo_Talent_SpeedBoost_02bf22e0);
  local_38 = FUN_00e5352c;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6828c(undefined8 param_1)

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
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48 = FUN_00e683a8;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,4,2,&local_48);
  (**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48 = FUN_00e683bc;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,5,2,&local_48);
  (**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48 = FUN_00e683d0;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x12,1,&local_48);
  (**(code **)(*plVar3 + 0x38))();
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e683a8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ecf8,0,9);
  return;
}




void FUN_00e683bc(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ecf8,1,9);
  return;
}




void FUN_00e683d0(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ecf8,2,9);
  return;
}




void FUN_00e683e4(void)

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
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00e68498;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,7,2,&local_48);
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00e684ac;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,8,2,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e68498(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed04,0,9);
  return;
}




void FUN_00e684ac(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed04,1,9);
  return;
}




void FUN_00e684c0(void)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Leo__C_02befe00);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_38 = FUN_00e68540;
  local_30 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Leo__C_02befe00,&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e68540(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed0c,1,9);
  return;
}




void FUN_00e68554(undefined8 param_1)

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
  plVar3 = (long *)FUN_00d2a160(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Caine_AmmoPerk_02bf1878);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Caine_AmmoControl_02bf1898);
  local_48 = FUN_00e00564;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  uVar4 = FUN_00d6639c(param_1);
  lVar2 = FUN_00d4b23c(uVar4,PTR_s_Ability__Caine__A_02befe60);
  uVar4 = FUN_00d2dea4(lVar2 + 0x10);
  local_48 = FUN_00e68678;
  local_40 = 3;
  FUN_00d97d24(uVar4,PTR_s_Ability__Caine__A_02befe60,&local_48,1);
  uVar4 = FUN_00da4ee4(lVar2 + 0x10);
  uVar4 = FUN_00d986e0(uVar4,PTR_s_Ability__Caine__A_02befe60);
  local_48 = FUN_00e6868c;
  local_40 = 3;
  FUN_00d98704(uVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e68678(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed14,0,9);
  return;
}




void FUN_00e6868c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed14,1,9);
  return;
}




void FUN_00e686a0(void)

{
  return;
}




void FUN_00e686a4(undefined8 param_1)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Caine__B_02befe68);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00e68784;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Caine__B_02befe68,&local_48,1);
  uVar2 = FUN_00d634b4(param_1);
  lVar3 = FUN_00d4aa10(uVar2,PTR_s_Ability__Caine__B_02befe68);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Invulnerable_02beb400);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3ecccccd);
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e68784(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed24,0,9);
  return;
}




void FUN_00e68798(undefined8 param_1)

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
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Warhawk_C_Impact_Damage");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e68874;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Warhawk_C_Burn_Damage");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e68888;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e68874(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed2c,0,9);
  return;
}




void FUN_00e68888(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed2c,1,9);
  return;
}




void FUN_00e6889c(undefined8 param_1)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Warhawk__A_02befe98);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00e68970;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Warhawk__A_02befe98,&local_48,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Warhawk_A_Damage");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e68984;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e68970(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed34,0,9);
  return;
}




void FUN_00e68984(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed34,1,9);
  return;
}




void FUN_00e68998(void)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Warhawk__B_02befea0);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_38 = FUN_00e68a18;
  local_30 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Warhawk__B_02befea0,&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e68a18(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed3c,0,9);
  return;
}




void FUN_00e68a2c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d39584(lVar2 + 0x10);
  local_38 = FUN_00e68aa8;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e68aa8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed3c,1,9);
  return;
}




void FUN_00e68abc(undefined8 param_1)

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
  uVar2 = FUN_00d63b38();
  FUN_00d4b7b0(uVar2,1);
  lVar3 = FUN_00d4b7d8();
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Ishtar_TalentA_Indomitable_02bf2380);
  FUN_00d63b38(param_1);
  lVar3 = FUN_00d4b770();
  plVar4 = (long *)FUN_00d39930(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_Ishtar_TalentA_Indomitable_02bf2380);
  local_48[0] = 0xffffffff;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x10))(plVar4,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e68b78(void)

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
  lVar3 = FUN_00d4bc60(uVar2,"Ishtar_B_Damage");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38 = FUN_00e68c00;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e68c00(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed50,0,9);
  return;
}




void FUN_00e68c14(void)

{
  return;
}




void FUN_00e68c18(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d660fc();
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar4 = FUN_00d2a370(lVar3 + 0x10);
  puVar2 = PTR_s_Buff_Ishtar_TalentA_Indomitable_02bf2380;
  *(undefined4 *)(lVar4 + 0x10) = 10;
  *(undefined **)(lVar4 + 8) = puVar2;
  plVar5 = (long *)FUN_00d2887c(lVar3 + 0x88);
  (**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Ishtar_TalentA_IndomitableM_02bf23a8);
  plVar5 = (long *)FUN_00d2a160(lVar3 + 0xa0);
  (**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Ishtar_TalentA_IndomitableM_02bf23a8);
  lVar3 = FUN_00d6592c(param_1);
  lVar3 = lVar3 + 0x10;
  plVar5 = (long *)FUN_00d2a110(lVar3);
  local_48 = FUN_00e68d88;
  local_40 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,7,1,&local_48);
  (**(code **)(*plVar5 + 0x38))();
  plVar5 = (long *)FUN_00d2a110(lVar3);
  local_48 = FUN_00e68d9c;
  local_40 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,8,1,&local_48);
  (**(code **)(*plVar5 + 0x38))();
  plVar5 = (long *)FUN_00d2a110(lVar3);
  local_48 = FUN_00e68db0;
  local_40 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x18,1,&local_48);
  (**(code **)(*plVar5 + 0x38))();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e68d88(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed48,0,9);
  return;
}




void FUN_00e68d9c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed48,1,9);
  return;
}




void FUN_00e68db0(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed48,2,9);
  return;
}




void FUN_00e68dc4(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ishtar_A_Indomitable");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00e68e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_00e68e1c(undefined8 param_1)

{
  FUN_00d42ce8(param_1,0x23,"Effect_Root",0);
  return;
}




void FUN_00e68e30(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d6592c();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_38 = FUN_00e68ec8;
  local_30 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0xf,1,&local_38);
  (**(code **)(*plVar3 + 0x38))();
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e68ec8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed58,0,9);
  return;
}




void FUN_00e68edc(void)

{
  return;
}




void FUN_00e68ee0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d67b78(param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,1,0,1,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4db48(0x40c00000,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e68f90(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d67b78(param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,0,1,0,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4db48(0x40c00000,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

