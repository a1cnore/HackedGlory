// functions/00a62 — 8 functions
#include "libGameKindred.h"




void FUN_00a6219c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xb8) = param_2;
  FUN_00a621a4();
  return;
}




void FUN_00a621a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0xb8) == 0) {
    FUN_00f0d75c(param_1 + 0x188,&DAT_03210450);
    FUN_00f0d75c(param_1 + 0x990,&DAT_03210450);
    FUN_00f0d75c(param_1 + 0xac0,&DAT_03210450);
    plVar5 = (long *)(param_1 + 0xd48);
    lVar4 = 5;
    do {
      (**(code **)(*plVar5 + 0x138))(plVar5,&DAT_03210450);
      (**(code **)(plVar5[0xbe] + 0x138))(plVar5 + 0xbe,&DAT_03210450);
      lVar4 = lVar4 + -1;
      plVar5 = plVar5 + 0x26;
    } while (lVar4 != 0);
    goto LAB_00a62478;
  }
  uVar2 = FUN_00e6ce7c(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x10),0);
  FUN_00f0d75c(param_1 + 0x188,uVar2);
  uVar2 = FUN_00e6ce7c(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18),0);
  thunk_FUN_00e7051c(&local_68,uVar2);
  FUN_00cb2d30(&local_68,*(undefined8 *)(param_1 + 0xb8));
  FUN_00cb6444(&local_68);
  FUN_00f0d75c(param_1 + 0x990,&local_68);
  FUN_00e70510(&local_78);
  uVar2 = FUN_00e6ce7c(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x20),0);
  uVar3 = FUN_00e70b88(uVar2,&DAT_03210450);
  if ((uVar3 & 1) == 0) {
    FUN_00910394(&local_78,&DAT_03210450);
  }
  else {
    uVar2 = FUN_00e6ce7c("GENERIC_TIP_LEAD",0);
    FUN_00910394(&local_78,uVar2);
    uVar2 = FUN_00e6ce7c(*(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x20),0);
    FUN_00e70c34(&local_78,uVar2);
  }
  FUN_00f0d75c(param_1 + 0xac0,&local_78);
  plVar5 = *(long **)(*(long *)(param_1 + 0xb8) + 0x48);
  lVar4 = *plVar5;
  if (lVar4 == 0) {
    uVar3 = 0;
LAB_00a62408:
    lVar4 = 5 - uVar3;
    plVar5 = (long *)(param_1 + uVar3 * 0x130 + 0xd48);
    do {
      (**(code **)(*plVar5 + 0x138))(plVar5,&DAT_03210450);
      (**(code **)(plVar5[0xbe] + 0x138))(plVar5 + 0xbe,&DAT_03210450);
      lVar4 = lVar4 + -1;
      plVar5 = plVar5 + 0x26;
    } while (lVar4 != 0);
  }
  else {
    plVar6 = (long *)(param_1 + 0xd48);
    lVar7 = param_1 + 0x1928;
    uVar8 = 0;
    do {
      fVar9 = *(float *)(lVar4 + 4);
      if (*(float *)(lVar4 + 4) <= 0.0) {
        fVar9 = 0.0;
        if (0.0 < *(float *)(lVar4 + 8)) {
          fVar9 = *(float *)(lVar4 + 8);
        }
      }
      FUN_00cb1d0c(fVar9,*(undefined4 *)(lVar4 + 0xc),lVar7,0);
      uVar2 = FUN_00cb36c8(*(undefined4 *)*plVar5);
      (**(code **)(*plVar6 + 0x138))(plVar6,uVar2);
      FUN_00e705c8(&local_88,&DAT_01b9f8c3);
      uVar2 = FUN_00e70c34(&local_88,lVar7);
      (**(code **)(plVar6[0xbe] + 0x138))(plVar6 + 0xbe,uVar2);
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
        local_88 = 0;
        local_80 = (void *)0x0;
      }
      lVar4 = plVar5[1];
      uVar3 = uVar8 + 1;
      if (3 < uVar8) break;
      lVar7 = lVar7 + 0x10;
      plVar6 = plVar6 + 0x26;
      uVar8 = uVar3;
      plVar5 = plVar5 + 1;
    } while (lVar4 != 0);
    if ((uint)uVar3 < 5) goto LAB_00a62408;
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
LAB_00a62478:
  FUN_00a61e98(param_1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a624b0(long param_1)

{
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_00a621a4();
  return;
}




void FUN_00a624b8(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  long local_80;
  
  lVar8 = tpidr_el0;
  local_80 = *(long *)(lVar8 + 0x28);
  FUN_00f13ca4();
  lVar12 = DAT_03210cf8;
  *(undefined4 *)(param_1 + 0x18) = 0x7000000;
  param_1[0x1b] = 0;
  *param_1 = (long)&PTR_FUN_027cc648;
  param_1[0x17] = (long)&PTR_FUN_027cc7a0;
  param_1[0x19] = lVar12;
  FUN_00f0a784();
  plVar1 = param_1 + 0x9e;
  FUN_00b89cd8(plVar1);
  lVar12 = 0x5b8;
  do {
    FUN_00f13ca4((long)param_1 + lVar12);
    lVar12 = lVar12 + 0xb8;
  } while (lVar12 != 0x7e0);
  lVar12 = 0x7e0;
  do {
    FUN_00ecfd6c((long)param_1 + lVar12,0);
    bVar9 = lVar12 != 0x1250;
    lVar12 = lVar12 + 0x538;
  } while (bVar9);
  lVar11 = 0x1920;
  lVar12 = 1;
  *(undefined4 *)(param_1 + 0x321) = 0;
  do {
    *(short *)((long)param_1 + lVar11) = (short)lVar12;
    lVar12 = lVar12 + 1;
    lVar11 = lVar11 + 3000;
  } while (lVar12 != 0x30);
  plVar3 = param_1 + 0x4976;
  param_1[0x4974] = 0x2f0000;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x4994;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x49b5;
  param_1[0x49b4] = 0;
  param_1[0x49b3] = 0;
  param_1[0x49b2] = 0;
  lVar12 = 1;
  FUN_00ab6c24(plVar5,1);
  plVar6 = param_1 + 0x4c6d;
  FUN_00f0fe84(plVar6);
  *plVar6 = (long)&PTR_FUN_028270e0;
  param_1[0x4c84] = (long)&PTR_FUN_02827248;
  FUN_00f13ca4();
  plVar7 = param_1 + 0x4cae;
  FUN_00f017e8(plVar7);
  *plVar7 = (long)&PTR_FUN_027c1f80;
  lVar11 = 0x26640;
  do {
    *(short *)((long)param_1 + lVar11) = (short)lVar12;
    lVar12 = lVar12 + 1;
    lVar11 = lVar11 + 0x650;
  } while (lVar12 != 8);
  param_1[0x5318] = 0x70000;
  *(undefined4 *)(param_1 + 0x531a) = 0;
  *(undefined4 *)((long)param_1 + 0x298d4) = 0xffff;
  *(undefined4 *)(param_1 + 0x531b) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x298dc) = 7;
  *(undefined1 *)((long)param_1 + 0x298e4) = 0;
  memset(param_1 + 0x2f1,0,0x180);
  param_1[0x4cc6] = 0;
  param_1[0x4cc5] = 0;
  param_1[0x4cc4] = 0;
  param_1[0x4cc3] = 0;
  param_1[0x4cc2] = 0;
  param_1[0x4cc1] = 0;
  param_1[0x4cc0] = 0;
  param_1[0x4cbf] = 0;
  FUN_00a62b0c(param_1);
  uVar10 = FUN_00d7e3d0();
  FUN_00e6ea58(uVar10,param_1,0xb924e89d,FUN_00a62b80,0);
  uVar10 = FUN_00d7e3d0();
  FUN_00e6ea58(uVar10,param_1,0xe4cbad13,FUN_00a62c5c,0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_00f023ec(plVar7,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  local_88 = DAT_03210f60;
  local_b0 = thunk_FUN_00a6572c;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(param_1 + 0x9f,&local_b0);
  local_b0 = thunk_FUN_00a6572c;
  local_88 = DAT_03210f8c;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(param_1 + 0x9f,&local_b0);
  lVar11 = 0;
  lVar12 = 0x5b8;
  lVar13 = 0x190c;
  do {
    plVar7 = (long *)((long)param_1 + lVar12);
    FUN_00f023ec(plVar1,plVar7,1);
    lVar2 = (long)param_1 + lVar11 + 0x7e0;
    (**(code **)(*plVar7 + 0x78))(plVar7,lVar2,1);
    FUN_00ed04d8(lVar2,0,1);
    FUN_00ed06a4(lVar2,0);
    *(undefined8 *)((long)param_1 + lVar11 + 0xd00) = 0x41a0000042480000;
    *(undefined4 *)((long)param_1 + lVar11 + 0xd08) = 0x44bb8000;
    FUN_00ed04ac(0,DAT_02be34ec,lVar2);
    lVar12 = lVar12 + 0xb8;
    *(undefined4 *)((long)param_1 + lVar13) = 0;
    lVar11 = lVar11 + 0x538;
    lVar13 = lVar13 + 4;
  } while (lVar12 != 0x7e0);
  FUN_00f023ec(plVar1,plVar6,1);
  FUN_00f023ec(plVar1,param_1 + 0x4c97,1);
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"vert_glass_shadow");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440,"vert_glass_shadow");
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  *(byte *)(param_1 + 0x49af) = *(byte *)(param_1 + 0x49af) | 2;
  FUN_00f0a814(param_1 + 0x1c,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  *(uint *)((long)param_1 + 0x265f4) = *(uint *)((long)param_1 + 0x265f4) & 0xfffffffb;
  uVar10 = FUN_00e6ce7c("HUD_CHOOSE_A_BUILD_BUTTON",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x447a0000,plVar5,0,uVar10,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_88 = DAT_03210c64;
  local_b0 = thunk_FUN_00a657e8;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(param_1 + 0x49b6,&local_b0);
  *(uint *)((long)param_1 + 0x263ec) = *(uint *)((long)param_1 + 0x263ec) & 0xfffffffb;
  FUN_00f0ff6c(plVar6,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00f10a70(plVar6,"generic_gradient_horizontal",1,0,0,"white_background",0,0,0,
               "generic_gradient_horizontal",0,0,0);
  FUN_00da3760(0xffff);
  if (*(long *)(lVar8 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a62b0c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  do {
    lVar3 = 0;
    do {
      lVar1 = param_1 + lVar3;
      if (*(long *)(lVar1 + 0xf0) != 0) {
        FUN_00a60a88(*(long *)(lVar1 + 0xf0),0);
        *(undefined8 *)(lVar1 + 0xf0) = 0;
      }
      if (*(long *)(lVar1 + 0xf8) != 0) {
        FUN_00a60a88(*(long *)(lVar1 + 0xf8),0);
        *(undefined8 *)(lVar1 + 0xf8) = 0;
      }
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != 0x200);
    lVar2 = lVar2 + 1;
    param_1 = param_1 + 0x200;
  } while (lVar2 != 2);
  return;
}




void FUN_00a62d78(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027cc648;
  param_1[0x17] = &PTR_FUN_027cc7a0;
  FUN_00a62f00();
  uVar1 = FUN_00d7e3d0();
  FUN_00e6ec98(uVar1,param_1);
  FUN_00a62fa0(param_1);
  FUN_00f01868(param_1 + 0x4cae);
  FUN_00f13d08(param_1 + 0x4c97);
  param_1[0x4c6d] = &PTR_FUN_02826f38;
  param_1[0x4c84] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x4c87);
  FUN_00f13d08(param_1 + 0x4c6d);
  FUN_009c7fa8(param_1 + 0x49b5);
  param_1[0x4994] = &PTR_FUN_028266f0;
  param_1[0x49ab] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49ae);
  FUN_00f13d08(param_1 + 0x4994);
  param_1[0x4976] = &PTR_FUN_028266f0;
  param_1[0x498d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4990);
  FUN_00f13d08(param_1 + 0x4976);
  lVar2 = 0x1250;
  do {
    FUN_00ed00e0((long)param_1 + lVar2);
    lVar2 = lVar2 + -0x538;
  } while (lVar2 != 0x2a8);
  lVar2 = 0;
  do {
    FUN_00f13d08((long)param_1 + lVar2 + 0x728);
    lVar2 = lVar2 + -0xb8;
  } while (lVar2 != -0x228);
  FUN_00f13d08(param_1 + 0x9e);
  FUN_00f0a79c(param_1 + 0x1c);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a62f00(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_00a62b0c();
  lVar2 = 0;
  do {
    lVar1 = FUN_00ed0280(param_1 + lVar2 * 0x538 + 0x7e0);
    while (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0x30);
      FUN_00a64b1c(param_1 + 0x1920);
    }
    lVar1 = lVar2 * 4;
    lVar2 = lVar2 + 1;
    *(undefined4 *)(param_1 + lVar1 + 0x190c) = 0;
  } while (lVar2 != 3);
  memset((void *)(param_1 + 0x1788),0,0x184);
  *(undefined8 *)(param_1 + 0x24d98) = 0;
  *(undefined8 *)(param_1 + 0x24d90) = 0;
  return;
}




void FUN_00a62fa0(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(long *)(param_1 + 0x265f8 + lVar1) != 0) {
      FUN_00a65eec(param_1 + 0x26640);
      *(undefined8 *)(param_1 + 0x265f8 + lVar1) = 0;
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x40);
  FUN_00da3760(0xffff);
  *(undefined8 *)(param_1 + 0x24da0) = 0;
  *(undefined4 *)(param_1 + 0x298e0) = 0;
  return;
}

