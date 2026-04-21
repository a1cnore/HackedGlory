// functions/00e3d — 13 functions
#include "libGameKindred.h"




void FUN_00e3d070(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onBuffIntervalName_02bed520;
    uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e3b8ec;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    lVar6 = FUN_00d67c60(param_1);
    uVar3 = FUN_00e6a474("startTime");
    uVar3 = FUN_0091ed5c("startTime",uVar3,0x12345678);
    (**(code **)(*(long *)(lVar6 + 0x100) + 8))(lVar6 + 0x100,uVar3);
    uVar12 = FUN_009bc24c();
    lVar6 = FUN_00d67c60(param_1);
    uVar3 = FUN_00e6a474("startTime");
    uVar3 = FUN_0091ed5c("startTime",uVar3,0x12345678);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x100) + 0x10))(lVar6 + 0x100,uVar3);
    *puVar7 = uVar12;
    FUN_00d67b04(0x3e4ccccd,param_1);
  }
  lVar6 = FUN_00d65010(param_1);
  lVar6 = lVar6 + 0x10;
  plVar8 = (long *)FUN_00d2945c(lVar6);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x68))(plVar8,"CenterBody");
  (**(code **)(*plVar8 + 0x48))(plVar8,"Effect_Hero010_Blowing_Cont");
  plVar8 = (long *)FUN_00d2df94(lVar6);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,"Sound_Skaarf_Ability_C_Blow");
  lVar9 = FUN_00d09310();
  FUN_00d09788(*(undefined4 *)(lVar9 + 0x15c));
  (**(code **)(*plVar8 + 0x28))(plVar8);
  uVar10 = FUN_00d29c84(lVar6);
  FUN_00d46b64(uVar10,8);
  plVar8 = (long *)FUN_00e13b48(lVar6);
  (**(code **)(*plVar8 + 0x30))(plVar8,"Ability03_Exhale");
  FUN_00e37900(lVar6);
  FUN_00d3a390(lVar6);
  FUN_00d481c8();
  uVar10 = FUN_00d66d28(param_1);
  iVar4 = FUN_00d5c238(uVar10,1);
  if (iVar4 != 0) {
    lVar6 = FUN_00d66d28(param_1);
    uVar5 = FUN_00d44008(*(undefined4 *)(lVar6 + 0x260),PTR_s_Buff_Skaarf_Talent_GoopBreath_02bee148
                        );
    if ((uVar5 & 1) != 0) {
      uVar10 = FUN_00d64d7c(param_1);
      uVar11 = FUN_00d66d28(param_1);
      FUN_00d5a3d0(uVar11,DAT_031ac524,0,9);
      lVar6 = FUN_00d4891c(uVar10,0);
      plVar8 = (long *)FUN_00d45354(lVar6 + 0x10);
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,PTR_s__SkaarfGoopPool__02bf01b0,1);
      (**(code **)(*plVar8 + 0x20))(plVar8,FUN_00e3bf40);
    }
  }
  return;
}




