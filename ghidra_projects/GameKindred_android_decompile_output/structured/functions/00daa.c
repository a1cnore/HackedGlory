// functions/00daa — 22 functions
#include "libGameKindred.h"




void FUN_00daa148(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,float *param_7,undefined8 param_8,byte param_9,
                 byte param_10)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  
  *param_2 = param_8;
  *(undefined4 *)(param_2 + 3) = param_4;
  *(undefined4 *)(param_2 + 2) = param_3;
  *(undefined4 *)((long)param_2 + 0x14) = 0xffffffff;
  uVar5 = FUN_00d9e390(param_3);
  param_2[5] = uVar5;
  uVar5 = FUN_00d9e390(param_4);
  param_2[4] = uVar5;
  *(undefined4 *)(param_2 + 1) = param_5;
  *(undefined2 *)((long)param_2 + 0xc) = 0;
  *(byte *)((long)param_2 + 0xe) = param_9 & 1;
  *(undefined4 *)(param_2 + 6) = param_1;
  *(undefined4 *)((long)param_2 + 0x54) = 0;
  *(undefined8 *)((long)param_2 + 0x4c) = 0;
  *(undefined8 *)((long)param_2 + 0x44) = 0;
  *(undefined8 *)((long)param_2 + 0x3c) = 0;
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  *(byte *)(param_2 + 0xb) = param_10 & 1;
  *(undefined4 *)((long)param_2 + 0x5c) = 0;
  if (1.1920929e-07 <= ABS(*param_7)) {
    bVar6 = true;
  }
  else {
    bVar6 = 1.1920929e-07 <= ABS(param_7[1]);
  }
  *(bool *)(param_2 + 0xc) = bVar6;
  uVar2 = param_6 < 2 | 4;
  if (param_6 != 0) {
    uVar2 = (ushort)(param_6 < 2);
  }
  uVar1 = uVar2 | 10;
  if (param_6 != 2) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 | 0x10;
  if (param_6 != 3) {
    uVar2 = uVar1;
  }
  *(undefined8 *)((long)param_2 + 100) = *(undefined8 *)param_7;
  *(ushort *)((long)param_2 + 0xc) = uVar2;
  if ((param_2[5] != 0) && (iVar3 = FUN_00d5cf60(), iVar3 != -1)) {
    *(undefined4 *)((long)param_2 + 0x14) = *(undefined4 *)(param_2[5] + 0x260);
    uVar4 = FUN_00d5cf60();
    *(undefined4 *)(param_2 + 2) = uVar4;
    FUN_00d5cf60(param_2[5]);
    uVar5 = FUN_00d9e390();
    param_2[5] = uVar5;
  }
  return;
}




byte FUN_00daa2b0(uint param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = param_1 < 2 | 4;
  if (param_1 != 0) {
    bVar1 = param_1 < 2;
  }
  bVar2 = bVar1 | 10;
  if (param_1 != 2) {
    bVar2 = bVar1;
  }
  bVar1 = bVar2 | 0x10;
  if (param_1 != 3) {
    bVar1 = bVar2;
  }
  return bVar1;
}




void FUN_00daa2e4(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined2 param_6,float *param_7,undefined8 param_8,
                 byte param_9,byte param_10)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  *param_2 = param_8;
  *(undefined4 *)(param_2 + 3) = param_4;
  *(undefined4 *)(param_2 + 2) = param_3;
  *(undefined4 *)((long)param_2 + 0x14) = 0xffffffff;
  uVar3 = FUN_00d9e390(param_3);
  param_2[5] = uVar3;
  uVar3 = FUN_00d9e390(param_4);
  param_2[4] = uVar3;
  *(undefined4 *)(param_2 + 1) = param_5;
  *(undefined2 *)((long)param_2 + 0xc) = param_6;
  *(byte *)((long)param_2 + 0xe) = param_9 & 1;
  *(undefined4 *)(param_2 + 6) = param_1;
  *(undefined4 *)((long)param_2 + 0x54) = 0;
  *(undefined8 *)((long)param_2 + 0x4c) = 0;
  *(undefined8 *)((long)param_2 + 0x44) = 0;
  *(undefined8 *)((long)param_2 + 0x3c) = 0;
  *(undefined8 *)((long)param_2 + 0x34) = 0;
  *(byte *)(param_2 + 0xb) = param_10 & 1;
  *(undefined4 *)((long)param_2 + 0x5c) = 0;
  if (1.1920929e-07 <= ABS(*param_7)) {
    bVar4 = true;
  }
  else {
    bVar4 = 1.1920929e-07 <= ABS(param_7[1]);
  }
  *(bool *)(param_2 + 0xc) = bVar4;
  *(undefined8 *)((long)param_2 + 100) = *(undefined8 *)param_7;
  if ((param_2[5] != 0) && (iVar1 = FUN_00d5cf60(), iVar1 != -1)) {
    *(undefined4 *)((long)param_2 + 0x14) = *(undefined4 *)(param_2[5] + 0x260);
    uVar2 = FUN_00d5cf60();
    *(undefined4 *)(param_2 + 2) = uVar2;
    FUN_00d5cf60(param_2[5]);
    uVar3 = FUN_00d9e390();
    param_2[5] = uVar3;
  }
  return;
}




