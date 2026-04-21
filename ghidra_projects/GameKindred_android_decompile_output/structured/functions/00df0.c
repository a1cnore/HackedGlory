// functions/00df0 — 19 functions
#include "libGameKindred.h"




void FUN_00df0270(undefined8 param_1)

{
  FUN_00d092ac(param_1,3,6,9,1);
  return;
}




void FUN_00df0284(undefined8 param_1)

{
  FUN_00d092ac(param_1,3,5,9,1);
  return;
}




void FUN_00df0298(undefined8 param_1)

{
  FUN_00d092ac(param_1,3,4,9,1);
  return;
}




void FUN_00df02ac(undefined8 param_1)

{
  FUN_00defc78(param_1,"Ylva_Trap_ShatteredFang");
  return;
}




void FUN_00df02b8(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cf9cf4(auStack_38);
  FUN_00cf2e48(uVar2,FUN_00df02ac);
  plVar3 = (long *)FUN_00cfb1c4(auStack_38);
  (**(code **)(*plVar3 + 0x50))(plVar3,"*Ylva_Trap_ShatteredFang*",0);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df033c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfb05c(auStack_58);
  plVar2 = (long *)FUN_00cfaa2c(auStack_58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  plVar2 = (long *)FUN_00cfac24(auStack_58);
  if (param_4 == 0x89) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Magnus_Crit_Attack_1");
    plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Magnus_Crit_Attack_2");
    lVar5 = *plVar2;
    pcVar4 = "Sound_Magnus_Crit_Attack_3";
  }
  else {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Magnus_Auto_Attack_1");
    plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Magnus_Auto_Attack_2");
    lVar5 = *plVar2;
    pcVar4 = "Sound_Magnus_Auto_Attack_3";
  }
  plVar2 = (long *)(**(code **)(lVar5 + 0x18))(plVar2,pcVar4);
  lVar5 = FUN_00d09310();
  FUN_00d0a3ac(*(undefined4 *)(lVar5 + 0x548));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar3,FUN_00cf76f0);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  plVar2 = (long *)FUN_00cfab04(auStack_58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,"A_Projectile");
  (**(code **)(*plVar2 + 0x48))(plVar2,param_2);
  uVar3 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar3,param_4,param_3);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df04ec(void)

{
  FUN_00df033c("Attack","Effect_Magnus_BasicAttack_Cast","A_Projectile",0x87);
  return;
}




void FUN_00df050c(void)

{
  FUN_00df033c("AltAttack","Effect_Magnus_BasicAttack_Cast","A_Projectile",0x88);
  return;
}




void FUN_00df052c(void)

{
  FUN_00df033c("CritAttack","Effect_Magnus_BasicAttack_Crit_Cast","A_Projectile",0x89);
  return;
}




void FUN_00df054c(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfb05c(auStack_58);
  plVar2 = (long *)FUN_00cfaa2c(auStack_58);
  (**(code **)(*plVar2 + 0x58))(plVar2,"PerkProcAttack");
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7570(uVar3,FUN_00cf76f0);
  FUN_00cf7578(uVar3,FUN_00cfb9b0);
  plVar2 = (long *)FUN_00cfab04(auStack_58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Bone_RightHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Magnus_Perk_Mark_Snap");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x80))(plVar2,0);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_00cfac24(auStack_58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Magnus_Perk_Attack_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Magnus_Perk_Attack_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Magnus_Perk_Attack_3");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Magnus_Perk_Attack_4");
  lVar4 = FUN_00d09310();
  FUN_00d0a3ac(*(undefined4 *)(lVar4 + 0x550));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_00cfa0e4(auStack_58);
  (**(code **)(*plVar2 + 0x58))(plVar2,1);
  plVar2 = (long *)FUN_00cfa0e4(auStack_58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  local_48 = FUN_00df07ac;
  local_40 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_48,1,1);
  FUN_00cf99dc(auStack_58);
  plVar2 = (long *)FUN_00cf9b44(auStack_58);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))
                             (plVar2,PTR_s_Buff_Magnus_PerkProc_DamagePFX_02bf1488);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3f800000);
  local_40 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_48);
  lVar4 = FUN_00cf9f7c(auStack_58);
  lVar5 = FUN_00cefb20(lVar4 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Magnus_Talent_TalentB_02bf21c0;
  uVar3 = FUN_00cf9d84(lVar4 + 200);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Magnus_Perk_SpellMark_02bf1480);
  FUN_00cf9eec(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df07ac(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,0x13);
  return;
}




