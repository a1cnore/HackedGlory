// functions/009b7 — 13 functions
#include "libGameKindred.h"




void FUN_009b7010(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  undefined8 local_38;
  float local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_30 = *(float *)(param_1 + 0x41c);
  local_38 = *(undefined8 *)(param_1 + 0x414);
  if (((*(byte *)(param_1 + 0x7c) >> 4 & 1) == 0) &&
     (uVar3 = FUN_009b7140(param_1,&local_38), (uVar3 & 1) != 0)) {
    local_38 = CONCAT44((float)((ulong)local_38 >> 0x20) +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x420) >> 0x20),
                        (float)local_38 + (float)*(undefined8 *)(param_1 + 0x420));
    local_30 = local_30 + *(float *)(param_1 + 0x428);
  }
  fVar4 = 0.0;
  uVar1 = *(int *)(param_1 + 0xf0) - 1;
  if (uVar1 < 4) {
    fVar4 = *(float *)(&DAT_01b983a0 + (long)(int)uVar1 * 4);
  }
  *(undefined8 *)(param_1 + 0xc0) = local_38;
  *(float *)(param_1 + 200) = local_30;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x90);
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 6;
  *(float *)(param_1 + 0xe4) = fVar4;
  if (fVar4 <= 0.0) {
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  FUN_009b7630(param_1);
  FUN_009b72cc(param_1);
  FUN_009b7630(param_1);
  FUN_009b7828(param_1);
  FUN_009b78f4(param_1);
  FUN_009b7e08(param_1);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009b7140(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x458);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x460) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x458);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x460) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x458) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x460) = DAT_03214ce8;
          }
        }
        FUN_00d80bb8(uVar3,param_2);
        return 1;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x458) = 0;
      *(undefined4 *)(param_1 + 0x460) = DAT_03214ce8;
    }
  }
  plVar1 = *(long **)(param_1 + 0x448);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x450) == (int)plVar1[1]) goto LAB_009b71fc;
    *(undefined8 *)(param_1 + 0x448) = 0;
    *(undefined4 *)(param_1 + 0x450) = DAT_03214ce8;
  }
  plVar1 = *(long **)(param_1 + 0x438);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x440) != (int)plVar1[1]) {
    *(undefined8 *)(param_1 + 0x438) = 0;
    *(undefined4 *)(param_1 + 0x440) = DAT_03214ce8;
    return 0;
  }
LAB_009b71fc:
  uVar3 = (**(code **)(*plVar1 + 0x10))();
  FUN_00d581bc(uVar3,param_2);
  return 1;
}




void FUN_009b7260(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 long param_5)

{
  *(undefined4 *)(param_5 + 0xc0) = param_1;
  *(undefined4 *)(param_5 + 0xc4) = param_2;
  *(undefined4 *)(param_5 + 200) = param_3;
  *(undefined4 *)(param_5 + 0xe0) = 0;
  *(undefined8 *)(param_5 + 0xa8) = *(undefined8 *)(param_5 + 0x88);
  *(undefined8 *)(param_5 + 0xa0) = *(undefined8 *)(param_5 + 0x80);
  *(undefined8 *)(param_5 + 0xb8) = *(undefined8 *)(param_5 + 0x98);
  *(undefined8 *)(param_5 + 0xb0) = *(undefined8 *)(param_5 + 0x90);
  *(byte *)(param_5 + 0x7c) = *(byte *)(param_5 + 0x7c) | 6;
  *(float *)(param_5 + 0xe4) = param_4;
  if (param_4 <= 0.0) {
    *(undefined4 *)(param_5 + 0x88) = *(undefined4 *)(param_5 + 200);
    *(undefined8 *)(param_5 + 0x80) = *(undefined8 *)(param_5 + 0xc0);
    *(undefined4 *)(param_5 + 0xe4) = 0;
  }
  FUN_009b7630();
  return;
}




undefined4 FUN_009b72a8(undefined8 param_1,int param_2)

{
  if (param_2 - 1U < 4) {
    return *(undefined4 *)(&DAT_01b983a0 + (long)(int)(param_2 - 1U) * 4);
  }
  return 0;
}




