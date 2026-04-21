// functions/00c95 — 18 functions
#include "libGameKindred.h"




void FUN_00c950dc(undefined8 param_1,int param_2)

{
  if (param_2 == 1) {
    FUN_00c950ec();
    return;
  }
  FUN_00c94aec();
  return;
}




void FUN_00c950ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  float fVar7;
  undefined8 local_78 [4];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((*(char *)(param_1 + 0x8dc) == '\0') &&
     (*(undefined1 *)(param_1 + 0x8dc) = 1, 0.0 < *(float *)(param_1 + 0x8d8))) {
    FUN_00f01980(param_1 + 0xc0);
    lVar1 = param_1 + 0x728;
    FUN_00f01980(lVar1);
    lVar2 = param_1 + 0x670;
    FUN_00f01980(lVar2);
    FUN_00f07940(0,0,param_1,6,*(undefined8 *)(param_1 + 0xb8),4);
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 4;
    if ((~*(uint *)(param_1 + 0x63c) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x63c) = *(uint *)(param_1 + 0x63c) | 0x7f80;
      FUN_0091ada4(param_1 + 0x5b8);
    }
    fVar7 = (float)FUN_00f13e54(lVar1);
    if (*(float *)(param_1 + 0x768) != -fVar7) {
      *(float *)(param_1 + 0x768) = -fVar7;
      FUN_0091ada4(lVar1);
    }
    *(uint *)(param_1 + 0x7ac) = *(uint *)(param_1 + 0x7ac) | 0x10;
    fVar7 = (float)FUN_00f13e54(lVar1);
    if (*(float *)(param_1 + 0x6b0) != fVar7 + 2.0) {
      *(float *)(param_1 + 0x6b0) = fVar7 + 2.0;
      FUN_0091ada4(lVar2);
    }
    lVar4 = DAT_03210d00;
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
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efdd74(puVar6);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3e19999a,puVar6);
    FUN_00efddc4(0x3f800000,puVar6);
    FUN_00f022a0(param_1 + 0xc0,puVar6);
    lVar4 = DAT_03210d00;
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
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efdc08(puVar6);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efcac4(*(undefined4 *)(param_1 + 0x8d8),puVar6);
    local_78[0] = 0;
    FUN_00efdc50(puVar6,local_78);
    FUN_00f022a0(lVar1,puVar6);
    lVar1 = DAT_03210d00;
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
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdc08(puVar6);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4(*(undefined4 *)(param_1 + 0x8d8),puVar6);
    local_78[0] = 0;
    FUN_00efdc50(puVar6,local_78);
    FUN_00f022a0(lVar2,puVar6);
    FUN_00f048e0(local_78,DAT_03210c88,0);
    FUN_00f04760(param_1,local_78,1);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c95460(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  void *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_00b08d84();
  plVar1 = param_1 + 0x4e;
  *param_1 = (long)&PTR_FUN_027fffe0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x6c;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x8a;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0xa8;
  FUN_00f0d160(plVar4);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"currency_stretch");
  FUN_00f0e540(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_00f0e548(plVar3,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"currency_end_right");
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00e705c8(&local_58,&DAT_01ba09ee);
  FUN_00f0d75c(plVar4,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    uStack_54 = 0;
    local_50 = (void *)0x0;
  }
  _local_58 = CONCAT44(uStack_54,0xffdbd4bb);
  FUN_00f0d7fc(plVar4,&local_58);
  FUN_00f0da30(plVar4,1);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c95600(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,param_2);
  FUN_00f0d75c(param_1 + 0x540,&local_48);
  FUN_00c95690(param_1);
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




void FUN_00c95690(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = param_1 + 0x360;
  FUN_00f07940(0,0,lVar1,7,param_1,7);
  FUN_00f07940(0x40a00000,0,param_1 + 0x540,7,lVar1,5);
  fVar3 = (float)FUN_00f080a0(lVar1,7,param_1 + 0x540,5);
  lVar2 = param_1 + 0x270;
  if (fVar3 <= 145.0) {
    fVar3 = 145.0;
  }
  FUN_00f0e700(lVar2);
  FUN_00f13f08(fVar3 + -55.0,lVar2);
  FUN_00f07940(0,0,lVar2,7,lVar1,7);
  fVar4 = 0.0;
  FUN_00f07940(0,0,param_1 + 0x450,7,lVar2,5);
  fVar3 = (float)FUN_00f080a0(lVar2,0,param_1 + 0x450,2);
  FUN_00f13f2c(param_1,CONCAT44((int)fVar4,(int)fVar3));
  return;
}




void FUN_00c9579c(long param_1,byte *param_2)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  FUN_00f0e578(param_1 + 0x360,pbVar1);
  FUN_00c95690(param_1);
  return;
}




