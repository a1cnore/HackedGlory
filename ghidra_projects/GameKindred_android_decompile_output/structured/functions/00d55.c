// functions/00d55 — 21 functions
#include "libGameKindred.h"




void FUN_00d55048(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d55058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0x20))();
    return;
  }
  return;
}




void FUN_00d55060(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x40))();
    (**(code **)(**(long **)(param_1 + 0x50) + 0x28))();
  }
  uVar3 = FUN_00ceab48();
  if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x60) != 0)) {
    FUN_00d6c6d8(*(long *)(param_1 + 0x60),PTR_s_onHostDieName_02bed588);
  }
  lVar4 = *(long *)(param_1 + 0x18);
  do {
    if (lVar4 == 0) {
LAB_00d550fc:
      if (*(long *)(param_1 + 0x60) != 0) {
        FUN_00d6b204();
      }
      FUN_00d53610(*(undefined8 *)(param_1 + 0x58));
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_00d60844();
      }
      local_58 = *(undefined4 *)(param_1 + 0x250);
      uVar6 = 0x10000;
      local_50 = *(undefined4 *)(param_1 + 600);
      local_54 = *(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254);
      lVar4 = param_1;
LAB_00d55188:
      do {
        do {
          lVar5 = lVar4;
          if ((lVar5 != param_1) &&
             (lVar4 = FUN_019865b4(*(undefined8 *)(lVar5 + 8),0xdc302c4), lVar4 != 0)) {
            (**(code **)(lVar4 + 8))(lVar5);
          }
          if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
            uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
            goto LAB_00d55188;
          }
          if ((uVar6 & 0xffff) == 0) goto LAB_00d551e0;
          lVar4 = *(long *)(lVar5 + 0x20);
        } while (*(long *)(lVar5 + 0x20) != 0);
        lVar5 = *(long *)(lVar5 + 0x10);
        if ((lVar5 == 0) || (uVar1 = uVar6 - 1 & 0xffff, uVar1 == 0)) {
LAB_00d551e0:
          FUN_00d531dc(*(undefined8 *)(param_1 + 0x58),&local_58);
          lVar4 = *(long *)(param_1 + 0x40);
          fVar7 = (*(float *)(lVar4 + 500) + 1.0) *
                  (*(float *)(lVar4 + 0x8c) +
                  *(float *)(lVar4 + 0x140) * (*(float *)(lVar4 + 0x2a8) + 1.0));
          if (DAT_031a9604 <= fVar7) {
            fVar7 = DAT_031a9604;
          }
          fVar8 = DAT_031a9544;
          if (DAT_031a9544 <= fVar7) {
            fVar8 = fVar7;
          }
          FUN_00da8f38(param_1,(int)fVar8);
          *(byte *)(param_1 + 0x303) = *(byte *)(param_1 + 0x303) & 0xfb;
          if (*(long *)(lVar2 + 0x28) == local_48) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar6 = uVar1 | uVar6 & 0xffff0000;
        while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
          if ((uVar6 - 1 & 0xffff) == 0) goto LAB_00d551e0;
          lVar5 = *(long *)(lVar5 + 0x10);
          uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
          if (lVar5 == 0) goto LAB_00d551e0;
        }
      } while( true );
    }
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_031a96c0) {
      FUN_01985ca8();
      goto LAB_00d550fc;
    }
    lVar4 = *(long *)(lVar4 + 0x20);
  } while( true );
}




void FUN_00d55294(long param_1)

