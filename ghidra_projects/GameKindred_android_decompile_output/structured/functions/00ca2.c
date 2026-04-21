// functions/00ca2 — 23 functions
#include "libGameKindred.h"




void FUN_00ca2008(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02807980;
  FUN_00f0d3a4(param_1 + 0x60);
  param_1[0x42] = &PTR_FUN_028266f0;
  param_1[0x59] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5c);
  FUN_00f13d08(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ca2090(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02807980;
  FUN_00f0d3a4(param_1 + 0x60);
  param_1[0x42] = &PTR_FUN_028266f0;
  param_1[0x59] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5c);
  FUN_00f13d08(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ca2120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02807ac8;
  FUN_00f0d3a4(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ca217c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02807ac8;
  FUN_00f0d3a4(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ca21e0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_70 [2];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_02807c10;
  FUN_00f0e4a8(param_1 + 0x17);
  FUN_00f0e4a8(param_1 + 0x35);
  FUN_00f0e4a8(param_1 + 0x53);
  plVar1 = param_1 + 0x71;
  FUN_00f11234(plVar1);
  FUN_00f0e4a8(param_1 + 0xa5);
  FUN_00f0e4a8(param_1 + 0xc3);
  FUN_00f0e4a8(param_1 + 0xe1);
  FUN_00f0e4a8(param_1 + 0xff);
  plVar2 = param_1 + 0x11d;
  FUN_00f0d160(plVar2);
  param_1[0x144] = 0;
  param_1[0x143] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x35,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x53,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xc3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0xa5,1);
  FUN_00f023ec(plVar1,param_1 + 0xe1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xff,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0d998(plVar2,1);
  local_70[0] = 0xffd99583;
  FUN_00f0d7fc(plVar2,local_70);
  *(uint *)((long)param_1 + 0x96c) = *(uint *)((long)param_1 + 0x96c) & 0xfffffffb;
  FUN_00f112f0(plVar1,1);
  local_70[0] = CONCAT22(local_70[0]._2_2_,7);
  FUN_00f14070(param_1,local_70);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca2404(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = param_1 + 0x17;
  FUN_00f0e628(plVar1);
  FUN_00f0e548(plVar1,param_2,param_3);
  FUN_00f0ea88(param_1 + 0x53);
  FUN_00f0ea88(param_1 + 0x35);
  FUN_00f0ea88(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00ca246c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}




void FUN_00ca2470(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = param_1 + 0x35;
  FUN_00f0e628(plVar1);
  FUN_00f0e548(plVar1,param_2,param_3);
  FUN_00f0ea88(param_1 + 0x53);
  FUN_00f0ea88(plVar1);
  FUN_00f0ea88(param_1 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x00ca24d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}




void FUN_00ca24dc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = param_1 + 0x53;
  FUN_00f0e628(plVar1);
  FUN_00f0e548(plVar1,param_2,param_3);
  FUN_00f0ea88(plVar1);
  FUN_00f0ea88(param_1 + 0x35);
  FUN_00f0ea88(param_1 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x00ca2544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}




void FUN_00ca2548(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f0e628(param_1 + 0x528);
  FUN_00f0e548(param_1 + 0x528,param_2,param_3);
  return;
}




void FUN_00ca2588(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f0e628(param_1 + 0x618);
  FUN_00f0e548(param_1 + 0x618,param_2,param_3);
  return;
}




void FUN_00ca25c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f0e628(param_1 + 0x708);
  FUN_00f0e548(param_1 + 0x708,param_2,param_3);
  return;
}




void FUN_00ca2608(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f0e628(param_1 + 0x7f8);
  FUN_00f0e548(param_1 + 0x7f8,param_2,param_3);
  return;
}




void FUN_00ca2648(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0xa1c) != param_2) {
    iVar3 = *(int *)(param_1 + 0xa24);
    fVar5 = 0.0;
    iVar1 = param_2;
    if (param_2 <= iVar3) {
      iVar1 = iVar3;
    }
    iVar4 = *(int *)(param_1 + 0xa20) - iVar3;
    *(int *)(param_1 + 0xa1c) = iVar1;
    if (iVar4 != 0) {
      fVar5 = (float)(iVar1 - iVar3) / (float)iVar4;
    }
    uVar6 = NEON_fminnm(fVar5,0x3f800000);
    uVar2 = *(uint *)(param_1 + 0x69c) | 4;
    if (param_2 <= iVar3) {
      uVar2 = *(uint *)(param_1 + 0x69c) & 0xfffffffb;
    }
    *(undefined4 *)(param_1 + 0xa18) = uVar6;
    *(uint *)(param_1 + 0x69c) = uVar2;
    FUN_00ca26e4(param_1);
    FUN_00ca2820(param_1);
    return;
  }
  return;
}




void FUN_00ca26e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("MENU_PROGRESS_BAR_VALUE",0);
  thunk_FUN_00e7051c(&local_38,uVar2);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,"%u",*(undefined4 *)(param_1 + 0xa1c));
  FUN_00e705c8(&local_58,"[VALUE]");
  FUN_00e71248(&local_38,0,&local_58,&local_48);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00e70510(&local_58);
  FUN_00e70e18(&local_58,"%u",*(undefined4 *)(param_1 + 0xa20));
  FUN_00e705c8(&local_68,"[MAX_VALUE]");
  FUN_00e71248(&local_38,0,&local_68,&local_58);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0x8e8,&local_38);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca2820(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float local_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  plVar1 = param_1 + 0x35;
  FUN_00f07940(0,0,plVar1,7,param_1,7);
  uVar11 = 0;
  FUN_00f07940(0,param_1 + 0x53,5,param_1,5);
  fVar8 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar9 = (float)FUN_00f0e700(plVar1);
  plVar2 = param_1 + 0xe1;
  fVar8 = fVar8 - fVar9;
  fVar9 = (float)FUN_00f0e700(plVar2);
  fVar10 = (float)FUN_00f080a0(plVar1,1,param_1 + 0x53,0);
  plVar3 = param_1 + 0x17;
  FUN_00f0e700(plVar3);
  local_80 = fVar10;
  uStack_7c = uVar11;
  FUN_00f13f18(plVar3,&local_80);
  plVar4 = param_1 + 0x71;
  FUN_00f0e700(plVar3);
  local_80 = fVar8;
  uStack_7c = uVar11;
  FUN_00f13f18(plVar4,&local_80);
  plVar5 = param_1 + 0xa5;
  FUN_00f0e700(plVar5);
  local_80 = fVar8 - fVar9;
  uStack_7c = uVar11;
  FUN_00f13f18(plVar5,&local_80);
  fVar9 = *(float *)(param_1 + 0x143);
  plVar6 = param_1 + 0xff;
  FUN_00f0e700(plVar6);
  local_80 = fVar8 * fVar9;
  uStack_7c = uVar11;
  FUN_00f13f18(plVar6,&local_80);
  FUN_00f07940(0,0,plVar3,7,plVar1,5);
  FUN_00f07940(0,0,plVar4,7,plVar3,7);
  FUN_00f07940(0,0,param_1 + 0xc3,5,plVar1,5);
  FUN_00f07940(fVar8 * *(float *)(param_1 + 0x143),0,plVar2,5,plVar3,7);
  FUN_00f07940(0,0,plVar5,5,plVar2,7);
  FUN_00f07940(fVar8 * *(float *)(param_1 + 0x143),0,plVar6,5,plVar3,7);
  fVar9 = 0.0;
  FUN_00f07940(0,0,param_1 + 0x11d,8,plVar4,8);
  FUN_00f0e700(plVar3);
  FUN_00f13f68(param_1,CONCAT44((int)fVar9,(int)fVar8));
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca2a78(long param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  undefined4 uVar4;
  
  bVar2 = *(int *)(param_1 + 0xa24) != param_2;
  if (bVar2) {
    *(int *)(param_1 + 0xa24) = param_2;
  }
  if (*(int *)(param_1 + 0xa20) == param_3) {
    FUN_00ca26e4(param_1);
    if (!bVar2) {
      return;
    }
  }
  else {
    if (param_3 <= param_2 + 1) {
      param_3 = param_2 + 1;
    }
    *(int *)(param_1 + 0xa20) = param_3;
    FUN_00ca26e4(param_1);
  }
  fVar3 = 0.0;
  iVar1 = *(int *)(param_1 + 0xa20) - *(int *)(param_1 + 0xa24);
  if (iVar1 != 0) {
    fVar3 = (float)(*(int *)(param_1 + 0xa1c) - *(int *)(param_1 + 0xa24)) / (float)iVar1;
  }
  uVar4 = NEON_fminnm(fVar3,0x3f800000);
  *(undefined4 *)(param_1 + 0xa18) = uVar4;
  FUN_00ca2820(param_1);
  return;
}




void FUN_00ca2b28(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x96c) =
       *(uint *)(param_1 + 0x96c) & 0xfffffff8 | *(uint *)(param_1 + 0x96c) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void thunk_FUN_00ca2820(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  
  lVar7 = tpidr_el0;
  lStack_78 = *(long *)(lVar7 + 0x28);
  plVar1 = param_1 + 0x35;
  FUN_00f07940(0,0,plVar1,7,param_1,7);
  uVar11 = 0;
  FUN_00f07940(0,param_1 + 0x53,5,param_1,5);
  fVar8 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar9 = (float)FUN_00f0e700(plVar1);
  plVar2 = param_1 + 0xe1;
  fVar8 = fVar8 - fVar9;
  fVar9 = (float)FUN_00f0e700(plVar2);
  fVar10 = (float)FUN_00f080a0(plVar1,1,param_1 + 0x53,0);
  plVar3 = param_1 + 0x17;
  FUN_00f0e700(plVar3);
  fStack_80 = fVar10;
  uStack_7c = uVar11;
  FUN_00f13f18(plVar3,&fStack_80);
  plVar4 = param_1 + 0x71;
  FUN_00f0e700(plVar3);
  fStack_80 = fVar8;
  uStack_7c = uVar11;
  FUN_00f13f18(plVar4,&fStack_80);
  plVar5 = param_1 + 0xa5;
  FUN_00f0e700(plVar5);
  fStack_80 = fVar8 - fVar9;
  uStack_7c = uVar11;
  FUN_00f13f18(plVar5,&fStack_80);
  fVar9 = *(float *)(param_1 + 0x143);
  plVar6 = param_1 + 0xff;
  FUN_00f0e700(plVar6);
  fStack_80 = fVar8 * fVar9;
  uStack_7c = uVar11;
  FUN_00f13f18(plVar6,&fStack_80);
  FUN_00f07940(0,0,plVar3,7,plVar1,5);
  FUN_00f07940(0,0,plVar4,7,plVar3,7);
  FUN_00f07940(0,0,param_1 + 0xc3,5,plVar1,5);
  FUN_00f07940(fVar8 * *(float *)(param_1 + 0x143),0,plVar2,5,plVar3,7);
  FUN_00f07940(0,0,plVar5,5,plVar2,7);
  FUN_00f07940(fVar8 * *(float *)(param_1 + 0x143),0,plVar6,5,plVar3,7);
  fVar9 = 0.0;
  FUN_00f07940(0,0,param_1 + 0x11d,8,plVar4,8);
  FUN_00f0e700(plVar3);
  FUN_00f13f68(param_1,CONCAT44((int)fVar9,(int)fVar8));
  if (*(long *)(lVar7 + 0x28) == lStack_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca2b40(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char *pcVar4;
  undefined **ppuVar5;
  long *plVar6;
  
  FUN_00f13ca4();
  plVar6 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_02807d58;
  FUN_00f0e4a8(plVar6);
  plVar1 = param_1 + 0x35;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x53;
  FUN_00f11234(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar1,1);
  if ((param_2 & 1) == 0) {
    ppuVar5 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  }
  else {
    ppuVar5 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  }
  FUN_00f0e548(plVar6,*ppuVar5,"white_background");
  FUN_00f0e670(plVar6,&DAT_01bee7f6,2);
  uVar3 = *(uint *)((long)param_1 + 0x13c);
  if ((uVar3 & 0x7f80) != 0x4480) {
    *(uint *)((long)param_1 + 0x13c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x4480;
    FUN_0091ada4(plVar6);
  }
  if ((param_2 & 1) == 0) {
    ppuVar5 = &PTR_s_build___MenuHomepagePartsCommon__02be35e8;
    pcVar4 = "xp_bar_background";
  }
  else {
    ppuVar5 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
    pcVar4 = "white_background";
  }
  FUN_00f0e548(plVar1,*ppuVar5,pcVar4);
  *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xffffffbf;
  FUN_00f112f0(plVar2,1);
  return;
}




void FUN_00ca2c98(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00f13f08(param_3 + 0xb8);
  FUN_00f13f08(param_1,param_2,param_3 + 0x298);
  FUN_00f13f08(param_1,param_2,param_3 + 0x1a8);
  FUN_00f07b78(0x3f800000,0,*(undefined4 *)(param_3 + 0x438),0,0,0,param_3 + 0x1a8,param_3 + 0x298);
  return;
}




void FUN_00ca2d1c(long param_1)

{
  FUN_00f07b78(0x3f800000,0,*(undefined4 *)(param_1 + 0x438),0,0,0,param_1 + 0x1a8,param_1 + 0x298);
  return;
}




void FUN_00ca2d44(undefined1 param_1 [16],long param_2)

{
  *(int *)(param_2 + 0x438) = param_1._0_4_;
  FUN_00f07b78(0x3f800000,0,param_1._0_8_,0,0,0,param_2 + 0x1a8,param_2 + 0x298);
  return;
}




void FUN_00ca2d70(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined4 local_80 [2];
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  FUN_00f13ca4();
  plVar10 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027f8128;
  FUN_00ca2b40(plVar10,0);
  plVar8 = param_1 + 0x9f;
  FUN_00f0e4a8(plVar8);
  plVar11 = param_1 + 0xbd;
  FUN_00f13ca4(plVar11);
  plVar1 = param_1 + 0xd4;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0xf2;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x110;
  FUN_00f0d160(plVar3);
  lVar9 = 0;
  do {
    FUN_00f0e4a8((long)param_1 + lVar9 + 0x9b0);
    lVar9 = lVar9 + 0xf0;
  } while (lVar9 != 0x1e0);
  lVar9 = 0;
  do {
    FUN_00f0d160((long)param_1 + lVar9 + 0xb90);
    lVar9 = lVar9 + 0x130;
  } while (lVar9 != 0x260);
  plVar4 = param_1 + 0x1be;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x1e4;
  FUN_00f0d160(plVar5);
  param_1[0x20b] = 0;
  param_1[0x20a] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  FUN_00f023ec(plVar10,plVar11,1);
  FUN_00f023ec(plVar11,plVar1,1);
  FUN_00f023ec(plVar11,plVar2,1);
  FUN_00f023ec(plVar11,plVar3,1);
  FUN_00f023ec(plVar10,plVar4,1);
  lVar9 = 0;
  plVar11 = param_1 + 0x136;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
    (**(code **)(*param_1 + 0x78))(param_1,(long)param_1 + lVar9 + 0xb90,1);
    lVar9 = lVar9 + 0x130;
    plVar11 = plVar11 + 0x1e;
  } while (lVar9 != 0x260);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  FUN_00f0e548(plVar8,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"xp_bar_fill_gradient");
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_button_play");
  *(byte *)(param_1 + 0x10d) = *(byte *)(param_1 + 0x10d) | 1;
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0da30(plVar3,1);
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  local_80[0] = 0xffc08a77;
  FUN_00f0d7fc(plVar4,local_80);
  FUN_00f0da30(plVar4,1);
  plVar8 = param_1 + 0x136;
  lVar9 = 0;
  do {
    FUN_00f0e548(plVar8,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
    FUN_00f13f08(0x40800000,0x42400000,plVar8);
    uVar6 = *(uint *)((long)plVar8 + 0x84);
    if ((uVar6 & 0x7f80) != 0x2c80) {
      *(uint *)((long)plVar8 + 0x84) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2c80;
      FUN_0091ada4(plVar8);
    }
    FUN_00f0d378((long)param_1 + lVar9 + 0xb90,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50);
    lVar9 = lVar9 + 0x130;
    plVar8 = plVar8 + 0x1e;
  } while (lVar9 != 0x260);
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