void FUN_00df07b8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_58);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_58);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability01");
  plVar4 = (long *)FUN_00cfab04(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,"A_Projectile");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Magnus_A_Cast");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_48[0] = 0x3f800000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4,local_48);
  plVar4 = (long *)FUN_00cfac24(auStack_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Magnus_Ability_A_Cast");
  lVar2 = FUN_00d09310();
  FUN_00d0a3ac(*(undefined4 *)(lVar2 + 0x558));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfa294(auStack_58);
  FUN_00cf7580(uVar3,FUN_00df0954);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_58);
  uVar3 = FUN_00cfcad8(uVar3,0x8a,"A_Projectile");
  FUN_00cfcba8(uVar3,1);
  lVar2 = FUN_00cfa6cc(auStack_58);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df0954(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00df0968(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_48 [16];
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_48);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability02");
  plVar4 = (long *)FUN_00cfab04(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Magnus_B_Cast");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_38[0] = 0x3f800000;
  local_30 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4,local_38);
  plVar4 = (long *)FUN_00cfac24(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Magnus_Ability_B_Cast");
  lVar2 = FUN_00d09310();
  FUN_00d0a3ac(*(undefined4 *)(lVar2 + 0x560));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7580(uVar3,FUN_00df0af4);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  uVar3 = FUN_00cfcad8(uVar3,0x8c,"A_Projectile");
  FUN_00cfcba8(uVar3,1);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df0af4(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00df0b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  FUN_00d557c4(uVar2,local_48,&DAT_03218f68);
  uVar2 = FUN_00d5048c(param_1);
  FUN_00d55794(uVar2,param_4,0);
  *param_4 = CONCAT44(local_48._4_4_ * 0.0 + (float)((ulong)*param_4 >> 0x20),
                      local_48._0_4_ * 1.2 + (float)*param_4);
  *(float *)(param_4 + 1) = local_40 * 1.2 + *(float *)(param_4 + 1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df0bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 local_58 [8];
  float local_50;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  FUN_00d55794(uVar2,local_48,0);
  FUN_00d557c4(uVar2,local_58,&DAT_03218f68);
  fVar3 = (float)FUN_00d50cc8(param_1);
  *param_4 = CONCAT44((local_58._4_4_ * fVar3 + local_48._4_4_) - local_58._4_4_ * 0.0,
                      (local_58._0_4_ * fVar3 + local_48._0_4_) - local_58._0_4_ * 1.2);
  *(float *)(param_4 + 1) = (fVar3 * local_50 + local_40) - local_50 * 1.2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_00df0c80(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  uVar1 = FUN_00d50ef8();
  lVar3 = *(long *)(param_2 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  uVar2 = FUN_00d6bbac(lVar3,DAT_031bbf48,0);
  auVar5 = FUN_00d59f54(uVar1,2,2,0x19,0);
  if ((uVar2 & 1) != 0) {
    fVar4 = (float)FUN_00d59f54(uVar1,2,5,0x19,0);
    auVar5 = ZEXT416((uint)(auVar5._0_4_ * (fVar4 + 1.0)));
  }
  return auVar5;
}




void FUN_00df0d38(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_138 [16];
  code *local_128;
  undefined4 local_120;
  undefined1 auStack_118 [64];
  undefined4 local_d8;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 local_78;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_138);
  lVar2 = FUN_00cfa6cc(auStack_138);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_138);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_138);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability03");
  plVar4 = (long *)FUN_00cfab04(auStack_138);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,"Front");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Magnus_C_Warning");
  plVar4 = (long *)(**(code **)(*plVar4 + 0xe0))(0x41b00000,0x40400000);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_b8[0] = 0x3f800000;
  local_b0 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,local_b8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xc0))(0x3f800000,0,0);
  (**(code **)(*plVar4 + 0xd8))(0x3e4ccccd);
  plVar4 = (long *)FUN_00cfab04(auStack_138);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_LeftHand");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Magnus_C_HandsPFX");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,0);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)FUN_00cfab04(auStack_138);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_RightHand");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Magnus_C_HandsPFX");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,0);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)FUN_00cfac24(auStack_138);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Magnus_Ability_C_Cast");
  lVar2 = FUN_00d09310();
  FUN_00d0a3ac(*(undefined4 *)(lVar2 + 0x568));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfa294(auStack_138);
  FUN_00cf7580(uVar3,FUN_00df127c);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfab04(auStack_138);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,"Front");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Magnus_C_CastPFX");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_b8[0] = 0x3f800000;
  local_b0 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4,local_b8);
  FUN_00d4d9e8(local_b8);
  FUN_00d4dabc(local_b8,0x40000);
  FUN_00d4daf4(local_b8,0,1,0,0);
  FUN_00d4dcdc(local_b8,1);
  local_78 = 0x3f266666;
  FUN_00d4d9e8(auStack_118);
  FUN_00d4dabc(auStack_118,0x40000);
  FUN_00d4dabc(auStack_118,1);
  FUN_00d4daf4(auStack_118,0,1,0,0);
  FUN_00d4dcdc(auStack_118,1);
  local_d8 = 0x3f266666;
  uVar3 = FUN_00cfaf3c(auStack_138);
  uVar3 = FUN_00cf5ac8(0x3fc00000,uVar3,FUN_00df0b08,FUN_00df0bb8);
  FUN_00cf5ae0(uVar3,local_b8);
  plVar4 = (long *)FUN_00cfa09c(auStack_138);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  local_128 = FUN_00df0c80;
  local_120 = 5;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_128,1,2);
  plVar4 = (long *)FUN_00cf9b44(auStack_138);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Magnus_Perk_SpellMark_02bf1480);
  local_128 = FUN_00d90804;
  local_120 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_128);
  plVar4 = (long *)FUN_00cf9b44(auStack_138);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Magnus_C_DamagePFX_02bf14a0);
  local_128._0_4_ = 0x3f800000;
  local_120 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_128);
  FUN_00cf9eec(auStack_138);
  uVar3 = FUN_00cfaf3c(auStack_138);
  uVar3 = FUN_00cf5ac8(0x3fc00000,uVar3,FUN_00df0b08,FUN_00df0bb8);
  FUN_00cf5ae0(uVar3,auStack_118);
  lVar2 = FUN_00cf9f7c(auStack_138);
  lVar5 = FUN_00db5fb8(lVar2 + 0x10);
  if (PTR_s_Ability__Magnus__A_02bef918 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar8 = (uint)(byte)*PTR_s_Ability__Magnus__A_02bef918;
    uVar6 = 0x811c9dc5;
    pbVar7 = PTR_s_Ability__Magnus__A_02bef918;
    if (*PTR_s_Ability__Magnus__A_02bef918 != 0) {
      do {
        uVar9 = (uint)pbVar7[1];
        uVar6 = (uVar6 ^ uVar8) * 0x1000193;
        uVar8 = uVar9;
        pbVar7 = pbVar7 + 1;
      } while (uVar9 != 0);
    }
  }
  *(uint *)(lVar5 + 8) = uVar6;
  *(undefined4 *)(lVar5 + 0xc) = 1;
  plVar4 = (long *)FUN_00cf9b44(lVar2 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Magnus_C_DeathChecker_02bf14a8);
  local_128 = (code *)CONCAT44(local_128._4_4_,0x3e99999a);
  local_120 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_128);
  lVar2 = FUN_00cfa6cc(auStack_138);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_138);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

