// functions/00a61 — 16 functions
#include "libGameKindred.h"




void FUN_00a61138(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(1.0 - *(float *)(param_5 + 0x638),0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_00f0a7e0(param_3,"icon_item_empty");
  FUN_00a20e44(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,uVar1,
               param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_00a611e4(long param_1)

{
  long lVar1;
  
  FUN_00f13f08(0x43200000,0x43200000);
  lVar1 = param_1 + 0xc0;
  FUN_00f13f08(0x43200000,0x43200000,lVar1);
  if ((*(float *)(param_1 + 0x110) != (float)DAT_03218f08) ||
     (*(float *)(param_1 + 0x114) != DAT_03218f08._4_4_)) {
    *(ulong *)(param_1 + 0x110) = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(lVar1);
  }
  FUN_00f07a18(0,0,lVar1,8);
  if ((*(float *)(param_1 + 0x1c0) != 1.14) || (*(float *)(param_1 + 0x1c4) != 1.14)) {
    *(undefined8 *)(param_1 + 0x1c0) = 0x3f91eb853f91eb85;
    FUN_0091ada4(param_1 + 0x178);
  }
  if ((*(float *)(param_1 + 0x2b0) != 1.14) || (*(float *)(param_1 + 0x2b4) != 1.14)) {
    *(undefined8 *)(param_1 + 0x2b0) = 0x3f91eb853f91eb85;
    FUN_0091ada4(param_1 + 0x268);
  }
  if ((*(float *)(param_1 + 0x3a0) != 1.4917021) || (*(float *)(param_1 + 0x3a4) != 1.4917021)) {
    *(undefined8 *)(param_1 + 0x3a0) = 0x3fbef0183fbef018;
    FUN_0091ada4(param_1 + 0x358);
  }
  if ((*(float *)(param_1 + 0x580) != 1.14) || (*(float *)(param_1 + 0x584) != 1.14)) {
    *(undefined8 *)(param_1 + 0x580) = 0x3f91eb853f91eb85;
    FUN_0091ada4(param_1 + 0x538);
  }
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) & 0xffffffbf;
  FUN_00f07940(0,0,param_1 + 0x178,8,lVar1,8);
  FUN_00f07940(0,0,param_1 + 0x268,8,lVar1,8);
  FUN_00f07940(0,0,param_1 + 0x358,8,lVar1,8);
  FUN_00f07940(0,0,param_1 + 0x538,8,lVar1,8);
  if ((*(float *)(param_1 + 0x490) != 2.28) || (*(float *)(param_1 + 0x494) != 2.28)) {
    *(undefined8 *)(param_1 + 0x490) = 0x4011eb854011eb85;
    FUN_0091ada4(param_1 + 0x448);
  }
  FUN_00f07940(0x42600000,0x424ccccc,param_1 + 0x448,8,lVar1,8);
  return;
}




void FUN_00a61444(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 local_40 [2];
  long local_38;
  
  puVar7 = local_40;
  lVar6 = tpidr_el0;
  local_38 = *(long *)(lVar6 + 0x28);
  lVar1 = param_1 + 0x358;
  if (*(int *)(param_1 + 0xb8) == 1) {
    puVar7 = &DAT_01bee7fa;
  }
  else {
    local_40[0] = 0xffa0a0a0;
  }
  FUN_00f0e670(lVar1,puVar7,2);
  cVar4 = *(char *)(param_1 + 0x648);
  uVar2 = *(uint *)(param_1 + 0x1fc);
  uVar8 = 0xff;
  if (cVar4 != '\0') {
    uVar8 = 0xb2;
  }
  if ((uVar2 >> 7 & 0xff) != uVar8) {
    *(uint *)(param_1 + 0x1fc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | uVar8 << 7;
    FUN_0091ada4(param_1 + 0x178);
    cVar4 = *(char *)(param_1 + 0x648);
  }
  uVar8 = 0;
  if (cVar4 != '\0') {
    uVar8 = 0x4c;
  }
  if ((*(uint *)(param_1 + 0x2ec) >> 7 & 0xff) != uVar8) {
    *(uint *)(param_1 + 0x2ec) = *(uint *)(param_1 + 0x2ec) & 0xffff807f | uVar8 << 7;
    FUN_0091ada4(param_1 + 0x268);
  }
  iVar3 = *(int *)(param_1 + 0xb8);
  if (iVar3 == 2) {
LAB_00a61520:
    FUN_00f0e578(lVar1,"hud_store_item_node_regular");
    if ((*(float *)(param_1 + 0x3a0) != 1.4917021) || (*(float *)(param_1 + 0x3a4) != 1.4917021)) {
      uVar5 = 0x3fbef018;
LAB_00a61594:
      *(ulong *)(param_1 + 0x3a0) = CONCAT44(uVar5,uVar5);
      FUN_0091ada4(lVar1);
    }
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 != 0) goto LAB_00a615c0;
      goto LAB_00a61520;
    }
    FUN_00f0e578(lVar1,"hud_store_item_node_highlighted");
    if ((*(float *)(param_1 + 0x3a0) != 1.14) || (*(float *)(param_1 + 0x3a4) != 1.14)) {
      uVar5 = 0x3f91eb85;
      goto LAB_00a61594;
    }
  }
  FUN_00f07940(0,0,lVar1,8,param_1 + 0xc0,8);
LAB_00a615c0:
  uVar8 = *(uint *)(param_1 + 0x4cc);
  if (*(char *)(param_1 + 0x648) == '\0') {
    *(uint *)(param_1 + 0x4cc) = uVar8 & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x4cc) = uVar8 | 4;
    if ((~uVar8 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x4cc) = uVar8 | 0x7f84;
      FUN_0091ada4(param_1 + 0x448);
    }
    FUN_00f0e578(param_1 + 0x448,"hud_store_item_node_owned");
  }
  if (*(long *)(lVar6 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a6163c(long param_1,long param_2,undefined4 param_3,int param_4)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_b8 [64];
  undefined1 auStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f0e578(param_1 + 0x178,*(undefined8 *)(param_2 + 8));
  *(undefined4 *)(param_1 + 0x63c) = param_3;
  FUN_00e6a8a8(auStack_78,"hud_store_recommended_item_ref_num_%d_icon",param_4 + 1);
  FUN_00e6a8a8(auStack_b8,"hud_store_recommended_item_ref_num_%d",param_4 + 1);
  uVar2 = FUN_00e6a474(auStack_78);
  uVar3 = FUN_0091ed5c(auStack_78,uVar2,0x1234);
  *(uint *)(param_1 + 0x1fc) =
       *(uint *)(param_1 + 0x1fc) & 0x80000000 |
       *(uint *)(param_1 + 0x1fc) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  uVar2 = FUN_00e6a474(auStack_b8);
  uVar3 = FUN_0091ed5c(auStack_b8,uVar2,0x1234);
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0x80000000 |
       *(uint *)(param_1 + 0x84) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  FUN_00a611e4(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a6171c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x648) = param_2 & 1;
  FUN_00a61444();
  return;
}




void FUN_00a61728(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x640) = param_2;
  *(undefined4 *)(param_1 + 0x644) = param_3;
  return;
}




void FUN_00a61734(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb8) = param_2;
  FUN_00a61444();
  return;
}




