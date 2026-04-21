// functions/00a74 — 15 functions
#include "libGameKindred.h"




void FUN_00a74124(float param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  char *pcVar4;
  float fVar5;
  byte local_78 [16];
  void *local_68;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = param_2 + 0x628;
  FUN_00e70e18(lVar1,&DAT_01bb6d43,param_3);
  FUN_00f0d75c(param_2 + 0x1a8,lVar1);
  fVar5 = 1e+06;
  local_60[0] = 0;
  local_60[1] = 0;
  local_50 = (void *)0x0;
  if (param_1 <= 1e+06) {
    fVar5 = 1000.0;
    if (param_1 <= 1000.0) goto LAB_00a741dc;
    pcVar4 = "k";
  }
  else {
    pcVar4 = "M";
  }
  FUN_008fa54c(local_78,pcVar4);
  FUN_008fce60(local_60,local_78);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  param_1 = param_1 / fVar5;
LAB_00a741dc:
  pvVar2 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar2 = local_50;
  }
  FUN_00e70e18((double)param_1,lVar1,"%.1f%s",pvVar2);
  FUN_00f0d75c(param_2 + 0x3c8,lVar1);
  FUN_00e70e18(lVar1,&DAT_01bb6d43,param_4);
  FUN_00f0d75c(param_2 + 0x4f8,lVar1);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a74274(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar1 = param_1 + 0x4f8;
  bVar5 = *(float *)(param_1 + 0x538) != 0.0;
  if (*(char *)(param_1 + 0x638) == '\0') {
    if ((bVar5) || (*(float *)(param_1 + 0x53c) != 0.0)) {
      *(undefined8 *)(param_1 + 0x538) = 0;
      FUN_0091ada4(lVar1);
    }
    local_70 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x4f8) + 0x28))(lVar1,&local_70);
    lVar2 = param_1 + 0x2d8;
    fVar6 = (float)FUN_00f0d4e0(lVar1);
    if ((*(float *)(param_1 + 0x318) != fVar6 + 20.0) || (*(float *)(param_1 + 0x31c) != 0.0)) {
      *(float *)(param_1 + 0x318) = fVar6 + 20.0;
      *(undefined4 *)(param_1 + 0x31c) = 0;
      FUN_0091ada4(lVar2);
    }
    local_70 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x2d8) + 0x28))(lVar2,&local_70);
    fVar7 = *(float *)(param_1 + 0x318);
    lVar3 = param_1 + 0x3c8;
    fVar6 = (float)FUN_00f0eac0(lVar2);
    fVar6 = fVar7 + fVar6 + 4.0;
    if ((*(float *)(param_1 + 0x408) != fVar6) || (*(float *)(param_1 + 0x40c) != -3.0)) {
      *(float *)(param_1 + 0x408) = fVar6;
      *(undefined4 *)(param_1 + 0x40c) = 0xc0400000;
      FUN_0091ada4(lVar3);
    }
    local_70 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x3c8) + 0x28))(lVar3,&local_70);
    fVar7 = *(float *)(param_1 + 0x408);
    lVar2 = param_1 + 0xb8;
    fVar6 = (float)FUN_00f0d4e0(lVar3);
    fVar6 = fVar7 + fVar6 + 20.0 + -3.0;
    if ((*(float *)(param_1 + 0xf8) != fVar6) || (*(float *)(param_1 + 0xfc) != 0.0)) {
      *(float *)(param_1 + 0xf8) = fVar6;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      FUN_0091ada4(lVar2);
    }
    local_70 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0xb8) + 0x28))(lVar2,&local_70);
    fVar7 = *(float *)(param_1 + 0xf8);
    lVar3 = param_1 + 0x1a8;
    fVar6 = (float)FUN_00f0eac0(lVar2);
    fVar6 = fVar7 + fVar6 + 4.0;
    if ((*(float *)(param_1 + 0x1e8) != fVar6) || (*(float *)(param_1 + 0x1ec) != -3.0)) {
      *(float *)(param_1 + 0x1e8) = fVar6;
      *(undefined4 *)(param_1 + 0x1ec) = 0xc0400000;
      FUN_0091ada4(lVar3);
    }
    local_70 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x1a8) + 0x28))(lVar3,&local_70);
    fVar7 = *(float *)(param_1 + 0x1e8);
    fVar6 = (float)FUN_00f0d4e0(lVar3);
    fVar7 = fVar7 + fVar6;
  }
  else {
    if ((bVar5) || (*(float *)(param_1 + 0x53c) != 0.0)) {
      *(undefined8 *)(param_1 + 0x538) = 0;
      FUN_0091ada4(lVar1);
    }
    local_70 = 0x3f0000003f800000;
    (**(code **)(*(long *)(param_1 + 0x4f8) + 0x28))(lVar1,&local_70);
    lVar2 = param_1 + 0x3c8;
    fVar6 = (float)FUN_00f0d4e0(lVar1);
    fVar7 = (float)FUN_00f0d4e0(lVar2);
    fVar6 = ((-20.0 - fVar6) - fVar7) + 3.0;
    if ((*(float *)(param_1 + 0x408) != fVar6) || (*(float *)(param_1 + 0x40c) != -3.0)) {
      *(float *)(param_1 + 0x408) = fVar6;
      *(undefined4 *)(param_1 + 0x40c) = 0xc0400000;
      FUN_0091ada4(lVar2);
    }
    local_70 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x3c8) + 0x28))(lVar2,&local_70);
    fVar7 = *(float *)(param_1 + 0x408);
    lVar2 = param_1 + 0x2d8;
    fVar6 = (float)FUN_00f0eac0(lVar2);
    fVar6 = (fVar7 - fVar6) + -4.0;
    if ((*(float *)(param_1 + 0x318) != fVar6) || (*(float *)(param_1 + 0x31c) != 0.0)) {
      *(float *)(param_1 + 0x318) = fVar6;
      *(undefined4 *)(param_1 + 0x31c) = 0;
      FUN_0091ada4(lVar2);
    }
    local_70 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x2d8) + 0x28))(lVar2,&local_70);
    fVar6 = *(float *)(param_1 + 0x318);
    lVar2 = param_1 + 0x1a8;
    fVar7 = (float)FUN_00f0d4e0(lVar2);
    fVar7 = (fVar6 + -20.0) - fVar7;
    if ((*(float *)(param_1 + 0x1e8) != fVar7) || (*(float *)(param_1 + 0x1ec) != -3.0)) {
      *(float *)(param_1 + 0x1e8) = fVar7;
      *(undefined4 *)(param_1 + 0x1ec) = 0xc0400000;
      FUN_0091ada4(lVar2);
    }
    local_70 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x1a8) + 0x28))(lVar2,&local_70);
    fVar7 = *(float *)(param_1 + 0x1e8);
    lVar2 = param_1 + 0xb8;
    fVar6 = (float)FUN_00f0eac0(lVar2);
    fVar6 = (fVar7 - fVar6) + -4.0;
    if ((*(float *)(param_1 + 0xf8) != fVar6) || (*(float *)(param_1 + 0xfc) != 0.0)) {
      *(float *)(param_1 + 0xf8) = fVar6;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      FUN_0091ada4(lVar2);
    }
    local_70 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0xb8) + 0x28))(lVar2,&local_70);
    fVar7 = -*(float *)(param_1 + 0xf8);
  }
  FUN_00f0d4e0(lVar1);
  FUN_00f13f08(fVar7,param_1);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7469c(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x13c) =
       *(uint *)(param_1 + 0x13c) & 0xfffffff0 | *(uint *)(param_1 + 0x13c) & 7 | (param_2 & 1) << 3
  ;
  return;
}




