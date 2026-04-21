// functions/00e57 — 22 functions
#include "libGameKindred.h"




void FUN_00e57294(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_68 [2];
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_Minion_Active");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f75c28f,0x3da3d70a,0x3e75c28f);
  local_68[0] = 0x3f000000;
  local_60 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_68);
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_Minion_Warning");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f75c28f,0x3da3d70a,0x3e75c28f);
  local_68[0] = 0x3f000000;
  local_60 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_68);
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e573fc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_58;
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_48 = FUN_00e57518;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_48,1,1);
  (**(code **)(*plVar3 + 0x98))();
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_48 = FUN_00e57518;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_48,1,1);
  local_58 = FUN_00e5752c;
  local_50 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,&local_58);
  (**(code **)(*plVar3 + 0x98))();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e57518(undefined8 param_1)

{
  FUN_00d092ac(param_1,0,2,9,1);
  return;
}




void FUN_00e5752c(undefined8 param_1)

{
  FUN_00d092ac(param_1,0,4,9,1);
  return;
}




void FUN_00e57540(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d29c84(lVar1 + 0x10);
  FUN_00d46b64(uVar2,0x1600);
  return;
}




void FUN_00e57560(void)

{
  return;
}




void FUN_00e57564(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *local_68;
  undefined4 local_60;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_58 = FUN_00e576a0;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x10))(plVar3,&local_58,1,1);
  lVar4 = FUN_00d65e5c(param_1);
  FUN_00d39534(lVar4 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar4 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_58 = FUN_00e576a0;
  local_50 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_58,1,1);
  local_68 = FUN_00e5752c;
  local_60 = 3;
  (**(code **)(*plVar3 + 0x88))(plVar3,&local_68);
  plVar3 = (long *)FUN_00d2cc5c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,"build://Sounds/Ishtar/SFX/Default/ishtar_ability_A_hit_1.mp3")
  ;
  (**(code **)(*plVar3 + 0x28))(0x3e99999a);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e576a0(undefined8 param_1)

{
  FUN_00d092ac(param_1,0,3,9,1);
  return;
}




void FUN_00e576b4(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d64080();
  plVar2 = (long *)FUN_00d46828(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Ability__Ishtar_Minion__Movement_02beff80);
                    /* WARNING: Could not recover jumptable at 0x00e576f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,FUN_00d98940);
  return;
}




void FUN_00e576f8(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d46828(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e57724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Ishtar_Minion__Spin_02beff88);
  return;
}




void FUN_00e57728(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  FUN_00d39534(lVar2);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",1);
  (**(code **)(*plVar3 + 0x98))();
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Ishtar_Minion_B_Slow_02bf1a58);
  local_58 = FUN_00e578a0;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  plVar3 = (long *)FUN_00e4c798(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Ishtar_B_MovementSpeed_02bf1a60);
  local_58 = FUN_00e578b4;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",1);
  local_58 = FUN_00e578c8;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x88))(plVar3,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e578a0(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00e578b4(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,7,0x19,0);
  return;
}




void FUN_00e578c8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,1,0x19,0);
  return;
}




void FUN_00e578dc(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e57940;
  local_30 = 3;
  FUN_00d42b30(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e57940(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00e57954(void)

{
  return;
}




void FUN_00e57958(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  lVar1 = lVar1 + 0x10;
  uVar2 = FUN_00d3a390(lVar1);
  FUN_00d481a8(uVar2,FUN_00d48394);
  FUN_00e30f38(lVar1);
  uVar2 = FUN_00d29c84(lVar1);
  FUN_00d46b64(uVar2,0x4004);
  return;
}




void FUN_00e579a0(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d3a390(lVar1 + 0x10);
  FUN_00d48198(uVar2,FUN_00d483cc);
  FUN_00e30f38(lVar1 + 0x10);
  return;
}




void FUN_00e579d8(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e57a3c;
  local_30 = 3;
  FUN_00d42a20(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e57a3c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,6,0x19,0);
  return;
}




void FUN_00e57a50(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_78 = FUN_00e5812c;
  local_70 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x12,1,&local_78);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_78 = FUN_00e58140;
  local_70 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x18,1,&local_78);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_78 = FUN_00e58140;
  local_70 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x17,1,&local_78);
  plVar3 = (long *)FUN_00d3bcb8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"u_Ultimate_Active");
  (**(code **)(*plVar3 + 0x38))(0x3f800000);
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Idle","Ability03_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Move","Ability03_Move");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Attack","Ability03_Attack");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"AltAttack","Ability03_Attack");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"CritAttack","Ability03_Attack");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStart","Ability03_MoveStart");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStop","Ability03_MoveStop");
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_C_Fortified");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LeftBlade_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_C_WingsLeft");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LeftBlade_2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_C_WingsLeft");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightBlade_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_C_WingsRight");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightBlade_2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_C_WingsRight");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LeftHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_C_HandFire");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_C_HandFire");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d64980(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2779c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Ability03_Exit");
  (**(code **)(*plVar3 + 0x28))();
  plVar3 = (long *)FUN_00d2cc5c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Ishtar_AbilityC_Exit");
  lVar4 = FUN_00d09310();
  FUN_00d0a5a4(*(undefined4 *)(lVar4 + 0x69c));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_C_Fortified_End");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LeftBlade_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_C_WingsLeft_Retract");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LeftBlade_2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_C_WingsLeft_Retract");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightBlade_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_C_WingsLeft_Retract");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightBlade_2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_C_WingsLeft_Retract");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LeftHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_C_HandFire_End");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ishtar_C_HandFire_End");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

