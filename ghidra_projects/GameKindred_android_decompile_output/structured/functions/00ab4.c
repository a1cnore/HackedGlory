// functions/00ab4 — 8 functions
#include "libGameKindred.h"




void FUN_00ab42b0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00ab6378(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00ab4338(long param_1)

{
  FUN_00b28094(param_1 + 0x950,param_1 + 0x1ac0,param_1 + 0xa38);
  return;
}




void FUN_00ab4350(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f0a7e0(param_3,"circle_button_fill");
  FUN_00cb74c4(*param_2,param_2[1],*(undefined4 *)(param_5 + 0x1ae8),0,0,param_1,param_2,uVar1,
               param_3,param_4);
  return;
}




void FUN_00ab43c0(long *param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  float fVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_a8;
  long *local_a0;
  float local_98;
  float local_94;
  undefined8 local_90;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(&local_94,&local_98);
  fVar16 = local_94 - DAT_031339d4;
  fVar9 = DAT_031339d4;
  if ((*(float *)(param_1 + 0x56) != fVar16 * 0.5) ||
     (fVar9 = *(float *)((long)param_1 + 0x2b4), fVar9 != 0.0)) {
    *(float *)(param_1 + 0x56) = fVar16 * 0.5;
    *(undefined4 *)((long)param_1 + 0x2b4) = 0;
    FUN_0091ada4(param_1 + 0x4e);
  }
  local_a8 = 0x3f000000;
  (**(code **)(param_1[0x4e] + 0x28))(param_1 + 0x4e,&local_a8);
  plVar4 = param_1 + 0x6b;
  fVar14 = (fVar16 + -1872.0) * 0.5;
  fVar7 = (float)FUN_00f01c20(plVar4);
  FUN_00f01c20(plVar4);
  fVar15 = fVar14 + 1000.0;
  if (fVar14 <= 0.0) {
    fVar15 = 1000.0;
  }
  *(float *)((long)param_1 + 0xacc) = fVar15;
  fVar15 = fVar14;
  if (fVar14 <= 0.0) {
    fVar15 = 40.0;
  }
  fVar15 = fVar16 - fVar15;
  fVar10 = (local_98 - DAT_02be3670) + -50.0;
  plVar1 = param_1 + 0x16e;
  *(float *)(param_1 + 0x15b) = fVar10;
  if ((*(float *)(param_1 + 0x177) != 1.0) ||
     (fVar10 = *(float *)((long)param_1 + 0xbbc), fVar10 != 1.0)) {
    lVar8 = NEON_fmov(0x3f800000,4);
    param_1[0x177] = lVar8;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0d4e0(plVar1);
  if ((*(float *)(param_1 + 0x176) != fVar15) ||
     (*(float *)((long)param_1 + 0xbb4) != fVar10 + 40.0)) {
    *(float *)(param_1 + 0x176) = fVar15;
    *(float *)((long)param_1 + 0xbb4) = fVar10 + 40.0;
    FUN_0091ada4(plVar1);
  }
  local_a8 = NEON_fmov(0x3f800000,4);
  fVar13 = ((fVar14 + 636.0) - fVar7 * 0.5) + -5.0;
  (**(code **)(param_1[0x16e] + 0x28))(plVar1,&local_a8);
  uVar11 = 0;
  uVar12 = 0;
  FUN_00f0db64(0x448fc000,0,0x3f800000,plVar1);
  plVar1 = param_1 + 0x194;
  FUN_00f0d4e0(plVar1);
  FUN_00f0dc4c(CONCAT44(uVar12,uVar11),0,0x3f800000,plVar1);
  FUN_00f0dad0(0x448fc000,plVar1,1);
  fVar7 = (float)FUN_00f01c20(plVar1);
  fVar10 = *(float *)((long)param_1 + 0xbb4) + 2.0;
  if ((*(float *)(param_1 + 0x19c) != fVar15 - fVar7) ||
     (*(float *)((long)param_1 + 0xce4) != fVar10)) {
    *(float *)(param_1 + 0x19c) = fVar15 - fVar7;
    *(float *)((long)param_1 + 0xce4) = fVar10;
    FUN_0091ada4(plVar1);
  }
  local_a8 = 0;
  fVar9 = fVar9 * 0.5 + 20.0;
  (**(code **)(param_1[0x194] + 0x28))(plVar1,&local_a8);
  if ((*(float *)(param_1 + 0x73) != fVar13) || (*(float *)((long)param_1 + 0x39c) != fVar9)) {
    *(float *)(param_1 + 0x73) = fVar13;
    *(float *)((long)param_1 + 0x39c) = fVar9;
    FUN_0091ada4(plVar4);
  }
  local_a8 = 0x3f0000003f000000;
  (**(code **)(param_1[0x6b] + 0x28))(plVar4,&local_a8);
  if ((*(float *)(param_1 + 0x23f) != fVar15) ||
     (fVar10 = 588.0, *(float *)((long)param_1 + 0x11fc) != 588.0)) {
    *(float *)(param_1 + 0x23f) = fVar15;
    *(undefined4 *)((long)param_1 + 0x11fc) = 0x44130000;
    FUN_0091ada4(param_1 + 0x237);
  }
  local_a8 = 0x3f0000003f800000;
  (**(code **)(param_1[0x237] + 0x28))(param_1 + 0x237,&local_a8);
  local_a8 = 0;
  local_a0 = (long *)0x0;
  FUN_00ab52b0(param_1,&local_a8);
  if ((uint)local_a8 == 0) {
    (**(code **)(*param_1 + 0x48))(param_1);
    FUN_00f0dc4c((fVar10 - *(float *)((long)param_1 + 0xce4)) + -6.0,0,0x3f800000,plVar1);
  }
  else {
    fVar13 = *(float *)((long)param_1 + 0xce4);
    FUN_00f0d4e0(plVar1);
    fVar13 = fVar13 + fVar10;
    fVar7 = fVar13 + 50.0;
    (**(code **)(*(long *)*local_a0 + 0x60))((long *)*local_a0,1,0,1,1);
    fVar7 = fVar7 + fVar13 * *(float *)(*local_a0 + 0x4c) * 0.5;
    (**(code **)(*param_1 + 0x48))(param_1);
    fVar9 = fVar13;
    (**(code **)(*(long *)*local_a0 + 0x50))();
    fVar10 = -5.0;
    fVar9 = (fVar13 - fVar9 * 0.5) + -5.0;
    if (fVar9 <= fVar7) {
      fVar7 = fVar9;
    }
    if ((uint)local_a8 != 0) {
      uVar5 = 0;
      iVar6 = -1;
      uVar3 = (uint)local_a8;
      do {
        plVar4 = (long *)local_a0[uVar3 + iVar6];
        if (plVar4 != (long *)0x0) {
          fVar9 = (float)(**(code **)(*plVar4 + 0x50))(plVar4);
          uVar3 = iVar6 + (uint)local_a8;
          fVar10 = (float)(**(code **)(*plVar4 + 0x50))(plVar4);
          fVar9 = (fVar15 + fVar9 * -0.5) - (fVar10 + 14.0) * (float)uVar3;
          plVar4 = (long *)local_a0[uVar5];
          fVar10 = *(float *)(plVar4 + 8);
          if ((fVar10 != fVar9) || (fVar10 = *(float *)((long)plVar4 + 0x44), fVar10 != fVar7)) {
            *(float *)(plVar4 + 8) = fVar9;
            *(float *)((long)plVar4 + 0x44) = fVar7;
            FUN_0091ada4(plVar4);
          }
          local_90 = 0x3f0000003f000000;
          (**(code **)(*plVar4 + 0x28))(plVar4,&local_90);
          uVar3 = (uint)local_a8;
        }
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (uVar5 < uVar3);
    }
    (**(code **)(*(long *)*local_a0 + 0x60))((long *)*local_a0,1,0,1,1);
    FUN_00f0dc4c(((fVar7 + fVar10 * -0.5) - *(float *)((long)param_1 + 0xce4)) + -50.0,0,0x3f800000,
                 plVar1);
  }
  fVar14 = fVar14 + 318.0;
  if (*(float *)((long)param_1 + 0xcec) < 1.0) {
    FUN_00f0dad0(1150.0 / *(float *)(param_1 + 0x19d),plVar1,1);
    fVar9 = (float)FUN_00f01c20(plVar1);
    fVar7 = *(float *)((long)param_1 + 0xbb4) + 2.0;
    if ((*(float *)(param_1 + 0x19c) != fVar15 - fVar9) ||
       (*(float *)((long)param_1 + 0xce4) != fVar7)) {
      *(float *)(param_1 + 0x19c) = fVar15 - fVar9;
      *(float *)((long)param_1 + 0xce4) = fVar7;
      FUN_0091ada4(plVar1);
    }
    local_90 = 0;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_90);
  }
  plVar4 = param_1 + 0x1cb;
  fVar9 = (float)FUN_00f01c54(plVar4,0,0,1,1);
  fVar9 = fVar14 + fVar9 * -0.5;
  if ((*(float *)(param_1 + 0x1d3) != fVar9) || (*(float *)((long)param_1 + 0xe9c) != 588.0)) {
    *(float *)(param_1 + 0x1d3) = fVar9;
    *(undefined4 *)((long)param_1 + 0xe9c) = 0x44130000;
    FUN_0091ada4(plVar4);
  }
  local_90 = 0;
  (**(code **)(param_1[0x1cb] + 0x28))(plVar4,&local_90);
  if ((*(float *)(param_1 + 0x294) != fVar14) || (*(float *)((long)param_1 + 0x14a4) != 289.0)) {
    *(float *)(param_1 + 0x294) = fVar14;
    *(undefined4 *)((long)param_1 + 0x14a4) = 0x43908000;
    FUN_0091ada4(param_1 + 0x28c);
  }
  local_90 = 0x3f0000003f000000;
  (**(code **)(param_1[0x28c] + 0x28))(param_1 + 0x28c,&local_90);
  if ((*(float *)(param_1 + 0x276) != fVar14) || (*(float *)((long)param_1 + 0x13b4) != 289.0)) {
    *(float *)(param_1 + 0x276) = fVar14;
    *(undefined4 *)((long)param_1 + 0x13b4) = 0x43908000;
    FUN_0091ada4(param_1 + 0x26e);
  }
  local_90 = 0x3f0000003f000000;
  (**(code **)(param_1[0x26e] + 0x28))(param_1 + 0x26e,&local_90);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(fVar16,param_1 + 0x2bd);
  if ((*(float *)(param_1 + 0x2e3) != *(float *)(param_1 + 0x294)) ||
     (*(float *)((long)param_1 + 0x171c) != *(float *)((long)param_1 + 0x14a4))) {
    *(float *)(param_1 + 0x2e3) = *(float *)(param_1 + 0x294);
    *(float *)((long)param_1 + 0x171c) = *(float *)((long)param_1 + 0x14a4);
    FUN_0091ada4(param_1 + 0x2db);
  }
  if (local_a0 != (long *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (long *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ab4b3c(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x35b);
  *param_1 = &PTR_FUN_027d4b38;
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(param_1[0x35c] + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(param_1[0x35c] + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x35b);
        puVar3 = (undefined8 *)(param_1[0x35c] + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if ((void *)param_1[0x35c] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x35b) = 0;
    operator_delete__((void *)param_1[0x35c]);
    param_1[0x35b] = 0;
    param_1[0x35c] = 0;
  }
  if ((*(byte *)(param_1 + 0x358) & 1) != 0) {
    operator_delete((void *)param_1[0x35a]);
  }
  param_1[0x2db] = &PTR_FUN_027d4cc0;
  param_1[0x339] = &PTR_FUN_028266f0;
  param_1[0x350] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x353);
  FUN_00f13d08(param_1 + 0x339);
  param_1[0x31b] = &PTR_FUN_028266f0;
  param_1[0x332] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x335);
  FUN_00f13d08(param_1 + 0x31b);
  FUN_00f01868(param_1 + 0x30a);
  param_1[0x2ec] = &PTR_FUN_028266f0;
  param_1[0x303] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x306);
  FUN_00f13d08(param_1 + 0x2ec);
  FUN_00f01868(param_1 + 0x2db);
  param_1[0x2bd] = &PTR_FUN_028266f0;
  param_1[0x2d4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2d7);
  FUN_00f13d08(param_1 + 0x2bd);
  FUN_00f01868(param_1 + 0x2ac);
  param_1[0x28c] = &PTR_FUN_028266f0;
  param_1[0x2a3] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2a6);
  FUN_00f13d08(param_1 + 0x28c);
  param_1[0x26e] = &PTR_FUN_028266f0;
  param_1[0x285] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x288);
  FUN_00f13d08(param_1 + 0x26e);
  FUN_00f01868(param_1 + 0x25d);
  FUN_00f0d3a4(param_1 + 0x237);
  FUN_00f01868(param_1 + 0x226);
  param_1[0x1fa] = &PTR_FUN_027d3cc8;
  param_1[0x211] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x223] != (void *)0x0) {
    operator_delete__((void *)param_1[0x223]);
    param_1[0x223] = 0;
    param_1[0x222] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x1fa);
  param_1[0x1dc] = &PTR_FUN_028266f0;
  param_1[499] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1f6);
  FUN_00f13d08(param_1 + 0x1dc);
  FUN_00f01868(param_1 + 0x1cb);
  FUN_00f01868(param_1 + 0x1ba);
  FUN_00f0d3a4(param_1 + 0x194);
  FUN_00f0d3a4(param_1 + 0x16e);
  FUN_00f01868(param_1 + 0x15d);
  param_1[0x147] = &PTR_FUN_027de7f0;
  if ((*(byte *)(param_1 + 0x153) & 1) != 0) {
    operator_delete((void *)param_1[0x155]);
  }
  if ((void *)param_1[0x152] != (void *)0x0) {
    operator_delete__((void *)param_1[0x152]);
    param_1[0x152] = 0;
    param_1[0x151] = 0;
  }
  FUN_009c8464(param_1 + 0x148,1);
  FUN_00b27cec(param_1 + 0x12a);
  param_1[0x106] = &PTR_FUN_028266f0;
  param_1[0x11d] = &PTR_FUN_02826850;
  param_1[0x6b] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0x120);
  FUN_00f13d08(param_1 + 0x106);
  param_1[0xe8] = &PTR_FUN_028266f0;
  param_1[0xff] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x102);
  FUN_00f13d08(param_1 + 0xe8);
  param_1[0xca] = &PTR_FUN_028266f0;
  param_1[0xe1] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe4);
  FUN_00f13d08(param_1 + 0xca);
  FUN_00f01868(param_1 + 0xb9);
  FUN_009c825c(param_1 + 0x6b);
  *param_1 = &PTR_FUN_027d6cb0;
  param_1[0x4e] = &PTR_FUN_027da660;
  param_1[0x5f] = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 0x65) & 1) != 0) {
    operator_delete((void *)param_1[0x67]);
  }
  FUN_0199fb94(param_1 + 0x62);
  FUN_00f01868(param_1 + 0x4e);
  FUN_009c825c(param_1);
  return;
}




