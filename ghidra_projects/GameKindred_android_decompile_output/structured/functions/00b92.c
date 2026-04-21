// functions/00b92 — 5 functions
#include "libGameKindred.h"




void FUN_00b922c0(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  
  FUN_00b9fc80(param_1 + 0x12570,0);
  lVar1 = param_1 + 0xdf40;
  FUN_00ac0980(lVar1,1);
  plVar3 = *(long **)(param_1 + 0x11fb0);
  if (((plVar3 == (long *)0x0) || (uVar4 = (**(code **)(*plVar3 + 0x30))(), (uVar4 & 1) == 0)) &&
     (uVar4 = FUN_00e80f6c(), (uVar4 & 1) != 0)) {
    FUN_00ac0eb0(lVar1,param_1 + 0x125b8);
  }
  FUN_00b9c524(param_1,0,0);
  plVar3 = *(long **)(param_1 + 0x11fb0);
  if ((plVar3 != (long *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x40))(), iVar2 == 2)) {
    return;
  }
  FUN_00ac1c18(lVar1,&DAT_0320ffa8,1,1);
  return;
}




void FUN_00b9239c(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_7c [4];
  float local_78;
  undefined1 auStack_74 [4];
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar3 & 1,auStack_74,&local_78,auStack_7c);
  uVar4 = FUN_0092ea9c();
  fVar8 = *(float *)(param_1 + 0x12650) * 0.5;
  if ((*(byte *)(param_1 + 0x944) >> 2 & 1) == 0) {
    plVar5 = (long *)(param_1 + 0x1e80);
    local_78 = local_78 + *(float *)(param_1 + 0x12654) * -0.5;
    if ((*(float *)(param_1 + 0x1ec0) == fVar8) && (*(float *)(param_1 + 0x1ec4) == local_78))
    goto LAB_00b9252c;
    *(float *)(param_1 + 0x1ec0) = fVar8;
    *(float *)(param_1 + 0x1ec4) = local_78;
  }
  else {
    fVar7 = 18.0;
    if ((uVar4 & 1) == 0) {
      fVar7 = 12.0;
    }
    lVar1 = param_1 + 0x1e80;
    plVar5 = (long *)(param_1 + 0x8c0);
    fVar9 = local_78 - *(float *)(param_1 + 0x12654) * 0.5;
    fVar6 = local_78;
    FUN_00f13e54(lVar1);
    fVar6 = fVar7 + fVar9 + fVar6 * 0.5;
    if ((*(float *)(param_1 + 0x1ec0) != fVar8) || (*(float *)(param_1 + 0x1ec4) != fVar6)) {
      *(float *)(param_1 + 0x1ec0) = fVar8;
      *(float *)(param_1 + 0x1ec4) = fVar6;
      FUN_0091ada4(lVar1);
    }
    local_70 = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x1e80) + 0x28))(lVar1,&local_70);
    fVar6 = local_78 - *(float *)(param_1 + 0x12654) * 0.5;
    FUN_00f13e54(plVar5);
    fVar7 = (fVar6 - local_78 * 0.5) - fVar7;
    if ((*(float *)(param_1 + 0x900) == fVar8) && (*(float *)(param_1 + 0x904) == fVar7))
    goto LAB_00b9252c;
    *(float *)(param_1 + 0x900) = fVar8;
    *(float *)(param_1 + 0x904) = fVar7;
  }
  FUN_0091ada4(plVar5);
LAB_00b9252c:
  local_70 = 0x3f0000003f000000;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_70);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b9257c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_2 & 1) != 0) {
    (**(code **)(*param_1 + 0x1c0))(param_1);
    FUN_00915fac(1);
    FUN_00915fd0(*(char *)((long)param_1 + 0x1266f) == '\0');
    uVar1 = FUN_009580c4();
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN_009580b8();
      FUN_009658c8(lVar2 + 0x278);
    }
    *(undefined1 *)((long)param_1 + 0x12674) = 1;
    FUN_00ed1918(param_1 + 0x716);
    uVar1 = FUN_0093abcc();
    if (((uVar1 & 1) == 0) && ((int)param_1[0x24a6] != 0)) {
      uVar3 = FUN_00e6ce7c("MENU_FRIENDS_STAR_FOLLOW_TUTORIAL_TOASTIE",0);
      FUN_00a9da50(0xbf800000,uVar3,0,1);
      FUN_0093ab08();
    }
    (**(code **)(*param_1 + 0x150))(param_1);
    FUN_00b92674(param_1);
    return;
  }
  FUN_00915fac(0);
  FUN_00915fd0(1);
  *(undefined1 *)((long)param_1 + 0x12674) = 0;
  return;
}




void FUN_00b92674(long param_1)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  float *pfVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulong local_c0 [2];
  void *local_b0;
  undefined1 auStack_a4 [4];
  float local_a0;
  undefined1 auStack_9c [4];
  long local_98;
  
  lVar14 = tpidr_el0;
  local_98 = *(long *)(lVar14 + 0x28);
  uVar15 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar15 & 1,auStack_9c,&local_a0,auStack_a4);
  uVar16 = FUN_0092ea9c();
  pfVar1 = (float *)(param_1 + 0x12650);
  lVar17 = param_1 + 0x4458;
  fVar25 = *pfVar1;
  FUN_00f13f08(fVar25,0x43000000,lVar17);
  lVar18 = param_1 + 0x4f68;
  FUN_00f13f08(*pfVar1,0x43000000,lVar18);
  lVar2 = param_1 + 0x5a78;
  FUN_00f13f08(*pfVar1,0x43000000,lVar2);
  lVar3 = param_1 + 0x6588;
  FUN_00f13f08(*pfVar1,0x43000000,lVar3);
  lVar4 = param_1 + 0x7098;
  FUN_00f13f08(*pfVar1,0x43000000,lVar4);
  lVar5 = param_1 + 0x7ba8;
  FUN_00f13f08(*pfVar1,0x43000000,lVar5);
  plVar22 = (long *)(param_1 + 0x86b8);
  FUN_00f13f08(*pfVar1,0x43000000);
  puVar6 = (uint *)(param_1 + 0x12040);
  uVar15 = *puVar6;
  uVar19 = (uint)(uVar15 != 0);
  *(uint *)(param_1 + 0x474c) =
       *(uint *)(param_1 + 0x474c) & 0xfffffff8 | *(uint *)(param_1 + 0x474c) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x496c) =
       *(uint *)(param_1 + 0x496c) & 0xfffffff8 | *(uint *)(param_1 + 0x496c) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x44dc) =
       *(uint *)(param_1 + 0x44dc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x44dc) & 3 | (uint)(uVar15 != 0) << 2;
  if (uVar15 == 0) {
    fVar26 = 88.0;
  }
  else {
    pfVar7 = (float *)(param_1 + 0x4708);
    if ((*pfVar7 != 72.0) || (*(float *)(param_1 + 0x470c) != 88.0)) {
      pfVar7[0] = 72.0;
      pfVar7[1] = 88.0;
      FUN_0091ada4(param_1 + 0x46c8);
    }
    local_c0[0] = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x46c8) + 0x28))(param_1 + 0x46c8,local_c0);
    pfVar7 = (float *)(param_1 + 0x4928);
    if ((*pfVar7 != 36.0) || (*(float *)(param_1 + 0x492c) != 88.0)) {
      pfVar7[0] = 36.0;
      pfVar7[1] = 88.0;
      FUN_0091ada4(param_1 + 0x48e8);
    }
    local_c0[0] = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x48e8) + 0x28))(param_1 + 0x48e8,local_c0);
    pfVar7 = (float *)(param_1 + 0x4498);
    if ((*pfVar7 != 0.0) || (*(float *)(param_1 + 0x449c) != 132.0)) {
      pfVar7[0] = 0.0;
      pfVar7[1] = 132.0;
      FUN_0091ada4(lVar17);
    }
    local_c0[0] = 0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x4458) + 0x28))(lVar17,local_c0);
    pfVar7 = (float *)(param_1 + 0x4838);
    if ((*pfVar7 != 72.0) || (*(float *)(param_1 + 0x483c) != 132.0)) {
      pfVar7[0] = 72.0;
      pfVar7[1] = 132.0;
      FUN_0091ada4(param_1 + 0x47f8);
    }
    FUN_00f13f08(fVar25 + -72.0 + -32.0,0x40800000,param_1 + 0x47f8);
    fVar26 = DAT_0313a260 * 0.5 + 4.0 + 132.0;
    if ((*(float *)(param_1 + 0x4410) != 0.0) || (*(float *)(param_1 + 0x4414) != fVar26)) {
      *(float *)(param_1 + 0x4410) = 0.0;
      *(float *)(param_1 + 0x4414) = fVar26;
      FUN_0091ada4(param_1 + 0x43d0);
    }
    if (*(char *)(param_1 + 0x12668) == '\0') {
      if (*puVar6 != 0) {
        uVar20 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x12048) + uVar20 * 8);
          uVar20 = uVar20 + 1;
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) & 0xfffffffb;
        } while (uVar20 < *puVar6);
      }
    }
    else if (*puVar6 != 0) {
      uVar20 = 0;
      fVar23 = DAT_0313a260;
      do {
        lVar17 = *(long *)(*(long *)(param_1 + 0x12048) + uVar20 * 8);
        *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) | 4;
        lVar17 = *(long *)(*(long *)(param_1 + 0x12048) + uVar20 * 8);
        fVar24 = fVar23 * (float)(uVar20 & 0xffffffff);
        if ((*(float *)(lVar17 + 0x40) != 0.0) || (*(float *)(lVar17 + 0x44) != fVar24)) {
          *(undefined4 *)(lVar17 + 0x40) = 0;
          *(float *)(lVar17 + 0x44) = fVar24;
          FUN_0091ada4();
          fVar23 = DAT_0313a260;
        }
        uVar20 = uVar20 + 1;
        fVar26 = fVar26 + fVar23;
      } while (uVar20 < *puVar6);
    }
  }
  puVar8 = (uint *)(param_1 + 0x12060);
  puVar9 = (uint *)(param_1 + 0x525c);
  if (*puVar8 == 0) {
    *puVar9 = *puVar9 & 0xfffffffb;
    *(uint *)(param_1 + 0x547c) = *(uint *)(param_1 + 0x547c) & 0xfffffffb;
    *(uint *)(param_1 + 0x4fec) = *(uint *)(param_1 + 0x4fec) & 0xfffffffb;
    *(uint *)(param_1 + 0x538c) = *(uint *)(param_1 + 0x538c) & 0xfffffffb;
    *(uint *)(param_1 + 0x69ac) = *(uint *)(param_1 + 0x69ac) & 0xfffffffb;
  }
  else {
    *puVar9 = *puVar9 | 4;
    *(uint *)(param_1 + 0x547c) = *(uint *)(param_1 + 0x547c) | 4;
    *(uint *)(param_1 + 0x4fec) = *(uint *)(param_1 + 0x4fec) | 4;
    if ((*(float *)(param_1 + 0x5218) != 72.0) || (*(float *)(param_1 + 0x521c) != fVar26)) {
      *(float *)(param_1 + 0x5218) = 72.0;
      *(float *)(param_1 + 0x521c) = fVar26;
      FUN_0091ada4(param_1 + 0x51d8);
    }
    local_c0[0] = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x51d8) + 0x28))(param_1 + 0x51d8,local_c0);
    if ((*(float *)(param_1 + 0x5438) != 36.0) || (*(float *)(param_1 + 0x543c) != fVar26)) {
      *(float *)(param_1 + 0x5438) = 36.0;
      *(float *)(param_1 + 0x543c) = fVar26;
      FUN_0091ada4(param_1 + 0x53f8);
    }
    local_c0[0] = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x53f8) + 0x28))(param_1 + 0x53f8,local_c0);
    fVar26 = fVar26 + 44.0;
    if ((*(float *)(param_1 + 0x4fa8) != 0.0) || (*(float *)(param_1 + 0x4fac) != fVar26)) {
      *(float *)(param_1 + 0x4fa8) = 0.0;
      *(float *)(param_1 + 0x4fac) = fVar26;
      FUN_0091ada4(lVar18);
    }
    local_c0[0] = 0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x4f68) + 0x28))(lVar18,local_c0);
    if ((*(float *)(param_1 + 0x5348) != 72.0) || (*(float *)(param_1 + 0x534c) != fVar26)) {
      *(float *)(param_1 + 0x5348) = 72.0;
      *(float *)(param_1 + 0x534c) = fVar26;
      FUN_0091ada4(param_1 + 0x5308);
    }
    FUN_00f13f08(fVar25 + -72.0 + -32.0,0x40800000,param_1 + 0x5308);
    fVar26 = fVar26 + DAT_0313a260 * 0.5 + 4.0;
    if ((*(float *)(param_1 + 0x4f20) != 0.0) || (*(float *)(param_1 + 0x4f24) != fVar26)) {
      *(float *)(param_1 + 0x4f20) = 0.0;
      *(float *)(param_1 + 0x4f24) = fVar26;
      FUN_0091ada4(param_1 + 0x4ee0);
    }
    if ((*(char *)(param_1 + 0x1266a) == '\0') &&
       ((*(uint *)(param_1 + 0x12540) < 5 ||
        ((((*(int *)(param_1 + 0x12080) == 0 && (*(int *)(param_1 + 0x120a0) == 0)) &&
          (*(int *)(param_1 + 0x12090) == 0)) && (*(int *)(param_1 + 0x12050) == 0)))))) {
      uVar15 = *puVar8;
    }
    else {
      uVar15 = *puVar8;
      if (*(char *)(param_1 + 0x12669) == '\0') {
        if (uVar15 != 0) {
          uVar20 = 0;
          do {
            lVar17 = *(long *)(*(long *)(param_1 + 0x12068) + uVar20 * 8);
            uVar20 = uVar20 + 1;
            *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) & 0xfffffffb;
          } while (uVar20 < *puVar8);
        }
        goto LAB_00b92e48;
      }
    }
    if (uVar15 != 0) {
      uVar20 = 0;
      fVar23 = DAT_0313a260;
      do {
        lVar17 = *(long *)(*(long *)(param_1 + 0x12068) + uVar20 * 8);
        *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) | 4;
        lVar17 = *(long *)(*(long *)(param_1 + 0x12068) + uVar20 * 8);
        fVar24 = fVar23 * (float)(uVar20 & 0xffffffff);
        if ((*(float *)(lVar17 + 0x40) != 0.0) || (*(float *)(lVar17 + 0x44) != fVar24)) {
          *(undefined4 *)(lVar17 + 0x40) = 0;
          *(float *)(lVar17 + 0x44) = fVar24;
          FUN_0091ada4();
          fVar23 = DAT_0313a260;
        }
        uVar20 = uVar20 + 1;
        fVar26 = fVar26 + fVar23;
      } while (uVar20 < *puVar8);
    }
  }
