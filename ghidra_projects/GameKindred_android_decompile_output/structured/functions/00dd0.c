// functions/00dd0 — 12 functions
#include "libGameKindred.h"




void FUN_00dd0020(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_48 [16];
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfb3bc(auStack_48);
  FUN_00cf883c(uVar2,PTR_s_Ability__Koshka__Fakeout_02beefe8,PTR_s_Ability__Koshka__A_02beefb0);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfa8c4(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Ability__Koshka__C_02beefc0);
  local_38[0] = 0x40c00000;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,local_38);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd00f4(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f4ccccd);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  plVar3 = (long *)FUN_00cfb134(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3ecccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3f000000);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,FUN_00cfb6d0);
  uVar4 = FUN_00cfab94(auStack_48);
  lVar5 = FUN_00d09310();
  uVar2 = FUN_00d09638(*(undefined4 *)(lVar5 + 0x108));
  FUN_00cf4164(0x3f800000,uVar2,uVar4,"build://Sounds/Kraken.assetbundle/kraken_hits_turret_01.mp3",
               0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"build://Sounds/Kraken.assetbundle/kraken_hits_turret_02.mp3");
  FUN_00cf41bc(uVar4,"build://Sounds/Kraken.assetbundle/kraken_hits_turret_03.mp3");
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Kraken_Attack2_Impact",1,0,1,0,0);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd02a4(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack_Alt",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3fa00000);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  plVar3 = (long *)FUN_00cfb134(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3ecccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3f000000);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,FUN_00cfb6d0);
  uVar4 = FUN_00cfab94(auStack_48);
  lVar5 = FUN_00d09310();
  uVar2 = FUN_00d09638(*(undefined4 *)(lVar5 + 0x108));
  FUN_00cf4164(0x3f800000,uVar2,uVar4,"build://Sounds/Kraken.assetbundle/kraken_hits_turret_01.mp3",
               0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"build://Sounds/Kraken.assetbundle/kraken_hits_turret_02.mp3");
  FUN_00cf41bc(uVar4,"build://Sounds/Kraken.assetbundle/kraken_hits_turret_03.mp3");
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Kraken_Attack2_Alt_Impact",1,0,1,0,0);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd0450(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack_Crit",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f800000);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  plVar3 = (long *)FUN_00cfb134(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3ecccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3f000000);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,FUN_00cfb6d0);
  uVar2 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d09638(*(undefined4 *)(lVar4 + 0x108));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"build://Sounds/Kraken.assetbundle/kraken_hits_turret_01.mp3",
               0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"build://Sounds/Kraken.assetbundle/kraken_hits_turret_02.mp3");
  FUN_00cf41bc(uVar2,"build://Sounds/Kraken.assetbundle/kraken_hits_turret_03.mp3");
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Kraken_Attack2_Crit",1,0,1,0,0);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd0608(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d5048c();
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1b0) + 1.0) *
          (*(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0));
  if (DAT_031b12f0 <= fVar2) {
    fVar2 = DAT_031b12f0;
  }
  fVar3 = DAT_031b1230;
  if (DAT_031b1230 <= fVar2) {
    fVar3 = fVar2;
  }
  *param_3 = fVar3;
  *param_5 = 3;
  *param_4 = 0;
  return;
}




