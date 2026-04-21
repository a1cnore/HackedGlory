// functions/00dba — 22 functions
#include "libGameKindred.h"




void FUN_00dba2c8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,7,1,1);
  return;
}




void FUN_00dba2dc(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [24];
  long local_60 [5];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00d50ef8();
  FUN_00d4d54c(auStack_78);
  uVar2 = FUN_00cece20(*(undefined4 *)(lVar4 + 0x260));
  FUN_00d4d588(auStack_78,uVar2);
  FUN_00d4d354(auStack_78,1);
  FUN_00d55794(lVar4,auStack_b0,0);
  FUN_00d4eb08(auStack_a0,auStack_b0,1000,1);
  uVar3 = FUN_00d9e840(auStack_78,local_60,5,auStack_a0);
  if (uVar3 == 0) {
    puVar5 = &DAT_01bc8f90;
  }
  else {
    lVar4 = (long)(int)param_2;
    if (uVar3 <= param_2) {
      lVar4 = 0;
    }
    puVar5 = (undefined4 *)(local_60[lVar4] + 0x260);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*puVar5);
}




void FUN_00dba3bc(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_78);
  FUN_00cfa6cc(auStack_78);
  uVar3 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar3,"Ability03",0,1,0,"AttackToIdle");
  uVar4 = FUN_00cfab94(auStack_78);
  lVar5 = FUN_00d09310();
  uVar3 = FUN_00d098d8(*(undefined4 *)(lVar5 + 0x1d8));
  FUN_00cf40b8(0x3f800000,uVar3,uVar4,"Sound_Fortress_Howl_01",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar4,"Sound_Fortress_Howl_04");
  FUN_00cf41bc(uVar4,"Sound_Fortress_Howl_06");
  FUN_00cf41bc(uVar4,"Sound_Fortress_Howl_12");
  uVar3 = FUN_00cfaa74(auStack_78);
  FUN_00cf3428(0,uVar3,"Effect_Fortress_Lunge_Ribbons",1,"Bone_Shoulders",0,1,0,0);
  uVar3 = FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3f4ccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfaa74(auStack_78);
  FUN_00cf32cc(0,uVar3,"Effect_Fortress_C_Howl",0,0,1,0,0);
  FUN_00cf98bc(auStack_78);
  uVar3 = FUN_00cf9ab4(auStack_78);
  FUN_00cf456c(uVar3,PTR_s_Buff_Fortress_C_Steroid_02bf0618,FUN_00dba71c,1,0);
  FUN_00cf9eec(auStack_78);
  uVar3 = FUN_00cfafcc(auStack_78);
  FUN_00cf52e0(uVar3,"FortressMinion");
  FUN_00cfa63c(auStack_78);
  FUN_00cf9eec(auStack_78);
  lVar5 = FUN_00cf9f7c(auStack_78);
  lVar6 = FUN_00cefb20(lVar5 + 0x10);
  lVar5 = lVar5 + 0xb0;
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Fortress_Talent_CriticalWou_02bf1ea8;
  FUN_00cf98bc(lVar5);
  uVar3 = FUN_00cf9ab4(lVar5);
  FUN_00cf44e8(0xbf800000,uVar3,PTR_s_Buff_Fortress_CriticalWoundsStac_02bf1ec8,3,0);
  FUN_00cf9eec(lVar5);
  uVar3 = FUN_00ceace8();
  iVar2 = FUN_00ceb12c(uVar3,1);
  if (0 < iVar2) {
    if (4 < iVar2) {
      iVar2 = 5;
    }
    lVar5 = 0;
    ppuVar9 = &PTR_FUN_0281fb98;
    do {
      plVar7 = (long *)FUN_00cfb1c4(auStack_78);
      plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7,"*FortressMinion*",1);
      plVar7 = (long *)(**(code **)(*plVar7 + 0x20))(plVar7,*ppuVar9);
      uVar3 = (**(code **)(*plVar7 + 0x50))();
      plVar7 = (long *)FUN_00cf9b8c(auStack_78);
      plVar7 = (long *)(**(code **)(*plVar7 + 0x50))
                                 (plVar7,PTR_s_Buff_FortressMinion_Lifetime_02bf0640,uVar3);
      (**(code **)(*plVar7 + 0x20))(plVar7,ppuVar9[-1]);
      lVar6 = FUN_00cf9f7c(auStack_78);
      lVar8 = FUN_00cefb20(lVar6 + 0x10);
      *(undefined **)(lVar8 + 8) = PTR_s_Buff_Fortress_Talent_CriticalWou_02bf1ea8;
      plVar7 = (long *)FUN_00cf9b8c(lVar6 + 0xb0);
      (**(code **)(*plVar7 + 0x50))(plVar7,PTR_s_Buff_Fortress_CriticalWoundsWolf_02bf1ed0,uVar3);
      lVar5 = lVar5 + 1;
      ppuVar9 = ppuVar9 + 2;
    } while (lVar5 < iVar2);
  }
  lVar5 = FUN_00cfa6cc(auStack_78);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  FUN_00cfb0a4(auStack_78);
  FUN_00cfb5c4(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dba71c(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,9,1);
  return;
}




