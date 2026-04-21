// functions/01a50 — 1 functions
#include "libGameKindred.h"




undefined8 * FUN_01a50174(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int line;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  if (0x7fffff < param_2) {
    iVar5 = 0x72;
    line = 0x128;
LAB_01a5024c:
    ERR_put_error(3,0x78,iVar5,"bn_lib.c",line);
    return (undefined8 *)0x0;
  }
  if ((*(byte *)((long)param_1 + 0x14) >> 1 & 1) != 0) {
    iVar5 = 0x69;
    line = 300;
    goto LAB_01a5024c;
  }
  puVar4 = CRYPTO_malloc(param_2 << 3,"bn_lib.c",0x12f);
  if (puVar4 == (undefined8 *)0x0) {
    iVar5 = 0x41;
    line = 0x131;
    goto LAB_01a5024c;
  }
  puVar6 = (undefined8 *)*param_1;
  if (puVar6 == (undefined8 *)0x0) {
    return puVar4;
  }
  uVar2 = *(uint *)(param_1 + 1);
  puVar10 = puVar4;
  if ((int)uVar2 < 4) {
    if ((uVar2 & 3) == 0) {
      return puVar4;
    }
    goto LAB_01a5032c;
  }
  uVar12 = (int)uVar2 >> 2;
  uVar7 = 0xfffffffe;
  uVar1 = uVar7;
  if (-2 < (int)~uVar12) {
    uVar1 = ~uVar12;
  }
  uVar14 = (ulong)(uVar12 + uVar1 + 1);
  puVar13 = puVar6;
  if (uVar14 + 1 < 4) {
LAB_01a50308:
    iVar5 = uVar12 + 1;
    puVar11 = puVar10;
    do {
      uVar16 = *puVar13;
      uVar18 = puVar13[3];
      uVar17 = puVar13[2];
      iVar5 = iVar5 + -1;
      puVar10 = puVar11 + 4;
      puVar11[1] = puVar13[1];
      *puVar11 = uVar16;
      puVar11[3] = uVar18;
      puVar11[2] = uVar17;
      puVar11 = puVar10;
      puVar13 = puVar13 + 4;
    } while (1 < iVar5);
  }
  else {
    if (-2 < (int)~uVar12) {
      uVar7 = ~uVar12;
    }
    uVar8 = (ulong)(uVar12 + uVar7 + 1);
    if ((puVar4 < puVar6 + uVar8 * 4 + 4) && (puVar6 < puVar4 + uVar8 * 4 + 4)) goto LAB_01a50308;
    uVar1 = uVar12 + uVar1 + 2 & 3;
    lVar9 = (uVar14 + 1) - (ulong)uVar1;
    puVar13 = puVar6 + 8;
    uVar12 = uVar12 - (int)lVar9;
    puVar10 = puVar4 + lVar9 * 4;
    lVar15 = (uVar14 + 1) - (ulong)uVar1;
    puVar11 = puVar4 + 8;
    do {
      uVar17 = puVar13[-7];
      uVar16 = puVar13[-8];
      uVar19 = puVar13[-5];
      uVar18 = puVar13[-6];
      puVar3 = puVar13 + -3;
      uVar20 = puVar13[-4];
      uVar22 = puVar13[-1];
      uVar21 = puVar13[-2];
      uVar24 = puVar13[1];
      uVar23 = *puVar13;
      uVar26 = puVar13[3];
      uVar25 = puVar13[2];
      uVar28 = puVar13[5];
      uVar27 = puVar13[4];
      uVar30 = puVar13[7];
      uVar29 = puVar13[6];
      puVar13 = puVar13 + 0x10;
      lVar15 = lVar15 + -4;
      puVar11[-3] = *puVar3;
      puVar11[-4] = uVar20;
      puVar11[-1] = uVar22;
      puVar11[-2] = uVar21;
      puVar11[-7] = uVar17;
      puVar11[-8] = uVar16;
      puVar11[-5] = uVar19;
      puVar11[-6] = uVar18;
      puVar11[5] = uVar28;
      puVar11[4] = uVar27;
      puVar11[7] = uVar30;
      puVar11[6] = uVar29;
      puVar11[1] = uVar24;
      *puVar11 = uVar23;
      puVar11[3] = uVar26;
      puVar11[2] = uVar25;
      puVar11 = puVar11 + 0x10;
    } while (lVar15 != 0);
    puVar13 = puVar6 + lVar9 * 4;
    if (uVar1 != 0) goto LAB_01a50308;
  }
  puVar6 = puVar6 + uVar14 * 4 + 4;
  if ((uVar2 & 3) == 0) {
    return puVar4;
  }
LAB_01a5032c:
  if ((uVar2 & 3) != 1) {
    if ((uVar2 & 3) != 2) {
      puVar10[2] = puVar6[2];
    }
    puVar10[1] = puVar6[1];
  }
  *puVar10 = *puVar6;
  return puVar4;
}

