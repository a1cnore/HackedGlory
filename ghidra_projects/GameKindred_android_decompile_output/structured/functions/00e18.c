// functions/00e18 — 12 functions
#include "libGameKindred.h"




void FUN_00e18084(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28(*param_1);
  FUN_00d5cf60();
  uVar3 = FUN_00d9e390();
  FUN_00d55794(uVar2,auStack_48,0);
  FUN_00d4db40(param_2,uVar3);
  FUN_00d4daf4(param_2,0,1,0,0);
  FUN_00d4dabc(param_2,0x40000);
  FUN_00d59f54(uVar3,0,7,0x19,0);
  FUN_00d4db48(param_2,auStack_48);
  FUN_00d4dd44(param_2,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_00e18158(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  
  FUN_00d66d28(*param_1);
  FUN_00d5cf60();
  uVar1 = FUN_00d9e390();
  auVar4 = FUN_00d59f54(uVar1,0,0,0x19,0);
  uVar6 = auVar4._8_8_;
  uVar5 = auVar4._0_8_;
  uVar2 = FUN_00d44be0(uVar1,PTR_s_Buff_Celeste_Talent_GalaxyCollap_02bf1da8);
  if ((uVar2 & 1) != 0) {
    fVar3 = (float)FUN_00d5a3d0(uVar1,DAT_0320e5dc,0,9);
    uVar5 = (ulong)(uint)(auVar4._0_4_ * fVar3);
    uVar6 = 0;
  }
  uVar2 = FUN_00d44be0(uVar1,PTR_s_Buff_Celeste_Talent_YoungStar_02bf1dd0);
  if ((uVar2 & 1) != 0) {
    fVar3 = (float)FUN_00d5a3d0(uVar1,DAT_0320e5f0,0,9);
    uVar5 = (ulong)(uint)((float)uVar5 * fVar3);
    uVar6 = 0;
  }
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar3 = (float)FUN_00d59f54(uVar1,0,5,0x19,0);
    uVar5 = (ulong)(uint)((float)uVar5 * fVar3);
    uVar6 = 0;
  }
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar5;
  return auVar4;
}




float FUN_00e18240(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  FUN_00d66d28(*param_1);
  FUN_00d5cf60();
  uVar2 = FUN_00d9e390();
  lVar3 = FUN_00d67c60(*param_1);
  uVar1 = FUN_00e6a474("startTime");
  uVar1 = FUN_0091ed5c("startTime",uVar1,0x12345678);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x100) + 0x10))(lVar3 + 0x100,uVar1);
  fVar8 = *pfVar4;
  fVar5 = (float)FUN_009bc24c();
  fVar6 = (float)FUN_00d59f54(uVar2,0,6,0x19,0);
  fVar7 = 0.0;
  if (fVar6 < fVar5 - fVar8) {
    fVar7 = (float)FUN_00d59f54(0,uVar2,0,0,0x19,0);
    fVar5 = (float)FUN_00d5a3d0(uVar2,DAT_0320e5f0,1,9);
    fVar6 = (float)FUN_00d5a3d0(uVar2,DAT_0320e5f0,2,9);
    fVar7 = fVar7 * (fVar5 / fVar6);
  }
  return fVar7;
}




void FUN_00e18354(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,6,0x19,0);
  return;
}




