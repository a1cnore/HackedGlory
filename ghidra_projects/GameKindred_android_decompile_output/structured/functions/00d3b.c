// functions/00d3b — 18 functions
#include "libGameKindred.h"




float FUN_00d3b030(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar2 = FUN_00d426b0(*param_1);
  uVar1 = FUN_00d66cf4(*param_1);
  fVar3 = (float)FUN_00d59f54(uVar2,1,9,0x19,0);
  return 1.0 - fVar3 * (float)uVar1;
}




void FUN_00d3b094(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d6592c();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"OverHead");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero009_Weakness");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,2);
  FUN_00d4bc24();
  FUN_00d4bd10();
  lVar2 = FUN_00d4bc38();
  uVar4 = FUN_00d39a54(lVar2 + 0x10);
  FUN_00d3e604(uVar4,FUN_00d3afc4);
  lVar2 = FUN_00d66d28(param_1);
  if ((*(byte *)(lVar2 + 0x2f6) & 1) == 0) {
    uVar4 = FUN_00d64464(param_1);
    FUN_00d4bbf8(uVar4,4);
    lVar2 = FUN_00d4bc10();
    plVar3 = (long *)FUN_00d2b728(lVar2 + 0x10);
    local_38 = FUN_00d3b030;
    local_30 = 4;
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3b1b8(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined4 local_9c;
  undefined8 local_98;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    FUN_00d69554(param_1,&local_98,&local_9c);
    lVar8 = FUN_00d66d28(local_98);
    lVar9 = *(long *)(lVar8 + 0x18);
    while ((lVar9 != 0 && (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar9 = *(long *)(lVar9 + 0x20);
    }
    iVar4 = FUN_00d5412c(lVar9,local_9c);
    iVar5 = FUN_00d5401c(lVar9,PTR_s_Ability__Krul__B_02bef0a8);
    puVar3 = PTR_s_Buff_Krul_AbilityPerk_Spectral_S_02beba10;
    if (iVar4 == iVar5) {
      uVar1 = *(undefined4 *)(lVar8 + 0x260);
      uVar6 = FUN_00ceb350();
      FUN_00cfe864(0xbf800000,0,0,auStack_90,uVar1,uVar1,puVar3,uVar6,1,0,0);
      FUN_00ce20fc(auStack_90);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3b2c4(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00d69294(param_1,&local_a8,&local_b0);
  lVar7 = FUN_00d66d28(local_a8);
  uVar5 = FUN_00d66cf4(local_a8);
  if (1 < uVar5) {
    lVar9 = *(long *)(local_b0 + 0x20);
    uVar8 = FUN_00daa578(local_b0,lVar7);
    puVar4 = PTR_s_Buff_Krul_Spectral_Smite_Debuf_02beba08;
    if (((((uVar8 & 1) != 0) && (lVar9 != 0)) && ((*(uint *)(lVar9 + 0x2f4) & 0x400060) != 0)) &&
       ((*(byte *)(local_b0 + 0xc) >> 2 & 1) != 0)) {
      uVar1 = *(undefined4 *)(lVar7 + 0x260);
      uVar2 = *(undefined4 *)(lVar9 + 0x260);
      uVar10 = FUN_00d59f54(lVar7,1,8,0x19,0);
      uVar6 = FUN_00ceb350();
      FUN_00cfe864(uVar10,0,0,auStack_a0,uVar1,uVar2,puVar4,uVar6,1,0,0);
      FUN_00ce20fc(auStack_a0);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3b3e8(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onAbilityUpgradedName_02bed538;
  uVar4 = FUN_00e6a474(PTR_s_onAbilityUpgradedName_02bed538);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d3b1b8;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onAfterApplyDamageName_02bed608;
  uVar4 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d3b2c4;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 8);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3b4fc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  ulong uVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d2965c();
  FUN_00d42654(auStack_50,uVar3);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  uVar3 = FUN_00d66d28(param_1);
  uVar6 = FUN_00d59f54(uVar3,0,2,0x19,0);
  lVar2 = FUN_00d66d28(param_1);
  uVar4 = FUN_00d44008(*(undefined4 *)(lVar2 + 0x260),
                       PTR_s_Buff_Krul_Talent_DeadMansBarrier_02bedfd0);
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_00d66d28(param_1);
    fVar5 = (float)FUN_00d5a3d0(uVar3,DAT_031abfe8,0,9);
    uVar6 = (ulong)(uint)((float)uVar6 * fVar5);
  }
  FUN_00d3e534();
  uVar3 = FUN_00d2b564();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40908(uVar6,uVar3,4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3b60c(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_a8;
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    FUN_00d69224(param_1,&local_a8);
    FUN_00d67b84(local_a8);
    lVar8 = FUN_00d9e390();
    iVar5 = FUN_00d5c238(lVar8,1);
    if (iVar5 != 0) {
      uVar1 = *(undefined4 *)(lVar8 + 0x260);
      lVar9 = FUN_00d66d28(local_a8);
      puVar4 = PTR_s_Buff_Krul_Spectral_Smite_Debuf_02beba08;
      uVar2 = *(undefined4 *)(lVar9 + 0x260);
      uVar10 = FUN_00d59f54(lVar8,1,8,0x19,0);
      uVar6 = FUN_00ceb350();
      FUN_00cfe864(uVar10,0,0,auStack_a0,uVar1,uVar2,puVar4,uVar6,1,0,0);
      FUN_00ce20fc(auStack_a0);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3b708(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28();
  FUN_00d55794(uVar1,param_4,0);
  *param_3 = 0x41a00000;
  return;
}




void FUN_00d3b740(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  local_38[0] = FUN_00d59f54(uVar2,2,6,0x19,0);
  local_30 = 1;
  FUN_00d42c70(param_1,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3b7b8(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00d67b84();
  uVar5 = FUN_00d9e390();
  lVar6 = FUN_00d67c60(param_1);
  uVar4 = FUN_00e6a474("slowAmount");
  uVar4 = FUN_0091ed5c("slowAmount",uVar4,0x12345678);
  (**(code **)(*(long *)(lVar6 + 0x100) + 8))(lVar6 + 0x100,uVar4);
  lVar6 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onApplyName_02bed4f8;
  uVar4 = FUN_00e6a474(PTR_s_onApplyName_02bed4f8);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar6 + 0xf8);
  *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d3b60c;
  *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  uVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_80,uVar7);
  FUN_00d3e534();
  uVar7 = FUN_00d2a504();
  FUN_00d42654(auStack_80,uVar7);
  fVar8 = (float)FUN_00d67b3c(param_1);
  fVar9 = (float)FUN_00d59f54(uVar5,2,4,0x19,0);
  fVar10 = (float)FUN_00d59f54(uVar5,2,5,0x19,0);
  FUN_00d3e534();
  uVar7 = FUN_00d2cb84();
  FUN_00d42654(auStack_80,uVar7);
  FUN_00d3e888(fVar10 * (fVar8 / fVar9),0,0,uVar7,PTR_s_Buff_Stunned_02beb430,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar7 = FUN_00d2cb84();
  FUN_00d42654(auStack_80,uVar7);
  puVar3 = PTR_s_Buff_Krul_Hellrazor_Slow_02beba20;
  uVar11 = FUN_00d67b34(param_1);
  FUN_00d3e888(uVar11,0,0,uVar7,puVar3,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar7 = FUN_00d2a6c0();
  FUN_00d42654(auStack_80,uVar7);
  lVar6 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onBeforeReApplyName_02bed500;
  uVar4 = FUN_00e6a474(PTR_s_onBeforeReApplyName_02bed500);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar6 + 0xf8);
  *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d3b60c;
  *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_80,lVar6 + 8);
  FUN_00d3e534();
  uVar7 = FUN_00d2a504();
  FUN_00d42654(auStack_80,uVar7);
  fVar8 = (float)FUN_00d67b3c(param_1);
  fVar9 = (float)FUN_00d59f54(uVar5,2,4,0x19,0);
  fVar10 = (float)FUN_00d59f54(uVar5,2,5,0x19,0);
  FUN_00d3e534();
  uVar5 = FUN_00d2cb84();
  FUN_00d42654(auStack_80,uVar5);
  FUN_00d3e888(fVar10 * (fVar8 / fVar9),0,0,uVar5,PTR_s_Buff_Stunned_02beb430,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar5 = FUN_00d2cb84();
  FUN_00d42654(auStack_80,uVar5);
  puVar3 = PTR_s_Buff_Krul_Hellrazor_Slow_02beba20;
  uVar7 = FUN_00d67b34(param_1);
  FUN_00d3e888(uVar7,0,0,uVar5,puVar3,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar5 = FUN_00d2a6c0();
  FUN_00d42654(auStack_80,uVar5);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_80,lVar6 + 0x30);
  FUN_00d3e534();
  uVar5 = FUN_00d294ac();
  FUN_00d42654(auStack_80,uVar5);
  uVar5 = FUN_00d47dc4(uVar5,"CenterBody");
  FUN_00da2040(uVar5,"Effect_Hero009_Sword_Impaled");
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3bb98(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d4403c(param_1,1);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_40,uVar3);
  uVar3 = FUN_00d47d9c(uVar3);
  uVar3 = FUN_00da2040(uVar3,"Effect_Hero009_Withdraw");
  FUN_00da20dc(uVar3,1);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_40,uVar3);
  uVar3 = FUN_00d47dec(uVar3,"Bone_Sword");
  uVar3 = FUN_00da2040(uVar3,"Effect_Hero009_Withdraw_2");
  FUN_00da20dc(uVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3bc68(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a21c8();
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




void FUN_00d3bcb8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a2904();
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




void FUN_00d3bd08(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Ringo_Ability_B_Holster");
  (**(code **)(*plVar2 + 0x28))(0x3f266666);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"OverHead");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ringo_Perk_DoubleDown");
  plVar2 = (long *)FUN_00d2ccac(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d3bdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Ringo__CritAttack_Doubl_02bef3a0);
  return;
}




void FUN_00d3bdb0(void)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d63b38();
  lVar1 = FUN_00d4b7c8();
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d3bddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Ringo_DoubleDown_CritNext_02beba38);
  return;
}




void FUN_00d3bde0(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00d3be3c;
  local_30 = 3;
  FUN_00d42c70(param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d3be3c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,3,0x19,0);
  return;
}




void FUN_00d3be50(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Ringo_Ability_B_Cloak");
  (**(code **)(*plVar3 + 0x28))(0x3f800000);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ringo_Ability02_Aura");
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightHand");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ringo_Ability02_Hands");
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightHand_Aura");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ringo_Ability02_ArmAura");
  plVar3 = (long *)FUN_00d2df94(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Ringo_Ability_B_Loop");
  (**(code **)(*plVar3 + 0x28))(0x3f266666);
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Attack","Ability02_Attack");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"AltAttack","Ability02_AltAttack");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"CritAttack","Ability02_CritAttack");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Idle","Ability02_Idle");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Move","Ability02_Move");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"FastMove","Ability02_Move");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Sprint","Ability02_Move");
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStop","Ability02_MoveStop");
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_58 = FUN_00d3c1a4;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xf,1,&local_58);
  uVar4 = FUN_00d29f44(lVar2);
  local_58 = FUN_00d3c1b8;
  local_50 = 3;
  FUN_00d47690(uVar4,1,&local_58);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,2);
  FUN_00d4bc10();
  lVar2 = FUN_00d4bc38();
  FUN_00d2cf2c(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"BonusCrystalDamage",1);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Ringo_Ability_B_Holster");
  (**(code **)(*plVar3 + 0x28))(0x3f800000);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

