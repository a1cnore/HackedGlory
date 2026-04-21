// functions/00f2b — 16 functions
#include "libGameKindred.h"




int FUN_00f2b1f0(long param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + (long)param_2 * 0x9d20 + 0x10;
  lVar3 = FUN_00f2b2f8(lVar1);
  if (lVar3 == 0) {
    iVar2 = -1;
  }
  else {
    lVar4 = lVar3 + 4;
    lVar5 = 0x38;
    do {
      FUN_0199fc70(lVar4,4);
      FUN_0199fccc(lVar4,0,param_3,param_4,1,1,0);
      FUN_019a02cc(lVar4,0,0,0);
      FUN_019a02fc(lVar4,1,1,0);
      FUN_0199d318(lVar3 + lVar5,param_3,param_4);
      FUN_0199d4b4(lVar3 + lVar5,0,lVar4,0,0);
      lVar5 = lVar5 + 0x20;
      lVar4 = lVar4 + 0x18;
    } while (lVar5 != 0x78);
    iVar2 = (int)((ulong)(lVar3 - lVar1) >> 4) * -0x3b13b13b;
  }
  return iVar2;
}




undefined1 * FUN_00f2b2f8(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    if (*(char *)(param_1 + lVar2) == '\0') {
      puVar1 = (undefined1 *)(param_1 + lVar2);
      FUN_00f2a430(puVar1);
      *puVar1 = 1;
      *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
      return puVar1;
    }
    lVar2 = lVar2 + 0xd0;
  } while (lVar2 != 0x1a0);
  return (undefined1 *)0x0;
}




void FUN_00f2b358(long param_1,int param_2,int param_3)

{
  long lVar1;
  
  lVar1 = param_1 + (long)param_2 * 0x9d20 + 0x10;
  FUN_00f2b370(lVar1,lVar1 + (long)param_3 * 0xd0);
  return;
}




void FUN_00f2b370(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  lVar1 = 0x58;
  do {
    FUN_0199d254(param_2 + lVar1);
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != 0x18);
  lVar1 = 0x1c;
  do {
    FUN_0199fb94(param_2 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x14);
  *param_2 = 0;
  *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
  return;
}




void FUN_00f2b3d8(long param_1,int param_2,int param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = *param_4;
  fVar6 = param_4[1];
  fVar4 = *param_5 + fVar2;
  lVar3 = param_1 + (long)param_2 * 0x9d20 + (long)param_3 * 0xd0;
  fVar5 = fVar6 + param_5[1];
  *(undefined8 *)(lVar3 + 0xb0) = 0xc0000000;
  *(undefined8 *)(lVar3 + 0xc0) = 0x3f800000bf800000;
  fVar1 = fVar2;
  if (fVar2 <= fVar4) {
    fVar1 = fVar4;
    fVar4 = fVar2;
  }
  fVar2 = fVar5;
  if (fVar6 <= fVar5) {
    fVar2 = fVar6;
    fVar6 = fVar5;
  }
  fVar5 = 1.0 / (fVar1 - fVar4);
  fVar7 = 1.0 / (fVar2 - fVar6);
  *(undefined8 *)(lVar3 + 0x94) = 0;
  *(undefined8 *)(lVar3 + 0x8c) = 0;
  *(float *)(lVar3 + 0x88) = fVar5 + fVar5;
  *(float *)(lVar3 + 0x9c) = fVar7 + fVar7;
  *(float *)(lVar3 + 0xb8) = -((fVar4 + fVar1) * fVar5);
  *(float *)(lVar3 + 0xbc) = -((fVar2 + fVar6) * fVar7);
  *(undefined8 *)(lVar3 + 0xa8) = 0;
  *(undefined8 *)(lVar3 + 0xa0) = 0;
  return;
}




void FUN_00f2b490(long param_1,int param_2,int param_3,byte param_4)

{
  long lVar1;
  
  lVar1 = param_1 + (long)param_2 * 0x9d20 + (long)param_3 * 0xd0;
  *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfd | (param_4 & 1) << 1;
  return;
}




long FUN_00f2b4b8(long param_1,int param_2,int param_3)

{
  return param_1 + (long)param_2 * 0x9d20 + (long)param_3 * 0xd0 + 200;
}




long FUN_00f2b4d0(long param_1,int param_2,int param_3)

{
  return param_1 + (long)param_2 * 0x9d20 + (long)param_3 * 0xd0 + 0x14;
}




void FUN_00f2b4ec(void)

{
  return;
}




void FUN_00f2b4f0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  lVar2 = 200;
  do {
    if ((*(char *)(puVar1 + -2) != '\0') && ((void *)*puVar1 != (void *)0x0)) {
      operator_delete__((void *)*puVar1);
      puVar1[-1] = 0;
      *puVar1 = 0;
    }
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + 5;
  } while (lVar2 != 0);
  return;
}




