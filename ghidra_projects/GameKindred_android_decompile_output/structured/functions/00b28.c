// functions/00b28 — 12 functions
#include "libGameKindred.h"




void FUN_00b28094(long param_1,byte *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  byte *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_60 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_60 = param_2 + 1;
  }
  uVar2 = FUN_00b118a0(param_1 + 0x88,&local_60);
  if ((uVar2 & 1) == 0) {
    puVar6 = (uint *)(param_1 + 0xe0);
    uVar5 = *puVar6;
    uVar4 = 0xffffffff;
    do {
      lVar3 = *(long *)(param_1 + (long)(int)uVar5 * 8 + 0xb8);
      if (*(int *)(lVar3 + 0x168) == 0) {
        FUN_00b26618(lVar3,param_2,param_3,*(undefined1 *)(param_1 + 0xe4));
        local_60 = param_2 + 1;
        if ((*param_2 & 1) != 0) {
          local_60 = *(byte **)(param_2 + 0x10);
        }
        FUN_00a00cbc(param_1 + 0x88,&local_60,puVar6);
        break;
      }
      uVar4 = uVar4 + 1;
      uVar5 = (uVar5 + 1) % 5;
      *puVar6 = uVar5;
    } while (uVar4 < 4);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00b281a4(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xe0);
  uVar1 = 0xffffffff;
  do {
    if (*(int *)(*(long *)(param_1 + (long)(int)uVar2 * 8 + 0xb8) + 0x168) == 0) {
      return 1;
    }
    uVar1 = uVar1 + 1;
    uVar2 = (uVar2 + 1) % 5;
    *(uint *)(param_1 + 0xe0) = uVar2;
  } while (uVar1 < 4);
  return 0;
}




