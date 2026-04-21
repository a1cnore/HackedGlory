// functions/00e05 — 12 functions
#include "libGameKindred.h"




void FUN_00e051bc(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,5,0x19,0);
  return;
}




void FUN_00e051d0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_78 [16];
  undefined4 local_68 [2];
  undefined4 local_60;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_78);
  lVar2 = FUN_00cfa6cc(auStack_78);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfafcc(auStack_78);
  FUN_00cf52e0(uVar3,"Ishtar_Minion");
  FUN_00cfa63c(auStack_78);
  FUN_00cf9eec(auStack_78);
  plVar4 = (long *)FUN_00cfaa2c(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability03");
  (**(code **)(*plVar4 + 0x28))();
  plVar4 = (long *)FUN_00cfac24(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Ishtar_AbilityC");
  lVar2 = FUN_00d09310();
  FUN_00d0a5a4(*(undefined4 *)(lVar2 + 0x698));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfb1c4(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Ishtar_Minion*",1);
  uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,"Minion_1");
  plVar4 = (long *)FUN_00cf9b8c(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Ishtar_Minion_Invulnerable_02bf1a30,uVar3);
  local_58._0_4_ = 0x3f333333;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  plVar4 = (long *)FUN_00cfb1c4(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Ishtar_Minion*",1);
  uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,"Minion_2");
  plVar4 = (long *)FUN_00cf9b8c(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Ishtar_Minion_Invulnerable_02bf1a30,uVar3);
  local_58._0_4_ = 0x3f333333;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  plVar4 = (long *)FUN_00cfb1c4(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Ishtar_Minion*",1);
  uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,"Minion_3");
  plVar4 = (long *)FUN_00cf9b8c(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Ishtar_Minion_Invulnerable_02bf1a30,uVar3);
  local_58._0_4_ = 0x3f333333;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  plVar4 = (long *)FUN_00cfb1c4(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Ishtar_Minion*",1);
  uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,"Minion_4");
  plVar4 = (long *)FUN_00cf9b8c(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Ishtar_Minion_Invulnerable_02bf1a30,uVar3);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3f333333);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  plVar4 = (long *)FUN_00cf9afc(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Ishtar_C_Empowerment_02bf1a80);
  local_58 = FUN_00e055cc;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  uVar3 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cf9afc(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Ishtar_MinionTracker_02bf1a08);
  local_58._0_4_ = 4;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  lVar2 = FUN_00cf9f7c(auStack_78);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Ishtar_Talent_TalentC_02bf2398;
  plVar4 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Ishtar_TalentC_AtkSpeed_02bf23b8)
  ;
  local_58 = (code *)CONCAT44(local_58._4_4_,0x41200000);
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  local_68[0] = 4;
  local_60 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,local_68);
  lVar2 = FUN_00cfa6cc(auStack_78);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e055cc(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,1,0x19,0);
  return;
}




void FUN_00e055e0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  plVar3 = (long *)FUN_00cfac24(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Viola_Basic_Attack_01");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Viola_Basic_Attack_02");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Viola_Basic_Attack_03");
  lVar4 = FUN_00d09310();
  FUN_00d0a5f8(*(undefined4 *)(lVar4 + 0x6a4));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar2,param_2,param_3);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e05714(void)

{
  FUN_00e055e0("Attack",0xcf,"AutoAttack");
  return;
}




void FUN_00e0572c(void)

{
  FUN_00e055e0("AltAttack",0xcf,"AutoAttack");
  return;
}




void FUN_00e05744(void)

{
  FUN_00e055e0("CritAttack",0xd0,"AutoAttack");
  return;
}




void FUN_00e0575c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfac24(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Viola_A");
  lVar2 = FUN_00d09310();
  FUN_00d0a5f8(*(undefined4 *)(lVar2 + 0x6b4));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability01");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,0xd1,"CenterBody");
  lVar2 = FUN_00cf9f7c(auStack_48);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ab0;
  plVar4 = (long *)FUN_00cf9dcc(lVar2 + 0xb0);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Viola_MusicNoteB_3_02bf1b08);
  plVar4 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Viola_MusicNoteA_3_02bf1ae8);
  lVar2 = FUN_00cf9f7c(auStack_48);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ac8;
  plVar4 = (long *)FUN_00cf9dcc(lVar2 + 0xb0);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Viola_MusicNoteB_2_02bf1b00);
  plVar4 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Viola_MusicNoteA_2_02bf1ad8);
  lVar2 = FUN_00cf9f7c(auStack_48);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1aa8;
  plVar4 = (long *)FUN_00cf9dcc(lVar2 + 0xb0);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Viola_MusicNoteB_1_02bf1af0);
  plVar4 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Viola_MusicNoteA_1_02bf1a98);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e059d0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfac24(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Viola_B");
  lVar2 = FUN_00d09310();
  FUN_00d0a5f8(*(undefined4 *)(lVar2 + 0x6bc));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability02");
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,0xd2,"CenterBody");
  lVar2 = FUN_00cf9f7c(auStack_48);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ab0;
  plVar4 = (long *)FUN_00cf9dcc(lVar2 + 0xb0);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Viola_MusicNoteA_3_02bf1ae8);
  plVar4 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Viola_MusicNoteB_3_02bf1b08);
  lVar2 = FUN_00cf9f7c(auStack_48);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ac8;
  plVar4 = (long *)FUN_00cf9dcc(lVar2 + 0xb0);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Viola_MusicNoteA_2_02bf1ad8);
  plVar4 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Viola_MusicNoteB_2_02bf1b00);
  lVar2 = FUN_00cf9f7c(auStack_48);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1aa8;
  plVar4 = (long *)FUN_00cf9dcc(lVar2 + 0xb0);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Viola_MusicNoteA_1_02bf1a98);
  plVar4 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Viola_MusicNoteB_1_02bf1af0);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00e05c44(void)

{
  return 0x400;
}




void FUN_00e05c4c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfad44(auStack_38);
  FUN_00cf2ec0(uVar2,FUN_00e05c44);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e05cb0(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [16];
  code *local_98;
  undefined4 local_90;
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00d4d9e8(auStack_88);
  FUN_00d4daf4(auStack_88,1,0,1,0);
  FUN_00d4dabc(auStack_88,0x40000);
  plVar2 = (long *)FUN_00cfaa2c(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability03_v1");
  plVar2 = (long *)FUN_00cfac24(auStack_a8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Viola_C_Start");
  lVar3 = FUN_00d09310();
  FUN_00d0a5f8(*(undefined4 *)(lVar3 + 0x6c4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_00cf9afc(auStack_a8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_C1_Aura_02bf1b38);
  local_98 = FUN_00e06008;
  local_90 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_98);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteA_1_02bf1a98);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteA_2_02bf1ad8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteA_3_02bf1ae8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteB_1_02bf1af0);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteB_2_02bf1b00);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteB_3_02bf1b08);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ac8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ab0);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1ab8);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ae0);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ac0);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_L_02bf1b10);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_Grant_C1_02bf1b30);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_Grant_C2_02bf1b18);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_Grant_C3_02bf1b20);
  plVar2 = (long *)FUN_00cf9dcc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_Grant_C4_02bf1b28);
  plVar2 = (long *)FUN_00cf9afc(auStack_a8);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1aa8);
  uVar4 = FUN_00cfa834(auStack_a8);
  FUN_00cf4dc4(uVar4,PTR_s_Buff_Viola_MusicNote_Placement_T_02bf1ad0,1,1);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