{
  FUN_00d53848(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_00d5529c(long param_1)

{
  ulong uVar1;
  
  if ((((*(byte *)(param_1 + 0x2f4) >> 1 & 1) != 0) && (uVar1 = FUN_00ceab48(), (uVar1 & 1) != 0))
     && (uVar1 = FUN_00ced200(*(undefined4 *)(param_1 + 0x260)), (uVar1 & 1) != 0)) {
    FUN_009bc270(*(undefined4 *)(param_1 + 0x260));
    return;
  }
  return;
}




void FUN_00d552e4(void)

{
  return;
}




void FUN_00d552e8(void)

{
  return;
}




void FUN_00d552ec(long param_1)

{
  *(ushort *)(param_1 + 0x301) = *(ushort *)(param_1 + 0x301) | 0x4000;
  return;
}




void FUN_00d55300(void)

{
  return;
}




void FUN_00d55304(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar1 = *param_1 >> 10;
  if ((uVar1 & 0x1f) != 0) {
    uVar2 = 0;
    puVar4 = param_1 + 4;
    do {
      if (*puVar4 == param_2) goto LAB_00d55338;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_00d55338:
    if ((uVar1 & 0x1f) != 0) {
      uVar3 = 0;
      puVar4 = param_1 + 4;
      do {
        if (*puVar4 == param_3) {
          if (uVar2 == 0xffffffff) {
            return;
          }
          param_1[(long)(int)uVar2 * 0x1c + 5] =
               param_1[(long)(int)uVar2 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar3 & 0x1f));
          return;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 0x1c;
      } while (uVar3 < (uVar1 & 0x1f));
    }
  }
  return;
}




void FUN_00d5538c(ushort *param_1,uint param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong uVar7;
  
  uVar2 = *param_1;
  if ((uVar2 & 0x7c00) != 0) {
    uVar3 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_00d553d4;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 < (uVar2 >> 10 & 0x1f));
  }
  uVar3 = 0x1f;
LAB_00d553d4:
  uVar1 = uVar2 & 0x1f;
  uVar4 = (ulong)uVar1;
  if (uVar1 == 0x1f) {
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
  }
  else {
    if (uVar3 == uVar1) {
      return;
    }
    if ((1 << (ulong)(uVar3 & 0x1f) & (uint)param_1[uVar4 * 0x1c + 5]) == 0) {
      return;
    }
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar4 * 0x1c + 0x18);
    uVar5 = *(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) & 1;
    if (uVar5 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar5 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 200) +
                                ((long)*(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) >> 1)));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar2 = *param_1;
    }
  }
  *param_1 = (ushort)uVar7 | uVar2 & 0xfc00 | 0x3e0;
  if ((int)uVar7 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar7 * 0x1c + 0x10);
    uVar4 = *(ulong *)(param_1 + uVar7 * 0x1c + 0x14) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 200) +
                                ((long)*(ulong *)(param_1 + uVar7 * 0x1c + 0x14) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00d55440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_00d554c4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  DAT_02c09220 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02c09220 + 1;
  lVar2 = param_1 + (ulong)DAT_02c09220 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_00d5eb04;
  *(code **)(lVar2 + 0xb8) = FUN_00d5eb28;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 200;
  *(uint *)(lVar2 + 0xa4) = DAT_02c09220;
  *(undefined4 *)(lVar2 + 0xa8) = 0x308;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  FUN_01986780(param_1,4,FUN_00d55584,0);
  FUN_019867cc(param_1,0x9fa20a9e,FUN_00d555a8,0);
  uVar1 = FUN_019888d4();
  FUN_01989130(uVar1,PTR_DAT_02bead70,FUN_00d55664);
  return;
}




void FUN_00d55584(long param_1)

{
  FUN_00d556dc();
  FUN_00d5574c(param_1 + 0x88);
  return;
}




