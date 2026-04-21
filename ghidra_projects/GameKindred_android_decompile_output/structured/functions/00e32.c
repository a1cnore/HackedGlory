// functions/00e32 — 28 functions
#include "libGameKindred.h"




void FUN_00e32014(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00e32b84();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d41068(uVar3,0x23,2,FUN_00e3209c,FUN_00e320a8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3209c(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00e320a8(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,1);
  return;
}




void FUN_00e320b4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d45f10(lVar1 + 0x10);
  FUN_00d9886c(uVar2,PTR_s_Ability__Ozo__A1_02bef230,PTR_s_Ability__Ozo__A2_02bef238);
  lVar1 = FUN_00d6624c(param_1);
  plVar3 = (long *)FUN_00e213ac(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e32110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Ozo__A1_02bef230);
  return;
}




void FUN_00e32114(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d45f10(lVar1 + 0x10);
  FUN_00d9886c(uVar2,PTR_s_Ability__Ozo__A1_02bef230,PTR_s_Ability__Ozo__A3_02bef240);
  lVar1 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00e213ac(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e32170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Ozo__A1_02bef230);
  return;
}




void FUN_00e32174(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 local_40;
  long local_38;
  
  puVar2 = PTR_s_shownBounceModal_02bf0cc0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00e6a474(PTR_s_shownBounceModal_02bf0cc0);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  pcVar4 = (char *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
  if (*pcVar4 == '\0') {
    FUN_00d69224(param_1,&local_40);
    uVar5 = FUN_00d66d28(local_40);
    FUN_00d59a60(uVar5,4,1,1);
    *pcVar4 = '\x01';
  }
  else {
    FUN_00d69224(param_1,&local_40);
    fVar6 = (float)FUN_00d67b34(local_40);
    if (fVar6 <= 0.25) {
      uVar5 = FUN_00d66d28(local_40);
      FUN_00d59b54(uVar5,4,1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e32268(undefined8 param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_30);
  FUN_00d66d28(local_30);
  FUN_00d59c40();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e322bc(void)

{
  return;
}




void FUN_00e322c0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) == 0) {
    FUN_00d67b04(0x3d4ccccd,param_1);
    lVar6 = FUN_00d67c60(param_1);
    lVar7 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_shownBounceModal_02bf0cc0;
    uVar4 = FUN_00e6a474(PTR_s_shownBounceModal_02bf0cc0);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    uVar4 = (**(code **)(*(long *)(lVar7 + 0x100) + 8))(lVar7 + 0x100,uVar4);
    puVar8 = (undefined1 *)(**(code **)(*(long *)(lVar6 + 0x100) + 0x10))(lVar6 + 0x100,uVar4);
    *puVar8 = 0;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBuffIntervalName_02bed520;
    uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e32174;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onTimeoutName_02bed530;
    uVar4 = FUN_00e6a474(PTR_s_onTimeoutName_02bed530);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e32268;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  }
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_70,lVar6 + 0x30);
  FUN_00d3e534();
  uVar9 = FUN_00e32c58();
  FUN_00d42654(auStack_70,uVar9);
  FUN_00d416e4(uVar9,PTR_s_Ability__Ozo__B_02bef248,PTR_s_Ability__Ozo__B_QueueBounce_02bef250);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e324a8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d2a034();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3250c(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long local_60;
  undefined8 local_58;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  thunk_FUN_00d69d94(param_1,&local_58,&local_60);
  iVar1 = *(int *)(local_60 + 0x260);
  iVar4 = FUN_00d67b84(local_58);
  if (iVar1 == iVar4) {
    lVar6 = FUN_00d67b78(local_58);
    uVar2 = *(undefined4 *)(lVar6 + 0x260);
    uVar5 = FUN_00d66d34(local_58);
    FUN_00d009d0(auStack_50,uVar2,uVar5);
    FUN_00ce20fc(auStack_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e32598(undefined8 param_1)

{
  char *pcVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00d67b84();
  lVar6 = FUN_00d9e390();
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_00d67c60(param_1);
    puVar4 = PTR_s_onActorDieName_02bed590;
    uVar5 = FUN_00e6a474(PTR_s_onActorDieName_02bed590);
    uVar5 = FUN_0091ed5c(puVar4,uVar5,0x12345678);
    *(undefined4 *)(lVar8 + 0x38 + (ulong)*(uint *)(lVar8 + 0xf8) * 4) = uVar5;
    uVar2 = *(uint *)(lVar8 + 0xf8);
    *(code **)(lVar8 + 0x38 + (ulong)uVar2 * 8 + 0x40) = FUN_00e3250c;
    *(uint *)(lVar8 + 0xf8) = uVar2 + 1;
  }
  uVar9 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,uVar9);
  lVar6 = *(long *)(lVar6 + 0x18);
  while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar6 = *(long *)(lVar6 + 0x20);
  }
  uVar7 = FUN_00d6bbac(lVar6,DAT_031ba924,0);
  pcVar1 = "Effect_Ozo_B_BounceTarget_3";
  if ((uVar7 & 1) == 0) {
    pcVar1 = "Effect_Ozo_B_BounceTarget_2";
  }
  FUN_00d3e534();
  uVar9 = FUN_00e1c4ec();
  FUN_00d42654(auStack_60,uVar9);
  FUN_00d3f7dc(uVar9,2);
  uVar9 = FUN_00d47c14();
  uVar9 = FUN_00da2040(uVar9,pcVar1);
  FUN_00da2070(uVar9,1);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e326f8(void)

{
  return;
}




void FUN_00e326fc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d29a68();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e32760(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e327c4;
  local_30 = 3;
  FUN_00d42b30(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e327c4(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,10,0x19,0);
  return;
}




float FUN_00e327d8(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)FUN_00d59f54(param_1,3,0xc,4,0);
  fVar2 = (float)FUN_00d59f54(param_1,3,0xc,0x19,0);
  fVar3 = (float)FUN_00d59f54(param_1,3,0xd,0x19,0);
  fVar4 = fVar1 + fVar2;
  if (fVar3 <= fVar1 + fVar2) {
    fVar4 = fVar3;
  }
  return fVar4;
}




void FUN_00e32850(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e327d8;
  local_30 = 3;
  FUN_00d42a20(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e328b4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  ulong uVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  uVar6 = FUN_00d59f54(uVar2,3,0x10,0x19,0);
  uVar3 = FUN_00d44be0(uVar2,PTR_s_Buff_Ozo_Talent_SecondWind_02bf1fd0);
  if ((uVar3 & 1) != 0) {
    fVar5 = (float)FUN_00d5a3d0(uVar2,DAT_0320e9f0,1,9);
    uVar6 = (ulong)(uint)((float)uVar6 * fVar5);
  }
  lVar4 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar4 + 0x30);
  FUN_00d3e534();
  uVar2 = FUN_00d2b564();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d40908(uVar6,uVar2,5);
  lVar4 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar4 + 8);
  FUN_00d3e534();
  uVar2 = FUN_00d29a68();
  FUN_00d42654(auStack_50,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e329c4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_50;
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(&local_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00e2d174();
  FUN_00d42654(&local_50,uVar3);
  FUN_00d3f364(uVar3,PTR_s_Ability__Ozo__C_Finisher_02bef278);
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d29c84(lVar2);
  FUN_00d46b64(uVar3,2);
  plVar4 = (long *)FUN_00d2a86c(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,0x52);
  uVar3 = FUN_00d29f44(lVar2);
  local_50 = FUN_00e32af4;
  local_48 = 3;
  FUN_00d47690(uVar3,1,&local_50);
  FUN_00e30f38(lVar2);
  plVar4 = (long *)FUN_00e13b48(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,"Ability03_Travel");
  plVar4 = (long *)FUN_00d2945c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Ozo_C_Spinball");
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e32af4(undefined8 param_1)

{
  FUN_00d59f54(param_1,8,4,0x19,0);
  return;
}




void FUN_00e32b08(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"OverHead");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ozo_C_Target");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e32b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_RevealToBestowersTeamTrueSi_02bebb08);
  return;
}




undefined8 * FUN_00e32b84(long param_1)

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
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00d41024(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




undefined8 * FUN_00e32c58(long param_1)

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
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d416b0(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00e32d28(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [40];
  long alStack_58 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    FUN_00d69554(param_1,&local_b0,&local_b4);
    lVar6 = FUN_00d66d28(local_b0);
    lVar7 = *(long *)(lVar6 + 0x18);
    while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar7 = *(long *)(lVar7 + 0x20);
    }
    iVar2 = FUN_00d5412c(lVar7,local_b4);
    iVar3 = FUN_00d5412c(lVar7,DAT_031b1ab0);
    if (iVar2 == iVar3) {
      FUN_00d4d634(auStack_80);
      FUN_00d4d66c(auStack_80,lVar6);
      FUN_00d4d678(auStack_80,"PetalMinion");
      uVar4 = FUN_00d9e840(auStack_80,alStack_58,4,0);
      if (uVar4 != 0) {
        uVar5 = (ulong)uVar4;
        plVar8 = alStack_58;
        do {
          FUN_00d03ef8(auStack_a8,*(undefined4 *)(*plVar8 + 0x260),1);
          FUN_00ce20fc(auStack_a8);
          uVar5 = uVar5 - 1;
          plVar8 = plVar8 + 1;
        } while (uVar5 != 0);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e32e54(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined4 local_6e4;
  undefined8 local_6e0;
  undefined1 auStack_6d8 [40];
  undefined1 auStack_6b0 [40];
  long alStack_688 [201];
  
  lVar1 = tpidr_el0;
  lVar7 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    FUN_00d69554(param_1,&local_6e0,&local_6e4);
    lVar6 = FUN_00d66d28(local_6e0);
    lVar8 = *(long *)(lVar6 + 0x18);
    while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar8 = *(long *)(lVar8 + 0x20);
    }
    iVar2 = FUN_00d5412c(lVar8,local_6e4);
    iVar3 = FUN_00d5412c(lVar8,DAT_031b1ab0);
    if (iVar2 == iVar3) {
      FUN_00d4d634(auStack_6b0);
      FUN_00d4d66c(auStack_6b0,lVar6);
      FUN_00d4d678(auStack_6b0,"PetalSeed");
      uVar4 = FUN_00d9e840(auStack_6b0,alStack_688,200,0);
      if (uVar4 != 0) {
        uVar5 = (ulong)uVar4;
        plVar9 = alStack_688;
        do {
          FUN_00d03ef8(auStack_6d8,*(undefined4 *)(*plVar9 + 0x260),1);
          FUN_00ce20fc(auStack_6d8);
          uVar5 = uVar5 - 1;
          plVar9 = plVar9 + 1;
        } while (uVar5 != 0);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e32f8c(undefined8 param_1)

{
  FUN_00e32e54();
  FUN_00e32d28(param_1);
  return;
}




void FUN_00e32fb0(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onAbilityUpgradedName_02bed538;
    uVar3 = FUN_00e6a474(PTR_s_onAbilityUpgradedName_02bed538);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e32f8c;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  return;
}