void FUN_00e18368(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  code *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    uVar10 = FUN_009bc24c();
    lVar5 = FUN_00d67c60(param_1);
    lVar6 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_startTime_02bf04f8;
    uVar3 = FUN_00e6a474(PTR_s_startTime_02bf04f8);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    uVar3 = (**(code **)(*(long *)(lVar6 + 0x100) + 8))(lVar6 + 0x100,uVar3);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar3);
    *puVar7 = uVar10;
  }
  lVar5 = FUN_00d63f30(param_1);
  lVar5 = lVar5 + 0x10;
  plVar8 = (long *)FUN_00d2cc5c(lVar5);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x38))(plVar8,"Sound_Celeste_Ability_A_Cast_OnTop");
  lVar6 = FUN_00d09310();
  FUN_00d09830(*(undefined4 *)(lVar6 + 400));
  (**(code **)(*plVar8 + 0x28))(plVar8);
  uVar9 = FUN_00d39b7c(lVar5);
  uVar9 = FUN_00d9cef8(uVar9,FUN_00e17f90);
  uVar9 = FUN_00d9cb80(uVar9,PTR_s_Buff_CelesteStar_Supernova_02bf0510);
  uVar9 = FUN_00d9cb80(uVar9,PTR_s_Buff_DelayedKill_02beb3e0);
  FUN_00d9cbc0(uVar9,1);
  FUN_00d9cbc8();
  lVar5 = FUN_00d29e8c(lVar5);
  lVar6 = FUN_00e19450(lVar5 + 0x10);
  *(undefined4 *)(lVar6 + 0x10) = 1;
  *(undefined4 *)(lVar6 + 0x18) = 0;
  *(undefined4 *)(lVar6 + 8) = 0;
  FUN_00d394e4(lVar5 + 0x88);
  plVar8 = (long *)FUN_00d2cf7c(lVar5 + 0x88);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,PTR_s_Buff_CelesteStar_Supernova_02bf0510);
  local_68 = FUN_00e18690;
  local_60 = 3;
  (**(code **)(*plVar8 + 0x18))(plVar8,&local_68);
  plVar8 = (long *)FUN_00d2887c(lVar5 + 0xa0);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))
                             (plVar8,PTR_s_Buff_CelesteStar_RegularDamage_02bf0518);
  local_68 = FUN_00e18354;
  local_60 = 3;
  (**(code **)(*plVar8 + 0x18))(plVar8,&local_68);
  FUN_00d66d28(param_1);
  FUN_00d5cf60();
  uVar9 = FUN_00d9e390();
  uVar4 = FUN_00d44be0(uVar9,PTR_s_Buff_Celeste_Talent_YoungStar_02bf1dd0);
  if ((uVar4 & 1) != 0) {
    uVar9 = FUN_00d64d7c(param_1);
    lVar5 = FUN_00d4891c(0x3f000000,uVar9,0);
    plVar8 = (long *)FUN_00d2b778(lVar5 + 0x10);
    local_68 = FUN_00e186a4;
    local_60 = 3;
    (**(code **)(*plVar8 + 0x30))(plVar8,&local_68);
    plVar8 = (long *)FUN_00d2b818(lVar5 + 0x10);
    plVar8 = (long *)(**(code **)(*plVar8 + 0x40))();
    local_68 = FUN_00e18240;
    local_60 = 4;
    (**(code **)(*plVar8 + 0x18))(plVar8,&local_68,1,3);
  }
  lVar5 = FUN_00d65010(param_1);
  plVar8 = (long *)FUN_00d2945c(lVar5 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x60))();
  plVar8 = (long *)(**(code **)(*plVar8 + 0x48))(plVar8,"Effect_Celeste_Star_Sm_Enemy");
  plVar8 = (long *)(**(code **)(*plVar8 + 0x50))(plVar8,"Effect_Celeste_Star_Sm");
  plVar8 = (long *)(**(code **)(*plVar8 + 0x78))(plVar8,1);
  (**(code **)(*plVar8 + 0xb0))(plVar8,1);
  lVar5 = FUN_00d64980(param_1);
  FUN_00d2ab44(lVar5 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e18690(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,8,0x19,0);
  return;
}




void FUN_00e186a4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e5f0,3,9);
  return;
}




