// functions/00e00 — 20 functions
#include "libGameKindred.h"




void FUN_00e0019c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

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




void FUN_00e00264(undefined8 param_1,undefined8 param_2)

{
  FUN_00e0019c("Attack",param_2,0);
  return;
}




void FUN_00e00274(undefined8 param_1,undefined8 param_2)

{
  FUN_00e0019c("AltAttack",param_2,0);
  return;
}




void FUN_00e00284(undefined8 param_1,undefined8 param_2)

{
  FUN_00e0019c("CritAttack",param_2,2);
  return;
}




void FUN_00e00294(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e002ec(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e00344(void)

{
  long lVar1;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0039c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  plVar2 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar3,FUN_00cf76f0);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  uVar3 = FUN_00cfb17c(auStack_48);
  FUN_00cfcad8(uVar3,0xc1,"AutoAttack");
  uVar4 = FUN_00cfab94(auStack_48);
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d0a454(*(undefined4 *)(lVar5 + 0x5c8));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Caine_Basic_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"Sound_Caine_Basic_Attack_2");
  FUN_00cf41bc(uVar4,"Sound_Caine_Basic_Attack_3");
  lVar5 = FUN_00cf9f7c(auStack_48);
  lVar6 = FUN_00cefb20(lVar5 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Caine_Talent_TalentC_02bf2308;
  uVar3 = FUN_00cfa834(lVar5 + 0xb0);
  FUN_00cf4dc4(uVar3,PTR_s_Buff_Caine_AmmoPerkTalent_02bf1880,0xffffffff,0);
  uVar3 = FUN_00cfa834(lVar5 + 200);
  FUN_00cf4dc4(uVar3,PTR_s_Buff_Caine_AmmoPerk_02bf1878,0xffffffff,0);
  plVar2 = (long *)FUN_00cf9afc(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Caine_AmmoControl_02bf1898);
  local_38 = FUN_00e00564;
  local_30 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_38);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e00564(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00e00570(void)

{
  FUN_00e0039c("Attack");
  return;
}




void FUN_00e0057c(void)

{
  FUN_00e0039c("AltAttack");
  return;
}




void FUN_00e00588(void)

{
  FUN_00e0039c("CritAttack");
  return;
}




void FUN_00e00594(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_48 [16];
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar2 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cf9afc(auStack_48);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Caine_DryFire_02bf1890);
  local_38[0] = 0x40000000;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_38);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00e00634(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00d50ef8();
  uVar2 = FUN_00d44be0(uVar1,PTR_s_Buff_Caine_AmmoPerk_02bf1878);
  uVar3 = 0;
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_00d44be0(uVar1,PTR_s_Buff_Caine_AmmoPerkTalent_02bf1880);
    uVar3 = 0;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0x400;
    }
  }
  return uVar3;
}