void FUN_00a746b0(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  FUN_00b89d24(param_1 + 0xb8,param_2 & 1,param_3,param_4 & 1);
  return;
}




void FUN_00a746c0(undefined1 param_1 [16],float param_2,long *param_3,byte param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  float fVar8;
  undefined8 local_78;
  undefined4 local_6c;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_3 + 0x17;
  *param_3 = (long)&PTR_FUN_027c37f0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_3 + 0x35;
  FUN_00f0d160(plVar2);
  plVar3 = param_3 + 0x5b;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_3 + 0x79;
  FUN_00f0d160(plVar4);
  plVar5 = param_3 + 0x9f;
  FUN_00f0d160(plVar5);
  FUN_00e70510(param_3 + 0xc5);
  *(byte *)(param_3 + 199) = param_4 & 1;
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar3,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar4,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar5,1);
  puVar6 = &DAT_03132f40;
  if ((char)param_3[199] != '\0') {
    puVar6 = &DAT_03132f3c;
  }
  local_6c = *puVar6;
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_pingicon_action_turret");
  FUN_00f0e670(plVar1,&local_6c,2);
  FUN_00f0e700(plVar1);
  fVar8 = 28.0 / param_2;
  if ((*(float *)(param_3 + 0x20) != fVar8) ||
     (param_2 = *(float *)((long)param_3 + 0x104), param_2 != fVar8)) {
    *(float *)(param_3 + 0x20) = fVar8;
    *(float *)((long)param_3 + 0x104) = fVar8;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Regular_30_02be9c38,&local_6c);
  FUN_00f0da30(plVar2,1);
  FUN_00f0da80(plVar2,&DAT_01bee7f6);
  local_78 = 0x4000000040000000;
  FUN_00f0da8c(plVar4,&local_78);
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_store_gold_icon_large");
  FUN_00f0e670(plVar3,&local_6c,2);
  FUN_00f0e700(plVar3);
  param_2 = 28.0 / param_2;
  if ((*(float *)(param_3 + 100) != param_2) || (*(float *)((long)param_3 + 0x324) != param_2)) {
    *(float *)(param_3 + 100) = param_2;
    *(float *)((long)param_3 + 0x324) = param_2;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Regular_30_02be9c38,&local_6c);
  FUN_00f0da30(plVar4,1);
  FUN_00f0da80(plVar4,&DAT_01bee7f6);
  local_78 = 0x4000000040000000;
  FUN_00f0da8c(plVar4,&local_78);
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&local_6c);
  FUN_00f0da30(plVar5,1);
  FUN_00f0da80(plVar5,&DAT_01bee7f6);
  local_78 = 0x4000000040000000;
  FUN_00f0da8c(plVar5,&local_78);
  FUN_00a74274(param_3);
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a749b0(void *param_1)

