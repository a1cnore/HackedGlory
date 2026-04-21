// functions/00a38 — 14 functions
#include "libGameKindred.h"




void FUN_00a38014(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (*(long *)(param_1 + 200) == 0) {
    plVar7 = *(long **)(param_1 + 0xb8);
    if (plVar7 != (long *)0x0) {
      if (*(int *)(param_1 + 0xc0) == (int)plVar7[1]) {
        lVar8 = (**(code **)(*plVar7 + 0x10))();
        if ((lVar8 != 0) && (lVar8 = FUN_00d9ea08(), lVar8 != 0)) {
          *(long *)(param_1 + 200) = lVar8;
          goto LAB_00a3808c;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined4 *)(param_1 + 0xc0) = DAT_03214ce8;
      }
    }
    if (*(long *)(param_1 + 200) == 0) goto LAB_00a381ec;
  }
LAB_00a3808c:
  iVar1 = FUN_00d6ad98();
  if (iVar1 != 0) {
    uVar6 = 0;
    do {
      iVar1 = FUN_00d6b5f0(*(undefined8 *)(param_1 + 200),uVar6);
      uVar9 = FUN_00d6be84(*(undefined8 *)(param_1 + 200),iVar1,*(byte *)(param_1 + 0x2fc8) & 1);
      if ((uVar9 & 1) != 0) {
        uVar9 = 0;
        lVar8 = param_1 + 0x388;
        do {
          iVar2 = FUN_00a378f8(lVar8);
          if (iVar2 == iVar1) goto LAB_00a38104;
          uVar9 = uVar9 + 1;
          lVar8 = lVar8 + 0x588;
        } while (uVar9 < 8);
        FUN_00a38260(param_1,iVar1);
      }
LAB_00a38104:
      uVar6 = uVar6 + 1;
      uVar3 = FUN_00d6ad98(*(undefined8 *)(param_1 + 200));
    } while (uVar6 < uVar3);
  }
  uVar9 = 0;
  lVar8 = param_1 + 0x388;
  do {
    uVar4 = FUN_00a378f8(lVar8);
    uVar10 = FUN_00d6c068(*(undefined8 *)(param_1 + 200),uVar4);
    if (((uVar10 & 1) == 0) ||
       (uVar10 = FUN_00d6be84(*(undefined8 *)(param_1 + 200),uVar4,*(byte *)(param_1 + 0x2fc8) & 1),
       (uVar10 & 1) == 0)) {
      FUN_00a383c8(param_1,uVar9 & 0xffffffff);
    }
    else {
      uVar5 = FUN_00d6bb04(*(undefined8 *)(param_1 + 200),uVar4);
      uVar10 = FUN_00d6bdb8(*(undefined8 *)(param_1 + 200),uVar4);
      if (((uVar10 & 1) != 0) ||
         ((uVar6 = FUN_00d6bd30(*(undefined8 *)(param_1 + 200),uVar4), uVar6 < 2 &&
          (uVar10 = FUN_00d6bd70(*(undefined8 *)(param_1 + 200),uVar4), (uVar10 & 1) == 0)))) {
        uVar5 = 0;
      }
      FUN_00a37804(lVar8,uVar5);
      FUN_00d6c028(*(undefined8 *)(param_1 + 200),uVar4);
      FUN_00a378d8(lVar8);
    }
    uVar9 = uVar9 + 1;
    lVar8 = lVar8 + 0x588;
  } while (uVar9 != 8);
LAB_00a381ec:
  FUN_00a38464(param_1);
  return;
}




undefined8 FUN_00a38208(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  param_1 = param_1 + 0x388;
  do {
    iVar1 = FUN_00a378f8(param_1);
    if (iVar1 == param_2) {
      return 1;
    }
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 0x588;
  } while (uVar2 < 8);
  return 0;
}




