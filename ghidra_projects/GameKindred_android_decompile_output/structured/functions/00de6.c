// functions/00de6 — 9 functions
#include "libGameKindred.h"




void FUN_00de6218(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfb05c(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"TurretIdle",1,0,0,0);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de6294(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf98bc(auStack_38);
  FUN_00cfa6cc(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"HitReact",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f800000);
  FUN_00cf7578(uVar2,0);
  lVar3 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de6348(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf98bc(auStack_38);
  FUN_00cfa6cc(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"AltHitReact",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f800000);
  FUN_00cf7578(uVar2,0);
  lVar3 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de63fc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf98bc(auStack_38);
  FUN_00cfa6cc(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"CritHitReact",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f800000);
  FUN_00cf7578(uVar2,0);
  lVar3 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de64b0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0x3f800000,uVar2,"Effect_Turret_Warning",1,0,1,0,0);
  FUN_00cf34e4(uVar2,3);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"Attack_BuildUp",0,0,0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf3358(0x3f800000,uVar2,"Effect_Turret_Shell_Casing",1,"Projectile_TurretBarrelTip",0,1,0,0)
  ;
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf3428(0x3f19999a,uVar2,"Effect_TurretSpotlight_5v5",1,"Bone_SearchLight",0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_58);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09494(*(undefined4 *)(lVar3 + 0x30));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"build://Sounds/Turret.assetbundle/turret_reload_01.mp3",0,0,
               0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"build://Sounds/Turret.assetbundle/turret_reload_02.mp3");
  FUN_00cf41bc(uVar2,"build://Sounds/Turret.assetbundle/turret_reload_03.mp3");
  FUN_00cf41bc(uVar2,"build://Sounds/Turret.assetbundle/turret_reload_04.mp3");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf3358(0x3f800000,uVar2,"Effect_TurretMuzzleFlare_5v5",1,"Projectile_TurretBarrelTip",0,1,0,
               0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0x3f800000,uVar2,"Effect_TurretDustup",1,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_58);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09494(*(undefined4 *)(lVar3 + 0x34));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"build://Sounds/Turret.assetbundle/turret_fires_01.mp3",0,0,
               0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"build://Sounds/Turret.assetbundle/turret_fires_02.mp3");
  FUN_00cf41bc(uVar2,"build://Sounds/Turret.assetbundle/turret_fires_03.mp3");
  FUN_00cf41bc(uVar2,"build://Sounds/Turret.assetbundle/turret_fires_04.mp3");
  FUN_00cf99dc(auStack_58);
  uVar2 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar2,0x71,"Projectile_TurretBarrelTip");
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"Attack_Recoil",0,0,0,"AttackToIdle");
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de679c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dabc(auStack_98,0x40000);
  uVar2 = FUN_00cfa9e4(auStack_a8);
  FUN_00cf3048(uVar2,"Die",0,0,0,0);
  uVar2 = FUN_00cfab94(auStack_a8);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d09494(*(undefined4 *)(lVar3 + 0x3c));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"build://Sounds/Turret.assetbundle/turret_death.mp3",0,0,
               0xffffffff,0,1);
  uVar2 = FUN_00cfaa74(auStack_a8);
  FUN_00cf32cc(0xbf800000,uVar2,"Effect_Turret_Death_5v5",1,0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_a8);
  FUN_00cf32cc(0xbf800000,uVar2,"Effect_TurretDeath_State_5v5",1,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3f800000);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3f4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaa74(auStack_a8);
  FUN_00cf32cc(0x3f800000,uVar2,"Effect_Turret_Death_Explosion_5v5",1,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_a8);
  FUN_00cf4164(0x3f800000,0x3ecccccd,uVar2,
               "build://Sounds/Turret.assetbundle/turret_onfire_loop.mp3",0,1,0xffffffff,0,1);
  uVar2 = FUN_00cfaf84(auStack_a8);
  FUN_00cf5460(0x40f00000,uVar2,auStack_98,0,0,0,0);
  uVar2 = FUN_00cfa00c(auStack_a8);
  FUN_00cf6bb0(uVar2,FUN_00de5c08);
  FUN_00cf9eec(auStack_a8);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de69f0(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cfab94(auStack_58);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar2,"build://Sounds/ActorFx.assetbundle/sfx__nexus_die.mp3",0
               ,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa3b4(auStack_58);
  FUN_00cf8918(uVar2,"VainCrystal_IdleGlow");
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_Crystal_Cracking",0,0,1,0,0);
  plVar3 = (long *)FUN_00cfb134(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3e19999a);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3f000000);
  (**(code **)(*plVar3 + 0x20))(0x41c00000);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x40200000);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfb134(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3e19999a);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3fb33333);
  (**(code **)(*plVar3 + 0x20))(0x41c00000);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_VainCrystal_Explosion",0,0,1,0,0);
  plVar3 = (long *)FUN_00cfb134(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3dcccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x4039999a);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_Crystal_Singularity",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x40200000);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_Crystal_Explosion",0,0,1,0,0);
  plVar3 = (long *)FUN_00cfb134(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3ecccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x40000000);
  (**(code **)(*plVar3 + 0x20))(0x41c00000);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0xbf800000,uVar2,"Effect_Crystal_Leftovers",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x40b00000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de6d34(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cf98bc(auStack_48);
  uVar2 = FUN_00cfab94(auStack_48);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar2,
               "build://Sounds/ActorFx.assetbundle/nexus_right_explode.mp3",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa3b4(auStack_48);
  FUN_00cf8918(uVar2,"Away_VainCrystal_IdleGlow");
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0xbf800000,uVar2,"Effect_Away_Crystal_Cracking",0,0,1,0,0);
  plVar3 = (long *)FUN_00cfb134(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3e19999a);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3f000000);
  (**(code **)(*plVar3 + 0x20))(0x41c00000);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40200000);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Away_Crystal_Buildup",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40200000);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_Away_Crystal_Explosion",0,0,1,0,0);
  plVar3 = (long *)FUN_00cfb134(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3de147ae);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x4039999a);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x40b00000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00de6f80(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"HitReact",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar2,"Effect_Crystal_HitReact",1,0,1,0,0);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

