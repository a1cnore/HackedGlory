// functions/00df6 — 12 functions
#include "libGameKindred.h"




long FUN_00df60a8(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [112];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d50ef8();
  FUN_00d4e934(auStack_98,DAT_031bbfe0);
  FUN_00d4db40(auStack_98,uVar3);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dabc(auStack_98,0x40000);
  iVar2 = FUN_00d9e840(auStack_98,auStack_a0,1,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (ulong)(iVar2 == 0) << 10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df6154(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_c8 [16];
  code *local_b8;
  undefined4 local_b0;
  undefined1 auStack_a8 [96];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  uVar2 = FUN_00cfad44(auStack_c8);
  FUN_00cf2ec0(uVar2,FUN_00df60a8);
  FUN_00d4d9e8(auStack_a8);
  FUN_00d4daf4(auStack_a8,0,1,0,0);
  FUN_00d4dabc(auStack_a8,0x40000);
  lVar3 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar2 = FUN_00cfadd4(auStack_c8);
  FUN_00cf5df8(uVar2,PTR_s_Buff_Anka_A_DaggerMark_02bf15b8,auStack_a8,0,0);
  FUN_00cf5e7c();
  lVar3 = FUN_00cf9f7c(auStack_c8);
  lVar4 = FUN_00da1124(lVar3 + 0x10);
  lVar3 = lVar3 + 0xb0;
  *(undefined4 *)(lVar4 + 0x18) = 0;
  *(undefined4 *)(lVar4 + 8) = 0;
  *(undefined4 *)(lVar4 + 0x10) = 1;
  uVar2 = FUN_00cfb05c(lVar3);
  FUN_00cf7b3c(uVar2,1);
  FUN_00cf9eec(lVar3);
  plVar5 = (long *)FUN_00cfaa2c(lVar3);
  (**(code **)(*plVar5 + 0x50))(plVar5,"AbilityA2Start");
  plVar5 = (long *)FUN_00cfab04(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Anka_A2_Start");
  (**(code **)(*plVar5 + 0x78))(plVar5,0);
  plVar5 = (long *)FUN_00cfac24(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Anka_Ability_A2_Cast");
  lVar4 = FUN_00d09310();
  FUN_00d0a25c(*(undefined4 *)(lVar4 + 0x4e0));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  uVar2 = FUN_00cfa294(lVar3);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfadd4(auStack_c8);
  FUN_00cf5df8(uVar2,PTR_s_Buff_Anka_A_DaggerMark_02bf15b8,auStack_a8,0,0);
  FUN_00cf5e7c();
  lVar3 = FUN_00cf9f7c(auStack_c8);
  lVar4 = FUN_00da1124(lVar3 + 0x10);
  lVar3 = lVar3 + 0xb0;
  *(undefined4 *)(lVar4 + 0x18) = 0;
  *(undefined4 *)(lVar4 + 8) = 0;
  *(undefined4 *)(lVar4 + 0x10) = 1;
  plVar5 = (long *)FUN_00cfb44c(lVar3);
  (**(code **)(*plVar5 + 0x50))(plVar5,FUN_00df5ef4);
  plVar5 = (long *)FUN_00cfac24(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Anka_Ability_A2_Appear");
  lVar4 = FUN_00d09310();
  FUN_00d0a25c(*(undefined4 *)(lVar4 + 0x4e0));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  plVar5 = (long *)FUN_00cf9b44(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Anka_A_BlinkStrikePfx_02bf15d0);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0x3dcccccd);
  local_b0 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_b8);
  plVar5 = (long *)FUN_00cfa09c(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"Damage2",0);
  plVar5 = (long *)FUN_00cfac24(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Anka_Ability_A2_Impact");
  lVar4 = FUN_00d09310();
  FUN_00d0a25c(*(undefined4 *)(lVar4 + 0x4e0));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  uVar2 = FUN_00cf9d84(lVar3);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Anka_A_DaggerMark_02bf15b8);
  FUN_00cf49c0();
  FUN_00cf9754(lVar3);
  FUN_00cf9eec(lVar3);
  plVar5 = (long *)FUN_00cf9afc(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Anka_A_BlinkedSpeedBoost_02bf15c8);
  local_b8 = FUN_00df6510;
  local_b0 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_b8);
  FUN_00cf98bc(lVar3);
  FUN_00cfacb4(lVar3);
  FUN_00cf50b0(0x3ecccccd);
  uVar2 = FUN_00cf9d84(lVar3);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Anka_A_CanBlink_02bf15c0);
  FUN_00cf9eec(lVar3);
  lVar3 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df6510(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,4,0x19,0);
  return;
}




void FUN_00df6524(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfab04(auStack_38);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Anka_B");
  (**(code **)(*plVar4 + 0x78))(plVar4,0);
  plVar4 = (long *)FUN_00cfaa2c(auStack_38);
  (**(code **)(*plVar4 + 0x50))(plVar4,"AbilityB");
  plVar4 = (long *)FUN_00cfac24(auStack_38);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Anka_Ability_B_Cast");
  lVar2 = FUN_00d09310();
  FUN_00d0a25c(*(undefined4 *)(lVar2 + 0x4e4));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_38);
  uVar3 = FUN_00cfcad8(uVar3,0xaf,"CenterBody");
  FUN_00cfcba8(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_38);
  uVar3 = FUN_00cfcad8(uVar3,0xaf,"CenterBody");
  FUN_00cfcba8(uVar3,1);
  FUN_00cfcbc4(0x41200000);
  uVar3 = FUN_00cfb17c(auStack_38);
  uVar3 = FUN_00cfcad8(uVar3,0xaf,"CenterBody");
  FUN_00cfcba8(uVar3,1);
  FUN_00cfcbc4(0xc1200000);
  uVar3 = FUN_00cfb17c(auStack_38);
  uVar3 = FUN_00cfcad8(uVar3,0xaf,"CenterBody");
  FUN_00cfcba8(uVar3,1);
  FUN_00cfcbc4(0x41a00000);
  uVar3 = FUN_00cfb17c(auStack_38);
  uVar3 = FUN_00cfcad8(uVar3,0xaf,"CenterBody");
  FUN_00cfcba8(uVar3,1);
  FUN_00cfcbc4(0xc1a00000);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df6708(undefined8 param_1,ulong *param_2,float *param_3)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float local_68;
  float local_64;
  float local_60;
  uint local_58 [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  FUN_00d55794(uVar2,local_58,0);
  local_58[1] = 0;
  *(uint *)(param_2 + 1) = local_58[2];
  *param_2 = (ulong)local_58[0];
  FUN_00d557c4(uVar2,&local_68,&DAT_03218f68);
  fVar3 = sinf(1.5707964);
  fVar4 = cosf(1.5707964);
  param_3[1] = local_64;
  *param_3 = fVar4 * local_68 - fVar3 * local_60;
  param_3[2] = fVar3 * local_68 + fVar4 * local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df6804(undefined8 param_1,ulong *param_2,float *param_3)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float local_68;
  float local_64;
  float local_60;
  uint local_58 [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  FUN_00d55794(uVar2,local_58,0);
  local_58[1] = 0;
  *(uint *)(param_2 + 1) = local_58[2];
  *param_2 = (ulong)local_58[0];
  FUN_00d557c4(uVar2,&local_68,&DAT_03218f68);
  fVar3 = sinf(3.1415927);
  fVar4 = cosf(3.1415927);
  param_3[1] = local_64;
  *param_3 = fVar4 * local_68 - fVar3 * local_60;
  param_3[2] = fVar3 * local_68 + fVar4 * local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df68f8(undefined8 param_1,ulong *param_2,float *param_3)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float local_68;
  float local_64;
  float local_60;
  uint local_58 [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  FUN_00d55794(uVar2,local_58,0);
  local_58[1] = 0;
  *(uint *)(param_2 + 1) = local_58[2];
  *param_2 = (ulong)local_58[0];
  FUN_00d557c4(uVar2,&local_68,&DAT_03218f68);
  fVar3 = sinf(4.712389);
  fVar4 = cosf(4.712389);
  param_3[1] = local_64;
  *param_3 = fVar4 * local_68 - fVar3 * local_60;
  param_3[2] = fVar3 * local_68 + fVar4 * local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df69f4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_68 [16];
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_68);
  FUN_00cf7b3c(uVar3,1);
  FUN_00cfa2dc(auStack_68);
  plVar4 = (long *)FUN_00cf9afc(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Anka_C_IAmDashing_02bf15e0);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3f19999a);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  plVar4 = (long *)FUN_00cf9afc(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_SelfProjectile_02beb4b8);
  local_58 = FUN_00df6d40;
  local_50 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  (**(code **)(*plVar4 + 0x48))(plVar4,0xb0);
  plVar4 = (long *)FUN_00cfaa2c(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"AbilityCDash");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)FUN_00cfac24(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Anka_Ability_C_Cast");
  lVar2 = FUN_00d09310();
  FUN_00d0a25c(*(undefined4 *)(lVar2 + 0x4e8));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfa12c(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_58 = FUN_00df6d40;
  local_50 = 3;
  (**(code **)(*plVar4 + 0xa8))(plVar4,&local_58);
  plVar4 = (long *)FUN_00cfb1c4(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Anka_C_Clone*",1);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_00df6708);
  plVar5 = (long *)FUN_00cf9b8c(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Anka_C_CloneDash_02bf15f8,plVar4 + 2);
  local_58._0_4_ = 0x4059999a;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  plVar4 = (long *)FUN_00cfb1c4(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Anka_C_Clone*",1);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_00df6804);
  plVar5 = (long *)FUN_00cf9b8c(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Anka_C_CloneDash_02bf15f8,plVar4 + 2);
  local_58._0_4_ = 0x4059999a;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  plVar4 = (long *)FUN_00cfb1c4(auStack_68);
  plVar5 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Anka_C_Clone*",1);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_00df68f8);
  plVar5 = (long *)FUN_00cf9b8c(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Anka_C_CloneDash_02bf15f8,plVar4 + 2);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x4059999a);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df6d40(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,3,0x19,0);
  return;
}




void FUN_00df6d54(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfa6cc(auStack_58);
  plVar2 = (long *)FUN_00cfaa2c(auStack_58);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Dash");
  plVar2 = (long *)FUN_00cf9afc(auStack_58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_SelfProjectile_02beb4b8);
  local_48 = FUN_00df6f0c;
  local_40 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,0xb0);
  (**(code **)(*plVar2 + 0x50))(plVar2,2);
  plVar2 = (long *)FUN_00cfab04(auStack_58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Anka_C_Clone");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_00cfa12c(auStack_58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_48 = FUN_00df6f0c;
  local_40 = 3;
  (**(code **)(*plVar2 + 0xa8))(plVar2,&local_48);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_58);
  plVar2 = (long *)FUN_00cfaa2c(auStack_58);
  (**(code **)(*plVar2 + 0x50))(plVar2,"DashDelay");
  lVar4 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df6f0c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00df6f20(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfa6cc(auStack_58);
  FUN_00cf97e4(auStack_58);
  uVar2 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar2,2);
  plVar3 = (long *)FUN_00cfac24(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Anka_Ability_C_Return");
  lVar4 = FUN_00d09310();
  FUN_00d0a25c(*(undefined4 *)(lVar4 + 0x4e8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00cfaa2c(auStack_58);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Dash");
  plVar3 = (long *)FUN_00cf9afc(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_SelfProjectile_02beb4b8);
  local_48 = FUN_00df6f0c;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,0xb1);
  (**(code **)(*plVar3 + 0x50))(plVar3,2);
  uVar2 = FUN_00cf9cac(auStack_58);
  FUN_0097c734(uVar2,FUN_00df6f0c);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar2,FUN_00df6f0c);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(auStack_58);
  FUN_00cf9eec(auStack_58);
  lVar4 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

