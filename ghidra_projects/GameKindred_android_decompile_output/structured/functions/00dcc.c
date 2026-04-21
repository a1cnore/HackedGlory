// functions/00dcc — 24 functions
#include "libGameKindred.h"




void FUN_00dcc0a0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cfb05c(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"AltAttack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f19999a);
  FUN_00cf7578(uVar2,0);
  FUN_00cf99dc(auStack_38);
  uVar2 = FUN_00cfa00c(auStack_38);
  FUN_00cf6bb0(uVar2,FUN_00dca4cc);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcc16c(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_b0 [88];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar8 = FUN_00ceab48();
  if ((uVar8 & 1) == 0) goto LAB_00dcc2bc;
  lVar9 = FUN_00d5048c(param_1);
  lVar10 = *(long *)(lVar9 + 0x18);
  while ((lVar10 != 0 && (*(int *)(*(long *)(lVar10 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar10 = *(long *)(lVar10 + 0x20);
  }
  iVar4 = FUN_00d535a4(lVar10,0);
  if (iVar4 == 0) {
LAB_00dcc208:
    lVar10 = FUN_00d5029c(param_1);
    iVar4 = strcmp(*(char **)(lVar10 + 8),PTR_s_Ability__Kestrel__A_02beef68);
    if (iVar4 != 0) goto LAB_00dcc2bc;
  }
  else {
    uVar5 = FUN_00d53a30(lVar10,0);
    uVar6 = FUN_00d53a44(lVar10,0);
    if (uVar6 <= uVar5) goto LAB_00dcc208;
  }
  fVar11 = (float)FUN_00d59f54(lVar9,0,3,9,1);
  fVar13 = *(float *)(*(long *)(lVar9 + 0x40) + 0x128);
  fVar12 = (float)FUN_00d59f54(lVar9,0,4,9,1);
  puVar3 = PTR_s_Buff_Kestrel_Reloading_02bf0a10;
  uVar1 = *(undefined4 *)(lVar9 + 0x260);
  uVar7 = FUN_00ceb350();
  FUN_00cfe864(fVar11 / (fVar13 * fVar12 + 1.0),0,0,auStack_b0,uVar1,uVar1,puVar3,uVar7,1,0,0);
  FUN_00ce20fc(auStack_b0);
LAB_00dcc2bc:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcc2ec(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined4 local_6c;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d5048c(param_1);
    lVar6 = *(long *)(lVar5 + 0x18);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar6 = *(long *)(lVar6 + 0x20);
    }
    uVar4 = FUN_00d6bbac(lVar6,DAT_031ba1b8,&local_6c);
    if ((uVar4 & 1) != 0) {
      fVar7 = (float)FUN_00d6b9f8(lVar6,local_6c);
      fVar8 = (float)FUN_00d59f54(lVar5,0,5,0x19,0);
      if (fVar8 <= fVar7) {
        FUN_00d009d0(auStack_68,*(undefined4 *)(lVar5 + 0x260),local_6c);
      }
      else {
        lVar6 = *(long *)(lVar5 + 0x18);
        while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02e3ef78))) {
          lVar6 = *(long *)(lVar6 + 0x20);
        }
        uVar1 = *(undefined4 *)(lVar5 + 0x260);
        uVar3 = FUN_00d53a44(lVar6,0);
        FUN_00d040ec(auStack_68,uVar1,0,uVar3,1);
      }
      FUN_00ce20fc(auStack_68);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcc430(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  uVar2 = FUN_00cf9cf4(auStack_58);
  FUN_00cf2e48(uVar2,FUN_00dcc2ec);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Kestrel_Reloading_02bf0a10);
  FUN_00cf9eec(auStack_58);
  FUN_00cfb05c(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar3 = FUN_00cfab94(auStack_58);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09a7c(*(undefined4 *)(lVar4 + 600));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Kestrel_Attack_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Kestrel_Attack_3");
  FUN_00cf41bc(uVar3,"Sound_Kestrel_Attack_5");
  FUN_00cf41bc(uVar3,"Sound_Kestrel_Attack_6");
  FUN_00cf99dc(auStack_58);
  uVar2 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar2,param_2,param_3);
  FUN_00cf9eec(auStack_58);
  FUN_00cf98bc(auStack_58);
  uVar2 = FUN_00cf9d84(auStack_58);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Kestrel_Stealth_02bf0a50);
  FUN_00cf9eec(auStack_58);
  uVar2 = FUN_00cf9cf4(auStack_58);
  FUN_00cf2e48(uVar2,FUN_00dcc16c);
  FUN_00cf2e50();
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcc610(void)

{
  FUN_00dcc430("Attack",0x32,"DefaultAttack_Spawn");
  return;
}




void FUN_00dcc628(void)

{
  FUN_00dcc430("AltAttack",0x32,"AltAttack_Spawn");
  return;
}




void FUN_00dcc640(void)

{
  FUN_00dcc430("CritAttack",0x33,"CritAttack_Spawn");
  return;
}




void FUN_00dcc658(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cf9d84(auStack_38);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Kestrel_Stealth_02bf0a50);
  FUN_00cf9eec(auStack_38);
  uVar2 = FUN_00cfc038(PTR_s_Buff_Withdraw_02beb458);
  FUN_00cf95ac(auStack_38,uVar2);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcc6ec(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d59f54(param_2,0,6,0x19,0);
  *param_3 = fVar1 + -0.3;
  return;
}




void FUN_00dcc730(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,6,0x19,0);
  return;
}




void FUN_00dcc744(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfa6cc(auStack_48);
  lVar2 = FUN_00cf9f7c(auStack_48);
  lVar3 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Kestrel_Talent_GlimmerVolle_02bf1f28;
  uVar4 = FUN_00cfb05c(lVar2 + 0xb0);
  FUN_00cf7b3c(uVar4,1);
  FUN_00cfb05c(lVar2 + 200);
  uVar4 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar4,"Ability01",0,1,0,"AttackToIdleCombat");
  FUN_00cf98bc(auStack_48);
  uVar4 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar4,PTR_s_Buff_Kestrel_Reloading_02bf0a10);
  uVar5 = FUN_00ceab48();
  uVar4 = FUN_00cfa294(auStack_48);
  if ((uVar5 & 1) == 0) {
    FUN_00cf7570(uVar4,FUN_00dcc6ec);
    uVar6 = FUN_00cfab94(auStack_48);
    lVar2 = FUN_00d09310();
    uVar4 = FUN_00d09a7c(*(undefined4 *)(lVar2 + 0x25c));
    FUN_00cf4164(0x3f800000,uVar4,uVar6,"Sound_Kestrel_Ability_A_3",0,0,0xffffffff,0,1);
    uVar4 = FUN_00cfa294(auStack_48);
    FUN_00cf7478(0x3e99999a);
  }
  else {
    FUN_00cf7580(uVar4,FUN_00dcc730);
  }
  FUN_00cf7578(uVar4,0);
  uVar4 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar4,PTR_s_Buff_Kestrel_Stealth_02bf0a50);
  FUN_00cf9eec(auStack_48);
  lVar2 = FUN_00cf9f7c(auStack_48);
  lVar3 = FUN_00cefb20(lVar2 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Kestrel_Talent_GlimmerVolle_02bf1f28;
  uVar4 = FUN_00cfb17c(lVar2 + 200);
  uVar4 = FUN_00cfcad8(uVar4,0x34,"CenterBody");
  FUN_00cfcba8(uVar4,1);
  uVar4 = FUN_00cfb17c(lVar2 + 0xb0);
  uVar4 = FUN_00cfcad8(uVar4,0x34,"TalentVolleyLeft");
  FUN_00cfcba8(uVar4,1);
  uVar4 = FUN_00cfb17c(lVar2 + 0xb0);
  uVar4 = FUN_00cfcad8(uVar4,0x34,"TalentVolleyRight");
  FUN_00cfcba8(uVar4,1);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfacb4(auStack_48);
  FUN_00cf50b0(0x3e99999a);
  uVar4 = FUN_00cf9cf4(auStack_48);
  FUN_00cf2e48(uVar4,FUN_00dcc16c);
  FUN_00cf2e50();
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcc9ac(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d5048c();
  FUN_00cfbe3c(uVar1,"Kestrel_Trap",2);
  return;
}




void FUN_00dcc9cc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  FUN_00cf9ea4(auStack_38);
  uVar2 = FUN_00cf9cf4(auStack_38);
  FUN_00cf2e48(uVar2,FUN_00dcc9ac);
  uVar3 = FUN_00cfab94(auStack_38);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09a7c(*(undefined4 *)(lVar4 + 0x26c));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Kestrel_Ability_B_Set",1,0,0xffffffff,0,1);
  plVar5 = (long *)FUN_00cfb1c4(auStack_38);
  (**(code **)(*plVar5 + 0x50))(plVar5,"*Kestrel_Trap*",1);
  FUN_00cf98bc(auStack_38);
  uVar2 = FUN_00cf9ab4(auStack_38);
  FUN_00cf456c(uVar2,PTR_s_Buff_Kestrel_Stealth_02bf0a50,FUN_00dccb10,1,0);
  FUN_00cf9eec(auStack_38);
  lVar4 = FUN_00cf9f7c(auStack_38);
  lVar6 = FUN_00cefb20(lVar4 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Kestrel_Talent_ActiveReload_02bf1f08;
  uVar2 = FUN_00cfa7a4(lVar4 + 0xb0);
  FUN_00cf4fa4(uVar2,0,10,1);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dccb10(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,5,0x19,0);
  return;
}




void FUN_00dccb24(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Spawn",0,1,0,"AttackToIdle");
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dccb9c(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_00d50ef8();
  FUN_00d5cf60();
  uVar1 = FUN_00d9e390();
  uVar2 = FUN_00d59f54(uVar1,1,9,0x19,0);
  *param_2 = uVar2;
  return;
}




void FUN_00dccbdc(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  FUN_00d50ef8();
  uVar1 = FUN_00d5cf60();
  *param_3 = uVar1;
  return;
}




void FUN_00dccc04(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_b8 [16];
  code *local_a8;
  undefined4 local_a0;
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  FUN_00cf98bc(auStack_b8);
  uVar2 = FUN_00cf9d84(auStack_b8);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Kestrel_TrapPerk_Stealth_02bf0a20);
  uVar2 = FUN_00cf9d84(auStack_b8);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Kestrel_Trap_Ready_02bf0a30);
  uVar2 = FUN_00cf9ab4(auStack_b8);
  FUN_00cf44e8(0x3f800000,uVar2,PTR_s_Buff_Kestrel_Trap_Exploding_02bf0a40,1,1);
  uVar2 = FUN_00cfa9e4(auStack_b8);
  FUN_00cf3048(uVar2,"Hide",0,1,0,0);
  FUN_00cf9eec(auStack_b8);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4dabc(auStack_98,0x40000);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  uVar2 = FUN_00cfaf84(auStack_b8);
  uVar2 = FUN_00cf5460(0,uVar2,auStack_98,0,0,1,0);
  FUN_00cf55c8(uVar2,FUN_00dccb9c);
  plVar3 = (long *)FUN_00cf9b44(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_a8 = FUN_00dcce10;
  local_a0 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_a8);
  plVar3 = (long *)FUN_00cf9b44(auStack_b8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Kestrel_Trap_Damage_02bf0a48);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0x3dcccccd);
  local_a0 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_a8);
  (**(code **)(*plVar3 + 0x28))(plVar3,FUN_00dccbdc);
  FUN_00cf9eec(auStack_b8);
  uVar2 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3f800000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa36c(auStack_b8);
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcce10(undefined8 param_1)

