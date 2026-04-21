// functions/00e0f — 16 functions
#include "libGameKindred.h"




void FUN_00e0f0e4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d4403c(param_1,1);
  lVar1 = FUN_00d65010(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_00d2887c(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Alpha_ThrusterPfx_02bf0240);
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LeftKnee");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Alpha_String");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightKnee");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Alpha_String");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LeftHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Alpha_String");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_00d2945c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Alpha_String");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
                    /* WARNING: Could not recover jumptable at 0x00e0f250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_00e0f254(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  uVar3 = FUN_00e0fa8c(lVar2 + 0x10);
  FUN_00d41f80(uVar3,3);
  lVar2 = FUN_00d65010(param_1);
  uVar3 = FUN_00e0fadc(lVar2 + 0x10);
  FUN_00d41ef4(uVar3,0);
  uVar3 = FUN_00d29c84(lVar2 + 0x10);
  FUN_00d46b64(uVar3,0x200);
  lVar2 = FUN_00d64080(param_1);
  plVar4 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_SpawnStage_MatchStart_Speed_02bf1060);
  local_48[0] = 0x41a00000;
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_48);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0f338(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48[0] = 0x3eb33333;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,3,2,local_48);
  lVar2 = FUN_00d65a7c(param_1);
  plVar3 = (long *)FUN_00e0fb2c(lVar2 + 0x10);
  local_48[0] = 0x43c80000;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x38))(plVar3,0x15,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0f3ec(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_88 [48];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_00e6a474("__PARENT__");
    uVar2 = FUN_0091ed5c("__PARENT__",uVar2,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    uVar8 = *puVar4;
    lVar5 = FUN_00d66d28(uVar8);
    fVar9 = (float)FUN_009bc24c();
    uVar2 = FUN_00e6a474("timeOfLastDamageExchange");
    uVar2 = FUN_0091ed5c("timeOfLastDamageExchange",uVar2,0x12345678);
    pfVar6 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    if (*pfVar6 + 5.0 < fVar9) {
      lVar7 = *(long *)(lVar5 + 0x40);
      fVar9 = (*(float *)(lVar7 + 0x1a0) + 1.0) *
              (*(float *)(lVar7 + 0x38) +
              *(float *)(lVar7 + 0xec) * (*(float *)(lVar7 + 0x254) + 1.0));
      fVar11 = *(float *)(lVar7 + 0x308);
      if (DAT_031b84b0 <= fVar9) {
        fVar9 = DAT_031b84b0;
      }
      fVar10 = DAT_031b83f0;
      if (DAT_031b83f0 <= fVar9) {
        fVar10 = fVar9;
      }
      fVar9 = (float)FUN_00d67b0c(uVar8);
      if (1.0 < fVar9 * (fVar10 - fVar11) * 0.04) {
        FUN_00d043c0(auStack_88,*(undefined4 *)(lVar5 + 0x260),0,0);
        FUN_00ce20fc(auStack_88);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0f57c(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 uVar7;
  
  uVar1 = FUN_00e6a474("__COMBAT_PARAMS__");
  uVar1 = FUN_0091ed5c("__COMBAT_PARAMS__",uVar1,0x12345678);
  plVar2 = (long *)(**(code **)(*param_1 + 0x10))(param_1,uVar1);
  lVar6 = *plVar2;
  uVar1 = FUN_00e6a474("__PARENT__");
  uVar1 = FUN_0091ed5c("__PARENT__",uVar1,0x12345678);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar1);
  lVar4 = FUN_00d66d28(*puVar3);
  if ((((*(int *)(lVar6 + 0x10) == *(int *)(lVar4 + 0x260)) && (*(long *)(lVar6 + 0x20) != 0)) &&
      ((*(byte *)(*(long *)(lVar6 + 0x20) + 0x2f4) & 1) != 0)) ||
     (((*(int *)(lVar6 + 0x18) == *(int *)(lVar4 + 0x260) && (*(long *)(lVar6 + 0x28) != 0)) &&
      ((*(byte *)(*(long *)(lVar6 + 0x28) + 0x2f4) & 1) != 0)))) {
    uVar7 = FUN_009bc24c();
    uVar1 = FUN_00e6a474("timeOfLastDamageExchange");
    uVar1 = FUN_0091ed5c("timeOfLastDamageExchange",uVar1,0x12345678);
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar1);
    *puVar5 = uVar7;
  }
  return;
}




void FUN_00e0f6a4(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 *puVar5;
  
  FUN_00d67b04(0x3f000000);
  lVar4 = FUN_00d67c60(param_1);
  uVar3 = FUN_00e6a474("timeOfLastDamageExchange");
  uVar3 = FUN_0091ed5c("timeOfLastDamageExchange",uVar3,0x12345678);
  (**(code **)(*(long *)(lVar4 + 0x100) + 8))(lVar4 + 0x100,uVar3);
  lVar4 = FUN_00d67c60(param_1);
  uVar3 = FUN_00e6a474("timeOfLastDamageExchange");
  uVar3 = FUN_0091ed5c("timeOfLastDamageExchange",uVar3,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x10))(lVar4 + 0x100,uVar3);
  *puVar5 = 0;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onBuffIntervalName_02bed520;
  uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e0f3ec;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_02bed5e8;
  uVar3 = FUN_00e6a474(PTR_s_onPreCalculateDamageExchangeName_02bed5e8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e0f57c;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




void FUN_00e0f814(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,uVar3);
  FUN_00d3e534();
  uVar3 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40cd4(0x3f800000,uVar3,0x15,2,0,0);
  FUN_00d3e534();
  uVar3 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40cd4(0x3f800000,uVar3,0x14,2,0,0);
  lVar4 = FUN_00d66d28(param_1);
  lVar4 = *(long *)(lVar4 + 0x40);
  fVar5 = (*(float *)(lVar4 + 0x240) + 1.0) *
          (*(float *)(lVar4 + 0xd8) + *(float *)(lVar4 + 0x18c) * (*(float *)(lVar4 + 0x2f4) + 1.0))
  ;
  if (DAT_031b8550 <= fVar5) {
    fVar5 = DAT_031b8550;
  }
  fVar2 = DAT_031b8490;
  if (DAT_031b8490 <= fVar5) {
    fVar2 = fVar5;
  }
  FUN_00d3e534();
  uVar3 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00d40cd4(fVar2 * 0.1,uVar3,0x12,1,0,0);
  lVar4 = FUN_00d63f30(param_1);
  uVar3 = FUN_00e0fa8c(lVar4 + 0x10);
  FUN_00d41f80(uVar3,3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0f994(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00e0fb7c();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d411dc(0xc4480000,uVar2,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d40cd4(0xc4480000,uVar2,0,0,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar2);
  FUN_00d40cd4(0x42a00000,uVar2,0x14,0,1,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0fa8c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a00dc();
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




void FUN_00e0fadc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a12dc();
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




void FUN_00e0fb2c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a0008();
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




undefined8 * FUN_00e0fb7c(long param_1)

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
    FUN_00d4119c(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00e0fc50(void)

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
  local_38[0] = 0x3f000000;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0,2,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0fcc4(void)

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
  local_38[0] = 0xc47a0000;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0,1,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0fd38(void)

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
  local_38[0] = 0x3f800000;
  local_30 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x15,2,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0fdac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Red_Buff");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_58[0] = 0x3ecccccd;
  local_50 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_58);
  (**(code **)(*plVar3 + 0xc0))(0x3f800000,0x3f800000,0);
  lVar2 = FUN_00d64080(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,"build://Sounds/5v5/SFX/sfx_weapon_buff_picked_up.mp3");
  (**(code **)(*plVar3 + 0x28))(0x3f800000);
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_58[0] = 0x42c80000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,4,1,local_58);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_58[0] = 0x42c80000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,5,1,local_58);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_58[0] = 0x3f000000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x12,1,local_58);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_58[0] = 0x3eb33333;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xf,1,local_58);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_58[0] = 0x3f000000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x22,1,local_58);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_58[0] = 0x3f000000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x24,1,local_58);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_58[0] = 0xbf800000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x23,2,local_58);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  FUN_00d63b38(param_1);
  lVar2 = FUN_00d4b770();
  FUN_00e10084(lVar2 + 0x10);
  FUN_00d9c56c();
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_ARAM_AscendedPower_02bf0290);
  lVar2 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,"build://Sounds/5v5/SFX/sfx_weapon_buff_dropped_on_ground.mp3")
  ;
  (**(code **)(*plVar3 + 0x28))(0x3f800000);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

