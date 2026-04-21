// functions/00a7a — 13 functions
#include "libGameKindred.h"




void thunk_FUN_00a7ae70(long param_1)

{
  float fVar1;
  ulong uVar2;
  float fVar3;
  double dVar4;
  
  dVar4 = (double)FUN_00ce2828();
  if (*(char *)(param_1 + 0x5364) == '\0') {
    fVar3 = (float)dVar4;
  }
  else {
    *(char *)(param_1 + 0x5364) = '\0';
    *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) & 0xfffffffb;
    *(uint *)(param_1 + 0x1a8c) = *(uint *)(param_1 + 0x1a8c) | 4;
    fVar3 = *(float *)(param_1 + 0x5360);
  }
  uVar2 = 0;
  do {
    fVar1 = (float)(&DAT_01ba14a4)[uVar2];
    if (fVar3 < (float)(&DAT_01ba14a4)[uVar2]) break;
    uVar2 = uVar2 + 1;
    fVar1 = fVar3;
  } while (uVar2 < 5);
  FUN_00ce2834((double)fVar1);
  return;
}




void thunk_FUN_00a7afb4(long param_1)

{
  ulong uVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  
  dVar3 = (double)FUN_00ce2828();
  if (*(char *)(param_1 + 0x5364) == '\0') {
    fVar2 = (float)dVar3;
  }
  else {
    *(char *)(param_1 + 0x5364) = '\0';
    *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) & 0xfffffffb;
    *(uint *)(param_1 + 0x1a8c) = *(uint *)(param_1 + 0x1a8c) | 4;
    fVar2 = *(float *)(param_1 + 0x5360);
  }
  uVar1 = 0;
  fVar4 = fVar2;
  do {
    fVar5 = (float)(&DAT_01ba14a4)[uVar1];
    if (fVar2 <= fVar5) break;
    uVar1 = uVar1 + 1;
    fVar4 = fVar5;
  } while (uVar1 < 5);
  FUN_00ce2834((double)fVar4);
  return;
}




void thunk_FUN_00a7af1c(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  uVar1 = FUN_00a21d4c();
  if (1 < uVar1) {
    uVar1 = 2;
  }
  uVar1 = (uVar1 + 1) % 3;
  if (uVar1 == 2) {
    lVar2 = FUN_00f00438("plaques-all");
    if (lVar2 == 0) goto LAB_00a7afa4;
    uVar3 = *(uint *)(lVar2 + 0x84) & 0xfffffffb;
  }
  else {
    if (((uVar1 != 1) && (uVar1 != 0)) || (lVar2 = FUN_00f00438("plaques-all"), lVar2 == 0))
    goto LAB_00a7afa4;
    uVar3 = *(uint *)(lVar2 + 0x84) | 4;
  }
  *(uint *)(lVar2 + 0x84) = uVar3;
LAB_00a7afa4:
  FUN_00a21d40(uVar1);
  return;
}




void FUN_00a7a390(void *param_1)

{
  FUN_00a79f9c();
  operator_delete(param_1);
  return;
}




