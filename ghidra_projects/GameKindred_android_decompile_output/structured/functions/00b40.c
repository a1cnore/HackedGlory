// functions/00b40 — 5 functions
#include "libGameKindred.h"




void FUN_00b40294(long param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 local_a0;
  undefined4 *local_98;
  int local_8c;
  ulong local_88;
  undefined4 *local_80;
  int local_78 [16];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00af97f4(param_1 + 0x22a0,0);
  iVar4 = *(int *)(param_1 + 0x35430);
  if (iVar4 < 1) {
    *(uint *)(param_1 + 0x2324) = *(uint *)(param_1 + 0x2324) & 0xfffffffb;
  }
  else {
    local_8c = iVar4 * 2 + -2;
    *(uint *)(param_1 + 0x2324) = *(uint *)(param_1 + 0x2324) | 4;
    local_88 = 0;
    local_80 = (undefined4 *)0x0;
    if (*(char *)(param_1 + 0x35438) == '\0') {
      *(char *)(param_1 + 0x35438) = '\x01';
      FUN_0091f584(&local_88,&local_8c);
      FUN_008fff20(local_78,"build://Sounds/UI.assetbundle/guild_banner_%d.mp3",
                   *(int *)(param_1 + 0x35430));
      FUN_00aa12a8(0x3f800000,local_78,0,0);
      bVar2 = *(byte *)(param_1 + 0x2bc8);
      uVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(ulong *)(param_1 + 0x2bd0);
      }
      if ((uVar1 == 0x11) &&
         (iVar4 = FUN_0090d610((byte *)(param_1 + 0x2bc8),0,0xffffffffffffffff,"GUILD_BUFF_STAR_3",
                               0x11), iVar4 == 0)) {
        FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/guild_activity_on_fire.mp3",0,0);
      }
    }
    local_78[0] = local_8c + 1;
    FUN_0091f584(&local_88,local_78);
    local_a0 = 0;
    local_98 = (undefined4 *)0x0;
    FUN_0091f484(&local_a0,local_88 & 0xffffffff);
    if ((int)local_88 == 0) {
      iVar4 = 0;
    }
    else {
      lVar7 = (local_88 & 0xffffffff) << 2;
      puVar5 = local_80;
      puVar6 = local_98;
      do {
        lVar7 = lVar7 + -4;
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
        iVar4 = (int)local_88;
      } while (lVar7 != 0);
    }
    local_a0 = CONCAT44(local_a0._4_4_,iVar4);
    FUN_00afa458(param_1 + 0x22a0,&local_a0,0);
    if (local_98 != (undefined4 *)0x0) {
      operator_delete__(local_98);
      local_a0 = 0;
      local_98 = (undefined4 *)0x0;
    }
    if (local_80 != (undefined4 *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (undefined4 *)0x0;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b40468(undefined8 param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00b40294();
    return;
  }
  return;
}




void FUN_00b40474(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b4047c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00b40480(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b40488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00b4048c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  float *pfVar11;
  int iVar12;
  long lVar13;
  undefined4 uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_d0;
  undefined8 local_c0;
  float local_b4;
  float local_b0;
  float local_ac;
  long local_a8;
  
  lVar13 = tpidr_el0;
  local_a8 = *(long *)(lVar13 + 0x28);
  uVar15 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar15 & 1,&local_ac,&local_b0,&local_b4);
  uVar16 = FUN_0092ea9c();
  fVar22 = local_ac - local_b4;
  fVar24 = fVar22 * 0.5;
  FUN_00f13f08(fVar22,local_b0);
  fVar18 = 160.0;
  if (*(float *)(param_1 + 0x13c) != 160.0) {
    *(undefined4 *)(param_1 + 0x13c) = 0x43200000;
    FUN_0091ada4(param_1 + 0xf8);
    fVar18 = *(float *)(param_1 + 0x13c);
  }
  FUN_00f13f08(fVar22,local_b0 - fVar18,param_1 + 0xf8);
  plVar1 = (long *)(param_1 + 2000);
  lVar2 = param_1 + 0x14c8;
  fVar18 = (float)FUN_00ac6090(plVar1);
  fVar21 = 0.0;
  FUN_00f0db64(fVar22 - (fVar18 + fVar18 + 80.0),0,0x3f800000,lVar2);
  FUN_00f01c20(lVar2);
  if ((*(float *)(param_1 + 0x1508) != fVar24) || (*(float *)(param_1 + 0x150c) != fVar21 * 0.5)) {
    *(float *)(param_1 + 0x1508) = fVar24;
    *(float *)(param_1 + 0x150c) = fVar21 * 0.5;
    FUN_0091ada4(lVar2);
  }
  local_d0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x14c8) + 0x28))(lVar2,&local_d0);
  fVar18 = 0.75;
  if ((uVar16 & 1) == 0) {
    fVar18 = 0.5;
  }
  lVar3 = param_1 + 0x15f8;
  if ((*(float *)(param_1 + 0x1640) != fVar18) || (*(float *)(param_1 + 0x1644) != fVar18)) {
    *(float *)(param_1 + 0x1640) = fVar18;
    *(float *)(param_1 + 0x1644) = fVar18;
    FUN_0091ada4(lVar3);
  }
  fVar23 = *(float *)(param_1 + 0x1508);
  fVar21 = (float)FUN_00f0d548(lVar2);
  fVar19 = (float)FUN_00f01c20(lVar3);
  fVar21 = fVar23 + fVar21 * 0.5 + fVar19 * 0.5 + 20.0;
  if ((*(float *)(param_1 + 0x1638) != fVar21) ||
     (*(float *)(param_1 + 0x163c) != *(float *)(param_1 + 0x150c))) {
    *(float *)(param_1 + 0x1638) = fVar21;
    *(float *)(param_1 + 0x163c) = *(float *)(param_1 + 0x150c);
    FUN_0091ada4(lVar3);
  }
  local_d0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x15f8) + 0x28))(lVar3,&local_d0);
  fVar21 = *(float *)(param_1 + 0x1508);
  if ((*(float *)(param_1 + 0x1418) != fVar21) ||
     (*(float *)(param_1 + 0x141c) != *(float *)(param_1 + 0x150c))) {
    *(float *)(param_1 + 0x1418) = fVar21;
    *(float *)(param_1 + 0x141c) = *(float *)(param_1 + 0x150c);
    FUN_0091ada4(param_1 + 0x13d8);
    fVar21 = *(float *)(param_1 + 0x1508);
  }
  fVar19 = (float)FUN_00f01c20(lVar2);
  fVar23 = (float)FUN_00f13e54(plVar1);
  fVar21 = ((fVar21 - fVar19 * 0.5) - fVar23 * 0.5) + -20.0;
  if ((*(float *)(param_1 + 0x810) != fVar21) ||
     (*(float *)(param_1 + 0x814) != *(float *)(param_1 + 0x150c))) {
    *(float *)(param_1 + 0x810) = fVar21;
    *(float *)(param_1 + 0x814) = *(float *)(param_1 + 0x150c);
    FUN_0091ada4(plVar1);
  }
  local_d0 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_d0);
  uVar17 = FUN_0093d880();
  if ((uVar17 & 1) != 0) {
    plVar4 = (long *)(param_1 + 0x1bf0);
    if ((*(float *)(param_1 + 0x1c38) != fVar18) || (*(float *)(param_1 + 0x1c3c) != fVar18)) {
      *(float *)(param_1 + 0x1c38) = fVar18;
      *(float *)(param_1 + 0x1c3c) = fVar18;
      FUN_0091ada4(plVar4);
    }
    fVar19 = *(float *)(param_1 + 0x810);
    fVar18 = (float)FUN_00ac6090(plVar1);
    fVar21 = (float)FUN_00f01c20(plVar4);
    fVar18 = ((fVar19 - fVar18 * 0.5) - fVar21 * 0.5) + -20.0;
    if ((*(float *)(param_1 + 0x1c30) != fVar18) ||
       (*(float *)(param_1 + 0x1c34) != *(float *)(param_1 + 0x814))) {
      *(float *)(param_1 + 0x1c30) = fVar18;
      *(float *)(param_1 + 0x1c34) = *(float *)(param_1 + 0x814);
      FUN_0091ada4(plVar4);
    }
    local_d0 = 0x3f0000003f000000;
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_d0);
  }
  lVar2 = param_1 + 0x22a0;
  FUN_00f13f08(local_ac,local_b0,lVar2);
  if ((*(float *)(param_1 + 0x22e0) != 0.0) || (*(float *)(param_1 + 0x22e4) != 250.0)) {
    *(undefined8 *)(param_1 + 0x22e0) = 0x437a000000000000;
    FUN_0091ada4(lVar2);
  }
  local_d0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x22a0) + 0x28))(lVar2,&local_d0);
  fVar21 = *(float *)(param_1 + 0x3310);
  fVar18 = *(float *)(&DAT_01bb3730 + (ulong)(*(int *)(param_1 + 0x35430) == 2) * 4);
  lVar2 = param_1 + 0x32d0;
  if ((fVar21 != 0.0) || (fVar21 = *(float *)(param_1 + 0x3314), fVar21 != fVar18)) {
    *(undefined4 *)(param_1 + 0x3310) = 0;
    *(float *)(param_1 + 0x3314) = fVar18;
    FUN_0091ada4(lVar2);
  }
  local_d0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x32d0) + 0x28))(lVar2,&local_d0);
  fVar18 = (float)FUN_00f01c20(lVar2);
  FUN_00f01c20(lVar2);
  FUN_00f13f08(fVar18 + fVar18,fVar21 * 1.95,param_1 + 0x31e0);
  if ((*(float *)(param_1 + 0x3220) != *(float *)(param_1 + 0x3310)) ||
     (*(float *)(param_1 + 0x3224) != *(float *)(param_1 + 0x3314))) {
    *(float *)(param_1 + 0x3220) = *(float *)(param_1 + 0x3310);
    *(float *)(param_1 + 0x3224) = *(float *)(param_1 + 0x3314);
    FUN_0091ada4(param_1 + 0x31e0);
  }
  iVar12 = *(int *)(param_1 + 0x35434);
  if (iVar12 - 0x5aU < 10) {
    fVar18 = 10.0;
  }
  else {
    fVar18 = -20.0;
    if (iVar12 % 10 != 1) {
      fVar18 = 0.0;
    }
  }
  fVar21 = *(float *)(&DAT_01bb3738 + (ulong)(*(int *)(param_1 + 0x35430) == 2) * 4);
  lVar2 = param_1 + 0x2650;
  if ((*(float *)(param_1 + 0x2690) != fVar18) || (*(float *)(param_1 + 0x2694) != fVar21)) {
    *(float *)(param_1 + 0x2690) = fVar18;
    *(float *)(param_1 + 0x2694) = fVar21;
    FUN_0091ada4(lVar2);
  }
  local_d0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x2650) + 0x28))(lVar2,&local_d0);
  fVar21 = (float)FUN_00f0d4e0(lVar2);
  fVar18 = 210.0 / fVar21;
  if (1.0 < 210.0 / fVar21) {
    fVar18 = 1.0;
  }
  if ((*(float *)(param_1 + 0x2698) != fVar18) || (*(float *)(param_1 + 0x269c) != fVar18)) {
    *(float *)(param_1 + 0x2698) = fVar18;
    *(float *)(param_1 + 0x269c) = fVar18;
    FUN_0091ada4(lVar2);
  }
  fVar18 = 0.75;
  if ((uVar16 & 1) == 0) {
    fVar18 = 0.65;
  }
  lVar2 = param_1 + 0x2be8;
  if ((*(float *)(param_1 + 0x2c30) != fVar18) || (*(float *)(param_1 + 0x2c34) != fVar18)) {
    *(float *)(param_1 + 0x2c30) = fVar18;
    *(float *)(param_1 + 0x2c34) = fVar18;
    FUN_0091ada4(lVar2);
  }
  fVar18 = *(float *)(&DAT_01bb3740 + (ulong)(*(int *)(param_1 + 0x35434) == 1) * 4);
  if ((*(float *)(param_1 + 0x2c28) != 0.0) || (*(float *)(param_1 + 0x2c2c) != fVar18)) {
    *(undefined4 *)(param_1 + 0x2c28) = 0;
    *(float *)(param_1 + 0x2c2c) = fVar18;
    FUN_0091ada4(lVar2);
  }
  local_d0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x2be8) + 0x28))(lVar2,&local_d0);
  lVar2 = param_1 + 0x3400;
  lVar3 = param_1 + 0x21e8;
  fVar18 = *(float *)(param_1 + 0x222c) + 510.0 + 100.0;
  if ((*(float *)(param_1 + 0x3440) != fVar24 + -400.0) || (*(float *)(param_1 + 0x3444) != fVar18))
  {
    *(float *)(param_1 + 0x3440) = fVar24 + -400.0;
    *(float *)(param_1 + 0x3444) = fVar18;
    FUN_0091ada4(lVar2);
  }
  local_d0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x3400) + 0x28))(lVar2,&local_d0);
  fVar21 = *(float *)(param_1 + 0x814);
  FUN_00f01c20(plVar1);
  fVar21 = fVar21 + fVar18;
  fVar18 = fVar21 + 90.0;
  if ((*(float *)(param_1 + 0x2228) != fVar24) ||
     (fVar21 = *(float *)(param_1 + 0x222c), fVar21 != fVar18)) {
    *(float *)(param_1 + 0x2228) = fVar24;
    *(float *)(param_1 + 0x222c) = fVar18;
    FUN_0091ada4(lVar3);
  }
  local_d0 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x21e8) + 0x28))(lVar3,&local_d0);
  uVar20 = FUN_00f01c54(lVar3,1,0,1,1);
  fVar18 = *(float *)(param_1 + 0x3444);
  FUN_00f01c20(lVar2);
  FUN_00f13f08(uVar20,fVar18 + fVar21 * 0.5,lVar3);
  lVar2 = param_1 + 0x2780;
  if ((*(float *)(param_1 + 0x27c0) != 600.0) || (*(float *)(param_1 + 0x27c4) != 50.0)) {
    *(undefined8 *)(param_1 + 0x27c0) = 0x4248000044160000;
    FUN_0091ada4(lVar2);
  }
  local_d0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x2780) + 0x28))(lVar2,&local_d0);
  local_c0 = 0x4382000043820000;
  FUN_00f13f18(lVar2,&local_c0);
  FUN_00f13f08(local_ac,local_b0,param_1 + 0x2838);
  pfVar5 = (float *)(param_1 + 0x4848);
  *(uint *)(param_1 + 0x2804) = *(uint *)(param_1 + 0x2804) & 0xfffffffb;
  lVar2 = param_1 + 0x4808;
  fVar18 = *(float *)(param_1 + 0x27c4) + local_c0._4_4_ * 0.5 + 10.0;
  pfVar6 = (float *)(param_1 + 0x484c);
  if ((*pfVar5 != *(float *)(param_1 + 0x27c0)) || (*pfVar6 != fVar18)) {
    *pfVar5 = *(float *)(param_1 + 0x27c0);
    *pfVar6 = fVar18;
    FUN_0091ada4(lVar2);
  }
  local_d0 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x4808) + 0x28))(lVar2,&local_d0);
  fVar21 = *pfVar5;
  fVar24 = *pfVar6;
  FUN_00f01c20(lVar2);
  fVar24 = fVar24 + fVar18 * 0.5;
  if ((*(float *)(param_1 + 0x4758) != fVar21) || (*(float *)(param_1 + 0x475c) != fVar24)) {
    *(float *)(param_1 + 0x4758) = fVar21;
    *(float *)(param_1 + 0x475c) = fVar24;
    FUN_0091ada4(param_1 + 0x4718);
  }
  pfVar5 = (float *)(param_1 + 0x4a30);
  lVar2 = param_1 + 0x49f0;
  if ((*pfVar5 != 30.0) || (*(float *)(param_1 + 0x4a34) != 0.0)) {
    pfVar5[0] = 30.0;
    pfVar5[1] = 0.0;
    FUN_0091ada4(lVar2);
  }
  local_d0 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x49f0) + 0x28))(lVar2,&local_d0);
  FUN_00f0db64(fVar22 * 0.28,0,0x3f800000,lVar2);
  FUN_00f0d4e0(lVar2);
  lVar2 = param_1 + 0x4b20;
  FUN_00b028f0(lVar2);
  pfVar5 = (float *)(param_1 + 0x4b60);
  pfVar6 = (float *)(param_1 + 0x4b64);
  if ((*pfVar5 != 0.0) || (*pfVar6 != 340.0)) {
    pfVar5[0] = 0.0;
    pfVar5[1] = 340.0;
    FUN_0091ada4(lVar2);
  }
  local_d0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x4b20) + 0x28))(lVar2,&local_d0);
  FUN_00b01bd0(lVar2);
  pfVar7 = (float *)(param_1 + 0x4978);
  fVar18 = *(float *)(param_1 + 0x80f8);
  if ((fVar18 != *pfVar7) || (fVar18 = *(float *)(param_1 + 0x80fc), fVar18 != 340.0)) {
    *(float *)(param_1 + 0x80f8) = *pfVar7;
    *(float *)(param_1 + 0x80fc) = 340.0;
    FUN_0091ada4(param_1 + 0x80b8);
  }
  FUN_00b028f0(lVar2);
  fVar21 = *pfVar6;
  lVar8 = param_1 + 0x5b18;
  FUN_00b028f0(lVar2);
  fVar24 = *(float *)(param_1 + 0x5b58);
  fVar18 = fVar21 + fVar18 * 0.5 + -20.0;
  pfVar9 = (float *)(param_1 + 0x5b5c);
  if ((fVar24 != 0.0) || (fVar24 = *pfVar9, fVar24 != fVar18)) {
    *(float *)(param_1 + 0x5b58) = 0.0;
    *pfVar9 = fVar18;
    FUN_0091ada4(lVar8);
  }
  local_d0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x5b18) + 0x28))(lVar8,&local_d0);
  fVar18 = *pfVar9;
  FUN_00f01c20(lVar8);
  fVar18 = fVar18 + fVar24 * 0.5;
  if ((*(float *)(param_1 + 0x7fc8) != 0.0) || (*(float *)(param_1 + 0x7fcc) != fVar18)) {
    *(float *)(param_1 + 0x7fc8) = 0.0;
    *(float *)(param_1 + 0x7fcc) = fVar18;
    FUN_0091ada4(param_1 + 0x7f88);
  }
  local_d0 = 0x3f000000;
  lVar10 = param_1 + 0x4938;
  pfVar11 = (float *)(param_1 + 0x497c);
  (**(code **)(*(long *)(param_1 + 0x7f88) + 0x28))(param_1 + 0x7f88,&local_d0);
  fVar19 = *pfVar5;
  plVar1 = (long *)(param_1 + 0x5520);
  fVar18 = (float)FUN_00b028f0(lVar2);
  fVar24 = (float)FUN_00f01c20(plVar1);
  fVar21 = -60.0;
  fVar23 = *pfVar6;
  fVar24 = fVar19 + fVar18 * 0.5 + fVar24 * 0.5 + -60.0;
  FUN_00b028f0(lVar2);
  fVar18 = fVar21 * 0.2;
  FUN_00f01c20(plVar1);
  fVar18 = fVar23 + fVar18 + fVar21 * 0.5;
  if ((*(float *)(param_1 + 0x5560) != fVar24) || (*(float *)(param_1 + 0x5564) != fVar18)) {
    *(float *)(param_1 + 0x5560) = fVar24;
    *(float *)(param_1 + 0x5564) = fVar18;
    FUN_0091ada4(plVar1);
  }
  local_d0 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_d0);
  fVar24 = 150.0;
  fVar18 = 250.0;
  if ((uVar16 & 1) == 0) {
    fVar18 = fVar24;
  }
  if ((*pfVar7 != fVar22 * 0.17) || (fVar24 = *pfVar11, fVar24 != fVar18)) {
    *pfVar7 = fVar22 * 0.17;
    *pfVar11 = fVar18;
    FUN_0091ada4(lVar10);
  }
  uVar20 = FUN_00f01c54(lVar10,1,0,1,1);
  fVar21 = *pfVar9;
  FUN_00f01c20(lVar8);
  FUN_00f13f08(uVar20,fVar21 + fVar24 * 0.5,lVar10);
  fVar24 = (float)FUN_00f0d4e0(param_1 + 0x9870);
  if (*(float *)(param_1 + 0x98b0) != fVar24 * -0.5) {
    *(float *)(param_1 + 0x98b0) = fVar24 * -0.5;
    FUN_0091ada4(param_1 + 0x9870);
  }
  plVar1 = (long *)(param_1 + 0x9678);
  FUN_00f0bc10(0,0,0,&local_d0);
  FUN_00f0c168(plVar1,&local_d0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  fVar24 = *(float *)(param_1 + 0x96b8);
  if ((fVar24 != fVar22 * 0.83) || (fVar24 = *(float *)(param_1 + 0x96bc), fVar24 != fVar18)) {
    *(float *)(param_1 + 0x96b8) = fVar22 * 0.83;
    *(float *)(param_1 + 0x96bc) = fVar18;
    FUN_0091ada4(plVar1);
  }
  fVar18 = *(float *)(param_1 + 0x222c);
  FUN_00f13e54(lVar3);
  fVar22 = *pfVar11;
  fVar18 = fVar18 + fVar24;
  FUN_00f13e54(lVar10);
  pfVar5 = (float *)(param_1 + 0x9b14);
  if (fVar18 <= fVar22 + fVar24) {
    fVar18 = fVar22 + fVar24;
  }
  if (*pfVar5 != fVar18) {
    *pfVar5 = fVar18;
    FUN_0091ada4(param_1 + 0x9ad0);
  }
  fVar18 = DAT_02be3668;
  if ((uVar16 & 1) == 0) {
    fVar18 = 1.0;
  }
  fVar22 = 2048.0 - local_b4 / fVar18;
  fVar18 = (local_ac - local_b4) / fVar22;
  if ((*(float *)(param_1 + 0x35058) != fVar18) ||
     (fVar22 = *(float *)(param_1 + 0x3505c), fVar22 != fVar18)) {
    *(float *)(param_1 + 0x35058) = fVar18;
    *(float *)(param_1 + 0x3505c) = fVar18;
    FUN_0091ada4(param_1 + 0x35010);
  }
  fVar18 = *pfVar5;
  FUN_00f13e54(param_1 + 0x9ad0);
  if ((*(float *)(param_1 + 0x35050) != 0.0) || (*(float *)(param_1 + 0x35054) != fVar18 + fVar22))
  {
    *(float *)(param_1 + 0x35050) = 0.0;
    *(float *)(param_1 + 0x35054) = fVar18 + fVar22;
    FUN_0091ada4(param_1 + 0x35010);
  }
  uVar14 = 0x44cbc000;
  if ((uVar16 & 1) == 0) {
    uVar14 = 0x4497e000;
  }
  *(uint *)(param_1 + 0x35094) = *(uint *)(param_1 + 0x35094) | 8;
  local_d0 = CONCAT44(0x44c00000,uVar14);
  FUN_00af5fd8(param_1 + 0x17728,&local_d0);
  FUN_00bb9a5c(param_1 + 0x17728);
  FUN_00b41338(param_1);
  if (*(long *)(lVar13 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

