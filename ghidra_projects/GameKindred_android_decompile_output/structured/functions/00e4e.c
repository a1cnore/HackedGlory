// functions/00e4e — 30 functions
#include "libGameKindred.h"




void FUN_00e4e100(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  FUN_00d67b04(0x3e4ccccd);
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_initial_facing_02bf1538;
  uVar3 = FUN_00e6a474(PTR_s_initial_facing_02bf1538);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  (**(code **)(*(long *)(lVar4 + 0x100) + 8))(lVar4 + 0x100,uVar3);
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onBuffIntervalName_02bed520;
  uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e4de60;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




void FUN_00e4e1d4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d65548();
  lVar3 = FUN_00d4891c(0x3dcccccd,uVar2,0);
  uVar2 = FUN_00d29f44(lVar3 + 0x10);
  local_38[0] = 0x3f400000;
  local_30 = 1;
  FUN_00d47690(uVar2,2,local_38);
  FUN_00d476e0(0,0x3f800000);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4e26c(undefined8 param_1)

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
  local_38 = FUN_00e4e2ec;
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




void FUN_00e4e2ec(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00e4e2f8(void)

{
  return;
}




void FUN_00e4e2fc(void)

{
  return;
}




float FUN_00e4e300(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d426b0(*param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,2,1,5,0);
  fVar3 = (float)FUN_00d59f54(uVar1,2,7,0x19,0);
  return fVar2 * fVar3;
}




void FUN_00e4e360(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,1,5,0);
  return;
}




void FUN_00e4e374(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_48 = FUN_00e4e360;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,0,2);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_48 = FUN_00e4e300;
  local_40 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,0,2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4e464(void)

{
  return;
}




void FUN_00e4e468(void)

{
  return;
}




void FUN_00e4e46c(void)

{
  return;
}




void FUN_00e4e470(void)

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
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ball_PFX");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_38[0] = 0x40400000;
  local_30 = 1;
  (**(code **)(*plVar3 + 0xd0))(plVar3,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4e524(void)

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
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ball_PFX");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_38[0] = 0x40400000;
  local_30 = 1;
  (**(code **)(*plVar3 + 0xd0))(plVar3,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4e5d8(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b78();
  uVar2 = FUN_00d9ea34();
  uVar3 = FUN_00d6bbac(uVar2,DAT_031bbfd4,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_00d6bbac(uVar2,DAT_031bbfd8,&local_3c);
    fVar4 = 0.0;
    if ((uVar3 & 1) != 0) {
      fVar4 = (float)FUN_00d6b9f8(0,uVar2,local_3c);
      fVar5 = (float)FUN_00d6b9b8(uVar2,local_3c);
      fVar4 = 1.0 - fVar4 / fVar5;
    }
  }
  else {
    fVar4 = 1.0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar4);
}




void FUN_00e4e68c(undefined8 param_1)

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
  FUN_00d67dcc(param_1,FUN_00e4e5d8);
  lVar2 = FUN_00d65a7c(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Anka_Perk_Ready_02bf15a8);
  lVar2 = FUN_00d65fac(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Anka_Perk_Ready_02bf15a8);
  uVar4 = FUN_00d63b38(param_1);
  FUN_00d4b7b0(uVar4,1);
  lVar2 = FUN_00d4b7d8();
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Anka_Perk_Ready_02bf15a8);
  plVar3 = (long *)FUN_00d2b6d8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Anka__A_02befac0);
  local_48[0] = 0;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4e794(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2a160(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Anka_Perk_Cooldown_02bf15b0);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RDagger");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Anka_Perk_Buff");
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LDagger");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Anka_Perk_Buff");
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Anka_Perk_Cooldown_02bf15b0);
  local_58 = FUN_00e4e8d8;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4e8d8(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,3);
  return;
}




void FUN_00e4e8e4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2a160(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Anka_Perk_Ready_02bf15a8);
  lVar1 = FUN_00d64980(param_1);
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e4e938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Anka_Perk_Ready_02bf15a8);
  return;
}