void FUN_00e3d300(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_38[0] = 0x40000000;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x12,1,local_38);
  plVar3 = (long *)FUN_00d2ccfc(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x38))();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3d38c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65a7c();
  plVar2 = (long *)FUN_00d2779c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Spawn");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdle");
  lVar1 = FUN_00d65fac(param_1);
  plVar2 = (long *)FUN_00d2779c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Spawn");
                    /* WARNING: Could not recover jumptable at 0x00e3d414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdle");
  return;
}




void FUN_00e3d418(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,6);
  FUN_00d4bc10();
  lVar3 = FUN_00d4bc38();
  lVar3 = lVar3 + 0x10;
  FUN_00d2cf2c(lVar3);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Skye_LockedOn_Target_02bf0fc0);
  local_38 = FUN_00de329c;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_38);
  plVar4 = (long *)FUN_00d2887c(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Skye_LockedOn_Skye_02bf0fc8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3d4d4(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_64;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar1 = *(ushort *)(param_1 + 0x88) & 0x1f;
  if ((uVar1 == 0x1f) || (1 < *(ushort *)(param_1 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
    uVar2 = *(undefined4 *)(param_1 + 0x260);
    uVar4 = FUN_00d66d34(param_2);
    FUN_00d009d0(auStack_60,uVar2,uVar4);
    FUN_00ce20fc(auStack_60);
  }
  lVar5 = *(long *)(param_3 + 0x18);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  uVar6 = FUN_00d6bca8(lVar5,DAT_031bb088,*(undefined4 *)(param_1 + 0x260),&local_64);
  if ((uVar6 & 1) != 0) {
    FUN_00d009d0(auStack_60,*(undefined4 *)(param_3 + 0x260),local_64);
    FUN_00ce20fc(auStack_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3d5cc(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_a8;
  undefined1 auStack_a0 [88];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_a8);
  lVar5 = FUN_00d66d28(local_a8);
  lVar7 = *(long *)(lVar5 + 0x18);
  while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02c7bf48))) {
    lVar7 = *(long *)(lVar7 + 0x20);
  }
  uVar6 = FUN_00d6bbac(lVar7,DAT_031bb08c,0);
  if (((uVar6 & 1) == 0) &&
     (uVar6 = FUN_00d6bbac(lVar7,DAT_031bb090,0), puVar3 = PTR_s_Buff_Skye_CircleStrafing_02bf0fd0,
     (uVar6 & 1) == 0)) {
    uVar1 = *(undefined4 *)(lVar5 + 0x260);
    uVar8 = thunk_FUN_00d086f0(lVar5,0,1);
    uVar4 = FUN_00ceb350();
    FUN_00cfe864(uVar8,0,0,auStack_a0,uVar1,uVar1,puVar3,uVar4,1,0,0);
    FUN_00ce20fc(auStack_a0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3d6e4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_88);
  lVar5 = FUN_00d66d28(local_88);
  lVar6 = FUN_00da01e4();
  if (lVar6 == 0) {
    uVar3 = *(undefined4 *)(lVar5 + 0x260);
    uVar4 = FUN_00d66d34(local_88);
    FUN_00d009d0(&local_80,uVar3,uVar4);
    FUN_00ce20fc(&local_80);
  }
  else {
    FUN_00d55794(lVar5,&local_80,0);
    FUN_00d55794(lVar6,&local_98,0);
    fVar8 = (float)thunk_FUN_00d086f0(lVar5,5,1);
    iVar2 = FUN_00d5c238(lVar5,4);
    fVar11 = 0.0;
    fVar9 = 0.0;
    if (iVar2 != 0) {
      fVar9 = (float)FUN_00d59f54(lVar5,4,7,0x19,0);
    }
    fVar10 = (float)thunk_FUN_00d086f0(lVar5,5,1);
    iVar2 = FUN_00d5c238(lVar5,4);
    if (iVar2 != 0) {
      fVar11 = (float)FUN_00d59f54(lVar5,4,7,0x19,0);
    }
    if ((fVar8 + fVar9) * (fVar10 + fVar11) <
        (local_80 - local_98) * (local_80 - local_98) +
        (fStack_7c - fStack_94) * (fStack_7c - fStack_94) +
        (local_78 - local_90) * (local_78 - local_90)) {
      FUN_00e3d4d4(lVar5,local_88,lVar6);
    }
    uVar3 = FUN_00d55870(lVar5);
    uVar7 = FUN_00d7d0a0(*(undefined8 *)(lVar6 + 0x80),uVar3);
    if ((uVar7 & 1) == 0) {
      FUN_00e3d4d4(lVar5,local_88,lVar6);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3d8a8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_30);
  uVar2 = FUN_00d66d28(local_30);
  lVar3 = FUN_00da01e4();
  if (lVar3 != 0) {
    FUN_00e3d4d4(uVar2,local_30,lVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3d914(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int local_5c;
  undefined8 local_58;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    FUN_00d69554(param_1,&local_58,&local_5c);
    lVar5 = FUN_00d66d28(local_58);
    lVar6 = FUN_00da01e4();
    if (local_5c == DAT_031b1bec) {
      if (lVar6 == 0) {
        uVar1 = *(undefined4 *)(lVar5 + 0x260);
        uVar3 = FUN_00d66d34(local_58);
        FUN_00d009d0(auStack_50,uVar1,uVar3);
        FUN_00ce20fc(auStack_50);
      }
      else {
        FUN_00e3d4d4(lVar5,local_58);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3d9d4(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onApplyName_02bed4f8;
    uVar4 = FUN_00e6a474(PTR_s_onApplyName_02bed4f8);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e3d5cc;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onAfterReApplyName_02bed508;
    uVar4 = FUN_00e6a474(PTR_s_onAfterReApplyName_02bed508);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e3d5cc;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBuffIntervalName_02bed520;
    uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e3d6e4;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onAbilityTriggeredName_02bed548;
    uVar4 = FUN_00e6a474(PTR_s_onAbilityTriggeredName_02bed548);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e3d914;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onEndName_02bed518;
    uVar4 = FUN_00e6a474(PTR_s_onEndName_02bed518);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e3d8a8;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  }
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar6 + 8);
  FUN_00d3e534();
  uVar7 = FUN_00d2965c();
  FUN_00d42654(auStack_60,uVar7);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar6 + 0x18);
  FUN_00d3e534();
  uVar7 = FUN_00d2a504();
  FUN_00d42654(auStack_60,uVar7);
  FUN_00d3e534();
  uVar7 = FUN_00d2a994();
  FUN_00d42654(auStack_60,uVar7);
  FUN_00d46fc0(uVar7,PTR_s_Buff_Skye_CircleStrafing_02bf0fd0);
  FUN_00d3e534();
  uVar7 = FUN_00d2a6c0();
  FUN_00d42654(auStack_60,uVar7);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3dc80(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [96];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_a8);
  FUN_00d4daf4(auStack_a8,1,1,0,0);
  uVar4 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_c0,uVar4);
  FUN_00d3e534();
  uVar4 = FUN_00d3940c();
  FUN_00d42654(auStack_c0,uVar4);
  uVar4 = FUN_00d3fad8(uVar4,auStack_a8,0,1);
  puVar2 = PTR_s_Buff_Skye_LockedOn_Target_02bf0fc0;
  uVar3 = FUN_00d67b84(param_1);
  FUN_00d3fb50(uVar4,puVar2,uVar3);
  FUN_00d3e534();
  uVar4 = FUN_00d2a994();
  FUN_00d42654(auStack_c0,uVar4);
  uVar4 = FUN_00d46fc0(uVar4,PTR_s_Buff_Skye_LockedOn_Target_02bf0fc0);
  uVar3 = FUN_00d67b84(param_1);
  FUN_00d46fe0(uVar4,uVar3);
  FUN_00d3e534();
  uVar4 = FUN_00d2a6c0();
  FUN_00d42654(auStack_c0,uVar4);
  FUN_00d3e534();
  uVar4 = FUN_00d2a504();
  FUN_00d42654(auStack_c0,uVar4);
  FUN_00d3e534();
  uVar4 = FUN_00d2cb84();
  FUN_00d42654(auStack_c0,uVar4);
  FUN_00d3e888(0xbf800000,0,0,uVar4,PTR_s_Buff_Skye_LockedOn_HardLockIndic_02bf0fd8,1,0xffffffff,0,0
              );
  FUN_00d3e534();
  uVar4 = FUN_00d2a6c0();
  FUN_00d42654(auStack_c0,uVar4);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_a8,lVar5 + 8);
  FUN_00d3e534();
  uVar4 = FUN_00d2965c();
  FUN_00d42654(auStack_a8,uVar4);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_a8,lVar5 + 0x18);
  FUN_00d3e534();
  uVar4 = FUN_00d2a504();
  FUN_00d42654(auStack_a8,uVar4);
  FUN_00d3e534();
  uVar4 = FUN_00d2a994();
  FUN_00d42654(auStack_a8,uVar4);
  uVar4 = FUN_00d46fc0(uVar4,PTR_s_Buff_Skye_LockedOn_HardLockIndic_02bf0fd8);
  uVar3 = FUN_00d67b84(param_1);
  FUN_00d46fe0(uVar4,uVar3);
  FUN_00d3e534();
  uVar4 = FUN_00d2a6c0();
  FUN_00d42654(auStack_a8,uVar4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3debc(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Skye_Reticle_Ready_E");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Effect_Skye_Reticle_Ready_A");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d3e39c(lVar2 + 0x10);
  FUN_00d44d70(param_1);
  uVar1 = FUN_00ceab2c();
                    /* WARNING: Could not recover jumptable at 0x00e3df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,uVar1,3);
  return;
}




void FUN_00e3df6c(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_68;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_68);
  lVar4 = FUN_00d66d28(local_68);
  lVar7 = *(long *)(lVar4 + 0x18);
  while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_0314f724))) {
    lVar7 = *(long *)(lVar7 + 0x20);
  }
  lVar5 = FUN_00da01e4(lVar4);
  if (lVar5 == 0) {
    uVar6 = FUN_00ceab48(0,0);
    if ((uVar6 & 1) != 0) {
      uVar1 = *(undefined4 *)(lVar4 + 0x260);
      uVar3 = FUN_00d66d34(local_68);
      FUN_00d009d0(auStack_60,uVar1,uVar3);
      FUN_00ce20fc(auStack_60);
    }
  }
  else {
    FUN_00d60c80(lVar7);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

