// functions/00b12 — 15 functions
#include "libGameKindred.h"




void FUN_00b12044(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = -0x6fd8;
  puVar1 = param_1 + 0x969;
  *param_1 = &PTR_FUN_027dc578;
  do {
    FUN_00b10040(puVar1);
    lVar2 = lVar2 + 0x2548;
    puVar1 = puVar1 + -0x4a9;
  } while (lVar2 != 0);
  FUN_00a02470(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b120bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dc690;
  if ((*(byte *)(param_1 + 0x39a) & 1) != 0) {
    operator_delete((void *)param_1[0x39c]);
  }
  if ((*(byte *)(param_1 + 0x397) & 1) != 0) {
    operator_delete((void *)param_1[0x399]);
  }
  FUN_00f0d3a4(param_1 + 0x371);
  param_1[0x353] = &PTR_FUN_028266f0;
  param_1[0x36a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x36d);
  FUN_00f13d08(param_1 + 0x353);
  FUN_00f0d3a4(param_1 + 0x32d);
  param_1[0x30f] = &PTR_FUN_028266f0;
  param_1[0x326] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x329);
  FUN_00f13d08(param_1 + 0x30f);
  param_1[0x2f1] = &PTR_FUN_028266f0;
  param_1[0x308] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x30b);
  FUN_00f13d08(param_1 + 0x2f1);
  FUN_00f01868(param_1 + 0x2e0);
  FUN_00f01868(param_1 + 0x2cf);
  FUN_009c7fa8(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b121d0(void *param_1)

{
  FUN_00b120bc();
  operator_delete(param_1);
  return;
}




void FUN_00b121f4(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    FUN_009c8464(param_1,1);
    FUN_009c8364(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar4 = *(long *)(param_1 + 2);
      lVar5 = lVar3 + (ulong)*param_2 * 0x38;
      do {
        thunk_FUN_00e7051c(lVar4,lVar3);
        FUN_008fcdb8(lVar4 + 0x10,lVar3 + 0x10);
        *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar3 + 0x30);
        puVar1 = (undefined8 *)(lVar3 + 0x28);
        lVar3 = lVar3 + 0x38;
        *(undefined8 *)(lVar4 + 0x28) = *puVar1;
        lVar4 = lVar4 + 0x38;
      } while (lVar3 != lVar5);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_00b1229c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long FUN_00b1231c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  uVar4 = FUN_00e6a474(uVar8);
  uVar5 = FUN_0091ed5c(uVar8,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if (uVar3 != 0xffffffff) {
      uVar7 = (ulong)*(uint *)(lVar6 + (ulong)uVar3 * 8 + 4);
      goto LAB_00b123a8;
    }
  }
  uVar7 = 0xffffffff;
LAB_00b123a8:
  return *(long *)(param_1 + 8) + uVar7 * 4;
}




void FUN_00b123bc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027dc7d8;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x53;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x71;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x8f;
  FUN_00f0e4a8(plVar5);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar1,&DAT_01bee7fa,2);
  uVar6 = *(uint *)((long)param_1 + 0x13c);
  if ((uVar6 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x13c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5280;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar2,&DAT_01bee7fa,2);
  uVar6 = *(uint *)((long)param_1 + 0x22c);
  if ((uVar6 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x22c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5280;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar3,&DAT_01bee7fa,2);
  uVar6 = *(uint *)((long)param_1 + 0x31c);
  if ((uVar6 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x31c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5280;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar4,&DAT_01bee7fa,2);
  uVar6 = *(uint *)((long)param_1 + 0x40c);
  if ((uVar6 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x40c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5280;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar5,&DAT_01bee7f6,2);
  uVar6 = *(uint *)((long)param_1 + 0x4fc);
  if ((uVar6 & 0x7f80) == 0x2600) {
    return;
  }
  *(uint *)((long)param_1 + 0x4fc) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2600;
  FUN_0091ada4(plVar5);
  return;
}




void FUN_00b1265c(undefined8 param_1,undefined8 param_2,undefined1 param_3 [16],long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_80;
  long local_78;
  
  fVar9 = param_3._0_4_;
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  fVar7 = (float)param_1;
  fVar8 = fVar9 + fVar9 + fVar7;
  lVar1 = param_4 + 0xb8;
  uVar6 = param_3._0_8_;
  FUN_00f13f08(fVar8,uVar6,lVar1);
  lVar2 = param_4 + 0x1a8;
  FUN_00f13f08(fVar8,uVar6,lVar2);
  lVar3 = param_4 + 0x298;
  FUN_00f13f08(uVar6,param_2,lVar3);
  lVar4 = param_4 + 0x388;
  FUN_00f13f08(uVar6,param_2,lVar4);
  fVar9 = -fVar9;
  fVar8 = (float)param_2 * -0.5;
  if ((*(float *)(param_4 + 0xf8) != fVar9) || (*(float *)(param_4 + 0xfc) != fVar8)) {
    *(float *)(param_4 + 0xf8) = fVar9;
    *(float *)(param_4 + 0xfc) = fVar8;
    FUN_0091ada4(lVar1);
  }
  fVar10 = (float)param_2 * 0.5;
  local_80 = 0x3f80000000000000;
  (**(code **)(*(long *)(param_4 + 0xb8) + 0x28))(lVar1,&local_80);
  if ((*(float *)(param_4 + 0x1e8) != fVar9) || (*(float *)(param_4 + 0x1ec) != fVar10)) {
    *(float *)(param_4 + 0x1e8) = fVar9;
    *(float *)(param_4 + 0x1ec) = fVar10;
    FUN_0091ada4(lVar2);
  }
  local_80 = 0;
  (**(code **)(*(long *)(param_4 + 0x1a8) + 0x28))(lVar2,&local_80);
  if ((*(float *)(param_4 + 0x2d8) != 0.0) || (*(float *)(param_4 + 0x2dc) != 0.0)) {
    *(undefined8 *)(param_4 + 0x2d8) = 0;
    FUN_0091ada4(lVar3);
  }
  local_80 = 0x3f0000003f800000;
  (**(code **)(*(long *)(param_4 + 0x298) + 0x28))(lVar3,&local_80);
  if ((*(float *)(param_4 + 0x3c8) != fVar7) || (*(float *)(param_4 + 0x3cc) != 0.0)) {
    *(float *)(param_4 + 0x3c8) = fVar7;
    *(undefined4 *)(param_4 + 0x3cc) = 0;
    FUN_0091ada4(lVar4);
  }
  local_80 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_4 + 0x388) + 0x28))(lVar4,&local_80);
  FUN_00f13f08(param_1,param_2,param_4 + 0x478);
  if ((*(float *)(param_4 + 0x4b8) != 0.0) || (*(float *)(param_4 + 0x4bc) != fVar8)) {
    *(undefined4 *)(param_4 + 0x4b8) = 0;
    *(float *)(param_4 + 0x4bc) = fVar8;
    FUN_0091ada4(param_4 + 0x478);
  }
  FUN_00f13f08(param_1,param_2,param_4);
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b128a0(float param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00f0e670(param_2 + 0xb8,param_3,2);
  FUN_00f0e670(param_2 + 0x298,param_3,2);
  FUN_00f0e670(param_2 + 0x1a8,param_3,2);
  FUN_00f0e670(param_2 + 0x388,param_3,2);
  uVar1 = *(uint *)(param_2 + 0x13c);
  uVar2 = (uint)(param_1 * 255.0);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_2 + 0x13c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_0091ada4(param_2 + 0xb8);
  }
  uVar1 = *(uint *)(param_2 + 0x31c);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_2 + 0x31c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_0091ada4(param_2 + 0x298);
  }
  uVar1 = *(uint *)(param_2 + 0x22c);
  if ((uVar1 >> 7 & 0xff) != uVar2) {
    *(uint *)(param_2 + 0x22c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_0091ada4(param_2 + 0x1a8);
  }
  uVar1 = *(uint *)(param_2 + 0x40c);
  if ((uVar1 >> 7 & 0xff) == uVar2) {
    return;
  }
  *(uint *)(param_2 + 0x40c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
  FUN_0091ada4(param_2 + 0x388);
  return;
}




void FUN_00b129cc(long param_1,undefined4 param_2)

{
  char *pcVar1;
  
  switch(param_2) {
  case 0:
    FUN_00f0e578(param_1 + 0xb8,"black_background");
    FUN_00f0e578(param_1 + 0x1a8,"white_background");
    pcVar1 = "vert_glass_shadow";
    *(byte *)(param_1 + 0x280) = *(byte *)(param_1 + 0x280) | 1;
    FUN_00f0e578(param_1 + 0x298,"vert_glass_shadow");
    *(byte *)(param_1 + 0x370) = *(byte *)(param_1 + 0x370) | 2;
    break;
  case 1:
    FUN_00f0e578(param_1 + 0xb8,"white_background");
    *(byte *)(param_1 + 400) = *(byte *)(param_1 + 400) | 1;
    FUN_00f0e578(param_1 + 0x1a8,"black_background");
    pcVar1 = "vert_glass_shadow";
    FUN_00f0e578(param_1 + 0x298,"vert_glass_shadow");
    goto LAB_00b12b00;
  case 2:
    FUN_00f0e578(param_1 + 0xb8,"splash_glass_shadow");
    *(byte *)(param_1 + 400) = *(byte *)(param_1 + 400) | 1;
    FUN_00f0e578(param_1 + 0x1a8,"splash_glass_shadow");
    *(byte *)(param_1 + 0x280) = *(byte *)(param_1 + 0x280) | 1;
    FUN_00f0e578(param_1 + 0x298,"black_background");
    pcVar1 = "white_background";
    *(byte *)(param_1 + 0x370) = *(byte *)(param_1 + 0x370) | 2;
LAB_00b12b00:
    FUN_00f0e578(param_1 + 0x388,pcVar1);
    return;
  case 3:
    FUN_00f0e578(param_1 + 0xb8,"splash_glass_shadow");
    FUN_00f0e578(param_1 + 0x1a8,"splash_glass_shadow");
    FUN_00f0e578(param_1 + 0x298,"white_background");
    pcVar1 = "black_background";
    break;
  default:
    goto switchD_00b129f8_default;
  }
  FUN_00f0e578(param_1 + 0x388,pcVar1);
  *(byte *)(param_1 + 0x460) = *(byte *)(param_1 + 0x460) | 2;
switchD_00b129f8_default:
  return;
}




void FUN_00b12b64(float param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  
  FUN_00f0e670(param_2 + 0x478,param_3,2);
  uVar1 = *(uint *)(param_2 + 0x4fc);
  if ((uVar1 >> 7 & 0xff) == (int)(param_1 * 255.0)) {
    return;
  }
  *(uint *)(param_2 + 0x4fc) =
       uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(param_1 * 255.0) & 0xffU) << 7;
  FUN_0091ada4(param_2 + 0x478);
  return;
}




