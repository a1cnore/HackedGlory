// functions/00e3f — 16 functions
#include "libGameKindred.h"




void FUN_00e3f03c(undefined8 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  
  lVar3 = FUN_00d67c60();
  puVar5 = PTR_s_onEndName_02bed518;
  uVar1 = FUN_00e6a474(PTR_s_onEndName_02bed518);
  uVar1 = FUN_0091ed5c(puVar5,uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x38 + (ulong)*(uint *)(lVar3 + 0xf8) * 4) = uVar1;
  uVar2 = *(uint *)(lVar3 + 0xf8);
  *(code **)(lVar3 + 0x38 + (ulong)uVar2 * 8 + 0x40) = FUN_00e3eee8;
  *(uint *)(lVar3 + 0xf8) = uVar2 + 1;
  uVar2 = FUN_00d6a078(param_1);
  lVar3 = FUN_00d63f30(param_1);
  plVar4 = (long *)FUN_00d2779c(lVar3 + 0x10);
  puVar5 = (undefined *)0x0;
  if (uVar2 < 4) {
    puVar5 = (&PTR_s_Ability02_DashForward_0281fde0)[(int)uVar2];
  }
  (**(code **)(*plVar4 + 0x30))(plVar4,puVar5);
  lVar3 = FUN_00d65010(param_1);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d2945c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_wingJet_L");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Skye_Thruster_WL");
  plVar4 = (long *)FUN_00d2945c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_wingJet_R");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Skye_Thruster_WR");
  plVar4 = (long *)FUN_00d2945c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_wingJet_L");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Skye_LightTrail");
  lVar3 = FUN_00d64980(param_1);
  if (uVar2 - 1 < 3) {
    puVar5 = (&PTR_s_Ability02_DashAcross_Stop_0281fe00)[(int)(uVar2 - 1)];
    plVar4 = (long *)FUN_00d2779c(lVar3 + 0x10);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,puVar5);
    (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  }
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x00e3f20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Skye_B_Dust");
  return;
}




void FUN_00e3f210(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  uint *puVar5;
  
  lVar4 = FUN_00d67c60(*param_1);
  puVar2 = PTR_s_num_missiles_left_02bf0fa0;
  uVar3 = FUN_00e6a474(PTR_s_num_missiles_left_02bf0fa0);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  puVar5 = (uint *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x18))(lVar4 + 0x100,uVar3);
  pcVar1 = "RocketPod_L";
  if ((*puVar5 & 1) != 0) {
    pcVar1 = "RocketPod_R";
  }
  *param_2 = pcVar1;
  return;
}




void thunk_FUN_00e3f210(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  uint *puVar5;
  
  lVar4 = FUN_00d67c60(*param_1);
  puVar2 = PTR_s_num_missiles_left_02bf0fa0;
  uVar3 = FUN_00e6a474(PTR_s_num_missiles_left_02bf0fa0);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  puVar5 = (uint *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x18))(lVar4 + 0x100,uVar3);
  pcVar1 = "RocketPod_L";
  if ((*puVar5 & 1) != 0) {
    pcVar1 = "RocketPod_R";
  }
  *param_2 = pcVar1;
  return;
}




void FUN_00e3f2a0(undefined8 *param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  int *piVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar7 = (float)FUN_00d59f54(param_2,2,3,0x19,0);
  lVar4 = FUN_00d67c60(*param_1);
  puVar2 = PTR_s_num_missiles_left_02bf0fa0;
  uVar3 = FUN_00e6a474(PTR_s_num_missiles_left_02bf0fa0);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  piVar5 = (int *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x18))(lVar4 + 0x100,uVar3);
  iVar1 = *piVar5;
  fVar8 = (float)FUN_00d6a1f8(*param_1);
  fVar9 = (float)FUN_00d6a25c(*param_1);
  fVar10 = (float)FUN_00d59f54(param_2,2,3,0x19,0);
  fVar9 = fVar9 / (float)((int)fVar10 - 1);
  fVar10 = cosf(fVar8);
  fVar8 = sinf(fVar8);
  lVar4 = FUN_00d67c60(*param_1);
  puVar2 = PTR_s_target_pos_02bf0f98;
  uVar3 = FUN_00e6a474(PTR_s_target_pos_02bf0f98);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar4 + 0x100) + 0x18))(lVar4 + 0x100,uVar3);
  fVar11 = *pfVar6;
  fVar12 = pfVar6[1];
  param_3[1] = 0.0;
  *param_3 = fVar10 * fVar9 * (float)(uint)((int)fVar7 - iVar1) + fVar11;
  param_3[2] = fVar8 * fVar9 * (float)(uint)((int)fVar7 - iVar1) + fVar12;
  return;
}