LAB_00b92e48:
  puVar9 = (uint *)(param_1 + 0x12080);
  uVar15 = *puVar9;
  uVar19 = (uint)(uVar15 != 0);
  *(uint *)(param_1 + 0x5d6c) =
       *(uint *)(param_1 + 0x5d6c) & 0xfffffff8 | *(uint *)(param_1 + 0x5d6c) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x5f8c) =
       *(uint *)(param_1 + 0x5f8c) & 0xfffffff8 | *(uint *)(param_1 + 0x5f8c) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x5afc) =
       *(uint *)(param_1 + 0x5afc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x5afc) & 3 | (uint)(uVar15 != 0) << 2;
  if (uVar15 != 0) {
    if ((*(float *)(param_1 + 0x5d28) != 72.0) || (*(float *)(param_1 + 0x5d2c) != fVar26)) {
      *(float *)(param_1 + 0x5d28) = 72.0;
      *(float *)(param_1 + 0x5d2c) = fVar26;
      FUN_0091ada4(param_1 + 0x5ce8);
    }
    local_c0[0] = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x5ce8) + 0x28))(param_1 + 0x5ce8,local_c0);
    if ((*(float *)(param_1 + 0x5f48) != 36.0) || (*(float *)(param_1 + 0x5f4c) != fVar26)) {
      *(float *)(param_1 + 0x5f48) = 36.0;
      *(float *)(param_1 + 0x5f4c) = fVar26;
      FUN_0091ada4(param_1 + 0x5f08);
    }
    local_c0[0] = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x5f08) + 0x28))(param_1 + 0x5f08,local_c0);
    fVar26 = fVar26 + 44.0;
    if ((*(float *)(param_1 + 0x5ab8) != 0.0) || (*(float *)(param_1 + 0x5abc) != fVar26)) {
      *(float *)(param_1 + 0x5ab8) = 0.0;
      *(float *)(param_1 + 0x5abc) = fVar26;
      FUN_0091ada4(lVar2);
    }
    local_c0[0] = 0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x5a78) + 0x28))(lVar2,local_c0);
    if ((*(float *)(param_1 + 0x5e58) != 72.0) || (*(float *)(param_1 + 0x5e5c) != fVar26)) {
      *(float *)(param_1 + 0x5e58) = 72.0;
      *(float *)(param_1 + 0x5e5c) = fVar26;
      FUN_0091ada4(param_1 + 0x5e18);
    }
    FUN_00f13f08(fVar25 + -72.0 + -32.0,0x40800000,param_1 + 0x5e18);
    fVar26 = fVar26 + DAT_0313a260 * 0.5 + 4.0;
    if ((*(float *)(param_1 + 0x5a30) != 0.0) || (*(float *)(param_1 + 0x5a34) != fVar26)) {
      *(float *)(param_1 + 0x5a30) = 0.0;
      *(float *)(param_1 + 0x5a34) = fVar26;
      FUN_0091ada4(param_1 + 0x59f0);
    }
    uVar15 = *puVar9;
    uVar20 = (ulong)uVar15;
    if (*(char *)(param_1 + 0x1266b) == '\0') {
      if (uVar15 != 0) {
        uVar20 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x12088) + uVar20 * 8);
          uVar20 = uVar20 + 1;
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) & 0xfffffffb;
        } while (uVar20 < *puVar9);
      }
    }
    else {
      if (uVar15 != 0) {
        uVar21 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x12088) + uVar21 * 8);
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) | 4;
          lVar17 = *(long *)(*(long *)(param_1 + 0x12088) + uVar21 * 8);
          fVar23 = DAT_0313a260 * (float)(uVar21 & 0xffffffff);
          if ((*(float *)(lVar17 + 0x40) != 0.0) || (*(float *)(lVar17 + 0x44) != fVar23)) {
            *(undefined4 *)(lVar17 + 0x40) = 0;
            *(float *)(lVar17 + 0x44) = fVar23;
            FUN_0091ada4();
          }
          uVar20 = (ulong)*puVar9;
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar20);
      }
      fVar26 = fVar26 + DAT_0313a260 * (float)uVar20;
    }
  }
  puVar10 = (uint *)(param_1 + 0x120a0);
  uVar15 = *puVar10;
  uVar19 = (uint)(uVar15 != 0);
  *(uint *)(param_1 + 0x7e9c) =
       *(uint *)(param_1 + 0x7e9c) & 0xfffffff8 | *(uint *)(param_1 + 0x7e9c) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x80bc) =
       *(uint *)(param_1 + 0x80bc) & 0xfffffff8 | *(uint *)(param_1 + 0x80bc) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x7c2c) =
       *(uint *)(param_1 + 0x7c2c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x7c2c) & 3 | (uint)(uVar15 != 0) << 2;
  if (uVar15 != 0) {
    plVar11 = (long *)(param_1 + 0x8038);
    if ((*(float *)(param_1 + 0x7e58) != 72.0) || (*(float *)(param_1 + 0x7e5c) != fVar26)) {
      *(float *)(param_1 + 0x7e58) = 72.0;
      *(float *)(param_1 + 0x7e5c) = fVar26;
      FUN_0091ada4(param_1 + 0x7e18);
    }
    local_c0[0] = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x7e18) + 0x28))(param_1 + 0x7e18,local_c0);
    if ((*(float *)(param_1 + 0x8078) != 36.0) || (*(float *)(param_1 + 0x807c) != fVar26)) {
      *(float *)(param_1 + 0x8078) = 36.0;
      *(float *)(param_1 + 0x807c) = fVar26;
      FUN_0091ada4(plVar11);
    }
    local_c0[0] = 0x3f0000003f000000;
    (**(code **)(*plVar11 + 0x28))(plVar11,local_c0);
    fVar26 = fVar26 + 44.0;
    if ((*(float *)(param_1 + 0x7be8) != 0.0) || (*(float *)(param_1 + 0x7bec) != fVar26)) {
      *(float *)(param_1 + 0x7be8) = 0.0;
      *(float *)(param_1 + 0x7bec) = fVar26;
      FUN_0091ada4(lVar5);
    }
    local_c0[0] = 0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x7ba8) + 0x28))(lVar5,local_c0);
    if ((*(float *)(param_1 + 0x7f88) != 72.0) || (*(float *)(param_1 + 0x7f8c) != fVar26)) {
      *(float *)(param_1 + 0x7f88) = 72.0;
      *(float *)(param_1 + 0x7f8c) = fVar26;
      FUN_0091ada4(param_1 + 0x7f48);
    }
    FUN_00f13f08(fVar25 + -72.0 + -32.0,0x40800000,param_1 + 0x7f48);
    fVar26 = fVar26 + DAT_0313a260 * 0.5 + 4.0;
    if ((*(float *)(param_1 + 0x7b60) != 0.0) || (*(float *)(param_1 + 0x7b64) != fVar26)) {
      *(float *)(param_1 + 0x7b60) = 0.0;
      *(float *)(param_1 + 0x7b64) = fVar26;
      FUN_0091ada4(param_1 + 0x7b20);
    }
    uVar15 = *puVar10;
    uVar20 = (ulong)uVar15;
    if (*(char *)(param_1 + 0x1266d) == '\0') {
      if (uVar15 != 0) {
        uVar20 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x120a8) + uVar20 * 8);
          uVar20 = uVar20 + 1;
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) & 0xfffffffb;
        } while (uVar20 < *puVar10);
      }
    }
    else {
      if (uVar15 != 0) {
        uVar21 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x120a8) + uVar21 * 8);
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) | 4;
          lVar17 = *(long *)(*(long *)(param_1 + 0x120a8) + uVar21 * 8);
          fVar23 = DAT_0313a260 * (float)(uVar21 & 0xffffffff);
          if ((*(float *)(lVar17 + 0x40) != 0.0) || (*(float *)(lVar17 + 0x44) != fVar23)) {
            *(undefined4 *)(lVar17 + 0x40) = 0;
            *(float *)(lVar17 + 0x44) = fVar23;
            FUN_0091ada4();
          }
          uVar20 = (ulong)*puVar10;
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar20);
      }
      fVar26 = fVar26 + DAT_0313a260 * (float)uVar20;
    }
  }
  puVar10 = (uint *)(param_1 + 0x12090);
  uVar15 = *puVar10;
  uVar19 = (uint)(uVar15 != 0);
  *(uint *)(param_1 + 0x738c) =
       *(uint *)(param_1 + 0x738c) & 0xfffffff8 | *(uint *)(param_1 + 0x738c) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x75ac) =
       *(uint *)(param_1 + 0x75ac) & 0xfffffff8 | *(uint *)(param_1 + 0x75ac) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x711c) =
       *(uint *)(param_1 + 0x711c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x711c) & 3 | (uint)(uVar15 != 0) << 2;
  if (uVar15 != 0) {
    if ((*(float *)(param_1 + 0x7348) != 72.0) || (*(float *)(param_1 + 0x734c) != fVar26)) {
      *(float *)(param_1 + 0x7348) = 72.0;
      *(float *)(param_1 + 0x734c) = fVar26;
      FUN_0091ada4(param_1 + 0x7308);
    }
    local_c0[0] = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x7308) + 0x28))(param_1 + 0x7308,local_c0);
    if ((*(float *)(param_1 + 0x7568) != 36.0) || (*(float *)(param_1 + 0x756c) != fVar26)) {
      *(float *)(param_1 + 0x7568) = 36.0;
      *(float *)(param_1 + 0x756c) = fVar26;
      FUN_0091ada4(param_1 + 0x7528);
    }
    local_c0[0] = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x7528) + 0x28))(param_1 + 0x7528,local_c0);
    fVar26 = fVar26 + 44.0;
    if ((*(float *)(param_1 + 0x70d8) != 0.0) || (*(float *)(param_1 + 0x70dc) != fVar26)) {
      *(float *)(param_1 + 0x70d8) = 0.0;
      *(float *)(param_1 + 0x70dc) = fVar26;
      FUN_0091ada4(lVar4);
    }
    local_c0[0] = 0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x7098) + 0x28))(lVar4,local_c0);
    if ((*(float *)(param_1 + 0x7478) != 72.0) || (*(float *)(param_1 + 0x747c) != fVar26)) {
      *(float *)(param_1 + 0x7478) = 72.0;
      *(float *)(param_1 + 0x747c) = fVar26;
      FUN_0091ada4(param_1 + 0x7438);
    }
    FUN_00f13f08(fVar25 + -72.0 + -32.0,0x40800000,param_1 + 0x7438);
    fVar26 = fVar26 + DAT_0313a260 * 0.5 + 4.0;
    if ((*(float *)(param_1 + 0x7050) != 0.0) || (*(float *)(param_1 + 0x7054) != fVar26)) {
      *(float *)(param_1 + 0x7050) = 0.0;
      *(float *)(param_1 + 0x7054) = fVar26;
      FUN_0091ada4(param_1 + 0x7010);
    }
    uVar15 = *puVar10;
    uVar20 = (ulong)uVar15;
    if (*(char *)(param_1 + 0x1266c) == '\0') {
      if (uVar15 != 0) {
        uVar20 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x12098) + uVar20 * 8);
          uVar20 = uVar20 + 1;
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) & 0xfffffffb;
        } while (uVar20 < *puVar10);
      }
    }
    else {
      if (uVar15 != 0) {
        uVar21 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x12098) + uVar21 * 8);
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) | 4;
          lVar17 = *(long *)(*(long *)(param_1 + 0x12098) + uVar21 * 8);
          fVar23 = DAT_0313a260 * (float)(uVar21 & 0xffffffff);
          if ((*(float *)(lVar17 + 0x40) != 0.0) || (*(float *)(lVar17 + 0x44) != fVar23)) {
            *(undefined4 *)(lVar17 + 0x40) = 0;
            *(float *)(lVar17 + 0x44) = fVar23;
            FUN_0091ada4();
          }
          uVar20 = (ulong)*puVar10;
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar20);
      }
      fVar26 = fVar26 + DAT_0313a260 * (float)uVar20;
    }
  }
  puVar10 = (uint *)(param_1 + 0x12050);
  uVar15 = *puVar10;
  uVar19 = (uint)(uVar15 != 0);
  *(uint *)(param_1 + 0x687c) =
       *(uint *)(param_1 + 0x687c) & 0xfffffff8 | *(uint *)(param_1 + 0x687c) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x6a9c) =
       *(uint *)(param_1 + 0x6a9c) & 0xfffffff8 | *(uint *)(param_1 + 0x6a9c) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x660c) =
       *(uint *)(param_1 + 0x660c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x660c) & 3 | (uint)(uVar15 != 0) << 2;
  if (uVar15 != 0) {
    if ((*(float *)(param_1 + 0x6838) != 72.0) || (*(float *)(param_1 + 0x683c) != fVar26)) {
      *(float *)(param_1 + 0x6838) = 72.0;
      *(float *)(param_1 + 0x683c) = fVar26;
      FUN_0091ada4(param_1 + 0x67f8);
    }
    local_c0[0] = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x67f8) + 0x28))(param_1 + 0x67f8,local_c0);
    if ((*(float *)(param_1 + 0x6a58) != 36.0) || (*(float *)(param_1 + 0x6a5c) != fVar26)) {
      *(float *)(param_1 + 0x6a58) = 36.0;
      *(float *)(param_1 + 0x6a5c) = fVar26;
      FUN_0091ada4(param_1 + 0x6a18);
    }
    local_c0[0] = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x6a18) + 0x28))(param_1 + 0x6a18,local_c0);
    fVar26 = fVar26 + 44.0;
    if ((*(float *)(param_1 + 0x65c8) != 0.0) || (*(float *)(param_1 + 0x65cc) != fVar26)) {
      *(float *)(param_1 + 0x65c8) = 0.0;
      *(float *)(param_1 + 0x65cc) = fVar26;
      FUN_0091ada4(lVar3);
    }
    local_c0[0] = 0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x6588) + 0x28))(lVar3,local_c0);
    if ((*(float *)(param_1 + 0x6968) != 72.0) || (*(float *)(param_1 + 0x696c) != fVar26)) {
      *(float *)(param_1 + 0x6968) = 72.0;
      *(float *)(param_1 + 0x696c) = fVar26;
      FUN_0091ada4(param_1 + 0x6928);
    }
    FUN_00f13f08(fVar25 + -72.0 + -32.0,0x40800000,param_1 + 0x6928);
    fVar26 = fVar26 + DAT_0313a260 * 0.5 + 4.0;
    if ((*(float *)(param_1 + 0x6540) != 0.0) || (*(float *)(param_1 + 0x6544) != fVar26)) {
      *(float *)(param_1 + 0x6540) = 0.0;
      *(float *)(param_1 + 0x6544) = fVar26;
      FUN_0091ada4(param_1 + 0x6500);
    }
    uVar15 = *puVar10;
    uVar20 = (ulong)uVar15;
    if (*(char *)(param_1 + 0x1266e) == '\0') {
      if (uVar15 != 0) {
        uVar20 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x12058) + uVar20 * 8);
          uVar20 = uVar20 + 1;
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) & 0xfffffffb;
        } while (uVar20 < *puVar10);
      }
    }
    else {
      if (uVar15 != 0) {
        uVar21 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x12058) + uVar21 * 8);
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) | 4;
          lVar17 = *(long *)(*(long *)(param_1 + 0x12058) + uVar21 * 8);
          fVar23 = DAT_0313a260 * (float)(uVar21 & 0xffffffff);
          if ((*(float *)(lVar17 + 0x40) != 0.0) || (*(float *)(lVar17 + 0x44) != fVar23)) {
            *(undefined4 *)(lVar17 + 0x40) = 0;
            *(float *)(lVar17 + 0x44) = fVar23;
            FUN_0091ada4();
          }
          uVar20 = (ulong)*puVar10;
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar20);
      }
      fVar26 = fVar26 + DAT_0313a260 * (float)uVar20;
    }
  }
  puVar10 = (uint *)(param_1 + 0x12070);
  if (*puVar10 == 0) {
    uVar15 = (uint)(*(int *)(param_1 + 0x12660) != 0);
  }
  else {
    uVar15 = 1;
  }
  *(uint *)(param_1 + 0x89ac) =
       *(uint *)(param_1 + 0x89ac) & 0xfffffff8 | *(uint *)(param_1 + 0x89ac) & 3 | uVar15 << 2;
  *(uint *)(param_1 + 0x8bcc) =
       *(uint *)(param_1 + 0x8bcc) & 0xfffffff8 | *(uint *)(param_1 + 0x8bcc) & 3 | uVar15 << 2;
  *(uint *)(param_1 + 0x873c) =
       *(uint *)(param_1 + 0x873c) & 0xfffffff8 | *(uint *)(param_1 + 0x873c) & 3 | uVar15 << 2;
  if (uVar15 != 0) {
    pfVar7 = (float *)(param_1 + 0x8968);
    plVar11 = (long *)(param_1 + 0x8928);
    if ((*pfVar7 != 72.0) || (*(float *)(param_1 + 0x896c) != fVar26)) {
      *pfVar7 = 72.0;
      *(float *)(param_1 + 0x896c) = fVar26;
      FUN_0091ada4(plVar11);
    }
    plVar12 = (long *)(param_1 + 0x8b48);
    local_c0[0] = 0x3f00000000000000;
    (**(code **)(*plVar11 + 0x28))(plVar11,local_c0);
    fVar24 = *pfVar7;
    plVar13 = (long *)(param_1 + 0x9140);
    fVar23 = (float)FUN_00f0d4e0(plVar11);
    fVar23 = fVar24 + fVar23 + 20.0;
    if ((*(float *)(param_1 + 0x9180) != fVar23) || (*(float *)(param_1 + 0x9184) != fVar26)) {
      *(float *)(param_1 + 0x9180) = fVar23;
      *(float *)(param_1 + 0x9184) = fVar26;
      FUN_0091ada4(plVar13);
    }
    local_c0[0] = 0x3f00000000000000;
    (**(code **)(*plVar13 + 0x28))(plVar13,local_c0);
    if ((*(float *)(param_1 + 0x8b88) != 36.0) || (*(float *)(param_1 + 0x8b8c) != fVar26)) {
      *(float *)(param_1 + 0x8b88) = 36.0;
      *(float *)(param_1 + 0x8b8c) = fVar26;
      FUN_0091ada4(plVar12);
    }
    local_c0[0] = 0x3f0000003f000000;
    (**(code **)(*plVar12 + 0x28))(plVar12,local_c0);
    fVar23 = fVar26 + 44.0;
    if ((*(float *)(param_1 + 0x86f8) != 0.0) || (*(float *)(param_1 + 0x86fc) != fVar23)) {
      *(float *)(param_1 + 0x86f8) = 0.0;
      *(float *)(param_1 + 0x86fc) = fVar23;
      FUN_0091ada4(plVar22);
    }
    local_c0[0] = 0x3f80000000000000;
    (**(code **)(*plVar22 + 0x28))(plVar22,local_c0);
    plVar22 = (long *)(param_1 + 0x96b8);
    fVar24 = (float)FUN_00f0e700(plVar22);
    fVar24 = fVar25 + -72.0 + fVar24 * -0.5 + 12.0;
    if ((*(float *)(param_1 + 0x96f8) != fVar24) || (*(float *)(param_1 + 0x96fc) != fVar26)) {
      *(float *)(param_1 + 0x96f8) = fVar24;
      *(float *)(param_1 + 0x96fc) = fVar26;
      FUN_0091ada4(plVar22);
    }
    local_c0[0] = 0x3f0000003f000000;
    (**(code **)(*plVar22 + 0x28))(plVar22,local_c0);
    plVar11 = (long *)(param_1 + 0x97a8);
    if ((*(float *)(param_1 + 0x97e8) != fVar24) || (*(float *)(param_1 + 0x97ec) != fVar26 + -5.0))
    {
      *(float *)(param_1 + 0x97e8) = fVar24;
      *(float *)(param_1 + 0x97ec) = fVar26 + -5.0;
      FUN_0091ada4(plVar11);
    }
    local_c0[0] = 0x3f0000003f000000;
    (**(code **)(*plVar11 + 0x28))(plVar11,local_c0);
    fVar26 = 1.5;
    if ((uVar16 & 1) == 0) {
      fVar26 = 1.0;
    }
    if ((*(float *)(param_1 + 0x9700) != fVar26) || (*(float *)(param_1 + 0x9704) != fVar26)) {
      *(float *)(param_1 + 0x9700) = fVar26;
      *(float *)(param_1 + 0x9704) = fVar26;
      FUN_0091ada4(plVar22);
    }
    fVar26 = fVar26 * 0.85;
    if ((*(float *)(param_1 + 0x97f0) != fVar26) || (*(float *)(param_1 + 0x97f4) != fVar26)) {
      *(float *)(param_1 + 0x97f0) = fVar26;
      *(float *)(param_1 + 0x97f4) = fVar26;
      FUN_0091ada4(plVar11);
    }
    if ((*(float *)(param_1 + 0x8a98) != 72.0) || (*(float *)(param_1 + 0x8a9c) != fVar23)) {
      *(float *)(param_1 + 0x8a98) = 72.0;
      *(float *)(param_1 + 0x8a9c) = fVar23;
      FUN_0091ada4(param_1 + 0x8a58);
    }
    FUN_00f13f08(fVar25 + -72.0 + -32.0,0x40800000,param_1 + 0x8a58);
    fVar26 = fVar23 + DAT_0313a260 * 0.5 + 4.0;
    if ((*(float *)(param_1 + 0x8670) != 0.0) || (*(float *)(param_1 + 0x8674) != fVar26)) {
      *(float *)(param_1 + 0x8670) = 0.0;
      *(float *)(param_1 + 0x8674) = fVar26;
      FUN_0091ada4(param_1 + 0x8630);
    }
    if (*(char *)(param_1 + 0x1266f) == '\0') {
      if (*puVar10 != 0) {
        uVar20 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x12078) + uVar20 * 8);
          uVar20 = uVar20 + 1;
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) & 0xfffffffb;
        } while (uVar20 < *puVar10);
      }
    }
    else {
      if (*puVar10 == 0) {
        fVar23 = 0.0;
      }
      else {
        uVar20 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x12078) + uVar20 * 8);
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) | 4;
          lVar17 = *(long *)(*(long *)(param_1 + 0x12078) + uVar20 * 8);
          fVar23 = DAT_0313a260 * (float)(uVar20 & 0xffffffff);
          if ((*(float *)(lVar17 + 0x40) != 0.0) || (*(float *)(lVar17 + 0x44) != fVar23)) {
            *(undefined4 *)(lVar17 + 0x40) = 0;
            *(float *)(lVar17 + 0x44) = fVar23;
            FUN_0091ada4();
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < *puVar10);
        fVar23 = (float)*puVar10;
      }
      fVar26 = fVar26 + DAT_0313a260 * fVar23;
    }
  }
  if ((((*puVar6 == 0) && (*puVar8 == 0)) && (*(int *)(param_1 + 0x12530) == 0)) &&
     ((*(int *)(param_1 + 0x12660) == 0 && (*puVar9 == 0)))) {
    FUN_00ed02d8(*pfVar1,local_a0 - DAT_02be9bf8,param_1 + 0x38b0);
    FUN_00ed06a4(param_1 + 0x38b0,0);
    *(uint *)(param_1 + 0x41f4) = *(uint *)(param_1 + 0x41f4) | 4;
    lVar17 = param_1 + 0x4170;
    *(uint *)(param_1 + 0x4324) = *(uint *)(param_1 + 0x4324) | 4;
    lVar18 = param_1 + 0x42a0;
    FUN_00f0dad0(fVar25 - (DAT_02be9bf4 + DAT_02be9bf4),lVar17,1);
    pfVar1 = (float *)(param_1 + 0x41b0);
    fVar26 = (local_a0 - DAT_02be9bf8) * 0.3;
    pfVar7 = (float *)(param_1 + 0x41b4);
    if ((*pfVar1 != fVar25 * 0.5) || (*pfVar7 != fVar26)) {
      *pfVar1 = fVar25 * 0.5;
      *pfVar7 = fVar26;
      FUN_0091ada4(lVar17);
    }
    local_c0[0] = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x4170) + 0x28))(lVar17,local_c0);
    fVar24 = *pfVar1;
    fVar27 = *pfVar7;
    FUN_00f0d4e0(lVar17);
    fVar23 = fVar26 * 0.5;
    FUN_00f0d4e0(lVar18);
    fVar26 = fVar27 + fVar23 + fVar26 * 0.5 + 60.0;
    if ((*(float *)(param_1 + 0x42e0) != fVar24) || (*(float *)(param_1 + 0x42e4) != fVar26)) {
      *(float *)(param_1 + 0x42e0) = fVar24;
      *(float *)(param_1 + 0x42e4) = fVar26;
      FUN_0091ada4(lVar18);
    }
    local_c0[0] = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x42a0) + 0x28))(lVar18,local_c0);
    FUN_00f0dad0(fVar25 - (DAT_02be9bf4 + DAT_02be9bf4),lVar18,1);
    lVar17 = *(long *)(param_1 + 0x120b0);
    *(uint *)(param_1 + 0x9ad4) =
         *(uint *)(param_1 + 0x9ad4) & 0xfffffff8 |
         *(uint *)(param_1 + 0x9ad4) & 3 | (uint)(lVar17 != 0) << 2;
  }
  else {
    FUN_00ed02d8(*pfVar1,fVar26,param_1 + 0x38b0);
    FUN_00ed06a4(param_1 + 0x38b0,1);
    *(uint *)(param_1 + 0x41f4) = *(uint *)(param_1 + 0x41f4) & 0xfffffffb;
    *(uint *)(param_1 + 0x4324) = *(uint *)(param_1 + 0x4324) & 0xfffffffb;
    lVar17 = *(long *)(param_1 + 0x120b0);
  }
  if (lVar17 != 0) {
    plVar22 = (long *)(param_1 + 0x120b0);
    FUN_008fa54c(local_c0,"friendInMatchInformation");
    lVar18 = *plVar22;
    uVar20 = (ulong)(*(byte *)(lVar18 + 0x3d80) >> 1);
    lVar17 = lVar18 + 0x3d81;
    if ((*(byte *)(lVar18 + 0x3d80) & 1) != 0) {
      uVar20 = *(ulong *)(lVar18 + 0x3d88);
      lVar17 = *(long *)(lVar18 + 0x3d90);
    }
    FUN_0090de84(local_c0,lVar17,uVar20);
    uVar20 = FUN_00b27edc(param_1 + 0x12448,local_c0);
    if (((uVar20 & 1) != 0) && (*(int *)(*plVar22 + 0x3da8) == 2)) {
      FUN_00b9ac4c(param_1,*plVar22,1);
    }
    uVar20 = FUN_00b27edc(param_1 + 0x12448,local_c0);
    if (((uVar20 & 1) != 0) && (*(int *)(*plVar22 + 0x3da8) == 3)) {
      FUN_00b9b754(param_1,*plVar22,1);
    }
    if ((local_c0[0] & 1) != 0) {
      operator_delete(local_b0);
    }
  }
  if (*(long *)(lVar14 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b92674(long param_1)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  float *pfVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulong auStack_c0 [2];
  void *pvStack_b0;
  undefined1 auStack_a4 [4];
  float fStack_a0;
  undefined1 auStack_9c [4];
  long lStack_98;
  
  lVar14 = tpidr_el0;
  lStack_98 = *(long *)(lVar14 + 0x28);
  uVar15 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar15 & 1,auStack_9c,&fStack_a0,auStack_a4);
  uVar16 = FUN_0092ea9c();
  pfVar1 = (float *)(param_1 + 0x12650);
  lVar17 = param_1 + 0x4458;
  fVar25 = *pfVar1;
  FUN_00f13f08(fVar25,0x43000000,lVar17);
  lVar18 = param_1 + 0x4f68;
  FUN_00f13f08(*pfVar1,0x43000000,lVar18);
  lVar2 = param_1 + 0x5a78;
  FUN_00f13f08(*pfVar1,0x43000000,lVar2);
  lVar3 = param_1 + 0x6588;
  FUN_00f13f08(*pfVar1,0x43000000,lVar3);
  lVar4 = param_1 + 0x7098;
  FUN_00f13f08(*pfVar1,0x43000000,lVar4);
  lVar5 = param_1 + 0x7ba8;
  FUN_00f13f08(*pfVar1,0x43000000,lVar5);
  plVar22 = (long *)(param_1 + 0x86b8);
  FUN_00f13f08(*pfVar1,0x43000000);
  puVar6 = (uint *)(param_1 + 0x12040);
  uVar15 = *puVar6;
  uVar19 = (uint)(uVar15 != 0);
  *(uint *)(param_1 + 0x474c) =
       *(uint *)(param_1 + 0x474c) & 0xfffffff8 | *(uint *)(param_1 + 0x474c) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x496c) =
       *(uint *)(param_1 + 0x496c) & 0xfffffff8 | *(uint *)(param_1 + 0x496c) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x44dc) =
       *(uint *)(param_1 + 0x44dc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x44dc) & 3 | (uint)(uVar15 != 0) << 2;
  if (uVar15 == 0) {
    fVar26 = 88.0;
  }
  else {
    pfVar7 = (float *)(param_1 + 0x4708);
    if ((*pfVar7 != 72.0) || (*(float *)(param_1 + 0x470c) != 88.0)) {
      pfVar7[0] = 72.0;
      pfVar7[1] = 88.0;
      FUN_0091ada4(param_1 + 0x46c8);
    }
    auStack_c0[0] = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x46c8) + 0x28))(param_1 + 0x46c8,auStack_c0);
    pfVar7 = (float *)(param_1 + 0x4928);
    if ((*pfVar7 != 36.0) || (*(float *)(param_1 + 0x492c) != 88.0)) {
      pfVar7[0] = 36.0;
      pfVar7[1] = 88.0;
      FUN_0091ada4(param_1 + 0x48e8);
    }
    auStack_c0[0] = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x48e8) + 0x28))(param_1 + 0x48e8,auStack_c0);
    pfVar7 = (float *)(param_1 + 0x4498);
    if ((*pfVar7 != 0.0) || (*(float *)(param_1 + 0x449c) != 132.0)) {
      pfVar7[0] = 0.0;
      pfVar7[1] = 132.0;
      FUN_0091ada4(lVar17);
    }
    auStack_c0[0] = 0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x4458) + 0x28))(lVar17,auStack_c0);
    pfVar7 = (float *)(param_1 + 0x4838);
    if ((*pfVar7 != 72.0) || (*(float *)(param_1 + 0x483c) != 132.0)) {
      pfVar7[0] = 72.0;
      pfVar7[1] = 132.0;
      FUN_0091ada4(param_1 + 0x47f8);
    }
    FUN_00f13f08(fVar25 + -72.0 + -32.0,0x40800000,param_1 + 0x47f8);
    fVar26 = DAT_0313a260 * 0.5 + 4.0 + 132.0;
    if ((*(float *)(param_1 + 0x4410) != 0.0) || (*(float *)(param_1 + 0x4414) != fVar26)) {
      *(float *)(param_1 + 0x4410) = 0.0;
      *(float *)(param_1 + 0x4414) = fVar26;
      FUN_0091ada4(param_1 + 0x43d0);
    }
    if (*(char *)(param_1 + 0x12668) == '\0') {
      if (*puVar6 != 0) {
        uVar20 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x12048) + uVar20 * 8);
          uVar20 = uVar20 + 1;
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) & 0xfffffffb;
        } while (uVar20 < *puVar6);
      }
    }
    else if (*puVar6 != 0) {
      uVar20 = 0;
      fVar23 = DAT_0313a260;
      do {
        lVar17 = *(long *)(*(long *)(param_1 + 0x12048) + uVar20 * 8);
        *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) | 4;
        lVar17 = *(long *)(*(long *)(param_1 + 0x12048) + uVar20 * 8);
        fVar24 = fVar23 * (float)(uVar20 & 0xffffffff);
        if ((*(float *)(lVar17 + 0x40) != 0.0) || (*(float *)(lVar17 + 0x44) != fVar24)) {
          *(undefined4 *)(lVar17 + 0x40) = 0;
          *(float *)(lVar17 + 0x44) = fVar24;
          FUN_0091ada4();
          fVar23 = DAT_0313a260;
        }
        uVar20 = uVar20 + 1;
        fVar26 = fVar26 + fVar23;
      } while (uVar20 < *puVar6);
    }
  }
  puVar8 = (uint *)(param_1 + 0x12060);
  puVar9 = (uint *)(param_1 + 0x525c);
  if (*puVar8 == 0) {
    *puVar9 = *puVar9 & 0xfffffffb;
    *(uint *)(param_1 + 0x547c) = *(uint *)(param_1 + 0x547c) & 0xfffffffb;
    *(uint *)(param_1 + 0x4fec) = *(uint *)(param_1 + 0x4fec) & 0xfffffffb;
    *(uint *)(param_1 + 0x538c) = *(uint *)(param_1 + 0x538c) & 0xfffffffb;
    *(uint *)(param_1 + 0x69ac) = *(uint *)(param_1 + 0x69ac) & 0xfffffffb;
  }
  else {
    *puVar9 = *puVar9 | 4;
    *(uint *)(param_1 + 0x547c) = *(uint *)(param_1 + 0x547c) | 4;
    *(uint *)(param_1 + 0x4fec) = *(uint *)(param_1 + 0x4fec) | 4;
    if ((*(float *)(param_1 + 0x5218) != 72.0) || (*(float *)(param_1 + 0x521c) != fVar26)) {
      *(float *)(param_1 + 0x5218) = 72.0;
      *(float *)(param_1 + 0x521c) = fVar26;
      FUN_0091ada4(param_1 + 0x51d8);
    }
    auStack_c0[0] = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x51d8) + 0x28))(param_1 + 0x51d8,auStack_c0);
    if ((*(float *)(param_1 + 0x5438) != 36.0) || (*(float *)(param_1 + 0x543c) != fVar26)) {
      *(float *)(param_1 + 0x5438) = 36.0;
      *(float *)(param_1 + 0x543c) = fVar26;
      FUN_0091ada4(param_1 + 0x53f8);
    }
    auStack_c0[0] = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x53f8) + 0x28))(param_1 + 0x53f8,auStack_c0);
    fVar26 = fVar26 + 44.0;
    if ((*(float *)(param_1 + 0x4fa8) != 0.0) || (*(float *)(param_1 + 0x4fac) != fVar26)) {
      *(float *)(param_1 + 0x4fa8) = 0.0;
      *(float *)(param_1 + 0x4fac) = fVar26;
      FUN_0091ada4(lVar18);
    }
    auStack_c0[0] = 0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x4f68) + 0x28))(lVar18,auStack_c0);
    if ((*(float *)(param_1 + 0x5348) != 72.0) || (*(float *)(param_1 + 0x534c) != fVar26)) {
      *(float *)(param_1 + 0x5348) = 72.0;
      *(float *)(param_1 + 0x534c) = fVar26;
      FUN_0091ada4(param_1 + 0x5308);
    }
    FUN_00f13f08(fVar25 + -72.0 + -32.0,0x40800000,param_1 + 0x5308);
    fVar26 = fVar26 + DAT_0313a260 * 0.5 + 4.0;
    if ((*(float *)(param_1 + 0x4f20) != 0.0) || (*(float *)(param_1 + 0x4f24) != fVar26)) {
      *(float *)(param_1 + 0x4f20) = 0.0;
      *(float *)(param_1 + 0x4f24) = fVar26;
      FUN_0091ada4(param_1 + 0x4ee0);
    }
    if ((*(char *)(param_1 + 0x1266a) == '\0') &&
       ((*(uint *)(param_1 + 0x12540) < 5 ||
        ((((*(int *)(param_1 + 0x12080) == 0 && (*(int *)(param_1 + 0x120a0) == 0)) &&
          (*(int *)(param_1 + 0x12090) == 0)) && (*(int *)(param_1 + 0x12050) == 0)))))) {
      uVar15 = *puVar8;
    }
    else {
      uVar15 = *puVar8;
      if (*(char *)(param_1 + 0x12669) == '\0') {
        if (uVar15 != 0) {
          uVar20 = 0;
          do {
            lVar17 = *(long *)(*(long *)(param_1 + 0x12068) + uVar20 * 8);
            uVar20 = uVar20 + 1;
            *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) & 0xfffffffb;
          } while (uVar20 < *puVar8);
        }
        goto LAB_00b92e48;
      }
    }
    if (uVar15 != 0) {
      uVar20 = 0;
      fVar23 = DAT_0313a260;
      do {
        lVar17 = *(long *)(*(long *)(param_1 + 0x12068) + uVar20 * 8);
        *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) | 4;
        lVar17 = *(long *)(*(long *)(param_1 + 0x12068) + uVar20 * 8);
        fVar24 = fVar23 * (float)(uVar20 & 0xffffffff);
        if ((*(float *)(lVar17 + 0x40) != 0.0) || (*(float *)(lVar17 + 0x44) != fVar24)) {
          *(undefined4 *)(lVar17 + 0x40) = 0;
          *(float *)(lVar17 + 0x44) = fVar24;
          FUN_0091ada4();
          fVar23 = DAT_0313a260;
        }
        uVar20 = uVar20 + 1;
        fVar26 = fVar26 + fVar23;
      } while (uVar20 < *puVar8);
    }
  }
