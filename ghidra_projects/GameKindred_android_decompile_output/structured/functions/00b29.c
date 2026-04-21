// functions/00b29 — 10 functions
#include "libGameKindred.h"




void FUN_00b29494(long *param_1,uint param_2)

{
  long *plVar1;
  
  if ((param_2 & 1) == 0) {
    FUN_00acd82c(param_1 + 0x429);
    if (((char)param_1[0x666] != '\0') &&
       (FUN_00b1dfd0(param_1 + 0x14d), -1 < *(int *)((long)param_1 + 0x332c))) {
      FUN_00b1dfd0(param_1 + 699);
    }
  }
  else {
    if (0 < *(int *)((long)param_1 + 0x3324)) {
      plVar1 = param_1 + 0x429;
      FUN_00acd7d8(plVar1);
      FUN_00acdd70(plVar1,*(undefined4 *)((long)param_1 + 0x3324));
      FUN_00acd9b0(plVar1,param_1 + 0x660);
      FUN_00acd880(plVar1);
    }
    if ((char)param_1[0x666] != '\0') {
      plVar1 = param_1 + 0x14d;
      FUN_00b1ded0(plVar1);
      FUN_00b1e298(plVar1,(int)param_1[0x665]);
      FUN_00b1e7b0(plVar1,param_1 + 0x662,&DAT_01bee7fa);
      if (-1 < *(int *)((long)param_1 + 0x332c)) {
        plVar1 = param_1 + 699;
        FUN_00b1ded0(plVar1);
        FUN_00b1e298(plVar1,*(undefined4 *)((long)param_1 + 0x332c));
        FUN_00b1e7b0(plVar1,param_1 + 0x65e,&DAT_01bee7fa);
      }
    }
  }
  if (0 < *(int *)((long)param_1 + 0x3324)) {
    FUN_00acd85c(param_1 + 0x429,param_2 & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00b295d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00b295d8(long *param_1,uint param_2)

{
  long *plVar1;
  
  if ((param_2 & 1) == 0) {
    FUN_00acd82c(param_1 + 0x429);
  }
  else {
    if (*(int *)((long)param_1 + 0x3324) < 1) goto LAB_00b29670;
    plVar1 = param_1 + 0x429;
    FUN_00acd7d8(plVar1);
    FUN_00acdd70(plVar1,*(undefined4 *)((long)param_1 + 0x3324));
    FUN_00acd9b0(plVar1,param_1 + 0x660);
    FUN_00acd880(plVar1);
  }
  if (0 < *(int *)((long)param_1 + 0x3324)) {
    FUN_00acd85c(param_1 + 0x429,param_2 & 1);
  }
LAB_00b29670:
                    /* WARNING: Could not recover jumptable at 0x00b29688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00b2968c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if ((param_2 & 1) == 0) {
    if (((char)param_1[0x666] != '\0') &&
       (FUN_00b1dfd0(param_1 + 0x14d), -1 < *(int *)((long)param_1 + 0x332c))) {
      FUN_00b1dfd0(param_1 + 699);
    }
  }
  else if ((char)param_1[0x666] != '\0') {
    plVar1 = param_1 + 0x14d;
    FUN_00b1ded0(plVar1);
    FUN_00b1e298(plVar1,(int)param_1[0x665]);
    FUN_00b1e7b0(plVar1,param_1 + 0x662,&DAT_01bee7fa);
    if (-1 < *(int *)((long)param_1 + 0x332c)) {
      plVar1 = param_1 + 699;
      FUN_00b1ded0(plVar1);
      FUN_00b1e298(plVar1,*(undefined4 *)((long)param_1 + 0x332c));
      FUN_00b1e7b0(plVar1,param_1 + 0x65e,&DAT_01bee7fa);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00b29750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00b29754(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_98;
  undefined1 auStack_94 [4];
  undefined8 local_90;
  long local_88;
  
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
  FUN_00b286cc();
  FUN_00f00298(auStack_94,&local_98);
  FUN_00f0d4e0(param_3 + 0x928);
  fVar7 = *(float *)(param_3 + 0xa5c);
  fVar11 = param_2 + 16.0;
  fVar10 = *(float *)(param_3 + 0xa58) + -36.0;
  FUN_00f0e700(param_3 + 0x708);
  param_2 = ((fVar7 + -18.0) - fVar11) - param_2;
  lVar2 = param_3 + 0x2b40;
  fVar8 = fVar10 * 0.39999998;
  fVar9 = param_2 * 0.5;
  fVar7 = fVar9;
  FUN_00f13f08(fVar8,lVar2);
  fVar12 = *(float *)(param_3 + 0xa58) + -18.0;
  FUN_00f0e700(param_3 + 0x708);
  if ((*(float *)(param_3 + 0x2b80) != fVar12) || (*(float *)(param_3 + 0x2b84) != fVar7 + 18.0)) {
    *(float *)(param_3 + 0x2b80) = fVar12;
    *(float *)(param_3 + 0x2b84) = fVar7 + 18.0;
    FUN_0091ada4(lVar2);
  }
  local_90 = 0x3f800000;
  (**(code **)(*(long *)(param_3 + 0x2b40) + 0x28))(lVar2,&local_90);
  lVar3 = param_3 + 0x2c30;
  FUN_00f13f08(fVar8,fVar9,lVar3);
  fVar7 = *(float *)(param_3 + 0xa58) + -18.0;
  fVar11 = *(float *)(param_3 + 0xa5c) - fVar11;
  if ((*(float *)(param_3 + 0x2c70) != fVar7) || (*(float *)(param_3 + 0x2c74) != fVar11)) {
    *(float *)(param_3 + 0x2c70) = fVar7;
    *(float *)(param_3 + 0x2c74) = fVar11;
    FUN_0091ada4(lVar3);
  }
  local_90 = NEON_fmov(0x3f800000,4);
  (**(code **)(*(long *)(param_3 + 0x2c30) + 0x28))(lVar3,&local_90);
  lVar1 = param_3 + 0xa68;
  fVar7 = (float)FUN_00b1e834(lVar1);
  fVar7 = (fVar10 * 0.6) / fVar7;
  if ((*(float *)(param_3 + 0xab0) != fVar7) || (*(float *)(param_3 + 0xab4) != fVar7)) {
    *(float *)(param_3 + 0xab0) = fVar7;
    *(float *)(param_3 + 0xab4) = fVar7;
    FUN_0091ada4(lVar1);
  }
  fVar7 = *(float *)(param_3 + 0xa58) * 0.6 * 0.5;
  fVar11 = *(float *)(param_3 + 0xa5c) * 0.6;
  if ((*(float *)(param_3 + 0xaa8) != fVar7) || (*(float *)(param_3 + 0xaac) != fVar11)) {
    *(float *)(param_3 + 0xaa8) = fVar7;
    *(float *)(param_3 + 0xaac) = fVar11;
    FUN_0091ada4(lVar1);
  }
  fVar7 = (float)FUN_00b1e834(lVar1);
  FUN_00b1e7e0(fVar7 * 0.9,lVar1);
  if (0 < *(int *)(param_3 + 0x3324)) {
    fVar12 = *(float *)(param_3 + 0x2b80);
    lVar1 = param_3 + 0x2148;
    fVar7 = (float)FUN_00f0e700(lVar2);
    fVar11 = *(float *)(param_3 + 0x2b84);
    fVar10 = -0.5;
    fVar12 = fVar12 + fVar7 * -0.5;
    FUN_00f0e700(lVar2);
    fVar11 = fVar11 + fVar10 * 0.44;
    if ((*(float *)(param_3 + 0x2188) != fVar12) || (*(float *)(param_3 + 0x218c) != fVar11)) {
      *(float *)(param_3 + 0x2188) = fVar12;
      *(float *)(param_3 + 0x218c) = fVar11;
      FUN_0091ada4(lVar1);
    }
    local_90 = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_3 + 0x2148) + 0x28))(lVar1,&local_90);
    if (*(int *)(param_3 + 0x3320) < 4) {
      if ((*(float *)(param_3 + 0x2190) != 0.8) || (*(float *)(param_3 + 0x2194) != 0.8)) {
        *(undefined8 *)(param_3 + 0x2190) = 0x3f4ccccd3f4ccccd;
        FUN_0091ada4(lVar1);
      }
      fVar7 = 120.0;
    }
    else {
      local_98 = (param_2 * 0.625) / local_98;
      if ((*(float *)(param_3 + 0x2190) != local_98) || (*(float *)(param_3 + 0x2194) != local_98))
      {
        *(float *)(param_3 + 0x2190) = local_98;
        *(float *)(param_3 + 0x2194) = local_98;
        FUN_0091ada4(lVar1);
      }
      fVar7 = 150.0;
    }
    local_90 = 0x3f0000003f000000;
    fVar11 = *(float *)(param_3 + 0x2188) + 0.0;
    lVar1 = param_3 + 0x2e10;
    fVar7 = fVar7 + *(float *)(param_3 + 0x218c);
    if ((*(float *)(param_3 + 0x2e50) != fVar11) || (*(float *)(param_3 + 0x2e54) != fVar7)) {
      *(float *)(param_3 + 0x2e50) = fVar11;
      *(float *)(param_3 + 0x2e54) = fVar7;
      FUN_0091ada4(lVar1);
    }
    (**(code **)(*(long *)(param_3 + 0x2e10) + 0x28))(lVar1,&local_90);
    fVar11 = 0.0;
    FUN_00f0db64(fVar8 + -10.0,0,0x3f800000,lVar1);
    fVar10 = *(float *)(param_3 + 0x2e50);
    fVar12 = *(float *)(param_3 + 0x2e54);
    lVar4 = param_3 + 0x2f40;
    FUN_00f01c20(lVar1);
    fVar7 = fVar11 * 0.5;
    FUN_00f01c20(lVar4);
    fVar7 = fVar12 + fVar7 + fVar11 * 0.5 + 6.0;
    if ((*(float *)(param_3 + 0x2f80) != fVar10) || (*(float *)(param_3 + 0x2f84) != fVar7)) {
      *(float *)(param_3 + 0x2f80) = fVar10;
      *(float *)(param_3 + 0x2f84) = fVar7;
      FUN_0091ada4(lVar4);
    }
    local_90 = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_3 + 0x2f40) + 0x28))(lVar4,&local_90);
    fVar7 = (float)FUN_00f01c20(lVar4);
    fVar11 = (fVar8 + -10.0) / 0.6;
    if (fVar11 <= fVar7) {
      fVar7 = fVar11;
    }
    fVar11 = 0.0;
    FUN_00f0db64(fVar7,0,0x3f800000,lVar4);
    fVar7 = *(float *)(param_3 + 0x2e50);
    fVar10 = *(float *)(param_3 + 0x2e54);
    plVar5 = (long *)(param_3 + 0x2d20);
    FUN_00f01c20(lVar1);
    local_90 = 0x3f0000003f000000;
    fVar7 = fVar7 + 0.0;
    fVar10 = fVar10 + fVar11 * 0.5;
    if ((*(float *)(param_3 + 0x2d60) != fVar7) || (*(float *)(param_3 + 0x2d64) != fVar10)) {
      *(float *)(param_3 + 0x2d60) = fVar7;
      *(float *)(param_3 + 0x2d64) = fVar10;
      FUN_0091ada4(plVar5);
    }
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_90);
    fVar11 = 400.0;
    FUN_00f13f08(0x44480000,plVar5);
  }
  if (-1 < *(int *)(param_3 + 0x332c)) {
    plVar5 = (long *)(param_3 + 0x15d8);
    FUN_00b1e834(plVar5);
    fVar9 = fVar9 / fVar11;
    if ((*(float *)(param_3 + 0x1620) != fVar9) || (*(float *)(param_3 + 0x1624) != fVar9)) {
      *(float *)(param_3 + 0x1620) = fVar9;
      *(float *)(param_3 + 0x1624) = fVar9;
      FUN_0091ada4(plVar5);
    }
    fVar10 = *(float *)(param_3 + 0x2c70);
    fVar7 = (float)FUN_00f0e700(lVar3);
    fVar9 = *(float *)(param_3 + 0x2c74);
    fVar11 = -0.5;
    fVar10 = fVar10 + fVar7 * -0.5;
    FUN_00f0e700(lVar3);
    fVar9 = fVar9 + fVar11 * -0.44;
    if ((*(float *)(param_3 + 0x1618) != fVar10) ||
       (fVar11 = *(float *)(param_3 + 0x161c), fVar11 != fVar9)) {
      *(float *)(param_3 + 0x1618) = fVar10;
      *(float *)(param_3 + 0x161c) = fVar9;
      FUN_0091ada4(plVar5);
    }
    local_90 = 0x3f0000003f000000;
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_90);
    fVar7 = (float)FUN_00b1e834(plVar5);
    FUN_00b1e7e0(fVar7 * 0.9,plVar5);
  }
  fVar10 = *(float *)(param_3 + 0x2b80);
  lVar1 = param_3 + 0x3070;
  fVar7 = (float)FUN_00f0e700(lVar2);
  fVar9 = *(float *)(param_3 + 0x2b84);
  fVar10 = fVar10 - fVar7 * 0.5;
  FUN_00f0e700(lVar2);
  fVar11 = fVar11 * 0.5;
  fVar9 = fVar9 + fVar11;
  if ((*(float *)(param_3 + 0x30b0) != fVar10) ||
     (fVar11 = *(float *)(param_3 + 0x30b4), fVar11 != fVar9)) {
    *(float *)(param_3 + 0x30b0) = fVar10;
    *(float *)(param_3 + 0x30b4) = fVar9;
    FUN_0091ada4(lVar1);
  }
  local_90 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0x3070) + 0x28))(lVar1,&local_90);
  FUN_00f0dad0(fVar8 + -20.0,lVar1,1);
  fVar10 = *(float *)(param_3 + 0x2c70);
  plVar5 = (long *)(param_3 + 0x31a0);
  fVar7 = (float)FUN_00f0e700(lVar3);
  fVar9 = *(float *)(param_3 + 0x2c74);
  fVar10 = fVar10 - fVar7 * 0.5;
  FUN_00f0e700(lVar3);
  fVar9 = fVar9 - fVar11 * 0.5;
  if ((*(float *)(param_3 + 0x31e0) != fVar10) || (*(float *)(param_3 + 0x31e4) != fVar9)) {
    *(float *)(param_3 + 0x31e0) = fVar10;
    *(float *)(param_3 + 0x31e4) = fVar9;
    FUN_0091ada4(plVar5);
  }
  local_90 = 0x3f0000003f000000;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_90);
  FUN_00f0dad0(fVar8 + -20.0,plVar5,1);
  if (*(long *)(lVar6 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b29e44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dea60;
  FUN_00f0d3a4(param_1 + 0x125);
  FUN_00f0d3a4(param_1 + 0xff);
  param_1[0xe1] = &PTR_FUN_028266f0;
  param_1[0xf8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfb);
  FUN_00f13d08(param_1 + 0xe1);
  FUN_00f01868(param_1 + 0xd0);
  param_1[0xb2] = &PTR_FUN_028266f0;
  param_1[0xc9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xcc);
  FUN_00f13d08(param_1 + 0xb2);
  param_1[0x94] = &PTR_FUN_028266f0;
  param_1[0xab] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xae);
  FUN_00f13d08(param_1 + 0x94);
  param_1[0x76] = &PTR_FUN_028266f0;
  param_1[0x8d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x90);
  FUN_00f13d08(param_1 + 0x76);
  param_1[0x58] = &PTR_FUN_028266f0;
  param_1[0x6f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x72);
  FUN_00f13d08(param_1 + 0x58);
  param_1[0x3a] = &PTR_FUN_028266f0;
  param_1[0x51] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x54);
  FUN_00f13d08(param_1 + 0x3a);
  FUN_00f01868(param_1 + 0x29);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b29f6c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb29f70);
  (*pcVar1)();
}




void FUN_00b29f70(void)

{
  return;
}




void FUN_00b29f74(void)

{
  return;
}




void FUN_00b29f78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027debc8;
  if ((void *)param_1[0x26b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x26b]);
    param_1[0x26b] = 0;
    param_1[0x26a] = 0;
  }
  if ((void *)param_1[0x269] != (void *)0x0) {
    operator_delete__((void *)param_1[0x269]);
    param_1[0x269] = 0;
    param_1[0x268] = 0;
  }
  if ((void *)param_1[0x267] != (void *)0x0) {
    operator_delete__((void *)param_1[0x267]);
    param_1[0x267] = 0;
    param_1[0x266] = 0;
  }
  FUN_00acdf14(param_1 + 0x14d);
  FUN_00b29e44(param_1);
  return;
}




void FUN_00b29fec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027debc8;
  if ((void *)param_1[0x26b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x26b]);
    param_1[0x26b] = 0;
    param_1[0x26a] = 0;
  }
  if ((void *)param_1[0x269] != (void *)0x0) {
    operator_delete__((void *)param_1[0x269]);
    param_1[0x269] = 0;
    param_1[0x268] = 0;
  }
  if ((void *)param_1[0x267] != (void *)0x0) {
    operator_delete__((void *)param_1[0x267]);
    param_1[0x267] = 0;
    param_1[0x266] = 0;
  }
  param_1[0x14d] = &PTR_FUN_027d70a0;
  FUN_00f0d3a4(param_1 + 0x23e);
  FUN_00f0d3a4(param_1 + 0x218);
  param_1[0x1fa] = &PTR_FUN_028266f0;
  param_1[0x211] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x214);
  FUN_00f13d08(param_1 + 0x1fa);
  FUN_00f0d3a4(param_1 + 0x1d4);
  FUN_00af8c0c(param_1 + 0x15e);
  FUN_00f01868(param_1 + 0x14d);
  FUN_00b29e44(param_1);
  operator_delete(param_1);
  return;
}