void FUN_00a7a3b4(long param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float local_78;
  float local_74;
  float local_70 [3];
  float local_64;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_009bbfb0();
  fVar8 = (float)FUN_009bc268();
  fVar9 = (float)FUN_009240a4();
  lVar1 = param_1 + 0x150;
  if (*(char *)(param_1 + 0x5364) == '\0') {
    dVar12 = (double)FUN_00ce2828();
  }
  else {
    dVar12 = (double)*(float *)(param_1 + 0x5360);
  }
  FUN_00e70e18(dVar12,lVar1,"%.1gx");
  FUN_00f0d75c(param_1 + 0x16f8,lVar1);
  pcVar2 = (char *)(param_1 + 0x5365);
  if (*pcVar2 != '\0') {
    uVar5 = FUN_019807a4();
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_019806b8(0);
      if ((uVar5 & 1) != 0) goto LAB_00a7a54c;
    }
    else {
      iVar4 = FUN_019807b8();
      if (iVar4 != 0) {
        puVar6 = (uint *)FUN_019807cc(0);
        if ((0xf < (int)*puVar6) && ((*puVar6 & 1) != 0)) goto LAB_00a7a54c;
      }
    }
    local_60 = 0;
    uVar5 = FUN_019807a4();
    if ((uVar5 & 1) == 0) {
      FUN_01980738((long)&local_60 + 4,&local_60,0,0);
      FUN_00f0036c(local_70,(ulong)local_70 | 4);
      fVar10 = local_60._4_4_ / local_70[0];
      local_60 = CONCAT44(fVar10,(undefined4)local_60);
    }
    else {
      lVar7 = FUN_019807cc(0);
      FUN_00f0036c(local_70,&local_64);
      fVar10 = *(float *)(lVar7 + 4) / local_70[0];
      local_60 = CONCAT44(fVar10,*(float *)(lVar7 + 8) / local_64);
    }
    fVar10 = fVar10 - *(float *)(param_1 + 0x670);
    fVar11 = (float)FUN_00f0e700(param_1 + 0x630);
    if (fVar11 <= fVar10) {
      fVar10 = fVar11;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    local_60 = CONCAT44(fVar10,(undefined4)local_60);
    fVar11 = (float)FUN_00f0e700(param_1 + 0x630);
    *pcVar2 = '\0';
    FUN_00a7b058(param_1);
    FUN_009188a4();
    FUN_0091a558(fVar9 * (fVar10 / fVar11));
  }
LAB_00a7a54c:
  FUN_00f00298((long)&local_60 + 4,&local_60);
  if (*pcVar2 == '\0') {
    fVar10 = (float)FUN_00f0e700(param_1 + 0x630);
    fVar10 = (fVar8 / fVar9) * fVar10;
    FUN_00f13f08(fVar10,0x41000000,param_1 + 0x720);
    fVar10 = fVar10 + *(float *)(param_1 + 0x760);
    if (*(float *)(param_1 + 0x850) != fVar10) {
      *(float *)(param_1 + 0x850) = fVar10;
      FUN_0091ada4(param_1 + 0x810);
    }
  }
  else {
    local_64 = 0.0;
    local_74 = 0.0;
    uVar5 = FUN_019807a4();
    if ((uVar5 & 1) == 0) {
      FUN_01980738(&local_64,&local_74,0,0);
      FUN_00f0036c(local_70,(ulong)local_70 | 4);
      local_64 = local_64 / local_70[0];
    }
    else {
      lVar7 = FUN_019807cc(0);
      FUN_00f0036c(local_70,&local_78);
      local_64 = *(float *)(lVar7 + 4) / local_70[0];
      local_74 = *(float *)(lVar7 + 8) / local_78;
    }
    fVar10 = local_64 - *(float *)(param_1 + 0x670);
    fVar8 = (float)FUN_00f0e700(param_1 + 0x630);
    local_64 = fVar10;
    if (fVar8 <= fVar10) {
      local_64 = fVar8;
    }
    if (local_64 <= 0.0) {
      local_64 = 0.0;
    }
    FUN_00f13f08(local_64,0x41000000,param_1 + 0x720);
    fVar8 = local_64 + *(float *)(param_1 + 0x760);
    if (*(float *)(param_1 + 0x850) != fVar8) {
      *(float *)(param_1 + 0x850) = fVar8;
      FUN_0091ada4(param_1 + 0x810);
    }
    fVar8 = local_64;
    fVar10 = (float)FUN_00f0e700(param_1 + 0x630);
    fVar8 = fVar9 * (fVar8 / fVar10);
  }
  FUN_00e70e18(lVar1,"%d:%02d / %d:%02d",(int)fVar8 / 0x3c,(int)fVar8 % 0x3c,(int)fVar9 / 0x3c,
               (int)fVar9 % 0x3c);
  FUN_00f0d75c(param_1 + 0x1e58,lVar1);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7a728(undefined8 param_1,long param_2)

{
  *(undefined1 *)(param_2 + 0x5365) = 0;
  FUN_00a7b058();
  FUN_009188a4();
  FUN_0091a558(param_1);
  return;
}




void FUN_00a7a758(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a7a760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00a7a764(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_80 [2];
  float local_70;
  float local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  FUN_00f00298(&local_6c,&local_70);
  fVar8 = (float)FUN_00f00274();
  fVar13 = fVar8 - local_6c;
  fVar8 = fVar8 + fVar13;
  FUN_00f13f08(fVar8,local_70,param_1 + 0x1e8);
  lVar1 = param_1 + 0x2d8;
  FUN_00f13f08(fVar8,0x43860000,lVar1);
  lVar5 = param_1 + 0x3c8;
  uVar11 = FUN_00f0e700(lVar1);
  FUN_00f13f08(uVar11,0x40000000,lVar5);
  lVar2 = param_1 + 0x4b8;
  FUN_00f13f08(fVar8,0x43480000,lVar2);
  fVar8 = *(float *)(param_1 + 0x318);
  fVar13 = -fVar13;
  if ((fVar8 != fVar13) || (fVar8 = *(float *)(param_1 + 0x31c), fVar8 != local_70)) {
    *(float *)(param_1 + 0x318) = fVar13;
    *(float *)(param_1 + 0x31c) = local_70;
    FUN_0091ada4(lVar1);
  }
  local_80[0] = 0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0x2d8) + 0x28))(lVar1,local_80);
  fVar9 = local_70;
  FUN_00f0e700(lVar1);
  fVar9 = fVar9 - fVar8;
  if ((*(float *)(param_1 + 0x408) != fVar13) ||
     (fVar8 = *(float *)(param_1 + 0x40c), fVar8 != fVar9)) {
    *(float *)(param_1 + 0x408) = fVar13;
    *(float *)(param_1 + 0x40c) = fVar9;
    FUN_0091ada4(lVar5);
  }
  local_80[0] = 0;
  (**(code **)(*(long *)(param_1 + 0x3c8) + 0x28))(lVar5,local_80);
  fVar9 = local_70;
  FUN_00f0e700(lVar1);
  fVar8 = (fVar9 - fVar8) + -2.0;
  if ((*(float *)(param_1 + 0x4f8) != fVar13) || (*(float *)(param_1 + 0x4fc) != fVar8)) {
    *(float *)(param_1 + 0x4f8) = fVar13;
    *(float *)(param_1 + 0x4fc) = fVar8;
    FUN_0091ada4(lVar2);
  }
  local_80[0] = 0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0x4b8) + 0x28))(lVar2,local_80);
  fVar8 = (float)FUN_00f0e700(lVar1);
  fVar8 = fVar8 * 0.05;
  fVar13 = (float)FUN_00f0e700(lVar1);
  FUN_00f13f08(fVar13 - fVar8,0x41000000,param_1 + 0x630);
  fVar13 = fVar8 * 0.5;
  if (*(float *)(param_1 + 0x670) != fVar13) {
    *(float *)(param_1 + 0x670) = fVar13;
    FUN_0091ada4(param_1 + 0x630);
  }
  fVar9 = (float)FUN_00f0e700(lVar1);
  FUN_00f13f08(fVar9 - fVar8,0x41000000,param_1 + 0x720);
  if (*(float *)(param_1 + 0x760) != fVar13) {
    *(float *)(param_1 + 0x760) = fVar13;
    FUN_0091ada4(param_1 + 0x720);
  }
  uVar12 = 0x42480000;
  FUN_00f13f08(param_1 + 0x810);
  if (*(float *)(param_1 + 0x850) != fVar13) {
    *(float *)(param_1 + 0x850) = fVar13;
    FUN_0091ada4(param_1 + 0x810);
  }
  fVar8 = local_70;
  FUN_00f0e700(lVar1);
  fVar8 = fVar8 + (float)uVar12 * -0.76;
  if (*(float *)(param_1 + 0x5ec) != fVar8) {
    *(float *)(param_1 + 0x5ec) = fVar8;
    FUN_0091ada4(param_1 + 0x5a8);
  }
  fVar8 = (float)uVar12;
  uVar3 = *(uint *)(param_1 + 0x5350);
  uVar6 = (ulong)uVar3;
  if (uVar3 != 0) {
    uVar7 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x5358) + uVar7 * 8);
      if (lVar5 != 0) {
        uVar12 = (ulong)(uint)local_70;
        FUN_00a7aca4(lVar5,param_1);
        uVar6 = (ulong)*(uint *)(param_1 + 0x5350);
      }
      fVar8 = (float)uVar12;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  fVar13 = local_70;
  fVar9 = local_6c * 0.5;
  FUN_00f01fcc(param_1 + 0x3c08,1,0,1,1);
  fVar8 = (fVar13 - fVar8 * 0.5) + -16.0;
  if ((*(float *)(param_1 + 0x3c48) != fVar9) || (*(float *)(param_1 + 0x3c4c) != fVar8)) {
    *(float *)(param_1 + 0x3c48) = fVar9;
    *(float *)(param_1 + 0x3c4c) = fVar8;
    FUN_0091ada4(param_1 + 0x3c08);
  }
  fVar13 = *(float *)(param_1 + 0x670);
  FUN_00f0d4e0(param_1 + 0x16f8);
  FUN_00f13f08(0x430c0000,param_1 + 0x1640);
  fVar8 = (float)FUN_00f13e54(param_1 + 0x1640);
  if (*(float *)(param_1 + 0x1738) != fVar8 * 0.5) {
    *(float *)(param_1 + 0x1738) = fVar8 * 0.5;
    FUN_0091ada4(param_1 + 0x16f8);
  }
  lVar5 = param_1 + 0x988;
  FUN_00f0bc10(fVar13 + -4.0,0,0x41a00000,local_80);
  FUN_00f0c168(lVar5,local_80);
  (**(code **)(*(long *)(param_1 + 0x988) + 0x90))(lVar5);
  lVar2 = param_1 + 0x1be8;
  if ((*(float *)(param_1 + 0x1c28) != local_6c * 0.5) || (*(float *)(param_1 + 0x1c2c) != 0.0)) {
    *(float *)(param_1 + 0x1c28) = local_6c * 0.5;
    *(undefined4 *)(param_1 + 0x1c2c) = 0;
    FUN_0091ada4(lVar2);
  }
  local_80[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1be8) + 0x28))(lVar2,local_80);
  fVar14 = *(float *)(param_1 + 0x1c28);
  fVar8 = (float)FUN_00f01fcc(lVar2,1,0,1,1);
  fVar15 = *(float *)(param_1 + 0x9c8);
  fVar9 = (float)FUN_00f13e54(lVar5);
  fVar16 = *(float *)(param_1 + 0x9c8);
  fVar10 = (float)FUN_00f13e54(lVar5);
  fVar8 = fVar16 + fVar10 + ((fVar14 - fVar8 * 0.5) - (fVar15 + fVar9)) * 0.5;
  if ((*(float *)(param_1 + 0x1e98) != fVar8) || (*(float *)(param_1 + 0x1e9c) != 0.0)) {
    *(float *)(param_1 + 0x1e98) = fVar8;
    *(undefined4 *)(param_1 + 0x1e9c) = 0;
    FUN_0091ada4(param_1 + 0x1e58);
  }
  local_80[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1e58) + 0x28))(param_1 + 0x1e58,local_80);
  fVar8 = 1.0;
  FUN_00f0bc10(local_6c - fVar13,0x3f800000,0x41a00000,local_80);
  FUN_00f0c168(param_1 + 0x1f88,local_80);
  (**(code **)(*(long *)(param_1 + 0x1f88) + 0x90))(param_1 + 0x1f88);
  FUN_00f0e700(lVar1);
  local_70 = local_70 + fVar8 * -0.4;
  if (*(float *)(param_1 + 0x944) != local_70) {
    *(float *)(param_1 + 0x944) = local_70;
    FUN_0091ada4(param_1 + 0x900);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7aca4(undefined1 param_1 [16],float param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  fVar4 = (float)FUN_009240a4();
  fVar6 = *(float *)(param_3 + 0x890);
  fVar7 = *(float *)(param_4 + 0x760);
  fVar4 = fVar6 / fVar4;
  fVar5 = (float)FUN_00f0e700(param_4 + 0x720);
  lVar1 = param_3 + 0x6b0;
  fVar7 = fVar7 + fVar4 * fVar5;
  FUN_00f0e700(param_4 + 0x2d8);
  fVar4 = fVar6 * -0.76;
  FUN_00f0e700(lVar1);
  fVar4 = (param_2 + fVar4) - fVar6;
  if ((*(float *)(param_3 + 0x6f0) != fVar7) ||
     (fVar6 = *(float *)(param_3 + 0x6f4), fVar6 != fVar4)) {
    *(float *)(param_3 + 0x6f0) = fVar7;
    *(float *)(param_3 + 0x6f4) = fVar4;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0x3f000000;
  (**(code **)(*(long *)(param_3 + 0x6b0) + 0x28))(lVar1,&local_60);
  fVar4 = *(float *)(param_3 + 0x6f4);
  lVar1 = param_3 + 0xb8;
  FUN_00f13e54(lVar1);
  fVar5 = 8.0;
  fVar4 = fVar4 + fVar6 * -0.5 + 8.0;
  if ((*(float *)(param_3 + 0xf8) != fVar7) || (fVar5 = *(float *)(param_3 + 0xfc), fVar5 != fVar4))
  {
    *(float *)(param_3 + 0xf8) = fVar7;
    *(float *)(param_3 + 0xfc) = fVar4;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0xb8) + 0x28))(lVar1,&local_60);
  plVar2 = (long *)(param_3 + 0x7a0);
  FUN_00f0e700(param_4 + 0x2d8);
  uVar8 = 0x3f800000;
  if (*(char *)(param_3 + 0x894) != '\x01') {
    uVar8 = 0;
  }
  param_2 = param_2 + fVar5 * -0.76;
  if ((*(float *)(param_3 + 0x7e0) != fVar7) || (*(float *)(param_3 + 0x7e4) != param_2)) {
    *(float *)(param_3 + 0x7e0) = fVar7;
    *(float *)(param_3 + 0x7e4) = param_2;
    FUN_0091ada4(plVar2);
  }
  local_60 = CONCAT44(uVar8,0x3f000000);
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_60);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7ae70(long param_1)