void FUN_009b72cc(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 local_90;
  undefined4 local_80;
  undefined4 local_70;
  undefined4 local_60;
  
  uVar14 = FUN_00ceab64();
  if ((uVar14 & 1) != 0) {
    uVar14 = FUN_01980644(0x4c);
    if ((uVar14 & 1) == 0) {
      uVar11 = FUN_01980644(0x4d);
    }
    else {
      uVar11 = 1;
    }
    uVar14 = FUN_01980644(0x4e);
    if ((uVar14 & 1) == 0) {
      uVar12 = FUN_01980644(0x4f);
    }
    else {
      uVar12 = 1;
    }
    uVar14 = FUN_01980644(0x50);
    if ((uVar14 & 1) == 0) {
      uVar13 = FUN_01980644(0x51);
    }
    else {
      uVar13 = 1;
    }
    fVar15 = 0.125;
    if ((uVar11 & uVar12 & uVar13 & 1) == 0) {
      fVar15 = 0.25;
    }
    if ((uVar11 & uVar12 & 1) == 0) {
      fVar15 = 0.25;
      if ((uVar12 & uVar13 & 1) == 0) {
        fVar15 = 0.5;
      }
      fVar19 = 2.0;
      if ((uVar11 & 1) == 0) {
        fVar19 = 1.0;
      }
      if ((uVar12 & 1) == 0) {
        fVar15 = fVar19;
      }
    }
    fVar19 = fVar15 * 10.0;
    uVar14 = FUN_01980644(0x5c);
    bVar1 = (uVar14 & 1) == 0;
    if (bVar1) {
      local_60 = 0.0;
    }
    else {
      fVar16 = (float)FUN_01988c84();
      local_60 = 0.0 - fVar19 * fVar16;
    }
    uVar14 = FUN_01980644(0x5d);
    bVar2 = (uVar14 & 1) != 0;
    if (bVar2) {
      fVar16 = (float)FUN_01988c84();
      local_60 = local_60 + fVar19 * fVar16;
    }
    uVar14 = FUN_01980644(0x5a);
    local_70 = 0.0;
    bVar3 = (uVar14 & 1) != 0;
    if (bVar3) {
      fVar16 = (float)FUN_01988c84();
      local_70 = 0.0 - fVar19 * fVar16;
    }
    uVar14 = FUN_01980644(0x5b);
    bVar4 = (uVar14 & 1) != 0;
    if (bVar4) {
      fVar16 = (float)FUN_01988c84();
      local_70 = local_70 + fVar19 * fVar16;
    }
    uVar14 = FUN_01980644(0x52);
    local_80 = 0.0;
    bVar5 = (uVar14 & 1) != 0;
    if (bVar5) {
      fVar16 = (float)FUN_01988c84();
      local_80 = fVar15 * 45.0 * fVar16 + 0.0;
    }
    uVar14 = FUN_01980644(0x53);
    bVar6 = (uVar14 & 1) != 0;
    if (bVar6) {
      fVar16 = (float)FUN_01988c84();
      local_80 = local_80 - fVar15 * 45.0 * fVar16;
    }
    uVar14 = FUN_01980644(0x41);
    fVar16 = 0.0;
    bVar7 = (uVar14 & 1) != 0;
    if (bVar7) {
      fVar16 = (float)FUN_01988c84();
      fVar16 = 0.0 - fVar19 * fVar16;
    }
    uVar14 = FUN_01980644(0x42);
    bVar8 = (uVar14 & 1) != 0;
    if (bVar8) {
      fVar17 = (float)FUN_01988c84();
      fVar16 = fVar16 + fVar19 * fVar17;
    }
    uVar14 = FUN_01980644(0x45);
    local_90 = 0.0;
    bVar9 = (uVar14 & 1) != 0;
    if (bVar9) {
      fVar19 = (float)FUN_01988c84();
      local_90 = 0.0 - fVar15 * 25.0 * fVar19;
    }
    uVar14 = FUN_01980644(0x46);
    bVar10 = (uVar14 & 1) != 0;
    if (bVar10) {
      fVar19 = (float)FUN_01988c84();
      local_90 = local_90 + fVar15 * 25.0 * fVar19;
    }
    uVar14 = FUN_00ceab64();
    if (((uVar14 & 1) != 0) &&
       ((((uVar14 = FUN_01980664(0x5c), (uVar14 & 1) != 0 ||
          (uVar14 = FUN_01980664(0x5d), (uVar14 & 1) != 0)) ||
         (uVar14 = FUN_01980664(0x5a), (uVar14 & 1) != 0)) ||
        (uVar14 = FUN_01980664(0x5b), (uVar14 & 1) != 0)))) {
      FUN_009b8570(param_1);
    }
    if (bVar10 || (bVar9 || (bVar8 || (bVar7 || (bVar6 || (bVar5 || (bVar4 || (bVar3 || (bVar2 || !
                                                  bVar1))))))))) {
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x90);
      *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 6;
      *(ulong *)(param_1 + 0xcc) =
           CONCAT44(local_60 + (float)((ulong)*(undefined8 *)(param_1 + 0xcc) >> 0x20),
                    local_70 + (float)*(undefined8 *)(param_1 + 0xcc));
      *(ulong *)(param_1 + 0xd4) =
           CONCAT44(local_80 + (float)((ulong)*(undefined8 *)(param_1 + 0xd4) >> 0x20),
                    local_90 + (float)*(undefined8 *)(param_1 + 0xd4));
      *(float *)(param_1 + 0xdc) = fVar16 + *(float *)(param_1 + 0xdc);
      *(undefined8 *)(param_1 + 0xe8) = 0x4120000000000000;
      FUN_009b7630(param_1);
    }
    uVar14 = FUN_0091f2ec(0x2a);
    if ((uVar14 & 1) != 0) {
      uVar18 = 0x42c80000;
      if ((uVar12 & 1) == 0) {
        uVar18 = 0;
      }
      FUN_009b83b4(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                   *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
                   *(undefined4 *)(param_1 + 0x30),uVar18,param_1);
      return;
    }
  }
  return;
}




