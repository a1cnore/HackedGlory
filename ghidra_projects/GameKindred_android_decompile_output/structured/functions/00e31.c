// functions/00e31 — 25 functions
#include "libGameKindred.h"




void FUN_00e31058(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a1dac();
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




undefined8 * FUN_00e310a8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x98;
    if (uVar2 == *(ushort *)(param_1 + 0x4c012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c010) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c014) = *(int *)(param_1 + 0x4c014) + 1;
    *puVar4 = 0;
    puVar4[1] = 0;
    FUN_00d468c8(puVar4);
    *puVar4 = &PTR_FUN_0281b3c8;
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00e31184(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x00e311b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Malene_LightAura");
  return;
}




void FUN_00e311bc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00e213ac(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Malene__C2_02bef210);
  lVar1 = FUN_00d65010(param_1);
  lVar1 = lVar1 + 0x10;
  uVar3 = FUN_00d45f10(lVar1);
  FUN_00d9886c(uVar3,PTR_s_Ability__Malene__C1_02bef208,PTR_s_Ability__Malene__C2_02bef210);
  uVar3 = FUN_00d45f10(lVar1);
  FUN_00d9886c(uVar3,PTR_s_Ability__Malene__B1_02bef1f8,PTR_s_Ability__Malene__B2_02bef200);
  uVar3 = FUN_00d45f10(lVar1);
  FUN_00d9886c(uVar3,PTR_s_Ability__Malene__A1_02bef1e8,PTR_s_Ability__Malene__A2_02bef1f0);
  plVar2 = (long *)FUN_00e31de0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"DarkForm");
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Malene_DarkAura");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  plVar2 = (long *)FUN_00d3bcb8(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_LightDarkSwitch");
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  lVar1 = FUN_00d64980(param_1);
  plVar2 = (long *)FUN_00e213ac(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e31328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Malene__C1_02bef208);
  return;
}




void FUN_00e3132c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Idle","DarkIdle");
  plVar2 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Move","DarkMove");
  plVar2 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveStart","DarkMoveStart");
  plVar2 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveStop","DarkMoveStop");
  plVar2 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"IdleBrush","DarkIdleBrush");
  plVar2 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveBrush","DarkMoveBrush");
  plVar2 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Sprint","DarkSprint");
  plVar2 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Attack","DarkAttack");
  plVar2 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"AltAttack","DarkAltAttack");
  plVar2 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"CritAttack","DarkCritAttack");
  plVar2 = (long *)FUN_00d2df44(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Withdraw","DarkWithdraw");
  plVar2 = (long *)FUN_00d2df44(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00e314f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,"Die",&UNK_01be6736);
  return;
}




void FUN_00e314f8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Mask");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Malene_LightEmpReady");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e31564(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Mask");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Malene_DarkEmpReady");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e315d0(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e3162c;
  local_30 = 3;
  FUN_00d42c70(param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3162c(undefined8 param_1)

{
  FUN_00d59f54(param_1,5,3,0x19,0);
  return;
}




void FUN_00e31640(undefined8 param_1)

{
  FUN_00d42ce8(param_1,0x23,"Effect_Malene_A_Root",0);
  return;
}




void FUN_00e31654(undefined8 *param_1,float *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  
  FUN_00d67b84(*param_1);
  uVar1 = FUN_00d9e390();
  fVar4 = (float)FUN_00d59f54(uVar1,2,3,0x19,0);
  *param_2 = fVar4;
  uVar2 = FUN_00d67b84(*param_1);
  uVar3 = FUN_00d44008(uVar2,PTR_s_Buff_Malene_Talent_TalentC_02bee088);
  if ((uVar3 & 1) != 0) {
    fVar4 = (float)FUN_00d5a3d0(uVar1,DAT_031ac348,0,9);
    *param_2 = fVar4 * *param_2;
  }
  *param_3 = 0xbf800000;
  return;
}




void FUN_00e316f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d67b78(param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,0,1,0,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4db48(0x40800000,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e317a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00d67b84(*param_1);
  uVar1 = FUN_00d9e390();
  FUN_00d5a3d0(uVar1,DAT_031ac348,2,9);
  return;
}




void FUN_00e317d4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d44be0(uVar2,PTR_s_Buff_Malene_Talent_TalentC_02bee088);
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_00d64080(param_1);
    plVar5 = (long *)FUN_00d2cc5c(lVar4 + 0x10);
    lVar4 = *plVar5;
    pcVar7 = "Sound_Malene_Good_Ability_B_Shield";
  }
  else {
    lVar4 = FUN_00d63f30(param_1);
    plVar5 = (long *)FUN_00d2cc5c(lVar4 + 0x10);
    lVar4 = *plVar5;
    pcVar7 = "Sound_Malene_Good_Ability_B_Talent";
  }
  plVar5 = (long *)(**(code **)(lVar4 + 0x38))(plVar5,pcVar7);
  lVar4 = FUN_00d09310();
  FUN_00d0a0b8(*(undefined4 *)(lVar4 + 0x4a0));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar4 = FUN_00d657dc(param_1);
  lVar4 = lVar4 + 0x10;
  uVar6 = FUN_00d29f44(lVar4);
  local_58 = FUN_00e31a10;
  local_50 = 3;
  FUN_00d47690(uVar6,1,&local_58);
  plVar5 = (long *)FUN_00d2dfe4(lVar4);
  (**(code **)(*plVar5 + 0x30))(plVar5,4,FUN_00e31654);
  plVar5 = (long *)FUN_00d2945c(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"CenterBody");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x90))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Malene_B1_Buff");
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  uVar3 = FUN_00d44be0(uVar2,PTR_s_Buff_Malene_Talent_TalentC_02bee088);
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_00d65e5c(param_1);
    FUN_00d29f94(lVar4 + 0x10);
  }
  else {
    lVar4 = FUN_00d64980(param_1);
    lVar4 = lVar4 + 0x10;
    plVar5 = (long *)FUN_00d2945c(lVar4);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"CenterBody");
    plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Malene_TalentC_Explosion");
    (**(code **)(*plVar5 + 0xb0))(plVar5,1);
    uVar2 = FUN_00d31490(lVar4);
    FUN_00d9ca38(uVar2,FUN_00e316f4);
    plVar5 = (long *)FUN_00d2b818(lVar4);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x40))();
    local_58 = FUN_00e317a4;
    local_50 = 4;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_58,1,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e31a10(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,0x19,0);
  return;
}