{
  FUN_009dd584();
  operator_delete(param_1);
  return;
}




void FUN_00a749d4(long *param_1,undefined1 param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  
  FUN_00f0cbb4();
  *param_1 = (long)&PTR_FUN_027cd908;
  FUN_00b89cd8(param_1 + 0x48);
  FUN_00f1306c(param_1 + 0x61);
  plVar1 = param_1 + 0x8c;
  FUN_00f0e4a8(plVar1);
  param_1[0xab] = 0;
  param_1[0xaa] = 0;
  FUN_00e70510(param_1 + 0xac);
  *(undefined1 *)(param_1 + 0xae) = param_2;
  *(byte *)((long)param_1 + 0x571) = *(byte *)((long)param_1 + 0x571) | 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x61,1);
  FUN_00f0d07c(param_1,1);
  if (((*(byte *)((long)param_1 + 0x571) & 1) != 0) && (param_1[0x90] != 0)) {
    FUN_00f01a4c(plVar1,1);
  }
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440,"vert_glass_shadow");
  *(byte *)(param_1 + 0xa7) = *(byte *)(param_1 + 0xa7) | 2;
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  uVar2 = *(uint *)((long)param_1 + 0x4e4);
  if ((uVar2 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x4e4) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar1);
  }
  if ((char)param_1[0xae] == '\x01') {
    if ((*(float *)(param_1 + 0x96) == 0.0) && (*(float *)((long)param_1 + 0x4b4) == 1.0))
    goto LAB_00a74b64;
    lVar3 = 0x3f80000000000000;
  }
  else {
    if (((char)param_1[0xae] != '\x02') ||
       ((*(float *)(param_1 + 0x96) == 1.0 && (*(float *)((long)param_1 + 0x4b4) == 1.0))))
    goto LAB_00a74b64;
    lVar3 = NEON_fmov(0x3f800000,4);
  }
  param_1[0x96] = lVar3;
  FUN_0091ada4(plVar1);
