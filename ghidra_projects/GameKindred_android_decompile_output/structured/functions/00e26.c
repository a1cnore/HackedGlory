// functions/00e26 — 24 functions
#include "libGameKindred.h"




void FUN_00e26118(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Blade");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Idris_WeaponPathIdentifier");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  plVar2 = (long *)FUN_00d3bcb8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_Weapon_Path");
                    /* WARNING: Could not recover jumptable at 0x00e261ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  return;
}




void FUN_00e261b0(void)

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
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_38 = FUN_00e262a8;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x10,1,&local_38);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Back");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Idris_CrystalPathIdentifier");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  (**(code **)(*plVar3 + 0x88))(plVar3,1);
  plVar3 = (long *)FUN_00d3bcb8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"u_Crystal_Path");
  (**(code **)(*plVar3 + 0x38))(0x3f800000);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e262a8(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,10,1);
  return;
}




void FUN_00e262b4(void)

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
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48 = FUN_00e262a8;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x10,1,&local_48);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Back");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Idris_CrystalPathIdentifier");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  (**(code **)(*plVar3 + 0x88))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Blade");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Idris_WeaponPathIdentifier");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  (**(code **)(*plVar3 + 0x88))(plVar3,1);
  plVar3 = (long *)FUN_00d3bcb8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"u_Weapon_Path");
  (**(code **)(*plVar3 + 0x38))(0x3f800000);
  plVar3 = (long *)FUN_00d3bcb8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"u_Crystal_Path");
  (**(code **)(*plVar3 + 0x38))(0x3f800000);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e26434(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = FUN_00e264dc;
  local_40 = 3;
  FUN_00d42a20(0,0x3f800000,param_1,&local_48);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00e264e8;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x10,1,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e264dc(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0xb,1);
  return;
}




void FUN_00e264e8(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0xd,1);
  return;
}




void FUN_00e264f4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65e5c();
  FUN_00d29f94(lVar1 + 0x10);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d3bc68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00e26540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,1);
  return;
}




void FUN_00e26544(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d2b564();
  FUN_00d42654(auStack_50,uVar3);
  uVar4 = FUN_00d66d28(param_1);
  FUN_00d59f54(uVar4,0,5,5,0);
  FUN_00d40908(uVar3,4);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d29a68();
  FUN_00d42654(auStack_50,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e26608(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47dc4(uVar3,"CenterBody");
  FUN_00da2040(uVar3,"Effect_Idris_A_Empowered_Available");
  lVar2 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00e213ac(lVar2 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Idris__A_02beedc0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e266c0(void)

{
  return;
}




void FUN_00e266c4(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,float *param_4)

{
  uint uVar1;
  
  *param_2 = "u_Crystal_Path";
  *param_3 = 1;
  FUN_00d426b0(*param_1);
  uVar1 = FUN_00dc677c();
  *param_4 = (float)(uVar1 & 1);
  return;
}




void FUN_00e2670c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Idris_B_Chakram_Impact");
  (**(code **)(*plVar2 + 0x100))(plVar2,FUN_00e266c4);
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Idris_Ability_B_Impact_2");
  lVar1 = FUN_00d09310();
  FUN_00d09dc4(*(undefined4 *)(lVar1 + 0x398));
                    /* WARNING: Could not recover jumptable at 0x00e267a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_00e267a8(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_120;
  undefined1 auStack_118 [112];
  undefined1 auStack_a8 [112];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  lVar3 = FUN_00d9e390();
  FUN_00d4e934(auStack_a8,DAT_031b9e48);
  FUN_00d4e980(auStack_a8,*(undefined4 *)(lVar3 + 0x260));
  FUN_00d4daf4(auStack_a8,0,1,0,lVar3);
  FUN_00d4dabc(auStack_a8,1);
  FUN_00d4dc24(auStack_a8,0);
  FUN_00d4d364(auStack_a8,1);
  FUN_00d4e934(auStack_118,DAT_031b9e4c);
  FUN_00d4e980(auStack_118,*(undefined4 *)(lVar3 + 0x260));
  FUN_00d4daf4(auStack_118,1,0,0,lVar3);
  FUN_00d4dabc(auStack_118,1);
  FUN_00d4dc24(auStack_118,0);
  FUN_00d4d364(auStack_118,1);
  local_120 = 0;
  iVar2 = FUN_00d9e840(auStack_a8,&local_120,1,0);
  if (iVar2 == 0) {
    FUN_00d9e840(auStack_118,&local_120,1,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_120);
}




void FUN_00e268e0(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar4 = *param_1;
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00d66d28(uVar4);
    FUN_00d55794(uVar3,local_38,0);
    FUN_00d6a140(local_38[0],uVar4);
    FUN_00d6a19c(local_30,uVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e26958(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_00e267a8();
  if (lVar1 != 0) {
    *param_2 = *(undefined4 *)(lVar1 + 0x260);
  }
  return;
}




void FUN_00e26984(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  uVar3 = FUN_00d39a54(lVar2 + 0x10);
  FUN_00d3e604(uVar3,FUN_00e268e0);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d2a034();
  FUN_00d42654(auStack_50,uVar3);
  lVar2 = FUN_00d6624c(param_1);
  plVar4 = (long *)FUN_00d44df8(lVar2 + 0x10);
  (**(code **)(*plVar4 + 0x40))(plVar4,PTR_s_Ability__Idris__C_LeapOff_02beee58);
  plVar4 = (long *)FUN_00d46828(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Idris__C_LeapOff_02beee58);
  (**(code **)(*plVar4 + 0x28))(plVar4,FUN_00d98940);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar2 + 0x18);
  FUN_00d3e534();
  uVar3 = FUN_00d2a504();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d2a994();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d46fc0(uVar3,PTR_s_Buff_Idris_C_Attached_02bf0930);
  FUN_00d3e534();
  uVar3 = FUN_00d2a994();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d46fc0(uVar3,PTR_s_Buff_Idris_C_AttachedLeapModal_02bf0938);
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00e249fc();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d4004c(uVar3,FUN_00e26958);
  FUN_00d3e534();
  uVar3 = FUN_00d2a994();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d46fc0(uVar3,PTR_s_Buff_Idris_C_AttachedEnemy_02bf0940);
  FUN_00d46fd0();
  FUN_00d3e534();
  uVar3 = FUN_00d2a994();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d46fc0(uVar3,PTR_s_Buff_Idris_C_AttachedAlly_02bf0948);
  FUN_00d46fd0();
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(auStack_50,uVar3);
  lVar2 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00e213ac(lVar2 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Idris__C_02beedc8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e26bb0(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  FUN_00d67b84(*param_1);
  uVar1 = FUN_00d9e390();
  fVar2 = (float)FUN_00d59f54(uVar1,4,0xc,0x19,0);
  return fVar2 * 0.25;
}




void FUN_00e26be8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_50;
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3f800000);
  local_48 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50,2,3);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3ecccccd,uVar4,0);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_50 = FUN_00e26bb0;
  local_48 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50,1,2);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(&local_50,uVar4);
  uVar4 = FUN_00d47d9c(uVar4);
  FUN_00da2040(uVar4,"Effect_Idris_C_OnAttachedHero");
  uVar4 = FUN_00da20b8(0);
  FUN_00da20a0(uVar4,1);
  FUN_00d3e534();
  uVar4 = FUN_00d294ac();
  FUN_00d42654(&local_50,uVar4);
  uVar4 = FUN_00d47dc4(uVar4,"CenterBody");
  FUN_00da2040(uVar4,"Effect_Idris_C_FlashAtDestination");
  uVar4 = FUN_00da20b8(0);
  uVar4 = FUN_00da20a0(uVar4,1);
  FUN_00da20dc(uVar4,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e26d80(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d67b84();
  uVar4 = FUN_00d44008(uVar3,PTR_s_Buff_Idris_Talent_ShimmerHeal_02bedfa0);
  if ((uVar4 & 1) != 0) {
    FUN_00d67b84(param_1);
    uVar3 = FUN_00d9e390();
    uVar5 = FUN_00d67c60(param_1);
    FUN_00d425ec(auStack_60,uVar5);
    FUN_00d3e534();
    uVar5 = FUN_00d2a504();
    FUN_00d42654(auStack_60,uVar5);
    FUN_00d3e534();
    uVar5 = FUN_00d2cb84();
    FUN_00d42654(auStack_60,uVar5);
    puVar2 = PTR_s_Buff_HealPercentUsingBuffVar_02beb4b0;
    uVar3 = FUN_00d5a3d0(uVar3,DAT_031abfd0,0,9);
    FUN_00d3e888(0xbf800000,uVar3,0,uVar5,puVar2,1,0xffffffff,0,0);
    FUN_00d3e534();
    uVar3 = FUN_00d2a6c0();
    FUN_00d42654(auStack_60,uVar3);
  }
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar6 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_60,uVar3);
  uVar3 = FUN_00d47d9c(uVar3);
  FUN_00da2040(uVar3,"Effect_Idris_C_OnAttachedHero");
  uVar3 = FUN_00da20b8(0);
  FUN_00da20a0(uVar3,1);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_60,uVar3);
  uVar3 = FUN_00d47dc4(uVar3,"CenterBody");
  FUN_00da2040(uVar3,"Effect_Idris_C_FlashAtDestination");
  uVar3 = FUN_00da20b8(0);
  uVar3 = FUN_00da20a0(uVar3,1);
  FUN_00da20dc(uVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e26f48(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abfd0,0,9);
  return;
}




void FUN_00e26f60(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_00e267a8(*param_1);
  if (lVar1 != 0) {
    return;
  }
  FUN_00d436dc(*param_1);
  return;
}




void FUN_00e26f98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00e267a8(*param_1);
  *param_2 = uVar1;
  return;
}




void FUN_00e26fc0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67b84();
  uVar3 = FUN_00d44008(uVar2,PTR_s_Buff_Idris_Talent_ShimmerHeal_02bedfa0);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00d63f30(param_1);
    FUN_00d39534(lVar4 + 0x10);
    plVar5 = (long *)FUN_00d39584(lVar4 + 0x10);
    local_48 = FUN_00e26f48;
    local_40 = 3;
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,&local_48);
    (**(code **)(*plVar5 + 0x18))();
  }
  lVar4 = FUN_00d63f30(param_1);
  lVar4 = lVar4 + 0x10;
  uVar2 = FUN_00d39a54(lVar4);
  FUN_00d3e604(uVar2,FUN_00e26f60);
  plVar5 = (long *)FUN_00d2a160(lVar4);
  (**(code **)(*plVar5 + 0x48))();
  plVar5 = (long *)FUN_00d2a160(lVar4);
  (**(code **)(*plVar5 + 0x50))();
  lVar4 = FUN_00d65010(param_1);
  lVar4 = lVar4 + 0x10;
  FUN_00d29be4(lVar4);
  plVar5 = (long *)FUN_00d2df94(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"Sound_Idris_Ability_C_Loop");
  lVar6 = FUN_00d09310();
  FUN_00d09dc4(*(undefined4 *)(lVar6 + 0x39c));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  FUN_00d2b688(lVar4);
  FUN_00d29fe4(lVar4);
  plVar5 = (long *)FUN_00e2153c(lVar4);
  (**(code **)(*plVar5 + 0x30))(plVar5,FUN_00e26f98);
  uVar2 = FUN_00d29c84(lVar4);
  FUN_00d46b64(uVar2,0x1500);
  plVar5 = (long *)FUN_00d2887c(lVar4);
  (**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Invulnerable_02beb400);
  plVar5 = (long *)FUN_00d2887c(lVar4);
  (**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Idris_DontCatch_02bf08c8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