void FUN_00dba730(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfab94(auStack_38);
  lVar2 = FUN_00d09310();
  uVar4 = FUN_00d098d8(*(undefined4 *)(lVar2 + 0x1d8));
  FUN_00cf4164(0x3f800000,uVar4,uVar3,"Sound_Fortress_Ability_C_1",0,0,0xffffffff,0,1);
  FUN_00cf41bc(uVar3,"Sound_Fortress_Ability_C_2");
  uVar4 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar4,"Effect_Fortress_C_MiniWolf_Spawn",0,0,1,0,0);
  uVar4 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar4,"Summon_Spawn",0,1,0,"AttackToIdle");
  uVar4 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar4,0);
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




void FUN_00dba86c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfa9e4(auStack_38);
  FUN_00cf3048(uVar2,"Die",0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_38);
  FUN_00cf32cc(0,uVar2,"Effect_Fortress_C_MiniWolf_Despawn",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3f800000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa714(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dba934(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  FUN_00d50ef8();
  uVar1 = FUN_00d5cf60();
  *param_3 = uVar1;
  return;
}




void FUN_00dba95c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_58 [16];
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfb05c(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_58);
  FUN_00cf32cc(0,uVar2,"Effect_Fortress_Attack_Alt_Hit",0,0,1,0,0);
  plVar3 = (long *)FUN_00cfac6c(auStack_58);
  (**(code **)(*plVar3 + 0x50))(plVar3,"minionAttack");
  FUN_00cf99dc(auStack_58);
  plVar3 = (long *)FUN_00cfa09c(auStack_58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_48 = FUN_00dbab64;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x10))(plVar3,&local_48,0,1);
  lVar4 = FUN_00cf9f7c(auStack_58);
  lVar5 = FUN_00dbb304(lVar4 + 0x10);
  if (PTR_s_Ability__Fortress__B_02beea40 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar8 = (uint)(byte)*PTR_s_Ability__Fortress__B_02beea40;
    uVar6 = 0x811c9dc5;
    pbVar7 = PTR_s_Ability__Fortress__B_02beea40;
    if (*PTR_s_Ability__Fortress__B_02beea40 != 0) {
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
  plVar3 = (long *)FUN_00cf9b44(lVar4 + 0xb0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Fortress_Bleeding_02bf0620);
  local_48 = FUN_00dbab78;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  (**(code **)(*plVar3 + 0x28))(plVar3,FUN_00dba934);
  FUN_00cf9eec(auStack_58);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00dbab64(undefined8 param_1)

{
  FUN_00d092ac(param_1,2,5,9,1);
  return;
}




void FUN_00dbab78(undefined8 param_1)

{
  FUN_00d092ac(param_1,1,7,9,1);
  return;
}




void FUN_00dbab8c(void)

{
  FUN_00dba95c("Attack");
  return;
}




void FUN_00dbab98(void)

{
  FUN_00dba95c("AltAttack");
  return;
}




void FUN_00dbaba4(void)

{
  FUN_00dba95c("Attack");
  return;
}




void FUN_00dbabb0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfc038(PTR_s_Buff_Fortress_Withdraw_02bf0658);
  FUN_00cf95ac(auStack_38,uVar2);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbac1c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cf9f7c(auStack_48);
  lVar3 = FUN_00cf2970(lVar2 + 0x10);
  *(code **)(lVar3 + 8) = FUN_00cfc020;
  plVar4 = (long *)FUN_00cf9afc(lVar2 + 0xb0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Emote_Taunt_02beb470);
  local_38[0] = 0x40000000;
  local_30 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_38);
  uVar5 = FUN_00cfaa74(lVar2 + 0xb0);
  FUN_00cf32cc(0,uVar5,"Effect_Fortress_Taunt",0,0,1,1,0);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dbacfc(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dba2dc(param_1,0);
  *param_4 = uVar1;
  return;
}




void FUN_00dbad24(undefined8 param_1,float *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float __x;
  
  uVar3 = FUN_00d50ef8();
  uVar4 = FUN_00ceace8();
  uVar1 = FUN_00d55870(uVar3);
  iVar2 = FUN_00ceb12c(uVar4,uVar1);
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  __x = (6.2831855 / (float)iVar2) * 0.0 - 3.1415927;
  FUN_00d55794(uVar3,param_2,0);
  fVar5 = sinf(__x);
  *param_2 = *param_2 + fVar5 * 3.0;
  fVar5 = cosf(__x);
  param_2[2] = param_2[2] + fVar5 * 3.0;
  FUN_00d557c4(uVar3,param_3,&DAT_03218f68);
  return;
}




void FUN_00dbae00(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dba2dc(param_1,1);
  *param_4 = uVar1;
  return;
}




void FUN_00dbae28(undefined8 param_1,float *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float __x;
  
  uVar3 = FUN_00d50ef8();
  uVar4 = FUN_00ceace8();
  uVar1 = FUN_00d55870(uVar3);
  iVar2 = FUN_00ceb12c(uVar4,uVar1);
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  __x = 6.2831855 / (float)iVar2 - 3.1415927;
  FUN_00d55794(uVar3,param_2,0);
  fVar5 = sinf(__x);
  *param_2 = *param_2 + fVar5 * 3.0;
  fVar5 = cosf(__x);
  param_2[2] = param_2[2] + fVar5 * 3.0;
  FUN_00d557c4(uVar3,param_3,&DAT_03218f68);
  return;
}




void FUN_00dbaefc(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dba2dc(param_1,2);
  *param_4 = uVar1;
  return;
}




void FUN_00dbaf24(undefined8 param_1,float *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float __x;
  
  uVar3 = FUN_00d50ef8();
  uVar4 = FUN_00ceace8();
  uVar1 = FUN_00d55870(uVar3);
  iVar2 = FUN_00ceb12c(uVar4,uVar1);
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  __x = (6.2831855 / (float)iVar2 + 6.2831855 / (float)iVar2) - 3.1415927;
  FUN_00d55794(uVar3,param_2,0);
  fVar5 = sinf(__x);
  *param_2 = *param_2 + fVar5 * 3.0;
  fVar5 = cosf(__x);
  param_2[2] = param_2[2] + fVar5 * 3.0;
  FUN_00d557c4(uVar3,param_3,&DAT_03218f68);
  return;
}




void FUN_00dbaffc(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00dba2dc(param_1,3);
  *param_4 = uVar1;
  return;
}

