// functions/00efd — 50 functions
#include "libGameKindred.h"




undefined8 FUN_00efd04c(long param_1)

{
  ulong uVar1;
  
  if ((*(long **)(param_1 + 0x20) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))(), (uVar1 & 1) == 0)) {
    return 0;
  }
  if ((*(long **)(param_1 + 0x30) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))(), (uVar1 & 1) == 0)) {
    return 0;
  }
  return 1;
}




void FUN_00efd0ac(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    *(long **)(param_1 + 0x20) = plVar1;
    do {
      (**(code **)(*plVar1 + 0x20))(plVar1);
      plVar1 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    } while (plVar1 != (long *)0x0);
  }
  plVar1 = *(long **)(param_1 + 0x38);
  if (plVar1 != (long *)0x0) {
    *(long **)(param_1 + 0x30) = plVar1;
    do {
      (**(code **)(*plVar1 + 0x20))(plVar1);
      plVar1 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    } while (plVar1 != (long *)0x0);
  }
  return;
}




void FUN_00efd134(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  
  plVar1 = *(long **)(param_2 + 0x20);
  fVar4 = *(float *)(param_2 + 0x18) + (float)param_1;
  if (*(float *)(param_2 + 0xc) <= fVar4) {
    fVar4 = *(float *)(param_2 + 0xc);
  }
  *(float *)(param_2 + 0x18) = fVar4;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(param_1,plVar1,param_3);
    if ((*(long **)(param_2 + 0x20) != (long *)0x0) &&
       (uVar2 = (**(code **)(**(long **)(param_2 + 0x20) + 0x10))(), (uVar2 & 1) != 0)) {
      uVar3 = (**(code **)(**(long **)(param_2 + 0x20) + 0x28))();
      *(undefined8 *)(param_2 + 0x20) = uVar3;
    }
  }
  plVar1 = *(long **)(param_2 + 0x30);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(param_1,plVar1,param_3);
    if ((*(long **)(param_2 + 0x30) != (long *)0x0) &&
       (uVar2 = (**(code **)(**(long **)(param_2 + 0x30) + 0x10))(), (uVar2 & 1) != 0)) {
      uVar3 = (**(code **)(**(long **)(param_2 + 0x30) + 0x28))();
      *(undefined8 *)(param_2 + 0x30) = uVar3;
    }
  }
  return;
}




void FUN_00efd208(undefined8 *param_1)

{
  FUN_00efc8e8();
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_02824ba8;
  *(undefined4 *)(param_1 + 6) = 1;
  return;
}