{
  FUN_00d092ac(param_1,1,10,9,0);
  return;
}




void FUN_00dcce24(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float __x;
  undefined1 local_58 [8];
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d5048c();
  FUN_00d55794(uVar2,local_58,0);
  fVar3 = (float)FUN_00d51820(param_4);
  fVar3 = fVar3 - local_58._0_4_;
  param_2 = param_2 - local_58._4_4_;
  param_3 = param_3 - local_50;
  __x = fVar3 * fVar3 + param_2 * param_2 + param_3 * param_3;
  uVar2 = DAT_03218f68;
  fVar4 = DAT_03218f70;
  if (1e-08 <= __x) {
    fVar4 = SQRT(__x);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(__x);
    }
    uVar2 = CONCAT44(param_2 / fVar4,fVar3 / fVar4);
    fVar4 = param_3 / fVar4;
  }
  fVar3 = (float)FUN_00d50cc8(param_4);
  *param_5 = CONCAT44(local_58._4_4_ + (float)((ulong)uVar2 >> 0x20) * fVar3,
                      local_58._0_4_ + (float)uVar2 * fVar3);
  *(float *)(param_5 + 1) = fVar4 * fVar3 + local_50;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dccf28(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d59f54(uVar1,2,3,0x19,0);
  fVar3 = (float)FUN_00d59f54(uVar1,2,9,0x19,0);
  *param_3 = fVar2 + fVar3;
  return;
}