LAB_00a74b64:
  *(uint *)((long)param_1 + 0x4e4) = *(uint *)((long)param_1 + 0x4e4) | 0x10;
  return;
}




void FUN_00a74b80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cd908;
  FUN_00a74c4c();
  if ((void *)param_1[0xad] != (void *)0x0) {
    operator_delete__((void *)param_1[0xad]);
    param_1[0xad] = 0;
    param_1[0xac] = 0;
  }
  if ((void *)param_1[0xab] != (void *)0x0) {
    operator_delete__((void *)param_1[0xab]);
    param_1[0xab] = 0;
    param_1[0xaa] = 0;
  }
  param_1[0x8c] = &PTR_FUN_028266f0;
  param_1[0xa3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa6);
  FUN_00f13d08(param_1 + 0x8c);
  param_1[0x61] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x78);
  FUN_00f13d08(param_1 + 0x61);
  FUN_00f13d08(param_1 + 0x48);
  *param_1 = &PTR_FUN_028263c0;
  FUN_00f01868(param_1 + 0x34);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a74c4c(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x550);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x558) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x558) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x550);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x558) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0x558) != 0) {
    *(undefined4 *)(param_1 + 0x550) = 0;
  }
  return;
}




void FUN_00a74ccc(void *param_1)

{
  FUN_00a74b80();
  operator_delete(param_1);
  return;
}




void FUN_00a74cf0(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x550) != 0) {
    uVar1 = 0;
    do {
      FUN_00a77dd0(*(undefined8 *)(*(long *)(param_1 + 0x558) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x550));
  }
  return;
}




