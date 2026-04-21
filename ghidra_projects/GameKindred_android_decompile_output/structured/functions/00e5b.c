// functions/00e5b — 22 functions
#include "libGameKindred.h"




void FUN_00e5b0a0(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,0xc,0x19,0);
  return;
}




bool FUN_00e5b0b4(void)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d67b5c();
  return 0.5 <= fVar1;
}




void FUN_00e5b0d4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  FUN_00d67b04(0x3f000000);
  FUN_00d42ce8(param_1,0x1f,"Effect_Sleep","OverHead");
  uVar1 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar1,6);
  uVar1 = FUN_00d4bc24();
  uVar1 = FUN_00d4bc50(uVar1,0xc);
  uVar1 = FUN_00d4bcf8(uVar1,0x10);
  lVar2 = FUN_00d4bd2c(uVar1,FUN_00e5b0b4);
  FUN_00d2a320(lVar2 + 0x10);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2a160(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x38))();
  FUN_00d2a1b0(lVar2 + 0x10);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d29c34(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,4);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2779c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Idle");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00e5b1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))();
  return;
}




void FUN_00e5b1cc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64080();
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",2);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3f000000,uVar4,1);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE_PER_SEC",2);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x98))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_C3_DoT");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0,0x3f800000,0);
  local_48[0] = 0x3e4ccccd;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd8))(0x3dcccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5b354(void)

{
  FUN_00d42bd0(0x3f800000);
  return;
}




void FUN_00e5b35c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d657dc();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48 = FUN_00e5b4a8;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xf,2,&local_48);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48 = FUN_00e5b4bc;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x19,1,&local_48);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_C2_ATK_CDR_BOOST");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0,0);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3f000000);
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,&local_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd8))(0x3dcccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5b4a8(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,6,0x19,0);
  return;
}




void FUN_00e5b4bc(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,7,0x19,0);
  return;
}




void FUN_00e5b4d0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d29a18(lVar2 + 0x10);
  FUN_00d46cdc(uVar3,0x12);
  uVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_40,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d2a8bc();
  FUN_00d42654(auStack_40,uVar3);
  uVar3 = FUN_00d47c3c(uVar3,"CenterBody");
  FUN_00da2040(uVar3,"Effect_Viola_C1_Cleanse");
  FUN_00da210c(0,0,0);
  uVar3 = FUN_00da2058(0x3dcccccd);
  FUN_00da2070(uVar3,1);
  FUN_00d3e534();
  uVar3 = FUN_00d2aa68();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d3f914(uVar3,0xd);
  FUN_00d3e534();
  uVar3 = FUN_00d2a504();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d2a994();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d46fc8(uVar3,2);
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5b604(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e5b668;
  local_30 = 3;
  FUN_00d42a20(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5b668(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




undefined1  [16] FUN_00e5b67c(undefined8 param_1)

{
  ulong uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined8 uVar5;
  
  auVar3 = FUN_00d59f54(param_1,0,3,0x19,0);
  uVar5 = auVar3._8_8_;
  uVar4 = auVar3._0_8_;
  uVar1 = FUN_00d44be0(param_1,PTR_s_Buff_Amael_Talent_TalentA_02bf2410);
  if ((uVar1 & 1) != 0) {
    fVar2 = (float)FUN_00d5a3d0(param_1,DAT_0320ed98,0,9);
    uVar4 = (ulong)(uint)(auVar3._0_4_ * fVar2);
    uVar5 = 0;
  }
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = uVar4;
  return auVar3;
}




void FUN_00e5b6f4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67b78();
  uVar3 = FUN_00d9ea34();
  fVar5 = (float)FUN_00e5b67c(uVar2);
  thunk_FUN_00d9ff34(&local_50,PTR_s_Buff_Amael_A_Charging_02bf1bc0);
  uVar4 = FUN_00d6bbac(uVar3,local_50,&local_4c);
  if ((uVar4 & 1) == 0) {
    thunk_FUN_00d9ff34(local_58,PTR_s_Buff_Amael_A_Charge_Control_02bf1bc8);
    uVar4 = FUN_00d6bbac(uVar3,local_58[0],&local_4c);
    fVar6 = 0.0;
    if ((uVar4 & 1) != 0) {
      fVar6 = (float)FUN_00d6b9f8(0,uVar3,local_4c);
      fVar7 = (float)FUN_00d59f54(uVar2,0,4,0x19,0);
      fVar6 = fVar6 / (fVar7 - fVar5);
    }
  }
  else {
    fVar6 = (float)FUN_00d6b9f8(uVar3,local_4c);
    fVar6 = 1.0 - fVar6 / fVar5;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar6);
}




void FUN_00e5b7f8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Amael_A_Charging_02bf1bc0);
  local_68 = FUN_00e5b67c;
  local_60 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_68);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Amael_Ability_A_Charge");
  lVar2 = FUN_00d09310();
  FUN_00d0a6f4(*(undefined4 *)(lVar2 + 0x76c));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  uVar4 = FUN_00d45f10(lVar2);
  FUN_00d9886c(uVar4,PTR_s_Ability__Amael__A_02bf0078,PTR_s_Ability__Amael__A_Cancel_02bf0080);
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Idle","Ability01_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleCombat","Ability01_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleSheath","Ability01_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleBrush","Ability01_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Move","Ability01_Move");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStart","Ability01_Move_Start");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStop","Ability01_Move_Stop");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStartCombat","Ability01_Move_Start");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStopCombat","Ability01_Move_Stop");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveSheath","Ability01_Move");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveBrush","Ability01_Move");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStartBrush","Ability01_Move_Start");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStopBrush","Ability01_Move_Stop");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Sprint","Ability01_Move");
  lVar2 = FUN_00d64980(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Amael_A_Charging_02bf1bc0);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Amael_A_Charged_02bf1bd0);
  plVar3 = (long *)FUN_00e213ac(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Amael__A_02bf0078);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5bb40(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Amael_Ability01_Charge");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0,0);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LeftHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Amael_Ability01_Charge");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0,0);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_00d3bc68(lVar1);
  (**(code **)(*plVar2 + 0x48))();
  plVar2 = (long *)FUN_00d2df94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Amael_Ability_A_Charge");
  lVar1 = FUN_00d09310();
  FUN_00d0a6f4(*(undefined4 *)(lVar1 + 0x76c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_00d6624c(param_1);
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e5bc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Amael_A_Charged_02bf1bd0);
  return;
}