void FUN_00efd250(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_02824ba8;
  plVar2 = (long *)param_1[5];
  if ((long *)param_1[5] != (long *)0x0) {
    do {
      plVar1 = (long *)(**(code **)(*plVar2 + 0x28))(plVar2);
      FUN_00efc90c(plVar2);
      plVar2 = plVar1;
    } while (plVar1 != (long *)0x0);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  FUN_00efc904(param_1);
  return;
}




void FUN_00efd2b8(void *param_1)

{
  FUN_00efd250();
  operator_delete(param_1);
  return;
}




void FUN_00efd2dc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  *(long *)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = param_2;
  iVar1 = -0x30;
  plVar6 = (long *)register0x00000008;
  do {
    lVar3 = (long)iVar1;
    if ((iVar1 < 0) && (iVar1 = iVar1 + 8, iVar1 < 1)) {
      plVar4 = (long *)(&stack0xffffffffffffffa8 + lVar3);
    }
    else {
      plVar4 = plVar6;
      plVar6 = plVar6 + 1;
    }
    lVar3 = *plVar4;
    FUN_00efc930(param_2,lVar3);
    param_2 = lVar3;
  } while (lVar3 != 0);
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00efd3b4(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00efd3bc(long param_1)

{
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0xffff;
  return;
}




bool FUN_00efd3cc(long param_1)

{
  return *(long *)(param_1 + 0x20) == 0;
}




void FUN_00efd3dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  
  plVar5 = *(long **)(param_2 + 0x20);
  fVar7 = *(float *)(param_2 + 0x18) + (float)param_1;
  if (*(float *)(param_2 + 0xc) <= fVar7) {
    fVar7 = *(float *)(param_2 + 0xc);
  }
  *(float *)(param_2 + 0x18) = fVar7;
  if (plVar5 != (long *)0x0) {
    do {
      uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
      (**(code **)(**(long **)(param_2 + 0x20) + 0x18))(param_1,*(long **)(param_2 + 0x20),param_3);
      if (*(long **)(param_2 + 0x20) == (long *)0x0) {
        plVar5 = (long *)0x0;
      }
      else {
        uVar4 = (**(code **)(**(long **)(param_2 + 0x20) + 0x10))();
        plVar5 = *(long **)(param_2 + 0x20);
        if ((uVar4 & 1) != 0) {
          plVar5 = (long *)(**(code **)(*plVar5 + 0x28))(plVar5);
          *(long **)(param_2 + 0x20) = plVar5;
        }
      }
      if ((uVar3 & 1) == 0) {
        if (plVar5 != (long *)0x0) {
          return;
        }
        break;
      }
    } while (plVar5 != (long *)0x0);
    uVar1 = *(int *)(param_2 + 0x30) + 0x10000;
    iVar2 = *(int *)(param_2 + 0x30) * 0x10000;
    *(uint *)(param_2 + 0x30) = uVar1;
    if ((iVar2 == -0x10000) || ((int)(uVar1 & 0xffff0000) < iVar2)) {
      plVar5 = *(long **)(param_2 + 0x28);
      uVar6 = 0;
      if (plVar5 != (long *)0x0) {
        do {
          (**(code **)(*plVar5 + 0x20))(plVar5);
          plVar5 = (long *)(**(code **)(*plVar5 + 0x28))(plVar5);
        } while (plVar5 != (long *)0x0);
        uVar6 = *(undefined8 *)(param_2 + 0x28);
      }
      *(undefined8 *)(param_2 + 0x20) = uVar6;
    }
  }
  return;
}




void FUN_00efd50c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    do {
      (**(code **)(*plVar1 + 0x20))(plVar1);
      plVar1 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    } while (plVar1 != (long *)0x0);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(uint *)(param_1 + 0x30) = (uint)*(ushort *)(param_1 + 0x30);
  return;
}




void FUN_00efd56c(float param_1,long param_2,long param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_2 + 0xc);
  param_1 = *(float *)(param_2 + 0x18) + param_1;
  if (fVar3 <= param_1) {
    param_1 = fVar3;
  }
  *(float *)(param_2 + 0x18) = param_1;
  fVar2 = 1.0;
  if (fVar3 != 0.0) {
    fVar2 = param_1 / fVar3;
  }
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    fVar2 = (float)(**(code **)(param_2 + 0x10))(fVar2,0,0x3f800000,0x3f800000);
  }
  uVar1 = *(uint *)(param_3 + 0x84);
  if ((uVar1 >> 7 & 0xff) == (int)(fVar2 * 255.0)) {
    return;
  }
  *(uint *)(param_3 + 0x84) =
       uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(fVar2 * 255.0) & 0xffU) << 7;
  FUN_0091ada4(param_3);
  return;
}




void FUN_00efd600(float param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_2 + 0xc);
  param_1 = *(float *)(param_2 + 0x18) + param_1;
  if (fVar4 <= param_1) {
    param_1 = fVar4;
  }
  *(float *)(param_2 + 0x18) = param_1;
  fVar3 = 1.0;
  if (fVar4 != 0.0) {
    fVar3 = param_1 / fVar4;
  }
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    fVar3 = (float)(**(code **)(param_2 + 0x10))(fVar3,0,0x3f800000,0x3f800000);
  }
  uVar1 = *(uint *)(param_3 + 0x84);
  uVar2 = (uint)((1.0 - fVar3) * 255.0);
  if ((uVar1 >> 7 & 0xff) == uVar2) {
    return;
  }
  *(uint *)(param_3 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
  FUN_0091ada4(param_3);
  return;
}




void FUN_00efd6a4(undefined8 *param_1)

{
  FUN_00efc8e8();
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *param_1 = &PTR_FUN_02824bf0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  return;
}




void FUN_00efd6ec(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x24) = *param_2;
  return;
}




undefined4 FUN_00efd6f8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}