void FUN_00d55664(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_01988738(DAT_02c09220,0);
  *(long *)(lVar2 + 0x38) = param_3;
  thunk_FUN_00d9ff34(local_40,*(undefined8 *)(param_3 + 0x20));
  *(undefined4 *)(lVar2 + 0x270) = local_40[0];
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d556dc(long param_1)

{
  undefined3 *puVar1;
  undefined3 uVar2;
  float fVar3;
  
  fVar3 = (float)FUN_01988c78();
  fVar3 = *(float *)(param_1 + 0x2f0) - fVar3;
  *(float *)(param_1 + 0x2f0) = fVar3;
  if (fVar3 <= 0.0) {
    puVar1 = (undefined3 *)(param_1 + 0x301);
    uVar2 = *puVar1;
    if ((*(byte *)(param_1 + 0x303) & 1) != 0) {
      FUN_00d5d484(param_1);
      uVar2 = *puVar1;
    }
    *(short *)puVar1 = (short)uVar2;
    *(byte *)(param_1 + 0x303) = (byte)((uint3)uVar2 >> 0x10) & 0xfe;
  }
  return;
}




void FUN_00d5574c(ushort *param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 200) +
                                ((long)*(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00d5578c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_00d55794(long param_1,undefined4 *param_2,uint param_3)

{
  float fVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 0x250);
  fVar1 = *(float *)(param_1 + 0x254);
  param_2[1] = fVar1;
  param_2[2] = *(undefined4 *)(param_1 + 600);
  if ((param_3 & 1) == 0) {
    param_2[1] = *(float *)(param_1 + 0x2ec) + fVar1;
  }
  return;
}




void FUN_00d557c4(long param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x240);
  *param_2 = fVar3;
  fVar2 = *(float *)(param_1 + 0x244);
  param_2[1] = fVar2;
  fVar1 = *(float *)(param_1 + 0x248);
  fVar3 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  param_2[2] = fVar1;
  if (1e-08 <= fVar3) {
    fVar2 = SQRT(fVar3);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(fVar3);
    }
    *(ulong *)param_2 =
         CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) / fVar2,
                  (float)*(undefined8 *)param_2 / fVar2);
    param_2[2] = param_2[2] / fVar2;
  }
  else {
    param_2[2] = *(float *)(param_3 + 1);
    *(undefined8 *)param_2 = *param_3;
  }
  return;
}




undefined1 FUN_00d55870(long param_1)

{
  return *(undefined1 *)(param_1 + 0x264);
}




