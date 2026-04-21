// functions/00e58 — 14 functions
#include "libGameKindred.h"




void FUN_00e5812c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00e58140(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00e58154(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099f47c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00e581a4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d634b4();
  lVar2 = FUN_00d4a9f0();
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_Perk_Cooldown_02bf1a90);
  local_38[0] = 0x41200000;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e58228(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d6592c();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_38[0] = 0x3d4ccccd;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x19,1,local_38);
  (**(code **)(*plVar3 + 0x38))();
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e582c0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Note_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_MusicNote_A");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0,0,0);
  local_58[0] = 0x3f000000;
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_58);
  local_68[0] = 0x43340000;
  local_60 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x98))(plVar3,local_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNoteA_Tracker_02bf1aa0);
  lVar2 = FUN_00d64080(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1aa8);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ab0);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1ab8);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ac0);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ac8);
  plVar3 = (long *)FUN_00d39930(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_Viola_MusicNote_Placement_T_02bf1ad0);
  local_58[0] = 1;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_58);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d39930(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_Viola_MusicNoteA_Tracker_02bf1aa0);
  local_58[0] = 0xffffffff;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e584e8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Note_2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_MusicNote_A");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0,0,0);
  local_58[0] = 0x3f000000;
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNoteA_Tracker_02bf1aa0);
  lVar2 = FUN_00d64080(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1aa8);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ac8);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1ab8);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ae0);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ab0);
  plVar3 = (long *)FUN_00d39930(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_Viola_MusicNote_Placement_T_02bf1ad0);
  local_58[0] = 1;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_58);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d39930(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_Viola_MusicNoteA_Tracker_02bf1aa0);
  local_58[0] = 0xffffffff;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e58700(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Note_3");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_MusicNote_A");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0,0,0);
  local_58[0] = 0x3f000000;
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNoteA_Tracker_02bf1aa0);
  lVar2 = FUN_00d64080(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ac8);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ab0);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ae0);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ac0);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1aa8);
  plVar3 = (long *)FUN_00d39930(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_Viola_MusicNote_Placement_T_02bf1ad0);
  local_58[0] = 1;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_58);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d39930(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_Viola_MusicNoteA_Tracker_02bf1aa0);
  local_58[0] = 0xffffffff;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e58918(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Note_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_MusicNote_B");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0,0);
  local_58[0] = 0x3f000000;
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNoteB_Tracker_02bf1af8);
  lVar2 = FUN_00d64080(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1aa8);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ab0);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1ab8);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ac0);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ac8);
  plVar3 = (long *)FUN_00d39930(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_Viola_MusicNote_Placement_T_02bf1ad0);
  local_58[0] = 1;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_58);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d39930(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_Viola_MusicNoteB_Tracker_02bf1af8);
  local_58[0] = 0xffffffff;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e58b30(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Note_2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_MusicNote_B");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0,0);
  local_58[0] = 0x3f000000;
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNoteB_Tracker_02bf1af8);
  lVar2 = FUN_00d64080(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1aa8);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ac8);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1ab8);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ae0);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ab0);
  plVar3 = (long *)FUN_00d39930(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_Viola_MusicNote_Placement_T_02bf1ad0);
  local_58[0] = 1;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_58);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d39930(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_Viola_MusicNoteB_Tracker_02bf1af8);
  local_58[0] = 0xffffffff;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e58d48(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Note_3");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Viola_MusicNote_B");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0,0);
  local_58[0] = 0x3f000000;
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNoteB_Tracker_02bf1af8);
  lVar2 = FUN_00d64080(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ac8);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ab0);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_2_02bf1ae0);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_3_02bf1ac0);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1aa8);
  plVar3 = (long *)FUN_00d39930(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_Viola_MusicNote_Placement_T_02bf1ad0);
  local_58[0] = 1;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_58);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d39930(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_Viola_MusicNoteB_Tracker_02bf1af8);
  local_58[0] = 0xffffffff;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e58f60(void)

{
  return;
}




void FUN_00e58f64(void)

{
  return;
}