undefined4 FUN_00e3f41c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  byte *pbVar4;
  
  lVar3 = FUN_00d67c60(*param_1);
  puVar1 = PTR_s_num_missiles_left_02bf0fa0;
  uVar2 = FUN_00e6a474(PTR_s_num_missiles_left_02bf0fa0);
  uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
  pbVar4 = (byte *)(**(code **)(*(long *)(lVar3 + 0x100) + 0x18))(lVar3 + 0x100,uVar2);
  uVar2 = 0x3f800000;
  if ((*pbVar4 & 1) != 0) {
    uVar2 = 0xbf800000;
  }
  return uVar2;
}




void FUN_00e3f498(undefined8 *param_1,int *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  int *piVar4;
  
  lVar3 = FUN_00d67c60(*param_1);
  puVar1 = PTR_s_num_missiles_left_02bf0fa0;
  uVar2 = FUN_00e6a474(PTR_s_num_missiles_left_02bf0fa0);
  uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
  piVar4 = (int *)(**(code **)(*(long *)(lVar3 + 0x100) + 0x18))(lVar3 + 0x100,uVar2);
  *param_2 = *piVar4 + -1;
  return;
}




void FUN_00e3f510(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_70;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00d66d28();
  fVar10 = (float)FUN_00d59f54(uVar4,2,3,0x19,0);
  fVar11 = (float)FUN_00d67b3c(param_1);
  fVar12 = (float)(uint)(int)fVar10;
  FUN_00d67b04(fVar11 / fVar12,param_1);
  lVar5 = FUN_00d66d28(param_1);
  lVar6 = FUN_00da01e4();
  if (lVar6 == 0) {
    lVar6 = lVar5;
  }
  FUN_00d580a0(lVar6,&local_70);
  lVar5 = FUN_00d67c60(param_1);
  lVar6 = lVar5 + 0x100;
  (*(code *)**(undefined8 **)(lVar5 + 0x100))(lVar6,PTR_s_target_pos_02bf0f98);
  puVar2 = PTR_s_target_pos_02bf0f98;
  uVar3 = FUN_00e6a474(PTR_s_target_pos_02bf0f98);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  puVar7 = (undefined8 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar6,uVar3);
  *puVar7 = local_70;
  (*(code *)**(undefined8 **)(lVar5 + 0x100))(lVar6,PTR_s_num_missiles_left_02bf0fa0);
  puVar2 = PTR_s_num_missiles_left_02bf0fa0;
  uVar3 = FUN_00e6a474(PTR_s_num_missiles_left_02bf0fa0);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  puVar8 = (uint *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar6,uVar3);
  *puVar8 = (int)fVar10;
  uVar4 = FUN_00d64d7c(param_1);
  fVar10 = (float)FUN_00d67b3c(param_1);
  lVar6 = FUN_00d4891c(fVar10 / fVar12,uVar4,1);
  lVar6 = lVar6 + 0x10;
  plVar9 = (long *)FUN_00d2b7c8(lVar6);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x6f);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x20))(plVar9,FUN_00e3f210);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,FUN_00e3f2a0);
  local_68 = FUN_00e3f41c;
  local_60 = 4;
  (**(code **)(*plVar9 + 0x38))(plVar9,&local_68);
  plVar9 = (long *)FUN_00d2945c(lVar6);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x70))(plVar9,thunk_FUN_00e3f210);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x48))(plVar9,"Effect_Skye_B_MF");
  (**(code **)(*plVar9 + 0x88))(plVar9,1);
  plVar9 = (long *)FUN_00d2cc5c(lVar6);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x38))(plVar9,"Sound_Skye_Ability_B_Launch_1");
  plVar9 = (long *)(**(code **)(*plVar9 + 0x18))(plVar9,"Sound_Skye_Ability_B_Launch_2");
  plVar9 = (long *)(**(code **)(*plVar9 + 0x18))(plVar9,"Sound_Skye_Ability_B_Launch_3");
  plVar9 = (long *)(**(code **)(*plVar9 + 0x18))(plVar9,"Sound_Skye_Ability_B_Launch_4");
  plVar9 = (long *)(**(code **)(*plVar9 + 0x18))(plVar9,"Sound_Skye_Ability_B_Launch_5");
  lVar5 = FUN_00d09310();
  FUN_00d09980(*(undefined4 *)(lVar5 + 0x210));
  plVar9 = (long *)(**(code **)(*plVar9 + 0x28))(plVar9);
  (**(code **)(*plVar9 + 0x38))();
  uVar4 = FUN_00d314f8(lVar6);
  lVar6 = FUN_00d98a14(uVar4,PTR_s_num_missiles_left_02bf0fa0);
  *(undefined4 *)(lVar6 + 0x18) = 2;
  *(code **)(lVar6 + 0x30) = FUN_00e3f498;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3f804(undefined8 param_1,long param_2)