void FUN_00d55878(long param_1,undefined8 *param_2,float *param_3)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  float local_8c;
  undefined8 uStack_88;
  long local_78;
  
  fVar5 = DAT_03218f80;
  fVar4 = DAT_03218f7c;
  fVar3 = DAT_03218f78;
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  fVar10 = DAT_03218f7c * param_3[2] - DAT_03218f80 * param_3[1];
  fVar14 = DAT_03218f80 * *param_3 - DAT_03218f78 * param_3[2];
  fVar12 = DAT_03218f78 * param_3[1] - DAT_03218f7c * *param_3;
  fVar8 = fVar12 * fVar12 + fVar10 * fVar10 + fVar14 * fVar14;
  fVar9 = (float)DAT_03218f68;
  fVar15 = DAT_03218f70;
  fVar7 = DAT_03218f68._4_4_;
  if (1e-08 <= fVar8) {
    fVar7 = SQRT(fVar8);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar8);
    }
    fVar9 = fVar10 / fVar7;
    fVar15 = fVar12 / fVar7;
    fVar7 = fVar14 / fVar7;
  }
  fVar13 = fVar5 * fVar7 - fVar4 * fVar15;
  fVar11 = fVar3 * fVar15 - fVar5 * fVar9;
  fVar16 = fVar4 * fVar9 - fVar3 * fVar7;
  fVar14 = fVar16 * fVar16 + fVar13 * fVar13 + fVar11 * fVar11;
  fVar8 = DAT_03218f8c;
  fVar10 = DAT_03218f88;
  fVar12 = DAT_03218f90;
  if (1e-08 <= fVar14) {
    fVar12 = SQRT(fVar14);
    if (NAN(fVar12)) {
      fVar12 = sqrtf(fVar14);
    }
    fVar8 = fVar11 / fVar12;
    fVar10 = fVar13 / fVar12;
    fVar12 = fVar16 / fVar12;
  }
  fVar14 = *(float *)(*(long *)(param_1 + 0x38) + 100);
  uVar1 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x250) = *param_2;
  fVar14 = fVar14 + *(float *)(param_1 + 0x2e8);
  *(undefined4 *)(param_1 + 600) = uVar1;
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0x3f800000;
  *(float *)(param_1 + 0x240) = fVar10 * fVar14;
  *(float *)(param_1 + 0x244) = fVar8 * fVar14;
  *(float *)(param_1 + 0x248) = fVar12 * fVar14;
  uStack_88 = *(undefined8 *)(param_1 + 600);
  uStack_98 = *(undefined8 *)(param_1 + 0x248);
  local_a0 = *(undefined8 *)(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(float *)(param_1 + 0x220) = fVar9 * fVar14;
  *(float *)(param_1 + 0x230) = fVar3 * fVar14;
  *(float *)(param_1 + 0x224) = fVar7 * fVar14;
  *(float *)(param_1 + 0x234) = fVar4 * fVar14;
  *(float *)(param_1 + 0x228) = fVar15 * fVar14;
  *(float *)(param_1 + 0x238) = fVar5 * fVar14;
  uStack_a8 = *(undefined8 *)(param_1 + 0x238);
  local_b0 = *(undefined8 *)(param_1 + 0x230);
  local_8c = (float)((ulong)*(undefined8 *)(param_1 + 0x250) >> 0x20);
  uStack_b8 = *(undefined8 *)(param_1 + 0x228);
  local_c0 = *(undefined8 *)(param_1 + 0x220);
  _uStack_90 = CONCAT44(*(float *)(param_1 + 0x2ec) + local_8c,(int)*(undefined8 *)(param_1 + 0x250)
                       );
  plVar6 = *(long **)(param_1 + 0x50);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x160))(plVar6,&local_c0);
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d55ac4(long param_1,int param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  FUN_00d55e2c();
  uVar2 = FUN_01985d44(param_1,DAT_031a9664);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  FUN_00d5f478(0,uVar2,0x28,0,*(undefined4 *)(param_1 + 0x260),1);
  FUN_00d566dc(param_1,param_3);
  FUN_00d56aa4(param_1,1);
  lVar3 = *(long *)(param_1 + 0x40);
  fVar7 = (*(float *)(lVar3 + 0x1a0) + 1.0) *
          (*(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0));
  if (DAT_031a95b0 <= fVar7) {
    fVar7 = DAT_031a95b0;
  }
  fVar8 = DAT_031a94f0;
  if (DAT_031a94f0 <= fVar7) {
    fVar8 = fVar7;
  }
  FUN_00d5f70c(fVar8,lVar3,0);
  lVar3 = *(long *)(param_1 + 0x40);
  fVar7 = (*(float *)(lVar3 + 0x1a8) + 1.0) *
          (*(float *)(lVar3 + 0x40) + *(float *)(lVar3 + 0xf4) * (*(float *)(lVar3 + 0x25c) + 1.0));
  if (DAT_031a95b8 <= fVar7) {
    fVar7 = DAT_031a95b8;
  }
  fVar8 = DAT_031a94f8;
  if (DAT_031a94f8 <= fVar7) {
    fVar8 = fVar7;
  }
  FUN_00d5f70c(fVar8,lVar3,2);
  plVar4 = (long *)FUN_009a8720(param_1,*(undefined8 *)(param_1 + 0x38));
  *(long **)(param_1 + 0x50) = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x160))(plVar4,param_1 + 0x220);
  }
  FUN_00d55878(param_1,param_5,param_6);
  if ((*(uint *)(param_1 + 0x2f4) & 0x22000) == 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    uVar2 = FUN_01985d44(param_1,DAT_0314f724);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    FUN_00d5fe08(uVar2,*(long *)(param_1 + 0x38) + 0x1e0,param_4);
  }
  if (0.0 < *(float *)(*(long *)(param_1 + 0x38) + 0x140)) {
    uVar2 = FUN_01985d44(param_1,DAT_02c7bf1c);
    FUN_00d6d5e0(uVar2,&DAT_01bd11d4,0,0,0,1);
    FUN_00d6e2d0(*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x140),uVar2);
    FUN_00d6e510(uVar2,1);
  }
  uVar2 = FUN_01985d44(param_1,DAT_02e3ef78);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  FUN_00d529bc(uVar2,*(long *)(param_1 + 0x38) + 0x88);
  uVar2 = FUN_01985d44(param_1,DAT_02c7bf48);
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  if ((*(byte *)(param_1 + 0x2f4) & 1) != 0) {
    uVar2 = FUN_01985d44(param_1,DAT_03130aa8);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    FUN_00ceace8();
    uVar5 = FUN_00ceb05c();
    if ((uVar5 & 1) != 0) {
      for (lVar3 = *(long *)(param_1 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
        if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02c7bf38) goto LAB_00d55d50;
      }
      lVar3 = FUN_01985d44(param_1);
      if (lVar3 != 0) {
        FUN_00d7b100(lVar3,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x90));
      }
    }
