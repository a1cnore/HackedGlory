// functions/00cc4 — 9 functions
#include "libGameKindred.h"




void FUN_00cc405c(long *param_1,long param_2,undefined8 param_3,uint param_4)

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
  float *pfVar13;
  void *pvVar14;
  undefined4 uVar15;
  long lVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_e0 [16];
  byte local_d0 [16];
  void *local_c0;
  byte local_b8 [16];
  void *local_a8;
  code *local_a0;
  long *plStack_98;
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar16 = tpidr_el0;
  local_70 = *(long *)(lVar16 + 0x28);
  FUN_00b06f74();
  *param_1 = (long)&PTR_FUN_0280cd48;
  param_1[0x39e] = (long)&PTR_FUN_0280ce80;
  FUN_00a86fa0(param_1 + 0x39f,param_2);
  FUN_00a87024(param_1 + 0x3a1);
  FUN_008fcdb8(param_1 + 0x3a3,param_2 + 0x20);
  FUN_008fcdb8(param_1 + 0x3a6,param_2 + 0x38);
  FUN_008fcdb8(param_1 + 0x3a9);
  FUN_008fcdb8(param_1 + 0x3ac);
  FUN_008fcdb8(param_1 + 0x3af,param_2 + 0x80);
  FUN_008fcdb8(param_1 + 0x3b2,param_2 + 0x98);
  plVar1 = param_1 + 0x3b8;
  *(undefined2 *)((long)param_1 + 0x1dac) = *(undefined2 *)(param_2 + 0xb4);
  uVar15 = *(undefined4 *)(param_2 + 0xb0);
  param_1[0x3b7] = 0;
  param_1[0x3b6] = 0;
  *(undefined4 *)(param_1 + 0x3b5) = uVar15;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x3cf;
  FUN_00ed66ec(plVar2);
  plVar3 = param_1 + 0x514;
  FUN_00f0c714(plVar3);
  plVar4 = param_1 + 0x52f;
  FUN_00f0e4a8();
  plVar5 = param_1 + 0x54d;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0x56b;
  FUN_00f0e4a8();
  plVar7 = param_1 + 0x589;
  FUN_00f017e8(plVar7);
  param_1[0x589] = (long)&PTR_FUN_027c1f80;
  FUN_00f0c714();
  plVar8 = param_1 + 0x5b5;
  FUN_00f0e4a8();
  plVar9 = param_1 + 0x5d3;
  FUN_00b12bd8(plVar9,0);
  plVar10 = param_1 + 0x669;
  FUN_00f0d160(plVar10);
  plVar11 = param_1 + 0x68f;
  FUN_00ab6c24(plVar11,0);
  plVar12 = param_1 + 0x947;
  FUN_00abaee8(plVar12,0);
  FUN_00b0780c(param_1,plVar1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00ed5664(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f023ec(plVar1,plVar12,1);
  FUN_00f023ec(plVar1,plVar11,1);
  FUN_00f023ec(plVar11,plVar6,1);
  FUN_00f023ec(plVar11,plVar7,1);
  FUN_00f023ec(plVar7,param_1 + 0x59a,1);
  FUN_00f023ec(plVar7,plVar9,1);
  FUN_00f023ec(plVar7,plVar10,1);
  FUN_00f023ec(plVar7,plVar8,1);
  *(uint *)((long)param_1 + 0x2aec) = *(uint *)((long)param_1 + 0x2aec) & 0xffffffef;
  FUN_008fcdb8(local_b8,param_2 + 0x68);
  pvVar14 = (void *)((ulong)local_b8 | 1);
  if ((local_b8[0] & 1) != 0) {
    pvVar14 = local_a8;
  }
  FUN_00f0e548(plVar5,"build://Chests.atlas",pvVar14);
  FUN_00f0e548(plVar6,"build://Keys.atlas",param_3);
  if ((*(float *)(param_1 + 0x574) != 0.4) || (*(float *)((long)param_1 + 0x2ba4) != 0.4)) {
    param_1[0x574] = 0x3ecccccd3ecccccd;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0c774(plVar3,&DAT_01bee7fa);
  uVar17 = *(uint *)((long)param_1 + 0x2924);
  if ((uVar17 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x2924) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0xc80;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  *(byte *)(param_1 + 0x54a) = *(byte *)(param_1 + 0x54a) | 2;
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  uVar17 = *(uint *)((long)param_1 + 0x29fc);
  if ((uVar17 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x29fc) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x7280;
    FUN_0091ada4(plVar4);
  }
  uVar18 = FUN_00e6ce7c("INVENTORY_OPEN_CHEST_BUTTON",0);
  uVar19 = FUN_00f0eac0(plVar6);
  FUN_00ab703c(uVar19,0x43e10000,0x443b8000,plVar11,0,uVar18,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00ab7628(0x43160000,plVar11);
  FUN_00b09454(plVar11,1);
  uVar18 = FUN_00a87e60();
  uVar17 = FUN_00a87b90(uVar18,param_1 + 0x3a3);
  *(uint *)((long)param_1 + 0x34fc) =
       *(uint *)((long)param_1 + 0x34fc) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x34fc) & 3 | (~uVar17 & 1) << 2;
  if ((param_4 & 1) == 0) {
    uVar18 = FUN_00e6ce7c("INVENTORY_CANNOT_OPEN_CHEST_BUTTON",0);
    FUN_00ab7498(plVar11,uVar18);
    local_a0 = FUN_00cc48b0;
  }
  else {
    if (*(char *)((long)param_1 + 0x1dad) != '\0') {
      uVar18 = FUN_00e6ce7c("GENERIC_DIALOG_OPEN",0);
      FUN_00ab7498(plVar11,uVar18);
      *(uint *)((long)param_1 + 0x2bdc) = *(uint *)((long)param_1 + 0x2bdc) & 0xfffffffb;
    }
    local_a0 = thunk_FUN_00cc53e0;
  }
  uVar15 = DAT_03210c64;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  local_78 = DAT_03210c64;
  FUN_009693a0(param_1 + 0x690,&local_a0);
  local_a0 = (code *)CONCAT71(local_a0._1_7_,9);
  FUN_00ed5ab0(plVar2,&local_a0);
  FUN_00f0e578(param_1 + 0x9e2,"circle_button_question");
  uVar17 = *(uint *)((long)param_1 + 0x4abc);
  if ((uVar17 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x4abc) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar12);
  }
  FUN_00b09144(0xbf800000,plVar12);
  local_a0 = thunk_FUN_00cc54c0;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  local_78 = uVar15;
  FUN_009693a0(param_1 + 0x948,&local_a0);
  pfVar13 = (float *)(param_1 + 0x950);
  if ((*pfVar13 != 0.8) || (*(float *)((long)param_1 + 0x4a84) != 0.8)) {
    pfVar13[0] = 0.8;
    pfVar13[1] = 0.8;
    FUN_0091ada4(plVar12);
  }
  uVar17 = *(uint *)((long)param_1 + 0x2d54);
  if ((uVar17 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2d54) = uVar17 & 0xffff807f;
    FUN_0091ada4(param_1 + 0x59a);
    uVar17 = *(uint *)((long)param_1 + 0x2d54);
  }
  local_78 = DAT_03210f60;
  *(uint *)((long)param_1 + 0x2d54) = uVar17 | 0x10;
  local_a0 = FUN_00cc48c8;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  FUN_009693a0(param_1 + 0x59b,&local_a0);
  local_a0 = FUN_00cc48c8;
  local_78 = DAT_03210f8c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = (void *)0x0;
  plStack_98 = param_1;
  FUN_009693a0(param_1 + 0x59b,&local_a0);
  FUN_00b132e8(0x3f666666,plVar9,&DAT_01bee7f6);
  FUN_00b1326c(0x3f800000,plVar9,&DAT_01bee7fa);
  local_a0 = (code *)0x0;
  FUN_00b12ff0(plVar9,&local_a0);
  FUN_00f0e548(plVar8,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_bubble_down_arrow");
  if ((*(float *)(param_1 + 0x5be) != 1.1) || (*(float *)((long)param_1 + 0x2df4) != 1.1)) {
    param_1[0x5be] = 0x3f8ccccd3f8ccccd;
    FUN_0091ada4(plVar8);
  }
  FUN_00f0d92c(plVar10,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  FUN_008fcdb8(&local_a0,param_2 + 0x50);
  pvVar14 = (void *)((ulong)&local_a0 | 1);
  if (((ulong)local_a0 & 1) != 0) {
    pvVar14 = local_90;
  }
  uVar18 = FUN_00e6ce7c(pvVar14,0);
  FUN_00f0d75c(plVar10,uVar18);
  *(uint *)((long)param_1 + 0x2ccc) = *(uint *)((long)param_1 + 0x2ccc) & 0xfffffffb;
  FUN_008fcdb8(local_d0,param_1 + 0x3a6);
  pvVar14 = (void *)((ulong)local_d0 | 1);
  if ((local_d0[0] & 1) != 0) {
    pvVar14 = local_c0;
  }
  uVar18 = FUN_00e6ce7c(pvVar14,0);
  FUN_00b078b8(param_1,uVar18);
  FUN_00a87024(auStack_e0,param_2 + 0x10);
  FUN_00cc48d8(param_1,auStack_e0);
  FUN_00a8823c(auStack_e0,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  if (((ulong)local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  if (*(long *)(lVar16 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc48b0(long param_1)

{
  *(uint *)(param_1 + 0x2ccc) = *(uint *)(param_1 + 0x2ccc) | 4;
  return;
}




void FUN_00cc48c8(long param_1)

{
  *(uint *)(param_1 + 0x2ccc) = *(uint *)(param_1 + 0x2ccc) & 0xfffffffb;
  return;
}




void FUN_00cc48d8(long param_1,uint *param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  byte local_148 [16];
  void *local_138;
  byte local_130 [16];
  void *local_120;
  undefined8 local_118;
  void *local_110;
  void *local_108;
  undefined8 local_100;
  void *local_f8;
  byte local_f0 [16];
  void *local_e0;
  byte local_d8 [16];
  void *local_c8;
  uint local_c0 [2];
  long local_b8;
  undefined8 local_b0;
  void *local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  byte local_88 [16];
  void *local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (*param_2 != 0) {
    uVar4 = 0;
    do {
      FUN_008fcdb8(local_88,*(long *)(param_2 + 2) + uVar4 * 0x28);
      pvVar3 = (void *)((ulong)local_88 | 1);
      if ((local_88[0] & 1) != 0) {
        pvVar3 = local_78;
      }
      uVar2 = FUN_00e6ce7c(pvVar3,0);
      thunk_FUN_00e7051c(&local_98,uVar2);
      pvVar3 = operator_new(0x2e0);
      FUN_00cc57c4(pvVar3,1);
      local_a0 = pvVar3;
      thunk_FUN_00e7051c(&local_b0,&local_98);
      FUN_00f0d75c((long)pvVar3 + 0xb8,&local_b0);
      FUN_00cc5848(pvVar3);
      if (local_a8 != (void *)0x0) {
        operator_delete__(local_a8);
        local_b0 = 0;
        local_a8 = (void *)0x0;
      }
      pvVar3 = local_a0;
      FUN_00f0d92c((long)local_a0 + 0xb8,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,
                   &DAT_01bee7fa);
      FUN_00cc5848(pvVar3);
      FUN_00cc55d4(param_1 + 0x1db0,&local_a0);
      FUN_00ed5664(param_1 + 0x1e78,local_a0,1);
      FUN_00a885fc(local_c0,*(long *)(param_2 + 2) + uVar4 * 0x28 + 0x18);
      if (local_c0[0] != 0) {
        lVar5 = 0;
        uVar6 = 0;
        do {
          FUN_008fcdb8(local_d8,local_b8 + lVar5);
          FUN_008fcdb8(local_f0,local_b8 + lVar5 + 0x18);
          pvVar3 = (void *)((ulong)local_f0 | 1);
          if ((local_f0[0] & 1) != 0) {
            pvVar3 = local_e0;
          }
          uVar2 = FUN_00e6ce7c(pvVar3,0);
          thunk_FUN_00e7051c(&local_100,uVar2);
          pvVar3 = operator_new(0x2e0);
          FUN_00cc57c4(pvVar3,0);
          local_108 = pvVar3;
          thunk_FUN_00e7051c(&local_118,&local_100);
          FUN_00f0d75c((long)pvVar3 + 0xb8,&local_118);
          FUN_00cc5848(pvVar3);
          if (local_110 != (void *)0x0) {
            operator_delete__(local_110);
            local_118 = 0;
            local_110 = (void *)0x0;
          }
          pvVar3 = local_108;
          FUN_008fcdb8(local_130,local_d8);
          FUN_008fcdb8(local_148,local_b8 + lVar5 + 0x30);
          FUN_00cc565c(pvVar3,local_130,local_148);
          if ((local_148[0] & 1) != 0) {
            operator_delete(local_138);
          }
          if ((local_130[0] & 1) != 0) {
            operator_delete(local_120);
          }
          pvVar3 = local_108;
          FUN_00f0d92c((long)local_108 + 0xb8,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,
                       &DAT_01bee7fa);
          FUN_00cc5848(pvVar3);
          FUN_00cc55d4(param_1 + 0x1db0,&local_108);
          FUN_00ed5664(param_1 + 0x1e78,local_108,1);
          if (local_f8 != (void *)0x0) {
            operator_delete__(local_f8);
            local_100 = 0;
            local_f8 = (void *)0x0;
          }
          if ((local_f0[0] & 1) != 0) {
            operator_delete(local_e0);
          }
          if ((local_d8[0] & 1) != 0) {
            operator_delete(local_c8);
          }
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 0x48;
        } while (uVar6 < local_c0[0]);
      }
      FUN_00a882c4(local_c0,1);
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
        local_98 = 0;
        local_90 = (void *)0x0;
      }
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc4c04(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x3b6);
  param_1[0x39e] = &PTR_FUN_0280ce80;
  *param_1 = &PTR_FUN_0280cd48;
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(param_1[0x3b7] + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(param_1[0x3b7] + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x3b6);
        puVar3 = (undefined8 *)(param_1[0x3b7] + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (param_1[0x3b7] != 0) {
    *(undefined4 *)(param_1 + 0x3b6) = 0;
  }
  param_1[0x947] = &PTR_FUN_027d5388;
  param_1[0x9e2] = &PTR_FUN_028266f0;
  param_1[0x9f9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9fc);
  FUN_00f13d08(param_1 + 0x9e2);
  param_1[0x9c4] = &PTR_FUN_028266f0;
  param_1[0x9db] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9de);
  FUN_00f13d08(param_1 + 0x9c4);
  param_1[0x9a6] = &PTR_FUN_028266f0;
  param_1[0x9bd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9c0);
  FUN_00f13d08(param_1 + 0x9a6);
  FUN_00f01868(param_1 + 0x995);
  FUN_009c825c(param_1 + 0x947);
  FUN_009c7fa8(param_1 + 0x68f);
  FUN_00f0d3a4(param_1 + 0x669);
  param_1[0x5d3] = &PTR_FUN_027dc928;
  param_1[0x63e] = &PTR_FUN_02826f38;
  param_1[0x655] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x658);
  FUN_00f13d08(param_1 + 0x63e);
  param_1[0x614] = &PTR_FUN_02826f38;
  param_1[0x62b] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x62e);
  FUN_00f13d08(param_1 + 0x614);
  param_1[0x5ea] = &PTR_FUN_02826f38;
  param_1[0x601] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x604);
  FUN_00f13d08(param_1 + 0x5ea);
  FUN_00f13d08(param_1 + 0x5d3);
  param_1[0x5b5] = &PTR_FUN_028266f0;
  param_1[0x5cc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5cf);
  FUN_00f13d08(param_1 + 0x5b5);
  FUN_00f13d08(param_1 + 0x59a);
  FUN_00f01868(param_1 + 0x589);
  param_1[0x56b] = &PTR_FUN_028266f0;
  param_1[0x582] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x585);
  FUN_00f13d08(param_1 + 0x56b);
  param_1[0x54d] = &PTR_FUN_028266f0;
  param_1[0x564] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x567);
  FUN_00f13d08(param_1 + 0x54d);
  param_1[0x52f] = &PTR_FUN_028266f0;
  param_1[0x546] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x549);
  FUN_00f13d08(param_1 + 0x52f);
  FUN_00f13d08(param_1 + 0x514);
  thunk_FUN_00ed5534(param_1 + 0x3cf);
  FUN_00f13d08(param_1 + 0x3b8);
  if ((void *)param_1[0x3b7] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3b7]);
    param_1[0x3b6] = 0;
    param_1[0x3b7] = 0;
  }
  FUN_00a87a10(param_1 + 0x39f);
  param_1[0x39e] = &PTR_FUN_027e0a68;
  FUN_0096bd60(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cc4f24(long param_1)

{
  FUN_00cc4c04(param_1 + -0x1cf0);
  return;
}




void FUN_00cc4f30(void *param_1)

{
  FUN_00cc4c04();
  operator_delete(param_1);
  return;
}




void FUN_00cc4f54(long param_1)

{
  FUN_00cc4c04((void *)(param_1 + -0x1cf0));
  operator_delete((void *)(param_1 + -0x1cf0));
  return;
}




void FUN_00cc4f80(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float local_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined1 auStack_90 [4];
  float local_8c;
  long local_88;
  
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
  FUN_00f00298(&local_8c,auStack_90);
  fVar12 = local_8c * 0.55;
  local_98 = 0;
  fVar13 = fVar12 * 0.7;
  FUN_00b0877c(param_1,&local_98);
  fVar10 = fVar13;
  uVar9 = FUN_00b07b80(fVar12,param_1);
  local_98 = CONCAT44(fVar10,uVar9);
  FUN_00b07d08(fVar12,fVar13,param_1,0);
  FUN_00b0828c(param_1);
  lVar1 = param_1 + 0x1dc0;
  FUN_00f13f18(lVar1,&local_98);
  lVar2 = param_1 + 0x2a68;
  fVar10 = (float)FUN_00f13e54(lVar1);
  fStack_9c = (float)FUN_00f13e54(lVar1);
  fStack_9c = fStack_9c * 0.4;
  local_a0 = fVar10 * 0.4;
  FUN_00f13f18(lVar2,&local_a0);
  lVar3 = param_1 + 0x1e78;
  fVar10 = (float)FUN_00f13e54(lVar1);
  FUN_00f13e54(lVar1);
  fVar13 = fVar13 * 0.7;
  FUN_00f13f08(fVar10 * 0.55,fVar13,lVar3);
  uVar11 = FUN_00f13e54(lVar3);
  FUN_00f13e54(lVar3);
  FUN_00f13f08(uVar11,fVar13 * 0.3,param_1 + 0x2978);
  if (*(int *)(param_1 + 0x1db0) != 0) {
    uVar8 = 0;
    do {
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x1db8) + uVar8 * 8);
      fVar10 = (float)FUN_00f13e54(lVar3);
      FUN_00cc5390(fVar10 + -20.0,uVar11);
      lVar7 = *(long *)(*(long *)(param_1 + 0x1db8) + uVar8 * 8);
      if (uVar8 == 0) {
        if ((*(float *)(lVar7 + 0x40) != 20.0) || (*(float *)(lVar7 + 0x44) != 10.0)) {
          *(undefined8 *)(lVar7 + 0x40) = 0x4120000041a00000;
          FUN_0091ada4();
        }
      }
      else {
        FUN_00f07940(0,0,lVar7,0,
                     *(undefined8 *)(*(long *)(param_1 + 0x1db8) + (ulong)((int)uVar8 - 1) * 8),3);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x1db0));
  }
  FUN_00f13f18(param_1 + 0x2cd0,&local_98);
  lVar7 = param_1 + 0x2e98;
  fVar10 = (float)FUN_00f13e54(lVar3);
  lVar4 = param_1 + 0x3348;
  fVar13 = -30.0;
  FUN_00f0d548(lVar4);
  fVar13 = fVar13 + 20.0;
  FUN_00f13f08(fVar10 + -30.0,lVar7);
  fVar10 = (float)FUN_00f13e54(lVar7);
  FUN_00f0dad0(fVar10 + -20.0,lVar4,1);
  lVar5 = param_1 + 0x28a0;
  local_a0 = (float)FUN_00f01c54(lVar3,0,0,1,1);
  fStack_9c = fVar13;
  FUN_00f13f18(lVar5,&local_a0);
  FUN_00f07940(0x41200000,0,lVar2,7,lVar1,7);
  FUN_00f07940(0x41a00000,0xc1a00000,param_1 + 19000,3,lVar2,3);
  FUN_00f07940(0xc2700000,0x41200000,lVar3,1,lVar1,1);
  FUN_00f07940(0x41200000,0x41200000,lVar5,0,lVar3,0);
  FUN_00f07940(0,0,param_1 + 0x2978,3,lVar5,3);
  lVar2 = param_1 + 0x3478;
  FUN_00f07940(0,0x41f00000,lVar2,4,lVar3,6);
  FUN_00f07940(0x41200000,0,param_1 + 0x2b58,7,lVar2,7);
  FUN_00f07940(0,0,param_1 + 0x2da8,6,lVar2,4);
  FUN_00f07940(0,0x40d00000,lVar7,6,param_1 + 0x2da8,4);
  FUN_00f07940(0x41200000,0,lVar4,0,lVar7,0);
  FUN_00f07940(0,0,param_1 + 0x2cd0,0,lVar1,0);
  if (*(long *)(lVar6 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