void FUN_00efd700(float param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_2 + 0xc);
  param_1 = *(float *)(param_2 + 0x18) + param_1;
  if (fVar3 <= param_1) {
    param_1 = fVar3;
  }
  *(float *)(param_2 + 0x18) = param_1;
  if (*(char *)(param_2 + 0x2c) == '\0') {
    uVar1 = *(undefined8 *)(param_3 + 0x40);
    *(undefined1 *)(param_2 + 0x2c) = 1;
    *(undefined8 *)(param_2 + 0x1c) = uVar1;
  }
  fVar2 = 1.0;
  if (fVar3 != 0.0) {
    fVar2 = param_1 / fVar3;
  }
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    fVar2 = (float)(**(code **)(param_2 + 0x10))(fVar2,0,0x3f800000,0x3f800000);
  }
  fVar3 = (float)*(undefined8 *)(param_2 + 0x24) * fVar2 + (float)*(undefined8 *)(param_2 + 0x1c);
  fVar2 = (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20) * fVar2 +
          (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
  if ((!(bool)(~((float)*(undefined8 *)(param_3 + 0x40) == fVar3) & 1)) &&
     (!(bool)(~((float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20) == fVar2) & 1))) {
    return;
  }
  *(ulong *)(param_3 + 0x40) = CONCAT44(fVar2,fVar3);
  FUN_0091ada4(param_3);
  return;
}




void FUN_00efd7b8(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}




void FUN_00efd7c4(undefined8 *param_1)

{
  FUN_00efc8e8();
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *param_1 = &PTR_FUN_02824c38;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  return;
}




void FUN_00efd810(float param_1,long param_2,long param_3)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  
  param_1 = *(float *)(param_2 + 0x18) + param_1;
  if (*(float *)(param_2 + 0xc) <= param_1) {
    param_1 = *(float *)(param_2 + 0xc);
  }
  *(float *)(param_2 + 0x18) = param_1;
  if (*(char *)(param_2 + 0x34) == '\0') {
    uVar2 = *(undefined8 *)(param_3 + 0x40);
    *(undefined1 *)(param_2 + 0x34) = 1;
    *(undefined8 *)(param_2 + 0x1c) = uVar2;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x1c);
  }
  fVar3 = param_1 * param_1 * param_1;
  fVar1 = (float)*(undefined8 *)(param_2 + 0x2c) * fVar3 +
          (float)*(undefined8 *)(param_2 + 0x24) * param_1 + (float)uVar2;
  fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20) * fVar3 +
          (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20) * param_1 +
          (float)((ulong)uVar2 >> 0x20);
  if ((!(bool)(~((float)*(undefined8 *)(param_3 + 0x40) == fVar1) & 1)) &&
     (!(bool)(~((float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20) == fVar3) & 1))) {
    return;
  }
  *(ulong *)(param_3 + 0x40) = CONCAT44(fVar3,fVar1);
  FUN_0091ada4(param_3);
  return;
}




void FUN_00efd894(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x24) = *param_2;
  return;
}




undefined4 FUN_00efd8a0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}




void FUN_00efd8a8(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x2c) = *param_2;
  return;
}




undefined4 FUN_00efd8b4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}




void FUN_00efd8bc(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  return;
}




void FUN_00efd8c8(undefined8 *param_1)

{
  FUN_00efc8e8();
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02824c80;
  *(undefined8 *)((long)param_1 + 0x2c) = 4;
  return;
}