void FUN_00a38260(long param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  ulong uVar6;
  
  plVar2 = *(long **)(param_1 + 0xb8);
  if (plVar2 == (long *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0xc0) != (int)plVar2[1]) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xc0) = DAT_03214ce8;
    return;
  }
  lVar3 = (**(code **)(*plVar2 + 0x10))();
  if (lVar3 == 0) {
    return;
  }
  uVar6 = 0;
  lVar5 = param_1 + 0x388;
  while (iVar1 = FUN_00a378f8(lVar5), iVar1 != -1) {
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 0x588;
    if (7 < uVar6) {
      return;
    }
  }
  FUN_00a37608(lVar5,param_2,lVar3);
  lVar3 = 0;
  pfVar4 = (float *)(param_1 + 0x348);
  do {
    if (*(short *)(param_1 + 0x338 + lVar3 * 2) == -1) {
      *(short *)(param_1 + lVar3 * 2 + 0x338) = (short)uVar6;
      if ((*(float *)(lVar5 + 0x40) != *pfVar4) || (*(float *)(lVar5 + 0x44) != pfVar4[1])) {
        *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)pfVar4;
        FUN_0091ada4(lVar5);
      }
      break;
    }
    lVar3 = lVar3 + 1;
    pfVar4 = pfVar4 + 2;
  } while ((uint)lVar3 < 8);
  *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) | 4;
  uVar6 = FUN_0093d830();
  if (((uVar6 & 1) != 0) && (uVar6 = FUN_0093d83c(), (uVar6 & 1) == 0)) {
    *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) | 0x10;
  }
  if ((*(byte *)(param_1 + 0x2fc8) & 1) == 0) {
    return;
  }
  FUN_00a37900(lVar5);
  return;
}




void FUN_00a383c8(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1 + (ulong)param_2 * 0x588;
  FUN_00a377d4(lVar2 + 0x388);
  *(uint *)(lVar2 + 0x40c) = *(uint *)(lVar2 + 0x40c) & 0xfffffffb;
  FUN_00a37804(lVar2 + 0x388,0);
  uVar1 = FUN_0093d830();
  if ((uVar1 & 1) != 0) {
    *(uint *)(lVar2 + 0x40c) = *(uint *)(lVar2 + 0x40c) & 0xffffffef;
  }
  lVar2 = 0;
  do {
    if ((int)*(short *)(param_1 + 0x338 + lVar2 * 2) == param_2) {
      *(undefined2 *)(param_1 + lVar2 * 2 + 0x338) = 0xffff;
      return;
    }
    lVar2 = lVar2 + 1;
  } while ((uint)lVar2 < 8);
  return;
}




void FUN_00a38464(long param_1)

{
  long lVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  ushort uVar6;
  ulong uVar7;
  ushort *puVar8;
  long lVar9;
  short *psVar10;
  
  uVar5 = 0;
  do {
    lVar9 = param_1 + uVar5 * 2;
    if (*(short *)(lVar9 + 0x338) == -1) {
      uVar7 = uVar5 & 0xffffffff;
      do {
        lVar1 = param_1 + uVar7 * 2;
        sVar3 = *(short *)(lVar1 + 0x338);
        if (sVar3 != -1) {
          *(short *)(lVar9 + 0x338) = sVar3;
          *(undefined2 *)(lVar1 + 0x338) = 0xffff;
          break;
        }
        uVar2 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar2;
      } while (uVar2 < 8);
    }
    uVar5 = uVar5 + 1;
    if (uVar5 == 8) {
      lVar9 = 0;
      psVar10 = (short *)(param_1 + 0x338);
      do {
        if ((-1 < (long)*psVar10) &&
           (iVar4 = FUN_00a378f8(param_1 + (long)*psVar10 * 0x588 + 0x388), iVar4 != -1)) {
          FUN_00f01980(param_1 + (long)*psVar10 * 0x588 + 0x388);
          lVar1 = DAT_03210d00;
          uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
          if ((ulong)uVar6 == 0xffff) {
            puVar8 = (ushort *)0x0;
          }
          else {
            puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
            if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
              uVar6 = 0xffff;
            }
            else {
              uVar6 = *puVar8;
            }
            *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
            *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
            FUN_00efdc08(puVar8);
            *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
          }
          FUN_00efdc50(puVar8,param_1 + 0x348 + lVar9);
          FUN_00efcac4(0x3ea8f5c3,puVar8);
          FUN_00efcb24(puVar8,FUN_00a39164);
          FUN_00f022a0(param_1 + 0x388 + (long)*psVar10 * 0x588,puVar8);
          FUN_00a374e0(param_1 + 0x388 + (long)*psVar10 * 0x588);
        }
        lVar9 = lVar9 + 8;
        psVar10 = psVar10 + 1;
      } while (lVar9 != 0x40);
      return;
    }
  } while( true );
}




