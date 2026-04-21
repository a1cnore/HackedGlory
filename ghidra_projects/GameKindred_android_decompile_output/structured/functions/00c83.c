// functions/00c83 — 30 functions
#include "libGameKindred.h"




void FUN_00c83310(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313c3c8,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c83378(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02804018;
  FUN_00f13d08(param_1 + 0x1d5);
  FUN_00f13d08(param_1 + 0x1bc);
  param_1[0xfd] = &PTR_FUN_027d5388;
  param_1[0x198] = &PTR_FUN_028266f0;
  param_1[0x1af] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1b2);
  FUN_00f13d08(param_1 + 0x198);
  param_1[0x17a] = &PTR_FUN_028266f0;
  param_1[0x191] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x194);
  FUN_00f13d08(param_1 + 0x17a);
  param_1[0x15c] = &PTR_FUN_028266f0;
  param_1[0x173] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x176);
  FUN_00f13d08(param_1 + 0x15c);
  FUN_00f01868(param_1 + 0x14b);
  FUN_009c825c(param_1 + 0xfd);
  FUN_00f0d3a4(param_1 + 0xd7);
  FUN_00f13d08(param_1 + 0xbc);
  FUN_00f13d08(param_1 + 0xa1);
  param_1[0x83] = &PTR_FUN_028266f0;
  param_1[0x9a] = &PTR_FUN_02826850;
  param_1[0x30] = &PTR_FUN_02804168;
  FUN_00f0a79c(param_1 + 0x9d);
  FUN_00f13d08(param_1 + 0x83);
  param_1[0x65] = &PTR_FUN_028266f0;
  param_1[0x7c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7f);
  FUN_00f13d08(param_1 + 0x65);
  param_1[0x47] = &PTR_FUN_028266f0;
  param_1[0x5e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x61);
  FUN_00f13d08(param_1 + 0x47);
  FUN_00f13d08(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c834e0(void *param_1)

{
  FUN_00c83378();
  operator_delete(param_1);
  return;
}




void FUN_00c83504(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_02804168;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x53;
  FUN_00f0e4a8(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x31c) = *(uint *)((long)param_1 + 0x31c) & 0xffffffbf;
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_store_bkgmiddle");
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"generic_gradient_vertical");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar4 = *(uint *)((long)param_1 + 0x22c);
  if ((uVar4 & 0x7f80) != 0x4600) {
    *(uint *)((long)param_1 + 0x22c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4600;
    FUN_0091ada4(plVar2);
  }
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 2;
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"generic_gradient_vertical");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  uVar4 = *(uint *)((long)param_1 + 0x31c);
  if ((uVar4 & 0x7f80) != 0x4600) {
    *(uint *)((long)param_1 + 0x31c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4600;
    FUN_0091ada4(plVar3);
  }
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  return;
}




void FUN_00c83698(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2 + 0xb8;
  FUN_00f13f08(lVar1);
  FUN_00f13f08(param_1,0x42fa0000,param_2 + 0x1a8);
  FUN_00f13f08(param_1,0x42fa0000,param_2 + 0x298);
  FUN_00f07b18(0x80000000,param_2 + 0x1a8,2,lVar1,0);
  FUN_00f07b18(0,param_2 + 0x298,0,lVar1,2);
  return;
}




void FUN_00c83734(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02804168;
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




void FUN_00c837d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02804168;
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
  operator_delete(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c83874(long *param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_028042b0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f0d160(plVar2);
  lVar3 = _DAT_03218ef8;
  *(undefined1 *)(param_1 + 0x56) = param_3;
  param_1[0x55] = lVar3;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar1,&DAT_01bee7fa,2);
  if ((*(uint *)((long)param_1 + 0x10c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xffff807f;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  FUN_00f0d75c(plVar2,param_2);
  return;
}




void FUN_00c83980(long param_1)

{
  FUN_00f0d75c(param_1 + 0x178);
  return;
}




void FUN_00c83988(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x2a8) = param_1;
  *(undefined4 *)(param_3 + 0x2ac) = param_2;
  return;
}




void FUN_00c83994(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0x33;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  if ((*(uint *)(param_1 + 0x10c) >> 7 & 0xff) == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xffff807f | uVar1 << 7;
  FUN_0091ada4(param_1 + 0x88);
  return;
}




undefined4 FUN_00c839cc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2a8);
}




void FUN_00c839d8(long param_1)

{
  FUN_00f13f08(*(undefined4 *)(param_1 + 0x2a8),*(undefined4 *)(param_1 + 0x2ac),param_1 + 0x88);
  FUN_00f07940(0x41400000,0,param_1 + 0x178,7,param_1 + 0x88,7);
  return;
}




float FUN_00c83a20(long param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00f01c20(param_1 + 0x178);
  return fVar1 + 24.0;
}




void FUN_00c83a44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028042b0;
  FUN_00f0d3a4(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00c83aa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028042b0;
  FUN_00f0d3a4(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c83b14(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_00c82bbc();
  *param_1 = &PTR_FUN_028043b0;
  FUN_00bbdc04(param_1 + 0x1f0);
  uVar2 = FUN_00e6ce7c("HUD_SETTINGS_TITLE",0);
  FUN_00c82f88(param_1,uVar2);
  FUN_00c82eec(param_1,param_1[0x1f1]);
  FUN_00c02648(param_1[0x1f1],1);
  iVar1 = FUN_0092f28c();
  if (iVar1 == 1) {
    FUN_00c02524(param_1[0x1f1]);
    return;
  }
  return;
}




void FUN_00c83b9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028043b0;
  FUN_00bbdc54(param_1 + 0x1f0);
  FUN_00c83378(param_1);
  return;
}




void FUN_00c83bd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028043b0;
  FUN_00bbdc54(param_1 + 0x1f0);
  FUN_00c83378(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c83c14(long param_1,uint param_2)

{
  FUN_00c82f00(param_1,param_2 & 1);
  FUN_00bbdcdc(param_1 + 0xf80,param_2 & 1);
  return;
}




void FUN_00c83c44(long param_1)

{
  FUN_00c82f90();
                    /* WARNING: Could not recover jumptable at 0x00c83c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xf88) + 0x90))();
  return;
}




void FUN_00c83c70(long param_1)

{
  FUN_00c01a7c(*(undefined8 *)(param_1 + 0xf88));
  return;
}




void FUN_00c83c78(undefined8 *param_1)

{
  FUN_00c82bbc();
  *param_1 = &PTR_FUN_02804500;
  FUN_00ca6738(param_1 + 0x1f0,1);
  FUN_00c82eec(param_1,param_1 + 0x1f0);
  return;
}




void FUN_00c83cc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02804500;
  param_1[0x1f0] = &PTR_FUN_028086b0;
  FUN_009c7fa8(param_1 + 0x394);
  param_1[0x24b] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x36c);
  FUN_00c925cc(param_1 + 0x24b);
  FUN_00f0d3a4(param_1 + 0x225);
  param_1[0x207] = &PTR_FUN_028266f0;
  param_1[0x21e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x221);
  FUN_00f13d08(param_1 + 0x207);
  FUN_00f13d08(param_1 + 0x1f0);
  FUN_00c83378(param_1);
  return;
}




void FUN_00c83d8c(void *param_1)

{
  FUN_00c83cc0();
  operator_delete(param_1);
  return;
}




void FUN_00c83db0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_b8;
  void *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00e6a8a8(auStack_a8,PTR_s_build___HUDPartsCutscene__s__s_t_02be34b0,"Ardan","Normal");
  FUN_00e705c8(&local_b8,&DAT_01e277f2);
  FUN_00c82f88(param_1,&local_b8);
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
    local_b8 = 0;
    local_b0 = (void *)0x0;
  }
  *(uint *)(param_1 + 0x86c) = *(uint *)(param_1 + 0x86c) & 0xfffffffb;
  uVar2 = FUN_00e6ce7c("TUTORIAL_1_COMPLETE_BODY",0);
  FUN_00ca6a24(param_1 + 0xf80,auStack_a8,"Cutscene_Avatar",uVar2);
  *(undefined4 *)(param_1 + 0xf7c) = 0x43480000;
  *(undefined4 *)(param_1 + 0xf70) = 0x43160000;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c83e88(long param_1)

{
  FUN_00ca6a24(param_1 + 0xf80);
  return;
}




void FUN_00c83e90(undefined8 param_1,uint param_2)

{
  FUN_00c82f00(param_1,param_2 & 1);
  return;
}




void FUN_00c83e98(long param_1)

{
  FUN_00c82f90();
  FUN_00f13db4(param_1 + 0xf80);
  return;
}




void FUN_00c83ebc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined4 local_60 [2];
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  FUN_00ecf178();
  plVar1 = param_1 + 0x48;
  *param_1 = (long)&PTR_FUN_02804650;
  FUN_00f1306c(plVar1);
  plVar2 = param_1 + 0x73;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x91;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0xaf;
  FUN_00f1306c(plVar4);
  plVar5 = param_1 + 0xda;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0x100;
  FUN_00f0d160(plVar6);
  *(undefined4 *)(param_1 + 0x126) = 0x44480000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f133a4(plVar1,plVar2,1);
  FUN_00f133a4(plVar1,plVar3,1);
  FUN_00f133a4(plVar1,plVar4,1);
  FUN_00f133a4(plVar4,plVar5,1);
  FUN_00f133a4(plVar4,plVar6,1);
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_frame");
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98,&DAT_01bee7fa);
  local_60[0] = 0xffc0c0c0;
  FUN_00f0d92c(plVar6,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,local_60);
  *(uint *)((long)param_1 + 0x50c) = *(uint *)((long)param_1 + 0x50c) & 0xfffffffb;
  FUN_00ecf870(param_1,1);
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