LAB_00b92e48:
  puVar9 = (uint *)(param_1 + 0x12080);
  uVar15 = *puVar9;
  uVar19 = (uint)(uVar15 != 0);
  *(uint *)(param_1 + 0x5d6c) =
       *(uint *)(param_1 + 0x5d6c) & 0xfffffff8 | *(uint *)(param_1 + 0x5d6c) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x5f8c) =
       *(uint *)(param_1 + 0x5f8c) & 0xfffffff8 | *(uint *)(param_1 + 0x5f8c) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x5afc) =
       *(uint *)(param_1 + 0x5afc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x5afc) & 3 | (uint)(uVar15 != 0) << 2;
  if (uVar15 != 0) {
    if ((*(float *)(param_1 + 0x5d28) != 72.0) || (*(float *)(param_1 + 0x5d2c) != fVar26)) {
      *(float *)(param_1 + 0x5d28) = 72.0;
      *(float *)(param_1 + 0x5d2c) = fVar26;
      FUN_0091ada4(param_1 + 0x5ce8);
    }
    auStack_c0[0] = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x5ce8) + 0x28))(param_1 + 0x5ce8,auStack_c0);
    if ((*(float *)(param_1 + 0x5f48) != 36.0) || (*(float *)(param_1 + 0x5f4c) != fVar26)) {
      *(float *)(param_1 + 0x5f48) = 36.0;
      *(float *)(param_1 + 0x5f4c) = fVar26;
      FUN_0091ada4(param_1 + 0x5f08);
    }
    auStack_c0[0] = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x5f08) + 0x28))(param_1 + 0x5f08,auStack_c0);
    fVar26 = fVar26 + 44.0;
    if ((*(float *)(param_1 + 0x5ab8) != 0.0) || (*(float *)(param_1 + 0x5abc) != fVar26)) {
      *(float *)(param_1 + 0x5ab8) = 0.0;
      *(float *)(param_1 + 0x5abc) = fVar26;
      FUN_0091ada4(lVar2);
    }
    auStack_c0[0] = 0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x5a78) + 0x28))(lVar2,auStack_c0);
    if ((*(float *)(param_1 + 0x5e58) != 72.0) || (*(float *)(param_1 + 0x5e5c) != fVar26)) {
      *(float *)(param_1 + 0x5e58) = 72.0;
      *(float *)(param_1 + 0x5e5c) = fVar26;
      FUN_0091ada4(param_1 + 0x5e18);
    }
    FUN_00f13f08(fVar25 + -72.0 + -32.0,0x40800000,param_1 + 0x5e18);
    fVar26 = fVar26 + DAT_0313a260 * 0.5 + 4.0;
    if ((*(float *)(param_1 + 0x5a30) != 0.0) || (*(float *)(param_1 + 0x5a34) != fVar26)) {
      *(float *)(param_1 + 0x5a30) = 0.0;
      *(float *)(param_1 + 0x5a34) = fVar26;
      FUN_0091ada4(param_1 + 0x59f0);
    }
    uVar15 = *puVar9;
    uVar20 = (ulong)uVar15;
    if (*(char *)(param_1 + 0x1266b) == '\0') {
      if (uVar15 != 0) {
        uVar20 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x12088) + uVar20 * 8);
          uVar20 = uVar20 + 1;
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) & 0xfffffffb;
        } while (uVar20 < *puVar9);
      }
    }
    else {
      if (uVar15 != 0) {
        uVar21 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x12088) + uVar21 * 8);
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) | 4;
          lVar17 = *(long *)(*(long *)(param_1 + 0x12088) + uVar21 * 8);
          fVar23 = DAT_0313a260 * (float)(uVar21 & 0xffffffff);
          if ((*(float *)(lVar17 + 0x40) != 0.0) || (*(float *)(lVar17 + 0x44) != fVar23)) {
            *(undefined4 *)(lVar17 + 0x40) = 0;
            *(float *)(lVar17 + 0x44) = fVar23;
            FUN_0091ada4();
          }
          uVar20 = (ulong)*puVar9;
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar20);
      }
      fVar26 = fVar26 + DAT_0313a260 * (float)uVar20;
    }
  }
  puVar10 = (uint *)(param_1 + 0x120a0);
  uVar15 = *puVar10;
  uVar19 = (uint)(uVar15 != 0);
  *(uint *)(param_1 + 0x7e9c) =
       *(uint *)(param_1 + 0x7e9c) & 0xfffffff8 | *(uint *)(param_1 + 0x7e9c) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x80bc) =
       *(uint *)(param_1 + 0x80bc) & 0xfffffff8 | *(uint *)(param_1 + 0x80bc) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x7c2c) =
       *(uint *)(param_1 + 0x7c2c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x7c2c) & 3 | (uint)(uVar15 != 0) << 2;
  if (uVar15 != 0) {
    plVar11 = (long *)(param_1 + 0x8038);
    if ((*(float *)(param_1 + 0x7e58) != 72.0) || (*(float *)(param_1 + 0x7e5c) != fVar26)) {
      *(float *)(param_1 + 0x7e58) = 72.0;
      *(float *)(param_1 + 0x7e5c) = fVar26;
      FUN_0091ada4(param_1 + 0x7e18);
    }
    auStack_c0[0] = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x7e18) + 0x28))(param_1 + 0x7e18,auStack_c0);
    if ((*(float *)(param_1 + 0x8078) != 36.0) || (*(float *)(param_1 + 0x807c) != fVar26)) {
      *(float *)(param_1 + 0x8078) = 36.0;
      *(float *)(param_1 + 0x807c) = fVar26;
      FUN_0091ada4(plVar11);
    }
    auStack_c0[0] = 0x3f0000003f000000;
    (**(code **)(*plVar11 + 0x28))(plVar11,auStack_c0);
    fVar26 = fVar26 + 44.0;
    if ((*(float *)(param_1 + 0x7be8) != 0.0) || (*(float *)(param_1 + 0x7bec) != fVar26)) {
      *(float *)(param_1 + 0x7be8) = 0.0;
      *(float *)(param_1 + 0x7bec) = fVar26;
      FUN_0091ada4(lVar5);
    }
    auStack_c0[0] = 0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x7ba8) + 0x28))(lVar5,auStack_c0);
    if ((*(float *)(param_1 + 0x7f88) != 72.0) || (*(float *)(param_1 + 0x7f8c) != fVar26)) {
      *(float *)(param_1 + 0x7f88) = 72.0;
      *(float *)(param_1 + 0x7f8c) = fVar26;
      FUN_0091ada4(param_1 + 0x7f48);
    }
    FUN_00f13f08(fVar25 + -72.0 + -32.0,0x40800000,param_1 + 0x7f48);
    fVar26 = fVar26 + DAT_0313a260 * 0.5 + 4.0;
    if ((*(float *)(param_1 + 0x7b60) != 0.0) || (*(float *)(param_1 + 0x7b64) != fVar26)) {
      *(float *)(param_1 + 0x7b60) = 0.0;
      *(float *)(param_1 + 0x7b64) = fVar26;
      FUN_0091ada4(param_1 + 0x7b20);
    }
    uVar15 = *puVar10;
    uVar20 = (ulong)uVar15;
    if (*(char *)(param_1 + 0x1266d) == '\0') {
      if (uVar15 != 0) {
        uVar20 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x120a8) + uVar20 * 8);
          uVar20 = uVar20 + 1;
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) & 0xfffffffb;
        } while (uVar20 < *puVar10);
      }
    }
    else {
      if (uVar15 != 0) {
        uVar21 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x120a8) + uVar21 * 8);
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) | 4;
          lVar17 = *(long *)(*(long *)(param_1 + 0x120a8) + uVar21 * 8);
          fVar23 = DAT_0313a260 * (float)(uVar21 & 0xffffffff);
          if ((*(float *)(lVar17 + 0x40) != 0.0) || (*(float *)(lVar17 + 0x44) != fVar23)) {
            *(undefined4 *)(lVar17 + 0x40) = 0;
            *(float *)(lVar17 + 0x44) = fVar23;
            FUN_0091ada4();
          }
          uVar20 = (ulong)*puVar10;
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar20);
      }
      fVar26 = fVar26 + DAT_0313a260 * (float)uVar20;
    }
  }
  puVar10 = (uint *)(param_1 + 0x12090);
  uVar15 = *puVar10;
  uVar19 = (uint)(uVar15 != 0);
  *(uint *)(param_1 + 0x738c) =
       *(uint *)(param_1 + 0x738c) & 0xfffffff8 | *(uint *)(param_1 + 0x738c) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x75ac) =
       *(uint *)(param_1 + 0x75ac) & 0xfffffff8 | *(uint *)(param_1 + 0x75ac) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x711c) =
       *(uint *)(param_1 + 0x711c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x711c) & 3 | (uint)(uVar15 != 0) << 2;
  if (uVar15 != 0) {
    if ((*(float *)(param_1 + 0x7348) != 72.0) || (*(float *)(param_1 + 0x734c) != fVar26)) {
      *(float *)(param_1 + 0x7348) = 72.0;
      *(float *)(param_1 + 0x734c) = fVar26;
      FUN_0091ada4(param_1 + 0x7308);
    }
    auStack_c0[0] = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x7308) + 0x28))(param_1 + 0x7308,auStack_c0);
    if ((*(float *)(param_1 + 0x7568) != 36.0) || (*(float *)(param_1 + 0x756c) != fVar26)) {
      *(float *)(param_1 + 0x7568) = 36.0;
      *(float *)(param_1 + 0x756c) = fVar26;
      FUN_0091ada4(param_1 + 0x7528);
    }
    auStack_c0[0] = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x7528) + 0x28))(param_1 + 0x7528,auStack_c0);
    fVar26 = fVar26 + 44.0;
    if ((*(float *)(param_1 + 0x70d8) != 0.0) || (*(float *)(param_1 + 0x70dc) != fVar26)) {
      *(float *)(param_1 + 0x70d8) = 0.0;
      *(float *)(param_1 + 0x70dc) = fVar26;
      FUN_0091ada4(lVar4);
    }
    auStack_c0[0] = 0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x7098) + 0x28))(lVar4,auStack_c0);
    if ((*(float *)(param_1 + 0x7478) != 72.0) || (*(float *)(param_1 + 0x747c) != fVar26)) {
      *(float *)(param_1 + 0x7478) = 72.0;
      *(float *)(param_1 + 0x747c) = fVar26;
      FUN_0091ada4(param_1 + 0x7438);
    }
    FUN_00f13f08(fVar25 + -72.0 + -32.0,0x40800000,param_1 + 0x7438);
    fVar26 = fVar26 + DAT_0313a260 * 0.5 + 4.0;
    if ((*(float *)(param_1 + 0x7050) != 0.0) || (*(float *)(param_1 + 0x7054) != fVar26)) {
      *(float *)(param_1 + 0x7050) = 0.0;
      *(float *)(param_1 + 0x7054) = fVar26;
      FUN_0091ada4(param_1 + 0x7010);
    }
    uVar15 = *puVar10;
    uVar20 = (ulong)uVar15;
    if (*(char *)(param_1 + 0x1266c) == '\0') {
      if (uVar15 != 0) {
        uVar20 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x12098) + uVar20 * 8);
          uVar20 = uVar20 + 1;
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) & 0xfffffffb;
        } while (uVar20 < *puVar10);
      }
    }
    else {
      if (uVar15 != 0) {
        uVar21 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x12098) + uVar21 * 8);
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) | 4;
          lVar17 = *(long *)(*(long *)(param_1 + 0x12098) + uVar21 * 8);
          fVar23 = DAT_0313a260 * (float)(uVar21 & 0xffffffff);
          if ((*(float *)(lVar17 + 0x40) != 0.0) || (*(float *)(lVar17 + 0x44) != fVar23)) {
            *(undefined4 *)(lVar17 + 0x40) = 0;
            *(float *)(lVar17 + 0x44) = fVar23;
            FUN_0091ada4();
          }
          uVar20 = (ulong)*puVar10;
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar20);
      }
      fVar26 = fVar26 + DAT_0313a260 * (float)uVar20;
    }
  }
  puVar10 = (uint *)(param_1 + 0x12050);
  uVar15 = *puVar10;
  uVar19 = (uint)(uVar15 != 0);
  *(uint *)(param_1 + 0x687c) =
       *(uint *)(param_1 + 0x687c) & 0xfffffff8 | *(uint *)(param_1 + 0x687c) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x6a9c) =
       *(uint *)(param_1 + 0x6a9c) & 0xfffffff8 | *(uint *)(param_1 + 0x6a9c) & 3 | uVar19 << 2;
  *(uint *)(param_1 + 0x660c) =
       *(uint *)(param_1 + 0x660c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x660c) & 3 | (uint)(uVar15 != 0) << 2;
  if (uVar15 != 0) {
    if ((*(float *)(param_1 + 0x6838) != 72.0) || (*(float *)(param_1 + 0x683c) != fVar26)) {
      *(float *)(param_1 + 0x6838) = 72.0;
      *(float *)(param_1 + 0x683c) = fVar26;
      FUN_0091ada4(param_1 + 0x67f8);
    }
    auStack_c0[0] = 0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x67f8) + 0x28))(param_1 + 0x67f8,auStack_c0);
    if ((*(float *)(param_1 + 0x6a58) != 36.0) || (*(float *)(param_1 + 0x6a5c) != fVar26)) {
      *(float *)(param_1 + 0x6a58) = 36.0;
      *(float *)(param_1 + 0x6a5c) = fVar26;
      FUN_0091ada4(param_1 + 0x6a18);
    }
    auStack_c0[0] = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x6a18) + 0x28))(param_1 + 0x6a18,auStack_c0);
    fVar26 = fVar26 + 44.0;
    if ((*(float *)(param_1 + 0x65c8) != 0.0) || (*(float *)(param_1 + 0x65cc) != fVar26)) {
      *(float *)(param_1 + 0x65c8) = 0.0;
      *(float *)(param_1 + 0x65cc) = fVar26;
      FUN_0091ada4(lVar3);
    }
    auStack_c0[0] = 0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x6588) + 0x28))(lVar3,auStack_c0);
    if ((*(float *)(param_1 + 0x6968) != 72.0) || (*(float *)(param_1 + 0x696c) != fVar26)) {
      *(float *)(param_1 + 0x6968) = 72.0;
      *(float *)(param_1 + 0x696c) = fVar26;
      FUN_0091ada4(param_1 + 0x6928);
    }
    FUN_00f13f08(fVar25 + -72.0 + -32.0,0x40800000,param_1 + 0x6928);
    fVar26 = fVar26 + DAT_0313a260 * 0.5 + 4.0;
    if ((*(float *)(param_1 + 0x6540) != 0.0) || (*(float *)(param_1 + 0x6544) != fVar26)) {
      *(float *)(param_1 + 0x6540) = 0.0;
      *(float *)(param_1 + 0x6544) = fVar26;
      FUN_0091ada4(param_1 + 0x6500);
    }
    uVar15 = *puVar10;
    uVar20 = (ulong)uVar15;
    if (*(char *)(param_1 + 0x1266e) == '\0') {
      if (uVar15 != 0) {
        uVar20 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x12058) + uVar20 * 8);
          uVar20 = uVar20 + 1;
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) & 0xfffffffb;
        } while (uVar20 < *puVar10);
      }
    }
    else {
      if (uVar15 != 0) {
        uVar21 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x12058) + uVar21 * 8);
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) | 4;
          lVar17 = *(long *)(*(long *)(param_1 + 0x12058) + uVar21 * 8);
          fVar23 = DAT_0313a260 * (float)(uVar21 & 0xffffffff);
          if ((*(float *)(lVar17 + 0x40) != 0.0) || (*(float *)(lVar17 + 0x44) != fVar23)) {
            *(undefined4 *)(lVar17 + 0x40) = 0;
            *(float *)(lVar17 + 0x44) = fVar23;
            FUN_0091ada4();
          }
          uVar20 = (ulong)*puVar10;
          uVar21 = uVar21 + 1;
        } while (uVar21 < uVar20);
      }
      fVar26 = fVar26 + DAT_0313a260 * (float)uVar20;
    }
  }
  puVar10 = (uint *)(param_1 + 0x12070);
  if (*puVar10 == 0) {
    uVar15 = (uint)(*(int *)(param_1 + 0x12660) != 0);
  }
  else {
    uVar15 = 1;
  }
  *(uint *)(param_1 + 0x89ac) =
       *(uint *)(param_1 + 0x89ac) & 0xfffffff8 | *(uint *)(param_1 + 0x89ac) & 3 | uVar15 << 2;
  *(uint *)(param_1 + 0x8bcc) =
       *(uint *)(param_1 + 0x8bcc) & 0xfffffff8 | *(uint *)(param_1 + 0x8bcc) & 3 | uVar15 << 2;
  *(uint *)(param_1 + 0x873c) =
       *(uint *)(param_1 + 0x873c) & 0xfffffff8 | *(uint *)(param_1 + 0x873c) & 3 | uVar15 << 2;
  if (uVar15 != 0) {
    pfVar7 = (float *)(param_1 + 0x8968);
    plVar11 = (long *)(param_1 + 0x8928);
    if ((*pfVar7 != 72.0) || (*(float *)(param_1 + 0x896c) != fVar26)) {
      *pfVar7 = 72.0;
      *(float *)(param_1 + 0x896c) = fVar26;
      FUN_0091ada4(plVar11);
    }
    plVar12 = (long *)(param_1 + 0x8b48);
    auStack_c0[0] = 0x3f00000000000000;
    (**(code **)(*plVar11 + 0x28))(plVar11,auStack_c0);
    fVar24 = *pfVar7;
    plVar13 = (long *)(param_1 + 0x9140);
    fVar23 = (float)FUN_00f0d4e0(plVar11);
    fVar23 = fVar24 + fVar23 + 20.0;
    if ((*(float *)(param_1 + 0x9180) != fVar23) || (*(float *)(param_1 + 0x9184) != fVar26)) {
      *(float *)(param_1 + 0x9180) = fVar23;
      *(float *)(param_1 + 0x9184) = fVar26;
      FUN_0091ada4(plVar13);
    }
    auStack_c0[0] = 0x3f00000000000000;
    (**(code **)(*plVar13 + 0x28))(plVar13,auStack_c0);
    if ((*(float *)(param_1 + 0x8b88) != 36.0) || (*(float *)(param_1 + 0x8b8c) != fVar26)) {
      *(float *)(param_1 + 0x8b88) = 36.0;
      *(float *)(param_1 + 0x8b8c) = fVar26;
      FUN_0091ada4(plVar12);
    }
    auStack_c0[0] = 0x3f0000003f000000;
    (**(code **)(*plVar12 + 0x28))(plVar12,auStack_c0);
    fVar23 = fVar26 + 44.0;
    if ((*(float *)(param_1 + 0x86f8) != 0.0) || (*(float *)(param_1 + 0x86fc) != fVar23)) {
      *(float *)(param_1 + 0x86f8) = 0.0;
      *(float *)(param_1 + 0x86fc) = fVar23;
      FUN_0091ada4(plVar22);
    }
    auStack_c0[0] = 0x3f80000000000000;
    (**(code **)(*plVar22 + 0x28))(plVar22,auStack_c0);
    plVar22 = (long *)(param_1 + 0x96b8);
    fVar24 = (float)FUN_00f0e700(plVar22);
    fVar24 = fVar25 + -72.0 + fVar24 * -0.5 + 12.0;
    if ((*(float *)(param_1 + 0x96f8) != fVar24) || (*(float *)(param_1 + 0x96fc) != fVar26)) {
      *(float *)(param_1 + 0x96f8) = fVar24;
      *(float *)(param_1 + 0x96fc) = fVar26;
      FUN_0091ada4(plVar22);
    }
    auStack_c0[0] = 0x3f0000003f000000;
    (**(code **)(*plVar22 + 0x28))(plVar22,auStack_c0);
    plVar11 = (long *)(param_1 + 0x97a8);
    if ((*(float *)(param_1 + 0x97e8) != fVar24) || (*(float *)(param_1 + 0x97ec) != fVar26 + -5.0))
    {
      *(float *)(param_1 + 0x97e8) = fVar24;
      *(float *)(param_1 + 0x97ec) = fVar26 + -5.0;
      FUN_0091ada4(plVar11);
    }
    auStack_c0[0] = 0x3f0000003f000000;
    (**(code **)(*plVar11 + 0x28))(plVar11,auStack_c0);
    fVar26 = 1.5;
    if ((uVar16 & 1) == 0) {
      fVar26 = 1.0;
    }
    if ((*(float *)(param_1 + 0x9700) != fVar26) || (*(float *)(param_1 + 0x9704) != fVar26)) {
      *(float *)(param_1 + 0x9700) = fVar26;
      *(float *)(param_1 + 0x9704) = fVar26;
      FUN_0091ada4(plVar22);
    }
    fVar26 = fVar26 * 0.85;
    if ((*(float *)(param_1 + 0x97f0) != fVar26) || (*(float *)(param_1 + 0x97f4) != fVar26)) {
      *(float *)(param_1 + 0x97f0) = fVar26;
      *(float *)(param_1 + 0x97f4) = fVar26;
      FUN_0091ada4(plVar11);
    }
    if ((*(float *)(param_1 + 0x8a98) != 72.0) || (*(float *)(param_1 + 0x8a9c) != fVar23)) {
      *(float *)(param_1 + 0x8a98) = 72.0;
      *(float *)(param_1 + 0x8a9c) = fVar23;
      FUN_0091ada4(param_1 + 0x8a58);
    }
    FUN_00f13f08(fVar25 + -72.0 + -32.0,0x40800000,param_1 + 0x8a58);
    fVar26 = fVar23 + DAT_0313a260 * 0.5 + 4.0;
    if ((*(float *)(param_1 + 0x8670) != 0.0) || (*(float *)(param_1 + 0x8674) != fVar26)) {
      *(float *)(param_1 + 0x8670) = 0.0;
      *(float *)(param_1 + 0x8674) = fVar26;
      FUN_0091ada4(param_1 + 0x8630);
    }
    if (*(char *)(param_1 + 0x1266f) == '\0') {
      if (*puVar10 != 0) {
        uVar20 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x12078) + uVar20 * 8);
          uVar20 = uVar20 + 1;
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) & 0xfffffffb;
        } while (uVar20 < *puVar10);
      }
    }
    else {
      if (*puVar10 == 0) {
        fVar23 = 0.0;
      }
      else {
        uVar20 = 0;
        do {
          lVar17 = *(long *)(*(long *)(param_1 + 0x12078) + uVar20 * 8);
          *(uint *)(lVar17 + 0x84) = *(uint *)(lVar17 + 0x84) | 4;
          lVar17 = *(long *)(*(long *)(param_1 + 0x12078) + uVar20 * 8);
          fVar23 = DAT_0313a260 * (float)(uVar20 & 0xffffffff);
          if ((*(float *)(lVar17 + 0x40) != 0.0) || (*(float *)(lVar17 + 0x44) != fVar23)) {
            *(undefined4 *)(lVar17 + 0x40) = 0;
            *(float *)(lVar17 + 0x44) = fVar23;
            FUN_0091ada4();
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < *puVar10);
        fVar23 = (float)*puVar10;
      }
      fVar26 = fVar26 + DAT_0313a260 * fVar23;
    }
  }
  if ((((*puVar6 == 0) && (*puVar8 == 0)) && (*(int *)(param_1 + 0x12530) == 0)) &&
     ((*(int *)(param_1 + 0x12660) == 0 && (*puVar9 == 0)))) {
    FUN_00ed02d8(*pfVar1,fStack_a0 - DAT_02be9bf8,param_1 + 0x38b0);
    FUN_00ed06a4(param_1 + 0x38b0,0);
    *(uint *)(param_1 + 0x41f4) = *(uint *)(param_1 + 0x41f4) | 4;
    lVar17 = param_1 + 0x4170;
    *(uint *)(param_1 + 0x4324) = *(uint *)(param_1 + 0x4324) | 4;
    lVar18 = param_1 + 0x42a0;
    FUN_00f0dad0(fVar25 - (DAT_02be9bf4 + DAT_02be9bf4),lVar17,1);
    pfVar1 = (float *)(param_1 + 0x41b0);
    fVar26 = (fStack_a0 - DAT_02be9bf8) * 0.3;
    pfVar7 = (float *)(param_1 + 0x41b4);
    if ((*pfVar1 != fVar25 * 0.5) || (*pfVar7 != fVar26)) {
      *pfVar1 = fVar25 * 0.5;
      *pfVar7 = fVar26;
      FUN_0091ada4(lVar17);
    }
    auStack_c0[0] = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x4170) + 0x28))(lVar17,auStack_c0);
    fVar24 = *pfVar1;
    fVar27 = *pfVar7;
    FUN_00f0d4e0(lVar17);
    fVar23 = fVar26 * 0.5;
    FUN_00f0d4e0(lVar18);
    fVar26 = fVar27 + fVar23 + fVar26 * 0.5 + 60.0;
    if ((*(float *)(param_1 + 0x42e0) != fVar24) || (*(float *)(param_1 + 0x42e4) != fVar26)) {
      *(float *)(param_1 + 0x42e0) = fVar24;
      *(float *)(param_1 + 0x42e4) = fVar26;
      FUN_0091ada4(lVar18);
    }
    auStack_c0[0] = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x42a0) + 0x28))(lVar18,auStack_c0);
    FUN_00f0dad0(fVar25 - (DAT_02be9bf4 + DAT_02be9bf4),lVar18,1);
    lVar17 = *(long *)(param_1 + 0x120b0);
    *(uint *)(param_1 + 0x9ad4) =
         *(uint *)(param_1 + 0x9ad4) & 0xfffffff8 |
         *(uint *)(param_1 + 0x9ad4) & 3 | (uint)(lVar17 != 0) << 2;
  }
  else {
    FUN_00ed02d8(*pfVar1,fVar26,param_1 + 0x38b0);
    FUN_00ed06a4(param_1 + 0x38b0,1);
    *(uint *)(param_1 + 0x41f4) = *(uint *)(param_1 + 0x41f4) & 0xfffffffb;
    *(uint *)(param_1 + 0x4324) = *(uint *)(param_1 + 0x4324) & 0xfffffffb;
    lVar17 = *(long *)(param_1 + 0x120b0);
  }
  if (lVar17 != 0) {
    plVar22 = (long *)(param_1 + 0x120b0);
    FUN_008fa54c(auStack_c0,"friendInMatchInformation");
    lVar18 = *plVar22;
    uVar20 = (ulong)(*(byte *)(lVar18 + 0x3d80) >> 1);
    lVar17 = lVar18 + 0x3d81;
    if ((*(byte *)(lVar18 + 0x3d80) & 1) != 0) {
      uVar20 = *(ulong *)(lVar18 + 0x3d88);
      lVar17 = *(long *)(lVar18 + 0x3d90);
    }
    FUN_0090de84(auStack_c0,lVar17,uVar20);
    uVar20 = FUN_00b27edc(param_1 + 0x12448,auStack_c0);
    if (((uVar20 & 1) != 0) && (*(int *)(*plVar22 + 0x3da8) == 2)) {
      FUN_00b9ac4c(param_1,*plVar22,1);
    }
    uVar20 = FUN_00b27edc(param_1 + 0x12448,auStack_c0);
    if (((uVar20 & 1) != 0) && (*(int *)(*plVar22 + 0x3da8) == 3)) {
      FUN_00b9b754(param_1,*plVar22,1);
    }
    if ((auStack_c0[0] & 1) != 0) {
      operator_delete(pvStack_b0);
    }
  }
  if (*(long *)(lVar14 + 0x28) == lStack_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