void FUN_00e186bc(void)

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
  lVar2 = FUN_00d64980();
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00da63b8(lVar2);
  FUN_00d9c89c(uVar3,FUN_00e18084);
  plVar4 = (long *)FUN_00d2b818(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  local_48 = FUN_00e18158;
  local_40 = 5;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48,1,2);
  plVar4 = (long *)FUN_00d2cf7c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Celeste_HitByStar_02bf0520);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x3f800000);
  local_40 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1879c(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined1 auStack_818 [16];
  undefined1 auStack_808 [8];
  undefined1 auStack_800 [16];
  undefined8 local_7f0;
  undefined1 auStack_7e8 [88];
  undefined1 auStack_790 [112];
  undefined1 auStack_720 [96];
  long local_6c0 [200];
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  FUN_00d69224(param_1,&local_7f0);
  uVar7 = FUN_00d66d28(local_7f0);
  FUN_00d67b84(local_7f0);
  lVar8 = FUN_00d9e390();
  FUN_00d55794(uVar7,auStack_800,0);
  uVar15 = FUN_00d59f54(lVar8,0,9,0x19,0);
  uVar9 = FUN_00d44be0(lVar8,PTR_s_Buff_Celeste_Talent_GalaxyCollap_02bf1da8);
  if ((uVar9 & 1) != 0) {
    FUN_00d4d9e8(auStack_790);
    FUN_00d4db40(auStack_790,lVar8);
    FUN_00d4daf4(auStack_790,1,0,0,0);
    FUN_00d4db48(uVar15,auStack_790,auStack_800);
    FUN_00d4dca4(auStack_790,"CelesteStar",0);
    FUN_00d4ddc4(auStack_790);
    uVar5 = FUN_00d9e840(auStack_790,local_6c0,200,0);
    if (uVar5 != 0) {
      uVar9 = (ulong)uVar5;
      plVar13 = local_6c0;
      do {
        lVar12 = *plVar13;
        FUN_00d55794(lVar12,auStack_7e8,0);
        uVar10 = FUN_00d44be0(lVar12,PTR_s_Buff_CelesteStar_Supernova_02bf0510);
        if (((uVar10 & 1) == 0) &&
           (uVar10 = FUN_00d44be0(lVar12,PTR_s_Buff_DelayedKill_02beb3e0),
           puVar4 = PTR_s_Buff_CelesteStar_Supernova_02bf0510, (uVar10 & 1) == 0)) {
          uVar1 = *(undefined4 *)(lVar8 + 0x260);
          uVar2 = *(undefined4 *)(lVar12 + 0x260);
          uVar16 = FUN_00d59f54(lVar8,0,8,0x19,0);
          uVar6 = FUN_00ceb350();
          FUN_00cfe864(uVar16,0,0,auStack_720,uVar1,uVar2,puVar4,uVar6,1,0,0);
          FUN_00ce20fc(auStack_720);
        }
        uVar9 = uVar9 - 1;
        plVar13 = plVar13 + 1;
      } while (uVar9 != 0);
    }
  }
  FUN_00d4d9e8(auStack_720);
  FUN_00d4db40(auStack_720,lVar8);
  FUN_00d4daf4(auStack_720,0,1,0,0);
  FUN_00d4dabc(auStack_720,0x40000);
  FUN_00d4db48(uVar15,auStack_720,auStack_800);
  FUN_00d4dd44(auStack_720,0);
  uVar5 = FUN_00d9e840(auStack_720,local_6c0,200,0);
  if (uVar5 != 0) {
    uVar9 = 0;
    do {
      lVar12 = local_6c0[uVar9];
      if (lVar12 == 0) break;
      uVar17 = FUN_00d59f54(lVar8,0,1,0x19,0);
      uVar10 = FUN_00d44be0(lVar8,PTR_s_Buff_Celeste_Talent_GalaxyCollap_02bf1da8);
      if ((uVar10 & 1) != 0) {
        fVar14 = (float)FUN_00d5a3d0(lVar8,DAT_0320e5dc,1,9);
        uVar17 = (ulong)(uint)((float)uVar17 * fVar14);
      }
      if (*(char *)(local_6c0[uVar9] + 0x2f6) < '\0') {
        fVar14 = (float)FUN_00d59f54(lVar8,0,5,0x19,0);
        uVar17 = (ulong)(uint)((float)uVar17 * fVar14);
      }
      FUN_00d9e1e0(uVar7,lVar12,auStack_808);
      uVar1 = *(undefined4 *)(lVar8 + 0x260);
      uVar2 = *(undefined4 *)(lVar12 + 0x260);
      puVar11 = (undefined8 *)FUN_00d67b14(local_7f0);
      FUN_00daa148(uVar17,auStack_790,uVar1,uVar2,1,2,auStack_808,*puVar11,0,1);
      FUN_00910c08(auStack_790);
      FUN_00d55794(local_6c0[uVar9],auStack_818,0);
      uVar15 = FUN_00d427d8(auStack_800,auStack_818);
      puVar4 = PTR_s_Buff_Celeste_HitByStar_02bf0520;
      uVar1 = *(undefined4 *)(lVar8 + 0x260);
      uVar2 = *(undefined4 *)(lVar12 + 0x260);
      uVar6 = FUN_00ceb350();
      FUN_00cfe864(0x3f800000,uVar15,0,auStack_7e8,uVar1,uVar2,puVar4,uVar6,1,0,0);
      FUN_00ce20fc(auStack_7e8);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar5);
  }
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e18b70(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  float local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onEndName_02bed518;
    uVar4 = FUN_00e6a474(PTR_s_onEndName_02bed518);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e1879c;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  }
  lVar6 = FUN_00d63f30(param_1);
  lVar6 = lVar6 + 0x10;
  plVar7 = (long *)FUN_00d2945c(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x60))();
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Celeste_Star_Nova_Enemy");
  (**(code **)(*plVar7 + 0x50))(plVar7,"Effect_Celeste_Star_Nova");
  plVar7 = (long *)FUN_00d2cc5c(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,"Sound_Celeste_Ability_A_Cast");
  lVar8 = FUN_00d09310();
  (**(code **)(*plVar7 + 0x28))(*(undefined4 *)(lVar8 + 0x198),plVar7);
  plVar7 = (long *)FUN_00d2887c(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Buff_DelayedKill_02beb3e0);
  local_48[0] = (float)FUN_00d67b34(param_1);
  local_40 = 1;
  local_48[0] = local_48[0] + 0.2;
  (**(code **)(*plVar7 + 0x18))(plVar7,local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e18cf8(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_00d63f30(param_1);
    plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
    plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Celeste_Shockwave_Impact_Enemy");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Effect_Celeste_Shockwave_Impact");
    (**(code **)(*plVar3 + 0x78))(plVar3,1);
    plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Celeste_Ability_A_TakeDamage_1");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Celeste_Ability_A_TakeDamage_2");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Celeste_Ability_A_TakeDamage_3");
    lVar2 = FUN_00d09310();
    FUN_00d09830(*(undefined4 *)(lVar2 + 0x198));
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  return;
}




