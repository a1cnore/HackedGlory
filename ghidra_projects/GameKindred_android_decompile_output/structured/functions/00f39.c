// functions/00f39 — 15 functions
#include "libGameKindred.h"




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f3932c(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00f39440();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f39440(long param_1,int param_2,ushort *param_3,long param_4,long param_5,long param_6,
                 long param_7,undefined8 *param_8,undefined8 *param_9)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  if (param_2 != 0) {
    uVar21 = *param_8;
    fVar23 = *(float *)(param_8 + 1);
    uVar25 = *param_9;
    fVar27 = *(float *)(param_9 + 1);
    iVar8 = 0;
    lVar7 = param_1;
    do {
      uVar1 = *param_3;
      uVar9 = (ulong)uVar1;
      fVar12 = *(float *)(param_5 + uVar9 * 8);
      fVar13 = *(float *)(param_5 + (ulong)((uint)uVar1 << 1 | 1) * 4);
      fVar19 = *(float *)(param_6 + uVar9 * 4) * 0.017453292;
      fVar10 = sinf(fVar19);
      fVar19 = cosf(fVar19);
      fVar24 = (float)uVar25;
      fVar26 = (float)((ulong)uVar25 >> 0x20);
      fVar20 = (float)uVar21;
      fVar22 = (float)((ulong)uVar21 >> 0x20);
      puVar5 = (undefined8 *)(param_4 + (ulong)(uint)uVar1 * 0xc);
      puVar6 = (undefined8 *)(param_7 + uVar9 * 0x10);
      uVar18 = puVar6[1];
      uVar16 = *puVar6;
      uVar11 = *puVar5;
      fVar14 = *(float *)(puVar5 + 1);
      lVar4 = 0;
      puVar6 = &DAT_01bf8380;
      do {
        puVar5 = (undefined8 *)(lVar7 + lVar4);
        lVar4 = lVar4 + 0x24;
        fVar15 = (float)*puVar6;
        fVar17 = (float)((ulong)*puVar6 >> 0x20);
        *puVar5 = CONCAT44((float)((ulong)uVar11 >> 0x20) +
                           (fVar22 * fVar10 + fVar26 * fVar19) * fVar12 * fVar15 +
                           (fVar26 * -fVar10 + fVar22 * fVar19) * fVar13 * fVar17,
                           (float)uVar11 + (fVar20 * fVar10 + fVar24 * fVar19) * fVar12 * fVar15 +
                           (fVar24 * -fVar10 + fVar20 * fVar19) * fVar13 * fVar17);
        *(float *)(puVar5 + 1) =
             fVar14 + fVar12 * (fVar23 * fVar10 + fVar27 * fVar19) * fVar15 +
             fVar13 * (fVar23 * fVar19 - fVar27 * fVar10) * fVar17;
        *(ulong *)((long)puVar5 + 0x1c) = CONCAT44(fVar17 + 0.5,fVar15 + 0.5);
        *(undefined8 *)((long)puVar5 + 0x14) = uVar18;
        *(undefined8 *)((long)puVar5 + 0xc) = uVar16;
        puVar6 = puVar6 + 1;
      } while (lVar4 != 0x6c0);
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 0x6c0;
      param_3 = param_3 + 1;
    } while (iVar8 != param_2);
    param_1 = param_1 + (ulong)(param_2 - 1) * 0x6c0 + 0x6c0;
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}




void FUN_00f39650(void)

{
  FUN_00f39440();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f3965c(long param_1,int param_2,ushort *param_3,long param_4,long param_5,long param_6,
                 long param_7,long param_8,float *param_9)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  if (param_2 != 0) {
    uVar16 = *(undefined8 *)(param_9 + 1);
    fVar18 = *param_9;
    fVar17 = (float)((ulong)uVar16 >> 0x20);
    iVar9 = 0;
    lVar7 = param_1;
    do {
      uVar1 = *param_3;
      uVar8 = (ulong)uVar1;
      fVar13 = *(float *)(param_5 + uVar8 * 8);
      fVar14 = *(float *)(param_5 + (ulong)((uint)uVar1 << 1 | 1) * 4);
      fVar22 = *(float *)(param_6 + uVar8 * 4) * 0.017453292;
      fVar10 = sinf(fVar22);
      fVar22 = cosf(fVar22);
      lVar5 = uVar8 + (ulong)(uint)uVar1 * 2;
      puVar6 = (undefined8 *)(param_8 + lVar5 * 4);
      uVar25 = *puVar6;
      fVar26 = *(float *)(puVar6 + 1);
      fVar19 = (float)uVar25;
      fVar24 = (float)((ulong)uVar25 >> 0x20);
      fVar23 = fVar19 * fVar19 + fVar24 * fVar24 + fVar26 * fVar26;
      fVar15 = SQRT(fVar23);
      if (NAN(fVar15)) {
        fVar15 = sqrtf(fVar23);
      }
      uVar25 = _DAT_03218f78;
      fVar29 = DAT_03218f80;
      if (1e-06 <= ABS(fVar15)) {
        fVar15 = SQRT(fVar23);
        if (NAN(fVar15)) {
          fVar15 = sqrtf(fVar23);
        }
        uVar25 = CONCAT44(fVar24 / fVar15,fVar19 / fVar15);
        fVar29 = fVar26 / fVar15;
      }
      fVar19 = (float)((ulong)uVar25 >> 0x20);
      fVar15 = (float)uVar25;
      fVar23 = (float)uVar16;
      fVar26 = fVar23 * fVar15 - fVar18 * fVar19;
      fVar27 = fVar17 * fVar19 - fVar23 * fVar29;
      fVar28 = fVar18 * fVar29 - fVar17 * fVar15;
      fVar24 = fVar26 * fVar26 + fVar27 * fVar27 + fVar28 * fVar28;
      fVar23 = SQRT(fVar24);
      if (NAN(fVar23)) {
        fVar23 = sqrtf(fVar24);
      }
      uVar25 = DAT_03218f68;
      fVar11 = DAT_03218f70;
      if (1e-06 <= ABS(fVar23)) {
        fVar23 = SQRT(fVar24);
        if (NAN(fVar23)) {
          fVar23 = sqrtf(fVar24);
        }
        uVar25 = CONCAT44(fVar28 / fVar23,fVar27 / fVar23);
        fVar11 = fVar26 / fVar23;
      }
      puVar6 = (undefined8 *)(param_4 + lVar5 * 4);
      puVar2 = (undefined8 *)(param_7 + uVar8 * 0x10);
      uVar21 = puVar2[1];
      uVar20 = *puVar2;
      lVar5 = 0;
      fVar24 = (float)((ulong)uVar25 >> 0x20);
      uVar12 = *puVar6;
      fVar23 = *(float *)(puVar6 + 1);
      puVar6 = &DAT_01bf8380;
      do {
        puVar2 = (undefined8 *)(lVar7 + lVar5);
        lVar5 = lVar5 + 0x24;
        fVar26 = (float)*puVar6;
        fVar27 = (float)((ulong)*puVar6 >> 0x20);
        *puVar2 = CONCAT44((float)((ulong)uVar12 >> 0x20) +
                           (fVar19 * fVar10 + fVar24 * fVar22) * fVar13 * fVar26 +
                           (fVar19 * fVar22 + fVar24 * -fVar10) * fVar14 * fVar27,
                           (float)uVar12 +
                           (fVar15 * fVar10 + (float)uVar25 * fVar22) * fVar13 * fVar26 +
                           (fVar15 * fVar22 + (float)uVar25 * -fVar10) * fVar14 * fVar27);
        *(float *)(puVar2 + 1) =
             fVar23 + fVar13 * (fVar10 * fVar29 + fVar22 * fVar11) * fVar26 +
             fVar14 * (fVar22 * fVar29 - fVar11 * fVar10) * fVar27;
        *(ulong *)((long)puVar2 + 0x1c) = CONCAT44(fVar27 + 0.5,fVar26 + 0.5);
        *(undefined8 *)((long)puVar2 + 0x14) = uVar21;
        *(undefined8 *)((long)puVar2 + 0xc) = uVar20;
        puVar6 = puVar6 + 1;
      } while (lVar5 != 0x6c0);
      iVar9 = iVar9 + 1;
      lVar7 = lVar7 + 0x6c0;
      param_3 = param_3 + 1;
    } while (iVar9 != param_2);
    param_1 = param_1 + (ulong)(param_2 - 1) * 0x6c0 + 0x6c0;
  }
  if (*(long *)(lVar3 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}




void FUN_00f39990(long param_1)

{
  *(undefined4 *)(param_1 + 0xb8) = 4;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  return;
}




void FUN_00f399a0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00f399a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




long FUN_00f399ac(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb8) = param_2;
  switch(param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0xb8) = 0;
    FUN_00f3a3b4(param_1);
    break;
  case 1:
    *(undefined4 *)(param_1 + 0xb8) = 1;
    FUN_00f3a688(param_1);
    break;
  case 2:
    *(undefined4 *)(param_1 + 0xb8) = 2;
    FUN_00f3a94c(param_1);
    break;
  case 3:
    *(undefined4 *)(param_1 + 0xb8) = 3;
    FUN_00f3ad8c(param_1);
    break;
  default:
    param_1 = 0;
  }
  return param_1;
}




int thunk_FUN_00f39af8(undefined8 param_1,float param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fStack_50;
  float fStack_4c;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  fStack_4c = 0.0;
  if ((*(code **)(param_3 + 0x58) != (code *)0x0) &&
     ((**(code **)(param_3 + 0x58))(param_1,1,&fStack_4c,0,0,param_4), fStack_4c < 0.0)) {
    fStack_4c = 0.0;
  }
  fVar4 = *(float *)(param_3 + 0x48) + fStack_4c * param_2;
  iVar3 = (int)fVar4;
  *(float *)(param_3 + 0x48) = fVar4 - (float)iVar3;
  if (*(char *)(param_3 + 0x4c) != '\0') {
    fStack_50 = 0.0;
    iVar2 = 0;
    if (*(code **)(param_3 + 0x50) != (code *)0x0) {
      (**(code **)(param_3 + 0x50))(param_1,1,&fStack_50,0,0,param_4);
      iVar2 = (int)fStack_50;
    }
    iVar3 = iVar2 + iVar3;
    *(undefined1 *)(param_3 + 0x4c) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00f39bf8(undefined8 param_1,long *param_2,long param_3,uint param_4,ushort *param_5,
                       undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_4 == 0) {
    (**(code **)(*param_2 + 0x10))
              (param_1,param_2,param_3,0,param_5,param_3,param_3 + 0x18000,param_6,param_7);
  }
  else {
    uVar6 = 0;
    uVar5 = (ulong)param_4;
    do {
      iVar3 = rand();
      puVar4 = param_5 + uVar6;
      uVar6 = uVar6 + 1;
      *(float *)(param_3 + (ulong)*puVar4 * 4 + 0x78000) = (float)iVar3 * 4.656613e-10 + 0.0;
    } while (uVar5 != uVar6);
    (**(code **)(*param_2 + 0x10))
              (param_1,param_2,param_3,param_4,param_5,param_3,param_3 + 0x18000,param_6,param_7);
    puVar4 = param_5;
    if (param_4 != 0) {
      do {
        uVar5 = uVar5 - 1;
        *(int *)(param_3 + (ulong)*puVar4 * 4 + 0x48000) = (int)param_1;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
  }
  if (param_2[0xc] != 0) {
    FUN_00f39ee0(param_1,param_3,param_2[0xc],param_4,param_5,param_3 + 0x58000,param_7);
  }
  if (param_2[0xd] != 0) {
    FUN_00f3a000(param_1,param_3,param_2[0xd],param_4,param_5,param_7);
  }
  if (param_2[0xe] != 0) {
    FUN_00f3a118(param_1,param_3,param_2[0xe],param_4,param_5,param_3 + 0x30000,param_7);
  }
  if (param_2[0xf] != 0) {
    FUN_00f3a20c(param_1,param_3,param_2[0xf],param_4,param_5,param_3 + 0x40000,param_7);
  }
  if (param_2[0x10] != 0) {
    FUN_00f3a2dc(param_1,param_3,param_2[0x10],param_4,param_5,param_3 + 0x50000,param_7);
  }
  if (((((param_2[0xc] == 0) || (param_2[0xe] == 0)) || (param_2[0xf] == 0)) || (param_2[0x10] == 0)
      ) && (param_4 != 0)) {
    uVar6 = 0;
    do {
      uVar2 = param_5[uVar6];
      uVar5 = (ulong)uVar2;
      if (param_2[0xe] == 0) {
        *(undefined8 *)(param_3 + uVar5 * 8 + 0x30000) = 0x3dcccccd3dcccccd;
      }
      if (param_2[0xf] == 0) {
        *(undefined4 *)(param_3 + uVar5 * 4 + 0x40000) = 0;
      }
      if (param_2[0x10] == 0) {
        *(undefined4 *)(param_3 + uVar5 * 4 + 0x50000) = 0x3f800000;
      }
      if (param_2[0xc] == 0) {
        iVar3 = rand();
        lVar1 = param_3 + 0x58000;
        *(float *)(lVar1 + uVar5 * 0x10) = (float)iVar3 * 4.656613e-10 * 0.5 + 0.5;
        iVar3 = rand();
        *(float *)(lVar1 + (ulong)((uint)uVar2 << 2 | 1) * 4) =
             (float)iVar3 * 4.656613e-10 * 0.5 + 0.5;
        iVar3 = rand();
        *(float *)(lVar1 + (ulong)((uint)uVar2 << 2 | 2) * 4) =
             (float)iVar3 * 4.656613e-10 * 0.5 + 0.5;
        *(undefined4 *)(lVar1 + (ulong)((uint)uVar2 << 2 | 3) * 4) = 0x3f800000;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_4);
  }
  return;
}




void FUN_00f39a48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02829300;
  param_1[8] = 0x3f80000000000000;
  param_1[7] = 0;
  param_1[6] = 0x3f800000;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0x3f80000000000000;
  *(undefined1 *)((long)param_1 + 0x4c) = 1;
  param_1[10] = 0;
  param_1[0xb] = FUN_00f3b0e8;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[2] = 0;
  param_1[1] = 0x3f800000;
  param_1[0xd] = FUN_00f3b0ac;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  return;
}




void FUN_00f39ab0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[6];
  *(undefined8 *)(param_1 + 0x40) = param_2[7];
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = param_2[4];
  *(undefined8 *)(param_1 + 0x30) = param_2[5];
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = param_2[3];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x10) = param_2[1];
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}




void FUN_00f39ad4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  param_2[7] = *(undefined8 *)(param_1 + 0x40);
  param_2[6] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  param_2[5] = *(undefined8 *)(param_1 + 0x30);
  param_2[4] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  param_2[3] = *(undefined8 *)(param_1 + 0x20);
  param_2[2] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[1] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = uVar1;
  return;
}




int FUN_00f39af8(undefined8 param_1,float param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float local_50;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_4c = 0.0;
  if ((*(code **)(param_3 + 0x58) != (code *)0x0) &&
     ((**(code **)(param_3 + 0x58))(param_1,1,&local_4c,0,0,param_4), local_4c < 0.0)) {
    local_4c = 0.0;
  }
  fVar4 = *(float *)(param_3 + 0x48) + local_4c * param_2;
  iVar3 = (int)fVar4;
  *(float *)(param_3 + 0x48) = fVar4 - (float)iVar3;
  if (*(char *)(param_3 + 0x4c) != '\0') {
    local_50 = 0.0;
    iVar2 = 0;
    if (*(code **)(param_3 + 0x50) != (code *)0x0) {
      (**(code **)(param_3 + 0x50))(param_1,1,&local_50,0,0,param_4);
      iVar2 = (int)local_50;
    }
    iVar3 = iVar2 + iVar3;
    *(undefined1 *)(param_3 + 0x4c) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f39bf8(undefined8 param_1,long *param_2,long param_3,uint param_4,ushort *param_5,
                 undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_4 == 0) {
    (**(code **)(*param_2 + 0x10))
              (param_1,param_2,param_3,0,param_5,param_3,param_3 + 0x18000,param_6,param_7);
  }
  else {
    uVar6 = 0;
    uVar5 = (ulong)param_4;
    do {
      iVar3 = rand();
      puVar4 = param_5 + uVar6;
      uVar6 = uVar6 + 1;
      *(float *)(param_3 + (ulong)*puVar4 * 4 + 0x78000) = (float)iVar3 * 4.656613e-10 + 0.0;
    } while (uVar5 != uVar6);
    (**(code **)(*param_2 + 0x10))
              (param_1,param_2,param_3,param_4,param_5,param_3,param_3 + 0x18000,param_6,param_7);
    puVar4 = param_5;
    if (param_4 != 0) {
      do {
        uVar5 = uVar5 - 1;
        *(int *)(param_3 + (ulong)*puVar4 * 4 + 0x48000) = (int)param_1;
        puVar4 = puVar4 + 1;
      } while (uVar5 != 0);
    }
  }
  if (param_2[0xc] != 0) {
    FUN_00f39ee0(param_1,param_3,param_2[0xc],param_4,param_5,param_3 + 0x58000,param_7);
  }
  if (param_2[0xd] != 0) {
    FUN_00f3a000(param_1,param_3,param_2[0xd],param_4,param_5,param_7);
  }
  if (param_2[0xe] != 0) {
    FUN_00f3a118(param_1,param_3,param_2[0xe],param_4,param_5,param_3 + 0x30000,param_7);
  }
  if (param_2[0xf] != 0) {
    FUN_00f3a20c(param_1,param_3,param_2[0xf],param_4,param_5,param_3 + 0x40000,param_7);
  }
  if (param_2[0x10] != 0) {
    FUN_00f3a2dc(param_1,param_3,param_2[0x10],param_4,param_5,param_3 + 0x50000,param_7);
  }
  if (((((param_2[0xc] == 0) || (param_2[0xe] == 0)) || (param_2[0xf] == 0)) || (param_2[0x10] == 0)
      ) && (param_4 != 0)) {
    uVar6 = 0;
    do {
      uVar2 = param_5[uVar6];
      uVar5 = (ulong)uVar2;
      if (param_2[0xe] == 0) {
        *(undefined8 *)(param_3 + uVar5 * 8 + 0x30000) = 0x3dcccccd3dcccccd;
      }
      if (param_2[0xf] == 0) {
        *(undefined4 *)(param_3 + uVar5 * 4 + 0x40000) = 0;
      }
      if (param_2[0x10] == 0) {
        *(undefined4 *)(param_3 + uVar5 * 4 + 0x50000) = 0x3f800000;
      }
      if (param_2[0xc] == 0) {
        iVar3 = rand();
        lVar1 = param_3 + 0x58000;
        *(float *)(lVar1 + uVar5 * 0x10) = (float)iVar3 * 4.656613e-10 * 0.5 + 0.5;
        iVar3 = rand();
        *(float *)(lVar1 + (ulong)((uint)uVar2 << 2 | 1) * 4) =
             (float)iVar3 * 4.656613e-10 * 0.5 + 0.5;
        iVar3 = rand();
        *(float *)(lVar1 + (ulong)((uint)uVar2 << 2 | 2) * 4) =
             (float)iVar3 * 4.656613e-10 * 0.5 + 0.5;
        *(undefined4 *)(lVar1 + (ulong)((uint)uVar2 << 2 | 3) * 4) = 0x3f800000;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_4);
  }
  return;
}




void FUN_00f39ee0(undefined8 param_1,code *param_2,uint param_3,ushort *param_4,long param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long alStack_50 [2];
  
  lVar5 = tpidr_el0;
  alStack_50[1] = *(long *)(lVar5 + 0x28);
  lVar6 = (ulong)(param_3 << 2) * -4;
  puVar10 = (undefined8 *)((long)alStack_50 + lVar6);
  iVar7 = (*param_2)(param_3,puVar10,param_4,param_1,param_6);
  if (iVar7 == 1) {
    if (param_3 != 0) {
      uVar2 = *puVar10;
      uVar3 = *(undefined8 *)((long)alStack_50 + lVar6 + 8);
      do {
        uVar4 = *param_4;
        param_3 = param_3 - 1;
        *(undefined8 *)(param_5 + (ulong)uVar4 * 0x10) = uVar2;
        *(undefined8 *)(param_5 + (ulong)((uint)uVar4 << 2 | 2) * 4) = uVar3;
        param_4 = param_4 + 1;
      } while (param_3 != 0);
    }
  }
  else if (param_3 != 0) {
    uVar8 = (ulong)param_3;
    uVar9 = 3;
    do {
      uVar4 = *param_4;
      uVar8 = uVar8 - 1;
      *(undefined4 *)(param_5 + (ulong)uVar4 * 0x10) =
           *(undefined4 *)((long)puVar10 + (ulong)(uVar9 - 3) * 4);
      *(undefined4 *)(param_5 + (ulong)((uint)uVar4 << 2 | 1) * 4) =
           *(undefined4 *)((long)puVar10 + (ulong)(uVar9 - 2) * 4);
      *(undefined4 *)(param_5 + (ulong)((uint)uVar4 << 2 | 2) * 4) =
           *(undefined4 *)((long)puVar10 + (ulong)(uVar9 - 1) * 4);
      uVar1 = (ulong)uVar9;
      uVar9 = uVar9 + 4;
      *(undefined4 *)(param_5 + (ulong)((uint)uVar4 << 2 | 3) * 4) =
           *(undefined4 *)((long)puVar10 + uVar1 * 4);
      param_4 = param_4 + 1;
    } while (uVar8 != 0);
  }
  if (*(long *)(lVar5 + 0x28) != alStack_50[1]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