{
  float fVar1;
  
  if (*(long *)(param_2 + 0x28) != 0) {
    fVar1 = (float)FUN_00d59f54(*(long *)(param_2 + 0x28),2,7,0x19,0);
    *(float *)(param_2 + 0x30) = fVar1 * *(float *)(param_2 + 0x30);
  }
  return;
}




void FUN_00e3f848(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  FUN_00d39534(lVar1 + 0x10);
  plVar2 = (long *)FUN_00d2b818(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x30))(plVar2,2);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d39534(lVar1 + 0x10);
  plVar2 = (long *)FUN_00d2b818(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,2);
                    /* WARNING: Could not recover jumptable at 0x00e3f8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x60))(plVar2,FUN_00e3f804);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e3f8e0(undefined4 param_1,long *param_2,byte *param_3,byte *param_4,uint param_5,
                 byte param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  byte local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (((DAT_031bb0e8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_031bb0e8), iVar4 != 0)) {
    uRam00000000031bb0c8 = 0xd0a0f3d4cfa0f241;
    _DAT_031bb0c0 = 0xcea0f0aecda0ef1b;
    uRam00000000031bb0d8 = 0xc4a0e0f0d3a0f88d;
    _DAT_031bb0d0 = 0xd2a0f6fad1a0f567;
    DAT_031bb0e0 = 0xc5a0e283;
    __cxa_guard_release(&DAT_031bb0e8);
  }
  FUN_00d69224(param_2,&local_e0);
  uVar5 = FUN_00d66d28(local_e0);
  puVar2 = PTR_s_num_pfx_spawned_02bf0fa8;
  uVar3 = FUN_00e6a474(PTR_s_num_pfx_spawned_02bf0fa8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  puVar6 = (uint *)(**(code **)(*param_2 + 0x10))(param_2,uVar3);
  if (*puVar6 < 9) {
    FUN_00d5cf60(uVar5);
    uVar7 = FUN_00d9e390();
    uVar8 = FUN_00d9e99c();
    if ((uVar8 & 1) == 0) {
      param_4 = param_3;
    }
    uStack_c0 = 0;
    local_c8 = 0;
    uStack_d0 = 0;
    local_d8 = 0;
    if (param_4 == (byte *)0x0) {
      local_b8 = 0;
    }
    else {
      uVar9 = (uint)*param_4;
      local_b8 = 0x811c9dc5;
      if (*param_4 != 0) {
        do {
          param_4 = param_4 + 1;
          local_b8 = (local_b8 ^ uVar9) * 0x1000193;
          uVar9 = (uint)*param_4;
        } while (*param_4 != 0);
      }
    }
    local_b0 = 0xffffffff;
    local_a4 = 0xff000000;
    local_94 = DAT_03218f40;
    local_9c = _DAT_03218ef8;
    local_8c = DAT_03218f48;
    local_ac = 0;
    local_88 = 0;
    local_80 = 0;
    local_7c = 2;
    local_74 = 0x101;
    local_70 = 0;
    local_b4 = param_1;
    uStack_c0 = FUN_00d5babc(uVar7);
    local_70 = param_6 & 1;
    FUN_00d5a560(uVar5,&local_d8,&DAT_031bb0c0 + (ulong)*puVar6 * 4);
    uVar9 = 0;
    if (*puVar6 + 1 < 9 || ((param_5 ^ 0xffffffff) & 1) != 0) {
      uVar9 = *puVar6 + 1;
    }
    *puVar6 = uVar9;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e3fb28(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d69224(param_1,&local_40);
  FUN_00d67b78(local_40);
  FUN_00d5cf60();
  uVar2 = FUN_00d9e390();
  fVar3 = (float)FUN_00d67b34(local_40);
  fVar4 = (float)FUN_00d59f54(uVar2,4,4,0x19,0);
  FUN_00e3f8e0(fVar3 + fVar4,param_1,"Effect_Skye_C_Reticle_Enemy","Effect_Skye_C_Reticle_Ally",0,1)
  ;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3fbe4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  undefined4 local_68 [2];
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) == 0) {
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_num_pfx_spawned_02bf0fa8;
    uVar4 = FUN_00e6a474(PTR_s_num_pfx_spawned_02bf0fa8);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    (**(code **)(*(long *)(lVar6 + 0x100) + 8))(lVar6 + 0x100,uVar4);
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_num_pfx_spawned_02bf0fa8;
    uVar4 = FUN_00e6a474(PTR_s_num_pfx_spawned_02bf0fa8);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x100) + 0x10))(lVar6 + 0x100,uVar4);
    *puVar7 = 0;
    FUN_00d67b04(0x3d4ccccd,param_1);
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBuffIntervalName_02bed520;
    uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e3fb28;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  }
  FUN_00d66d28(param_1);
  FUN_00d5cf60();
  lVar6 = FUN_00d9e390();
  FUN_00d59f54(lVar6,4,3,0x19,0);
  FUN_00d67d04(param_1);
  lVar8 = FUN_00d6624c(param_1);
  plVar9 = (long *)FUN_00d2887c(lVar8 + 0x10);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,param_2);
  local_68[0] = FUN_00d59f54(lVar6,4,4,0x19,0);
  local_60 = 1;
  plVar9 = (long *)(**(code **)(*plVar9 + 0x18))(plVar9,local_68);
  (**(code **)(*plVar9 + 0x30))(plVar9,*(undefined4 *)(lVar6 + 0x260));
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3fde4(undefined8 param_1)

{
  FUN_00e3fbe4(param_1,PTR_s_Buff_Skye_ClusterMissileVolley_E_02bf1020);
  return;
}




void FUN_00e3fdf0(undefined8 param_1)

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
  plVar3 = (long *)FUN_00d2b778(lVar2 + 0x10);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x40200000);
  local_50 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_58);
  plVar3 = (long *)FUN_00d2cf7c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_58 = FUN_00e3ff64;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  uVar4 = FUN_00d64d7c(param_1);
  lVar2 = FUN_00d4891c(0x3dcccccd,uVar4,0);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2b778(lVar2);
  local_58._0_4_ = 0x40200000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_58);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Skye_HitByMissileVolley_02bf1028)
  ;
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3dcccccd);
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x30))(plVar3,4);
  lVar2 = FUN_00d64980(param_1);
  FUN_00d2ab44(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3ff64(undefined8 param_1)

{
  FUN_00d59f54(param_1,4,5,0x19,0);
  return;
}




void FUN_00e3ff78(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined1 local_58 [8];
  float local_50;
  undefined1 local_48 [8];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67b78();
  FUN_00d55794(uVar2,local_48,0);
  uVar2 = FUN_00d67b78(param_1);
  FUN_00d557c4(uVar2,local_58,&DAT_03218f68);
  uVar2 = NEON_fmov(0x40a00000,4);
  fVar3 = local_58._0_4_ * (float)uVar2;
  fVar4 = local_58._4_4_ * (float)((ulong)uVar2 >> 0x20);
  *param_2 = CONCAT44(local_48._4_4_ - fVar4,local_48._0_4_ - fVar3);
  *(float *)(param_2 + 1) = local_40 - local_50 * 5.0;
  *param_3 = CONCAT44(fVar4 + local_48._4_4_,fVar3 + local_48._0_4_);
  *(float *)(param_3 + 1) = local_50 * 5.0 + local_40;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

