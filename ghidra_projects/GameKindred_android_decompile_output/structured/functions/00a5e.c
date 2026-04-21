// functions/00a5e — 14 functions
#include "libGameKindred.h"




void FUN_00a5e0b0(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 local_a0;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  uVar12 = (**(code **)(*param_3 + 0x48))();
  local_a0 = CONCAT44(param_2,uVar12);
  FUN_00f13f18(param_3 + 0x35,&local_a0);
  if (*(int *)((long)param_3 + 0x19c) != 0) {
    lVar6 = 0;
    uVar7 = 0;
    lVar8 = 0x1150;
    lVar9 = 0x17e0;
    lVar10 = 0x1194;
    lVar11 = 0x1824;
    do {
      lVar1 = (long)param_3 + lVar6 + 0x900;
      fVar13 = (float)(uVar7 & 0xffffffff) * 150.0;
      if ((*(float *)((long)param_3 + lVar6 + 0x940) != 0.0) ||
         (*(float *)((long)param_3 + lVar6 + 0x944) != fVar13)) {
        *(undefined4 *)((long)param_3 + lVar6 + 0x940) = 0;
        *(float *)((long)param_3 + lVar6 + 0x944) = fVar13;
        FUN_0091ada4(lVar1);
      }
      local_a0 = 0x3f000000;
      (**(code **)(*(long *)((long)param_3 + lVar6 + 0x900) + 0x28))(lVar1,&local_a0);
      if ((*(float *)((long)param_3 + lVar10 + -4) != 0.0) ||
         (*(float *)((long)param_3 + lVar10) != fVar13 + 36.0)) {
        *(undefined4 *)((long)param_3 + lVar10 + -4) = 0;
        *(float *)((long)param_3 + lVar10) = fVar13 + 36.0;
        FUN_0091ada4((long)param_3 + lVar8);
      }
      local_a0 = 0x3f000000;
      (**(code **)(*(long *)((long)param_3 + lVar8) + 0x28))((long)param_3 + lVar8,&local_a0);
      lVar1 = (long)param_3 + lVar9;
      if ((*(float *)((long)param_3 + lVar11 + -4) != 0.0) ||
         (*(float *)((long)param_3 + lVar11) != fVar13)) {
        *(undefined4 *)((long)param_3 + lVar11 + -4) = 0;
        *(float *)((long)param_3 + lVar11) = fVar13;
        FUN_0091ada4(lVar1);
      }
      local_a0 = 0x3f000000;
      (**(code **)(*(long *)((long)param_3 + lVar9) + 0x28))(lVar1,&local_a0);
      param_2 = 120.0;
      FUN_00f13f08(0x43340000,lVar1);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x130;
      lVar8 = lVar8 + 0xf0;
      lVar9 = lVar9 + 0xb8;
      lVar10 = lVar10 + 0xf0;
      lVar11 = lVar11 + 0xb8;
    } while (uVar7 < *(uint *)((long)param_3 + 0x19c));
  }
  plVar2 = param_3 + 0xf5;
  FUN_00f13238(plVar2);
  FUN_00f13e54(plVar2);
  fVar13 = param_2;
  (**(code **)(*param_3 + 0x48))(param_3);
  if (fVar13 <= param_2) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar4 = 5;
    uVar5 = 5;
  }
  FUN_00f07b18(0,plVar2,uVar4,param_3,uVar5);
  FUN_00ed0418(param_3 + 0x4e,0);
  FUN_00ed04d8(param_3 + 0x4e,0,0);
  if (*(long *)(lVar3 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5e330(long param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x1a0) != param_2) {
    FUN_00a5dd1c(param_1,0);
    FUN_00a5dd1c(param_1,1,param_2);
    uVar2 = DAT_03210c64;
    *(int *)(param_1 + 0x1a0) = param_2;
    FUN_00ed8868(auStack_68,uVar2,param_2,0);
    FUN_00f04760(param_1,auStack_68,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5e3d8(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ed8868(auStack_58,DAT_03210c64,param_2,0);
  FUN_00f04760(param_1,auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5e44c(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  
  FUN_00b89d24(param_1 + 0x1a8,param_2 & 1,param_3,param_4 & 1);
  uVar1 = *(uint *)(param_1 + 0x19c);
  if (uVar1 != 0) {
    uVar2 = 0;
    puVar3 = (uint *)(param_1 + 0x1864);
    do {
      uVar2 = uVar2 + 1;
      *puVar3 = *puVar3 & 0xffffffef | (param_2 & 1) << 4;
      puVar3 = puVar3 + 0x2e;
    } while (uVar2 < uVar1);
  }
  return;
}




void FUN_00a5e4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00a5e330(param_1,param_3);
  return;
}




void FUN_00a5e4b8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  FUN_00f13ca4();
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027cc270;
  uVar5 = DAT_03214ce8;
  plVar1 = param_1 + 0x1c;
  param_1[0x1a] = -1;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  FUN_00b89cd8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f1306c(plVar2);
  plVar3 = param_1 + 0x60;
  FUN_00f0d160(plVar3);
  FUN_00f1306c(param_1 + 0x86);
  lVar7 = 0x588;
  do {
    FUN_00f0e4a8((long)param_1 + lVar7);
    lVar7 = lVar7 + 0xf0;
  } while (lVar7 != 0xee8);
  lVar7 = 0;
  do {
    FUN_00f0e4a8((long)param_1 + lVar7 + 0xee8);
    lVar7 = lVar7 + 0xf0;
  } while (lVar7 != 0x960);
  lVar7 = 0;
  do {
    FUN_00f0e4a8((long)param_1 + lVar7 + 0x1848);
    lVar7 = lVar7 + 0xf0;
  } while (lVar7 != 0x960);
  lVar7 = 0;
  do {
    FUN_00f0d160((long)param_1 + lVar7 + 0x21a8);
    lVar7 = lVar7 + 0x130;
  } while (lVar7 != 0xbe0);
  FUN_00f0e4a8(param_1 + 0x5b8);
  FUN_00f0e4a8(param_1 + 0x5d6);
  *(undefined1 *)(param_1 + 0x5f5) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f133a4(plVar2,plVar3,1);
  FUN_00f133a4(plVar2,param_1 + 0x86,1);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Avenir_Medium_24_f_02be9cf0);
  uVar6 = FUN_00e6ce7c("HUD_STORE_INVENTORY",0);
  FUN_00f0d75c(plVar3,uVar6);
  uVar4 = *(uint *)((long)param_1 + 900);
  if ((uVar4 & 0x7f80) == 0x7280) {
    return;
  }
  *(uint *)((long)param_1 + 900) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x7280;
  FUN_0091ada4(plVar3);
  return;
}




void FUN_00a5e69c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 local_a0;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  if (*(long *)(param_1 + 200) != 0) {
    FUN_00ceace8();
    iVar4 = FUN_00ceb174();
    if (iVar4 != 0) {
      lVar6 = 0;
      uVar7 = 0;
      lVar8 = 0x21a8;
      lVar9 = 0x1848;
      lVar10 = 0x21ec;
      do {
        lVar2 = param_1 + lVar6;
        fVar13 = (float)(uVar7 & 0xffffffff) * 125.0;
        lVar1 = lVar2 + 0x588;
        if ((*(float *)(lVar2 + 0x5c8) != fVar13) || (*(float *)(lVar2 + 0x5cc) != 0.0)) {
          *(float *)(lVar2 + 0x5c8) = fVar13;
          *(undefined4 *)(lVar2 + 0x5cc) = 0;
          FUN_0091ada4(lVar1);
        }
        local_a0 = 0x3f0000003f000000;
        lVar2 = param_1 + lVar6;
        (**(code **)(*(long *)(lVar2 + 0x588) + 0x28))(lVar1,&local_a0);
        if ((*(float *)(lVar2 + 0x5d0) != 0.734375) || (*(float *)(lVar2 + 0x5d4) != 0.734375)) {
          *(undefined8 *)(lVar2 + 0x5d0) = 0x3f3c00003f3c0000;
          FUN_0091ada4(lVar1);
        }
        lVar1 = param_1 + lVar6;
        if ((*(float *)(lVar1 + 0xf28) != fVar13) || (*(float *)(lVar1 + 0xf2c) != 0.0)) {
          *(float *)(lVar1 + 0xf28) = fVar13;
          *(undefined4 *)(lVar1 + 0xf2c) = 0;
          FUN_0091ada4(lVar1 + 0xee8);
        }
        local_a0 = 0x3f0000003f000000;
        (**(code **)(*(long *)(param_1 + lVar6 + 0xee8) + 0x28))(lVar1 + 0xee8,&local_a0);
        if ((*(float *)(param_1 + lVar10 + -4) != fVar13 + 46.0) ||
           (*(float *)(param_1 + lVar10) != 46.0)) {
          *(float *)(param_1 + lVar10 + -4) = fVar13 + 46.0;
          *(undefined4 *)(param_1 + lVar10) = 0x42380000;
          FUN_0091ada4(param_1 + lVar8);
        }
        local_a0 = 0x3f0000003f000000;
        (**(code **)(*(long *)(param_1 + lVar8) + 0x28))(param_1 + lVar8,&local_a0);
        lVar1 = param_1 + lVar6;
        if ((*(float *)(lVar1 + 0x1888) != fVar13) || (*(float *)(lVar1 + 0x188c) != 0.0)) {
          *(float *)(lVar1 + 0x1888) = fVar13;
          *(undefined4 *)(lVar1 + 0x188c) = 0;
          FUN_0091ada4(param_1 + lVar9);
        }
        local_a0 = 0x3f0000003f000000;
        (**(code **)(*(long *)(param_1 + lVar6 + 0x1848) + 0x28))(param_1 + lVar9,&local_a0);
        uVar7 = uVar7 + 1;
        FUN_00ceace8();
        uVar5 = FUN_00ceb174();
        lVar6 = lVar6 + 0xf0;
        lVar8 = lVar8 + 0x130;
        lVar9 = lVar9 + 0xf0;
        lVar10 = lVar10 + 0x130;
      } while (uVar7 < (uVar5 & 0xffffffff));
    }
    lVar6 = param_1 + 0x430;
    FUN_00f13238(lVar6);
    FUN_00f07b18(0,param_1 + 0x300,0,lVar6,2);
    FUN_00f07b18(0,param_1 + 0x300,4,lVar6,4);
    lVar6 = param_1 + 0x1a8;
    FUN_00f13238(lVar6);
    fVar13 = *(float *)(param_1 + 0x1f0);
    if ((fVar13 != 1.5) || (fVar13 = *(float *)(param_1 + 500), fVar13 != 1.5)) {
      uVar12 = NEON_fmov(0x3fc00000,4);
      *(undefined8 *)(param_1 + 0x1f0) = uVar12;
      FUN_0091ada4(lVar6);
    }
    uVar11 = FUN_00f01c20(lVar6);
    local_a0 = CONCAT44(fVar13,uVar11);
    FUN_00f13f18(param_1,&local_a0);
  }
  if (*(long *)(lVar3 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5e978(void)

{
  FUN_00ceace8();
  FUN_00ceb174();
  return;
}




void FUN_00a5e98c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  code *local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined4 local_80;
  long local_78;
  
  lVar13 = tpidr_el0;
  local_78 = *(long *)(lVar13 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0xb8) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xc0) = uVar6;
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))();
  uVar15 = FUN_00d9eae0();
  *(undefined8 *)(param_1 + 200) = uVar15;
  FUN_00ceace8();
  iVar14 = FUN_00ceb174();
  if (10 < iVar14) {
    FUN_00ceace8();
    iVar14 = FUN_00ceb174();
    fVar23 = 10.0 / (float)iVar14;
    if ((*(float *)(param_1 + 0x128) != fVar23) || (*(float *)(param_1 + 300) != fVar23)) {
      *(float *)(param_1 + 0x128) = fVar23;
      *(float *)(param_1 + 300) = fVar23;
      FUN_0091ada4(param_1 + 0xe0);
    }
  }
  FUN_00ceace8();
  iVar14 = FUN_00ceb174();
  lVar1 = param_1 + 0x430;
  if (iVar14 != 0) {
    uVar6 = DAT_03210f60;
    lVar18 = 0;
    lVar20 = 0x21a8;
    uVar7 = DAT_03210f8c;
    lVar21 = 0x1848;
    lVar22 = 0xb62;
    uVar8 = DAT_03210f58;
    uVar9 = DAT_03210f84;
    uVar10 = DAT_03210f5c;
    uVar11 = DAT_03210f88;
    do {
      lVar3 = param_1 + lVar18;
      lVar19 = lVar22 + -0xb62;
      FUN_00f0e540(lVar3 + 0x588,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448);
      lVar2 = lVar3 + 0xee8;
      FUN_00f0e540(lVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440);
      FUN_00f0e578(lVar2,"hud_store_inventory_regular");
      lVar4 = param_1 + lVar20;
      *(uint *)(lVar3 + 0xf6c) = *(uint *)(lVar3 + 0xf6c) | 0x10;
      FUN_00f0d378(lVar4,PTR_s_build___Fonts_Avenir_Medium_30_f_02be9cf8);
      FUN_00f0da80(lVar4,&DAT_03131298);
      FUN_00f0da30(lVar4,1);
      lVar5 = param_1 + lVar21;
      FUN_00f0e540(lVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440);
      FUN_00f0e578(lVar5,"hud_store_inventory_highlighted");
      if ((*(uint *)(lVar3 + 0x18cc) & 0x7f80) != 0) {
        *(uint *)(lVar3 + 0x18cc) = *(uint *)(lVar3 + 0x18cc) & 0xffff807f;
        FUN_0091ada4(lVar5);
      }
      FUN_00f133a4(lVar1,lVar3 + 0x588,1);
      FUN_00f133a4(lVar1,lVar2,1);
      FUN_00f133a4(lVar1,lVar5,1);
      FUN_00f133a4(lVar1,lVar4,1);
      lVar3 = lVar3 + 0xef0;
      local_a8 = FUN_00a5eeb0;
      local_98 = 0;
      uStack_90 = 0;
      lStack_a0 = param_1;
      local_88 = lVar19;
      local_80 = uVar6;
      FUN_009693a0(lVar3,&local_a8);
      local_a8 = FUN_00a5eeb0;
      local_98 = 0;
      uStack_90 = 0;
      lStack_a0 = param_1;
      local_88 = lVar19;
      local_80 = uVar7;
      FUN_009693a0(lVar3,&local_a8);
      local_a8 = FUN_00a5eebc;
      local_98 = 0;
      uStack_90 = 0;
      lStack_a0 = param_1;
      local_88 = lVar19;
      local_80 = uVar8;
      FUN_009693a0(lVar3,&local_a8);
      local_a8 = FUN_00a5eebc;
      local_98 = 0;
      uStack_90 = 0;
      lStack_a0 = param_1;
      local_88 = lVar19;
      local_80 = uVar9;
      FUN_009693a0(lVar3,&local_a8);
      local_a8 = FUN_00a5eec4;
      local_98 = 0;
      uStack_90 = 0;
      lStack_a0 = param_1;
      local_88 = lVar19;
      local_80 = uVar10;
      FUN_009693a0(lVar3,&local_a8);
      local_a8 = FUN_00a5eec4;
      local_98 = 0;
      uStack_90 = 0;
      lStack_a0 = param_1;
      local_88 = lVar19;
      local_80 = uVar11;
      FUN_009693a0(lVar3,&local_a8);
      *(undefined4 *)(param_1 + lVar22 * 4) = 0xffffffff;
      FUN_00ceace8();
      uVar16 = FUN_00ceb174();
      uVar17 = lVar22 - 0xb61;
      lVar22 = lVar22 + 1;
      lVar18 = lVar18 + 0xf0;
      lVar20 = lVar20 + 0x130;
      lVar21 = lVar21 + 0xf0;
    } while (uVar17 < (uVar16 & 0xffffffff));
  }
  lVar22 = param_1 + 0x2dc0;
  FUN_00f133a4(lVar1,lVar22,1);
  FUN_00f0e540(lVar22,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448);
  if ((*(float *)(param_1 + 0x2e08) != 1.6890625) || (*(float *)(param_1 + 0x2e0c) != 1.6890625)) {
    *(undefined8 *)(param_1 + 0x2e08) = 0x3fd833333fd83333;
    FUN_0091ada4(lVar22);
  }
  if ((*(float *)(param_1 + 0x2e10) != 0.5) || (*(float *)(param_1 + 0x2e14) != 0.5)) {
    *(undefined8 *)(param_1 + 0x2e10) = 0x3f0000003f000000;
    FUN_0091ada4(lVar22);
  }
  uVar12 = *(uint *)(param_1 + 0x2e44);
  *(uint *)(param_1 + 0x2e44) = uVar12 & 0xffffffbb;
  if ((uVar12 & 0x7f80) != 0x5280) {
    *(uint *)(param_1 + 0x2e44) = uVar12 & 0xffff803b | 0x5280;
    FUN_0091ada4(lVar22);
  }
  lVar1 = param_1 + 0x2eb0;
  FUN_00f023ec(lVar22,lVar1,1);
  FUN_00f0e540(lVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(lVar1,"hud_store_inventory_highlighted");
  if ((*(float *)(param_1 + 0x2ef8) != 1.3617021) || (*(float *)(param_1 + 0x2efc) != 1.3617021)) {
    *(undefined8 *)(param_1 + 0x2ef8) = 0x3fae4c413fae4c41;
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_1 + 0x2f00) != 0.5) || (*(float *)(param_1 + 0x2f04) != 0.5)) {
    *(undefined8 *)(param_1 + 0x2f00) = 0x3f0000003f000000;
    FUN_0091ada4(lVar1);
  }
  FUN_00a5eec8(param_1);
  if (*(long *)(lVar13 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a5eeb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a5f664(param_1,param_4,param_5);
  return;
}




void FUN_00a5eebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00a5fa58(param_1,param_2,param_5);
  return;
}




