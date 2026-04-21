// functions/00dbd — 18 functions
#include "libGameKindred.h"




float FUN_00dbd16c(void)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d50ef8();
  fVar2 = (float)FUN_00d59f54(uVar1,0,4,0x19,0);
  fVar3 = (float)FUN_00d59f54(uVar1,0,5,0x19,0);
  return fVar2 / fVar3;
}




void FUN_00dbd1c8(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00dbd1dc(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,5,0x19,0);
  return;
}




float FUN_00dbd1f0(void)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d50ef8();
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar2 = (*(float *)(lVar1 + 0x1b0) + 1.0) *
          (*(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0));
  if (DAT_031b0660 <= fVar2) {
    fVar2 = DAT_031b0660;
  }
  fVar3 = DAT_031b05a0;
  if (DAT_031b05a0 <= fVar2) {
    fVar3 = fVar2;
  }
  return fVar3;
}




void FUN_00dbd258(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_68);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_68);
  FUN_00cf3048(uVar3,"Ability01_Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar3 = FUN_00cfb2e4(auStack_68);
  FUN_00cf4428(uVar3,0x539);
  uVar3 = FUN_00cfab94(auStack_68);
  lVar2 = FUN_00d09310();
  uVar6 = FUN_00d094e8(*(undefined4 *)(lVar2 + 0x94));
  FUN_00cf4164(0x3f800000,uVar6,uVar3,"Sound_Glaive_Ability_A_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Glaive_Ability_A_Impact_2");
  FUN_00cf41bc(uVar3,"Sound_Glaive_Ability_A_Impact_3");
  FUN_00cf41bc(uVar3,"Sound_Glaive_Ability_A_Impact_4");
  uVar3 = FUN_00cfaa74(auStack_68);
  FUN_00cf3428(0x3f800000,uVar3,"Effect_Glaive_Axe_Edge",1,"Bone_AxeEdge",0,1,0,0);
  uVar3 = FUN_00cfaa74(auStack_68);
  FUN_00cf3428(0x3f800000,uVar3,"Effect_Glaive_Axe_Jet",1,"Bone_AxeEdge",0,1,0,0);
  uVar3 = FUN_00cfaa74(auStack_68);
  FUN_00cf32cc(0,uVar3,"Effect_Glaive_Ability1_Dash_Attack",1,0,1,0,0);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e3851ec);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  FUN_00cf99dc(auStack_68);
  uVar3 = FUN_00cf9ab4(auStack_68);
  FUN_00cf456c(uVar3,PTR_s_Buff_Stunned_02beb430,FUN_00dbd5a4,1,0);
  lVar2 = FUN_00cf9f7c(auStack_68);
  lVar4 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Glaive_Talent_ViolentAfterb_02bedee8;
  plVar5 = (long *)FUN_00cf9b44(lVar2 + 0xb0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))
                             (plVar5,PTR_s_Buff_Glaive_ViolentAfterburnTarg_02bedf18);
  local_48 = FUN_00dbd16c;
  local_40 = 4;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  plVar5 = (long *)FUN_00cfa684(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  local_48 = FUN_00dbd1c8;
  local_40 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
  local_58 = FUN_00dbd1dc;
  local_50 = 3;
  (**(code **)(*plVar5 + 0x10))(plVar5,&local_58);
  plVar5 = (long *)FUN_00cfa0e4(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  local_48 = FUN_00dbd1f0;
  local_40 = 5;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,&local_48,0,0xf);
  (**(code **)(*plVar5 + 0x70))(plVar5,1);
  FUN_00cf9eec(auStack_68);
  FUN_00cfb0a4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbd5a4(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,9,0x19,0);
  return;
}




