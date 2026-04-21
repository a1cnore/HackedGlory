// functions/00e24 — 22 functions
#include "libGameKindred.h"




void FUN_00e240d0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47dc4(uVar3,"CenterBody");
  FUN_00da2040(uVar3,"Effect_Hero034_PfxShaderParamAura");
  FUN_00da210c(0x3f800000,0x3f800000,0);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47d9c(uVar3);
  FUN_00da2040(uVar3,"Effect_Hero034_PfxRadiusParamTest");
  FUN_00da210c(0x3f800000,0x3f800000,0);
  uVar3 = FUN_00da213c(0x40c00000);
  FUN_00da20dc(uVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e241bc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d67d04(0x40a00000);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_40,lVar2 + 0x18);
  FUN_00d3e534();
  uVar3 = FUN_00e248d0();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d2cb84();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d3e888(0xbf800000,0,0,uVar3,PTR_s_Buff_Hero034_VitalityControl_02bf0820,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00e24290(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_00d9ea34(param_2);
  uVar3 = FUN_00d6bbac(uVar2,DAT_031b9c38,0);
  uVar1 = 0;
  if ((uVar3 & 1) == 0) {
    uVar1 = FUN_00d6bbac(uVar2,DAT_031b9c3c,0);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}




void FUN_00e242e8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x28);
  FUN_00d3e534();
  uVar3 = FUN_00d2a504();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d2cb84();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d3e888(0xbf800000,0,0,uVar3,PTR_s_Buff_Hero034_Vitality_02bf0828,1,0xffffffff,0,0);
  FUN_00d3e8ec(uVar3,FUN_00e24290);
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(auStack_50,uVar3);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar2 + 0x18);
  FUN_00d3e534();
  uVar3 = FUN_00d2a504();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d2a994();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d46fc0(uVar3,PTR_s_Buff_Hero034_Vitality_02bf0828);
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(auStack_50,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e24424(void)

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
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_40,uVar3);
  uVar3 = FUN_00d47dc4(uVar3,"OverHead");
  FUN_00da2040(uVar3,"Effect_Hero034_Vitality");
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e244a8(void)

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
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_40,uVar3);
  uVar3 = FUN_00d47dc4(uVar3,"OverHead");
  FUN_00da2040(uVar3,"Effect_Hero034_VitalityDrained");
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2452c(void)

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
  uVar3 = FUN_00da51d0();
  FUN_00d42654(auStack_40,uVar3);
  FUN_00d419b4(uVar3,0x20);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e245a0(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  float local_60 [2];
  undefined4 local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d66d28();
  FUN_00d67b04(0x3e4ccccd,param_1);
  lVar4 = FUN_00d63f30(param_1);
  plVar5 = (long *)FUN_00d2779c(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"Ability01_Seduce");
  (**(code **)(*plVar5 + 0x20))();
  lVar4 = FUN_00d65010(param_1);
  uVar6 = FUN_00d29c84(lVar4 + 0x10);
  FUN_00d46b64(uVar6,2);
  lVar4 = FUN_00d64d7c(param_1);
  uVar6 = FUN_00e249ac(lVar4 + 0x10);
  FUN_00d9c91c(uVar6,PTR_s_Buff_Hero034_A_Seducing_02bf0840,"__VAR1_FLOAT__");
  plVar5 = (long *)FUN_00d2b818(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))();
  fVar7 = (float)FUN_00d59f54(uVar3,0,5,0x19,0);
  local_60[0] = (float)FUN_00d67b3c(param_1);
  local_60[0] = fVar7 / local_60[0];
  local_58 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_60,1,2);
  lVar4 = FUN_00d64980(param_1);
  plVar5 = (long *)FUN_00d2779c(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"Idle");
  (**(code **)(*plVar5 + 0x20))();
  lVar4 = FUN_00d67c60(param_1);
  FUN_00d425ec(local_60,lVar4 + 0x18);
  FUN_00d3e534();
  uVar3 = FUN_00e249fc();
  FUN_00d42654(local_60,uVar3);
  uVar2 = FUN_00d6a078(param_1);
  FUN_00d40054(uVar3,uVar2);
  FUN_00d3e534();
  uVar3 = FUN_00d2a994();
  FUN_00d42654(local_60,uVar3);
  FUN_00d46fc0(uVar3,PTR_s_Buff_Hero034_A_Seduced_02bf0848);
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(local_60,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2479c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d29c84(lVar1 + 0x10);
  FUN_00d46b64(uVar2,0x1e);
  plVar3 = (long *)FUN_00d29c34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e247dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,2);
  return;
}




