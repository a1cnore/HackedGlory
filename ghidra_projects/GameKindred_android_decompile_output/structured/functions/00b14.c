// functions/00b14 — 11 functions
#include "libGameKindred.h"




void FUN_00b144e8(void)

{
  long lVar1;
  long lVar2;
  byte local_110 [16];
  void *local_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  byte local_50 [16];
  long local_40 [2];
  
  lVar1 = tpidr_el0;
  local_40[1] = *(long *)(lVar1 + 0x28);
  if (DAT_03139b68 == '\0') {
    memset(auStack_f8,0,0xc0);
    FUN_008fa54c(local_110,"square_button_top_left");
    FUN_008fce60(auStack_f8,local_110);
    if ((local_110[0] & 1) != 0) {
      operator_delete(local_100);
    }
    FUN_008fa54c(local_110,"square_button_top_middle");
    FUN_008fce60(auStack_e0,local_110);
    if ((local_110[0] & 1) != 0) {
      operator_delete(local_100);
    }
    FUN_008fa54c(local_110,"square_button_top_right");
    FUN_008fce60(auStack_c8,local_110);
    if ((local_110[0] & 1) != 0) {
      operator_delete(local_100);
    }
    FUN_008fa54c(local_110,"square_button_bottom_left");
    FUN_008fce60(auStack_b0,local_110);
    if ((local_110[0] & 1) != 0) {
      operator_delete(local_100);
    }
    FUN_008fa54c(local_110,"square_button_bottom_middle");
    FUN_008fce60(auStack_98,local_110);
    if ((local_110[0] & 1) != 0) {
      operator_delete(local_100);
    }
    FUN_008fa54c(local_110,"square_button_bottom_right");
    FUN_008fce60(auStack_80,local_110);
    if ((local_110[0] & 1) != 0) {
      operator_delete(local_100);
    }
    FUN_008fa54c(local_110,"square_button_middle_left");
    FUN_008fce60(auStack_68,local_110);
    if ((local_110[0] & 1) != 0) {
      operator_delete(local_100);
    }
    FUN_008fa54c(local_110,"square_button_middle_right");
    FUN_008fce60(local_50,local_110);
    if ((local_110[0] & 1) != 0) {
      operator_delete(local_100);
    }
    local_110[0] = 0;
    FUN_00b146fc(&DAT_03139b70,local_110,auStack_f8);
    lVar2 = 0;
    do {
      if ((local_50[lVar2] & 1) != 0) {
        operator_delete(*(void **)((long)local_40 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0xc0);
  }
  if (*(long *)(lVar1 + 0x28) == local_40[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b146fc(uint *param_1,undefined1 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_0091ed5c(0,0,*param_2);
  uVar9 = param_1[4];
  uVar8 = *param_1;
  param_1[4] = uVar9 + 1;
  if (uVar8 >> 1 < uVar9 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar8 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar9 = *param_1;
    uVar10 = uVar9 - 1;
    uVar8 = (uint)local_58;
    if ((int)uVar10 < 0) {
      pvVar6 = *(void **)(param_1 + 2);
    }
    else {
      pvVar6 = *(void **)(param_1 + 2);
      do {
        iVar5 = *(int *)((long)pvVar6 + (ulong)uVar10 * 8 + 4);
        if (iVar5 != -1) {
          uVar9 = *(uint *)((long)pvVar6 + (ulong)uVar10 * 8);
          uVar2 = 0;
          if ((uint)local_58 != 0) {
            uVar2 = uVar9 / (uint)local_58;
          }
          uVar11 = (ulong)(uVar9 - uVar2 * (uint)local_58);
          piVar12 = (int *)((long)local_50 + uVar11 * 8 + 4);
          iVar1 = *piVar12;
          while (iVar1 != -1) {
            uVar2 = (uint)local_58;
            if (0 < (int)(uint)uVar11) {
              uVar2 = (uint)uVar11;
            }
            uVar11 = (ulong)(uVar2 - 1);
            piVar12 = (int *)((long)local_50 + uVar11 * 8 + 4);
            iVar1 = *piVar12;
          }
          *(uint *)((long)local_50 + uVar11 * 8) = uVar9;
          *piVar12 = iVar5;
        }
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
      uVar9 = *param_1;
    }
    uVar10 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar10,uVar9);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar6;
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar8 = *param_1;
    }
  }
  lVar7 = *(long *)(param_1 + 2);
  uVar9 = 0;
  if (uVar8 != 0) {
    uVar9 = uVar4 / uVar8;
  }
  uVar11 = (ulong)(uVar4 - uVar9 * uVar8);
  piVar12 = (int *)(lVar7 + uVar11 * 8 + 4);
  iVar5 = *piVar12;
  while (iVar5 != -1) {
    uVar9 = uVar8;
    if (0 < (int)(uint)uVar11) {
      uVar9 = (uint)uVar11;
    }
    uVar11 = (ulong)(uVar9 - 1);
    piVar12 = (int *)(lVar7 + uVar11 * 8 + 4);
    iVar5 = *piVar12;
  }
  *(uint *)(lVar7 + uVar11 * 8) = uVar4;
  iVar5 = FUN_00b15534(param_1,param_3);
  *piVar12 = iVar5;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b148c4(long *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00b12bd8(param_1,param_2 & 1);
  plVar1 = param_1 + 0x96;
  *param_1 = (long)&PTR_FUN_027dcbe0;
  FUN_00f0fe84(plVar1);
  plVar2 = param_1 + 0xc0;
  FUN_00f0fe84(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  local_60 = 0x3f0000003f000000;
  (**(code **)(param_1[0x96] + 0x28))(plVar1,&local_60);
  local_60 = 0x3f0000003f000000;
  (**(code **)(param_1[0xc0] + 0x28))(plVar2,&local_60);
  FUN_00f0ff74(param_1 + 0x41,"gradient_rect_top_left",0,0,0,"gradient_rect_top_middle",0,0,0,
               "gradient_rect_top_right",0,0,0,"gradient_rect_middle_left",0,0,0,0,0,0,0,
               "gradient_rect_middle_right",0,0,0,"gradient_rect_bottom_left",0,0,0,
               "gradient_rect_bottom_middle",0,0,0,"gradient_rect_bottom_right",0,0,0);
  ppuVar3 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  if (*(char *)((long)param_1 + 0x4ac) != '\0') {
    ppuVar3 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  }
  puVar5 = *ppuVar3;
  FUN_00f0ff6c(plVar1,puVar5);
  FUN_00f0ff6c(plVar2,puVar5);
  FUN_00f0ff74(plVar1,"gradient_glow_big_top_left",0,0,0,"gradient_glow_big_top_middle",0,0,0,
               "gradient_glow_big_top_left",1,0,0,"gradient_glow_big_middle_left",0,0,0,0,0,0,0,
               "gradient_glow_big_middle_left",1,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00f0ff74(plVar2,"gradient_glow_small_top_left",0,0,0,"gradient_glow_small_top_middle",0,0,0,
               "gradient_glow_small_top_left",1,0,0,"gradient_glow_small_middle_left",0,0,0,0,0,0,0,
               "gradient_glow_small_middle_left",1,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00f105ec(plVar2,&DAT_01bee7fa,2);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b14c24(undefined8 param_1,undefined8 param_2,long *param_3)

{
  FUN_00b130d8();
                    /* WARNING: Could not recover jumptable at 0x00b14c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x140))(param_1,param_2,param_3);
  return;
}




void FUN_00b14c68(undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  FUN_00f13f08();
  *(undefined4 *)(param_4 + 0x95) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00b14cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x140))(param_1,param_2,param_4);
  return;
}




void FUN_00b14cbc(long param_1,undefined8 param_2)

{
  FUN_00f105ec(param_1 + 0x208,param_2,2);
  if ((~*(uint *)(param_1 + 0x28c) & 0x7f80) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x28c) = *(uint *)(param_1 + 0x28c) | 0x7f80;
  FUN_0091ada4(param_1 + 0x208);
  return;
}




void FUN_00b14d10(long param_1,undefined8 param_2)

{
  FUN_00f105ec(param_1 + 0x4b0,param_2,2);
  return;
}




void FUN_00b14d1c(float param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  
  uVar3 = param_2;
  uVar1 = FUN_00f10374(param_3 + 0x4b0,0);
  uVar4 = uVar3;
  uVar2 = FUN_00f10374(param_3 + 0x600,0);
  fVar5 = (float)param_2 + -28.0;
  FUN_00f10644(uVar1,param_1 + -22.0,uVar1,uVar3,fVar5,uVar3,param_3 + 0x4b0);
  FUN_00f10644(uVar2,param_1 + -22.0,uVar2,uVar4,fVar5,uVar4,param_3 + 0x600);
  return;
}




void FUN_00b14dd4(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  FUN_00b12bd8(param_1,param_2 & 1);
  puVar1 = param_1 + 0x17;
  *param_1 = &PTR_FUN_027dcd40;
  FUN_00f10428(puVar1,0,0,0,0,0,0,0,0,0,0,0,0,"white_background");
  FUN_00f105ec(puVar1,&DAT_01bee7fa,2);
  FUN_00f105b8(puVar1);
  FUN_00f10428(param_1 + 0x41,"tile_edge_corner",0,0,0,"tile_edge_top_edge",0,0,0,
               "tile_edge_left_edge",0,0,0,0);
  return;
}




void FUN_00b14ec0(float param_1,float param_2,undefined4 param_3,long param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_2;
  FUN_00f13f08();
  *(undefined4 *)(param_4 + 0x4a8) = param_3;
  fVar1 = (float)FUN_00f10374(param_4 + 0x208,0);
  FUN_00f13f08((param_1 - (fVar1 + fVar1)) + 24.0,(param_2 - (fVar2 + fVar2)) + 24.0,param_4 + 0xb8)
  ;
  return;
}




void FUN_00b14f2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dc7d8;
  param_1[0x8f] = &PTR_FUN_028266f0;
  param_1[0xa6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa9);
  FUN_00f13d08(param_1 + 0x8f);
  param_1[0x71] = &PTR_FUN_028266f0;
  param_1[0x88] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8b);
  FUN_00f13d08(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_028266f0;
  param_1[0x6a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6d);
  FUN_00f13d08(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}