void FUN_00a6173c(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = 0.0;
  *(uint *)(param_1 + 0x5bc) =
       *(uint *)(param_1 + 0x5bc) & 0xfffffffb | ((uint)*(byte *)(param_1 + 0x648) << 2 ^ 4) & 0xfc;
  if (*(byte *)(param_1 + 0x648) == 0) {
    FUN_00cedce4();
    lVar1 = FUN_00d9e390();
    if (lVar1 == 0) {
      return;
    }
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x640));
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x644));
    fVar2 = (float)NEON_fminnm((fVar2 - *(float *)(*(long *)(lVar1 + 0x40) + 800)) / fVar3,
                               0x3f800000);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
  }
  *(float *)(param_1 + 0x638) = fVar2;
  return;
}




void FUN_00a617c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cc3b8;
  param_1[0x157] = &PTR_FUN_028266f0;
  param_1[0x16e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x171);
  FUN_00f13d08(param_1 + 0x157);
  param_1[0x139] = &PTR_FUN_028266f0;
  param_1[0x150] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x153);
  FUN_00f13d08(param_1 + 0x139);
  FUN_00f13d08(param_1 + 0x122);
  if ((void *)param_1[0x121] != (void *)0x0) {
    operator_delete__((void *)param_1[0x121]);
    param_1[0x121] = 0;
    param_1[0x120] = 0;
  }
  FUN_00f0d3a4(param_1 + 0xfa);
  FUN_00f0d3a4(param_1 + 0xd4);
  param_1[0xa9] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0xc0);
  FUN_00f13d08(param_1 + 0xa9);
  param_1[0x8b] = &PTR_FUN_028266f0;
  param_1[0xa2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa5);
  FUN_00f13d08(param_1 + 0x8b);
  param_1[0x6d] = &PTR_FUN_028266f0;
  param_1[0x84] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x87);
  FUN_00f13d08(param_1 + 0x6d);
  param_1[0x4f] = &PTR_FUN_028266f0;
  param_1[0x66] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x69);
  FUN_00f13d08(param_1 + 0x4f);
  param_1[0x31] = &PTR_FUN_028266f0;
  param_1[0x48] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4b);
  FUN_00f13d08(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a61908(void *param_1)

{
  FUN_00a617c0();
  operator_delete(param_1);
  return;
}




void FUN_00a6192c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cc500;
  param_1[0xa7] = &PTR_FUN_028266f0;
  param_1[0xbe] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc1);
  FUN_00f13d08(param_1 + 0xa7);
  param_1[0x89] = &PTR_FUN_028266f0;
  param_1[0xa0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa3);
  FUN_00f13d08(param_1 + 0x89);
  param_1[0x6b] = &PTR_FUN_028266f0;
  param_1[0x82] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x85);
  FUN_00f13d08(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_028266f0;
  param_1[100] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a61a08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cc500;
  param_1[0xa7] = &PTR_FUN_028266f0;
  param_1[0xbe] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc1);
  FUN_00f13d08(param_1 + 0xa7);
  param_1[0x89] = &PTR_FUN_028266f0;
  param_1[0xa0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa3);
  FUN_00f13d08(param_1 + 0x89);
  param_1[0x6b] = &PTR_FUN_028266f0;
  param_1[0x82] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x85);
  FUN_00f13d08(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_028266f0;
  param_1[100] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void thunk_FUN_00a6173c(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = 0.0;
  *(uint *)(param_1 + 0x5bc) =
       *(uint *)(param_1 + 0x5bc) & 0xfffffffb | ((uint)*(byte *)(param_1 + 0x648) << 2 ^ 4) & 0xfc;
  if (*(byte *)(param_1 + 0x648) == 0) {
    FUN_00cedce4();
    lVar1 = FUN_00d9e390();
    if (lVar1 == 0) {
      return;
    }
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x640));
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x644));
    fVar2 = (float)NEON_fminnm((fVar2 - *(float *)(*(long *)(lVar1 + 0x40) + 800)) / fVar3,
                               0x3f800000);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
  }
  *(float *)(param_1 + 0x638) = fVar2;
  return;
}




