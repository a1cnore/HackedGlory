// functions/00dd1 — 10 functions
#include "libGameKindred.h"




void FUN_00dd1248(undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  FUN_00cfb05c(auStack_68);
  uVar2 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3f4ccccd);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  plVar3 = (long *)FUN_00cfb134(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3ecccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3f000000);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  FUN_00cf99dc(auStack_68);
  uVar2 = FUN_00cfa00c(auStack_68);
  FUN_00cf6bb0(uVar2,param_5);
  if (0 < (int)param_4) {
    uVar4 = FUN_00cfab94(auStack_68);
    uVar6 = *param_3;
    lVar5 = FUN_00d09310();
    uVar2 = FUN_00d09638(*(undefined4 *)(lVar5 + 0x108));
    FUN_00cf4164(0x3f800000,uVar2,uVar4,uVar6,0,0,0xffffffff,0,1);
    if (param_4 != 1) {
      lVar5 = (ulong)param_4 - 1;
      do {
        param_3 = param_3 + 1;
        FUN_00cf41bc(uVar4,*param_3);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  uVar2 = FUN_00cfaa74(auStack_68);
  FUN_00cf32cc(0,uVar2,param_2,1,0,1,0,0);
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd1420(void)

{
  FUN_00dd1248("Attack","Effect_Kraken_Attack2_Impact",
               &PTR_s_build___Sounds_Kraken_assetbundl_02bef040,3,FUN_00cfb6d0);
  return;
}




void FUN_00dd1448(void)

{
  FUN_00dd1248("Attack_Alt","Effect_Kraken_Attack2_Impact",
               &PTR_s_build___Sounds_Kraken_assetbundl_02bef040,3,FUN_00cfb6d0);
  return;
}




void FUN_00dd1470(void)

{
  FUN_00dd1248("Attack_Crit","Effect_Kraken_Attack2_Impact",
               &PTR_s_build___Sounds_Kraken_assetbundl_02bef040,3,FUN_00cfb8b4);
  return;
}




void FUN_00dd1498(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x40351eb8);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfb134(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3ecccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3e99999a);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_Kraken_Death",1,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfb134(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3ecccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3e99999a);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3f99999a);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfb134(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3e99999a);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3fd47ae1);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3fee147b);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfb134(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3f4ccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3f4ccccd);
  (**(code **)(*plVar3 + 0x20))(0x41a00000);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3fee147b);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd1730(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"VictoryRoar",1,1,0,0);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3fcccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f4ccccd,uVar2,
               "build://Sounds/Kraken.assetbundle/kraken_endgame_roar1.mp3",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40900000);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f000000,uVar2,
               "build://Sounds/Kraken.assetbundle/kraken_endgame_roar2.mp3",0,0,0xffffffff,0,1);
  FUN_00cf9eec(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd1868(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Spawn",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3fe66666);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f4ccccd,uVar2,
               "build://Sounds/Kraken.assetbundle/kraken_captured_1stroar.mp3",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40800000);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f4ccccd,uVar2,
               "build://Sounds/Kraken.assetbundle/kraken_captured_2ndroar.mp3",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40200000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd19c8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf3428(0,uVar2,"Effect_Hero009_Swipes",1,"Bone_RightHand",0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d0968c(*(undefined4 *)(lVar3 + 0x110));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Krul_basic_attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Krul_basic_attack_2");
  FUN_00cf41bc(uVar2,"Krul_basic_attack_3");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e947ae1);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Hero009_Attack",1,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d0968c(*(undefined4 *)(lVar3 + 0x110));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Krul_attack_impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Krul_attack_impact_2");
  FUN_00cf41bc(uVar2,"Krul_attack_impact_3");
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,FUN_00cfb6d0);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd1bd4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"AltAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf3428(0,uVar2,"Effect_Hero009_Swipes",1,"Bone_LeftHand",0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d0968c(*(undefined4 *)(lVar3 + 0x110));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Krul_basic_attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Krul_basic_attack_2");
  FUN_00cf41bc(uVar2,"Krul_basic_attack_3");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e947ae1);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Hero009_Attack_Alt",1,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d0968c(*(undefined4 *)(lVar3 + 0x110));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Krul_attack_impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Krul_attack_impact_2");
  FUN_00cf41bc(uVar2,"Krul_attack_impact_3");
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,FUN_00cfb6d0);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd1de0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"CritAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf3428(0,uVar2,"Effect_Hero009_Swipes",1,"Bone_RightHand",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf3428(0,uVar2,"Effect_Hero009_Swipes",1,"Bone_LeftHand",0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d0968c(*(undefined4 *)(lVar3 + 0x110));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Krul_crit_attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Krul_crit_attack_2");
  FUN_00cf41bc(uVar2,"Krul_crit_attack_3");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e947ae1);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Hero009_Attack_Crit",1,0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf3358(0x3f800000,uVar2,"Effect_Hero009_Attack_Crit_Shot",0,"CritShot",0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d0968c(*(undefined4 *)(lVar3 + 0x110));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"Krul_attack_impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Krul_attack_impact_2");
  FUN_00cf41bc(uVar2,"Krul_attack_impact_3");
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,FUN_00cfb8b4);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