void FUN_00efd910(float param_1,long param_2,long param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  float fVar15;
  ulong uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  short sVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  undefined8 uVar23;
  float fVar24;
  
  fVar8 = *(float *)(param_2 + 0xc);
  param_1 = *(float *)(param_2 + 0x18) + param_1;
  if (fVar8 <= param_1) {
    param_1 = fVar8;
  }
  *(float *)(param_2 + 0x18) = param_1;
  if ((*(short *)(param_2 + 0x2e) == 0) && (*(short *)(param_2 + 0x30) != 0)) {
    *(short *)(param_2 + 0x1c) = (short)(int)*(float *)(param_3 + 0x40);
    fVar12 = *(float *)(param_3 + 0x44);
    *(undefined2 *)(param_2 + 0x2e) = 1;
    *(short *)(param_2 + 0x1e) = (short)(int)fVar12;
  }
  sVar20 = *(short *)(param_2 + 0x1c);
  sVar1 = *(short *)(param_2 + 0x20);
  sVar2 = *(short *)(param_2 + 0x1e);
  sVar3 = *(short *)(param_2 + 0x22);
  sVar4 = *(short *)(param_2 + 0x28);
  sVar5 = *(short *)(param_2 + 0x2a);
  uVar23 = CONCAT44((int)*(short *)(param_2 + 0x26),(int)*(short *)(param_2 + 0x24));
  fVar12 = 1.0;
  if (fVar8 != 0.0) {
    fVar12 = param_1 / fVar8;
  }
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    fVar12 = (float)(**(code **)(param_2 + 0x10))(fVar12,0,0x3f800000,0x3f800000);
  }
  uVar18 = NEON_scvtf(CONCAT44((int)sVar2,(int)sVar20),4);
  uVar16 = NEON_scvtf(CONCAT44((int)sVar3,(int)sVar1),4);
  uVar10 = NEON_scvtf(uVar23,4);
  fVar13 = 1.0 - fVar12;
  fVar8 = (float)(uVar16 >> 0x20);
  fVar9 = (float)uVar18;
  fVar19 = (float)((ulong)uVar18 >> 0x20);
  fVar11 = (float)(uVar10 >> 0x20);
  if (*(short *)(param_2 + 0x2c) == 4) {
    sVar20 = -(ushort)(*(short *)(param_2 + 0x32) == 0);
    uVar14 = CONCAT26(sVar20,CONCAT24(sVar20,CONCAT22(sVar20,sVar20)));
    fVar7 = (float)uVar16 + fVar9;
    fVar8 = fVar8 + fVar19;
    uVar21 = SUB42(fVar8,0);
    uVar22 = (undefined2)((uint)fVar8 >> 0x10);
    uVar16 = CONCAT26(uVar22,CONCAT24(uVar21,fVar7)) ^
             (CONCAT26(uVar22,CONCAT24(uVar21,fVar7)) ^ uVar16) & uVar14;
    fVar15 = fVar13 * fVar13 * fVar13;
    uVar23 = NEON_scvtf(CONCAT44((int)sVar5,(int)sVar4),4);
    fVar17 = fVar12 * fVar12 * fVar12;
    fVar7 = fVar12 * fVar13 * fVar13 * 3.0;
    fVar12 = fVar12 * fVar12 * fVar13 * 3.0;
    fVar8 = (float)uVar10 + (float)uVar23;
    fVar24 = (float)((ulong)uVar23 >> 0x20);
    fVar11 = fVar11 + fVar24;
    uVar21 = SUB42(fVar11,0);
    uVar22 = (undefined2)((uint)fVar11 >> 0x10);
    uVar10 = CONCAT26(uVar22,CONCAT24(uVar21,fVar8)) ^
             (CONCAT26(uVar22,CONCAT24(uVar21,fVar8)) ^ uVar10) & uVar14;
    fVar8 = fVar9 * fVar15 + (float)uVar16 * fVar7 + (float)uVar10 * fVar12;
    fVar13 = fVar19 * fVar15 + (float)(uVar16 >> 0x20) * fVar7 + (float)(uVar10 >> 0x20) * fVar12;
    fVar9 = (float)uVar23 * fVar17;
    fVar11 = fVar24 * fVar17;
  }
  else {
    if (*(short *)(param_2 + 0x2c) != 3) goto LAB_00efdac4;
    uVar14 = CONCAT44(fVar8 + fVar19,(float)uVar16 + fVar9);
    bVar6 = *(short *)(param_2 + 0x32) == 0;
    fVar7 = fVar12 * (fVar13 + fVar13);
    uVar14 = uVar14 ^ (uVar14 ^ uVar16) &
                      CONCAT44((int)((uint)bVar6 << 0x1f) >> 0x1f,(int)((uint)bVar6 << 0x1f) >> 0x1f
                              );
    fVar8 = fVar9 * fVar13 * fVar13 + (float)uVar14 * fVar7;
    fVar13 = fVar19 * fVar13 * fVar13 + (float)(uVar14 >> 0x20) * fVar7;
    fVar9 = (float)uVar10 * fVar12 * fVar12;
    fVar11 = fVar11 * fVar12 * fVar12;
  }
  uVar23 = CONCAT44(fVar13 + fVar11,fVar8 + fVar9);
