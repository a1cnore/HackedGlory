// functions/1000b — 656 functions
#include "GameKindred.h"




void FUN_1000b01b0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000afd9c();
  operator_delete(pvVar1);
  return;
}




void FUN_1000b01c4(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  float *pfVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  float fVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float local_98;
  float fStack_94;
  
  pfVar3 = (float *)(param_3 + 0x1df8);
  plVar1 = param_3 + 0x17;
  local_98 = (float)(**(code **)(*param_3 + 0x50))();
  fStack_94 = param_2;
  FUN_10064e48c(plVar1,&local_98);
  fVar9 = (float)(**(code **)(*param_3 + 0x50))(param_3);
  (**(code **)(*param_3 + 0x50))(param_3);
  param_2 = param_2 * -0.5;
  bVar8 = false;
  if ((*(float *)(param_3 + 0x1f) == fVar9 * -0.5) &&
     (bVar8 = false, !NAN(*(float *)((long)param_3 + 0xfc)) && !NAN(param_2))) {
    bVar8 = *(float *)((long)param_3 + 0xfc) == param_2;
  }
  if (!bVar8) {
    *(float *)(param_3 + 0x1f) = fVar9 * -0.5;
    *(float *)((long)param_3 + 0xfc) = param_2;
    FUN_1000200a0(plVar1);
  }
  plVar4 = param_3 + 0x754;
  fVar9 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar12 = 0.97;
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10064e47c(fVar9 * 0.97,fVar12 * 0.45,plVar4);
  fVar9 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar12 = (float)FUN_10064e3cc(plVar4);
  fVar9 = (fVar9 - fVar12) * 0.5;
  if ((*(float *)(param_3 + 0x75c) != fVar9) || (*(float *)((long)param_3 + 0x3ae4) != 0.0)) {
    *(float *)(param_3 + 0x75c) = fVar9;
    *(undefined4 *)((long)param_3 + 0x3ae4) = 0;
    FUN_1000200a0(plVar4);
  }
  FUN_1000760c0(plVar4);
  plVar4 = param_3 + 0x212c;
  local_98 = (float)FUN_10064e3cc(plVar1);
  local_98 = local_98 * 0.43;
  fStack_94 = local_98;
  FUN_10064e48c(plVar4,&local_98);
  if ((*(float *)(param_3 + 0x2136) != 0.5) || (*(float *)((long)param_3 + 0x109b4) != 0.5)) {
    param_3[0x2136] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar4);
  }
  fVar9 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar12 = (float)FUN_10064e3cc(plVar4);
  fVar13 = 1.0;
  fVar15 = (fVar9 - fVar12 * 0.5) + 1.0;
  FUN_10064e3cc(plVar4);
  fVar9 = fVar13 * 0.5 + -5.0;
  fVar12 = *(float *)(param_3 + 0x2134);
  bVar8 = false;
  if ((fVar12 == fVar15) &&
     (bVar8 = false, !NAN(*(float *)((long)param_3 + 0x109a4)) && !NAN(fVar9))) {
    bVar8 = *(float *)((long)param_3 + 0x109a4) == fVar9;
  }
  if (!bVar8) {
    *(float *)(param_3 + 0x2134) = fVar15;
    *(float *)((long)param_3 + 0x109a4) = fVar9;
    FUN_1000200a0(plVar4);
  }
  fVar13 = (float)FUN_10064e3cc(plVar4);
  fVar9 = fVar12;
  fVar15 = (float)FUN_100652e60(param_3 + 0x2161);
  fVar12 = fVar12 / fVar9;
  bVar8 = false;
  if ((*(float *)(param_3 + 0x216a) == fVar13 / fVar15) &&
     (bVar8 = false, !NAN(*(float *)((long)param_3 + 0x10b54)) && !NAN(fVar12))) {
    bVar8 = *(float *)((long)param_3 + 0x10b54) == fVar12;
  }
  if (!bVar8) {
    *(float *)(param_3 + 0x216a) = fVar13 / fVar15;
    *(float *)((long)param_3 + 0x10b54) = fVar12;
    FUN_1000200a0(param_3 + 0x2161);
  }
  fVar9 = (float)FUN_10064e3cc(plVar4);
  fVar15 = fVar12 * 0.96;
  fVar13 = (float)FUN_100652e60(param_3 + 0x2143);
  fVar13 = (fVar9 * 0.96) / fVar13;
  fVar15 = fVar15 / fVar12;
  if ((*(float *)(param_3 + 0x214c) != fVar13) || (*(float *)((long)param_3 + 0x10a64) != fVar15)) {
    *(float *)(param_3 + 0x214c) = fVar13;
    *(float *)((long)param_3 + 0x10a64) = fVar15;
    FUN_1000200a0(param_3 + 0x2143);
  }
  fVar9 = (float)FUN_10064e3cc(plVar4);
  fVar13 = fVar15 * 0.96;
  fVar12 = (float)FUN_100652e60(param_3 + 0x217f);
  fVar12 = (fVar9 * 0.96) / fVar12;
  fVar13 = fVar13 / fVar15;
  if ((*(float *)(param_3 + 0x2188) != fVar12) || (*(float *)((long)param_3 + 0x10c44) != fVar13)) {
    *(float *)(param_3 + 0x2188) = fVar12;
    *(float *)((long)param_3 + 0x10c44) = fVar13;
    FUN_1000200a0(param_3 + 0x217f);
  }
  FUN_10064e3cc(plVar4);
  fVar9 = fVar13 * 0.96;
  FUN_100651184(param_3 + 0x219d);
  fVar9 = (float)NEON_fminnm(fVar9 / fVar13,0x3f800000);
  if ((*(float *)(param_3 + 0x21a6) != 1.0) || (*(float *)((long)param_3 + 0x10d34) != fVar9)) {
    *(undefined4 *)(param_3 + 0x21a6) = 0x3f800000;
    *(float *)((long)param_3 + 0x10d34) = fVar9;
    FUN_1000200a0(param_3 + 0x219d);
  }
  plVar5 = param_3 + 0x1f89;
  fVar13 = 24.0;
  FUN_10064e47c(0x41c00000,plVar5);
  fVar9 = (float)FUN_10064259c(plVar4);
  fVar15 = fVar13 * 0.45;
  fVar12 = (float)FUN_10064e3cc(plVar5);
  fVar12 = (fVar9 * 0.45) / fVar12;
  fVar15 = fVar15 / fVar13;
  if ((*(float *)(param_3 + 0x1f92) != fVar12) || (*(float *)((long)param_3 + 0xfc94) != fVar15)) {
    *(float *)(param_3 + 0x1f92) = fVar12;
    *(float *)((long)param_3 + 0xfc94) = fVar15;
    FUN_1000200a0(plVar5);
  }
  fVar9 = (float)FUN_10064259c(plVar4);
  fVar12 = -0.3;
  FUN_10064259c(plVar4);
  if ((*(float *)(param_3 + 0x1f91) != fVar9 * -0.3) ||
     (*(float *)((long)param_3 + 0xfc8c) != fVar12 * 0.28)) {
    *(float *)(param_3 + 0x1f91) = fVar9 * -0.3;
    *(float *)((long)param_3 + 0xfc8c) = fVar12 * 0.28;
    FUN_1000200a0(plVar5);
  }
  FUN_100083e1c(plVar5);
  fVar9 = *(float *)(param_3 + 0x220a);
  if ((fVar9 != 1.0) || (fVar9 = *(float *)((long)param_3 + 0x11054), fVar9 != 1.0)) {
    lVar10 = NEON_fmov(0x3f800000,4);
    param_3[0x220a] = lVar10;
    FUN_1000200a0(param_3 + 0x2200);
  }
  fVar12 = (float)FUN_10064e3cc(plVar4);
  FUN_10064e3cc(plVar4);
  if ((*(float *)(param_3 + 0x2208) != fVar12 * 0.4) ||
     (*(float *)((long)param_3 + 0x11044) != fVar9 * 0.5)) {
    *(float *)(param_3 + 0x2208) = fVar12 * 0.4;
    *(float *)((long)param_3 + 0x11044) = fVar9 * 0.5;
    FUN_1000200a0(param_3 + 0x2200);
  }
  plVar6 = param_3 + 0x21c3;
  fVar9 = (float)FUN_10064e3cc(plVar1);
  fVar12 = (float)FUN_10064259c(plVar4);
  FUN_10064e3cc(plVar1);
  FUN_10064e47c(fVar9 - fVar12,plVar6);
  fVar9 = (float)FUN_10064e3cc(plVar6);
  fVar13 = 0.5;
  fVar9 = fVar9 * 0.5;
  plVar5 = param_3 + 0x2e;
  fVar12 = (float)FUN_10064259c(plVar6);
  FUN_10064259c(plVar6);
  FUN_10064e47c(fVar12 * 0.95,fVar13 * 0.33,plVar5);
  if ((*(float *)(param_3 + 0x36) != fVar9) || (*(float *)((long)param_3 + 0x1b4) != 0.0)) {
    *(float *)(param_3 + 0x36) = fVar9;
    *(undefined4 *)((long)param_3 + 0x1b4) = 0;
    FUN_1000200a0(plVar5);
  }
  plVar7 = param_3 + 0x21da;
  fVar12 = 0.5;
  if ((*(float *)(param_3 + 0x21e4) != 0.5) || (*(float *)((long)param_3 + 0x10f24) != 0.0)) {
    param_3[0x21e4] = 0x3f000000;
    FUN_1000200a0(plVar7);
  }
  FUN_10064e3cc(plVar5);
  fVar13 = fVar12 * 0.4;
  FUN_1006511d0(plVar7);
  fVar13 = fVar13 / fVar12;
  if ((*(float *)(param_3 + 0x21e3) != fVar13) || (*(float *)((long)param_3 + 0x10f1c) != fVar13)) {
    *(float *)(param_3 + 0x21e3) = fVar13;
    *(float *)((long)param_3 + 0x10f1c) = fVar13;
    FUN_1000200a0(plVar7);
  }
  plVar2 = param_3 + 0x45;
  fVar12 = (float)DAT_101dc1cb8;
  if ((*(float *)(param_3 + 0x4f) != (float)DAT_101dc1cb8) ||
     (fVar12 = DAT_101dc1cb8._4_4_, *(float *)((long)param_3 + 0x27c) != DAT_101dc1cb8._4_4_)) {
    param_3[0x4f] = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
    FUN_1000200a0(plVar2);
  }
  fVar13 = (float)FUN_10064e3cc(plVar5);
  fVar15 = (float)FUN_10007de28(plVar2);
  FUN_10064e3cc(plVar5);
  fVar16 = fVar12 * 0.4;
  FUN_10007de28(plVar2);
  fVar16 = fVar16 / fVar12;
  if ((*(float *)(param_3 + 0x4e) != fVar13 / fVar15) ||
     (fVar12 = *(float *)((long)param_3 + 0x274), fVar12 != fVar16)) {
    *(float *)(param_3 + 0x4e) = fVar13 / fVar15;
    *(float *)((long)param_3 + 0x274) = fVar16;
    FUN_1000200a0(plVar2);
  }
  fVar13 = *(float *)((long)param_3 + 0x10f14);
  FUN_100651184(plVar7);
  fVar13 = fVar12 + fVar13;
  FUN_10007de28(plVar2);
  fVar13 = fVar13 + fVar12 * 0.6;
  if ((*(float *)(param_3 + 0x4d) != 0.0) || (*(float *)((long)param_3 + 0x26c) != fVar13)) {
    *(undefined4 *)(param_3 + 0x4d) = 0;
    *(float *)((long)param_3 + 0x26c) = fVar13;
    FUN_1000200a0(plVar2);
  }
  plVar7 = param_3 + 0x2226;
  fVar12 = *(float *)(param_3 + 0x2230);
  if ((fVar12 != 0.5) || (fVar12 = *(float *)((long)param_3 + 0x11184), fVar12 != 0.5)) {
    param_3[0x2230] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar7);
  }
  FUN_10064259c(plVar2);
  fVar13 = fVar12 * 0.8;
  FUN_100651184(plVar7);
  fVar13 = fVar13 / fVar12;
  if ((*(float *)(param_3 + 0x222f) != fVar13) || (*(float *)((long)param_3 + 0x1117c) != fVar13)) {
    *(float *)(param_3 + 0x222f) = fVar13;
    *(float *)((long)param_3 + 0x1117c) = fVar13;
    FUN_1000200a0(plVar7);
  }
  fVar12 = *(float *)((long)param_3 + 0x26c) * 0.92;
  if ((*(float *)(param_3 + 0x222e) != *(float *)(param_3 + 0x4d)) ||
     (*(float *)((long)param_3 + 0x11174) != fVar12)) {
    *(float *)(param_3 + 0x222e) = *(float *)(param_3 + 0x4d);
    *(float *)((long)param_3 + 0x11174) = fVar12;
    FUN_1000200a0(plVar7);
  }
  plVar7 = param_3 + 0xd46;
  fVar13 = (float)FUN_10064e3cc(plVar6);
  FUN_10064e3cc(plVar6);
  FUN_10064e47c(fVar13 * 0.95,fVar12 * 0.23,plVar7);
  fVar12 = 0.5;
  if ((*(float *)(param_3 + 0xd50) != 0.5) ||
     (fVar12 = 1.0, *(float *)((long)param_3 + 0x6a84) != 1.0)) {
    param_3[0xd50] = 0x3f8000003f000000;
    FUN_1000200a0(plVar7);
  }
  fVar13 = *(float *)((long)param_3 + 0x1b4);
  FUN_10064259c(plVar5);
  fVar13 = fVar12 + fVar13;
  FUN_10064e3cc(plVar7);
  fVar13 = fVar13 + fVar12;
  fVar12 = *(float *)(param_3 + 0xd4e);
  if ((fVar12 != fVar9) || (fVar12 = *(float *)((long)param_3 + 0x6a74), fVar12 != fVar13)) {
    *(float *)(param_3 + 0xd4e) = fVar9;
    *(float *)((long)param_3 + 0x6a74) = fVar13;
    FUN_1000200a0(plVar7);
  }
  FUN_10006db14(plVar7);
  plVar5 = param_3 + 0x6e;
  FUN_10064f27c(plVar5,&DAT_101dc1cb8);
  fVar13 = (float)FUN_10064e3cc(plVar6);
  FUN_10064e3cc(plVar6);
  FUN_10064e47c(fVar13 * 0.95,fVar12 * 0.44,plVar5);
  fVar12 = (float)FUN_10064e3cc(plVar5);
  fVar13 = -0.53;
  fVar9 = fVar9 + fVar12 * -0.53;
  fVar12 = *(float *)((long)param_3 + 0x6a74);
  FUN_10064e3cc(plVar5);
  fVar13 = fVar13 + fVar12;
  fVar12 = *(float *)(param_3 + 0x76);
  if ((fVar12 != fVar9) || (fVar12 = *(float *)((long)param_3 + 0x3b4), fVar12 != fVar13)) {
    *(float *)(param_3 + 0x76) = fVar9;
    *(float *)((long)param_3 + 0x3b4) = fVar13;
    FUN_1000200a0(plVar5);
  }
  FUN_1000816dc(plVar5);
  fVar15 = *(float *)((long)param_3 + 0x109a4);
  FUN_10064259c(plVar4);
  plVar6 = param_3 + 0x1def;
  fVar9 = fVar12;
  uVar11 = FUN_1006425d0(plVar6,0,0,1,1);
  FUN_10064259c(plVar5);
  fVar13 = fVar9;
  FUN_10064e3cc(plVar1);
  uVar14 = NEON_fminnm(fVar9,(fVar13 - (fVar15 + fVar12 * 0.5)) * 0.6);
  FUN_10064e47c(uVar11,uVar14,plVar6);
  if ((*pfVar3 != 1.15) || (*(float *)((long)param_3 + 0xefc4) != 1.15)) {
    pfVar3[0] = 1.15;
    pfVar3[1] = 1.15;
    FUN_1000200a0(plVar6);
  }
  FUN_10009557c(plVar6);
  FUN_10064e72c(0x41c00000,plVar6,0,plVar4,2);
  FUN_10064e72c(0,plVar6,3,plVar4,3);
  FUN_1000b17b0(param_3);
  return;
}




void FUN_1000b0b68(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_78;
  float fStack_74;
  
  plVar1 = param_3 + 0x17;
  local_78 = (float)(**(code **)(*param_3 + 0x48))();
  fStack_74 = param_2;
  FUN_10064e48c(plVar1,&local_78);
  fVar6 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  param_2 = param_2 * -0.5;
  bVar5 = false;
  if ((*(float *)(param_3 + 0x1f) == fVar6 * -0.5) &&
     (bVar5 = false, !NAN(*(float *)((long)param_3 + 0xfc)) && !NAN(param_2))) {
    bVar5 = *(float *)((long)param_3 + 0xfc) == param_2;
  }
  if (!bVar5) {
    *(float *)(param_3 + 0x1f) = fVar6 * -0.5;
    *(float *)((long)param_3 + 0xfc) = param_2;
    FUN_1000200a0(plVar1);
  }
  plVar3 = param_3 + 0x754;
  fVar6 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar8 = 0.97;
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10064e47c(fVar6 * 0.97,fVar8 * 0.4,plVar3);
  fVar6 = (float)(**(code **)(*param_3 + 0x50))(param_3);
  fVar8 = (float)FUN_10064e3cc(plVar3);
  fVar6 = (fVar6 - fVar8) * 0.5;
  if ((*(float *)(param_3 + 0x75c) != fVar6) || (*(float *)((long)param_3 + 0x3ae4) != 0.0)) {
    *(float *)(param_3 + 0x75c) = fVar6;
    *(undefined4 *)((long)param_3 + 0x3ae4) = 0;
    FUN_1000200a0(plVar3);
  }
  FUN_1000760c0(plVar3);
  plVar3 = param_3 + 0x212c;
  local_78 = (float)FUN_10064e3cc(plVar1);
  local_78 = local_78 * 0.43;
  fStack_74 = local_78;
  FUN_10064e48c(plVar3,&local_78);
  if ((*(float *)(param_3 + 0x2136) != 0.5) || (*(float *)((long)param_3 + 0x109b4) != 0.5)) {
    param_3[0x2136] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  fVar6 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar8 = (float)FUN_10064e3cc(plVar3);
  fVar9 = 1.0;
  fVar11 = (fVar6 - fVar8 * 0.5) + 1.0;
  FUN_10064e3cc(plVar3);
  fVar6 = fVar9 * 0.5 + -5.0;
  fVar8 = *(float *)(param_3 + 0x2134);
  bVar5 = false;
  if ((fVar8 == fVar11) && (bVar5 = false, !NAN(*(float *)((long)param_3 + 0x109a4)) && !NAN(fVar6))
     ) {
    bVar5 = *(float *)((long)param_3 + 0x109a4) == fVar6;
  }
  if (!bVar5) {
    *(float *)(param_3 + 0x2134) = fVar11;
    *(float *)((long)param_3 + 0x109a4) = fVar6;
    FUN_1000200a0(plVar3);
  }
  fVar9 = (float)FUN_10064259c(plVar3);
  fVar6 = fVar8;
  fVar11 = (float)FUN_100652e60(param_3 + 0x2161);
  fVar8 = fVar8 / fVar6;
  bVar5 = false;
  if ((*(float *)(param_3 + 0x216a) == fVar9 / fVar11) &&
     (bVar5 = false, !NAN(*(float *)((long)param_3 + 0x10b54)) && !NAN(fVar8))) {
    bVar5 = *(float *)((long)param_3 + 0x10b54) == fVar8;
  }
  if (!bVar5) {
    *(float *)(param_3 + 0x216a) = fVar9 / fVar11;
    *(float *)((long)param_3 + 0x10b54) = fVar8;
    FUN_1000200a0(param_3 + 0x2161);
  }
  fVar6 = (float)FUN_10064259c(plVar3);
  fVar11 = fVar8 * 0.96;
  fVar9 = (float)FUN_100652e60(param_3 + 0x2143);
  fVar9 = (fVar6 * 0.96) / fVar9;
  fVar11 = fVar11 / fVar8;
  if ((*(float *)(param_3 + 0x214c) != fVar9) || (*(float *)((long)param_3 + 0x10a64) != fVar11)) {
    *(float *)(param_3 + 0x214c) = fVar9;
    *(float *)((long)param_3 + 0x10a64) = fVar11;
    FUN_1000200a0(param_3 + 0x2143);
  }
  fVar6 = (float)FUN_10064259c(plVar3);
  fVar9 = fVar11 * 0.96;
  fVar8 = (float)FUN_100652e60(param_3 + 0x217f);
  fVar8 = (fVar6 * 0.96) / fVar8;
  fVar9 = fVar9 / fVar11;
  if ((*(float *)(param_3 + 0x2188) != fVar8) || (*(float *)((long)param_3 + 0x10c44) != fVar9)) {
    *(float *)(param_3 + 0x2188) = fVar8;
    *(float *)((long)param_3 + 0x10c44) = fVar9;
    FUN_1000200a0(param_3 + 0x217f);
  }
  FUN_10064e3cc(plVar3);
  fVar6 = fVar9 * 0.96;
  FUN_100651184(param_3 + 0x219d);
  fVar6 = (float)NEON_fminnm(fVar6 / fVar9,0x3f800000);
  if ((*(float *)(param_3 + 0x21a6) != 1.0) || (*(float *)((long)param_3 + 0x10d34) != fVar6)) {
    *(undefined4 *)(param_3 + 0x21a6) = 0x3f800000;
    *(float *)((long)param_3 + 0x10d34) = fVar6;
    FUN_1000200a0(param_3 + 0x219d);
  }
  plVar4 = param_3 + 0x1f89;
  fVar9 = 24.0;
  FUN_10064e47c(0x41c00000,plVar4);
  fVar6 = (float)FUN_10064259c(plVar3);
  fVar11 = fVar9 * 0.45;
  fVar8 = (float)FUN_10064e3cc(plVar4);
  fVar8 = (fVar6 * 0.45) / fVar8;
  fVar11 = fVar11 / fVar9;
  if ((*(float *)(param_3 + 0x1f92) != fVar8) || (*(float *)((long)param_3 + 0xfc94) != fVar11)) {
    *(float *)(param_3 + 0x1f92) = fVar8;
    *(float *)((long)param_3 + 0xfc94) = fVar11;
    FUN_1000200a0(plVar4);
  }
  fVar6 = (float)FUN_10064259c(plVar3);
  fVar8 = -0.45;
  FUN_10064259c(plVar3);
  fVar9 = *(float *)(param_3 + 0x1f91);
  if ((fVar9 != fVar6 * -0.45) ||
     (fVar9 = *(float *)((long)param_3 + 0xfc8c), fVar9 != fVar8 * 0.28)) {
    *(float *)(param_3 + 0x1f91) = fVar6 * -0.45;
    *(float *)((long)param_3 + 0xfc8c) = fVar8 * 0.28;
    FUN_1000200a0(plVar4);
  }
  FUN_100083e1c(plVar4);
  plVar4 = param_3 + 0x1def;
  local_78 = (float)FUN_10064259c(plVar3);
  fStack_74 = fVar9;
  FUN_10064e48c(plVar4,&local_78);
  fVar6 = (float)FUN_10064e3cc(plVar4);
  if ((*(float *)(param_3 + 0x1df7) != fVar6 * 0.6) ||
     (*(float *)((long)param_3 + 0xefbc) != fVar9 * 0.6)) {
    *(float *)(param_3 + 0x1df7) = fVar6 * 0.6;
    *(float *)((long)param_3 + 0xefbc) = fVar9 * 0.6;
    FUN_1000200a0(plVar4);
  }
  FUN_10009557c(plVar4);
  plVar4 = param_3 + 0x21c3;
  fVar6 = 0.5;
  if ((*(float *)(param_3 + 0x21cd) != 0.5) || (*(float *)((long)param_3 + 0x10e6c) != 0.0)) {
    param_3[0x21cd] = 0x3f000000;
    FUN_1000200a0(plVar4);
  }
  uVar7 = FUN_10064259c(plVar1);
  FUN_10064e3cc(plVar1);
  fVar8 = fVar6;
  FUN_10064259c(plVar3);
  FUN_10064e47c(uVar7,fVar6 - fVar8,plVar4);
  fVar6 = (float)FUN_10064e3cc(plVar1);
  fVar8 = 0.5;
  FUN_10064259c(plVar3);
  if ((*(float *)(param_3 + 0x21cb) != fVar6 * 0.5) ||
     (*(float *)((long)param_3 + 0x10e5c) != fVar8)) {
    *(float *)(param_3 + 0x21cb) = fVar6 * 0.5;
    *(float *)((long)param_3 + 0x10e5c) = fVar8;
    FUN_1000200a0(plVar4);
  }
  plVar1 = param_3 + 0x2e;
  fVar6 = 0.5;
  if ((*(float *)(param_3 + 0x38) != 0.5) || (*(float *)((long)param_3 + 0x1c4) != 0.0)) {
    param_3[0x38] = 0x3f000000;
    FUN_1000200a0(plVar1);
  }
  uVar7 = FUN_10064e3cc(plVar4);
  FUN_10064e3cc(plVar4);
  FUN_10064e47c(uVar7,fVar6 * 0.3,plVar1);
  plVar3 = param_3 + 0x21da;
  fVar6 = 0.5;
  if ((*(float *)(param_3 + 0x21e4) != 0.5) || (*(float *)((long)param_3 + 0x10f24) != 0.0)) {
    param_3[0x21e4] = 0x3f000000;
    FUN_1000200a0(plVar3);
  }
  FUN_1006511d0(plVar3);
  if ((*(float *)(param_3 + 0x21e2) != 0.0) || (*(float *)((long)param_3 + 0x10f14) != fVar6 * -0.2)
     ) {
    *(undefined4 *)(param_3 + 0x21e2) = 0;
    *(float *)((long)param_3 + 0x10f14) = fVar6 * -0.2;
    FUN_1000200a0(plVar3);
  }
  plVar2 = param_3 + 0x45;
  fVar6 = (float)FUN_10064e3cc(plVar1);
  fVar11 = 0.75;
  fVar8 = (float)FUN_10007de28(plVar2);
  fVar8 = (fVar6 * 0.75) / fVar8;
  FUN_10064e3cc(plVar1);
  fVar6 = fVar11;
  FUN_1006511d0(plVar3);
  fVar9 = *(float *)((long)param_3 + 0x10f1c);
  fVar10 = 0.7;
  FUN_10007de28(plVar2);
  fVar6 = ((fVar11 - fVar9 * fVar6) * 0.7) / fVar10;
  if ((*(float *)(param_3 + 0x4e) != fVar8) ||
     (fVar10 = *(float *)((long)param_3 + 0x274), fVar10 != fVar6)) {
    *(float *)(param_3 + 0x4e) = fVar8;
    *(float *)((long)param_3 + 0x274) = fVar6;
    FUN_1000200a0(plVar2);
  }
  FUN_1006511d0(plVar3);
  fVar6 = *(float *)((long)param_3 + 0x10f1c) * fVar10 * 1.2;
  if ((*(float *)(param_3 + 0x4d) != 2.0) || (*(float *)((long)param_3 + 0x26c) != fVar6)) {
    *(undefined4 *)(param_3 + 0x4d) = 0x40000000;
    *(float *)((long)param_3 + 0x26c) = fVar6;
    FUN_1000200a0(plVar2);
  }
  plVar3 = param_3 + 0x2200;
  if ((*(float *)(param_3 + 0x220a) != 1.0) || (*(float *)((long)param_3 + 0x11054) != 0.0)) {
    param_3[0x220a] = 0x3f800000;
    FUN_1000200a0(plVar3);
  }
  fVar6 = (float)FUN_10064e3cc(plVar1);
  fVar8 = (float)FUN_1006511d0(plVar3);
  fVar8 = fVar8 + fVar6 * -0.42;
  fVar6 = *(float *)((long)param_3 + 0x26c) * 0.55;
  if ((*(float *)(param_3 + 0x2208) != fVar8) || (*(float *)((long)param_3 + 0x11044) != fVar6)) {
    *(float *)(param_3 + 0x2208) = fVar8;
    *(float *)((long)param_3 + 0x11044) = fVar6;
    FUN_1000200a0(plVar3);
  }
  plVar3 = param_3 + 0xd46;
  fVar8 = (float)FUN_10064e3cc(plVar4);
  FUN_10064e3cc(plVar4);
  fVar6 = fVar6 * 0.45;
  FUN_10064e47c(fVar8 * 0.95,plVar3);
  fVar8 = *(float *)((long)param_3 + 0x1b4);
  FUN_10064259c(plVar1);
  fVar8 = fVar6 + fVar8;
  FUN_10064e3cc(plVar3);
  fVar8 = fVar8 + fVar6;
  fVar6 = *(float *)(param_3 + 0xd4e);
  if ((fVar6 != 0.0) || (fVar6 = *(float *)((long)param_3 + 0x6a74), fVar6 != fVar8)) {
    *(float *)(param_3 + 0xd4e) = 0.0;
    *(float *)((long)param_3 + 0x6a74) = fVar8;
    FUN_1000200a0(plVar3);
  }
  FUN_10006db14(plVar3);
  plVar1 = param_3 + 0x6e;
  FUN_10064f27c(plVar1,&DAT_101dc1cb8);
  fVar8 = (float)FUN_10064259c(plVar4);
  FUN_10064259c(plVar4);
  FUN_10064e47c(fVar8 * 0.95,fVar6 * 0.25,plVar1);
  fVar6 = (float)FUN_10064e3cc(plVar1);
  fVar8 = -0.5;
  fVar9 = *(float *)((long)param_3 + 0x6a74);
  FUN_10064e3cc(plVar1);
  fVar8 = fVar8 + fVar9;
  if ((*(float *)(param_3 + 0x76) != fVar6 * -0.5) || (*(float *)((long)param_3 + 0x3b4) != fVar8))
  {
    *(float *)(param_3 + 0x76) = fVar6 * -0.5;
    *(float *)((long)param_3 + 0x3b4) = fVar8;
    FUN_1000200a0(plVar1);
  }
  FUN_1000816dc(plVar1);
  FUN_1000b17b0(param_3);
  return;
}




void FUN_1000b13ec(long param_1)

{
  long *plVar1;
  uint *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  
  plVar1 = (long *)(param_1 + 0x11270);
  plVar4 = (long *)*plVar1;
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0x11278) == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        plVar4 = (long *)*plVar1;
        lVar5 = 0;
        if (plVar4 != (long *)0x0) {
          if (*(int *)(param_1 + 0x11278) == (int)plVar4[1]) {
            lVar5 = (**(code **)(*plVar4 + 0x10))();
          }
          else {
            lVar5 = 0;
            *plVar1 = 0;
            *(undefined4 *)(param_1 + 0x11278) = DAT_101dc0b88;
          }
        }
        puVar2 = (uint *)(param_1 + 0x10c7c);
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x88) & 0x1f;
        if ((int)uVar9 == 0x1f) {
          bVar7 = true;
        }
        else {
          bVar7 = 1 < *(ushort *)(lVar5 + uVar9 * 0x38 + 0x90) - 3;
        }
        FUN_10007def8(param_1 + 0x228,bVar7);
        lVar5 = param_1 + 0x11260;
        lVar6 = (**(code **)(*(long *)*plVar1 + 0x10))();
        lVar6 = *(long *)(lVar6 + 0x40);
        fVar10 = *(float *)(lVar6 + 0xd8) +
                 *(float *)(lVar6 + 0x18c) * (*(float *)(lVar6 + 0x2f4) + 1.0);
        NEON_fminnm(fVar10 + fVar10 * *(float *)(lVar6 + 0x240),DAT_101dc5db0);
        FUN_1004e38ac(DAT_101dc5cf0,DAT_101dc5cf0,DAT_101dc5db0,lVar5,"%d");
        FUN_1006513c0(param_1 + 0x11000,lVar5);
        (**(code **)(*(long *)*plVar1 + 0x10))();
        lVar6 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1);
        lVar6 = *(long *)(lVar6 + 0x40);
        fVar10 = *(float *)(lVar6 + 0x38) +
                 *(float *)(lVar6 + 0xec) * (*(float *)(lVar6 + 0x254) + 1.0);
        NEON_fminnm(fVar10 + fVar10 * *(float *)(lVar6 + 0x1a0),DAT_101dc5d10);
        FUN_1004e38ac(DAT_101dc5c50,DAT_101dc5c50,DAT_101dc5d10,lVar5,"%d/%d");
        FUN_1006513c0(param_1 + 0x11130,lVar5);
        lVar6 = (**(code **)(*(long *)*plVar1 + 0x10))();
        lVar6 = *(long *)(lVar6 + 0x18);
        do {
          if (lVar6 == 0) {
            FUN_1006513c0(param_1 + 0x10ce8,&DAT_101d91650);
            *(uint *)(param_1 + 0x10d6c) = *(uint *)(param_1 + 0x10d6c) & 0xfffffffb;
            uVar8 = *puVar2 & 0xfffffffb;
LAB_1000b16cc:
            *puVar2 = uVar8;
            FUN_100083968(param_1 + 0xfc48);
            iVar3 = FUN_100147980();
            if ((iVar3 == 0) || (iVar3 = FUN_100063e10(), iVar3 != 1)) {
              uVar8 = *(uint *)(param_1 + 0x10f54) | 4;
            }
            else {
              uVar8 = *(uint *)(param_1 + 0x10f54) & 0xfffffffb;
            }
            *(uint *)(param_1 + 0x10f54) = uVar8;
            FUN_1000afd4c(param_1);
            return;
          }
          if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_10184e110) {
            FUN_1003e1f90();
            FUN_1004e38ac(lVar5,"%d");
            FUN_1006513c0(param_1 + 0x10ce8,lVar5);
            *(uint *)(param_1 + 0x10d6c) = *(uint *)(param_1 + 0x10d6c) | 4;
            uVar8 = *puVar2 | 4;
            goto LAB_1000b16cc;
          }
          lVar6 = *(long *)(lVar6 + 0x20);
        } while( true );
      }
    }
    else {
      *plVar1 = 0;
      *(undefined4 *)(param_1 + 0x11278) = DAT_101dc0b88;
    }
  }
  return;
}




undefined4 FUN_1000b172c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  
  plVar1 = (long *)(param_1 + 0x11270);
  plVar2 = (long *)*plVar1;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x11278) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        lVar3 = (**(code **)(*(long *)*plVar1 + 0x10))();
        puVar4 = (undefined4 *)(lVar3 + 0x260);
        goto LAB_1000b17a0;
      }
    }
    else {
      *plVar1 = 0;
      *(undefined4 *)(param_1 + 0x11278) = DAT_101dc0b88;
    }
  }
  puVar4 = &DAT_101159f80;
LAB_1000b17a0:
  return *puVar4;
}




void FUN_1000b17b0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  float fVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar9 = *(float *)((long)param_1 + 0x54);
  bVar5 = false;
  if ((*(float *)(param_1 + 0x208f) == *(float *)(param_1 + 10)) &&
     (bVar5 = false, !NAN(*(float *)((long)param_1 + 0x1047c)) && !NAN(fVar9))) {
    bVar5 = *(float *)((long)param_1 + 0x1047c) == fVar9;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0x208f) = *(float *)(param_1 + 10);
    *(float *)((long)param_1 + 0x1047c) = fVar9;
    FUN_1000200a0(param_1 + 0x2085);
  }
  FUN_10064259c(param_1 + 0x212c);
  plVar1 = param_1 + 0x2096;
  bVar5 = false;
  if ((*(float *)((long)param_1 + 0x10504) == 0.0) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x20a0)))) {
    bVar5 = *(float *)(param_1 + 0x20a0) == 0.0;
  }
  if (!bVar5) {
    param_1[0x20a0] = 0;
    FUN_1000200a0(plVar1);
  }
  plVar2 = param_1 + 0x20b4;
  fVar10 = *(float *)((long)param_1 + 0x105f4);
  bVar5 = false;
  if ((*(float *)(param_1 + 0x20be) == 0.5) && (bVar5 = false, !NAN(fVar10))) {
    bVar5 = fVar10 == 1.0;
  }
  if (!bVar5) {
    param_1[0x20be] = 0x3f8000003f000000;
    FUN_1000200a0(plVar2);
  }
  fVar6 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar10 = fVar10 * -0.5;
  fVar11 = *(float *)(param_1 + 0x209e);
  bVar5 = false;
  if ((fVar11 == fVar6 * -0.5) &&
     (bVar5 = false, !NAN(*(float *)((long)param_1 + 0x104f4)) && !NAN(fVar10))) {
    bVar5 = *(float *)((long)param_1 + 0x104f4) == fVar10;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0x209e) = fVar6 * -0.5;
    *(float *)((long)param_1 + 0x104f4) = fVar10;
    FUN_1000200a0(plVar1);
  }
  fVar9 = fVar9 * 0.5;
  (**(code **)(*param_1 + 0x48))(param_1);
  if ((*(float *)(param_1 + 0x20bc) != 0.0) || (*(float *)((long)param_1 + 0x105e4) != fVar11 * 0.5)
     ) {
    *(undefined4 *)(param_1 + 0x20bc) = 0;
    *(float *)((long)param_1 + 0x105e4) = fVar11 * 0.5;
    FUN_1000200a0(plVar2);
  }
  fVar10 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar6 = fVar9;
  FUN_10064e47c(fVar10 - fVar9,fVar9,plVar1);
  uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar10 = fVar6;
  FUN_10065317c(plVar1);
  FUN_10064e47c(uVar7,fVar6 - fVar10,plVar2);
  plVar2 = param_1 + 0x20d2;
  bVar5 = false;
  if ((*(float *)((long)param_1 + 0x106e4) == 0.0) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x20dc)))) {
    bVar5 = *(float *)(param_1 + 0x20dc) == 0.0;
  }
  if (!bVar5) {
    param_1[0x20dc] = 0;
    FUN_1000200a0(plVar2);
  }
  plVar3 = param_1 + 0x20f0;
  if ((*(float *)(param_1 + 0x20fa) != 0.0) || (*(float *)((long)param_1 + 0x107d4) != 0.5)) {
    param_1[0x20fa] = 0x3f00000000000000;
    FUN_1000200a0(plVar3);
  }
  plVar4 = param_1 + 0x210e;
  fVar10 = *(float *)(param_1 + 0x2118);
  if ((fVar10 != 1.0) || (fVar10 = *(float *)((long)param_1 + 0x108c4), fVar10 != 1.0)) {
    lVar8 = NEON_fmov(0x3f800000,4);
    param_1[0x2118] = lVar8;
    FUN_1000200a0(plVar4);
  }
  fVar6 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_100652e60(plVar2);
  fVar6 = fVar10 + fVar6 * -0.5;
  (**(code **)(*param_1 + 0x48))(param_1);
  if ((*(float *)(param_1 + 0x20da) != fVar6) ||
     (*(float *)((long)param_1 + 0x106d4) != fVar10 * -0.5)) {
    *(float *)(param_1 + 0x20da) = fVar6;
    *(float *)((long)param_1 + 0x106d4) = fVar10 * -0.5;
    FUN_1000200a0(plVar2);
  }
  fVar10 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar6 = *(float *)(param_1 + 0x20f8);
  if ((fVar6 != fVar10 * -0.5) || (fVar6 = *(float *)((long)param_1 + 0x107c4), fVar6 != 0.0)) {
    *(float *)(param_1 + 0x20f8) = fVar10 * -0.5;
    *(undefined4 *)((long)param_1 + 0x107c4) = 0;
    FUN_1000200a0(plVar3);
  }
  fVar10 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  if ((*(float *)(param_1 + 0x2116) != fVar10 * 0.5) ||
     (*(float *)((long)param_1 + 0x108b4) != fVar6 * 0.5)) {
    *(float *)(param_1 + 0x2116) = fVar10 * 0.5;
    *(float *)((long)param_1 + 0x108b4) = fVar6 * 0.5;
    FUN_1000200a0(plVar4);
  }
  fVar10 = (float)FUN_100652e60(plVar1);
  fVar6 = 5.0;
  FUN_10064e47c(fVar10 + -5.0,0x40a00000,plVar2);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(0x40a00000,plVar3);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(0x40a00000,fVar6 - fVar9,plVar4);
  return;
}




void FUN_1000b1b78(long param_1,int param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  plVar1 = (long *)(param_1 + 0x11270);
  plVar3 = (long *)*plVar1;
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x11278) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        lVar4 = (**(code **)(*(long *)*plVar1 + 0x10))();
        if (*(int *)(lVar4 + 0x260) == param_2) {
          uVar5 = FUN_100345b94();
          iVar2 = FUN_1003b1948(uVar5,PTR_s__Item_HealingFlask__10185aaf0);
          if (iVar2 == param_3) {
            FUN_1000afc84(param_1);
            return;
          }
        }
      }
    }
    else {
      *plVar1 = 0;
      *(undefined4 *)(param_1 + 0x11278) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1000b1c38(void)

{
  if ((DAT_10184e118 & 1) == 0) {
    DAT_10184e110 = DAT_101872e38;
    DAT_10184e118 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b1c64(void)

{
  DAT_101dc5ad0 = 0xff;
  DAT_101dc5ad2 = 0xffff;
  DAT_101dc5ad4 = 0xffff;
  DAT_101dc5ad8 = 0xffbc9c44;
  DAT_101dc5adc = 0xff1166f2;
  DAT_101dc5ae0 = 0xffe0e0e0;
  DAT_101dc5ae4 = 0xffa0a0a0;
  DAT_101dc5ae8 = 0xff8c8c8c;
  DAT_101dc5aec = 0xff322213;
  DAT_101dc5af0 = 0xff091911;
  DAT_101dc5af4 = 0xff170c19;
  DAT_101dc5af8 = 0xff241a14;
  DAT_101dc5afc = 0xff14171c;
  DAT_101dc5b00 = 0xff221911;
  DAT_101dc5b04 = 0xff1a1416;
  DAT_101dc5b08 = 0xff121414;
  DAT_101dc5b0c = 0xff1a1809;
  DAT_101dc5b10 = 0xff141414;
  DAT_101dc5b14 = 0xff141414;
  DAT_101dc5b18 = 0xff2929c0;
  DAT_101dc5b1c = 0xff283082;
  DAT_101dc5b20 = 0xff5262cc;
  DAT_101dc5b24 = 0xff283082;
  DAT_101dc5b28 = 0xff5262cc;
  DAT_101dc5b2c = 0xff745c42;
  DAT_101dc5b30 = 0xff184155;
  DAT_101dc5b34 = 0xff92665e;
  DAT_101dc5b38 = 0xffbc9c44;
  DAT_101dc5b3c = 0xffbbae56;
  DAT_101dc5b40 = 0xff8b7b01;
  DAT_101dc5b44 = 0xff90b3ef;
  DAT_101dc5b48 = 0xff728ebe;
  DAT_101dc5b4c = 0xff19459d;
  DAT_101dc5b50 = 0xff9d877b;
  DAT_101dc5b54 = 0xffcbb1a3;
  DAT_101dc5b58 = 0xff3f6fb5;
  DAT_101dc5b5c = 0xffc5c5c5;
  DAT_101dc5b60 = 0xff4fc1f1;
  DAT_101dc5b64 = 0xff606060;
  DAT_101dc5b68 = 0xffc5ff7b;
  DAT_101dc5b6c = 0xff5271eb;
  DAT_101dc5b70 = 0xfffae076;
  DAT_101dc5b74 = 0xff3ac8f6;
  DAT_101dc5b78 = 0xffaaaaaa;
  DAT_101dc5b7c = 0xffe19400;
  DAT_101dc5b80 = 0xffe19400;
  DAT_101dc5b84 = 0xffe550b2;
  DAT_101dc5b88 = 0xfff22ae8;
  DAT_101dc5b8c = 0xff005ae1;
  DAT_101dc5b90 = 0xff1addfa;
  DAT_101dc5b94 = 0xff2424b3;
  DAT_101dc5b98 = 0xff2424b3;
  DAT_101dc5b9c = 0xff646464;
  DAT_101dc5ba0 = 0xff92665e;
  DAT_101dc5ba4 = 0xff646037;
  DAT_101dc5ba8 = 0xffffffff;
  DAT_101dc5bac = 0xff1111a1;
  DAT_101dc5bb0 = 0xff321ee1;
  DAT_101dc5bb4 = 0xffc8c8c8;
  DAT_101dc5bb8 = 0xff321ee1;
  DAT_101dc5bbc = 0xff7fe801;
  DAT_101dc5bc0 = 0xffffffff;
  DAT_101dc5bc4 = 0xff6259b3;
  DAT_101dc5bc8 = 0xff506e73;
  DAT_101dc5bcc = 0xff9dbf86;
  DAT_101dc5bd0 = 0xffa35244;
  DAT_101dc5bd4 = 0xffca828e;
  DAT_101dc5bd8 = 0xffa6a6a6;
  DAT_101dc5bdc = 0xffa6a6a6;
  DAT_101dc5be0 = 0xffffffff;
  DAT_101dc5be4 = 0xff88ea2f;
  DAT_101dc5be8 = 0xff8c8c8c;
  DAT_101dc5bec = 0xffffb400;
  DAT_101dc5bf0 = 0xffff00ff;
  DAT_101dc5bf4 = 0xff00aded;
  DAT_101dc5bf8 = 0xff33d3ff;
  DAT_101dc5bfc = 0xff7fe801;
  DAT_101dc5c00 = 0xff282828;
  DAT_101dc5c04 = 0xfff0f0f0;
  DAT_101dc5c08 = 0xffa4781e;
  DAT_101dc5c0c = 0xffa6654b;
  DAT_101dc5c10 = 0xff93435b;
  DAT_101dc5c14 = 0xff387f9c;
  DAT_101dc5c18 = 0xffa3781e;
  DAT_101dc5c1c = 0xffffd18a;
  DAT_101dc5c20 = 0xffff61f7;
  DAT_101dc5c24 = 0xff5de1f2;
  DAT_101dc5c28 = 0xff80eaff;
  DAT_101dc5c2c = 0xff32e00e;
  DAT_101dc5c30 = 0xff5a3c10;
  DAT_101dc5c34 = 0xff330b03;
  DAT_101dc5c38 = 0xff33031d;
  DAT_101dc5c3c = 0xff032433;
  DAT_101dc5c40 = 0xff9e8e8d;
  uRam0000000101dc5d18 = 0x7f7fffff7f7fffff;
  _DAT_101dc5d10 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5d28 = 0x7f7fffff7f7fffff;
  _DAT_101dc5d20 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5d38 = 0x7f7fffff7f7fffff;
  _DAT_101dc5d30 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5d48 = 0x7f7fffff7f7fffff;
  _DAT_101dc5d40 = 0x7f7fffff7f7fffff;
  DAT_101dc5d50 = 0x7f7fffff;
  DAT_101dc5d54 = 0x7f7fffff;
  DAT_101dc5d58 = 0x7f7fffff;
  DAT_101dc5d5c = 0x3f800000;
  uRam0000000101dc5d68 = 0x7f7fffff7f7fffff;
  _DAT_101dc5d60 = 0x7f7fffff7f7fffff;
  DAT_101dc5d70 = 0x7f7fffff;
  DAT_101dc5d74 = 0x3eb33333;
  uRam0000000101dc5d80 = 0x7f7fffff7f7fffff;
  _DAT_101dc5d78 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5d90 = 0x7f7fffff7f7fffff;
  _DAT_101dc5d88 = 0x7f7fffff7f7fffff;
  uRam0000000101dc5da0 = 0x7f7fffff7f7fffff;
  _DAT_101dc5d98 = 0x7f7fffff7f7fffff;
  _DAT_101dc5db0 = 0x7f7fffff7f7fffff;
  _DAT_101dc5da8 = 0x7f7fffff7f7fffff;
  DAT_101dc5db8 = 0x7f7fffff;
  DAT_101dc5dbc = 0x7f7fffff;
  DAT_101dc5dc0 = 0x7f7fffff;
  uRam0000000101dc5c58 = 0xff7fffffff7fffff;
  _DAT_101dc5c50 = 0xff7fffffff7fffff;
  DAT_101dc5c60 = 0;
  DAT_101dc5c68 = 0;
  uRam0000000101dc5c74 = 0xff7fffffff7fffff;
  _DAT_101dc5c6c = 0xff7fffffff7fffff;
  DAT_101dc5c7c = 0xff7fffff;
  DAT_101dc5c80 = 0xff7fffff;
  DAT_101dc5c84 = NEON_fmov(0xbf800000,4);
  DAT_101dc5c8c = 0x3f000000;
  DAT_101dc5c90 = 0;
  DAT_101dc5c98 = 0;
  uRam0000000101dc5ca8 = 0xff7fffffff7fffff;
  _DAT_101dc5ca0 = 0xff7fffffff7fffff;
  uRam0000000101dc5cb8 = 0xff7fffffff7fffff;
  _DAT_101dc5cb0 = 0xff7fffffff7fffff;
  uRam0000000101dc5cc8 = 0xff7fffffff7fffff;
  _DAT_101dc5cc0 = 0xff7fffffff7fffff;
  uRam0000000101dc5cd8 = 0xbf800000bf800000;
  _DAT_101dc5cd0 = 0xbf80000000000000;
  DAT_101dc5ce0 = 0xbf800000;
  DAT_101dc5ce4 = 0xff7fffff;
  DAT_101dc5ce8 = 0xff7fffff;
  DAT_101dc5cec = 0xff7fffff;
  DAT_101dc5cf0 = 0;
  DAT_101dc5cf4 = 0xff7fffff;
  DAT_101dc5cf8 = 0;
  DAT_101dc5d00 = 0;
  return;
}




long * FUN_1000b23dc(long *param_1,undefined1 param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  float fVar5;
  
  puVar3 = (undefined8 *)FUN_1006509c0();
  *puVar3 = &PTR_thunk_FUN_1000b2598_101452948;
  FUN_100269de4(puVar3 + 0x48);
  thunk_FUN_100655644(param_1 + 0x61);
  plVar1 = param_1 + 0x8c;
  thunk_FUN_100652c08(plVar1);
  param_1[0xab] = 0;
  param_1[0xaa] = 0;
  FUN_1004e313c(param_1 + 0xac);
  *(undefined1 *)(param_1 + 0xae) = param_2;
  *(byte *)((long)param_1 + 0x571) = *(byte *)((long)param_1 + 0x571) | 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x61,1);
  FUN_100650db0(param_1,1);
  if (((*(byte *)((long)param_1 + 0x571) & 1) != 0) && (param_1[0x90] != 0)) {
    FUN_1006423ec(plVar1,1);
  }
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"vert_glass_shadow");
  *(byte *)(param_1 + 0xa7) = *(byte *)(param_1 + 0xa7) | 2;
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar2 = *(uint *)((long)param_1 + 0x4e4);
  if ((uVar2 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x4e4) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar1);
  }
  if ((char)param_1[0xae] == '\x01') {
    uVar4 = 0;
    if (*(float *)(param_1 + 0x96) == 0.0) {
      fVar5 = *(float *)((long)param_1 + 0x4b4);
joined_r0x0001000b255c:
      if (fVar5 == 1.0) goto LAB_1000b2574;
    }
  }
  else {
    if ((char)param_1[0xae] != '\x02') goto LAB_1000b2574;
    uVar4 = 0x3f800000;
    if (*(float *)(param_1 + 0x96) == 1.0) {
      fVar5 = *(float *)((long)param_1 + 0x4b4);
      goto joined_r0x0001000b255c;
    }
  }
  *(undefined4 *)(param_1 + 0x96) = uVar4;
  *(undefined4 *)((long)param_1 + 0x4b4) = 0x3f800000;
  FUN_1000200a0(plVar1);
LAB_1000b2574:
  *(uint *)((long)param_1 + 0x4e4) = *(uint *)((long)param_1 + 0x4e4) | 0x10;
  return param_1;
}




long * thunk_FUN_1000b23dc(long *param_1,undefined1 param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  float fVar5;
  
  puVar3 = (undefined8 *)FUN_1006509c0();
  *puVar3 = &PTR_thunk_FUN_1000b2598_101452948;
  FUN_100269de4(puVar3 + 0x48);
  thunk_FUN_100655644(param_1 + 0x61);
  plVar1 = param_1 + 0x8c;
  thunk_FUN_100652c08(plVar1);
  param_1[0xab] = 0;
  param_1[0xaa] = 0;
  FUN_1004e313c(param_1 + 0xac);
  *(undefined1 *)(param_1 + 0xae) = param_2;
  *(byte *)((long)param_1 + 0x571) = *(byte *)((long)param_1 + 0x571) | 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x61,1);
  FUN_100650db0(param_1,1);
  if (((*(byte *)((long)param_1 + 0x571) & 1) != 0) && (param_1[0x90] != 0)) {
    FUN_1006423ec(plVar1,1);
  }
  FUN_100652cac(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098,"vert_glass_shadow");
  *(byte *)(param_1 + 0xa7) = *(byte *)(param_1 + 0xa7) | 2;
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar2 = *(uint *)((long)param_1 + 0x4e4);
  if ((uVar2 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x4e4) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar1);
  }
  if ((char)param_1[0xae] == '\x01') {
    uVar4 = 0;
    if (*(float *)(param_1 + 0x96) == 0.0) {
      fVar5 = *(float *)((long)param_1 + 0x4b4);
joined_r0x0001000b255c:
      if (fVar5 == 1.0) goto LAB_1000b2574;
    }
  }
  else {
    if ((char)param_1[0xae] != '\x02') goto LAB_1000b2574;
    uVar4 = 0x3f800000;
    if (*(float *)(param_1 + 0x96) == 1.0) {
      fVar5 = *(float *)((long)param_1 + 0x4b4);
      goto joined_r0x0001000b255c;
    }
  }
  *(undefined4 *)(param_1 + 0x96) = uVar4;
  *(undefined4 *)((long)param_1 + 0x4b4) = 0x3f800000;
  FUN_1000200a0(plVar1);
LAB_1000b2574:
  *(uint *)((long)param_1 + 0x4e4) = *(uint *)((long)param_1 + 0x4e4) | 0x10;
  return param_1;
}




void FUN_1000b2598(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000b2598_101452948;
  FUN_1000b2660();
  if ((void *)param_1[0xad] != (void *)0x0) {
    operator_delete__((void *)param_1[0xad]);
    param_1[0xad] = 0;
    param_1[0xac] = 0;
  }
  if ((void *)param_1[0xab] != (void *)0x0) {
    operator_delete__((void *)param_1[0xab]);
    param_1[0xab] = 0;
    param_1[0xaa] = 0;
  }
  param_1[0x8c] = &PTR_FUN_1014a7108;
  param_1[0xa3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa6);
  FUN_10064e2bc(param_1 + 0x8c);
  param_1[0x61] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x61);
  FUN_10064e2bc(param_1 + 0x48);
  *param_1 = &PTR_FUN_1014a6a80;
  FUN_10064230c(param_1 + 0x34);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000b2660(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x550);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x558);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 0x558);
        uVar2 = *(uint *)(param_1 + 0x550);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 0x558) != 0) {
    *(undefined4 *)(param_1 + 0x550) = 0;
  }
  return;
}




void thunk_FUN_1000b2598(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000b2598_101452948;
  FUN_1000b2660();
  if ((void *)param_1[0xad] != (void *)0x0) {
    operator_delete__((void *)param_1[0xad]);
    param_1[0xad] = 0;
    param_1[0xac] = 0;
  }
  if ((void *)param_1[0xab] != (void *)0x0) {
    operator_delete__((void *)param_1[0xab]);
    param_1[0xab] = 0;
    param_1[0xaa] = 0;
  }
  param_1[0x8c] = &PTR_FUN_1014a7108;
  param_1[0xa3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa6);
  FUN_10064e2bc(param_1 + 0x8c);
  param_1[0x61] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x61);
  FUN_10064e2bc(param_1 + 0x48);
  *param_1 = &PTR_FUN_1014a6a80;
  FUN_10064230c(param_1 + 0x34);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000b26c8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000b2598();
  operator_delete(pvVar1);
  return;
}




void FUN_1000b26dc(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x550) != 0) {
    uVar1 = 0;
    do {
      FUN_1000b13ec(*(undefined8 *)(*(long *)(param_1 + 0x558) + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x550));
  }
  return;
}




void FUN_1000b2720(float param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  
  uVar3 = (ulong)*(uint *)(param_2 + 0x550);
  if (*(uint *)(param_2 + 0x550) != 0) {
    plVar4 = *(long **)(param_2 + 0x558);
    plVar5 = plVar4;
    do {
      lVar2 = *plVar5;
      if (lVar2 != 0) {
        bVar1 = false;
        if ((*(float *)(lVar2 + 0x48) == param_1) &&
           (bVar1 = false, !NAN(*(float *)(lVar2 + 0x4c)) && !NAN(param_1))) {
          bVar1 = *(float *)(lVar2 + 0x4c) == param_1;
        }
        if (!bVar1) {
          *(float *)(lVar2 + 0x48) = param_1;
          *(float *)(lVar2 + 0x4c) = param_1;
          FUN_1000200a0();
          uVar3 = (ulong)*(uint *)(param_2 + 0x550);
          plVar4 = *(long **)(param_2 + 0x558);
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar4 + uVar3);
  }
  return;
}




void FUN_1000b2790(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  
  fVar9 = (float)(**(code **)(*param_3 + 0x48))();
  uVar4 = (ulong)*(uint *)(param_3 + 0xaa);
  if (*(uint *)(param_3 + 0xaa) != 0) {
    param_2 = 0x3c088889;
    plVar5 = (long *)param_3[0xab];
    plVar8 = plVar5;
    do {
      lVar6 = *plVar8;
      if (lVar6 != 0) {
        (**(code **)(*param_3 + 0x48))(param_3);
        FUN_10064e47c(0x43d98000,lVar6);
        if (plVar8 != (long *)param_3[0xab]) {
          lVar6 = plVar8[-1];
          cVar1 = (char)param_3[0xae];
          if (cVar1 == '\x01') {
            lVar7 = *plVar8;
            FUN_10064e72c(fVar9 * 0.008333334,lVar7,3,lVar6,1);
            FUN_10064e72c(0,lVar7,2,lVar6,2);
            cVar1 = (char)param_3[0xae];
          }
          if (cVar1 == '\x02') {
            lVar7 = *plVar8;
            FUN_10064e72c(-(fVar9 * 0.008333334),lVar7,1,lVar6,3);
            FUN_10064e72c(0,lVar7,2,lVar6,2);
          }
        }
        FUN_1000afd4c(*plVar8);
        uVar4 = (ulong)*(uint *)(param_3 + 0xaa);
        plVar5 = (long *)param_3[0xab];
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar5 + uVar4);
  }
  plVar8 = param_3 + 0x61;
  FUN_100655990(plVar8,0);
  FUN_1006557ec(plVar8);
  if (((*(byte *)((long)param_3 + 0x571) & 1) == 0) && ((int)param_3[0xaa] != 0)) {
    *(uint *)((long)param_3 + 0x4e4) = *(uint *)((long)param_3 + 0x4e4) | 4;
    local_58 = FUN_10064e3cc(plVar8);
    uStack_54 = param_2;
    FUN_10064e48c(param_3 + 0x8c,&local_58);
    FUN_10064e5ec(0,0,param_3 + 0x8c,8,plVar8,8);
    uVar2 = *(uint *)((long)param_3 + 0x4e4);
  }
  else {
    uVar2 = *(uint *)((long)param_3 + 0x4e4) & 0xfffffffb;
  }
  *(uint *)((long)param_3 + 0x4e4) = uVar2 & 0xffffffbf;
  FUN_100650dcc(param_3,0);
  FUN_100650a8c(param_3);
  uVar3 = 2;
  if ((char)param_3[0xae] == '\x01') {
    uVar3 = 3;
  }
  FUN_10064e5ec(0,0,plVar8,uVar3,param_3,uVar3);
  return;
}




void FUN_1000b2994(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  long local_68;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  undefined4 local_38;
  
  if ((param_2 != 0) && (uVar2 = FUN_100345bbc(param_2), uVar2 == *(byte *)(param_1 + 0xae))) {
    pvVar3 = operator_new(0x11288);
    local_68 = thunk_FUN_1000af038(pvVar3,param_2,*(byte *)((long)param_1 + 0x571) & 1);
    *(uint *)(local_68 + 0x84) = *(uint *)(local_68 + 0x84) | 0x14;
    local_40 = (ulong)*(uint *)(param_1 + 0xaa);
    local_38 = DAT_101dbd458;
    local_60 = FUN_1000b2aa0;
    local_50 = 0;
    uStack_48 = 0;
    lVar1 = local_68 + 8;
    plStack_58 = param_1;
    FUN_10001554c(lVar1,&local_60);
    local_40 = (ulong)*(uint *)(param_1 + 0xaa);
    local_38 = DAT_101dbd484;
    local_60 = FUN_1000b2aa0;
    local_50 = 0;
    uStack_48 = 0;
    plStack_58 = param_1;
    FUN_10001554c(lVar1,&local_60);
    FUN_1000b2aa8(param_1 + 0xaa,&local_68);
    FUN_100655930(param_1 + 0x61,local_68,1);
    (**(code **)(*param_1 + 0x150))(param_1);
  }
  return;
}




void FUN_1000b2aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000b2b30(param_1,param_2,param_5);
  return;
}




void FUN_1000b2aa8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000b2b78(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void thunk_FUN_1000b2660(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x550);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x558);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 0x558);
        uVar2 = *(uint *)(param_1 + 0x550);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 0x558) != 0) {
    *(undefined4 *)(param_1 + 0x550) = 0;
  }
  return;
}




void FUN_1000b2b2c(void)

{
  return;
}




void FUN_1000b2b30(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1000320fc();
  uVar2 = FUN_1000b172c(*(undefined8 *)(*(long *)(param_1 + 0x558) + (param_3 & 0xffffffff) * 8));
  FUN_100033704(uVar1,uVar2,0);
  return;
}




void FUN_1000b2b78(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long * FUN_1000b2bf4(long *param_1)

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
  long *plVar12;
  uint *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  bool bVar25;
  int iVar26;
  int iVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  uint uVar30;
  ulong uVar31;
  code **ppcVar32;
  ulong uVar33;
  long *plVar34;
  long *plVar35;
  float fVar36;
  long lVar37;
  long *local_b8;
  code *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  code **local_88;
  undefined4 local_80;
  
  puVar13 = (uint *)(param_1 + 0xa64);
  puVar28 = (undefined8 *)FUN_100269da8();
  *puVar28 = &PTR_thunk_FUN_1000b42ac_101452ab8;
  puVar28 = puVar28 + 0x19;
  FUN_1006421a8(puVar28);
  param_1[0x19] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1004e313c(param_1 + 0x2a);
  plVar1 = param_1 + 0x2c;
  FUN_1006421a8(plVar1);
  param_1[0x2c] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x3d;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x5b;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x79;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x97;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 0xb5;
  FUN_1006421a8(plVar6);
  param_1[0xb5] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar7 = param_1 + 0xc6;
  thunk_FUN_100652c08();
  plVar8 = param_1 + 0xe4;
  thunk_FUN_100652c08();
  plVar9 = param_1 + 0x102;
  thunk_FUN_100652c08();
  plVar10 = param_1 + 0x120;
  FUN_1006421a8(plVar10);
  param_1[0x120] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar11 = param_1 + 0x131;
  FUN_10064fd54(plVar11,0);
  param_1[0x131] = (long)&PTR_thunk_FUN_10064e2bc_10144caa0;
  plVar12 = param_1 + 0x14a;
  thunk_FUN_100183990(plVar12,1);
  plVar14 = param_1 + 0x208;
  thunk_FUN_100183990(plVar14,1);
  FUN_10064e264();
  plVar15 = param_1 + 0x2dd;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(param_1 + 0x303);
  thunk_FUN_100652c08(param_1 + 0x321);
  local_b8 = param_1 + 0x33f;
  thunk_FUN_100652c08();
  plVar16 = param_1 + 0x35d;
  thunk_FUN_100652c08();
  plVar17 = param_1 + 0x37b;
  thunk_FUN_1001b4648();
  plVar18 = param_1 + 0x3c8;
  thunk_FUN_100650e64();
  plVar35 = param_1 + 0x3ee;
  FUN_10064fd54(plVar35,0);
  param_1[0x3ee] = (long)&PTR_thunk_FUN_10064e2bc_10144caa0;
  plVar19 = param_1 + 0x407;
  thunk_FUN_100181304(plVar19,1);
  plVar34 = param_1 + 0x6be;
  thunk_FUN_100183990(plVar34,1);
  plVar20 = param_1 + 0x77c;
  FUN_1006421a8();
  param_1[0x77c] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar21 = param_1 + 0x78d;
  thunk_FUN_1000a883c();
  plVar22 = param_1 + 0x7ad;
  thunk_FUN_100181304(plVar22,1);
  param_1[0xa65] = 0;
  param_1[0xa64] = 0;
  *(undefined4 *)(param_1 + 0xa66) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x5334) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar28,1);
  FUN_100642bd8(puVar28,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar1,plVar5,1);
  iVar26 = FUN_10011fbd8();
  if (0 < iVar26) {
    iVar26 = 0;
    do {
      local_a8 = (code *)FUN_1000b3ee4(plVar1,1);
      FUN_1000b3e64(puVar13,&local_a8);
      iVar26 = iVar26 + 1;
      iVar27 = FUN_10011fbd8();
    } while (iVar26 < iVar27);
  }
  FUN_100642bd8(plVar1,plVar6,1);
  FUN_100642bd8(plVar6,plVar7,1);
  FUN_100642bd8(plVar6,plVar8,1);
  FUN_100642bd8(plVar6,plVar9,1);
  FUN_100642bd8(plVar1,plVar10,1);
  FUN_100642bd8(plVar10,plVar11,1);
  FUN_100642bd8(plVar11,plVar14,1);
  FUN_100642bd8(plVar11,param_1 + 0x2c6,1);
  FUN_100642bd8(param_1 + 0x2c6,plVar15,1);
  FUN_100642bd8(plVar11,plVar12,1);
  FUN_100642bd8(plVar10,plVar18,1);
  FUN_100642bd8(plVar10,plVar17,1);
  FUN_100642bd8(param_1 + 0x3af,plVar16,1);
  FUN_100642bd8(param_1 + 0x3af,local_b8,1);
  FUN_100642bd8(plVar10,plVar35,1);
  FUN_100642bd8(plVar35,plVar34,1);
  FUN_100642bd8(plVar35,plVar19,1);
  FUN_100642bd8(puVar28,plVar20,1);
  FUN_100642bd8(plVar20,plVar22,1);
  FUN_100642bd8(plVar20,plVar21,1);
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  *(uint *)((long)param_1 + 0x26c) = *(uint *)((long)param_1 + 0x26c) | 0x10;
  (**(code **)(param_1[0x3d] + 0x40))(0x41000000,plVar2);
  if ((*(uint *)((long)param_1 + 0x26c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x26c) = *(uint *)((long)param_1 + 0x26c) & 0xffff807f;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  *(uint *)((long)param_1 + 0x35c) = *(uint *)((long)param_1 + 0x35c) | 0x10;
  (**(code **)(param_1[0x5b] + 0x40))(0x41000000,plVar3);
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar30 = *(uint *)((long)param_1 + 0x35c);
  if ((uVar30 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x35c) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x5280;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  if ((*(uint *)((long)param_1 + 0x44c) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_1 + 0x44c) = *(uint *)((long)param_1 + 0x44c) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"vert_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x53c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x53c) = *(uint *)((long)param_1 + 0x53c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar5);
  }
  *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) | 2;
  FUN_100652cac(plVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xff595959);
  FUN_100652dd4(plVar7,&local_a8,2);
  if ((*(float *)(param_1 + 0xd0) != 0.0) || (*(float *)((long)param_1 + 0x684) != 0.5)) {
    param_1[0xd0] = 0x3f00000000000000;
    FUN_1000200a0(plVar7);
  }
  *(uint *)((long)param_1 + 0x6b4) = *(uint *)((long)param_1 + 0x6b4) | 0x10;
  (**(code **)(param_1[0xc6] + 0x40))(0x41000000,plVar7);
  uVar23 = DAT_101dbd458;
  local_80 = DAT_101dbd458;
  local_a8 = thunk_FUN_1000b53bc;
  local_90 = 0;
  local_88 = (code **)0x0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 199,&local_a8);
  uVar24 = DAT_101dbd484;
  local_80 = DAT_101dbd484;
  local_a8 = thunk_FUN_1000b53bc;
  local_90 = 0;
  local_88 = (code **)0x0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 199,&local_a8);
  FUN_100652cac(plVar8,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  if ((*(float *)(param_1 + 0xee) != 0.0) || (*(float *)((long)param_1 + 0x774) != 0.5)) {
    param_1[0xee] = 0x3f00000000000000;
    FUN_1000200a0(plVar8);
  }
  FUN_100652cac(plVar9,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  *(uint *)((long)param_1 + 0x894) = *(uint *)((long)param_1 + 0x894) | 0x10;
  (**(code **)(param_1[0x102] + 0x40))(0x41000000,plVar9);
  local_80 = uVar23;
  local_a8 = FUN_1000b3f5c;
  local_90 = 0;
  local_88 = (code **)0x0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x103,&local_a8);
  local_80 = uVar24;
  local_a8 = FUN_1000b3f5c;
  local_90 = 0;
  local_88 = (code **)0x0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x103,&local_a8);
  if ((*(float *)(param_1 + 0x10c) != 0.5) || (*(float *)((long)param_1 + 0x864) != 0.5)) {
    param_1[0x10c] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar9);
  }
  FUN_100652cac(plVar21,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_replay_controls");
  if ((*(float *)(param_1 + 0x797) != 0.5) || (*(float *)((long)param_1 + 0x3cbc) != 0.5)) {
    param_1[0x797] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar21);
  }
  FUN_1004e3120(&local_a8,"");
  FUN_1001816d4(0x42800000,0,0x44480000,plVar22,0,&local_a8,&DAT_10115a168,&DAT_101dc1cb8,0);
  if (local_a0 != (long *)0x0) {
    operator_delete__(local_a0);
  }
  FUN_100181bd0(0x3f800000,plVar22,&DAT_10115a164);
  *(uint *)((long)param_1 + 0x3dec) = *(uint *)((long)param_1 + 0x3dec) | 0x10;
  FUN_1001b495c(0,plVar22);
  if ((*(float *)(param_1 + 0x7b7) != 0.5) || (*(float *)((long)param_1 + 0x3dbc) != 0.5)) {
    param_1[0x7b7] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar22);
  }
  FUN_100181c68(0x42dccccd,plVar22);
  lVar37 = NEON_fmov(0x41a00000,4);
  param_1[0x7b8] = lVar37;
  if ((*(uint *)((long)param_1 + 0x3c64) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x3c64) = *(uint *)((long)param_1 + 0x3c64) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar20);
  }
  plVar1 = param_1 + 0x1e4;
  FUN_100652cdc(plVar1,"hud_plus");
  FUN_100652dd4(plVar1,&DAT_101d22fe8,2);
  fVar36 = (float)FUN_100652e60(plVar1);
  fVar36 = 56.0 / fVar36;
  if ((*(float *)(param_1 + 0x1ed) != fVar36) || (*(float *)((long)param_1 + 0xf6c) != fVar36)) {
    *(float *)(param_1 + 0x1ed) = fVar36;
    *(float *)((long)param_1 + 0xf6c) = fVar36;
    FUN_1000200a0(plVar1);
  }
  uVar30 = *(uint *)((long)param_1 + 0xdc4);
  if ((uVar30 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0xdc4) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x1980;
    FUN_1000200a0(param_1 + 0x1a8);
  }
  FUN_100183c50(0x3f800000,plVar12,&DAT_10114be69);
  FUN_1001b495c(0,plVar12);
  FUN_100183c68(0x3f666666,plVar12,&DAT_10115a168);
  param_1[0x155] = 0x4100000041000000;
  if ((*(float *)(param_1 + 0x154) != 0.5) || (*(float *)((long)param_1 + 0xaa4) != 0.5)) {
    param_1[0x154] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar12);
  }
  FUN_100183c78(0x3f800000,0x3fc00000,plVar12);
  local_80 = uVar23;
  local_a8 = thunk_FUN_1000b5130;
  local_90 = 0;
  local_88 = (code **)0x0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x14b,&local_a8);
  local_80 = uVar24;
  local_a8 = thunk_FUN_1000b5130;
  local_90 = 0;
  local_88 = (code **)0x0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x14b,&local_a8);
  plVar1 = param_1 + 0x2a2;
  FUN_100652cdc(plVar1,"hud_minus");
  FUN_100652dd4(plVar1,&DAT_101d22fe8,2);
  fVar36 = (float)FUN_100652e60(plVar1);
  fVar36 = 56.0 / fVar36;
  if ((*(float *)(param_1 + 0x2ab) != fVar36) || (*(float *)((long)param_1 + 0x155c) != fVar36)) {
    *(float *)(param_1 + 0x2ab) = fVar36;
    *(float *)((long)param_1 + 0x155c) = fVar36;
    FUN_1000200a0(plVar1);
  }
  uVar30 = *(uint *)((long)param_1 + 0x1594);
  if ((uVar30 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1594) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x5900;
    FUN_1000200a0(plVar1);
  }
  uVar30 = *(uint *)((long)param_1 + 0x13b4);
  if ((uVar30 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x13b4) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x1980;
    FUN_1000200a0(param_1 + 0x266);
  }
  FUN_100183c50(0x3f800000,plVar14,&DAT_10114be69);
  FUN_1001b495c(0,plVar14);
  FUN_100183c68(0x3f666666,plVar14,&DAT_10115a168);
  param_1[0x213] = 0x4100000041000000;
  if ((*(float *)(param_1 + 0x212) != 0.5) || (*(float *)((long)param_1 + 0x1094) != 0.5)) {
    param_1[0x212] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar14);
  }
  FUN_100183c78(0x3f800000,0x3fc00000,plVar14);
  local_80 = uVar23;
  local_a8 = thunk_FUN_1000b5254;
  local_90 = 0;
  local_88 = (code **)0x0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x209,&local_a8);
  local_80 = uVar24;
  local_a8 = thunk_FUN_1000b5254;
  local_90 = 0;
  local_88 = (code **)0x0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x209,&local_a8);
  FUN_100651594(plVar15,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_10115a168);
  uVar30 = *(uint *)((long)param_1 + 0x176c);
  if ((uVar30 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x176c) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x6600;
    FUN_1000200a0(plVar15);
  }
  FUN_1006516bc(plVar15,&DAT_101d22fe8);
  FUN_10065165c(plVar15,1);
  if ((*(float *)(param_1 + 0x2e7) != 0.5) || (*(float *)((long)param_1 + 0x173c) != 0.5)) {
    param_1[0x2e7] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar15);
  }
  FUN_100652cac(plVar16,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_play");
  if ((*(float *)(param_1 + 0x367) != 0.5) || (*(float *)((long)param_1 + 0x1b3c) != 0.5)) {
    param_1[0x367] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar16);
  }
  if ((*(float *)(param_1 + 0x366) != 1.9090909) ||
     (*(float *)((long)param_1 + 0x1b34) != 1.9090909)) {
    param_1[0x366] = 0x3ff45d173ff45d17;
    FUN_1000200a0(plVar16);
  }
  FUN_100652cac(local_b8,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_replay_pause");
  if ((*(float *)(param_1 + 0x349) != 0.5) || (*(float *)((long)param_1 + 0x1a4c) != 0.5)) {
    param_1[0x349] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(local_b8);
  }
  if ((*(float *)(param_1 + 0x348) != 1.1351352) ||
     (*(float *)((long)param_1 + 0x1a44) != 1.1351352)) {
    param_1[0x348] = 0x3f914c1c3f914c1c;
    FUN_1000200a0(local_b8);
  }
  uVar30 = *(uint *)((long)param_1 + 0x1c5c);
  if ((uVar30 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1c5c) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x6600;
    FUN_1000200a0(plVar17);
    uVar30 = *(uint *)((long)param_1 + 0x1c5c);
  }
  *(uint *)((long)param_1 + 0x1c5c) = uVar30 | 0x10;
  (**(code **)(param_1[0x37b] + 0x40))(0x41000000,plVar17);
  FUN_1001b495c(0xbf800000,plVar17);
  local_80 = uVar23;
  local_a8 = FUN_1000b3f74;
  local_90 = 0;
  local_88 = (code **)0x0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x37c,&local_a8);
  local_80 = uVar24;
  local_a8 = FUN_1000b3f74;
  local_90 = 0;
  local_88 = (code **)0x0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x37c,&local_a8);
  *(uint *)((long)param_1 + 0x1b6c) = *(uint *)((long)param_1 + 0x1b6c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1a7c) = *(uint *)((long)param_1 + 0x1a7c) | 4;
  FUN_100651594(plVar18,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  if ((*(uint *)((long)param_1 + 0x1ec4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1ec4) = *(uint *)((long)param_1 + 0x1ec4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar18);
  }
  FUN_1006516bc(plVar18,&DAT_101d22fe8);
  FUN_10065165c(plVar18,1);
  bVar25 = false;
  if ((*(float *)((long)param_1 + 0x1e94) == 0.0) &&
     (bVar25 = false, !NAN(*(float *)(param_1 + 0x3d2)))) {
    bVar25 = *(float *)(param_1 + 0x3d2) == 0.0;
  }
  if (!bVar25) {
    param_1[0x3d2] = 0;
    FUN_1000200a0(plVar18);
  }
  uVar29 = FUN_1004e0150("HUD_EXIT_REPLAY",0);
  FUN_1001816d4(0x41f00000,0,0x44480000,plVar19,0,uVar29,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100181bd0(0x3f800000,plVar19,&DAT_10115a164);
  local_80 = DAT_101d91884;
  local_a8 = thunk_FUN_1000b539c;
  local_90 = 0;
  local_88 = (code **)0x0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x408,&local_a8);
  *(uint *)((long)param_1 + 0x20bc) = *(uint *)((long)param_1 + 0x20bc) | 0x10;
  FUN_1001b495c(0,plVar19);
  if ((*(float *)(param_1 + 0x411) != 0.5) || (*(float *)((long)param_1 + 0x208c) != 0.5)) {
    param_1[0x411] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar19);
  }
  uVar30 = *(uint *)((long)param_1 + 0x1ff4);
  if ((uVar30 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1ff4) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x6600;
    FUN_1000200a0(plVar35);
  }
  plVar1 = param_1 + 0x758;
  FUN_100652cdc(plVar1,"hud_replay_details");
  fVar36 = (float)FUN_100652e60(plVar1);
  fVar36 = 56.0 / fVar36;
  if ((*(float *)(param_1 + 0x761) != fVar36) || (*(float *)((long)param_1 + 0x3b0c) != fVar36)) {
    *(float *)(param_1 + 0x761) = fVar36;
    *(float *)((long)param_1 + 0x3b0c) = fVar36;
    FUN_1000200a0(plVar1);
  }
  FUN_100183c50(0x3f000000,plVar34,&DAT_10115a164);
  FUN_1001b495c(0,plVar34);
  param_1[0x6c9] = 0x4100000041000000;
  if ((*(float *)(param_1 + 0x6c8) != 0.5) || (*(float *)((long)param_1 + 0x3644) != 0.5)) {
    param_1[0x6c8] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar34);
  }
  FUN_100183c78(0x3f800000,0x3fc00000,plVar34);
  local_80 = uVar23;
  local_a8 = thunk_FUN_1000b51b8;
  local_90 = 0;
  local_88 = (code **)0x0;
  local_98 = 0;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x6bf,&local_a8);
  local_80 = uVar24;
  local_a8 = thunk_FUN_1000b51b8;
  local_90 = 0;
  local_88 = (code **)0x0;
  local_98 = 0;
  ppcVar32 = &local_a8;
  local_a0 = param_1;
  FUN_10001554c(param_1 + 0x6bf,&local_a8);
  uVar31 = (ulong)*puVar13;
  if (*puVar13 != 0) {
    uVar33 = 0;
    do {
      lVar37 = *(long *)(param_1[0xa65] + uVar33 * 8);
      if (lVar37 != 0) {
        uVar29 = FUN_10011fbe4(uVar33);
        FUN_1000b3f90(lVar37,uVar29);
        *(uint *)(lVar37 + 0x13c) = *(uint *)(lVar37 + 0x13c) | 0x10;
        (**(code **)(*(long *)(lVar37 + 0xb8) + 0x40))(0x41000000,(long *)(lVar37 + 0xb8));
        local_80 = uVar23;
        plVar35 = (long *)((ulong)plVar35 & 0xffffffff00000000 | uVar33);
        local_a8 = FUN_1000b40e4;
        local_98 = 0;
        local_90 = 0;
        local_a0 = param_1;
        local_88 = (code **)plVar35;
        FUN_10001554c(lVar37 + 0xc0,&local_a8);
        local_80 = uVar24;
        plVar34 = (long *)((ulong)plVar34 & 0xffffffff00000000 | uVar33);
        local_a8 = FUN_1000b40e4;
        local_98 = 0;
        local_90 = 0;
        local_a0 = param_1;
        local_88 = (code **)plVar34;
        FUN_10001554c(lVar37 + 0xc0,&local_a8);
        *(uint *)(lVar37 + 0x81c) = *(uint *)(lVar37 + 0x81c) | 0x10;
        (**(code **)(*(long *)(lVar37 + 0x798) + 0x40))(0x41000000);
        local_80 = uVar23;
        ppcVar32 = (code **)((ulong)ppcVar32 & 0xffffffff00000000 | uVar33);
        local_a8 = FUN_1000b40e4;
        local_98 = 0;
        local_90 = 0;
        local_a0 = param_1;
        local_88 = ppcVar32;
        FUN_10001554c(lVar37 + 0x7a0,&local_a8);
        local_80 = uVar24;
        local_b8 = (long *)((ulong)local_b8 & 0xffffffff00000000 | uVar33);
        local_a8 = FUN_1000b40e4;
        local_98 = 0;
        local_90 = 0;
        local_a0 = param_1;
        local_88 = (code **)local_b8;
        FUN_10001554c(lVar37 + 0x7a0,&local_a8);
        uVar31 = (ulong)*puVar13;
      }
      uVar33 = uVar33 + 1;
    } while (uVar33 < uVar31);
  }
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0x3f800000);
  FUN_10012e9ac(0,&local_a8,0,0,0,0,0,0);
  uVar31 = FUN_100147980();
  if ((uVar31 & 1) == 0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  FUN_1000b40ec(param_1,0);
  return param_1;
}




void FUN_1000b3e64(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000b57c0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void * FUN_1000b3ee4(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x890);
  lVar2 = FUN_1000b5500();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void thunk_FUN_1000b53bc(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float afStack_48 [3];
  float fStack_3c;
  undefined8 uStack_38;
  
  fVar3 = (float)FUN_10011f1d0();
  uStack_38 = 0;
  iVar1 = FUN_10109c574();
  if (iVar1 == 0) {
    FUN_10109c550((long)&uStack_38 + 4,&uStack_38,0,0);
    FUN_100641518(afStack_48,(ulong)afStack_48 | 4);
    fVar4 = uStack_38._4_4_ / afStack_48[0];
    uStack_38 = CONCAT44(fVar4,(undefined4)uStack_38);
  }
  else {
    lVar2 = FUN_10109c59c(0);
    FUN_100641518(afStack_48,&fStack_3c);
    fVar4 = *(float *)(lVar2 + 4) / afStack_48[0];
    uStack_38 = CONCAT44(fVar4,*(float *)(lVar2 + 8) / fStack_3c);
  }
  fVar6 = *(float *)(param_1 + 0x670);
  uVar5 = FUN_100652e60(param_1 + 0x630);
  fVar4 = (float)NEON_fminnm(fVar4 - fVar6,uVar5);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  uStack_38 = CONCAT44(fVar4,(undefined4)uStack_38);
  fVar6 = (float)FUN_100652e60(param_1 + 0x630);
  *(undefined1 *)(param_1 + 0x5335) = 0;
  FUN_1000b52f4(param_1);
  FUN_1001148bc();
  FUN_1001162f4((fVar4 * fVar3) / fVar6);
  return;
}




void FUN_1000b3f5c(long param_1)

{
  *(undefined1 *)(param_1 + 0x5335) = 1;
  FUN_1000b5334();
  return;
}




void thunk_FUN_1000b5130(long param_1)

{
  float fVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  
  dVar4 = (double)FUN_100346804();
  if (*(char *)(param_1 + 0x5334) == '\0') {
    fVar3 = (float)dVar4;
  }
  else {
    *(undefined1 *)(param_1 + 0x5334) = 0;
    *(uint *)(param_1 + 0x1b6c) = *(uint *)(param_1 + 0x1b6c) & 0xfffffffb;
    *(uint *)(param_1 + 0x1a7c) = *(uint *)(param_1 + 0x1a7c) | 4;
    fVar3 = *(float *)(param_1 + 0x5330);
  }
  lVar2 = 0;
  do {
    fVar1 = *(float *)((long)&DAT_10114be70 + lVar2);
    if (fVar3 < *(float *)((long)&DAT_10114be70 + lVar2)) break;
    lVar2 = lVar2 + 4;
    fVar1 = fVar3;
  } while (lVar2 != 0x14);
  FUN_100346810((double)fVar1);
  return;
}




void thunk_FUN_1000b5254(long param_1)

{
  float *pfVar1;
  float fVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  
  dVar5 = (double)FUN_100346804();
  if (*(char *)(param_1 + 0x5334) == '\0') {
    fVar4 = (float)dVar5;
  }
  else {
    *(undefined1 *)(param_1 + 0x5334) = 0;
    *(uint *)(param_1 + 0x1b6c) = *(uint *)(param_1 + 0x1b6c) & 0xfffffffb;
    *(uint *)(param_1 + 0x1a7c) = *(uint *)(param_1 + 0x1a7c) | 4;
    fVar4 = *(float *)(param_1 + 0x5330);
  }
  fVar6 = fVar4;
  if (0.25 < fVar4) {
    lVar3 = 0;
    fVar2 = 0.25;
    do {
      fVar6 = fVar2;
      if (lVar3 == 0x10) break;
      pfVar1 = (float *)((long)&DAT_10114be74 + lVar3);
      lVar3 = lVar3 + 4;
      fVar2 = *pfVar1;
    } while (*pfVar1 < fVar4);
  }
  FUN_100346810((double)fVar6);
  return;
}




void FUN_1000b3f74(long param_1)

{
  if (*(char *)(param_1 + 0x5334) != '\0') {
    FUN_1000b52f4();
    return;
  }
  FUN_1000b5334();
  return;
}




void thunk_FUN_1000b539c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1001148bc();
  FUN_100115ecc(uVar1,0);
  FUN_1000320fc();
  FUN_100033548();
  return;
}




void thunk_FUN_1000b51b8(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  uVar1 = FUN_100063e10();
  if (1 < uVar1) {
    uVar1 = 2;
  }
  uVar3 = uVar1 + 1 & 0xff;
  uVar1 = (uVar1 + 1) - ((uVar3 / 3) * 2 + uVar3 / 3) & 0xff;
  if (uVar1 == 2) {
    lVar2 = FUN_100641574("plaques-all");
    if (lVar2 == 0) goto LAB_1000b5244;
    uVar3 = *(uint *)(lVar2 + 0x84) & 0xfffffffb;
  }
  else {
    if (((uVar1 != 1) && (uVar1 != 0)) || (lVar2 = FUN_100641574("plaques-all"), lVar2 == 0))
    goto LAB_1000b5244;
    uVar3 = *(uint *)(lVar2 + 0x84) | 4;
  }
  *(uint *)(lVar2 + 0x84) = uVar3;
LAB_1000b5244:
  FUN_100063e04(uVar1);
  return;
}




void FUN_1000b3f90(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  float fVar2;
  undefined4 local_24;
  
  fVar2 = (float)param_2[1];
  *(float *)(param_1 + 0x888) = fVar2;
  *(undefined1 *)(param_1 + 0x88c) = *(undefined1 *)(param_2 + 2);
  switch(*param_2) {
  case 0:
    pcVar1 = "hud_pingicon_action_turret";
    break;
  case 1:
    pcVar1 = "hud_pingicon_action_kraken";
    break;
  case 2:
    pcVar1 = "hud_pingicon_action_gold_miner";
    break;
  case 3:
    pcVar1 = "hud_pingicon_action_vain_crystal";
    break;
  case 4:
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfffffffb;
    *(uint *)(param_1 + 0x72c) = *(uint *)(param_1 + 0x72c) & 0xfffffffb;
    *(uint *)(param_1 + 0x81c) = *(uint *)(param_1 + 0x81c) | 4;
    goto LAB_1000b4044;
  default:
    goto switchD_1000b3fd4_default;
  }
  FUN_100652cdc(param_1 + 0x588,pcVar1);
  fVar2 = *(float *)(param_1 + 0x888);
LAB_1000b4044:
  fVar2 = fVar2 + -1.75;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x888) = fVar2;
switchD_1000b3fd4_default:
  local_24 = 0xffbc9c44;
  if (*(char *)(param_1 + 0x88c) != '\x01') {
    local_24 = 0xff1166f2;
  }
  FUN_100652dd4(param_1 + 0x588,&local_24,2);
  FUN_100652dd4(param_1 + 0x3a8,&local_24,2);
  FUN_100652dd4(param_1 + 0x6a8,&local_24,2);
  FUN_100652dd4(param_1 + 0x798,&local_24,2);
  *(byte *)(param_1 + 0x870) =
       *(byte *)(param_1 + 0x870) & 0xfd | (*(char *)(param_1 + 0x88c) == '\x02') << 1;
  return;
}




void FUN_1000b40e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1000b54b4(param_1,param_2,param_5);
  return;
}




void FUN_1000b40ec(undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 local_50;
  float local_48;
  undefined1 auStack_44 [4];
  
  FUN_100641464(auStack_44,&local_48);
  uVar1 = FUN_1000b50a8();
  if (param_4 == 0) {
    local_50 = (ulong)(uint)local_48 << 0x20;
    FUN_10063fb90(uVar1,&local_50);
    FUN_10063f0e8(0x3e4ccccd,uVar1);
    FUN_10063f130(uVar1,FUN_10001f218);
    FUN_100642324(param_3 + 0x160);
    FUN_100642b14(param_3 + 0x160,uVar1);
    uVar1 = FUN_1000b50a8();
    uVar3 = *(undefined4 *)(param_3 + 0x3c20);
    FUN_100642888(param_3 + 0x3be0,1,0,1,1);
    local_50 = CONCAT44(local_48 + -16.0 + param_2 * -0.5,uVar3);
    FUN_10063fb90(uVar1,&local_50);
    pcVar2 = FUN_10001f160;
  }
  else {
    local_50 = 0;
    FUN_10063fb90(uVar1,&local_50);
    FUN_10063f0e8(0x3e4ccccd,uVar1);
    FUN_10063f130(uVar1,FUN_10001f160);
    FUN_100642324(param_3 + 0x160);
    FUN_100642b14(param_3 + 0x160,uVar1);
    uVar1 = FUN_1000b50a8();
    uVar3 = *(undefined4 *)(param_3 + 0x3c20);
    FUN_100642888(param_3 + 0x3be0,1,0,1,1);
    local_50 = CONCAT44(local_48 + param_2 * 0.5,uVar3);
    FUN_10063fb90(uVar1,&local_50);
    pcVar2 = FUN_10001f218;
  }
  FUN_10063f0e8(0x3e4ccccd,uVar1);
  FUN_10063f130(uVar1,pcVar2);
  FUN_100642324(param_3 + 0x3be0);
  FUN_100642b14(param_3 + 0x3be0,uVar1);
  return;
}




long * thunk_FUN_1000b2bf4(long *param_1)

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
  long *plVar12;
  uint *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  bool bVar25;
  int iVar26;
  int iVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  uint uVar30;
  ulong uVar31;
  code **ppcVar32;
  ulong uVar33;
  long *plVar34;
  long *plVar35;
  float fVar36;
  long lVar37;
  long *plStack_b8;
  code *pcStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code **ppcStack_88;
  undefined4 uStack_80;
  
  puVar13 = (uint *)(param_1 + 0xa64);
  puVar28 = (undefined8 *)FUN_100269da8();
  *puVar28 = &PTR_thunk_FUN_1000b42ac_101452ab8;
  puVar28 = puVar28 + 0x19;
  FUN_1006421a8(puVar28);
  param_1[0x19] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1004e313c(param_1 + 0x2a);
  plVar1 = param_1 + 0x2c;
  FUN_1006421a8(plVar1);
  param_1[0x2c] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x3d;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x5b;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x79;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x97;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 0xb5;
  FUN_1006421a8(plVar6);
  param_1[0xb5] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar7 = param_1 + 0xc6;
  thunk_FUN_100652c08();
  plVar8 = param_1 + 0xe4;
  thunk_FUN_100652c08();
  plVar9 = param_1 + 0x102;
  thunk_FUN_100652c08();
  plVar10 = param_1 + 0x120;
  FUN_1006421a8(plVar10);
  param_1[0x120] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar11 = param_1 + 0x131;
  FUN_10064fd54(plVar11,0);
  param_1[0x131] = (long)&PTR_thunk_FUN_10064e2bc_10144caa0;
  plVar12 = param_1 + 0x14a;
  thunk_FUN_100183990(plVar12,1);
  plVar14 = param_1 + 0x208;
  thunk_FUN_100183990(plVar14,1);
  FUN_10064e264();
  plVar15 = param_1 + 0x2dd;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(param_1 + 0x303);
  thunk_FUN_100652c08(param_1 + 0x321);
  plStack_b8 = param_1 + 0x33f;
  thunk_FUN_100652c08();
  plVar16 = param_1 + 0x35d;
  thunk_FUN_100652c08();
  plVar17 = param_1 + 0x37b;
  thunk_FUN_1001b4648();
  plVar18 = param_1 + 0x3c8;
  thunk_FUN_100650e64();
  plVar35 = param_1 + 0x3ee;
  FUN_10064fd54(plVar35,0);
  param_1[0x3ee] = (long)&PTR_thunk_FUN_10064e2bc_10144caa0;
  plVar19 = param_1 + 0x407;
  thunk_FUN_100181304(plVar19,1);
  plVar34 = param_1 + 0x6be;
  thunk_FUN_100183990(plVar34,1);
  plVar20 = param_1 + 0x77c;
  FUN_1006421a8();
  param_1[0x77c] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar21 = param_1 + 0x78d;
  thunk_FUN_1000a883c();
  plVar22 = param_1 + 0x7ad;
  thunk_FUN_100181304(plVar22,1);
  param_1[0xa65] = 0;
  param_1[0xa64] = 0;
  *(undefined4 *)(param_1 + 0xa66) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x5334) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar28,1);
  FUN_100642bd8(puVar28,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar1,plVar5,1);
  iVar26 = FUN_10011fbd8();
  if (0 < iVar26) {
    iVar26 = 0;
    do {
      pcStack_a8 = (code *)FUN_1000b3ee4(plVar1,1);
      FUN_1000b3e64(puVar13,&pcStack_a8);
      iVar26 = iVar26 + 1;
      iVar27 = FUN_10011fbd8();
    } while (iVar26 < iVar27);
  }
  FUN_100642bd8(plVar1,plVar6,1);
  FUN_100642bd8(plVar6,plVar7,1);
  FUN_100642bd8(plVar6,plVar8,1);
  FUN_100642bd8(plVar6,plVar9,1);
  FUN_100642bd8(plVar1,plVar10,1);
  FUN_100642bd8(plVar10,plVar11,1);
  FUN_100642bd8(plVar11,plVar14,1);
  FUN_100642bd8(plVar11,param_1 + 0x2c6,1);
  FUN_100642bd8(param_1 + 0x2c6,plVar15,1);
  FUN_100642bd8(plVar11,plVar12,1);
  FUN_100642bd8(plVar10,plVar18,1);
  FUN_100642bd8(plVar10,plVar17,1);
  FUN_100642bd8(param_1 + 0x3af,plVar16,1);
  FUN_100642bd8(param_1 + 0x3af,plStack_b8,1);
  FUN_100642bd8(plVar10,plVar35,1);
  FUN_100642bd8(plVar35,plVar34,1);
  FUN_100642bd8(plVar35,plVar19,1);
  FUN_100642bd8(puVar28,plVar20,1);
  FUN_100642bd8(plVar20,plVar22,1);
  FUN_100642bd8(plVar20,plVar21,1);
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  *(uint *)((long)param_1 + 0x26c) = *(uint *)((long)param_1 + 0x26c) | 0x10;
  (**(code **)(param_1[0x3d] + 0x40))(0x41000000,plVar2);
  if ((*(uint *)((long)param_1 + 0x26c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x26c) = *(uint *)((long)param_1 + 0x26c) & 0xffff807f;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  *(uint *)((long)param_1 + 0x35c) = *(uint *)((long)param_1 + 0x35c) | 0x10;
  (**(code **)(param_1[0x5b] + 0x40))(0x41000000,plVar3);
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar30 = *(uint *)((long)param_1 + 0x35c);
  if ((uVar30 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x35c) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x5280;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar4,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  if ((*(uint *)((long)param_1 + 0x44c) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_1 + 0x44c) = *(uint *)((long)param_1 + 0x44c) & 0xffff807f | 0x1f80;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"vert_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x53c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x53c) = *(uint *)((long)param_1 + 0x53c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar5);
  }
  *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) | 2;
  FUN_100652cac(plVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  pcStack_a8 = (code *)CONCAT44(pcStack_a8._4_4_,0xff595959);
  FUN_100652dd4(plVar7,&pcStack_a8,2);
  if ((*(float *)(param_1 + 0xd0) != 0.0) || (*(float *)((long)param_1 + 0x684) != 0.5)) {
    param_1[0xd0] = 0x3f00000000000000;
    FUN_1000200a0(plVar7);
  }
  *(uint *)((long)param_1 + 0x6b4) = *(uint *)((long)param_1 + 0x6b4) | 0x10;
  (**(code **)(param_1[0xc6] + 0x40))(0x41000000,plVar7);
  uVar23 = DAT_101dbd458;
  uStack_80 = DAT_101dbd458;
  pcStack_a8 = thunk_FUN_1000b53bc;
  uStack_90 = 0;
  ppcStack_88 = (code **)0x0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 199,&pcStack_a8);
  uVar24 = DAT_101dbd484;
  uStack_80 = DAT_101dbd484;
  pcStack_a8 = thunk_FUN_1000b53bc;
  uStack_90 = 0;
  ppcStack_88 = (code **)0x0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 199,&pcStack_a8);
  FUN_100652cac(plVar8,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  if ((*(float *)(param_1 + 0xee) != 0.0) || (*(float *)((long)param_1 + 0x774) != 0.5)) {
    param_1[0xee] = 0x3f00000000000000;
    FUN_1000200a0(plVar8);
  }
  FUN_100652cac(plVar9,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_fill");
  *(uint *)((long)param_1 + 0x894) = *(uint *)((long)param_1 + 0x894) | 0x10;
  (**(code **)(param_1[0x102] + 0x40))(0x41000000,plVar9);
  uStack_80 = uVar23;
  pcStack_a8 = FUN_1000b3f5c;
  uStack_90 = 0;
  ppcStack_88 = (code **)0x0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x103,&pcStack_a8);
  uStack_80 = uVar24;
  pcStack_a8 = FUN_1000b3f5c;
  uStack_90 = 0;
  ppcStack_88 = (code **)0x0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x103,&pcStack_a8);
  if ((*(float *)(param_1 + 0x10c) != 0.5) || (*(float *)((long)param_1 + 0x864) != 0.5)) {
    param_1[0x10c] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar9);
  }
  FUN_100652cac(plVar21,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_replay_controls");
  if ((*(float *)(param_1 + 0x797) != 0.5) || (*(float *)((long)param_1 + 0x3cbc) != 0.5)) {
    param_1[0x797] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar21);
  }
  FUN_1004e3120(&pcStack_a8,"");
  FUN_1001816d4(0x42800000,0,0x44480000,plVar22,0,&pcStack_a8,&DAT_10115a168,&DAT_101dc1cb8,0);
  if (plStack_a0 != (long *)0x0) {
    operator_delete__(plStack_a0);
  }
  FUN_100181bd0(0x3f800000,plVar22,&DAT_10115a164);
  *(uint *)((long)param_1 + 0x3dec) = *(uint *)((long)param_1 + 0x3dec) | 0x10;
  FUN_1001b495c(0,plVar22);
  if ((*(float *)(param_1 + 0x7b7) != 0.5) || (*(float *)((long)param_1 + 0x3dbc) != 0.5)) {
    param_1[0x7b7] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar22);
  }
  FUN_100181c68(0x42dccccd,plVar22);
  lVar37 = NEON_fmov(0x41a00000,4);
  param_1[0x7b8] = lVar37;
  if ((*(uint *)((long)param_1 + 0x3c64) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x3c64) = *(uint *)((long)param_1 + 0x3c64) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar20);
  }
  plVar1 = param_1 + 0x1e4;
  FUN_100652cdc(plVar1,"hud_plus");
  FUN_100652dd4(plVar1,&DAT_101d22fe8,2);
  fVar36 = (float)FUN_100652e60(plVar1);
  fVar36 = 56.0 / fVar36;
  if ((*(float *)(param_1 + 0x1ed) != fVar36) || (*(float *)((long)param_1 + 0xf6c) != fVar36)) {
    *(float *)(param_1 + 0x1ed) = fVar36;
    *(float *)((long)param_1 + 0xf6c) = fVar36;
    FUN_1000200a0(plVar1);
  }
  uVar30 = *(uint *)((long)param_1 + 0xdc4);
  if ((uVar30 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0xdc4) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x1980;
    FUN_1000200a0(param_1 + 0x1a8);
  }
  FUN_100183c50(0x3f800000,plVar12,&DAT_10114be69);
  FUN_1001b495c(0,plVar12);
  FUN_100183c68(0x3f666666,plVar12,&DAT_10115a168);
  param_1[0x155] = 0x4100000041000000;
  if ((*(float *)(param_1 + 0x154) != 0.5) || (*(float *)((long)param_1 + 0xaa4) != 0.5)) {
    param_1[0x154] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar12);
  }
  FUN_100183c78(0x3f800000,0x3fc00000,plVar12);
  uStack_80 = uVar23;
  pcStack_a8 = thunk_FUN_1000b5130;
  uStack_90 = 0;
  ppcStack_88 = (code **)0x0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x14b,&pcStack_a8);
  uStack_80 = uVar24;
  pcStack_a8 = thunk_FUN_1000b5130;
  uStack_90 = 0;
  ppcStack_88 = (code **)0x0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x14b,&pcStack_a8);
  plVar1 = param_1 + 0x2a2;
  FUN_100652cdc(plVar1,"hud_minus");
  FUN_100652dd4(plVar1,&DAT_101d22fe8,2);
  fVar36 = (float)FUN_100652e60(plVar1);
  fVar36 = 56.0 / fVar36;
  if ((*(float *)(param_1 + 0x2ab) != fVar36) || (*(float *)((long)param_1 + 0x155c) != fVar36)) {
    *(float *)(param_1 + 0x2ab) = fVar36;
    *(float *)((long)param_1 + 0x155c) = fVar36;
    FUN_1000200a0(plVar1);
  }
  uVar30 = *(uint *)((long)param_1 + 0x1594);
  if ((uVar30 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1594) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x5900;
    FUN_1000200a0(plVar1);
  }
  uVar30 = *(uint *)((long)param_1 + 0x13b4);
  if ((uVar30 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x13b4) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x1980;
    FUN_1000200a0(param_1 + 0x266);
  }
  FUN_100183c50(0x3f800000,plVar14,&DAT_10114be69);
  FUN_1001b495c(0,plVar14);
  FUN_100183c68(0x3f666666,plVar14,&DAT_10115a168);
  param_1[0x213] = 0x4100000041000000;
  if ((*(float *)(param_1 + 0x212) != 0.5) || (*(float *)((long)param_1 + 0x1094) != 0.5)) {
    param_1[0x212] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar14);
  }
  FUN_100183c78(0x3f800000,0x3fc00000,plVar14);
  uStack_80 = uVar23;
  pcStack_a8 = thunk_FUN_1000b5254;
  uStack_90 = 0;
  ppcStack_88 = (code **)0x0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x209,&pcStack_a8);
  uStack_80 = uVar24;
  pcStack_a8 = thunk_FUN_1000b5254;
  uStack_90 = 0;
  ppcStack_88 = (code **)0x0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x209,&pcStack_a8);
  FUN_100651594(plVar15,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_10115a168);
  uVar30 = *(uint *)((long)param_1 + 0x176c);
  if ((uVar30 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x176c) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x6600;
    FUN_1000200a0(plVar15);
  }
  FUN_1006516bc(plVar15,&DAT_101d22fe8);
  FUN_10065165c(plVar15,1);
  if ((*(float *)(param_1 + 0x2e7) != 0.5) || (*(float *)((long)param_1 + 0x173c) != 0.5)) {
    param_1[0x2e7] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar15);
  }
  FUN_100652cac(plVar16,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_play");
  if ((*(float *)(param_1 + 0x367) != 0.5) || (*(float *)((long)param_1 + 0x1b3c) != 0.5)) {
    param_1[0x367] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar16);
  }
  if ((*(float *)(param_1 + 0x366) != 1.9090909) ||
     (*(float *)((long)param_1 + 0x1b34) != 1.9090909)) {
    param_1[0x366] = 0x3ff45d173ff45d17;
    FUN_1000200a0(plVar16);
  }
  FUN_100652cac(plStack_b8,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_replay_pause");
  if ((*(float *)(param_1 + 0x349) != 0.5) || (*(float *)((long)param_1 + 0x1a4c) != 0.5)) {
    param_1[0x349] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plStack_b8);
  }
  if ((*(float *)(param_1 + 0x348) != 1.1351352) ||
     (*(float *)((long)param_1 + 0x1a44) != 1.1351352)) {
    param_1[0x348] = 0x3f914c1c3f914c1c;
    FUN_1000200a0(plStack_b8);
  }
  uVar30 = *(uint *)((long)param_1 + 0x1c5c);
  if ((uVar30 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1c5c) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x6600;
    FUN_1000200a0(plVar17);
    uVar30 = *(uint *)((long)param_1 + 0x1c5c);
  }
  *(uint *)((long)param_1 + 0x1c5c) = uVar30 | 0x10;
  (**(code **)(param_1[0x37b] + 0x40))(0x41000000,plVar17);
  FUN_1001b495c(0xbf800000,plVar17);
  uStack_80 = uVar23;
  pcStack_a8 = FUN_1000b3f74;
  uStack_90 = 0;
  ppcStack_88 = (code **)0x0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x37c,&pcStack_a8);
  uStack_80 = uVar24;
  pcStack_a8 = FUN_1000b3f74;
  uStack_90 = 0;
  ppcStack_88 = (code **)0x0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x37c,&pcStack_a8);
  *(uint *)((long)param_1 + 0x1b6c) = *(uint *)((long)param_1 + 0x1b6c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1a7c) = *(uint *)((long)param_1 + 0x1a7c) | 4;
  FUN_100651594(plVar18,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  if ((*(uint *)((long)param_1 + 0x1ec4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1ec4) = *(uint *)((long)param_1 + 0x1ec4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar18);
  }
  FUN_1006516bc(plVar18,&DAT_101d22fe8);
  FUN_10065165c(plVar18,1);
  bVar25 = false;
  if ((*(float *)((long)param_1 + 0x1e94) == 0.0) &&
     (bVar25 = false, !NAN(*(float *)(param_1 + 0x3d2)))) {
    bVar25 = *(float *)(param_1 + 0x3d2) == 0.0;
  }
  if (!bVar25) {
    param_1[0x3d2] = 0;
    FUN_1000200a0(plVar18);
  }
  uVar29 = FUN_1004e0150("HUD_EXIT_REPLAY",0);
  FUN_1001816d4(0x41f00000,0,0x44480000,plVar19,0,uVar29,&DAT_10115a168,&DAT_101dc1cb8,0);
  FUN_100181bd0(0x3f800000,plVar19,&DAT_10115a164);
  uStack_80 = DAT_101d91884;
  pcStack_a8 = thunk_FUN_1000b539c;
  uStack_90 = 0;
  ppcStack_88 = (code **)0x0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x408,&pcStack_a8);
  *(uint *)((long)param_1 + 0x20bc) = *(uint *)((long)param_1 + 0x20bc) | 0x10;
  FUN_1001b495c(0,plVar19);
  if ((*(float *)(param_1 + 0x411) != 0.5) || (*(float *)((long)param_1 + 0x208c) != 0.5)) {
    param_1[0x411] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar19);
  }
  uVar30 = *(uint *)((long)param_1 + 0x1ff4);
  if ((uVar30 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1ff4) = uVar30 & 0xffff8000 | uVar30 & 0x7f | 0x6600;
    FUN_1000200a0(plVar35);
  }
  plVar1 = param_1 + 0x758;
  FUN_100652cdc(plVar1,"hud_replay_details");
  fVar36 = (float)FUN_100652e60(plVar1);
  fVar36 = 56.0 / fVar36;
  if ((*(float *)(param_1 + 0x761) != fVar36) || (*(float *)((long)param_1 + 0x3b0c) != fVar36)) {
    *(float *)(param_1 + 0x761) = fVar36;
    *(float *)((long)param_1 + 0x3b0c) = fVar36;
    FUN_1000200a0(plVar1);
  }
  FUN_100183c50(0x3f000000,plVar34,&DAT_10115a164);
  FUN_1001b495c(0,plVar34);
  param_1[0x6c9] = 0x4100000041000000;
  if ((*(float *)(param_1 + 0x6c8) != 0.5) || (*(float *)((long)param_1 + 0x3644) != 0.5)) {
    param_1[0x6c8] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar34);
  }
  FUN_100183c78(0x3f800000,0x3fc00000,plVar34);
  uStack_80 = uVar23;
  pcStack_a8 = thunk_FUN_1000b51b8;
  uStack_90 = 0;
  ppcStack_88 = (code **)0x0;
  uStack_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x6bf,&pcStack_a8);
  uStack_80 = uVar24;
  pcStack_a8 = thunk_FUN_1000b51b8;
  uStack_90 = 0;
  ppcStack_88 = (code **)0x0;
  uStack_98 = 0;
  ppcVar32 = &pcStack_a8;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x6bf,&pcStack_a8);
  uVar31 = (ulong)*puVar13;
  if (*puVar13 != 0) {
    uVar33 = 0;
    do {
      lVar37 = *(long *)(param_1[0xa65] + uVar33 * 8);
      if (lVar37 != 0) {
        uVar29 = FUN_10011fbe4(uVar33);
        FUN_1000b3f90(lVar37,uVar29);
        *(uint *)(lVar37 + 0x13c) = *(uint *)(lVar37 + 0x13c) | 0x10;
        (**(code **)(*(long *)(lVar37 + 0xb8) + 0x40))(0x41000000,(long *)(lVar37 + 0xb8));
        uStack_80 = uVar23;
        plVar35 = (long *)((ulong)plVar35 & 0xffffffff00000000 | uVar33);
        pcStack_a8 = FUN_1000b40e4;
        uStack_98 = 0;
        uStack_90 = 0;
        plStack_a0 = param_1;
        ppcStack_88 = (code **)plVar35;
        FUN_10001554c(lVar37 + 0xc0,&pcStack_a8);
        uStack_80 = uVar24;
        plVar34 = (long *)((ulong)plVar34 & 0xffffffff00000000 | uVar33);
        pcStack_a8 = FUN_1000b40e4;
        uStack_98 = 0;
        uStack_90 = 0;
        plStack_a0 = param_1;
        ppcStack_88 = (code **)plVar34;
        FUN_10001554c(lVar37 + 0xc0,&pcStack_a8);
        *(uint *)(lVar37 + 0x81c) = *(uint *)(lVar37 + 0x81c) | 0x10;
        (**(code **)(*(long *)(lVar37 + 0x798) + 0x40))(0x41000000);
        uStack_80 = uVar23;
        ppcVar32 = (code **)((ulong)ppcVar32 & 0xffffffff00000000 | uVar33);
        pcStack_a8 = FUN_1000b40e4;
        uStack_98 = 0;
        uStack_90 = 0;
        plStack_a0 = param_1;
        ppcStack_88 = ppcVar32;
        FUN_10001554c(lVar37 + 0x7a0,&pcStack_a8);
        uStack_80 = uVar24;
        plStack_b8 = (long *)((ulong)plStack_b8 & 0xffffffff00000000 | uVar33);
        pcStack_a8 = FUN_1000b40e4;
        uStack_98 = 0;
        uStack_90 = 0;
        plStack_a0 = param_1;
        ppcStack_88 = (code **)plStack_b8;
        FUN_10001554c(lVar37 + 0x7a0,&pcStack_a8);
        uVar31 = (ulong)*puVar13;
      }
      uVar33 = uVar33 + 1;
    } while (uVar33 < uVar31);
  }
  pcStack_a8 = (code *)CONCAT44(pcStack_a8._4_4_,0x3f800000);
  FUN_10012e9ac(0,&pcStack_a8,0,0,0,0,0,0);
  uVar31 = FUN_100147980();
  if ((uVar31 & 1) == 0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  FUN_1000b40ec(param_1,0);
  return param_1;
}




void FUN_1000b42ac(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000b42ac_101452ab8;
  if ((void *)param_1[0xa65] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xa64) = 0;
    operator_delete__((void *)param_1[0xa65]);
    param_1[0xa64] = 0;
    param_1[0xa65] = 0;
  }
  FUN_10003bd40(param_1 + 0x7ad);
  thunk_FUN_1000a88b4(param_1 + 0x78d);
  FUN_10064221c(param_1 + 0x77c);
  param_1[0x6be] = &PTR_FUN_10145f300;
  param_1[0x758] = &PTR_FUN_1014a7108;
  param_1[0x76f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x772);
  FUN_10064e2bc(param_1 + 0x758);
  param_1[0x73a] = &PTR_FUN_1014a7108;
  param_1[0x751] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x754);
  FUN_10064e2bc(param_1 + 0x73a);
  param_1[0x71c] = &PTR_FUN_1014a7108;
  param_1[0x733] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x736);
  FUN_10064e2bc(param_1 + 0x71c);
  FUN_10064221c(param_1 + 0x70b);
  FUN_10003bec8(param_1 + 0x6be);
  FUN_10003bd40(param_1 + 0x407);
  FUN_10064e2bc(param_1 + 0x3ee);
  thunk_FUN_100651068(param_1 + 0x3c8);
  FUN_10003bec8(param_1 + 0x37b);
  param_1[0x35d] = &PTR_FUN_1014a7108;
  param_1[0x374] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x377);
  FUN_10064e2bc(param_1 + 0x35d);
  param_1[0x33f] = &PTR_FUN_1014a7108;
  param_1[0x356] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x359);
  FUN_10064e2bc(param_1 + 0x33f);
  param_1[0x321] = &PTR_FUN_1014a7108;
  param_1[0x338] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x33b);
  FUN_10064e2bc(param_1 + 0x321);
  param_1[0x303] = &PTR_FUN_1014a7108;
  param_1[0x31a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31d);
  FUN_10064e2bc(param_1 + 0x303);
  thunk_FUN_100651068(param_1 + 0x2dd);
  thunk_FUN_10064e2bc(param_1 + 0x2c6);
  param_1[0x208] = &PTR_FUN_10145f300;
  param_1[0x2a2] = &PTR_FUN_1014a7108;
  param_1[0x2b9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 700);
  FUN_10064e2bc(param_1 + 0x2a2);
  param_1[0x284] = &PTR_FUN_1014a7108;
  param_1[0x29b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x29e);
  FUN_10064e2bc(param_1 + 0x284);
  param_1[0x266] = &PTR_FUN_1014a7108;
  param_1[0x27d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x280);
  FUN_10064e2bc(param_1 + 0x266);
  FUN_10064221c(param_1 + 0x255);
  FUN_10003bec8(param_1 + 0x208);
  param_1[0x14a] = &PTR_FUN_10145f300;
  param_1[0x1e4] = &PTR_FUN_1014a7108;
  param_1[0x1fb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1fe);
  FUN_10064e2bc(param_1 + 0x1e4);
  param_1[0x1c6] = &PTR_FUN_1014a7108;
  param_1[0x1dd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1e0);
  FUN_10064e2bc(param_1 + 0x1c6);
  param_1[0x1a8] = &PTR_FUN_1014a7108;
  param_1[0x1bf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1c2);
  FUN_10064e2bc(param_1 + 0x1a8);
  FUN_10064221c(param_1 + 0x197);
  FUN_10003bec8(param_1 + 0x14a);
  FUN_10064e2bc(param_1 + 0x131);
  FUN_10064221c(param_1 + 0x120);
  param_1[0x102] = &PTR_FUN_1014a7108;
  param_1[0x119] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x11c);
  FUN_10064e2bc(param_1 + 0x102);
  param_1[0xe4] = &PTR_FUN_1014a7108;
  param_1[0xfb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xfe);
  FUN_10064e2bc(param_1 + 0xe4);
  param_1[0xc6] = &PTR_FUN_1014a7108;
  param_1[0xdd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe0);
  FUN_10064e2bc(param_1 + 0xc6);
  FUN_10064221c(param_1 + 0xb5);
  param_1[0x97] = &PTR_FUN_1014a7108;
  param_1[0xae] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb1);
  FUN_10064e2bc(param_1 + 0x97);
  param_1[0x79] = &PTR_FUN_1014a7108;
  param_1[0x90] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x93);
  FUN_10064e2bc(param_1 + 0x79);
  param_1[0x5b] = &PTR_FUN_1014a7108;
  param_1[0x72] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x75);
  FUN_10064e2bc(param_1 + 0x5b);
  param_1[0x3d] = &PTR_FUN_1014a7108;
  param_1[0x54] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x57);
  FUN_10064e2bc(param_1 + 0x3d);
  FUN_10064221c(param_1 + 0x2c);
  if ((void *)param_1[0x2b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2b]);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
  }
  FUN_10064221c(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000b42ac(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000b42ac_101452ab8;
  if ((void *)param_1[0xa65] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xa64) = 0;
    operator_delete__((void *)param_1[0xa65]);
    param_1[0xa64] = 0;
    param_1[0xa65] = 0;
  }
  FUN_10003bd40(param_1 + 0x7ad);
  thunk_FUN_1000a88b4(param_1 + 0x78d);
  FUN_10064221c(param_1 + 0x77c);
  param_1[0x6be] = &PTR_FUN_10145f300;
  param_1[0x758] = &PTR_FUN_1014a7108;
  param_1[0x76f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x772);
  FUN_10064e2bc(param_1 + 0x758);
  param_1[0x73a] = &PTR_FUN_1014a7108;
  param_1[0x751] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x754);
  FUN_10064e2bc(param_1 + 0x73a);
  param_1[0x71c] = &PTR_FUN_1014a7108;
  param_1[0x733] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x736);
  FUN_10064e2bc(param_1 + 0x71c);
  FUN_10064221c(param_1 + 0x70b);
  FUN_10003bec8(param_1 + 0x6be);
  FUN_10003bd40(param_1 + 0x407);
  FUN_10064e2bc(param_1 + 0x3ee);
  thunk_FUN_100651068(param_1 + 0x3c8);
  FUN_10003bec8(param_1 + 0x37b);
  param_1[0x35d] = &PTR_FUN_1014a7108;
  param_1[0x374] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x377);
  FUN_10064e2bc(param_1 + 0x35d);
  param_1[0x33f] = &PTR_FUN_1014a7108;
  param_1[0x356] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x359);
  FUN_10064e2bc(param_1 + 0x33f);
  param_1[0x321] = &PTR_FUN_1014a7108;
  param_1[0x338] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x33b);
  FUN_10064e2bc(param_1 + 0x321);
  param_1[0x303] = &PTR_FUN_1014a7108;
  param_1[0x31a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31d);
  FUN_10064e2bc(param_1 + 0x303);
  thunk_FUN_100651068(param_1 + 0x2dd);
  thunk_FUN_10064e2bc(param_1 + 0x2c6);
  param_1[0x208] = &PTR_FUN_10145f300;
  param_1[0x2a2] = &PTR_FUN_1014a7108;
  param_1[0x2b9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 700);
  FUN_10064e2bc(param_1 + 0x2a2);
  param_1[0x284] = &PTR_FUN_1014a7108;
  param_1[0x29b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x29e);
  FUN_10064e2bc(param_1 + 0x284);
  param_1[0x266] = &PTR_FUN_1014a7108;
  param_1[0x27d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x280);
  FUN_10064e2bc(param_1 + 0x266);
  FUN_10064221c(param_1 + 0x255);
  FUN_10003bec8(param_1 + 0x208);
  param_1[0x14a] = &PTR_FUN_10145f300;
  param_1[0x1e4] = &PTR_FUN_1014a7108;
  param_1[0x1fb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1fe);
  FUN_10064e2bc(param_1 + 0x1e4);
  param_1[0x1c6] = &PTR_FUN_1014a7108;
  param_1[0x1dd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1e0);
  FUN_10064e2bc(param_1 + 0x1c6);
  param_1[0x1a8] = &PTR_FUN_1014a7108;
  param_1[0x1bf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1c2);
  FUN_10064e2bc(param_1 + 0x1a8);
  FUN_10064221c(param_1 + 0x197);
  FUN_10003bec8(param_1 + 0x14a);
  FUN_10064e2bc(param_1 + 0x131);
  FUN_10064221c(param_1 + 0x120);
  param_1[0x102] = &PTR_FUN_1014a7108;
  param_1[0x119] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x11c);
  FUN_10064e2bc(param_1 + 0x102);
  param_1[0xe4] = &PTR_FUN_1014a7108;
  param_1[0xfb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xfe);
  FUN_10064e2bc(param_1 + 0xe4);
  param_1[0xc6] = &PTR_FUN_1014a7108;
  param_1[0xdd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe0);
  FUN_10064e2bc(param_1 + 0xc6);
  FUN_10064221c(param_1 + 0xb5);
  param_1[0x97] = &PTR_FUN_1014a7108;
  param_1[0xae] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb1);
  FUN_10064e2bc(param_1 + 0x97);
  param_1[0x79] = &PTR_FUN_1014a7108;
  param_1[0x90] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x93);
  FUN_10064e2bc(param_1 + 0x79);
  param_1[0x5b] = &PTR_FUN_1014a7108;
  param_1[0x72] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x75);
  FUN_10064e2bc(param_1 + 0x5b);
  param_1[0x3d] = &PTR_FUN_1014a7108;
  param_1[0x54] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x57);
  FUN_10064e2bc(param_1 + 0x3d);
  FUN_10064221c(param_1 + 0x2c);
  if ((void *)param_1[0x2b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2b]);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
  }
  FUN_10064221c(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000b46a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000b42ac();
  operator_delete(pvVar1);
  return;
}




void FUN_1000b46b4(long param_1)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float local_70;
  float local_6c;
  float local_68 [3];
  float local_5c;
  undefined8 local_58;
  
  FUN_1000320fc();
  fVar6 = (float)FUN_100032244();
  fVar7 = (float)FUN_10011f1d0();
  lVar1 = param_1 + 0x150;
  if (*(char *)(param_1 + 0x5334) == '\0') {
    FUN_100346804();
  }
  FUN_1004e38ac(lVar1,"%.1gx");
  FUN_1006513c0(param_1 + 0x16e8,lVar1);
  if (*(char *)(param_1 + 0x5335) != '\0') {
    iVar2 = FUN_10109c574();
    if (iVar2 == 0) {
      uVar4 = FUN_10109c4f0();
      if ((uVar4 & 1) != 0) goto LAB_1000b4830;
    }
    else {
      iVar2 = FUN_10109c588();
      if (iVar2 != 0) {
        puVar3 = (uint *)FUN_10109c59c(0);
        if ((0xf < (int)*puVar3) && ((*puVar3 & 1) != 0)) goto LAB_1000b4830;
      }
    }
    local_58 = 0;
    iVar2 = FUN_10109c574();
    if (iVar2 == 0) {
      FUN_10109c550((long)&local_58 + 4,&local_58,0,0);
      FUN_100641518(local_68,(ulong)local_68 | 4);
      fVar8 = local_58._4_4_ / local_68[0];
      local_58 = CONCAT44(fVar8,(undefined4)local_58);
    }
    else {
      lVar5 = FUN_10109c59c(0);
      FUN_100641518(local_68,&local_5c);
      fVar8 = *(float *)(lVar5 + 4) / local_68[0];
      local_58 = CONCAT44(fVar8,*(float *)(lVar5 + 8) / local_5c);
    }
    fVar10 = *(float *)(param_1 + 0x670);
    uVar9 = FUN_100652e60(param_1 + 0x630);
    fVar8 = (float)NEON_fminnm(fVar8 - fVar10,uVar9);
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    local_58 = CONCAT44(fVar8,(undefined4)local_58);
    fVar10 = (float)FUN_100652e60(param_1 + 0x630);
    *(undefined1 *)(param_1 + 0x5335) = 0;
    FUN_1000b52f4(param_1);
    FUN_1001148bc();
    FUN_1001162f4((fVar8 * fVar7) / fVar10);
  }
LAB_1000b4830:
  FUN_100641464((long)&local_58 + 4,&local_58);
  if (*(char *)(param_1 + 0x5335) == '\0') {
    fVar8 = (float)FUN_100652e60(param_1 + 0x630);
    fVar7 = (fVar8 * fVar6) / fVar7;
    FUN_10064e47c(fVar7,0x41000000,param_1 + 0x720);
    fVar7 = fVar7 + *(float *)(param_1 + 0x760);
    if (*(float *)(param_1 + 0x850) != fVar7) {
      *(float *)(param_1 + 0x850) = fVar7;
      FUN_1000200a0(param_1 + 0x810);
    }
  }
  else {
    local_5c = 0.0;
    local_6c = 0.0;
    iVar2 = FUN_10109c574();
    if (iVar2 == 0) {
      FUN_10109c550(&local_5c,&local_6c,0,0);
      FUN_100641518(local_68,(ulong)local_68 | 4);
      local_5c = local_5c / local_68[0];
    }
    else {
      lVar5 = FUN_10109c59c(0);
      FUN_100641518(local_68,&local_70);
      local_5c = *(float *)(lVar5 + 4) / local_68[0];
      local_6c = *(float *)(lVar5 + 8) / local_70;
    }
    fVar6 = local_5c - *(float *)(param_1 + 0x670);
    uVar9 = FUN_100652e60(param_1 + 0x630);
    local_5c = (float)NEON_fminnm(fVar6,uVar9);
    if (local_5c <= 0.0) {
      local_5c = 0.0;
    }
    FUN_10064e47c(local_5c,0x41000000,param_1 + 0x720);
    fVar6 = *(float *)(param_1 + 0x760) + local_5c;
    if (*(float *)(param_1 + 0x850) != fVar6) {
      *(float *)(param_1 + 0x850) = fVar6;
      FUN_1000200a0(param_1 + 0x810);
    }
    FUN_100652e60(param_1 + 0x630);
  }
  FUN_1004e38ac(lVar1,"%d:%02d / %d:%02d");
  FUN_1006513c0(param_1 + 0x1e40,lVar1);
  return;
}




void FUN_1000b49f4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b49fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_1000b4a00(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
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
  undefined1 *local_68 [2];
  float local_58;
  float local_54;
  
  FUN_100641464(&local_54,&local_58);
  fVar8 = (float)FUN_100641440();
  fVar13 = fVar8 - local_54;
  fVar8 = fVar13 + fVar8;
  FUN_10064e47c(fVar8,local_58,param_1 + 0x1e8);
  lVar1 = param_1 + 0x2d8;
  FUN_10064e47c(fVar8,0x43860000,lVar1);
  lVar5 = param_1 + 0x3c8;
  uVar11 = FUN_100652e60(lVar1);
  FUN_10064e47c(uVar11,0x40000000,lVar5);
  lVar2 = param_1 + 0x4b8;
  FUN_10064e47c(fVar8,0x43480000,lVar2);
  fVar13 = -fVar13;
  fVar8 = *(float *)(param_1 + 0x318);
  bVar4 = false;
  if ((fVar8 == fVar13) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x31c)) && !NAN(local_58))) {
    bVar4 = *(float *)(param_1 + 0x31c) == local_58;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x318) = fVar13;
    *(float *)(param_1 + 0x31c) = local_58;
    FUN_1000200a0(lVar1);
  }
  local_68[0] = (undefined1 *)0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0x2d8) + 0x28))(lVar1,local_68);
  fVar9 = local_58;
  FUN_100652e60(lVar1);
  fVar9 = fVar9 - fVar8;
  fVar8 = *(float *)(param_1 + 0x408);
  bVar4 = false;
  if ((fVar8 == fVar13) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x40c)) && !NAN(fVar9))) {
    bVar4 = *(float *)(param_1 + 0x40c) == fVar9;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x408) = fVar13;
    *(float *)(param_1 + 0x40c) = fVar9;
    FUN_1000200a0(lVar5);
  }
  local_68[0] = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_1 + 0x3c8) + 0x28))(lVar5,local_68);
  fVar9 = local_58;
  FUN_100652e60(lVar1);
  fVar8 = (fVar9 - fVar8) + -2.0;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x4f8) == fVar13) &&
     (bVar4 = false, !NAN(*(float *)(param_1 + 0x4fc)) && !NAN(fVar8))) {
    bVar4 = *(float *)(param_1 + 0x4fc) == fVar8;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x4f8) = fVar13;
    *(float *)(param_1 + 0x4fc) = fVar8;
    FUN_1000200a0(lVar2);
  }
  local_68[0] = (undefined1 *)0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0x4b8) + 0x28))(lVar2,local_68);
  fVar8 = (float)FUN_100652e60(lVar1);
  fVar13 = (float)FUN_100652e60(lVar1);
  FUN_10064e47c(fVar13 - fVar8 * 0.05,0x41000000,param_1 + 0x630);
  fVar13 = fVar8 * 0.025;
  if (*(float *)(param_1 + 0x670) != fVar13) {
    *(float *)(param_1 + 0x670) = fVar13;
    FUN_1000200a0(param_1 + 0x630);
  }
  fVar9 = (float)FUN_100652e60(lVar1);
  FUN_10064e47c(fVar9 - fVar8 * 0.05,0x41000000,param_1 + 0x720);
  if (*(float *)(param_1 + 0x760) != fVar13) {
    *(float *)(param_1 + 0x760) = fVar13;
    FUN_1000200a0(param_1 + 0x720);
  }
  fVar8 = 50.0;
  FUN_10064e47c(param_1 + 0x810);
  if (*(float *)(param_1 + 0x850) != fVar13) {
    *(float *)(param_1 + 0x850) = fVar13;
    FUN_1000200a0(param_1 + 0x810);
  }
  fVar13 = local_58;
  FUN_100652e60(lVar1);
  fVar13 = fVar13 + fVar8 * -0.76;
  uVar12 = (ulong)(uint)*(float *)(param_1 + 0x5ec);
  if (*(float *)(param_1 + 0x5ec) != fVar13) {
    *(float *)(param_1 + 0x5ec) = fVar13;
    FUN_1000200a0(param_1 + 0x5a8);
  }
  fVar8 = (float)uVar12;
  uVar3 = *(uint *)(param_1 + 0x5320);
  uVar6 = (ulong)uVar3;
  if (uVar3 != 0) {
    uVar7 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x5328) + uVar7 * 8);
      if (lVar5 != 0) {
        uVar12 = (ulong)(uint)local_58;
        FUN_1000b4f0c(lVar5,param_1);
        uVar6 = (ulong)*(uint *)(param_1 + 0x5320);
      }
      fVar8 = (float)uVar12;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  fVar13 = local_58;
  fVar9 = local_54 * 0.5;
  FUN_100642888(param_1 + 0x3be0,1,0,1,1);
  fVar8 = (fVar13 - fVar8 * 0.5) + -16.0;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x3c20) == fVar9) &&
     (bVar4 = false, !NAN(*(float *)(param_1 + 0x3c24)) && !NAN(fVar8))) {
    bVar4 = *(float *)(param_1 + 0x3c24) == fVar8;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x3c20) = fVar9;
    *(float *)(param_1 + 0x3c24) = fVar8;
    FUN_1000200a0(param_1 + 0x3be0);
  }
  fVar13 = *(float *)(param_1 + 0x670);
  FUN_100651184(param_1 + 0x16e8);
  FUN_10064e47c(0x430c0000,param_1 + 0x1630);
  fVar8 = (float)FUN_10064e3cc(param_1 + 0x1630);
  if (*(float *)(param_1 + 0x1728) != fVar8 * 0.5) {
    *(float *)(param_1 + 0x1728) = fVar8 * 0.5;
    FUN_1000200a0(param_1 + 0x16e8);
  }
  lVar5 = param_1 + 0x988;
  FUN_10064fc74(fVar13 + -4.0,0,0x41a00000,local_68);
  FUN_100650064(lVar5,local_68);
  (**(code **)(*(long *)(param_1 + 0x988) + 0x90))(lVar5);
  lVar2 = param_1 + 0x1bd8;
  if ((*(float *)(param_1 + 0x1c18) != local_54 * 0.5) || (*(float *)(param_1 + 0x1c1c) != 0.0)) {
    *(float *)(param_1 + 0x1c18) = local_54 * 0.5;
    *(undefined4 *)(param_1 + 0x1c1c) = 0;
    FUN_1000200a0(lVar2);
  }
  local_68[0] = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1bd8) + 0x28))(lVar2,local_68);
  fVar14 = *(float *)(param_1 + 0x1c18);
  fVar8 = (float)FUN_100642888(lVar2,1,0,1,1);
  fVar16 = *(float *)(param_1 + 0x9c8);
  fVar9 = (float)FUN_10064e3cc(lVar5);
  fVar15 = *(float *)(param_1 + 0x9c8);
  fVar10 = (float)FUN_10064e3cc(lVar5);
  fVar8 = fVar10 + fVar15 + ((fVar14 + fVar8 * -0.5) - (fVar16 + fVar9)) * 0.5;
  if ((*(float *)(param_1 + 0x1e80) != fVar8) || (*(float *)(param_1 + 0x1e84) != 0.0)) {
    *(float *)(param_1 + 0x1e80) = fVar8;
    *(undefined4 *)(param_1 + 0x1e84) = 0;
    FUN_1000200a0(param_1 + 0x1e40);
  }
  local_68[0] = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1e40) + 0x28))(param_1 + 0x1e40,local_68);
  fVar8 = 1.0;
  FUN_10064fc74(local_54 - fVar13,0x3f800000,0x41a00000,local_68);
  FUN_100650064(param_1 + 0x1f70,local_68);
  (**(code **)(*(long *)(param_1 + 0x1f70) + 0x90))(param_1 + 0x1f70);
  FUN_100652e60(lVar1);
  local_58 = local_58 + fVar8 * -0.4;
  if (*(float *)(param_1 + 0x944) != local_58) {
    *(float *)(param_1 + 0x944) = local_58;
    FUN_1000200a0(param_1 + 0x900);
  }
  return;
}




void FUN_1000b4f0c(undefined1 param_1 [16],float param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 local_58;
  
  fVar7 = param_2;
  fVar5 = (float)FUN_10011f1d0();
  fVar9 = *(float *)(param_3 + 0x888);
  fVar10 = *(float *)(param_4 + 0x760);
  fVar6 = (float)FUN_100652e60(param_4 + 0x720);
  fVar10 = (fVar6 * fVar9) / fVar5 + fVar10;
  lVar1 = param_3 + 0x6a8;
  FUN_100652e60(param_4 + 0x2d8);
  fVar5 = fVar7;
  FUN_100652e60(lVar1);
  fVar7 = (param_2 - fVar5) + fVar7 * -0.76;
  fVar5 = *(float *)(param_3 + 0x6e8);
  bVar4 = false;
  if ((fVar5 == fVar10) && (bVar4 = false, !NAN(*(float *)(param_3 + 0x6ec)) && !NAN(fVar7))) {
    bVar4 = *(float *)(param_3 + 0x6ec) == fVar7;
  }
  if (!bVar4) {
    *(float *)(param_3 + 0x6e8) = fVar10;
    *(float *)(param_3 + 0x6ec) = fVar7;
    FUN_1000200a0(lVar1);
  }
  local_58 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_3 + 0x6a8) + 0x28))(lVar1,&local_58);
  lVar1 = param_3 + 0xb8;
  fVar7 = *(float *)(param_3 + 0x6ec);
  FUN_10064e3cc(lVar1);
  fVar7 = fVar7 + fVar5 * -0.5 + 8.0;
  fVar5 = *(float *)(param_3 + 0xf8);
  bVar4 = false;
  if ((fVar5 == fVar10) && (bVar4 = false, !NAN(*(float *)(param_3 + 0xfc)) && !NAN(fVar7))) {
    bVar4 = *(float *)(param_3 + 0xfc) == fVar7;
  }
  if (!bVar4) {
    *(float *)(param_3 + 0xf8) = fVar10;
    *(float *)(param_3 + 0xfc) = fVar7;
    FUN_1000200a0(lVar1);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0xb8) + 0x28))(lVar1,&local_58);
  plVar2 = (long *)(param_3 + 0x798);
  FUN_100652e60(param_4 + 0x2d8);
  param_2 = param_2 + fVar5 * -0.76;
  cVar3 = *(char *)(param_3 + 0x88c);
  bVar4 = false;
  if ((*(float *)(param_3 + 0x7d8) == fVar10) &&
     (bVar4 = false, !NAN(*(float *)(param_3 + 0x7dc)) && !NAN(param_2))) {
    bVar4 = *(float *)(param_3 + 0x7dc) == param_2;
  }
  if (!bVar4) {
    *(float *)(param_3 + 0x7d8) = fVar10;
    *(float *)(param_3 + 0x7dc) = param_2;
    FUN_1000200a0(plVar2);
  }
  uVar8 = 0x3f800000;
  if (cVar3 != '\x01') {
    uVar8 = 0;
  }
  local_58 = (undefined1 *)CONCAT44(uVar8,0x3f000000);
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_58);
  return;
}




undefined8 FUN_1000b50a8(void)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    uVar2 = 0;
  }
  else {
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    uVar2 = FUN_10063fb5c();
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  return uVar2;
}




void FUN_1000b5130(long param_1)

{
  float fVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  
  dVar4 = (double)FUN_100346804();
  if (*(char *)(param_1 + 0x5334) == '\0') {
    fVar3 = (float)dVar4;
  }
  else {
    *(undefined1 *)(param_1 + 0x5334) = 0;
    *(uint *)(param_1 + 0x1b6c) = *(uint *)(param_1 + 0x1b6c) & 0xfffffffb;
    *(uint *)(param_1 + 0x1a7c) = *(uint *)(param_1 + 0x1a7c) | 4;
    fVar3 = *(float *)(param_1 + 0x5330);
  }
  lVar2 = 0;
  do {
    fVar1 = *(float *)((long)&DAT_10114be70 + lVar2);
    if (fVar3 < *(float *)((long)&DAT_10114be70 + lVar2)) break;
    lVar2 = lVar2 + 4;
    fVar1 = fVar3;
  } while (lVar2 != 0x14);
  FUN_100346810((double)fVar1);
  return;
}




void FUN_1000b51b8(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  uVar1 = FUN_100063e10();
  if (1 < uVar1) {
    uVar1 = 2;
  }
  uVar3 = uVar1 + 1 & 0xff;
  uVar1 = (uVar1 + 1) - ((uVar3 / 3) * 2 + uVar3 / 3) & 0xff;
  if (uVar1 == 2) {
    lVar2 = FUN_100641574("plaques-all");
    if (lVar2 == 0) goto LAB_1000b5244;
    uVar3 = *(uint *)(lVar2 + 0x84) & 0xfffffffb;
  }
  else {
    if (((uVar1 != 1) && (uVar1 != 0)) || (lVar2 = FUN_100641574("plaques-all"), lVar2 == 0))
    goto LAB_1000b5244;
    uVar3 = *(uint *)(lVar2 + 0x84) | 4;
  }
  *(uint *)(lVar2 + 0x84) = uVar3;
LAB_1000b5244:
  FUN_100063e04(uVar1);
  return;
}




void FUN_1000b5254(long param_1)

{
  float *pfVar1;
  float fVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  
  dVar5 = (double)FUN_100346804();
  if (*(char *)(param_1 + 0x5334) == '\0') {
    fVar4 = (float)dVar5;
  }
  else {
    *(undefined1 *)(param_1 + 0x5334) = 0;
    *(uint *)(param_1 + 0x1b6c) = *(uint *)(param_1 + 0x1b6c) & 0xfffffffb;
    *(uint *)(param_1 + 0x1a7c) = *(uint *)(param_1 + 0x1a7c) | 4;
    fVar4 = *(float *)(param_1 + 0x5330);
  }
  fVar6 = fVar4;
  if (0.25 < fVar4) {
    lVar3 = 0;
    fVar2 = 0.25;
    do {
      fVar6 = fVar2;
      if (lVar3 == 0x10) break;
      pfVar1 = (float *)((long)&DAT_10114be74 + lVar3);
      lVar3 = lVar3 + 4;
      fVar2 = *pfVar1;
    } while (*pfVar1 < fVar4);
  }
  FUN_100346810((double)fVar6);
  return;
}




void FUN_1000b52f4(long param_1)

{
  if (*(char *)(param_1 + 0x5334) != '\0') {
    *(undefined1 *)(param_1 + 0x5334) = 0;
    *(uint *)(param_1 + 0x1b6c) = *(uint *)(param_1 + 0x1b6c) & 0xfffffffb;
    *(uint *)(param_1 + 0x1a7c) = *(uint *)(param_1 + 0x1a7c) | 4;
    FUN_100346810((double)*(float *)(param_1 + 0x5330));
    return;
  }
  return;
}




void FUN_1000b5334(long param_1)

{
  double dVar1;
  
  if (*(char *)(param_1 + 0x5334) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x5334) = 1;
  *(uint *)(param_1 + 0x1a7c) = *(uint *)(param_1 + 0x1a7c) & 0xfffffffb;
  *(uint *)(param_1 + 0x1b6c) = *(uint *)(param_1 + 0x1b6c) | 4;
  dVar1 = (double)FUN_100346804();
  *(float *)(param_1 + 0x5330) = (float)dVar1;
  FUN_100346810(0);
  return;
}




void FUN_1000b539c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1001148bc();
  FUN_100115ecc(uVar1,0);
  FUN_1000320fc();
  FUN_100033548();
  return;
}




void FUN_1000b53bc(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float local_48 [3];
  float local_3c;
  undefined8 local_38;
  
  fVar3 = (float)FUN_10011f1d0();
  local_38 = 0;
  iVar1 = FUN_10109c574();
  if (iVar1 == 0) {
    FUN_10109c550((long)&local_38 + 4,&local_38,0,0);
    FUN_100641518(local_48,(ulong)local_48 | 4);
    fVar4 = local_38._4_4_ / local_48[0];
    local_38 = CONCAT44(fVar4,(undefined4)local_38);
  }
  else {
    lVar2 = FUN_10109c59c(0);
    FUN_100641518(local_48,&local_3c);
    fVar4 = *(float *)(lVar2 + 4) / local_48[0];
    local_38 = CONCAT44(fVar4,*(float *)(lVar2 + 8) / local_3c);
  }
  fVar6 = *(float *)(param_1 + 0x670);
  uVar5 = FUN_100652e60(param_1 + 0x630);
  fVar4 = (float)NEON_fminnm(fVar4 - fVar6,uVar5);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  local_38 = CONCAT44(fVar4,(undefined4)local_38);
  fVar6 = (float)FUN_100652e60(param_1 + 0x630);
  *(undefined1 *)(param_1 + 0x5335) = 0;
  FUN_1000b52f4(param_1);
  FUN_1001148bc();
  FUN_1001162f4((fVar4 * fVar3) / fVar6);
  return;
}




void FUN_1000b54b4(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x5328) + (ulong)param_3 * 8);
  if (lVar1 != 0) {
    fVar2 = *(float *)(lVar1 + 0x888) + -5.0;
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    FUN_1001148bc();
    FUN_1001162f4(fVar2);
    return;
  }
  return;
}




long * FUN_1000b5500(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_thunk_FUN_1000b56ac_101452c20;
  puVar5 = puVar5 + 0x17;
  thunk_FUN_100183990(puVar5,1);
  plVar1 = param_1 + 0xd5;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0xf3;
  thunk_FUN_100652c08(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100183c50(0x3f4ccccd,puVar5,&DAT_10115a164);
  FUN_1001b495c(0xbf800000,puVar5);
  bVar4 = false;
  if ((*(float *)(param_1 + 0x21) == 0.5) &&
     (bVar4 = false, !NAN(*(float *)((long)param_1 + 0x10c)))) {
    bVar4 = *(float *)((long)param_1 + 0x10c) == 0.5;
  }
  if (!bVar4) {
    param_1[0x21] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar5);
  }
  uVar3 = *(uint *)((long)param_1 + 0x13c);
  if ((uVar3 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x13c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6600;
    FUN_1000200a0(puVar5);
  }
  FUN_100652cac(plVar1,PTR_s_build___Tutorial_Components_tga_10184e0c0,"vert_fade");
  *(byte *)(param_1 + 0xf0) = *(byte *)(param_1 + 0xf0) | 2;
  uVar3 = *(uint *)((long)param_1 + 0x72c);
  if ((uVar3 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x72c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x6600;
    FUN_1000200a0(plVar1);
  }
  FUN_10064e47c(0x40c00000,0x42480000,plVar1);
  FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"hud_replay_kill");
  *(uint *)((long)param_1 + 0x81c) = *(uint *)((long)param_1 + 0x81c) & 0xfffffffb;
  return param_1;
}




void FUN_1000b56ac(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000b56ac_101452c20;
  param_1[0xf3] = &PTR_FUN_1014a7108;
  param_1[0x10a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x10d);
  FUN_10064e2bc(param_1 + 0xf3);
  param_1[0xd5] = &PTR_FUN_1014a7108;
  param_1[0xec] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xef);
  FUN_10064e2bc(param_1 + 0xd5);
  param_1[0x17] = &PTR_FUN_10145f300;
  param_1[0xb1] = &PTR_FUN_1014a7108;
  param_1[200] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xcb);
  FUN_10064e2bc(param_1 + 0xb1);
  param_1[0x93] = &PTR_FUN_1014a7108;
  param_1[0xaa] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xad);
  FUN_10064e2bc(param_1 + 0x93);
  param_1[0x75] = &PTR_FUN_1014a7108;
  param_1[0x8c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8f);
  FUN_10064e2bc(param_1 + 0x75);
  FUN_10064221c(param_1 + 100);
  FUN_10003bec8(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000b56ac(void)

{
  FUN_1000b56ac();
  return;
}




void FUN_1000b57ac(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000b56ac();
  operator_delete(pvVar1);
  return;
}




void FUN_1000b57c0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1000b583c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_1010a0298(param_1,DAT_10184e140);
  if (lVar1 != 0) {
    if (*(float *)(param_2 + 0xac) == -1.0) {
      FUN_100474344(param_1);
    }
    FUN_1000b58b0(lVar1,param_2,param_3);
    return;
  }
  return;
}




void FUN_1000b58b0(undefined4 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  char cVar12;
  char *pcVar13;
  undefined8 uVar14;
  uint uVar15;
  uint local_c0 [2];
  uint local_b8 [2];
  uint local_b0 [2];
  uint local_a8 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *(undefined1 *)(param_2 + 0x90) = *(undefined1 *)(param_3 + 0x16);
  *(undefined4 *)(param_2 + 0x8c) = param_1;
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = FUN_100474a6c(uVar14);
  iVar1 = FUN_100474ae4(uVar14);
  if (((uVar5 & 1) == 0) && (iVar1 == 0)) {
    return;
  }
  uVar15 = 0x811c9dc5;
  FUN_10034ee90();
  iVar1 = FUN_10034e738();
  iVar2 = FUN_1004747c8(uVar14);
  puVar6 = (undefined8 *)FUN_1003e113c(uVar14);
  uStack_78 = puVar6[5];
  local_80 = puVar6[4];
  uStack_68 = puVar6[7];
  uStack_70 = puVar6[6];
  uStack_98 = puVar6[1];
  local_a0 = *puVar6;
  uStack_88 = puVar6[3];
  uStack_90 = puVar6[2];
  if (((iVar1 == iVar2) || (pcVar13 = (char *)param_3[1], pcVar13 == (char *)0x0)) &&
     (pcVar13 = (char *)*param_3, pcVar13 == (char *)0x0)) {
    local_a8[0] = 0;
  }
  else {
    cVar12 = *pcVar13;
    local_a8[0] = 0x811c9dc5;
    if (cVar12 != '\0') {
      local_a8[0] = 0x811c9dc5;
      do {
        pcVar13 = pcVar13 + 1;
        local_a8[0] = (local_a8[0] ^ (int)cVar12) * 0x1000193;
        cVar12 = *pcVar13;
      } while (cVar12 != '\0');
    }
  }
  if (local_a8[0] != 0x811c9dc5 && local_a8[0] != 0) {
    if (param_4 != (long *)0x0) {
      local_a8[0] = (**(code **)(*param_4 + 8))(param_4,local_a8[0]);
    }
    FUN_1000b5ef4(param_2,(long *)(param_2 + 0x28),local_a8,&local_a0,(long)param_3 + 0xa4);
    plVar7 = *(long **)(param_2 + 0x28);
    if (plVar7 != (long *)0x0) {
      if (*(int *)(param_2 + 0x30) == (int)plVar7[1]) {
        lVar8 = (**(code **)(*plVar7 + 0x10))();
        if ((lVar8 != 0) && (lVar8 = param_3[0x11], lVar8 != 0)) {
          plVar7 = *(long **)(param_2 + 0x28);
          uVar9 = 0;
          if (plVar7 != (long *)0x0) {
            if (*(int *)(param_2 + 0x30) == (int)plVar7[1]) {
              uVar9 = (**(code **)(*plVar7 + 0x10))();
              lVar8 = param_3[0x11];
            }
            else {
              uVar9 = 0;
              *(undefined8 *)(param_2 + 0x28) = 0;
              *(undefined4 *)(param_2 + 0x30) = DAT_101dc0b88;
            }
          }
          FUN_100045be0(uVar9,lVar8,*(undefined4 *)(param_3 + 0x12),(long)param_3 + 0x94);
        }
      }
      else {
        *(undefined8 *)(param_2 + 0x28) = 0;
        *(undefined4 *)(param_2 + 0x30) = DAT_101dc0b88;
      }
    }
  }
  if (((iVar1 == iVar2) || (pcVar13 = (char *)param_3[3], pcVar13 == (char *)0x0)) &&
     (pcVar13 = (char *)param_3[2], pcVar13 == (char *)0x0)) {
    local_b0[0] = 0;
  }
  else {
    cVar12 = *pcVar13;
    local_b0[0] = 0x811c9dc5;
    if (cVar12 != '\0') {
      local_b0[0] = 0x811c9dc5;
      do {
        pcVar13 = pcVar13 + 1;
        local_b0[0] = (local_b0[0] ^ (int)cVar12) * 0x1000193;
        cVar12 = *pcVar13;
      } while (cVar12 != '\0');
    }
  }
  if (local_b0[0] != 0x811c9dc5 && local_b0[0] != 0) {
    if (param_4 != (long *)0x0) {
      local_b0[0] = (**(code **)(*param_4 + 8))(param_4,local_b0[0]);
    }
    FUN_1000b5ef4(param_2,param_2 + 0x38,local_b0,&local_a0,0);
  }
  if (((iVar1 == iVar2) || (pcVar13 = (char *)param_3[9], pcVar13 == (char *)0x0)) &&
     (pcVar13 = (char *)param_3[8], pcVar13 == (char *)0x0)) {
    local_b8[0] = 0;
  }
  else {
    cVar12 = *pcVar13;
    local_b8[0] = 0x811c9dc5;
    if (cVar12 != '\0') {
      local_b8[0] = 0x811c9dc5;
      do {
        pcVar13 = pcVar13 + 1;
        local_b8[0] = (local_b8[0] ^ (int)cVar12) * 0x1000193;
        cVar12 = *pcVar13;
      } while (cVar12 != '\0');
    }
  }
  if (local_b8[0] == 0x811c9dc5 || local_b8[0] == 0) goto LAB_1000b5d48;
  if (param_4 != (long *)0x0) {
    local_b8[0] = (**(code **)(*param_4 + 8))(param_4,local_b8[0]);
  }
  plVar7 = (long *)(param_2 + 0x68);
  FUN_1000b5ef4(param_2,plVar7,local_b8,&local_a0,0);
  plVar10 = *(long **)(param_2 + 0x68);
  if (plVar10 == (long *)0x0) goto LAB_1000b5d48;
  if (*(int *)(param_2 + 0x70) != (int)plVar10[1]) {
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined4 *)(param_2 + 0x70) = DAT_101dc0b88;
    goto LAB_1000b5d48;
  }
  lVar8 = (**(code **)(*plVar10 + 0x10))();
  if (lVar8 == 0) goto LAB_1000b5d48;
  if (*(char *)((long)param_3 + 0xb1) == '\0') {
    uVar14 = FUN_1004744e4(uVar14);
  }
  else {
    uVar14 = FUN_1004745f4(uVar14);
  }
  pcVar13 = (char *)param_3[10];
  if (pcVar13 == (char *)0x0) {
    lVar8 = param_3[0xb];
    if (lVar8 != 0) {
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        uVar9 = 0;
      }
      else if (*(int *)(param_2 + 0x70) == (int)plVar7[1]) {
        uVar9 = (**(code **)(*plVar7 + 0x10))();
        lVar8 = param_3[0xb];
      }
      else {
        uVar9 = 0;
        *(undefined8 *)(param_2 + 0x68) = 0;
        *(undefined4 *)(param_2 + 0x70) = DAT_101dc0b88;
      }
      FUN_100448e2c(uVar14,lVar8);
      uVar11 = FUN_1010acd98();
      FUN_100045a68(uVar9,uVar14,uVar11);
    }
    goto LAB_1000b5d48;
  }
  plVar7 = (long *)*plVar7;
  if (plVar7 == (long *)0x0) {
LAB_1000b5cc0:
    uVar9 = 0;
LAB_1000b5cc4:
    cVar12 = *pcVar13;
    if (cVar12 == '\0') {
      local_c0[0] = 0x811c9dc5;
    }
    else {
      local_c0[0] = 0x811c9dc5;
      do {
        pcVar13 = pcVar13 + 1;
        local_c0[0] = (local_c0[0] ^ (int)cVar12) * 0x1000193;
        cVar12 = *pcVar13;
      } while (cVar12 != '\0');
    }
  }
  else {
    if (*(int *)(param_2 + 0x70) != (int)plVar7[1]) {
      *(undefined8 *)(param_2 + 0x68) = 0;
      *(undefined4 *)(param_2 + 0x70) = DAT_101dc0b88;
      goto LAB_1000b5cc0;
    }
    uVar9 = (**(code **)(*plVar7 + 0x10))();
    pcVar13 = (char *)param_3[10];
    if (pcVar13 != (char *)0x0) goto LAB_1000b5cc4;
    local_c0[0] = 0;
  }
  FUN_100045a88(uVar9,uVar14,local_c0);
LAB_1000b5d48:
  uStack_70 = CONCAT44(0x3c23d70a,(undefined4)uStack_70);
  if (((iVar1 == iVar2) || (pcVar13 = (char *)param_3[7], pcVar13 == (char *)0x0)) &&
     (pcVar13 = (char *)param_3[6], pcVar13 == (char *)0x0)) {
    local_c0[0] = 0;
  }
  else {
    cVar12 = *pcVar13;
    local_c0[0] = 0x811c9dc5;
    if (cVar12 != '\0') {
      local_c0[0] = 0x811c9dc5;
      do {
        pcVar13 = pcVar13 + 1;
        local_c0[0] = (local_c0[0] ^ (int)cVar12) * 0x1000193;
        cVar12 = *pcVar13;
      } while (cVar12 != '\0');
    }
  }
  if (local_c0[0] != 0x811c9dc5 && local_c0[0] != 0) {
    if (param_4 != (long *)0x0) {
      local_c0[0] = (**(code **)(*param_4 + 8))(param_4,local_c0[0]);
    }
    FUN_1000b5ef4(param_2,param_2 + 0x58,local_c0,&local_a0,0);
  }
  if (((iVar1 == iVar2) || (pcVar13 = (char *)param_3[5], pcVar13 == (char *)0x0)) &&
     (pcVar13 = (char *)param_3[4], pcVar13 == (char *)0x0)) {
    uVar15 = 0;
  }
  else {
    cVar12 = *pcVar13;
    while (cVar12 != '\0') {
      pcVar13 = pcVar13 + 1;
      uVar15 = (uVar15 ^ (int)cVar12) * 0x1000193;
      cVar12 = *pcVar13;
    }
  }
  *(uint *)(param_2 + 0x78) = uVar15;
  if ((uVar15 != 0x811c9dc5 && uVar15 != 0) && param_4 != (long *)0x0) {
    uVar3 = (**(code **)(*param_4 + 8))(param_4,uVar15);
    *(undefined4 *)(param_2 + 0x78) = uVar3;
  }
  lVar8 = 0;
  iVar1 = 0;
  do {
    if (*(long *)((long)param_3 + lVar8 + 0x60) != 0) {
      iVar1 = iVar1 + 1;
    }
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0x28);
  if (iVar1 != 0) {
    iVar4 = _rand();
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = iVar4 / iVar1;
    }
    uVar14 = param_3[(long)(iVar4 - iVar2 * iVar1) + 0xc];
    if (param_4 != (long *)0x0) {
      uVar14 = (**(code **)(*param_4 + 0x10))(param_4);
    }
    *(undefined8 *)(param_2 + 0x80) = uVar14;
    *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_3 + 0x15);
  }
  return;
}




void FUN_1000b5ef4(long param_1,long *param_2,int *param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*param_3 == -0x7ee3623b || *param_3 == 0) {
    plVar2 = (long *)*param_2;
  }
  else {
    lVar3 = FUN_1010a1540(DAT_10184dad8,0);
    plVar2 = (long *)0x0;
    if (lVar3 != 0) {
      plVar2 = (long *)(lVar3 + 0x40);
    }
    plVar1 = (long *)&DAT_101dc0b88;
    if (lVar3 != 0) {
      plVar1 = plVar2 + 1;
    }
    lVar3 = *plVar1;
    *param_2 = (long)plVar2;
    *(int *)(param_2 + 1) = (int)lVar3;
  }
  if (plVar2 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = (long *)*param_2;
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if ((int)param_2[1] == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar4 = 0;
            *param_2 = 0;
            *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
          }
        }
        FUN_100045334(uVar4,param_3);
        plVar2 = (long *)*param_2;
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if ((int)param_2[1] == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar4 = 0;
            *param_2 = 0;
            *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
          }
        }
        FUN_100045474(uVar4,param_4);
        if (param_5 != 0) {
          plVar2 = (long *)*param_2;
          uVar4 = 0;
          if (plVar2 != (long *)0x0) {
            if ((int)param_2[1] == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              uVar4 = 0;
              *param_2 = 0;
              *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
            }
          }
          FUN_100045bc0(uVar4,param_5);
        }
        plVar2 = (long *)*param_2;
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if ((int)param_2[1] == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar4 = 0;
            *param_2 = 0;
            *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
          }
        }
        FUN_100045bcc(*(undefined4 *)(param_1 + 0x8c),uVar4);
        plVar2 = (long *)*param_2;
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if ((int)param_2[1] == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar4 = 0;
            *param_2 = 0;
            *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
          }
        }
        FUN_1000453bc(uVar4);
        return;
      }
    }
    else {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1000b614c(long param_1,undefined8 param_2)

{
  FUN_100045400(0,param_2);
  if (*(char *)(param_1 + 0x90) != '\0') {
    FUN_1000453f0(param_2);
    return;
  }
  FUN_1000453cc(param_2);
  return;
}




void FUN_1000b6194(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_thunk_FUN_1000b6194_101452d68;
  plVar1 = (long *)param_1[5];
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 6) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) goto LAB_1000b621c;
      uVar3 = (**(code **)(*(long *)param_1[5] + 0x10))();
      FUN_1000b614c(param_1,uVar3);
      uVar4 = DAT_101dc0b88;
      param_1[5] = 0;
    }
    else {
      param_1[5] = 0;
      uVar4 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 6) = uVar4;
  }
LAB_1000b621c:
  plVar1 = (long *)param_1[7];
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 8) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) goto LAB_1000b6288;
      uVar3 = (**(code **)(*(long *)param_1[7] + 0x10))();
      FUN_1000b614c(param_1,uVar3);
      uVar4 = DAT_101dc0b88;
      param_1[7] = 0;
    }
    else {
      param_1[7] = 0;
      uVar4 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 8) = uVar4;
  }
LAB_1000b6288:
  plVar1 = (long *)param_1[9];
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 10) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) goto LAB_1000b62f4;
      uVar3 = (**(code **)(*(long *)param_1[9] + 0x10))();
      FUN_1000b614c(param_1,uVar3);
      uVar4 = DAT_101dc0b88;
      param_1[9] = 0;
    }
    else {
      param_1[9] = 0;
      uVar4 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 10) = uVar4;
  }
LAB_1000b62f4:
  plVar1 = (long *)param_1[0xd];
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xe) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) goto LAB_1000b6360;
      uVar3 = (**(code **)(*(long *)param_1[0xd] + 0x10))();
      FUN_1000b614c(param_1,uVar3);
      uVar4 = DAT_101dc0b88;
      param_1[0xd] = 0;
    }
    else {
      param_1[0xd] = 0;
      uVar4 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 0xe) = uVar4;
  }
LAB_1000b6360:
  plVar1 = (long *)param_1[0xb];
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xc) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) goto LAB_1000b63cc;
      uVar3 = (**(code **)(*(long *)param_1[0xb] + 0x10))();
      FUN_1000b614c(param_1,uVar3);
      uVar4 = DAT_101dc0b88;
      param_1[0xb] = 0;
    }
    else {
      param_1[0xb] = 0;
      uVar4 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 0xc) = uVar4;
  }
LAB_1000b63cc:
  FUN_1010a0064(param_1);
  return;
}




void thunk_FUN_1000b6194(void)

{
  FUN_1000b6194();
  return;
}




void FUN_1000b63e0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000b6194();
  operator_delete(pvVar1);
  return;
}




void FUN_1000b63f4(long param_1)

{
  long lVar1;
  
  DAT_10184e140 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_10184e140 + 1;
  lVar1 = param_1 + (ulong)DAT_10184e140 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_1000b6bc4;
  *(code **)(lVar1 + 0xb8) = FUN_1000b6c14;
  *(uint *)(lVar1 + 0xa4) = DAT_10184e140;
  *(undefined4 *)(lVar1 + 0xa8) = 0x98;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x80;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_1010a0944(param_1,4,FUN_1000b6494,0);
  FUN_1010a0990(param_1,0x2ffd05a3,FUN_1000b678c,0);
  return;
}




void FUN_1000b6494(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = (undefined8 *)FUN_1003e113c(uVar5);
  uVar7 = *(undefined4 *)(puVar1 + 6);
  uVar6 = *(undefined4 *)(puVar1 + 7);
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x28);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x30) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar4 = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
          }
        }
        FUN_100045474(uVar4,puVar1);
        plVar2 = *(long **)(param_1 + 0x28);
        if (plVar2 == (long *)0x0) {
          uVar4 = 0;
        }
        else if (*(int *)(param_1 + 0x30) == (int)plVar2[1]) {
          uVar4 = (**(code **)(*plVar2 + 0x10))();
        }
        else {
          uVar4 = 0;
          *(undefined8 *)(param_1 + 0x28) = 0;
          *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
        }
        if (*(float *)(param_1 + 0x8c) < 0.0) {
          FUN_100474344(uVar5);
        }
        FUN_100045bcc(uVar4);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_101dc0b88;
    }
  }
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x40) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x38);
        uVar5 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x40) == (int)plVar2[1]) {
            uVar5 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar5 = 0;
            *(undefined8 *)(param_1 + 0x38) = 0;
            *(undefined4 *)(param_1 + 0x40) = DAT_101dc0b88;
          }
        }
        FUN_100045474(uVar5,puVar1);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = DAT_101dc0b88;
    }
  }
  plVar2 = *(long **)(param_1 + 0x68);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x70) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x68);
        uVar5 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x70) == (int)plVar2[1]) {
            uVar5 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar5 = 0;
            *(undefined8 *)(param_1 + 0x68) = 0;
            *(undefined4 *)(param_1 + 0x70) = DAT_101dc0b88;
          }
        }
        FUN_100045474(uVar5,puVar1);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x70) = DAT_101dc0b88;
    }
  }
  plVar2 = *(long **)(param_1 + 0x58);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x60) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        uStack_78 = puVar1[1];
        local_80 = *puVar1;
        uStack_68 = puVar1[3];
        uStack_70 = puVar1[2];
        uStack_58 = puVar1[5];
        local_60 = puVar1[4];
        _local_50 = CONCAT44(0x3c23d70a,uVar7);
        _local_48 = CONCAT44((int)((ulong)puVar1[7] >> 0x20),uVar6);
        plVar2 = *(long **)(param_1 + 0x58);
        uVar5 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0x60) == (int)plVar2[1]) {
            uVar5 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar5 = 0;
            *(undefined8 *)(param_1 + 0x58) = 0;
            *(undefined4 *)(param_1 + 0x60) = DAT_101dc0b88;
          }
        }
        FUN_100045474(uVar5,&local_80);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1000b678c(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_1000b67b8(param_1,in_stack_00000000);
  return;
}




void FUN_1000b67b8(long param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 == 0) goto LAB_1000b6840;
      uVar4 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
      FUN_1000b614c(param_1,uVar4);
      uVar7 = DAT_101dc0b88;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      uVar7 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 0x30) = uVar7;
  }
LAB_1000b6840:
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x40) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 == 0) goto LAB_1000b68ac;
      uVar4 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
      FUN_1000b614c(param_1,uVar4);
      uVar7 = DAT_101dc0b88;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x38) = 0;
      uVar7 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 0x40) = uVar7;
  }
LAB_1000b68ac:
  plVar2 = *(long **)(param_1 + 0x68);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x70) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 == 0) goto LAB_1000b6918;
      uVar4 = (**(code **)(**(long **)(param_1 + 0x68) + 0x10))();
      FUN_1000b614c(param_1,uVar4);
      uVar7 = DAT_101dc0b88;
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x68) = 0;
      uVar7 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 0x70) = uVar7;
  }
LAB_1000b6918:
  plVar2 = *(long **)(param_1 + 0x58);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x60) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 == 0) goto LAB_1000b6984;
      uVar4 = (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
      FUN_1000b614c(param_1,uVar4);
      uVar7 = DAT_101dc0b88;
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = 0;
      uVar7 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar7;
  }
LAB_1000b6984:
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = FUN_100474a6c(uVar4);
  iVar1 = FUN_100474ae4(uVar4);
  if (((uVar5 & 1) == 0) && (iVar1 == 0)) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 != -0x7ee3623b && iVar1 != 0) {
    uStack_68 = param_2[1];
    local_70 = *param_2;
    local_58 = param_2[3];
    local_60 = param_2[2];
    uStack_48 = param_2[5];
    uVar4 = param_2[4];
    uStack_38 = param_2[7];
    uStack_40 = param_2[6];
    local_50._0_4_ = (float)uVar4;
    local_50._4_4_ = (float)((ulong)uVar4 >> 0x20);
    fVar8 = (float)uStack_48 * 1.0 - local_50._4_4_ * 0.0;
    fVar9 = (float)local_50 * 0.0 - (float)uStack_48 * 0.0;
    fVar10 = local_50._4_4_ * 0.0 - (float)local_50 * 1.0;
    fVar11 = fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9;
    local_50 = uVar4;
    if (0.001 < fVar11) {
      fVar11 = 1.0 / SQRT(fVar11);
      fVar8 = fVar8 * fVar11;
      fVar9 = fVar9 * fVar11;
      fVar10 = fVar10 * fVar11;
      fVar12 = fVar9 * 0.0 - fVar10 * 1.0;
      fVar13 = fVar10 * 0.0 - fVar8 * 0.0;
      fVar11 = fVar8 * 1.0 - fVar9 * 0.0;
      fVar14 = fVar12 * fVar12 + fVar13 * fVar13 + fVar11 * fVar11;
      if (0.001 < fVar14) {
        fVar14 = 1.0 / SQRT(fVar14);
        local_70 = CONCAT44(fVar9,fVar8);
        uStack_68._4_4_ = (undefined4)((ulong)uStack_68 >> 0x20);
        uStack_68 = CONCAT44(uStack_68._4_4_,fVar10);
        local_60 = 0x3f80000000000000;
        local_58 = local_58 & 0xffffffff00000000;
        local_50 = CONCAT44(fVar13 * fVar14,fVar12 * fVar14);
        uVar5 = (ulong)uStack_48 >> 0x20;
        uStack_48 = CONCAT44((int)uVar5,fVar11 * fVar14);
      }
    }
    plVar2 = (long *)(param_1 + 0x48);
    FUN_1000b5ef4(param_1,plVar2,(int *)(param_1 + 0x78),&local_70,0);
    plVar6 = *(long **)(param_1 + 0x48);
    if (plVar6 != (long *)0x0) {
      if (*(int *)(param_1 + 0x50) == (int)plVar6[1]) {
        lVar3 = (**(code **)(*plVar6 + 0x10))();
        if (lVar3 == 0) goto LAB_1000b6b4c;
        plVar6 = (long *)*plVar2;
        uVar4 = 0;
        if (plVar6 != (long *)0x0) {
          if (*(int *)(param_1 + 0x50) == (int)plVar6[1]) {
            uVar4 = (**(code **)(*plVar6 + 0x10))();
          }
          else {
            uVar4 = 0;
            *(undefined8 *)(param_1 + 0x48) = 0;
            *(undefined4 *)(param_1 + 0x50) = DAT_101dc0b88;
          }
        }
        FUN_100045400(0,uVar4);
        uVar7 = DAT_101dc0b88;
        *plVar2 = 0;
      }
      else {
        *plVar2 = 0;
        uVar7 = DAT_101dc0b88;
      }
      *(undefined4 *)(param_1 + 0x50) = uVar7;
    }
  }
LAB_1000b6b4c:
  if (*(long *)(param_1 + 0x80) != 0) {
    uVar4 = FUN_1000320fc();
    lVar3 = FUN_1010a0298(uVar4,DAT_10184dd58);
    if (lVar3 != 0) {
      local_70 = param_2[6];
      uStack_68 = CONCAT44(uStack_68._4_4_,*(undefined4 *)(param_2 + 7));
      FUN_10004bd34(*(undefined4 *)(param_1 + 0x88),lVar3,*(undefined8 *)(param_1 + 0x80),0,0,0,1,
                    0xffffffff);
      FUN_10004beac(lVar3,&local_70);
      FUN_10004bed4(lVar3);
    }
  }
  return;
}




void FUN_1000b6bc4(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_thunk_FUN_1000b6194_101452d68;
  param_1[5] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 6) = DAT_101dc0b88;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = uVar1;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = uVar1;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}




void FUN_1000b6c14(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b6c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_1000b6c20(void)

{
  if ((DAT_10184e148 & 1) == 0) {
    DAT_10184e140 = DAT_101872e38;
    DAT_10184e148 = 1;
  }
  return;
}




void FUN_1000b6c4c(void)

{
  if ((DAT_10184dae0 & 1) == 0) {
    DAT_10184dad8 = DAT_101872e38;
    DAT_10184dae0 = 1;
  }
  return;
}




void FUN_1000b6c78(void)

{
  if ((DAT_10184dd60 & 1) == 0) {
    DAT_10184dd58 = DAT_101872e38;
    DAT_10184dd60 = 1;
  }
  return;
}




void FUN_1000b6ca4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101452d98;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(byte *)((long)param_1 + 0x24) = *(byte *)((long)param_1 + 0x24) & 0xf0 | 4;
  return;
}




void FUN_1000b6cd0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_1000b6cd8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x20) = param_1;
  return;
}




void FUN_1000b6ce0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 8;
  return;
}




void FUN_1000b6cf4(long param_1)

{
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 1;
  return;
}




void FUN_1000b6d04(long param_1)

{
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xfb;
  return;
}




void FUN_1000b6d14(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  float fVar7;
  float local_44;
  
  if ((*(byte *)(param_1 + 0x24) >> 3 & 1) == 0) {
    plVar3 = *(long **)(param_2 + 0x18);
    while ((plVar3 != (long *)0x0 && (*(int *)(plVar3[1] + 0xa4) != DAT_10184db58))) {
      plVar3 = (long *)plVar3[4];
    }
    uVar4 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f;
    if (((int)uVar4 == 0x1f) || (*(short *)(param_2 + uVar4 * 0x38 + 0x90) != 2)) {
      pcVar6 = "AttackToIdle";
      pcVar5 = "AttackToIdle";
      if ((*(byte *)(param_2 + 0x303) & 1) == 0) goto LAB_1000b6e10;
      iVar2 = (**(code **)(*plVar3 + 0x88))(plVar3,"IdleCombat");
      pcVar5 = "AttackToIdleCombat";
    }
    else {
      pcVar6 = "MoveStartToMove";
      pcVar5 = pcVar6;
      if ((*(byte *)(param_2 + 0x303) & 1) == 0) goto LAB_1000b6e10;
      iVar2 = (**(code **)(*plVar3 + 0x88))(plVar3,"MoveCombat");
      pcVar5 = "MoveStartToMoveCombat";
    }
    if (iVar2 == 0) {
      pcVar5 = pcVar6;
    }
  }
  else {
    pcVar5 = *(char **)(param_1 + 0x10);
  }
LAB_1000b6e10:
  fVar7 = *(float *)(param_1 + 0x20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    local_44 = 1.0;
    (**(code **)(param_1 + 0x18))(0x3f800000,param_3,&local_44);
    fVar7 = fVar7 / local_44;
  }
  bVar1 = *(byte *)(param_1 + 0x24);
  if ((((bVar1 >> 1 & 1) != 0) ||
      (uVar4 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f, (int)uVar4 == 0x1f)) ||
     (1 < *(ushort *)(param_2 + uVar4 * 0x38 + 0x90) - 3)) {
    FUN_1003affd0(fVar7,param_2,*(undefined8 *)(param_1 + 8),bVar1 & 1,bVar1 >> 2 & 1,pcVar5);
  }
  return;
}




void FUN_1000b6ea0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101452de0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(byte *)((long)param_1 + 0x24) = *(byte *)((long)param_1 + 0x24) & 0xf0 | 4;
  return;
}




void FUN_1000b6ecc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_1000b6ed4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x20) = param_1;
  return;
}




void FUN_1000b6edc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 8;
  return;
}




void FUN_1000b6ef0(long param_1)

{
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 1;
  return;
}




void FUN_1000b6f00(long param_1)

{
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xfb;
  return;
}




void FUN_1000b6f10(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  float fVar7;
  float local_44;
  
  if ((*(byte *)(param_1 + 0x24) >> 3 & 1) == 0) {
    plVar3 = *(long **)(param_2 + 0x18);
    while ((plVar3 != (long *)0x0 && (*(int *)(plVar3[1] + 0xa4) != DAT_10184db58))) {
      plVar3 = (long *)plVar3[4];
    }
    uVar4 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f;
    if (((int)uVar4 == 0x1f) || (*(short *)(param_2 + uVar4 * 0x38 + 0x90) != 2)) {
      pcVar6 = "AttackToIdle";
      pcVar5 = "AttackToIdle";
      if ((*(byte *)(param_2 + 0x303) & 1) == 0) goto LAB_1000b700c;
      iVar2 = (**(code **)(*plVar3 + 0x88))(plVar3,"IdleCombat");
      pcVar5 = "AttackToIdleCombat";
    }
    else {
      pcVar6 = "MoveStartToMove";
      pcVar5 = pcVar6;
      if ((*(byte *)(param_2 + 0x303) & 1) == 0) goto LAB_1000b700c;
      iVar2 = (**(code **)(*plVar3 + 0x88))(plVar3,"MoveCombat");
      pcVar5 = "MoveStartToMoveCombat";
    }
    if (iVar2 == 0) {
      pcVar5 = pcVar6;
    }
  }
  else {
    pcVar5 = *(char **)(param_1 + 0x10);
  }
LAB_1000b700c:
  fVar7 = *(float *)(param_1 + 0x20);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    local_44 = 1.0;
    (**(code **)(param_1 + 0x18))(0x3f800000,param_3,&local_44);
    fVar7 = fVar7 / local_44;
  }
  bVar1 = *(byte *)(param_1 + 0x24);
  if ((((bVar1 >> 1 & 1) != 0) ||
      (uVar4 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f, (int)uVar4 == 0x1f)) ||
     (1 < *(ushort *)(param_2 + uVar4 * 0x38 + 0x90) - 3)) {
    FUN_1003affd0(fVar7,param_2,*(undefined8 *)(param_1 + 8),bVar1 & 1,bVar1 >> 2 & 1,pcVar5);
  }
  return;
}




long FUN_1000b709c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return param_1 + 0x18;
}




long FUN_1000b70ac(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return param_1 + 0x18;
}




void FUN_1000b70bc(long param_1)

{
  *(code **)(param_1 + 0x30) = FUN_1003a24a0;
                    /* WARNING: Could not recover jumptable at 0x0001000b70d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x30))();
  return;
}




void FUN_1000b70d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1003a2b6c(param_2);
  FUN_1000b6d14(param_1 + 0x18,uVar1,param_2);
  return;
}




void FUN_1000b7108(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10042e2a4(*param_2);
  FUN_1000b6f10(param_1 + 0x18,uVar1,param_2);
  return;
}




void FUN_1000b713c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101452e28;
  param_1[1] = 0;
  param_1[2] = &PTR_FUN_10144a728;
  param_1[3] = &PTR_FUN_101452de0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(byte *)((long)param_1 + 0x3c) = *(byte *)((long)param_1 + 0x3c) & 0xf0 | 4;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}




void FUN_1000b7188(long param_1)

{
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}




long FUN_1000b7194(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return param_1 + 0x18;
}




void FUN_1000b71a8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10042e2a4(*param_2);
  FUN_1000b6f10(param_1 + 0x18,uVar1,param_2);
  return;
}




void FUN_1000b71dc(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  
  if ((*(char *)(param_1 + 0x48) == '\0') || (fVar4 = (float)FUN_10042fc00(*param_2), 0.0 < fVar4))
  {
    lVar2 = FUN_10042e2a4(*param_2);
    for (lVar2 = *(long *)(lVar2 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184dc68) {
        iVar1 = FUN_10002a25c(lVar2,*(undefined8 *)(param_1 + 0x40));
        if (iVar1 == 0) {
          return;
        }
        uVar3 = FUN_10042e2a4(*param_2);
        FUN_1003affd0(0x3f800000,uVar3,"Idle",1,0,0);
        return;
      }
    }
  }
  return;
}




void FUN_1000b7280(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101452e78;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}




void FUN_1000b7294(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}




void FUN_1000b72a0(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 2;
  return;
}




void FUN_1000b72ac(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184db58) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  if (*(int *)(param_1 + 8) != 2) {
    if (*(int *)(param_1 + 8) != 1) {
      return;
    }
    FUN_1000251e8();
    return;
  }
  FUN_100025298();
  return;
}




void FUN_1000b72fc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10042e2a4(*param_2);
  FUN_1000b72ac(param_1 + 0x18,uVar1);
  return;
}




void FUN_1000b7328(void)

{
  return;
}




void FUN_1000b7330(void)

{
  return;
}




void FUN_1000b7338(void)

{
  return;
}




void FUN_1000b7344(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1003d21e8();
  operator_delete(pvVar1);
  return;
}




void FUN_1000b7358(void)

{
  return;
}




void FUN_1000b7360(void)

{
  return;
}




long FUN_1000b7368(long param_1)

{
  return param_1 + 0x18;
}




void FUN_1000b7370(void)

{
  if ((DAT_10184db60 & 1) == 0) {
    DAT_10184db58 = DAT_101872e38;
    DAT_10184db60 = 1;
  }
  return;
}




void FUN_1000b739c(void)

{
  if ((DAT_10184dc70 & 1) == 0) {
    DAT_10184dc68 = DAT_101872e38;
    DAT_10184dc70 = 1;
  }
  return;
}




void FUN_1000b73c8(undefined8 *param_1)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_101452f98;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 3) = DAT_101dc0b88;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = uVar1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}




void FUN_1000b73fc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_1000b7404(long param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}




void FUN_1000b7410(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  
  FUN_10042e2a4(*param_2);
  lVar4 = FUN_100465e48();
  if (lVar4 != 0) {
    lVar5 = FUN_10042e2a4(*param_2);
    for (lVar4 = *(long *)(lVar5 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_10184db58) {
        uVar6 = FUN_100345b94();
        lVar7 = FUN_10034c450(uVar6,*(undefined8 *)(param_1 + 0x30));
        if (lVar7 == 0) {
          return;
        }
        lVar7 = FUN_1000254d4(lVar4,lVar7);
        if (lVar7 == 0) {
          return;
        }
        lVar8 = FUN_1010a0298(lVar5,DAT_10184dd78);
        plVar9 = (long *)0x0;
        if (lVar8 != 0) {
          plVar9 = (long *)(lVar8 + 0x30);
        }
        plVar1 = (long *)&DAT_101dc0b88;
        if (lVar8 != 0) {
          plVar1 = plVar9 + 1;
        }
        lVar3 = *plVar1;
        *(long **)(param_1 + 0x10) = plVar9;
        *(int *)(param_1 + 0x18) = (int)lVar3;
        if (lVar8 == 0) {
          return;
        }
        if ((int)lVar3 != (int)plVar9[1]) {
          *(undefined8 *)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x18) = DAT_101dc0b88;
          return;
        }
        lVar8 = (**(code **)(*plVar9 + 0x10))();
        if (lVar8 == 0) {
          return;
        }
        plVar9 = *(long **)(param_1 + 0x10);
        uVar6 = 0;
        if (plVar9 != (long *)0x0) {
          if (*(int *)(param_1 + 0x18) == (int)plVar9[1]) {
            uVar6 = (**(code **)(*plVar9 + 0x10))();
          }
          else {
            uVar6 = 0;
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined4 *)(param_1 + 0x18) = DAT_101dc0b88;
          }
        }
        FUN_10002c480(uVar6,*(undefined8 *)(lVar7 + 0x40));
        plVar9 = *(long **)(param_1 + 0x10);
        uVar6 = 0;
        if (plVar9 != (long *)0x0) {
          if (*(int *)(param_1 + 0x18) == (int)plVar9[1]) {
            uVar6 = (**(code **)(*plVar9 + 0x10))();
          }
          else {
            uVar6 = 0;
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined4 *)(param_1 + 0x18) = DAT_101dc0b88;
          }
        }
        FUN_10002c4e0(uVar6,*(undefined8 *)(lVar7 + 0x48),lVar7 + 0x50);
        plVar9 = *(long **)(param_1 + 0x10);
        uVar6 = 0;
        if (plVar9 != (long *)0x0) {
          if (*(int *)(param_1 + 0x18) == (int)plVar9[1]) {
            uVar6 = (**(code **)(*plVar9 + 0x10))();
          }
          else {
            uVar6 = 0;
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined4 *)(param_1 + 0x18) = DAT_101dc0b88;
          }
        }
        FUN_10002c524(uVar6,lVar5 + 0x2fc);
        lVar5 = FUN_1010a0298(lVar5,DAT_10184dd88);
        plVar9 = (long *)0x0;
        if (lVar5 != 0) {
          plVar9 = (long *)(lVar5 + 0x28);
        }
        plVar1 = (long *)&DAT_101dc0b88;
        if (lVar5 != 0) {
          plVar1 = plVar9 + 1;
        }
        lVar8 = *plVar1;
        *(long **)(param_1 + 0x20) = plVar9;
        *(int *)(param_1 + 0x28) = (int)lVar8;
        if (lVar5 != 0) {
          if ((int)lVar8 == (int)plVar9[1]) {
            lVar5 = (**(code **)(*plVar9 + 0x10))();
            if (lVar5 != 0) {
              uVar10 = FUN_1004d2538(*(undefined8 *)(lVar7 + 0x10));
              if ((uVar10 & 1) == 0) {
                uVar10 = 0x811c9dc5;
                pcVar12 = *(char **)(lVar7 + 0x10);
                cVar2 = *pcVar12;
                while (cVar2 != '\0') {
                  pcVar12 = pcVar12 + 1;
                  uVar10 = (ulong)(((uint)uVar10 ^ (int)cVar2) * 0x1000193);
                  cVar2 = *pcVar12;
                }
                uVar6 = 2;
              }
              else {
                uVar10 = FUN_1004d2538(*(undefined8 *)(lVar7 + 8));
                if ((uVar10 & 1) == 0) {
                  uVar10 = FUN_1010acd98(*(undefined8 *)(lVar7 + 8));
                  uVar6 = 3;
                }
                else {
                  uVar10 = 0;
                  uVar6 = 1;
                }
              }
              plVar9 = *(long **)(param_1 + 0x20);
              if (plVar9 == (long *)0x0) {
                uVar11 = 0;
              }
              else if (*(int *)(param_1 + 0x28) == (int)plVar9[1]) {
                uVar11 = (**(code **)(*plVar9 + 0x10))();
              }
              else {
                uVar11 = 0;
                *(undefined8 *)(param_1 + 0x20) = 0;
                *(undefined4 *)(param_1 + 0x28) = DAT_101dc0b88;
              }
              plVar9 = *(long **)(param_1 + 0x10);
              lVar5 = 0;
              if (plVar9 != (long *)0x0) {
                if (*(int *)(param_1 + 0x18) == (int)plVar9[1]) {
                  lVar5 = (**(code **)(*plVar9 + 0x10))();
                }
                else {
                  lVar5 = 0;
                  *(undefined8 *)(param_1 + 0x10) = 0;
                  *(undefined4 *)(param_1 + 0x18) = DAT_101dc0b88;
                }
              }
              FUN_10002cc10(uVar11,lVar5 + 0x28,lVar4 + 0x30,uVar6,uVar10);
              if (*(char *)(param_1 + 0x38) == '\0') {
                return;
              }
              plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0001000b7794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar9 + 0x20))(0);
              return;
            }
          }
          else {
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined4 *)(param_1 + 0x28) = DAT_101dc0b88;
          }
        }
        (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
        FUN_1010a1830();
        return;
      }
    }
  }
  return;
}




void FUN_1000b7798(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x18) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) goto LAB_1000b780c;
      (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
      FUN_1010a1830();
      uVar3 = DAT_101dc0b88;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0;
      uVar3 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
LAB_1000b780c:
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x28) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) {
        return;
      }
      (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
      FUN_1010a1830();
      uVar3 = DAT_101dc0b88;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x20) = 0;
      uVar3 = DAT_101dc0b88;
    }
    *(undefined4 *)(param_1 + 0x28) = uVar3;
  }
  return;
}




void FUN_1000b787c(void)

{
  return;
}




void FUN_1000b7884(void)

{
  if ((DAT_10184db60 & 1) == 0) {
    DAT_10184db58 = DAT_101872e38;
    DAT_10184db60 = 1;
  }
  return;
}




void FUN_1000b78b0(void)

{
  if ((DAT_10184dd80 & 1) == 0) {
    DAT_10184dd78 = DAT_101872e38;
    DAT_10184dd80 = 1;
  }
  return;
}




void FUN_1000b78dc(void)

{
  if ((DAT_10184dd90 & 1) == 0) {
    DAT_10184dd88 = DAT_101872e38;
    DAT_10184dd90 = 1;
  }
  return;
}




void FUN_1000b7908(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_101452fe8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}




void FUN_1000b7920(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_1000b7928(undefined4 param_1,long param_2)

{
  *(undefined1 *)(param_2 + 0x18) = 1;
  *(undefined4 *)(param_2 + 0x14) = param_1;
  return;
}




void FUN_1000b7938(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  float local_58;
  float fStack_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  if ((*(byte *)(param_2 + 0x2f6) >> 1 & 1) != 0) {
    if (*(char *)(param_1 + 0x18) == '\0') {
      if (*(code **)(param_1 + 8) != (code *)0x0) {
        (**(code **)(param_1 + 8))(param_3,param_2,param_1 + 0x10,param_1 + 0x14);
      }
    }
    else {
      FUN_100345b68(param_2,auStack_30,0);
      FUN_100465290(param_2,auStack_40,auStack_50,&fStack_54,&local_58);
      if (fStack_54 <= local_58) {
        fStack_54 = local_58;
      }
      *(float *)(param_1 + 0x10) = fStack_54;
    }
    if (0.1 < *(float *)(param_1 + 0x10)) {
      FUN_100463dac(param_2);
      lVar1 = FUN_1010a0298(param_2,DAT_10184ddf8);
      if (lVar1 != 0) {
        FUN_10002cff8(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
      }
    }
  }
  return;
}




long FUN_1000b7a00(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return param_1 + 0x18;
}




void FUN_1000b7a10(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  iVar1 = FUN_1003a6c94(param_2);
  if (iVar1 != 0) {
    uVar4 = 0;
    do {
      lVar3 = FUN_1003a6ca4(param_2,uVar4);
      if (lVar3 != 0) {
        FUN_1000b7938(param_1 + 0x18,lVar3,param_2);
      }
      uVar4 = uVar4 + 1;
      uVar2 = FUN_1003a6c94(param_2);
    } while (uVar4 < uVar2);
  }
  return;
}




void FUN_1000b7a80(undefined4 param_1,long param_2)

{
  *(undefined1 *)(param_2 + 0x30) = 1;
  *(undefined4 *)(param_2 + 0x2c) = param_1;
  return;
}




void FUN_1000b7a90(void)

{
  return;
}




void FUN_1000b7a9c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1003d21e8();
  operator_delete(pvVar1);
  return;
}




void FUN_1000b7ab0(void)

{
  if ((DAT_10184de00 & 1) == 0) {
    DAT_10184ddf8 = DAT_101872e38;
    DAT_10184de00 = 1;
  }
  return;
}




void FUN_1000b7adc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101453090;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 6) = 1;
  return;
}




void FUN_1000b7b0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}




void FUN_1000b7b14(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  uVar3 = FUN_10042e2a4(*param_2);
  lVar4 = FUN_1010a0298(uVar3,DAT_10184df80);
  plVar5 = (long *)0x0;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x28);
  }
  plVar1 = (long *)&DAT_101dc0b88;
  if (lVar4 != 0) {
    plVar1 = plVar5 + 1;
  }
  lVar2 = *plVar1;
  *(long **)(param_1 + 0x20) = plVar5;
  *(int *)(param_1 + 0x28) = (int)lVar2;
  if (lVar4 != 0) {
    if ((int)lVar2 == (int)plVar5[1]) {
      lVar4 = (**(code **)(*plVar5 + 0x10))();
      if (lVar4 != 0) {
        plVar5 = *(long **)(param_1 + 0x20);
        uVar3 = 0;
        if (plVar5 != (long *)0x0) {
          if (*(int *)(param_1 + 0x28) == (int)plVar5[1]) {
            uVar3 = (**(code **)(*plVar5 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined4 *)(param_1 + 0x28) = DAT_101dc0b88;
          }
        }
        FUN_100049c24(uVar3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                      *(undefined4 *)(param_1 + 0x30));
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1000b7be8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x28) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x20);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x28) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x20) = 0;
            *(undefined4 *)(param_1 + 0x28) = DAT_101dc0b88;
          }
        }
        FUN_1010a01dc(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1000b7c8c(void)

{
  return;
}




void FUN_1000b7c94(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}




void FUN_1000b7c9c(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 1;
  return;
}




void FUN_1000b7ca8(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 2;
  return;
}




void FUN_1000b7cb4(void)

{
  if ((DAT_10184de10 & 1) == 0) {
    DAT_10184de08 = DAT_101872e38;
    DAT_10184de10 = 1;
  }
  return;
}




void FUN_1000b7ce0(void)

{
  if ((DAT_10184df88 & 1) == 0) {
    DAT_10184df80 = DAT_101872e38;
    DAT_10184df88 = 1;
  }
  return;
}




void FUN_1000b7d0c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 8) = param_1;
  return;
}




void FUN_1000b7d14(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xc) = param_1;
  return;
}




void FUN_1000b7d1c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}




void FUN_1000b7d24(long param_1)

{
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}




void FUN_1000b7d30(long param_1,float *param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  FUN_1000320fc();
  uVar1 = FUN_100033428();
  pfVar2 = (float *)FUN_10002e57c();
  fVar3 = (float)*(undefined8 *)(pfVar2 + 1) - (float)*(undefined8 *)(param_2 + 1);
  fVar4 = (float)((ulong)*(undefined8 *)(pfVar2 + 1) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
  fVar3 = SQRT(fVar3 * fVar3 + (*pfVar2 - *param_2) * (*pfVar2 - *param_2) + fVar4 * fVar4) *
          0.055555556;
  fVar3 = (float)NEON_fminnm(*(float *)(param_1 + 8) - *(float *)(param_1 + 8) * fVar3 * fVar3,
                             0x3f800000);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (0.0 < fVar3) {
    FUN_10002e9a0(fVar3,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),uVar1);
    return;
  }
  return;
}




void FUN_1000b7ddc(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [16];
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    uVar2 = FUN_1000320fc();
    iVar1 = FUN_100032120(uVar2,param_2);
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_100345b68(param_2,auStack_30,0);
  FUN_1000b7d30(param_1,auStack_30);
  return;
}




void FUN_1000b7e38(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1003c4f94();
  *puVar1 = &PTR_thunk_FUN_1003d21e8_101453130;
  puVar1[2] = &PTR_FUN_101453310;
  puVar1[3] = &PTR_FUN_1014530f0;
  puVar1[4] = 0;
  *(undefined8 *)((long)puVar1 + 0x25) = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}




long FUN_1000b7e78(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  return param_1 + 0x18;
}




long FUN_1000b7e84(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 1;
  return param_1 + 0x18;
}




long FUN_1000b7e94(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 2;
  return param_1 + 0x18;
}




long FUN_1000b7ea4(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 3;
  return param_1 + 0x18;
}




void FUN_1000b7eb4(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  FUN_10034ee90();
  lVar3 = FUN_100345d90();
  if (lVar3 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    if (iVar1 == 3) goto LAB_1000b7f5c;
    if (iVar1 != 2) goto LAB_1000b7f08;
  }
  lVar4 = FUN_1003a2b6c(param_2);
  if (lVar3 != lVar4) {
    iVar1 = *(int *)(param_1 + 0x30);
LAB_1000b7f08:
    if ((iVar1 - 1U < 2) && (iVar1 = FUN_1003a6c94(param_2), iVar1 != 0)) {
      uVar6 = 0;
      do {
        lVar4 = FUN_1003a6ca4(param_2,uVar6);
        if (lVar4 == lVar3) goto LAB_1000b7f5c;
        uVar6 = uVar6 + 1;
        uVar2 = FUN_1003a6c94(param_2);
      } while (uVar6 < uVar2);
    }
    return;
  }
LAB_1000b7f5c:
  uVar5 = FUN_1003a2b6c(param_2);
  FUN_1000b7ddc(param_1 + 0x18,uVar5);
  return;
}




void FUN_1000b7f80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014531b0;
  param_1[1] = 0;
  param_1[2] = &PTR_FUN_101453310;
  param_1[3] = &PTR_FUN_1014530f0;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x25) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}




long FUN_1000b7fb0(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  return param_1 + 0x18;
}




long FUN_1000b7fbc(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 1;
  return param_1 + 0x18;
}




long FUN_1000b7fcc(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 2;
  return param_1 + 0x18;
}




void FUN_1000b7fdc(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  FUN_10034ee90();
  lVar3 = FUN_100345d90();
  if (lVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 0) {
      lVar4 = FUN_10042e2a4(*param_2);
      if (lVar3 == lVar4) goto LAB_1000b8078;
    }
    else {
      if (iVar1 == 2) {
LAB_1000b8078:
        uVar5 = FUN_10042e2a4(*param_2);
        FUN_1000b7ddc(param_1 + 0x18,uVar5);
        return;
      }
      if ((iVar1 == 1) && (iVar1 = FUN_100445318(*param_2), iVar1 != 0)) {
        uVar6 = 0;
        do {
          lVar4 = FUN_100445328(*param_2,uVar6);
          if (lVar3 == lVar4) goto LAB_1000b8078;
          uVar6 = uVar6 + 1;
          uVar2 = FUN_100445318(*param_2);
        } while (uVar6 < uVar2);
      }
    }
  }
  return;
}




void FUN_1000b809c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float local_30;
  undefined4 local_2c;
  float local_28;
  
  FUN_10034ee90();
  lVar1 = FUN_100345d90();
  if ((lVar1 != 0) && (lVar2 = FUN_10042e2a4(*param_2), lVar1 == lVar2)) {
    FUN_1000320fc();
    lVar1 = FUN_100033428();
    uVar3 = FUN_10042e2a4(*param_2);
    FUN_100345b68(uVar3,&local_30,0);
    local_30 = *(float *)(lVar1 + 0x70) + local_30;
    local_28 = *(float *)(lVar1 + 0x78) + local_28;
    local_2c = *(undefined4 *)(lVar1 + 0x418);
    FUN_10002e63c(lVar1,&local_30,2);
  }
  return;
}




void FUN_1000b8134(void)

{
  undefined8 uVar1;
  
  FUN_1000320fc();
  uVar1 = FUN_100033428();
  FUN_10002e688(uVar1,&DAT_1013cd800);
  return;
}




void FUN_1000b8154(void)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined4 local_18;
  
  FUN_1000320fc();
  FUN_100033428();
  FUN_10002e944();
  local_20 = 0x3fc00000427270a4;
  local_18 = 0xbf31a9fc;
  FUN_1000320fc();
  uVar1 = FUN_100033428();
  FUN_10002e63c(uVar1,&local_20,0);
  return;
}




undefined8 FUN_1000b81a4(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float local_30 [4];
  
  local_30[2] = *(float *)(param_3 + 0x18);
  if (ABS(local_30[2]) < 1.1920929e-07) {
    FUN_1000320fc();
    FUN_100033428();
    FUN_10002e944();
    local_30[2] = *(float *)(param_3 + 0x18);
  }
  local_30[2] = local_30[2] + *(float *)(param_2 + 8);
  *(float *)(param_3 + 0x18) = local_30[2];
  if (local_30[2] <= 2.5) {
    local_30[2] = local_30[2] * 0.8;
    if (1.0 <= local_30[2]) {
      local_30[2] = local_30[2] + -2.0;
      local_30[0] = local_30[2] * local_30[2] * local_30[2] * 7.904999 + 76.42;
      local_30[2] = local_30[2] * local_30[2] * local_30[2] * 2.8270001 + 5.6540003;
    }
    else {
      local_30[0] = local_30[2] * local_30[2] * local_30[2] * 7.904999 + 60.61;
      local_30[2] = local_30[2] * local_30[2] * 2.8270001 * local_30[2];
    }
    local_30[2] = local_30[2] + -0.694;
    local_30[1] = 1.5;
    FUN_1000320fc();
    uVar1 = FUN_100033428();
    uVar2 = 1;
    FUN_10002e63c(uVar1,local_30,1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_1000b82d4(void)

{
  return;
}




void FUN_1000b82e0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1003d21e8();
  operator_delete(pvVar1);
  return;
}




void FUN_1000b82f4(void)

{
  return;
}




void FUN_1000b82fc(void)

{
  return;
}




void FUN_1000b8304(void)

{
  return;
}




void FUN_1000b830c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10016d690();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_1000b8330(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b8338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_1000b833c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b8344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}




void FUN_1000b8348(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b8350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




void FUN_1000b8354(void)

{
  return;
}




void FUN_1000b8358(void)

{
  return;
}




void FUN_1000b8360(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10016d294();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




undefined8 FUN_1000b8384(long *param_1)

{
  (**(code **)(*param_1 + 0x28))();
  return 0;
}




void FUN_1000b83a4(void)

{
  return;
}




void FUN_1000b83a8(void)

{
  return;
}




void FUN_1000b83b0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10016dbe0();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_1000b83d4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b83dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_1000b83e0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b83e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_1000b83ec(void)

{
  return;
}




void FUN_1000b83f0(void)

{
  return;
}




void FUN_1000b83f8(void)

{
  return;
}




void FUN_1000b83fc(void)

{
  return;
}




void FUN_1000b8400(void)

{
  return;
}




void FUN_1000b8404(void)

{
  return;
}




undefined4 FUN_1000b8408(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  
  lVar4 = *param_1;
  uVar1 = FUN_1004d2524(param_2);
  uVar2 = FUN_100015208(param_2,uVar1,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x68) + 0x18))((long *)(lVar4 + 0x68),uVar2)
  ;
  return *puVar3;
}




bool FUN_1000b845c(void)

{
  bool bVar1;
  int iVar2;
  long local_18;
  
  local_18 = 0;
  FUN_1010a1958(&local_18,1,DAT_10184deb0,0);
  bVar1 = false;
  if (local_18 != 0) {
    iVar2 = FUN_10003abdc();
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}




bool FUN_1000b84a4(int param_1)

{
  bool bVar1;
  int iVar2;
  long local_28;
  
  local_28 = 0;
  FUN_1010a1958(&local_28,1,DAT_10184deb0,0);
  bVar1 = false;
  if (local_28 != 0) {
    iVar2 = FUN_10003abdc();
    bVar1 = iVar2 == param_1;
  }
  return bVar1;
}




undefined8 FUN_1000b84f8(void)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_10034ee90();
  lVar1 = FUN_100345d90();
  if (lVar1 != 0) {
    for (lVar1 = *(long *)(lVar1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184e150) {
        uVar2 = FUN_100470a04();
        return uVar2;
      }
    }
  }
  return 0;
}




void FUN_1000b8548(long param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = FUN_1001340f8();
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
  if ((*(ulong *)(param_1 + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(*(long *)(lVar1 + ((long)*(ulong *)(param_1 + 0x10) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x0001000b8578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}




void FUN_1000b857c(void)

{
  return;
}




void FUN_1000b8584(void)

{
  if ((DAT_10184deb8 & 1) == 0) {
    DAT_10184deb0 = DAT_101872e38;
    DAT_10184deb8 = 1;
  }
  return;
}




void FUN_1000b85b0(void)

{
  if ((DAT_10184e158 & 1) == 0) {
    DAT_10184e150 = DAT_101872e38;
    DAT_10184e158 = 1;
  }
  return;
}




void FUN_1000b85dc(long param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      uVar2 = (uVar2 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  *(uint *)(param_1 + 0x10) = uVar2;
  return;
}




void FUN_1000b8620(long param_1)

{
  undefined1 auStack_38 [40];
  
  FUN_10001151c(auStack_38,*(undefined4 *)(param_1 + 0x10));
  FUN_100345498(auStack_38);
  return;
}




void FUN_1000b864c(void)

{
  return;
}




void FUN_1000b8654(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  
  FUN_10042e2a4(*param_2);
  plVar1 = (long *)FUN_1003a3524();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000b867c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x150))(plVar1,1);
    return;
  }
  return;
}




void FUN_1000b8688(void)

{
  return;
}




void FUN_1000b8690(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}




void FUN_1000b869c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}




void FUN_1000b86a8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}




bool FUN_1000b86b8(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long local_38;
  
  local_38 = 0;
  FUN_1010a1958(&local_38,1,DAT_10184deb0,0);
  lVar2 = local_38;
  if (local_38 != 0) {
    if (*(int *)(param_1 + 1) == 1) {
      pcVar1 = (code *)0x0;
      if (param_2 != 0) {
        pcVar1 = FUN_1000b8768;
      }
      FUN_10003b51c(local_38,*param_1,pcVar1,param_2);
    }
    else if (*(int *)(param_1 + 1) == 0) {
      pcVar1 = (code *)0x0;
      if (param_2 != 0) {
        pcVar1 = FUN_1000b8768;
      }
      FUN_10003b4dc(local_38,*param_1,pcVar1,param_2);
    }
  }
  return lVar2 != 0;
}




void FUN_1000b8768(long param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}




void FUN_1000b8774(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long local_28;
  
  local_28 = 0;
  FUN_1010a1958(&local_28,1,DAT_10184deb0,0);
  lVar1 = local_28;
  if (local_28 != 0) {
    lVar3 = FUN_10003b53c(local_28);
    if (lVar3 != 0) {
      pcVar4 = (char *)FUN_10003b53c(lVar1);
      iVar2 = _strcmp(pcVar4,(char *)*param_1);
      if (iVar2 == 0) {
        FUN_10003b4ec(lVar1);
      }
    }
    lVar3 = FUN_10003b54c(lVar1);
    if (lVar3 != 0) {
      pcVar4 = (char *)FUN_10003b54c(lVar1);
      iVar2 = _strcmp(pcVar4,(char *)*param_1);
      if (iVar2 == 0) {
        FUN_10003b52c(lVar1);
      }
    }
  }
  return;
}




void FUN_1000b880c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014533f8;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  return;
}




void FUN_1000b8820(long param_1)

{
  FUN_1000b86b8(param_1 + 0x10,0);
  return;
}




byte FUN_1000b882c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  if (*(char *)(param_3 + 0x18) == '\0') {
    iVar1 = FUN_1000b86b8(param_1 + 0x10,param_3);
    if (iVar1 == 0) {
      *(undefined1 *)(param_3 + 0x19) = 1;
    }
    else {
      *(undefined1 *)(param_3 + 0x18) = 1;
    }
  }
  return *(byte *)(param_3 + 0x19) ^ 1;
}




void FUN_1000b8878(long param_1,undefined8 param_2,long param_3)

{
  if ((*(char *)(param_3 + 0x18) != '\0') && (*(char *)(param_3 + 0x19) == '\0')) {
    FUN_1000b8774(param_1 + 0x10);
    *(undefined1 *)(param_3 + 0x19) = 1;
  }
  return;
}




void FUN_1000b88b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101453420;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  return;
}




void FUN_1000b88c8(long param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}




undefined8 * FUN_1000b88d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101453448;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1004e313c(param_1 + 3);
  return param_1;
}




void FUN_1000b890c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




long FUN_1000b8914(long param_1)

{
  FUN_1000153b4(param_1 + 0x18);
  return param_1;
}




byte FUN_1000b893c(long param_1,undefined8 param_2,long param_3)

{
  long local_38;
  
  if (*(char *)(param_3 + 0x18) == '\0') {
    local_38 = 0;
    FUN_1010a1958(&local_38,1,DAT_10184deb0,0);
    if (local_38 == 0) {
      *(undefined1 *)(param_3 + 0x19) = 1;
    }
    else {
      FUN_10003b4fc(local_38,*(undefined4 *)(param_1 + 0x10),param_1 + 0x18,FUN_1000b88c8,param_3);
      *(undefined1 *)(param_3 + 0x18) = 1;
    }
  }
  return *(byte *)(param_3 + 0x19) ^ 1;
}




void FUN_1000b89c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long local_28;
  
  if ((*(char *)(param_3 + 0x18) != '\0') && (*(char *)(param_3 + 0x19) == '\0')) {
    local_28 = 0;
    FUN_1010a1958(&local_28,1,DAT_10184deb0,0);
    if (local_28 != 0) {
      FUN_10003b50c();
    }
    *(undefined1 *)(param_3 + 0x19) = 1;
  }
  return;
}




long FUN_1000b8a2c(long param_1)

{
  FUN_1000153b4(param_1 + 0x10);
  return param_1;
}




void FUN_1000b8a54(long param_1)

{
  long local_28;
  
  local_28 = 0;
  FUN_1010a1958(&local_28,1,DAT_10184deb0,0);
  if (local_28 != 0) {
    FUN_10003b4bc(local_28,param_1 + 0x10);
  }
  return;
}




void FUN_1000b8aa4(void)

{
  long local_18;
  
  local_18 = 0;
  FUN_1010a1958(&local_18,1,DAT_10184deb0,0);
  if (local_18 != 0) {
    FUN_10003b4cc();
  }
  return;
}




void FUN_1000b8ae4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_101453490;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  return;
}




void FUN_1000b8b00(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}




void FUN_1000b8b0c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b8b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




void FUN_1000b8b18(void)

{
  long local_18;
  
  local_18 = 0;
  FUN_1010a1958(&local_18,1,DAT_10184deb0,0);
  if (local_18 != 0) {
    FUN_10003b460();
  }
  return;
}




void FUN_1000b8b58(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_48 [16];
  long local_38;
  
  local_38 = 0;
  FUN_1010a1958(&local_38,1,DAT_10184deb0,0);
  lVar1 = local_38;
  if (local_38 != 0) {
    (**(code **)(param_1 + 0x10))(param_2,*(undefined4 *)(param_1 + 0x18),auStack_48);
    FUN_10003affc(0x3f800000,(undefined4)DAT_101dc1cb8,DAT_101dc1cb8._4_4_,lVar1,auStack_48,1,0,
                  *(undefined1 *)(param_1 + 0x1c));
  }
  return;
}




void FUN_1000b8be8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1014534e8;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  return;
}




void FUN_1000b8c04(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}




void FUN_1000b8c10(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b8c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




void FUN_1000b8c1c(void)

{
  long local_18;
  
  local_18 = 0;
  FUN_1010a1958(&local_18,1,DAT_10184deb0,0);
  if (local_18 != 0) {
    FUN_10003b460();
  }
  return;
}




void FUN_1000b8c5c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long local_50;
  long local_48;
  
  local_48 = 0;
  FUN_1010a1958(&local_48,1,DAT_10184deb0,0);
  lVar1 = local_48;
  if (local_48 != 0) {
    (**(code **)(param_1 + 0x10))(param_2,*(undefined4 *)(param_1 + 0x18),&local_50);
    lVar4 = local_50;
    if (local_50 == 0) {
      FUN_10003b460(lVar1);
    }
    else {
      plVar5 = *(long **)(param_3 + 0x18);
      if (plVar5 != (long *)0x0) {
        if (*(int *)(param_3 + 0x20) == (int)plVar5[1]) {
          lVar6 = (**(code **)(*plVar5 + 0x10))();
          if (lVar4 == lVar6) {
            return;
          }
        }
        else {
          *(undefined8 *)(param_3 + 0x18) = 0;
          *(undefined4 *)(param_3 + 0x20) = DAT_101dc0b88;
        }
      }
      FUN_10003b13c(0x3f800000,(undefined4)DAT_101dc1cb8,DAT_101dc1cb8._4_4_,lVar1,local_50,1,0,
                    *(undefined1 *)(param_1 + 0x1c));
      lVar1 = 0;
      if (local_50 != 0) {
        lVar1 = local_50 + 0x28;
      }
      puVar2 = &DAT_101dc0b88;
      if (local_50 != 0) {
        puVar2 = (undefined4 *)(lVar1 + 8);
      }
      uVar3 = *puVar2;
      *(long *)(param_3 + 0x18) = lVar1;
      *(undefined4 *)(param_3 + 0x20) = uVar3;
    }
  }
  return;
}




void FUN_1000b8d78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101453540;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined2 *)(param_1 + 4) = 0x100;
  return;
}




void FUN_1000b8d9c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}




void FUN_1000b8db0(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined1 *)(param_1 + 0x21) = param_2;
  return;
}




void FUN_1000b8dc0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_38;
  
  local_38 = 0;
  FUN_1010a1958(&local_38,1,DAT_10184deb0,0);
  lVar1 = local_38;
  if (local_38 != 0) {
    uVar2 = FUN_1000b8e4c(param_1 + 0x10,param_2,0);
    FUN_10003b288(0x3f800000,(undefined4)DAT_101dc1cb8,DAT_101dc1cb8._4_4_,lVar1,uVar2,1,
                  *(undefined1 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x21));
  }
  return;
}




ulong FUN_1000b8e4c(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  uint *puVar4;
  undefined8 uVar5;
  
  uVar2 = (ulong)param_1[2];
  switch(uVar2) {
  case 0:
    break;
  case 1:
    uVar2 = (ulong)*param_1;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x0001000b8eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)();
    return uVar2;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    FUN_1000f3914(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001000b8ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x0001000b8ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)(param_2);
    return uVar2;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x0001000b8f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)(param_2,param_3);
    return uVar2;
  case 6:
    plVar3 = (long *)FUN_1000f3980(param_2);
    uVar2 = 0;
    if (plVar3 != (long *)0x0) {
      uVar5 = *(undefined8 *)param_1;
      uVar1 = FUN_1004d2524(uVar5);
      uVar5 = FUN_100015208(uVar5,uVar1,0x12345678);
      puVar4 = (uint *)(**(code **)(*plVar3 + 0x18))(plVar3,uVar5);
      uVar2 = (ulong)*puVar4;
    }
    break;
  default:
    FUN_1004d22dc(0);
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_1000b8f60(void)

{
  long local_18;
  
  local_18 = 0;
  FUN_1010a1958(&local_18,1,DAT_10184deb0,0);
  if (local_18 != 0) {
    FUN_10003b460();
  }
  return;
}




void FUN_1000b8fa0(undefined8 param_1,uint param_2)

{
  long lVar1;
  long local_38;
  
  local_38 = 0;
  FUN_1010a1958(&local_38,1,DAT_10184deb0,0);
  lVar1 = local_38;
  if (local_38 != 0) {
    if ((int)param_1 == 1) {
      FUN_10003ab54(local_38,-(param_2 & 1));
      FUN_100038530(0x3e4ccccd,lVar1,1);
    }
    else if (param_2 == 0) {
      FUN_10003aba0(local_38,param_1);
    }
    else {
      FUN_10003ab64();
    }
  }
  return;
}




void FUN_1000b9038(void)

{
  return;
}




void FUN_1000b9040(void)

{
  return;
}




void FUN_1000b9048(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10016e5ec();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_1000b906c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b9074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_1000b9078(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b9080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




undefined8 * FUN_1000b9084(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101453448;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return param_1;
}




void FUN_1000b90c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101453448;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
  }
  operator_delete(param_1);
  return;
}




void FUN_1000b90f8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10016e7d4();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_1000b911c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b9124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_1000b9128(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b9130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




undefined8 * FUN_1000b9134(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101453620;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_1000b9170(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101453620;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
  }
  operator_delete(param_1);
  return;
}




void FUN_1000b91a8(void)

{
  return;
}




void FUN_1000b91b0(void)

{
  return;
}




void FUN_1000b91b8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10016f594();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_1000b91dc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b91e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_1000b91e8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}




void FUN_1000b91f4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b91fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}




void FUN_1000b9200(void)

{
  return;
}




void FUN_1000b9208(void)

{
  return;
}




void FUN_1000b920c(void)

{
  return;
}




void FUN_1000b9214(void)

{
  return;
}




void FUN_1000b921c(void)

{
  if ((DAT_10184deb8 & 1) == 0) {
    DAT_10184deb0 = DAT_101872e38;
    DAT_10184deb8 = 1;
  }
  return;
}




void FUN_1000b9248(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  uint *puVar5;
  long *plVar6;
  
  plVar6 = (long *)(*param_2 + 0x68);
  uVar2 = (**(code **)(*plVar6 + 8))(plVar6,*(undefined4 *)(param_1 + 0x10));
  puVar3 = (undefined4 *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar2);
  *puVar3 = 0;
  lVar4 = FUN_100061dc8();
  if ((lVar4 != 0) && (uVar1 = FUN_10005f16c(lVar4,param_1 + 0x14), 0xffff < uVar1)) {
    puVar5 = (uint *)(**(code **)(*(long *)(*param_2 + 0x68) + 0x10))
                               ((long *)(*param_2 + 0x68),*(undefined4 *)(param_1 + 0x10));
    *puVar5 = uVar1;
  }
  return;
}




void FUN_1000b92d4(long param_1,long *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  
  puVar1 = (undefined4 *)
           (**(code **)(*(long *)(*param_2 + 0x68) + 0x10))
                     ((long *)(*param_2 + 0x68),*(undefined4 *)(param_1 + 0x10));
  if ((*(short *)((long)puVar1 + 2) != 0) && (lVar2 = FUN_100061dc8(), lVar2 != 0)) {
    FUN_10005f31c(lVar2,*puVar1);
    return;
  }
  return;
}




void FUN_1000b9328(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_2;
  do {
    lVar2 = lVar1;
    if (lVar2 == 0) {
      return;
    }
    do {
      lVar1 = (**(code **)(*(long *)(lVar2 + 0x68) + 0x10))
                        ((long *)(lVar2 + 0x68),*(undefined4 *)(param_1 + 0x10));
      if (lVar1 != 0) {
        if (*(short *)(lVar1 + 2) == 0) {
          return;
        }
        lVar2 = FUN_100061dc8();
        if (lVar2 == 0) {
          return;
        }
        FUN_10005f224(lVar2,lVar1,param_1 + 0x14,param_1 + 0x1c);
        return;
      }
      lVar3 = *(long *)(lVar2 + 0x10);
    } while (lVar3 == 0);
    do {
      lVar1 = lVar3;
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184df30) break;
      lVar3 = *(long *)(lVar3 + 0x10);
      lVar1 = lVar2;
    } while (lVar3 != 0);
  } while( true );
}




void FUN_1000b93e4(void)

{
  return;
}




void FUN_1000b93ec(void)

{
  return;
}




void FUN_1000b93f4(void)

{
  if ((DAT_10184df38 & 1) == 0) {
    DAT_10184df30 = DAT_101872e38;
    DAT_10184df38 = 1;
  }
  return;
}




void FUN_1000b9420(undefined8 param_1,undefined8 *param_2)

{
  FUN_1010a01dc(*param_2);
  return;
}




void FUN_1000b9428(void)

{
  return;
}




void FUN_1000b9430(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101453750;
  param_1[1] = 0x300000000;
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}




void FUN_1000b9450(long *param_1,char *param_2)

{
  char cVar1;
  uint local_18 [2];
  
  if (param_2 == (char *)0x0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      local_18[0] = (local_18[0] ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  (**(code **)(*param_1 + 8))(param_1,local_18);
  return;
}




void FUN_1000b94b8(long param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4)

{
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined1 *)(param_1 + 0x10) = param_4;
  return;
}




void FUN_1000b94c8(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  if ((*(char *)(param_1 + 0x11) != '\0') && (uVar2 = FUN_100060a70(), (uVar2 & 1) != 0)) {
    return;
  }
  plVar4 = (long *)(param_2 + 0x18);
  do {
    lVar5 = *plVar4;
    plVar4 = (long *)(lVar5 + 0x20);
  } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184da98);
  lVar5 = *(long *)(lVar5 + 0x18);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184db30))) {
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  uVar3 = FUN_1003a7540(param_2);
  uVar3 = FUN_1003e2b0c(uVar3,*(undefined4 *)(param_1 + 8));
  if (lVar5 != 0) {
    FUN_100055a80(lVar5);
    iVar1 = FUN_1001018f0();
    if (iVar1 != 0) {
      FUN_100055a80(lVar5);
      iVar1 = FUN_1001018d8();
      if (iVar1 == (int)uVar3) {
        return;
      }
    }
  }
  FUN_1004457b4(param_2,uVar3,*(undefined4 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0x10));
  return;
}




void FUN_1000b95a8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((*(char *)(param_1 + 0x11) == '\0') || (uVar3 = FUN_100060a70(), (uVar3 & 1) == 0)) {
    for (lVar5 = *(long *)(param_2 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184da98) {
        lVar5 = *(long *)(lVar5 + 0x18);
        while( true ) {
          if (lVar5 == 0) {
            return;
          }
          if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184db30) break;
          lVar5 = *(long *)(lVar5 + 0x20);
        }
        uVar4 = FUN_1003a7540(param_2);
        iVar1 = FUN_1003e2b0c(uVar4,*(undefined4 *)(param_1 + 8));
        FUN_100055a80(lVar5);
        iVar2 = FUN_1001018d0();
        if (iVar2 != 0) {
          return;
        }
        FUN_100055a80(lVar5);
        iVar2 = FUN_1001018d8();
        if (iVar2 != iVar1) {
          return;
        }
        FUN_1004459cc(param_2);
        return;
      }
    }
  }
  return;
}




void FUN_1000b9684(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if ((*(char *)(param_1 + 0x11) == '\0') || (uVar2 = FUN_100060a70(), (uVar2 & 1) == 0)) {
    plVar3 = (long *)(param_2 + 0x18);
    do {
      lVar4 = *plVar3;
      plVar3 = (long *)(lVar4 + 0x20);
    } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184da98);
    for (lVar4 = *(long *)(lVar4 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_10184db30) {
        FUN_100055a80();
        iVar1 = FUN_1001018d0();
        if (iVar1 != 1) {
          return;
        }
        FUN_1004459cc(param_2);
        return;
      }
    }
  }
  return;
}




void FUN_1000b9720(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (((*(char *)(param_1 + 0x11) == '\0') || (uVar2 = FUN_100060a70(), (uVar2 & 1) == 0)) &&
     (iVar1 = FUN_10034ea2c(*(undefined4 *)(param_2 + 0x260)), iVar1 != 0)) {
    FUN_1004459cc(param_2);
    return;
  }
  return;
}




void FUN_1000b9768(long param_1)

{
  *(undefined1 *)(param_1 + 0x11) = 1;
  return;
}




void FUN_1000b9774(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101453798;
  param_1[1] = 0;
  param_1[2] = &PTR_FUN_101453908;
  param_1[3] = &PTR_FUN_101453750;
  param_1[4] = 0x300000000;
  *(undefined2 *)(param_1 + 5) = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf8;
  return;
}




void FUN_1000b97b4(long *param_1,char *param_2)

{
  char cVar1;
  uint local_18 [2];
  
  if (param_2 == (char *)0x0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      local_18[0] = (local_18[0] ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  (**(code **)(*param_1 + 0x38))(param_1,local_18);
  return;
}




long FUN_1000b981c(long param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8 | 1;
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined1 *)(param_1 + 0x28) = param_4;
  return param_1 + 0x18;
}




void FUN_1000b9844(long *param_1,char *param_2)

{
  char cVar1;
  uint local_18 [2];
  
  if (param_2 == (char *)0x0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      local_18[0] = (local_18[0] ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  (**(code **)(*param_1 + 0x48))(param_1,local_18);
  return;
}




long FUN_1000b98ac(long param_1,undefined4 *param_2)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8 | 2;
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = 3;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return param_1 + 0x18;
}




long FUN_1000b98d8(long param_1)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8 | 4;
  return param_1 + 0x18;
}




long FUN_1000b98f0(long param_1)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8 | 3;
  return param_1 + 0x18;
}




void FUN_1000b9908(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_10042e2a4(*param_2);
  iVar1 = FUN_10034ea2c(*(undefined4 *)(lVar2 + 0x260));
  if (iVar1 != 0) {
    switch(*(byte *)(param_1 + 0x30) & 7) {
    case 1:
      FUN_1000b94c8(param_1 + 0x18,lVar2);
      return;
    case 2:
      FUN_1000b95a8(param_1 + 0x18,lVar2);
      return;
    case 3:
      FUN_1000b9684(param_1 + 0x18,lVar2);
      return;
    case 4:
      FUN_1000b9720(param_1 + 0x18,lVar2);
      return;
    }
  }
  return;
}




void FUN_1000b99b8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1003c4f94();
  *puVar1 = &PTR_thunk_FUN_1003d21e8_101453808;
  puVar1[2] = &PTR_FUN_101453908;
  puVar1[3] = &PTR_FUN_101453750;
  puVar1[4] = 0x300000000;
  *(undefined2 *)(puVar1 + 5) = 0;
  *(byte *)(puVar1 + 6) = *(byte *)(puVar1 + 6) & 0xf8;
  return;
}




void FUN_1000b9a08(long *param_1,char *param_2)

{
  char cVar1;
  uint local_18 [2];
  
  if (param_2 == (char *)0x0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      local_18[0] = (local_18[0] ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  (**(code **)(*param_1 + 0x58))(param_1,local_18);
  return;
}




long FUN_1000b9a70(long param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8 | 1;
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined1 *)(param_1 + 0x28) = param_4;
  return param_1 + 0x18;
}




void FUN_1000b9a98(long *param_1,char *param_2)

{
  char cVar1;
  uint local_18 [2];
  
  if (param_2 == (char *)0x0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      local_18[0] = (local_18[0] ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  (**(code **)(*param_1 + 0x68))(param_1,local_18);
  return;
}




long FUN_1000b9b00(long param_1,undefined4 *param_2)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8 | 2;
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = 3;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return param_1 + 0x18;
}




long FUN_1000b9b2c(long param_1)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8 | 4;
  return param_1 + 0x18;
}




long FUN_1000b9b44(long param_1)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf8 | 3;
  return param_1 + 0x18;
}




void FUN_1000b9b5c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_1003a2b6c(param_2);
  iVar1 = FUN_10034ea2c(*(undefined4 *)(lVar2 + 0x260));
  if (iVar1 != 0) {
    switch(*(byte *)(param_1 + 0x30) & 7) {
    case 1:
      FUN_1000b94c8(param_1 + 0x18,lVar2);
      return;
    case 2:
      FUN_1000b95a8(param_1 + 0x18,lVar2);
      return;
    case 3:
      FUN_1000b9684(param_1 + 0x18,lVar2);
      return;
    case 4:
      FUN_1000b9720(param_1 + 0x18,lVar2);
      return;
    }
  }
  return;
}




void FUN_1000b9c0c(undefined8 *param_1)

{
  param_1[1] = 0x3f80000000000000;
  *param_1 = 0;
  param_1[2] = 0x43b4000000000000;
  *(undefined4 *)(param_1 + 3) = 3;
  return;
}




void FUN_1000b9c30(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_1000b9c38(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  return;
}




void FUN_1000b9c40(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 4) = param_1;
  return;
}




void FUN_1000b9c48(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 8) = param_1;
  return;
}




void FUN_1000b9c50(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xc) = param_1;
  return;
}




void FUN_1000b9c58(float param_1,long param_2)

{
  *(float *)(param_2 + 0x10) = param_1 + 50.0;
  return;
}




void FUN_1000b9c6c(float param_1,long param_2)

{
  *(float *)(param_2 + 0x14) = param_1 + 50.0;
  return;
}




undefined8 FUN_1000b9c80(float *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  undefined8 local_38;
  
  local_38 = 0;
  FUN_1010a1958(&local_38,1,DAT_10184deb0,0);
  uVar1 = local_38;
  FUN_100054ddc(param_4);
  lVar2 = *(long *)(param_4 + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184df70) break;
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  fVar3 = (float)FUN_1010a1ce0();
  fVar3 = *(float *)(param_3 + 0x18) + fVar3;
  *(float *)(param_3 + 0x18) = fVar3;
  if (param_1[2] + *param_1 <= fVar3) {
    FUN_1000b9df4(param_1,param_3,lVar2,uVar1);
  }
  else {
    FUN_1000b9d50();
  }
  return 1;
}




void FUN_1000b9d50(float *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  FUN_1000441ac(param_1[4] * 0.0055555557 * 3.1415927,param_3);
  uVar1 = NEON_fminnm(*(float *)(param_2 + 0x18) / *param_1,0x3f800000);
  FUN_10003b5d0(param_4,param_1[6]);
  FUN_10003b5d8((param_1[4] * 0.0055555557 + 0.1388889) * 3.1415927,uVar1,param_4,param_1[6]);
  return;
}




void FUN_1000b9df4(float *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = param_1[3];
  fVar4 = *(float *)(param_2 + 0x18) - (*param_1 + param_1[2]);
  iVar1 = *(int *)(param_2 + 0x1c) + 1;
  iVar2 = *(int *)(param_2 + 0x1c);
  if (fVar3 * (float)iVar1 < fVar4) {
    *(int *)(param_2 + 0x1c) = iVar1;
    iVar2 = iVar1;
  }
  fVar5 = param_1[1];
  if (fVar5 <= fVar4) {
    *(undefined1 *)(param_2 + 0x20) = 1;
    fVar4 = fVar5;
  }
  if (iVar2 % 2 == 1) {
    fVar4 = param_1[5] + ((param_1[4] - param_1[5]) * (fVar4 - (float)iVar2 * fVar3)) / fVar3;
  }
  else {
    fVar4 = ((param_1[5] - param_1[4]) * (fVar4 - (float)iVar2 * fVar3)) / fVar3 + param_1[4];
  }
  FUN_1000441ac(fVar4 * 0.0055555557 * 3.1415927,param_3);
  FUN_10003b5d0(param_4,param_1[6]);
  FUN_10003b5d8((fVar4 * 0.0055555557 + 0.1388889) * 3.1415927,0x3f800000,param_4,param_1[6]);
  return;
}




void FUN_1000b9f08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101453898;
  param_1[1] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}




undefined8 FUN_1000b9f20(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  long *plVar3;
  
  FUN_10034ee90();
  lVar1 = FUN_100345d90();
  FUN_1000b94c8(param_1 + 6,lVar1);
  plVar3 = (long *)(lVar1 + 0x18);
  do {
    lVar1 = *plVar3;
    plVar3 = (long *)(lVar1 + 0x20);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184da98);
  lVar1 = *(long *)(lVar1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184db30) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_1000b9c80(param_1 + 2,extraout_x1,param_3);
  if ((int)uVar2 != 0) {
    if (*(char *)(param_3 + 0x20) != '\0') {
      (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3);
      return 0;
    }
    return 1;
  }
  return uVar2;
}




void FUN_1000b9ff0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  FUN_10034ee90();
  lVar1 = FUN_100345d90();
  if (lVar1 != 0) {
    FUN_1000b95a8(param_1 + 0x30,lVar1);
  }
  *(undefined1 *)(param_3 + 0x20) = 1;
  return;
}




void FUN_1000ba030(void)

{
  return;
}




void FUN_1000ba03c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1003d21e8();
  operator_delete(pvVar1);
  return;
}




void FUN_1000ba050(void)

{
  return;
}




void FUN_1000ba058(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10016dfb4();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_1000ba07c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000ba084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_1000ba088(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000ba090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




void FUN_1000ba094(void)

{
  return;
}




void FUN_1000ba09c(void)

{
  return;
}




void FUN_1000ba0a0(void)

{
  return;
}




void FUN_1000ba0a4(void)

{
  return;
}




void FUN_1000ba0a8(void)

{
  return;
}




void FUN_1000ba0ac(void)

{
  return;
}




void FUN_1000ba0b0(void)

{
  return;
}




void FUN_1000ba0b4(void)

{
  return;
}




void FUN_1000ba0b8(void)

{
  if ((DAT_10184daa0 & 1) == 0) {
    DAT_10184da98 = DAT_101872e38;
    DAT_10184daa0 = 1;
  }
  return;
}




void FUN_1000ba0e4(void)

{
  if ((DAT_10184db38 & 1) == 0) {
    DAT_10184db30 = DAT_101872e38;
    DAT_10184db38 = 1;
  }
  return;
}




void FUN_1000ba110(void)

{
  if ((DAT_10184deb8 & 1) == 0) {
    DAT_10184deb0 = DAT_101872e38;
    DAT_10184deb8 = 1;
  }
  return;
}




void FUN_1000ba13c(void)

{
  if ((DAT_10184df78 & 1) == 0) {
    DAT_10184df70 = DAT_101872e38;
    DAT_10184df78 = 1;
  }
  return;
}




void FUN_1000ba168(void)

{
  undefined1 auStack_30 [32];
  
  FUN_1003dd634(auStack_30,1);
  FUN_100345498(auStack_30);
  return;
}




void FUN_1000ba194(void)

{
  undefined1 auStack_30 [32];
  
  FUN_1003dd634(auStack_30,0);
  FUN_100345498(auStack_30);
  return;
}




void FUN_1000ba1c0(void)

{
  return;
}




void FUN_1000ba1c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014539a8;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x13) = 1;
  param_1[0x14] = DAT_101dc1cb8;
  *(int *)(param_1 + 0x15) = (int)param_1;
  *(undefined4 *)((long)param_1 + 0xac) = 0xff000000;
  *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x16) & 0xfe00 | 0x30;
  *(undefined1 *)((long)param_1 + 0xb2) = 0;
  return;
}




void FUN_1000ba250(long param_1)

{
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xff98 | 0x21;
  return;
}




void FUN_1000ba26c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xff98 | 0x22;
  return;
}




void FUN_1000ba28c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xff98 | 0x23;
  return;
}




void FUN_1000ba2ac(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xff98 | 0x44;
  return;
}




void FUN_1000ba2cc(long param_1)

{
  *(char **)(param_1 + 0x28) = "CenterBody";
  *(char **)(param_1 + 0x18) = "Effect_TalentStandard";
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xfff0 | 10;
  return;
}




void FUN_1000ba2fc(long param_1)

{
  *(char **)(param_1 + 0x28) = "CenterBody";
  *(char **)(param_1 + 0x18) = "Effect_TalentStrong";
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xfff0 | 10;
  return;
}




void FUN_1000ba32c(long param_1,undefined8 param_2)

{
  int *piVar1;
  long lVar2;
  char *pcVar3;
  
  *(char **)(param_1 + 0x28) = "OverHead";
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xfff0 | 10;
  piVar1 = (int *)FUN_10034e834(param_2);
  if (*piVar1 == -0x7ee3623b) {
    pcVar3 = "Effect_Nothing";
  }
  else {
    lVar2 = FUN_10033199c();
    if (lVar2 == 0) {
      return;
    }
    pcVar3 = *(char **)(lVar2 + 0x18);
  }
  *(char **)(param_1 + 0x18) = pcVar3;
  return;
}




void FUN_1000ba3a4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_1000ba3ac(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_1000ba3b4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_1000ba3bc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  return;
}




void FUN_1000ba3d0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  return;
}




void FUN_1000ba3d8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_1000ba3e0(long param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 8;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xfff7 | uVar1;
  return;
}




void FUN_1000ba400(long param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0x10;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xffef | uVar1;
  return;
}




void FUN_1000ba420(long param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0x80;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xff7f | uVar1;
  return;
}




void FUN_1000ba440(long param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined1 *)(param_1 + 0xb2) = 1;
  return;
}




void FUN_1000ba454(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined1 *)(param_1 + 0xb2) = 1;
  return;
}




void FUN_1000ba470(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}




void FUN_1000ba478(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}




void FUN_1000ba480(long param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0x100;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xfeff | uVar1;
  return;
}




void FUN_1000ba4a0(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xff9f | (param_2 & 3) << 5;
  return;
}




void FUN_1000ba4b8(float param_1,float param_2,float param_3,long param_4)

{
  *(char *)(param_4 + 0xac) = (char)(int)(param_1 * 255.0);
  *(char *)(param_4 + 0xad) = (char)(int)(param_2 * 255.0);
  *(char *)(param_4 + 0xae) = (char)(int)(param_3 * 255.0);
  return;
}




void FUN_1000ba4e8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  return;
}




void FUN_1000ba4fc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}




void FUN_1000ba504(float param_1,long param_2)

{
  *(char *)(param_2 + 0xaf) = (char)(int)(param_1 * 255.0);
  return;
}




void FUN_1000ba51c(undefined4 param_1,undefined4 param_2,long *param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = param_1;
  uStack_14 = param_2;
  (**(code **)(*param_3 + 0xe8))(param_3,&local_18);
  return;
}




void FUN_1000ba548(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0xa0) = *param_2;
  return;
}




void FUN_1000ba554(long param_1)

{
  *(code **)(param_1 + 0x80) = FUN_1000ba56c;
  *(undefined4 *)(param_1 + 0x88) = 5;
  return;
}




undefined4 FUN_1000ba56c(undefined8 param_1,long param_2)

{
  return *(undefined4 *)(*(long *)(param_2 + 0x38) + 0x1d0);
}




void FUN_1000ba578(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}




void FUN_1000ba580(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}




void FUN_1000ba588(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return;
}




undefined4 FUN_1000ba590(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa8);
}




void FUN_1000ba598(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulong uVar9;
  char *pcVar10;
  uint local_c0 [2];
  uint local_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int local_80;
  undefined8 local_7c;
  undefined7 local_74;
  undefined4 uStack_6d;
  undefined1 local_69;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined1 local_38;
  
  puVar8 = local_c0;
  uVar9 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f;
  if ((((int)uVar9 != 0x1f) && (*(ushort *)(param_2 + uVar9 * 0x38 + 0x90) - 3 < 2)) &&
     (-1 < *(char *)(param_1 + 0xb0))) {
    return;
  }
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(param_4,param_1 + 0xa8);
  }
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    iVar5 = FUN_1003461dc(param_3);
    if (iVar5 != -1) {
      FUN_1003461dc(param_3);
      lVar6 = FUN_100345d90();
      if (lVar6 != 0) {
        param_3 = lVar6;
      }
    }
    uVar7 = FUN_1003a2d9c(param_3);
  }
  local_80 = FUN_1000ba834(param_1,uVar7,param_4);
  if (local_80 == 0) {
    return;
  }
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_7c = 0xffffffff00000000;
  local_74 = 0;
  uStack_6d = 0;
  local_69 = 0xff;
  local_68 = 0;
  local_64 = DAT_101dc1cb8;
  local_5c = 0x3f8000003f800000;
  local_54 = 0x3f800000;
  local_50 = 0;
  local_48 = 0;
  local_44 = 2;
  local_3c = 0x101;
  local_38 = 0;
  iVar5 = FUN_1000ba8f4(param_1,param_4,&local_a0,param_3,param_2,auStack_b0);
  if (iVar5 == 0) {
    return;
  }
  switch(*(ushort *)(param_1 + 0xb0) & 7) {
  case 1:
    lVar6 = FUN_1000e5920(param_2,&local_a0);
    break;
  case 2:
    pcVar10 = *(char **)(param_1 + 0x28);
    if (pcVar10 == (char *)0x0) {
      local_b8 = 0;
    }
    else {
      local_b8 = 0x811c9dc5;
      cVar4 = *pcVar10;
      while (cVar4 != '\0') {
        pcVar10 = pcVar10 + 1;
        local_b8 = (local_b8 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar10;
      }
    }
    puVar8 = &local_b8;
    goto LAB_1000ba7e4;
  case 3:
    (**(code **)(param_1 + 0x28))(param_4,&local_b8);
    pcVar10 = (char *)CONCAT44(uStack_b4,local_b8);
    if (pcVar10 == (char *)0x0) {
      local_c0[0] = 0;
    }
    else {
      local_c0[0] = 0x811c9dc5;
      cVar4 = *pcVar10;
      while (puVar8 = local_c0, cVar4 != '\0') {
        pcVar10 = pcVar10 + 1;
        local_c0[0] = (local_c0[0] ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar10;
      }
    }
LAB_1000ba7e4:
    lVar6 = FUN_1000e5bb0(param_2,&local_a0,puVar8);
    break;
  case 4:
    lVar6 = FUN_1000e5bb8(param_2,&local_a0,*(undefined8 *)(param_1 + 0x28));
    break;
  default:
    goto switchD_1000ba710_default;
  }
  lVar1 = 0;
  if (lVar6 != 0) {
    lVar1 = lVar6 + 0x40;
  }
  puVar2 = &DAT_101dc0b88;
  if (lVar6 != 0) {
    puVar2 = (undefined4 *)(lVar1 + 8);
  }
  uVar3 = *puVar2;
  *(long *)(param_1 + 8) = lVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
switchD_1000ba710_default:
  FUN_1000baa54(param_1,param_4);
  return;
}




void FUN_1000ba834(long param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  char local_4c [36];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  pcVar3 = *(char **)(param_1 + 0x18);
  if (pcVar3 == (char *)0x0) {
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
      (**(code **)(param_1 + 0x30))(param_3,local_4c,0x24);
      pcVar3 = local_4c;
      goto LAB_1000ba890;
    }
  }
  else {
    pcVar1 = *(char **)(param_1 + 0x20);
    if (param_2 == 0) {
      pcVar1 = pcVar3;
    }
    if (*(char **)(param_1 + 0x20) != (char *)0x0) {
      pcVar3 = pcVar1;
    }
LAB_1000ba890:
    cVar4 = *pcVar3;
    if (cVar4 != '\0') {
      uVar2 = 0x811c9dc5;
      do {
        pcVar3 = pcVar3 + 1;
        uVar2 = (uVar2 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar3;
      } while (cVar4 != '\0');
      goto LAB_1000ba8c8;
    }
  }
  uVar2 = 0;
LAB_1000ba8c8:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar2);
  }
  return;
}




undefined8
FUN_1000ba8f4(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,undefined8 param_5,
             long param_6)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  char *local_50;
  long local_48;
  
  local_48 = 0;
  FUN_1000bacb8();
  cVar2 = *(char *)(param_1 + 0xb2);
  *(char *)((long)param_3 + 0x67) = cVar2;
  if (cVar2 != '\0') {
    uVar5 = FUN_1000bada4(param_1 + 0x70,param_2,param_5);
    *(undefined4 *)((long)param_3 + 0x2c) = uVar5;
  }
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    (**(code **)(param_1 + 0x50))
              (param_2,(long)param_3 + 0x44,param_3 + 10,(long)param_3 + 0x54,param_3 + 0xb);
  }
  if (*(code **)(param_1 + 0x58) != (code *)0x0) {
    (**(code **)(param_1 + 0x58))(param_2,(long)param_3 + 0x34);
  }
  local_50 = (char *)0x0;
  if (*(code **)(param_1 + 0x40) == (code *)0x0) {
    if (*(code **)(param_1 + 0x48) != (code *)0x0) {
      (**(code **)(param_1 + 0x48))(param_2,param_6);
    }
    local_48 = 0;
  }
  else {
    plVar1 = param_3 + 1;
    (**(code **)(param_1 + 0x40))(param_2,&local_48,&local_50,plVar1);
    if (local_48 == 0) {
      return 0;
    }
    if (*plVar1 != 0) {
      lVar3 = FUN_100448e2c();
      *plVar1 = lVar3;
    }
  }
  *param_3 = local_48;
  if (local_50 == (char *)0x0) {
    uVar4 = 0x811c9dc5;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar2 = *local_50;
    while (cVar2 != '\0') {
      local_50 = local_50 + 1;
      uVar4 = (uVar4 ^ (int)cVar2) * 0x1000193;
      cVar2 = *local_50;
    }
  }
  *(uint *)(param_3 + 6) = uVar4;
  lVar3 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar3 = param_6;
  }
  param_3[2] = lVar3;
  return 1;
}




void FUN_1000baa54(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined1 auStack_38 [16];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x10) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        if (*(code **)(param_1 + 0x60) != (code *)0x0) {
          (**(code **)(param_1 + 0x60))(param_2,auStack_38);
          plVar1 = *(long **)(param_1 + 8);
          uVar3 = 0;
          if (plVar1 != (long *)0x0) {
            if (*(int *)(param_1 + 0x10) == (int)plVar1[1]) {
              uVar3 = (**(code **)(*plVar1 + 0x10))();
            }
            else {
              uVar3 = 0;
              *(undefined8 *)(param_1 + 8) = 0;
              *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
            }
          }
          FUN_100045be0(uVar3,"Percent",1,auStack_38);
        }
        if (*(code **)(param_1 + 0x68) != (code *)0x0) {
          local_40 = 0;
          local_44 = 0;
          (**(code **)(param_1 + 0x68))(param_2,&local_40,&local_44,auStack_38);
          plVar1 = *(long **)(param_1 + 8);
          uVar3 = 0;
          if (plVar1 != (long *)0x0) {
            if (*(int *)(param_1 + 0x10) == (int)plVar1[1]) {
              uVar3 = (**(code **)(*plVar1 + 0x10))();
            }
            else {
              uVar3 = 0;
              *(undefined8 *)(param_1 + 8) = 0;
              *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
            }
          }
          FUN_100045be0(uVar3,local_40,local_44,auStack_38);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000babc4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x10) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 8);
        if ((*(byte *)(param_1 + 0xb1) & 1) == 0) {
          uVar3 = 0;
          if (plVar1 != (long *)0x0) {
            if (*(int *)(param_1 + 0x10) == (int)plVar1[1]) {
              uVar3 = (**(code **)(*plVar1 + 0x10))();
            }
            else {
              uVar3 = 0;
              *(undefined8 *)(param_1 + 8) = 0;
              *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
            }
          }
          FUN_1000453cc(uVar3);
          return;
        }
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x10) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 8) = 0;
            *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
          }
        }
        FUN_1000453f0(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1000bacb8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (param_4 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_1003a2d9c(param_4);
    uVar1 = uVar1 ^ 1;
  }
  uVar3 = FUN_1000bada4(param_1 + 0x90,param_2,param_5);
  *(undefined4 *)(param_3 + 0x24) = uVar3;
  *(byte *)(param_3 + 100) = *(byte *)(param_1 + 0xb0) >> 3 & 1;
  *(byte *)(param_3 + 0x65) = *(byte *)(param_1 + 0xb0) >> 4 & 1;
  *(uint *)(param_3 + 0x5c) = *(ushort *)(param_1 + 0xb0) >> 5 & 3;
  *(byte *)(param_3 + 0x66) = *(byte *)(param_1 + 0xb0) >> 7;
  *(uint *)(param_3 + 0x60) = uVar1;
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_1 + 0xa8);
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1003a2dc8(param_4);
  }
  *(undefined8 *)(param_3 + 0x18) = uVar2;
  *(byte *)(param_3 + 0x68) = *(byte *)(param_1 + 0xb1) & 1;
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_1 + 0xac);
  *(undefined8 *)(param_3 + 0x3c) = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = FUN_1000bada4(param_1 + 0x80,param_2,param_5);
  *(undefined4 *)(param_3 + 0x38) = uVar3;
  return;
}




undefined1  [16] FUN_1000bada4(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  uint *puVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = 0;
  switch(param_1[2]) {
  case 0:
    break;
  case 1:
    uVar5 = (ulong)*param_1;
    uVar6 = 0;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x0001000bae0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)param_1)();
    return auVar4;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    FUN_1003c64e8(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001000bae34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (*UNRECOVERED_JUMPTABLE)();
    return auVar4;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x0001000bae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)param_1)(param_2);
    return auVar4;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x0001000bae70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)param_1)(param_2,param_3);
    return auVar4;
  case 6:
    plVar2 = (long *)FUN_1003c65cc(param_2);
    if (plVar2 != (long *)0x0) {
      uVar6 = *(undefined8 *)param_1;
      uVar1 = FUN_1004d2524(uVar6);
      uVar6 = FUN_100015208(uVar6,uVar1,0x12345678);
      puVar3 = (uint *)(**(code **)(*plVar2 + 0x18))(plVar2,uVar6);
      uVar5 = (ulong)*puVar3;
      uVar6 = 0;
    }
    break;
  default:
    FUN_1004d22dc(0);
  }
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar5;
  return auVar4;
}




void FUN_1000baed4(long param_1)

{
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xff98 | 0x21;
  return;
}




void FUN_1000baef0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xff98 | 0x22;
  return;
}




void FUN_1000baf10(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xff98 | 0x23;
  return;
}




void FUN_1000baf30(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xff98 | 0x44;
  return;
}




void FUN_1000baf50(long param_1)

{
  *(char **)(param_1 + 0x28) = "CenterBody";
  *(char **)(param_1 + 0x18) = "Effect_TalentStandard";
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xfff0 | 10;
  return;
}




void FUN_1000baf80(long param_1)

{
  *(char **)(param_1 + 0x28) = "CenterBody";
  *(char **)(param_1 + 0x18) = "Effect_TalentStrong";
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xfff0 | 10;
  return;
}




void FUN_1000bafb0(long param_1,undefined8 param_2)

{
  int *piVar1;
  long lVar2;
  char *pcVar3;
  
  *(char **)(param_1 + 0x28) = "OverHead";
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xfff0 | 10;
  piVar1 = (int *)FUN_10034e834(param_2);
  if (*piVar1 == -0x7ee3623b) {
    pcVar3 = "Effect_Nothing";
  }
  else {
    lVar2 = FUN_10033199c();
    if (lVar2 == 0) {
      return;
    }
    pcVar3 = *(char **)(lVar2 + 0x18);
  }
  *(char **)(param_1 + 0x18) = pcVar3;
  return;
}




void FUN_1000bb028(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_1000bb030(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_1000bb038(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_1000bb040(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  return;
}




void FUN_1000bb054(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  return;
}




void FUN_1000bb05c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_1000bb064(long param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 8;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xfff7 | uVar1;
  return;
}




void FUN_1000bb084(long param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0x10;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xffef | uVar1;
  return;
}




void FUN_1000bb0a4(long param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0x80;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xff7f | uVar1;
  return;
}




void FUN_1000bb0c4(long param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined1 *)(param_1 + 0xb2) = 1;
  return;
}




void FUN_1000bb0d8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined1 *)(param_1 + 0xb2) = 1;
  return;
}




void FUN_1000bb0f4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}




void FUN_1000bb0fc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}




void FUN_1000bb104(long param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0x100;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xfeff | uVar1;
  return;
}




void FUN_1000bb124(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xff9f | (param_2 & 3) << 5;
  return;
}




void FUN_1000bb13c(float param_1,float param_2,float param_3,long param_4)

{
  *(char *)(param_4 + 0xac) = (char)(int)(param_1 * 255.0);
  *(char *)(param_4 + 0xad) = (char)(int)(param_2 * 255.0);
  *(char *)(param_4 + 0xae) = (char)(int)(param_3 * 255.0);
  return;
}




void FUN_1000bb16c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  return;
}




void FUN_1000bb180(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return;
}




void FUN_1000bb188(float param_1,long param_2)

{
  *(char *)(param_2 + 0xaf) = (char)(int)(param_1 * 255.0);
  return;
}




void FUN_1000bb1a0(undefined4 param_1,undefined4 param_2,long *param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = param_1;
  uStack_14 = param_2;
  (**(code **)(*param_3 + 0xe8))(param_3,&local_18);
  return;
}




void FUN_1000bb1cc(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0xa0) = *param_2;
  return;
}




void FUN_1000bb1d8(long param_1)

{
  *(code **)(param_1 + 0x80) = FUN_1000bb1f0;
  *(undefined4 *)(param_1 + 0x88) = 5;
  return;
}




undefined4 FUN_1000bb1f0(undefined8 param_1,long param_2)

{
  return *(undefined4 *)(*(long *)(param_2 + 0x38) + 0x1d0);
}




void FUN_1000bb1fc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}




void FUN_1000bb204(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}




void FUN_1000bb20c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x68) = param_2;
  return;
}




undefined4 FUN_1000bb214(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa8);
}




void FUN_1000bb21c(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulong uVar9;
  char *pcVar10;
  uint local_c0 [2];
  uint local_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  int local_80;
  undefined8 local_7c;
  undefined7 local_74;
  undefined4 uStack_6d;
  undefined1 local_69;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined1 local_38;
  
  puVar8 = local_c0;
  uVar9 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f;
  if ((((int)uVar9 != 0x1f) && (*(ushort *)(param_2 + uVar9 * 0x38 + 0x90) - 3 < 2)) &&
     (-1 < *(char *)(param_1 + 0xb0))) {
    return;
  }
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
    (**(code **)(param_1 + 0x38))(param_4,param_1 + 0xa8);
  }
  if (param_3 == 0) {
    uVar7 = 0;
  }
  else {
    iVar5 = FUN_1003461dc(param_3);
    if (iVar5 != -1) {
      FUN_1003461dc(param_3);
      lVar6 = FUN_100345d90();
      if (lVar6 != 0) {
        param_3 = lVar6;
      }
    }
    uVar7 = FUN_1003a2d9c(param_3);
  }
  local_80 = FUN_1000bb4b8(param_1,uVar7,param_4);
  if (local_80 == 0) {
    return;
  }
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_7c = 0xffffffff00000000;
  local_74 = 0;
  uStack_6d = 0;
  local_69 = 0xff;
  local_68 = 0;
  local_64 = DAT_101dc1cb8;
  local_5c = 0x3f8000003f800000;
  local_54 = 0x3f800000;
  local_50 = 0;
  local_48 = 0;
  local_44 = 2;
  local_3c = 0x101;
  local_38 = 0;
  iVar5 = FUN_1000bb578(param_1,param_4,&local_a0,param_3,param_2,auStack_b0);
  if (iVar5 == 0) {
    return;
  }
  switch(*(ushort *)(param_1 + 0xb0) & 7) {
  case 1:
    lVar6 = FUN_1000e5920(param_2,&local_a0);
    break;
  case 2:
    pcVar10 = *(char **)(param_1 + 0x28);
    if (pcVar10 == (char *)0x0) {
      local_b8 = 0;
    }
    else {
      local_b8 = 0x811c9dc5;
      cVar4 = *pcVar10;
      while (cVar4 != '\0') {
        pcVar10 = pcVar10 + 1;
        local_b8 = (local_b8 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar10;
      }
    }
    puVar8 = &local_b8;
    goto LAB_1000bb468;
  case 3:
    (**(code **)(param_1 + 0x28))(param_4,&local_b8);
    pcVar10 = (char *)CONCAT44(uStack_b4,local_b8);
    if (pcVar10 == (char *)0x0) {
      local_c0[0] = 0;
    }
    else {
      local_c0[0] = 0x811c9dc5;
      cVar4 = *pcVar10;
      while (puVar8 = local_c0, cVar4 != '\0') {
        pcVar10 = pcVar10 + 1;
        local_c0[0] = (local_c0[0] ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar10;
      }
    }
LAB_1000bb468:
    lVar6 = FUN_1000e5bb0(param_2,&local_a0,puVar8);
    break;
  case 4:
    lVar6 = FUN_1000e5bb8(param_2,&local_a0,*(undefined8 *)(param_1 + 0x28));
    break;
  default:
    goto switchD_1000bb394_default;
  }
  lVar1 = 0;
  if (lVar6 != 0) {
    lVar1 = lVar6 + 0x40;
  }
  puVar2 = &DAT_101dc0b88;
  if (lVar6 != 0) {
    puVar2 = (undefined4 *)(lVar1 + 8);
  }
  uVar3 = *puVar2;
  *(long *)(param_1 + 8) = lVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
switchD_1000bb394_default:
  FUN_1000bb6d8(param_1,param_4);
  return;
}




void FUN_1000bb4b8(long param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  char local_4c [36];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  pcVar3 = *(char **)(param_1 + 0x18);
  if (pcVar3 == (char *)0x0) {
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
      (**(code **)(param_1 + 0x30))(param_3,local_4c,0x24);
      pcVar3 = local_4c;
      goto LAB_1000bb514;
    }
  }
  else {
    pcVar1 = *(char **)(param_1 + 0x20);
    if (param_2 == 0) {
      pcVar1 = pcVar3;
    }
    if (*(char **)(param_1 + 0x20) != (char *)0x0) {
      pcVar3 = pcVar1;
    }
LAB_1000bb514:
    cVar4 = *pcVar3;
    if (cVar4 != '\0') {
      uVar2 = 0x811c9dc5;
      do {
        pcVar3 = pcVar3 + 1;
        uVar2 = (uVar2 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar3;
      } while (cVar4 != '\0');
      goto LAB_1000bb54c;
    }
  }
  uVar2 = 0;
LAB_1000bb54c:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar2);
  }
  return;
}




undefined8
FUN_1000bb578(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,undefined8 param_5,
             long param_6)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  char *local_50;
  long local_48;
  
  local_48 = 0;
  FUN_1000bbdb8();
  cVar2 = *(char *)(param_1 + 0xb2);
  *(char *)((long)param_3 + 0x67) = cVar2;
  if (cVar2 != '\0') {
    uVar5 = FUN_1000bbea4(param_1 + 0x70,param_2,param_5);
    *(undefined4 *)((long)param_3 + 0x2c) = uVar5;
  }
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    (**(code **)(param_1 + 0x50))
              (param_2,(long)param_3 + 0x44,param_3 + 10,(long)param_3 + 0x54,param_3 + 0xb);
  }
  if (*(code **)(param_1 + 0x58) != (code *)0x0) {
    (**(code **)(param_1 + 0x58))(param_2,(long)param_3 + 0x34);
  }
  local_50 = (char *)0x0;
  if (*(code **)(param_1 + 0x40) == (code *)0x0) {
    if (*(code **)(param_1 + 0x48) != (code *)0x0) {
      (**(code **)(param_1 + 0x48))(param_2,param_6);
    }
    local_48 = 0;
  }
  else {
    plVar1 = param_3 + 1;
    (**(code **)(param_1 + 0x40))(param_2,&local_48,&local_50,plVar1);
    if (local_48 == 0) {
      return 0;
    }
    if (*plVar1 != 0) {
      lVar3 = FUN_100448e2c();
      *plVar1 = lVar3;
    }
  }
  *param_3 = local_48;
  if (local_50 == (char *)0x0) {
    uVar4 = 0x811c9dc5;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar2 = *local_50;
    while (cVar2 != '\0') {
      local_50 = local_50 + 1;
      uVar4 = (uVar4 ^ (int)cVar2) * 0x1000193;
      cVar2 = *local_50;
    }
  }
  *(uint *)(param_3 + 6) = uVar4;
  lVar3 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar3 = param_6;
  }
  param_3[2] = lVar3;
  return 1;
}




void FUN_1000bb6d8(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_44;
  undefined8 local_40;
  undefined1 auStack_38 [16];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x10) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        if (*(code **)(param_1 + 0x60) != (code *)0x0) {
          (**(code **)(param_1 + 0x60))(param_2,auStack_38);
          plVar1 = *(long **)(param_1 + 8);
          uVar3 = 0;
          if (plVar1 != (long *)0x0) {
            if (*(int *)(param_1 + 0x10) == (int)plVar1[1]) {
              uVar3 = (**(code **)(*plVar1 + 0x10))();
            }
            else {
              uVar3 = 0;
              *(undefined8 *)(param_1 + 8) = 0;
              *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
            }
          }
          FUN_100045be0(uVar3,"Percent",1,auStack_38);
        }
        if (*(code **)(param_1 + 0x68) != (code *)0x0) {
          local_40 = 0;
          local_44 = 0;
          (**(code **)(param_1 + 0x68))(param_2,&local_40,&local_44,auStack_38);
          plVar1 = *(long **)(param_1 + 8);
          uVar3 = 0;
          if (plVar1 != (long *)0x0) {
            if (*(int *)(param_1 + 0x10) == (int)plVar1[1]) {
              uVar3 = (**(code **)(*plVar1 + 0x10))();
            }
            else {
              uVar3 = 0;
              *(undefined8 *)(param_1 + 8) = 0;
              *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
            }
          }
          FUN_100045be0(uVar3,local_40,local_44,auStack_38);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000bb848(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x10) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 8);
        if ((*(byte *)(param_1 + 0xb1) & 1) == 0) {
          uVar3 = 0;
          if (plVar1 != (long *)0x0) {
            if (*(int *)(param_1 + 0x10) == (int)plVar1[1]) {
              uVar3 = (**(code **)(*plVar1 + 0x10))();
            }
            else {
              uVar3 = 0;
              *(undefined8 *)(param_1 + 8) = 0;
              *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
            }
          }
          FUN_1000453cc(uVar3);
          return;
        }
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x10) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 8) = 0;
            *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
          }
        }
        FUN_1000453f0(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1000bb93c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_c0 [16];
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined8 uStack_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  int iStack_80;
  undefined3 uStack_7c;
  undefined1 local_79;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined1 local_48;
  
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        if (param_3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_1003a2d9c(param_3);
        }
        local_90 = FUN_1000bb4b8(param_1,uVar4,param_4);
        if (local_90 != 0) {
          lStack_a8 = 0;
          local_b0 = 0;
          uStack_98 = 0;
          local_a0 = 0;
          local_8c = 0xffffffff00000000;
          local_84 = 0;
          iStack_80 = 0;
          uStack_7c = 0;
          local_79 = 0xff;
          local_78 = 0;
          local_74 = DAT_101dc1cb8;
          local_6c = 0x3f8000003f800000;
          local_64 = 0x3f800000;
          local_60 = 0;
          local_58 = 0;
          local_54 = 2;
          local_4c = 0x101;
          local_48 = 0;
          FUN_1000bb578(param_1,param_4,&local_b0,param_3,param_2,auStack_c0);
          if (local_4c._3_1_ != '\0') {
            plVar2 = *(long **)(param_1 + 8);
            uVar4 = 0;
            if (plVar2 != (long *)0x0) {
              if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
                uVar4 = (**(code **)(*plVar2 + 0x10))();
              }
              else {
                uVar4 = 0;
                *(undefined8 *)(param_1 + 8) = 0;
                *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
              }
            }
            FUN_100045764(local_84,uVar4);
          }
          if (local_b0 == 0) {
            if (local_a0 != 0) {
              plVar2 = *(long **)(param_1 + 8);
              uVar4 = 0;
              if (plVar2 != (long *)0x0) {
                if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
                  uVar4 = (**(code **)(*plVar2 + 0x10))();
                }
                else {
                  uVar4 = 0;
                  *(undefined8 *)(param_1 + 8) = 0;
                  *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
                }
              }
              FUN_100045ab4(uVar4,local_a0);
            }
          }
          else if (lStack_a8 == 0) {
            plVar2 = *(long **)(param_1 + 8);
            if ((iStack_80 == -0x7ee3623b) || (iStack_80 == 0)) {
              uVar4 = 0;
              if (plVar2 != (long *)0x0) {
                if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
                  uVar4 = (**(code **)(*plVar2 + 0x10))();
                }
                else {
                  uVar4 = 0;
                  *(undefined8 *)(param_1 + 8) = 0;
                  *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
                }
              }
              FUN_1000458d0(uVar4,local_b0);
            }
            else {
              uVar4 = 0;
              if (plVar2 != (long *)0x0) {
                if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
                  uVar4 = (**(code **)(*plVar2 + 0x10))();
                }
                else {
                  uVar4 = 0;
                  *(undefined8 *)(param_1 + 8) = 0;
                  *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
                }
              }
              FUN_100045a88(uVar4,local_b0,&iStack_80);
            }
          }
          else {
            plVar2 = *(long **)(param_1 + 8);
            if (plVar2 == (long *)0x0) {
              uVar4 = 0;
            }
            else if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
            }
            else {
              uVar4 = 0;
              *(undefined8 *)(param_1 + 8) = 0;
              *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
            }
            lVar3 = local_b0;
            uVar5 = FUN_1010acd98(lStack_a8);
            FUN_100045a68(uVar4,lVar3,uVar5);
          }
          uVar6 = local_60 & 0xffffffff;
          bVar1 = false;
          if ((local_60._4_4_ == 0.0) && (bVar1 = false, !NAN((float)local_60))) {
            bVar1 = (float)local_60 == 0.0;
          }
          if (!bVar1) {
            plVar2 = *(long **)(param_1 + 8);
            uVar4 = 0;
            if (plVar2 != (long *)0x0) {
              if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
                uVar4 = (**(code **)(*plVar2 + 0x10))();
                uVar6 = local_60 & 0xffffffff;
              }
              else {
                uVar4 = 0;
                *(undefined8 *)(param_1 + 8) = 0;
                *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
              }
            }
            FUN_100045b44(uVar6,local_60._4_4_,local_58,uVar4,&local_6c);
          }
          plVar2 = *(long **)(param_1 + 8);
          uVar4 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              uVar4 = 0;
              *(undefined8 *)(param_1 + 8) = 0;
              *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
            }
          }
          FUN_100045bc0(uVar4,&uStack_7c);
          plVar2 = *(long **)(param_1 + 8);
          uVar4 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              uVar4 = 0;
              *(undefined8 *)(param_1 + 8) = 0;
              *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
            }
          }
          FUN_100045bcc(local_78,uVar4);
          plVar2 = *(long **)(param_1 + 8);
          uVar4 = 0;
          if (plVar2 != (long *)0x0) {
            if (*(int *)(param_1 + 0x10) == (int)plVar2[1]) {
              uVar4 = (**(code **)(*plVar2 + 0x10))();
            }
            else {
              uVar4 = 0;
              *(undefined8 *)(param_1 + 8) = 0;
              *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
            }
          }
          FUN_100045bd4(uVar4,&local_74);
          FUN_1000bb6d8(param_1,param_4);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1000bbdb8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (param_4 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_1003a2d9c(param_4);
    uVar1 = uVar1 ^ 1;
  }
  uVar3 = FUN_1000bbea4(param_1 + 0x90,param_2,param_5);
  *(undefined4 *)(param_3 + 0x24) = uVar3;
  *(byte *)(param_3 + 100) = *(byte *)(param_1 + 0xb0) >> 3 & 1;
  *(byte *)(param_3 + 0x65) = *(byte *)(param_1 + 0xb0) >> 4 & 1;
  *(uint *)(param_3 + 0x5c) = *(ushort *)(param_1 + 0xb0) >> 5 & 3;
  *(byte *)(param_3 + 0x66) = *(byte *)(param_1 + 0xb0) >> 7;
  *(uint *)(param_3 + 0x60) = uVar1;
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_1 + 0xa8);
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1003a2dc8(param_4);
  }
  *(undefined8 *)(param_3 + 0x18) = uVar2;
  *(byte *)(param_3 + 0x68) = *(byte *)(param_1 + 0xb1) & 1;
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_1 + 0xac);
  *(undefined8 *)(param_3 + 0x3c) = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = FUN_1000bbea4(param_1 + 0x80,param_2,param_5);
  *(undefined4 *)(param_3 + 0x38) = uVar3;
  return;
}




undefined1  [16] FUN_1000bbea4(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  uint *puVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = 0;
  switch(param_1[2]) {
  case 0:
    break;
  case 1:
    uVar5 = (ulong)*param_1;
    uVar6 = 0;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x0001000bbf0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)param_1)();
    return auVar4;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    FUN_100451018(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001000bbf34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (*UNRECOVERED_JUMPTABLE)();
    return auVar4;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x0001000bbf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)param_1)(param_2);
    return auVar4;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x0001000bbf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar4 = (**(code **)param_1)(param_2,param_3);
    return auVar4;
  case 6:
    plVar2 = (long *)FUN_10045104c(param_2);
    if (plVar2 != (long *)0x0) {
      uVar6 = *(undefined8 *)param_1;
      uVar1 = FUN_1004d2524(uVar6);
      uVar6 = FUN_100015208(uVar6,uVar1,0x12345678);
      puVar3 = (uint *)(**(code **)(*plVar2 + 0x18))(plVar2,uVar6);
      uVar5 = (ulong)*puVar3;
      uVar6 = 0;
    }
    break;
  default:
    FUN_1004d22dc(0);
  }
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar5;
  return auVar4;
}




void FUN_1000bbfd4(void)

{
  return;
}




long FUN_1000bbfd8(long param_1)

{
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xff98 | 0x21;
  return param_1 + 0x18;
}




long FUN_1000bbffc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xff98 | 0x22;
  return param_1 + 0x18;
}




long FUN_1000bc024(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xff98 | 0x44;
  return param_1 + 0x18;
}




void FUN_1000bc04c(long param_1)

{
  *(char **)(param_1 + 0x40) = "CenterBody";
  *(char **)(param_1 + 0x30) = "Effect_TalentStandard";
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xfff0 | 10;
  return;
}




void FUN_1000bc07c(long param_1)

{
  *(char **)(param_1 + 0x40) = "CenterBody";
  *(char **)(param_1 + 0x30) = "Effect_TalentStrong";
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xfff0 | 10;
  return;
}




void FUN_1000bc0ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1003a2b6c(param_2);
  FUN_1000ba598(param_1 + 0x18,uVar1,uVar1,param_2);
  return;
}




void FUN_1000bc0e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1003a2b6c(param_2);
  FUN_1000babc4(param_1 + 0x18,uVar1);
  return;
}




void FUN_1000bc110(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = &PTR_FUN_101453d58;
  *param_1 = &PTR_FUN_101453c08;
  param_1[3] = &PTR_FUN_101453ad8;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x16) = 1;
  param_1[0x17] = DAT_101dc1cb8;
  *(int *)(param_1 + 0x18) = (int)(param_1 + 3);
  *(undefined4 *)((long)param_1 + 0xc4) = 0xff000000;
  *(ushort *)(param_1 + 0x19) = *(ushort *)(param_1 + 0x19) & 0xfe00 | 0x30;
  *(undefined1 *)((long)param_1 + 0xca) = 0;
  *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xe0;
  return;
}




void thunk_FUN_1000bc110(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = &PTR_FUN_101453d58;
  *param_1 = &PTR_FUN_101453c08;
  param_1[3] = &PTR_FUN_101453ad8;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = DAT_101dc0b88;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x16) = 1;
  param_1[0x17] = DAT_101dc1cb8;
  *(int *)(param_1 + 0x18) = (int)(param_1 + 3);
  *(undefined4 *)((long)param_1 + 0xc4) = 0xff000000;
  *(ushort *)(param_1 + 0x19) = *(ushort *)(param_1 + 0x19) & 0xfe00 | 0x30;
  *(undefined1 *)((long)param_1 + 0xca) = 0;
  *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) & 0xe0;
  return;
}




void FUN_1000bc1c0(long param_1)

{
  *(code **)(param_1 + 0x88) = FUN_1000bc1e0;
  *(undefined4 *)(param_1 + 0x90) = 4;
  *(undefined1 *)(param_1 + 0xca) = 1;
  return;
}




void FUN_1000bc1e0(undefined8 *param_1)

{
  FUN_100432da4(*param_1);
  return;
}




void FUN_1000bc1e8(long param_1)

{
  *(code **)(param_1 + 0x88) = FUN_1000bc208;
  *(undefined4 *)(param_1 + 0x90) = 4;
  *(undefined1 *)(param_1 + 0xca) = 1;
  return;
}




void FUN_1000bc208(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar1 = FUN_10042e2a4(*param_1);
  uVar2 = FUN_10042e864(*param_1);
  FUN_1003b3928(uVar1,uVar2,&local_28);
  _atan2f(uStack_24,local_28);
  return;
}




void FUN_1000bc258(long param_1)

{
  *(code **)(param_1 + 0x88) = FUN_1000bc278;
  *(undefined4 *)(param_1 + 0x90) = 4;
  *(undefined1 *)(param_1 + 0xca) = 1;
  return;
}




void FUN_1000bc278(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float local_38;
  float fStack_34;
  
  fVar2 = (float)FUN_100432da4(*param_1);
  fVar3 = (float)FUN_100432e08(*param_1);
  uVar1 = FUN_10042e864(*param_1);
  FUN_1003c6514(uVar1,&local_38);
  _atan2f(fVar3 - fStack_34,fVar2 - local_38);
  return;
}




void FUN_1000bc2dc(long param_1)

{
  *(code **)(param_1 + 0x88) = FUN_1000bc2fc;
  *(undefined4 *)(param_1 + 0x90) = 4;
  *(undefined1 *)(param_1 + 0xca) = 1;
  return;
}




undefined1  [16] FUN_1000bc2fc(undefined8 *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float *pfVar5;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar6 [16];
  
  FUN_10042e2a4(*param_1);
  pfVar5 = (float *)FUN_10044b4a4();
  bVar1 = false;
  bVar3 = false;
  if (ABS(*pfVar5) < 1.1920929e-07) {
    bVar1 = false;
    bVar3 = true;
    if (!NAN(ABS(pfVar5[1]))) {
      bVar1 = ABS(pfVar5[1]) < 1.1920929e-07;
      bVar3 = false;
    }
  }
  bVar2 = false;
  bVar4 = false;
  if (bVar1 != bVar3) {
    bVar2 = false;
    bVar4 = true;
    if (!NAN(ABS(pfVar5[2]))) {
      bVar2 = ABS(pfVar5[2]) < 1.1920929e-07;
      bVar4 = false;
    }
  }
  if (bVar2 == bVar4) {
    _atan2f();
    auVar6._4_4_ = extraout_var;
    auVar6._0_4_ = extraout_s0;
    auVar6._8_8_ = extraout_var_00;
    return auVar6;
  }
  return ZEXT816(0);
}




void FUN_1000bc354(long param_1)

{
  *(code **)(param_1 + 0x78) = FUN_1000bc364;
  return;
}




void FUN_1000bc364(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_10042fc00(*param_1);
  fVar2 = (float)FUN_10042f8e0(*param_1);
  *param_2 = 1.0 - fVar1 / fVar2;
  return;
}




void FUN_1000bc3b0(long param_1)

{
  *(code **)(param_1 + 0x78) = FUN_1000bc3c0;
  return;
}




void FUN_1000bc3c0(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_10042fc00(*param_1);
  fVar2 = (float)FUN_10042f8e0(*param_1);
  *param_2 = fVar1 / fVar2;
  return;
}




long FUN_1000bc404(long param_1)

{
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xff98 | 0x21;
  return param_1 + 0x18;
}




long FUN_1000bc428(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xff98 | 0x22;
  return param_1 + 0x18;
}




long FUN_1000bc450(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xff98 | 0x23;
  return param_1 + 0x18;
}




long FUN_1000bc478(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xff98 | 0x44;
  return param_1 + 0x18;
}




void FUN_1000bc4a0(long param_1)

{
  *(char **)(param_1 + 0x40) = "CenterBody";
  *(char **)(param_1 + 0x30) = "Effect_TalentStandard";
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xfff0 | 10;
  return;
}




void FUN_1000bc4d0(long param_1)

{
  *(char **)(param_1 + 0x40) = "CenterBody";
  *(char **)(param_1 + 0x30) = "Effect_TalentStrong";
  *(ushort *)(param_1 + 200) = *(ushort *)(param_1 + 200) & 0xfff0 | 10;
  return;
}




void FUN_1000bc500(long param_1)

{
  FUN_1000bafb0(param_1 + 0x18);
  return;
}




void FUN_1000bc508(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 0xf8 | param_2 & 7;
  return;
}




void FUN_1000bc518(long param_1)

{
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 8;
  return;
}




void FUN_1000bc528(long param_1)

{
  *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) | 0x10;
  return;
}




void thunk_FUN_1000bc53c(void)

{
  FUN_1000bc53c();
  return;
}




void FUN_1000bc53c(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  float local_34;
  
  switch(*(byte *)(param_1 + 0xd0) & 7) {
  case 1:
    iVar2 = FUN_10042e2b0(*param_2);
    goto LAB_1000bc5d4;
  case 2:
    FUN_10042e2b0(*param_2);
    lVar5 = FUN_100345d90();
    if (lVar5 != 0) {
      FUN_10034ee90();
      FUN_100345d90();
      iVar2 = FUN_100345bbc();
      iVar1 = FUN_100345bbc(lVar5);
      if (iVar2 != iVar1) {
        return;
      }
    }
    break;
  case 3:
    FUN_10042e2a4(*param_2);
    iVar2 = FUN_1003461dc();
LAB_1000bc5d4:
    iVar1 = FUN_10034ee90();
    if (iVar2 != iVar1) {
      return;
    }
    break;
  case 4:
    lVar5 = FUN_10042e2a4(*param_2);
    FUN_10034ee90();
    uVar4 = FUN_10034e738();
    iVar2 = FUN_1003dcd70(*(undefined8 *)(lVar5 + 0x80),uVar4);
    if (iVar2 == 0) {
      return;
    }
  }
  uVar4 = FUN_10042e2a4(*param_2);
  FUN_10042e2b0(*param_2);
  lVar5 = FUN_100345d90();
  if ((lVar5 != 0) && (iVar2 = FUN_1003461dc(lVar5), iVar2 != -1)) {
    FUN_1003461dc(lVar5);
    lVar5 = FUN_100345d90();
  }
  FUN_1000bb21c(param_1 + 0x18,uVar4,lVar5,param_2);
  uVar3 = FUN_10042e2b8(*param_2);
  local_34 = (float)uVar3;
  FUN_100438560(uVar4,*(undefined4 *)(param_1 + 0xc0),"Stacks",1,&local_34);
  return;
}




void FUN_1000bc6ac(long param_1)

{
  *(undefined4 *)(param_1 + 0xa8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xb0) = 1;
  *(ushort *)(param_1 + 200) =
       *(ushort *)(param_1 + 200) | ~(ushort)*(byte *)(param_1 + 0xd0) & 8 | 0x10;
  FUN_1000bc53c();
  return;
}




void FUN_1000bc6dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10042e2a4(*param_2);
  FUN_1000bb848(param_1 + 0x18,uVar1);
  return;
}




void FUN_1000bc708(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  float local_34;
  
  if ((*(byte *)(param_1 + 0xd0) >> 4 & 1) == 0) {
    uVar3 = FUN_10042e2a4(*param_2);
    FUN_10042e2b0(*param_2);
    lVar4 = FUN_100345d90();
    if (lVar4 != 0) {
      iVar1 = FUN_1003461dc(lVar4);
      if (iVar1 != -1) {
        FUN_1003461dc(lVar4);
        lVar4 = FUN_100345d90();
      }
    }
    FUN_1000bb93c(param_1 + 0x18,uVar3,lVar4,param_2);
    uVar2 = FUN_10042e2b8(*param_2);
    local_34 = (float)uVar2;
    FUN_100438560(uVar3,*(undefined4 *)(param_1 + 0xc0),"Stacks",1,&local_34);
    return;
  }
  uVar3 = FUN_10042e2a4(*param_2);
  FUN_1000bb848(param_1 + 0x18,uVar3);
  FUN_1000bc53c(param_1,param_2);
  return;
}




void FUN_1000bc800(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014539a8;
  return;
}




void FUN_1000bc814(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101453ad8;
  return;
}




void FUN_1000bc828(void)

{
  return;
}




void FUN_1000bc82c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101453cc8;
  param_1[3] = &PTR_FUN_1014539a8;
  FUN_1003d21e8();
  return;
}




void FUN_1000bc848(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101453cc8;
  param_1[3] = &PTR_FUN_1014539a8;
  pvVar1 = (void *)FUN_1003d21e8();
  operator_delete(pvVar1);
  return;
}




void FUN_1000bc874(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101453c08;
  param_1[3] = &PTR_FUN_101453ad8;
  return;
}




void FUN_1000bc894(void)

{
  return;
}




void FUN_1000bc89c(void)

{
  return;
}




void FUN_1000bc8a0(void)

{
  return;
}




void FUN_1000bc8a4(void)

{
  return;
}




void FUN_1000bc8a8(void)

{
  return;
}




void FUN_1000bc8ac(void)

{
  return;
}




void FUN_1000bc8b0(void)

{
  return;
}




void FUN_1000bc8b4(void)

{
  return;
}




void FUN_1000bc8b8(void)

{
  return;
}




void FUN_1000bc8bc(void)

{
  return;
}




void FUN_1000bc8c0(void)

{
  return;
}




void FUN_1000bc8c4(void)

{
  return;
}




void FUN_1000bc8c8(void)

{
  return;
}




void FUN_1000bc8cc(void)

{
  return;
}




void FUN_1000bc8d0(void)

{
  return;
}




void FUN_1000bc8d4(void)

{
  return;
}




void FUN_1000bc8d8(void)

{
  return;
}




void FUN_1000bc8dc(void)

{
  return;
}




void FUN_1000bc8e0(void)

{
  return;
}




void FUN_1000bc8e4(void)

{
  return;
}




void FUN_1000bc8e8(void)

{
  return;
}




void FUN_1000bc8ec(void)

{
  return;
}




void FUN_1000bc8f0(void)

{
  return;
}




void FUN_1000bc8f4(void)

{
  return;
}




void FUN_1000bc8f8(void)

{
  return;
}




void FUN_1000bc8fc(void)

{
  return;
}




void FUN_1000bc900(void)

{
  return;
}




void FUN_1000bc904(void)

{
  return;
}




void FUN_1000bc908(void)

{
  return;
}




void FUN_1000bc90c(void)

{
  return;
}




void FUN_1000bc910(void)

{
  return;
}




undefined8 FUN_1000bc914(void)

{
  return 0;
}




void FUN_1000bc91c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  FUN_10034ee90();
  lVar1 = FUN_100345d90();
  if (lVar1 != 0) {
    FUN_10048eb00(param_2 + 0x10,lVar1);
    return;
  }
  return;
}




void FUN_1000bc958(undefined8 param_1,long param_2)

{
  long lVar1;
  
  FUN_10034ee90();
  lVar1 = FUN_100345d90();
  if (lVar1 != 0) {
    FUN_10048eb00(param_2 + 0x10,lVar1);
    return;
  }
  return;
}




void FUN_1000bc994(void)

{
  return;
}




void FUN_1000bc99c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101453ed0;
  *(undefined1 *)(param_1 + 7) = 0xff;
  *(byte *)((long)param_1 + 0x39) = *(byte *)((long)param_1 + 0x39) & 0xe0 | 0x10;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  return;
}




void FUN_1000bc9d8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xf8 | 1;
  return;
}




void FUN_1000bc9f0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + ((ulong)*(byte *)(param_1 + 0x39) & 7) * 8 + 8) = param_2;
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xf8 | *(byte *)(param_1 + 0x39) + 1 & 7;
  return;
}




void FUN_1000bca14(float param_1,long param_2)

{
  *(char *)(param_2 + 0x38) = (char)(int)(param_1 * 255.0);
  return;
}




void FUN_1000bca2c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x34) = param_1;
  return;
}




void FUN_1000bca34(long param_1)

{
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) | 8;
  return;
}




void FUN_1000bca44(long param_1)

{
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xef;
  return;
}




undefined8 FUN_1000bca54(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  lVar5 = *(long *)(param_2 + 0x18);
  while( true ) {
    if (lVar5 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184db58) break;
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  iVar2 = _rand();
  if ((int)(uint)*(byte *)(param_1 + 0x38) < iVar2 % 0x100) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x39);
  if ((bVar1 >> 3 & 1) != 0) {
    iVar2 = FUN_10034ea2c(*(undefined4 *)(param_2 + 0x260));
    if (iVar2 == 0) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + 0x39);
  }
  iVar3 = _rand();
  iVar2 = 0;
  if ((bVar1 & 7) != 0) {
    iVar2 = iVar3 / (int)(bVar1 & 7);
  }
  lVar6 = *(long *)(param_1 + (long)(int)(iVar3 - iVar2 * (bVar1 & 7)) * 8 + 8);
  if (lVar6 == 0) {
    return 0;
  }
  uVar7 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = FUN_1003a2dc8(param_4);
  uVar4 = FUN_100023f08(uVar7,lVar5,lVar6,param_3,uVar4);
  return uVar4;
}




void FUN_1000bcb54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101453f20;
  *(undefined1 *)(param_1 + 7) = 0xff;
  *(byte *)((long)param_1 + 0x39) = *(byte *)((long)param_1 + 0x39) & 0xe0 | 0x10;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  return;
}




void FUN_1000bcb90(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xf8 | 1;
  return;
}




void FUN_1000bcba8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + ((ulong)*(byte *)(param_1 + 0x39) & 7) * 8 + 8) = param_2;
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xf8 | *(byte *)(param_1 + 0x39) + 1 & 7;
  return;
}




void FUN_1000bcbcc(float param_1,long param_2)

{
  *(char *)(param_2 + 0x38) = (char)(int)(param_1 * 255.0);
  return;
}




void FUN_1000bcbe4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x34) = param_1;
  return;
}




void FUN_1000bcbec(long param_1)

{
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) | 8;
  return;
}




void FUN_1000bcbfc(long param_1)

{
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) & 0xef;
  return;
}




undefined8 FUN_1000bcc0c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  lVar5 = *(long *)(param_2 + 0x18);
  while( true ) {
    if (lVar5 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184db58) break;
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  iVar2 = _rand();
  if ((int)(uint)*(byte *)(param_1 + 0x38) < iVar2 % 0x100) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x39);
  if ((bVar1 >> 3 & 1) != 0) {
    iVar2 = FUN_10034ea2c(*(undefined4 *)(param_2 + 0x260));
    if (iVar2 == 0) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + 0x39);
  }
  iVar3 = _rand();
  iVar2 = 0;
  if ((bVar1 & 7) != 0) {
    iVar2 = iVar3 / (int)(bVar1 & 7);
  }
  lVar6 = *(long *)(param_1 + (long)(int)(iVar3 - iVar2 * (bVar1 & 7)) * 8 + 8);
  if (lVar6 == 0) {
    return 0;
  }
  uVar7 = *(undefined4 *)(param_1 + 0x34);
  bVar1 = *(byte *)(param_1 + 0x39);
  uVar4 = FUN_1003a2dc8(param_4);
  uVar4 = FUN_100023f9c(uVar7,lVar5,lVar6,param_3,1,0xffffffff,bVar1 >> 4 & 1,uVar4);
  return uVar4;
}




void FUN_1000bcd20(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  uVar3 = FUN_1003a2b6c(param_2);
  iVar1 = FUN_1003461dc();
  if (iVar1 != -1) {
    FUN_1003461dc(uVar3);
    uVar3 = FUN_100345d90();
  }
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    uVar4 = FUN_1003a2b6c(param_2);
    FUN_1000bcc0c(param_1 + 0x18,uVar4,0,uVar3);
    return;
  }
  iVar1 = FUN_1003a6c94(param_2);
  if (iVar1 != 0) {
    uVar6 = 0;
    do {
      lVar5 = FUN_1003a6ca4(param_2,uVar6);
      if (lVar5 != 0) {
        FUN_1000bcc0c(param_1 + 0x18,lVar5,0,uVar3);
      }
      uVar6 = uVar6 + 1;
      uVar2 = FUN_1003a6c94(param_2);
    } while (uVar6 < uVar2);
  }
  return;
}




void FUN_1000bcdf8(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  lVar3 = FUN_10044fec8(*param_2);
  if (lVar3 != 0) {
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      uVar4 = FUN_10042e2a4(*param_2);
      FUN_1000bca54(param_1 + 0x18,uVar4,0,lVar3);
      return;
    }
    param_2 = param_2 + 1;
    iVar1 = FUN_1004397d8(param_2);
    if (iVar1 != 0) {
      uVar5 = 0;
      do {
        uVar4 = FUN_1004397e0(param_2,uVar5);
        FUN_1000bca54(param_1 + 0x18,uVar4,0,lVar3);
        uVar5 = uVar5 + 1;
        uVar2 = FUN_1004397d8(param_2);
      } while (uVar5 < uVar2);
    }
  }
  return;
}




void FUN_1000bceb0(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  lVar3 = FUN_10044fec8(*param_2);
  if (lVar3 != 0) {
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      uVar4 = FUN_10042e2a4(*param_2);
      FUN_1000bcc0c(param_1 + 0x18,uVar4,0,lVar3);
      return;
    }
    param_2 = param_2 + 1;
    iVar1 = FUN_1004397d8(param_2);
    if (iVar1 != 0) {
      uVar5 = 0;
      do {
        uVar4 = FUN_1004397e0(param_2,uVar5);
        FUN_1000bcc0c(param_1 + 0x18,uVar4,0,lVar3);
        uVar5 = uVar5 + 1;
        uVar2 = FUN_1004397d8(param_2);
      } while (uVar5 < uVar2);
    }
  }
  return;
}




void FUN_1000bcf68(long param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = FUN_10044fec8(*param_2);
  if (lVar3 != 0) {
    uVar4 = FUN_10042e2a4(*param_2);
    lVar5 = FUN_1000bcc0c(param_1 + 0x18,uVar4,1,lVar3);
    lVar3 = 0;
    if (lVar5 != 0) {
      lVar3 = lVar5 + 0x28;
    }
    puVar1 = &DAT_101dc0b88;
    if (lVar5 != 0) {
      puVar1 = (undefined4 *)(lVar3 + 8);
    }
    uVar2 = *puVar1;
    *(long *)(param_1 + 0x58) = lVar3;
    *(undefined4 *)(param_1 + 0x60) = uVar2;
  }
  return;
}




void FUN_1000bcfe8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x58);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x60) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x58);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x60) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0x58) = 0;
            *(undefined4 *)(param_1 + 0x60) = DAT_101dc0b88;
          }
        }
        FUN_10004bf84(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x60) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1000bd08c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101453f70;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  return;
}




void FUN_1000bd0a8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_1000bd0b0(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}




void FUN_1000bd0b8(long param_1)

{
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}




void FUN_1000bd0c4(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined1 local_58 [8];
  
  iVar2 = _rand();
  if (*(float *)(param_1 + 0x10) <= (float)iVar2 * 4.656613e-10) {
    return;
  }
  FUN_10034cb1c(local_58,*(undefined8 *)(param_1 + 8));
  uVar5 = 0xffff0000;
  lVar3 = param_2;
LAB_1000bd124:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_2) &&
         (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x2a7d0549), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_1000bd124;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




long FUN_1000bd1e0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return param_1 + 0x18;
}




void FUN_1000bd1f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1003a2b6c(param_2);
  FUN_1000bd0c4(param_1 + 0x18,uVar1);
  return;
}




long FUN_1000bd21c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return param_1 + 0x18;
}




void FUN_1000bd22c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10042e2a4(*param_2);
  FUN_1000bd0c4(param_1 + 0x18,uVar1);
  return;
}




void FUN_1000bd258(long param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      uVar2 = (uVar2 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  *(uint *)(param_1 + 0x14) = uVar2;
  return;
}




void FUN_1000bd29c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_10042e2a4(*param_2);
  lVar2 = *(long *)(lVar2 + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184db58) break;
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  lVar2 = *(long *)(lVar2 + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184dd18) break;
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar1 = FUN_100027b5c(lVar2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  FUN_100027b34(lVar2,*(undefined4 *)(param_1 + 0x14));
  return;
}




void FUN_1000bd334(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_10042e2a4(*param_2);
  lVar1 = *(long *)(lVar1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184db58) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  lVar1 = *(long *)(lVar1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dd18) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_100027b34(lVar1,*(undefined4 *)(param_1 + 0x10));
  return;
}




void FUN_1000bd3c0(void)

{
  return;
}




void FUN_1000bd3c8(void)

{
  return;
}




void FUN_1000bd3d0(void)

{
  return;
}




void FUN_1000bd3dc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1003d21e8();
  operator_delete(pvVar1);
  return;
}




void FUN_1000bd3f0(void)

{
  return;
}




void FUN_1000bd3f8(void)

{
  return;
}




void FUN_1000bd400(void)

{
  if ((DAT_10184db60 & 1) == 0) {
    DAT_10184db58 = DAT_101872e38;
    DAT_10184db60 = 1;
  }
  return;
}




void FUN_1000bd42c(void)

{
  if ((DAT_10184dd20 & 1) == 0) {
    DAT_10184dd18 = DAT_101872e38;
    DAT_10184dd20 = 1;
  }
  return;
}




void FUN_1000bd458(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014540a0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  return;
}




void FUN_1000bd484(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_1000bd48c(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb8) = uVar1 + 1;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 8 + 0x18) = param_2;
  return;
}




void FUN_1000bd4a4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  char cVar4;
  ulong uVar5;
  uint local_50 [2];
  uint local_48 [2];
  
  uVar1 = FUN_1010a0298(*param_2,DAT_10184dae8);
  FUN_10004f784(uVar1,*(undefined8 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0xb8) != 0) {
    uVar5 = 0;
    do {
      pcVar2 = *(char **)(param_1 + uVar5 * 8 + 0x18);
      if (pcVar2 == (char *)0x0) {
        local_48[0] = 0;
      }
      else {
        cVar4 = *pcVar2;
        local_48[0] = 0x811c9dc5;
        if (cVar4 != '\0') {
          local_48[0] = 0x811c9dc5;
          do {
            pcVar2 = pcVar2 + 1;
            local_48[0] = (local_48[0] ^ (int)cVar4) * 0x1000193;
            cVar4 = *pcVar2;
          } while (cVar4 != '\0');
        }
      }
      uVar3 = FUN_10016fc08();
      FUN_10004f7c8(uVar1,local_48,uVar3);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0xb8));
  }
  pcVar2 = *(char **)(param_1 + 0x18);
  if (pcVar2 == (char *)0x0) {
    local_50[0] = 0;
  }
  else {
    cVar4 = *pcVar2;
    local_50[0] = 0x811c9dc5;
    while (cVar4 != '\0') {
      pcVar2 = pcVar2 + 1;
      local_50[0] = (local_50[0] ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar2;
    }
  }
  FUN_10004f940(uVar1,local_50);
  return;
}




void FUN_1000bd5bc(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_2 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dae8) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_10004fac0();
  return;
}




void FUN_1000bd5f0(void)

{
  return;
}




void FUN_1000bd5f8(void)

{
  if ((DAT_10184daf0 & 1) == 0) {
    DAT_10184dae8 = DAT_101872e38;
    DAT_10184daf0 = 1;
  }
  return;
}




void FUN_1000bd624(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014540f8;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}




void FUN_1000bd63c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  return;
}




void FUN_1000bd648(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
    puVar3 = *(undefined1 **)(param_1 + 0x20);
  }
  else {
    puVar3 = auStack_b8;
    lVar5 = *param_2;
    uVar1 = FUN_1004d2524(lVar4);
    uVar2 = FUN_100015208(lVar4,uVar1,0x12345678);
    (**(code **)(*(long *)(lVar5 + 0x68) + 0x18))((long *)(lVar5 + 0x68),uVar2);
    FUN_1004d26c0(auStack_b8,0x80,"%s-%d");
  }
  FUN_100106870(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),puVar3);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000bd714(void)

{
  return;
}




void FUN_1000bd71c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2a4(*param_2);
  plVar2 = *(long **)(lVar1 + 0x18);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return;
    }
    if (*(int *)(plVar2[1] + 0xa4) == DAT_10184db58) break;
    plVar2 = (long *)plVar2[4];
  }
                    /* WARNING: Could not recover jumptable at 0x0001000bd76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x160))(plVar2,1);
  return;
}




void FUN_1000bd770(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2a4(*param_2);
  plVar2 = *(long **)(lVar1 + 0x18);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return;
    }
    if (*(int *)(plVar2[1] + 0xa4) == DAT_10184db58) break;
    plVar2 = (long *)plVar2[4];
  }
                    /* WARNING: Could not recover jumptable at 0x0001000bd7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x160))(plVar2,0);
  return;
}




void FUN_1000bd7c4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2a4(*param_2);
  plVar2 = *(long **)(lVar1 + 0x18);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return;
    }
    if (*(int *)(plVar2[1] + 0xa4) == DAT_10184db58) break;
    plVar2 = (long *)plVar2[4];
  }
                    /* WARNING: Could not recover jumptable at 0x0001000bd814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x168))(plVar2,1);
  return;
}




void FUN_1000bd818(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2a4(*param_2);
  plVar2 = *(long **)(lVar1 + 0x18);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return;
    }
    if (*(int *)(plVar2[1] + 0xa4) == DAT_10184db58) break;
    plVar2 = (long *)plVar2[4];
  }
                    /* WARNING: Could not recover jumptable at 0x0001000bd868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x168))(plVar2,0);
  return;
}




void FUN_1000bd86c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_10042e2a4(*param_2);
  lVar1 = *(long *)(lVar1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184db58) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_100024c9c(lVar1,1);
  return;
}




void FUN_1000bd8b8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_10042e2a4(*param_2);
  lVar1 = *(long *)(lVar1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184db58) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_100024c9c(lVar1,0);
  return;
}




void FUN_1000bd904(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10034ee90();
  uVar1 = FUN_100345d90();
  uVar2 = FUN_10042e2a4(*param_2);
  FUN_1003c4e84(uVar1,uVar2);
  return;
}




void FUN_1000bd93c(void)

{
  return;
}




void FUN_1000bd940(void)

{
  return;
}




void FUN_1000bd948(void)

{
  return;
}




void FUN_1000bd950(void)

{
  return;
}




void FUN_1000bd958(void)

{
  return;
}




void FUN_1000bd960(void)

{
  if ((DAT_10184db60 & 1) == 0) {
    DAT_10184db58 = DAT_101872e38;
    DAT_10184db60 = 1;
  }
  return;
}




void FUN_1000bd98c(void)

{
  FUN_100036688();
  FUN_10003b5c8();
  return;
}




void FUN_1000bd9a0(void)

{
  FUN_100036688();
  FUN_10003ab44();
  return;
}




void FUN_1000bd9b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100036688();
  FUN_10003ab3c(uVar1,param_1);
  return;
}




void FUN_1000bd9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100036688();
  FUN_100039be8(uVar1,param_1,param_2,param_3,param_4,param_5);
  return;
}




void FUN_1000bda2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100036688();
  FUN_10003abec(uVar1,param_1,param_2);
  return;
}




void FUN_1000bda58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100036688();
  FUN_10003b55c(param_1,param_2,uVar1,param_3);
  return;
}




bool FUN_1000bda94(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = _strcmp((char *)*param_1,PTR_s_Healing_Flask_10184e160);
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    iVar2 = _strcmp((char *)*param_1,PTR_s_Vision_Totem_10184e168);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}




bool FUN_1000bdae4(int param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  FUN_1003467f8();
  iVar2 = FUN_10034cfa0();
  if ((iVar2 == 0) || (uVar3 = FUN_10034cb58(), (uVar3 & 1) != 0)) {
    bVar1 = param_1 == 1;
  }
  else {
    iVar2 = FUN_10034f06c();
    bVar1 = iVar2 == param_1;
  }
  return !bVar1;
}




void FUN_1000bdb28(void)

{
  DAT_101dc5dc8 = operator_new(0x20);
  DAT_101dc5dc8[3] = 0;
  DAT_101dc5dc8[2] = 0;
  *DAT_101dc5dc8 = &PTR_FUN_10149dda8;
  DAT_101dc5dc8[1] = DAT_101dc5dc8 + 2;
  return;
}




void FUN_1000bdb64(void)

{
  if (DAT_101dc5dc8 != (long *)0x0) {
    (**(code **)(*DAT_101dc5dc8 + 8))();
  }
  DAT_101dc5dc8 = (long *)0x0;
  return;
}




undefined8 FUN_1000bdb98(void)

{
  return DAT_101dc5dc8;
}




undefined8 * FUN_1000bdba4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_101454268;
  operator_new(0xf88);
  lVar1 = thunk_FUN_1000c70b8();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_101454238;
  param_1[1] = lVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return param_1;
}




undefined8 * FUN_1000bdbf8(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_101454268;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1000bdc3c(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_101454268;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1000bdc7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  uVar1 = FUN_100345b94();
  uVar1 = FUN_10034c450(uVar1,param_2);
  FUN_1000c7c60(*(undefined8 *)(param_1 + 8),uVar1);
  return;
}




void FUN_1000bdcb8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_1000c7ea4(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}




void FUN_1000bdccc(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_1000c7f44(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    FUN_1000bdd08(param_1,lVar1 + 0x20);
    return;
  }
  return;
}




void FUN_1000bdd08(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long alStack_720 [2];
  undefined1 auStack_710 [40];
  undefined1 auStack_6e8 [16];
  undefined1 auStack_6d8 [96];
  long local_678;
  undefined4 local_670;
  long local_38;
  
  plVar4 = alStack_720;
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  iVar1 = *param_2;
  if (iVar1 - 2U < 2) {
    FUN_10034ee90();
    lVar2 = FUN_100345d90();
    if (lVar2 == 0) goto LAB_1000bdeb8;
    thunk_FUN_10045cc04(auStack_6d8);
    FUN_1003a6cb4(auStack_6d8,lVar2);
    FUN_1003babdc(auStack_6d8,*(undefined8 *)(param_2 + 2),0);
    if (*param_2 == 3) {
      uVar3 = 0;
      uVar5 = 1;
LAB_1000bde30:
      FUN_1003a25f4(auStack_6d8,uVar3,uVar5,0,0);
    }
    else if (*param_2 == 2) {
      uVar3 = 1;
      uVar5 = 0;
      goto LAB_1000bde30;
    }
    FUN_100345b68(lVar2,auStack_6e8,0);
    FUN_1003a8e18(auStack_710,auStack_6e8,200,0);
    iVar1 = FUN_1003a6ce4(auStack_6d8,&local_678,200,auStack_710);
    if ((iVar1 == 0) || (local_678 == 0)) goto LAB_1000bdeb8;
    FUN_1000320fc();
    uVar3 = FUN_100033428();
    *(undefined1 *)(param_1 + 0x28) = 1;
    FUN_10002e944();
    FUN_100345b68(local_678,alStack_720,0);
  }
  else {
    if (iVar1 == 1) {
      FUN_10034ee90();
      lVar2 = FUN_100345d90();
      if (lVar2 == 0) goto LAB_1000bdeb8;
      FUN_1000320fc();
      uVar3 = FUN_100033428();
      *(undefined1 *)(param_1 + 0x28) = 1;
      FUN_10002e944();
      FUN_100345b68(lVar2,&local_678,0);
    }
    else {
      if (iVar1 != 0) goto LAB_1000bdeb8;
      lVar2 = FUN_10048faa4(*(undefined8 *)(param_2 + 2));
      FUN_1000320fc();
      uVar3 = FUN_100033428();
      *(undefined1 *)(param_1 + 0x28) = 1;
      FUN_10002e944();
      local_678 = *(long *)(lVar2 + 0x10);
      local_670 = *(undefined4 *)(lVar2 + 0x18);
    }
    plVar4 = &local_678;
  }
  FUN_10002e63c(uVar3,plVar4,2);
LAB_1000bdeb8:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000bdee8(long param_1)

{
  long lVar1;
  
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),0);
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_1000320fc();
    lVar1 = FUN_100033428();
    FUN_10002e688(lVar1,lVar1 + 0x70);
    FUN_10002e8e0(lVar1);
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_1000bdf44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}




undefined8 * FUN_1000bdf4c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_1014542c0;
  operator_new(0x648);
  plVar1 = (long *)thunk_FUN_1000c8348();
  plVar1[0x19] = (long)param_1;
  *param_1 = &PTR_FUN_101454298;
  param_1[1] = plVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  (**(code **)(*plVar1 + 0x138))(0,plVar1,0,4,1);
  return param_1;
}




undefined8 * thunk_FUN_1000bdf4c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_1014542c0;
  operator_new(0x648);
  plVar1 = (long *)thunk_FUN_1000c8348();
  plVar1[0x19] = (long)param_1;
  *param_1 = &PTR_FUN_101454298;
  param_1[1] = plVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  (**(code **)(*plVar1 + 0x138))(0,plVar1,0,4,1);
  return param_1;
}




undefined8 * FUN_1000bdfb8(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_1014542c0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1000bdffc(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_1014542c0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1000be03c(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  )

{
  uint uVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x18) = param_5;
  uVar1 = param_2 - 1;
  if (uVar1 < 3) {
    FUN_1000c8818(*(undefined8 *)(param_1 + 8),*(undefined8 *)(&PTR_PTR_1014542d8)[(int)uVar1],
                  (&PTR_s_HUDJoystickChoice_Joystick_1014542f0)[(int)uVar1],param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000be0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x138))(0x3ecccccd,*(long **)(param_1 + 8),1,4,1);
  return;
}




void FUN_1000be0b4(long param_1)

{
  FUN_1000c88cc(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1000be0bc(long param_1)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x138))(0x3ecccccd,*(long **)(param_1 + 8),0,4,1);
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),0);
  }
  FUN_10012027c(0);
  return;
}




undefined8 * FUN_1000be114(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_101454340;
  operator_new(0x1688);
  lVar1 = thunk_FUN_1000c8ae8();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_101454318;
  param_1[1] = lVar1;
  FUN_10003330c(param_1 + 2,&DAT_101d91198);
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}




undefined8 * thunk_FUN_1000be114(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_101454340;
  operator_new(0x1688);
  lVar1 = thunk_FUN_1000c8ae8();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_101454318;
  param_1[1] = lVar1;
  FUN_10003330c(param_1 + 2,&DAT_101d91198);
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}




void FUN_1000be178(long param_1,string *param_2)

{
  long lVar1;
  string *psVar2;
  string *this;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    this = (string *)(param_1 + 0x10);
    std::string::operator=(this,param_2);
    psVar2 = this;
    if (*(char *)(param_1 + 0x27) < '\0') {
      psVar2 = *(string **)this;
    }
    lVar1 = FUN_10010a4f8(psVar2);
    if (lVar1 == 0) {
      psVar2 = this;
      if (*(char *)(param_1 + 0x27) < '\0') {
        psVar2 = *(string **)this;
      }
      FUN_10010a548(psVar2);
    }
    if (*(char *)(param_1 + 0x27) < '\0') {
      this = *(string **)this;
    }
    if (DAT_101d230a8 != 0) {
      FUN_1000be57c(DAT_101d230a8,this,param_1);
    }
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  return;
}




undefined8 * FUN_1000be20c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_101454318;
  if (*(char *)(param_1 + 6) != '\0') {
    plVar1 = param_1 + 2;
    if (*(char *)((long)param_1 + 0x27) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    FUN_10010a820(plVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  *param_1 = &PTR____cxa_pure_virtual_101454340;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1000be20c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_101454318;
  if (*(char *)(param_1 + 6) != '\0') {
    plVar1 = param_1 + 2;
    if (*(char *)((long)param_1 + 0x27) < '\0') {
      plVar1 = (long *)*plVar1;
    }
    FUN_10010a820(plVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  *param_1 = &PTR____cxa_pure_virtual_101454340;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1000be290(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000be20c();
  operator_delete(pvVar1);
  return;
}




void FUN_1000be2a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    plVar2 = (long *)(param_1 + 0x10);
    if (*(char *)(param_1 + 0x27) < '\0') {
      plVar2 = (long *)*plVar2;
    }
    uVar1 = FUN_10034ee90();
    FUN_10010a6c0(plVar2,param_2,uVar1);
    return;
  }
  return;
}




void FUN_1000be2f4(long param_1)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int extraout_w8;
  long lVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  undefined8 uVar13;
  void *local_88;
  void *local_80;
  char local_71;
  undefined1 auStack_70 [8];
  void *local_68;
  
  plVar2 = (long *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x27) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  piVar3 = (int *)FUN_10010a7ec(plVar2);
  iVar1 = extraout_w8;
  if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, iVar1 == 0)) {
    return;
  }
  uVar9 = (ulong)(iVar1 - 1);
  lVar10 = *(long *)(piVar3 + 2);
  lVar8 = lVar10 + uVar9 * 0x88;
  uVar4 = FUN_1004e3624(lVar8);
  plVar2 = (long *)(lVar8 + 0x50);
  if (*(char *)(lVar8 + 0x67) < '\0') {
    if (*(long *)(lVar10 + uVar9 * 0x88 + 0x58) != 0) {
      plVar2 = (long *)*plVar2;
      goto LAB_1000be380;
    }
  }
  else if (*(char *)(lVar8 + 0x67) != '\0') {
LAB_1000be380:
    uVar13 = FUN_1004d2f54(plVar2);
    goto LAB_1000be390;
  }
  uVar13 = 0;
LAB_1000be390:
  pcVar11 = (char *)(lVar10 + uVar9 * 0x88 + 0x82);
  if (*pcVar11 != '\0') {
    lVar8 = FUN_1004e0150("MENU_CHAT_PLAYER_LABEL_YOU",0);
  }
  thunk_FUN_1004e439c(auStack_70,lVar8);
  lVar12 = lVar10 + uVar9 * 0x88;
  lVar8 = lVar12 + 0x68;
  FUN_1001862c4(&local_88);
  lVar5 = FUN_1000be6e4(lVar8,&local_88);
  if (local_71 < '\0') {
    operator_delete(local_88);
  }
  if (lVar12 + 0x70 != lVar5) {
    FUN_1001862c4(&local_88);
    FUN_1000be514(lVar8,&local_88);
    uVar6 = FUN_10052b1b8();
    if (local_71 < '\0') {
      operator_delete(local_88);
    }
    iVar1 = FUN_10034f380(uVar6);
    if (iVar1 != 0) {
      uVar6 = FUN_10034e794(uVar6);
      uVar7 = FUN_100345b94();
      lVar8 = FUN_10034e548(uVar7,uVar6);
      if (lVar8 != 0) {
        FUN_1004e3120(&local_88," (");
        FUN_1004e372c(auStack_70,&local_88);
        if (local_80 != (void *)0x0) {
          operator_delete__(local_80);
        }
        uVar6 = FUN_1004e0150(*(undefined8 *)(lVar8 + 0x28),0);
        FUN_1004e372c(auStack_70,uVar6);
        FUN_1004e3120(&local_88,")");
        FUN_1004e372c(auStack_70,&local_88);
        if (local_80 != (void *)0x0) {
          operator_delete__(local_80);
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x28) = uVar13;
  lVar10 = lVar10 + uVar9 * 0x88;
  FUN_1000c9104(*(undefined8 *)(param_1 + 8),auStack_70,lVar10 + 0x10,*(undefined1 *)(lVar10 + 0x81)
                ,*pcVar11,uVar4);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  return;
}




long FUN_1000be514(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 auStack_18 [8];
  
  plVar1 = (long *)FUN_1000be7f0(param_1,auStack_18,param_2);
  if (*plVar1 != 0) {
    return *plVar1 + 0x38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000be7e4();
}




void FUN_1000be548(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(*(long *)(param_1 + 8) + 0x84) =
       *(uint *)(*(long *)(param_1 + 8) + 0x84) & 0xfffffffb | uVar1;
  if ((param_2 & 1) != 0) {
    return;
  }
  FUN_1000c97fc(*(undefined8 *)(param_1 + 8),1);
  return;
}




void FUN_1000be57c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  void *local_58 [2];
  char local_41;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  code *pcStack_28;
  
  FUN_10001549c(local_58);
  lVar1 = FUN_10010ae48(param_1,local_58);
  uStack_38 = 0;
  pcStack_28 = thunk_FUN_1000be2f4;
  local_40 = param_3;
  local_30 = param_3;
  FUN_1000be5e4(lVar1 + 0x10,&local_40);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  return;
}




void FUN_1000be5e4(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_1000be668(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  *(undefined8 *)(lVar1 + -8) = uVar7;
  *(undefined8 *)(lVar1 + -0x10) = uVar6;
  return;
}




void thunk_FUN_1000be2f4(long param_1)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int extraout_w8;
  long lVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  undefined8 uVar13;
  void *pvStack_88;
  void *pvStack_80;
  char cStack_71;
  undefined1 auStack_70 [8];
  void *pvStack_68;
  
  plVar2 = (long *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x27) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  piVar3 = (int *)FUN_10010a7ec(plVar2);
  iVar1 = extraout_w8;
  if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, iVar1 == 0)) {
    return;
  }
  uVar9 = (ulong)(iVar1 - 1);
  lVar10 = *(long *)(piVar3 + 2);
  lVar8 = lVar10 + uVar9 * 0x88;
  uVar4 = FUN_1004e3624(lVar8);
  plVar2 = (long *)(lVar8 + 0x50);
  if (*(char *)(lVar8 + 0x67) < '\0') {
    if (*(long *)(lVar10 + uVar9 * 0x88 + 0x58) != 0) {
      plVar2 = (long *)*plVar2;
      goto LAB_1000be380;
    }
  }
  else if (*(char *)(lVar8 + 0x67) != '\0') {
LAB_1000be380:
    uVar13 = FUN_1004d2f54(plVar2);
    goto LAB_1000be390;
  }
  uVar13 = 0;
LAB_1000be390:
  pcVar11 = (char *)(lVar10 + uVar9 * 0x88 + 0x82);
  if (*pcVar11 != '\0') {
    lVar8 = FUN_1004e0150("MENU_CHAT_PLAYER_LABEL_YOU",0);
  }
  thunk_FUN_1004e439c(auStack_70,lVar8);
  lVar12 = lVar10 + uVar9 * 0x88;
  lVar8 = lVar12 + 0x68;
  FUN_1001862c4(&pvStack_88);
  lVar5 = FUN_1000be6e4(lVar8,&pvStack_88);
  if (cStack_71 < '\0') {
    operator_delete(pvStack_88);
  }
  if (lVar12 + 0x70 != lVar5) {
    FUN_1001862c4(&pvStack_88);
    FUN_1000be514(lVar8,&pvStack_88);
    uVar6 = FUN_10052b1b8();
    if (cStack_71 < '\0') {
      operator_delete(pvStack_88);
    }
    iVar1 = FUN_10034f380(uVar6);
    if (iVar1 != 0) {
      uVar6 = FUN_10034e794(uVar6);
      uVar7 = FUN_100345b94();
      lVar8 = FUN_10034e548(uVar7,uVar6);
      if (lVar8 != 0) {
        FUN_1004e3120(&pvStack_88," (");
        FUN_1004e372c(auStack_70,&pvStack_88);
        if (pvStack_80 != (void *)0x0) {
          operator_delete__(pvStack_80);
        }
        uVar6 = FUN_1004e0150(*(undefined8 *)(lVar8 + 0x28),0);
        FUN_1004e372c(auStack_70,uVar6);
        FUN_1004e3120(&pvStack_88,")");
        FUN_1004e372c(auStack_70,&pvStack_88);
        if (pvStack_80 != (void *)0x0) {
          operator_delete__(pvStack_80);
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x28) = uVar13;
  lVar10 = lVar10 + uVar9 * 0x88;
  FUN_1000c9104(*(undefined8 *)(param_1 + 8),auStack_70,lVar10 + 0x10,*(undefined1 *)(lVar10 + 0x81)
                ,*pcVar11,uVar4);
  if (pvStack_68 != (void *)0x0) {
    operator_delete__(pvStack_68);
  }
  return;
}




void FUN_1000be668(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        uVar8 = puVar5[3];
        uVar7 = puVar5[2];
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        puVar4[3] = uVar8;
        puVar4[2] = uVar7;
        lVar3 = lVar3 + -0x20;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




long * FUN_1000be6e4(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      iVar2 = FUN_1000be764(plVar5 + 4,param_2);
      lVar1 = 8;
      if (iVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_1000be764(param_2,plVar4 + 4), iVar2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}




uint FUN_1000be764(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_1000be7d4;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_1000be7d4:
  return uVar8 >> 0x1f;
}




void FUN_1000be7e4(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




long * FUN_1000be7f0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    *param_2 = plVar2;
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    do {
      while( true ) {
        plVar4 = plVar3;
        iVar1 = FUN_1000be764(param_3,plVar4 + 4);
        if (iVar1 == 0) break;
        plVar2 = plVar4;
        plVar3 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          *param_2 = plVar4;
          return plVar4;
        }
      }
      iVar1 = FUN_1000be764(plVar4 + 4,param_3);
      if (iVar1 == 0) break;
      plVar2 = plVar4 + 1;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *param_2 = plVar4;
  }
  return plVar2;
}




undefined8 * FUN_1000be894(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_101454390;
  operator_new(0x4c0);
  lVar1 = thunk_FUN_1000c9dd8();
  *(undefined8 **)(lVar1 + 0x158) = param_1;
  *param_1 = &PTR_FUN_101454368;
  param_1[1] = lVar1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = DAT_101dc0b88;
  return param_1;
}




undefined8 * FUN_1000be8f0(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_101454390;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1000be934(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_101454390;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1000be974(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10034ee90();
  FUN_10034ee4c();
  uVar1 = FUN_1003318a0();
  FUN_1000c9fec(*(undefined8 *)(param_1 + 8),uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_10034f09c();
  FUN_1000ca478(uVar2,0xc,uVar1);
  return;
}




void FUN_1000be9bc(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 1);
  return;
}




void FUN_1000be9d0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x18) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        if ((int)param_2 == 0xc) {
          iVar1 = FUN_10034f09c();
          if (iVar1 == 0) {
            uVar5 = *(undefined8 *)(param_1 + 8);
            uVar4 = FUN_10034f09c();
            FUN_1000ca478(uVar5,0xc,uVar4);
            return;
          }
          FUN_10005fe04();
          fVar6 = (float)FUN_100060518();
          if (fVar6 <= 0.0) {
            FUN_100464d1c(lVar3);
            uVar4 = FUN_10005fe04();
            FUN_1000605bc(uVar4,1);
            return;
          }
        }
        else {
          lVar3 = FUN_10005fe04();
          if (lVar3 != 0) {
            uVar4 = FUN_10005fe04();
            if (param_3 == 0) {
              param_3 = 1;
            }
            FUN_100060684(uVar4,param_2,param_3);
            return;
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = DAT_101dc0b88;
    }
  }
  return;
}




undefined8 * FUN_1000beac8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_1014543e0;
  operator_new(0xd0);
  lVar1 = thunk_FUN_1000ca97c();
  *(undefined8 **)(lVar1 + 0x88) = param_1;
  *param_1 = &PTR_thunk_FUN_1000bef78_1014543b8;
  param_1[1] = lVar1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = DAT_101dc0b88;
  param_1[4] = 0;
  *(byte *)((long)param_1 + 0x2c) = *(byte *)((long)param_1 + 0x2c) & 0xf0 | 1;
  uVar2 = FUN_1003da398();
  FUN_1004e18bc(uVar2,param_1,0x7b2a736,FUN_1000beb88,0);
  pcStack_28 = thunk_FUN_1000bed4c;
  local_30 = param_1;
  FUN_100643618(0xbf800000,&local_30,0,1);
  FUN_1000beb98(param_1);
  return param_1;
}




void FUN_1000beb88(long param_1)

{
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 3;
  return;
}




void FUN_1000beb98(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  byte bVar8;
  
  uVar3 = FUN_100491adc();
  uVar7 = *(undefined8 *)(param_1 + 8);
  if (((DAT_101dc5de0 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101dc5de0), iVar1 != 0)) {
    FUN_1004e313c(&DAT_101dc5dd0);
    ___cxa_atexit(FUN_100046198,&DAT_101dc5dd0,0x100000000);
    ___cxa_guard_release(&DAT_101dc5de0);
  }
  iVar1 = FUN_100491c10(uVar3);
  if (iVar1 != 0) {
    bVar8 = 0;
    do {
      lVar4 = FUN_100491c18(uVar3,bVar8);
      if (*(char *)(lVar4 + 4) != '\0') {
        pcVar6 = *(char **)(lVar4 + 0x10);
        if ((pcVar6 == (char *)0x0) || (*pcVar6 == '\0')) {
          pcVar6 = *(char **)(lVar4 + 8);
        }
        uVar5 = FUN_1004e0150(pcVar6,0);
        FUN_1000153b4(&DAT_101dc5dd0,uVar5);
        FUN_1000cab90(uVar7,&DAT_101dc5dd0,bVar8);
      }
      bVar8 = bVar8 + 1;
      uVar2 = FUN_100491c10(uVar3);
    } while (bVar8 < uVar2);
  }
  FUN_1000caea4(uVar7);
  return;
}




undefined8 * thunk_FUN_1000beac8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_1014543e0;
  operator_new(0xd0);
  lVar1 = thunk_FUN_1000ca97c();
  *(undefined8 **)(lVar1 + 0x88) = param_1;
  *param_1 = &PTR_thunk_FUN_1000bef78_1014543b8;
  param_1[1] = lVar1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = DAT_101dc0b88;
  param_1[4] = 0;
  *(byte *)((long)param_1 + 0x2c) = *(byte *)((long)param_1 + 0x2c) & 0xf0 | 1;
  uVar2 = FUN_1003da398();
  FUN_1004e18bc(uVar2,param_1,0x7b2a736,FUN_1000beb88,0);
  pcStack_28 = thunk_FUN_1000bed4c;
  puStack_30 = param_1;
  FUN_100643618(0xbf800000,&puStack_30,0,1);
  FUN_1000beb98(param_1);
  return param_1;
}




undefined8 * FUN_1000beca8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_1000bef78_1014543b8;
  uVar1 = FUN_1003da398();
  FUN_1004e1b58(uVar1,param_1);
  pcStack_28 = thunk_FUN_1000bed4c;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 0x10))();
  }
  *param_1 = &PTR____cxa_pure_virtual_1014543e0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1000beca8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_1000bef78_1014543b8;
  uVar1 = FUN_1003da398();
  FUN_1004e1b58(uVar1,param_1);
  pcStack_28 = thunk_FUN_1000bed4c;
  puStack_30 = param_1;
  FUN_100643a8c(&puStack_30);
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 0x10))();
  }
  *param_1 = &PTR____cxa_pure_virtual_1014543e0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1000bed38(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000beca8();
  operator_delete(pvVar1);
  return;
}




void FUN_1000bed4c(long param_1)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  
  fVar3 = (float)FUN_100032228();
  bVar1 = true;
  bVar2 = false;
  if (*(float *)(param_1 + 0x28) < 60.0) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar3)) {
      bVar1 = fVar3 < 60.0;
      bVar2 = false;
    }
  }
  if (bVar1 == bVar2) {
    *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 1;
  }
  *(float *)(param_1 + 0x28) = fVar3;
  FUN_1000beda0(param_1);
  return;
}




void FUN_1000beda0(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  byte bVar7;
  
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
    uVar4 = FUN_100491adc();
    iVar2 = FUN_100491c10();
    if (iVar2 != 0) {
      bVar7 = 0;
      do {
        lVar5 = FUN_100491c18(uVar4,bVar7);
        if (*(int *)(lVar5 + 0x20) == 2) {
          uVar6 = *(undefined8 *)(param_1 + 8);
          bVar1 = (*(byte *)(param_1 + 0x2c) & 6) != 0;
LAB_1000bee2c:
          FUN_1000cae30(uVar6,bVar7,bVar1);
        }
        else if (*(int *)(lVar5 + 0x20) == 1) {
          uVar6 = *(undefined8 *)(param_1 + 8);
          bVar1 = *(float *)(param_1 + 0x28) <= 60.0;
          goto LAB_1000bee2c;
        }
        bVar7 = bVar7 + 1;
        uVar3 = FUN_100491c10(uVar4);
      } while (bVar7 < uVar3);
    }
    *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) & 0xfe;
  }
  return;
}




void FUN_1000bee64(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long local_30;
  int local_28;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    operator_new(0x20);
    uVar1 = FUN_1000be894();
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    FUN_1000be974();
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != 0) {
      if (*(int *)(param_1 + 0x18) == *(int *)(lVar2 + 8)) {
        local_30 = lVar2;
        local_28 = *(int *)(param_1 + 0x18);
        FUN_1000be9bc(*(undefined8 *)(param_1 + 0x20),&local_30);
      }
      else {
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = DAT_101dc0b88;
      }
    }
    FUN_1000cb020(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  }
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 8;
  return;
}




void FUN_1000bef04(long param_1,long *param_2)

{
  long local_20;
  int local_18;
  
  *(long *)(param_1 + 0x10) = *param_2;
  *(int *)(param_1 + 0x18) = (int)param_2[1];
  if ((*(long *)(param_1 + 0x20) != 0) && (local_20 = *param_2, local_20 != 0)) {
    local_18 = (int)param_2[1];
    if (local_18 == *(int *)(local_20 + 8)) {
      FUN_1000be9bc(*(long *)(param_1 + 0x20),&local_20);
    }
    else {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = DAT_101dc0b88;
    }
  }
  return;
}




void thunk_FUN_1000bef78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 auStack_60 [48];
  
  uVar1 = FUN_100491adc();
  FUN_100491c18(uVar1,param_2);
  uVar1 = FUN_10034ee90();
  FUN_1000106d8(0,auStack_60,uVar1,param_2,0xffffffff,0);
  FUN_100345498(auStack_60);
  lVar2 = FUN_1000bdb98();
  plVar3 = (long *)(lVar2 + 0x10);
  plVar4 = (long *)*plVar3;
  plVar5 = plVar3;
  if (plVar4 != (long *)0x0) {
    do {
      if (*(uint *)(plVar4 + 4) >= 0x2e4f13dd) {
        plVar5 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < 0x2e4f13dd];
    } while (plVar4 != (long *)0x0);
    if (((plVar5 != plVar3) && (*(uint *)(plVar5 + 4) < 0x2e4f13de)) && ((int)plVar5[5] != 0)) {
      lVar2 = 0;
      uVar6 = 0;
      do {
        (*(code *)((undefined8 *)(plVar5[6] + lVar2))[1])(*(undefined8 *)(plVar5[6] + lVar2));
        uVar6 = uVar6 + 1;
        lVar2 = lVar2 + 0x10;
      } while (uVar6 < *(uint *)(plVar5 + 5));
    }
  }
  return;
}




void FUN_1000bef78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 auStack_60 [48];
  
  uVar1 = FUN_100491adc();
  FUN_100491c18(uVar1,param_2);
  uVar1 = FUN_10034ee90();
  FUN_1000106d8(0,auStack_60,uVar1,param_2,0xffffffff,0);
  FUN_100345498(auStack_60);
  lVar2 = FUN_1000bdb98();
  plVar3 = (long *)(lVar2 + 0x10);
  plVar4 = (long *)*plVar3;
  plVar5 = plVar3;
  if (plVar4 != (long *)0x0) {
    do {
      if (*(uint *)(plVar4 + 4) >= 0x2e4f13dd) {
        plVar5 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < 0x2e4f13dd];
    } while (plVar4 != (long *)0x0);
    if (((plVar5 != plVar3) && (*(uint *)(plVar5 + 4) < 0x2e4f13de)) && ((int)plVar5[5] != 0)) {
      lVar2 = 0;
      uVar6 = 0;
      do {
        (*(code *)((undefined8 *)(plVar5[6] + lVar2))[1])(*(undefined8 *)(plVar5[6] + lVar2));
        uVar6 = uVar6 + 1;
        lVar2 = lVar2 + 0x10;
      } while (uVar6 < *(uint *)(plVar5 + 5));
    }
  }
  return;
}




void FUN_1000bf05c(long param_1,uint param_2)

{
  byte bVar1;
  
  if ((((*(byte *)(param_1 + 0x2c) & 4) == 0 ^ param_2) & 1) == 0) {
    bVar1 = 5;
    if (param_2 == 0) {
      bVar1 = 1;
    }
    *(byte *)(param_1 + 0x2c) = bVar1 | *(byte *)(param_1 + 0x2c) & 0xfa;
  }
  return;
}




void thunk_FUN_1000bed4c(long param_1)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  
  fVar3 = (float)FUN_100032228();
  bVar1 = true;
  bVar2 = false;
  if (*(float *)(param_1 + 0x28) < 60.0) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar3)) {
      bVar1 = fVar3 < 60.0;
      bVar2 = false;
    }
  }
  if (bVar1 == bVar2) {
    *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 1;
  }
  *(float *)(param_1 + 0x28) = fVar3;
  FUN_1000beda0(param_1);
  return;
}




undefined8 * FUN_1000bf094(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_101450f98;
  operator_new(0x1048);
  lVar1 = thunk_FUN_1000cb3d8();
  *(undefined8 **)(lVar1 + 0x88) = param_1;
  *param_1 = &PTR_FUN_101454408;
  param_1[1] = lVar1;
  *(undefined4 *)(param_1 + 2) = 0xffff;
  return param_1;
}




void FUN_1000bf0ec(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  FUN_10034ee90();
  iVar1 = FUN_10034e738();
  iVar2 = FUN_10034ed9c();
  if (iVar2 != 0) {
    iVar2 = 0;
    uVar12 = 0;
    do {
      uVar5 = FUN_10034ee54(uVar12);
      iVar3 = FUN_10034e738();
      if ((iVar3 == iVar1) && (iVar3 = FUN_10034ee90(), (int)uVar5 != iVar3)) {
        uVar6 = FUN_10034e794(uVar5);
        uVar7 = FUN_100345b94();
        lVar8 = FUN_10034e548(uVar7,uVar6);
        uVar7 = *(undefined8 *)(param_1 + 8);
        uVar14 = *(undefined8 *)(lVar8 + 0x20);
        uVar6 = FUN_10034e42c(uVar5);
        FUN_1000cb60c(uVar7,uVar5,uVar14,uVar6);
        iVar2 = iVar2 + 1;
      }
      uVar12 = uVar12 + 1;
      uVar4 = FUN_10034ed9c();
    } while (uVar12 < uVar4);
    if (iVar2 != 0) goto LAB_1000bf214;
  }
  lVar8 = FUN_1000bdb98();
  plVar9 = (long *)(lVar8 + 0x10);
  plVar10 = (long *)*plVar9;
  plVar11 = plVar9;
  if (plVar10 != (long *)0x0) {
    do {
      if (*(uint *)(plVar10 + 4) >= 0x9c723b68) {
        plVar11 = plVar10;
      }
      plVar10 = (long *)plVar10[*(uint *)(plVar10 + 4) < 0x9c723b68];
    } while (plVar10 != (long *)0x0);
    if (((plVar11 != plVar9) && (*(uint *)(plVar11 + 4) < 0x9c723b69)) && ((int)plVar11[5] != 0)) {
      lVar8 = 0;
      uVar13 = 0;
      do {
        (*(code *)((undefined8 *)(plVar11[6] + lVar8))[1])(*(undefined8 *)(plVar11[6] + lVar8));
        uVar13 = uVar13 + 1;
        lVar8 = lVar8 + 0x10;
      } while (uVar13 < *(uint *)(plVar11 + 5));
    }
  }
LAB_1000bf214:
                    /* WARNING: Could not recover jumptable at 0x0001000bf234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  return;
}




void FUN_1000bf238(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_1000bf240(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  float fVar8;
  undefined1 auStack_60 [48];
  
  lVar1 = FUN_10005fe04();
  if (lVar1 != 0) {
    FUN_10005fe04();
    fVar8 = (float)FUN_100060518();
    if (0.0 < fVar8) {
      return;
    }
  }
  uVar2 = FUN_100491adc();
  uVar2 = FUN_100491f2c(uVar2,1);
  uVar3 = FUN_10034ee90();
  FUN_1000106d8(0,auStack_60,uVar3,uVar2,param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_100345498(auStack_60);
  lVar1 = FUN_1000bdb98();
  plVar4 = (long *)(lVar1 + 0x10);
  plVar5 = (long *)*plVar4;
  plVar6 = plVar4;
  if (plVar5 != (long *)0x0) {
    do {
      if (*(uint *)(plVar5 + 4) >= 0x2e4f13dd) {
        plVar6 = plVar5;
      }
      plVar5 = (long *)plVar5[*(uint *)(plVar5 + 4) < 0x2e4f13dd];
    } while (plVar5 != (long *)0x0);
    if (((plVar6 != plVar4) && (*(uint *)(plVar6 + 4) < 0x2e4f13de)) && ((int)plVar6[5] != 0)) {
      lVar1 = 0;
      uVar7 = 0;
      do {
        (*(code *)((undefined8 *)(plVar6[6] + lVar1))[1])(*(undefined8 *)(plVar6[6] + lVar1));
        uVar7 = uVar7 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar7 < *(uint *)(plVar6 + 5));
    }
  }
  return;
}




undefined8 * FUN_1000bf33c(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_101450f98;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1000bf380(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_101450f98;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_1000bf3c0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_101454458;
  operator_new(0x8760);
  lVar1 = thunk_FUN_1000cc128();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_101454430;
  param_1[1] = lVar1;
  return param_1;
}




undefined8 * FUN_1000bf408(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_101454458;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1000bf44c(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_101454458;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1000bf48c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1000bf4b0();
    return;
  }
  FUN_1003166d0();
  FUN_100317140();
  FUN_100316150();
  FUN_10031627c();
  return;
}




void FUN_1000bf4b0(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = 0;
  do {
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar2 = FUN_100316150();
    uVar1 = FUN_100316174(uVar2,iVar3);
    FUN_1000cd170(uVar4,iVar3,uVar1);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x22);
  return;
}




void FUN_1000bf504(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100316150();
  FUN_100316360(uVar1,param_2,param_3);
  FUN_1000bf4b0(param_1);
  if ((int)param_2 == 0x19) {
    FUN_10032b458();
    return;
  }
  return;
}




undefined8 * FUN_1000bf560(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *local_30;
  code *pcStack_28;
  
  param_1[1] = param_2;
  *(undefined8 **)(param_2 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_101454480;
  FUN_1004e3004(param_1 + 2);
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  pcStack_28 = thunk_FUN_1000bff20;
  local_30 = param_1;
  FUN_100643618(0xbf800000,&local_30,0,1);
  uVar1 = FUN_1000bdb98();
  FUN_1004e18bc(uVar1,param_1,0x646552f8,FUN_1000bf640,0);
  uVar1 = FUN_1000bdb98();
  FUN_1004e18bc(uVar1,param_1,0xccc11f8e,FUN_1000bf66c,0);
  pvVar2 = operator_new(0x20);
  uVar1 = FUN_1000c06a8();
  param_1[4] = uVar1;
  uVar1 = FUN_100061d48();
  FUN_1000c0874(pvVar2,uVar1);
  FUN_1000cd6d4(param_1[1],*(undefined8 *)(param_1[4] + 8));
  return param_1;
}




void FUN_1000bf640(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_1000c02fc(param_1,in_stack_00000000);
  return;
}




void FUN_1000bf66c(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  FUN_1000c0394(param_1,in_stack_00000000);
  return;
}




undefined8 * thunk_FUN_1000bf560(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  param_1[1] = param_2;
  *(undefined8 **)(param_2 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_101454480;
  FUN_1004e3004(param_1 + 2);
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  pcStack_28 = thunk_FUN_1000bff20;
  puStack_30 = param_1;
  FUN_100643618(0xbf800000,&puStack_30,0,1);
  uVar1 = FUN_1000bdb98();
  FUN_1004e18bc(uVar1,param_1,0x646552f8,FUN_1000bf640,0);
  uVar1 = FUN_1000bdb98();
  FUN_1004e18bc(uVar1,param_1,0xccc11f8e,FUN_1000bf66c,0);
  pvVar2 = operator_new(0x20);
  uVar1 = FUN_1000c06a8();
  param_1[4] = uVar1;
  uVar1 = FUN_100061d48();
  FUN_1000c0874(pvVar2,uVar1);
  FUN_1000cd6d4(param_1[1],*(undefined8 *)(param_1[4] + 8));
  return param_1;
}




undefined8 * FUN_1000bf69c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_101454480;
  pcStack_28 = thunk_FUN_1000bff20;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  uVar2 = FUN_1000bdb98();
  FUN_1004e1b58(uVar2,param_1);
  puVar3 = (uint *)param_1[3];
  if (puVar3 != (uint *)0x0) {
    if (*puVar3 != 0) {
      lVar4 = (ulong)*puVar3 << 5;
      puVar5 = *(undefined8 **)(puVar3 + 2);
      do {
        if ((undefined8 *)*puVar5 == param_1) {
          FUN_1000c044c(puVar3,puVar5,puVar5 + 4);
          puVar3 = (uint *)param_1[3];
          break;
        }
        lVar4 = lVar4 + -0x20;
        puVar5 = puVar5 + 4;
      } while (lVar4 != 0);
    }
    uVar1 = puVar3[8];
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 5;
      puVar5 = *(undefined8 **)(puVar3 + 10);
      do {
        if ((undefined8 *)*puVar5 == param_1) {
          FUN_1000c044c(puVar3 + 8,puVar5,puVar5 + 4);
          puVar3 = (uint *)param_1[3];
          break;
        }
        lVar4 = lVar4 + -0x20;
        puVar5 = puVar5 + 4;
      } while (lVar4 != 0);
    }
    uVar1 = puVar3[4];
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 5;
      puVar5 = *(undefined8 **)(puVar3 + 6);
      do {
        if ((undefined8 *)*puVar5 == param_1) {
          FUN_1000c044c(puVar3 + 4,puVar5,puVar5 + 4);
          break;
        }
        lVar4 = lVar4 + -0x20;
        puVar5 = puVar5 + 4;
      } while (lVar4 != 0);
    }
  }
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 0x28))();
  }
  *param_1 = &PTR____cxa_pure_virtual_1014544e0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1000bf69c(void)

{
  FUN_1000bf69c();
  return;
}




void FUN_1000bf7ec(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000bf69c();
  operator_delete(pvVar1);
  return;
}




void FUN_1000bf800(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  code *pcStack_38;
  
  param_1[3] = param_2;
  iVar1 = FUN_1000c60d4(param_2);
  plVar4 = (long *)param_1[1];
  if (iVar1 == 0) {
    uVar3 = FUN_1000c6148(param_1[3]);
    FUN_1000c60dc(&local_50,param_1[3]);
    uVar2 = 0;
    if (local_50 != (long *)0x0) {
      if ((int)local_48 == (int)local_50[1]) {
        uVar2 = (**(code **)(*local_50 + 0x10))();
      }
      else {
        uVar2 = 0;
        local_50 = (long *)0x0;
        local_48 = CONCAT44(local_48._4_4_,DAT_101dc0b88);
      }
    }
    uVar2 = FUN_1004654a0(uVar2);
    (**(code **)(*plVar4 + 0x138))(plVar4,uVar3,uVar2);
  }
  else {
    uVar2 = FUN_1000c613c();
    (**(code **)(*plVar4 + 0x140))(plVar4,uVar2);
  }
  local_48 = 0;
  pcStack_38 = thunk_FUN_1000c0118;
  local_50 = param_1;
  local_40 = param_1;
  FUN_1000be5e4(param_2,&local_50);
  local_48 = 0;
  pcStack_38 = thunk_FUN_1000c0258;
  local_50 = param_1;
  local_40 = param_1;
  FUN_1000be5e4(param_2 + 0x20,&local_50);
  local_48 = 0;
  pcStack_38 = FUN_1000c04c8;
  local_50 = param_1;
  local_40 = param_1;
  FUN_1000be5e4(param_2 + 0x10,&local_50);
  return;
}




void FUN_1000bf92c(long param_1)

{
  long lVar1;
  
  FUN_1000c0828(*(undefined8 *)(param_1 + 0x20),1);
  FUN_1000c084c(*(undefined8 *)(param_1 + 0x20),1);
  FUN_1000c086c(*(undefined8 *)(param_1 + 0x20),1);
  FUN_1000c085c(*(undefined8 *)(param_1 + 0x20),1);
  FUN_1000cd858(*(undefined8 *)(param_1 + 8));
  FUN_100061d60();
  lVar1 = FUN_10005f764();
  if (*(int *)(lVar1 + 0x118) == 2) {
    FUN_1000d08a4(0);
    return;
  }
  FUN_1000d08ac(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  return;
}




void FUN_1000bf9ac(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000c0834(*(undefined8 *)(param_1 + 0x20));
  if (iVar1 != 0) {
    FUN_1000c0828(*(undefined8 *)(param_1 + 0x20),0);
    FUN_1000cd874(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}




void FUN_1000bf9f0(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001000bfa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x1a0))();
  return;
}




void FUN_1000bfa04(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = FUN_1000c6c24();
    iVar1 = FUN_1000c6858(*(undefined8 *)(param_1 + 0x18));
    if ((iVar1 != 0) && ((uVar2 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001000bfa48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 8) + 0x1c8))();
      return;
    }
  }
  return;
}




void FUN_1000bfa58(void)

{
  return;
}




void FUN_1000bfa5c(long param_1)

{
  int iVar1;
  
  if (((*(long *)(param_1 + 0x18) != 0) && (*(char *)(param_1 + 0x28) != '\0')) &&
     (iVar1 = FUN_1000c6cb4(), iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001000bfa98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x1d0))();
    return;
  }
  return;
}




void thunk_FUN_1000bf9ac(void)

{
  FUN_1000bf9ac();
  return;
}




void thunk_FUN_1000bf9ac(void)

{
  FUN_1000bf9ac();
  return;
}




undefined8 FUN_1000bfab0(long param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint64_t uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined1 auStack_80 [48];
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar4 = _mach_absolute_time();
    if (2.0 <= (double)((uVar4 - *(long *)(param_1 + 0x10)) * DAT_101d91638) * 1e-09) {
      lVar5 = FUN_100057f34();
      if (lVar5 != 0) {
        FUN_10005fe04();
        fVar13 = (float)FUN_100060518();
        if (0.0 < fVar13) {
          return 0;
        }
      }
      uVar14 = FUN_1000c620c(*(undefined8 *)(param_1 + 0x18));
      fVar13 = (float)FUN_1000c6374(*(undefined8 *)(param_1 + 0x18));
      bVar1 = true;
      bVar2 = false;
      if (10.0 <= fVar13) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN((float)uVar14)) {
          bVar1 = (float)uVar14 < 5.0;
          bVar2 = false;
        }
      }
      if (bVar1 == bVar2) {
        iVar3 = FUN_1000c60d4(*(undefined8 *)(param_1 + 0x18));
        if (iVar3 == 1) {
          uVar6 = FUN_100491adc();
          uVar6 = FUN_100491f2c(uVar6,2);
          uVar7 = FUN_1000c6108(*(undefined8 *)(param_1 + 0x18));
        }
        else {
          if (iVar3 != 0) {
            return 0;
          }
          uVar6 = FUN_100491adc();
          uVar6 = FUN_100491f2c(uVar6,3);
          uVar7 = FUN_1000c60f0(*(undefined8 *)(param_1 + 0x18));
        }
        uVar8 = FUN_10034ee90();
        FUN_1000106d8(uVar14,auStack_80,uVar8,uVar6,0xffffffff,uVar7);
        FUN_100345498(auStack_80);
        lVar5 = FUN_1000bdb98();
        plVar9 = (long *)(lVar5 + 0x10);
        plVar10 = (long *)*plVar9;
        plVar11 = plVar9;
        if (plVar10 != (long *)0x0) {
          do {
            if (*(uint *)(plVar10 + 4) >= 0x2e4f13dd) {
              plVar11 = plVar10;
            }
            plVar10 = (long *)plVar10[*(uint *)(plVar10 + 4) < 0x2e4f13dd];
          } while (plVar10 != (long *)0x0);
          if (((plVar11 != plVar9) && (*(uint *)(plVar11 + 4) < 0x2e4f13de)) &&
             ((int)plVar11[5] != 0)) {
            lVar5 = 0;
            uVar12 = 0;
            do {
              (*(code *)((undefined8 *)(plVar11[6] + lVar5))[1])
                        (*(undefined8 *)(plVar11[6] + lVar5));
              uVar12 = uVar12 + 1;
              lVar5 = lVar5 + 0x10;
            } while (uVar12 < *(uint *)(plVar11 + 5));
          }
        }
        FUN_1004e3004((long *)(param_1 + 0x10));
        return 1;
      }
    }
  }
  return 0;
}




void FUN_1000bfc98(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *local_158;
  int local_150;
  undefined4 uStack_14c;
  void *local_148 [2];
  char local_131;
  undefined4 local_130;
  undefined8 local_12c;
  undefined1 auStack_120 [8];
  void *local_118;
  undefined1 auStack_110 [8];
  void *local_108;
  undefined **local_100;
  undefined1 auStack_f8 [72];
  undefined8 local_b0;
  void *local_a8;
  void *local_a0;
  char local_89;
  
  if (((*(long *)(param_1 + 0x18) != 0) && (iVar1 = FUN_1000c60d4(), iVar1 == 0)) &&
     (puVar2 = (undefined8 *)FUN_1000c6bf0(*(undefined8 *)(param_1 + 0x18)),
     puVar2 != (undefined8 *)0x0)) {
    thunk_FUN_1001cd434(&local_100);
    uVar3 = FUN_1004e0150(*puVar2,0);
    thunk_FUN_1004e439c(auStack_110,uVar3);
    uVar3 = FUN_1004e0150(puVar2[5],0);
    thunk_FUN_1004e439c(auStack_120,uVar3);
    FUN_1000c60dc(&local_158,*(undefined8 *)(param_1 + 0x18));
    if (local_158 == (long *)0x0) {
      uVar3 = 0;
    }
    else if (local_150 == (int)local_158[1]) {
      uVar3 = (**(code **)(*local_158 + 0x10))();
    }
    else {
      uVar3 = 0;
      local_158 = (long *)0x0;
      local_150 = DAT_101dc0b88;
    }
    FUN_1000ed57c(auStack_120,puVar2,uVar3);
    thunk_FUN_1004e439c(&local_158,auStack_110);
    FUN_10003330c(local_148,&DAT_101d91198);
    local_130 = 0;
    local_12c = 0x41a00000;
    FUN_10003c048(auStack_f8,&local_158);
    if (local_131 < '\0') {
      operator_delete(local_148[0]);
    }
    if ((void *)CONCAT44(uStack_14c,local_150) != (void *)0x0) {
      operator_delete__((void *)CONCAT44(uStack_14c,local_150));
    }
    thunk_FUN_1004e439c(&local_158,auStack_120);
    FUN_10003330c(local_148,&DAT_101d91198);
    local_130 = 1;
    local_12c = 0x41a00000;
    FUN_10003c048(auStack_f8,&local_158);
    if (local_131 < '\0') {
      operator_delete(local_148[0]);
    }
    if ((void *)CONCAT44(uStack_14c,local_150) != (void *)0x0) {
      operator_delete__((void *)CONCAT44(uStack_14c,local_150));
    }
    uVar3 = FUN_100644a94("EVENT_REQUEST_SHOW_ABILITY_TOOLTIP");
    FUN_100644aec(&local_158,uVar3,&local_100);
    FUN_100644c34(*(undefined8 *)(param_1 + 8),&local_158,1);
    if (local_118 != (void *)0x0) {
      operator_delete__(local_118);
    }
    if (local_108 != (void *)0x0) {
      operator_delete__(local_108);
    }
    local_100 = &PTR_FUN_1014666e0;
    if (local_89 < '\0') {
      operator_delete(local_a0);
    }
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
    FUN_10003c1ec(auStack_f8,1);
  }
  return;
}




void FUN_1000bfec4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("EVENT_REQUEST_HIDE_ABILITY_TOOLTIP");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  return;
}




void FUN_1000bff14(long param_1)

{
  FUN_1000d0370(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  return;
}




void FUN_1000bff20(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar5;
  float fVar6;
  float fVar7;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  iVar2 = FUN_1000c617c();
  plVar5 = *(long **)(param_1 + 8);
  iVar3 = FUN_1000c6674(*(undefined8 *)(param_1 + 0x18));
  if (iVar3 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x28) != '\0';
  }
  uVar4 = FUN_1000c67c4(*(undefined8 *)(param_1 + 0x18));
  (**(code **)(*plVar5 + 0x198))(plVar5,bVar1,uVar4);
  plVar5 = *(long **)(param_1 + 8);
  uVar4 = FUN_1000c6184(*(undefined8 *)(param_1 + 0x18));
  (**(code **)(*plVar5 + 0x168))(plVar5,uVar4);
  iVar3 = FUN_1000c69f4(*(undefined8 *)(param_1 + 0x18));
  if (iVar3 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    FUN_1000c6b1c(*(undefined8 *)(param_1 + 0x18));
    (**(code **)(*plVar5 + 0x1c0))(plVar5);
  }
  if (iVar2 == 1) {
    iVar2 = FUN_1000c6500(*(undefined8 *)(param_1 + 0x18));
    if ((iVar2 == 0) ||
       (fVar6 = (float)FUN_1000c62c0(*(undefined8 *)(param_1 + 0x18)), fVar6 <= 0.0))
    goto LAB_1000c00a0;
    plVar5 = *(long **)(param_1 + 8);
    fVar6 = (float)FUN_1000c62c0(*(undefined8 *)(param_1 + 0x18));
    fVar7 = (float)FUN_1000c6374(*(undefined8 *)(param_1 + 0x18));
    (**(code **)(*plVar5 + 0x1b8))(fVar6 / fVar7,plVar5);
    plVar5 = *(long **)(param_1 + 8);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x180);
    uVar4 = 1;
  }
  else {
    if (iVar2 == 4) {
      plVar5 = *(long **)(param_1 + 8);
      FUN_1000c620c(*(undefined8 *)(param_1 + 0x18));
      (**(code **)(*plVar5 + 0x170))(plVar5);
      plVar5 = *(long **)(param_1 + 8);
      fVar6 = (float)FUN_1000c620c(*(undefined8 *)(param_1 + 0x18));
      fVar7 = (float)FUN_1000c6374(*(undefined8 *)(param_1 + 0x18));
      (**(code **)(*plVar5 + 0x1b0))(fVar6 / fVar7,plVar5);
      goto LAB_1000c00b4;
    }
LAB_1000c00a0:
    plVar5 = *(long **)(param_1 + 8);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x180);
    uVar4 = 0;
  }
  (*UNRECOVERED_JUMPTABLE)(plVar5,uVar4);
LAB_1000c00b4:
  iVar2 = FUN_1000c6500(*(undefined8 *)(param_1 + 0x18));
  plVar5 = *(long **)(param_1 + 8);
  if (iVar2 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 400);
  }
  else {
    uVar4 = FUN_1000c6428(*(undefined8 *)(param_1 + 0x18));
    (**(code **)(*plVar5 + 0x188))(plVar5,uVar4);
    plVar5 = *(long **)(param_1 + 8);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 400);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000c0114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar5,iVar2 != 0);
  return;
}




void thunk_FUN_1000bff20(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar5;
  float fVar6;
  float fVar7;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  iVar2 = FUN_1000c617c();
  plVar5 = *(long **)(param_1 + 8);
  iVar3 = FUN_1000c6674(*(undefined8 *)(param_1 + 0x18));
  if (iVar3 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x28) != '\0';
  }
  uVar4 = FUN_1000c67c4(*(undefined8 *)(param_1 + 0x18));
  (**(code **)(*plVar5 + 0x198))(plVar5,bVar1,uVar4);
  plVar5 = *(long **)(param_1 + 8);
  uVar4 = FUN_1000c6184(*(undefined8 *)(param_1 + 0x18));
  (**(code **)(*plVar5 + 0x168))(plVar5,uVar4);
  iVar3 = FUN_1000c69f4(*(undefined8 *)(param_1 + 0x18));
  if (iVar3 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    FUN_1000c6b1c(*(undefined8 *)(param_1 + 0x18));
    (**(code **)(*plVar5 + 0x1c0))(plVar5);
  }
  if (iVar2 == 1) {
    iVar2 = FUN_1000c6500(*(undefined8 *)(param_1 + 0x18));
    if ((iVar2 == 0) ||
       (fVar6 = (float)FUN_1000c62c0(*(undefined8 *)(param_1 + 0x18)), fVar6 <= 0.0))
    goto LAB_1000c00a0;
    plVar5 = *(long **)(param_1 + 8);
    fVar6 = (float)FUN_1000c62c0(*(undefined8 *)(param_1 + 0x18));
    fVar7 = (float)FUN_1000c6374(*(undefined8 *)(param_1 + 0x18));
    (**(code **)(*plVar5 + 0x1b8))(fVar6 / fVar7,plVar5);
    plVar5 = *(long **)(param_1 + 8);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x180);
    uVar4 = 1;
  }
  else {
    if (iVar2 == 4) {
      plVar5 = *(long **)(param_1 + 8);
      FUN_1000c620c(*(undefined8 *)(param_1 + 0x18));
      (**(code **)(*plVar5 + 0x170))(plVar5);
      plVar5 = *(long **)(param_1 + 8);
      fVar6 = (float)FUN_1000c620c(*(undefined8 *)(param_1 + 0x18));
      fVar7 = (float)FUN_1000c6374(*(undefined8 *)(param_1 + 0x18));
      (**(code **)(*plVar5 + 0x1b0))(fVar6 / fVar7,plVar5);
      goto LAB_1000c00b4;
    }
LAB_1000c00a0:
    plVar5 = *(long **)(param_1 + 8);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x180);
    uVar4 = 0;
  }
  (*UNRECOVERED_JUMPTABLE)(plVar5,uVar4);
LAB_1000c00b4:
  iVar2 = FUN_1000c6500(*(undefined8 *)(param_1 + 0x18));
  plVar5 = *(long **)(param_1 + 8);
  if (iVar2 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 400);
  }
  else {
    uVar4 = FUN_1000c6428(*(undefined8 *)(param_1 + 0x18));
    (**(code **)(*plVar5 + 0x188))(plVar5,uVar4);
    plVar5 = *(long **)(param_1 + 8);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 400);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000c0114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar5,iVar2 != 0);
  return;
}




void thunk_FUN_1000b84f8(void)

{
  FUN_1000b84f8();
  return;
}

