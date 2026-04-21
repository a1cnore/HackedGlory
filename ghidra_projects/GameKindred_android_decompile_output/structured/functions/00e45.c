// functions/00e45 — 22 functions
#include "libGameKindred.h"




void FUN_00e450bc(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d70a78();
    if (*(char *)(lVar5 + 0xe4) != '\0') {
      lVar5 = FUN_00d67c60(param_1);
      lVar6 = FUN_00d67c60(param_1);
      uVar3 = FUN_00e6a474("time_last_barrier_disabled");
      uVar3 = FUN_0091ed5c("time_last_barrier_disabled",uVar3,0x12345678);
      uVar3 = (**(code **)(*(long *)(lVar6 + 0x100) + 8))(lVar6 + 0x100,uVar3);
      puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar3);
      *puVar7 = 0;
      lVar5 = FUN_00d67c60(param_1);
      puVar2 = PTR_s_onBuffIntervalName_02bed520;
      uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
      uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
      *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
      uVar1 = *(uint *)(lVar5 + 0xf8);
      *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e44dd4;
      *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
      FUN_00d67b04(0x3f000000,param_1);
      return;
    }
  }
  return;
}




void FUN_00e451e4(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_00d64464();
  FUN_00d4bbf8(uVar1,4);
  uVar1 = FUN_00d4bc24();
  FUN_00d4bce8(uVar1,8);
  lVar2 = FUN_00d4bc38();
  plVar3 = (long *)FUN_00d46828(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e45228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__VainNode__HitReact_02bef6a0);
  return;
}




