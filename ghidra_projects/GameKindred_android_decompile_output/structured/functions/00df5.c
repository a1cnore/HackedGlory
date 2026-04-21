// functions/00df5 — 18 functions
#include "libGameKindred.h"




void FUN_00df5130(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_b8 [16];
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined1 auStack_98 [64];
  undefined4 local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  FUN_00cfa6cc(auStack_b8);
  uVar2 = FUN_00cfb05c(auStack_b8);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfab04(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,"CenterBody");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero052_A");
  plVar3 = (long *)FUN_00cfab04(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,"CenterBody");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero052_Ball_RushStun");
  FUN_00d4d9e8(auStack_98);
  FUN_00d4dabc(auStack_98,0x40000);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dcdc(auStack_98,1);
  local_58 = 0x3f266666;
  uVar2 = FUN_00cfaf3c(auStack_b8);
  uVar2 = FUN_00cf5ac8(0x3f800000,uVar2,FUN_00df4584,FUN_00df45ac);
  FUN_00cf5ae0(uVar2,auStack_98);
  plVar3 = (long *)FUN_00cf9b44(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_a8[0] = 0x40000000;
  local_a0 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_a8);
  FUN_00cf9eec(auStack_b8);
  lVar4 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df5310(undefined8 param_1,undefined8 param_2,undefined4 param_3)

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
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
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




void FUN_00df53ec(undefined8 param_1,undefined8 param_2)

{
  FUN_00df5310("Attack",param_2,0);
  return;
}




void FUN_00df53fc(undefined8 param_1,undefined8 param_2)

{
  FUN_00df5310("AltAttack",param_2,0);
  return;
}




void FUN_00df540c(undefined8 param_1,undefined8 param_2)

{
  FUN_00df5310("CritAttack",param_2,2);
  return;
}




void FUN_00df541c(void)

{
  undefined8 uVar1;
  undefined8 in_x3;
  
  uVar1 = FUN_00d5048c();
  FUN_00d55794(uVar1,in_x3,0);
  return;
}




void FUN_00df5444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *param_4 = CONCAT44(local_58._4_4_ * fVar3 + local_48._4_4_,
                      local_58._0_4_ * fVar3 + local_48._0_4_);
  *(float *)(param_4 + 1) = fVar3 * local_50 + local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df54ec(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_b8 [16];
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined1 auStack_98 [64];
  undefined4 local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  FUN_00cfa6cc(auStack_b8);
  uVar2 = FUN_00cfb05c(auStack_b8);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfab04(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero053_A_Beam_Warning");
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar2,0);
  plVar3 = (long *)FUN_00cfab04(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero053_A_Beam");
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4dabc(auStack_98,0x40000);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dcdc(auStack_98,1);
  local_58 = 0x3f266666;
  uVar2 = FUN_00cfaf3c(auStack_b8);
  uVar2 = FUN_00cf5ac8(0x3f4ccccd,uVar2,FUN_00df541c,FUN_00df5444);
  FUN_00cf5ae0(uVar2,auStack_98);
  plVar3 = (long *)FUN_00cf9b44(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_a8[0] = 0x40000000;
  local_a0 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_a8);
  FUN_00cf9eec(auStack_b8);
  lVar4 = FUN_00cfa6cc(auStack_b8);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df56dc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_48);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  uVar3 = FUN_00cfcad8(uVar3,0xa8,"CenterBody");
  FUN_00cfcba8(uVar3,1);
  FUN_00cfcbc4(0xc1a00000);
  uVar3 = FUN_00cfb17c(auStack_48);
  uVar3 = FUN_00cfcad8(uVar3,0xa9,"CenterBody");
  FUN_00cfcba8(uVar3,1);
  FUN_00cfcbc4(0xc1200000);
  uVar3 = FUN_00cfb17c(auStack_48);
  uVar3 = FUN_00cfcad8(uVar3,0xaa,"CenterBody");
  FUN_00cfcba8(uVar3,1);
  FUN_00cfcbc4(0);
  uVar3 = FUN_00cfb17c(auStack_48);
  uVar3 = FUN_00cfcad8(uVar3,0xab,"CenterBody");
  FUN_00cfcba8(uVar3,1);
  FUN_00cfcbc4(0x41200000);
  uVar3 = FUN_00cfb17c(auStack_48);
  uVar3 = FUN_00cfcad8(uVar3,0xac,"CenterBody");
  FUN_00cfcba8(uVar3,1);
  FUN_00cfcbc4(0x41a00000);
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




void FUN_00df585c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_48);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_48);
  uVar3 = FUN_00cfcad8(uVar3,0xad,"CenterBody");
  FUN_00cfcba8(uVar3,1);
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




