// functions/00f36 — 11 functions
#include "libGameKindred.h"




void FUN_00f36048(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(ushort *)((long)param_1 + 0x14) = *(ushort *)((long)param_1 + 0x14) & 0xfe00 | 0x1f8;
  return;
}




void FUN_00f36068(void)

{
  return;
}




void FUN_00f3606c(long param_1,undefined4 param_2,long param_3,int param_4,ushort param_5)

{
  if ((param_3 != 0) && (param_4 != 0)) {
    FUN_00f360c8(param_1,param_3,param_4);
  }
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(ushort *)(param_1 + 0x14) = *(ushort *)(param_1 + 0x14) & 0xfe07 | (param_5 & 0x3f) << 3;
  return;
}




void FUN_00f360c8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  
  switch(param_3) {
  case 1:
    uVar1 = *param_2;
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = uVar1;
    param_1[1] = 0;
    uVar2 = 1;
    break;
  case 2:
    *param_1 = *param_2;
    uVar1 = param_2[1];
    *(undefined8 *)(param_1 + 2) = 0;
    param_1[1] = uVar1;
    uVar2 = 2;
    break;
  case 3:
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = 0;
    uVar2 = 3;
    break;
  case 4:
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    uVar2 = 4;
    break;
  default:
    goto switchD_00f360e4_default;
  }
  *(ushort *)(param_1 + 5) = *(ushort *)(param_1 + 5) & 0xfff8 | uVar2;
switchD_00f360e4_default:
  return;
}




void FUN_00f36170(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = param_1;
  puVar2 = param_2;
  switch(param_3) {
  case 1:
    break;
  case 2:
    puVar1 = param_1 + 1;
    puVar2 = param_2 + 1;
    *param_2 = *param_1;
    break;
  case 3:
    *param_2 = *param_1;
    puVar1 = param_1 + 2;
    param_2[1] = param_1[1];
    puVar2 = param_2 + 2;
    break;
  case 4:
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    puVar1 = param_1 + 3;
    param_2[2] = param_1[2];
    puVar2 = param_2 + 3;
    break;
  default:
    goto switchD_00f3618c_default;
  }
  *puVar2 = *puVar1;
switchD_00f3618c_default:
  return;
}




void FUN_00f361e4(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e6a474();
  FUN_0091ed5c(param_1,uVar1,0x12345678);
  return;
}




void FUN_00f36214(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  short sVar4;
  short sVar5;
  undefined8 uVar3;
  short sVar6;
  short sVar8;
  short sVar9;
  undefined8 uVar7;
  short sVar10;
  
  uVar7 = 0x7000600050004;
  uVar3 = 0x3000200010000;
  lVar2 = 0;
  *(undefined8 *)(param_1 + 0x84000) = 0x2000;
  do {
    sVar4 = (short)((ulong)uVar3 >> 0x10);
    sVar5 = (short)((ulong)uVar3 >> 0x20);
    sVar6 = (short)((ulong)uVar3 >> 0x30);
    sVar8 = (short)((ulong)uVar7 >> 0x10);
    sVar9 = (short)((ulong)uVar7 >> 0x20);
    sVar10 = (short)((ulong)uVar7 >> 0x30);
    puVar1 = (undefined8 *)(param_1 + 0x80000 + lVar2);
    puVar1[1] = CONCAT26(0x1fff - sVar10,
                         CONCAT24(0x1fff - sVar9,CONCAT22(0x1fff - sVar8,0x1fff - (short)uVar7)));
    *puVar1 = CONCAT26(0x1fff - sVar6,
                       CONCAT24(0x1fff - sVar5,CONCAT22(0x1fff - sVar4,0x1fff - (short)uVar3)));
    lVar2 = lVar2 + 0x10;
    uVar3 = CONCAT26(sVar6 + 8,CONCAT24(sVar5 + 8,CONCAT22(sVar4 + 8,(short)uVar3 + 8)));
    uVar7 = CONCAT26(sVar10 + 8,CONCAT24(sVar9 + 8,CONCAT22(sVar8 + 8,(short)uVar7 + 8)));
  } while (lVar2 != 0x4000);
  return;
}




