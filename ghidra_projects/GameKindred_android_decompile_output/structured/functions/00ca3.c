// functions/00ca3 — 24 functions
#include "libGameKindred.h"




void thunk_FUN_00ca3308(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  
  lVar5 = tpidr_el0;
  lStack_78 = *(long *)(lVar5 + 0x28);
  FUN_00ca360c();
  fVar9 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  uStack_7c = (undefined4)param_2;
  uVar11 = param_2;
  fStack_80 = fVar9;
  FUN_00f0d4e0(param_3 + 0x1be);
  FUN_00f13fa0(param_3,(ulong)(uint)(int)(float)uVar11 << 0x20);
  plVar1 = param_3 + 0x1e4;
  fVar10 = 0.0;
  FUN_00f07940(0x41000000,0,plVar1,7,param_3,7);
  FUN_00f08be8(param_3 + 0x1fe);
  uVar6 = FUN_00e70b04();
  plVar2 = param_3 + 0x9f;
  if ((uVar6 & 1) == 0) {
    fVar10 = (float)FUN_00f0d4e0(plVar1);
    FUN_00f13f08((fVar9 - fVar10) + -8.0,param_2,plVar2);
    fVar10 = (float)param_2;
    FUN_00f07b18(0x41000000,plVar2,3,plVar1,1);
  }
  else {
    FUN_00f13f18(plVar2,&fStack_80);
  }
  fVar9 = (float)FUN_00f0e700(plVar2);
  plVar1 = param_3 + 0x17;
  FUN_00f13f08(fVar9 + -16.0,fVar10 + -16.0,plVar1);
  fVar10 = 0.0;
  FUN_00f07940(0x41000000,0,plVar1,7,plVar2,7);
  plVar7 = param_3 + 0xd4;
  uVar11 = FUN_00f0e700(plVar7);
  FUN_00f13e54(plVar1);
  plVar3 = param_3 + 0xf2;
  fVar9 = fVar10;
  FUN_00f0e700(plVar3);
  FUN_00f13f08(uVar11,fVar10 + fVar9 + 16.0,plVar7);
  plVar4 = param_3 + 0xbd;
  uVar11 = FUN_00f0e700(plVar7);
  FUN_00f13e54(plVar1);
  FUN_00f13f08(uVar11,plVar4);
  FUN_00f07940(0,0,plVar7,6,plVar4,6);
  FUN_00f07940(0,0,plVar3,1,plVar7,0);
  FUN_00f07b18(0x80000000,param_3 + 0x110,1,plVar3,3);
  FUN_00f07b18(0,param_3 + 0x110,5,plVar3,5);
  FUN_00f07940(0,0,param_3 + 0x1be,8,plVar1,8);
  FUN_00f07940(0,0,param_3 + 0x136,0,plVar1,3);
  FUN_00f07940(0,0,param_3 + 0x154,1,plVar1,2);
  lVar8 = -0x1e0;
  plVar7 = param_3 + 0x172;
  do {
    FUN_00f07940(0xc0a00000,0,plVar7,5,(long)(param_3 + 0x172) + lVar8,3);
    FUN_00f07b18(0x41000000,plVar7,0,plVar2,2);
    lVar8 = lVar8 + 0xf0;
    plVar7 = plVar7 + 0x26;
  } while (lVar8 != 0);
  fVar9 = (float)FUN_00f13e54(plVar1);
  FUN_00f07940(fVar9 * *(float *)(param_3 + 0x9e),0,plVar4,3,plVar1,3);
  if (*(long *)(lVar5 + 0x28) == lStack_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca30d0(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  
  lVar2 = 0;
  uVar1 = (param_2 & 1) << 2;
  *(uint *)(param_1 + 0x66c) =
       *(uint *)(param_1 + 0x66c) & 0xfffffff8 | *(uint *)(param_1 + 0x66c) & 3 | (param_2 & 1) << 2
  ;
  puVar3 = (uint *)(param_1 + 0xa34);
  do {
    *puVar3 = *puVar3 & 0xfffffffb | uVar1;
    *(uint *)(param_1 + 0xc14 + lVar2) = *(uint *)(param_1 + 0xc14 + lVar2) & 0xfffffffb | uVar1;
    lVar2 = lVar2 + 0x130;
    puVar3 = puVar3 + 0x3c;
  } while (lVar2 != 0x260);
  return;
}




void FUN_00ca311c(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0xe74) =
       *(uint *)(param_1 + 0xe74) & 0xfffffff8 | *(uint *)(param_1 + 0xe74) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00ca3130(float param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_68;
  void *local_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(float *)(param_3 + 0x1050) = param_1;
  *(undefined4 *)(param_3 + 0x1054) = param_2;
  FUN_00e6a8a8(auStack_58,&DAT_01bb6d43,(int)param_1);
  FUN_00e705c8(&local_68,auStack_58);
  (**(code **)(*(long *)(param_3 + 0xb90) + 0x138))(param_3 + 0xb90,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  FUN_00e6a8a8(auStack_58,&DAT_01bb6d43,(int)*(float *)(param_3 + 0x1054));
  FUN_00e705c8(&local_68,auStack_58);
  (**(code **)(*(long *)(param_3 + 0xcc0) + 0x138))(param_3 + 0xcc0,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  fVar4 = *(float *)(param_3 + 0x1050);
  fVar5 = *(float *)(param_3 + 0x1054);
  fVar2 = *(float *)(param_3 + 0x1058) - fVar4;
  if (fVar5 <= fVar2) {
    fVar2 = fVar5;
  }
  fVar3 = fVar4;
  if (fVar4 <= fVar2) {
    fVar3 = fVar2;
  }
  FUN_00e6a8a8(auStack_58,"%d/%d",(int)fVar3,(int)(fVar5 - fVar4));
  FUN_00e705c8(&local_68,auStack_58);
  FUN_00f0d75c(param_3 + 0xdf0,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca3280(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x1058) = param_1;
  return;
}




void FUN_00ca3288(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 0x105c) = param_2;
  FUN_00e70510(&local_38);
  FUN_00e70e18(&local_38,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0x105c));
  FUN_00f0d75c(param_1 + 0xf20,&local_38);
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




void FUN_00ca3308(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float local_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  FUN_00ca360c();
  fVar9 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  uStack_7c = (undefined4)param_2;
  uVar11 = param_2;
  local_80 = fVar9;
  FUN_00f0d4e0(param_3 + 0x1be);
  FUN_00f13fa0(param_3,(ulong)(uint)(int)(float)uVar11 << 0x20);
  plVar1 = param_3 + 0x1e4;
  fVar10 = 0.0;
  FUN_00f07940(0x41000000,0,plVar1,7,param_3,7);
  FUN_00f08be8(param_3 + 0x1fe);
  uVar6 = FUN_00e70b04();
  plVar2 = param_3 + 0x9f;
  if ((uVar6 & 1) == 0) {
    fVar10 = (float)FUN_00f0d4e0(plVar1);
    FUN_00f13f08((fVar9 - fVar10) + -8.0,param_2,plVar2);
    fVar10 = (float)param_2;
    FUN_00f07b18(0x41000000,plVar2,3,plVar1,1);
  }
  else {
    FUN_00f13f18(plVar2,&local_80);
  }
  fVar9 = (float)FUN_00f0e700(plVar2);
  plVar1 = param_3 + 0x17;
  FUN_00f13f08(fVar9 + -16.0,fVar10 + -16.0,plVar1);
  fVar10 = 0.0;
  FUN_00f07940(0x41000000,0,plVar1,7,plVar2,7);
  plVar7 = param_3 + 0xd4;
  uVar11 = FUN_00f0e700(plVar7);
  FUN_00f13e54(plVar1);
  plVar3 = param_3 + 0xf2;
  fVar9 = fVar10;
  FUN_00f0e700(plVar3);
  FUN_00f13f08(uVar11,fVar10 + fVar9 + 16.0,plVar7);
  plVar4 = param_3 + 0xbd;
  uVar11 = FUN_00f0e700(plVar7);
  FUN_00f13e54(plVar1);
  FUN_00f13f08(uVar11,plVar4);
  FUN_00f07940(0,0,plVar7,6,plVar4,6);
  FUN_00f07940(0,0,plVar3,1,plVar7,0);
  FUN_00f07b18(0x80000000,param_3 + 0x110,1,plVar3,3);
  FUN_00f07b18(0,param_3 + 0x110,5,plVar3,5);
  FUN_00f07940(0,0,param_3 + 0x1be,8,plVar1,8);
  FUN_00f07940(0,0,param_3 + 0x136,0,plVar1,3);
  FUN_00f07940(0,0,param_3 + 0x154,1,plVar1,2);
  lVar8 = -0x1e0;
  plVar7 = param_3 + 0x172;
  do {
    FUN_00f07940(0xc0a00000,0,plVar7,5,(long)(param_3 + 0x172) + lVar8,3);
    FUN_00f07b18(0x41000000,plVar7,0,plVar2,2);
    lVar8 = lVar8 + 0xf0;
    plVar7 = plVar7 + 0x26;
  } while (lVar8 != 0);
  fVar9 = (float)FUN_00f13e54(plVar1);
  FUN_00f07940(fVar9 * *(float *)(param_3 + 0x9e),0,plVar4,3,plVar1,3);
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca360c(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_78;
  void *local_70;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar3 = *(float *)(param_1 + 0x1054);
  fVar4 = *(float *)(param_1 + 0x1050);
  fVar5 = *(float *)(param_1 + 0x1058);
  if (fVar3 <= *(float *)(param_1 + 0x1058)) {
    fVar5 = fVar3;
  }
  fVar2 = fVar4;
  if (fVar4 <= fVar5) {
    fVar2 = fVar5;
  }
  fVar5 = (fVar2 - fVar4) / (fVar3 - fVar4);
  *(float *)(param_1 + 0x4f0) = fVar5;
  FUN_00f07b78(0x3f800000,0,fVar5,0,0,0,param_1 + 0x260,param_1 + 0x350);
  FUN_00f07b78(0x3f800000,0,*(undefined4 *)(param_1 + 0x4f0),0,0,0,param_1 + 0x260,param_1 + 0x350);
  FUN_00e6a8a8(auStack_68,&DAT_01bb6d43,(int)*(float *)(param_1 + 0x1058));
  FUN_00e705c8(&local_78,auStack_68);
  FUN_00f0d75c(param_1 + 0x880,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  FUN_00e6a8a8(auStack_68,"%d/%d",(int)(*(float *)(param_1 + 0x1058) - *(float *)(param_1 + 0x1050))
               ,(int)(*(float *)(param_1 + 0x1054) - *(float *)(param_1 + 0x1050)));
  FUN_00e705c8(&local_78,auStack_68);
  FUN_00f0d75c(param_1 + 0xdf0,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca3778(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02807c10;
  FUN_00f0d3a4(param_1 + 0x11d);
  param_1[0xff] = &PTR_FUN_028266f0;
  param_1[0x116] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x119);
  FUN_00f13d08(param_1 + 0xff);
  param_1[0xe1] = &PTR_FUN_028266f0;
  param_1[0xf8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfb);
  FUN_00f13d08(param_1 + 0xe1);
  param_1[0xc3] = &PTR_FUN_028266f0;
  param_1[0xda] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xdd);
  FUN_00f13d08(param_1 + 0xc3);
  param_1[0xa5] = &PTR_FUN_028266f0;
  param_1[0xbc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbf);
  FUN_00f13d08(param_1 + 0xa5);
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




void FUN_00ca3894(void *param_1)

{
  FUN_00ca3778();
  operator_delete(param_1);
  return;
}




void FUN_00ca38b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02807d58;
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




void FUN_00ca3940(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02807d58;
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




void FUN_00ca39d0(long *param_1)

{
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_02807ea0;
  FUN_00f0e4a8(param_1 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x00ca3a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
  return;
}




void FUN_00ca3a20(long param_1)

{
  if (*(long *)(param_1 + 0x188) != 0) {
    return;
  }
  FUN_00f0e548(param_1 + 0xb8);
  FUN_00f0e9c0(param_1 + 0xb8,1);
  FUN_00ca3a6c(param_1);
  return;
}




void FUN_00ca3a6c(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (**(code **)(*param_3 + 0x48))();
  uStack_3c = param_2;
  FUN_00f13f18(param_3 + 0x17,&local_40);
  FUN_00f07940(0,0,param_3 + 0x17,8,param_3,8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00ca3a6c(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uStack_40 = (**(code **)(*param_3 + 0x48))();
  uStack_3c = param_2;
  FUN_00f13f18(param_3 + 0x17,&uStack_40);
  FUN_00f07940(0,0,param_3 + 0x17,8,param_3,8);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca3af8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_02807fe8;
  FUN_00f017e8(param_1 + 0x17);
  plVar1 = param_1 + 0x2a;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x48;
  FUN_00f0d160(plVar2);
  FUN_00f0e4a8(param_1 + 0x6e);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6e,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0dac8(plVar2,3);
  FUN_00f0d7fc(plVar2,&DAT_01bee7fa);
  FUN_00f0d9b0(plVar2,1);
  FUN_00f0db2c(0xbdcccccd,plVar2);
  FUN_00f0da30(plVar2,1);
  FUN_00f0da80(plVar2,&DAT_01bee7f6);
  return;
}




void FUN_00ca3c60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02807fe8;
  if ((long *)param_1[0x28] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x28] + 8))();
  }
  param_1[0x28] = 0;
  if ((long *)param_1[0x29] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x29] + 8))();
  }
  param_1[0x29] = 0;
  param_1[0x6e] = &PTR_FUN_028266f0;
  param_1[0x85] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x88);
  FUN_00f13d08(param_1 + 0x6e);
  FUN_00f0d3a4(param_1 + 0x48);
  param_1[0x2a] = &PTR_FUN_028266f0;
  param_1[0x41] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x44);
  FUN_00f13d08(param_1 + 0x2a);
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ca3d20(long param_1)

{
  if (*(long **)(param_1 + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x140) + 8))();
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (*(long **)(param_1 + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 8))();
  }
  *(undefined8 *)(param_1 + 0x148) = 0;
  return;
}




void FUN_00ca3d6c(void *param_1)

{
  FUN_00ca3c60();
  operator_delete(param_1);
  return;
}




void thunk_FUN_00ca3d94(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  plVar1 = param_3 + 0x48;
  uVar3 = (**(code **)(*param_3 + 0x48))();
  (**(code **)(*param_3 + 0x48))(param_3);
  param_2 = param_2 * 0.5;
  FUN_00f13f08(uVar3,param_2,plVar1);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f0dc4c(param_2 * 0.5,0,0x3f800000,plVar1);
  fVar4 = 0.0;
  FUN_00f07940(0,param_3 + 0x6e,8,param_3,8);
  lVar2 = param_3[0x29];
  if (lVar2 == 0) {
    lVar2 = param_3[0x28];
  }
  if (lVar2 != 0) {
    fVar4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    FUN_00f13f08(fVar4 * 0.8,0x43a80000,lVar2);
    FUN_00f07940(0,0,lVar2,8,param_3,8);
    fVar4 = 0.0;
    FUN_00f07940(0,plVar1,8,lVar2,6);
  }
  fVar5 = *(float *)((long)param_3 + 0x284);
  FUN_00f01c20(plVar1);
  fVar5 = fVar5 + fVar4;
  (**(code **)(*param_3 + 0x48))(param_3);
  if (fVar4 < fVar5) {
    FUN_00f07940(0,0,plVar1,6,param_3,6);
  }
  uVar3 = (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f0d4e0(plVar1);
  FUN_00f13f08(uVar3,param_3 + 0x2a);
  FUN_00f07940(0,0,param_3 + 0x2a,8,plVar1,8);
  return;
}




void FUN_00ca3d94(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  plVar1 = param_3 + 0x48;
  uVar3 = (**(code **)(*param_3 + 0x48))();
  (**(code **)(*param_3 + 0x48))(param_3);
  param_2 = param_2 * 0.5;
  FUN_00f13f08(uVar3,param_2,plVar1);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f0dc4c(param_2 * 0.5,0,0x3f800000,plVar1);
  fVar4 = 0.0;
  FUN_00f07940(0,param_3 + 0x6e,8,param_3,8);
  lVar2 = param_3[0x29];
  if (lVar2 == 0) {
    lVar2 = param_3[0x28];
  }
  if (lVar2 != 0) {
    fVar4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    FUN_00f13f08(fVar4 * 0.8,0x43a80000,lVar2);
    FUN_00f07940(0,0,lVar2,8,param_3,8);
    fVar4 = 0.0;
    FUN_00f07940(0,plVar1,8,lVar2,6);
  }
  fVar5 = *(float *)((long)param_3 + 0x284);
  FUN_00f01c20(plVar1);
  fVar5 = fVar5 + fVar4;
  (**(code **)(*param_3 + 0x48))(param_3);
  if (fVar4 < fVar5) {
    FUN_00f07940(0,0,plVar1,6,param_3,6);
  }
  uVar3 = (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f0d4e0(plVar1);
  FUN_00f13f08(uVar3,param_3 + 0x2a);
  FUN_00f07940(0,0,param_3 + 0x2a,8,plVar1,8);
  return;
}




void FUN_00ca3f3c(float param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = param_2 + 0x370;
  FUN_00f0e548(lVar1);
  uVar2 = *(uint *)(param_2 + 0x3f4);
  if ((uVar2 >> 7 & 0xff) != (int)(param_1 * 255.0)) {
    *(uint *)(param_2 + 0x3f4) =
         uVar2 & 0xffff8000 | uVar2 & 0x7f | ((int)(param_1 * 255.0) & 0xffU) << 7;
    FUN_0091ada4(lVar1);
  }
  FUN_00f13f08(0x43eb0000,0x43eb0000,lVar1);
  return;
}




void FUN_00ca3fb0(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long **)(param_1 + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x140) + 8))();
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (*(long **)(param_1 + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 8))();
  }
  *(long **)(param_1 + 0x140) = param_2;
  *(undefined8 *)(param_1 + 0x148) = 0;
  local_40 = 0x3f0000003f000000;
  (**(code **)(*param_2 + 0x28))(param_2,&local_40);
  FUN_00f023ec(param_1 + 0xb8,*(undefined8 *)(param_1 + 0x140),1);
  FUN_00f0d75c(param_1 + 0x240,param_3);
  FUN_00ca3d94(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