LAB_00efdac4:
  if ((*(float *)(param_3 + 0x40) != (float)uVar23) ||
     (*(float *)(param_3 + 0x44) != (float)((ulong)uVar23 >> 0x20))) {
    *(undefined8 *)(param_3 + 0x40) = uVar23;
    FUN_0091ada4(param_3);
  }
  return;
}




void FUN_00efdb04(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  return;
}




void FUN_00efdb10(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  if (*(short *)(param_5 + 0x2c) == 4) {
    *(short *)(param_5 + 0x20) = (short)(int)param_1;
    *(short *)(param_5 + 0x22) = (short)(int)param_2;
    *(short *)(param_5 + 0x24) = (short)(int)param_3;
    *(short *)(param_5 + 0x26) = (short)(int)param_4;
  }
  else if (*(short *)(param_5 + 0x2c) == 3) {
    *(short *)(param_5 + 0x20) = (short)(int)param_1;
    *(short *)(param_5 + 0x22) = (short)(int)param_2;
    return;
  }
  return;
}




void FUN_00efdb5c(float param_1,float param_2,long param_3)

{
  if (*(short *)(param_3 + 0x2c) == 4) {
    *(short *)(param_3 + 0x28) = (short)(int)param_1;
    *(short *)(param_3 + 0x2a) = (short)(int)param_2;
  }
  else if (*(short *)(param_3 + 0x2c) == 3) {
    *(short *)(param_3 + 0x24) = (short)(int)param_1;
    *(short *)(param_3 + 0x26) = (short)(int)param_2;
    return;
  }
  return;
}




void FUN_00efdb98(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,long param_9)

{
  *(short *)(param_9 + 0x1c) = (short)(int)param_1;
  *(short *)(param_9 + 0x1e) = (short)(int)param_2;
  *(short *)(param_9 + 0x20) = (short)(int)param_3;
  *(short *)(param_9 + 0x22) = (short)(int)param_4;
  *(short *)(param_9 + 0x24) = (short)(int)param_5;
  *(short *)(param_9 + 0x26) = (short)(int)param_6;
  *(short *)(param_9 + 0x28) = (short)(int)param_7;
  *(short *)(param_9 + 0x2a) = (short)(int)param_8;
  *(undefined2 *)(param_9 + 0x30) = 0;
  return;
}




void FUN_00efdbe0(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x30) = param_2 & 1;
  if ((param_2 & 1) != 0) {
    *(undefined2 *)(param_1 + 0x2e) = 0;
  }
  return;
}




void FUN_00efdbf4(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x32) = param_2 & 1;
  return;
}




void FUN_00efdc00(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x2c) = param_2;
  return;
}




void FUN_00efdc08(undefined8 *param_1)

{
  FUN_00efc8e8();
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *param_1 = &PTR_FUN_02824cc8;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  return;
}




void FUN_00efdc50(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x1c) = *param_2;
  return;
}




void FUN_00efdc5c(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00f079b0(param_4,param_5,param_6,param_7);
  *(undefined4 *)(param_3 + 0x1c) = uVar1;
  *(undefined4 *)(param_3 + 0x20) = param_2;
  return;
}




undefined4 FUN_00efdc90(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}




void FUN_00efdc98(float param_1,long param_2,long param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  fVar2 = *(float *)(param_2 + 0xc);
  param_1 = *(float *)(param_2 + 0x18) + param_1;
  if (fVar2 <= param_1) {
    param_1 = fVar2;
  }
  *(float *)(param_2 + 0x18) = param_1;
  if (*(char *)(param_2 + 0x2c) == '\0') {
    uVar3 = *(undefined8 *)(param_3 + 0x40);
    *(undefined1 *)(param_2 + 0x2c) = 1;
    *(ulong *)(param_2 + 0x24) =
         CONCAT44((float)((ulong)uVar3 >> 0x20) -
                  (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20),
                  (float)uVar3 - (float)*(undefined8 *)(param_2 + 0x1c));
  }
  fVar1 = 1.0;
  if (fVar2 != 0.0) {
    fVar1 = param_1 / fVar2;
  }
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    fVar1 = (float)(**(code **)(param_2 + 0x10))(fVar1,0,0x3f800000,0x3f800000);
  }
  fVar2 = (float)*(undefined8 *)(param_2 + 0x24) * (1.0 - fVar1) +
          (float)*(undefined8 *)(param_2 + 0x1c);
  fVar1 = (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20) * (1.0 - fVar1) +
          (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
  if ((!(bool)(~((float)*(undefined8 *)(param_3 + 0x40) == fVar2) & 1)) &&
     (!(bool)(~((float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20) == fVar1) & 1))) {
    return;
  }
  *(ulong *)(param_3 + 0x40) = CONCAT44(fVar1,fVar2);
  FUN_0091ada4(param_3);
  return;
}