void FUN_00f36258(undefined8 *param_1,int param_2,ushort *param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = tpidr_el0;
  lVar5 = *(long *)(lVar4 + 0x28);
  if (param_2 != 0) {
    uVar2 = param_2 - 1;
    puVar6 = param_1;
    do {
      param_2 = param_2 + -1;
      puVar7 = (undefined8 *)(param_4 + (ulong)*param_3 * 0xc);
      uVar1 = *(undefined4 *)(puVar7 + 1);
      puVar3 = (undefined8 *)(param_5 + (ulong)*param_3 * 0x10);
      uVar9 = puVar3[1];
      uVar8 = *puVar3;
      *puVar6 = *puVar7;
      *(undefined4 *)(puVar6 + 1) = uVar1;
      *(undefined8 *)((long)puVar6 + 0x14) = uVar9;
      *(undefined8 *)((long)puVar6 + 0xc) = uVar8;
      puVar6 = (undefined8 *)((long)puVar6 + 0x24);
      param_3 = param_3 + 1;
    } while (param_2 != 0);
    param_1 = (undefined8 *)((long)param_1 + (ulong)uVar2 * 0x24 + 0x24);
  }
  if (*(long *)(lVar4 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}




void FUN_00f362ec(undefined8 *param_1,uint param_2,ushort *param_3,long param_4,long param_5,
                 long param_6,float *param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_e4;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  if (1 < param_2) {
    uVar6 = (ulong)*param_3;
    pfVar5 = (float *)(param_4 + uVar6 * 0xc);
    pfVar4 = (float *)(param_4 + (ulong)param_3[1] * 0xc);
    fVar14 = *pfVar5;
    uVar12 = *(undefined8 *)(pfVar5 + 1);
    uVar24 = *(undefined8 *)(pfVar4 + 1);
    local_e4 = *pfVar4;
    fVar17 = (float)((ulong)uVar12 >> 0x20);
    uVar7 = 0;
    puVar8 = param_1;
    uVar11 = CONCAT44(fVar17 - ((float)((ulong)uVar24 >> 0x20) - fVar17),
                      (float)uVar12 - ((float)uVar24 - (float)uVar12));
    fVar17 = fVar14 - (local_e4 - fVar14);
    while( true ) {
      fVar15 = fVar14;
      uVar13 = uVar12;
      fVar26 = (float)uVar13;
      fVar18 = fVar26 - (float)uVar11;
      fVar27 = (float)((ulong)uVar13 >> 0x20);
      fVar19 = fVar27 - (float)((ulong)uVar11 >> 0x20);
      fVar17 = fVar15 - fVar17;
      fVar28 = local_e4 - fVar15;
      fVar9 = fVar17 * fVar17 + fVar18 * fVar18 + fVar19 * fVar19;
      fVar20 = (float)uVar24 - fVar26;
      fVar25 = (float)((ulong)uVar24 >> 0x20);
      fVar21 = fVar25 - fVar27;
      fVar14 = DAT_03218f78;
      fVar16 = DAT_03218f7c;
      fVar10 = DAT_03218f80;
      if (0.0001 <= fVar9) {
        fVar10 = SQRT(fVar9);
        if (NAN(fVar10)) {
          fVar10 = sqrtf(fVar9);
        }
        fVar14 = fVar17 / fVar10;
        fVar16 = fVar18 / fVar10;
        fVar10 = fVar19 / fVar10;
      }
      fVar19 = fVar28 * fVar28 + fVar20 * fVar20 + fVar21 * fVar21;
      fVar17 = DAT_03218f78;
      fVar9 = DAT_03218f7c;
      fVar18 = DAT_03218f80;
      if (0.0001 <= fVar19) {
        fVar18 = SQRT(fVar19);
        if (NAN(fVar18)) {
          fVar18 = sqrtf(fVar19);
        }
        fVar17 = fVar28 / fVar18;
        fVar9 = fVar20 / fVar18;
        fVar18 = fVar21 / fVar18;
      }
      fVar14 = (fVar14 + fVar17) * 0.5;
      fVar16 = (fVar16 + fVar9) * 0.5;
      fVar17 = (fVar10 + fVar18) * 0.5;
      if (fVar14 * fVar14 + fVar16 * fVar16 + fVar17 * fVar17 < 0.0001) {
        fVar14 = DAT_03218f78;
        fVar17 = DAT_03218f80;
        fVar16 = DAT_03218f7c;
      }
      fVar18 = fVar15 - *param_7;
      fVar23 = fVar26 - param_7[1];
      fVar19 = fVar27 - param_7[2];
      fVar9 = fVar18 * fVar18 + fVar23 * fVar23 + fVar19 * fVar19;
      fVar10 = SQRT(fVar9);
      if (NAN(fVar10)) {
        fVar10 = sqrtf(fVar9);
      }
      fVar22 = fVar17 * (fVar23 / fVar10) - fVar16 * (fVar19 / fVar10);
      fVar19 = fVar14 * (fVar19 / fVar10) - fVar17 * (fVar18 / fVar10);
      fVar9 = fVar16 * (fVar18 / fVar10) - fVar14 * (fVar23 / fVar10);
      fVar10 = fVar9 * fVar9 + fVar22 * fVar22 + fVar19 * fVar19;
      fVar14 = DAT_03218f68._4_4_;
      fVar17 = (float)DAT_03218f68;
      fVar16 = DAT_03218f70;
      if (0.0001 <= fVar10) {
        fVar16 = SQRT(fVar10);
        if (NAN(fVar16)) {
          fVar16 = sqrtf(fVar10);
        }
        fVar14 = fVar19 / fVar16;
        fVar17 = fVar22 / fVar16;
        fVar16 = fVar9 / fVar16;
      }
      fVar9 = *(float *)(param_5 + (ulong)(uint)((int)uVar6 << 1) * 4) * 0.5;
      puVar1 = (undefined8 *)(param_6 + (ulong)(uint)((int)uVar6 << 2) * 4);
      uVar11 = puVar1[1];
      uVar12 = *puVar1;
      *(float *)(puVar8 + 1) = fVar27 - fVar16 * fVar9;
      *puVar8 = CONCAT44(fVar26 - fVar14 * fVar9,fVar15 - fVar17 * fVar9);
      fVar10 = (1.0 / (float)param_2) * (float)(uVar7 & 0xffffffff);
      *(undefined4 *)((long)puVar8 + 0x1c) = 0x3f800000;
      *(float *)(puVar8 + 4) = fVar10;
      *(undefined8 *)((long)puVar8 + 0x14) = uVar11;
      *(undefined8 *)((long)puVar8 + 0xc) = uVar12;
      *(float *)((long)puVar8 + 0x2c) = fVar27 + fVar16 * fVar9;
      *(ulong *)((long)puVar8 + 0x24) = CONCAT44(fVar26 + fVar14 * fVar9,fVar15 + fVar17 * fVar9);
      *(undefined4 *)(puVar8 + 8) = 0;
      *(float *)((long)puVar8 + 0x44) = fVar10;
      puVar8[7] = uVar11;
      puVar8[6] = uVar12;
      if ((uint)uVar7 < param_2 - 2) {
        pfVar4 = (float *)(param_4 + (ulong)param_3[uVar7 + 2] * 0xc);
        fVar28 = *pfVar4;
        uVar11 = *(undefined8 *)(pfVar4 + 1);
      }
      else {
        fVar28 = local_e4 + fVar28;
        uVar11 = CONCAT44(fVar25 + fVar21,(float)uVar24 + fVar20);
      }
      if (param_2 - 1 == (uint)uVar7) break;
      uVar6 = (ulong)param_3[uVar7 + 1];
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 9;
      uVar12 = uVar24;
      fVar14 = local_e4;
      uVar24 = uVar11;
      uVar11 = uVar13;
      fVar17 = fVar15;
      local_e4 = fVar28;
    }
    param_1 = param_1 + (ulong)(param_2 - 1) * 9 + 9;
  }
  if (*(long *)(lVar2 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}




undefined8 *
FUN_00f36778(undefined8 *param_1,uint param_2,ushort *param_3,long param_4,long param_5,long param_6
            ,float *param_7,uint param_8,byte param_9,float *param_10)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_11c;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  if ((param_8 != 0) && (param_2 != 0)) {
    uVar8 = 0;
    do {
      uVar1 = *param_3;
      uVar6 = (ulong)uVar1;
      pfVar4 = (float *)(param_4 + uVar6 * 0xc);
      fVar15 = *pfVar4;
      fVar27 = pfVar4[1];
      fVar28 = pfVar4[2];
      puVar5 = (undefined8 *)(param_6 + uVar6 * 0x10);
      uVar12 = puVar5[1];
      uVar11 = *puVar5;
      local_11c = 0.0;
      if ((param_9 & 1) != 0) {
        fVar9 = (*param_10 - fVar15) * (*param_10 - fVar15) +
                (param_10[1] - fVar27) * (param_10[1] - fVar27) +
                (param_10[2] - fVar28) * (param_10[2] - fVar28);
        local_11c = SQRT(fVar9);
        if (NAN(local_11c)) {
          local_11c = sqrtf(fVar9);
        }
      }
      uVar7 = 0;
      do {
        fVar16 = *param_10;
        fVar26 = param_10[1];
        fVar19 = param_10[2];
        fVar21 = fVar16 - fVar15;
        fVar24 = fVar26 - fVar27;
        fVar14 = *(float *)(param_5 + uVar6 * 8);
        fVar13 = *(float *)(param_5 + (ulong)((uint)uVar1 << 1 | 1) * 4);
        fVar23 = (1.0 / (float)param_8) * (float)uVar7;
        fVar25 = fVar19 - fVar28;
        fVar10 = fVar21 * fVar21 + fVar24 * fVar24 + fVar25 * fVar25;
        fVar17 = 1.0 - fVar23;
        fVar9 = DAT_03218f78;
        fVar18 = DAT_03218f7c;
        fVar20 = DAT_03218f80;
        if (0.0001 <= fVar10) {
          fVar20 = SQRT(fVar10);
          if (NAN(fVar20)) {
            fVar20 = sqrtf(fVar10);
          }
          fVar9 = fVar21 / fVar20;
          fVar18 = fVar24 / fVar20;
          fVar20 = fVar25 / fVar20;
        }
        fVar22 = *param_7 - fVar15;
        fVar24 = param_7[1] - fVar27;
        fVar25 = param_7[2] - fVar28;
        fVar21 = fVar22 * fVar22 + fVar24 * fVar24 + fVar25 * fVar25;
        fVar10 = SQRT(fVar21);
        if (NAN(fVar10)) {
          fVar10 = sqrtf(fVar21);
        }
        fVar16 = fVar15 * fVar17 + fVar23 * fVar16;
        fVar21 = fVar27 * fVar17 + fVar23 * fVar26;
        fVar26 = fVar18 * (fVar25 / fVar10) - fVar20 * (fVar24 / fVar10);
        fVar25 = fVar20 * (fVar22 / fVar10) - fVar9 * (fVar25 / fVar10);
        fVar20 = fVar28 * fVar17 + fVar23 * fVar19;
        fVar10 = fVar9 * (fVar24 / fVar10) - fVar18 * (fVar22 / fVar10);
        fVar9 = fVar10 * fVar10 + fVar26 * fVar26 + fVar25 * fVar25;
        fVar18 = fVar17 * fVar14 + fVar23 * fVar13;
        if (0.0001 <= fVar9) {
          fVar13 = SQRT(fVar9);
          if (NAN(fVar13)) {
            fVar13 = sqrtf(fVar9);
          }
          fVar26 = fVar26 / fVar13;
          fVar25 = fVar25 / fVar13;
          fVar10 = fVar10 / fVar13;
        }
        fVar9 = fVar18 * 0.5;
        fVar13 = fVar16 + fVar9 * fVar26;
        fVar14 = fVar21 + fVar9 * fVar25;
        fVar17 = fVar20 + fVar9 * fVar10;
        fVar16 = fVar16 - fVar9 * fVar26;
        fVar21 = fVar21 - fVar9 * fVar25;
        fVar20 = fVar20 - fVar9 * fVar10;
        if ((param_9 & 1) != 0) {
          fVar23 = fVar23 * local_11c * (1.0 / fVar18);
        }
        puVar5 = param_1;
        if ((uVar8 != 0) && (uVar7 == 0)) {
          *(float *)(param_1 + 1) = fVar17;
          *param_1 = CONCAT44(fVar14,fVar13);
          *(undefined4 *)((long)param_1 + 0x1c) = 0;
          *(float *)(param_1 + 4) = fVar23;
          *(undefined8 *)((long)param_1 + 0x14) = uVar12;
          *(undefined8 *)((long)param_1 + 0xc) = uVar11;
          puVar5 = (undefined8 *)((long)param_1 + 0x24);
        }
        *(float *)(puVar5 + 1) = fVar17;
        *puVar5 = CONCAT44(fVar14,fVar13);
        *(undefined4 *)((long)puVar5 + 0x1c) = 0;
        *(float *)(puVar5 + 4) = fVar23;
        *(undefined8 *)((long)puVar5 + 0x14) = uVar12;
        *(undefined8 *)((long)puVar5 + 0xc) = uVar11;
        *(float *)((long)puVar5 + 0x2c) = fVar20;
        *(ulong *)((long)puVar5 + 0x24) = CONCAT44(fVar21,fVar16);
        *(float *)((long)puVar5 + 0x44) = fVar23;
        *(undefined4 *)(puVar5 + 8) = 0x3f800000;
        param_1 = puVar5 + 9;
        puVar5[7] = uVar12;
        puVar5[6] = uVar11;
        if ((uVar8 < param_2 - 1) && (param_8 == uVar7)) {
          *(float *)(puVar5 + 10) = fVar20;
          *param_1 = CONCAT44(fVar21,fVar16);
          *(undefined4 *)((long)puVar5 + 100) = 0x3f800000;
          *(float *)(puVar5 + 0xd) = fVar23;
          *(undefined8 *)((long)puVar5 + 0x5c) = uVar12;
          *(undefined8 *)((long)puVar5 + 0x54) = uVar11;
          param_1 = (undefined8 *)((long)puVar5 + 0x6c);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 <= param_8);
      uVar8 = uVar8 + 1;
      param_3 = param_3 + 1;
    } while (uVar8 != param_2);
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 *
FUN_00f36bdc(undefined8 *param_1,uint param_2,ushort *param_3,long param_4,long param_5,long param_6
            ,float *param_7,uint param_8,byte param_9,undefined8 *param_10,undefined8 *param_11,
            undefined8 *param_12)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined4 uVar36;
  undefined8 uVar35;
  float fVar37;
  undefined8 uVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  long local_1e0;
  ulong local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  uint local_1bc;
  long local_1b8;
  long local_1b0;
  ushort *local_1a8;
  ulong local_1a0;
  undefined8 uStack_198;
  ulong local_190;
  undefined8 uStack_188;
  float local_174;
  float local_170;
  uint local_16c;
  ulong local_168;
  uint local_160;
  float local_15c;
  undefined8 local_158;
  float local_14c;
  undefined8 local_148;
  ulong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  ulong local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_bc;
  float local_b4;
  long local_b0;
  ulong uVar38;
  
  plVar6 = &local_1e0;
  local_1b0 = param_6;
  local_1b8 = param_4;
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  if ((param_8 != 0) && (local_1e0 = lVar3, lVar3 = local_1e0, param_2 != 0)) {
    local_1c8 = param_12;
    local_1d0 = param_11;
    fVar32 = 1.0 / (float)param_8;
    local_160 = (uint)param_9;
    local_168 = (ulong)param_8;
    local_16c = param_2 - 1;
    fVar33 = 0.0001;
    local_1d8 = (ulong)(param_8 + 1) * 4 + 0xf & 0x7fffffff0;
    local_170 = fVar32;
    uVar8 = 0;
    local_174 = 0.0001;
    local_1bc = param_2;
    do {
      local_1a8 = param_3;
      uVar1 = *param_3;
      uVar5 = (ulong)uVar1;
      puVar4 = (undefined8 *)(local_1b0 + uVar5 * 0x10);
      puVar2 = (undefined8 *)(local_1b8 + uVar5 * 0xc);
      uVar34 = *puVar2;
      fVar37 = *(float *)(puVar2 + 1);
      uVar38 = (ulong)(uint)fVar37;
      uStack_d8 = puVar4[1];
      local_e0 = *puVar4;
      uVar11 = *param_10;
      fVar12 = *(float *)(param_10 + 1);
      uVar39 = CONCAT44((float)((ulong)uVar34 >> 0x20) + (float)((ulong)*local_1c8 >> 0x20),
                        (float)uVar34 + (float)*local_1c8);
      fVar37 = fVar37 + *(float *)(local_1c8 + 1);
      uVar40 = CONCAT44((float)((ulong)uVar11 >> 0x20) + (float)((ulong)*local_1d0 >> 0x20),
                        (float)uVar11 + (float)*local_1d0);
      fVar41 = fVar12 + *(float *)(local_1d0 + 1);
      plVar6 = (long *)((long)plVar6 - local_1d8);
      uStack_128 = 0;
      local_130 = uVar34;
      uStack_138 = 0;
      local_140 = uVar38;
      local_148 = uVar39;
      local_14c = fVar37;
      uVar7 = 0;
      local_158 = uVar40;
      local_15c = fVar41;
      uVar9 = uVar38;
      uVar35 = uVar34;
      while( true ) {
        fVar14 = fVar32 * (float)uVar7;
        fVar18 = 1.0 - fVar14;
        fVar10 = (float)((ulong)uVar39 >> 0x20);
        fVar13 = (float)((ulong)uVar40 >> 0x20);
        fVar26 = (float)uVar40 * fVar14 + (float)uVar39 * fVar18;
        fVar28 = fVar13 * fVar14 + fVar10 * fVar18;
        fVar30 = fVar41 * fVar14 + fVar37 * fVar18;
        fVar15 = (((float)uVar39 * fVar14 + (float)uVar35 * fVar18) * fVar18 + fVar26 * fVar14) *
                 fVar18 + (fVar26 * fVar18 +
                          ((float)uVar40 * fVar18 + (float)uVar11 * fVar14) * fVar14) * fVar14;
        fVar26 = ((fVar10 * fVar14 + (float)((ulong)uVar35 >> 0x20) * fVar18) * fVar18 +
                 fVar28 * fVar14) * fVar18 +
                 (fVar28 * fVar18 +
                 (fVar13 * fVar18 + (float)((ulong)uVar11 >> 0x20) * fVar14) * fVar14) * fVar14;
        uVar11 = CONCAT44(fVar26,fVar15);
        fVar14 = fVar18 * (fVar18 * (fVar37 * fVar14 + (float)uVar38 * fVar18) + fVar14 * fVar30) +
                 fVar14 * (fVar18 * fVar30 + fVar14 * (fVar41 * fVar18 + fVar14 * fVar12));
        if (uVar7 == 0) {
          *(undefined4 *)plVar6 = 0;
          uVar34 = uVar11;
        }
        else {
          fVar15 = fVar15 - (float)uVar34;
          fVar26 = fVar26 - (float)((ulong)uVar34 >> 0x20);
          fVar12 = fVar14 - (float)uVar9;
          fVar18 = *(float *)((long)plVar6 + (ulong)(uVar7 - 1) * 4);
          fVar26 = fVar15 * fVar15 + fVar26 * fVar26 + fVar12 * fVar12;
          fVar12 = SQRT(fVar26);
          if (NAN(fVar12)) {
            uStack_e8 = 0;
            local_f0 = uVar11;
            fVar12 = sqrtf(fVar26);
            uVar11 = local_f0;
            fVar32 = local_170;
            fVar33 = local_174;
            uVar35 = local_130;
            uVar38 = local_140;
            uVar39 = local_148;
            fVar37 = local_14c;
            uVar40 = local_158;
            fVar41 = local_15c;
          }
          *(float *)((long)plVar6 + (ulong)uVar7 * 4) = fVar18 + fVar12;
          uVar34 = uVar11;
        }
        uVar7 = uVar7 + 1;
        if (param_8 < uVar7) break;
        uVar11 = *param_10;
        fVar12 = *(float *)(param_10 + 1);
        uVar9 = (ulong)(uint)fVar14;
      }
      uVar36 = (undefined4)((ulong)uVar35 >> 0x20);
      local_f0 = CONCAT44(local_f0._4_4_,uVar36);
      local_f8 = CONCAT44((int)uVar35,(int)uVar38);
      uVar7 = 0;
      local_118 = (ulong)((uint)uVar1 * 2 | 1);
      uStack_108 = CONCAT44(uVar36,uVar36);
      local_110 = CONCAT44((int)uVar38,uVar36);
      do {
        fVar42 = fVar32 * (float)uVar7;
        fVar43 = 1.0 - fVar42;
        fVar30 = (float)((ulong)uVar40 >> 0x20);
        fVar14 = (float)((ulong)uVar39 >> 0x20);
        fVar16 = (float)uVar40 * fVar42 + (float)uVar39 * fVar43;
        fVar17 = fVar30 * fVar42 + fVar14 * fVar43;
        fVar19 = fVar41 * fVar42 + fVar37 * fVar43;
        fVar12 = (float)*param_10;
        fVar28 = (float)((ulong)*param_10 >> 0x20);
        fVar26 = fVar28 - (float)local_f0;
        fVar15 = ((float)uVar39 * fVar42 + (float)uVar35 * fVar43) * fVar43;
        fVar18 = (fVar14 * fVar42 + (float)((ulong)uVar35 >> 0x20) * fVar43) * fVar43;
        fVar27 = fVar16 * fVar42;
        fVar29 = fVar17 * fVar42;
        fVar13 = fVar43 * (fVar37 * fVar42 + (float)uVar38 * fVar43);
        fVar31 = fVar42 * fVar19;
        fVar20 = *(float *)(param_10 + 1) - (float)local_f8;
        fVar21 = fVar12 - (float)((ulong)local_f8 >> 0x20);
        fVar16 = fVar16 * fVar43;
        fVar17 = fVar17 * fVar43;
        fVar14 = ((float)uVar40 * fVar43 + fVar12 * fVar42) * fVar42;
        fVar28 = (fVar30 * fVar43 + fVar28 * fVar42) * fVar42;
        fVar12 = *(float *)(param_5 + uVar5 * 8);
        fVar23 = *(float *)(param_5 + local_118 * 4);
        fVar19 = fVar43 * fVar19;
        fVar10 = fVar42 * (fVar41 * fVar43 + fVar42 * *(float *)(param_10 + 1));
        fVar30 = fVar21 * fVar21 + fVar26 * fVar26 + fVar20 * fVar20;
        if (fVar33 <= fVar30) {
          fVar24 = SQRT(fVar30);
          if (NAN(fVar24)) {
            uStack_188 = 0;
            uStack_198 = 0;
            local_1a0 = (ulong)(uint)fVar43;
            local_190 = (ulong)(uint)fVar42;
            fVar24 = sqrtf(fVar30);
            fVar43 = (float)local_1a0;
            fVar42 = (float)local_190;
            fVar32 = local_170;
            fVar33 = local_174;
            uVar35 = local_130;
            uVar38 = local_140;
            uVar39 = local_148;
            fVar37 = local_14c;
            uVar40 = local_158;
            fVar41 = local_15c;
          }
          fVar26 = fVar26 / fVar24;
          uVar9 = CONCAT44(fVar21 / fVar24,fVar20 / fVar24);
        }
        else {
          uVar9 = CONCAT44(DAT_03218f78,DAT_03218f80);
          fVar26 = DAT_03218f7c;
        }
        fVar21 = (float)uVar35 - *param_7;
        fVar12 = fVar43 * fVar12;
        fVar24 = (float)local_110 - (float)*(undefined8 *)(param_7 + 1);
        fVar25 = (float)((ulong)local_110 >> 0x20) -
                 (float)((ulong)*(undefined8 *)(param_7 + 1) >> 0x20);
        fVar20 = fVar21 * fVar21 + fVar24 * fVar24 + fVar25 * fVar25;
        fVar30 = SQRT(fVar20);
        if (NAN(fVar30)) {
          uStack_188 = 0;
          local_1a0 = CONCAT44(local_1a0._4_4_,fVar12);
          local_190 = uVar9;
          fVar30 = sqrtf(fVar20);
          uVar9 = local_190;
          fVar12 = (float)local_1a0;
          fVar32 = local_170;
          fVar33 = local_174;
          uVar35 = local_130;
          uVar38 = local_140;
          uVar39 = local_148;
          fVar37 = local_14c;
          uVar40 = local_158;
          fVar41 = local_15c;
        }
        fVar20 = (float)(uVar9 >> 0x20);
        fVar22 = fVar26 * (fVar21 / fVar30) - fVar20 * (fVar24 / fVar30);
        fVar24 = (float)uVar9 * (fVar24 / fVar30) - fVar26 * (fVar25 / fVar30);
        fVar30 = fVar20 * (fVar25 / fVar30) - (float)uVar9 * (fVar21 / fVar30);
        fVar26 = fVar22 * fVar22 + fVar24 * fVar24 + fVar30 * fVar30;
        fVar14 = (fVar15 + fVar27) * fVar43 + (fVar16 + fVar14) * fVar42;
        fVar18 = (fVar18 + fVar29) * fVar43 + (fVar17 + fVar28) * fVar42;
        fVar15 = fVar43 * (fVar13 + fVar31) + fVar42 * (fVar19 + fVar10);
        fVar12 = fVar12 + fVar42 * fVar23;
        if (fVar33 <= fVar26) {
          fVar28 = SQRT(fVar26);
          if (NAN(fVar28)) {
            fVar28 = sqrtf(fVar26);
            fVar32 = local_170;
            fVar33 = local_174;
            uVar35 = local_130;
            uVar38 = local_140;
            uVar39 = local_148;
            fVar37 = local_14c;
            uVar40 = local_158;
            fVar41 = local_15c;
          }
          fVar24 = fVar24 / fVar28;
          fVar30 = fVar30 / fVar28;
          fVar22 = fVar22 / fVar28;
        }
        fVar26 = fVar12 * 0.5;
        local_c0 = fVar15 + fVar26 * fVar22;
        local_b4 = fVar15 - fVar26 * fVar22;
        local_c8 = CONCAT44(fVar18 + fVar30 * fVar26,fVar14 + fVar24 * fVar26);
        fVar15 = *(float *)((long)plVar6 + (ulong)uVar7 * 4) /
                 *(float *)((long)plVar6 + local_168 * 4);
        local_bc = CONCAT44(fVar18 - fVar30 * fVar26,fVar14 - fVar24 * fVar26);
        if ((local_160 & 1) != 0) {
          fVar15 = fVar15 * (1.0 / fVar12) * *(float *)((long)plVar6 + local_168 * 4);
        }
        puVar4 = param_1;
        if ((uVar8 != 0) && (uVar7 == 0)) {
          *(float *)(param_1 + 1) = local_c0;
          *param_1 = local_c8;
          *(undefined4 *)((long)param_1 + 0x1c) = 0;
          *(float *)(param_1 + 4) = fVar15;
          *(undefined8 *)((long)param_1 + 0x14) = uStack_d8;
          *(undefined8 *)((long)param_1 + 0xc) = local_e0;
          puVar4 = (undefined8 *)((long)param_1 + 0x24);
        }
        *(float *)(puVar4 + 1) = local_c0;
        *puVar4 = local_c8;
        *(undefined4 *)((long)puVar4 + 0x1c) = 0;
        *(float *)(puVar4 + 4) = fVar15;
        *(undefined8 *)((long)puVar4 + 0x14) = uStack_d8;
        *(undefined8 *)((long)puVar4 + 0xc) = local_e0;
        *(float *)((long)puVar4 + 0x2c) = local_b4;
        *(undefined8 *)((long)puVar4 + 0x24) = local_bc;
        *(float *)((long)puVar4 + 0x44) = fVar15;
        *(undefined4 *)(puVar4 + 8) = 0x3f800000;
        param_1 = puVar4 + 9;
        puVar4[7] = uStack_d8;
        puVar4[6] = local_e0;
        if ((uVar8 < local_16c) && (param_8 == uVar7)) {
          *(float *)(puVar4 + 10) = local_b4;
          *param_1 = local_bc;
          *(undefined4 *)((long)puVar4 + 100) = 0x3f800000;
          *(float *)(puVar4 + 0xd) = fVar15;
          *(undefined8 *)((long)puVar4 + 0x5c) = uStack_d8;
          *(undefined8 *)((long)puVar4 + 0x54) = local_e0;
          param_1 = (undefined8 *)((long)puVar4 + 0x6c);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 <= param_8);
      uVar8 = uVar8 + 1;
      param_3 = local_1a8 + 1;
      lVar3 = local_1e0;
    } while (uVar8 != local_1bc);
  }
  if (*(long *)(lVar3 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}