void FUN_00dbd5b8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [16];
  undefined4 local_b8 [2];
  undefined4 local_b0;
  code *local_a8;
  undefined4 local_a0;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  uVar2 = FUN_00cfb05c(auStack_c8);
  FUN_00cf7b3c(uVar2,1);
  lVar3 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  lVar3 = FUN_00cf9f7c(auStack_c8);
  lVar4 = FUN_00cefb20(lVar3 + 0x10);
  lVar3 = lVar3 + 0xb0;
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Glaive_Talent_TwistedPursui_02bedf08;
  plVar5 = (long *)FUN_00cfa12c(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(0x3f000000,0x3f800000,0x3f800000,0x3f800000);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  local_a8 = FUN_00dbda10;
  local_a0 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa0))(plVar5,&local_a8);
  (**(code **)(*plVar5 + 0xb8))(0x41700000);
  uVar2 = FUN_00cfa294(lVar3);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(lVar3);
  FUN_00cf98bc(auStack_c8);
  uVar2 = FUN_00cfa9e4(auStack_c8);
  FUN_00cf3048(uVar2,"Ability02_CritAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_c8);
  FUN_00cf3428(0x3f800000,uVar2,"Effect_Glaive_Axe_Edge",1,"Bone_AxeEdge",0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_c8);
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d094e8(*(undefined4 *)(lVar3 + 0x98));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_Glaive_Ability_B",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_c8);
  FUN_00cf32cc(0,uVar2,"Effect_Glaive_TwistedStroke",1,0,1,0,0);
  FUN_00cf9eec(auStack_c8);
  FUN_00cf99dc(auStack_c8);
  plVar5 = (long *)FUN_00cf9b44(auStack_c8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Glaive_Crit_PFX_02bf0690);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0x3dcccccd);
  local_a0 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_a8);
  uVar2 = FUN_00cfab94(auStack_c8);
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d094e8(*(undefined4 *)(lVar3 + 0x98));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_Glaive_Ability_B_Impact_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar2,"Sound_Glaive_Ability_B_Impact_2");
  FUN_00cf41bc(uVar2,"Sound_Glaive_Ability_B_Impact_3");
  FUN_00cf41bc(uVar2,"Sound_Glaive_Ability_B_Impact_4");
  plVar5 = (long *)FUN_00cfa09c(auStack_c8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,"Damage",2);
  (**(code **)(*plVar5 + 0x70))(plVar5,2);
  FUN_00d4d9e8(&local_a8);
  FUN_00d4daf4(&local_a8,0,1,0,0);
  FUN_00d4dba0(0x42b40000,&local_a8);
  FUN_00d4dabc(&local_a8,0x40000);
  FUN_00cf9eec(auStack_c8);
  uVar2 = FUN_00cfaf84(auStack_c8);
  FUN_00cf5504(uVar2,&local_a8,0,FUN_00dbc9ec,1,1,0);
  plVar5 = (long *)FUN_00cf9b44(auStack_c8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Glaive_Crit_PFX_02bf0690);
  local_b8[0] = 0x3dcccccd;
  local_b0 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_b8);
  plVar5 = (long *)FUN_00cfa09c(auStack_c8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,"CLEAVE_DAMAGE",2);
  (**(code **)(*plVar5 + 0x70))(plVar5,2);
  uVar2 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  lVar3 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb0a4(auStack_c8);
  FUN_00cfb5c4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbda10(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abf84,2,9);
  return;
}




