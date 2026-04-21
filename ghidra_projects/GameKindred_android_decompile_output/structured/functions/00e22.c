// functions/00e22 — 24 functions
#include "libGameKindred.h"




void FUN_00e220a8(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,4,0x19,0);
  return;
}




void FUN_00e220bc(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d69354(param_1,auStack_30,&local_38);
    *(undefined4 *)(local_38 + 0x2c) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e22120(undefined8 param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    FUN_00d69224(param_1,&local_40);
    FUN_00d67b84(local_40);
    uVar6 = FUN_00d9e390();
    lVar7 = FUN_00d9ea34();
    if (lVar7 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00d6bbac(lVar7,DAT_031b9a34,0);
    }
    lVar7 = FUN_00d9eb64(uVar6);
    if (lVar7 == 0) {
      bVar2 = false;
    }
    else {
      iVar4 = FUN_00d53990(lVar7,5);
      bVar2 = iVar4 == 2;
    }
    if ((uVar3 & 1) == 0 && !bVar2) {
      FUN_00d436dc(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e221e8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_68 [8];
  float local_60;
  undefined1 auStack_58 [16];
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  FUN_00d69d94(param_1,&local_30,&local_38);
  iVar1 = *(int *)(local_38 + 0x260);
  iVar3 = FUN_00d67b84(local_30);
  if (iVar1 == iVar3) {
    uVar4 = FUN_00d66d28(local_30);
    FUN_00d55794(uVar4,&local_48,0);
    FUN_00d55794(local_38,auStack_58,0);
    local_60 = local_40;
    if (((0.1 <= ABS(local_48 - local_48)) || (0.1 <= ABS(fStack_44 - fStack_44))) ||
       (0.1 <= ABS(local_40 - local_40))) {
      FUN_00cb6f00(uVar4,local_68,0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e222e0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d67b04(0x3dcccccd);
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onBeforeApplyHealName_02bed620;
  uVar4 = FUN_00e6a474(PTR_s_onBeforeApplyHealName_02bed620);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e220bc;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onBuffIntervalName_02bed520;
  uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e22120;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onActorDieName_02bed590;
    uVar4 = FUN_00e6a474(PTR_s_onActorDieName_02bed590);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e221e8;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  lVar5 = FUN_00d65010(param_1);
  lVar5 = lVar5 + 0x10;
  FUN_00d2b688(lVar5);
  FUN_00d29fe4(lVar5);
  plVar7 = (long *)FUN_00e2153c(lVar5);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,FUN_00e60428);
  (**(code **)(*plVar7 + 0x18))(plVar7,"AbilityCAttachPoint");
  plVar7 = (long *)FUN_00d2a110(lVar5);
  local_48[0] = 0xbf800000;
  local_40 = 1;
  (**(code **)(*plVar7 + 0x30))(plVar7,0x11,2,local_48);
  uVar8 = FUN_00d29c84(lVar5);
  FUN_00d46b64(uVar8,0x171e);
  FUN_00d29be4(lVar5);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e224e8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  int local_34;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d69554(param_1,&local_30,&local_34);
    if (local_34 == DAT_031b08bc) {
      FUN_00d436dc(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e22564(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onAbilityEnterCancelledName_02bed5d0;
  uVar4 = FUN_00e6a474(PTR_s_onAbilityEnterCancelledName_02bed5d0);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e224e8;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 0x30);
  FUN_00d3e534();
  uVar6 = FUN_00da51d0();
  FUN_00d42654(auStack_50,uVar6);
  uVar6 = FUN_00d419b4(uVar6,0x17);
  FUN_00d419bc(uVar6,"AbilityCSelfProjectile");
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2264c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  FUN_00d67b84();
  lVar1 = FUN_00d9e390();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x2f8) >> 3 & 1) != 0)) {
    FUN_00d436dc(param_1);
    return;
  }
  lVar1 = FUN_00d63f30(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_00d2779c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Stun");
  (**(code **)(*plVar2 + 0x20))();
  FUN_00d2a1b0(lVar1);
  plVar2 = (long *)FUN_00d2a160(lVar1);
  (**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)FUN_00d2a160(lVar1);
  (**(code **)(*plVar2 + 0x50))();
  lVar1 = FUN_00d65010(param_1);
  lVar1 = lVar1 + 0x10;
  FUN_00d29be4(lVar1);
  uVar3 = FUN_00d29c84(lVar1);
  FUN_00d46b64(uVar3,0x51e);
  plVar2 = (long *)FUN_00e2153c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,FUN_00e60428);
                    /* WARNING: Could not recover jumptable at 0x00e2272c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,"AbilityCAttachPoint");
  return;
}




void FUN_00e22740(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = FUN_00d67c60();
  puVar2 = PTR_s_onBeforeApplyHealName_02bed620;
  uVar3 = FUN_00e6a474(PTR_s_onBeforeApplyHealName_02bed620);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e220bc;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d65010(param_1);
  lVar4 = lVar4 + 0x10;
  FUN_00d29be4(lVar4);
  uVar5 = FUN_00d29c84(lVar4);
  FUN_00d46b64(uVar5,0x71e);
  FUN_00d29fe4(lVar4);
  return;
}




void FUN_00e227e4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a0464();
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




void FUN_00e22834(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47dec(uVar3,"Bone_RightHand");
  uVar3 = FUN_00da2040(uVar3,"Effect_Hero000_HandSpear");
  lVar2 = FUN_00d66d28(param_1);
  lVar2 = *(long *)(lVar2 + 0x40);
  fVar4 = (*(float *)(lVar2 + 0x1e0) + 1.0) *
          (*(float *)(lVar2 + 0x78) + *(float *)(lVar2 + 300) * (*(float *)(lVar2 + 0x294) + 1.0));
  if (DAT_031b9b60 <= fVar4) {
    fVar4 = DAT_031b9b60;
  }
  fVar5 = DAT_031b9aa0;
  if (DAT_031b9aa0 <= fVar4) {
    fVar5 = fVar4;
  }
  uVar3 = FUN_00da215c(fVar5,0x3e99999a,uVar3);
  FUN_00da20dc(uVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2293c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  FUN_00d67b84(*param_1);
  uVar1 = FUN_00d9e390();
  *param_2 = uVar1;
  FUN_00d6a078(*param_1);
  uVar1 = FUN_00d9fff0();
  *param_4 = uVar1;
  return;
}




void FUN_00e22988(undefined8 *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_68 [4];
  float local_58 [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84(*param_1);
  uVar4 = FUN_00d9e390();
  uVar5 = FUN_00d66d28(*param_1);
  FUN_00d55794(uVar4,local_58,0);
  FUN_00d55794(uVar5,local_68,0);
  fVar7 = (float)FUN_00d67b5c(*param_1);
  fVar8 = (float)FUN_00d59f54(uVar4,0,7,0x19,0);
  bVar2 = false;
  if (fVar8 <= fVar7) {
    uVar5 = FUN_00d9eb64(uVar4);
    iVar3 = FUN_00d53990(uVar5,1);
    bVar2 = false;
    if (iVar3 != 2) {
      iVar3 = FUN_00d53990(uVar5,2);
      bVar2 = false;
      if (iVar3 != 2) {
        fVar7 = (float)FUN_00d59f54(uVar4,0,2,0x19,0);
        fVar8 = (float)FUN_00d59f54(uVar4,0,5,0x19,0);
        fVar7 = fVar7 + fVar8;
        uVar6 = FUN_00d44be0(uVar4,PTR_s_Buff_Churnwalker_Talent_TalentC_02bee310);
        if ((uVar6 & 1) != 0) {
          fVar8 = (float)FUN_00d5a3d0(uVar4,DAT_031ac908,1,9);
          fVar7 = fVar7 + fVar8;
        }
        fVar8 = (float)local_58._4_8_ - (float)local_68._4_8_;
        fVar9 = SUB84(local_58._4_8_,4) - SUB84(local_68._4_8_,4);
        bVar2 = fVar7 * fVar7 <
                (local_58[0] - local_68[0]) * (local_58[0] - local_68[0]) + fVar8 * fVar8 +
                fVar9 * fVar9;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




float FUN_00e22b2c(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  FUN_00d67b84(*param_1);
  uVar1 = FUN_00d9e390();
  fVar4 = *(float *)(param_1[0x85] + 0x54);
  fVar3 = (float)thunk_FUN_00d086f0(uVar1,0,1);
  fVar4 = fVar4 * fVar3;
  uVar2 = FUN_00d44be0(uVar1,PTR_s_Buff_Churnwalker_Talent_TalentA_02bee2f0);
  if ((uVar2 & 1) != 0) {
    fVar3 = (float)FUN_00d5a3d0(uVar1,DAT_031ac8f8,0,9);
    fVar4 = fVar4 * fVar3;
  }
  return fVar4;
}




void FUN_00e22bb4(long param_1)

{
  long lVar1;
  bool bVar2;
  int local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((**(long **)(param_1 + 0x428) == 0) ||
     (thunk_FUN_00d9ff34(local_30), local_30[0] != DAT_031b9bd8)) {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(*(long *)(param_1 + 0x428) + 8) != 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




void FUN_00e22c38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_00d67b84();
  uVar1 = FUN_00d9e390();
  FUN_00d4db40(param_2,uVar1);
  FUN_00d4daf4(param_2,0,1,0,0);
  return;
}




void FUN_00e22c7c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_1);
  FUN_00d9d9a8(param_1 + 1,uVar1);
  return;
}




void FUN_00e22ca8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_00d67b84(*param_1);
  uVar1 = FUN_00d9e390();
  fVar7 = *(float *)(param_1[0x85] + 0x54);
  fVar5 = (float)thunk_FUN_00d086f0(uVar1,1,1);
  uVar2 = FUN_00d44be0(uVar1,PTR_s_Buff_Churnwalker_Talent_TalentA_02bee2f0);
  if ((uVar2 & 1) != 0) {
    fVar6 = (float)FUN_00d5a3d0(uVar1,DAT_031ac8f8,1,9);
    fVar5 = fVar5 * fVar6;
  }
  lVar3 = param_1[0x85];
  lVar4 = *(long *)(lVar3 + 0x28);
  if (lVar4 != 0) {
    *(long *)(param_2 + 0x28) = lVar4;
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x10);
  }
  *(float *)(param_2 + 0x30) = fVar7 * fVar5;
  *(undefined4 *)(param_2 + 8) = 2;
  return;
}




uint FUN_00e22d60(undefined8 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  
  FUN_00d67b84(*param_1);
  lVar3 = FUN_00d9e390();
  if (lVar3 == 0) {
    uVar2 = 1;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x18);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    uVar1 = FUN_00d6a0dc(*param_1);
    uVar2 = FUN_00d6c068(lVar3,uVar1);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2 & 1;
}




void FUN_00e22dd8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2887c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_RevealToBestowersTeamTrueSi_02bebb08);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Churnwalker_Healing");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  uVar3 = FUN_00d64d7c(param_1);
  lVar1 = FUN_00d4891c(0x3dcccccd,uVar3,0);
  uVar3 = FUN_00d2d01c(lVar1 + 0x10);
  FUN_00d9b5c0(uVar3,FUN_00e22d60);
  FUN_00d9b5b0();
  FUN_00d2a320();
  return;
}




void FUN_00e22e8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d6a078(*param_1);
  *param_4 = uVar1;
  return;
}




void FUN_00e22eb4(undefined8 *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84(*param_1);
  uVar3 = FUN_00d9e390();
  FUN_00da000c(uVar3,&local_3c);
  uVar2 = FUN_00d6a078(*param_1);
  *param_2 = local_3c ^ 1 << (ulong)(uVar2 & 0x1f);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e22f34(undefined8 *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84(*param_1);
  uVar3 = FUN_00d9e390();
  FUN_00da000c(uVar3,&local_3c);
  uVar2 = FUN_00d6a078(*param_1);
  *param_2 = local_3c | 1 << (ulong)(uVar2 & 0x1f);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00e22fb4(undefined8 *param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  
  FUN_00d67b84(*param_1);
  lVar3 = FUN_00d9e390();
  uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f;
  bVar2 = false;
  if (uVar1 != 0x1f) {
    bVar2 = *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2;
  }
  return bVar2;
}