{
  float fVar1;
  ulong uVar2;
  float fVar3;
  double dVar4;
  
  dVar4 = (double)FUN_00ce2828();
  if (*(char *)(param_1 + 0x5364) == '\0') {
    fVar3 = (float)dVar4;
  }
  else {
    *(char *)(param_1 + 0x5364) = '\0';
    *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) & 0xfffffffb;
    *(uint *)(param_1 + 0x1a8c) = *(uint *)(param_1 + 0x1a8c) | 4;
    fVar3 = *(float *)(param_1 + 0x5360);
  }
  uVar2 = 0;
  do {
    fVar1 = (float)(&DAT_01ba14a4)[uVar2];
    if (fVar3 < (float)(&DAT_01ba14a4)[uVar2]) break;
    uVar2 = uVar2 + 1;
    fVar1 = fVar3;
  } while (uVar2 < 5);
  FUN_00ce2834((double)fVar1);
  return;
}




void FUN_00a7aef8(long param_1)

{
  *(undefined1 *)(param_1 + 0x5364) = 0;
  *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) & 0xfffffffb;
  *(uint *)(param_1 + 0x1a8c) = *(uint *)(param_1 + 0x1a8c) | 4;
  return;
}




void FUN_00a7af1c(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  uVar1 = FUN_00a21d4c();
  if (1 < uVar1) {
    uVar1 = 2;
  }
  uVar1 = (uVar1 + 1) % 3;
  if (uVar1 == 2) {
    lVar2 = FUN_00f00438("plaques-all");
    if (lVar2 == 0) goto LAB_00a7afa4;
    uVar3 = *(uint *)(lVar2 + 0x84) & 0xfffffffb;
  }
  else {
    if (((uVar1 != 1) && (uVar1 != 0)) || (lVar2 = FUN_00f00438("plaques-all"), lVar2 == 0))
    goto LAB_00a7afa4;
    uVar3 = *(uint *)(lVar2 + 0x84) | 4;
  }
  *(uint *)(lVar2 + 0x84) = uVar3;
LAB_00a7afa4:
  FUN_00a21d40(uVar1);
  return;
}




void FUN_00a7afb4(long param_1)

{
  ulong uVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  
  dVar3 = (double)FUN_00ce2828();
  if (*(char *)(param_1 + 0x5364) == '\0') {
    fVar2 = (float)dVar3;
  }
  else {
    *(char *)(param_1 + 0x5364) = '\0';
    *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) & 0xfffffffb;
    *(uint *)(param_1 + 0x1a8c) = *(uint *)(param_1 + 0x1a8c) | 4;
    fVar2 = *(float *)(param_1 + 0x5360);
  }
  uVar1 = 0;
  fVar4 = fVar2;
  do {
    fVar5 = (float)(&DAT_01ba14a4)[uVar1];
    if (fVar2 <= fVar5) break;
    uVar1 = uVar1 + 1;
    fVar4 = fVar5;
  } while (uVar1 < 5);
  FUN_00ce2834((double)fVar4);
  return;
}

