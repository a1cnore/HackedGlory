// functions/00c8a — 20 functions
#include "libGameKindred.h"




void FUN_00c8a040(long param_1)

{
  FUN_00f10dc8(param_1 + 0x170,PTR_s_build___MenuPartsCommon_tga_02be3530,"generic_large_circle");
  FUN_00f0e698(param_1 + 0x170,0xb);
  return;
}




void FUN_00c8a080(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02805320;
  param_1[0x17] = &PTR_FUN_02805490;
  if ((*(byte *)(param_1 + 0xd0) & 1) != 0) {
    operator_delete((void *)param_1[0xd2]);
  }
  FUN_00f0d3a4(param_1 + 0xa9);
  FUN_00f0d3a4(param_1 + 0x83);
  FUN_00f13d08(param_1 + 0x6c);
  param_1[0x4f] = &PTR_FUN_027da660;
  param_1[0x60] = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 0x66) & 1) != 0) {
    operator_delete((void *)param_1[0x68]);
  }
  FUN_0199fb94(param_1 + 99);
  FUN_00f01868(param_1 + 0x4f);
  param_1[0x2e] = &PTR_FUN_02827290;
  param_1[0x45] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x4c);
  param_1[0x2e] = &PTR_FUN_028266f0;
  param_1[0x45] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x48);
  FUN_00f13d08(param_1 + 0x2e);
  if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
    operator_delete((void *)param_1[0x2b]);
  }
  if ((void *)param_1[0x27] != (void *)0x0) {
    operator_delete__((void *)param_1[0x27]);
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
  if ((*(byte *)(param_1 + 0x22) & 1) != 0) {
    operator_delete((void *)param_1[0x24]);
  }
  if ((*(byte *)(param_1 + 0x1f) & 1) != 0) {
    operator_delete((void *)param_1[0x21]);
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    operator_delete((void *)param_1[0x1e]);
  }
  if ((*(byte *)(param_1 + 0x19) & 1) != 0) {
    operator_delete((void *)param_1[0x1b]);
  }
  param_1[0x17] = &PTR_FUN_027e0a68;
  FUN_0096bd60(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c8a1ec(void *param_1)

{
  FUN_00c8a080();
  operator_delete(param_1);
  return;
}




void FUN_00c8a210(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c8a218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




void FUN_00c8a21c(long param_1)

{
  FUN_00c8a080(param_1 + -0xb8);
  return;
}




void FUN_00c8a224(long param_1)

{
  FUN_00c8a080((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}




void FUN_00c8a24c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_028054b8;
  param_1[0x17] = &PTR_FUN_02805628;
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0xc00) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0xcb8) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0xcd0);
    FUN_00f13d08((long)param_1 + lVar1 + 0xc00);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_00f13d08(param_1 + 0xf1);
  param_1[0xd3] = &PTR_FUN_028266f0;
  param_1[0xea] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xed);
  FUN_00f13d08(param_1 + 0xd3);
  FUN_00c8a080(param_1);
  return;
}




void FUN_00c8a2f8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_028054b8;
  param_1[0x17] = &PTR_FUN_02805628;
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0xc00) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0xcb8) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0xcd0);
    FUN_00f13d08((long)param_1 + lVar1 + 0xc00);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_00f13d08(param_1 + 0xf1);
  param_1[0xd3] = &PTR_FUN_028266f0;
  param_1[0xea] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xed);
  FUN_00f13d08(param_1 + 0xd3);
  FUN_00c8a080(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c8a3ac(undefined8 *param_1)

{
  long lVar1;
  
  param_1[-0x17] = &PTR_FUN_028054b8;
  *param_1 = &PTR_FUN_02805628;
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0xb48) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0xc00) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0xc18);
    FUN_00f13d08((long)param_1 + lVar1 + 0xb48);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_00f13d08(param_1 + 0xda);
  param_1[0xbc] = &PTR_FUN_028266f0;
  param_1[0xd3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd6);
  FUN_00f13d08(param_1 + 0xbc);
  FUN_00c8a080(param_1 + -0x17);
  return;
}




void FUN_00c8a464(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_028054b8;
  *param_1 = &PTR_FUN_02805628;
  lVar2 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar2 + 0xb48) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar2 + 0xc00) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar2 + 0xc18);
    FUN_00f13d08((long)param_1 + lVar2 + 0xb48);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != -0x4b0);
  FUN_00f13d08(param_1 + 0xda);
  param_1[0xbc] = &PTR_FUN_028266f0;
  param_1[0xd3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd6);
  FUN_00f13d08(param_1 + 0xbc);
  FUN_00c8a080(puVar1);
  operator_delete(puVar1);
  return;
}




void * FUN_00c8a524(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x540);
  FUN_00c8a5b8();
  FUN_00c8a560(pvVar1,param_1);
  return pvVar1;
}




void FUN_00c8a560(long param_1,undefined8 *param_2)