void FUN_00ab4ed0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d4cc0;
  param_1[0x5e] = &PTR_FUN_028266f0;
  param_1[0x75] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x78);
  FUN_00f13d08(param_1 + 0x5e);
  param_1[0x40] = &PTR_FUN_028266f0;
  param_1[0x57] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5a);
  FUN_00f13d08(param_1 + 0x40);
  FUN_00f01868(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00ab4f74(void *param_1)

{
  FUN_00ab4b3c();
  operator_delete(param_1);
  return;
}




void FUN_00ab4f98(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  FUN_00acaab8();
  lVar1 = param_1 + 0x270;
  if ((*(uint *)(param_1 + 0x2f4) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) & 0xffff807f;
    FUN_0091ada4(lVar1);
  }
  FUN_00af6d64(0x452f0000,0x441f0000,lVar1);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_02825100;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    lVar2 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 != 0xffff) {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efdd74(puVar5);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      goto LAB_00ab5110;
    }
  }
  puVar5 = (ushort *)0x0;
LAB_00ab5110:
  FUN_00efddc4(0x3f800000,puVar5);
  FUN_00efcac4(0x3f000000,puVar5);
  FUN_00f02308(lVar1,puVar4,puVar5,0);
  FUN_00ab43c0(param_1);
  return;
}

