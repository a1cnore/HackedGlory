// functions/00d58 — 32 functions
#include "libGameKindred.h"




void FUN_00d58004(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_38;
  float fStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)((long)param_2 + 4);
  plVar2 = *(long **)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 1);
  if (plVar2 != (long *)0x0) {
    if (0.0 < *(float *)(param_1 + 0x2ec)) {
      uVar3 = *param_2;
      fStack_34 = (float)((ulong)uVar3 >> 0x20);
      local_30 = *(undefined4 *)(param_2 + 1);
      param_2 = (undefined8 *)&local_38;
      _local_38 = CONCAT44(*(float *)(param_1 + 0x2ec) + fStack_34,(int)uVar3);
    }
    (**(code **)(*plVar2 + 0x168))(plVar2,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d580a0(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 600);
  *param_2 = *(undefined4 *)(param_1 + 0x250);
  param_2[1] = uVar1;
  return;
}




void FUN_00d580b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *(undefined8 *)(param_1 + 0x250);
  local_30 = *(undefined4 *)(param_1 + 600);
  FUN_00d55878(param_1,&local_38,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d5810c(long param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x240);
  *param_2 = fVar2;
  fVar1 = *(float *)(param_1 + 0x248);
  fVar2 = fVar1 * fVar1 + fVar2 * fVar2;
  param_2[1] = fVar1;
  if (1.1920929e-06 <= fVar2) {
    fVar1 = SQRT(fVar2);
    if (NAN(fVar1)) {
      fVar1 = sqrtf(fVar2);
    }
    *(ulong *)param_2 =
         CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) / fVar1,
                  (float)*(undefined8 *)param_2 / fVar1);
  }
  else {
    *(undefined8 *)param_2 = *param_3;
  }
  return;
}




void FUN_00d58198(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x250);
  param_2[7] = *(undefined8 *)(param_1 + 600);
  param_2[6] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x240);
  param_2[5] = *(undefined8 *)(param_1 + 0x248);
  param_2[4] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x230);
  param_2[3] = *(undefined8 *)(param_1 + 0x238);
  param_2[2] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x220);
  param_2[1] = *(undefined8 *)(param_1 + 0x228);
  *param_2 = uVar1;
  return;
}




void FUN_00d581bc(long param_1,undefined4 *param_2)

{
  float fVar1;
  long lVar2;
  undefined4 uVar3;
  
  *param_2 = *(undefined4 *)(param_1 + 0x250);
  fVar1 = *(float *)(param_1 + 0x254);
  param_2[1] = fVar1;
  param_2[2] = *(undefined4 *)(param_1 + 600);
  param_2[1] = *(float *)(param_1 + 0x2ec) + fVar1;
  lVar2 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_031a9670) break;
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar3 = FUN_00d61c4c();
  param_2[1] = uVar3;
  return;
}




void FUN_00d58234(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x70);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x78) == (int)plVar1[1]) {
      uVar2 = (**(code **)(*plVar1 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x70) = 0;
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x78) = DAT_03214ce8;
    }
  }
  FUN_00d76b90(uVar2,param_2);
  return;
}