void FUN_009b7630(long param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((*(byte *)(param_1 + 0x7c) >> 2 & 1) != 0) {
    fVar2 = (float)FUN_01988c84();
    fVar9 = *(float *)(param_1 + 0xe4);
    fVar8 = *(float *)(param_1 + 0xec);
    fVar5 = fVar2 + *(float *)(param_1 + 0xe0);
    fVar2 = fVar2 + *(float *)(param_1 + 0xe8);
    if (fVar9 <= fVar5) {
      fVar5 = fVar9;
    }
    fVar3 = 1.0;
    if (fVar8 <= fVar2) {
      fVar2 = fVar8;
    }
    *(float *)(param_1 + 0xe0) = fVar5;
    *(float *)(param_1 + 0xe8) = fVar2;
    if (0.001 <= ABS(fVar9)) {
      fVar3 = (float)(**(code **)(param_1 + 0x468))(fVar5,0,0x3f800000,fVar9);
      fVar8 = *(float *)(param_1 + 0xec);
    }
    fVar5 = 1.0;
    if (0.001 <= ABS(fVar8)) {
      fVar5 = (float)(**(code **)(param_1 + 0x468))(*(undefined4 *)(param_1 + 0xe8),0,0x3f800000);
    }
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    uVar6 = NEON_fmov(0x3f800000,4);
    fVar10 = (float)uVar6 - fVar3;
    fVar11 = (float)((ulong)uVar6 >> 0x20) - fVar5;
    fVar2 = (float)uVar4;
    fVar8 = (float)((ulong)uVar4 >> 0x20);
    fVar9 = (float)*(undefined8 *)(param_1 + 200);
    uVar7 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20) * fVar10 +
                     fVar8 * fVar3,(float)*(undefined8 *)(param_1 + 0xa0) * fVar10 + fVar2 * fVar3);
    *(ulong *)(param_1 + 0x80) = uVar7;
    *(ulong *)(param_1 + 0x88) =
         CONCAT44(fVar11 * (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20) +
                  fVar5 * (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20),
                  fVar10 * (float)*(undefined8 *)(param_1 + 0xa8) + fVar3 * fVar9);
    *(float *)(param_1 + 0x90) =
         *(float *)(param_1 + 0xb0) * fVar11 + fVar5 * *(float *)(param_1 + 0xd0);
    bVar1 = *(byte *)(param_1 + 0x7c);
    *(float *)(param_1 + 0x9c) =
         *(float *)(param_1 + 0xbc) * fVar11 +
         fVar5 * (*(float *)(param_1 + 0xdc) + *(float *)(param_1 + 0x434));
    *(ulong *)(param_1 + 0x94) =
         CONCAT44(((float)((ulong)*(undefined8 *)(param_1 + 0xd4) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x42c) >> 0x20)) * fVar5 +
                  (float)((ulong)*(undefined8 *)(param_1 + 0xb4) >> 0x20) * fVar11,
                  ((float)*(undefined8 *)(param_1 + 0xd4) + (float)*(undefined8 *)(param_1 + 0x42c))
                  * fVar5 + (float)*(undefined8 *)(param_1 + 0xb4) * fVar11);
    *(byte *)(param_1 + 0x7c) = bVar1 | 2;
    if ((*(float *)(param_1 + 0xe4) <= *(float *)(param_1 + 0xe0)) &&
       (*(float *)(param_1 + 0xec) <= *(float *)(param_1 + 0xe8))) {
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0xd8);
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0xd0);
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 200);
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0xc0);
      uVar7 = (ulong)*(uint *)(param_1 + 0x80);
      *(byte *)(param_1 + 0x7c) = bVar1 & 0xfb | 2;
    }
    if ((((ABS((float)uVar7 - fVar2) < 0.1) && (ABS(*(float *)(param_1 + 0x84) - fVar8) < 0.1)) &&
        (ABS(*(float *)(param_1 + 0x88) - fVar9) < 0.1)) &&
       (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0xf4))) {
      *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf4);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009b7828(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  
  if ((*(byte *)(param_1 + 0x7c) >> 3 & 1) != 0) {
    fVar6 = *(float *)(param_1 + 0x184);
    fVar1 = (float)FUN_01988c84();
    fVar2 = *(float *)(param_1 + 0x180);
    fVar6 = fVar6 + fVar1;
    if (fVar2 <= fVar6) {
      fVar6 = fVar2;
    }
    fVar1 = fVar6 * *(float *)(param_1 + 0x188);
    *(float *)(param_1 + 0x184) = fVar6;
    fVar3 = (fVar6 / fVar2) * 0.0 + (1.0 - fVar6 / fVar2);
    uVar4 = *(undefined8 *)(param_1 + 0xf8 + (ulong)((int)fVar1 & 0xf) * 8);
    uVar5 = *(undefined8 *)(param_1 + 0xf8 + (ulong)((int)(fVar1 + 1.0) & 0xf) * 8);
    fVar1 = fVar1 - (float)(uint)(int)fVar1;
    *(ulong *)(param_1 + 0x178) =
         CONCAT44(((float)((ulong)uVar5 >> 0x20) * fVar1 +
                  (float)((ulong)uVar4 >> 0x20) * (1.0 - fVar1)) * fVar3,
                  ((float)uVar5 * fVar1 + (float)uVar4 * (1.0 - fVar1)) * fVar3);
    uVar4 = _DAT_03218ef8;
    if (fVar2 <= fVar6) {
      *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xf7;
      *(undefined8 *)(param_1 + 0x178) = uVar4;
    }
  }
  return;
}




