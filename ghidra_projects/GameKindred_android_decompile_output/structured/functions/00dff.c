// functions/00dff — 18 functions
#include "libGameKindred.h"




void FUN_00dff034(void)

{
  FUN_00dfed88("Attack","Effect_Leo_SwingLeft",0);
  return;
}




void FUN_00dff04c(void)

{
  FUN_00dfed88("AltAttack","Effect_Leo_SwingRight",0);
  return;
}




void FUN_00dff064(void)

{
  FUN_00dfed88("CritAttack","Effect_Leo_SwingCrit",2);
  return;
}




void FUN_00dff07c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_b8 [16];
  code *local_a8;
  undefined4 local_a0;
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  FUN_00cfa6cc(auStack_b8);
  uVar2 = FUN_00cfb05c(auStack_b8);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfaa2c(auStack_b8);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Ability01");
  plVar3 = (long *)FUN_00cfac24(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Leo_Ability_A_Cast");
  lVar4 = FUN_00d09310();
  FUN_00d0a4a8(*(undefined4 *)(lVar4 + 0x604));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00cfab04(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Leo_A_Impact");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  plVar3 = (long *)FUN_00cfab04(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_Sword");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Leo_Sword_Jets");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,0);
  local_98[0] = 0x3f666666;
  local_90 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_98);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7580(uVar2,FUN_00dff3bc);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfac24(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Leo_Ability_A_Impact");
  lVar4 = FUN_00d09310();
  FUN_00d0a4a8(*(undefined4 *)(lVar4 + 0x604));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_00d4d9e8(local_98);
  FUN_00d4daf4(local_98,0,1,0,0);
  FUN_00d4dba0(0x41f00000,local_98);
  FUN_00d4dabc(local_98,0x40000);
  FUN_00d4dcdc(local_98,1);
  local_58 = 0x3f266666;
  uVar2 = FUN_00cfaf84(auStack_b8);
  FUN_00cf5460(0x40c00000,uVar2,local_98,0,0,1,0);
  plVar3 = (long *)FUN_00cfa09c(auStack_b8);
  (**(code **)(*plVar3 + 0x50))();
  uVar2 = FUN_00cf9f34(auStack_b8);
  uVar5 = FUN_00d9ab88();
  FUN_00d9b128(uVar5,PTR_s_Buff_Leo_C_DashAndEmpower_02bf1860);
  FUN_00d9b0f8(uVar2);
  plVar3 = (long *)FUN_00cf9b44();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Leo_A_BleedDoT_02bf1838);
  local_a8 = FUN_00dff3d0;
  local_a0 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_a8);
  lVar4 = FUN_00cf9f7c(auStack_b8);
  lVar6 = FUN_00cefb20(lVar4 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Leo_Talent_TalentC_02bf22f8;
  plVar3 = (long *)FUN_00cf9dcc(lVar4 + 200);
  (**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Leo_C_DashAndEmpower_02bf1860);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7580(uVar2,FUN_00dff3e4);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dff3bc(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,2,0x19,0);
  return;
}




void FUN_00dff3d0(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,8,0x19,0);
  return;
}




void FUN_00dff3e4(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00dff3f8(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_c8 [16];
  code *local_b8;
  undefined4 local_b0;
  code *local_a8;
  undefined4 local_a0;
  undefined4 local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  FUN_00cfa6cc(auStack_c8);
  uVar2 = FUN_00cfb05c(auStack_c8);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfaa2c(auStack_c8);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Ability02_StartAndDash");
  plVar3 = (long *)FUN_00cfac24(auStack_c8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Leo_Ability_B_Cast");
  lVar4 = FUN_00d09310();
  FUN_00d0a4a8(*(undefined4 *)(lVar4 + 0x608));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfa294(auStack_c8);
  FUN_00cf7580(uVar2,FUN_00dff7d4);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfa12c(auStack_c8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  local_a8 = FUN_00dff7e8;
  local_a0 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa0))(plVar3,&local_a8);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  uVar2 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(auStack_c8);
  plVar3 = (long *)FUN_00cfaa2c(auStack_c8);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Ability02_Swing");
  plVar3 = (long *)FUN_00cfab04(auStack_c8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Leo_B_Impact");
  plVar3 = (long *)FUN_00cfac24(auStack_c8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Leo_Ability_B_Impact");
  lVar4 = FUN_00d09310();
  FUN_00d0a4a8(*(undefined4 *)(lVar4 + 0x608));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_00d4d9e8(&local_a8);
  FUN_00d4daf4(&local_a8,0,1,0,0);
  FUN_00d4dabc(&local_a8,0x40000);
  FUN_00d4dacc(&local_a8,0x80000);
  FUN_00d4dcdc(&local_a8,1);
  local_68 = 0x3f266666;
  uVar2 = FUN_00cfaf84(auStack_c8);
  FUN_00cf5460(0x40400000,uVar2,&local_a8,0,0,1,0);
  plVar3 = (long *)FUN_00cfa09c(auStack_c8);
  (**(code **)(*plVar3 + 0x50))();
  lVar4 = FUN_00cf9f7c(auStack_c8);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Leo_Talent_TalentB_02bf22e8;
  lVar5 = FUN_00cf9f7c(lVar4 + 200);
  lVar6 = FUN_00cefb20(lVar5 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Leo_C_DashAndEmpower_02bf1860;
  plVar3 = (long *)FUN_00cf9b44(lVar4 + 0xb0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Taunt_02beb498);
  local_b8 = FUN_00dff7fc;
  local_b0 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_b8);
  plVar3 = (long *)FUN_00cf9b44(lVar5 + 0xb0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Leo_B_Root_02bf1848);
  local_b8 = FUN_00dff7fc;
  local_b0 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_b8);
  plVar3 = (long *)FUN_00cf9b44(lVar5 + 200);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Leo_B_Slow_02bf1840);
  local_b8 = FUN_00dff7fc;
  local_b0 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_b8);
  FUN_00cf9eec(auStack_c8);
  lVar4 = FUN_00cf9f7c(auStack_c8);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Leo_Talent_TalentC_02bf22f8;
  plVar3 = (long *)FUN_00cf9dcc(lVar4 + 200);
  (**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Leo_C_DashAndEmpower_02bf1860);
  uVar2 = FUN_00cfa294(auStack_c8);
  FUN_00cf7580(uVar2,FUN_00dff810);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dff7d4(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00dff7e8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00dff7fc(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,7,0x19,0);
  return;
}




void FUN_00dff810(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,5,0x19,0);
  return;
}