void FUN_00a3863c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x2fc8) & 3) == 0) {
    uVar1 = FUN_00a37fe8();
    if ((uVar1 & 1) == 0) {
      FUN_00a38b48(param_1);
    }
    else {
      FUN_00a38940(param_1);
    }
  }
  else {
    FUN_00a386a8();
  }
  param_1 = param_1 + 0x388;
  lVar2 = 8;
  do {
    FUN_00a374e0(param_1);
    lVar2 = lVar2 + -1;
    param_1 = param_1 + 0x588;
  } while (lVar2 != 0);
  return;
}




void FUN_00a386a8(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  plVar1 = param_1 + 0x50;
  fVar8 = (float)(**(code **)(*param_1 + 0x50))();
  fVar13 = 0.95;
  (**(code **)(*param_1 + 0x50))(param_1);
  fVar13 = fVar13 * 0.98;
  FUN_00f13f08(fVar8 * 0.95,plVar1);
  fVar8 = (float)(**(code **)(*param_1 + 0x50))(param_1);
  fVar9 = (float)FUN_00f01c20(plVar1);
  fVar9 = (fVar8 - fVar9) * 0.5;
  (**(code **)(*param_1 + 0x50))(param_1);
  fVar8 = fVar13;
  FUN_00f01c20(plVar1);
  fVar13 = fVar13 - fVar8;
  fVar8 = fVar13 * -0.5;
  if ((*(float *)(param_1 + 0x58) != fVar9) ||
     (fVar13 = *(float *)((long)param_1 + 0x2c4), fVar13 != fVar8)) {
    *(float *)(param_1 + 0x58) = fVar9;
    *(float *)((long)param_1 + 0x2c4) = fVar8;
    FUN_0091ada4(plVar1);
  }
  FUN_00f01c20(plVar1);
  fVar9 = fVar13 * 0.5;
  fVar8 = (float)FUN_00f01c20(plVar1);
  fVar8 = fVar9 * fVar8 * 0.25;
  fVar9 = SQRT(fVar8);
  if (NAN(fVar9)) {
    fVar9 = sqrtf(fVar8);
  }
  FUN_00f01c20(plVar1);
  fVar8 = fVar13 * 0.5;
  if (fVar9 <= fVar13 * 0.5) {
    fVar8 = fVar9;
  }
  fVar9 = (float)FUN_00f01c20(plVar1);
  plVar4 = param_1 + 0x71;
  local_80 = fVar9 * 0.25;
  if (fVar8 <= fVar9 * 0.25) {
    local_80 = fVar8;
  }
  lVar5 = 8;
  fStack_7c = local_80;
  do {
    FUN_00f13f18(plVar4,&local_80);
    lVar5 = lVar5 + -1;
    plVar4 = plVar4 + 0xb1;
  } while (lVar5 != 0);
  fVar8 = (float)FUN_00f01c20(plVar1);
  pfVar7 = (float *)(param_1 + 0x69);
  fVar9 = local_80 * -4.0;
  fVar8 = fVar8 + fVar9;
  plVar4 = param_1 + 0x71;
  uVar6 = 0;
  do {
    if (uVar6 < 4) {
      if (uVar6 == 0) {
        fVar13 = local_80 * 0.5;
        FUN_00f01c20(plVar1);
        *pfVar7 = fVar13;
        *(float *)((long)param_1 + 0x34c) = fVar9 * -0.25;
      }
      else {
LAB_00a388a0:
        uVar2 = (int)uVar6 - 1;
        fVar10 = *(float *)(param_1 + (ulong)uVar2 + 0x69);
        fVar11 = (float)(**(code **)(*plVar4 + 0x50))(plVar4);
        fVar12 = (float)(**(code **)(*plVar4 + 0x50))(plVar4);
        fVar13 = *(float *)((long)param_1 + (ulong)uVar2 * 8 + 0x34c);
        *pfVar7 = fVar8 / 3.0 + ABS(fVar10) + fVar11 * 0.5 + fVar12 * 0.5;
        pfVar7[1] = fVar13;
      }
    }
    else {
      if (uVar6 != 4) goto LAB_00a388a0;
      fVar13 = local_80 * 0.5;
      FUN_00f01c20(plVar1);
      *pfVar7 = fVar13;
      *(float *)((long)param_1 + 0x36c) = fVar9 * -0.75;
    }
    uVar6 = uVar6 + 1;
    pfVar7 = pfVar7 + 2;
    plVar4 = plVar4 + 0xb1;
    if (uVar6 == 8) {
      if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}




void FUN_00a38940(long *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00a1bcec();
  fVar10 = -1.0;
  fVar11 = -1.0;
  if ((uVar3 & 1) == 0) {
    fVar11 = 1.0;
  }
  plVar4 = param_1 + 0x50;
  local_80 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fStack_7c = fVar10;
  FUN_00f13f18(plVar4,&local_80);
  FUN_00f13e54(plVar4);
  fVar7 = fVar10 * -0.5;
  if ((*(float *)(param_1 + 0x58) != 0.0) ||
     (fVar10 = *(float *)((long)param_1 + 0x2c4), fVar10 != fVar7)) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(float *)((long)param_1 + 0x2c4) = fVar7;
    FUN_0091ada4(plVar4);
  }
  FUN_00f01c20(plVar4);
  fVar7 = fVar10;
  fVar8 = (float)FUN_00f01c20(plVar4);
  fVar8 = fVar10 * fVar8 * 0.125;
  fVar10 = fVar8;
  if ((0.0 < fVar8) && (fVar10 = SQRT(fVar8), NAN(SQRT(fVar8)))) {
    fVar10 = sqrtf(fVar8);
  }
  fVar9 = (float)FUN_00f01c20(plVar4);
  fVar8 = fVar9 * 0.125;
  if (fVar10 <= fVar9 * 0.125) {
    fVar8 = fVar10;
  }
  FUN_00f01c20(plVar4);
  plVar4 = param_1 + 0x71;
  if (fVar8 <= fVar7) {
    fVar7 = fVar8;
  }
  lVar5 = 8;
  local_80 = fVar7;
  fStack_7c = fVar7;
  do {
    FUN_00f13f18(plVar4,&local_80);
    lVar5 = lVar5 + -1;
    plVar4 = plVar4 + 0xb1;
  } while (lVar5 != 0);
  pfVar6 = (float *)(param_1 + 0x69);
  lVar5 = 0;
  do {
    if (lVar5 == 0) {
      fVar8 = local_80 * 0.5;
      fVar10 = 0.0;
      if ((uVar3 & 1) != 0) {
        fVar10 = (float)(**(code **)(*param_1 + 0x48))(param_1);
      }
      *pfVar6 = fVar11 * fVar8 + fVar10;
      *(undefined4 *)((long)param_1 + 0x34c) = 0;
    }
    else {
      uVar1 = (int)lVar5 - 1;
      fVar9 = *(float *)(param_1 + (ulong)uVar1 + 0x69);
      fVar8 = (float)(**(code **)(param_1[0x71] + 0x50))(param_1 + 0x71);
      fVar10 = *(float *)((long)param_1 + (ulong)uVar1 * 8 + 0x34c);
      *pfVar6 = fVar9 + fVar11 * (fVar7 * 0.15 + fVar8);
      pfVar6[1] = fVar10;
    }
    lVar5 = lVar5 + 1;
    pfVar6 = pfVar6 + 2;
  } while (lVar5 != 8);
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a38b48(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_70;
  float local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar3 = param_3 + 0x50;
  local_70 = (float)(**(code **)(*param_3 + 0x48))();
  local_6c = (float)param_2;
  FUN_00f13f18(plVar3,&local_70);
  fVar6 = (float)FUN_00f13e54(plVar3);
  fVar7 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar8 = (float)FUN_00f13e54(plVar3);
  fVar9 = fVar6 * 0.5 + (fVar7 - fVar8) * 0.5;
  fVar6 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar7 = (float)FUN_00f13e54(plVar3);
  fVar8 = *(float *)(param_3 + 0x58);
  fVar6 = (fVar6 - fVar7) * -0.5;
  if ((fVar8 != fVar9) || (fVar8 = *(float *)((long)param_3 + 0x2c4), fVar8 != fVar6)) {
    *(float *)(param_3 + 0x58) = fVar9;
    *(float *)((long)param_3 + 0x2c4) = fVar6;
    FUN_0091ada4(plVar3);
  }
  FUN_00f13e54(plVar3);
  fVar6 = fVar8;
  fVar7 = (float)FUN_00f13e54(plVar3);
  fVar8 = fVar8 * fVar7 * 0.125;
  fVar7 = fVar8;
  if ((0.0 < fVar8) && (fVar7 = SQRT(fVar8), NAN(SQRT(fVar8)))) {
    fVar7 = sqrtf(fVar8);
  }
  FUN_00f13e54(plVar3);
  fVar8 = fVar6 * 0.125;
  if (fVar7 <= fVar6 * 0.125) {
    fVar8 = fVar7;
  }
  fVar7 = (float)FUN_00f13e54(plVar3);
  if (fVar8 <= fVar7) {
    fVar7 = fVar8;
  }
  local_70 = fVar7;
  local_6c = fVar7;
  FUN_00f13e54(plVar3);
  fVar7 = fVar6 + fVar7 * -8.0;
  plVar3 = param_3 + 0x71;
  lVar4 = 8;
  do {
    FUN_00f13f18(plVar3,&local_70);
    lVar4 = lVar4 + -1;
    plVar3 = plVar3 + 0xb1;
  } while (lVar4 != 0);
  fVar7 = (float)NEON_fminnm(fVar7 / 7.0,0x41900000);
  lVar4 = 0;
  pfVar5 = (float *)((long)param_3 + 0x34c);
  do {
    if (lVar4 == 0) {
      fVar8 = 0.0;
      fVar9 = local_6c * -0.5;
    }
    else {
      uVar1 = (int)lVar4 - 1;
      fVar8 = *(float *)(param_3 + (ulong)uVar1 + 0x69);
      fVar9 = *(float *)((long)param_3 + (ulong)uVar1 * 8 + 0x34c);
      (**(code **)(param_3[0x71] + 0x50))(param_3 + 0x71);
      fVar9 = fVar9 - (fVar7 + fVar6);
    }
    lVar4 = lVar4 + 1;
    pfVar5[-1] = fVar8;
    *pfVar5 = fVar9;
    pfVar5 = pfVar5 + 2;
  } while (lVar4 != 8);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a38d54(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x23c) =
       *(uint *)(param_1 + 0x23c) & 0xfffffff0 | *(uint *)(param_1 + 0x23c) & 7 | (param_2 & 1) << 3
  ;
  return;
}




void FUN_00a38d68(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  FUN_00b89d24(param_1 + 0x1b8,param_2 & 1,param_3,param_4 & 1);
  return;
}




void FUN_00a38d78(long param_1)

{
  FUN_00b27e8c(param_1 + 0xd0);
  return;
}




void FUN_00a38d80(long param_1,uint param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x388;
  lVar1 = 8;
  do {
    FUN_00a378b4(param_1,param_2 & 1);
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0x588;
  } while (lVar1 != 0);
  return;
}




void FUN_00a38dc4(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined **local_160;
  undefined1 auStack_158 [40];
  long local_130;
  undefined8 local_110;
  void *local_108;
  byte local_100;
  void *local_f0;
  undefined4 local_d0;
  undefined4 local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  ulong local_90;
  void *local_88;
  byte local_80;
  undefined7 uStack_7f;
  void *local_70;
  undefined4 local_68;
  undefined8 local_64;
  
  lVar1 = tpidr_el0;
  lVar9 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_0093d830();
  if (((uVar4 & 1) != 0) && (plVar5 = *(long **)(param_1 + 0xb8), plVar5 != (long *)0x0)) {
    if (*(int *)(param_1 + 0xc0) == (int)plVar5[1]) {
      lVar6 = (**(code **)(*plVar5 + 0x10))();
      if ((lVar6 != 0) && (lVar7 = FUN_00d9ea08(lVar6), lVar7 != 0)) {
        iVar2 = FUN_00f04924(param_2);
        uVar4 = FUN_00d6c068(lVar7,iVar2);
        if ((uVar4 & 1) != 0) {
          lVar7 = FUN_00d6b570(lVar7,iVar2);
          uVar8 = FUN_00e6ce7c(*(undefined8 *)(lVar7 + 8),0);
          thunk_FUN_00e7051c(&local_a0,uVar8);
          uVar8 = FUN_00e6ce7c(*(undefined8 *)(lVar7 + 0x10),0);
          thunk_FUN_00e7051c(&local_b0,uVar8);
          FUN_00cb1fa8(&local_b0,iVar2,lVar6);
          uVar4 = 0;
          lVar6 = param_1 + 0x388;
          do {
            iVar3 = FUN_00a378f8(lVar6);
            if (iVar3 == iVar2) {
              FUN_00b26098(&local_160);
              local_130 = lVar6;
              uVar4 = FUN_00a37fe8(param_1);
              local_b8 = 3;
              if ((uVar4 & 1) != 0) {
                local_b8 = 1;
              }
              uVar4 = FUN_00a37fe8(param_1);
              local_d0 = 0;
              if ((uVar4 & 1) == 0) {
                local_d0 = 0x3f000000;
              }
              thunk_FUN_00e7051c(&local_90,&local_a0);
              FUN_008fcdb8(&local_80,&DAT_0320ffa8);
              local_68 = 0;
              local_64 = 0x41a00000;
              FUN_009c82b4(auStack_158,&local_90);
              if ((local_80 & 1) != 0) {
                operator_delete(local_70);
              }
              if (local_88 != (void *)0x0) {
                operator_delete__(local_88);
                local_90 = 0;
                local_88 = (void *)0x0;
              }
              thunk_FUN_00e7051c(&local_90,&local_b0);
              FUN_008fcdb8(&local_80,&DAT_0320ffa8);
              local_68 = 1;
              local_64 = 0x41a00000;
              FUN_009c82b4(auStack_158,&local_90);
              if ((local_80 & 1) != 0) {
                operator_delete(local_70);
              }
              if (local_88 != (void *)0x0) {
                operator_delete__(local_88);
                local_90 = 0;
                local_88 = (void *)0x0;
              }
              FUN_008fa54c(&local_90,"hudBuffsTooltip");
              FUN_00b28094(param_1 + 0xd0,&local_90,&local_160);
              if ((local_90 & 1) != 0) {
                operator_delete((void *)CONCAT71(uStack_7f,local_80));
              }
              local_160 = &PTR_FUN_027de7f0;
              if ((local_100 & 1) != 0) {
                operator_delete(local_f0);
              }
              if (local_108 != (void *)0x0) {
                operator_delete__(local_108);
                local_110 = 0;
                local_108 = (void *)0x0;
              }
              FUN_009c8464(auStack_158,1);
              break;
            }
            uVar4 = uVar4 + 1;
            lVar6 = lVar6 + 0x588;
          } while (uVar4 < 8);
          if (local_a8 != (void *)0x0) {
            operator_delete__(local_a8);
            local_b0 = 0;
            local_a8 = (void *)0x0;
          }
          if (local_98 != (void *)0x0) {
            operator_delete__(local_98);
            local_a0 = 0;
            local_98 = (void *)0x0;
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