void FUN_00c957d4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  FUN_00f0ac5c();
  plVar1 = param_1 + 0x29;
  *param_1 = (long)&PTR_FUN_028068d0;
  FUN_00f10d7c(plVar1);
  plVar2 = param_1 + 0x4a;
  FUN_00f0e4a8(plVar2);
  *(undefined4 *)(param_1 + 0x68) = 0x432e0000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f10dc8(plVar1,PTR_s_build___Frames_tga_02be35e0,"frame_mask");
  FUN_00f0e698(plVar1,0xb);
  FUN_00f0e548(plVar2,PTR_s_build___Frames_tga_02be35e0,"frame_unowned");
  *(uint *)((long)param_1 + 0x1cc) = *(uint *)((long)param_1 + 0x1cc) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x2d4) = *(uint *)((long)param_1 + 0x2d4) & 0xffffffbf;
                    /* WARNING: Could not recover jumptable at 0x00c958b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00c958bc(long param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  char *__s;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00ce9b48(param_2);
  if (*(long *)(param_1 + 0x218) != 0) {
    FUN_00f0e628(param_1 + 0x148);
  }
  if (lVar3 != 0) {
    FUN_008fa54c(local_50,"portrait_");
    __s = *(char **)(lVar3 + 0x10);
    sVar4 = strlen(__s);
    FUN_0090de84(local_50,__s,sVar4);
    pvVar1 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar1 = local_40;
    }
    FUN_00a9bbc4(param_1 + 0x148,pvVar1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c95988(float param_1,long param_2)

{
  *(float *)(param_2 + 0x340) = param_1 * 1.2253522;
  return;
}




void FUN_00c9599c(undefined4 param_1,long *param_2)

{
  *(undefined4 *)(param_2 + 0x68) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00c959a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))();
  return;
}




void FUN_00c959ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float local_58;
  float fStack_54;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + 0x148;
  fVar4 = *(float *)(param_1 + 0x340) / 190.0;
  FUN_00f13f08(fVar4 * 174.0,fVar4 * 174.0,lVar1);
  lVar2 = param_1 + 0x250;
  if ((*(float *)(param_1 + 0x298) != fVar4) || (*(float *)(param_1 + 0x29c) != fVar4)) {
    *(float *)(param_1 + 0x298) = fVar4;
    *(float *)(param_1 + 0x29c) = fVar4;
    FUN_0091ada4(lVar2);
  }
  if ((*(float *)(param_1 + 0x198) != 0.5) || (*(float *)(param_1 + 0x19c) != 0.5)) {
    *(undefined8 *)(param_1 + 0x198) = 0x3f0000003f000000;
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_1 + 0x2a0) != 0.5) || (*(float *)(param_1 + 0x2a4) != 0.5)) {
    *(undefined8 *)(param_1 + 0x2a0) = 0x3f0000003f000000;
    FUN_0091ada4(lVar2);
  }
  fStack_54 = *(float *)(param_1 + 0x340);
  local_58 = (fStack_54 * 154.0) / 190.0;
  FUN_00f13f18(param_1,&local_58);
  if ((*(float *)(param_1 + 0x188) != local_58 * 0.5) ||
     (*(float *)(param_1 + 0x18c) != fStack_54 * 0.5)) {
    *(ulong *)(param_1 + 0x188) = CONCAT44(fStack_54 * 0.5,local_58 * 0.5);
    FUN_0091ada4(lVar1);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x148) + 0x28))(lVar1,&local_50);
  if ((*(float *)(param_1 + 0x290) != local_58 * 0.5) ||
     (*(float *)(param_1 + 0x294) != fStack_54 * 0.5)) {
    *(ulong *)(param_1 + 0x290) = CONCAT44(fStack_54 * 0.5,local_58 * 0.5);
    FUN_0091ada4(lVar2);
  }
  local_50 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x250) + 0x28))(lVar2,&local_50);
  FUN_00f13db4(param_1);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c95b74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028068d0;
  param_1[0x4a] = &PTR_FUN_028266f0;
  param_1[0x61] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 100);
  FUN_00f13d08(param_1 + 0x4a);
  param_1[0x29] = &PTR_FUN_02827290;
  param_1[0x40] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x47);
  param_1[0x29] = &PTR_FUN_028266f0;
  param_1[0x40] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x43);
  FUN_00f13d08(param_1 + 0x29);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c95c2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028068d0;
  param_1[0x4a] = &PTR_FUN_028266f0;
  param_1[0x61] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 100);
  FUN_00f13d08(param_1 + 0x4a);
  param_1[0x29] = &PTR_FUN_02827290;
  param_1[0x40] = &PTR_FUN_028273f8;
  FUN_00f0a79c(param_1 + 0x47);
  param_1[0x29] = &PTR_FUN_028266f0;
  param_1[0x40] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x43);
  FUN_00f13d08(param_1 + 0x29);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c95cec(long *param_1)

{
  FUN_00c939c4(param_1,0);
  *param_1 = (long)&PTR_FUN_02806a20;
  FUN_00b1a1c4(param_1 + 0x17a);
                    /* WARNING: Could not recover jumptable at 0x00c95d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17a,1);
  return;
}




void FUN_00c95d40(long param_1)

{
  FUN_00c93b78();
  FUN_00f07940(0xc2040000,0x420c0000,param_1 + 0xbd0,8,param_1,1);
  return;
}




void FUN_00c95d80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02806a20;
  param_1[0x17a] = &PTR_FUN_027d15d8;
  FUN_0099ccc4(param_1 + 0x246);
  FUN_00f0d3a4(param_1 + 0x21f);
  FUN_00f0d3a4(param_1 + 0x1f9);
  FUN_00f0d3a4(param_1 + 0x1d3);
  param_1[0x1b5] = &PTR_FUN_028266f0;
  param_1[0x1cc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1cf);
  FUN_00f13d08(param_1 + 0x1b5);
  param_1[0x18b] = &PTR_FUN_02826f38;
  param_1[0x1a2] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x1a5);
  FUN_00f13d08(param_1 + 0x18b);
  FUN_00f01868(param_1 + 0x17a);
  FUN_00aad654(param_1);
  return;
}




void FUN_00c95e54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02806a20;
  param_1[0x17a] = &PTR_FUN_027d15d8;
  FUN_0099ccc4(param_1 + 0x246);
  FUN_00f0d3a4(param_1 + 0x21f);
  FUN_00f0d3a4(param_1 + 0x1f9);
  FUN_00f0d3a4(param_1 + 0x1d3);
  param_1[0x1b5] = &PTR_FUN_028266f0;
  param_1[0x1cc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1cf);
  FUN_00f13d08(param_1 + 0x1b5);
  param_1[0x18b] = &PTR_FUN_02826f38;
  param_1[0x1a2] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x1a5);
  FUN_00f13d08(param_1 + 0x18b);
  FUN_00f01868(param_1 + 0x17a);
  FUN_00aad654(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c95f30(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  code *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar10 = tpidr_el0;
  local_70 = *(long *)(lVar10 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_02806bb8;
  FUN_00f0fe84(plVar1);
  plVar2 = param_1 + 0x41;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x5f;
  FUN_00f13ca4(plVar3);
  plVar4 = param_1 + 0x76;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x9c;
  FUN_00c93600(plVar5,0);
  plVar6 = param_1 + 0x1e5;
  FUN_00c93600(plVar6,0);
  plVar7 = param_1 + 0x32e;
  FUN_00c93600(plVar7,0);
  plVar8 = param_1 + 0x477;
  FUN_00c93600(plVar8,0);
  FUN_00c93600(param_1 + 0x5c0,0);
  *(undefined4 *)(param_1 + 0x709) = 4;
  *(undefined1 *)((long)param_1 + 0x384c) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar3,param_1 + 0x5c0,1);
  FUN_00f023ec(plVar3,plVar5,1);
  FUN_00f023ec(plVar3,plVar7,1);
  FUN_00f023ec(plVar3,plVar6,1);
  FUN_00f023ec(plVar3,plVar8,1);
  FUN_00f0ff6c(plVar1,PTR_s_build___MenuDraftPartsCommon_tga_02be3618);
  FUN_00f0ff74(plVar1,"draft_swap_menu_upper_left",0,0,0,"draft_swap_menu_upper_mid",0,0,0,
               "draft_swap_menu_upper_right",0,0,0,"draft_swap_menu_center_left",0,0,0,
               "draft_swap_menu_center_mid",0,0,0,"draft_swap_menu_center_right",0,0,0,
               "draft_swap_menu_lower_left",0,0,0,"draft_swap_menu_lower_mid",0,0,0,
               "draft_swap_menu_lower_right",0,0,0);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  FUN_00f0e548(plVar2,PTR_s_build___MenuDraftPartsCommon_tga_02be3618,"draft_swap_menu_tick");
  *(uint *)((long)param_1 + 0x28c) = *(uint *)((long)param_1 + 0x28c) & 0xffffffbf;
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50);
  FUN_00e705c8(&local_a0,"Swap Heroes?");
  FUN_00f0d75c(plVar4,&local_a0);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = (code *)0x0;
    local_98 = (void *)0x0;
  }
  FUN_00f0d9b0(plVar4,1);
  *(uint *)((long)param_1 + 0x434) = *(uint *)((long)param_1 + 0x434) & 0xfffffffb;
  uVar11 = FUN_00e6ce7c("MENU_DRAFT_LOBBY_SWAP_ACCEPT",0);
  FUN_00c938d4(plVar5,uVar11);
  *(uint *)((long)param_1 + 0x564) = *(uint *)((long)param_1 + 0x564) & 0xfffffffb;
  uVar11 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
  FUN_00c938d4(plVar6,uVar11);
  FUN_00c928a0(0x41800000,0,plVar6);
  *(uint *)((long)param_1 + 0xfac) = *(uint *)((long)param_1 + 0xfac) & 0xfffffffb;
  uVar11 = FUN_00e6ce7c("MENU_DRAFT_LOBBY_SWAP_DECLINE",0);
  FUN_00c938d4(plVar7,uVar11);
  *(uint *)((long)param_1 + 0x19f4) = *(uint *)((long)param_1 + 0x19f4) & 0xfffffffb;
  uVar11 = FUN_00e6ce7c("MENU_DRAFT_MUTE_ALLY_PROMPT",0);
  FUN_00c938d4(plVar8,uVar11);
  uVar9 = DAT_03210c64;
  *(uint *)((long)param_1 + 0x243c) = *(uint *)((long)param_1 + 0x243c) & 0xfffffffb;
  local_a0 = FUN_00c963f8;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  local_78 = uVar9;
  FUN_009693a0(param_1 + 0x9d,&local_a0);
  local_a0 = FUN_00c96460;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  local_78 = uVar9;
  FUN_009693a0(param_1 + 0x1e6,&local_a0);
  local_a0 = FUN_00c964c8;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  local_78 = uVar9;
  FUN_009693a0(param_1 + 0x32f,&local_a0);
  local_a0 = FUN_00c96530;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  local_78 = uVar9;
  FUN_009693a0(param_1 + 0x478,&local_a0);
  local_a0 = FUN_00c965a4;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = param_1;
  local_78 = uVar9;
  FUN_009693a0(param_1 + 0x5c1,&local_a0);
  FUN_00f13f08(0x442b4000,0x43808000,param_1);
  if (*(long *)(lVar10 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

