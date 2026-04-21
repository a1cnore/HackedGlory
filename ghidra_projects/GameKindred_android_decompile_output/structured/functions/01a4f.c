// functions/01a4f — 1 functions
#include "libGameKindred.h"




undefined8 FUN_01a4f60c(BIGNUM *param_1,uint param_2,long param_3,uint param_4,uint param_5)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  BIGNUM *pBVar5;
  uint uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  
  if ((param_1->dmax < (int)param_2) &&
     (pBVar5 = bn_expand2(param_1,param_2), pBVar5 == (BIGNUM *)0x0)) {
    return 0;
  }
  uVar14 = 1 << (ulong)(param_5 & 0x1f);
  if ((int)param_5 < 4) {
    if ((int)param_2 < 1) goto LAB_01a4f870;
    uVar7 = 0;
    do {
      lVar13 = 0;
      uVar11 = 0;
      do {
        uVar12 = (uint)lVar13;
        lVar2 = lVar13 * 8;
        lVar13 = lVar13 + 1;
        uVar11 = *(ulong *)(param_3 + lVar2) &
                 -(ulong)(((uVar12 ^ param_4) - 1 & (param_4 ^ 0x80000000)) >> 0x1f) | uVar11;
      } while (lVar13 < (int)uVar14);
      param_3 = param_3 + (-(ulong)(uVar14 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar14 << 3);
      param_1->d[uVar7] = uVar11;
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_2);
  }
  else {
    if ((int)param_2 < 1) goto LAB_01a4f870;
    param_5 = param_5 - 2;
    if (param_5 == 0x1f) {
      puVar8 = param_1->d;
      uVar7 = 0;
      uVar11 = (ulong)param_2;
      if (3 < param_2) {
        uVar7 = uVar11 & 0xfffffffc;
        puVar9 = puVar8 + 2;
        uVar10 = uVar7;
        do {
          puVar9[-1] = 0;
          puVar9[-2] = 0;
          puVar9[1] = 0;
          *puVar9 = 0;
          uVar10 = uVar10 - 4;
          puVar9 = puVar9 + 4;
        } while (uVar10 != 0);
        if (uVar7 == uVar11) goto LAB_01a4f848;
      }
      lVar13 = uVar11 - uVar7;
      puVar8 = puVar8 + uVar7;
      do {
        lVar13 = lVar13 + -1;
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      } while (lVar13 != 0);
    }
    else {
      uVar12 = (int)param_4 >> (param_5 & 0x1f);
      iVar4 = 1 << (ulong)(param_5 & 0x1f);
      uVar3 = uVar12 ^ 0x80000000;
      param_4 = iVar4 - 1U & param_4;
      uVar7 = 0;
      do {
        lVar13 = 0;
        uVar11 = 0;
        do {
          uVar6 = (uint)lVar13;
          lVar2 = lVar13 * 8;
          lVar13 = lVar13 + 1;
          uVar11 = (*(ulong *)(param_3 + (long)(int)(iVar4 + uVar6) * 8) &
                    -(ulong)(((uVar12 ^ 1) - 1 & uVar3) >> 0x1f) |
                    *(ulong *)(param_3 + lVar2) & -(ulong)((uVar12 - 1 & uVar3) >> 0x1f) |
                    *(ulong *)(param_3 + (long)(int)(iVar4 * 2 + uVar6) * 8) &
                    -(ulong)(((uVar12 ^ 2) - 1 & uVar3) >> 0x1f) |
                   *(ulong *)(param_3 + (long)(int)((3 << (ulong)(param_5 & 0x1f)) + uVar6) * 8) &
                   -(ulong)(((uVar12 ^ 3) - 1 & uVar3) >> 0x1f)) &
                   -(ulong)(((param_4 ^ uVar6) - 1 & (param_4 ^ 0x80000000)) >> 0x1f) | uVar11;
        } while (lVar13 < iVar4);
        param_3 = param_3 + (long)(int)uVar14 * 8;
        param_1->d[uVar7] = uVar11;
        uVar7 = uVar7 + 1;
      } while (uVar7 != param_2);
    }
  }
LAB_01a4f848:
  param_1->top = param_2;
  if ((int)param_2 < 1) {
    return 1;
  }
  puVar8 = param_1->d + (int)(param_2 - 1);
  uVar14 = param_2;
  do {
    param_2 = uVar14;
    if (*puVar8 != 0) break;
    param_2 = uVar14 - 1;
    puVar8 = puVar8 + -1;
    bVar1 = 0 < (int)uVar14;
    uVar14 = param_2;
  } while (param_2 != 0 && bVar1);
LAB_01a4f870:
  param_1->top = param_2;
  return 1;
}

