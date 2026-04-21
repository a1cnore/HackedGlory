// functions/00a77 — 2 functions
#include "libGameKindred.h"




void FUN_00a773b8(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float local_90;
  float fStack_8c;
  long local_88;
  
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
  plVar1 = param_3 + 0x17;
  local_90 = (float)(**(code **)(*param_3 + 0x48))();
  fStack_8c = param_2;
  FUN_00f13f18(plVar1,&local_90);
  fVar7 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  if ((*(float *)(param_3 + 0x1f) != fVar7 * -0.5) ||
     (*(float *)((long)param_3 + 0xfc) != param_2 * -0.5)) {
    *(float *)(param_3 + 0x1f) = fVar7 * -0.5;
    *(float *)((long)param_3 + 0xfc) = param_2 * -0.5;
    FUN_0091ada4(plVar1);
  }
  plVar3 = param_3 + 0x75a;
  fVar7 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar8 = 0.97;
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13f08(fVar7 * 0.97,fVar8 * 0.4,plVar3);
  fVar7 = (float)(**(code **)(*param_3 + 0x50))(param_3);
  fVar8 = (float)FUN_00f13e54(plVar3);
  fVar7 = (fVar7 - fVar8) * 0.5;
  if ((*(float *)(param_3 + 0x762) != fVar7) || (*(float *)((long)param_3 + 0x3b14) != 0.0)) {
    *(float *)(param_3 + 0x762) = fVar7;
    *(undefined4 *)((long)param_3 + 0x3b14) = 0;
    FUN_0091ada4(plVar3);
  }
  FUN_00a3863c(plVar3);
  plVar3 = param_3 + 0x2141;
  local_90 = (float)FUN_00f13e54(plVar1);
  fVar7 = 0.43;
  local_90 = local_90 * 0.43;
  fStack_8c = local_90;
  FUN_00f13f18(plVar3,&local_90);
  if ((*(float *)(param_3 + 0x214b) != 0.5) || (*(float *)((long)param_3 + 0x10a5c) != 0.5)) {
    param_3[0x214b] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  fVar8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar9 = (float)FUN_00f13e54(plVar3);
  fVar9 = (fVar8 - fVar9 * 0.5) + 1.0;
  FUN_00f13e54(plVar3);
  fVar8 = *(float *)(param_3 + 0x2149);
  fVar7 = fVar7 * 0.5 + -5.0;
  if ((fVar8 != fVar9) || (fVar8 = *(float *)((long)param_3 + 0x10a4c), fVar8 != fVar7)) {
    *(float *)(param_3 + 0x2149) = fVar9;
    *(float *)((long)param_3 + 0x10a4c) = fVar7;
    FUN_0091ada4(plVar3);
  }
  fVar9 = (float)FUN_00f01c20(plVar3);
  fVar7 = fVar8;
  fVar10 = (float)FUN_00f0e700(param_3 + 0x2176);
  fVar8 = fVar8 / fVar7;
  if ((*(float *)(param_3 + 0x217f) != fVar9 / fVar10) ||
     (fVar7 = *(float *)((long)param_3 + 0x10bfc), fVar7 != fVar8)) {
    *(float *)(param_3 + 0x217f) = fVar9 / fVar10;
    *(float *)((long)param_3 + 0x10bfc) = fVar8;
    FUN_0091ada4(param_3 + 0x2176);
  }
  fVar8 = (float)FUN_00f01c20(plVar3);
  fVar10 = fVar7 * 0.96;
  fVar9 = (float)FUN_00f0e700(param_3 + 0x2158);
  fVar9 = (fVar8 * 0.96) / fVar9;
  fVar10 = fVar10 / fVar7;
  if ((*(float *)(param_3 + 0x2161) != fVar9) ||
     (fVar7 = *(float *)((long)param_3 + 0x10b0c), fVar7 != fVar10)) {
    *(float *)(param_3 + 0x2161) = fVar9;
    *(float *)((long)param_3 + 0x10b0c) = fVar10;
    FUN_0091ada4(param_3 + 0x2158);
  }
  fVar8 = (float)FUN_00f01c20(plVar3);
  fVar10 = fVar7 * 0.96;
  fVar9 = (float)FUN_00f0e700(param_3 + 0x2194);
  fVar9 = (fVar8 * 0.96) / fVar9;
  fVar10 = fVar10 / fVar7;
  if ((*(float *)(param_3 + 0x219d) != fVar9) ||
     (fVar7 = *(float *)((long)param_3 + 0x10cec), fVar7 != fVar10)) {
    *(float *)(param_3 + 0x219d) = fVar9;
    *(float *)((long)param_3 + 0x10cec) = fVar10;
    FUN_0091ada4(param_3 + 0x2194);
  }
  FUN_00f13e54(plVar3);
  fVar8 = fVar7 * 0.96;
  FUN_00f0d4e0(param_3 + 0x21b2);
  fVar8 = fVar8 / fVar7;
  if (1.0 < fVar8) {
    fVar8 = 1.0;
  }
  if ((*(float *)(param_3 + 0x21bb) != 1.0) || (*(float *)((long)param_3 + 0x10ddc) != fVar8)) {
    *(undefined4 *)(param_3 + 0x21bb) = 0x3f800000;
    *(float *)((long)param_3 + 0x10ddc) = fVar8;
    FUN_0091ada4(param_3 + 0x21b2);
  }
  plVar4 = param_3 + 0x1f9d;
  fVar7 = 24.0;
  FUN_00f13f08(plVar4);
  fVar8 = (float)FUN_00f01c20(plVar3);
  fVar10 = fVar7 * 0.45;
  fVar9 = (float)FUN_00f13e54(plVar4);
  fVar9 = (fVar8 * 0.45) / fVar9;
  fVar10 = fVar10 / fVar7;
  if ((*(float *)(param_3 + 0x1fa6) != fVar9) || (*(float *)((long)param_3 + 0xfd34) != fVar10)) {
    *(float *)(param_3 + 0x1fa6) = fVar9;
    *(float *)((long)param_3 + 0xfd34) = fVar10;
    FUN_0091ada4(plVar4);
  }
  fVar7 = (float)FUN_00f01c20(plVar3);
  fVar9 = -0.45;
  FUN_00f01c20(plVar3);
  fVar8 = fVar9 * 0.28;
  if ((*(float *)(param_3 + 0x1fa5) != fVar7 * -0.45) ||
     (fVar9 = *(float *)((long)param_3 + 0xfd2c), fVar9 != fVar8)) {
    *(float *)(param_3 + 0x1fa5) = fVar7 * -0.45;
    *(float *)((long)param_3 + 0xfd2c) = fVar8;
    FUN_0091ada4(plVar4);
  }
  FUN_00a46d60(plVar4);
  plVar4 = param_3 + 0x1e03;
  local_90 = (float)FUN_00f01c20(plVar3);
  fStack_8c = fVar9;
  FUN_00f13f18(plVar4,&local_90);
  fVar7 = (float)FUN_00f13e54(plVar4);
  fVar8 = fVar9 * 0.6;
  if ((*(float *)(param_3 + 0x1e0b) != fVar7 * 0.6) ||
     (fVar9 = *(float *)((long)param_3 + 0xf05c), fVar9 != fVar8)) {
    *(float *)(param_3 + 0x1e0b) = fVar7 * 0.6;
    *(float *)((long)param_3 + 0xf05c) = fVar8;
    FUN_0091ada4(plVar4);
  }
  FUN_00a57f0c(plVar4);
  plVar4 = param_3 + 0x21d8;
  if ((*(float *)(param_3 + 0x21e2) != 0.5) || (*(float *)((long)param_3 + 0x10f14) != 0.0)) {
    param_3[0x21e2] = 0x3f000000;
    FUN_0091ada4(plVar4);
  }
  uVar11 = FUN_00f01c20(plVar1);
  FUN_00f13e54(plVar1);
  fVar7 = fVar9;
  FUN_00f01c20(plVar3);
  fVar9 = fVar9 - fVar7;
  FUN_00f13f08(uVar11,plVar4);
  fVar7 = (float)FUN_00f13e54(plVar1);
  FUN_00f01c20(plVar3);
  if ((*(float *)(param_3 + 0x21e0) != fVar7 * 0.5) ||
     (*(float *)((long)param_3 + 0x10f04) != fVar9)) {
    *(float *)(param_3 + 0x21e0) = fVar7 * 0.5;
    *(float *)((long)param_3 + 0x10f04) = fVar9;
    FUN_0091ada4(plVar4);
  }
  plVar1 = param_3 + 0x2e;
  if ((*(float *)(param_3 + 0x38) != 0.5) || (*(float *)((long)param_3 + 0x1c4) != 0.0)) {
    param_3[0x38] = 0x3f000000;
    FUN_0091ada4(plVar1);
  }
  uVar11 = FUN_00f13e54(plVar4);
  FUN_00f13e54(plVar4);
  fVar9 = fVar9 * 0.3;
  FUN_00f13f08(uVar11,plVar1);
  plVar3 = param_3 + 0x21ef;
  if ((*(float *)(param_3 + 0x21f9) != 0.5) || (*(float *)((long)param_3 + 0x10fcc) != 0.0)) {
    param_3[0x21f9] = 0x3f000000;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0d548(plVar3);
  if ((*(float *)(param_3 + 0x21f7) != 0.0) || (*(float *)((long)param_3 + 0x10fbc) != fVar9 * -0.2)
     ) {
    *(float *)(param_3 + 0x21f7) = 0.0;
    *(float *)((long)param_3 + 0x10fbc) = fVar9 * -0.2;
    FUN_0091ada4(plVar3);
  }
  plVar2 = param_3 + 0x45;
  fVar7 = (float)FUN_00f13e54(plVar1);
  fVar10 = 0.75;
  fVar8 = (float)FUN_00a4064c(plVar2);
  fVar8 = (fVar7 * 0.75) / fVar8;
  FUN_00f13e54(plVar1);
  fVar7 = fVar10;
  FUN_00f0d548(plVar3);
  fVar9 = fVar7 * *(float *)((long)param_3 + 0x10fc4);
  FUN_00a4064c(plVar2);
  fVar9 = ((fVar10 - fVar9) * 0.7) / fVar7;
  if ((*(float *)(param_3 + 0x4e) != fVar8) ||
     (fVar7 = *(float *)((long)param_3 + 0x274), fVar7 != fVar9)) {
    *(float *)(param_3 + 0x4e) = fVar8;
    *(float *)((long)param_3 + 0x274) = fVar9;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0d548(plVar3);
  fVar7 = fVar7 * *(float *)((long)param_3 + 0x10fc4) * 1.2;
  if ((*(float *)(param_3 + 0x4d) != 2.0) || (*(float *)((long)param_3 + 0x26c) != fVar7)) {
    *(undefined4 *)(param_3 + 0x4d) = 0x40000000;
    *(float *)((long)param_3 + 0x26c) = fVar7;
    FUN_0091ada4(plVar2);
  }
  plVar3 = param_3 + 0x2215;
  if ((*(float *)(param_3 + 0x221f) != 1.0) || (*(float *)((long)param_3 + 0x110fc) != 0.0)) {
    param_3[0x221f] = 0x3f800000;
    FUN_0091ada4(plVar3);
  }
  fVar7 = (float)FUN_00f13e54(plVar1);
  fVar8 = (float)FUN_00f0d548(plVar3);
  fVar8 = fVar8 + fVar7 * -0.42;
  fVar7 = *(float *)((long)param_3 + 0x26c) * 0.55;
  if ((*(float *)(param_3 + 0x221d) != fVar8) || (*(float *)((long)param_3 + 0x110ec) != fVar7)) {
    *(float *)(param_3 + 0x221d) = fVar8;
    *(float *)((long)param_3 + 0x110ec) = fVar7;
    FUN_0091ada4(plVar3);
  }
  plVar3 = param_3 + 0xd54;
  fVar7 = (float)FUN_00f13e54(plVar4);
  FUN_00f13e54(plVar4);
  fVar8 = fVar8 * 0.45;
  FUN_00f13f08(fVar7 * 0.95,plVar3);
  fVar7 = *(float *)((long)param_3 + 0x1b4);
  FUN_00f01c20(plVar1);
  fVar7 = fVar7 + fVar8;
  FUN_00f13e54(plVar3);
  fVar7 = fVar7 + fVar8;
  pfVar5 = (float *)((long)param_3 + 0x6ae4);
  if ((*(float *)(param_3 + 0xd5c) != 0.0) || (fVar8 = *pfVar5, fVar8 != fVar7)) {
    *(float *)(param_3 + 0xd5c) = 0.0;
    *pfVar5 = fVar7;
    FUN_0091ada4(plVar3);
  }
  FUN_00a2f0b0(plVar3);
  plVar1 = param_3 + 0x6e;
  FUN_00f0acd4(plVar1,&DAT_03218ef8);
  fVar7 = (float)FUN_00f01c20(plVar4);
  FUN_00f01c20(plVar4);
  fVar8 = fVar8 * 0.25;
  FUN_00f13f08(fVar7 * 0.95,plVar1);
  fVar7 = (float)FUN_00f13e54(plVar1);
  fVar9 = *pfVar5;
  FUN_00f13e54(plVar1);
  if ((*(float *)(param_3 + 0x76) != fVar7 * -0.5) ||
     (*(float *)((long)param_3 + 0x3b4) != fVar9 + fVar8)) {
    *(float *)(param_3 + 0x76) = fVar7 * -0.5;
    *(float *)((long)param_3 + 0x3b4) = fVar9 + fVar8;
    FUN_0091ada4(plVar1);
  }
  FUN_00a44354(plVar1);
  FUN_00a781e4(param_3);
  if (*(long *)(lVar6 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a77dd0(long param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  plVar1 = (long *)(param_1 + 0x11318);
  plVar4 = (long *)*plVar1;
  if (plVar4 != (long *)0x0) {
    piVar2 = (int *)(param_1 + 0x11320);
    if (*piVar2 == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        plVar4 = (long *)*plVar1;
        lVar5 = 0;
        if (plVar4 != (long *)0x0) {
          if (*piVar2 == (int)plVar4[1]) {
            lVar5 = (**(code **)(*plVar4 + 0x10))();
          }
          else {
            *plVar1 = 0;
            lVar5 = 0;
            *piVar2 = DAT_03214ce8;
          }
        }
        uVar9 = *(ushort *)(lVar5 + 0x88) & 0x1f;
        if (uVar9 == 0x1f) {
          bVar8 = true;
        }
        else {
          bVar8 = 1 < *(ushort *)(lVar5 + (ulong)uVar9 * 0x38 + 0x90) - 3;
        }
        FUN_00a40724(param_1 + 0x228,bVar8);
        lVar5 = param_1 + 0x11308;
        lVar6 = (**(code **)(*(long *)*plVar1 + 0x10))();
        lVar6 = *(long *)(lVar6 + 0x40);
        fVar10 = (*(float *)(lVar6 + 0x240) + 1.0) *
                 (*(float *)(lVar6 + 0xd8) +
                 *(float *)(lVar6 + 0x18c) * (*(float *)(lVar6 + 0x2f4) + 1.0));
        if (DAT_03133510 <= fVar10) {
          fVar10 = DAT_03133510;
        }
        fVar11 = DAT_03133450;
        if (DAT_03133450 <= fVar10) {
          fVar11 = fVar10;
        }
        FUN_00e70e18(lVar5,&DAT_01bb6d43,(int)fVar11);
        FUN_00f0d75c(param_1 + 0x110a8,lVar5);
        lVar6 = (**(code **)(*(long *)*plVar1 + 0x10))();
        fVar11 = *(float *)(*(long *)(lVar6 + 0x40) + 0x308);
        lVar6 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1);
        lVar6 = *(long *)(lVar6 + 0x40);
        fVar10 = (*(float *)(lVar6 + 0x1a0) + 1.0) *
                 (*(float *)(lVar6 + 0x38) +
                 *(float *)(lVar6 + 0xec) * (*(float *)(lVar6 + 0x254) + 1.0));
        if (DAT_03133470 <= fVar10) {
          fVar10 = DAT_03133470;
        }
        fVar12 = DAT_031333b0;
        if (DAT_031333b0 <= fVar10) {
          fVar12 = fVar10;
        }
        FUN_00e70e18(lVar5,"%d/%d",(int)fVar11,(int)fVar12);
        FUN_00f0d75c(param_1 + 0x111d8,lVar5);
        lVar6 = (**(code **)(*(long *)*plVar1 + 0x10))();
        lVar6 = *(long *)(lVar6 + 0x18);
        do {
          if (lVar6 == 0) {
            FUN_00f0d75c(param_1 + 0x10d90,&DAT_03210450);
            *(uint *)(param_1 + 0x10e14) = *(uint *)(param_1 + 0x10e14) & 0xfffffffb;
            uVar9 = *(uint *)(param_1 + 0x10d24) & 0xfffffffb;
LAB_00a780e8:
            *(uint *)(param_1 + 0x10d24) = uVar9;
            FUN_00a46814(param_1 + 0xfce8);
            uVar7 = FUN_0094276c();
            if (((uVar7 & 1) == 0) || (iVar3 = FUN_00a21d4c(), iVar3 != 1)) {
              uVar9 = *(uint *)(param_1 + 0x10ffc) | 4;
            }
            else {
              uVar9 = *(uint *)(param_1 + 0x10ffc) & 0xfffffffb;
            }
            *(uint *)(param_1 + 0x10ffc) = uVar9;
            FUN_00a762c0(param_1);
            return;
          }
          if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_02c7bf28) {
            fVar10 = (float)FUN_00d79b68();
            FUN_00e70e18(lVar5,&DAT_01bb6d43,(int)((float)(int)fVar10 + 0.99));
            FUN_00f0d75c(param_1 + 0x10d90,lVar5);
            *(uint *)(param_1 + 0x10e14) = *(uint *)(param_1 + 0x10e14) | 4;
            uVar9 = *(uint *)(param_1 + 0x10d24) | 4;
            goto LAB_00a780e8;
          }
          lVar6 = *(long *)(lVar6 + 0x20);
        } while( true );
      }
    }
    else {
      *plVar1 = 0;
      *piVar2 = DAT_03214ce8;
    }
  }
  return;
}