void FUN_00f2b534(float param_1,float param_2,float param_3,undefined8 *param_4,uint param_5,
                 long param_6,long param_7)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  undefined8 *puVar5;
  float *pfVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  bool bVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  float *pfVar18;
  uint *puVar19;
  uint *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint local_448 [256];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_5 != 0) {
    fVar23 = param_1 + param_3;
    fVar24 = param_1 - param_3;
    fVar25 = param_2 + param_3;
    param_3 = param_2 - param_3;
    uVar16 = 0;
    puVar9 = param_4 + (ulong)param_5 * 3;
    fVar13 = fVar24;
    fVar15 = fVar25;
    puVar20 = local_448;
    fVar14 = fVar23;
    fVar12 = param_3;
    fVar26 = fVar23;
    fVar29 = fVar25;
    fVar21 = fVar24;
    fVar22 = param_3;
    do {
      fVar31 = *(float *)(param_4 + 1);
      puVar19 = puVar20;
      if ((((fVar31 < fVar23) && (fVar30 = *(float *)(param_4 + 2), fVar24 < fVar30)) &&
          (fVar33 = *(float *)((long)param_4 + 0xc), fVar33 < fVar25)) &&
         (fVar32 = *(float *)((long)param_4 + 0x14), param_3 < fVar32)) {
        fVar13 = fVar21;
        if (fVar31 <= fVar21) {
          fVar13 = fVar31;
        }
        fVar12 = fVar22;
        if (fVar33 <= fVar22) {
          fVar12 = fVar33;
        }
        fVar14 = fVar26;
        if (fVar26 <= fVar30) {
          fVar14 = fVar30;
        }
        fVar15 = fVar29;
        if (fVar29 <= fVar32) {
          fVar15 = fVar32;
        }
        puVar19 = puVar20 + 2;
        *(undefined8 *)puVar20 = *param_4;
        uVar16 = uVar16 + 1;
        fVar26 = fVar14;
        fVar29 = fVar15;
        fVar21 = fVar13;
        fVar22 = fVar12;
      }
      param_4 = param_4 + 3;
      puVar20 = puVar19;
    } while (param_4 < puVar9);
    if (uVar16 != 0) {
      uVar17 = 0;
      puVar20 = local_448;
      do {
        uVar2 = puVar20[1];
        if (uVar2 + uVar17 < 0x101) {
          puVar5 = (undefined8 *)(param_7 + (ulong)uVar17 * 0x2c);
          puVar9 = puVar5;
          if (uVar2 != 0) {
            pfVar6 = (float *)(param_6 + (ulong)*puVar20 * 0x1c);
            lVar7 = param_6 + (ulong)*puVar20 * 0x1c;
            pfVar11 = pfVar6 + (ulong)(uVar2 - 1) * 7;
            fVar26 = (param_1 - *pfVar6) * *(float *)(lVar7 + 0x10) +
                     (param_2 - *(float *)(lVar7 + 4)) * *(float *)(lVar7 + 0x14);
            puVar8 = puVar5;
            pfVar18 = pfVar6;
            bVar10 = 0.0 < (param_1 - *pfVar11) * pfVar11[4] + (param_2 - pfVar11[1]) * pfVar11[5];
            do {
              bVar4 = 0.0 < fVar26;
              pfVar11 = pfVar18 + 7;
              pfVar1 = pfVar11;
              if (pfVar6 + (ulong)uVar2 * 7 <= pfVar11) {
                pfVar1 = pfVar6;
              }
              fVar31 = *pfVar1;
              fVar29 = pfVar1[1];
              fVar26 = (param_1 - fVar31) * pfVar1[4] + (param_2 - fVar29) * pfVar1[5];
              puVar9 = puVar8;
              if (bVar4) {
                fVar30 = *pfVar18;
                fVar33 = fVar30;
                if (fVar31 <= fVar30) {
                  fVar33 = fVar31;
                }
                if (fVar33 < fVar23) {
                  if (fVar30 <= fVar31) {
                    fVar30 = fVar31;
                  }
                  if (fVar24 < fVar30) {
                    fVar30 = pfVar18[1];
                    fVar31 = fVar30;
                    if (fVar29 <= fVar30) {
                      fVar31 = fVar29;
                    }
                    if (fVar31 < fVar25) {
                      if (fVar30 <= fVar29) {
                        fVar30 = fVar29;
                      }
                      if (param_3 < fVar30) {
                        uVar27 = *(undefined8 *)(pfVar18 + 3);
                        *(undefined8 *)((long)puVar8 + 0x14) = *(undefined8 *)(pfVar18 + 5);
                        *(undefined8 *)((long)puVar8 + 0xc) = uVar27;
                        uVar28 = *(undefined8 *)(pfVar18 + 2);
                        uVar27 = *(undefined8 *)pfVar18;
                        *(byte *)((long)puVar8 + 0x1c) = ~bVar10 & 1;
                        *(bool *)((long)puVar8 + 0x1d) = fVar26 <= 0.0;
                        puVar9 = (undefined8 *)((long)puVar8 + 0x2c);
                        puVar8[1] = uVar28;
                        *puVar8 = uVar27;
                      }
                    }
                  }
                }
              }
              puVar8 = puVar9;
              pfVar18 = pfVar11;
              bVar10 = bVar4;
            } while (pfVar11 < pfVar6 + (ulong)uVar2 * 7);
          }
          uVar17 = uVar17 + (int)((ulong)((long)puVar9 - (long)puVar5) >> 2) * -0x45d1745d;
        }
        puVar20 = puVar20 + 2;
      } while (puVar20 < local_448 + (ulong)uVar16 * 2);
      if (uVar17 != 0) {
        uVar16 = 0;
        if (uVar17 + 4 < 0x101) {
          pfVar18 = (float *)(param_7 + (ulong)uVar17 * 0x2c);
          *pfVar18 = fVar21;
          pfVar18[0x11] = -fVar22;
          pfVar18[0x1c] = -fVar21;
          pfVar18[4] = 0.0;
          pfVar18[5] = -1.0;
          pfVar18[0xc] = fVar22;
          pfVar18[1] = fVar15;
          pfVar18[2] = fVar14;
          pfVar18[3] = fVar15;
          pfVar18[6] = fVar15;
          *(undefined2 *)(pfVar18 + 7) = 0;
          pfVar18[0xb] = fVar14;
          pfVar18[0xd] = fVar13;
          pfVar18[0xe] = fVar12;
          *(undefined2 *)(pfVar18 + 0x12) = 0;
          pfVar18[0x16] = fVar13;
          pfVar18[0x17] = fVar12;
          pfVar18[0x18] = fVar13;
          pfVar18[0x19] = fVar15;
          *(undefined2 *)(pfVar18 + 0x1d) = 0;
          pfVar18[0x21] = fVar14;
          pfVar18[0x22] = fVar15;
          pfVar18[0x23] = fVar14;
          pfVar18[0x24] = fVar12;
          pfVar18[0x27] = fVar14;
          pfVar18[0xf] = 0.0;
          pfVar18[0x10] = 1.0;
          pfVar18[0x1a] = 1.0;
          pfVar18[0x1b] = 0.0;
          pfVar18[0x25] = -1.0;
          pfVar18[0x26] = 0.0;
          *(undefined2 *)(pfVar18 + 0x28) = 0;
          uVar16 = uVar17 + 4;
        }
        goto LAB_00f2b840;
      }
    }
  }
  uVar16 = 0;
