// functions/00a58 — 6 functions
#include "libGameKindred.h"




void FUN_00a5846c(long *param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  fVar4 = *(float *)(param_1 + 10);
  if ((*(float *)(param_1 + 0x3a) != fVar4) ||
     (*(float *)((long)param_1 + 0x1d4) != *(float *)((long)param_1 + 0x54))) {
    *(float *)(param_1 + 0x3a) = fVar4;
    *(float *)((long)param_1 + 0x1d4) = *(float *)((long)param_1 + 0x54);
    FUN_0091ada4(param_1 + 0x30);
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  plVar1 = param_1 + 0xff;
  fVar4 = fVar4 * 0.5;
  fVar3 = (float)FUN_00f0e700(plVar1);
  fVar3 = fVar3 * 0.5;
  fVar5 = fVar3 + 0.0;
  if (*(char *)((long)param_1 + 0xcc9) == '\0') {
    fVar7 = fVar3 + 155.0;
    if ((*(float *)(param_1 + 0x107) != fVar5) || (*(float *)((long)param_1 + 0x83c) != fVar4)) {
      *(float *)(param_1 + 0x107) = fVar5;
      *(float *)((long)param_1 + 0x83c) = fVar4;
      FUN_0091ada4(plVar1);
    }
    local_80 = 0x3f0000003f000000;
    fVar6 = fVar3 + 240.0;
    (**(code **)(param_1[0xff] + 0x28))(plVar1,&local_80);
    if ((*(float *)(param_1 + 0x125) != fVar7) || (*(float *)((long)param_1 + 0x92c) != fVar4)) {
      *(float *)(param_1 + 0x125) = fVar7;
      *(float *)((long)param_1 + 0x92c) = fVar4;
      FUN_0091ada4(param_1 + 0x11d);
    }
    local_80 = 0x3f0000003f000000;
    fVar8 = fVar3 + 325.0;
    (**(code **)(param_1[0x11d] + 0x28))(param_1 + 0x11d,&local_80);
    if ((*(float *)(param_1 + 0x143) != fVar6) || (*(float *)((long)param_1 + 0xa1c) != fVar4)) {
      *(float *)(param_1 + 0x143) = fVar6;
      *(float *)((long)param_1 + 0xa1c) = fVar4;
      FUN_0091ada4(param_1 + 0x13b);
    }
    local_80 = 0x3f0000003f000000;
    fVar3 = fVar3 + 420.0;
    (**(code **)(param_1[0x13b] + 0x28))(param_1 + 0x13b,&local_80);
    if ((*(float *)(param_1 + 0x161) != fVar8) || (*(float *)((long)param_1 + 0xb0c) != fVar4)) {
      *(float *)(param_1 + 0x161) = fVar8;
      *(float *)((long)param_1 + 0xb0c) = fVar4;
      FUN_0091ada4(param_1 + 0x159);
    }
    local_80 = 0x3f0000003f000000;
    (**(code **)(param_1[0x159] + 0x28))(param_1 + 0x159,&local_80);
    if ((*(float *)(param_1 + 0x17f) != fVar3) || (*(float *)((long)param_1 + 0xbfc) != fVar4)) {
      *(float *)(param_1 + 0x17f) = fVar3;
      *(float *)((long)param_1 + 0xbfc) = fVar4;
      FUN_0091ada4(param_1 + 0x177);
    }
    local_80 = 0x3f0000003f000000;
    (**(code **)(param_1[0x177] + 0x28))(param_1 + 0x177,&local_80);
    if ((*(float *)(param_1 + 0x49) != fVar5 + 18.0) || (*(float *)((long)param_1 + 0x24c) != fVar4)
       ) {
      *(float *)(param_1 + 0x49) = fVar5 + 18.0;
      *(float *)((long)param_1 + 0x24c) = fVar4;
      FUN_0091ada4(param_1 + 0x41);
    }
    local_80 = 0x3f00000000000000;
    (**(code **)(param_1[0x41] + 0x28))(param_1 + 0x41,&local_80);
    if ((*(float *)(param_1 + 0x6f) != fVar7 + 18.0) || (*(float *)((long)param_1 + 0x37c) != fVar4)
       ) {
      *(float *)(param_1 + 0x6f) = fVar7 + 18.0;
      *(float *)((long)param_1 + 0x37c) = fVar4;
      FUN_0091ada4(param_1 + 0x67);
    }
    local_80 = 0x3f00000000000000;
    (**(code **)(param_1[0x67] + 0x28))(param_1 + 0x67,&local_80);
    if ((*(float *)(param_1 + 0x95) != fVar6 + 18.0) || (*(float *)((long)param_1 + 0x4ac) != fVar4)
       ) {
      *(float *)(param_1 + 0x95) = fVar6 + 18.0;
      *(float *)((long)param_1 + 0x4ac) = fVar4;
      FUN_0091ada4(param_1 + 0x8d);
    }
    local_80 = 0x3f00000000000000;
    (**(code **)(param_1[0x8d] + 0x28))(param_1 + 0x8d,&local_80);
    if ((*(float *)(param_1 + 0xbb) != fVar8 + 18.0) || (*(float *)((long)param_1 + 0x5dc) != fVar4)
       ) {
      *(float *)(param_1 + 0xbb) = fVar8 + 18.0;
      *(float *)((long)param_1 + 0x5dc) = fVar4;
      FUN_0091ada4(param_1 + 0xb3);
    }
    local_80 = 0x3f00000000000000;
    (**(code **)(param_1[0xb3] + 0x28))(param_1 + 0xb3,&local_80);
    fVar5 = *(float *)(param_1 + 0xe1);
  }
  else {
    fVar7 = fVar3 + 136.0;
    if ((*(float *)(param_1 + 0x107) != fVar5) || (*(float *)((long)param_1 + 0x83c) != fVar4)) {
      *(float *)(param_1 + 0x107) = fVar5;
      *(float *)((long)param_1 + 0x83c) = fVar4;
      FUN_0091ada4(plVar1);
    }
    local_80 = 0x3f0000003f000000;
    fVar3 = fVar3 + 310.0;
    (**(code **)(param_1[0xff] + 0x28))(plVar1,&local_80);
    if ((*(float *)(param_1 + 0x125) != fVar7) || (*(float *)((long)param_1 + 0x92c) != fVar4)) {
      *(float *)(param_1 + 0x125) = fVar7;
      *(float *)((long)param_1 + 0x92c) = fVar4;
      FUN_0091ada4(param_1 + 0x11d);
    }
    local_80 = 0x3f0000003f000000;
    (**(code **)(param_1[0x11d] + 0x28))(param_1 + 0x11d,&local_80);
    if ((*(float *)(param_1 + 0x17f) != fVar3) || (*(float *)((long)param_1 + 0xbfc) != fVar4)) {
      *(float *)(param_1 + 0x17f) = fVar3;
      *(float *)((long)param_1 + 0xbfc) = fVar4;
      FUN_0091ada4(param_1 + 0x177);
    }
    local_80 = 0x3f0000003f000000;
    (**(code **)(param_1[0x177] + 0x28))(param_1 + 0x177,&local_80);
    if ((*(float *)(param_1 + 0x49) != fVar5 + 18.0) || (*(float *)((long)param_1 + 0x24c) != fVar4)
       ) {
      *(float *)(param_1 + 0x49) = fVar5 + 18.0;
      *(float *)((long)param_1 + 0x24c) = fVar4;
      FUN_0091ada4(param_1 + 0x41);
    }
    local_80 = 0x3f00000000000000;
    (**(code **)(param_1[0x41] + 0x28))(param_1 + 0x41,&local_80);
    if ((*(float *)(param_1 + 0x6f) != fVar7 + 18.0) || (*(float *)((long)param_1 + 0x37c) != fVar4)
       ) {
      *(float *)(param_1 + 0x6f) = fVar7 + 18.0;
      *(float *)((long)param_1 + 0x37c) = fVar4;
      FUN_0091ada4(param_1 + 0x67);
    }
    local_80 = 0x3f00000000000000;
    (**(code **)(param_1[0x67] + 0x28))(param_1 + 0x67,&local_80);
    fVar5 = *(float *)(param_1 + 0xe1);
  }
  plVar1 = param_1 + 0xd9;
  if ((fVar5 != fVar3 + 18.0) || (*(float *)((long)param_1 + 0x70c) != fVar4)) {
    *(float *)(param_1 + 0xe1) = fVar3 + 18.0;
    *(float *)((long)param_1 + 0x70c) = fVar4;
    FUN_0091ada4(plVar1);
  }
  local_80 = 0x3f00000000000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_80);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a589d8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long *local_78;
  code *pcStack_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  FUN_00f1306c();
  plVar1 = param_1 + 0x2b;
  *param_1 = (long)&PTR_FUN_027cba20;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x51;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x77;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x9d;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0xbb;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0xd9;
  FUN_00f0e4a8(plVar6);
  param_1[0xf7] = 0;
  *(undefined4 *)(param_1 + 0xf8) = DAT_03214ce8;
  FUN_00e70510(param_1 + 0xf9);
  pcStack_70 = thunk_FUN_00a59144;
  local_78 = param_1;
  FUN_00f02e98(0xbf800000,&local_78,0,1);
  puVar8 = PTR_s_build___Fonts_Avenir_Heavy_30_fo_02be9d00;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f0d378(plVar1,puVar8);
  FUN_00f0da80(plVar1,&DAT_03131298);
  FUN_00f0da30(plVar1,1);
  FUN_00f0d378(plVar2,puVar8);
  FUN_00f0da80(plVar2,&DAT_03131298);
  FUN_00f0da30(plVar2,1);
  FUN_00f0d378(plVar3,puVar8);
  FUN_00f0da80(plVar3,&DAT_03131298);
  FUN_00f0da30(plVar3,1);
  FUN_00f0e540(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(plVar4,"hud_stats_gold");
  FUN_00f0e540(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f0e578(plVar5,"hud_stats_kills");
  FUN_00ceace8();
  uVar9 = FUN_00ceb054();
  if ((uVar9 & 1) == 0) {
    FUN_00f0e540(plVar6,PTR_s_build___HUDPartsCommon_atlas_02be3440);
    FUN_00f0e578(plVar6,"hud_pingicon_action_minion");
    uVar10 = 0x41e00000;
    uVar11 = 0x41f00000;
  }
  else {
    FUN_00f0e548(plVar6,PTR_s_build___HUDPartsBlitz_tga_02be3460,"blitz_ally_score");
    uVar10 = 0x42100000;
    uVar11 = 0x42100000;
  }
  FUN_00f13f08(uVar10,uVar11,plVar6);
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a58c8c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_58;
  code *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027cba20;
  pcStack_50 = thunk_FUN_00a59144;
  local_58 = param_1;
  FUN_00f03390(&local_58);
  if ((void *)param_1[0xfa] != (void *)0x0) {
    operator_delete__((void *)param_1[0xfa]);
    param_1[0xfa] = 0;
    param_1[0xf9] = 0;
  }
  param_1[0xd9] = &PTR_FUN_028266f0;
  param_1[0xf0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf3);
  FUN_00f13d08(param_1 + 0xd9);
  param_1[0xbb] = &PTR_FUN_028266f0;
  param_1[0xd2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd5);
  FUN_00f13d08(param_1 + 0xbb);
  param_1[0x9d] = &PTR_FUN_028266f0;
  param_1[0xb4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb7);
  FUN_00f13d08(param_1 + 0x9d);
  FUN_00f0d3a4(param_1 + 0x77);
  FUN_00f0d3a4(param_1 + 0x51);
  FUN_00f0d3a4(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a58db8(void *param_1)

{
  FUN_00a58c8c();
  operator_delete(param_1);
  return;
}




void FUN_00a58ddc(long param_1,long param_2)

{
  *(long *)(param_1 + 0x7b8) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x7c0) = *(undefined4 *)(param_2 + 0x30);
  return;
}




void FUN_00a58df0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (((DAT_03132a78 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_03132a78), iVar6 != 0)) {
    uVar7 = FUN_00f08be8(param_1 + 0x228);
    thunk_FUN_00e7051c(&DAT_03132a68,uVar7);
    __cxa_atexit(FUN_0090e338,&DAT_03132a68,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03132a78);
  }
  if (((DAT_03132a90 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_03132a90), iVar6 != 0)) {
    uVar7 = FUN_00f08be8(param_1 + 0x358);
    thunk_FUN_00e7051c(&DAT_03132a80,uVar7);
    __cxa_atexit(FUN_0090e338,&DAT_03132a80,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03132a90);
  }
  if (((DAT_03132aa8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_03132aa8), iVar6 != 0)) {
    uVar7 = FUN_00f08be8(param_1 + 0x488);
    thunk_FUN_00e7051c(&DAT_03132a98,uVar7);
    __cxa_atexit(FUN_0090e338,&DAT_03132a98,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03132aa8);
  }
  lVar1 = param_1 + 0x158;
  FUN_00e705c8(&local_68,"0000");
  FUN_00f0d75c(lVar1,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  lVar2 = param_1 + 0x288;
  FUN_00e705c8(&local_68,"10/10/10");
  FUN_00f0d75c(lVar2,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  lVar3 = param_1 + 0x3b8;
  FUN_00e705c8(&local_68,"000");
  FUN_00f0d75c(lVar3,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  FUN_00f07b18(0x41000000,lVar1,3,param_1 + 0x4e8,1);
  FUN_00f07b18(0,lVar1,5,param_1 + 0x4e8,5);
  lVar4 = param_1 + 0x5d8;
  FUN_00f07b18(0x41900000,lVar4,3,lVar1,1);
  FUN_00f07b18(0,lVar4,5,lVar1,5);
  FUN_00f07b18(0x41000000,lVar2,3,lVar4,1);
  FUN_00f07b18(0,lVar2,5,lVar4,5);
  lVar4 = param_1 + 0x6c8;
  FUN_00f07b18(0x41900000,lVar4,3,lVar2,1);
  FUN_00f07b18(0,lVar4,5,lVar2,5);
  FUN_00f07b18(0x41000000,lVar3,3,lVar4,1);
  FUN_00f07b18(0,lVar3,5,lVar4,5);
  FUN_00f13238(param_1);
  FUN_00f0d75c(lVar1,&DAT_03132a68);
  FUN_00f0d75c(lVar2,&DAT_03132a80);
  FUN_00f0d75c(lVar3,&DAT_03132a98);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