void FUN_00e4e93c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d64080();
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_00e227e4(lVar2);
  *(undefined1 *)(lVar3 + 0x30) = 1;
  FUN_00d9c960(lVar3,PTR_s_Buff_Anka_A_DaggerMark_02bf15b8);
  FUN_00d9c2f4();
  FUN_00d9c324();
  plVar4 = (long *)FUN_00d2cfcc(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Anka_A_DaggerMark_02bf15b8);
  plVar4 = (long *)FUN_00e4c798(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Anka_A_CanBlink_02bf15c0);
  local_48 = FUN_00e4eaa4;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  lVar2 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"OverHead");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Anka_A_Target");
  (**(code **)(*plVar4 + 0x88))(plVar4,0);
  plVar4 = (long *)FUN_00d2887c(lVar2 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_RevealToBestowersTeamTrueSi_02bebb08);
  lVar2 = FUN_00d64980(param_1);
  FUN_00e0c91c(lVar2 + 0x10);
  plVar4 = (long *)FUN_00d2cfcc(lVar2 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Anka_A_CanBlink_02bf15c0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4eaa4(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,6,0x19,0);
  return;
}




void FUN_00e4eab8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d45f10(lVar1 + 0x10);
  FUN_00d9886c(uVar2,PTR_s_Ability__Anka__A_02befac0,PTR_s_Ability__Anka__A2_02befac8);
  lVar1 = FUN_00d64314(param_1);
  FUN_00e255b0(lVar1 + 0x10);
  return;
}




void FUN_00e4eb08(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  
  uVar1 = FUN_00d426b0(*param_1);
  fVar4 = (float)FUN_00d59f54(uVar1,0,3,0x19,0);
  *param_2 = fVar4;
  uVar2 = FUN_00d67b84(*param_1);
  uVar3 = FUN_00d44008(uVar2,PTR_s_Buff_Anka_Talent_TalentC_02bf21e0);
  if ((uVar3 & 1) != 0) {
    fVar4 = (float)FUN_00d5a3d0(uVar1,DAT_0320ec90,1,9);
    *param_2 = fVar4 + *param_2;
  }
  return;
}




void FUN_00e4eb98(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00e4ebac(undefined8 param_1)

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
  local_38 = FUN_00e4eb98;
  local_30 = 3;
  FUN_00d47690(uVar2,1,&local_38);
  FUN_00d476e0(0,0x3f800000);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4ec48(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x00e4ec88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Anka_A2_End");
  return;
}




void FUN_00e4ec8c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Damage",2);
  plVar3 = (long *)FUN_00d2cc5c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Anka_Ability_B_Impact_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Anka_Ability_B_Impact_2");
  lVar4 = FUN_00d09310();
  FUN_00d0a25c(*(undefined4 *)(lVar4 + 0x4e4));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Anka_B_Hit");
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Damage",2);
  local_58 = FUN_00e4ee0c;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x88))(plVar3,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4ee0c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00e4ee20(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2a160(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x50))();
  lVar1 = FUN_00d65010(param_1);
  lVar1 = lVar1 + 0x10;
  FUN_00d2def4(lVar1);
  FUN_00d29fe4(lVar1);
  uVar3 = FUN_00d29c84(lVar1);
  FUN_00d46b64(uVar3,0x1700);
  uVar3 = FUN_00d29a18(lVar1);
  FUN_00d46cdc(uVar3,0x11);
  return;
}




void FUN_00e4ee8c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"INITIAL_DAMAGE",3);
  plVar3 = (long *)FUN_00d2cc5c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Anka_Ability_C_Impact_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Anka_Ability_C_Impact_2");
  lVar4 = FUN_00d09310();
  FUN_00d0a25c(*(undefined4 *)(lVar4 + 0x4e8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Anka_C_Clone_Hit");
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"INITIAL_DAMAGE",3);
  local_58 = FUN_00e4f000;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x88))(plVar3,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

