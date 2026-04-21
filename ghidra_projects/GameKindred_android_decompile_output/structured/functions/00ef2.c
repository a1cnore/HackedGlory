// functions/00ef2 — 6 functions
#include "libGameKindred.h"




void FUN_00ef200c(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  uint *puVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  float *pfVar11;
  ulong uVar12;
  uint uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  ulong uVar16;
  float *pfVar17;
  float *pfVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 local_a8 [4];
  float local_a4 [7];
  undefined4 local_88 [4];
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  if ((param_2 != 0) && (lVar8 = *(long *)(param_2 + 8), 0 < *(int *)(lVar8 + 0x18))) {
    lVar20 = 0;
    do {
      lVar19 = *(long *)(param_2 + 0x10);
      puVar1 = (uint *)(lVar19 + lVar20 * 0x20);
      uVar15 = (ulong)*(byte *)((long)puVar1 + 0x1e);
      if (uVar15 != 0) {
        uVar16 = 0;
        do {
          uVar5 = *(ushort *)(lVar19 + lVar20 * 0x20 + uVar16 * 2 + 0x10);
          if (((short)uVar5 < 0) && ((param_4 == 0xffffffff || ((uVar5 & 0xff) == param_4)))) {
            lVar8 = lVar19 + lVar20 * 0x20 + 4;
            uVar9 = 0;
            if (uVar16 + 1 != uVar15) {
              uVar9 = uVar16 + 1 & 0xffffffff;
            }
            pfVar17 = (float *)(*(long *)(param_2 + 0x18) +
                               (ulong)*(ushort *)(lVar8 + uVar16 * 2) * 0xc);
            pfVar18 = (float *)(*(long *)(param_2 + 0x18) +
                               (ulong)*(ushort *)(lVar8 + uVar9 * 2) * 0xc);
            uVar7 = FUN_00ef1ae0(param_1,pfVar17,pfVar18,param_3,uVar5 + 4 & 7,local_88,local_a8,4);
            if (0 < (int)uVar7) {
              uVar13 = *(uint *)(param_2 + 4);
              uVar9 = (ulong)uVar7;
              puVar10 = local_88;
              pfVar11 = local_a4;
              do {
                if (uVar13 == 0xffffffff) {
                  uVar13 = 0xffffffff;
                }
                else {
                  lVar8 = *(long *)(param_2 + 0x20);
                  uVar2 = uVar5 & 0xff | 4;
                  puVar14 = (undefined4 *)(lVar8 + (ulong)uVar13 * 0xc);
                  uVar7 = puVar14[1];
                  *(uint *)(param_2 + 4) = uVar7;
                  uVar4 = *puVar10;
                  *(char *)(puVar14 + 2) = (char)uVar16;
                  *(char *)((long)puVar14 + 9) = (char)uVar5;
                  *puVar14 = uVar4;
                  uVar12 = (ulong)uVar13;
                  puVar14[1] = *puVar1;
                  *puVar1 = uVar13;
                  uVar13 = uVar7;
                  if (uVar2 == 6) {
                    fVar21 = pfVar11[-1];
                    fVar23 = *pfVar17;
                    fVar24 = *pfVar18;
                  }
                  else {
                    if (uVar2 != 4) goto LAB_00ef21fc;
                    fVar21 = pfVar11[-1];
                    fVar23 = pfVar17[2];
                    fVar24 = pfVar18[2];
                  }
                  fVar22 = (fVar21 - fVar23) / (fVar24 - fVar23);
                  fVar23 = (*pfVar11 - fVar23) / (fVar24 - fVar23);
                  lVar8 = lVar8 + uVar12 * 0xc;
                  fVar21 = fVar22;
                  if (fVar22 <= fVar23) {
                    fVar21 = fVar23;
                    fVar23 = fVar22;
                  }
                  fVar24 = fVar23;
                  if (1.0 < fVar23) {
                    fVar24 = 1.0;
                  }
                  fVar22 = fVar21;
                  if (1.0 < fVar21) {
                    fVar22 = 1.0;
                  }
                  uVar3 = 0;
                  if (0.0 <= fVar23) {
                    uVar3 = (char)(int)(fVar24 * 255.0);
                  }
                  *(undefined1 *)(lVar8 + 10) = uVar3;
                  uVar3 = 0;
                  if (0.0 <= fVar21) {
                    uVar3 = (char)(int)(fVar22 * 255.0);
                  }
                  *(undefined1 *)(lVar8 + 0xb) = uVar3;
                }
LAB_00ef21fc:
                puVar10 = puVar10 + 1;
                uVar9 = uVar9 - 1;
                pfVar11 = pfVar11 + 2;
              } while (uVar9 != 0);
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar15);
        lVar8 = *(long *)(param_2 + 8);
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < *(int *)(lVar8 + 0x18));
  }
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ef2270(long param_1,long param_2,int *param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if (param_2 != 0) {
    lVar10 = *(long *)(param_3 + 2);
    uVar2 = param_4 + 4U & 7;
    if (param_4 == -1) {
      uVar2 = 0xffffffff;
    }
    if (0 < *(int *)(lVar10 + 0x34)) {
      lVar17 = 0;
      lVar18 = 0;
      do {
        lVar15 = *(long *)(param_3 + 0x12);
        lVar14 = lVar15 + lVar17;
        if ((uint)*(byte *)(lVar14 + 0x1f) == (uVar2 & 0xff)) {
          lVar16 = *(long *)(param_3 + 4);
          uVar7 = *(ushort *)(lVar14 + 0x1c);
          puVar13 = (uint *)(lVar16 + (ulong)uVar7 * 0x20);
          if (*puVar13 != 0xffffffff) {
            lVar1 = lVar15 + lVar17;
            local_74 = *(undefined4 *)(lVar1 + 0x18);
            uStack_70 = *(undefined4 *)(lVar10 + 0x44);
            local_6c = local_74;
            uVar9 = FUN_00ef24dc(param_1,param_2,(float *)(lVar1 + 0xc),&local_74,&local_80);
            if ((uVar9 != 0) &&
               (fVar19 = local_80 - *(float *)(lVar1 + 0xc),
               fVar20 = local_78 - *(float *)(lVar1 + 0x14),
               fVar19 * fVar19 + fVar20 * fVar20 <=
               *(float *)(lVar1 + 0x18) * *(float *)(lVar1 + 0x18))) {
              pfVar11 = (float *)(*(long *)(param_3 + 6) +
                                 (ulong)*(ushort *)(lVar16 + (ulong)uVar7 * 0x20 + 6) * 0xc);
              *pfVar11 = local_80;
              pfVar11[1] = local_7c;
              pfVar11[2] = local_78;
              uVar5 = param_3[1];
              if (uVar5 != 0xffffffff) {
                puVar12 = (uint *)(*(long *)(param_3 + 8) + (ulong)uVar5 * 0xc);
                param_3[1] = puVar12[1];
                *puVar12 = uVar9;
                *(undefined1 *)(puVar12 + 2) = 1;
                *(char *)((long)puVar12 + 9) = (char)uVar2;
                *(undefined2 *)((long)puVar12 + 10) = 0;
                puVar12[1] = *puVar13;
                *puVar13 = uVar5;
              }
              if ((*(byte *)(lVar15 + lVar17 + 0x1e) & 1) != 0) {
                uVar5 = *(uint *)(param_2 + 4);
                if (uVar5 != 0xffffffff) {
                  puVar13 = (uint *)(*(long *)(param_2 + 0x20) + (ulong)uVar5 * 0xc);
                  lVar10 = *(long *)(param_2 + 0x10);
                  *(uint *)(param_2 + 4) = puVar13[1];
                  iVar3 = *(int *)(param_1 + 0x5c);
                  uVar4 = *(uint *)(param_1 + 0x60);
                  lVar15 = *(long *)(param_1 + 0x50);
                  iVar6 = *param_3;
                  uVar7 = *(ushort *)(lVar14 + 0x1c);
                  *(undefined1 *)(puVar13 + 2) = 0xff;
                  *(char *)((long)puVar13 + 9) = (char)param_4;
                  *(undefined2 *)((long)puVar13 + 10) = 0;
                  lVar14 = (ulong)(uVar9 & (1 << (ulong)(uVar4 & 0x1f)) - 1U & 0xffff) * 0x20;
                  *puVar13 = iVar6 << (ulong)(iVar3 + uVar4 & 0x1f) |
                             (int)((ulong)((long)param_3 - lVar15) >> 3) * -0x3b13b13b <<
                             (ulong)(uVar4 & 0x1f) | (uint)uVar7;
                  puVar13[1] = *(uint *)(lVar10 + lVar14);
                  *(uint *)(lVar10 + lVar14) = uVar5;
                }
              }
            }
            lVar10 = *(long *)(param_3 + 2);
          }
        }
        lVar18 = lVar18 + 1;
        lVar17 = lVar17 + 0x24;
      } while (lVar18 < *(int *)(lVar10 + 0x34));
    }
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ef24dc(long param_1,undefined8 param_2,float *param_3,float *param_4,float *param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  float fVar8;
  float fVar9;
  float local_2a4;
  float fStack_2a0;
  float local_29c;
  uint local_298 [128];
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  local_8c = *param_3 - *param_4;
  local_98 = *param_3 + *param_4;
  local_88 = param_3[1] - param_4[1];
  fStack_94 = param_3[1] + param_4[1];
  local_84 = param_3[2] - param_4[2];
  local_90 = param_3[2] + param_4[2];
  uVar3 = FUN_00ef2cac(param_1,param_2,&local_8c,&local_98,local_298,0x80);
  if ((int)uVar3 < 1) {
    uVar5 = 0;
  }
  else {
    fVar9 = 3.4028235e+38;
    uVar5 = 0;
    uVar6 = uVar3 & 0xffffffff;
    puVar7 = local_298;
    do {
      uVar1 = *puVar7;
      uVar3 = FUN_00ef2944(uVar3,param_2,
                           (1 << (ulong)(*(uint *)(param_1 + 0x60) & 0x1f)) - 1U & uVar1,param_3,
                           &local_2a4);
      fVar8 = (local_2a4 - *param_3) * (local_2a4 - *param_3) +
              (fStack_2a0 - param_3[1]) * (fStack_2a0 - param_3[1]) +
              (local_29c - param_3[2]) * (local_29c - param_3[2]);
      if ((fVar8 < fVar9) && (fVar9 = fVar8, uVar5 = uVar1, param_5 != (float *)0x0)) {
        *param_5 = local_2a4;
        param_5[1] = fStack_2a0;
        param_5[2] = local_29c;
      }
      uVar6 = uVar6 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar6 != 0);
  }
  if (*(long *)(lVar2 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}




void FUN_00ef2660(long param_1,int *param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  
  if ((param_2 != (int *)0x0) && (iVar8 = *(int *)(*(long *)(param_2 + 2) + 0x18), 0 < iVar8)) {
    lVar12 = *(long *)(param_1 + 0x50);
    iVar3 = *(int *)(param_1 + 0x5c);
    uVar4 = *(uint *)(param_1 + 0x60);
    iVar5 = *param_2;
    lVar11 = *(long *)(param_2 + 4);
    lVar10 = 0;
    lVar13 = lVar11 + 0xe;
    do {
      puVar2 = (uint *)(lVar11 + lVar10 * 0x20);
      *puVar2 = 0xffffffff;
      if (((*(byte *)((long)puVar2 + 0x1f) & 0xc0) != 0x40) &&
         ((ulong)*(byte *)((long)puVar2 + 0x1e) != 0)) {
        uVar15 = 0xffffffff;
        uVar14 = (ulong)*(byte *)((long)puVar2 + 0x1e);
        do {
          uVar7 = *(ushort *)(lVar13 + uVar14 * 2);
          if (0 < (short)uVar7) {
            uVar6 = param_2[1];
            if (uVar6 != 0xffffffff) {
              puVar9 = (uint *)(*(long *)(param_2 + 8) + (ulong)uVar6 * 0xc);
              param_2[1] = puVar9[1];
              *puVar9 = iVar5 << (ulong)(iVar3 + uVar4 & 0x1f) |
                        (int)((ulong)((long)param_2 - lVar12) >> 3) * -0x3b13b13b <<
                        (ulong)(uVar4 & 0x1f) | uVar7 - 1;
              puVar9[1] = uVar15;
              *(char *)(puVar9 + 2) = (char)(uVar14 - 1);
              *(undefined2 *)((long)puVar9 + 9) = 0xff;
              *(undefined1 *)((long)puVar9 + 0xb) = 0;
              *puVar2 = uVar6;
              uVar15 = uVar6;
            }
          }
          bVar1 = 1 < (long)uVar14;
          uVar14 = uVar14 - 1;
        } while (bVar1);
      }
      lVar10 = lVar10 + 1;
      lVar13 = lVar13 + 0x20;
    } while (lVar10 < iVar8);
  }
  return;
}




void FUN_00ef2750(long param_1,int *param_2)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 uStack_70;
  float local_6c;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if ((param_2 != (int *)0x0) && (lVar10 = *(long *)(param_2 + 2), 0 < *(int *)(lVar10 + 0x34))) {
    iVar2 = *(int *)(param_1 + 0x5c);
    uVar3 = *(uint *)(param_1 + 0x60);
    iVar4 = *param_2;
    lVar14 = *(long *)(param_1 + 0x50);
    lVar16 = 0;
    lVar17 = 0;
    do {
      uStack_70 = *(undefined4 *)(lVar10 + 0x44);
      lVar10 = *(long *)(param_2 + 4);
      pfVar1 = (float *)(*(long *)(param_2 + 0x12) + lVar16);
      local_74 = pfVar1[6];
      uVar7 = *(ushort *)(pfVar1 + 7);
      local_6c = local_74;
      uVar9 = FUN_00ef24dc(param_1,param_2,pfVar1,&local_74,&local_80);
      if ((uVar9 != 0) &&
         ((local_80 - *pfVar1) * (local_80 - *pfVar1) +
          (local_78 - pfVar1[2]) * (local_78 - pfVar1[2]) <= pfVar1[6] * pfVar1[6])) {
        pfVar11 = (float *)(*(long *)(param_2 + 6) +
                           (ulong)*(ushort *)(lVar10 + (ulong)uVar7 * 0x20 + 4) * 0xc);
        *pfVar11 = local_80;
        pfVar11[1] = local_7c;
        pfVar11[2] = local_78;
        uVar5 = param_2[1];
        if (uVar5 != 0xffffffff) {
          lVar12 = *(long *)(param_2 + 8);
          lVar15 = (ulong)uVar7 * 0x20;
          puVar13 = (uint *)(lVar12 + (ulong)uVar5 * 0xc);
          uVar6 = puVar13[1];
          param_2[1] = uVar6;
          *puVar13 = uVar9;
          puVar13[2] = 0xff00;
          puVar13[1] = *(uint *)(lVar10 + lVar15);
          *(uint *)(lVar10 + lVar15) = uVar5;
          if (uVar6 != 0xffffffff) {
            puVar13 = (uint *)(lVar12 + (ulong)uVar6 * 0xc);
            lVar12 = *(long *)(param_2 + 4);
            param_2[1] = puVar13[1];
            uVar5 = *(uint *)(param_1 + 0x60);
            uVar7 = *(ushort *)(pfVar1 + 7);
            puVar13[2] = 0xffff;
            *puVar13 = iVar4 << (ulong)(iVar2 + uVar3 & 0x1f) |
                       (int)((ulong)((long)param_2 - lVar14) >> 3) * -0x3b13b13b <<
                       (ulong)(uVar3 & 0x1f) | (uint)uVar7;
            lVar10 = (ulong)(uVar9 & (1 << (ulong)(uVar5 & 0x1f)) - 1U & 0xffff) * 0x20;
            puVar13[1] = *(uint *)(lVar12 + lVar10);
            *(uint *)(lVar12 + lVar10) = uVar6;
          }
        }
      }
      lVar10 = *(long *)(param_2 + 2);
      lVar17 = lVar17 + 1;
      lVar16 = lVar16 + 0x24;
    } while (lVar17 < *(int *)(lVar10 + 0x34));
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ef2944(undefined8 param_1,long param_2,ulong param_3,float *param_4,float *param_5)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ushort *puVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  float *pfVar15;
  uint uVar16;
  byte *pbVar17;
  int *piVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float local_114;
  long local_110 [3];
  float afStack_f8 [6];
  float local_e0 [6];
  undefined8 local_c8;
  float afStack_c0 [20];
  
  lVar5 = tpidr_el0;
  lVar8 = *(long *)(lVar5 + 0x28);
  param_3 = param_3 & 0xffffffff;
  lVar19 = *(long *)(param_2 + 0x10);
  lVar1 = lVar19 + param_3 * 0x20;
  if ((*(byte *)(lVar1 + 0x1f) & 0xc0) == 0x40) {
    pfVar13 = (float *)(*(long *)(param_2 + 0x18) + (ulong)*(ushort *)(lVar1 + 4) * 0xc);
    pfVar15 = (float *)(*(long *)(param_2 + 0x18) + (ulong)*(ushort *)(lVar1 + 6) * 0xc);
    fVar20 = (float)FUN_00efa36c((*pfVar13 - *param_4) * (*pfVar13 - *param_4) +
                                 (pfVar13[1] - param_4[1]) * (pfVar13[1] - param_4[1]) +
                                 (pfVar13[2] - param_4[2]) * (pfVar13[2] - param_4[2]));
    fVar21 = (float)FUN_00efa36c((*pfVar15 - *param_4) * (*pfVar15 - *param_4) +
                                 (pfVar15[1] - param_4[1]) * (pfVar15[1] - param_4[1]) +
                                 (pfVar15[2] - param_4[2]) * (pfVar15[2] - param_4[2]));
    fVar20 = fVar20 / (fVar20 + fVar21);
    *param_5 = *pfVar13 + fVar20 * (*pfVar15 - *pfVar13);
    param_5[1] = pfVar13[1] + fVar20 * (pfVar15[1] - pfVar13[1]);
    param_5[2] = pfVar13[2] + fVar20 * (pfVar15[2] - pfVar13[2]);
  }
  else {
    lVar14 = *(long *)(param_2 + 0x28);
    bVar2 = *(byte *)(lVar1 + 0x1e);
    if (bVar2 != 0) {
      lVar9 = *(long *)(param_2 + 0x18);
      pfVar13 = afStack_c0;
      puVar11 = (ushort *)(lVar19 + param_3 * 0x20 + 4);
      uVar6 = (ulong)bVar2;
      do {
        uVar6 = uVar6 - 1;
        pfVar15 = (float *)(lVar9 + (ulong)*puVar11 * 0xc);
        pfVar13[-2] = *pfVar15;
        pfVar13[-1] = pfVar15[1];
        *pfVar13 = pfVar15[2];
        pfVar13 = pfVar13 + 3;
        puVar11 = puVar11 + 1;
      } while (uVar6 != 0);
    }
    *param_5 = *param_4;
    param_5[1] = param_4[1];
    param_5[2] = param_4[2];
    uVar6 = FUN_00efaa44(param_4,&local_c8,bVar2,local_e0,afStack_f8);
    if ((uVar6 & 1) == 0) {
      uVar16 = (uint)bVar2;
      if (uVar16 == 0) {
        iVar7 = -1;
      }
      else {
        fVar21 = 3.4028235e+38;
        uVar6 = 0;
        iVar7 = -1;
        do {
          fVar20 = local_e0[uVar6];
          iVar4 = (int)uVar6;
          if (fVar21 <= local_e0[uVar6]) {
            fVar20 = fVar21;
            iVar4 = iVar7;
          }
          iVar7 = iVar4;
          fVar21 = fVar20;
          uVar6 = uVar6 + 1;
        } while (bVar2 != uVar6);
      }
      iVar4 = 0;
      if (uVar16 != 0) {
        iVar4 = (iVar7 + 1) / (int)uVar16;
      }
      lVar9 = (long)(int)((iVar7 + 1) - iVar4 * uVar16);
      uVar22 = *(undefined8 *)((long)&local_c8 + (long)iVar7 * 0xc);
      uVar23 = *(undefined8 *)((long)&local_c8 + lVar9 * 0xc);
      fVar24 = local_e0[(long)iVar7 + -6];
      fVar21 = (float)uVar22;
      fVar20 = (float)((ulong)uVar22 >> 0x20);
      *(ulong *)param_5 =
           CONCAT44(fVar20 + ((float)((ulong)uVar23 >> 0x20) - fVar20) * fVar24,
                    fVar21 + ((float)uVar23 - fVar21) * fVar24);
      param_5[2] = afStack_c0[(long)iVar7 * 3] +
                   fVar24 * (afStack_c0[lVar9 * 3] - afStack_c0[(long)iVar7 * 3]);
    }
    pbVar17 = (byte *)(lVar14 + param_3 * 0xc + 9);
    if (*pbVar17 != 0) {
      piVar18 = (int *)(lVar14 + param_3 * 0xc);
      uVar16 = 0;
      do {
        iVar7 = piVar18[1];
        lVar9 = *(long *)(param_2 + 0x38);
        lVar14 = 0;
        bVar2 = *(byte *)(lVar1 + 0x1e);
        do {
          bVar3 = *(byte *)(lVar9 + (ulong)((iVar7 + uVar16) * 4) + lVar14);
          uVar10 = (uint)bVar2;
          if (bVar3 < uVar10) {
            lVar12 = *(long *)(param_2 + 0x18) +
                     (ulong)*(ushort *)(lVar19 + param_3 * 0x20 + (ulong)bVar3 * 2 + 4) * 0xc;
          }
          else {
            lVar12 = *(long *)(param_2 + 0x30) + (ulong)(((bVar3 - uVar10) + *piVar18) * 3) * 4;
          }
          local_110[lVar14] = lVar12;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 3);
        uVar6 = FUN_00efa8a0(param_4,local_110[0],local_110[1],local_110[2],&local_114);
        if ((uVar6 & 1) != 0) {
          param_5[1] = local_114;
          break;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < *pbVar17);
    }
  }
  if (*(long *)(lVar5 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