void FUN_00df5940(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  code *pcVar6;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  plVar2 = (long *)FUN_00cfaa2c(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  plVar2 = (long *)FUN_00cfac24(auStack_48);
  pcVar6 = *(code **)(*plVar2 + 0x58);
  if (param_3 == 2) {
    pcVar5 = "Sound_Anka_Crit_Attack";
  }
  else {
    plVar2 = (long *)(*pcVar6)(plVar2,"Sound_Anka_Auto_Attack_1");
    pcVar5 = "Sound_Anka_Auto_Attack_2";
    pcVar6 = *(code **)(*plVar2 + 0x18);
  }
  plVar2 = (long *)(*pcVar6)(plVar2,pcVar5);
  lVar3 = FUN_00d09310();
  FUN_00d0a25c(*(undefined4 *)(lVar3 + 0x4dc));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar4 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar4,FUN_00cf76f0);
  FUN_00cf7578(uVar4,FUN_00cfb9b0);
  plVar2 = (long *)FUN_00cfab04(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))();
  (**(code **)(*plVar2 + 0x48))(plVar2,param_2);
  plVar2 = (long *)FUN_00cfa0e4(auStack_48);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  plVar2 = (long *)FUN_00cfac24(auStack_48);
  pcVar6 = *(code **)(*plVar2 + 0x58);
  if (param_3 == 2) {
    pcVar5 = "Sound_Anka_Crit_Impact";
  }
  else {
    plVar2 = (long *)(*pcVar6)(plVar2,"Sound_Anka_Auto_Impact_1");
    pcVar5 = "Sound_Anka_Auto_Impact_2";
    pcVar6 = *(code **)(*plVar2 + 0x18);
  }
  plVar2 = (long *)(*pcVar6)(plVar2,pcVar5);
  lVar3 = FUN_00d09310();
  FUN_00d0a25c(*(undefined4 *)(lVar3 + 0x4dc));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df5b0c(void)

{
  FUN_00df5940("Attack","Effect_Anka_AA",0);
  return;
}




void FUN_00df5b24(void)

{
  FUN_00df5940("AltAttack","Effect_Anka_AA_Alt",0);
  return;
}




void FUN_00df5b3c(void)

{
  FUN_00df5940("CritAttack","Effect_Anka_AA_Crit",2);
  return;
}