LAB_00f2b840:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar16);
}




void FUN_00f2b86c(float param_1,float param_2,float param_3,float param_4)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  long in_x3;
  code **ppcVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined8 *puVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  code **ppcVar15;
  int iVar16;
  ulong uVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_7c90;
  undefined8 uStack_7c88;
  undefined8 local_7c80;
  code *local_7c78 [1024];
  undefined8 local_5c78 [1536];
  float local_2c78 [2816];
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  fVar22 = param_3 * param_3;
  param_4 = param_4 * param_4;
  pfVar10 = local_2c78;
  uVar7 = FUN_00f2b534();
  if (uVar7 == 0) {
    local_5c78[1] = 0;
    local_5c78[0] = 0;
    local_5c78[2] = 0;
    FUN_00f2bcc4(in_x3,6,local_5c78);
    pfVar10 = *(float **)(in_x3 + 8);
    fVar19 = param_1 - param_3;
    fVar20 = param_2 + param_3;
    *pfVar10 = fVar19;
    pfVar10[1] = fVar20;
    pfVar10[2] = param_1;
    pfVar10[3] = param_2;
    lVar12 = *(long *)(in_x3 + 8);
    fVar21 = param_1 + param_3;
    param_3 = param_2 - param_3;
    *(float *)(lVar12 + 0x10) = fVar22;
    *(float *)(lVar12 + 0x14) = param_4;
    *(float *)(lVar12 + 0x18) = fVar21;
    *(float *)(lVar12 + 0x1c) = fVar20;
    *(float *)(lVar12 + 0x20) = param_1;
    *(float *)(lVar12 + 0x24) = param_2;
    lVar12 = *(long *)(in_x3 + 8);
    *(float *)(lVar12 + 0x28) = fVar22;
    *(float *)(lVar12 + 0x2c) = param_4;
    *(float *)(lVar12 + 0x30) = fVar21;
    *(float *)(lVar12 + 0x34) = param_3;
    *(float *)(lVar12 + 0x38) = param_1;
    *(float *)(lVar12 + 0x3c) = param_2;
    lVar12 = *(long *)(in_x3 + 8);
    *(float *)(lVar12 + 0x40) = fVar22;
    *(float *)(lVar12 + 0x44) = param_4;
    *(float *)(lVar12 + 0x48) = fVar21;
    *(float *)(lVar12 + 0x4c) = param_3;
    *(float *)(lVar12 + 0x50) = param_1;
    *(float *)(lVar12 + 0x54) = param_2;
    lVar12 = *(long *)(in_x3 + 8);
    *(float *)(lVar12 + 0x58) = fVar22;
    *(float *)(lVar12 + 0x5c) = param_4;
    *(float *)(lVar12 + 0x60) = fVar19;
    *(float *)(lVar12 + 100) = param_3;
    *(float *)(lVar12 + 0x68) = param_1;
    *(float *)(lVar12 + 0x6c) = param_2;
    lVar12 = *(long *)(in_x3 + 8);
    *(float *)(lVar12 + 0x70) = fVar22;
    *(float *)(lVar12 + 0x74) = param_4;
    *(float *)(lVar12 + 0x78) = fVar19;
    *(float *)(lVar12 + 0x7c) = fVar20;
    *(float *)(lVar12 + 0x80) = param_1;
    *(float *)(lVar12 + 0x84) = param_2;
    lVar12 = *(long *)(in_x3 + 8);
    *(float *)(lVar12 + 0x88) = fVar22;
    *(float *)(lVar12 + 0x8c) = param_4;
  }
  else {
    pfVar18 = pfVar10 + (ulong)uVar7 * 0xb;
    do {
      fVar20 = pfVar10[2];
      fVar21 = pfVar10[3];
      fVar19 = atan2f(pfVar10[1] - param_2,*pfVar10 - param_1);
      pfVar10[8] = fVar19;
      fVar19 = atan2f(fVar21 - param_2,fVar20 - param_1);
      pfVar10[9] = fVar19;
      pfVar10[10] = -(pfVar10[6] + param_1 * pfVar10[4] + param_2 * pfVar10[5]);
      pfVar10 = pfVar10 + 0xb;
    } while (pfVar10 < pfVar18);
    pfVar10 = local_2c78;
    puVar9 = local_5c78;
    do {
      uVar14 = *(undefined8 *)pfVar10;
      fVar19 = pfVar10[8];
      uVar1 = *(undefined1 *)(pfVar10 + 7);
      cVar2 = *(char *)((long)pfVar10 + 0x1d);
      *(undefined1 *)((long)puVar9 + 0xd) = 0;
      *puVar9 = uVar14;
      *(float *)(puVar9 + 1) = fVar19;
      *(undefined1 *)((long)puVar9 + 0xc) = uVar1;
      puVar9[2] = pfVar10;
      if (cVar2 == '\0') {
        puVar9 = puVar9 + 3;
      }
      else {
        uVar14 = *(undefined8 *)(pfVar10 + 2);
        fVar19 = pfVar10[9];
        *(undefined2 *)((long)puVar9 + 0x24) = 0x101;
        puVar9[5] = pfVar10;
        puVar9[3] = uVar14;
        *(float *)(puVar9 + 4) = fVar19;
        puVar9 = puVar9 + 6;
      }
      pfVar10 = pfVar10 + 0xb;
    } while (pfVar10 < pfVar18);
    uVar7 = (int)((ulong)((long)puVar9 - (long)local_5c78) >> 3) * -0x55555555;
    puVar9 = local_5c78 + (ulong)uVar7 * 3;
    local_7c78[0] = FUN_00f2bcb0;
    FUN_00f2bdf0(local_5c78,puVar9,local_7c78);
    ppcVar8 = local_7c78;
    if (uVar7 != 0) {
      puVar11 = local_5c78;
      do {
        pfVar10 = local_2c78;
        fVar20 = (float)*puVar11 - param_1;
        fVar21 = (float)((ulong)*puVar11 >> 0x20) - param_2;
        fVar19 = -1.0;
        do {
          fVar4 = fVar19;
          if ((float *)puVar11[2] != pfVar10) {
            fVar23 = pfVar10[8] - *(float *)(puVar11 + 1);
            fVar24 = pfVar10[9] - *(float *)(puVar11 + 1);
            if (-3.1415927 <= fVar23) {
              if (3.1415927 < fVar23) {
                fVar23 = fVar23 + -6.2831855;
              }
            }
            else {
              fVar23 = fVar23 + 6.2831855;
            }
            if (-3.1415927 <= fVar24) {
              if (3.1415927 < fVar24) {
                fVar24 = fVar24 + -6.2831855;
              }
            }
            else {
              fVar24 = fVar24 + 6.2831855;
            }
            if ((fVar23 < 0.0 != fVar24 < 0.0) &&
               (fVar23 = pfVar10[10] /
                         (fVar20 * (float)*(undefined8 *)(pfVar10 + 4) +
                         fVar21 * (float)((ulong)*(undefined8 *)(pfVar10 + 4) >> 0x20)),
               0.0 < fVar23)) {
              bVar5 = false;
              bVar6 = false;
              if (fVar19 <= fVar23) {
                bVar5 = false;
                bVar6 = true;
                if (!NAN(fVar19)) {
                  bVar5 = fVar19 == 0.0;
                  bVar6 = 0.0 <= fVar19;
                }
              }
              fVar4 = fVar23;
              if (bVar6 && !bVar5) {
                fVar4 = fVar19;
              }
            }
          }
          fVar19 = fVar4;
          pfVar10 = pfVar10 + 0xb;
        } while (pfVar10 < pfVar18);
        if (fVar19 <= 0.0) {
LAB_00f2bb38:
          *ppcVar8 = (code *)*puVar11;
LAB_00f2bb50:
          lVar12 = 1;
        }
        else {
          if (fVar19 <= 1.0) {
            *ppcVar8 = (code *)CONCAT44(param_2 + fVar21 * fVar19,param_1 + fVar20 * fVar19);
            goto LAB_00f2bb50;
          }
          if (*(char *)((long)puVar11 + 0xc) == '\0') goto LAB_00f2bb38;
          if (*(char *)((long)puVar11 + 0xd) == '\0') {
            pcVar13 = (code *)*puVar11;
            *ppcVar8 = (code *)CONCAT44(param_2 + fVar21 * fVar19,param_1 + fVar20 * fVar19);
            ppcVar8[1] = pcVar13;
          }
          else {
            pcVar13 = (code *)*puVar11;
            ppcVar8[1] = (code *)CONCAT44(param_2 + fVar21 * fVar19,param_1 + fVar20 * fVar19);
            *ppcVar8 = pcVar13;
          }
          lVar12 = 2;
        }
        puVar11 = puVar11 + 3;
        ppcVar8 = ppcVar8 + lVar12;
      } while (puVar11 < puVar9);
    }
    uVar17 = (ulong)((long)ppcVar8 - (long)local_7c78) >> 3;
    iVar16 = (int)uVar17;
    local_7c90 = 0;
    uStack_7c88 = 0;
    local_7c80 = 0;
    FUN_00f2bcc4(in_x3,iVar16 * 3,&local_7c90);
    if (iVar16 != 0) {
      puVar9 = *(undefined8 **)(in_x3 + 8);
      ppcVar8 = local_7c78;
      do {
        ppcVar15 = ppcVar8 + 1;
        pcVar13 = *ppcVar8;
        *(float *)(puVar9 + 1) = param_1;
        *(float *)((long)puVar9 + 0xc) = param_2;
        *(float *)(puVar9 + 2) = fVar22;
        *(float *)((long)puVar9 + 0x14) = param_4;
        bVar5 = ppcVar15 < local_7c78 + (uVar17 & 0xffffffff);
        *puVar9 = pcVar13;
        ppcVar8 = ppcVar15;
        if (!bVar5) {
          ppcVar8 = local_7c78;
        }
        pcVar13 = *ppcVar8;
        *(float *)(puVar9 + 4) = param_1;
        *(float *)((long)puVar9 + 0x24) = param_2;
        *(float *)(puVar9 + 5) = fVar22;
        *(float *)((long)puVar9 + 0x2c) = param_4;
        *(float *)(puVar9 + 6) = param_1;
        *(float *)((long)puVar9 + 0x34) = param_2;
        *(float *)(puVar9 + 7) = param_1;
        *(float *)((long)puVar9 + 0x3c) = param_2;
        *(float *)(puVar9 + 8) = fVar22;
        *(float *)((long)puVar9 + 0x44) = param_4;
        puVar9[3] = pcVar13;
        puVar9 = puVar9 + 9;
        ppcVar8 = ppcVar15;
      } while (bVar5);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00f2bcb0(long param_1,long param_2)

{
  return *(float *)(param_1 + 8) < *(float *)(param_2 + 8);
}




void FUN_00f2bcc4(uint *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < param_2) {
      FUN_00f2bd60(param_1,param_2);
    }
    uVar2 = *param_1;
    if (uVar2 < param_2) {
      lVar3 = (ulong)uVar2 * 0x18;
      lVar4 = (ulong)param_2 - (ulong)uVar2;
      do {
        lVar4 = lVar4 + -1;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + lVar3);
        puVar1[2] = param_3[2];
        uVar5 = *param_3;
        lVar3 = lVar3 + 0x18;
        puVar1[1] = param_3[1];
        *puVar1 = uVar5;
      } while (lVar4 != 0);
    }
    *param_1 = param_2;
  }
  return;
}




