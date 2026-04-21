// functions/00c20 — 6 functions
#include "libGameKindred.h"




void FUN_00c20538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00c21884(param_1,param_4,param_5);
  return;
}




void FUN_00c20544(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313b138,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c205ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00c2195c(param_1,param_2,param_5);
  return;
}




void FUN_00c205b4(long param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = "checkbox_filled";
  if (param_2 != 0) {
    pcVar1 = "checkbox_empty";
  }
  FUN_00f0e578(param_1 + 0xac18,pcVar1);
  pcVar1 = "checkbox_filled";
  if (param_2 != 1) {
    pcVar1 = "checkbox_empty";
  }
  FUN_00f0e578(param_1 + 0xaef0,pcVar1);
  *(int *)(param_1 + 0xf958) = param_2;
  return;
}




void FUN_00c2061c(long *param_1)

{
  FUN_00f13f08(param_1 + 0x3a);
                    /* WARNING: Could not recover jumptable at 0x00c20648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00c2064c(long param_1)

{
  long lVar1;
  long *plVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_b8;
  float fStack_b4;
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [4];
  float local_a4;
  undefined8 local_a0;
  long local_98;
  
  lVar7 = tpidr_el0;
  local_98 = *(long *)(lVar7 + 0x28);
  uVar8 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar8 & 1,&local_a4,auStack_a8,auStack_ac);
  uVar9 = FUN_0092ea9c();
  fVar12 = 150.0;
  FUN_00f13f08(local_a4,param_1 + 0xc80);
  if ((*(float *)(param_1 + 0xdb0) != 80.0) || (fVar12 = 75.0, *(float *)(param_1 + 0xdb4) != 75.0))
  {
    *(undefined8 *)(param_1 + 0xdb0) = 0x4296000042a00000;
    FUN_0091ada4(param_1 + 0xd70);
  }
  local_a0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xd70) + 0x28))(param_1 + 0xd70,&local_a0);
  if ((*(float *)(param_1 + 0xea0) != 160.0) || (fVar12 = 75.0, *(float *)(param_1 + 0xea4) != 75.0)
     ) {
    *(undefined8 *)(param_1 + 0xea0) = 0x4296000043200000;
    FUN_0091ada4(param_1 + 0xe60);
  }
  local_a0 = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0xe60) + 0x28))(param_1 + 0xe60,&local_a0);
  if (*(float *)(param_1 + 0x10c4) != 150.0) {
    *(undefined4 *)(param_1 + 0x10c4) = 0x43160000;
    FUN_0091ada4(param_1 + 0x1080);
  }
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar9 & 1) == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  lVar1 = param_1 + 0x1238;
  FUN_00f0d378(lVar1,*ppuVar6);
  if ((*(float *)(param_1 + 0x1278) != 160.0) ||
     (fVar12 = 56.0, *(float *)(param_1 + 0x127c) != 56.0)) {
    *(undefined8 *)(param_1 + 0x1278) = 0x4260000043200000;
    FUN_0091ada4(lVar1);
  }
  fVar15 = local_a4 + -320.0;
  FUN_00f0dad0(fVar15,lVar1,1);
  if ((*(float *)(param_1 + 0x1148) != 80.0) ||
     (fVar12 = 42.0, *(float *)(param_1 + 0x114c) != 42.0)) {
    *(undefined8 *)(param_1 + 0x1148) = 0x4228000042a00000;
    FUN_0091ada4(param_1 + 0x1108);
  }
  local_a0 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x1108) + 0x28))(param_1 + 0x1108,&local_a0);
  FUN_00f0d4e0(lVar1);
  fVar12 = fVar12 + 48.0 + 56.0;
  if ((*(float *)(param_1 + 0x13a8) != 160.0) || (*(float *)(param_1 + 0x13ac) != fVar12)) {
    *(undefined4 *)(param_1 + 0x13a8) = 0x43200000;
    *(float *)(param_1 + 0x13ac) = fVar12;
    FUN_0091ada4(param_1 + 0x1368);
  }
  FUN_00abc380(fVar15,0xbf800000,param_1 + 0x1368);
  fVar12 = fVar12 + 150.0;
  if ((*(float *)(param_1 + 0x30a0) != 160.0) || (*(float *)(param_1 + 0x30a4) != fVar12)) {
    *(undefined4 *)(param_1 + 0x30a0) = 0x43200000;
    *(float *)(param_1 + 0x30a4) = fVar12;
    FUN_0091ada4(param_1 + 0x3060);
  }
  FUN_00abc380(fVar15,0xbf800000,param_1 + 0x3060);
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar9 & 1) == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  lVar1 = param_1 + 0x4e88;
  fVar12 = fVar12 + 130.0;
  FUN_00f0d378(lVar1,*ppuVar6);
  if ((*(float *)(param_1 + 0x4ec8) != 160.0) || (*(float *)(param_1 + 0x4ecc) != fVar12)) {
    *(float *)(param_1 + 0x4ec8) = 160.0;
    *(float *)(param_1 + 0x4ecc) = fVar12;
    FUN_0091ada4(lVar1);
  }
  FUN_00f0dad0(fVar15,lVar1,1);
  fVar13 = *(float *)(param_1 + 0x4d98);
  if ((fVar13 != 80.0) || (fVar13 = *(float *)(param_1 + 0x4d9c), fVar13 != fVar12 + -14.0)) {
    *(float *)(param_1 + 0x4d98) = 80.0;
    *(float *)(param_1 + 0x4d9c) = fVar12 + -14.0;
    FUN_0091ada4(param_1 + 0x4d58);
  }
  local_a0 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x4d58) + 0x28))(param_1 + 0x4d58,&local_a0);
  FUN_00f0d4e0(lVar1);
  fVar12 = fVar12 + fVar13 + 48.0;
  if ((*(float *)(param_1 + 0x4ff8) != 160.0) || (*(float *)(param_1 + 0x4ffc) != fVar12)) {
    *(float *)(param_1 + 0x4ff8) = 160.0;
    *(float *)(param_1 + 0x4ffc) = fVar12;
    FUN_0091ada4(param_1 + 0x4fb8);
  }
  FUN_00abc380(fVar15,0xbf800000,param_1 + 0x4fb8);
  fVar12 = fVar12 + 150.0;
  if ((*(float *)(param_1 + 0x6cf0) != 160.0) || (*(float *)(param_1 + 0x6cf4) != fVar12)) {
    *(float *)(param_1 + 0x6cf0) = 160.0;
    *(float *)(param_1 + 0x6cf4) = fVar12;
    FUN_0091ada4(param_1 + 0x6cb0);
  }
  FUN_00abc380(fVar15,0xbf800000,param_1 + 0x6cb0);
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar9 & 1) == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  lVar1 = param_1 + 0x8ad8;
  fVar12 = fVar12 + 130.0;
  FUN_00f0d378(lVar1,*ppuVar6);
  if ((*(float *)(param_1 + 0x8b18) != 160.0) || (*(float *)(param_1 + 0x8b1c) != fVar12)) {
    *(float *)(param_1 + 0x8b18) = 160.0;
    *(float *)(param_1 + 0x8b1c) = fVar12;
    FUN_0091ada4(lVar1);
  }
  FUN_00f0dad0(fVar15,lVar1,1);
  fVar13 = *(float *)(param_1 + 0x89e8);
  plVar2 = (long *)(param_1 + 0x89a8);
  if ((fVar13 != 80.0) || (fVar13 = *(float *)(param_1 + 0x89ec), fVar13 != fVar12 + -14.0)) {
    *(float *)(param_1 + 0x89e8) = 80.0;
    *(float *)(param_1 + 0x89ec) = fVar12 + -14.0;
    FUN_0091ada4(plVar2);
  }
  local_a0 = 0x3f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_a0);
  FUN_00f0d4e0(lVar1);
  fVar12 = fVar12 + fVar13 + 48.0;
  if ((*(float *)(param_1 + 0x8c48) != 160.0) || (*(float *)(param_1 + 0x8c4c) != fVar12)) {
    *(float *)(param_1 + 0x8c48) = 160.0;
    *(float *)(param_1 + 0x8c4c) = fVar12;
    FUN_0091ada4(param_1 + 0x8c08);
  }
  FUN_00abc380(fVar15,0xbf800000,param_1 + 0x8c08);
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_60_02be9c58;
  if ((uVar9 & 1) == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_36_02be9c40;
  }
  lVar1 = param_1 + 0xaa30;
  fVar12 = fVar12 + 130.0;
  FUN_00f0d378(lVar1,*ppuVar6);
  if ((*(float *)(param_1 + 0xaa70) != 160.0) || (*(float *)(param_1 + 0xaa74) != fVar12)) {
    *(float *)(param_1 + 0xaa70) = 160.0;
    *(float *)(param_1 + 0xaa74) = fVar12;
    FUN_0091ada4(lVar1);
  }
  FUN_00f0dad0(fVar15,lVar1,1);
  fVar15 = *(float *)(param_1 + 0xa940);
  plVar2 = (long *)(param_1 + 0xa900);
  if ((fVar15 != 80.0) || (fVar15 = *(float *)(param_1 + 0xa944), fVar15 != fVar12 + -14.0)) {
    *(float *)(param_1 + 0xa940) = 80.0;
    *(float *)(param_1 + 0xa944) = fVar12 + -14.0;
    FUN_0091ada4(plVar2);
  }
  local_a0 = 0x3f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_a0);
  FUN_00f0d4e0(lVar1);
  lVar1 = param_1 + 0xab60;
  fVar12 = fVar12 + fVar15 + 48.0;
  local_b8 = (float)FUN_00f01fcc(lVar1,0,0,1,1);
  fVar13 = local_a4 * 0.25;
  fStack_b4 = fVar15 + 20.0;
  if (local_b8 <= fVar13) {
    local_b8 = fVar13;
  }
  FUN_00f13f18(lVar1,&local_b8);
  fVar15 = fVar12 + -10.0;
  if ((*(float *)(param_1 + 0xaba0) != 160.0) || (*(float *)(param_1 + 0xaba4) != fVar15)) {
    *(float *)(param_1 + 0xaba0) = 160.0;
    *(float *)(param_1 + 0xaba4) = fVar15;
    FUN_0091ada4(lVar1);
  }
  pfVar3 = (float *)(param_1 + 0xac58);
  plVar2 = (long *)(param_1 + 0xac18);
  if ((*pfVar3 != 0.0) || (*(float *)(param_1 + 0xac5c) != 54.0)) {
    pfVar3[0] = 0.0;
    pfVar3[1] = 54.0;
    FUN_0091ada4(plVar2);
  }
  local_a0 = 0x3f80000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_a0);
  pfVar4 = (float *)(param_1 + 0xad48);
  plVar2 = (long *)(param_1 + 0xad08);
  fVar10 = *pfVar3 + 44.0 + 10.0;
  if ((*pfVar4 != fVar10) || (*(float *)(param_1 + 0xad4c) != 62.0)) {
    *pfVar4 = fVar10;
    *(float *)(param_1 + 0xad4c) = 62.0;
    FUN_0091ada4(plVar2);
  }
  local_a0 = 0x3f80000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_a0);
  fVar16 = *pfVar4;
  fVar14 = 6.0;
  fVar10 = local_a4 * 0.5 + 6.0;
  fVar11 = (float)FUN_00f01c20(plVar2);
  fVar11 = fVar16 + fVar11 + 20.0;
  lVar1 = param_1 + 0xae38;
  if (fVar10 <= fVar11) {
    fVar10 = fVar11;
  }
  local_b8 = (float)FUN_00f01fcc(lVar1,0,0,1,1);
  fStack_b4 = fVar14 + 20.0;
  if (local_b8 <= fVar13) {
    local_b8 = fVar13;
  }
  FUN_00f13f18(lVar1,&local_b8);
  if ((*(float *)(param_1 + 0xae78) != fVar10) || (*(float *)(param_1 + 0xae7c) != fVar15)) {
    *(float *)(param_1 + 0xae78) = fVar10;
    *(float *)(param_1 + 0xae7c) = fVar15;
    FUN_0091ada4(lVar1);
  }
  pfVar3 = (float *)(param_1 + 0xaf30);
  plVar2 = (long *)(param_1 + 0xaef0);
  if ((*pfVar3 != 0.0) || (*(float *)(param_1 + 0xaf34) != 54.0)) {
    pfVar3[0] = 0.0;
    pfVar3[1] = 54.0;
    FUN_0091ada4(plVar2);
  }
  local_a0 = 0x3f80000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_a0);
  plVar2 = (long *)(param_1 + 0xafe0);
  fVar13 = *(float *)(param_1 + 0xb020);
  fVar15 = *pfVar3 + 44.0 + 10.0;
  if ((fVar13 != fVar15) || (fVar13 = *(float *)(param_1 + 0xb024), fVar13 != 62.0)) {
    *(float *)(param_1 + 0xb020) = fVar15;
    *(float *)(param_1 + 0xb024) = 62.0;
    FUN_0091ada4(plVar2);
  }
  local_a0 = 0x3f80000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_a0);
  plVar2 = (long *)(param_1 + 0xb198);
  fVar15 = (float)FUN_00f13e54(plVar2);
  fVar11 = *(float *)(param_1 + 0xc79c);
  lVar1 = param_1 + 0xc758;
  FUN_00f13e54(lVar1);
  fVar10 = fVar13 * 0.5;
  FUN_00f13e54(plVar2);
  fVar13 = (fVar11 + fVar10) - fVar13 * 0.5;
  if ((*(float *)(param_1 + 0xb1d8) != fVar15 * 0.5) || (*(float *)(param_1 + 0xb1dc) != fVar13)) {
    *(float *)(param_1 + 0xb1d8) = fVar15 * 0.5;
    *(float *)(param_1 + 0xb1dc) = fVar13;
    FUN_0091ada4(plVar2);
  }
  local_a0 = 0x3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_a0);
  lVar5 = param_1 + 0xdff0;
  fVar15 = (float)FUN_00f13e54(lVar5);
  pfVar3 = (float *)(param_1 + 0xe030);
  fVar13 = *pfVar3;
  fVar15 = local_a4 + fVar15 * -0.5 + -80.0;
  if (fVar13 != fVar15) {
    *pfVar3 = fVar15;
    FUN_0091ada4(lVar5);
    fVar13 = *pfVar3;
  }
  fVar15 = (float)FUN_00f13e54(lVar1);
  fVar15 = (fVar13 - fVar15) + -16.0;
  if (*(float *)(param_1 + 0xc798) != fVar15) {
    *(float *)(param_1 + 0xc798) = fVar15;
    FUN_0091ada4(lVar1);
  }
  fVar10 = *pfVar3;
  fVar12 = fVar12 + 210.0;
  fVar15 = (float)FUN_00f13e54(lVar5);
  fVar13 = *(float *)(param_1 + 0xb150);
  fVar15 = (local_a4 - (fVar10 + fVar15 * 0.5)) * 0.5;
  if ((fVar13 != fVar15) || (fVar13 = *(float *)(param_1 + 0xb154), fVar13 != fVar12)) {
    *(float *)(param_1 + 0xb150) = fVar15;
    *(float *)(param_1 + 0xb154) = fVar12;
    FUN_0091ada4(param_1 + 0xb110);
  }
  FUN_00f13e54(lVar5);
  if (*(float *)(param_1 + 0xf8cc) != fVar12 + fVar13) {
    *(float *)(param_1 + 0xf8cc) = fVar12 + fVar13;
    FUN_0091ada4(param_1 + 0xf888);
  }
  FUN_00ed5688(param_1 + 0x1d0);
  if (*(long *)(lVar7 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