void FUN_00daa418(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_2 + 0xc);
  *(undefined1 *)((long)param_1 + 0xe) = *(undefined1 *)((long)param_2 + 0xe);
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)((long)param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined8 *)((long)param_1 + 0x4c) = *(undefined8 *)((long)param_2 + 0x4c);
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)((long)param_2 + 0x54);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)((long)param_2 + 0x5c);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined8 *)((long)param_1 + 100) = *(undefined8 *)((long)param_2 + 100);
  return;
}




void FUN_00daa4a4(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  
  *param_2 = param_3;
  param_2[1] = param_4;
  uVar1 = FUN_00d9e390(param_3);
  *(undefined8 *)(param_2 + 2) = uVar1;
  uVar1 = FUN_00d9e390(param_4);
  *(undefined8 *)(param_2 + 4) = uVar1;
  param_2[6] = param_1;
  *(undefined8 *)(param_2 + 9) = 0;
  *(undefined8 *)(param_2 + 7) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = param_5;
  param_2[0xd] = param_6;
  param_2[0xe] = param_7;
  param_2[0xf] = param_8;
  return;
}




undefined1 FUN_00daa524(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}




long FUN_00daa52c(long param_1)

{
  return param_1 + 100;
}




void FUN_00daa534(long param_1,float *param_2)

{
  bool bVar1;
  
  if (1.1920929e-07 <= ABS(*param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = 1.1920929e-07 <= ABS(param_2[1]);
  }
  *(bool *)(param_1 + 0x60) = bVar1;
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)param_2;
  return;
}




bool FUN_00daa578(long param_1,long param_2)

{
  return *(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x260);
}




bool FUN_00daa58c(long param_1,long param_2)

{
  return *(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x260);
}




void FUN_00daa5a0(float param_1,long param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *param_3 = 0.0;
  *param_4 = 0.0;
  *param_5 = 0.0;
  *param_6 = 0.0;
  if (param_1 <= 0.0) {
    lVar1 = *(long *)(param_2 + 0x40);
    fVar3 = param_1;
    if ((param_1 < 0.0) && (fVar2 = *(float *)(lVar1 + 0x318), 0.0 < fVar2)) {
      fVar3 = ABS(param_1);
      if (fVar2 <= ABS(param_1)) {
        fVar3 = fVar2;
      }
      fVar3 = fVar3 + param_1;
      *param_5 = param_1 - fVar3;
    }
    fVar2 = *(float *)(lVar1 + 0x31c);
    if (*(float *)(lVar1 + 0x308) <= *(float *)(lVar1 + 0x31c)) {
      fVar2 = *(float *)(lVar1 + 0x308);
    }
    param_1 = fVar3;
    if ((fVar3 < 0.0) && (0.0 < fVar2)) {
      fVar4 = fVar3 * 0.5 + fVar2;
      if (fVar4 <= 0.0) {
        param_1 = fVar4;
        fVar4 = 0.0;
      }
      else {
        param_1 = 0.0;
      }
      param_1 = fVar3 * 0.5 + param_1;
      *param_6 = fVar4 - fVar2;
    }
    if ((((uint)*(byte *)(param_2 + 0x303) << 0x10) >> 0x12 & 1) != 0) {
      *param_4 = param_1;
      return;
    }
  }
  *param_3 = param_1;
  return;
}