void FUN_00dff824(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_128 [16];
  code *local_118;
  undefined4 local_110;
  undefined4 local_d8;
  undefined1 auStack_b8 [64];
  undefined4 local_78;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_128);
  FUN_00cfa6cc(auStack_128);
  uVar2 = FUN_00cfb05c(auStack_128);
  FUN_00cf7b3c(uVar2,1);
  FUN_00d4d9e8(auStack_b8);
  FUN_00d4daf4(auStack_b8,0,1,0,0);
  FUN_00d4dabc(auStack_b8,1);
  FUN_00d4dcdc(auStack_b8,1);
  local_78 = 0x3f266666;
  uVar2 = FUN_00cfaf84(auStack_128);
  FUN_00cf5460(0x40400000,uVar2,auStack_b8,0,0,0,0);
  lVar3 = FUN_00cf9f7c(auStack_128);
  lVar4 = FUN_00da1124(lVar3 + 0x10);
  *(undefined4 *)(lVar4 + 0x18) = 0;
  *(undefined4 *)(lVar4 + 8) = 0;
  *(undefined4 *)(lVar4 + 0x10) = 1;
  uVar2 = FUN_00cf9634(lVar3 + 0xb0);
  uVar2 = FUN_00cfc5fc(uVar2,PTR_s_Ability__Leo__C_Cyclone_02befe08);
  FUN_00cfc614(uVar2,FUN_00cfc7e4);
  lVar3 = lVar3 + 200;
  plVar5 = (long *)FUN_00cfaa2c(lVar3);
  (**(code **)(*plVar5 + 0x50))(plVar5,"Ability03_Jump");
  plVar5 = (long *)FUN_00cfab04(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"Bone_Sword");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Leo_Sword_Jets");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,0);
  local_118 = (code *)CONCAT44(local_118._4_4_,0x3f000000);
  local_110 = 1;
  (**(code **)(*plVar5 + 0x60))(plVar5,&local_118);
  plVar5 = (long *)FUN_00cfac24(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Leo_Ability_C_Cast");
  lVar4 = FUN_00d09310();
  FUN_00d0a4a8(*(undefined4 *)(lVar4 + 0x60c));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  uVar2 = FUN_00cfa294(lVar3);
  FUN_00cf7580(uVar2,FUN_00dffc28);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cf9f7c(lVar3);
  lVar6 = FUN_00cefb20(lVar4 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Leo_Talent_TalentC_02bf22f8;
  plVar5 = (long *)FUN_00cf9afc(lVar4 + 200);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Leo_C_DashAndEmpower_02bf1860);
  local_118 = FUN_00dffc3c;
  local_110 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_118);
  plVar5 = (long *)FUN_00cf9afc(lVar4 + 0xb0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Leo_C_DashAndEmpower_02bf1860);
  local_118 = FUN_00dffc50;
  local_110 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_118);
  plVar5 = (long *)FUN_00cfa12c(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x88))();
  local_118 = FUN_00dffc68;
  local_110 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa0))(plVar5,&local_118);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  uVar2 = FUN_00cfa294(lVar3);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(lVar3);
  FUN_00d4d9e8(&local_118);
  FUN_00d4daf4(&local_118,0,1,0,0);
  FUN_00d4dabc(&local_118,0x40000);
  FUN_00d4dacc(&local_118,0x80000);
  FUN_00d4dcdc(&local_118,1);
  local_d8 = 0x3f266666;
  plVar5 = (long *)FUN_00cfac24(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Leo_Ability_C_Impact");
  lVar4 = FUN_00d09310();
  FUN_00d0a4a8(*(undefined4 *)(lVar4 + 0x60c));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  uVar2 = FUN_00cfaf84(lVar3);
  FUN_00cf5460(0x40800000,uVar2,&local_118,0,0,1,0);
  plVar5 = (long *)FUN_00cfa09c(lVar3);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  (**(code **)(*plVar5 + 0x20))(plVar5,"C_JUMP_DAMAGE");
  lVar3 = FUN_00cfa6cc(auStack_128);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_128);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dffc28(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00dffc3c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,6,0x19,0);
  return;
}




