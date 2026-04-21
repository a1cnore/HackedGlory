// functions/00de1 — 15 functions
#include "libGameKindred.h"




void FUN_00de11f8(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  plVar2 = (long *)FUN_00cf9d3c(auStack_38);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x50))();
  (**(code **)*puVar3)(puVar3,PTR_s_Ability__SAW__B_02bef4d8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_38);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_SAW_SuppressingFire_SoundFx_02bf0ef8);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de1290(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b3c(uVar2,1);
  FUN_00cfa6cc(auStack_38);
  plVar3 = (long *)FUN_00cf9dcc(auStack_38);
  (**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_SAW_RoadieRun_02bf0ee8);
  FUN_00cfb05c(auStack_38);
  plVar3 = (long *)FUN_00cfaa2c(auStack_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"ExplosiveTippedAttack");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  uVar4 = FUN_00cfab94(auStack_38);
  lVar5 = FUN_00d09310();
  uVar2 = FUN_00d095e4(*(undefined4 *)(lVar5 + 0xf8));
  FUN_00cf4164(0x3f800000,uVar2,uVar4,"Sound_SAW_ability_3",0,0,0xffffffff,0,1);
  plVar3 = (long *)FUN_00cfab04(auStack_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,"GunMuzzleTip_Attack");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_SAW_MuzzleFlash3");
  uVar2 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar2,0x67,"GunMuzzleTip_Attack");
  lVar5 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de1414(void)

{
  FUN_00cfc038(PTR_s_Buff_SAW_Withdraw_02bf0f10);
  return;
}




void FUN_00de1424(void)

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
  FUN_00cfb05c(auStack_38);
  plVar2 = (long *)FUN_00cfaa2c(auStack_38);
  (**(code **)(*plVar2 + 0x58))(plVar2,"Attack");
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7570(uVar3,FUN_00cf76f0);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  uVar4 = FUN_00cfab94(auStack_38);
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d09788(*(undefined4 *)(lVar5 + 0x150));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Skaarf_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"Sound_Skaarf_Attack_2");
  FUN_00cf41bc(uVar4,"Sound_Skaarf_Attack_3");
  uVar3 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar3,0x68,"Mouth");
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de1544(void)

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
  FUN_00cfb05c(auStack_38);
  plVar2 = (long *)FUN_00cfaa2c(auStack_38);
  (**(code **)(*plVar2 + 0x58))(plVar2,"AltAttack");
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7570(uVar3,FUN_00cf76f0);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  uVar4 = FUN_00cfab94(auStack_38);
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d09788(*(undefined4 *)(lVar5 + 0x150));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Skaarf_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"Sound_Skaarf_Attack_2");
  FUN_00cf41bc(uVar4,"Sound_Skaarf_Attack_3");
  uVar3 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar3,0x68,"Mouth");
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de1664(void)

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
  FUN_00cfb05c(auStack_38);
  plVar2 = (long *)FUN_00cfaa2c(auStack_38);
  (**(code **)(*plVar2 + 0x58))(plVar2,"CritAttack");
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7570(uVar3,FUN_00cf76f0);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  uVar4 = FUN_00cfab94(auStack_38);
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d09788(*(undefined4 *)(lVar5 + 0x150));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Skaarf_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"Sound_Skaarf_Attack_2");
  FUN_00cf41bc(uVar4,"Sound_Skaarf_Attack_3");
  uVar3 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar3,0x69,"Mouth");
  FUN_00cfb0a4(auStack_38);
  uVar3 = FUN_00cfaa74(auStack_38);
  FUN_00cf3428(0x3fc00000,uVar3,"Effect_Hero010_BurningMouth",1,"Bone_Jaw",0,1,0,0);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de17b8(void)

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
  FUN_00cfb05c(auStack_38);
  plVar2 = (long *)FUN_00cfaa2c(auStack_38);
  (**(code **)(*plVar2 + 0x58))(plVar2,"CritAttack");
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7570(uVar3,FUN_00cf76f0);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  uVar4 = FUN_00cfab94(auStack_38);
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d09788(*(undefined4 *)(lVar5 + 0x150));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Skaarf_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"Sound_Skaarf_Attack_2");
  FUN_00cf41bc(uVar4,"Sound_Skaarf_Attack_3");
  uVar3 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar3,0x6a,"Mouth");
  FUN_00cfb0a4(auStack_38);
  uVar3 = FUN_00cfaa74(auStack_38);
  FUN_00cf3428(0x3fc00000,uVar3,"Effect_Hero010_BurningMouth",1,"Bone_Jaw",0,1,0,0);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de190c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac534,2,9);
  return;
}