float FUN_00df5b54(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = FUN_00d50ef8();
  fVar3 = (float)thunk_FUN_00d086f0(uVar1,0,3);
  lVar2 = *(long *)(param_2 + 0x40);
  fVar4 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
          (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
  if (DAT_031b26b0 <= fVar4) {
    fVar4 = DAT_031b26b0;
  }
  fVar5 = DAT_031b25f0;
  if (DAT_031b25f0 <= fVar4) {
    fVar5 = fVar4;
  }
  return fVar3 * (fVar5 - *(float *)(lVar2 + 0x308));
}




void FUN_00df5bd8(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  plVar2 = (long *)FUN_00cfaa2c(auStack_48);
  (**(code **)(*plVar2 + 0x58))(plVar2,"PerkAttack");
  plVar2 = (long *)FUN_00cfac24(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Anka_Perk_Attack");
  lVar3 = FUN_00d09310();
  FUN_00d0a25c(*(undefined4 *)(lVar3 + 0x4dc));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar4 = FUN_00cfa294(auStack_48);
  FUN_00cf7570(uVar4,FUN_00cf76f0);
  FUN_00cf7578(uVar4,FUN_00cfb9b0);
  plVar2 = (long *)FUN_00cfab04(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Anka_AA_Perk");
  (**(code **)(*plVar2 + 0x78))(plVar2,0);
  plVar2 = (long *)FUN_00cfa0e4(auStack_48);
  (**(code **)(*plVar2 + 0x58))(plVar2,1);
  plVar2 = (long *)FUN_00cfa0e4(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  local_38 = FUN_00df5b54;
  local_30 = 5;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_38,1,1);
  plVar2 = (long *)FUN_00cfac24(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Anka_Perk_Impact");
  lVar3 = FUN_00d09310();
  FUN_00d0a25c(*(undefined4 *)(lVar3 + 0x4dc));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  FUN_00cf98bc(auStack_48);
  uVar4 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar4,PTR_s_Buff_Anka_Perk_Ready_02bf15a8);
  FUN_00cf9eec(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df5d9c(void)

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
  plVar4 = (long *)FUN_00cfaa2c(auStack_38);
  (**(code **)(*plVar4 + 0x50))(plVar4,"AbilityA1");
  plVar4 = (long *)FUN_00cfac24(auStack_38);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Anka_Ability_A1_Cast");
  lVar2 = FUN_00d09310();
  FUN_00d0a25c(*(undefined4 *)(lVar2 + 0x4e0));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar3,0);
  plVar4 = (long *)FUN_00cfab04(auStack_38);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Anka_A");
  (**(code **)(*plVar4 + 0x78))(plVar4,0);
  uVar3 = FUN_00cfb17c(auStack_38);
  uVar3 = FUN_00cfcad8(uVar3,0xae,"CenterBody");
  FUN_00cfcba8(uVar3,0);
  FUN_00cf9ea4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df5ef4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_78 [16];
  undefined1 local_68 [8];
  float local_60;
  undefined8 local_58;
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00d51964();
  if (iVar2 == 0) {
    FUN_00d55794(param_2,param_3,0);
  }
  else {
    FUN_00d557c4(param_2,&local_58,&DAT_03218f68);
    fVar5 = (float)local_58 * (float)local_58 + local_58._4_4_ * local_58._4_4_ +
            local_50 * local_50;
    if (1e-08 <= fVar5) {
      fVar4 = SQRT(fVar5);
      if (NAN(fVar4)) {
        fVar4 = sqrtf(fVar5);
      }
      local_58 = CONCAT44((float)((ulong)local_58 >> 0x20) / fVar4,(float)local_58 / fVar4);
      local_50 = local_50 / fVar4;
    }
    else {
      local_50 = DAT_03218f70;
      local_58 = DAT_03218f68;
    }
    uVar3 = FUN_00d51944(param_1,0);
    FUN_00d55794(uVar3,local_68,0);
    uVar3 = FUN_00d51944(param_1,0);
    FUN_00d557c4(uVar3,auStack_78,&DAT_03218f68);
    FUN_00d51944(param_1,0);
    iVar2 = FUN_00d5bad4();
    if (iVar2 == 3) {
      fVar5 = 3.0;
    }
    else {
      FUN_00d51944(param_1,0);
      iVar2 = FUN_00d5bad4();
      if (iVar2 == 2) {
        fVar5 = 4.0;
      }
      else {
        fVar5 = 2.2;
      }
    }
    *(float *)(param_3 + 1) = local_50 * fVar5 + local_60;
    *param_3 = CONCAT44(local_58._4_4_ * fVar5 + local_68._4_4_,
                        (float)local_58 * fVar5 + local_68._0_4_);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