void FUN_00e247e0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00d65010();
  lVar1 = lVar1 + 0x10;
  FUN_00d29be4(lVar1);
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Stunned_buff");
  uVar3 = FUN_00d45f10(lVar1);
  FUN_00d9886c(uVar3,PTR_s_Ability__Hero034__B_02beec78,PTR_s_Ability__Hero034__B_Cancel_02beec88);
  uVar3 = FUN_00d645a8(param_1);
  lVar1 = FUN_00d4b124(uVar3,PTR_s_Ability__Hero034__B2_02beec80);
  plVar2 = (long *)FUN_00d44df8(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Hero034__B2_02beec80,3,0);
  lVar1 = FUN_00d64980(param_1);
  plVar2 = (long *)FUN_00d44df8(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x40))(plVar2,PTR_s_Ability__Hero034__B2_02beec80);
  plVar2 = (long *)FUN_00e213ac(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e248cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Hero034__B_02beec78);
  return;
}




undefined8 * FUN_00e248d0(long param_1)

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
    *puVar4 = &PTR_FUN_0281fe90;
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00e249ac(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a066c();
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




undefined8 * FUN_00e249fc(long param_1)

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
    FUN_00d40008(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00e24acc(undefined8 *param_1,float *param_2,float *param_3)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_00d426b0(*param_1);
  fVar3 = (float)thunk_FUN_00d086f0(lVar1,0,3);
  fVar5 = *(float *)(*(long *)(lVar1 + 0x40) + 0xec);
  fVar4 = (float)thunk_FUN_00d086f0(lVar1,1,1);
  *param_2 = fVar3 + fVar5 * fVar4;
  uVar2 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Tony_Talent_TalentA_02bf2178);
  if ((uVar2 & 1) == 0) {
    fVar3 = *param_2;
  }
  else {
    fVar4 = *param_2;
    fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_0320ec4c,1,9);
    fVar3 = *param_2 + fVar4 * fVar3;
    *param_2 = fVar3;
  }
  *param_3 = fVar3;
  return;
}




void FUN_00e24b94(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d3bc68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00e24bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,1);
  return;
}




void FUN_00e24bc8(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d657dc();
  plVar2 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e24bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_00e24acc);
  return;
}




void FUN_00e24bf8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  lVar3 = FUN_00d4bc24();
  uVar2 = FUN_00d2d01c(lVar3 + 0x10);
  FUN_00d9b700(uVar2,PTR_s_Buff_Tony_Perk_BarrierControl_02bf0858);
  FUN_00d9b5b8(uVar2);
  plVar4 = (long *)FUN_00d2887c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Tony_Perk_Barrier_02bf0860);
  local_58 = FUN_00e24d10;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  FUN_00d9b5b8(uVar2);
  plVar4 = (long *)FUN_00d2887c();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Tony_Perk_BarrierControl_02bf0858);
  local_58 = FUN_00e24d1c;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d3bc68(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x38))();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e24d10(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,2,1);
  return;
}




void FUN_00e24d1c(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,3,3);
  return;
}




void FUN_00e24d28(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_00d2ccac(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Tony__A1_02beed18);
  (**(code **)(*plVar2 + 0x40))(0x40600000);
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Rightjet");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tony_Buff_A");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Leftjet");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tony_Buff_A_L");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e24e28(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_00d2ccac(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Tony__A2_02beed20);
  (**(code **)(*plVar2 + 0x40))(0x40600000);
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Rightjet");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tony_Buff_A_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Leftjet");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tony_Buff_A_L_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00e24f28(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_00d2ccac(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Tony__A3_02beed28);
  (**(code **)(*plVar2 + 0x40))(0x40600000);
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Rightjet");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tony_Buff_A_3");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Leftjet");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tony_Buff_A_L_3");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}

