// functions/00e69 — 29 functions
#include "libGameKindred.h"




void FUN_00e69040(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_68 [2];
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d634b4();
  lVar3 = FUN_00d4aa10(uVar2,PTR_s_Ability__Viola__C_02befff0);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Viola_TalentB_Control_Enemy_02bf23e0);
  local_68[0] = 0x40a00000;
  local_60 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_68);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Viola_TalentB_Control_Ally_02bf23e8);
  local_68[0] = 0x40a00000;
  local_60 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_68);
  uVar2 = FUN_00d634b4(param_1);
  lVar3 = FUN_00d4aa10(uVar2,PTR_s_Ability__Viola__C2_02befff8);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Viola_TalentB_Control_Enemy_02bf23e0);
  local_68[0] = 0x40a00000;
  local_60 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_68);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Viola_TalentB_Control_Ally_02bf23e8);
  local_68[0] = 0x40a00000;
  local_60 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_68);
  uVar2 = FUN_00d634b4(param_1);
  lVar3 = FUN_00d4aa10(uVar2,PTR_s_Ability__Viola__C3_02bf0000);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Viola_TalentB_Control_Enemy_02bf23e0);
  local_68[0] = 0x40a00000;
  local_60 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_68);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Viola_TalentB_Control_Ally_02bf23e8);
  local_68[0] = 0x40a00000;
  local_60 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_68);
  uVar2 = FUN_00d634b4(param_1);
  lVar3 = FUN_00d4aa10(uVar2,PTR_s_Ability__Viola__C4_02bf0008);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Viola_TalentB_Control_Enemy_02bf23e0);
  local_68[0] = 0x40a00000;
  local_60 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_68);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Viola_TalentB_Control_Ally_02bf23e8);
  local_68[0] = 0x40a00000;
  local_60 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e69298(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  FUN_00d4b23c(uVar2,PTR_s_Ability__Viola__A_02beffd8);
  lVar3 = FUN_00d4b280();
  uVar2 = FUN_00d39b2c(lVar3 + 0x10);
  local_58._0_4_ = 2;
  local_50 = 1;
  FUN_00d97fd0(uVar2,PTR_s_Ability__Viola__A_02beffd8,&local_58);
  uVar2 = FUN_00d6639c(param_1);
  FUN_00d4b23c(uVar2,PTR_s_Ability__Viola__B_02beffe0);
  lVar3 = FUN_00d4b280();
  uVar2 = FUN_00d39b2c(lVar3 + 0x10);
  local_58._0_4_ = 2;
  local_50 = 1;
  FUN_00d97fd0(uVar2,PTR_s_Ability__Viola__B_02beffe0,&local_58);
  uVar2 = FUN_00d634b4(param_1);
  lVar3 = FUN_00d4aa10(uVar2,PTR_s_Ability__Viola__C_02befff0);
  lVar3 = lVar3 + 0x10;
  uVar2 = FUN_00e213fc(lVar3);
  FUN_00d982d4(uVar2,PTR_s_Ability__Viola__A_02beffd8);
  plVar4 = (long *)FUN_00d2b6d8(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Viola__A_02beffd8);
  local_58._0_4_ = 0;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  uVar2 = FUN_00e213fc(lVar3);
  FUN_00d982d4(uVar2,PTR_s_Ability__Viola__B_02beffe0);
  plVar4 = (long *)FUN_00d2b6d8(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Viola__B_02beffe0);
  local_58._0_4_ = 0;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  uVar2 = FUN_00d634b4(param_1);
  lVar3 = FUN_00d4aa10(uVar2,PTR_s_Ability__Viola__C2_02befff8);
  lVar3 = lVar3 + 0x10;
  uVar2 = FUN_00e213fc(lVar3);
  FUN_00d982d4(uVar2,PTR_s_Ability__Viola__A_02beffd8);
  plVar4 = (long *)FUN_00d2b6d8(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Viola__A_02beffd8);
  local_58._0_4_ = 0;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  uVar2 = FUN_00e213fc(lVar3);
  FUN_00d982d4(uVar2,PTR_s_Ability__Viola__B_02beffe0);
  plVar4 = (long *)FUN_00d2b6d8(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Viola__B_02beffe0);
  local_58._0_4_ = 0;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  uVar2 = FUN_00d634b4(param_1);
  lVar3 = FUN_00d4aa10(uVar2,PTR_s_Ability__Viola__C3_02bf0000);
  lVar3 = lVar3 + 0x10;
  uVar2 = FUN_00e213fc(lVar3);
  FUN_00d982d4(uVar2,PTR_s_Ability__Viola__A_02beffd8);
  plVar4 = (long *)FUN_00d2b6d8(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Viola__A_02beffd8);
  local_58._0_4_ = 0;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  uVar2 = FUN_00e213fc(lVar3);
  FUN_00d982d4(uVar2,PTR_s_Ability__Viola__B_02beffe0);
  plVar4 = (long *)FUN_00d2b6d8(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Viola__B_02beffe0);
  local_58._0_4_ = 0;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  uVar2 = FUN_00d634b4(param_1);
  lVar3 = FUN_00d4aa10(uVar2,PTR_s_Ability__Viola__C4_02bf0008);
  lVar3 = lVar3 + 0x10;
  uVar2 = FUN_00e213fc(lVar3);
  FUN_00d982d4(uVar2,PTR_s_Ability__Viola__A_02beffd8);
  plVar4 = (long *)FUN_00d2b6d8(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Viola__A_02beffd8);
  local_58._0_4_ = 0;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  uVar2 = FUN_00e213fc(lVar3);
  FUN_00d982d4(uVar2,PTR_s_Ability__Viola__B_02beffe0);
  plVar4 = (long *)FUN_00d2b6d8(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Viola__B_02beffe0);
  local_58 = (code *)((ulong)local_58._4_4_ << 0x20);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Viola_B_Damage");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_58 = FUN_00e6961c;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e6961c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed80,1,9);
  return;
}