void FUN_00e18dd8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  float fVar13;
  ulong uVar14;
  undefined1 auStack_860 [8];
  undefined1 auStack_858 [16];
  undefined8 local_848;
  undefined1 auStack_840 [88];
  undefined1 auStack_7e8 [88];
  undefined1 auStack_790 [112];
  undefined1 auStack_720 [96];
  long local_6c0 [200];
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  FUN_00d69224(param_1,&local_848);
  uVar7 = FUN_00d66d28(local_848);
  FUN_00d5cf60();
  lVar8 = FUN_00d9e390();
  FUN_00d4d9e8(auStack_720);
  FUN_00d55794(uVar7,auStack_858,0);
  FUN_00d4db40(auStack_720,lVar8);
  FUN_00d4daf4(auStack_720,0,1,0,0);
  FUN_00d4dabc(auStack_720,0x40000);
  FUN_00d59f54(lVar8,1,5,0x19,0);
  FUN_00d4db48(auStack_720,auStack_858);
  FUN_00d4dd44(auStack_720,0);
  uVar5 = FUN_00d9e840(auStack_720,local_6c0,200,0);
  if (uVar5 != 0) {
    uVar11 = (ulong)uVar5;
    plVar12 = local_6c0;
    do {
      uVar7 = FUN_00d66d28(local_848);
      FUN_00d9e1e0(uVar7,*plVar12,auStack_860);
      uVar14 = FUN_00d59f54(lVar8,1,0,0x19,0);
      uVar9 = FUN_00d44008(*(undefined4 *)(lVar8 + 0x260),
                           PTR_s_Buff_Celeste_Talent_CoreLeafClov_02bf1db8);
      if ((uVar9 & 1) != 0) {
        fVar13 = (float)FUN_00d5a3d0(lVar8,DAT_0320e5e4,0,9);
        uVar14 = (ulong)(uint)((float)uVar14 * fVar13);
      }
      uVar1 = *(undefined4 *)(lVar8 + 0x260);
      uVar2 = *(undefined4 *)(*plVar12 + 0x260);
      puVar10 = (undefined8 *)FUN_00d67b14(local_848);
      FUN_00daa148(uVar14,auStack_790,uVar1,uVar2,1,2,auStack_860,*puVar10,0,1);
      FUN_00910c08(auStack_790);
      puVar4 = PTR_s_Buff_Stunned_02beb430;
      uVar1 = *(undefined4 *)(lVar8 + 0x260);
      uVar2 = *(undefined4 *)(*plVar12 + 0x260);
      uVar7 = FUN_00d59f54(lVar8,1,1,0x19,0);
      uVar6 = FUN_00ceb350();
      FUN_00cfe864(uVar7,0,0,auStack_7e8,uVar1,uVar2,puVar4,uVar6,1,0,0);
      FUN_00ce20fc(auStack_7e8);
      puVar4 = PTR_s_Buff_Celeste_HitByCoreCollapse_02bf0528;
      uVar1 = *(undefined4 *)(lVar8 + 0x260);
      uVar2 = *(undefined4 *)(*plVar12 + 0x260);
      uVar6 = FUN_00ceb350();
      FUN_00cfe864(0x3f800000,0,0,auStack_840,uVar1,uVar2,puVar4,uVar6,1,0,0);
      FUN_00ce20fc(auStack_840);
      uVar11 = uVar11 - 1;
      plVar12 = plVar12 + 1;
    } while (uVar11 != 0);
  }
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