void FUN_00dccf8c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00dccfa0(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,9,0x19,0);
  return;
}




void FUN_00dccfb4(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  ulong uVar15;
  float fVar16;
  float __x;
  float local_9f0;
  float local_9ec;
  float local_9e8;
  undefined1 auStack_9e0 [8];
  undefined1 local_9d8 [8];
  float local_9d0;
  float local_9c4;
  float local_9c0;
  float fStack_9bc;
  float local_9b8;
  float local_9b0;
  float fStack_9ac;
  float local_9a8;
  undefined1 auStack_9a0 [88];
  undefined1 auStack_948 [88];
  undefined1 auStack_8f0 [112];
  undefined1 auStack_880 [60];
  undefined4 local_844;
  undefined1 auStack_810 [88];
  undefined1 auStack_7b8 [40];
  undefined1 auStack_790 [120];
  undefined1 auStack_718 [64];
  undefined4 local_6d8;
  long local_6b8 [200];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uVar8 = FUN_00ceab48();
  if ((uVar8 & 1) != 0) {
    lVar9 = FUN_00d5048c(param_1);
    FUN_00dcce24(param_1,&local_9b0);
    FUN_00d4d9e8(auStack_718);
    FUN_00d4dabc(auStack_718,0x2000000);
    FUN_00d4daf4(auStack_718,0,1,0,lVar9);
    FUN_00d4dcdc(auStack_718,1);
    local_6d8 = 0x3f800000;
    FUN_00d4e61c(auStack_790,auStack_718);
    FUN_00d55794(lVar9,&local_9c0,0);
    local_9d0 = local_9b8;
    local_9c4 = local_9a8;
    FUN_00d4e838(0x3f800000,auStack_790,local_9d8);
    FUN_00d4eb08(auStack_7b8,&local_9c0,200,0);
    iVar5 = FUN_00d9e840(auStack_790,local_6b8,200,auStack_7b8);
    puVar4 = PTR_s_Buff_Kestrel_C_ClientImpact_02bf0a58;
    puVar3 = PTR_s_Buff_GloballyVisible_02bebad8;
    if (iVar5 < 1) {
      uVar1 = *(undefined4 *)(lVar9 + 0x260);
      uVar7 = FUN_00ceb350();
      FUN_00cfe864(0x3f800000,local_9b0,local_9a8,auStack_880,uVar1,uVar1,puVar4,uVar7,1,0,0);
      puVar11 = auStack_880;
    }
    else {
      uVar1 = *(undefined4 *)(lVar9 + 0x260);
      uVar7 = *(undefined4 *)(local_6b8[0] + 0x260);
      uVar14 = FUN_00d59f54(lVar9,2,8,0x19,0);
      uVar6 = FUN_00ceb350();
      FUN_00cfe864(uVar14,0,0,auStack_810,uVar1,uVar7,puVar3,uVar6,1,0,0);
      FUN_00ce20fc(auStack_810);
      uVar8 = FUN_00d59f54(lVar9,2,5,5,0);
      uVar15 = FUN_00d59f54(lVar9,2,5,8,0);
      if ((*(byte *)(local_6b8[0] + 0x2f5) >> 4 & 1) != 0) {
        fVar12 = (float)FUN_00d59f54(lVar9,2,7,0x19,0);
        uVar8 = (ulong)(uint)((float)uVar8 * fVar12);
        fVar12 = (float)FUN_00d59f54(lVar9,2,7,0x19,0);
        uVar15 = (ulong)(uint)((float)uVar15 * fVar12);
      }
      FUN_00d9e1e0(lVar9,local_6b8[0],auStack_9e0);
      uVar1 = *(undefined4 *)(lVar9 + 0x260);
      uVar7 = *(undefined4 *)(local_6b8[0] + 0x260);
      lVar10 = FUN_00d5029c(param_1);
      FUN_00daa148(uVar8,auStack_880,uVar1,uVar7,0,2,auStack_9e0,*(undefined8 *)(lVar10 + 8),0,1);
      local_844 = FUN_00d59f54(lVar9,2,6,0x19,0);
      FUN_00910c08(auStack_880);
      uVar1 = *(undefined4 *)(lVar9 + 0x260);
      uVar7 = *(undefined4 *)(local_6b8[0] + 0x260);
      lVar10 = FUN_00d5029c(param_1);
      FUN_00daa148(uVar15,auStack_8f0,uVar1,uVar7,1,2,auStack_9e0,*(undefined8 *)(lVar10 + 8),0,1);
      FUN_00910c08(auStack_8f0);
      local_9b0 = local_9b0 - local_9c0;
      local_9a8 = local_9a8 - local_9b8;
      fVar16 = local_9b0 * local_9b0 + (fStack_9ac - fStack_9bc) * (fStack_9ac - fStack_9bc) +
               local_9a8 * local_9a8;
      fVar12 = (float)DAT_03218f68;
      fVar13 = DAT_03218f70;
      if (1e-08 <= fVar16) {
        fVar13 = SQRT(fVar16);
        if (NAN(fVar13)) {
          fVar13 = sqrtf(fVar16);
        }
        fVar12 = local_9b0 / fVar13;
        fVar13 = local_9a8 / fVar13;
      }
      FUN_00d55794(local_6b8[0],&local_9f0,0);
      __x = (local_9f0 - local_9c0) * (local_9f0 - local_9c0) +
            (local_9ec - fStack_9bc) * (local_9ec - fStack_9bc) +
            (local_9e8 - local_9b8) * (local_9e8 - local_9b8);
      fVar16 = SQRT(__x);
      if (NAN(fVar16)) {
        fVar16 = sqrtf(__x);
      }
      puVar3 = PTR_s_Buff_Kestrel_C_ClientImpact_02bf0a58;
      local_9f0 = local_9c0 + fVar12 * fVar16;
      local_9e8 = fVar13 * fVar16 + local_9b8;
      local_9ec = 1.2;
      uVar1 = *(undefined4 *)(lVar9 + 0x260);
      uVar7 = FUN_00ceb350();
      FUN_00cfe864(0x3f800000,local_9f0,local_9e8,auStack_948,uVar1,uVar1,puVar3,uVar7,1,1,0);
      FUN_00ce20fc(auStack_948);
      puVar3 = PTR_s_Buff_Kestrel_C_ClientImpactTarge_02bf0a60;
      uVar1 = *(undefined4 *)(lVar9 + 0x260);
      uVar7 = *(undefined4 *)(local_6b8[0] + 0x260);
      uVar6 = FUN_00ceb350();
      FUN_00cfe864(0x3f800000,local_9f0,local_9e8,auStack_9a0,uVar1,uVar7,puVar3,uVar6,1,1,0);
      puVar11 = auStack_9a0;
    }
    FUN_00ce20fc(puVar11);
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