void FUN_00e69630(undefined8 param_1)

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
  uVar2 = FUN_00d64d7c();
  lVar3 = FUN_00d4891c(0x3dcccccd,uVar2,1);
  uVar2 = FUN_00d31490(lVar3 + 0x10);
  FUN_00d9ca38(uVar2,FUN_00e68f90);
  plVar4 = (long *)FUN_00d2cf7c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Viola_TalentB_Enemy_DamageI_02bf2400);
  local_48[0] = 0x3e4ccccd;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e696f8(undefined8 param_1)

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
  uVar2 = FUN_00d64d7c();
  lVar3 = FUN_00d4891c(0x3dcccccd,uVar2,1);
  uVar2 = FUN_00d31490(lVar3 + 0x10);
  FUN_00d9ca38(uVar2,FUN_00e68ee0);
  plVar4 = (long *)FUN_00d2cf7c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Viola_TalentB_Ally_DamageDe_02bf2408);
  local_48[0] = 0x3e4ccccd;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e697c0(undefined8 param_1)

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
  FUN_00d4bbf8(uVar2,3);
  lVar3 = FUN_00d4bc24();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e69858;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x38))(plVar4,&local_48);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e69858(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed78,0,9);
  return;
}




void FUN_00e6986c(undefined8 param_1)

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
  FUN_00d4bbf8(uVar2,3);
  lVar3 = FUN_00d4bc24();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e69904;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x40))(plVar4,&local_48);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e69904(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed78,1,9);
  return;
}




void FUN_00e69918(void)

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
  lVar3 = FUN_00d4bc60(uVar2,"Amael_A_Damage");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38 = FUN_00e699a0;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e699a0(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed98,1,9);
  return;
}