void FUN_00a61af0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 local_80;
  long local_78;
  
  lVar9 = tpidr_el0;
  local_78 = *(long *)(lVar9 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027cbe58;
  FUN_00b89cd8(plVar1);
  plVar2 = param_1 + 0x31;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x57;
  FUN_00f11234(plVar3);
  plVar4 = param_1 + 0x8b;
  FUN_00ecfd6c(plVar4,0);
  plVar5 = param_1 + 0x132;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0x158;
  FUN_00f0d160(plVar6);
  plVar7 = param_1 + 0x17e;
  FUN_00f1306c(plVar7);
  lVar10 = 0;
  do {
    FUN_00f0d160((long)param_1 + lVar10 + 0xd48);
    lVar10 = lVar10 + 0x130;
  } while (lVar10 != 0x5f0);
  lVar10 = 0;
  do {
    FUN_00f0d160((long)param_1 + lVar10 + 0x1338);
    lVar10 = lVar10 + 0x130;
  } while (lVar10 != 0x5f0);
  lVar10 = 0;
  do {
    FUN_00e70510((long)param_1 + lVar10 + 0x1928);
    lVar10 = lVar10 + 0x10;
  } while (lVar10 != 0x50);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00ed026c(plVar4,plVar5,1);
  FUN_00ed026c(plVar4,plVar7,1);
  FUN_00ed026c(plVar4,plVar6,1);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9cd0);
  FUN_00f0d75c(plVar2,&DAT_03210450);
  uVar8 = *(uint *)((long)param_1 + 0x20c);
  if ((uVar8 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x20c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x7280;
    FUN_0091ada4(plVar2);
  }
  FUN_00f112f0(plVar3,1);
  *(uint *)((long)param_1 + 0x33c) = *(uint *)((long)param_1 + 0x33c) | 0x10;
  FUN_00ed0680(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440,
               PTR_s_scrollbar_button_fill_top_02be3518,PTR_s_scrollbar_button_fill_middle_02be3520,
               PTR_s_scrollbar_button_fill_bottom_02be3528);
  FUN_00ed0578(0x42000000,0,plVar4);
  uVar8 = *(uint *)((long)param_1 + 0xa14);
  if ((uVar8 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0xa14) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x7280;
    FUN_0091ada4(plVar5);
  }
  local_80 = CONCAT44(local_80._4_4_,0xffffe682);
  FUN_00f0d7fc(plVar6,&local_80);
  uVar8 = *(uint *)((long)param_1 + 0xb44);
  if ((uVar8 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0xb44) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x7280;
    FUN_0091ada4(plVar6);
  }
  param_1 = param_1 + 0x1a9;
  lVar10 = 5;
  do {
    plVar1 = param_1 + 0xbe;
    FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50);
    uVar8 = *(uint *)((long)param_1 + 0x674);
    if ((uVar8 & 0x7f80) != 0x6600) {
      *(uint *)((long)param_1 + 0x674) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x6600;
      FUN_0091ada4(plVar1);
    }
    local_80 = 0x3f80000000000000;
    (**(code **)(param_1[0xbe] + 0x28))(plVar1,&local_80);
    FUN_00f0d378(param_1,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
    uVar8 = *(uint *)((long)param_1 + 0x84);
    if ((uVar8 & 0x7f80) != 0x4c80) {
      *(uint *)((long)param_1 + 0x84) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
      FUN_0091ada4(param_1);
    }
    FUN_00f133a4(plVar7,param_1,1);
    FUN_00f133a4(plVar7,plVar1,1);
    lVar10 = lVar10 + -1;
    param_1 = param_1 + 0x26;
  } while (lVar10 != 0);
  if (*(long *)(lVar9 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a61e88(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  FUN_00b89d24(param_1 + 0xc0,param_2 & 1,param_3,param_4 & 1);
  return;
}




void FUN_00a61e98(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  
  uVar7 = (**(code **)(*param_3 + 0x48))();
  plVar1 = param_3 + 0x31;
  if ((*(float *)(param_3 + 0x3a) != 1.25) || (*(float *)((long)param_3 + 0x1d4) != 1.25)) {
    lVar8 = NEON_fmov(0x3fa00000,4);
    param_3[0x3a] = lVar8;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0dad0((float)uVar7 / 1.25,plVar1,1);
  FUN_00f07b18(0x41000000,plVar1,0,param_3,0);
  plVar2 = param_3 + 0x57;
  FUN_00f07b18(0x42000000,plVar2,0,plVar1,2);
  FUN_00f080a0(plVar2,0,param_3,3);
  FUN_00f13f08(uVar7,plVar2);
  plVar1 = param_3 + 0x132;
  FUN_00f0dad0(uVar7,plVar1,1);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50);
  lVar8 = 0;
  fVar9 = 0.0;
  do {
    if ((*(float *)((long)param_3 + lVar8 + 0x1378) != 0.0) ||
       (*(float *)((long)param_3 + lVar8 + 0x137c) != fVar9)) {
      *(undefined4 *)((long)param_3 + lVar8 + 0x1378) = 0;
      *(float *)((long)param_3 + lVar8 + 0x137c) = fVar9;
      FUN_0091ada4((long)param_3 + lVar8 + 0x1338);
    }
    lVar3 = (long)param_3 + lVar8 + 0xd48;
    if ((*(float *)((long)param_3 + lVar8 + 0xd88) != 0.0) ||
       (*(float *)((long)param_3 + lVar8 + 0xd8c) != fVar9)) {
      *(undefined4 *)((long)param_3 + lVar8 + 0xd88) = 0;
      *(float *)((long)param_3 + lVar8 + 0xd8c) = fVar9;
      FUN_0091ada4(lVar3);
    }
    FUN_00f0dad0(uVar7,lVar3,1);
    uVar5 = FUN_00f08be8((long)param_3 + lVar8 + 0xe18);
    uVar6 = FUN_00e70b88(uVar5,&DAT_03210450);
    if ((uVar6 & 1) != 0) {
      (**(code **)(*(long *)((long)param_3 + lVar8 + 0xd48) + 0x48))(lVar3);
      fVar9 = fVar9 + param_2 * *(float *)((long)param_3 + lVar8 + 0xd94) + 90.0;
    }
    lVar8 = lVar8 + 0x130;
  } while (lVar8 != 0x5f0);
  plVar4 = param_3 + 0x17e;
  FUN_00f13238(plVar4);
  FUN_00f07b18(0x42bc0000,plVar4,0,plVar1,2);
  plVar1 = param_3 + 0x158;
  FUN_00f0dad0(uVar7,plVar1,1);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50);
  FUN_00f07b18(0x41c00000,plVar1,0,plVar4,2);
  plVar1 = param_3 + 0x8b;
  FUN_00ed0418(plVar1,1);
  FUN_00ed0464(plVar1);
  fVar9 = param_2;
  FUN_00f13e54(plVar2);
  FUN_00ed04d8(plVar1,0,fVar9 < param_2);
  FUN_00ed0650(0x3ecccccd,0x3f800000,plVar1);
  FUN_00ed06a4(plVar1,fVar9 < param_2);
  if (fVar9 < param_2) {
    FUN_00ed1918(plVar1);
  }
  if ((*(float *)(param_3 + 0x93) == 0.0) && (*(float *)((long)param_3 + 0x49c) == 0.0)) {
    return;
  }
  param_3[0x93] = 0;
  FUN_0091ada4(plVar1);
  return;
}