void FUN_00de1924(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d50ef8();
  uVar2 = FUN_00d5a3d0(uVar1,DAT_031ac534,2,9);
  *param_2 = uVar2;
  return;
}




void FUN_00de1960(undefined8 param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d50ef8();
  fVar2 = (float)FUN_00d5a3d0(uVar1,DAT_031ac534,2,9);
  *param_2 = -fVar2;
  return;
}




void FUN_00de19a0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  FUN_00cfa6cc(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Ability01",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09788(*(undefined4 *)(lVar4 + 0x154));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Skaarf_ability_A",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(auStack_48);
  uVar2 = FUN_00cfcad8(uVar2,0x6b,"CenterBody");
  FUN_00cfcba8(uVar2,1);
  lVar4 = FUN_00cf9f7c(auStack_48);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Skaarf_Talent_Splitfire_02bee168;
  uVar2 = FUN_00cfb17c(lVar4 + 0xb0);
  uVar2 = FUN_00cfcad8(uVar2,0x6b,"CenterBody");
  uVar2 = FUN_00cfcba8(uVar2,1);
  FUN_00cfcbcc(uVar2,FUN_00de1924);
  uVar2 = FUN_00cfb17c(lVar4 + 0xb0);
  uVar2 = FUN_00cfcad8(uVar2,0x6b,"CenterBody");
  uVar2 = FUN_00cfcba8(uVar2,1);
  FUN_00cfcbcc(uVar2,FUN_00de1960);
  lVar4 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de1b48(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfb05c(auStack_38);
  FUN_00cfa6cc(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Ability02",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar2,"Effect_Hero010_B_Spit",0,0,1,0,0);
  uVar3 = FUN_00cfab94(auStack_38);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09788(*(undefined4 *)(lVar4 + 0x158));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sounds_Skaarf_ability_B",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar2,0);
  plVar5 = (long *)FUN_00cfb1c4(auStack_38);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s__SkaarfGoopPool__02bf01b0,1);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_00e60680);
  lVar4 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de1cb0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar3,"Ability03_Inhale",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cf98bc(auStack_48);
  uVar3 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0x3fc00000,uVar3,PTR_s_Buff_Revealed_02bebaf8,1,0);
  uVar3 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0x40a00000,uVar3,PTR_s_Buff_Skaarf_Ult_FortifiedHealth_02bf0f80,1,0);
  uVar3 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0x3fc00000,uVar3,PTR_s_Buff_Skaarf_Suck_02bf0f78,1,0);
  FUN_00cf9eec(auStack_48);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3fc00000);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfb134(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3f19999a);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f4ccccd);
  (**(code **)(*plVar4 + 0x20))(0x41700000);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de1e74(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cf9ab4(auStack_38);
  FUN_00cf44e8(0x3fc00000,uVar2,PTR_s_Buff_Skaarf_Ult_FortifiedHealth_02bf0f80,1,0);
  uVar2 = FUN_00cf9ab4(auStack_38);
  FUN_00cf44e8(0x3fc00000,uVar2,PTR_s_Buff_Skaarf_Blow_02bf0f68,1,0);
  uVar2 = FUN_00cf9ab4(auStack_38);
  FUN_00cf44e8(0x3fc00000,uVar2,PTR_s_Buff_Skaarf_Blow_SpeedBoost_02bf0f70,1,0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de1f4c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar2,"Effect_Death",1,0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar2,"Effect_Hero010_DeathPuff",1,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3fee147b);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