void FUN_00e699b4(undefined8 param_1)

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
  local_48 = FUN_00e69a78;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,7,2,&local_48);
  uVar4 = FUN_00d6639c(param_1);
  lVar2 = FUN_00d4b23c(uVar4,PTR_s_Ability__Amael__B_02bf0088);
  uVar4 = FUN_00da4ee4(lVar2 + 0x10);
  uVar4 = FUN_00d986e0(uVar4,PTR_s_Ability__Amael__B_02bf0088);
  local_48 = FUN_00e69a8c;
  local_40 = 3;
  FUN_00d98704(uVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e69a78(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320eda0,0,9);
  return;
}




void FUN_00e69a8c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320eda0,1,9);
  return;
}




void FUN_00e69aa0(undefined8 param_1)

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
  local_48 = FUN_00e69b64;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,4,2,&local_48);
  uVar4 = FUN_00d6639c(param_1);
  lVar2 = FUN_00d4b23c(uVar4,PTR_s_Ability__Amael__C_02bf0090);
  uVar4 = FUN_00d2dea4(lVar2 + 0x10);
  local_48 = FUN_00e69b78;
  local_40 = 3;
  FUN_00d97d24(uVar4,PTR_s_Ability__Amael__C_02bf0090,&local_48,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e69b64(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320eda8,0,9);
  return;
}




void FUN_00e69b78(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320eda8,1,9);
  return;
}




void FUN_00e69b8c(undefined8 param_1)

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
  local_48 = FUN_00e69c6c;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xf,1,&local_48);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,5);
  uVar4 = FUN_00d4bc10();
  uVar4 = FUN_00d4bcf0(uVar4,1);
  lVar2 = FUN_00d4bc60(uVar4,"Karas_B_Damage");
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d39584(lVar2 + 0x10);
  local_48 = FUN_00e69c80;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e69c6c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320edb0,1,9);
  return;
}




void FUN_00e69c80(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320edb0,0,9);
  return;
}




void FUN_00e69c94(undefined8 param_1)

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
  local_48 = FUN_00e69d60;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,5,2,&local_48);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,4);
  uVar4 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc60(uVar4,"Karas_A_Damage");
  plVar3 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_48 = FUN_00e69d74;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e69d60(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320edb8,1,9);
  return;
}




void FUN_00e69d74(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320edb8,0,9);
  return;
}




void FUN_00e69d88(void)

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
  lVar3 = FUN_00d4bc60(uVar2,"Karas_C_Damage");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38 = FUN_00e69e10;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e69e10(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320edc0,0,9);
  return;
}




void FUN_00e69e24(undefined8 param_1)

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
  lVar3 = FUN_00d4bc60(uVar2,"Shin_A_Damage");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e69efc;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  uVar2 = FUN_00d6639c(param_1);
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Shin__A_02bf0130);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00e69f10;
  local_40 = 3;
  FUN_00d97d24(uVar2,"Shin_A",&local_48,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e69efc(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320edc8,0,9);
  return;
}




void FUN_00e69f10(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320edc8,1,9);
  return;
}




void FUN_00e69f24(undefined8 param_1)

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
  local_48 = FUN_00e6a068;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,5,2,&local_48);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,4);
  uVar4 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc60(uVar4,"Shin_B_Damage");
  plVar3 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_48 = FUN_00e6a07c;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_48);
  uVar4 = FUN_00d6639c(param_1);
  lVar2 = FUN_00d4b23c(uVar4,PTR_s_Ability__Shin__B_02bf0140);
  uVar4 = FUN_00da4ee4(lVar2 + 0x10);
  uVar4 = FUN_00d986e0(uVar4,PTR_s_Ability__Shin__B_02bf0140);
  local_48 = FUN_00e6a090;
  local_40 = 3;
  FUN_00d98704(uVar4,&local_48);
  uVar4 = FUN_00d6639c(param_1);
  lVar2 = FUN_00d4b23c(uVar4,PTR_s_Ability__Shin__B1_02bf0148);
  uVar4 = FUN_00da4ee4(lVar2 + 0x10);
  uVar4 = FUN_00d986e0(uVar4,PTR_s_Ability__Shin__B1_02bf0148);
  local_48 = FUN_00e6a090;
  local_40 = 3;
  FUN_00d98704(uVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

