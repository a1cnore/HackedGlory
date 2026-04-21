// functions/00e59 — 15 functions
#include "libGameKindred.h"




void FUN_00e59378(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_00d64080();
  lVar1 = FUN_00d29e8c(lVar1 + 0x10);
  lVar2 = FUN_00d2a370(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_L_02bf1b10;
  plVar3 = (long *)FUN_00d2887c(lVar1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00e593c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1ab8);
  return;
}




void FUN_00e593cc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_00d64080();
  lVar1 = FUN_00d29e8c(lVar1 + 0x10);
  lVar2 = FUN_00d2a370(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_L_02bf1b10;
  plVar3 = (long *)FUN_00d2887c(lVar1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00e5941c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ae0);
  return;
}




void FUN_00e59420(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_00d64080();
  lVar1 = FUN_00d29e8c(lVar1 + 0x10);
  lVar2 = FUN_00d2a370(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_L_02bf1b10;
  plVar3 = (long *)FUN_00d2887c(lVar1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00e59470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ac0);
  return;
}




void FUN_00e59474(void)

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
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Note_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_Note_Position_Tracker");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f75c28f,0x3da3d70a,0x3e75c28f);
  local_38[0] = 0x3dcccccd;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5954c(void)

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
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Note_2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_Note_Position_Tracker");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f75c28f,0x3da3d70a,0x3e75c28f);
  local_38[0] = 0x3dcccccd;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e59624(void)

{
  return;
}




void FUN_00e59628(void)

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
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Note_3");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_Note_Position_Tracker");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f75c28f,0x3da3d70a,0x3e75c28f);
  local_38[0] = 0x3dcccccd;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e59700(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Torso");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_Grant_C1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0,0,0);
  local_38[0] = 0x3f000000;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  uVar4 = FUN_00d45f10(lVar2 + 0x10);
  FUN_00d9886c(uVar4,PTR_s_Ability__Viola__C0_02beffe8,PTR_s_Ability__Viola__C_02befff0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e597f0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Torso");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_Grant_C2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0,0);
  local_38[0] = 0x3f000000;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  uVar4 = FUN_00d45f10(lVar2 + 0x10);
  FUN_00d9886c(uVar4,PTR_s_Ability__Viola__C0_02beffe8,PTR_s_Ability__Viola__C2_02befff8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e598e0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Torso");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_Grant_C3");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0,0x3f800000,0);
  local_38[0] = 0x3f000000;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  uVar4 = FUN_00d45f10(lVar2 + 0x10);
  FUN_00d9886c(uVar4,PTR_s_Ability__Viola__C0_02beffe8,PTR_s_Ability__Viola__C3_02bf0000);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e599d0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Torso");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_Grant_C4");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0,0,0x3f800000);
  local_38[0] = 0x3f000000;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_38);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  uVar4 = FUN_00d45f10(lVar2 + 0x10);
  FUN_00d9886c(uVar4,PTR_s_Ability__Viola__C0_02beffe8,PTR_s_Ability__Viola__C4_02bf0008);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e59ac0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d67b78(param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,1,0,1,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4db48(0x40c00000,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e59b70(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d67b78(param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,0,1,0,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4db48(0x40c00000,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e59c20(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_C1_Aura");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0,0,0);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x40c00000);
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,&local_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Idle","Ability03_v1");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Move","Ability03_Move");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStart","Ability03_MoveStart");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStop","Ability03_MoveStop");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Attack","Ability03_BasicAttack");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"AltAttack","Ability03_BasicAttack");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"CritAttack","Ability03_BasicAttack");
  plVar3 = (long *)FUN_00d2df94(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Viola_C1_Song");
  lVar2 = FUN_00d09310();
  FUN_00d0a5f8(*(undefined4 *)(lVar2 + 0x6c8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3dcccccd,uVar4,1);
  uVar4 = FUN_00d31490(lVar2 + 0x10);
  FUN_00d9ca38(uVar4,FUN_00e59ac0);
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_Song_1_Control_02bf1b40);
  local_48 = FUN_00e06008;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  lVar2 = FUN_00d63f30(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_C2_Aura_02bf1b48);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_C3_Aura_02bf1b50);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_C4_Aura_02bf1b58);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Viola_C_End");
  lVar2 = FUN_00d09310();
  FUN_00d0a5f8(*(undefined4 *)(lVar2 + 0x6d8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e59f38(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_C2_Aura");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0,0);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x40c00000);
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,&local_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Idle","Ability03_v2");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Move","Ability03_Move");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStart","Ability03_MoveStart");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStop","Ability03_MoveStop");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Attack","Ability03_BasicAttack");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"AltAttack","Ability03_BasicAttack");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"CritAttack","Ability03_BasicAttack");
  plVar3 = (long *)FUN_00d2df94(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Viola_C2_Song");
  lVar2 = FUN_00d09310();
  FUN_00d0a5f8(*(undefined4 *)(lVar2 + 0x6cc));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3dcccccd,uVar4,1);
  uVar4 = FUN_00d31490(lVar2 + 0x10);
  FUN_00d9ca38(uVar4,FUN_00e59ac0);
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_Song_2_Control_02bf1b60);
  local_48 = FUN_00e06008;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  lVar2 = FUN_00d63f30(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_C1_Aura_02bf1b38);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_C3_Aura_02bf1b50);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_C4_Aura_02bf1b58);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Viola_C_End");
  lVar2 = FUN_00d09310();
  FUN_00d0a5f8(*(undefined4 *)(lVar2 + 0x6d8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