void FUN_00a5eec4(void)

{
  return;
}




void FUN_00a5eec8(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  if ((*(long *)(param_1 + 200) != 0) && (iVar1 = FUN_00d72940(), iVar1 != 0)) {
    uVar5 = 0;
    uVar6 = 0;
    do {
      FUN_00ceace8();
      uVar2 = FUN_00ceb174();
      if (uVar2 <= uVar5) {
        return;
      }
      iVar1 = FUN_00d73084(*(undefined8 *)(param_1 + 200),uVar6);
      if (iVar1 == -1) {
        FUN_00f0e578(param_1 + (ulong)uVar5 * 0xf0 + 0x588,"icon_item_empty");
        *(undefined4 *)(param_1 + (ulong)uVar5 * 4 + 0x2d88) = 0xffffffff;
        lVar4 = param_1 + (ulong)uVar5 * 0x130;
        (**(code **)(*(long *)(lVar4 + 0x21a8) + 0x138))(lVar4 + 0x21a8,&DAT_03210450);
LAB_00a5efac:
        uVar5 = uVar5 + 1;
      }
      else {
        FUN_00d73214(*(undefined8 *)(param_1 + 200),iVar1);
        uVar3 = FUN_00a1feb4();
        if ((uVar3 & 1) == 0) {
          FUN_00a5faf0(param_1,uVar5,iVar1);
          goto LAB_00a5efac;
        }
      }
      uVar6 = uVar6 + 1;
      uVar2 = FUN_00d72940(*(undefined8 *)(param_1 + 200));
    } while (uVar6 < uVar2);
  }
  return;
}




void FUN_00a5efe0(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  
  FUN_00b89d24(param_1 + 0xe0,param_2 & 1,param_3,param_4 & 1);
  FUN_00ceace8();
  iVar1 = FUN_00ceb174();
  if (iVar1 != 0) {
    uVar4 = 0;
    puVar3 = (uint *)(param_1 + 0xf6c);
    do {
      uVar4 = uVar4 + 1;
      *puVar3 = *puVar3 & 0xffffffef | (param_2 & 1) << 4;
      FUN_00ceace8();
      uVar2 = FUN_00ceb174();
      puVar3 = puVar3 + 0x3c;
    } while (uVar4 < (uVar2 & 0xffffffff));
  }
  return;
}

