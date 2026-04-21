// functions/00c05 — 11 functions
#include "libGameKindred.h"




void FUN_00c05818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c05824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}




void FUN_00c0582c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027f5670;
  FUN_00c810e8(param_1 + 0x23d);
  lVar2 = -0x4b0;
  puVar1 = param_1 + 0x21f;
  do {
    *puVar1 = &PTR_FUN_028266f0;
    puVar1[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar1 + 0x1a);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + 0xf0;
    puVar1 = puVar1 + -0x1e;
  } while (lVar2 != 0);
  FUN_00f0d3a4(param_1 + 0x181);
  param_1[0x163] = &PTR_FUN_028266f0;
  param_1[0x17a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x17d);
  FUN_00f13d08(param_1 + 0x163);
  FUN_00f0d3a4(param_1 + 0x13d);
  param_1[0x11f] = &PTR_FUN_028266f0;
  param_1[0x136] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x139);
  FUN_00f13d08(param_1 + 0x11f);
  param_1[0x101] = &PTR_FUN_028266f0;
  param_1[0x118] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x11b);
  FUN_00f13d08(param_1 + 0x101);
  param_1[0xe1] = &PTR_FUN_028266f0;
  param_1[0xf8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfb);
  FUN_00f13d08(param_1 + 0xe1);
  param_1[0xc1] = &PTR_FUN_028266f0;
  param_1[0xd8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xdb);
  FUN_00f13d08(param_1 + 0xc1);
  param_1[0xa1] = &PTR_FUN_028266f0;
  param_1[0xb8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbb);
  FUN_00f13d08(param_1 + 0xa1);
  param_1[0x83] = &PTR_FUN_028266f0;
  param_1[0x9a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9d);
  FUN_00f13d08(param_1 + 0x83);
  param_1[0x62] = &PTR_FUN_02827290;
  param_1[0x79] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x80);
  param_1[0x62] = &PTR_FUN_028266f0;
  param_1[0x79] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7c);
  FUN_00f13d08(param_1 + 0x62);
  param_1[0x44] = &PTR_FUN_028266f0;
  param_1[0x5b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5e);
  FUN_00f13d08(param_1 + 0x44);
  FUN_00f01868(param_1 + 0x33);
  FUN_00c034bc(param_1);
  return;
}




void FUN_00c059ec(void *param_1)

{
  FUN_00c0582c();
  operator_delete(param_1);
  return;
}




void FUN_00c05a10(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  FUN_00c03350();
  plVar1 = param_1 + 0x33;
  *param_1 = (long)&PTR_FUN_027f5870;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x44;
  param_1[0x33] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x62;
  FUN_00f10d7c(plVar3);
  plVar4 = param_1 + 0x83;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0xa1;
  FUN_00f0d160(plVar5);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f10dc8(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f0e698(plVar3,0xb);
  FUN_00f0e548(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Futura_Medium_64_S_02be9d18);
  return;
}




void FUN_00c05b90(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x3e0) != 0) {
    FUN_00f0e628(param_1 + 0x310);
  }
  FUN_00f0e548(param_1 + 0x310,PTR_s_build___HUDPartsCommon_atlas_02be3440,param_2);
  return;
}




void FUN_00c05bd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + 0x3e0) != 0) {
    FUN_00f0e628(param_1 + 0x310);
  }
  FUN_00f0e548(param_1 + 0x310,param_2,param_3);
  return;
}




void FUN_00c05c1c(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0x49c);
  uVar1 = uVar2 & 3 | (uint)(param_2 != 0) << 2;
  *(uint *)(param_1 + 0x49c) = uVar2 & 0xfffffff8 | uVar1;
  if (param_2 == 3) {
    if ((uVar2 & 0x7f80) == 0x6c00) {
      return;
    }
    iVar3 = 0xd8;
  }
  else if (param_2 == 2) {
    if ((uVar2 & 0x7f80) == 0x5900) {
      return;
    }
    iVar3 = 0xb2;
  }
  else {
    if ((param_2 != 1) || ((uVar2 & 0x7f80) == 0x4c80)) {
      return;
    }
    iVar3 = 0x99;
  }
  *(uint *)(param_1 + 0x49c) = uVar2 & 0xffff8000 | uVar2 & 0x78 | uVar1 | iVar3 << 7;
  FUN_0091ada4(param_1 + 0x418);
  return;
}




void FUN_00c05ca8(float param_1,long param_2)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,(int)(param_1 + 0.99));
  FUN_00f0d75c(param_2 + 0x508,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c05d38(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x58c) =
       *(uint *)(param_1 + 0x58c) & 0xfffffff8 | *(uint *)(param_1 + 0x58c) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00c05d4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00eff63c(0x3fe00000,0x3fe00000,0x3c23d70a,0);
  uVar2 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e800000,FUN_00a269a4);
  FUN_00f01980(param_1 + 0x198);
  FUN_00f02308(param_1 + 0x198,uVar1,uVar2,0);
  return;
}




void FUN_00c05dc4(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00c03758();
  uVar4 = *(uint *)((long)param_3 + 0x2a4);
  plVar1 = param_3 + 0x44;
  if ((uVar4 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_3 + 0x2a4) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar1);
  }
  local_60 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fStack_5c = param_2;
  FUN_00f13f18(plVar1,&local_60);
  plVar2 = param_3 + 0x62;
  local_60 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  local_60 = local_60 + -20.0;
  param_2 = param_2 + -20.0;
  fStack_5c = param_2;
  FUN_00f13f18(plVar2,&local_60);
  plVar3 = param_3 + 0x83;
  local_60 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fStack_5c = param_2;
  FUN_00f13f18(plVar3,&local_60);
  (**(code **)(*param_3 + 0x28))(param_3,&DAT_03218f08);
  if ((*(float *)(param_3 + 0x4e) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0x274) != DAT_03218f08._4_4_)) {
    param_3[0x4e] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_3 + 0x6c) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0x364) != DAT_03218f08._4_4_)) {
    param_3[0x6c] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_3 + 0x8d) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0x46c) != DAT_03218f08._4_4_)) {
    param_3[0x8d] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(plVar3);
  }
  if ((*(float *)(param_3 + 0xab) != (float)DAT_03218f08) ||
     (*(float *)((long)param_3 + 0x55c) != DAT_03218f08._4_4_)) {
    param_3[0xab] = CONCAT44(DAT_03218f08._4_4_,(float)DAT_03218f08);
    FUN_0091ada4(param_3 + 0xa1);
  }
  FUN_00f07940(0,0,param_3 + 0x33,8,param_3,8);
  FUN_00f07940(0,0,plVar1,8,param_3,8);
  FUN_00f07940(0,0,plVar2,8,param_3,8);
  FUN_00f07940(0,0,plVar3,8,param_3,8);
  FUN_00f07940(0,0,param_3 + 0xa1,8,param_3,8);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