void FUN_00dd069c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_38);
  uVar3 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar3,"Attack",0,1,0,0);
  uVar4 = FUN_00cfab94(auStack_38);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09638(*(undefined4 *)(lVar2 + 0x104));
  FUN_00cf4164(0x3ecccccd,uVar3,uVar4,
               "build://Sounds/Kraken.assetbundle/kraken_ovrhnd_attack_vo_01.mp3",0,0,0xffffffff,0,1
              );
  FUN_00cf41bc(uVar4,"build://Sounds/Kraken.assetbundle/kraken_ovrhnd_attack_vo_02.mp3");
  FUN_00cf41bc(uVar4,"build://Sounds/Kraken.assetbundle/kraken_ovrhnd_attack_vo_03.mp3");
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f8ccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cf99dc(auStack_38);
  uVar3 = FUN_00cfa00c(auStack_38);
  FUN_00cf6bb0(uVar3,FUN_00dd0608);
  uVar4 = FUN_00cfab94(auStack_38);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09638(*(undefined4 *)(lVar2 + 0x104));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"build://Sounds/Kraken.assetbundle/kraken_ftstp_01.mp3",0,0,
               0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"build://Sounds/Kraken.assetbundle/kraken_ftstp_02.mp3");
  FUN_00cf41bc(uVar4,"build://Sounds/Kraken.assetbundle/kraken_ftstp_03.mp3");
  FUN_00cf41bc(uVar4,"build://Sounds/Kraken.assetbundle/kraken_ftstp_04.mp3");
  uVar3 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar3,"Effect_Kraken_Attack_Impact",1,0,1,0,0);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd0884(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_38);
  uVar3 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar3,"AltAttack",0,1,0,0);
  uVar4 = FUN_00cfab94(auStack_38);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09638(*(undefined4 *)(lVar2 + 0x104));
  FUN_00cf4164(0x3ecccccd,uVar3,uVar4,
               "build://Sounds/Kraken.assetbundle/kraken_ovrhnd_attack_vo_01.mp3",0,0,0xffffffff,0,1
              );
  FUN_00cf41bc(uVar4,"build://Sounds/Kraken.assetbundle/kraken_ovrhnd_attack_vo_02.mp3");
  FUN_00cf41bc(uVar4,"build://Sounds/Kraken.assetbundle/kraken_ovrhnd_attack_vo_03.mp3");
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f99999a);
  FUN_00cf7578(uVar3,0);
  FUN_00cf99dc(auStack_38);
  uVar3 = FUN_00cfa00c(auStack_38);
  FUN_00cf6bb0(uVar3,FUN_00dd0608);
  uVar3 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar3,"Effect_Kraken_Attack_Alt_Impact",1,0,1,0,0);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd09f8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_38);
  uVar3 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar3,"CritAttack",0,1,0,0);
  uVar4 = FUN_00cfab94(auStack_38);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09638(*(undefined4 *)(lVar2 + 0x104));
  FUN_00cf4164(0x3ecccccd,uVar3,uVar4,
               "build://Sounds/Kraken.assetbundle/kraken_ovrhnd_attack_vo_01.mp3",0,0,0xffffffff,0,1
              );
  FUN_00cf41bc(uVar4,"build://Sounds/Kraken.assetbundle/kraken_ovrhnd_attack_vo_02.mp3");
  FUN_00cf41bc(uVar4,"build://Sounds/Kraken.assetbundle/kraken_ovrhnd_attack_vo_03.mp3");
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f8ccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cf99dc(auStack_38);
  uVar3 = FUN_00cfa00c(auStack_38);
  FUN_00cf6bb0(uVar3,FUN_00dd0608);
  uVar3 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar3,"Effect_Kraken_Attack_Crit",1,0,1,0,0);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd0b6c(void)

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




void FUN_00dd0ca4(void)

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




void FUN_00dd0e04(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Spawn",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Kraken_Spawn",1,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40900000);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f4ccccd,uVar2,"build://Sounds/Kraken.assetbundle/kraken_spawn_roar.mp3"
               ,0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40800000);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f333333,uVar2,
               "build://Sounds/Kraken.assetbundle/kraken_spawn_gutterals.mp3",0,0,0xffffffff,0,1);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd0f64(void)

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
  FUN_00cf98bc(auStack_58);
  plVar3 = (long *)FUN_00cf9c64(auStack_58);
  (**(code **)(*plVar3 + 0x58))(0x40000000);
  FUN_00cf9eec(auStack_58);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x40000000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