void FUN_00e4522c(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_50,&local_58);
  uVar3 = FUN_00d66d28(local_50);
  uVar4 = FUN_00daa58c(local_58,uVar3);
  if ((uVar4 & 1) != 0) {
    uVar7 = FUN_009bc24c();
    lVar5 = FUN_00d67c60(local_50);
    uVar2 = FUN_00e6a474("vainNodeTimeOfLastDamage");
    uVar2 = FUN_0091ed5c("vainNodeTimeOfLastDamage",uVar2,0x12345678);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar2);
    *puVar6 = uVar7;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e452f8(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_90 [64];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    FUN_00ceace8();
    uVar3 = FUN_00ceae88();
    if ((uVar3 & 1) == 0) {
      FUN_00d69224(param_1,&local_50);
      lVar4 = FUN_00d66d28(local_50);
      fVar7 = (float)FUN_009bc24c();
      uVar2 = FUN_00e6a474("vainNodeTimeOfLastDamage");
      uVar2 = FUN_0091ed5c("vainNodeTimeOfLastDamage",uVar2,0x12345678);
      pfVar5 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
      if (5.0 < fVar7 - *pfVar5) {
        lVar6 = *(long *)(lVar4 + 0x40);
        fVar7 = (*(float *)(lVar6 + 0x1a0) + 1.0) *
                (*(float *)(lVar6 + 0x38) +
                *(float *)(lVar6 + 0xec) * (*(float *)(lVar6 + 0x254) + 1.0));
        if (DAT_031bb750 <= fVar7) {
          fVar7 = DAT_031bb750;
        }
        fVar8 = DAT_031bb690;
        if (DAT_031bb690 <= fVar7) {
          fVar8 = fVar7;
        }
        if (*(float *)(lVar6 + 0x308) < fVar8) {
          FUN_00daa4a4(fVar8 / 180.0,auStack_90,*(undefined4 *)(lVar4 + 0x260),
                       *(undefined4 *)(lVar4 + 0x260),0xffffffff,0xffffffff,0xee,0xffffffff);
          FUN_00910c0c(auStack_90);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e45468(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = FUN_00d67c60();
  puVar2 = PTR_s_onBuffIntervalName_02bed520;
  uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e452f8;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_02bed5e8;
  uVar3 = FUN_00e6a474(PTR_s_onPreCalculateDamageExchangeName_02bed5e8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e4522c;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  uVar3 = FUN_00e6a474("vainNodeTimeOfLastDamage");
  uVar3 = FUN_0091ed5c("vainNodeTimeOfLastDamage",uVar3,0x12345678);
                    /* WARNING: Could not recover jumptable at 0x00e45580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x100) + 8))(lVar4 + 0x100,uVar3);
  return;
}




void FUN_00e45584(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  puVar2 = PTR_s_lastAttackedGuid_02bf1210;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar6 = param_1 + 0x168;
  uVar3 = FUN_00e6a474(PTR_s_lastAttackedGuid_02bf1210);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar6,uVar3);
  uVar3 = FUN_00e6a474(puVar2);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar6,uVar3);
  *puVar4 = 0xffffffff;
  puVar2 = PTR_s_lastAttackedTime_02bf1218;
  uVar3 = FUN_00e6a474(PTR_s_lastAttackedTime_02bf1218);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar6,uVar3);
  uVar3 = FUN_00e6a474(puVar2);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar6,uVar3);
  *puVar4 = 0;
  uVar5 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar5,6);
  FUN_00d4bc10();
  lVar6 = FUN_00d4bc38();
  uVar5 = FUN_00d314f8(lVar6 + 0x10);
  lVar7 = FUN_00d98a14(uVar5,PTR_s_lastAttackedGuid_02bf1210);
  *(undefined4 *)(lVar7 + 0x18) = 3;
  *(code **)(lVar7 + 0x30) = FUN_00d98c78;
  uVar5 = FUN_00d314f8(lVar6 + 0x10);
  lVar6 = FUN_00d98a14(uVar5,PTR_s_lastAttackedTime_02bf1218);
  *(undefined4 *)(lVar6 + 0x18) = 1;
  *(code **)(lVar6 + 0x30) = FUN_00d98cec;
  uVar5 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar5,3);
  uVar5 = FUN_00d4bc10();
  lVar6 = FUN_00d4bc60(uVar5,"Ability__Vox__A");
  plVar8 = (long *)FUN_00d2b728(lVar6 + 0x10);
  local_58 = FUN_00e4576c;
  local_50 = 3;
  (**(code **)(*plVar8 + 0x30))(plVar8,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e4576c(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,2,0x19,0);
  return;
}




float FUN_00e45780(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  FUN_00d67b84(*param_1);
  uVar1 = FUN_00d9e390();
  fVar2 = (float)FUN_00d67b34(*param_1);
  fVar3 = (float)FUN_00d59f54(uVar1,1,5,0x19,0);
  fVar3 = (float)NEON_fminnm(1.0 - fVar2 / fVar3,0x3f800000);
  fVar2 = (float)FUN_00d59f54(uVar1,1,6,0x19,0);
  return fVar2 * fVar3;
}




float FUN_00e45808(undefined8 *param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d67b34(*param_1);
  return fVar1 + 0.1;
}




void FUN_00e4582c(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_00d67b84(*param_1);
  uVar1 = FUN_00d9e390();
  fVar2 = (float)FUN_00d59f54(uVar1,1,3,0x19,0);
  fVar3 = (float)FUN_00d59f54(uVar1,1,4,0x19,0);
  fVar4 = (float)FUN_00d67b34(*param_1);
  fVar5 = (float)FUN_00d59f54(uVar1,1,5,0x19,0);
  *param_2 = fVar3 + (fVar2 - fVar3) * (1.0 - (1.0 - fVar4 / fVar5));
  return;
}




uint FUN_00e458ec(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = FUN_00d44008(*(undefined4 *)(param_2 + 0x260),PTR_s_Buff_Vox_HitBySoundwave_02bf1228);
  return ~uVar1 & 1;
}




void FUN_00e45914(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Vox_SonarPulse");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_00d64d7c(param_1);
    lVar2 = FUN_00d4891c(0x3dcccccd,uVar5,0);
    lVar2 = lVar2 + 0x10;
    plVar3 = (long *)FUN_00d2b778(lVar2);
    local_58 = FUN_00e45780;
    local_50 = 4;
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_58);
    plVar3 = (long *)FUN_00d2cf7c(lVar2);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Vox_Resonance_02bf1238);
    local_58 = FUN_00d8f3b8;
    local_50 = 3;
    plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
    (**(code **)(*plVar3 + 0x60))(plVar3,FUN_00e458ec);
    plVar3 = (long *)FUN_00d2cf7c(lVar2);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Vox_SoundwaveSlow_02bf1240);
    local_58 = FUN_00e45af8;
    local_50 = 3;
    plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,FUN_00e4582c);
    (**(code **)(*plVar3 + 0x60))(plVar3,FUN_00e458ec);
    plVar3 = (long *)FUN_00d2cf7c(lVar2);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Vox_HitBySoundwave_02bf1228);
    local_58 = FUN_00e45808;
    local_50 = 4;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  }
  lVar2 = FUN_00d64980(param_1);
  FUN_00d394e4(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e45af8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,7,0x19,0);
  return;
}




void FUN_00e45b0c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d29f44(lVar2 + 0x10);
  local_38 = FUN_00d44db8;
  local_30 = 4;
  FUN_00d47690(uVar3,2,&local_38);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e45b8c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  FUN_00d67b84(*param_1);
  uVar1 = FUN_00d9e390();
  fVar3 = (float)thunk_FUN_00d086f0(uVar1,2,1);
  lVar2 = FUN_00d66d28(*param_1);
  fVar4 = *(float *)(*(long *)(lVar2 + 0x38) + 100);
  return fVar3 + (*(float *)(*(long *)(lVar2 + 0x38) + 0x68) * (fVar4 + *(float *)(lVar2 + 0x2e8)))
                 / fVar4;
}




void FUN_00e45bf0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_58 [2];
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00d64080(param_1);
    plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Vox_Resonance_02bf1238);
    local_48 = FUN_00d8f3b8;
    local_40 = 3;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
    lVar3 = FUN_00d64080(param_1);
    plVar4 = (long *)FUN_00d2b778(lVar3 + 0x10);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
    local_48 = FUN_00e45b8c;
    local_40 = 4;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
    local_58[0] = 2;
    local_50 = 1;
    (**(code **)(*plVar4 + 0x28))(plVar4,local_58,1);
    plVar4 = (long *)FUN_00d2b7c8(lVar3 + 0x10);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
    plVar4 = (long *)(**(code **)(*plVar4 + 0x70))();
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x75);
    (**(code **)(*plVar4 + 0x18))(plVar4,"CenterBody");
  }
  lVar3 = FUN_00d63f30(param_1);
  plVar4 = (long *)FUN_00d2cc5c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Vox_Ability_B_Ricochet_1");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Vox_Ability_B_Ricochet_2");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Vox_Ability_B_Ricochet_3");
  lVar3 = FUN_00d09310();
  FUN_00d09884(*(undefined4 *)(lVar3 + 0x1c0));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e45da4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Head");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Vox_Sonar_Debuff");
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  uVar4 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar4,6);
  FUN_00d4bc24();
  FUN_00d4bc38();
  lVar2 = FUN_00d4bd10();
  lVar2 = FUN_00d29e8c(lVar2 + 0x10);
  lVar5 = FUN_00e12bf0(lVar2 + 0x10);
  *(undefined4 *)(lVar5 + 0x10) = 0x101004;
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x88);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Vox_Resonance_Proc_02bf1248);
  local_38[0] = 0x3dcccccd;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e45ea8(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d6a1f8(*param_1);
  *param_3 = uVar1;
  param_3[1] = 0x3fc00000;
  uVar1 = FUN_00d6a25c(*param_1);
  param_3[2] = uVar1;
  return;
}




void FUN_00e45ee8(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_00d6483c();
  lVar2 = FUN_00d48f64(uVar1,FUN_00e45fb4);
  plVar3 = (long *)FUN_00d2b7c8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x79);
  (**(code **)(*plVar3 + 0x30))(plVar3,FUN_00e45ea8);
  FUN_00d2ab44(lVar2 + 0x10);
  return;
}




void FUN_00e45f50(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Vox_Sonar_Ping");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x80))(plVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00e45fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb8))(plVar2,0);
  return;
}




void FUN_00e45fb4(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d426b0();
  uVar2 = FUN_00d59f54(uVar1,2,4,0x19,0);
  *param_2 = uVar2;
  return;
}




void FUN_00e45fec(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*param_1 != 0) {
    plVar2 = (long *)(*param_1 + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  return;
}