LAB_00d55d50:
    uVar2 = FUN_01985d44(param_1,DAT_03133530);
    FUN_00ceace8();
    uVar5 = FUN_00ceb094();
    if ((uVar5 & 1) == 0) {
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x198);
      uVar1 = FUN_00ced598(*(undefined4 *)(param_1 + 0x260));
      FUN_00d77e28(uVar2,uVar6,uVar1 & 1);
    }
    if ((*(long *)(param_1 + 0x50) != 0) &&
       (uVar5 = FUN_00ced200(*(undefined4 *)(param_1 + 0x260)), (uVar5 & 1) != 0)) {
      plVar4 = *(long **)(param_1 + 0x50);
      uVar2 = FUN_00ced998(*(undefined4 *)(param_1 + 0x260));
      (**(code **)(*plVar4 + 0x188))(plVar4,uVar2);
    }
  }
  uVar2 = FUN_01985d44(param_1,DAT_0312ec00);
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  if ((param_2 == 2) || (param_2 == 1)) {
    uVar2 = 3;
  }
  else {
    if (param_2 != 0) goto LAB_00d55e0c;
    uVar2 = 1;
  }
  FUN_00d5538c(param_1 + 0x88,uVar2,0,0);
LAB_00d55e0c:
  FUN_009d1030(param_1);
  return;
}




void FUN_00d55e2c(long param_1)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  bool bVar8;
  int local_90 [2];
  int local_88 [2];
  int local_80 [2];
  int local_78 [2];
  int local_70 [2];
  int local_68 [2];
  int local_60 [2];
  int local_58 [2];
  int local_50 [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (**(int **)(param_1 + 0x38) == 0) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 1;
  }
  uVar6 = FUN_00ced200(*(undefined4 *)(param_1 + 0x260));
  if ((uVar6 & 1) != 0) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 2;
  }
  if (**(int **)(param_1 + 0x38) == 4) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 4;
  }
  thunk_FUN_00d9ff34(local_50,"Kraken (Captured)");
  iVar7 = *(int *)(param_1 + 0x270);
  piVar1 = (int *)(param_1 + 0x270);
  if (iVar7 == local_50[0]) {
LAB_00d55f04:
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 8;
  }
  else {
    thunk_FUN_00d9ff34(local_58,"5v5_Blackclaw_Captured");
    iVar7 = *piVar1;
    if (iVar7 == local_58[0]) goto LAB_00d55f04;
    thunk_FUN_00d9ff34(local_60,"HF_Kraken_Captured");
    iVar7 = *piVar1;
    if (iVar7 == local_60[0]) goto LAB_00d55f04;
  }
  if (**(int **)(param_1 + 0x38) == 1) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x10;
    thunk_FUN_00d9ff34(local_50,"LeadMinion");
    if (((*(int *)(param_1 + 0x270) == local_50[0]) ||
        (thunk_FUN_00d9ff34(local_58,"5v5_Minion_Siege"), *piVar1 == local_58[0])) ||
       (thunk_FUN_00d9ff34(local_60,"HF_Minion_Siege"), *piVar1 == local_60[0])) {
      *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x20;
    }
    thunk_FUN_00d9ff34(local_50,"5v5_Minion_Captain");
    iVar7 = *piVar1;
    if (iVar7 != local_50[0]) {
      thunk_FUN_00d9ff34(local_58,"HF_Minion_Captain");
      iVar7 = *piVar1;
      if (iVar7 != local_58[0]) goto LAB_00d55fe4;
    }
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40;
  }
