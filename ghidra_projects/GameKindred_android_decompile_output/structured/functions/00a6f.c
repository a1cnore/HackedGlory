// functions/00a6f — 17 functions
#include "libGameKindred.h"




void FUN_00a6f184(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  plVar1 = *(long **)(param_1 + 0xb8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xc0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        FUN_00ceace8();
        uVar3 = FUN_00ceae88();
        if ((uVar3 & 1) == 0) {
          uVar3 = FUN_0092e69c();
          uVar6 = *(uint *)(param_1 + 0x2fc4) & 0xfffffff8 |
                  *(uint *)(param_1 + 0x2fc4) & 3 | ((uint)uVar3 & 1) << 2;
        }
        else {
          uVar6 = *(uint *)(param_1 + 0x2fc4) | 4;
        }
        *(uint *)(param_1 + 0x2fc4) = uVar6;
        bVar5 = *(byte *)(param_1 + 0x3b2a);
        uVar7 = 0;
        uVar6 = *(ushort *)(lVar2 + 0x88) & 0x1f;
        if (uVar6 != 0x1f) {
          uVar7 = (uint)(*(ushort *)(lVar2 + (ulong)uVar6 * 0x38 + 0x90) - 3 < 2);
        }
        if (uVar7 != (((uint)bVar5 << 0x10) >> 0x12 & 1)) {
          uVar7 = 0;
          if (uVar6 != 0x1f) {
            uVar7 = (uint)(*(short *)(lVar2 + (ulong)uVar6 * 0x38 + 0x90) == 4);
          }
          *(undefined2 *)(param_1 + 0x3b28) = *(undefined2 *)(param_1 + 0x3b28);
          *(byte *)(param_1 + 0x3b2a) = bVar5 & 0xf8 | bVar5 & 3 | (byte)((uVar7 << 0x12) >> 0x10);
          uVar4 = FUN_00a6ed38(uVar3,param_1 + 0x3050);
          uVar4 = FUN_00a6ed38(uVar4,param_1 + 0x3300,*(byte *)(param_1 + 0x3b2a) >> 2 & 1);
          uVar3 = FUN_00a6ed38(uVar4,param_1 + 0x35b0,*(byte *)(param_1 + 0x3b2a) >> 2 & 1);
        }
        lVar2 = *(long *)(lVar2 + 0x40);
        fVar8 = (*(float *)(lVar2 + 0x214) + 1.0) *
                (*(float *)(lVar2 + 0xac) +
                *(float *)(lVar2 + 0x160) * (*(float *)(lVar2 + 0x2c8) + 1.0));
        if (DAT_03132ee4 <= fVar8) {
          fVar8 = DAT_03132ee4;
        }
        fVar9 = DAT_03132e24;
        if (DAT_03132e24 <= fVar8) {
          fVar9 = fVar8;
        }
        if ((fVar9 <= 0.0) || ((((uint)*(byte *)(param_1 + 0x3b2a) << 0x10) >> 0x13 & 1) != 0)) {
          if (fVar9 != 0.0) {
            return;
          }
          if ((((uint)*(byte *)(param_1 + 0x3b2a) << 0x10) >> 0x13 & 1) == 0) {
            return;
          }
          FUN_00a6ed38(uVar3,param_1 + 0x3050,0);
          bVar5 = *(byte *)(param_1 + 0x3b2a) & 0xf7;
        }
        else {
          FUN_00a6ed38(uVar3,param_1 + 0x3050,1);
          bVar5 = *(byte *)(param_1 + 0x3b2a) | 8;
        }
        *(byte *)(param_1 + 0x3b2a) = bVar5;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00a6f3a0(void)

{
  return;
}




void FUN_00a6f3a4(undefined1 param_1 [16],undefined1 param_2 [16],long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ushort *puVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  float fVar15;
  float local_90;
  float fStack_8c;
  undefined8 local_88;
  long *plStack_80;
  long *local_78;
  long *plStack_70;
  long local_68;
  
  uVar12 = param_2._2_2_;
  uVar11 = param_2._0_2_;
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar5 = (ushort *)(param_3 + 0x765);
  if ((*(byte *)((long)param_3 + 0x3b2a) & 1) == 0) goto LAB_00a6f860;
  plVar1 = param_3 + 0x32;
  uVar7 = (**(code **)(*param_3 + 0x48))(param_3);
  local_88 = (long *)CONCAT44(CONCAT22(uVar12,uVar11),uVar7);
  FUN_00f13f18(plVar1,&local_88);
  uVar11 = 0;
  uVar13 = 0x4180;
  fVar15 = (float)(int)(*puVar5 - 1) * 16.0;
  FUN_00f13e54(plVar1);
  fVar8 = (float)FUN_00f13e54(plVar1);
  fVar9 = (float)NEON_ucvtf((uint)*puVar5);
  uVar12 = SUB42(fVar9,0);
  uVar14 = (undefined2)((uint)fVar9 >> 0x10);
  fVar9 = ((float)CONCAT22(uVar13,uVar11) * (fVar8 - fVar15)) / fVar9;
  fVar8 = fVar9;
  if ((0.0 < fVar9) && (fVar8 = SQRT(fVar9), NAN(fVar8))) {
    fVar8 = sqrtf(fVar9);
  }
  FUN_00f13e54(plVar1);
  fVar9 = (float)CONCAT22(uVar14,uVar12);
  if (fVar8 <= (float)CONCAT22(uVar14,uVar12)) {
    fVar9 = fVar8;
  }
  fVar10 = (float)FUN_00f13e54(plVar1);
  fVar8 = (float)NEON_ucvtf((uint)*puVar5);
  fVar8 = (fVar10 - fVar15) / fVar8;
  if (fVar9 <= fVar8) {
    fVar8 = fVar9;
  }
  local_90 = (float)NEON_fminnm(fVar8,0x43300000);
  fVar9 = *(float *)(param_3 + 0x3a);
  uVar11 = SUB42(fVar9,0);
  uVar12 = (undefined2)((uint)fVar9 >> 0x10);
  fStack_8c = local_90;
  if (fVar9 == 0.0) {
    fVar9 = *(float *)((long)param_3 + 0x1d4);
    uVar11 = SUB42(fVar9,0);
    uVar12 = (undefined2)((uint)fVar9 >> 0x10);
    if (fVar9 != local_90 * -0.5) goto LAB_00a6f4d0;
  }
  else {
LAB_00a6f4d0:
    *(undefined4 *)(param_3 + 0x3a) = 0;
    *(float *)((long)param_3 + 0x1d4) = local_90 * -0.5;
    FUN_0091ada4(plVar1);
  }
  plVar1 = param_3 + 0x89;
  FUN_00a29514(0x3fe00000,plVar1);
  FUN_00f13f18(plVar1,&local_90);
  plVar2 = param_3 + 0xa9;
  fVar8 = (float)FUN_00f0eac0(plVar1);
  fVar9 = (float)CONCAT22(uVar12,uVar11);
  fVar15 = (float)FUN_00f0e700(plVar2);
  fVar15 = (fVar8 * 1.25) / fVar15;
  fVar9 = (fVar9 * 1.25) / (float)CONCAT22(uVar12,uVar11);
  if ((*(float *)(param_3 + 0xb2) != fVar15) || (*(float *)((long)param_3 + 0x594) != fVar9)) {
    *(float *)(param_3 + 0xb2) = fVar15;
    *(float *)((long)param_3 + 0x594) = fVar9;
    FUN_0091ada4(plVar2);
  }
  FUN_00a29514(0x3fe00000,plVar2);
  uVar7 = FUN_00f0eac0(plVar1);
  local_88 = (long *)CONCAT44(fVar9,uVar7);
  FUN_00f13f18(param_3 + 0x6c7,&local_88);
  FUN_00a2968c(plVar1);
  plVar2 = param_3 + 0x69;
  FUN_00a29514(0x3fe00000,plVar2);
  FUN_00f13f18(plVar2,&local_90);
  FUN_00a2968c(plVar2);
  plVar3 = param_3 + 0xc9;
  FUN_00a29514(0x3fe00000,plVar3);
  FUN_00f13f18(plVar3,&local_90);
  FUN_00a2968c(plVar3);
  plVar4 = param_3 + 0x49;
  FUN_00a29514(0x3fe00000,plVar4);
  FUN_00f13f18(plVar4,&local_90);
  FUN_00a2968c(plVar4);
  local_88 = plVar1;
  plStack_80 = plVar2;
  local_78 = plVar3;
  plStack_70 = plVar4;
  FUN_00a6f898(param_3,&local_88);
  fVar9 = *(float *)((long)param_3 + 0x48c);
  uVar11 = SUB42(fVar9,0);
  uVar12 = (undefined2)((uint)fVar9 >> 0x10);
  fVar8 = *(float *)(param_3 + 0x91) + 0.0;
  if ((*(float *)(param_3 + 0x6cf) != fVar8) ||
     (*(float *)((long)param_3 + 0x367c) != fVar9 + -92.0)) {
    *(float *)(param_3 + 0x6cf) = fVar8;
    *(float *)((long)param_3 + 0x367c) = fVar9 + -92.0;
    FUN_0091ada4(param_3 + 0x6c7);
    uVar11 = (undefined2)*(undefined4 *)((long)param_3 + 0x48c);
    uVar12 = (undefined2)((uint)*(undefined4 *)((long)param_3 + 0x48c) >> 0x10);
    fVar8 = *(float *)(param_3 + 0x91) + 0.0;
  }
  fVar9 = (float)CONCAT22(uVar12,uVar11) + -100.0;
  if ((*(float *)(param_3 + 0x6ed) != fVar8) || (*(float *)((long)param_3 + 0x376c) != fVar9)) {
    *(float *)(param_3 + 0x6ed) = fVar8;
    *(float *)((long)param_3 + 0x376c) = fVar9;
    FUN_0091ada4(param_3 + 0x6e5);
  }
  fVar9 = *(float *)((long)param_3 + 0x38c);
  uVar11 = SUB42(fVar9,0);
  uVar12 = (undefined2)((uint)fVar9 >> 0x10);
  fVar8 = *(float *)(param_3 + 0x71) + 0.0;
  if ((*(float *)(param_3 + 0x679) != fVar8) ||
     (*(float *)((long)param_3 + 0x33cc) != fVar9 + -92.0)) {
    *(float *)(param_3 + 0x679) = fVar8;
    *(float *)((long)param_3 + 0x33cc) = fVar9 + -92.0;
    FUN_0091ada4(param_3 + 0x671);
    uVar11 = (undefined2)*(undefined4 *)((long)param_3 + 0x38c);
    uVar12 = (undefined2)((uint)*(undefined4 *)((long)param_3 + 0x38c) >> 0x10);
    fVar8 = *(float *)(param_3 + 0x71) + 0.0;
  }
  fVar9 = (float)CONCAT22(uVar12,uVar11) + -100.0;
  if ((*(float *)(param_3 + 0x697) != fVar8) || (*(float *)((long)param_3 + 0x34bc) != fVar9)) {
    *(float *)(param_3 + 0x697) = fVar8;
    *(float *)((long)param_3 + 0x34bc) = fVar9;
    FUN_0091ada4(param_3 + 0x68f);
  }
  fVar9 = *(float *)((long)param_3 + 0x68c);
  uVar11 = SUB42(fVar9,0);
  uVar12 = (undefined2)((uint)fVar9 >> 0x10);
  fVar8 = *(float *)(param_3 + 0xd1) + 0.0;
  if ((*(float *)(param_3 + 0x623) != fVar8) ||
     (*(float *)((long)param_3 + 0x311c) != fVar9 + -92.0)) {
    *(float *)(param_3 + 0x623) = fVar8;
    *(float *)((long)param_3 + 0x311c) = fVar9 + -92.0;
    FUN_0091ada4(param_3 + 0x61b);
    uVar11 = (undefined2)*(undefined4 *)((long)param_3 + 0x68c);
    uVar12 = (undefined2)((uint)*(undefined4 *)((long)param_3 + 0x68c) >> 0x10);
    fVar8 = *(float *)(param_3 + 0xd1) + 0.0;
  }
  fVar9 = (float)CONCAT22(uVar12,uVar11) + -100.0;
  if ((*(float *)(param_3 + 0x641) != fVar8) || (*(float *)((long)param_3 + 0x320c) != fVar9)) {
    *(float *)(param_3 + 0x641) = fVar8;
    *(float *)((long)param_3 + 0x320c) = fVar9;
    FUN_0091ada4(param_3 + 0x639);
  }
  fVar9 = *(float *)((long)param_3 + 0x28c);
  uVar11 = SUB42(fVar9,0);
  uVar12 = (undefined2)((uint)fVar9 >> 0x10);
  fVar8 = *(float *)(param_3 + 0x51) + 0.0;
  if ((*(float *)(param_3 + 0x725) != fVar8) ||
     (*(float *)((long)param_3 + 0x392c) != fVar9 + -92.0)) {
    *(float *)(param_3 + 0x725) = fVar8;
    *(float *)((long)param_3 + 0x392c) = fVar9 + -92.0;
    FUN_0091ada4(param_3 + 0x71d);
    uVar11 = (undefined2)*(undefined4 *)((long)param_3 + 0x28c);
    uVar12 = (undefined2)((uint)*(undefined4 *)((long)param_3 + 0x28c) >> 0x10);
    fVar8 = *(float *)(param_3 + 0x51) + 0.0;
  }
  fVar9 = (float)CONCAT22(uVar12,uVar11) + -100.0;
  uVar7 = 0;
  if ((*(float *)(param_3 + 0x743) != fVar8) || (*(float *)((long)param_3 + 0x3a1c) != fVar9)) {
    *(float *)(param_3 + 0x743) = fVar8;
    *(float *)((long)param_3 + 0x3a1c) = fVar9;
    FUN_0091ada4(param_3 + 0x73b);
  }
  fVar15 = *(float *)(param_3 + 0x91);
  FUN_00f0eac0(plVar1);
  fVar8 = fVar9 * -1.1;
  if (*(float *)(param_3 + 0xf1) == fVar15) {
    fVar9 = *(float *)((long)param_3 + 0x78c);
    uVar7 = 0;
    if (fVar9 != fVar8) goto LAB_00a6f834;
  }
  else {
LAB_00a6f834:
    *(float *)(param_3 + 0xf1) = fVar15;
    *(float *)((long)param_3 + 0x78c) = fVar8;
    FUN_0091ada4(param_3 + 0xe9);
  }
  FUN_00f0eac0(plVar1);
  FUN_00a52010(CONCAT44(uVar7,fVar9),param_3 + 0xe9);
  param_3[0x762] = CONCAT44(fStack_8c,local_90);
LAB_00a6f860:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a6f898(long param_1,long param_2)

{
  uint3 *puVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  puVar1 = (uint3 *)(param_1 + 0x3b28);
  uVar4 = (ulong)*puVar1;
  fVar10 = 0.0;
  if (*(ushort *)puVar1 != 0) {
    uVar5 = 0;
    fVar10 = 0.0;
    do {
      plVar2 = *(long **)(param_2 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        fVar6 = (float)(**(code **)(*plVar2 + 0x50))();
        fVar10 = fVar10 + fVar6;
        uVar4 = (ulong)*puVar1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uVar4 & 0xffff));
  }
  fVar6 = (float)FUN_00f13e54(param_1 + 400);
  if (*(ushort *)puVar1 != 0) {
    fVar6 = fVar6 - fVar10;
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    fVar6 = fVar6 / (float)(int)(*(ushort *)puVar1 - 1);
    uVar4 = 0;
    if (24.0 < fVar6) {
      fVar6 = 24.0;
    }
    do {
      plVar2 = *(long **)(param_2 + uVar4 * 8);
      if (plVar2 != (long *)0x0) {
        if (uVar4 == 0) {
          fVar10 = (float)(**(code **)(*plVar2 + 0x50))(plVar2);
          fVar9 = *(float *)(plVar2 + 8);
          fVar10 = fVar10 * -0.5;
        }
        else {
          plVar3 = *(long **)(param_2 + (ulong)((int)uVar4 - 1) * 8);
          fVar10 = *(float *)(plVar3 + 8);
          fVar7 = (float)(**(code **)(*plVar3 + 0x50))();
          fVar8 = (float)(**(code **)(*plVar2 + 0x50))(plVar2);
          fVar9 = *(float *)(plVar2 + 8);
          fVar10 = -(fVar6 + ABS(fVar10) + fVar7 * 0.5 + fVar8 * 0.5);
        }
        if ((fVar9 != fVar10) || (*(float *)((long)plVar2 + 0x44) != 0.0)) {
          *(float *)(plVar2 + 8) = fVar10;
          *(undefined4 *)((long)plVar2 + 0x44) = 0;
          FUN_0091ada4(plVar2);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)puVar1);
  }
  return;
}




void FUN_00a6fa14(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a6fa1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void thunk_FUN_00a6f3a4(undefined1 param_1 [16],undefined1 param_2 [16],long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ushort *puVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  float fVar15;
  float fStack_90;
  float fStack_8c;
  undefined8 uStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long lStack_68;
  
  uVar12 = param_2._2_2_;
  uVar11 = param_2._0_2_;
  lVar6 = tpidr_el0;
  lStack_68 = *(long *)(lVar6 + 0x28);
  puVar5 = (ushort *)(param_3 + 0x765);
  if ((*(byte *)((long)param_3 + 0x3b2a) & 1) == 0) goto LAB_00a6f860;
  plVar1 = param_3 + 0x32;
  uVar7 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_88 = (long *)CONCAT44(CONCAT22(uVar12,uVar11),uVar7);
  FUN_00f13f18(plVar1,&uStack_88);
  uVar11 = 0;
  uVar13 = 0x4180;
  fVar15 = (float)(int)(*puVar5 - 1) * 16.0;
  FUN_00f13e54(plVar1);
  fVar8 = (float)FUN_00f13e54(plVar1);
  fVar9 = (float)NEON_ucvtf((uint)*puVar5);
  uVar12 = SUB42(fVar9,0);
  uVar14 = (undefined2)((uint)fVar9 >> 0x10);
  fVar9 = ((float)CONCAT22(uVar13,uVar11) * (fVar8 - fVar15)) / fVar9;
  fVar8 = fVar9;
  if ((0.0 < fVar9) && (fVar8 = SQRT(fVar9), NAN(fVar8))) {
    fVar8 = sqrtf(fVar9);
  }
  FUN_00f13e54(plVar1);
  fVar9 = (float)CONCAT22(uVar14,uVar12);
  if (fVar8 <= (float)CONCAT22(uVar14,uVar12)) {
    fVar9 = fVar8;
  }
  fVar10 = (float)FUN_00f13e54(plVar1);
  fVar8 = (float)NEON_ucvtf((uint)*puVar5);
  fVar8 = (fVar10 - fVar15) / fVar8;
  if (fVar9 <= fVar8) {
    fVar8 = fVar9;
  }
  fStack_90 = (float)NEON_fminnm(fVar8,0x43300000);
  fVar9 = *(float *)(param_3 + 0x3a);
  uVar11 = SUB42(fVar9,0);
  uVar12 = (undefined2)((uint)fVar9 >> 0x10);
  fStack_8c = fStack_90;
  if (fVar9 == 0.0) {
    fVar9 = *(float *)((long)param_3 + 0x1d4);
    uVar11 = SUB42(fVar9,0);
    uVar12 = (undefined2)((uint)fVar9 >> 0x10);
    if (fVar9 != fStack_90 * -0.5) goto LAB_00a6f4d0;
  }
  else {
LAB_00a6f4d0:
    *(undefined4 *)(param_3 + 0x3a) = 0;
    *(float *)((long)param_3 + 0x1d4) = fStack_90 * -0.5;
    FUN_0091ada4(plVar1);
  }
  plVar1 = param_3 + 0x89;
  FUN_00a29514(0x3fe00000,plVar1);
  FUN_00f13f18(plVar1,&fStack_90);
  plVar2 = param_3 + 0xa9;
  fVar8 = (float)FUN_00f0eac0(plVar1);
  fVar9 = (float)CONCAT22(uVar12,uVar11);
  fVar15 = (float)FUN_00f0e700(plVar2);
  fVar15 = (fVar8 * 1.25) / fVar15;
  fVar9 = (fVar9 * 1.25) / (float)CONCAT22(uVar12,uVar11);
  if ((*(float *)(param_3 + 0xb2) != fVar15) || (*(float *)((long)param_3 + 0x594) != fVar9)) {
    *(float *)(param_3 + 0xb2) = fVar15;
    *(float *)((long)param_3 + 0x594) = fVar9;
    FUN_0091ada4(plVar2);
  }
  FUN_00a29514(0x3fe00000,plVar2);
  uVar7 = FUN_00f0eac0(plVar1);
  uStack_88 = (long *)CONCAT44(fVar9,uVar7);
  FUN_00f13f18(param_3 + 0x6c7,&uStack_88);
  FUN_00a2968c(plVar1);
  plVar2 = param_3 + 0x69;
  FUN_00a29514(0x3fe00000,plVar2);
  FUN_00f13f18(plVar2,&fStack_90);
  FUN_00a2968c(plVar2);
  plVar3 = param_3 + 0xc9;
  FUN_00a29514(0x3fe00000,plVar3);
  FUN_00f13f18(plVar3,&fStack_90);
  FUN_00a2968c(plVar3);
  plVar4 = param_3 + 0x49;
  FUN_00a29514(0x3fe00000,plVar4);
  FUN_00f13f18(plVar4,&fStack_90);
  FUN_00a2968c(plVar4);
  uStack_88 = plVar1;
  plStack_80 = plVar2;
  plStack_78 = plVar3;
  plStack_70 = plVar4;
  FUN_00a6f898(param_3,&uStack_88);
  fVar9 = *(float *)((long)param_3 + 0x48c);
  uVar11 = SUB42(fVar9,0);
  uVar12 = (undefined2)((uint)fVar9 >> 0x10);
  fVar8 = *(float *)(param_3 + 0x91) + 0.0;
  if ((*(float *)(param_3 + 0x6cf) != fVar8) ||
     (*(float *)((long)param_3 + 0x367c) != fVar9 + -92.0)) {
    *(float *)(param_3 + 0x6cf) = fVar8;
    *(float *)((long)param_3 + 0x367c) = fVar9 + -92.0;
    FUN_0091ada4(param_3 + 0x6c7);
    uVar11 = (undefined2)*(undefined4 *)((long)param_3 + 0x48c);
    uVar12 = (undefined2)((uint)*(undefined4 *)((long)param_3 + 0x48c) >> 0x10);
    fVar8 = *(float *)(param_3 + 0x91) + 0.0;
  }
  fVar9 = (float)CONCAT22(uVar12,uVar11) + -100.0;
  if ((*(float *)(param_3 + 0x6ed) != fVar8) || (*(float *)((long)param_3 + 0x376c) != fVar9)) {
    *(float *)(param_3 + 0x6ed) = fVar8;
    *(float *)((long)param_3 + 0x376c) = fVar9;
    FUN_0091ada4(param_3 + 0x6e5);
  }
  fVar9 = *(float *)((long)param_3 + 0x38c);
  uVar11 = SUB42(fVar9,0);
  uVar12 = (undefined2)((uint)fVar9 >> 0x10);
  fVar8 = *(float *)(param_3 + 0x71) + 0.0;
  if ((*(float *)(param_3 + 0x679) != fVar8) ||
     (*(float *)((long)param_3 + 0x33cc) != fVar9 + -92.0)) {
    *(float *)(param_3 + 0x679) = fVar8;
    *(float *)((long)param_3 + 0x33cc) = fVar9 + -92.0;
    FUN_0091ada4(param_3 + 0x671);
    uVar11 = (undefined2)*(undefined4 *)((long)param_3 + 0x38c);
    uVar12 = (undefined2)((uint)*(undefined4 *)((long)param_3 + 0x38c) >> 0x10);
    fVar8 = *(float *)(param_3 + 0x71) + 0.0;
  }
  fVar9 = (float)CONCAT22(uVar12,uVar11) + -100.0;
  if ((*(float *)(param_3 + 0x697) != fVar8) || (*(float *)((long)param_3 + 0x34bc) != fVar9)) {
    *(float *)(param_3 + 0x697) = fVar8;
    *(float *)((long)param_3 + 0x34bc) = fVar9;
    FUN_0091ada4(param_3 + 0x68f);
  }
  fVar9 = *(float *)((long)param_3 + 0x68c);
  uVar11 = SUB42(fVar9,0);
  uVar12 = (undefined2)((uint)fVar9 >> 0x10);
  fVar8 = *(float *)(param_3 + 0xd1) + 0.0;
  if ((*(float *)(param_3 + 0x623) != fVar8) ||
     (*(float *)((long)param_3 + 0x311c) != fVar9 + -92.0)) {
    *(float *)(param_3 + 0x623) = fVar8;
    *(float *)((long)param_3 + 0x311c) = fVar9 + -92.0;
    FUN_0091ada4(param_3 + 0x61b);
    uVar11 = (undefined2)*(undefined4 *)((long)param_3 + 0x68c);
    uVar12 = (undefined2)((uint)*(undefined4 *)((long)param_3 + 0x68c) >> 0x10);
    fVar8 = *(float *)(param_3 + 0xd1) + 0.0;
  }
  fVar9 = (float)CONCAT22(uVar12,uVar11) + -100.0;
  if ((*(float *)(param_3 + 0x641) != fVar8) || (*(float *)((long)param_3 + 0x320c) != fVar9)) {
    *(float *)(param_3 + 0x641) = fVar8;
    *(float *)((long)param_3 + 0x320c) = fVar9;
    FUN_0091ada4(param_3 + 0x639);
  }
  fVar9 = *(float *)((long)param_3 + 0x28c);
  uVar11 = SUB42(fVar9,0);
  uVar12 = (undefined2)((uint)fVar9 >> 0x10);
  fVar8 = *(float *)(param_3 + 0x51) + 0.0;
  if ((*(float *)(param_3 + 0x725) != fVar8) ||
     (*(float *)((long)param_3 + 0x392c) != fVar9 + -92.0)) {
    *(float *)(param_3 + 0x725) = fVar8;
    *(float *)((long)param_3 + 0x392c) = fVar9 + -92.0;
    FUN_0091ada4(param_3 + 0x71d);
    uVar11 = (undefined2)*(undefined4 *)((long)param_3 + 0x28c);
    uVar12 = (undefined2)((uint)*(undefined4 *)((long)param_3 + 0x28c) >> 0x10);
    fVar8 = *(float *)(param_3 + 0x51) + 0.0;
  }
  fVar9 = (float)CONCAT22(uVar12,uVar11) + -100.0;
  uVar7 = 0;
  if ((*(float *)(param_3 + 0x743) != fVar8) || (*(float *)((long)param_3 + 0x3a1c) != fVar9)) {
    *(float *)(param_3 + 0x743) = fVar8;
    *(float *)((long)param_3 + 0x3a1c) = fVar9;
    FUN_0091ada4(param_3 + 0x73b);
  }
  fVar15 = *(float *)(param_3 + 0x91);
  FUN_00f0eac0(plVar1);
  fVar8 = fVar9 * -1.1;
  if (*(float *)(param_3 + 0xf1) == fVar15) {
    fVar9 = *(float *)((long)param_3 + 0x78c);
    uVar7 = 0;
    if (fVar9 != fVar8) goto LAB_00a6f834;
  }
  else {
LAB_00a6f834:
    *(float *)(param_3 + 0xf1) = fVar15;
    *(float *)((long)param_3 + 0x78c) = fVar8;
    FUN_0091ada4(param_3 + 0xe9);
  }
  FUN_00f0eac0(plVar1);
  FUN_00a52010(CONCAT44(uVar7,fVar9),param_3 + 0xe9);
  param_3[0x762] = CONCAT44(fStack_8c,fStack_90);
LAB_00a6f860:
  if (*(long *)(lVar6 + 0x28) != lStack_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a6fa24(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  FUN_00b89d24(param_1 + 200,param_2 & 1,param_3,param_4 & 1);
  return;
}




void FUN_00a6fa34(long param_1,uint param_2)

{
  param_2 = param_2 & 1;
  FUN_00a2972c(param_1 + 0x248,param_2);
  FUN_00a2972c(param_1 + 0x348,param_2);
  FUN_00a2972c(param_1 + 0x448,param_2);
  FUN_00a2972c(param_1 + 0x548,param_2);
  FUN_00a2972c(param_1 + 0x648,param_2);
  FUN_00a520a8(param_1 + 0x748,param_2);
  return;
}




undefined4 FUN_00a6fa98(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3b10);
}




undefined4 FUN_00a6faa4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x388);
}




void FUN_00a6fab0(long param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    param_1 = param_1 + 0x248;
    break;
  case 1:
    param_1 = param_1 + 0x348;
    break;
  case 2:
    FUN_00a29314(param_1 + 0x448);
    param_1 = param_1 + 0x548;
    break;
  case 3:
    param_1 = param_1 + 0x648;
    break;
  default:
    return;
  }
  FUN_00a29314(param_1);
  return;
}




void FUN_00a6fb1c(undefined1 param_1 [16],float param_2,long param_3,ulong param_4)

{
  byte bVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  bVar1 = *(byte *)(param_3 + 0x3b2a);
  if ((param_4 & 1) == 0) {
    if ((bVar1 & 2) != 0) {
      FUN_00a6ed38(param_3,param_3 + 0x35b0,0);
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
        FUN_00efdd74(puVar4);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efddc4(0,puVar4);
      FUN_00efcac4(0x3ea8f5c3,puVar4);
      FUN_00f01980(param_3 + 0x548);
      FUN_00f022a0(param_3 + 0x548,puVar4);
      *(byte *)(param_3 + 0x3b2a) = *(byte *)(param_3 + 0x3b2a) & 0xfd;
    }
  }
  else if ((bVar1 & 2) == 0) {
    *(undefined2 *)(param_3 + 0x3b28) = *(undefined2 *)(param_3 + 0x3b28);
    *(byte *)(param_3 + 0x3b2a) = bVar1 | 2;
    FUN_00a6ed38(param_3,param_3 + 0x35b0,1);
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
      FUN_00efdd74(puVar4);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efddc4(0x3f266666,puVar4);
    FUN_00efcac4(0x3f800000,puVar4);
    FUN_00efcb24(puVar4,FUN_00a2b6d4);
    lVar2 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
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
    }
    FUN_00efddc4(0,puVar5);
    FUN_00efcac4(0x3f800000,puVar5);
    FUN_00efcb24(puVar5,FUN_00a2b6d4);
    lVar2 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efd208(puVar6);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efd2dc(puVar6,puVar4,puVar5,0);
    FUN_00efd3bc(puVar6);
    FUN_00f01980(param_3 + 0x548);
    FUN_00f022a0(param_3 + 0x548,puVar6);
  }
  fVar7 = (float)FUN_00f0eac0(param_3 + 0x448);
  fVar9 = param_2 * 1.25;
  fVar8 = (float)FUN_00f0e700(param_3 + 0x548);
  fVar8 = (fVar7 * 1.25) / fVar8;
  fVar9 = fVar9 / param_2;
  if ((*(float *)(param_3 + 0x590) == fVar8) && (*(float *)(param_3 + 0x594) == fVar9)) {
    return;
  }
  *(float *)(param_3 + 0x590) = fVar8;
  *(float *)(param_3 + 0x594) = fVar9;
  FUN_0091ada4(param_3 + 0x548);
  return;
}




void FUN_00a6ff00(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x304c) =
       *(uint *)(param_1 + 0x304c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x304c) & 3 | (param_2 & 1) << 2;
  return;
}




void FUN_00a6ff14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00a6ff1c(param_1,param_3);
  return;
}




void FUN_00a6ff1c(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_UTILS_SELECT_ITEM");
  FUN_00f048e0(auStack_58,uVar2,param_2);
  FUN_00f04760(param_1,auStack_58,1);
  FUN_00ceace8();
  uVar3 = FUN_00ceae88();
  if ((uVar3 & 1) != 0) {
    FUN_00a70074(param_1,param_2);
  }
  switch(param_2) {
  case 0:
    param_1 = param_1 + 0x248;
    break;
  case 1:
    param_1 = param_1 + 0x348;
    break;
  case 2:
    param_1 = param_1 + 0x448;
    break;
  case 3:
    param_1 = param_1 + 0x648;
    break;
  default:
    goto switchD_00a6ffa4_default;
  }
  FUN_00a29314(param_1);
switchD_00a6ffa4_default:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a6fff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00a6fff8(param_1,param_3);
  return;
}




void FUN_00a6fff8(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_UTILS_FOCUS_KILLED");
  FUN_00f048e0(auStack_58,uVar2,param_2);
  FUN_00f04760(param_1,auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