void FUN_00f2bd60(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x18);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x18;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -0x18;
        puVar4[2] = puVar2[2];
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 3;
        puVar2 = puVar2 + 3;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00f2bdf0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
LAB_00f2beec:
  puVar11 = param_2 + -3;
  puVar12 = param_1;
LAB_00f2bf10:
  param_1 = puVar12;
  uVar9 = (long)param_2 - (long)param_1;
  if ((ulong)(((long)uVar9 >> 3) * -0x5555555555555555) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00f2c1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01bf7fdc + *(int *)(&DAT_01bf7fdc + ((long)uVar9 >> 3) * -0x5555555555555554)))
              ();
    return;
  }
  if ((long)uVar9 < 0x2e8) {
    FUN_00f2c7a0(param_1,param_2,param_3);
    goto LAB_00f2c248;
  }
  puVar12 = param_1 + (uVar9 / 0x30) * 3;
  if ((long)uVar9 < 0x5da9) {
    iVar5 = FUN_00f2c2d4(param_1,puVar12,puVar11,param_3);
  }
  else {
    lVar1 = (uVar9 / 0x60) * 2 + uVar9 / 0x60;
    iVar5 = FUN_00f2c5f4(param_1,param_1 + lVar1,puVar12,puVar12 + lVar1,puVar11,param_3);
  }
  uVar9 = (*(code *)*param_3)(param_1,puVar12);
  puVar14 = param_2 + -6;
  puVar15 = puVar11;
  if ((uVar9 & 1) == 0) {
    do {
      puVar15 = puVar14;
      if (param_1 == puVar15) {
        puVar12 = param_1 + 3;
        uVar9 = (*(code *)*param_3)(param_1,puVar11);
        if ((uVar9 & 1) != 0) goto LAB_00f2c1d0;
        if (puVar12 == puVar11) goto LAB_00f2c248;
        puVar12 = param_1 + 6;
        goto LAB_00f2c17c;
      }
      uVar9 = (*(code *)*param_3)(puVar15,puVar12);
      puVar14 = puVar15 + -3;
    } while ((uVar9 & 1) == 0);
    uVar10 = param_1[2];
    iVar5 = iVar5 + 1;
    uVar20 = param_1[1];
    uVar18 = *param_1;
    param_1[2] = puVar15[2];
    uVar19 = *puVar15;
    param_1[1] = puVar15[1];
    *param_1 = uVar19;
    puVar15[2] = uVar10;
    puVar15[1] = uVar20;
    *puVar15 = uVar18;
  }
  puVar14 = param_1 + 3;
  puVar13 = puVar14;
  if (puVar14 < puVar15) {
    while( true ) {
      puVar14 = puVar13 + -3;
      do {
        puVar17 = puVar14;
        puVar14 = puVar17 + 3;
        uVar9 = (*(code *)*param_3)(puVar14,puVar12);
      } while ((uVar9 & 1) != 0);
      puVar13 = puVar17 + 6;
      do {
        puVar16 = puVar15;
        puVar15 = puVar16 + -3;
        uVar9 = (*(code *)*param_3)(puVar15,puVar12);
      } while ((uVar9 & 1) == 0);
      if (puVar15 < puVar14) break;
      uVar10 = puVar17[5];
      iVar5 = iVar5 + 1;
      puVar2 = puVar15;
      if (puVar12 != puVar14) {
        puVar2 = puVar12;
      }
      uVar20 = puVar17[4];
      uVar18 = *puVar14;
      puVar17[5] = puVar16[-1];
      uVar19 = *puVar15;
      puVar17[4] = puVar16[-2];
      *puVar14 = uVar19;
      puVar16[-1] = uVar10;
      puVar16[-2] = uVar20;
      *puVar15 = uVar18;
      puVar12 = puVar2;
    }
  }
  if ((puVar14 != puVar12) && (uVar9 = (*(code *)*param_3)(puVar12,puVar14), (uVar9 & 1) != 0)) {
    uVar10 = puVar14[2];
    iVar5 = iVar5 + 1;
    uVar20 = puVar14[1];
    uVar18 = *puVar14;
    puVar14[2] = puVar12[2];
    uVar19 = *puVar12;
    puVar14[1] = puVar12[1];
    *puVar14 = uVar19;
    puVar12[2] = uVar10;
    puVar12[1] = uVar20;
    *puVar12 = uVar18;
  }
  if (iVar5 != 0) goto LAB_00f2c11c;
  uVar9 = FUN_00f2c8b8(param_1,puVar14,param_3);
  uVar6 = FUN_00f2c8b8(puVar14 + 3,param_2,param_3);
  if ((uVar6 & 1) == 0) goto code_r0x00f2c118;
  bVar4 = (uVar9 & 1) == 0;
  if (bVar4) {
    param_2 = puVar14;
  }
  uVar7 = 1;
  if (bVar4) {
    uVar7 = 2;
  }
  goto LAB_00f2beb0;