{
  if ((undefined8 *)(param_1 + 0x518) != param_2) {
    FUN_00c8ae88((undefined8 *)(param_1 + 0x518),*param_2,param_2 + 1);
  }
  FUN_00910394(param_1 + 0x530,param_2 + 3);
  FUN_00f0d75c(param_1 + 1000,param_1 + 0x530);
  return;
}




void FUN_00c8a5b8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  undefined4 local_60 [2];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_02805650;
  FUN_00f0fe84(plVar1);
  plVar2 = param_1 + 0x41;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x5f;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x7d;
  FUN_00f0d160(plVar4);
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = (long)(param_1 + 0xa4);
  FUN_00e70510(param_1 + 0xa6);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xffffffbf;
  FUN_00f0ff6c(plVar1,PTR_s_build___SpoilsOfWarPartsCommon_t_02be3638);
  FUN_00f0ff74(plVar1,"itembg_highlight_top_left",0,0,0,"itembg_highlight_top_center",0,0,0,
               "itembg_highlight_top_right",0,0,0,"itembg_highlight_mid_left",0,0,0,
               "itembg_highlight_mid_center",0,0,0,"itembg_highlight_mid_right",0,0,0,
               "itembg_highlight_bot_left",0,0,0,"itembg_highlight_bot_center",0,0,0,
               "itembg_highlight_bot_right",0,0,0);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  FUN_00f0e548(plVar2,PTR_s_build___SpoilsOfWarPartsCommon_t_02be3638,"itembg_faded");
  FUN_00f0e548(plVar3,PTR_s_build___SpoilsOfWarPartsCommon_t_02be3638,"itembg_container");
  *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) | 1;
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar5 = *(uint *)((long)param_1 + 0x46c);
  if ((uVar5 & 0x7f80) != 0x5e00) {
    *(uint *)((long)param_1 + 0x46c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x5e00;
    FUN_0091ada4(plVar4);
  }
  local_60[0] = 0xfffee3b8;
  FUN_00f0d7fc(plVar4,local_60);
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c8a85c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  float fVar2;
  undefined4 local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)(**(code **)(*param_3 + 0x48))();
  fVar2 = fVar2 + -120.0;
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f10644(0x42700000,fVar2,0x42700000,0x42700000,param_2 + -120.0,0x42700000,param_3 + 0x17);
  local_50 = (**(code **)(*param_3 + 0x48))(param_3);
  fStack_4c = fVar2;
  FUN_00f13f18(param_3 + 0x41,&local_50);
  local_50 = (**(code **)(*param_3 + 0x48))(param_3);
  fStack_4c = fVar2;
  FUN_00f13f18(param_3 + 0x5f,&local_50);
  fVar2 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f0db64(fVar2 + -120.0,0,0x3f800000,param_3 + 0x7d);
  FUN_00f07940(0,0,param_3 + 0x7d,8,param_3,8);
  FUN_00f07940(0,0,param_3 + 0x17,8,param_3,8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c8a9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  
  uVar3 = *(uint *)(param_4 + 0x37c);
  lVar1 = param_4 + 0x2f8;
  if ((uVar3 & 0x7f80) != 0x1e80) {
    *(uint *)(param_4 + 0x37c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x1e80;
    FUN_0091ada4(lVar1);
  }
  uVar3 = *(uint *)(param_4 + 0x28c);
  lVar2 = param_4 + 0x208;
  if ((uVar3 & 0x7f80) != 0x1e80) {
    *(uint *)(param_4 + 0x28c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x1e80;
    FUN_0091ada4(lVar2);
  }
  lVar4 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcad4(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_027c1a60;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcac4(param_1,puVar7);
  FUN_00f022a0(lVar2,puVar7);
  lVar4 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efcad4(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_027c1a60;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efcac4(param_1,puVar7);
  FUN_00f022a0(lVar1,puVar7);
  uVar5 = FUN_00efee28(0x3f800000,param_2,FUN_009a7624);
  FUN_00f022a0(lVar2,uVar5);
  uVar5 = FUN_00efee28(0x3f800000,param_2,FUN_009a7624);
  FUN_00f022a0(lVar1,uVar5);
  uVar5 = FUN_00efee28(0x3ee66666,param_3,FUN_009a7608);
  FUN_00f022a0(lVar2,uVar5);
  uVar5 = FUN_00efee28(0,param_3,FUN_009a7608);
  FUN_00f022a0(lVar1,uVar5);
  return;
}




void FUN_00c8ac28(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ushort uVar5;
  ushort *puVar6;
  
  lVar1 = param_2 + 0xb8;
  FUN_00f01980(lVar1);
  uVar4 = *(uint *)(param_2 + 0x13c);
  if ((uVar4 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x13c) = uVar4 & 0xffff807f;
    FUN_0091ada4(lVar1);
    uVar4 = *(uint *)(param_2 + 0x13c);
  }
  *(uint *)(param_2 + 0x13c) = uVar4 | 4;
  uVar3 = FUN_00efee28(0x3f800000,param_1 * 0.5,FUN_009a7608);
  FUN_00f022a0(lVar1,uVar3);
  uVar3 = FUN_00efee28(0,param_1 * 0.5,FUN_009a7608);
  FUN_00f022a0(lVar1,uVar3);
  lVar2 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc9c0(puVar6);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efca10(puVar6,0);
  FUN_00f022a0(lVar1,puVar6);
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/sfx_ice_rewarded.mp3",0,1);
  return;
}




void FUN_00c8ad8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02805650;
  if ((void *)param_1[0xa7] != (void *)0x0) {
    operator_delete__((void *)param_1[0xa7]);
    param_1[0xa7] = 0;
    param_1[0xa6] = 0;
  }
  FUN_00948ab4(param_1 + 0xa3,param_1[0xa4]);
  FUN_00f0d3a4(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_028266f0;
  param_1[0x76] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x79);
  FUN_00f13d08(param_1 + 0x5f);
  param_1[0x41] = &PTR_FUN_028266f0;
  param_1[0x58] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5b);
  FUN_00f13d08(param_1 + 0x41);
  param_1[0x17] = &PTR_FUN_02826f38;
  param_1[0x2e] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c8ae60(void *param_1)

{
  FUN_00c8ad8c();
  operator_delete(param_1);
  return;
}




void thunk_FUN_00c8a85c(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  float fVar2;
  undefined4 uStack_50;
  float fStack_4c;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)(**(code **)(*param_3 + 0x48))();
  fVar2 = fVar2 + -120.0;
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f10644(0x42700000,fVar2,0x42700000,0x42700000,param_2 + -120.0,0x42700000,param_3 + 0x17);
  uStack_50 = (**(code **)(*param_3 + 0x48))(param_3);
  fStack_4c = fVar2;
  FUN_00f13f18(param_3 + 0x41,&uStack_50);
  uStack_50 = (**(code **)(*param_3 + 0x48))(param_3);
  fStack_4c = fVar2;
  FUN_00f13f18(param_3 + 0x5f,&uStack_50);
  fVar2 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f0db64(fVar2 + -120.0,0,0x3f800000,param_3 + 0x7d);
  FUN_00f07940(0,0,param_3 + 0x7d,8,param_3,8);
  FUN_00f07940(0,0,param_3 + 0x17,8,param_3,8);
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c8ae88(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1[2] != 0) {
    lVar5 = *param_1;
    plVar6 = param_1 + 1;
    *param_1 = (long)plVar6;
    *(undefined8 *)(*plVar6 + 0x10) = 0;
    param_1[2] = 0;
    *plVar6 = 0;
    lVar7 = *(long *)(lVar5 + 8);
    if (lVar7 != 0) {
      lVar5 = lVar7;
    }
joined_r0x00c8aeec:
    lVar7 = lVar5;
    if (lVar5 != 0) {
      do {
        if (param_2 == param_3) {
          lVar5 = *(long *)(lVar7 + 0x10);
          while (lVar2 = lVar5, lVar2 != 0) {
            lVar7 = lVar2;
            lVar5 = *(long *)(lVar2 + 0x10);
          }
          FUN_00948ab4(param_1,lVar7);
          goto LAB_00c8affc;
        }
        FUN_008fce60(lVar7 + 0x20,param_2 + 4);
        *(int *)(lVar7 + 0x38) = (int)param_2[7];
        lVar5 = FUN_00c8b050(lVar7);
        uVar4 = FUN_00c8b0ac(param_1,&local_60,lVar7 + 0x20);
        FUN_009ed724(param_1,local_60,uVar4,lVar7);
        plVar6 = (long *)param_2[1];
        if ((long *)param_2[1] == (long *)0x0) {
          plVar6 = param_2 + 2;
          bVar3 = *(long **)*plVar6 == param_2;
          param_2 = (long *)*plVar6;
          if (bVar3) goto joined_r0x00c8aeec;
          do {
            lVar7 = *plVar6;
            plVar6 = (long *)(lVar7 + 0x10);
            param_2 = (long *)*plVar6;
          } while (*param_2 != lVar7);
        }
        else {
          do {
            param_2 = plVar6;
            plVar6 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
        lVar7 = lVar5;
        if (lVar5 == 0) break;
      } while( true );
    }
  }
  while (param_2 != param_3) {
    FUN_00c8b180(param_1,param_2 + 4);
    plVar6 = (long *)param_2[1];
    if ((long *)param_2[1] == (long *)0x0) {
      plVar6 = param_2 + 2;
      bVar3 = *(long **)*plVar6 != param_2;
      param_2 = (long *)*plVar6;
      if (bVar3) {
        do {
          lVar5 = *plVar6;
          plVar6 = (long *)(lVar5 + 0x10);
          param_2 = (long *)*plVar6;
        } while (*param_2 != lVar5);
      }
    }
    else {
      do {
        param_2 = plVar6;
        plVar6 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
LAB_00c8affc:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