void FUN_00e31a24(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2a160(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x50))();
  plVar2 = (long *)FUN_00d2779c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"AbilityB2_Start");
  (**(code **)(*plVar2 + 0x28))();
  lVar1 = FUN_00d65010(param_1);
  lVar1 = lVar1 + 0x10;
  FUN_00d29fe4(lVar1);
  uVar3 = FUN_00d29c84(lVar1);
  FUN_00d46b64(uVar3,0x4704);
  FUN_00e30f38(lVar1);
  plVar2 = (long *)FUN_00e13b48(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"AbilityB2_Start");
  uVar3 = FUN_00d29a18(lVar1);
  FUN_00d46cdc(uVar3,0x11);
  lVar1 = FUN_00d64980(param_1);
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e31b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Malene_DarkFormAnimOverride_02bf0c50);
  return;
}




void FUN_00e31b04(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e31b60;
  local_30 = 3;
  FUN_00d42c70(param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e31b60(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,5,0x19,0);
  return;
}




void FUN_00e31b74(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d67b78(param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,0,1,0,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d4db48(0x40800000,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e31c24(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  FUN_00d67b84();
  uVar1 = FUN_00d9e390();
  FUN_00d59f54(uVar1,3,4,0x19,0);
  FUN_00d67d04(param_1);
  lVar2 = FUN_00d65010(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Malene_B2_SpikesWarning");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,0);
  (**(code **)(*plVar3 + 0x90))();
  uVar1 = FUN_00d6483c(param_1);
  lVar2 = FUN_00d48f64(uVar1,FUN_00e31e30);
  uVar1 = FUN_00d31490(lVar2 + 0x10);
  FUN_00d9ca38(uVar1,FUN_00e31b74);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Shadow Burst Damage",3);
  lVar2 = FUN_00d64980(param_1);
  FUN_00d394e4(lVar2 + 0x10);
  return;
}




void FUN_00e31d24(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Malene_B2_SpikesWarning");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,0);
  (**(code **)(*plVar2 + 0x90))();
  lVar1 = FUN_00d64980(param_1);
  uVar3 = FUN_00d31490(lVar1 + 0x10);
  FUN_00d9ca38(uVar3,FUN_00e31b74);
  plVar2 = (long *)FUN_00d2b818(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00e31ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,"Shadow Burst Damage",3);
  return;
}




void FUN_00e31de0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a2dbc();
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




void FUN_00e31e30(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fc00000;
  return;
}




void FUN_00e31e3c(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 local_98;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_98);
  lVar5 = FUN_00d66d28(local_98);
  puVar3 = PTR_s_Buff_Ozo_HealAmp_02bf0ca0;
  uVar1 = *(undefined4 *)(lVar5 + 0x260);
  uVar4 = FUN_00ceb350();
  FUN_00cfe864(0xbf800000,0,0,auStack_90,uVar1,uVar1,puVar3,uVar4,1,0,0);
  FUN_00ce20fc(auStack_90);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e31edc(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onActorLevelUpName_02bed550;
    uVar4 = FUN_00e6a474(PTR_s_onActorLevelUpName_02bed550);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e31e3c;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  }
  uVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,uVar7);
  FUN_00d3e534();
  uVar7 = FUN_00d2a504();
  FUN_00d42654(auStack_50,uVar7);
  FUN_00d3e534();
  uVar7 = FUN_00d2cb84();
  FUN_00d42654(auStack_50,uVar7);
  FUN_00d3e888(0xbf800000,0,0,uVar7,PTR_s_Buff_Ozo_HealAmp_02bf0ca0,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar7 = FUN_00d2a6c0();
  FUN_00d42654(auStack_50,uVar7);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

