// functions/00a76 — 5 functions
#include "libGameKindred.h"




void FUN_00a76150(long param_1)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 auStack_4c [4];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar1 = (long *)(param_1 + 0x11318);
  plVar4 = (long *)*plVar1;
  uVar5 = 0;
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0x11320) == (int)plVar4[1]) {
      uVar5 = (**(code **)(*plVar4 + 0x10))();
    }
    else {
      *plVar1 = 0;
      uVar5 = 0;
      *(int *)(param_1 + 0x11320) = DAT_03214ce8;
    }
  }
  uVar6 = FUN_00d9ec40(uVar5,PTR_s__Item_HealingFlask__02beb0b0,auStack_4c);
  puVar2 = (uint *)(param_1 + 0xfd6c);
  if ((uVar6 & 1) == 0) {
    uVar7 = *puVar2 & 0xfffffffb;
  }
  else {
    if ((*puVar2 >> 2 & 1) != 0) goto LAB_00a76294;
    plVar4 = (long *)*plVar1;
    if (plVar4 == (long *)0x0) {
      uVar5 = 0;
    }
    else if (*(int *)(param_1 + 0x11320) == (int)plVar4[1]) {
      uVar5 = (**(code **)(*plVar4 + 0x10))();
    }
    else {
      *plVar1 = 0;
      uVar5 = 0;
      *(int *)(param_1 + 0x11320) = DAT_03214ce8;
    }
    FUN_00a46500(param_1 + 0xfce8,uVar5,DAT_0314b294,auStack_4c,"icon_buff_healing_flask",1,1);
    uVar7 = *puVar2 | 4;
  }
  *puVar2 = uVar7;
LAB_00a76294:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a762c0(long param_1)

{
  if (*(char *)(param_1 + 0x11328) != '\0') {
    FUN_00a76878();
    return;
  }
  FUN_00a773b8();
  return;
}