void FUN_00dbda28(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = FUN_00d5048c();
  lVar3 = *(long *)(lVar2 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  uVar1 = FUN_00d6bb44(lVar3,DAT_031b99d4);
  fVar5 = (float)FUN_00d59f54(lVar2,3,2,0x19,0);
  fVar6 = (float)FUN_00d59f54(lVar2,3,3,0x19,0);
  *param_3 = fVar5 + fVar6 * (float)uVar1;
  uVar4 = FUN_00d44008(*(undefined4 *)(lVar2 + 0x260),
                       PTR_s_Buff_Glaive_Talent_StunningBlood_02bedef8);
  if ((uVar4 & 1) != 0) {
    fVar5 = (float)FUN_00d5a3d0(lVar2,DAT_031abf7c,2,9);
    *param_3 = fVar5 * *param_3;
  }
  *param_4 = 2;
  *param_5 = 1;
  return;
}




void FUN_00dbdb3c(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  FUN_00dbda28();
  uVar1 = FUN_00d5048c(param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,3,7,0x19,0);
  *param_3 = fVar2 * *param_3;
  return;
}




void FUN_00dbdb88(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  FUN_00dbda28();
  uVar1 = FUN_00d5048c(param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,3,8,0x19,0);
  *param_3 = fVar2 * *param_3;
  return;
}




void FUN_00dbdbd4(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  FUN_00dbda28();
  uVar1 = FUN_00d5048c(param_1);
  fVar2 = (float)FUN_00d59f54(uVar1,3,9,0x19,0);
  *param_3 = fVar2 * *param_3;
  return;
}




void FUN_00dbdc20(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [96];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  FUN_00d4d9e8(auStack_a8);
  FUN_00d4daf4(auStack_a8,0,1,0,0);
  FUN_00d4dabc(auStack_a8,0x40000);
  lVar2 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfa9e4(auStack_b8);
  FUN_00cf3048(uVar3,"Ability03_Attack",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfab94(auStack_b8);
  lVar2 = FUN_00d09310();
  uVar5 = FUN_00d094e8(*(undefined4 *)(lVar2 + 0x9c));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"Sound_Glaive_Ability_C",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfaa74(auStack_b8);
  FUN_00cf3428(0x3f800000,uVar3,"Effect_Glaive_Axe_Jet_Ult",1,"Bone_JetEngine",0,1,0,0);
  uVar3 = FUN_00cfaa74(auStack_b8);
  FUN_00cf32cc(0,uVar3,"Effect_Glaive_Ult",0,0,1,0,0);
  uVar3 = FUN_00cfa294(auStack_b8);
  FUN_00cf7580(uVar3,FUN_00dbdfa8);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfaf84(auStack_b8);
  FUN_00cf5504(uVar3,auStack_a8,0,FUN_00dbdfbc,0,0,0);
  lVar2 = FUN_00cf9f7c(auStack_b8);
  lVar4 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Glaive_Talent_StunningBlood_02bedef8;
  uVar3 = FUN_00cf9ab4(lVar2 + 0xb0);
  FUN_00cf456c(uVar3,PTR_s_Buff_Stunned_02beb430,FUN_00dbdfd0,1,0);
  uVar3 = FUN_00cfa00c(auStack_b8);
  FUN_00cf6bb0(uVar3,FUN_00dbdb3c);
  FUN_00cf9eec(auStack_b8);
  uVar3 = FUN_00cfa294(auStack_b8);
  FUN_00cf7580(uVar3,FUN_00dbdfe8);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfaf84(auStack_b8);
  FUN_00cf5504(uVar3,auStack_a8,0,FUN_00dbdfbc,0,0,0);
  uVar3 = FUN_00cfa00c(auStack_b8);
  FUN_00cf6bb0(uVar3,FUN_00dbdb88);
  FUN_00cf9eec(auStack_b8);
  uVar3 = FUN_00cfa294(auStack_b8);
  FUN_00cf7580(uVar3,FUN_00dbdffc);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfaf84(auStack_b8);
  FUN_00cf5504(uVar3,auStack_a8,0,FUN_00dbdfbc,0,0,0);
  uVar3 = FUN_00cfa00c(auStack_b8);
  FUN_00cf6bb0(uVar3,FUN_00dbdbd4);
  FUN_00cf9eec(auStack_b8);
  uVar3 = FUN_00cfa294(auStack_b8);
  FUN_00cf7580(uVar3,FUN_00dbe010);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfaa74(auStack_b8);
  FUN_00cf3428(0,uVar3,"Effect_Glaive_Axe_Jet_Smoke",1,"Bone_JetEngine",0,1,0,0);
  FUN_00cf98bc(auStack_b8);
  uVar3 = FUN_00cfa834(auStack_b8);
  FUN_00cf4e34(uVar3,DAT_031b99d4,0,1);
  FUN_00cf9eec(auStack_b8);
  lVar2 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_b8);
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbdfa8(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,10,0x19,0);
  return;
}




void FUN_00dbdfbc(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,4,0x19,0);
  return;
}




void FUN_00dbdfd0(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031abf7c,1,9);
  return;
}




void FUN_00dbdfe8(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,0xb,0x19,0);
  return;
}




void FUN_00dbdffc(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,0xc,0x19,0);
  return;
}

