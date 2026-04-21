// functions/00e17 — 26 functions
#include "libGameKindred.h"




void FUN_00e17040(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_30,&local_38);
  uVar2 = FUN_00d66d28(local_30);
  uVar3 = FUN_00daa578(local_38,uVar2);
  if ((((uVar3 & 1) != 0) && ((*(byte *)(*(long *)(local_38 + 0x20) + 0x2f5) >> 1 & 1) != 0)) &&
     ((*(byte *)(local_38 + 0xc) >> 2 & 1) != 0)) {
    *(float *)(local_38 + 0x54) = *(float *)(local_38 + 0x54) * 0.8;
    *(float *)(local_38 + 0x38) = *(float *)(local_38 + 0x38) * 0.5;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e170e4(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  FUN_00ceace8();
  uVar4 = FUN_00ceb054();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onBeforeApplyDamageName_02bed5f8;
    uVar3 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e17040;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  return;
}




void FUN_00e17168(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_30,&local_38);
  uVar2 = FUN_00d66d28(local_30);
  uVar3 = FUN_00daa578(local_38,uVar2);
  if (((uVar3 & 1) != 0) && ((*(byte *)(*(long *)(local_38 + 0x20) + 0x2f5) >> 1 & 1) != 0)) {
    *(float *)(local_38 + 0x54) = *(float *)(local_38 + 0x54) * 0.9;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e171f4(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  FUN_00ceace8();
  uVar4 = FUN_00ceb054();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onBeforeApplyDamageName_02bed5f8;
    uVar3 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e17168;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  return;
}




void FUN_00e17278(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ceace8();
  uVar2 = FUN_00ceb054();
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00d67c60(param_1);
    FUN_00d425ec(auStack_40,uVar3);
    FUN_00d3e534();
    uVar3 = FUN_00d39980();
    FUN_00d42654(auStack_40,uVar3);
    FUN_00d40cd4(0xbe75c28f,uVar3,5,2,1,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e17314(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return;
}




undefined8 * FUN_00e17320(long param_1)

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
    FUN_00d3e6fc(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




undefined4 FUN_00e173f0(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00d6a078(*param_1);
  uVar2 = 0x3f666666;
  if (6 < iVar1) {
    uVar2 = 0x3f800000;
  }
  uVar3 = 0x3f333333;
  if (4 < iVar1) {
    uVar3 = uVar2;
  }
  uVar2 = 0x3f000000;
  if (2 < iVar1) {
    uVar2 = uVar3;
  }
  return uVar2;
}




undefined4 FUN_00e17438(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00d6a078(*param_1);
  uVar2 = 0x3f8ccccd;
  if (6 < iVar1) {
    uVar2 = 0x3f800000;
  }
  uVar3 = 0x3fa66666;
  if (4 < iVar1) {
    uVar3 = uVar2;
  }
  uVar2 = 0x3fc00000;
  if (2 < iVar1) {
    uVar2 = uVar3;
  }
  return uVar2;
}




undefined4 FUN_00e17480(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00d6a078(*param_1);
  uVar2 = 0x3dcccccd;
  if (6 < iVar1) {
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_00e174ac(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,5);
  lVar3 = FUN_00d4bc24();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e173f0;
  local_40 = 4;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,5);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bca4(uVar2,1);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_48 = FUN_00e17438;
  local_40 = 4;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2a110(lVar3 + 0x10);
  local_48 = FUN_00e17480;
  local_40 = 4;
  (**(code **)(*plVar4 + 0x30))(plVar4,4,2,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e175b0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_00d63c7c();
  uVar1 = FUN_00e5da44(uVar1,1);
  lVar2 = FUN_00e5d9b0(uVar1,PTR_s_Buff_Stunned_02beb430);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Catherine_HeroicPerk_Captai_02bf04d8);
  uVar1 = FUN_00d63c7c(param_1);
  uVar1 = FUN_00e5da44(uVar1,1);
  lVar2 = FUN_00e5d9b0(uVar1,PTR_s_Buff_Silence_02beb428);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e17634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Catherine_HeroicPerk_Captai_02bf04d8);
  return;
}




void FUN_00e17638(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d6592c();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00e176fc;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,7,1,&local_48);
  (**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00e176fc;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,8,1,&local_48);
  (**(code **)(*plVar3 + 0x38))();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e176fc(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00e17708(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_190 [16];
  undefined1 auStack_180 [96];
  undefined1 auStack_120 [96];
  long local_c0 [8];
  
  lVar2 = tpidr_el0;
  local_c0[6] = *(long *)(lVar2 + 0x28);
  uVar13 = *param_1;
  lVar14 = param_1[0x85];
  lVar9 = FUN_00d66d28(uVar13);
  fVar18 = *(float *)(*(long *)(lVar9 + 0x40) + 0x38);
  fVar15 = (float)FUN_00d59f54(lVar9,2,4,0x19,0);
  lVar10 = *(long *)(lVar9 + 0x18);
  fVar18 = fVar18 * fVar15;
  while ((lVar10 != 0 && (*(int *)(*(long *)(lVar10 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar10 = *(long *)(lVar10 + 0x20);
  }
  fVar15 = *(float *)(lVar14 + 0x54) - fVar18;
  uVar3 = FUN_00d5401c(lVar10,PTR_s_Ability__Catherine__B_ReflectDam_02bee780);
  FUN_008ff6ec(lVar9,uVar3,lVar9);
  FUN_00d55794(lVar9,auStack_190,0);
  FUN_00d4d9e8(auStack_120);
  FUN_00d4daf4(auStack_120,0,1,0,lVar9);
  FUN_00d4db48(0x41200000,auStack_120,auStack_190);
  FUN_00d4dabc(auStack_120,1);
  FUN_00d4dc44(auStack_120,1);
  uVar4 = FUN_00d9e840(auStack_120,local_c0 + 3,3,0);
  if (uVar4 < 3) {
    FUN_00d4d9e8(auStack_180);
    FUN_00d4daf4(auStack_180,0,1,0,lVar9);
    FUN_00d4db48(0x41200000,auStack_180,auStack_190);
    FUN_00d4dabc(auStack_180,0x40000);
    FUN_00d4dc44(auStack_180,1);
    uVar1 = 3 - uVar4;
    iVar5 = FUN_00d9e840(auStack_180,local_c0,uVar1,0);
    if ((iVar5 != 0) && (uVar1 != 0)) {
      uVar11 = (ulong)uVar1;
      plVar12 = local_c0;
      uVar1 = uVar4;
      do {
        uVar11 = uVar11 - 1;
        local_c0[(ulong)uVar1 + 3] = *plVar12;
        uVar1 = uVar1 + 1;
        plVar12 = plVar12 + 1;
      } while (uVar11 != 0);
    }
    uVar4 = iVar5 + uVar4;
  }
  if ((0.0 < fVar15) && (uVar4 != 0)) {
    fVar16 = fVar15 / (float)uVar4;
    if (fVar16 <= 1.0) {
      fVar16 = 1.0;
    }
    fVar17 = (float)FUN_00d59f54(lVar9,2,6,0x19,0);
    uVar11 = 0;
    fVar16 = fVar16 * (fVar17 + 1.0);
    do {
      uVar3 = FUN_00d5ba88(lVar9);
      uVar6 = FUN_00d5ba88(lVar9);
      uVar7 = FUN_00d5ba88(local_c0[uVar11 + 3]);
      local_c0[0]._0_4_ = 0;
      uVar8 = FUN_00ceb350();
      FUN_00d02a78(fVar16,auStack_180,uVar3,uVar6,uVar7,0xf,local_c0,uVar8);
      FUN_00ce20fc(auStack_180);
      fVar15 = fVar15 - fVar16;
      if (fVar15 < 0.0) break;
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar4);
  }
  *(float *)(lVar14 + 0x54) = fVar18;
  fVar15 = (float)FUN_00d67b34(uVar13);
  fVar18 = (float)FUN_00d59f54(lVar9,2,7,0x19,0);
  if (fVar15 - fVar18 <= 0.1) {
    uVar3 = *(undefined4 *)(lVar9 + 0x260);
    uVar6 = FUN_00d66d34(uVar13);
    FUN_00d009d0(auStack_180,uVar3,uVar6);
  }
  else {
    uVar3 = *(undefined4 *)(lVar9 + 0x260);
    uVar6 = FUN_00d66d34(uVar13);
    FUN_00d04628(fVar15 - fVar18,auStack_180,uVar3,uVar6);
  }
  FUN_00ce20fc(auStack_180);
  if (*(long *)(lVar2 + 0x28) == local_c0[6]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e17a48(undefined8 param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d67b78();
  fVar3 = *(float *)(*(long *)(lVar1 + 0x40) + 0x38);
  fVar2 = (float)FUN_00d59f54(lVar1,2,4,0x19,0);
  *param_2 = fVar3 * fVar2;
  return;
}




void FUN_00e17a94(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,3);
  FUN_00d4bc24();
  FUN_00d4bd00();
  uVar2 = FUN_00d4bcb4();
  lVar3 = FUN_00d4bd44(uVar2,FUN_00e17a48);
  uVar2 = FUN_00d39a54(lVar3 + 0x10);
  FUN_00d3e604(uVar2,FUN_00e17708);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Catherine_ArcaneShield_Buff");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  (**(code **)(*plVar4 + 0x90))();
  plVar4 = (long *)FUN_00d2df94(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"Sound_Catherine_Ability_B_Loop");
  lVar3 = FUN_00d09310();
  FUN_00d09330(*(undefined4 *)(lVar3 + 100));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar2 = FUN_00d64d7c(param_1);
  lVar3 = FUN_00d4891c(0x3f000000,uVar2,1);
  plVar4 = (long *)FUN_00d2b778(lVar3 + 0x10);
  local_48 = FUN_00e17c58;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  plVar4 = (long *)FUN_00d2b818(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"BurnDamagePerSecond",2);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  lVar3 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00e17ea8(lVar3 + 0x10);
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))();
  (**(code **)*puVar5)(puVar5,PTR_s_Ability__Catherine__B_02bee778);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e17c58(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00e17c6c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65e5c();
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_38 = FUN_00e17d70;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x10,1,&local_38);
  plVar3 = (long *)FUN_00d2ccac(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Catherine__A_DefaultAtt_02bee768);
  plVar3 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Idle","AssassinsCharge_Idle");
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Shield");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Catherine_AssassinsChargeShieldGlow");
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e17d70(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00e17d84(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65e5c();
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00d29f44(lVar2);
  local_48 = FUN_00e17e94;
  local_40 = 3;
  FUN_00d47690(uVar3,1,&local_48);
  plVar4 = (long *)FUN_00d2ccfc(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,"Effect_Catherine_AssassinsChargeDash");
  plVar4 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,"Move","AssassinsCharge_Run");
  plVar4 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,"FastMove","AssassinsCharge_Run");
  plVar4 = (long *)FUN_00d2df44(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,"Sprint","AssassinsCharge_Run");
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e17e94(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00e17ea8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099ddc0();
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




void FUN_00e17ef8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Celeste_Star_02bf0508);
  local_38 = FUN_00e17f7c;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e17f7c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,0xb,0x19,0);
  return;
}




void FUN_00e17f90(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_c0 [2];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 auStack_94 [92];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67b78();
  FUN_00d55794(uVar2,auStack_b8,0);
  thunk_FUN_00d9ff34(local_c0,PTR_s_Buff_CelesteStar_HeroicPerk_02bf0500);
  FUN_00d4e934(auStack_a8,local_c0[0]);
  FUN_00d4e998(auStack_a8,1);
  FUN_00d4db40(auStack_a8,uVar2);
  FUN_00d4daf4(auStack_a8,1,0,0,uVar2);
  FUN_00d4db48(0x40000000,auStack_a8,auStack_b8);
  FUN_00d4dca4(auStack_a8,"CelesteStar",0);
  *(undefined1 *)(param_2 + 0x10) = local_98;
  *(undefined8 *)(param_2 + 8) = local_a0;
  memcpy((void *)(param_2 + 0x14),auStack_94,0x47);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