void FUN_00b12bd8(long *param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027dc928;
  FUN_00f0fe84(plVar1);
  plVar2 = param_1 + 0x41;
  FUN_00f0fe84(plVar2);
  plVar3 = param_1 + 0x6b;
  FUN_00f0fe84(plVar3);
  *(undefined4 *)(param_1 + 0x95) = 0x3f800000;
  *(byte *)((long)param_1 + 0x4ac) = param_2 & 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  local_60 = 0x3f0000003f000000;
  (**(code **)(param_1[0x17] + 0x28))(plVar1,&local_60);
  local_60 = 0x3f0000003f000000;
  (**(code **)(param_1[0x41] + 0x28))(plVar2,&local_60);
  local_60 = 0x3f0000003f000000;
  (**(code **)(param_1[0x6b] + 0x28))(plVar3,&local_60);
  *(uint *)((long)param_1 + 0x3dc) = *(uint *)((long)param_1 + 0x3dc) & 0xffffffbf;
  ppuVar4 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  if (*(char *)((long)param_1 + 0x4ac) != '\0') {
    ppuVar4 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  }
  puVar6 = *ppuVar4;
  FUN_00f0ff6c(plVar3,puVar6);
  FUN_00f0ff6c(plVar1,puVar6);
  FUN_00f0ff6c(plVar2,puVar6);
  FUN_00f10428(plVar1,"square_button_fill_top_left",0,0,0,"square_button_fill_top_middle",0,0,0,
               "square_button_fill_middle_left",0,0,0,"white_background");
  FUN_00f105ec(plVar1,&DAT_01bee7f6,2);
  if (*(char *)((long)param_1 + 0x4ac) == '\0') {
    FUN_00f10428(plVar3,"tile_edge_corner",0,0,0,"tile_edge_top_edge",0,0,0,"tile_edge_left_edge",0,
                 0,0,0);
  }
  FUN_00f105ec(plVar3,&DAT_01bee7f6,2);
  *(uint *)((long)param_1 + 0x3dc) = *(uint *)((long)param_1 + 0x3dc) & 0xfffffffb;
  FUN_00f10428(plVar2,"square_button_top_left",0,0,0,"square_button_top_middle",0,0,0,
               "square_button_middle_left",0,0,0,0);
  FUN_00f105ec(plVar2,&DAT_01bee7f6,2);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b12e9c(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x3dc) =
       *(uint *)(param_1 + 0x3dc) & 0xfffffff8 | *(uint *)(param_1 + 0x3dc) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00b12eb0(long param_1,ulong param_2)

{
  if ((param_2 & 1) == 0) {
    FUN_00f10428(param_1 + 0x208,"square_button_top_left",0,0,0,"square_button_top_middle",0,0,0,
                 "square_button_middle_left",0,0,0,0);
  }
  else {
    FUN_00f0ff74(param_1 + 0x208,"gradient_button_top_left",0,0,0,"gradient_button_top_middle",0,0,0
                 ,"gradient_button_top_right",0,0,0,"gradient_button_middle_left",0,0,0,0,0,0,0,
                 "gradient_button_middle_right",0,0,0,"gradient_button_bottom_left",0,0,0,
                 "gradient_button_bottom_middle",0,0,0,"gradient_button_bottom_right",0,0,0);
  }
  return;
}




void FUN_00b12ff0(long param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_2;
  if ((*(float *)(param_1 + 0x50) != fVar1) || (*(float *)(param_1 + 0x54) != param_2[1])) {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)param_2;
    FUN_0091ada4(param_1);
    fVar1 = *param_2;
  }
  if ((*(float *)(param_1 + 0x108) != fVar1) || (*(float *)(param_1 + 0x10c) != param_2[1])) {
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)param_2;
    FUN_0091ada4(param_1 + 0xb8);
    fVar1 = *param_2;
  }
  if ((*(float *)(param_1 + 600) != fVar1) || (*(float *)(param_1 + 0x25c) != param_2[1])) {
    *(undefined8 *)(param_1 + 600) = *(undefined8 *)param_2;
    FUN_0091ada4(param_1 + 0x208);
    fVar1 = *param_2;
  }
  if ((*(float *)(param_1 + 0x3a8) == fVar1) && (*(float *)(param_1 + 0x3ac) == param_2[1])) {
    return;
  }
  *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)param_2;
  FUN_0091ada4(param_1 + 0x358);
  return;
}