LAB_00f2c17c:
  uVar9 = (*(code *)*param_3)(param_1,puVar12 + -3);
  if ((uVar9 & 1) != 0) goto LAB_00f2c1a0;
  puVar12 = puVar12 + 3;
  if (param_2 == puVar12) goto LAB_00f2c248;
  goto LAB_00f2c17c;
LAB_00f2c1a0:
  uVar10 = puVar12[-1];
  uVar20 = puVar12[-2];
  uVar18 = puVar12[-3];
  puVar12[-1] = param_2[-1];
  uVar19 = *puVar11;
  puVar12[-2] = param_2[-2];
  puVar12[-3] = uVar19;
  param_2[-1] = uVar10;
  param_2[-2] = uVar20;
  *puVar11 = uVar18;
LAB_00f2c1d0:
  if (puVar12 == puVar11) {
LAB_00f2c248:
    if (*(long *)(lVar3 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  while( true ) {
    puVar14 = puVar12 + -3;
    do {
      puVar15 = puVar14;
      puVar14 = puVar15 + 3;
      uVar9 = (*(code *)*param_3)(param_1,puVar14);
    } while ((uVar9 & 1) == 0);
    puVar12 = puVar15 + 6;
    do {
      puVar13 = puVar11;
      puVar11 = puVar13 + -3;
      uVar9 = (*(code *)*param_3)(param_1,puVar11);
    } while ((uVar9 & 1) != 0);
    if (puVar11 <= puVar14) break;
    uVar10 = puVar15[5];
    uVar20 = puVar15[4];
    uVar18 = *puVar14;
    puVar15[5] = puVar13[-1];
    uVar19 = *puVar11;
    puVar15[4] = puVar13[-2];
    *puVar14 = uVar19;
    puVar13[-1] = uVar10;
    puVar13[-2] = uVar20;
    *puVar11 = uVar18;
  }
  uVar7 = 4;
  param_1 = puVar14;
LAB_00f2beb0:
  if ((4 < uVar7) || ((1 << (ulong)uVar7 & 0x15U) == 0)) goto LAB_00f2c248;
  goto LAB_00f2beec;
code_r0x00f2c118:
  puVar12 = puVar14 + 3;
  if ((uVar9 & 1) == 0) {
LAB_00f2c11c:
    if (((long)param_2 - (long)puVar14 >> 3) * -0x5555555555555555 <=
        ((long)puVar14 - (long)param_1 >> 3) * -0x5555555555555555) {
      FUN_00f2bdf0(puVar14 + 3,param_2,param_3);
      param_2 = puVar14;
      goto LAB_00f2beec;
    }
    FUN_00f2bdf0(param_1,puVar14,param_3);
    puVar12 = puVar14 + 3;
  }
  goto LAB_00f2bf10;
}

