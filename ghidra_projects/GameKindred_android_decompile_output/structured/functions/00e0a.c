// functions/00e0a — 12 functions
#include "libGameKindred.h"




void FUN_00e0a054(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [64];
  undefined4 local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  uVar2 = FUN_00cfb05c(auStack_b8);
  FUN_00cf7b3c(uVar2,1);
  FUN_00cfa6cc(auStack_b8);
  FUN_00d4d9e8(auStack_a8);
  FUN_00d4daf4(auStack_a8,0,1,0,0);
  FUN_00d4dabc(auStack_a8,0x40000);
  FUN_00d4dba0(0x42340000,auStack_a8);
  FUN_00d4dcdc(auStack_a8,1);
  local_68 = 0x3ee66666;
  plVar3 = (long *)FUN_00cfaa2c(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability03");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfac6c(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"ability3");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3dcccccd);
  (**(code **)(*plVar3 + 0x20))();
  plVar3 = (long *)FUN_00cfac24(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Shin_Ability_C_Cast");
  lVar4 = FUN_00d09310();
  FUN_00d0a6a0(*(undefined4 *)(lVar4 + 0x740));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00cfac24(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Shin_Ability_C_Impact");
  lVar4 = FUN_00d09310();
  FUN_00d0a6a0(*(undefined4 *)(lVar4 + 0x740));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfaa74(auStack_b8);
  FUN_00cf32cc(0x3e4ccccd,uVar2,"Effect_Shin_C1_Cast",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaf84(auStack_b8);
  FUN_00cf5504(uVar2,auStack_a8,0,FUN_00e0a3dc,0,1,0);
  FUN_00cfa09c(auStack_b8);
  FUN_00cf9eec(auStack_b8);
  uVar2 = FUN_00cfaa74(auStack_b8);
  FUN_00cf32cc(0x3e4ccccd,uVar2,"Effect_Shin_C1_Cast",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaf84(auStack_b8);
  FUN_00cf5504(uVar2,auStack_a8,0,FUN_00e0a3dc,0,1,0);
  FUN_00cfa09c(auStack_b8);
  FUN_00cf9eec(auStack_b8);
  uVar2 = FUN_00cfaa74(auStack_b8);
  FUN_00cf32cc(0x3e4ccccd,uVar2,"Effect_Shin_C1_Cast",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaf84(auStack_b8);
  FUN_00cf5504(uVar2,auStack_a8,0,FUN_00e0a3dc,0,1,0);
  FUN_00cfa09c(auStack_b8);
  FUN_00cf9eec(auStack_b8);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0a3dc(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00e0a3f0(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [64];
  undefined4 local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  uVar2 = FUN_00cfb05c(auStack_b8);
  FUN_00cf7b3c(uVar2,1);
  FUN_00cfa6cc(auStack_b8);
  uVar2 = FUN_00cfa834(auStack_b8);
  FUN_00cf4dc4(uVar2,PTR_s_Buff_Shin_SetFlameMeter_02bf1c28,0xfffffffc,0);
  FUN_00d4d9e8(auStack_a8);
  FUN_00d4daf4(auStack_a8,0,1,0,0);
  FUN_00d4dabc(auStack_a8,0x40000);
  FUN_00d4dba0(0x42340000,auStack_a8);
  FUN_00d4dcdc(auStack_a8,1);
  local_68 = 0x3ee66666;
  plVar3 = (long *)FUN_00cfaa2c(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability03_01");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaa74(auStack_b8);
  FUN_00cf32cc(0x3e4ccccd,uVar2,"Effect_Shin_C2_Cast",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaf84(auStack_b8);
  FUN_00cf5460(0x41200000,uVar2,auStack_a8,0,0,1,0);
  FUN_00cfa09c(auStack_b8);
  FUN_00cf9eec(auStack_b8);
  uVar2 = FUN_00cfaa74(auStack_b8);
  FUN_00cf32cc(0x3e4ccccd,uVar2,"Effect_Shin_C2_Cast",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaf84(auStack_b8);
  FUN_00cf5460(0x41200000,uVar2,auStack_a8,0,0,1,0);
  FUN_00cfa09c(auStack_b8);
  FUN_00cf9eec(auStack_b8);
  uVar2 = FUN_00cfaa74(auStack_b8);
  FUN_00cf32cc(0x3e4ccccd,uVar2,"Effect_Shin_C2_Cast",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaf84(auStack_b8);
  FUN_00cf5460(0x41200000,uVar2,auStack_a8,0,0,1,0);
  FUN_00cfa09c(auStack_b8);
  FUN_00cf9eec(auStack_b8);
  uVar2 = FUN_00cfaa74(auStack_b8);
  FUN_00cf32cc(0x3e4ccccd,uVar2,"Effect_Shin_C2_Cast",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaf84(auStack_b8);
  FUN_00cf5460(0x41200000,uVar2,auStack_a8,0,0,1,0);
  FUN_00cfa09c(auStack_b8);
  FUN_00cf9eec(auStack_b8);
  uVar2 = FUN_00cfaa74(auStack_b8);
  FUN_00cf32cc(0x3e4ccccd,uVar2,"Effect_Shin_C2_Cast",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaf84(auStack_b8);
  FUN_00cf5460(0x41200000,uVar2,auStack_a8,0,0,1,0);
  FUN_00cfa09c(auStack_b8);
  FUN_00cf9eec(auStack_b8);
  uVar2 = FUN_00cfaa74(auStack_b8);
  FUN_00cf32cc(0x3e4ccccd,uVar2,"Effect_Shin_C2_Cast",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaf84(auStack_b8);
  FUN_00cf5460(0x41200000,uVar2,auStack_a8,0,0,1,0);
  FUN_00cfa09c(auStack_b8);
  FUN_00cf9eec(auStack_b8);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0a854(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float local_48 [2];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  FUN_00d55794(uVar2,param_2,0);
  uVar2 = FUN_00d50ef8(param_1);
  FUN_00d557c4(uVar2,local_48,&DAT_03218f68);
  fVar3 = atan2f(local_40,local_48[0]);
  *param_3 = fVar3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0a8e0(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_a8 [16];
  undefined4 local_98 [2];
  undefined4 local_90;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00cfa6cc(auStack_a8);
  uVar2 = FUN_00cfa834(auStack_a8);
  FUN_00cf4dc4(uVar2,PTR_s_Buff_Shin_SetFlameMeter_02bf1c28,0xfffffffc,0);
  plVar3 = (long *)FUN_00cfab04(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_Cape_02_U_L");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Shin_Cape_02_U_L");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_98[0] = 0x3f000000;
  local_90 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_98);
  plVar3 = (long *)FUN_00cfab04(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_Cape_02_L_L");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Shin_Cape_02_L_L");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_98[0] = 0x3f000000;
  local_90 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_98);
  plVar3 = (long *)FUN_00cfab04(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_Cape_02_U_R");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Shin_Cape_02_U_R");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_98[0] = 0x3f000000;
  local_90 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_98);
  plVar3 = (long *)FUN_00cfab04(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_Cape_02_L_R");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Shin_Cape_02_L_R");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_98[0] = 0x3f000000;
  local_90 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_98);
  plVar3 = (long *)FUN_00cfab04(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_LeftHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Shin_LeftHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_98[0] = 0x3f000000;
  local_90 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_98);
  plVar3 = (long *)FUN_00cfaa2c(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability03_01");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x28))();
  (**(code **)(*plVar3 + 0x10))(0x40800000);
  plVar3 = (long *)FUN_00cfac24(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Shin_Ability_C2_Cast");
  lVar4 = FUN_00d09310();
  FUN_00d0a6a0(*(undefined4 *)(lVar4 + 0x748));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00cfac6c(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"ability3");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3dcccccd);
  (**(code **)(*plVar3 + 0x20))();
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3f4ccccd);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfac24(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Shin_Ability_C2_Impact");
  lVar4 = FUN_00d09310();
  FUN_00d0a6a0(*(undefined4 *)(lVar4 + 0x74c));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00cfaabc(auStack_a8);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Effect_Shin_C2_Cast_WIP",FUN_00e0a854);
  FUN_00d4d9e8(local_98);
  FUN_00d4dabc(local_98,0x40000);
  FUN_00d4daf4(local_98,0,1,0,0);
  uVar2 = FUN_00cfaf84(auStack_a8);
  FUN_00cf5504(uVar2,local_98,0,FUN_00e0ad4c,0,1,0);
  plVar3 = (long *)FUN_00cfa09c(auStack_a8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Damage",6);
  FUN_00cf9eec(auStack_a8);
  lVar4 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0ad4c(undefined8 param_1)

{
  FUN_00d59f54(param_1,6,2,0x19,0);
  return;
}




void FUN_00e0ad60(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  plVar2 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar3,FUN_00cf76f0);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  plVar2 = (long *)FUN_00cfa0e4(auStack_48);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0ae28(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_68 [16];
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  uVar2 = FUN_00cfb05c(auStack_68);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfaa2c(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,param_1);
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdle");
  plVar3 = (long *)FUN_00cfab04(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,param_3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  local_58[0] = 0x3e4ccccd;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_58);
  uVar2 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(auStack_68);
  FUN_00cfcad8(uVar2,param_2,param_4);
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0af6c(void)

{
  FUN_00e0ae28("Attack",0xe8,"Effect_Karas_DefaultAttacks_Static","CenterBody");
  return;
}




void FUN_00e0af8c(void)

{
  FUN_00e0ae28("AltAttack",0xe9,"Effect_Karas_DefaultAttacks_Static","CenterBody");
  return;
}




void FUN_00e0afac(void)

{
  FUN_00e0ae28("CritAttack",0xea,"Effect_Karas_DefaultAttacks_Static","CenterBody");
  return;
}




void FUN_00e0afcc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b3c(uVar3,1);
  uVar3 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar3,"Ability01",0,1,0,"AttackToIdle");
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar3,0xec,"CenterBody");
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
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

