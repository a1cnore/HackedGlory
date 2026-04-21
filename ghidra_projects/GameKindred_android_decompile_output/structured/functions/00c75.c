// functions/00c75 — 10 functions
#include "libGameKindred.h"




void FUN_00c750a0(long *param_1,uint *param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  long *local_c8;
  undefined8 local_c0;
  void *local_b8;
  byte local_b0 [16];
  void *local_a0;
  code *local_98;
  long *local_90;
  void *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  param_1[0x1b] = (long)param_2;
  FUN_008fcdb8(local_b0,param_2 + 8);
  pvVar1 = (void *)((ulong)local_b0 | 1);
  if ((local_b0[0] & 1) != 0) {
    pvVar1 = local_a0;
  }
  uVar4 = FUN_00e6ce7c(pvVar1,0);
  FUN_00f0d75c(param_1 + 0x459,uVar4);
  uVar4 = FUN_00e6ce7c("INVENTORY_HAT_INSTRUCTION",0);
  thunk_FUN_00e7051c(&local_c0,uVar4);
  FUN_00e705c8(&local_98,"[HAT_NAME]");
  pvVar1 = (void *)((ulong)local_b0 | 1);
  if ((local_b0[0] & 1) != 0) {
    pvVar1 = local_a0;
  }
  uVar4 = FUN_00e6ce7c(pvVar1,0);
  FUN_00e713f0(&local_c0,0,&local_98,uVar4);
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = (code *)0x0;
    local_90 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0x78f,&local_c0);
  *(uint *)((long)param_1 + 0x25ac) =
       *(uint *)((long)param_1 + 0x25ac) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x25ac) & 3 | (uint)(*param_2 != 0) << 2;
  if (*param_2 != 0) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      plVar5 = operator_new(0x130);
      FUN_00f0d160();
      local_c8 = plVar5;
      FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48,&DAT_01bee7fa);
      FUN_008fcdb8(&local_98,*(long *)(param_2 + 2) + lVar7);
      plVar5 = local_c8;
      pvVar1 = (void *)((ulong)&local_98 | 1);
      if (((ulong)local_98 & 1) != 0) {
        pvVar1 = local_88;
      }
      uVar4 = FUN_00e6ce7c(pvVar1,0);
      (**(code **)(*plVar5 + 0x138))(plVar5,uVar4);
      FUN_00ed5664(param_1 + 0x64a,local_c8,1);
      FUN_00c771ac(param_1 + 0x19,&local_c8);
      if (((ulong)local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x18;
    } while (uVar8 < *param_2);
  }
  lVar7 = param_1[0x1b];
  if (*(int *)(lVar7 + 0x10) != 0) {
    uVar8 = 0;
    do {
      pcVar6 = operator_new(0x6d0);
      FUN_00c75448();
      local_98 = pcVar6;
      FUN_00c75a84(pcVar6,*(undefined8 *)(*(long *)(lVar7 + 0x18) + uVar8 * 8));
      FUN_00c77234(param_1 + 0x17,&local_98);
      FUN_00f0ad88(param_1 + 0x305,local_98,1);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(lVar7 + 0x10));
    lVar7 = param_1[0x1b];
  }
  local_70 = DAT_03210c64;
  local_98 = FUN_00c772bc;
  local_88 = (void *)0x0;
  uStack_80 = 0;
  local_90 = param_1;
  local_78 = lVar7;
  FUN_009693a0(param_1 + 0x1d,&local_98);
  uVar4 = FUN_00aa8224();
  uVar3 = FUN_00aa7060(uVar4,param_1[0x1b] + 0x20);
  FUN_00b09454(param_1 + 0x1c,uVar3 & 1);
  FUN_00c772f0(param_1);
  (**(code **)(*param_1 + 0x90))(param_1);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = 0;
    local_b8 = (void *)0x0;
  }
  if ((local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c753b4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00c77508(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c7543c(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xea0) = param_1;
  *(undefined4 *)(param_3 + 0xea4) = param_2;
  FUN_00c74cbc();
  return;
}




void FUN_00c75448(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  undefined4 local_60 [2];
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x1a;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_02802230;
  FUN_00f0c714(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0c714(plVar2);
  FUN_00f0e4a8(param_1 + 0x50);
  plVar3 = param_1 + 0x6e;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x94;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0xba;
  FUN_00f0e4a8(plVar5);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x50,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_00f0c774(plVar1,&DAT_01bee7fa);
  uVar6 = *(uint *)((long)param_1 + 0x154);
  if ((uVar6 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x154) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0c774(plVar2,&DAT_01bee7f6);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  local_60[0] = 0xffaea4a0;
  FUN_00f0d7fc(plVar3,local_60);
  FUN_00f0dac8(plVar3,3);
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_check");
  FUN_00f0e670(plVar5,&DAT_01bee806,2);
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c75664(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02802230;
  param_1[0xba] = &PTR_FUN_028266f0;
  param_1[0xd1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd4);
  FUN_00f13d08(param_1 + 0xba);
  FUN_00f0d3a4(param_1 + 0x94);
  FUN_00f0d3a4(param_1 + 0x6e);
  param_1[0x50] = &PTR_FUN_028266f0;
  param_1[0x67] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6a);
  FUN_00f13d08(param_1 + 0x50);
  FUN_00f13d08(param_1 + 0x35);
  FUN_00f13d08(param_1 + 0x1a);
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    operator_delete((void *)param_1[0x19]);
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c75714(void *param_1)

{
  FUN_00c75664();
  operator_delete(param_1);
  return;
}




void FUN_00c75738(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar1 = param_1 + 0x280;
  fVar10 = *(float *)(param_1 + 0x6c0);
  FUN_00f13f08(lVar1);
  uVar11 = FUN_00f0e700(lVar1);
  local_78 = CONCAT44(fVar10,uVar11);
  FUN_00f13f18(param_1 + 0x1a8,&local_78);
  lVar2 = param_1 + 0xd0;
  fVar12 = (float)FUN_00f0e700(lVar1);
  FUN_00f0e700(lVar1);
  FUN_00f13f08(fVar12 + 6.0,fVar10 + 6.0,lVar2);
  lVar3 = param_1 + 0x370;
  FUN_00f0dad0(*(float *)(param_1 + 0x6c0) * 0.9,lVar3,1);
  FUN_00f0dc4c((*(float *)(param_1 + 0x6c4) - *(float *)(param_1 + 0x6c0)) + -40.0,0,0x3f800000,
               lVar3);
  bVar4 = *(byte *)(param_1 + 0xb8);
  if ((bVar4 & 1) == 0) {
    if (bVar4 >> 1 == 0) goto LAB_00c759a0;
  }
  else if (*(long *)(param_1 + 0xc0) == 0) goto LAB_00c759a0;
  uVar6 = FUN_00aa8224();
  lVar7 = FUN_00aa6b9c(uVar6,(byte *)(param_1 + 0xb8));
  FUN_00e70510(&local_78);
  FUN_00e70e18(&local_78,&DAT_01bb6d43,*(undefined4 *)(lVar7 + 0x60));
  FUN_00e70510(&local_88);
  FUN_00e70e18(&local_88,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0x6c8));
  thunk_FUN_00e7051c(&local_98,&local_78);
  FUN_00e705c8(&local_a8,"/");
  FUN_00e70c34(&local_98,&local_a8);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  FUN_00e70c34(&local_98,&local_88);
  FUN_00f0d75c(param_1 + 0x4a0,&local_98);
  if (*(int *)(lVar7 + 0x60) < *(int *)(param_1 + 0x6c8)) {
    *(uint *)(param_1 + 0x654) = *(uint *)(param_1 + 0x654) & 0xfffffffb;
    if ((~*(uint *)(param_1 + 0x304) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) | 0x7f80;
      FUN_0091ada4(lVar1);
    }
    uVar8 = *(uint *)(param_1 + 0x154);
    if ((uVar8 & 0x7f80) != 0x4c80) {
      iVar9 = 0x99;
LAB_00c75960:
      *(uint *)(param_1 + 0x154) = uVar8 & 0xffff8000 | uVar8 & 0x7f | iVar9 << 7;
      FUN_0091ada4(lVar2);
    }
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x304);
    *(uint *)(param_1 + 0x654) = *(uint *)(param_1 + 0x654) | 4;
    if ((uVar8 & 0x7f80) != 0x2600) {
      *(uint *)(param_1 + 0x304) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x2600;
      FUN_0091ada4(lVar1);
    }
    uVar8 = *(uint *)(param_1 + 0x154);
    if ((uVar8 & 0x7f80) != 0x2600) {
      iVar9 = 0x4c;
      goto LAB_00c75960;
    }
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
LAB_00c759a0:
  FUN_00f07940(0,0,lVar1,4,param_1,4);
  FUN_00f07940(0,0,lVar2,8,lVar1,8);
  FUN_00f07940(0,0,param_1 + 0x1a8,8,lVar1,8);
  FUN_00f07940(0xc1200000,0xc1200000,param_1 + 0x4a0,2,lVar1,2);
  FUN_00f07940(0,0x41200000,lVar3,4,lVar1,6);
  FUN_00f07940(0x41200000,0xc1200000,param_1 + 0x5d0,3,lVar1,3);
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c75a84(long param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  byte local_90 [16];
  void *local_80;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00aa8224();
  lVar4 = FUN_00aa6b9c(uVar3,param_2);
  FUN_008fce60(param_1 + 0xb8,lVar4);
  FUN_008fcdb8(local_60,lVar4 + 0x18);
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
  uVar3 = FUN_00e6ce7c(pvVar1,0);
  FUN_00f0d75c(param_1 + 0x370,uVar3);
  *(undefined4 *)(param_1 + 0x6c8) = *(undefined4 *)(param_2 + 0x18);
  FUN_00f0e628(param_1 + 0x280);
  FUN_008fcdb8(local_78,lVar4 + 0x30);
  FUN_00cac518(local_90,local_78);
  pvVar1 = (void *)((ulong)local_90 | 1);
  if ((local_90[0] & 1) != 0) {
    pvVar1 = local_80;
  }
  if ((*(byte *)(lVar4 + 0x48) & 1) == 0) {
    lVar4 = lVar4 + 0x49;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x58);
  }
  FUN_00f0e548(param_1 + 0x280,pvVar1,lVar4);
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  FUN_00c75738(param_1);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c75bd0(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x6c0) = param_1;
  *(undefined4 *)(param_3 + 0x6c4) = param_2;
  FUN_00c75738();
  return;
}




void FUN_00c75bdc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  long lVar18;
  undefined8 uVar19;
  uint uVar20;
  long lVar21;
  code *local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  long local_80;
  
  lVar18 = tpidr_el0;
  local_80 = *(long *)(lVar18 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x1c;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  *param_1 = (long)&PTR_FUN_02802378;
  param_1[0x17] = 0;
  FUN_00ab6c24(plVar1,0);
  plVar2 = param_1 + 0x2d7;
  param_1[0x2d6] = 0;
  param_1[0x2d5] = 0;
  param_1[0x2d4] = 0;
  FUN_00f13ca4();
  plVar3 = param_1 + 0x2ee;
  FUN_00f13ca4();
  FUN_00f0ac5c();
  FUN_00f13ca4();
  plVar4 = param_1 + 0x345;
  FUN_00f0e4a8();
  plVar5 = param_1 + 0x363;
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  plVar6 = param_1 + 0x39f;
  FUN_00f0e4a8(plVar6);
  FUN_00af8b20(param_1 + 0x3bd);
  plVar7 = param_1 + 0x433;
  FUN_00f0d160();
  plVar8 = param_1 + 0x459;
  FUN_00f0d160(plVar8);
  plVar9 = param_1 + 0x47f;
  FUN_00f0d160(plVar9);
  plVar10 = param_1 + 0x4a5;
  FUN_00abaee8(plVar10,0);
  plVar11 = param_1 + 0x564;
  FUN_00f13ca4(plVar11);
  FUN_00f0c714();
  plVar12 = param_1 + 0x596;
  FUN_00f0e4a8();
  plVar13 = param_1 + 0x5b4;
  FUN_00b12bd8(plVar13,0);
  plVar14 = param_1 + 0x64a;
  FUN_00ed66ec(plVar14);
  plVar15 = param_1 + 0x78f;
  FUN_00f0d160(plVar15);
  param_1[0x7b5] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3bd,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f023ec(plVar3,plVar1,1);
  FUN_00f023ec(plVar3,param_1 + 0x305,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x32e,1);
  FUN_00f023ec(param_1 + 0x32e,plVar2,1);
  FUN_00f023ec(plVar2,plVar9,1);
  FUN_00f023ec(plVar2,plVar5,1);
  FUN_00f023ec(plVar5,param_1 + 0x381,1);
  FUN_00f023ec(plVar2,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  FUN_00f023ec(plVar11,param_1 + 0x57b,1);
  FUN_00f023ec(plVar11,plVar13,1);
  FUN_00f023ec(plVar11,plVar14,1);
  FUN_00ed5664(plVar14,plVar15,1);
  FUN_00f023ec(plVar11,plVar12,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f0e548(plVar6,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"quest_item_glow");
  local_b0 = (code *)CONCAT44(local_b0._4_4_,0xffb6acaa);
  FUN_00f0d92c(plVar8,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&local_b0);
  FUN_00f0e578(param_1 + 0x540,"circle_button_question");
  if ((~*(uint *)((long)param_1 + 0x25ac) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x25ac) = *(uint *)((long)param_1 + 0x25ac) | 0x7f80;
    FUN_0091ada4(plVar10);
  }
  FUN_00b09144(0xbf800000,plVar10);
  local_88 = DAT_03210c64;
  local_b0 = FUN_00c76330;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(param_1 + 0x4a6,&local_b0);
  if ((*(float *)(param_1 + 0x4ae) != 0.75) || (*(float *)((long)param_1 + 0x2574) != 0.75)) {
    lVar21 = NEON_fmov(0x3f400000,4);
    param_1[0x4ae] = lVar21;
    FUN_0091ada4(plVar10);
  }
  uVar19 = FUN_00e6ce7c("MENU_SKINS_HUB_UNLOCK_BUTTON",0);
  FUN_00ab703c(0,0x43960000,0x43960000,plVar1,0,uVar19,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00ab7628(0x42a00000,plVar1);
  FUN_00b09454(plVar1,0);
  FUN_00f0d92c(plVar9,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  FUN_00f0d92c(plVar7,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  uVar19 = FUN_00e6ce7c("INVENTORY_HAT_TAP_TO_UNEQUIP_TAG",0);
  FUN_00f0d75c(plVar7,uVar19);
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_button_frame");
  FUN_00f0e548(param_1 + 0x381,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_button_fill");
  uVar16 = DAT_03210f60;
  *(uint *)((long)param_1 + 0x1b9c) = *(uint *)((long)param_1 + 0x1b9c) | 0x10;
  local_b0 = thunk_FUN_00c773dc;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar16;
  FUN_009693a0(param_1 + 0x364,&local_b0);
  local_b0 = thunk_FUN_00c773dc;
  uVar17 = DAT_03210f8c;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar17;
  FUN_009693a0(param_1 + 0x364,&local_b0);
  uVar20 = *(uint *)((long)param_1 + 0x2c5c);
  if ((uVar20 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2c5c) = uVar20 & 0xffff807f;
    FUN_0091ada4(param_1 + 0x57b);
    uVar20 = *(uint *)((long)param_1 + 0x2c5c);
  }
  *(uint *)((long)param_1 + 0x2c5c) = uVar20 | 0x10;
  local_b0 = FUN_00c76344;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar16;
  FUN_009693a0(param_1 + 0x57c,&local_b0);
  local_b0 = FUN_00c76344;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar17;
  FUN_009693a0(param_1 + 0x57c,&local_b0);
  FUN_00f0e548(plVar12,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_bubble_side_arrow");
  if ((*(float *)(param_1 + 0x59f) != 1.1) || (*(float *)((long)param_1 + 0x2cfc) != 1.1)) {
    param_1[0x59f] = 0x3f8ccccd3f8ccccd;
    FUN_0091ada4(plVar12);
  }
  *(byte *)(param_1 + 0x5b1) = *(byte *)(param_1 + 0x5b1) | 1;
  FUN_00b132e8(0x3f800000,plVar13,&DAT_01bee7f6);
  FUN_00b1326c(0x3f800000,plVar13,&DAT_01bee7fa);
  local_b0 = (code *)0x0;
  FUN_00b12ff0(plVar13,&local_b0);
  FUN_00f0d92c(plVar15,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48,&DAT_01bee7fa);
  local_b0 = (code *)CONCAT71(local_b0._1_7_,9);
  FUN_00ed5ab0(plVar14,&local_b0);
  *(uint *)((long)param_1 + 0x2ba4) = *(uint *)((long)param_1 + 0x2ba4) & 0xfffffffb;
  FUN_00f0e548(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  uVar20 = *(uint *)((long)param_1 + 0x1aac);
  if ((uVar20 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x1aac) = uVar20 & 0xffff8000 | uVar20 & 0x7f | 0x2600;
    FUN_0091ada4(plVar4);
  }
  if (*(long *)(lVar18 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