void FUN_00e00690(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cf9f7c(auStack_58);
  lVar3 = FUN_00cefb20(lVar2 + 0x10);
  lVar2 = lVar2 + 0xb0;
  *(undefined8 *)(lVar3 + 8) = param_1;
  uVar4 = FUN_00cfb17c(lVar2);
  FUN_00cfcad8(uVar4,0xc2,"HipAttack");
  plVar5 = (long *)FUN_00cfac24(lVar2);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Caine_A_Attack");
  lVar3 = FUN_00d09310();
  FUN_00d0a454(*(undefined4 *)(lVar3 + 0x5d8));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  uVar4 = FUN_00cfa834(lVar2);
  FUN_00cf4dc4(uVar4,param_1,0xffffffff,0);
  plVar5 = (long *)FUN_00cf9afc(lVar2);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Caine_AmmoControl_02bf1898);
  local_48 = FUN_00e00564;
  local_40 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_48);
  uVar4 = FUN_00cfa294(lVar2);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar4,0);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e007dc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  int iVar8;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  uVar2 = FUN_00cfad44(auStack_68);
  FUN_00cf2ec0(uVar2,FUN_00e00634);
  lVar3 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar2 = FUN_00cfb05c(auStack_68);
  FUN_00cf7b3c(uVar2,1);
  lVar4 = FUN_00cf9f7c(auStack_68);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  lVar3 = lVar4 + 200;
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Caine_B_FastCast_02bf18a8;
  FUN_00cf9f34(lVar3);
  uVar2 = FUN_00d9b108();
  uVar6 = FUN_00d9ab88();
  FUN_00d9b158(uVar6,PTR_s_Buff_Caine_AmmoPerk_02bf1878,2,1);
  FUN_00d9b0f8(uVar2);
  plVar7 = (long *)FUN_00cfaa2c();
  (**(code **)(*plVar7 + 0x50))(plVar7,"Ability01_Normal_1");
  FUN_00cf9f34(lVar3);
  uVar2 = FUN_00d9b108();
  uVar6 = FUN_00d9ab88();
  FUN_00d9b158(uVar6,PTR_s_Buff_Caine_AmmoPerk_02bf1878,2,2);
  FUN_00d9b0f8(uVar2);
  plVar7 = (long *)FUN_00cfaa2c();
  (**(code **)(*plVar7 + 0x50))(plVar7,"Ability01_Normal_2");
  FUN_00cf9f34(lVar3);
  uVar2 = FUN_00d9b108();
  uVar6 = FUN_00d9ab88();
  iVar8 = 3;
  FUN_00d9b158(uVar6,PTR_s_Buff_Caine_AmmoPerk_02bf1878,3,3);
  FUN_00d9b0f8(uVar2);
  plVar7 = (long *)FUN_00cfaa2c();
  (**(code **)(*plVar7 + 0x50))(plVar7,"Ability01_Normal_3");
  uVar2 = FUN_00cfa294(lVar3);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  lVar4 = lVar4 + 0xb0;
  FUN_00cf9f34(lVar4);
  uVar2 = FUN_00d9b108();
  uVar6 = FUN_00d9ab88();
  FUN_00d9b158(uVar6,PTR_s_Buff_Caine_AmmoPerk_02bf1878,2,1);
  FUN_00d9b0f8(uVar2);
  plVar7 = (long *)FUN_00cfaa2c();
  (**(code **)(*plVar7 + 0x50))(plVar7,"Ability01_Fast_1");
  FUN_00cf9f34(lVar4);
  uVar2 = FUN_00d9b108();
  uVar6 = FUN_00d9ab88();
  FUN_00d9b158(uVar6,PTR_s_Buff_Caine_AmmoPerk_02bf1878,2,2);
  FUN_00d9b0f8(uVar2);
  plVar7 = (long *)FUN_00cfaa2c();
  (**(code **)(*plVar7 + 0x50))(plVar7,"Ability01_Fast_2");
  FUN_00cf9f34(lVar4);
  uVar2 = FUN_00d9b108();
  uVar6 = FUN_00d9ab88();
  FUN_00d9b158(uVar6,PTR_s_Buff_Caine_AmmoPerk_02bf1878,3,3);
  FUN_00d9b0f8(uVar2);
  plVar7 = (long *)FUN_00cfaa2c();
  (**(code **)(*plVar7 + 0x50))(plVar7,"Ability01_Fast_3");
  uVar2 = FUN_00cfa294(lVar4);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  do {
    uVar2 = FUN_00e00690(PTR_s_Buff_Caine_AmmoPerk_02bf1878);
    FUN_00cf95ac(auStack_68,uVar2);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = 3;
  do {
    uVar2 = FUN_00e00690(PTR_s_Buff_Caine_AmmoPerkTalent_02bf1880);
    FUN_00cf95ac(auStack_68,uVar2);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  plVar7 = (long *)FUN_00cf9dcc(auStack_68);
  (**(code **)(*plVar7 + 0x50))(plVar7,PTR_s_Buff_Caine_B_FastCast_02bf18a8);
  FUN_00cfacb4(auStack_68);
  FUN_00cf50b0(0x3e4ccccd);
  lVar3 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e00b0c(undefined8 param_1,int *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  float fVar4;
  
  uVar1 = FUN_00d5048c();
  uVar2 = FUN_00d44be0(uVar1,PTR_s_Buff_Caine_Talent_TalentC_02bf2308);
  uVar1 = FUN_00d5048c(param_1);
  uVar3 = 5;
  if ((uVar2 & 1) != 0) {
    uVar3 = 6;
  }
  fVar4 = (float)FUN_00d59f54(uVar1,1,uVar3,0x19,0);
  *param_2 = (int)fVar4;
  return;
}




void FUN_00e00b78(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_78 [16];
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_78);
  lVar2 = FUN_00cfa6cc(auStack_78);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_78);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_78);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability02");
  plVar4 = (long *)FUN_00cfac24(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Caine_B_Dash");
  lVar2 = FUN_00d09310();
  FUN_00d0a454(*(undefined4 *)(lVar2 + 0x5e0));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfa12c(auStack_78);
  local_58 = FUN_00e00e7c;
  local_50 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,&local_58);
  local_68[0] = 0x3e99999a;
  local_60 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,local_68);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar3 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_78);
  FUN_00cf98bc(auStack_78);
  lVar2 = FUN_00cf9f7c(auStack_78);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Caine_Talent_TalentC_02bf2308;
  uVar3 = FUN_00cf9ab4(lVar2 + 0xb0);
  uVar3 = FUN_00cf44e8(0x49742400,uVar3,PTR_s_Buff_Caine_AmmoPerkTalent_02bf1880,1,0);
  FUN_00cf4598(uVar3,FUN_00e00b0c);
  uVar3 = FUN_00cf9ab4(lVar2 + 200);
  uVar3 = FUN_00cf44e8(0x49742400,uVar3,PTR_s_Buff_Caine_AmmoPerk_02bf1878,1,0);
  FUN_00cf4598(uVar3,FUN_00e00b0c);
  plVar4 = (long *)FUN_00cfac24(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Caine_B_Reload");
  lVar2 = FUN_00d09310();
  FUN_00d0a454(*(undefined4 *)(lVar2 + 0x5e4));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfa8c4(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Caine__A_02befe60);
  local_58 = (code *)((ulong)local_58 & 0xffffffff00000000);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  plVar4 = (long *)FUN_00cf9b44(auStack_78);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Caine_B_FastCast_02bf18a8);
  local_58._0_4_ = 0x3f800000;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  lVar2 = FUN_00cf9f7c(auStack_78);
  lVar5 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Caine_Talent_TalentB_02bf2318;
  plVar4 = (long *)FUN_00cfa8c4(lVar2 + 200);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Caine__C_02befe70);
  local_58 = (code *)((ulong)local_58._4_4_ << 0x20);
  local_50 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  lVar2 = FUN_00cfa6cc(auStack_78);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e00e7c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00e00e90(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  uVar2 = FUN_00cfad44(auStack_58);
  FUN_00cf2ec0(uVar2,FUN_00e00634);
  lVar3 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar2 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar2,1);
  plVar4 = (long *)FUN_00cfac24(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Caine_C_Anticipation");
  lVar3 = FUN_00d09310();
  FUN_00d0a454(*(undefined4 *)(lVar3 + 0x5ec));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00cfab04(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,"ExecuteWarning");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Caine_ExecuteWarning");
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3f333333);
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,&local_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xc0))(0x3f800000,0,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xd8))(0x3e4ccccd);
  (**(code **)(*plVar4 + 0xe0))(0x41300000,0x3fc00000);
  plVar4 = (long *)FUN_00cfaa2c(auStack_58);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability03");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3ecccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar2,0xc3,"AutoAttack");
  plVar4 = (long *)FUN_00cfac24(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Caine_C_Attack");
  lVar3 = FUN_00d09310();
  FUN_00d0a454(*(undefined4 *)(lVar3 + 0x5e8));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_00cf9f7c(auStack_58);
  lVar5 = FUN_00cefb20(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Caine_Talent_TalentC_02bf2308;
  uVar2 = FUN_00cfa834(lVar3 + 0xb0);
  FUN_00cf4dc4(uVar2,PTR_s_Buff_Caine_AmmoPerkTalent_02bf1880,0xffffffff,0);
  uVar2 = FUN_00cfa834(lVar3 + 200);
  FUN_00cf4dc4(uVar2,PTR_s_Buff_Caine_AmmoPerk_02bf1878,0xffffffff,0);
  plVar4 = (long *)FUN_00cf9afc(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Caine_AmmoControl_02bf1898);
  local_48 = FUN_00e00564;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  lVar3 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