void FUN_009b78f4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float __x;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_120;
  float local_118;
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  long local_b0;
  
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x18c);
    puVar2 = (undefined8 *)(param_1 + 0x19c);
    puVar3 = (undefined8 *)(param_1 + 0x1ac);
    *(undefined8 *)(param_1 + 0x194) = 0;
    *puVar1 = 0x3f800000;
    *(undefined8 *)(param_1 + 0x1a4) = 0;
    *puVar2 = 0x3f80000000000000;
    *(undefined8 *)(param_1 + 0x1b4) = 0x3f800000;
    *puVar3 = 0;
    *(float *)(param_1 + 0x1bc) = *(float *)(param_1 + 0x178) + 0.0;
    *(float *)(param_1 + 0x1c0) = *(float *)(param_1 + 0x17c) + 0.0;
    *(float *)(param_1 + 0x1c4) = 0.0 - *(float *)(param_1 + 0x9c);
    fVar13 = *(float *)(param_1 + 0x94) * 0.017453292;
    puVar4 = (undefined8 *)(param_1 + 0x1b4);
    *(undefined4 *)(param_1 + 0x1c8) = 0x3f800000;
    fVar9 = sinf(fVar13);
    fVar13 = cosf(fVar13);
    uVar12 = *(undefined8 *)(param_1 + 0x1a4);
    fVar11 = (float)*puVar2;
    fVar10 = (float)((ulong)*puVar2 >> 0x20);
    fVar14 = (float)uVar12;
    fVar15 = (float)((ulong)uVar12 >> 0x20);
    fVar18 = (float)*puVar3;
    fVar19 = (float)((ulong)*puVar3 >> 0x20);
    fVar16 = (float)*puVar4;
    fVar17 = (float)((ulong)*puVar4 >> 0x20);
    *puVar2 = CONCAT44(fVar10 * fVar13 + fVar19 * fVar9,fVar11 * fVar13 + fVar18 * fVar9);
    *(undefined8 *)(param_1 + 0x1a4) =
         CONCAT44(fVar15 * fVar13 + fVar17 * fVar9,fVar14 * fVar13 + fVar16 * fVar9);
    *puVar3 = CONCAT44(fVar19 * fVar13 - fVar10 * fVar9,fVar18 * fVar13 - fVar11 * fVar9);
    *puVar4 = CONCAT44(fVar17 * fVar13 - fVar15 * fVar9,fVar16 * fVar13 - fVar14 * fVar9);
    fVar13 = *(float *)(param_1 + 0x98) * 0.017453292;
    fVar9 = sinf(fVar13);
    fVar13 = cosf(fVar13);
    uVar12 = *(undefined8 *)(param_1 + 0x194);
    fVar11 = (float)*puVar1;
    fVar10 = (float)((ulong)*puVar1 >> 0x20);
    fVar14 = (float)uVar12;
    fVar15 = (float)((ulong)uVar12 >> 0x20);
    fVar18 = (float)*puVar3;
    fVar19 = (float)((ulong)*puVar3 >> 0x20);
    fVar16 = (float)*puVar4;
    fVar17 = (float)((ulong)*puVar4 >> 0x20);
    *puVar1 = CONCAT44(fVar10 * fVar13 - fVar19 * fVar9,fVar11 * fVar13 - fVar18 * fVar9);
    *(undefined8 *)(param_1 + 0x194) =
         CONCAT44(fVar15 * fVar13 - fVar17 * fVar9,fVar14 * fVar13 - fVar16 * fVar9);
    *(float *)(param_1 + 0x1b0) = fVar9 * fVar10 + fVar13 * fVar19;
    fVar10 = *(float *)(param_1 + 0x98);
    fVar19 = *(float *)(param_1 + 0x8c);
    fVar20 = *(float *)(param_1 + 0x90);
    *(float *)(param_1 + 0x1b8) = fVar9 * fVar15 + fVar13 * fVar17;
    *(float *)(param_1 + 0x1ac) = fVar9 * fVar11 + fVar13 * fVar18;
    *(float *)(param_1 + 0x1b4) = fVar9 * fVar14 + fVar13 * fVar16;
    fVar9 = sinf(-(fVar10 * 0.017453292));
    fVar13 = cosf(fVar10 * 0.017453292);
    local_b8 = -*(float *)(param_1 + 0x88) - ((0.0 - fVar19 * fVar9) + fVar20 * fVar13);
    uStack_e8 = 0;
    local_f0 = 0x3f800000;
    local_c0 = -*(float *)(param_1 + 0x80) - (fVar20 * fVar9 + fVar19 * fVar13 + 0.0);
    fStack_bc = -*(float *)(param_1 + 0x84) - (fVar19 * 0.0 + 0.0 + fVar20 * 0.0);
    uStack_d8 = 0;
    local_e0 = 0x3f80000000000000;
    local_b4 = 0x3f800000;
    uStack_c8 = 0x3f800000;
    local_d0 = 0;
    FUN_009b3960(puVar1,&local_f0,puVar1);
    FUN_00967cc0((undefined8 *)(param_1 + 0x1cc),puVar1);
    fVar9 = *(float *)(param_1 + 0x28);
    fVar13 = fVar9 * 0.75;
    fVar9 = (float)NEON_fminnm((*(float *)(param_1 + 0x9c) - fVar9) /
                               (*(float *)(param_1 + 0x30) - fVar9),0x3f800000);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    if (fVar13 <= 1.5) {
      fVar13 = 1.5;
    }
    fVar9 = powf(fVar9,4.0);
    fVar11 = (1.0 - fVar9) * 1.5;
    fVar10 = *(float *)(param_1 + 0x300);
    fVar18 = fVar9 * fVar13 + fVar11;
    *(float *)(param_1 + 0x308) = fVar18;
    fVar9 = (float)DAT_03218f00;
    fVar13 = DAT_03218f00._4_4_;
    if (*(long **)(param_1 + 0x2f8) != (long *)0x0) {
      fVar9 = (float)(**(code **)(**(long **)(param_1 + 0x2f8) + 0x48))();
      fVar18 = *(float *)(param_1 + 0x308);
      fVar13 = fVar11;
    }
    fVar19 = *(float *)(param_1 + 0x30c);
    fVar11 = fVar9 / fVar13;
    bVar6 = false;
    bVar7 = true;
    bVar8 = false;
    if (0.0 < fVar9) {
      bVar6 = false;
      bVar7 = false;
      bVar8 = true;
      if (!NAN(fVar13)) {
        bVar6 = fVar13 < 0.0;
        bVar7 = fVar13 == 0.0;
        bVar8 = false;
      }
    }
    if (bVar7 || bVar6 != bVar8) {
      fVar11 = 1.0;
    }
    *(float *)(param_1 + 0x304) = fVar11;
    fVar9 = tanf(1.5707964 - fVar10 * 0.017453292 * 0.5);
    *(float *)(param_1 + 0x220) = fVar9;
    *(undefined4 *)(param_1 + 0x240) = 0;
    *(float *)(param_1 + 0x20c) = fVar9 / fVar11;
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(float *)(param_1 + 0x234) = (fVar18 + fVar19) / (fVar18 - fVar19);
    *(float *)(param_1 + 0x244) = ((fVar18 + fVar18) * fVar19) / (fVar18 - fVar19);
    *(undefined8 *)(param_1 + 0x22c) = 0;
    *(undefined8 *)(param_1 + 0x224) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x248) = 0;
    uVar12 = *(undefined8 *)(param_1 + 0x1cc);
    fVar14 = *(float *)(param_1 + 0x1e4);
    fVar19 = *(float *)(param_1 + 500);
    fVar20 = (float)*(undefined8 *)(param_1 + 0x1dc);
    fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x1dc) >> 0x20);
    fVar11 = (float)*(undefined8 *)(param_1 + 0x1ec);
    fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0x1ec) >> 0x20);
    fVar16 = (float)*(undefined8 *)(param_1 + 0x1fc) +
             (float)uVar12 * (float)DAT_03218f30 + fVar20 * DAT_03218f30._4_4_ +
             fVar11 * DAT_03218f38;
    fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x1fc) >> 0x20) +
             (float)((ulong)uVar12 >> 0x20) * (float)DAT_03218f30 + fVar21 * DAT_03218f30._4_4_ +
             fVar18 * DAT_03218f38;
    local_100 = CONCAT44(fVar17,fVar16);
    fVar13 = fVar11 * fVar11 + fVar18 * fVar18 + fVar19 * fVar19;
    fVar15 = *(float *)(param_1 + 0x204) +
             (float)DAT_03218f30 * *(float *)(param_1 + 0x1d4) + DAT_03218f30._4_4_ * fVar14 +
             DAT_03218f38 * fVar19;
    fVar9 = SQRT(fVar13);
    local_f8 = fVar15;
    if (NAN(fVar9)) {
      fVar9 = sqrtf(fVar13);
    }
    __x = fVar20 * fVar20 + fVar21 * fVar21 + fVar14 * fVar14;
    fVar13 = SQRT(__x);
    if (NAN(fVar13)) {
      fVar13 = sqrtf(__x);
    }
    local_108 = fVar14 / fVar13;
    local_120 = CONCAT44(-fVar18 / fVar9 + fVar17,-fVar11 / fVar9 + fVar16);
    local_118 = -fVar19 / fVar9 + fVar15;
    local_110 = CONCAT44(fVar21 / fVar13,fVar20 / fVar13);
    thunk_FUN_019b9e34(*(undefined4 *)(param_1 + 0x308),*(undefined4 *)(param_1 + 0x30c),
                       *(undefined4 *)(param_1 + 0x304),fVar10,param_1 + 0x310,&local_100,&local_120
                       ,&local_110);
    *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xfd;
  }
  if (*(long *)(lVar5 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b7e08(long param_1)

{
  if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x1c4);
    *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_1 + 0x1bc);
    *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_1 + 0x1b4);
    *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x1ac);
    *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x1a4);
    *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x19c);
    *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 0x194);
    *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_1 + 0x18c);
  }
  else {
    FUN_009b78f4(param_1);
    *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 0x194);
    *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_1 + 0x18c);
    *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x1a4);
    *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x19c);
    *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_1 + 0x1b4);
    *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x1ac);
    *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x1c4);
    *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_1 + 0x1bc);
    if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
      FUN_009b78f4(param_1);
      *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_1 + 0x214);
      *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_1 + 0x20c);
      *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x224);
      *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_1 + 0x21c);
      *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0x234);
      *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 0x22c);
      *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x244);
      *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x23c);
      if ((*(byte *)(param_1 + 0x7c) >> 1 & 1) != 0) {
        FUN_009b78f4(param_1);
      }
      goto LAB_009b7ef8;
    }
  }
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x244);
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_1 + 0x23c);
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_1 + 0x234);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_1 + 0x22c);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x224);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_1 + 0x21c);
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_1 + 0x214);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_1 + 0x20c);
LAB_009b7ef8:
  *(long *)(param_1 + 0x2d8) = param_1 + 0x310;
  FUN_0199b5c8(param_1 + 0x250,FUN_009b8b34);
  return;
}