void FUN_00a74d34(float param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  
  uVar2 = (ulong)*(uint *)(param_2 + 0x550);
  if (*(uint *)(param_2 + 0x550) != 0) {
    plVar3 = *(long **)(param_2 + 0x558);
    plVar4 = plVar3;
    do {
      lVar1 = *plVar4;
      if ((lVar1 != 0) &&
         ((*(float *)(lVar1 + 0x48) != param_1 || (*(float *)(lVar1 + 0x4c) != param_1)))) {
        *(float *)(lVar1 + 0x48) = param_1;
        *(float *)(lVar1 + 0x4c) = param_1;
        FUN_0091ada4();
        uVar2 = (ulong)*(uint *)(param_2 + 0x550);
        plVar3 = *(long **)(param_2 + 0x558);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3 + uVar2);
  }
  return;
}




void FUN_00a74dac(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar10 = (float)(**(code **)(*param_3 + 0x48))();
  uVar5 = (ulong)*(uint *)(param_3 + 0xaa);
  if (*(uint *)(param_3 + 0xaa) != 0) {
    plVar6 = (long *)param_3[0xab];
    param_2 = 0x40c00000;
    fVar10 = (fVar10 * 0.05) / 6.0;
    plVar9 = plVar6;
    do {
      lVar7 = *plVar9;
      if (lVar7 != 0) {
        (**(code **)(*param_3 + 0x48))(param_3);
        FUN_00f13f08(0x43d98000,lVar7);
        if (plVar9 != (long *)param_3[0xab]) {
          cVar2 = (char)param_3[0xae];
          lVar7 = plVar9[-1];
          if (cVar2 == '\x01') {
            lVar8 = *plVar9;
            FUN_00f07b18(fVar10,lVar8,3,lVar7,1);
            FUN_00f07b18(0,lVar8,2,lVar7,2);
            cVar2 = (char)param_3[0xae];
          }
          if (cVar2 == '\x02') {
            lVar8 = *plVar9;
            FUN_00f07b18(-fVar10,lVar8,1,lVar7,3);
            FUN_00f07b18(0,lVar8,2,lVar7,2);
          }
        }
        FUN_00a762c0(*plVar9);
        uVar5 = (ulong)*(uint *)(param_3 + 0xaa);
        plVar6 = (long *)param_3[0xab];
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar6 + uVar5);
  }
  plVar9 = param_3 + 0x61;
  FUN_00f1340c(plVar9,0);
  FUN_00f13238(plVar9);
  if ((*(byte *)((long)param_3 + 0x571) & 1) == 0) {
    uVar3 = *(uint *)((long)param_3 + 0x4e4);
    if ((int)param_3[0xaa] != 0) {
      *(uint *)((long)param_3 + 0x4e4) = uVar3 | 4;
      local_60 = FUN_00f13e54(plVar9);
      uStack_5c = param_2;
      FUN_00f13f18(param_3 + 0x8c,&local_60);
      FUN_00f07940(0,0,param_3 + 0x8c,8,plVar9,8);
      uVar3 = *(uint *)((long)param_3 + 0x4e4);
      goto LAB_00a74f6c;
    }
  }
  else {
    uVar3 = *(uint *)((long)param_3 + 0x4e4);
  }
  uVar3 = uVar3 & 0xfffffffb;
  *(uint *)((long)param_3 + 0x4e4) = uVar3;
LAB_00a74f6c:
  *(uint *)((long)param_3 + 0x4e4) = uVar3 & 0xffffffbf;
  FUN_00f0d0a8(param_3,0);
  FUN_00f0cd00(param_3);
  uVar4 = 2;
  if ((char)param_3[0xae] == '\x01') {
    uVar4 = 3;
  }
  FUN_00f07940(0,0,plVar9,uVar4,param_3,uVar4);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a74fe4(long *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  void *pvVar3;
  void *local_80;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_2 != 0) && (cVar2 = FUN_00d55870(param_2), cVar2 == (char)param_1[0xae])) {
    pvVar3 = operator_new(0x11330);
    FUN_00a75290(pvVar3,param_2,*(byte *)((long)param_1 + 0x571) & 1);
    *(uint *)((long)pvVar3 + 0x84) = *(uint *)((long)pvVar3 + 0x84) | 0x14;
    local_50 = DAT_03210f58;
    local_58 = (ulong)*(uint *)(param_1 + 0xaa);
    local_78 = FUN_00a75120;
    local_68 = 0;
    uStack_60 = 0;
    local_80 = pvVar3;
    plStack_70 = param_1;
    FUN_009693a0((long)pvVar3 + 8,&local_78);
    local_58 = (ulong)*(uint *)(param_1 + 0xaa);
    local_50 = DAT_03210f84;
    local_78 = FUN_00a75120;
    local_68 = 0;
    uStack_60 = 0;
    plStack_70 = param_1;
    FUN_009693a0((long)pvVar3 + 8,&local_78);
    FUN_00a75128(param_1 + 0xaa,&local_80);
    FUN_00f133a4(param_1 + 0x61,local_80,1);
    (**(code **)(*param_1 + 0x150))(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a74c4c(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x550);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x558) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x558) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x550);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x558) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0x558) != 0) {
    *(undefined4 *)(param_1 + 0x550) = 0;
  }
  return;
}