LAB_00d55fe4:
  if (**(int **)(param_1 + 0x38) == 5) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x100;
    thunk_FUN_00d9ff34(local_50,"5v5_HealingTreant");
    if (((((*(int *)(param_1 + 0x270) == local_50[0]) ||
          (thunk_FUN_00d9ff34(local_58,"5v5_GoldTreant"), *piVar1 == local_58[0])) ||
         ((thunk_FUN_00d9ff34(local_60,"5v5_WeaponTreant"), *piVar1 == local_60[0] ||
          ((thunk_FUN_00d9ff34(local_68,"5v5_CrystalTreant"), *piVar1 == local_68[0] ||
           (thunk_FUN_00d9ff34(local_70,"JungleMinion_ElderTreeEnt"), *piVar1 == local_70[0]))))))
        || (thunk_FUN_00d9ff34(local_78,"JungleMinion_TreeEnt"), *piVar1 == local_78[0])) ||
       (((thunk_FUN_00d9ff34(local_80,"HF_Treant"), *piVar1 == local_80[0] ||
         (thunk_FUN_00d9ff34(local_88,"HF_ElderTreant"), *piVar1 == local_88[0])) ||
        (thunk_FUN_00d9ff34(local_90,"TestDummy_Jungle"), *piVar1 == local_90[0])))) {
      *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x80;
    }
    thunk_FUN_00d9ff34(local_50,"TestDummy_Lane");
    iVar7 = *piVar1;
    if (iVar7 == local_50[0]) {
      *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x800000;
    }
  }
  if (**(int **)(param_1 + 0x38) == 9) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x200;
  }
  if (iVar7 == DAT_0314fd94) {
LAB_00d561a8:
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x400;
  }
  else {
    thunk_FUN_00d9ff34(local_50,"HF_CrystalMiner");
    iVar7 = *piVar1;
    if (iVar7 == local_50[0]) goto LAB_00d561a8;
  }
  if ((iVar7 == DAT_0314fd9c) || (iVar7 == DAT_0314fda4)) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x800;
  }
  uVar6 = FUN_00e5de08(**(undefined4 **)(param_1 + 0x38),0xc);
  if ((uVar6 & 1) != 0) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x1000;
  }
  if (**(int **)(param_1 + 0x38) == 3) {
    thunk_FUN_00d9ff34(local_50,"VainNode");
    uVar5 = 0x4000;
    if (*(int *)(param_1 + 0x270) != local_50[0]) {
      uVar5 = 0x2000;
    }
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | uVar5;
  }
  iVar7 = **(int **)(param_1 + 0x38);
  if (iVar7 == 2) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x8000;
  }
  uVar6 = FUN_00e5de08(iVar7,0x21c);
  if ((uVar6 & 1) != 0) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x10000;
  }
  if (*(char *)(*(undefined4 **)(param_1 + 0x38) + 0x7f) != '\0') {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x20000;
  }
  uVar6 = FUN_00e5de08(**(undefined4 **)(param_1 + 0x38),0x2bf);
  if ((uVar6 & 1) != 0) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40000;
  }
  thunk_FUN_00d9ff34(local_50,"ScoutTrap");
  if (((*piVar1 == local_50[0]) || (thunk_FUN_00d9ff34(local_58,"FlareGun"), *piVar1 == local_58[0])
      ) || (thunk_FUN_00d9ff34(local_60,"VisionTotem"), *piVar1 == local_60[0])) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x80000;
    bVar4 = true;