void FUN_00d58298(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined4 local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  plVar5 = *(long **)(param_1 + 0x70);
  uVar6 = 0;
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x78) == (int)plVar5[1]) {
      uVar6 = (**(code **)(*plVar5 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x70) = 0;
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0x78) = DAT_03214ce8;
    }
  }
  uVar7 = FUN_00d76bfc(uVar6,param_2,param_3);
  uVar6 = 0;
  if ((uVar7 & 1) != 0) {
    fVar11 = *(float *)(param_1 + 0x240);
    fVar12 = *(float *)(param_1 + 0x244);
    fVar14 = *(float *)(param_1 + 0x248);
    uVar6 = *(undefined8 *)(param_1 + 0x250);
    uVar1 = *(undefined4 *)(param_1 + 600);
    fVar9 = fVar11 * fVar11 + fVar12 * fVar12 + fVar14 * fVar14;
    fVar8 = SQRT(fVar9);
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar9);
    }
    fVar4 = DAT_03218f80;
    fVar3 = DAT_03218f7c;
    fVar9 = DAT_03218f78;
    fVar13 = (fVar14 / fVar8) * DAT_03218f7c - (fVar12 / fVar8) * DAT_03218f80;
    fVar14 = (fVar11 / fVar8) * DAT_03218f80 - (fVar14 / fVar8) * DAT_03218f78;
    fVar12 = (fVar12 / fVar8) * DAT_03218f78 - (fVar11 / fVar8) * DAT_03218f7c;
    fVar11 = fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14;
    fVar8 = SQRT(fVar11);
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar11);
    }
    fVar13 = fVar13 / fVar8;
    fVar14 = fVar14 / fVar8;
    fVar12 = fVar12 / fVar8;
    fVar10 = fVar4 * fVar14 - fVar3 * fVar12;
    fVar16 = fVar9 * fVar12 - fVar4 * fVar13;
    fVar15 = fVar3 * fVar13 - fVar9 * fVar14;
    fVar11 = fVar15 * fVar15 + fVar10 * fVar10 + fVar16 * fVar16;
    fVar8 = SQRT(fVar11);
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar11);
    }
    local_bc = 0;
    local_ac = 0;
    local_9c = 0;
    uStack_8c = 0x3f800000;
    local_a0 = *(float *)(*(long *)(param_1 + 0x38) + 100) + *(float *)(param_1 + 0x2e8);
    local_c8 = fVar13 * local_a0;
    fStack_c4 = fVar14 * local_a0;
    local_c0 = fVar12 * local_a0;
    local_b8 = fVar9 * local_a0;
    fStack_b4 = fVar3 * local_a0;
    local_b0 = fVar4 * local_a0;
    local_a8 = (fVar10 / fVar8) * local_a0;
    fStack_a4 = (fVar16 / fVar8) * local_a0;
    local_a0 = (fVar15 / fVar8) * local_a0;
    local_98 = uVar6;
    local_90 = uVar1;
    FUN_009b3960(param_3,param_3,&local_c8);
    uVar6 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}




void FUN_00d584f4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_68 [48];
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00d58298(param_1,param_2,auStack_68);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}




void FUN_00d58560(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_00d6bbac(*(long *)(param_1 + 0x60),DAT_0315cfa4,0);
    return;
  }
  return;
}




bool FUN_00d58580(long param_1)

{
  return ((*(ushort *)(param_1 + 0x2f8) ^ 0xffff) & 0x51f) == 0;
}




bool FUN_00d58594(long param_1)

{
  return ((*(ushort *)(param_1 + 0x2f8) ^ 0xffff) & 0x23) == 0;
}




void FUN_00d585a8(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_00d6bbac(*(long *)(param_1 + 0x60),DAT_0315c930,0);
    return;
  }
  return;
}




bool FUN_00d585c8(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  FUN_00ceace8();
  uVar2 = FUN_00ceaf74();
  bVar1 = false;
  if ((uVar2 & 1) != 0) {
    bVar1 = (*(byte *)(param_1 + 0x2f9) & 0x40) == 0;
  }
  return bVar1;
}




void FUN_00d58604(long param_1)