uint FUN_00e5bc98(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  FUN_00d426b0(*param_1);
  uVar2 = FUN_00d9ea34();
  uVar1 = FUN_00d6bbac(uVar2,DAT_031bcd94,0);
  return ~uVar1 & 1;
}




void FUN_00e5bccc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_00d63f30();
  lVar1 = FUN_00d29e8c(lVar1 + 0x10);
  lVar2 = FUN_00d29edc(lVar1 + 0x10);
  *(code **)(lVar2 + 8) = FUN_00e5bc98;
  FUN_00d2a320(lVar1 + 0x88);
  lVar1 = FUN_00d65010(param_1);
  lVar1 = lVar1 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Amael_Ability01_Charged");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LeftHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Amael_Ability01_Charged");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d3bc68(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00e5bde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))();
  return;
}




void FUN_00e5bdec(undefined8 param_1)

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
  local_38 = FUN_00e5be78;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,4,1,&local_38);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5be78(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00e5be84(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d42ce8(param_1,0x1f,"Effect_Stunned_buff","OverHead");
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d29c34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e5bed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,2);
  return;
}




void FUN_00e5bed4(void)

{
  return;
}




void FUN_00e5bed8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d66d04(param_1,0x80,1);
  lVar3 = FUN_00d65a7c(param_1);
  plVar4 = (long *)FUN_00d39930(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  local_48._0_4_ = 0;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  lVar3 = FUN_00d65fac(param_1);
  plVar4 = (long *)FUN_00d39930(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  local_48 = (code *)((ulong)local_48._4_4_ << 0x20);
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d3bc68(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x38))();
  lVar3 = FUN_00d660fc(param_1);
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar5 = FUN_00d2a370(lVar3 + 0x10);
  puVar2 = PTR_s_Buff_Amael_EmpowerMeter_02bf1bf0;
  *(undefined4 *)(lVar5 + 0x10) = 2;
  *(undefined **)(lVar5 + 8) = puVar2;
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x88);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Amael_PowerPoseDmg_02bf1bd8);
  local_48 = FUN_00e5c07c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x88);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Amael_PowerReady_02bf1be8);
  plVar4 = (long *)FUN_00d2a160(lVar3 + 0xa0);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Amael_PowerPoseDmg_02bf1bd8);
  plVar4 = (long *)FUN_00d2a160(lVar3 + 0xa0);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Amael_PowerReady_02bf1be8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