undefined4 * FUN_00daa654(long param_1)

{
  undefined4 *puVar1;
  
  if ((DAT_031ac960 & 1) == 0) {
    DAT_031ac968 = 0xf8c4d87d;
    DAT_031ac990 = 0x3f800000;
    DAT_031ac998 = 0xbf800000;
    DAT_031ac960 = 1;
    DAT_031ac9a0 = 0x1000100000000;
    DAT_031ac980 = 0;
    DAT_031ac988 = 0;
    DAT_031ac970 = &DAT_01e277f2;
    DAT_031ac978 = 0;
    DAT_031ac99c = 0;
    DAT_031ac9a8 = 0;
    DAT_031ac9aa = 0;
    DAT_031ac9b4 = 0;
    DAT_031ac9b8 = 0;
    DAT_031ac9ad = 0;
    DAT_031ac9bc = 0x6e;
    DAT_031ac9c0 = 1;
  }
  puVar1 = &DAT_031ac968;
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x274) != '\0') {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 0x38) + 0x238);
  }
  return puVar1;
}




void FUN_00daa6ec(uint *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = param_1 + 2;
  do {
    if (*puVar1 == param_2) goto LAB_00daa73c;
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 4;
  } while (uVar2 < 2);
  uVar2 = *param_1;
  *param_1 = uVar2 + 1;
  param_1[(ulong)uVar2 * 4 + 2] = param_2;
  (param_1 + (ulong)uVar2 * 4 + 4)[0] = 0;
  (param_1 + (ulong)uVar2 * 4 + 4)[1] = 0;
LAB_00daa73c:
  uVar2 = 0;
  param_1 = param_1 + 10;
  do {
    if ((char)param_1[4] == '\0') {
      FUN_00daa794();
      *param_3 = uVar2;
      return;
    }
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 0x14;
  } while (uVar2 < 0x100);
  return;
}




uint * FUN_00daa774(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = uVar1 + 1;
  param_1[(ulong)uVar1 * 4 + 2] = param_2;
  (param_1 + (ulong)uVar1 * 4 + 4)[0] = 0;
  (param_1 + (ulong)uVar1 * 4 + 4)[1] = 0;
  return param_1 + (ulong)uVar1 * 4 + 2;
}




void FUN_00daa794(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = DAT_03214ce8;
  *param_3 = 0;
  *(undefined4 *)((long)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 1) = uVar1;
  *(undefined4 *)(param_3 + 4) = DAT_03218f38;
  param_3[3] = DAT_03218f30;
  *(undefined4 *)((long)param_3 + 0x2c) = DAT_03218f38;
  uVar2 = DAT_03218f30;
  param_3[9] = 0;
  *(undefined8 *)((long)param_3 + 0x24) = uVar2;
  param_3[8] = 0;
  param_3[6] = DAT_03218f30;
  uVar1 = DAT_03218f38;
  *(undefined1 *)(param_3 + 2) = 1;
  *(undefined4 *)(param_3 + 7) = uVar1;
  *(undefined4 *)((long)param_3 + 0x3c) = 0;
  *param_3 = *param_4;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 1);
  uVar1 = param_5[2];
  *(undefined4 *)(param_3 + 3) = *param_5;
  *(undefined4 *)((long)param_3 + 0x1c) = 0;
  *(undefined4 *)(param_3 + 4) = uVar1;
  uVar1 = param_5[2];
  *(undefined4 *)((long)param_3 + 0x24) = *param_5;
  *(undefined4 *)(param_3 + 5) = 0;
  *(undefined4 *)((long)param_3 + 0x2c) = uVar1;
  lVar3 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 8) != 0) {
    do {
      lVar4 = lVar3;
      lVar3 = *(long *)(lVar4 + 0x40);
    } while (*(long *)(lVar4 + 0x40) != 0);
    *(undefined8 **)(lVar4 + 0x40) = param_3;
    param_3[8] = 0;
    param_3[9] = lVar4;
    return;
  }
  *(undefined8 **)(param_2 + 8) = param_3;
  param_3[8] = 0;
  param_3[9] = 0;
  return;
}




