// functions/00e2d — 22 functions
#include "libGameKindred.h"




void FUN_00e2d048(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Lance_A_Warning_A");
                    /* WARNING: Could not recover jumptable at 0x00e2d08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_00e2d090(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d43bd4(param_1,1);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Lance_Withdraw");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_00d2df94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Lance_Withdraw");
  lVar1 = FUN_00d09310();
  FUN_00d09bcc(*(undefined4 *)(lVar1 + 0x2e8));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_00d6624c(param_1);
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Lance_Withdraw2");
  lVar1 = FUN_00d09310();
  FUN_00d09bcc(*(undefined4 *)(lVar1 + 0x2e8));
                    /* WARNING: Could not recover jumptable at 0x00e2d170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




undefined8 * FUN_00e2d174(long param_1)

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
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d3f320(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00e2d248(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a0390();
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




void FUN_00e2d298(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined1 local_88;
  undefined1 auStack_84 [76];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67b78();
  FUN_00d55794(uVar2,auStack_a8,0);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4dabc(auStack_98,1);
  FUN_00d4dc24(auStack_98,1);
  FUN_00d4d364(auStack_98,0);
  FUN_00d4db48(0x40a00000,auStack_98,auStack_a8);
  *(undefined1 *)(param_2 + 0x10) = local_88;
  *(undefined8 *)(param_2 + 8) = local_90;
  memcpy((void *)(param_2 + 0x14),auStack_84,0x47);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2d354(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64d7c();
  lVar3 = FUN_00d4891c(0x3e4ccccd,uVar2,0);
  uVar2 = FUN_00d39b7c(lVar3 + 0x10);
  uVar2 = FUN_00d9cef8(uVar2,FUN_00e2d298);
  FUN_00d9cb40(uVar2,PTR_s_Buff_LanceBall_Lance_HoldingBall_02bf17d8);
  plVar4 = (long *)FUN_00d2cf7c(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_LanceBall_ScoringBuff_02bf0b58);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_CapturePoint_Edge");
  local_48[0] = 0x40a00000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0xd0))(plVar4,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2d448(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a414(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,0x15);
  plVar3 = (long *)FUN_00d2a160(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_LanceBall_Lance_HoldingBall_02bf17d8);
  FUN_00d2a320(lVar2);
  FUN_00e0c91c(lVar2);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_LanceBall_ReturnBallToCente_02bf0b60);
  local_38[0] = 0x3dcccccd;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2d518(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00d55794(param_2,param_3,0);
  *(undefined4 *)(param_3 + 4) = 0x3ecccccd;
  return;
}




void FUN_00e2d550(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65a7c();
  plVar2 = (long *)FUN_00d2b7c8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0xdd);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"CenterBody");
  (**(code **)(*plVar2 + 0x30))(plVar2,FUN_00e2d518);
  lVar1 = FUN_00d65e5c(param_1);
  plVar2 = (long *)FUN_00d2b7c8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0xdd);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"CenterBody");
                    /* WARNING: Could not recover jumptable at 0x00e2d610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,FUN_00e2d518);
  return;
}




void FUN_00e2d614(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d63f30();
  uVar2 = FUN_00e227e4(lVar1 + 0x10);
  FUN_00d9c960(uVar2,PTR_s_Buff_LanceBall_Center_02bf0b68);
  FUN_00d9c324();
  plVar3 = (long *)FUN_00d2b7c8(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0xdc);
                    /* WARNING: Could not recover jumptable at 0x00e2d688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,"CenterBody");
  return;
}




void FUN_00e2d68c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined1 local_88;
  undefined1 auStack_84 [76];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67b78();
  FUN_00d55794(uVar2,auStack_a8,0);
  FUN_00d4d9e8(auStack_98);
  uVar2 = FUN_00d67b78(param_1);
  FUN_00d4daf4(auStack_98,1,0,0,uVar2);
  FUN_00d4dabc(auStack_98,0x10);
  FUN_00d4dc24(auStack_98,1);
  FUN_00d4d364(auStack_98,0);
  FUN_00d4db48(0x40c00000,auStack_98,auStack_a8);
  *(undefined1 *)(param_2 + 0x10) = local_88;
  *(undefined8 *)(param_2 + 8) = local_90;
  memcpy((void *)(param_2 + 0x14),auStack_84,0x47);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2d76c(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_00d64d7c();
  lVar2 = FUN_00d4891c(0x3f800000,uVar1,1);
  uVar1 = FUN_00d31490(lVar2 + 0x10);
  FUN_00d9ca38(uVar1,FUN_00e2d68c);
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e2d7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Minion_ArmoryVictoryBoost_02bf0b78);
  return;
}




void FUN_00e2d7c4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc24();
  lVar3 = FUN_00d4bcf8(uVar2,1);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48[0] = 0x3f000000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x40))(plVar4,local_48);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc24();
  lVar3 = FUN_00d4bce8(uVar2,1);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48[0] = 0x3e800000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x40))(plVar4,local_48);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_ArmoryMinionBuff");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  local_48[0] = 0x3d75c28f;
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xd0))(plVar4,local_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xc0))(0x3f800000,0x3f800000,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xd8))(0x3ecccccd);
  local_58[0] = 0x3f333333;
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,local_58);
  (**(code **)(*plVar4 + 0x90))();
  plVar4 = (long *)FUN_00d2a110(lVar3 + 0x10);
  local_48[0] = 0x3fc00000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,0x1c,2,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2d978(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined1 local_88;
  undefined1 auStack_84 [76];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67b78();
  FUN_00d55794(uVar2,auStack_a8,0);
  FUN_00d4d9e8(auStack_98);
  uVar2 = FUN_00d67b78(param_1);
  FUN_00d4daf4(auStack_98,1,0,0,uVar2);
  FUN_00d4dabc(auStack_98,0x10);
  FUN_00d4dc24(auStack_98,1);
  FUN_00d4d364(auStack_98,0);
  FUN_00d4db48(0x41600000,auStack_98,auStack_a8);
  *(undefined1 *)(param_2 + 0x10) = local_88;
  *(undefined8 *)(param_2 + 8) = local_90;
  memcpy((void *)(param_2 + 0x14),auStack_84,0x47);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2da58(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_790 [16];
  undefined1 auStack_780 [96];
  undefined1 auStack_720 [40];
  undefined1 auStack_6f8 [96];
  undefined8 auStack_698 [200];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    uVar8 = FUN_00d66d28(*param_1);
    FUN_00d55794(uVar8,auStack_790,0);
    FUN_00d4d9e8(auStack_6f8);
    uVar8 = FUN_00d66d28(*param_1);
    FUN_00d4daf4(auStack_6f8,1,0,0,uVar8);
    FUN_00d4dabc(auStack_6f8,0x10);
    FUN_00d4dc24(auStack_6f8,1);
    FUN_00d4d364(auStack_6f8,0);
    FUN_00d4db48(0x41400000,auStack_6f8,auStack_790);
    FUN_00d4eb08(auStack_720,auStack_790,7,0);
    uVar2 = FUN_00d9e840(auStack_6f8,auStack_698,200,auStack_720);
    uVar7 = (ulong)uVar2;
    if (uVar2 != 0) {
      FUN_00d66d28(*param_1);
      uVar3 = FUN_00d5ba88();
      if (((DAT_031ba570 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_031ba570), iVar6 != 0)) {
        DAT_031ba568 = 0x3e3270a0;
        __cxa_guard_release(&DAT_031ba570);
      }
      puVar9 = auStack_698;
      do {
        uVar4 = FUN_00d5ba88(*puVar9);
        uVar5 = FUN_00ceb350();
        FUN_00d02a78(0,auStack_780,uVar3,uVar3,uVar4,0x51,&DAT_031ba568,uVar5);
        FUN_00ce20fc(auStack_780);
        uVar7 = uVar7 - 1;
        puVar9 = puVar9 + 1;
      } while (uVar7 != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2dc00(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64d7c();
  lVar3 = FUN_00d4891c(0x3f800000,uVar2,0);
  uVar2 = FUN_00d31490(lVar3 + 0x10);
  FUN_00d9ca38(uVar2,FUN_00e2d978);
  plVar4 = (long *)FUN_00d2cf7c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Minion_CaptainBuff_02bf0b88);
  local_48[0] = 0x3f99999a;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  lVar3 = FUN_00d63f30(param_1);
  plVar4 = (long *)FUN_00d39aa4(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,"u_Ally_Enemy");
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2dcd8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc24();
  lVar3 = FUN_00d4bca4(uVar2,3);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48[0] = 0x3f000000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x40))(plVar4,local_48);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  lVar3 = FUN_00d4bc10();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48[0] = 0x3e4ccccd;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x38))(plVar4,local_48);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2ddb0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_58;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d69224(param_1,&local_58);
    lVar3 = FUN_00d66d28(local_58);
    fVar6 = (float)FUN_009bc24c();
    lVar4 = *(long *)(lVar3 + 0x40);
    uVar5 = (uint)(((fVar6 / 60.0) / 15.0) * 4.0 + 2.0);
    fVar6 = (*(float *)(lVar4 + 0x240) + 1.0) *
            (*(float *)(lVar4 + 0xd8) +
            *(float *)(lVar4 + 0x18c) * (*(float *)(lVar4 + 0x2f4) + 1.0));
    if (5 < uVar5) {
      uVar5 = 6;
    }
    if (DAT_031ba6f0 <= fVar6) {
      fVar6 = DAT_031ba6f0;
    }
    fVar7 = DAT_031ba630;
    if (DAT_031ba630 <= fVar6) {
      fVar7 = fVar6;
    }
    if ((int)((float)uVar5 - fVar7) != 0) {
      FUN_00d03ef8(auStack_50,*(undefined4 *)(lVar3 + 0x260));
      FUN_00ce20fc(auStack_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_00e2dec4(void)

{
  return ZEXT816(0x3fc00000);
}




undefined1  [16] FUN_00e2decc(void)

{
  return ZEXT816(0x3fc00000);
}




undefined1  [16] FUN_00e2ded4(void)

{
  return ZEXT816(0x3f400000);
}




void FUN_00e2dedc(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onApplyName_02bed4f8;
  uVar4 = FUN_00e6a474(PTR_s_onApplyName_02bed4f8);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e2ddb0;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d65010(param_1);
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_00d2945c(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(plVar6,"CenterBody");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_AceBuff");
  (**(code **)(*plVar6 + 0x78))(plVar6,1);
  plVar6 = (long *)FUN_00d2a110(lVar5);
  local_48 = FUN_00e2dec4;
  local_40 = 3;
  (**(code **)(*plVar6 + 0x30))(plVar6,0x12,1,&local_48);
  plVar6 = (long *)FUN_00d2a110(lVar5);
  local_48 = FUN_00e2decc;
  local_40 = 3;
  (**(code **)(*plVar6 + 0x30))(plVar6,0x1c,2,&local_48);
  plVar6 = (long *)FUN_00d2a110(lVar5);
  local_48 = FUN_00e2ded4;
  local_40 = 3;
  (**(code **)(*plVar6 + 0x30))(plVar6,0xf,1,&local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

