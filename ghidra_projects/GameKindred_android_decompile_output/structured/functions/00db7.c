// functions/00db7 — 25 functions
#include "libGameKindred.h"




void FUN_00db700c(void)

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
  FUN_00cf44e8(0x40a00000,uVar2,PTR_s_Buff_Silence_02beb428,1,0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db7090(void)

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
  FUN_00cf44e8(0x40a00000,uVar2,PTR_s_Buff_ItemSilence_02beb420,1,0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db7114(void)

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
  FUN_00cf44e8(0x40a00000,uVar2,PTR_s_Buff_Blind_02bebb38,1,0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db7198(void)

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
  FUN_00cf44e8(0x40a00000,uVar2,PTR_s_Buff_MortalWound_02beb418,1,0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db721c(void)

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
  FUN_00cf44e8(0x40400000,uVar2,PTR_s_Buff_Fear_02beb448,1,0);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db72a0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_98);
  FUN_00d4d9e8(auStack_88);
  FUN_00d4daf4(auStack_88,1,0,0,0);
  FUN_00d4dabc(auStack_88,0x10);
  uVar2 = FUN_00cfaf84(auStack_98);
  FUN_00cf5460(0x43480000,uVar2,auStack_88,0,0,1,0);
  uVar2 = FUN_00cf9ab4(auStack_98);
  FUN_00cf44e8(0x41200000,uVar2,PTR_s_Buff_Minion_Ace_02bf0b90,1,0);
  FUN_00cf9eec(auStack_98);
  FUN_00cfb5c4(auStack_98);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db7370(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_48 [16];
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  plVar2 = (long *)FUN_00cfa954(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  local_38[0] = 0xc6ea6000;
  local_30 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,6,local_38);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db73fc(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00d5048c(param_1);
    FUN_00d9eb38();
    uVar2 = FUN_00d54958();
    FUN_00d01344(auStack_50,*(undefined4 *)(lVar4 + 0x260),uVar2);
    FUN_00ce20fc(auStack_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00db7474(void)

{
  ulong uVar1;
  undefined4 uVar2;
  
  FUN_00d50ef8();
  FUN_00d9eb64();
  uVar1 = FUN_00d53e0c();
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x400;
  }
  return uVar2;
}




void FUN_00db749c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfad44(auStack_38);
  FUN_00cf2ec0(uVar2,FUN_00db7474);
  uVar2 = FUN_00cf9cf4(auStack_38);
  FUN_00cf2e48(uVar2,FUN_00db73fc);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db7514(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfa5f4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db756c(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_48 [16];
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  plVar2 = (long *)FUN_00cfa954(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  local_38[0] = 0;
  local_30 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,2,local_38);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db75f0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_98);
  FUN_00d4d9e8(auStack_88);
  FUN_00d4daf4(auStack_88,1,1,1,0);
  FUN_00d4dabc(auStack_88,0x40000);
  uVar2 = FUN_00cfaf84(auStack_98);
  FUN_00cf5460(0x41f00000,uVar2,auStack_88,0,0,1,0);
  uVar2 = FUN_00cf9ab4(auStack_98);
  FUN_00cf44e8(0x40a00000,uVar2,PTR_s_Buff_Debug_FortifiedHealth_02beb528,1,0);
  FUN_00cf9eec(auStack_98);
  FUN_00cfb5c4(auStack_98);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db76bc(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined1 local_38 [8];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  plVar2 = (long *)FUN_00cfb1c4(auStack_58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*Neutral_JungleMinion_TestDummy*",0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x20))(plVar2,FUN_00e60680);
  local_38[0] = 0;
  local_30 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,local_38);
  local_48[0] = 0;
  local_40 = 1;
  (**(code **)(*plVar2 + 0x68))(plVar2,local_48);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db7774(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cfb4dc(auStack_38);
  FUN_00cfd9d4(uVar2,PTR_s_Buff_Debug_Invisibility_02beb530);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db77ec(undefined8 param_1,long param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  *param_3 = *(float *)(*(long *)(param_2 + 0x40) + 0x308) * 0.9;
  *param_4 = 0;
  *param_5 = 2;
  return;
}




void FUN_00db7814(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cf979c(auStack_38);
  uVar2 = FUN_00cf630c(uVar2,1);
  uVar2 = FUN_00cf6318(uVar2,1);
  FUN_00cf6324(uVar2,1);
  uVar2 = FUN_00cfa00c(auStack_38);
  FUN_00cf6bb0(uVar2,FUN_00db77ec);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db78a0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cf979c(auStack_38);
  uVar2 = FUN_00cf630c(uVar2,1);
  uVar2 = FUN_00cf6318(uVar2,1);
  FUN_00cf6324(uVar2,1);
  uVar2 = FUN_00cfb4dc(auStack_38);
  FUN_00cfd9d4(uVar2,PTR_s_Buff_Debug_Invisibility_02beb530);
  FUN_00cf9eec(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db7930(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  plVar2 = (long *)FUN_00cf9fc4(auStack_38);
  (**(code **)(*plVar2 + 0x60))();
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db7994(void)

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
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x40600000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db7a30(undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
                 undefined8 *param_5,uint param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_78);
  FUN_00cfb05c(auStack_78);
  uVar2 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar3 = FUN_00cfab94(auStack_78);
  uVar5 = *param_3;
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d099d4(*(undefined4 *)(lVar4 + 0x224));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,uVar5,0,0,0xffffffff,0,1);
  if (1 < (int)param_4) {
    lVar4 = (ulong)param_4 - 1;
    do {
      param_3 = param_3 + 1;
      FUN_00cf41bc(uVar3,*param_3);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  uVar2 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_78);
  FUN_00cf32cc(0,uVar2,param_2,0,0,1,0,0);
  uVar3 = FUN_00cfab94(auStack_78);
  uVar5 = *param_5;
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d099d4(*(undefined4 *)(lVar4 + 0x224));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,uVar5,0,0,0xffffffff,0,1);
  if (1 < (int)param_6) {
    lVar4 = (ulong)param_6 - 1;
    do {
      param_5 = param_5 + 1;
      FUN_00cf41bc(uVar3,*param_5);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  FUN_00cf99dc(auStack_78);
  uVar2 = FUN_00cfa00c(auStack_78);
  FUN_00cf6bb0(uVar2,param_7);
  FUN_00cfb0a4(auStack_78);
  FUN_00cfb5c4(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00db7c34(void)

{
  FUN_00db7a30("Attack","Effect_Phinn_AA",&PTR_s_Sound_Ardan_GutPunch_2_02bee928,1,
               &PTR_s_Sound_Rona_Impact_1_02bee930,4,FUN_00cfb6d0);
  return;
}




void FUN_00db7c68(void)

{
  FUN_00db7a30("AltAttack","Effect_Phinn_AA_Alt",&PTR_s_Sound_Phinn_Grunt_001_01_02bee958,4,
               &PTR_s_Sound_Rona_Impact_1_02bee978,4,FUN_00cfb6d0);
  return;
}




void FUN_00db7c9c(void)

{
  FUN_00db7a30("CritAttack","Effect_Phinn_AA_Crit",&PTR_s_Sound_Ardan_GutPunch_1_02bee9a0,1,
               &PTR_s_Sound_Rona_Impact_1_02bee9a8,4,FUN_00cfb8b4);
  return;
}




void FUN_00db7cd0(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [16];
  undefined4 local_98 [2];
  undefined4 local_90;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00cfa6cc(auStack_a8);
  uVar2 = FUN_00cfb05c(auStack_a8);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfab04(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_Mouth");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Phinn_A_Charging");
  local_98[0] = 0x3f4ccccd;
  local_90 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,local_98);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  uVar2 = FUN_00cfa9e4(auStack_a8);
  FUN_00cf3048(uVar2,"Ability01",0,1,0,"AttackToIdleCombat");
  plVar3 = (long *)FUN_00cfab04(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,"A_Warning");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Phinn_A_Warning_Enemy");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Effect_Phinn_A_Warning_Ally");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  uVar2 = FUN_00cfab94(auStack_a8);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d099d4(*(undefined4 *)(lVar4 + 0x228));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Phinn_Ability_A_Start",0,0,0xffffffff,0,1);
  FUN_00cfb0a4(auStack_a8);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7580(uVar2,FUN_00db80e4);
  FUN_00cf7578(uVar2,0);
  FUN_00d4d9e8(local_98);
  FUN_00d4dabc(local_98,0x40000);
  FUN_00d4daf4(local_98,0,1,0,0);
  plVar3 = (long *)FUN_00cfab04(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,"A_Warning");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Phinn_AnchorSmash");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  uVar2 = FUN_00cfab94(auStack_a8);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d099d4(*(undefined4 *)(lVar4 + 0x228));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Phinn_Ability_A_Slow",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Phinn_Ability_A_Stun");
  uVar2 = FUN_00cfaf84(auStack_a8);
  uVar2 = FUN_00cf5460(0x40400000,uVar2,local_98,0,0,0,0);
  FUN_00cf55a0(uVar2,"A_Warning");
  plVar3 = (long *)FUN_00cfb134(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3f19999a);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3f000000);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  FUN_00cfa09c(auStack_a8);
  uVar2 = FUN_00cf9ab4(auStack_a8);
  uVar2 = FUN_00cf456c(uVar2,PTR_s_Buff_Phinn_GroundSlamSlow_02bf0580,FUN_00db80f8,1,0);
  FUN_00cf45c4(uVar2,FUN_00cfbfec);
  uVar2 = FUN_00cf9ab4(auStack_a8);
  uVar2 = FUN_00cf456c(uVar2,PTR_s_Buff_Stunned_02beb430,FUN_00db80f8,1,0);
  FUN_00cf45c4(uVar2,FUN_00cfbfb8);
  FUN_00cf9eec(auStack_a8);
  FUN_00cfb0a4(auStack_a8);
  uVar2 = FUN_00cfab94(auStack_a8);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d099d4(*(undefined4 *)(lVar4 + 0x228));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Phinn_Ability_A_AnchorPull",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7580(uVar2,FUN_00db810c);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