void FUN_00a763e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027cda78;
  uVar1 = FUN_00d7e3d0();
  FUN_00e6ec98(uVar1,param_1);
  if ((void *)param_1[0x2262] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2262]);
    param_1[0x2262] = 0;
    param_1[0x2261] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x223b);
  FUN_00f0d3a4(param_1 + 0x2215);
  FUN_00f0d3a4(param_1 + 0x21ef);
  FUN_00f13d08(param_1 + 0x21d8);
  FUN_00f0d3a4(param_1 + 0x21b2);
  param_1[0x2194] = &PTR_FUN_028266f0;
  param_1[0x21ab] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x21ae);
  FUN_00f13d08(param_1 + 0x2194);
  param_1[0x2176] = &PTR_FUN_028266f0;
  param_1[0x218d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2190);
  FUN_00f13d08(param_1 + 0x2176);
  param_1[0x2158] = &PTR_FUN_028266f0;
  param_1[0x216f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2172);
  FUN_00f13d08(param_1 + 0x2158);
  FUN_00f13d08(param_1 + 0x2141);
  param_1[0x2123] = &PTR_FUN_028266f0;
  param_1[0x213a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x213d);
  FUN_00f13d08(param_1 + 0x2123);
  param_1[0x2105] = &PTR_FUN_028266f0;
  param_1[0x211c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x211f);
  FUN_00f13d08(param_1 + 0x2105);
  param_1[0x20e7] = &PTR_FUN_028266f0;
  param_1[0x20fe] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2101);
  FUN_00f13d08(param_1 + 0x20e7);
  param_1[0x20c9] = &PTR_FUN_028266f0;
  param_1[0x20e0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x20e3);
  FUN_00f13d08(param_1 + 0x20c9);
  param_1[0x20ab] = &PTR_FUN_028266f0;
  param_1[0x20c2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x20c5);
  FUN_00f13d08(param_1 + 0x20ab);
  FUN_00f01868(param_1 + 0x209a);
  FUN_00a463e0(param_1 + 0x1f9d);
  FUN_00a5933c(param_1 + 0x1e03);
  FUN_00a2dab8(param_1 + 0xd54);
  param_1[0x75a] = &PTR_FUN_027c9878;
  lVar2 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar2 + 0x6510) = &PTR_FUN_027c9730;
    FUN_00f0d3a4((long)param_1 + lVar2 + 0x6948);
    *(undefined ***)((long)param_1 + lVar2 + 0x6858) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar2 + 0x6910) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar2 + 0x6928);
    FUN_00f13d08((long)param_1 + lVar2 + 0x6858);
    *(undefined ***)((long)param_1 + lVar2 + 0x6758) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar2 + 0x6810) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar2 + 0x6828);
    FUN_00f13d08((long)param_1 + lVar2 + 0x6758);
    *(undefined ***)((long)param_1 + lVar2 + 0x6650) = &PTR_FUN_02827290;
    *(undefined ***)((long)param_1 + lVar2 + 0x6708) = &PTR_FUN_028273f8;
    FUN_00f0a79c((long)param_1 + lVar2 + 0x6740);
    *(undefined ***)((long)param_1 + lVar2 + 0x6650) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar2 + 0x6708) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar2 + 0x6720);
    FUN_00f13d08((long)param_1 + lVar2 + 0x6650);
    FUN_00f01868((long)param_1 + lVar2 + 0x65c8);
    FUN_00f13d08((long)param_1 + lVar2 + 0x6510);
    lVar2 = lVar2 + -0x588;
  } while (lVar2 != -0x2c40);
  FUN_00f13d08(param_1 + 0x7aa);
  FUN_00f13d08(param_1 + 0x791);
  FUN_00b27cec(param_1 + 0x774);
  FUN_00f13d08(param_1 + 0x75a);
  FUN_00a43ab8(param_1 + 0x6e);
  FUN_00a3fed0(param_1 + 0x45);
  FUN_00f13d08(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a76854(void *param_1)

{
  FUN_00a763e0();
  operator_delete(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a76878(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  float *pfVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  float *pfVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  float local_a0;
  float fStack_9c;
  long local_98;
  
  lVar9 = tpidr_el0;
  local_98 = *(long *)(lVar9 + 0x28);
  plVar1 = param_3 + 0x17;
  local_a0 = (float)(**(code **)(*param_3 + 0x50))();
  fStack_9c = param_2;
  FUN_00f13f18(plVar1,&local_a0);
  fVar10 = (float)(**(code **)(*param_3 + 0x50))(param_3);
  (**(code **)(*param_3 + 0x50))(param_3);
  if ((*(float *)(param_3 + 0x1f) != fVar10 * -0.5) ||
     (*(float *)((long)param_3 + 0xfc) != param_2 * -0.5)) {
    *(float *)(param_3 + 0x1f) = fVar10 * -0.5;
    *(float *)((long)param_3 + 0xfc) = param_2 * -0.5;
    FUN_0091ada4(plVar1);
  }
  plVar3 = param_3 + 0x75a;
  fVar10 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar11 = 0.97;
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13f08(fVar10 * 0.97,fVar11 * 0.45,plVar3);
  fVar10 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar11 = (float)FUN_00f13e54(plVar3);
  fVar10 = (fVar10 - fVar11) * 0.5;
  if ((*(float *)(param_3 + 0x762) != fVar10) || (*(float *)((long)param_3 + 0x3b14) != 0.0)) {
    *(float *)(param_3 + 0x762) = fVar10;
    *(undefined4 *)((long)param_3 + 0x3b14) = 0;
    FUN_0091ada4(plVar3);
  }
  FUN_00a3863c(plVar3);
  plVar3 = param_3 + 0x2141;
  local_a0 = (float)FUN_00f13e54(plVar1);
  fVar10 = 0.43;
  local_a0 = local_a0 * 0.43;
  fStack_9c = local_a0;
  FUN_00f13f18(plVar3,&local_a0);
  if ((*(float *)(param_3 + 0x214b) != 0.5) || (*(float *)((long)param_3 + 0x10a5c) != 0.5)) {
    param_3[0x214b] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  fVar11 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar12 = (float)FUN_00f13e54(plVar3);
  fVar12 = (fVar11 - fVar12 * 0.5) + 1.0;
  FUN_00f13e54(plVar3);
  fVar11 = *(float *)(param_3 + 0x2149);
  fVar10 = fVar10 * 0.5 + -5.0;
  pfVar4 = (float *)((long)param_3 + 0x10a4c);
  if ((fVar11 != fVar12) || (fVar11 = *pfVar4, fVar11 != fVar10)) {
    *(float *)(param_3 + 0x2149) = fVar12;
    *pfVar4 = fVar10;
    FUN_0091ada4(plVar3);
  }
  fVar12 = (float)FUN_00f13e54(plVar3);
  fVar10 = fVar11;
  fVar13 = (float)FUN_00f0e700(param_3 + 0x2176);
  fVar11 = fVar11 / fVar10;
  if ((*(float *)(param_3 + 0x217f) != fVar12 / fVar13) ||
     (fVar10 = *(float *)((long)param_3 + 0x10bfc), fVar10 != fVar11)) {
    *(float *)(param_3 + 0x217f) = fVar12 / fVar13;
    *(float *)((long)param_3 + 0x10bfc) = fVar11;
    FUN_0091ada4(param_3 + 0x2176);
  }
  fVar11 = (float)FUN_00f13e54(plVar3);
  fVar13 = fVar10 * 0.96;
  fVar12 = (float)FUN_00f0e700(param_3 + 0x2158);
  fVar12 = (fVar11 * 0.96) / fVar12;
  fVar13 = fVar13 / fVar10;
  if ((*(float *)(param_3 + 0x2161) != fVar12) ||
     (fVar10 = *(float *)((long)param_3 + 0x10b0c), fVar10 != fVar13)) {
    *(float *)(param_3 + 0x2161) = fVar12;
    *(float *)((long)param_3 + 0x10b0c) = fVar13;
    FUN_0091ada4(param_3 + 0x2158);
  }
  fVar11 = (float)FUN_00f13e54(plVar3);
  fVar13 = fVar10 * 0.96;
  fVar12 = (float)FUN_00f0e700(param_3 + 0x2194);
  fVar12 = (fVar11 * 0.96) / fVar12;
  fVar13 = fVar13 / fVar10;
  if ((*(float *)(param_3 + 0x219d) != fVar12) ||
     (fVar10 = *(float *)((long)param_3 + 0x10cec), fVar10 != fVar13)) {
    *(float *)(param_3 + 0x219d) = fVar12;
    *(float *)((long)param_3 + 0x10cec) = fVar13;
    FUN_0091ada4(param_3 + 0x2194);
  }
  FUN_00f13e54(plVar3);
  fVar11 = fVar10 * 0.96;
  FUN_00f0d4e0(param_3 + 0x21b2);
  fVar11 = fVar11 / fVar10;
  if (1.0 < fVar11) {
    fVar11 = 1.0;
  }
  if ((*(float *)(param_3 + 0x21bb) != 1.0) || (*(float *)((long)param_3 + 0x10ddc) != fVar11)) {
    *(undefined4 *)(param_3 + 0x21bb) = 0x3f800000;
    *(float *)((long)param_3 + 0x10ddc) = fVar11;
    FUN_0091ada4(param_3 + 0x21b2);
  }
  plVar5 = param_3 + 0x1f9d;
  fVar10 = 24.0;
  FUN_00f13f08(plVar5);
  fVar11 = (float)FUN_00f01c20(plVar3);
  fVar13 = fVar10 * 0.45;
  fVar12 = (float)FUN_00f13e54(plVar5);
  fVar12 = (fVar11 * 0.45) / fVar12;
  fVar13 = fVar13 / fVar10;
  if ((*(float *)(param_3 + 0x1fa6) != fVar12) || (*(float *)((long)param_3 + 0xfd34) != fVar13)) {
    *(float *)(param_3 + 0x1fa6) = fVar12;
    *(float *)((long)param_3 + 0xfd34) = fVar13;
    FUN_0091ada4(plVar5);
  }
  fVar10 = (float)FUN_00f01c20(plVar3);
  fVar12 = -0.3;
  FUN_00f01c20(plVar3);
  fVar11 = fVar12 * 0.28;
  if ((*(float *)(param_3 + 0x1fa5) != fVar10 * -0.3) ||
     (fVar12 = *(float *)((long)param_3 + 0xfd2c), fVar12 != fVar11)) {
    *(float *)(param_3 + 0x1fa5) = fVar10 * -0.3;
    *(float *)((long)param_3 + 0xfd2c) = fVar11;
    FUN_0091ada4(plVar5);
  }
  FUN_00a46d60(plVar5);
  if ((*(float *)(param_3 + 0x221f) != 1.0) || (*(float *)((long)param_3 + 0x110fc) != 1.0)) {
    lVar14 = NEON_fmov(0x3f800000,4);
    param_3[0x221f] = lVar14;
    FUN_0091ada4(param_3 + 0x2215);
  }
  fVar10 = (float)FUN_00f13e54(plVar3);
  FUN_00f13e54(plVar3);
  fVar11 = fVar12 * 0.5;
  if ((*(float *)(param_3 + 0x221d) != fVar10 * 0.4) ||
     (fVar12 = *(float *)((long)param_3 + 0x110ec), fVar12 != fVar11)) {
    *(float *)(param_3 + 0x221d) = fVar10 * 0.4;
    *(float *)((long)param_3 + 0x110ec) = fVar11;
    FUN_0091ada4(param_3 + 0x2215);
  }
  plVar6 = param_3 + 0x21d8;
  fVar10 = (float)FUN_00f13e54(plVar1);
  fVar11 = (float)FUN_00f01c20(plVar3);
  FUN_00f13e54(plVar1);
  FUN_00f13f08(fVar10 - fVar11,plVar6);
  fVar10 = (float)FUN_00f13e54(plVar6);
  fVar10 = fVar10 * 0.5;
  plVar5 = param_3 + 0x2e;
  fVar11 = (float)FUN_00f01c20(plVar6);
  FUN_00f01c20(plVar6);
  fVar12 = fVar12 * 0.33;
  FUN_00f13f08(fVar11 * 0.95,plVar5);
  if ((*(float *)(param_3 + 0x36) != fVar10) || (*(float *)((long)param_3 + 0x1b4) != 0.0)) {
    *(float *)(param_3 + 0x36) = fVar10;
    *(undefined4 *)((long)param_3 + 0x1b4) = 0;
    FUN_0091ada4(plVar5);
  }
  plVar7 = param_3 + 0x21ef;
  if ((*(float *)(param_3 + 0x21f9) != 0.5) || (*(float *)((long)param_3 + 0x10fcc) != 0.0)) {
    param_3[0x21f9] = 0x3f000000;
    FUN_0091ada4(plVar7);
  }
  FUN_00f13e54(plVar5);
  fVar11 = fVar12 * 0.4;
  FUN_00f0d548(plVar7);
  fVar11 = fVar11 / fVar12;
  if ((*(float *)(param_3 + 0x21f8) != fVar11) || (*(float *)((long)param_3 + 0x10fc4) != fVar11)) {
    *(float *)(param_3 + 0x21f8) = fVar11;
    *(float *)((long)param_3 + 0x10fc4) = fVar11;
    FUN_0091ada4(plVar7);
  }
  plVar2 = param_3 + 0x45;
  fVar11 = DAT_03218ef8;
  if ((*(float *)(param_3 + 0x4f) != DAT_03218ef8) ||
     (fVar11 = _DAT_03218efc, *(float *)((long)param_3 + 0x27c) != _DAT_03218efc)) {
    param_3[0x4f] = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(plVar2);
  }
  fVar12 = (float)FUN_00f13e54(plVar5);
  fVar13 = (float)FUN_00a4064c(plVar2);
  FUN_00f13e54(plVar5);
  fVar16 = fVar11 * 0.4;
  FUN_00a4064c(plVar2);
  fVar16 = fVar16 / fVar11;
  if ((*(float *)(param_3 + 0x4e) != fVar12 / fVar13) ||
     (fVar11 = *(float *)((long)param_3 + 0x274), fVar11 != fVar16)) {
    *(float *)(param_3 + 0x4e) = fVar12 / fVar13;
    *(float *)((long)param_3 + 0x274) = fVar16;
    FUN_0091ada4(plVar2);
  }
  fVar12 = *(float *)((long)param_3 + 0x10fbc);
  FUN_00f0d4e0(plVar7);
  fVar12 = fVar12 + fVar11;
  FUN_00a4064c(plVar2);
  fVar11 = fVar11 * 0.6;
  fVar12 = fVar12 + fVar11;
  if ((*(float *)(param_3 + 0x4d) != 0.0) ||
     (fVar11 = *(float *)((long)param_3 + 0x26c), fVar11 != fVar12)) {
    *(undefined4 *)(param_3 + 0x4d) = 0;
    *(float *)((long)param_3 + 0x26c) = fVar12;
    FUN_0091ada4(plVar2);
  }
  plVar7 = param_3 + 0x223b;
  if ((*(float *)(param_3 + 0x2245) != 0.5) || (*(float *)((long)param_3 + 0x1122c) != 0.5)) {
    param_3[0x2245] = 0x3f0000003f000000;
    FUN_0091ada4(plVar7);
  }
  FUN_00f01c20(plVar2);
  fVar12 = fVar11 * 0.8;
  FUN_00f0d4e0(plVar7);
  fVar12 = fVar12 / fVar11;
  if ((*(float *)(param_3 + 0x2244) != fVar12) || (*(float *)((long)param_3 + 0x11224) != fVar12)) {
    *(float *)(param_3 + 0x2244) = fVar12;
    *(float *)((long)param_3 + 0x11224) = fVar12;
    FUN_0091ada4(plVar7);
  }
  fVar11 = *(float *)((long)param_3 + 0x26c) * 0.92;
  if ((*(float *)(param_3 + 0x2243) != *(float *)(param_3 + 0x4d)) ||
     (*(float *)((long)param_3 + 0x1121c) != fVar11)) {
    *(float *)(param_3 + 0x2243) = *(float *)(param_3 + 0x4d);
    *(float *)((long)param_3 + 0x1121c) = fVar11;
    FUN_0091ada4(plVar7);
  }
  plVar7 = param_3 + 0xd54;
  fVar12 = (float)FUN_00f13e54(plVar6);
  FUN_00f13e54(plVar6);
  fVar11 = fVar11 * 0.23;
  FUN_00f13f08(fVar12 * 0.95,plVar7);
  if ((*(float *)(param_3 + 0xd5e) != 0.5) || (*(float *)((long)param_3 + 0x6af4) != 1.0)) {
    param_3[0xd5e] = 0x3f8000003f000000;
    FUN_0091ada4(plVar7);
  }
  fVar12 = *(float *)((long)param_3 + 0x1b4);
  FUN_00f01c20(plVar5);
  fVar12 = fVar12 + fVar11;
  FUN_00f13e54(plVar7);
  fVar12 = fVar12 + fVar11;
  pfVar8 = (float *)((long)param_3 + 0x6ae4);
  if ((*(float *)(param_3 + 0xd5c) != fVar10) || (fVar11 = *pfVar8, fVar11 != fVar12)) {
    *(float *)(param_3 + 0xd5c) = fVar10;
    *pfVar8 = fVar12;
    FUN_0091ada4(plVar7);
  }
  FUN_00a2f0b0(plVar7);
  plVar5 = param_3 + 0x6e;
  FUN_00f0acd4(plVar5,&DAT_03218ef8);
  fVar12 = (float)FUN_00f13e54(plVar6);
  FUN_00f13e54(plVar6);
  FUN_00f13f08(fVar12 * 0.95,fVar11 * 0.44,plVar5);
  fVar12 = (float)FUN_00f13e54(plVar5);
  fVar11 = -0.53;
  fVar13 = *pfVar8;
  fVar10 = fVar10 + fVar12 * -0.53;
  FUN_00f13e54(plVar5);
  fVar13 = fVar13 + fVar11;
  if ((*(float *)(param_3 + 0x76) != fVar10) ||
     (fVar11 = *(float *)((long)param_3 + 0x3b4), fVar11 != fVar13)) {
    *(float *)(param_3 + 0x76) = fVar10;
    *(float *)((long)param_3 + 0x3b4) = fVar13;
    FUN_0091ada4(plVar5);
  }
  FUN_00a44354(plVar5);
  fVar13 = *pfVar4;
  FUN_00f01c20(plVar3);
  plVar6 = param_3 + 0x1e03;
  fVar12 = fVar11 * 0.5;
  uVar15 = FUN_00f01c54(plVar6,0,0,1,1);
  FUN_00f01c20(plVar5);
  fVar10 = fVar11;
  FUN_00f13e54(plVar1);
  fVar10 = (fVar10 - (fVar13 + fVar12)) * 0.6;
  if (fVar10 <= fVar11) {
    fVar11 = fVar10;
  }
  FUN_00f13f08(uVar15,fVar11,plVar6);
  pfVar4 = (float *)(param_3 + 0x1e0c);
  if ((*pfVar4 != 1.15) || (*(float *)((long)param_3 + 0xf064) != 1.15)) {
    pfVar4[0] = 1.15;
    pfVar4[1] = 1.15;
    FUN_0091ada4(plVar6);
  }
  FUN_00a57f0c(plVar6);
  FUN_00f07b18(0x41c00000,plVar6,0,plVar3,2);
  FUN_00f07b18(0,plVar6,3,plVar3,3);
  FUN_00a781e4(param_3);
  if (*(long *)(lVar9 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

