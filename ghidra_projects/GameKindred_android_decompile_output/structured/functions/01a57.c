// functions/01a57 — 1 functions
#include "libGameKindred.h"




undefined8 FUN_01a57450(BIGNUM *param_1,BIGNUM *param_2,long param_3)

{
  bool bVar1;
  uint num;
  ulong *puVar2;
  BIGNUM *pBVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  long lVar15;
  ulong *puVar16;
  ulong *puVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  
  num = *(uint *)(param_3 + 0x28);
  uVar12 = (ulong)num;
  if (num == 0) {
    param_1->top = 0;
    return 1;
  }
  iVar6 = num * 2;
  if ((param_2->dmax < iVar6) && (pBVar3 = bn_expand2(param_2,iVar6), pBVar3 == (BIGNUM *)0x0)) {
    return 0;
  }
  iVar7 = param_2->top;
  puVar13 = param_2->d;
  param_2->neg = param_2->neg ^ *(uint *)(param_3 + 0x30);
  puVar16 = *(ulong **)(param_3 + 0x20);
  if (iVar7 < iVar6) {
    memset(puVar13 + iVar7,0,(ulong)(uint)((iVar6 + -1) - iVar7) * 8 + 8);
  }
  lVar18 = (long)(int)num;
  uVar20 = 0;
  param_2->top = iVar6;
  if (0 < (int)num) {
    lVar15 = *(long *)(param_3 + 0x50);
    uVar19 = num;
    do {
      uVar4 = bn_mul_add_words(puVar13,puVar16,num,*puVar13 * lVar15);
      uVar8 = puVar13[lVar18];
      uVar5 = uVar4 + uVar20 + uVar8;
      puVar13[lVar18] = uVar5;
      uVar19 = uVar19 - 1;
      uVar20 = (ulong)((uint)uVar20 | (uint)(uVar4 + uVar20 != 0)) & (ulong)(uVar5 <= uVar8);
      puVar13 = puVar13 + 1;
    } while (uVar19 != 0);
  }
  if ((param_1->dmax < (int)num) && (pBVar3 = bn_expand2(param_1,num), pBVar3 == (BIGNUM *)0x0)) {
    return 0;
  }
  param_1->top = num;
  puVar14 = param_1->d;
  param_1->neg = param_2->neg;
  puVar17 = param_2->d;
  puVar13 = puVar17 + lVar18;
  uVar5 = bn_sub_words(puVar14,puVar13,puVar16,num);
  uVar19 = 0;
  puVar16 = (ulong *)((ulong)puVar14 & (uVar20 - uVar5 ^ 0xffffffffffffffff) |
                     uVar20 - uVar5 & (ulong)puVar13);
  if (4 < (int)num) {
    lVar9 = lVar18 + -4;
    lVar15 = lVar9;
    if (lVar9 < 5) {
      lVar15 = 4;
    }
    uVar20 = (lVar15 - 1U >> 2) + 1;
    lVar15 = 0;
    if (uVar20 < 2) {
LAB_01a576ac:
      puVar13 = puVar17 + lVar15 + lVar18 + 2;
      puVar10 = puVar16 + lVar15 + 2;
      puVar11 = puVar14 + lVar15 + 2;
      do {
        uVar20 = puVar10[-2];
        uVar5 = puVar10[-1];
        uVar4 = *puVar10;
        puVar13[-2] = 0;
        uVar8 = puVar10[1];
        lVar15 = lVar15 + 4;
        puVar13[-1] = 0;
        puVar10 = puVar10 + 4;
        puVar11[-2] = uVar20;
        *puVar13 = 0;
        puVar11[-1] = uVar5;
        puVar13[1] = 0;
        puVar13 = puVar13 + 4;
        *puVar11 = uVar4;
        puVar11[1] = uVar8;
        puVar11 = puVar11 + 4;
      } while (lVar15 < lVar9);
    }
    else {
      lVar15 = lVar9;
      if (lVar9 < 5) {
        lVar15 = 4;
      }
      uVar5 = lVar15 - 1U & 0xfffffffffffffffc;
      if ((puVar13 < puVar14 + uVar5 + 4 && puVar14 < puVar17 + uVar5 + lVar18 + 4) ||
         (puVar13 < puVar16 + uVar5 + 4 && puVar16 < puVar17 + uVar5 + lVar18 + 4)) {
        lVar15 = 0;
        goto LAB_01a576ac;
      }
      lVar15 = 0;
      if (puVar14 < puVar16 + uVar5 + 4 && puVar16 < puVar14 + uVar5 + 4) goto LAB_01a576ac;
      uVar4 = uVar20 & 0x7ffffffffffffffe;
      lVar15 = uVar4 << 2;
      uVar5 = uVar4;
      puVar11 = puVar14;
      puVar10 = puVar16;
      do {
        uVar21 = puVar10[1];
        uVar8 = *puVar10;
        uVar23 = puVar10[3];
        uVar22 = puVar10[2];
        uVar25 = puVar10[5];
        uVar24 = puVar10[4];
        uVar27 = puVar10[7];
        uVar26 = puVar10[6];
        puVar13[5] = 0;
        puVar13[4] = 0;
        puVar13[7] = 0;
        puVar13[6] = 0;
        puVar13[1] = 0;
        *puVar13 = 0;
        puVar13[3] = 0;
        puVar13[2] = 0;
        puVar10 = puVar10 + 8;
        uVar5 = uVar5 - 2;
        puVar11[5] = uVar25;
        puVar11[4] = uVar24;
        puVar11[7] = uVar27;
        puVar11[6] = uVar26;
        puVar11[1] = uVar21;
        *puVar11 = uVar8;
        puVar11[3] = uVar23;
        puVar11[2] = uVar22;
        puVar11 = puVar11 + 8;
        puVar13 = puVar13 + 8;
      } while (uVar5 != 0);
      if (uVar20 != uVar4) goto LAB_01a576ac;
    }
    uVar19 = num - 1 & 0xfffffffc;
  }
  if ((int)uVar19 < (int)num) {
    uVar4 = (ulong)uVar19;
    uVar5 = uVar12 - uVar4;
    uVar20 = uVar4;
    if (3 < uVar5) {
      if (((puVar17 + lVar18 + uVar12 <= puVar14 + uVar4 ||
            puVar14 + uVar12 <= puVar17 + lVar18 + uVar4) &&
          (puVar16 + uVar12 <= puVar14 + uVar4 || puVar14 + uVar12 <= puVar16 + uVar4)) &&
         (puVar16 + uVar12 <= puVar17 + lVar18 + uVar4 ||
          puVar17 + lVar18 + uVar12 <= puVar16 + uVar4)) {
        uVar8 = uVar5 & 0xfffffffffffffffc;
        uVar20 = uVar8 + uVar4;
        puVar10 = puVar16 + uVar4 + 2;
        puVar11 = puVar14 + uVar4 + 2;
        puVar13 = puVar17 + lVar18 + uVar4 + 2;
        uVar4 = uVar8;
        do {
          puVar2 = puVar10 + -1;
          uVar21 = puVar10[-2];
          uVar23 = puVar10[1];
          uVar22 = *puVar10;
          uVar4 = uVar4 - 4;
          puVar10 = puVar10 + 4;
          puVar11[-1] = *puVar2;
          puVar11[-2] = uVar21;
          puVar11[1] = uVar23;
          *puVar11 = uVar22;
          puVar13[-1] = 0;
          puVar13[-2] = 0;
          puVar13[1] = 0;
          *puVar13 = 0;
          puVar13 = puVar13 + 4;
          puVar11 = puVar11 + 4;
        } while (uVar4 != 0);
        if (uVar5 == uVar8) goto LAB_01a57810;
      }
    }
    lVar15 = uVar12 - uVar20;
    puVar13 = puVar16 + uVar20;
    puVar16 = puVar17 + uVar20 + lVar18;
    puVar14 = puVar14 + uVar20;
    do {
      lVar15 = lVar15 + -1;
      *puVar14 = *puVar13;
      *puVar16 = 0;
      puVar13 = puVar13 + 1;
      puVar16 = puVar16 + 1;
      puVar14 = puVar14 + 1;
    } while (lVar15 != 0);
  }
LAB_01a57810:
  iVar6 = param_2->top;
  if (0 < iVar6) {
    puVar13 = param_2->d + (iVar6 + -1);
    do {
      iVar7 = iVar6;
      if (*puVar13 != 0) break;
      iVar7 = iVar6 + -1;
      puVar13 = puVar13 + -1;
      bVar1 = 0 < iVar6;
      iVar6 = iVar7;
    } while (iVar7 != 0 && bVar1);
    param_2->top = iVar7;
  }
  iVar6 = param_1->top;
  if (0 < iVar6) {
    puVar13 = param_1->d + (iVar6 + -1);
    do {
      iVar7 = iVar6;
      if (*puVar13 != 0) break;
      iVar7 = iVar6 + -1;
      puVar13 = puVar13 + -1;
      bVar1 = 0 < iVar6;
      iVar6 = iVar7;
    } while (iVar7 != 0 && bVar1);
    param_1->top = iVar7;
  }
  return 1;
}