void FUN_00daa854(long param_1,int param_2,uint *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long *plVar7;
  ulong uVar8;
  
  lVar3 = 0;
  piVar6 = (int *)0x0;
  do {
    piVar1 = (int *)(param_1 + 8 + lVar3);
    lVar3 = lVar3 + 0x10;
    if (*piVar1 != param_2) {
      piVar1 = piVar6;
    }
    piVar6 = piVar1;
  } while (lVar3 != 0x20);
  uVar8 = (ulong)*param_3;
  lVar4 = param_1 + uVar8 * 0x50;
  plVar5 = (long *)(lVar4 + 0x68);
  plVar7 = (long *)(piVar1 + 2);
  lVar3 = *plVar5;
  if ((undefined8 *)(lVar4 + 0x28) != (undefined8 *)*plVar7) {
    lVar3 = *(long *)(param_1 + uVar8 * 0x50 + 0x70);
    *(long *)(lVar3 + 0x40) = *plVar5;
    if (*plVar5 == 0) goto LAB_00daa8c0;
    plVar7 = (long *)(*plVar5 + 0x48);
  }
  *plVar7 = lVar3;
LAB_00daa8c0:
  uVar2 = DAT_03214ce8;
  param_1 = param_1 + uVar8 * 0x50;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = DAT_03218f38;
  *(undefined8 *)(param_1 + 0x40) = DAT_03218f30;
  *(undefined8 *)(param_1 + 0x4c) = DAT_03218f30;
  *(undefined4 *)(param_1 + 0x54) = DAT_03218f38;
  *plVar5 = 0;
  *(undefined8 *)(lVar4 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x60) = DAT_03218f38;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x58) = DAT_03218f30;
  *param_3 = 0xffffffff;
  return;
}