LAB_00d56324:
    bVar8 = bVar4;
    bVar3 = true;
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x100000;
  }
  else {
    thunk_FUN_00d9ff34(local_50,"Ylva_Trap");
    if (*piVar1 == local_50[0]) {
      bVar4 = false;
      goto LAB_00d56324;
    }
    thunk_FUN_00d9ff34(local_58,"Ylva_Trap_ShatteredFang");
    bVar3 = false;
    bVar8 = false;
    bVar4 = false;
    if (*piVar1 == local_58[0]) goto LAB_00d56324;
  }
  uVar6 = FUN_00e5de08(**(undefined4 **)(param_1 + 0x38),0x2a3);
  if ((!bVar3) && ((uVar6 & 1) != 0)) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x200000;
  }
  uVar6 = FUN_00e5de08(**(undefined4 **)(param_1 + 0x38),0x23d);
  if ((uVar6 & 1) != 0) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x400000;
  }
  uVar6 = FUN_00e5de08(**(undefined4 **)(param_1 + 0x38),0x82);
  if ((uVar6 & 1) != 0) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x800000;
  }
  uVar6 = FUN_00e5de08(**(undefined4 **)(param_1 + 0x38),0x1c);
  if ((uVar6 & 1) != 0) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x1000000;
  }
  uVar6 = FUN_00e5de08(**(undefined4 **)(param_1 + 0x38),0x21d);
  if ((uVar6 & 1) != 0) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x2000000;
  }
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x61) != '\0') {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x4000000;
  }
  thunk_FUN_00d9ff34(local_50,"Shop");
  if (((*piVar1 == local_50[0]) ||
      (thunk_FUN_00d9ff34(local_58,"Neutral_JungleMinion_Store"), *piVar1 == local_58[0])) ||
     (thunk_FUN_00d9ff34(local_60,"Neutral_JungleMinion_StoreCenter"), *piVar1 == local_60[0])) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x8000000;
  }
  thunk_FUN_00d9ff34(local_50,"MinimapIconActor_SpawnCamp");
  if (((*piVar1 == local_50[0]) ||
      (thunk_FUN_00d9ff34(local_58,"MinimapIconActor_BuffCamp"), *piVar1 == local_58[0])) ||
     ((thunk_FUN_00d9ff34(local_60,"MinimapIconActor_Ghostwing"), *piVar1 == local_60[0] ||
      ((thunk_FUN_00d9ff34(local_68,"MinimapIconActor_Blackclaw"), *piVar1 == local_68[0] ||
       (thunk_FUN_00d9ff34(local_70,"MinimapIconActor_Kraken"), *piVar1 == local_70[0])))))) {
    bVar4 = true;
  }
  else {
    thunk_FUN_00d9ff34(local_78,"MinimapIconActor_GoldMiner");
    bVar4 = *piVar1 == local_78[0];
  }
  if (**(int **)(param_1 + 0x38) == 8) {
    if (!(bool)(bVar8 | bVar4)) goto LAB_00d5653c;
  }
  else if (**(int **)(param_1 + 0x38) == 5) {
    FUN_00ceace8();
    uVar5 = FUN_00ceb0c4();
    if (!bVar8 && (!bVar4 && ((uVar5 ^ 0xffffffff) & 1) == 0)) goto LAB_00d5653c;
  }
  *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x10000000;
LAB_00d5653c:
  if (!(bool)(bVar3 | **(int **)(param_1 + 0x38) != 7)) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x20000000;
  }
  thunk_FUN_00d9ff34(local_50,"Kraken (Neutral)");
  if ((((*piVar1 == local_50[0]) ||
       (thunk_FUN_00d9ff34(local_58,"Kraken (Captured)"), *piVar1 == local_58[0])) ||
      (thunk_FUN_00d9ff34(local_60,"HF_Kraken_Jungle"), *piVar1 == local_60[0])) ||
     (thunk_FUN_00d9ff34(local_68,"HF_Kraken_Captured"), *piVar1 == local_68[0])) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40000000;
  }
  if ((**(int **)(param_1 + 0x38) == 0) ||
     (thunk_FUN_00d9ff34(local_50,"FortressMinion"), *piVar1 == local_50[0])) {
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x80000000;
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