void FUN_00e58f68(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined4 local_78 [2];
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d65fac();
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1aa8);
  plVar4 = (long *)FUN_00d39930(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_Viola_MusicNote_Placement_T_02bf1ad0);
  local_78[0] = 1;
  local_70 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_78);
  lVar3 = FUN_00d660fc(param_1);
  lVar3 = lVar3 + 0x10;
  lVar5 = FUN_00d29e8c(lVar3);
  lVar6 = FUN_00d2a370(lVar5 + 0x10);
  puVar2 = PTR_s_Buff_Viola_MusicNote_Placement_T_02bf1ad0;
  lVar5 = lVar5 + 0x88;
  *(undefined4 *)(lVar6 + 0x10) = 4;
  *(undefined **)(lVar6 + 8) = puVar2;
  plVar4 = (long *)FUN_00d2887c(lVar5);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_MusicNote_Placement_L_02bf1b10);
  plVar4 = (long *)FUN_00d2887c(lVar5);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_MusicNote_Placement_1_02bf1ab8);
  plVar4 = (long *)FUN_00d39930(lVar5);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_Viola_MusicNote_Placement_T_02bf1ad0);
  local_78[0] = 1;
  local_70 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_78);
  lVar5 = FUN_00d29e8c(lVar3);
  lVar6 = FUN_00d2a370(lVar5 + 0x10);
  puVar2 = PTR_s_Buff_Viola_MusicNoteA_Tracker_02bf1aa0;
  *(undefined4 *)(lVar6 + 0x10) = 3;
  *(undefined **)(lVar6 + 8) = puVar2;
  lVar5 = FUN_00d29e8c(lVar5 + 0x88);
  lVar6 = FUN_00d2a370(lVar5 + 0x10);
  lVar5 = lVar5 + 0xa0;
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Viola_MusicNoteB_Tracker_02bf1af8;
  plVar4 = (long *)FUN_00d2a160(lVar5);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_Grant_C2_02bf1b18);
  plVar4 = (long *)FUN_00d2a160(lVar5);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_Grant_C3_02bf1b20);
  plVar4 = (long *)FUN_00d2a160(lVar5);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_Grant_C4_02bf1b28);
  plVar4 = (long *)FUN_00d2887c(lVar5);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_Grant_C1_02bf1b30);
  lVar5 = FUN_00d29e8c(lVar3);
  lVar6 = FUN_00d2a370(lVar5 + 0x10);
  puVar2 = PTR_s_Buff_Viola_MusicNoteA_Tracker_02bf1aa0;
  *(undefined4 *)(lVar6 + 0x10) = 2;
  *(undefined **)(lVar6 + 8) = puVar2;
  lVar5 = FUN_00d29e8c(lVar5 + 0x88);
  lVar6 = FUN_00d2a370(lVar5 + 0x10);
  puVar2 = PTR_s_Buff_Viola_MusicNoteB_Tracker_02bf1af8;
  lVar5 = lVar5 + 0x88;
  *(undefined4 *)(lVar6 + 0x10) = 1;
  *(undefined **)(lVar6 + 8) = puVar2;
  plVar4 = (long *)FUN_00d2a160(lVar5);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_Grant_C1_02bf1b30);
  plVar4 = (long *)FUN_00d2a160(lVar5);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_Grant_C3_02bf1b20);
  plVar4 = (long *)FUN_00d2a160(lVar5);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_Grant_C4_02bf1b28);
  plVar4 = (long *)FUN_00d2887c(lVar5);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_Grant_C2_02bf1b18);
  lVar5 = FUN_00d29e8c(lVar3);
  lVar6 = FUN_00d2a370(lVar5 + 0x10);
  puVar2 = PTR_s_Buff_Viola_MusicNoteA_Tracker_02bf1aa0;
  *(undefined4 *)(lVar6 + 0x10) = 1;
  *(undefined **)(lVar6 + 8) = puVar2;
  lVar5 = FUN_00d29e8c(lVar5 + 0x88);
  lVar6 = FUN_00d2a370(lVar5 + 0x10);
  puVar2 = PTR_s_Buff_Viola_MusicNoteB_Tracker_02bf1af8;
  lVar5 = lVar5 + 0x88;
  *(undefined4 *)(lVar6 + 0x10) = 2;
  *(undefined **)(lVar6 + 8) = puVar2;
  plVar4 = (long *)FUN_00d2a160(lVar5);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_Grant_C1_02bf1b30);
  plVar4 = (long *)FUN_00d2a160(lVar5);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_Grant_C2_02bf1b18);
  plVar4 = (long *)FUN_00d2a160(lVar5);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_Grant_C4_02bf1b28);
  plVar4 = (long *)FUN_00d2887c(lVar5);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_Grant_C3_02bf1b20);
  lVar3 = FUN_00d29e8c(lVar3);
  lVar5 = FUN_00d2a370(lVar3 + 0x10);
  puVar2 = PTR_s_Buff_Viola_MusicNoteB_Tracker_02bf1af8;
  *(undefined4 *)(lVar5 + 0x10) = 3;
  *(undefined **)(lVar5 + 8) = puVar2;
  lVar3 = FUN_00d29e8c(lVar3 + 0x88);
  lVar5 = FUN_00d2a370(lVar3 + 0x10);
  lVar3 = lVar3 + 0xa0;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Viola_MusicNoteA_Tracker_02bf1aa0;
  plVar4 = (long *)FUN_00d2a160(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_Grant_C1_02bf1b30);
  plVar4 = (long *)FUN_00d2a160(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_Grant_C2_02bf1b18);
  plVar4 = (long *)FUN_00d2a160(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_Grant_C3_02bf1b20);
  plVar4 = (long *)FUN_00d2887c(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Viola_Grant_C4_02bf1b28);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