void FUN_00daa92c(uint *param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  float fVar14;
  float fVar15;
  float local_934;
  float local_930 [16];
  ulong local_8f0 [16];
  undefined8 local_870 [258];
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  uVar6 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar3 = 0;
    lVar8 = 0x10;
    do {
      plVar4 = (long *)((long)param_1 + lVar8);
      lVar8 = lVar8 + 0x10;
      if (*plVar4 != 0) {
        uVar3 = uVar3 + 1;
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    if (1 < uVar3) {
      lVar8 = 0;
      do {
        lVar11 = *(long *)(param_1 + lVar8 * 4 + 4);
        if (lVar11 != 0) {
          do {
            uVar3 = FUN_00daab94(param_1,param_1[lVar8 * 4 + 2],lVar11,local_870);
            if (uVar3 != 0) {
              uVar6 = 0;
              uVar12 = 0;
              do {
                puVar13 = (ulong *)local_870[uVar6];
                local_934 = 0.0;
                plVar4 = (long *)FUN_00daac20(param_1,lVar11,puVar13,&local_934);
                if ((((ulong)plVar4 & 1) != 0) && (plVar4 = (long *)*puVar13, plVar4 != (long *)0x0)
                   ) {
                  if ((int)puVar13[1] == (int)plVar4[1]) {
                    plVar4 = (long *)(**(code **)(*plVar4 + 0x10))();
                    if (plVar4 != (long *)0x0) {
                      local_8f0[uVar12] = (ulong)plVar4;
                      local_930[uVar12] = local_934;
                      uVar12 = uVar12 + 1;
                    }
                  }
                  else {
                    *puVar13 = 0;
                    *(undefined4 *)(puVar13 + 1) = DAT_03214ce8;
                  }
                }
              } while ((uVar12 < 0x10) && (uVar6 = uVar6 + 1, uVar6 < uVar3));
              if (uVar12 != 0) {
                if (uVar12 != 1) {
                  do {
                    iVar7 = 0;
                    lVar9 = (ulong)uVar12 - 1;
                    fVar14 = local_930[0];
                    puVar13 = local_8f0;
                    pfVar10 = local_930;
                    do {
                      pfVar10 = pfVar10 + 1;
                      puVar13 = puVar13 + 1;
                      fVar15 = *pfVar10;
                      if (fVar15 < fVar14) {
                        uVar6 = puVar13[-1];
                        uVar1 = *puVar13;
                        iVar7 = iVar7 + 1;
                        pfVar10[-1] = fVar15;
                        *pfVar10 = fVar14;
                        puVar13[-1] = uVar1;
                        *puVar13 = uVar6;
                        fVar15 = fVar14;
                      }
                      fVar14 = fVar15;
                      lVar9 = lVar9 + -1;
                    } while (lVar9 != 0);
                  } while ((iVar7 != 0) && (uVar12 != 1));
                }
                FUN_00daad34(plVar4,lVar11,local_8f0,uVar12);
              }
            }
            lVar11 = *(long *)(lVar11 + 0x40);
          } while (lVar11 != 0);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 2);
    }
  }
  param_1[1] = ~param_1[1] & 1;
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00daab54(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar3 = 0;
    uVar2 = 0;
    do {
      param_1 = param_1 + 4;
      uVar3 = uVar3 + 1;
      if (*(long *)param_1 != 0) {
        uVar2 = uVar2 + 1;
      }
    } while (uVar3 < uVar1);
    return 1 < uVar2;
  }
  return false;
}




uint FUN_00daab94(long param_1,int param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar5 = *(float *)(param_3 + 0x3c);
  fVar6 = *(float *)(param_3 + 0x30);
  uVar7 = *(undefined8 *)(param_3 + 0x34);
  lVar3 = 0;
  uVar1 = 0;
  do {
    lVar4 = param_1 + lVar3 * 0x10;
    if (*(int *)(lVar4 + 8) != param_2) {
      for (lVar4 = *(long *)(lVar4 + 0x10); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x40)) {
        fVar8 = fVar6 - *(float *)(lVar4 + 0x30);
        fVar9 = (float)uVar7 - (float)*(undefined8 *)(lVar4 + 0x34);
        fVar10 = (float)((ulong)uVar7 >> 0x20) -
                 (float)((ulong)*(undefined8 *)(lVar4 + 0x34) >> 0x20);
        fVar11 = fVar5 + *(float *)(lVar4 + 0x3c);
        uVar2 = uVar1;
        if (fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10 < fVar11 * fVar11) {
          uVar2 = uVar1 + 1;
          *(long *)(param_4 + (ulong)uVar1 * 8) = lVar4;
        }
        uVar1 = uVar2;
      }
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 2);
  return uVar1;
}




void FUN_00daac20(long param_1,long param_2,long param_3,float *param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = *(undefined4 *)(param_2 + 0x20);
  local_60 = *(undefined8 *)(param_2 + 0x18);
  local_54 = *(undefined8 *)(param_2 + 0x24);
  local_4c = *(undefined4 *)(param_2 + 0x2c);
  local_70 = *(undefined4 *)(param_3 + 0x20);
  local_78 = *(undefined8 *)(param_3 + 0x18);
  local_64 = *(undefined4 *)(param_3 + 0x2c);
  local_6c = *(undefined8 *)(param_3 + 0x24);
  uVar3 = FUN_00dab048(*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_3 + 0x14),&local_60,
                       &local_78);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    param_3 = param_3 + (ulong)*(uint *)(param_1 + 4) * 0xc;
    param_2 = param_2 + (ulong)(~*(uint *)(param_1 + 4) & 1) * 0xc;
    fVar4 = *(float *)(param_2 + 0x18) - *(float *)(param_3 + 0x18);
    fVar5 = *(float *)(param_2 + 0x1c) - *(float *)(param_3 + 0x1c);
    fVar6 = *(float *)(param_2 + 0x20) - *(float *)(param_3 + 0x20);
    *param_4 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}




void FUN_00daad34(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  plVar2 = (long *)*param_2;
  if (plVar2 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x10), lVar3 != 0)) {
        uVar6 = 0x10000;
        lVar4 = lVar3;
LAB_00daadfc:
        do {
          do {
            lVar5 = lVar4;
            if ((lVar5 != lVar3) &&
               (lVar4 = FUN_019865b4(*(undefined8 *)(lVar5 + 8),0x1ef90473), lVar4 != 0)) {
              (**(code **)(lVar4 + 8))(lVar5,param_3,param_4);
            }
            if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0))
            {
              uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
              goto LAB_00daadfc;
            }
            if ((uVar6 & 0xffff) == 0) {
              return;
            }
            lVar4 = *(long *)(lVar5 + 0x20);
          } while (*(long *)(lVar5 + 0x20) != 0);
          lVar5 = *(long *)(lVar5 + 0x10);
          if (lVar5 == 0) {
            return;
          }
          uVar1 = uVar6 - 1 & 0xffff;
          if (uVar1 == 0) {
            return;
          }
          uVar6 = uVar1 | uVar6 & 0xffff0000;
          while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
            if ((uVar6 - 1 & 0xffff) == 0) {
              return;
            }
            lVar5 = *(long *)(lVar5 + 0x10);
            uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
            if (lVar5 == 0) {
              return;
            }
          }
        } while( true );
      }
    }
    else {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00daae60(float param_1,long param_2,uint *param_3,float *param_4,uint param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  
  uVar7 = (ulong)*param_3;
  uVar1 = *(uint *)(param_2 + 4);
  uVar2 = (ulong)uVar1;
  fVar14 = *param_4;
  fVar11 = param_4[2];
  lVar4 = param_2 + uVar7 * 0x50;
  lVar6 = lVar4 + uVar2 * 0xc;
  *(float *)(lVar6 + 0x40) = fVar14;
  *(undefined4 *)(lVar6 + 0x44) = 0;
  *(float *)(lVar6 + 0x48) = fVar11;
  *(float *)(lVar4 + 0x3c) = param_1;
  if ((param_5 & 1) == 0) {
    lVar4 = param_2 + uVar7 * 0x50 + (ulong)(~uVar1 & 1) * 0xc;
    fVar14 = fVar14 - *(float *)(lVar4 + 0x40);
    fVar9 = 0.0 - *(float *)(lVar4 + 0x44);
    fVar11 = fVar11 - *(float *)(lVar4 + 0x48);
    fVar11 = fVar14 * fVar14 + fVar9 * fVar9 + fVar11 * fVar11;
    fVar14 = SQRT(fVar11);
    if (NAN(fVar14)) {
      fVar14 = sqrtf(fVar11);
    }
    uVar2 = (ulong)*(uint *)(param_2 + 4);
    lVar4 = param_2 + uVar7 * 0x50 + uVar2 * 0xc;
    fVar9 = *(float *)(lVar4 + 0x44);
    fVar11 = *(float *)(lVar4 + 0x48);
  }
  else {
    fVar9 = 0.0;
    fVar14 = 0.0;
  }
  uVar3 = (ulong)(~(uint)uVar2 & 1);
  lVar4 = param_2 + uVar7 * 0x50 + 0x40;
  fVar13 = *(float *)(lVar4 + uVar2 * 0xc);
  pfVar5 = (float *)(lVar4 + uVar3 * 0xc);
  uVar12 = *(undefined8 *)pfVar5;
  fVar14 = param_1 + param_1 + fVar14;
  if ((param_5 & 1) == 0) {
    fVar13 = fVar13 - (float)uVar12;
    fVar9 = fVar9 - (float)((ulong)uVar12 >> 0x20);
    fVar8 = pfVar5[2];
    fVar11 = fVar11 - fVar8;
    fVar10 = fVar13 * fVar13 + fVar9 * fVar9 + fVar11 * fVar11;
    if (0.01 < fVar10) {
      fVar8 = SQRT(fVar10);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(fVar10);
      }
      lVar4 = param_2 + uVar7 * 0x50 + (ulong)(~*(uint *)(param_2 + 4) & 1) * 0xc;
      uVar12 = *(undefined8 *)(lVar4 + 0x40);
      fVar10 = fVar14 * 0.5;
      uVar12 = CONCAT44((float)((ulong)uVar12 >> 0x20) + (fVar9 / fVar8) * fVar10,
                        (float)uVar12 + (fVar13 / fVar8) * fVar10);
      fVar8 = fVar10 * (fVar11 / fVar8) + *(float *)(lVar4 + 0x48);
    }
  }
  else {
    *pfVar5 = fVar13;
    *(float *)(param_2 + uVar7 * 0x50 + uVar3 * 0xc + 0x44) = fVar9;
    pfVar5[2] = fVar11;
    uVar12 = CONCAT44(fVar9,fVar13);
    fVar8 = fVar11;
  }
  param_2 = param_2 + uVar7 * 0x50;
  *(float *)(param_2 + 0x60) = fVar8;
  *(float *)(param_2 + 100) = fVar14;
  *(undefined8 *)(param_2 + 0x58) = uVar12;
  return;
}