void FUN_00efdd68(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}




void FUN_00efdd74(undefined8 *param_1)

{
  FUN_00efc8e8();
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *param_1 = &PTR_FUN_02824d10;
  param_1[3] = 0x3f80000000000000;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  return;
}




void FUN_00efddc4(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x1c) = param_1;
  return;
}




undefined4 FUN_00efddcc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}




void FUN_00efddd4(float param_1,long param_2,long param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)(param_2 + 0xc);
  param_1 = *(float *)(param_2 + 0x18) + param_1;
  if (fVar3 <= param_1) {
    param_1 = fVar3;
  }
  *(float *)(param_2 + 0x18) = param_1;
  if (*(char *)(param_2 + 0x24) == '\0') {
    fVar4 = *(float *)(param_2 + 0x1c);
    fVar5 = (float)(*(uint *)(param_3 + 0x84) >> 7 & 0xff) / 255.0 - fVar4;
    *(float *)(param_2 + 0x20) = fVar5;
    *(undefined1 *)(param_2 + 0x24) = 1;
  }
  else {
    fVar4 = *(float *)(param_2 + 0x1c);
    fVar5 = *(float *)(param_2 + 0x20);
  }
  fVar2 = 1.0;
  if (fVar3 != 0.0) {
    fVar2 = param_1 / fVar3;
  }
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    fVar2 = (float)(**(code **)(param_2 + 0x10))(fVar2,0,0x3f800000,0x3f800000);
  }
  uVar1 = *(uint *)(param_3 + 0x84);
  fVar3 = (float)NEON_fminnm(fVar4 + fVar5 * (1.0 - fVar2),0x3f800000);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if ((uVar1 >> 7 & 0xff) == (int)(fVar3 * 255.0)) {
    return;
  }
  *(uint *)(param_3 + 0x84) =
       uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(fVar3 * 255.0) & 0xffU) << 7;
  FUN_0091ada4(param_3);
  return;
}




void FUN_00efded4(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}




void FUN_00efdee0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00efc8e8();
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = uVar1;
  *param_1 = &PTR_FUN_02824d58;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}




void FUN_00efdf2c(undefined4 param_1,long param_2,undefined8 param_3)

{
  *(undefined8 *)(param_2 + 0x20) = param_3;
  *(undefined4 *)(param_2 + 0x28) = param_1;
  return;
}




undefined4 FUN_00efdf38(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}




void FUN_00efdf40(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_2 + 0xc);
  param_1 = *(float *)(param_2 + 0x18) + param_1;
  if (fVar1 <= param_1) {
    param_1 = fVar1;
  }
  *(float *)(param_2 + 0x18) = param_1;
  if (*(char *)(param_2 + 0x30) == '\0') {
    fVar3 = (float)FUN_00f0e6b0(*(undefined8 *)(param_2 + 0x20));
    fVar2 = *(float *)(param_2 + 0x28);
    fVar1 = *(float *)(param_2 + 0xc);
    *(undefined1 *)(param_2 + 0x30) = 1;
    fVar3 = fVar3 - fVar2;
    *(float *)(param_2 + 0x2c) = fVar3;
  }
  else {
    fVar2 = *(float *)(param_2 + 0x28);
    fVar3 = *(float *)(param_2 + 0x2c);
  }
  if (fVar1 == 0.0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = *(float *)(param_2 + 0x18) / fVar1;
  }
  if (*(code **)(param_2 + 0x10) != (code *)0x0) {
    fVar1 = (float)(**(code **)(param_2 + 0x10))(fVar1,0,0x3f800000,0x3f800000);
  }
  fVar1 = (float)NEON_fminnm(fVar2 + fVar3 * (1.0 - fVar1),0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  FUN_00f0e6bc(fVar1,*(undefined8 *)(param_2 + 0x20));
  return;
}