void FUN_00dffc50(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320ed0c,0,9);
  return;
}




void FUN_00dffc68(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




void FUN_00dffc7c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_e8 [16];
  undefined4 local_d8 [2];
  undefined4 local_d0;
  undefined4 local_c8 [2];
  undefined4 local_c0;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_e8);
  FUN_00cfa6cc(auStack_e8);
  uVar2 = FUN_00cfb05c(auStack_e8);
  FUN_00cf7b3c(uVar2,1);
  plVar3 = (long *)FUN_00cfaa2c(auStack_e8);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Ability03_Cyclone");
  plVar3 = (long *)FUN_00cfab04(auStack_e8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_Sword");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Leo_Sword_Jets");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,0);
  local_a8[0] = 0x40000000;
  local_a0 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_a8);
  plVar3 = (long *)FUN_00cfab04(auStack_e8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Leo_C_SwingRight");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  plVar3 = (long *)FUN_00cfac24(auStack_e8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Leo_Ability_C_CycloneStart");
  lVar4 = FUN_00d09310();
  FUN_00d0a4a8(*(undefined4 *)(lVar4 + 0x610));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_00cf9afc(auStack_e8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Leo_C_CycloneDash_02bf1868);
  local_a8[0] = 0x40000000;
  local_a0 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_a8);
  FUN_00d4d9e8(local_a8);
  FUN_00d4daf4(local_a8,0,1,0,0);
  FUN_00d4dabc(local_a8,1);
  FUN_00d4dcdc(local_a8,1);
  local_68 = 0x3f266666;
  uVar2 = FUN_00cfaf84(auStack_e8);
  FUN_00cf5460(0x40400000,uVar2,local_a8,0,0,1,0);
  plVar3 = (long *)FUN_00cf9b44(auStack_e8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Leo_C_ShovedHero_02bf1850);
  local_b8[0] = 0x3ff33333;
  local_b0 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_b8);
  uVar2 = FUN_00cfa294(auStack_e8);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  FUN_00cf9eec(auStack_e8);
  uVar2 = FUN_00cfadd4(auStack_e8);
  FUN_00cf5da8(uVar2,PTR_s_Buff_Leo_C_ShovedHero_02bf1850,0,0);
  FUN_00cf5e7c();
  lVar4 = FUN_00cf9f7c(auStack_e8);
  lVar5 = FUN_00da1124(lVar4 + 0x10);
  *(undefined4 *)(lVar5 + 0x18) = 0;
  *(undefined4 *)(lVar5 + 8) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 1;
  plVar3 = (long *)FUN_00cfaa2c(lVar4 + 200);
  (**(code **)(*plVar3 + 0x50))(plVar3,"IdleCombat");
  lVar4 = lVar4 + 0xb0;
  plVar3 = (long *)FUN_00cfa684(lVar4);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x80))();
  local_b8[0] = 0x420c0000;
  local_b0 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,local_b8);
  local_c8[0] = 0x40f9999a;
  local_c0 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x28))(plVar3,local_c8);
  local_d8[0] = 0x40c00000;
  local_d0 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,local_d8);
  (**(code **)(*plVar3 + 0x48))();
  uVar2 = FUN_00cfa294(lVar4);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfa12c(lVar4);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))();
  local_b8[0] = 0x41f00000;
  local_b0 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa0))(plVar3,local_b8);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  uVar2 = FUN_00cfa294(lVar4);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(lVar4);
  plVar3 = (long *)FUN_00cfab04(lVar4);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Leo_C_SwingLeft");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  plVar3 = (long *)FUN_00cfac24(lVar4);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Leo_Ability_C_CycloneSequence");
  lVar5 = FUN_00d09310();
  FUN_00d0a4a8(*(undefined4 *)(lVar5 + 0x610));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar2 = FUN_00cfa294(lVar4);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfab04(lVar4);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Leo_C_SwingLeft");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  uVar2 = FUN_00cfa294(lVar4);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar2,0);
  lVar4 = FUN_00cfa6cc(auStack_e8);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_e8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