void FUN_009b7f74(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x308) = param_1;
  *(byte *)(param_2 + 0x7c) = *(byte *)(param_2 + 0x7c) | 2;
  return;
}




void FUN_009b7f88(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x30c) = param_1;
  *(byte *)(param_2 + 0x7c) = *(byte *)(param_2 + 0x7c) | 2;
  return;
}




void FUN_009b7f9c(undefined4 param_1,undefined4 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_3 + 0xdc) = param_1;
  uVar1 = *param_4;
  *(undefined4 *)(param_3 + 0xe8) = 0;
  *(undefined4 *)(param_3 + 0xbc) = *(undefined4 *)(param_3 + 0x9c);
  *(undefined8 *)(param_3 + 0xb4) = *(undefined8 *)(param_3 + 0x94);
  *(undefined8 *)(param_3 + 0xd4) = uVar1;
  *(undefined4 *)(param_3 + 0xec) = param_2;
  FUN_009b7630();
  return;
}




void FUN_009b7fc4(float param_1,undefined4 param_2,long param_3,uint param_4)

{
  if (((*(float *)(param_3 + 0x34) != param_1) &&
      (*(float *)(param_3 + 0x34) = param_1, (param_4 & 1) != 0)) &&
     (*(int *)(param_3 + 0x470) == 1)) {
    *(float *)(param_3 + 0xdc) = param_1;
    *(undefined4 *)(param_3 + 0xe8) = 0;
    *(undefined4 *)(param_3 + 0x470) = 1;
    *(undefined8 *)(param_3 + 0xd4) = *(undefined8 *)(param_3 + 0x60);
    *(undefined4 *)(param_3 + 0xbc) = *(undefined4 *)(param_3 + 0x9c);
    *(undefined8 *)(param_3 + 0xb4) = *(undefined8 *)(param_3 + 0x94);
    *(undefined4 *)(param_3 + 0xec) = param_2;
    FUN_009b7630();
    return;
  }
  return;
}

