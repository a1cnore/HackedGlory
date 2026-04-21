// functions/00db1 — 12 functions
#include "libGameKindred.h"




void FUN_00db13cc(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,7,0x19,0);
  return;
}




void FUN_00db13e0(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,0xb,0x19,0);
  return;
}




void FUN_00db13f4(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  plVar2 = (long *)FUN_00cfb1c4(auStack_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*Baron_C_Warning*",0);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_00e60680);
  uVar3 = FUN_00cfaa74(auStack_38);
  FUN_00cf3358(0x3e800000,uVar3,"Effect_Baron_C_Cast",1,"CenterBody",0,1,0,0);
  uVar4 = FUN_00cfab94(auStack_38);
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d09cc8(*(undefined4 *)(lVar5 + 0x344));
  FUN_00cf40b8(0x3f800000,uVar3,uVar4,"Sound_Baron_Ability_C_Targeting",0,0,0xffffffff,0,1);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00db14f8(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  lVar2 = FUN_00d50ef8();
  lVar3 = *(long *)(lVar2 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  uVar5 = 2;
  iVar1 = FUN_00d53990(lVar3,2);
  if (iVar1 != 2) {
    lVar3 = *(long *)(lVar2 + 0x18);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    uVar4 = FUN_00d6bbac(lVar3,DAT_031b8908,0);
    uVar5 = 2;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
  }
  return uVar5;
}




void FUN_00db15a0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfad44(auStack_38);
  FUN_00cf2ec0(uVar2,FUN_00db14f8);
  FUN_00cf9ea4(auStack_38);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cf9ab4(auStack_38);
  FUN_00cf44e8(0x40800000,uVar2,PTR_s_Buff_Withdraw_02beb458,1,0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db1640(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ee66666;
  return;
}




void FUN_00db1650(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,uint param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [64];
  undefined4 local_78;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  lVar3 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  FUN_00cfb05c(auStack_c8);
  uVar4 = FUN_00cfa9e4(auStack_c8);
  FUN_00cf3048(uVar4,param_3,0,1,0,"AttackToIdle");
  uVar4 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(param_2);
  FUN_00cf7578(uVar4,0);
  if (0 < (int)param_6) {
    uVar4 = FUN_00cfab94(auStack_c8);
    FUN_00cf4164(0x3f800000,0x3f800000,uVar4,*param_5,0,0,0xffffffff,0,1);
    if (param_6 != 1) {
      lVar3 = (ulong)param_6 - 1;
      do {
        param_5 = param_5 + 1;
        FUN_00cf41bc(uVar4,*param_5);
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  uVar4 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(param_1 - (float)param_2);
  FUN_00cf7578(uVar4,0);
  plVar5 = (long *)FUN_00cfb134(auStack_c8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(0x3ecccccd);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3f000000);
  (**(code **)(*plVar5 + 0x20))(0x41700000);
  FUN_00cf99dc(auStack_c8);
  FUN_00d4d9e8(auStack_b8);
  FUN_00d4dabc(auStack_b8,0x40000);
  FUN_00d4daf4(auStack_b8,0,1,0,0);
  FUN_00d4dba0(0x42f00000,auStack_b8);
  FUN_00d4dcdc(auStack_b8,1);
  FUN_00d4d354(auStack_b8,0);
  local_78 = 0x3f266666;
  uVar4 = FUN_00cfaf84(auStack_c8);
  FUN_00cf5460(0x40a00000,uVar4,auStack_b8,0,1,1,0);
  puVar2 = PTR_s_Buff_SlowDecayingUsingBuffVar_02beb4c8;
  uVar4 = FUN_00cf9ab4(auStack_c8);
  uVar4 = FUN_00cf44e8(0x40200000,uVar4,puVar2,1,0);
  FUN_00cf45d4(uVar4,FUN_00db1640);
  uVar4 = FUN_00cfa00c(auStack_c8);
  FUN_00cf6bb0(uVar4,param_7);
  FUN_00da0fa4(0x40400000,auStack_c8,PTR_s_Buff_MortalWound_02beb418);
  uVar4 = FUN_00cfaa74(auStack_c8);
  FUN_00cf3358(0,uVar4,param_4,1,"CenterBody",0,1,0,0);
  uVar4 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3f4ccccd);
  FUN_00cf7578(uVar4,0);
  uVar4 = FUN_00cfab94(auStack_c8);
  FUN_00cf4164(0x3f800000,0x3f333333,uVar4,
               "build://Sounds/5v5/SFX/sfx_blackclaw_post_basic_attack_roar.mp3",0,0,0xffffffff,0,1)
  ;
  uVar4 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar4,0);
  FUN_00cfb0a4(auStack_c8);
  lVar3 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db19a0(void)

{
  FUN_00db1650(0x3f800000,0x3f000000,"Attack","Effect_Blackclaw_Cleave",
               &PTR_s_build___Sounds_5v5_SFX_sfx_black_02bee658,3,FUN_00cfb6d0,0);
  return;
}




void FUN_00db19d4(void)

{
  FUN_00db1650(0x3f800000,0x3f000000,"Attack_Alt","Effect_Blackclaw_Cleave_Alt",
               &PTR_s_build___Sounds_5v5_SFX_sfx_black_02bee658,3,FUN_00cfb6d0,0);
  return;
}




void FUN_00db1a08(void)

{
  FUN_00db1650(0x3f800000,0x3f000000,"Attack_Crit","Effect_Blackclaw_Cleave",
               &PTR_s_build___Sounds_5v5_SFX_sfx_black_02bee658,3,FUN_00cfb8b4,0);
  return;
}




void FUN_00db1a3c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_58);
  uVar3 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar3,"FireBreath",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_58);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar3,
               "build://Sounds/5v5/SFX/sfx_blackclaw_breath_attack_in.mp3",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x400eb852);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfab94(auStack_58);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar3,
               "build://Sounds/5v5/SFX/sfx_blackclaw_breath_attack_out.mp3",0,0,0xffffffff,0,1);
  plVar4 = (long *)FUN_00cfab04(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Blackclaw_BreathSelf");
  local_48[0] = 0x3fb33333;
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,local_48);
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3b,"Mouth");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3a,"Mouth");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3b,"Mouth");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3a,"Mouth");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3b,"Mouth");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3a,"Mouth");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3b,"Mouth");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3a,"Mouth");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3b,"Mouth");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3a,"Mouth");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3b,"Mouth");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3a,"Mouth");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3b,"Mouth");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3a,"Mouth");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3b,"Mouth");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3a,"Mouth");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3b,"Mouth");
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,0x3a,"Mouth");
  FUN_00cfb0a4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db1e48(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,uint param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_68);
  uVar3 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar3,param_3,0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(param_2);
  FUN_00cf7578(uVar3,0);
  if (0 < (int)param_6) {
    uVar3 = FUN_00cfab94(auStack_68);
    FUN_00cf4164(0x3f800000,0x3f800000,uVar3,*param_5,0,0,0xffffffff,0,1);
    if (param_6 != 1) {
      lVar2 = (ulong)param_6 - 1;
      do {
        param_5 = param_5 + 1;
        FUN_00cf41bc(uVar3,*param_5);
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(param_1 - (float)param_2);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfb134(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3ecccccd);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f000000);
  (**(code **)(*plVar4 + 0x20))(0x41700000);
  FUN_00cf99dc(auStack_68);
  uVar3 = FUN_00cfa00c(auStack_68);
  FUN_00cf6bb0(uVar3,param_7);
  uVar3 = FUN_00cfaa74(auStack_68);
  FUN_00cf3358(0,uVar3,param_4,1,"CenterBody",0,1,0,0);
  FUN_00cf9eec(auStack_68);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb0a4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