{
  FUN_00d53a70(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_00d5860c(long param_1)

{
  FUN_00d52f74(*(undefined8 *)(param_1 + 0x58));
  return;
}




undefined8 FUN_00d58614(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  iVar1 = FUN_00d5359c(*(undefined8 *)(param_1 + 0x58));
  if (iVar1 != 0) {
    uVar5 = 0;
    do {
      uVar3 = FUN_00d54528(*(undefined8 *)(param_1 + 0x58),uVar5);
      if ((uVar3 & 1) != 0) {
        uVar4 = FUN_00d5867c(param_1,uVar5);
        return uVar4;
      }
      uVar5 = uVar5 + 1;
      uVar2 = FUN_00d5359c(*(undefined8 *)(param_1 + 0x58));
    } while (uVar5 < uVar2);
  }
  return 0;
}




undefined8 FUN_00d5867c(long param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_00d52fe0(*(undefined8 *)(param_1 + 0x58));
  uVar5 = 0;
  if ((uVar4 & 1) != 0) {
    uVar4 = FUN_00d53604(*(undefined8 *)(param_1 + 0x58),param_2);
    if ((uVar4 & 1) == 0) {
      uVar1 = *(ushort *)(param_1 + 0x88) & 0x1f;
      if ((uVar1 != 0x1f) && (*(ushort *)(param_1 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 2)) {
        return 0;
      }
      uVar4 = FUN_00d54770(*(undefined8 *)(param_1 + 0x58),param_2);
      if ((uVar4 & 1) == 0) {
        uVar1 = *(ushort *)(param_1 + 0x88) & 0x1f;
        if (((uVar1 != 0x1f) && (*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x90) == 5)) &&
           (uVar4 = FUN_00d547ac(*(undefined8 *)(param_1 + 0x58),param_2), (uVar4 & 1) == 0)) {
          return 0;
        }
        uVar2 = *(ushort *)(param_1 + 0x2f8);
        if ((~uVar2 & 0x1e) == 0) {
          uVar4 = FUN_00d547c0(*(undefined8 *)(param_1 + 0x58),param_2);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          uVar2 = *(ushort *)(param_1 + 0x2f8);
        }
        if ((uVar2 >> 2 & 1) != 0) {
          uVar4 = FUN_00d54528(*(undefined8 *)(param_1 + 0x58),param_2);
          if ((uVar4 & 1) != 0) {
            return 0;
          }
          uVar2 = *(ushort *)(param_1 + 0x2f8);
        }
        if ((((uVar2 >> 3 & 1) != 0) &&
            (uVar4 = FUN_00d54534(*(undefined8 *)(param_1 + 0x58),param_2), (uVar4 & 1) != 0)) &&
           (uVar4 = FUN_00d547d4(*(undefined8 *)(param_1 + 0x58),param_2), (uVar4 & 1) == 0)) {
          return 0;
        }
        if ((((*(byte *)(param_1 + 0x2f8) >> 5 & 1) != 0) &&
            (uVar4 = FUN_00d54534(*(undefined8 *)(param_1 + 0x58),param_2), (uVar4 & 1) != 0)) &&
           (uVar4 = FUN_00d547e8(*(undefined8 *)(param_1 + 0x58),param_2), (uVar4 & 1) == 0)) {
          return 0;
        }
        uVar4 = FUN_00d585c8(param_1);
        if (((uVar4 & 1) == 0) &&
           (iVar3 = FUN_00d54968(*(undefined8 *)(param_1 + 0x58)), iVar3 == param_2)) {
          return 0;
        }
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}




undefined8 FUN_00d58810(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar2 = FUN_00d5359c(*(undefined8 *)(param_1 + 0x58));
  if ((int)uVar2 != 0) {
    uVar4 = 0;
    do {
      uVar3 = FUN_00d54528(*(undefined8 *)(param_1 + 0x58),uVar4);
      if (((uVar3 & 1) != 0) &&
         (uVar3 = FUN_00d53a70(*(undefined8 *)(param_1 + 0x58),uVar4), (uVar3 & 1) != 0)) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      uVar1 = FUN_00d5359c(*(undefined8 *)(param_1 + 0x58));
    } while (uVar4 < uVar1);
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_00d5887c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00d54258(*(undefined8 *)(param_1 + 0x58));
  if (iVar1 == -1) {
    return 0;
  }
  uVar2 = FUN_00d5867c(param_1,iVar1);
  return uVar2;
}




void FUN_00d588cc(long param_1)

{
  FUN_00d5401c(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_00d588d4(long param_1,undefined4 *param_2)

{
  FUN_00d5412c(*(undefined8 *)(param_1 + 0x58),*param_2);
  return;
}




void FUN_00d588e0(long param_1,undefined4 *param_2)

{
  FUN_00d5412c(*(undefined8 *)(param_1 + 0x58),*param_2);
  return;
}




void FUN_00d588ec(long param_1)

{
  FUN_00d53920(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_00d588f4(long param_1)

{
  FUN_00d530b0(*(undefined8 *)(param_1 + 0x58));
  return;
}




void FUN_00d588fc(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = param_2 & 0xffffffff;
  FUN_00da8d50(param_1,param_2,0,0);
  uVar2 = FUN_00d5454c(*(undefined8 *)(param_1 + 0x58),uVar5);
  if ((uVar2 & 1) != 0) {
    FUN_00d58a04(param_1);
  }
  FUN_00d530e8(*(undefined8 *)(param_1 + 0x58),uVar5);
  uVar6 = 0x10000;
  lVar3 = param_1;
LAB_00d58994:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_1) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x43ba06dd), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4,uVar5);
      }
      if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
        goto LAB_00d58994;
      }
      if ((uVar6 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((lVar4 == 0) || (uVar1 = uVar6 - 1 & 0xffff, uVar1 == 0)) {
      return;
    }
    uVar6 = uVar1 | uVar6 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar6 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_00d58a04(long param_1)

{
  uint uVar1;
  
  FUN_00da2cc4();
  uVar1 = *(ushort *)(param_1 + 0x88) & 0x1f;
  if ((uVar1 != 0x1f) && (*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x90) == 2)) {
    FUN_00d5538c(param_1 + 0x88,1,0,0);
    return;
  }
  return;
}




void FUN_00d58a68(long param_1,undefined4 param_2,long *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  
  plVar5 = (long *)*param_3;
  if (plVar5 == (long *)0x0) {
    uVar2 = 0;
  }
  else if ((int)param_3[1] == (int)plVar5[1]) {
    uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  else {
    *param_3 = 0;
    uVar2 = 0;
    *(undefined4 *)(param_3 + 1) = DAT_03214ce8;
  }
  FUN_00da8d50(param_1,param_2,uVar2,0);
  uVar3 = FUN_00d5454c(*(undefined8 *)(param_1 + 0x58),param_2);
  if ((uVar3 & 1) != 0) {
    FUN_00d58a04(param_1);
  }
  FUN_00d53880(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
  FUN_00d530e8(*(undefined8 *)(param_1 + 0x58),param_2);
  uVar7 = 0x10000;
  lVar4 = param_1;
LAB_00d58b68:
  do {
    do {
      lVar6 = lVar4;
      if ((lVar6 != param_1) &&
         (lVar4 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0x43ba06dd), lVar4 != 0)) {
        (**(code **)(lVar4 + 8))(lVar6,param_2);
      }
      if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar4 = *(long *)(lVar6 + 0x18), lVar4 != 0)) {
        uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
        goto LAB_00d58b68;
      }
      if ((uVar7 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar6 + 0x20);
    } while (*(long *)(lVar6 + 0x20) != 0);
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((lVar6 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) {
      return;
    }
    uVar7 = uVar1 | uVar7 & 0xffff0000;
    while (lVar4 = *(long *)(lVar6 + 0x20), lVar4 == 0) {
      if ((uVar7 - 1 & 0xffff) == 0) {
        return;
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
      if (lVar6 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_00d58bd8(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = param_2 & 0xffffffff;
  FUN_00da8d50(param_1,param_2,0,param_3);
  uVar2 = FUN_00d5454c(*(undefined8 *)(param_1 + 0x58),uVar5);
  if ((uVar2 & 1) != 0) {
    FUN_00d58a04(param_1);
  }
  FUN_00d538c0(*(undefined8 *)(param_1 + 0x58),uVar5,param_3);
  FUN_00d530e8(*(undefined8 *)(param_1 + 0x58),uVar5);
  uVar6 = 0x10000;
  lVar3 = param_1;
LAB_00d58c84:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_1) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x43ba06dd), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4,uVar5);
      }
      if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
        goto LAB_00d58c84;
      }
      if ((uVar6 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((lVar4 == 0) || (uVar1 = uVar6 - 1 & 0xffff, uVar1 == 0)) {
      return;
    }
    uVar6 = uVar1 | uVar6 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar6 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_00d58cf4(long param_1,undefined4 param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  
  plVar5 = (long *)*param_3;
  if (plVar5 == (long *)0x0) {
    uVar2 = 0;
  }
  else if ((int)param_3[1] == (int)plVar5[1]) {
    uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  else {
    *param_3 = 0;
    uVar2 = 0;
    *(undefined4 *)(param_3 + 1) = DAT_03214ce8;
  }
  FUN_00da8d50(param_1,param_2,uVar2,param_4);
  uVar3 = FUN_00d5454c(*(undefined8 *)(param_1 + 0x58),param_2);
  if ((uVar3 & 1) != 0) {
    FUN_00d58a04(param_1);
  }
  FUN_00d53880(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
  FUN_00d538c0(*(undefined8 *)(param_1 + 0x58),param_2,param_4);
  FUN_00d530e8(*(undefined8 *)(param_1 + 0x58),param_2);
  uVar7 = 0x10000;
  lVar4 = param_1;
LAB_00d58e08:
  do {
    do {
      lVar6 = lVar4;
      if ((lVar6 != param_1) &&
         (lVar4 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0x43ba06dd), lVar4 != 0)) {
        (**(code **)(lVar4 + 8))(lVar6,param_2);
      }
      if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar4 = *(long *)(lVar6 + 0x18), lVar4 != 0)) {
        uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
        goto LAB_00d58e08;
      }
      if ((uVar7 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar6 + 0x20);
    } while (*(long *)(lVar6 + 0x20) != 0);
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((lVar6 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) {
      return;
    }
    uVar7 = uVar1 | uVar7 & 0xffff0000;
    while (lVar4 = *(long *)(lVar6 + 0x20), lVar4 == 0) {
      if ((uVar7 - 1 & 0xffff) == 0) {
        return;
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
      if (lVar6 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_00d58e78(long param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = FUN_00d54784(*(undefined8 *)(param_1 + 0x58));
  if ((uVar2 & 1) != 0) {
    FUN_00d53224(*(undefined8 *)(param_1 + 0x58));
  }
  uVar5 = *(ushort *)(param_1 + 0x88) & 0x1f;
  if ((((uVar5 == 0x1f) || (*(short *)(param_1 + (ulong)uVar5 * 0x38 + 0x90) != 5)) &&
      (uVar2 = FUN_00d5454c(*(undefined8 *)(param_1 + 0x58),param_2), (uVar2 & 1) != 0)) &&
     (*(long *)(param_1 + 0x48) != 0)) {
    FUN_00d58a04(param_1);
  }
  FUN_00d54a28(*(undefined8 *)(param_1 + 0x58),param_2);
  FUN_00d53218(*(undefined8 *)(param_1 + 0x58),param_2);
  uVar5 = 0x10000;
  lVar3 = param_1;
LAB_00d58f54:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_1) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x295f0542), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4,param_2);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_00d58f54;
      }
      if ((uVar5 & 0xffff) == 0) goto LAB_00d58fb0;
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((lVar4 == 0) || (uVar1 = uVar5 - 1 & 0xffff, uVar1 == 0)) {
LAB_00d58fb0:
      lVar3 = FUN_00d53914(*(undefined8 *)(param_1 + 0x58),param_2);
      if (lVar3 == 0) {
        return;
      }
      FUN_00d58ff8(param_1,lVar3,0,0);
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) goto LAB_00d58fb0;
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) goto LAB_00d58fb0;
    }
  } while( true );
}




void FUN_00d58ff8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar3 = FUN_00ceab48();
    puVar2 = PTR_s_onAbilityTriggeredName_02bed548;
    if ((uVar3 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      thunk_FUN_00d9ff34(&local_78,*(undefined8 *)(param_2 + 8));
      FUN_00d6c758(uVar4,puVar2,local_78 & 0xffffffff);
    }
    local_78 = param_2;
    lStack_70 = param_1;
    local_68 = param_3;
    uStack_60 = param_4;
    FUN_00d6c450(*(undefined8 *)(param_1 + 0x60),&local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

