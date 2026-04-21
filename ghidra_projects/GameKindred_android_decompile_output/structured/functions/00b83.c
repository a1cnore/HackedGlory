// functions/00b83 — 2 functions
#include "libGameKindred.h"




void FUN_00b83018(undefined8 param_1)

{
  FUN_00b80b2c();
  FUN_00b82264(param_1);
  return;
}




void FUN_00b8303c(long param_1)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  long *plVar7;
  float *pfVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_1f8;
  void *local_1f0;
  float local_1e8;
  float local_1e4;
  undefined8 local_1e0 [9];
  float local_198;
  float local_194;
  long local_b0;
  
  lVar12 = tpidr_el0;
  local_b0 = *(long *)(lVar12 + 0x28);
  FUN_00f00298(&local_1e4,&local_1e8);
  FUN_00f13f08(local_1e4,local_1e8,param_1 + 200);
  lVar1 = param_1 + 0x180;
  if ((*(float *)(param_1 + 0x1c0) != local_1e4 * 0.5) || (*(float *)(param_1 + 0x1c4) != 0.0)) {
    *(float *)(param_1 + 0x1c0) = local_1e4 * 0.5;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    FUN_0091ada4(lVar1);
  }
  local_1e0[0] = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x180) + 0x28))(lVar1,local_1e0);
  FUN_00f13f08(0x44f00000,local_1e8,lVar1);
  lVar1 = param_1 + 800;
  FUN_00f13f08(0x44900000,local_1e8,lVar1);
  if ((*(float *)(param_1 + 0x360) != 0.0) || (*(float *)(param_1 + 0x364) != 0.0)) {
    *(undefined8 *)(param_1 + 0x360) = 0;
    FUN_0091ada4(lVar1);
  }
  local_1e0[0] = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 800) + 0x28))(lVar1,local_1e0);
  if ((*(float *)(param_1 + 0x540) != -576.0) || (*(float *)(param_1 + 0x544) != 0.0)) {
    *(undefined8 *)(param_1 + 0x540) = 0xc4100000;
    FUN_0091ada4(param_1 + 0x500);
  }
  local_1e0[0] = 0x3f800000;
  (**(code **)(*(long *)(param_1 + 0x500) + 0x28))(param_1 + 0x500,local_1e0);
  fVar21 = 576.0;
  if ((*(float *)(param_1 + 0x450) != 576.0) || (*(float *)(param_1 + 0x454) != 0.0)) {
    *(undefined8 *)(param_1 + 0x450) = 0x44100000;
    fVar21 = 576.0;
    FUN_0091ada4(param_1 + 0x410);
  }
  local_1e0[0] = 0;
  (**(code **)(*(long *)(param_1 + 0x410) + 0x28))(param_1 + 0x410,local_1e0);
  lVar2 = param_1 + 0x5f0;
  if ((*(float *)(param_1 + 0x630) != 0.0) || (fVar21 = 205.0, *(float *)(param_1 + 0x634) != 205.0)
     ) {
    *(undefined8 *)(param_1 + 0x630) = 0x434d000000000000;
    FUN_0091ada4(lVar2);
  }
  local_1e0[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x5f0) + 0x28))(lVar2,local_1e0);
  fVar22 = *(float *)(param_1 + 0x634);
  FUN_00f01c20(lVar2);
  puVar3 = (uint *)(param_1 + 0x4358);
  uVar10 = *(uint *)(param_1 + 0x4348);
  uVar11 = *puVar3;
  fVar19 = fVar21 * 0.5;
  *(uint *)(param_1 + 0x3b74) =
       *(uint *)(param_1 + 0x3b74) & 0xfffffff8 |
       *(uint *)(param_1 + 0x3b74) & 3 | (uint)(uVar11 != 0 || uVar10 != 0) << 2;
  uVar18 = (uint)(uVar11 != 0);
  *(uint *)(param_1 + 0x429c) =
       *(uint *)(param_1 + 0x429c) & 0xfffffff8 | *(uint *)(param_1 + 0x429c) & 3 | uVar18 << 2;
  *(uint *)(param_1 + 0x416c) =
       *(uint *)(param_1 + 0x416c) & 0xfffffff8 | *(uint *)(param_1 + 0x416c) & 3 | uVar18 << 2;
  if (uVar11 == 0 && uVar10 == 0) {
    fVar20 = 100.0;
LAB_00b83624:
    fVar20 = fVar22 + fVar19 + 20.0 + fVar20;
  }
  else {
    lVar4 = param_1 + 0x40e8;
    if (uVar10 != 0) {
      uVar13 = 0;
      lVar16 = 0;
      do {
        lVar15 = *(long *)(*(long *)(param_1 + 0x4350) + uVar13 * 8);
        lVar14 = lVar16;
        if ((lVar15 != 0) &&
           (FUN_00f13f08(0x42f00000,0x42f00000,lVar15), lVar14 = lVar15, lVar16 != 0)) {
          FUN_00f07b18(0x41200000,lVar15,3,lVar16,1);
          FUN_00f07b18(0,lVar15,5,lVar16,5);
        }
        uVar13 = uVar13 + 1;
        lVar16 = lVar14;
      } while (uVar13 < *(uint *)(param_1 + 0x4348));
      if (lVar14 != 0 && uVar11 != 0) {
        FUN_00f07b18(0x41f00000,lVar4,3,lVar14,1);
        FUN_00f07b18(0,lVar4,5,lVar14,5);
      }
    }
    if (*puVar3 != 0) {
      uVar13 = 0;
      lVar16 = 0;
      do {
        lVar14 = *(long *)(*(long *)(param_1 + 0x4360) + uVar13 * 8);
        if (lVar14 != 0) {
          FUN_00f13f08(0x42f00000,0x42f00000,lVar14);
          if (lVar16 == 0) {
            FUN_00f07b18(0x41f00000,lVar14,3,lVar4,1);
            lVar16 = lVar4;
          }
          else {
            FUN_00f07b18(0x41200000,lVar14,3,lVar16,1);
          }
          FUN_00f07b18(0,lVar14,5,lVar16,5);
          lVar16 = lVar14;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *puVar3);
    }
    lVar4 = param_1 + 0x3998;
    FUN_00f13238(lVar4);
    fVar21 = (float)FUN_00f01c54(lVar4,0,0,1,1);
    if (0.0 < fVar21) {
      fVar20 = (float)FUN_00f0eac0(lVar1);
      fVar21 = (fVar20 + -24.0) / fVar21;
      if (1.25 < fVar21) {
        fVar21 = 1.25;
      }
      if ((*(float *)(param_1 + 0x39e0) != fVar21) || (*(float *)(param_1 + 0x39e4) != fVar21)) {
        *(float *)(param_1 + 0x39e0) = fVar21;
        *(float *)(param_1 + 0x39e4) = fVar21;
        FUN_0091ada4(lVar4);
      }
    }
    if (uVar11 == 0) {
      FUN_00f13238(lVar4);
      FUN_00f07b18(0x41200000,lVar4,0,lVar2,2);
      FUN_00f07b18(0,lVar4,4,lVar2,4);
      fVar21 = 18.0;
      FUN_00f07940(param_1 + 0x3af0,8,lVar4,1);
      FUN_00f01fcc(lVar4,0,0,1,1);
      fVar20 = fVar21 + 60.0;
      if (fVar20 <= 200.0) {
        fVar20 = 200.0;
      }
      goto LAB_00b83624;
    }
    uVar17 = **(undefined8 **)(param_1 + 0x4360);
    lVar16 = param_1 + 0x4218;
    FUN_00f07b18(0xc0a00000,lVar16,0,uVar17,2);
    FUN_00f07b18(0,lVar16,4,uVar17,4);
    FUN_00f13238(lVar4);
    FUN_00f07b18(0x41200000,lVar4,0,lVar2,2);
    FUN_00f07b18(0,lVar4,4,lVar2,4);
    fVar19 = 18.0;
    FUN_00f07940(param_1 + 0x3af0,8,lVar4,1);
    fVar21 = *(float *)(param_1 + 0x425c);
    FUN_00f01c20(lVar16);
    fVar21 = fVar21 + fVar19;
    fVar20 = fVar21 + 80.0;
  }
  fVar22 = *(float *)(param_1 + 0x634);
  lVar4 = param_1 + 0x43f0;
  FUN_00f0d4e0(lVar2);
  fVar19 = fVar21 * 0.5;
  FUN_00f0eac0(lVar4);
  pfVar5 = (float *)(param_1 + 0x4430);
  fVar21 = fVar21 * 0.5 + fVar22 + fVar19 + 20.0;
  pfVar6 = (float *)(param_1 + 0x4434);
  if ((*pfVar5 != 0.0) || (*pfVar6 != fVar21)) {
    *pfVar5 = 0.0;
    *pfVar6 = fVar21;
    FUN_0091ada4(lVar4);
  }
  local_1e0[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x43f0) + 0x28))(lVar4,local_1e0);
  if ((*(float *)(param_1 + 0x4520) != *pfVar5) || (*(float *)(param_1 + 0x4524) != *pfVar6)) {
    *(float *)(param_1 + 0x4520) = *pfVar5;
    *(float *)(param_1 + 0x4524) = *pfVar6;
    FUN_0091ada4(param_1 + 0x44e0);
  }
  lVar16 = param_1 + 0x4610;
  fVar21 = (float)FUN_00f0e700(lVar1);
  fVar19 = -0.4;
  fVar23 = *pfVar6;
  FUN_00f0eac0(lVar4);
  fVar22 = 30.0;
  FUN_00f13e54(lVar16);
  fVar19 = fVar22 * 0.5 + fVar23 + fVar19 * 0.5 + 30.0;
  if ((*(float *)(param_1 + 18000) != fVar21 * -0.4) || (*(float *)(param_1 + 0x4654) != fVar19)) {
    *(float *)(param_1 + 18000) = fVar21 * -0.4;
    *(float *)(param_1 + 0x4654) = fVar19;
    FUN_0091ada4(lVar16);
  }
  local_1e0[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x4610) + 0x28))(lVar16,local_1e0);
  lVar4 = param_1 + 0x5928;
  FUN_00f13f08(local_1e4,local_1e8,lVar4);
  if ((*(float *)(param_1 + 0x5968) != *pfVar5) || (*(float *)(param_1 + 0x596c) != *pfVar6)) {
    *(float *)(param_1 + 0x5968) = *pfVar5;
    *(float *)(param_1 + 0x596c) = *pfVar6;
    FUN_0091ada4(lVar4);
  }
  local_1e0[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x5928) + 0x28))(lVar4,local_1e0);
  if ((*(float *)(param_1 + 0xa48) != -45.0) || (*(float *)(param_1 + 0xa4c) != fVar20)) {
    *(undefined4 *)(param_1 + 0xa48) = 0xc2340000;
    *(float *)(param_1 + 0xa4c) = fVar20;
    FUN_0091ada4(param_1 + 0xa08);
  }
  local_1e0[0] = 0x3f0000003f800000;
  (**(code **)(*(long *)(param_1 + 0xa08) + 0x28))(param_1 + 0xa08,local_1e0);
  if ((*(float *)(param_1 + 0x14b8) != 45.0) || (*(float *)(param_1 + 0x14bc) != fVar20)) {
    *(undefined4 *)(param_1 + 0x14b8) = 0x42340000;
    *(float *)(param_1 + 0x14bc) = fVar20;
    FUN_0091ada4(param_1 + 0x1478);
  }
  local_1e0[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1478) + 0x28))(param_1 + 0x1478,local_1e0);
  if ((*(float *)(param_1 + 0x33e8) != 75.0) || (*(float *)(param_1 + 0x33ec) != fVar20)) {
    *(undefined4 *)(param_1 + 0x33e8) = 0x42960000;
    *(float *)(param_1 + 0x33ec) = fVar20;
    FUN_0091ada4(param_1 + 0x33a8);
  }
  local_1e0[0] = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x33a8) + 0x28))(param_1 + 0x33a8,local_1e0);
  if ((*(float *)(param_1 + 0x38a8) != 150.0) || (*(float *)(param_1 + 0x38ac) != fVar20)) {
    *(undefined4 *)(param_1 + 0x38a8) = 0x43160000;
    *(float *)(param_1 + 0x38ac) = fVar20;
    FUN_0091ada4(param_1 + 0x3868);
  }
  local_1e0[0] = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x3868) + 0x28))(param_1 + 0x3868,local_1e0);
  *(uint *)(param_1 + 0x342c) = *(uint *)(param_1 + 0x342c) | 4;
  *(uint *)(param_1 + 0x38ec) = *(uint *)(param_1 + 0x38ec) | 4;
  *(uint *)(param_1 + 0xbbc) = *(uint *)(param_1 + 0xbbc) & 0xfffffffb;
  *(uint *)(param_1 + 0x14fc) = *(uint *)(param_1 + 0x14fc) | 4;
  fVar20 = fVar20 + 70.0;
  if (*(char *)(param_1 + 0xdd84) == '\0') {
    *(uint *)(param_1 + 0x82c) = *(uint *)(param_1 + 0x82c) & 0xfffffffb;
    *(uint *)(param_1 + 0x95c) = *(uint *)(param_1 + 0x95c) & 0xfffffffb;
    *(uint *)(param_1 + 0x140c) = *(uint *)(param_1 + 0x140c) & 0xfffffffb;
    *(uint *)(param_1 + 0x309c) = *(uint *)(param_1 + 0x309c) & 0xfffffffb;
    *(uint *)(param_1 + 0x355c) = *(uint *)(param_1 + 0x355c) & 0xfffffffb;
  }
  else {
    if ((*(float *)(param_1 + 0x7e8) != -45.0) || (*(float *)(param_1 + 0x7ec) != fVar20)) {
      *(undefined4 *)(param_1 + 0x7e8) = 0xc2340000;
      *(float *)(param_1 + 0x7ec) = fVar20;
      FUN_0091ada4(param_1 + 0x7a8);
    }
    local_1e0[0] = 0x3f0000003f800000;
    (**(code **)(*(long *)(param_1 + 0x7a8) + 0x28))(param_1 + 0x7a8,local_1e0);
    if ((*(float *)(param_1 + 0x13c8) != 45.0) || (*(float *)(param_1 + 0x13cc) != fVar20)) {
      *(undefined4 *)(param_1 + 0x13c8) = 0x42340000;
      *(float *)(param_1 + 0x13cc) = fVar20;
      FUN_0091ada4(param_1 + 5000);
    }
    local_1e0[0] = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 5000) + 0x28))(param_1 + 5000,local_1e0);
    if ((*(float *)(param_1 + 0x3058) != 75.0) || (*(float *)(param_1 + 0x305c) != fVar20)) {
      *(undefined4 *)(param_1 + 0x3058) = 0x42960000;
      *(float *)(param_1 + 0x305c) = fVar20;
      FUN_0091ada4(param_1 + 0x3018);
    }
    local_1e0[0] = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x3018) + 0x28))(param_1 + 0x3018,local_1e0);
    if ((*(float *)(param_1 + 0x3518) != 150.0) || (*(float *)(param_1 + 0x351c) != fVar20)) {
      *(undefined4 *)(param_1 + 0x3518) = 0x43160000;
      *(float *)(param_1 + 0x351c) = fVar20;
      FUN_0091ada4(param_1 + 0x34d8);
    }
    local_1e0[0] = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x34d8) + 0x28))(param_1 + 0x34d8,local_1e0);
    fVar20 = fVar20 + 70.0;
    *(uint *)(param_1 + 0x309c) = *(uint *)(param_1 + 0x309c) | 4;
    *(uint *)(param_1 + 0x355c) = *(uint *)(param_1 + 0x355c) | 4;
    *(uint *)(param_1 + 0x95c) = *(uint *)(param_1 + 0x95c) & 0xfffffffb;
    *(uint *)(param_1 + 0x82c) = *(uint *)(param_1 + 0x82c) | 4;
    *(uint *)(param_1 + 0x140c) = *(uint *)(param_1 + 0x140c) | 4;
  }
  if (*(char *)(param_1 + 0xdd85) == '\0') {
    *(uint *)(param_1 + 0xcec) = *(uint *)(param_1 + 0xcec) & 0xfffffffb;
    *(uint *)(param_1 + 0xe1c) = *(uint *)(param_1 + 0xe1c) & 0xfffffffb;
    *(uint *)(param_1 + 0x15ec) = *(uint *)(param_1 + 0x15ec) & 0xfffffffb;
    *(uint *)(param_1 + 0x31cc) = *(uint *)(param_1 + 0x31cc) & 0xfffffffb;
    *(uint *)(param_1 + 0x368c) = *(uint *)(param_1 + 0x368c) & 0xfffffffb;
  }
  else {
    if ((*(float *)(param_1 + 0xca8) != -45.0) || (*(float *)(param_1 + 0xcac) != fVar20)) {
      *(undefined4 *)(param_1 + 0xca8) = 0xc2340000;
      *(float *)(param_1 + 0xcac) = fVar20;
      FUN_0091ada4(param_1 + 0xc68);
    }
    local_1e0[0] = 0x3f0000003f800000;
    (**(code **)(*(long *)(param_1 + 0xc68) + 0x28))(param_1 + 0xc68,local_1e0);
    if ((*(float *)(param_1 + 0x15a8) != 45.0) || (*(float *)(param_1 + 0x15ac) != fVar20)) {
      *(undefined4 *)(param_1 + 0x15a8) = 0x42340000;
      *(float *)(param_1 + 0x15ac) = fVar20;
      FUN_0091ada4(param_1 + 0x1568);
    }
    local_1e0[0] = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x1568) + 0x28))(param_1 + 0x1568,local_1e0);
    if ((*(float *)(param_1 + 0x3188) != 75.0) || (*(float *)(param_1 + 0x318c) != fVar20)) {
      *(undefined4 *)(param_1 + 0x3188) = 0x42960000;
      *(float *)(param_1 + 0x318c) = fVar20;
      FUN_0091ada4(param_1 + 0x3148);
    }
    local_1e0[0] = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x3148) + 0x28))(param_1 + 0x3148,local_1e0);
    if ((*(float *)(param_1 + 0x3648) != 150.0) || (*(float *)(param_1 + 0x364c) != fVar20)) {
      *(undefined4 *)(param_1 + 0x3648) = 0x43160000;
      *(float *)(param_1 + 0x364c) = fVar20;
      FUN_0091ada4(param_1 + 0x3608);
    }
    local_1e0[0] = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x3608) + 0x28))(param_1 + 0x3608,local_1e0);
    fVar20 = fVar20 + 70.0;
    *(uint *)(param_1 + 0x31cc) = *(uint *)(param_1 + 0x31cc) | 4;
    *(uint *)(param_1 + 0x368c) = *(uint *)(param_1 + 0x368c) | 4;
    *(uint *)(param_1 + 0xe1c) = *(uint *)(param_1 + 0xe1c) & 0xfffffffb;
    *(uint *)(param_1 + 0xcec) = *(uint *)(param_1 + 0xcec) | 4;
    *(uint *)(param_1 + 0x15ec) = *(uint *)(param_1 + 0x15ec) | 4;
  }
  if (*(char *)(param_1 + 0xdd86) == '\0') {
    *(uint *)(param_1 + 0xf4c) = *(uint *)(param_1 + 0xf4c) & 0xfffffffb;
    *(uint *)(param_1 + 0x107c) = *(uint *)(param_1 + 0x107c) & 0xfffffffb;
    *(uint *)(param_1 + 0x16dc) = *(uint *)(param_1 + 0x16dc) & 0xfffffffb;
    *(uint *)(param_1 + 0x32fc) = *(uint *)(param_1 + 0x32fc) & 0xfffffffb;
    *(uint *)(param_1 + 0x37bc) = *(uint *)(param_1 + 0x37bc) & 0xfffffffb;
  }
  else {
    if ((*(float *)(param_1 + 0xf08) != -45.0) || (*(float *)(param_1 + 0xf0c) != fVar20)) {
      *(undefined4 *)(param_1 + 0xf08) = 0xc2340000;
      *(float *)(param_1 + 0xf0c) = fVar20;
      FUN_0091ada4(param_1 + 0xec8);
    }
    local_1e0[0] = 0x3f0000003f800000;
    (**(code **)(*(long *)(param_1 + 0xec8) + 0x28))(param_1 + 0xec8,local_1e0);
    if ((*(float *)(param_1 + 0x1698) != 45.0) || (*(float *)(param_1 + 0x169c) != fVar20)) {
      *(undefined4 *)(param_1 + 0x1698) = 0x42340000;
      *(float *)(param_1 + 0x169c) = fVar20;
      FUN_0091ada4(param_1 + 0x1658);
    }
    local_1e0[0] = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x1658) + 0x28))(param_1 + 0x1658,local_1e0);
    if ((*(float *)(param_1 + 0x32b8) != 75.0) || (*(float *)(param_1 + 0x32bc) != fVar20)) {
      *(undefined4 *)(param_1 + 0x32b8) = 0x42960000;
      *(float *)(param_1 + 0x32bc) = fVar20;
      FUN_0091ada4(param_1 + 0x3278);
    }
    local_1e0[0] = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x3278) + 0x28))(param_1 + 0x3278,local_1e0);
    if ((*(float *)(param_1 + 0x3778) != 150.0) || (*(float *)(param_1 + 0x377c) != fVar20)) {
      *(undefined4 *)(param_1 + 0x3778) = 0x43160000;
      *(float *)(param_1 + 0x377c) = fVar20;
      FUN_0091ada4(param_1 + 0x3738);
    }
    local_1e0[0] = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x3738) + 0x28))(param_1 + 0x3738,local_1e0);
    fVar20 = fVar20 + 70.0;
    *(uint *)(param_1 + 0x16dc) = *(uint *)(param_1 + 0x16dc) | 4;
    *(uint *)(param_1 + 0x32fc) = *(uint *)(param_1 + 0x32fc) | 4;
    *(uint *)(param_1 + 0x37bc) = *(uint *)(param_1 + 0x37bc) | 4;
    *(uint *)(param_1 + 0x107c) = *(uint *)(param_1 + 0x107c) & 0xfffffffb;
    *(uint *)(param_1 + 0xf4c) = *(uint *)(param_1 + 0xf4c) | 4;
  }
  fVar21 = 35.0;
  fVar20 = fVar20 + 35.0;
  if ((*(float *)(param_1 + 0x1168) != -45.0) || (*(float *)(param_1 + 0x116c) != fVar20)) {
    *(undefined4 *)(param_1 + 0x1168) = 0xc2340000;
    *(float *)(param_1 + 0x116c) = fVar20;
    fVar21 = 35.0;
    FUN_0091ada4(param_1 + 0x1128);
  }
  local_1e0[0] = 0x3f0000003f800000;
  (**(code **)(*(long *)(param_1 + 0x1128) + 0x28))(param_1 + 0x1128,local_1e0);
  if ((*(float *)(param_1 + 0x1788) != 45.0) || (*(float *)(param_1 + 0x178c) != fVar20)) {
    *(undefined4 *)(param_1 + 0x1788) = 0x42340000;
    *(float *)(param_1 + 0x178c) = fVar20;
    FUN_0091ada4(param_1 + 0x1748);
  }
  local_1e0[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1748) + 0x28))(param_1 + 0x1748,local_1e0);
  if ((*(float *)(param_1 + 0x1298) != 83.0) || (*(float *)(param_1 + 0x129c) != fVar20)) {
    *(undefined4 *)(param_1 + 0x1298) = 0x42a60000;
    *(float *)(param_1 + 0x129c) = fVar20;
    FUN_0091ada4(param_1 + 0x1258);
  }
  local_1e0[0] = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x1258) + 0x28))(param_1 + 0x1258,local_1e0);
  fVar20 = fVar20 + 70.0;
  if ((*(float *)(param_1 + 0x19a8) != 45.0) || (*(float *)(param_1 + 0x19ac) != fVar20)) {
    *(undefined4 *)(param_1 + 0x19a8) = 0x42340000;
    *(float *)(param_1 + 0x19ac) = fVar20;
    FUN_0091ada4(param_1 + 0x1968);
  }
  local_1e0[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1968) + 0x28))(param_1 + 0x1968,local_1e0);
  if ((*(float *)(param_1 + 0x1878) != 83.0) || (*(float *)(param_1 + 0x187c) != fVar20)) {
    *(undefined4 *)(param_1 + 0x1878) = 0x42a60000;
    *(float *)(param_1 + 0x187c) = fVar20;
    FUN_0091ada4(param_1 + 0x1838);
  }
  local_1e0[0] = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x1838) + 0x28))(param_1 + 0x1838,local_1e0);
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 4;
  FUN_00f13e54(param_1 + 0x1d00);
  fVar20 = fVar20 + fVar21 * 0.5 + 140.0;
  fVar21 = (float)FUN_00f0e700(lVar1);
  if ((*(float *)(param_1 + 0x1a98) != fVar21 * -0.4) || (*(float *)(param_1 + 0x1a9c) != fVar20)) {
    *(float *)(param_1 + 0x1a98) = fVar21 * -0.4;
    *(float *)(param_1 + 0x1a9c) = fVar20;
    FUN_0091ada4(param_1 + 0x1a58);
  }
  local_1e0[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1a58) + 0x28))(param_1 + 0x1a58,local_1e0);
  fVar19 = *(float *)(&DAT_01bb68c0 + (ulong)(*(long *)(param_1 + 0xdac8) == 0) * 4);
  fVar21 = local_1e8 - fVar19;
  if ((*(float *)(param_1 + 0x5da8) != 0.0) ||
     (fVar19 = *(float *)(param_1 + 0x5dac), fVar19 != fVar21)) {
    *(float *)(param_1 + 0x5da8) = 0.0;
    *(float *)(param_1 + 0x5dac) = fVar21;
    FUN_0091ada4(param_1 + 0x5d68);
  }
  local_1e0[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x5d68) + 0x28))(param_1 + 0x5d68,local_1e0);
  lVar4 = param_1 + 0x7fb0;
  FUN_00b1e03c(0x3f266666,lVar4);
  FUN_00f0e700(lVar1);
  fVar21 = fVar19 * 0.5 + -20.0;
  pfVar5 = (float *)(param_1 + 0x7ff4);
  if ((*(float *)(param_1 + 0x7ff0) != 0.0) || (*pfVar5 != fVar21)) {
    *(float *)(param_1 + 0x7ff0) = 0.0;
    *pfVar5 = fVar21;
    FUN_0091ada4(lVar4);
  }
  local_1e0[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x7fb0) + 0x28))(lVar4,local_1e0);
  plVar7 = (long *)(param_1 + 0x8b20);
  fVar21 = (float)FUN_00f0e700(lVar1);
  fVar22 = -0.35;
  fVar23 = *pfVar5;
  FUN_00b1e834(lVar4);
  fVar19 = fVar22 * 0.5;
  FUN_00b1d514(plVar7);
  fVar20 = *(float *)(param_1 + 0x8b60);
  fVar19 = fVar23 + fVar19 + fVar22 * 0.5 + -20.0;
  pfVar5 = (float *)(param_1 + 0x8b64);
  if ((fVar20 != fVar21 * -0.35) || (fVar20 = *pfVar5, fVar20 != fVar19)) {
    *(float *)(param_1 + 0x8b60) = fVar21 * -0.35;
    *pfVar5 = fVar19;
    FUN_0091ada4(plVar7);
  }
  local_1e0[0] = 0x3f0000003f000000;
  (**(code **)(*plVar7 + 0x28))(plVar7,local_1e0);
  fVar21 = *pfVar5;
  FUN_00b1d514(plVar7);
  fVar21 = fVar21 + fVar20 * 0.5 + 70.0;
  plVar7 = (long *)(param_1 + 0xaaa0);
  if ((*(float *)(param_1 + 0xaae0) != -45.0) || (*(float *)(param_1 + 0xaae4) != fVar21)) {
    *(float *)(param_1 + 0xaae0) = -45.0;
    *(float *)(param_1 + 0xaae4) = fVar21;
    FUN_0091ada4(plVar7);
  }
  local_1e0[0] = 0x3f0000003f800000;
  (**(code **)(*plVar7 + 0x28))(plVar7,local_1e0);
  plVar7 = (long *)(param_1 + 0xabd0);
  if ((*(float *)(param_1 + 0xac10) != 45.0) || (*(float *)(param_1 + 0xac14) != fVar21)) {
    *(float *)(param_1 + 0xac10) = 45.0;
    *(float *)(param_1 + 0xac14) = fVar21;
    FUN_0091ada4(plVar7);
  }
  local_1e0[0] = 0x3f00000000000000;
  (**(code **)(*plVar7 + 0x28))(plVar7,local_1e0);
  plVar7 = (long *)(param_1 + 0xad00);
  fVar21 = fVar21 + 70.0;
  if ((*(float *)(param_1 + 0xad40) != -45.0) || (*(float *)(param_1 + 0xad44) != fVar21)) {
    *(float *)(param_1 + 0xad40) = -45.0;
    *(float *)(param_1 + 0xad44) = fVar21;
    FUN_0091ada4(plVar7);
  }
  local_1e0[0] = 0x3f0000003f800000;
  (**(code **)(*plVar7 + 0x28))(plVar7,local_1e0);
  plVar7 = (long *)(param_1 + 0xae30);
  if ((*(float *)(param_1 + 0xae70) != 45.0) || (*(float *)(param_1 + 0xae74) != fVar21)) {
    *(float *)(param_1 + 0xae70) = 45.0;
    *(float *)(param_1 + 0xae74) = fVar21;
    FUN_0091ada4(plVar7);
  }
  local_1e0[0] = 0x3f00000000000000;
  (**(code **)(*plVar7 + 0x28))(plVar7,local_1e0);
  plVar7 = (long *)(param_1 + 0xbbf0);
  fVar21 = local_1e8;
  FUN_00f13f08(local_1e4,plVar7);
  fVar19 = *(float *)(param_1 + 0x634);
  FUN_00f0d4e0(lVar2);
  fVar21 = fVar19 + fVar21 * 0.5 + 20.0 + 305.0;
  pfVar5 = (float *)(param_1 + 0xbc34);
  if ((*(float *)(param_1 + 0xbc30) != 0.0) || (*pfVar5 != fVar21)) {
    *(float *)(param_1 + 0xbc30) = 0.0;
    *pfVar5 = fVar21;
    FUN_0091ada4(plVar7);
  }
  local_1e0[0] = 0x3f0000003f000000;
  (**(code **)(*plVar7 + 0x28))(plVar7,local_1e0);
  pfVar6 = (float *)(param_1 + 0xc0d0);
  fVar19 = *(float *)(&DAT_01bb68c8 + (ulong)(*(int *)(param_1 + 0xdc58) == 2) * 4);
  plVar7 = (long *)(param_1 + 0xc090);
  fVar21 = *pfVar5 - fVar19;
  pfVar8 = (float *)(param_1 + 0xc0d4);
  if ((*pfVar6 != 0.0) || (fVar19 = *pfVar8, fVar19 != fVar21)) {
    *pfVar6 = 0.0;
    *pfVar8 = fVar21;
    FUN_0091ada4(plVar7);
  }
  local_1e0[0] = 0x3f0000003f000000;
  (**(code **)(*plVar7 + 0x28))(plVar7,local_1e0);
  fVar21 = (float)FUN_00f01c20(plVar7);
  FUN_00f01c20(plVar7);
  FUN_00f13f08(fVar21 + fVar21,fVar19 * 1.95,param_1 + 0xbfa0);
  if ((*(float *)(param_1 + 0xbfe0) != *pfVar6) || (*(float *)(param_1 + 0xbfe4) != *pfVar8)) {
    *(float *)(param_1 + 0xbfe0) = *pfVar6;
    *(float *)(param_1 + 0xbfe4) = *pfVar8;
    FUN_0091ada4(param_1 + 0xbfa0);
  }
  if (*(int *)(param_1 + 0xdc50) - 0x5aU < 10) {
    fVar21 = 10.0;
  }
  else {
    fVar21 = -20.0;
    if (*(int *)(param_1 + 0xdc50) % 10 != 1) {
      fVar21 = 0.0;
    }
  }
  plVar7 = (long *)(param_1 + 0xc1c0);
  fVar19 = *pfVar5 - *(float *)((long)&DAT_01bb68d0 + (ulong)(*(int *)(param_1 + 0xdc58) == 2) * 4);
  if ((*(float *)(param_1 + 0xc200) != fVar21) || (*(float *)(param_1 + 0xc204) != fVar19)) {
    *(float *)(param_1 + 0xc200) = fVar21;
    *(float *)(param_1 + 0xc204) = fVar19;
    FUN_0091ada4(plVar7);
  }
  local_1e0[0] = 0x3f0000003f000000;
  (**(code **)(*plVar7 + 0x28))(plVar7,local_1e0);
  fVar19 = (float)FUN_00f0d4e0(plVar7);
  fVar21 = 210.0 / fVar19;
  if (1.0 < 210.0 / fVar19) {
    fVar21 = 1.0;
  }
  if ((*(float *)(param_1 + 0xc208) != fVar21) || (*(float *)(param_1 + 0xc20c) != fVar21)) {
    *(float *)(param_1 + 0xc208) = fVar21;
    *(float *)(param_1 + 0xc20c) = fVar21;
    FUN_0091ada4(plVar7);
  }
  plVar7 = (long *)(param_1 + 0xc2f0);
  fVar21 = (float)FUN_00f0e700(lVar1);
  fVar19 = *pfVar5;
  fVar22 = 30.0;
  FUN_00f13e54(plVar7);
  fVar19 = fVar19 + 305.0 + 30.0 + fVar22 * 0.5;
  pfVar5 = (float *)(param_1 + 0xc334);
  if ((*(float *)(param_1 + 0xc330) != fVar21 * -0.4) || (fVar22 = *pfVar5, fVar22 != fVar19)) {
    *(float *)(param_1 + 0xc330) = fVar21 * -0.4;
    *pfVar5 = fVar19;
    FUN_0091ada4(plVar7);
  }
  local_1e0[0] = 0x3f0000003f000000;
  (**(code **)(*plVar7 + 0x28))(plVar7,local_1e0);
  fVar21 = *pfVar5;
  FUN_00f13e54(plVar7);
  fVar21 = fVar21 + fVar22 * 0.5;
  fVar19 = fVar21 + 80.0;
  uVar17 = FUN_00f08be8(param_1 + 0xd808);
  uVar13 = FUN_00e70b88(uVar17,&DAT_03210450);
  puVar3 = (uint *)(param_1 + 0xd68c);
  if ((uVar13 & 1) == 0) {
    *puVar3 = *puVar3 & 0xfffffffb;
    goto LAB_00b849c8;
  }
  *puVar3 = *puVar3 | 4;
  plVar7 = (long *)(param_1 + 0xd608);
  plVar9 = (long *)(param_1 + 0xd738);
  if ((*(float *)(param_1 + 0xd648) != -45.0) || (*(float *)(param_1 + 0xd64c) != fVar19)) {
    *(float *)(param_1 + 0xd648) = -45.0;
    *(float *)(param_1 + 0xd64c) = fVar19;
    FUN_0091ada4(plVar7);
  }
  local_1e0[0] = 0x3f0000003f800000;
  (**(code **)(*plVar7 + 0x28))(plVar7,local_1e0);
  FUN_00f0d4e0(plVar9);
  if (fVar21 <= 170.0) {
    if ((*(float *)(param_1 + 0xd780) != 1.0) || (*(float *)(param_1 + 0xd784) != 1.0)) {
      uVar17 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_1 + 0xd780) = uVar17;
      goto LAB_00b848b8;
    }
  }
  else {
    FUN_00f0d4e0(plVar9);
    fVar21 = 170.0 / fVar21;
    if ((*(float *)(param_1 + 0xd780) != fVar21) || (*(float *)(param_1 + 0xd784) != fVar21)) {
      *(float *)(param_1 + 0xd780) = fVar21;
      *(float *)(param_1 + 0xd784) = fVar21;
LAB_00b848b8:
      FUN_0091ada4(plVar9);
    }
  }
  FUN_00f0d160(local_1e0);
  FUN_00f0d92c(local_1e0,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  FUN_00e70570(&local_1f8,param_1 + 0xdc88);
  FUN_00f0d75c(local_1e0,&local_1f8);
  if (local_1f0 != (void *)0x0) {
    operator_delete__(local_1f0);
    local_1f8 = 0;
    local_1f0 = (void *)0x0;
  }
  fVar21 = *(float *)(param_1 + 0xd784);
  if ((local_198 != *(float *)(param_1 + 0xd780)) || (local_194 != fVar21)) {
    local_198 = *(float *)(param_1 + 0xd780);
    local_194 = fVar21;
    FUN_0091ada4(local_1e0);
  }
  FUN_00f01c20(local_1e0);
  fVar22 = fVar19 + fVar21 * -0.5;
  if ((*(float *)(param_1 + 0xd778) != 45.0) ||
     (fVar21 = *(float *)(param_1 + 0xd77c), fVar21 != fVar22)) {
    *(float *)(param_1 + 0xd778) = 45.0;
    *(float *)(param_1 + 0xd77c) = fVar22;
    FUN_0091ada4(plVar9);
  }
  local_1f8 = 0;
  (**(code **)(*plVar9 + 0x28))(plVar9,&local_1f8);
  FUN_00f01c20(plVar9);
  fVar19 = fVar19 + fVar21 + 10.0;
  FUN_00f0d3a4(local_1e0);
LAB_00b849c8:
  plVar7 = (long *)(param_1 + 0xd868);
  if ((*(float *)(param_1 + 0xd8a8) != -45.0) || (*(float *)(param_1 + 0xd8ac) != fVar19)) {
    *(float *)(param_1 + 0xd8a8) = -45.0;
    *(float *)(param_1 + 0xd8ac) = fVar19;
    FUN_0091ada4(plVar7);
  }
  local_1e0[0] = 0x3f0000003f800000;
  (**(code **)(*plVar7 + 0x28))(plVar7,local_1e0);
  plVar7 = (long *)(param_1 + 0xd998);
  if ((*(float *)(param_1 + 0xd9d8) != 45.0) || (*(float *)(param_1 + 0xd9dc) != fVar19)) {
    *(float *)(param_1 + 0xd9d8) = 45.0;
    *(float *)(param_1 + 0xd9dc) = fVar19;
    FUN_0091ada4(plVar7);
  }
  local_1e0[0] = 0x3f00000000000000;
  (**(code **)(*plVar7 + 0x28))(plVar7,local_1e0);
  if (*(long *)(lVar12 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