void FUN_00b281f8(long param_1,byte *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  byte *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_50 = param_2 + 1;
  }
  uVar2 = FUN_00b118a0(param_1 + 0x88,&local_50);
  if ((uVar2 & 1) != 0) {
    local_50 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      local_50 = *(byte **)(param_2 + 0x10);
    }
    piVar3 = (int *)FUN_00b1231c(param_1 + 0x88,&local_50);
    FUN_00b26618(*(undefined8 *)(param_1 + (long)*piVar3 * 8 + 0xb8),param_2,param_3,
                 *(undefined1 *)(param_1 + 0xe4));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b282bc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined **ppuVar10;
  uint uVar11;
  uint uVar12;
  
  FUN_00f0ac5c();
  plVar1 = param_1 + 0x29;
  *param_1 = (long)&PTR_FUN_027dea60;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x3a;
  param_1[0x29] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x58;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x76;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x94;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0xb2;
  FUN_00f0e4a8(plVar6);
  FUN_00f017e8(param_1 + 0xd0);
  plVar7 = param_1 + 0xe1;
  param_1[0xd0] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar7);
  plVar8 = param_1 + 0xff;
  FUN_00f0d160(plVar8);
  plVar9 = param_1 + 0x125;
  FUN_00f0d160();
  param_1[0x14b] = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xd0,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  uVar12 = FUN_0092ea9c();
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar11 = *(uint *)((long)param_1 + 0x254);
  if ((uVar11 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x254) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x3300;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  if ((*(uint *)((long)param_1 + 0x344) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x344) = *(uint *)((long)param_1 + 0x344) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  if ((*(uint *)((long)param_1 + 0x614) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x614) = *(uint *)((long)param_1 + 0x614) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  if ((*(uint *)((long)param_1 + 0x434) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x434) = *(uint *)((long)param_1 + 0x434) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  if ((*(uint *)((long)param_1 + 0x524) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x524) = *(uint *)((long)param_1 + 0x524) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  if ((*(uint *)((long)param_1 + 0x78c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x78c) = *(uint *)((long)param_1 + 0x78c) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0d92c(plVar8,PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20,&DAT_01bee7fa);
  FUN_00f0d75c(plVar8,param_2);
  ppuVar10 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar12 & 1) == 0) {
    ppuVar10 = &PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70;
  }
  FUN_00f0d378(plVar9,*ppuVar10);
  FUN_00f0d75c(plVar9,param_3);
  uVar11 = *(uint *)((long)param_1 + 0x9ac);
  if ((uVar11 & 0x7f80) == 0x4c80) {
    return;
  }
  *(uint *)((long)param_1 + 0x9ac) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x4c80;
  FUN_0091ada4(plVar9);
  return;
}




void FUN_00b286cc(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined8 local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  uVar5 = (**(code **)(*param_3 + 0x48))();
  *(undefined4 *)(param_3 + 0x14b) = uVar5;
  *(undefined4 *)((long)param_3 + 0xa5c) = param_2;
  FUN_00f13f18(param_3 + 0x3a,param_3 + 0x14b);
  fVar9 = 18.0;
  FUN_00f13f08((int)param_3[0x14b],param_3 + 0x58);
  plVar1 = param_3 + 0x125;
  FUN_00f0d4e0(plVar1);
  fVar9 = fVar9 + 16.0;
  plVar2 = param_3 + 0x94;
  FUN_00f13f08((int)param_3[0x14b],fVar9,plVar2);
  if ((*(float *)(param_3 + 0x9c) != 0.0) ||
     (*(float *)((long)param_3 + 0x4e4) != *(float *)((long)param_3 + 0xa5c))) {
    *(undefined4 *)(param_3 + 0x9c) = 0;
    *(float *)((long)param_3 + 0x4e4) = *(float *)((long)param_3 + 0xa5c);
    FUN_0091ada4(plVar2);
  }
  local_80 = 0x3f80000000000000;
  (**(code **)(param_3[0x94] + 0x28))(plVar2,&local_80);
  plVar2 = param_3 + 0xb2;
  fVar8 = (*(float *)((long)param_3 + 0xa5c) + -18.0) - fVar9;
  FUN_00f13f08(0x41900000,plVar2);
  if (*(float *)((long)param_3 + 0x5d4) != 18.0) {
    *(undefined4 *)((long)param_3 + 0x5d4) = 0x41900000;
    FUN_0091ada4(plVar2);
  }
  plVar3 = param_3 + 0x76;
  uVar5 = FUN_00f0e700(plVar2);
  local_80 = CONCAT44(fVar8,uVar5);
  FUN_00f13f18(plVar3,&local_80);
  fVar8 = *(float *)(param_3 + 0x7e);
  if ((fVar8 != *(float *)(param_3 + 0x14b)) ||
     (fVar8 = *(float *)((long)param_3 + 0x3f4), fVar8 != 18.0)) {
    *(float *)(param_3 + 0x7e) = *(float *)(param_3 + 0x14b);
    *(undefined4 *)((long)param_3 + 0x3f4) = 0x41900000;
    FUN_0091ada4(plVar3);
  }
  local_80 = 0x3f800000;
  (**(code **)(param_3[0x76] + 0x28))(plVar3,&local_80);
  fVar6 = *(float *)(param_3 + 0x14b);
  plVar2 = param_3 + 0xff;
  plVar3 = param_3 + 0xe1;
  FUN_00f0d4e0(plVar2);
  FUN_00f13f08(fVar6 + -36.0,fVar8 + 40.0,plVar3);
  if ((*(float *)(param_3 + 0xe9) != 18.0) || (*(float *)((long)param_3 + 0x74c) != 18.0)) {
    lVar7 = NEON_fmov(0x41900000,4);
    param_3[0xe9] = lVar7;
    FUN_0091ada4(plVar3);
  }
  local_80 = 0;
  (**(code **)(param_3[0xe1] + 0x28))(plVar3,&local_80);
  fVar6 = 0.0;
  FUN_00f0db64(*(float *)(param_3 + 0x14b) + -36.0 + -10.0,0,0x3f800000,plVar2);
  fVar8 = *(float *)(param_3 + 0x14b);
  FUN_00f0e700(plVar3);
  fVar6 = fVar6 * 0.5 + 18.0;
  if ((*(float *)(param_3 + 0x107) != fVar8 * 0.5) || (*(float *)((long)param_3 + 0x83c) != fVar6))
  {
    *(float *)(param_3 + 0x107) = fVar8 * 0.5;
    *(float *)((long)param_3 + 0x83c) = fVar6;
    FUN_0091ada4(plVar2);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(param_3[0xff] + 0x28))(plVar2,&local_80);
  FUN_00f0db64(*(float *)(param_3 + 0x14b) + -36.0 + -10.0,0,0x3f800000,plVar1);
  fVar9 = *(float *)((long)param_3 + 0xa5c) - fVar9 * 0.5;
  if ((*(float *)(param_3 + 0x12d) != *(float *)(param_3 + 0x14b) * 0.5) ||
     (*(float *)((long)param_3 + 0x96c) != fVar9)) {
    *(float *)(param_3 + 0x12d) = *(float *)(param_3 + 0x14b) * 0.5;
    *(float *)((long)param_3 + 0x96c) = fVar9;
    FUN_0091ada4(plVar1);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_80);
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b289f4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long *plVar1;
  
  FUN_00b282bc();
  plVar1 = param_1 + 0x14d;
  *param_1 = (long)&PTR_FUN_027debc8;
  FUN_00acd4d4(plVar1,1);
  thunk_FUN_00e7051c(param_1 + 0x266,param_2);
  thunk_FUN_00e7051c(param_1 + 0x268,param_3);
  thunk_FUN_00e7051c(param_1 + 0x26a,param_4);
  *(undefined4 *)((long)param_1 + 0x1364) = param_5;
  *(undefined4 *)(param_1 + 0x14c) = 1;
  FUN_00f023ec(param_1 + 0xd0,plVar1,1);
  FUN_00acd9b0(plVar1,param_1 + 0x26a);
  *(int *)(param_1 + 0x26c) = *(int *)((long)param_1 + 0x1364) / 10 + 1;
                    /* WARNING: Could not recover jumptable at 0x00b28ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00b28ae8(long *param_1,uint param_2)

{
  long *plVar1;
  
  plVar1 = param_1 + 0x14d;
  if ((param_2 & 1) == 0) {
    FUN_00acd82c(plVar1);
  }
  else {
    FUN_00acd7d8();
    FUN_00acdd70(plVar1,*(undefined4 *)((long)param_1 + 0x1364));
    FUN_00acd9b0(plVar1,param_1 + 0x26a);
    FUN_00acd880(plVar1);
  }
  FUN_00acd85c(plVar1,param_2 & 1);
                    /* WARNING: Could not recover jumptable at 0x00b28b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00b28b64(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00b286cc();
  local_40 = 0x3f0000003f000000;
  plVar1 = (long *)(param_1 + 0xa68);
  fVar3 = (float)*(undefined8 *)(param_1 + 0xa58) * 0.5;
  fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 0xa58) >> 0x20) * 0.5;
  if ((*(float *)(param_1 + 0xaa8) != fVar3) || (*(float *)(param_1 + 0xaac) != fVar4)) {
    *(ulong *)(param_1 + 0xaa8) = CONCAT44(fVar4,fVar3);
    FUN_0091ada4(plVar1);
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_40);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b28c04(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long *plVar1;
  
  FUN_00b282bc();
  plVar1 = param_1 + 0x14d;
  *param_1 = (long)&PTR_FUN_027ded30;
  FUN_00b1dc5c(plVar1);
  thunk_FUN_00e7051c(param_1 + 699,param_2);
  thunk_FUN_00e7051c(param_1 + 0x2bd,param_3);
  thunk_FUN_00e7051c(param_1 + 0x2bf,param_4);
  *(undefined4 *)(param_1 + 0x2c1) = param_5;
  *(undefined1 *)((long)param_1 + 0x160c) = 1;
  *(undefined4 *)(param_1 + 0x14c) = 2;
  FUN_00f023ec(param_1 + 0xd0,plVar1,1);
  if (*(char *)((long)param_1 + 0x160c) == '\0') {
    FUN_00b1e298(plVar1,(int)param_1[0x2c1]);
    FUN_00b1e7b0(plVar1,param_1 + 0x2bf,&DAT_01bee7fa);
  }
                    /* WARNING: Could not recover jumptable at 0x00b28cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00b28cf0(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if ((param_2 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x160c) != '\0') {
      FUN_00b1dfd0(param_1 + 0x14d);
    }
  }
  else if (*(char *)((long)param_1 + 0x160c) != '\0') {
    plVar1 = param_1 + 0x14d;
    FUN_00b1ded0(plVar1);
    FUN_00b1e298(plVar1,(int)param_1[0x2c1]);
    FUN_00b1e7b0(plVar1,param_1 + 0x2bf,&DAT_01bee7fa);
  }
                    /* WARNING: Could not recover jumptable at 0x00b28d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00b28d68(long param_1)

{
  float fVar1;
  float fVar2;
  
  FUN_00b286cc();
  fVar1 = (float)*(undefined8 *)(param_1 + 0xa58) * 0.5;
  fVar2 = (float)((ulong)*(undefined8 *)(param_1 + 0xa58) >> 0x20) * 0.6;
  if ((*(float *)(param_1 + 0xaa8) == fVar1) && (*(float *)(param_1 + 0xaac) == fVar2)) {
    return;
  }
  *(ulong *)(param_1 + 0xaa8) = CONCAT44(fVar2,fVar1);
  FUN_0091ada4(param_1 + 0xa68);
  return;
}




void FUN_00b28dc8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined **ppuVar12;
  uint uVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  int iVar17;
  uint uVar18;
  
  FUN_00b282bc();
  plVar1 = param_1 + 0x14d;
  *param_1 = (long)&PTR_FUN_027dee98;
  FUN_00b1dc5c();
  plVar3 = param_1 + 699;
  FUN_00b1dc5c();
  plVar4 = param_1 + 0x429;
  FUN_00acd4d4(plVar4,1);
  FUN_00f0d160(param_1 + 0x542);
  plVar5 = param_1 + 0x568;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0x586;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0x5a4;
  FUN_00f0e4a8(plVar7);
  plVar8 = param_1 + 0x5c2;
  FUN_00f0d160(plVar8);
  plVar9 = param_1 + 0x5e8;
  FUN_00f0d160(plVar9);
  plVar10 = param_1 + 0x60e;
  FUN_00f0d160(plVar10);
  plVar11 = param_1 + 0x634;
  FUN_00f0d160();
  thunk_FUN_00e7051c(param_1 + 0x65a,param_2);
  thunk_FUN_00e7051c(param_1 + 0x65c,param_3);
  thunk_FUN_00e7051c(param_1 + 0x65e,param_4);
  thunk_FUN_00e7051c(param_1 + 0x660,param_5);
  thunk_FUN_00e7051c(param_1 + 0x662,param_6);
  *(undefined4 *)((long)param_1 + 0x3324) = param_8;
  *(undefined4 *)(param_1 + 0x665) = param_9;
  *(undefined4 *)((long)param_1 + 0x332c) = param_7;
  *(char *)(param_1 + 0x666) = '\x01';
  uVar13 = FUN_0092ea9c();
  *(undefined4 *)(param_1 + 0x14c) = 3;
  FUN_00f023ec(param_1 + 0x29,plVar5,1);
  FUN_00f023ec(param_1 + 0x29,plVar6,1);
  plVar2 = param_1 + 0xd0;
  FUN_00f023ec(plVar2,plVar1,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f023ec(plVar2,plVar7,1);
  FUN_00f023ec(plVar2,plVar8,1);
  FUN_00f023ec(plVar2,plVar9,1);
  FUN_00f023ec(plVar2,plVar10,1);
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar18 = *(uint *)((long)param_1 + 0x2bc4);
  if ((uVar18 & 0x7f80) != 0x2c80) {
    *(uint *)((long)param_1 + 0x2bc4) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x2c80;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  if ((*(uint *)((long)param_1 + 0x2cb4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2cb4) = *(uint *)((long)param_1 + 0x2cb4) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar6);
  }
  if ((char)param_1[0x666] == '\0') {
    FUN_00b1e298(plVar1,(int)param_1[0x665]);
    FUN_00b1e7b0(plVar1,param_1 + 0x662,&DAT_01bee7fa);
  }
  iVar17 = *(int *)((long)param_1 + 0x3324);
  if (iVar17 < 1) {
    ppuVar12 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
    if ((uVar13 & 1) == 0) {
      ppuVar12 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
    }
    FUN_00f0d92c(plVar10,*ppuVar12,&DAT_01bee7fa);
    FUN_00f0dac8(plVar10,3);
    uVar15 = FUN_00e6ce7c("MENU_TROPHY_NO_GUILD_LABEL",0);
    FUN_00f0d75c(plVar10,uVar15);
    uVar18 = *(uint *)((long)param_1 + 0x30f4);
    if ((uVar18 & 0x7f80) != 0x3300) {
      *(uint *)((long)param_1 + 0x30f4) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x3300;
      FUN_0091ada4(plVar10);
      uVar18 = *(uint *)((long)param_1 + 0x30f4);
    }
    uVar18 = uVar18 | 4;
    goto LAB_00b2937c;
  }
  if ((*(float *)(param_1 + 0x433) != 0.5) || (*(float *)((long)param_1 + 0x219c) != 0.5)) {
    param_1[0x433] = 0x3f0000003f000000;
    FUN_0091ada4(plVar4);
    iVar17 = *(int *)((long)param_1 + 0x3324);
  }
  *(uint *)((long)param_1 + 0x2954) = *(uint *)((long)param_1 + 0x2954) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x2824) = *(uint *)((long)param_1 + 0x2824) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x2734) = *(uint *)((long)param_1 + 0x2734) & 0xfffffffb;
  *(int *)(param_1 + 0x664) = iVar17 / 10 + 1;
  ppuVar12 = &PTR_s_build___Fonts_Brandon_Light_60_f_02be9c18;
  if ((uVar13 & 1) == 0) {
    ppuVar12 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
  }
  FUN_00f0d92c(plVar8,*ppuVar12,&DAT_01bee7fa);
  switch((int)param_1[0x664]) {
  case 1:
    pcVar14 = "GUILD_OVERVIEW_TIER_1_LABEL";
    break;
  case 2:
    pcVar14 = "GUILD_OVERVIEW_TIER_2_LABEL";
    break;
  case 3:
    pcVar14 = "GUILD_OVERVIEW_TIER_3_LABEL";
    break;
  case 4:
    pcVar14 = "GUILD_OVERVIEW_TIER_4_LABEL";
    break;
  case 5:
    pcVar14 = "GUILD_OVERVIEW_TIER_5_LABEL";
    break;
  case 6:
    pcVar14 = "GUILD_OVERVIEW_TIER_6_LABEL";
    break;
  case 7:
    pcVar14 = "GUILD_OVERVIEW_TIER_7_LABEL";
    break;
  case 8:
    pcVar14 = "GUILD_OVERVIEW_TIER_8_LABEL";
    break;
  case 9:
    pcVar14 = "GUILD_OVERVIEW_TIER_9_LABEL";
    break;
  case 10:
    pcVar14 = "GUILD_OVERVIEW_TIER_10_LABEL";
    break;
  default:
    puVar16 = &DAT_03210450;
    goto LAB_00b29298;
  }
  puVar16 = (undefined8 *)FUN_00e6ce7c(pcVar14,0);
LAB_00b29298:
  FUN_00f0d75c(plVar8,puVar16);
  ppuVar12 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
  if ((uVar13 & 1) == 0) {
    ppuVar12 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80;
  }
  FUN_00f0d92c(plVar9,*ppuVar12,&DAT_01bee7fa);
  FUN_00f0d75c(plVar9,param_1 + 0x660);
  uVar18 = *(uint *)((long)param_1 + 0x2fc4);
  if ((uVar18 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x2fc4) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x3300;
    FUN_0091ada4(plVar9);
  }
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  if ((~*(uint *)((long)param_1 + 0x2da4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2da4) = *(uint *)((long)param_1 + 0x2da4) | 0x7f80;
    FUN_0091ada4(plVar7);
  }
  FUN_00f13f08(0x43960000,0x43820000,plVar7);
  if ((*(float *)(param_1 + 0x5ae) != 0.5) || (*(float *)((long)param_1 + 0x2d74) != 0.5)) {
    param_1[0x5ae] = 0x3f0000003f000000;
    FUN_0091ada4(plVar7);
  }
  uVar18 = *(uint *)((long)param_1 + 0x30f4) & 0xfffffffb;
LAB_00b2937c:
  *(uint *)((long)param_1 + 0x30f4) = uVar18;
  if (*(int *)((long)param_1 + 0x332c) < 0) {
    FUN_00f023ec(plVar2,plVar11,1);
    ppuVar12 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90;
    if ((uVar13 & 1) == 0) {
      ppuVar12 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
    }
    FUN_00f0d92c(plVar11,*ppuVar12,&DAT_01bee7fa);
    FUN_00f0dac8(plVar11,3);
    uVar15 = FUN_00e6ce7c("MENU_TROPHY_NO_USER_TEAM_LABEL",0);
    FUN_00f0d75c(plVar11,uVar15);
    uVar18 = *(uint *)((long)param_1 + 0x3224);
    if ((uVar18 & 0x7f80) != 0x3300) {
      *(uint *)((long)param_1 + 0x3224) = uVar18 & 0xffff8000 | uVar18 & 0x7f | 0x3300;
      FUN_0091ada4(plVar11);
      uVar18 = *(uint *)((long)param_1 + 0x3224);
    }
    uVar18 = uVar18 | 4;
  }
  else {
    FUN_00f023ec(plVar2,plVar3,1);
    FUN_00b1e298(plVar3,*(undefined4 *)((long)param_1 + 0x332c));
    FUN_00b1e7b0(plVar3,param_1 + 0x65e,&DAT_01bee7fa);
    uVar18 = *(uint *)((long)param_1 + 0x3224) & 0xfffffffb;
  }
  *(uint *)((long)param_1 + 0x3224) = uVar18;
                    /* WARNING: Could not recover jumptable at 0x00b29490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}

